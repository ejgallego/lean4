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
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
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
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqNDRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqSymm(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_replaceFVar(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "reverted variables "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__0 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__0_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__1;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after intro2 "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__2 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__2_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__3;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "after revert "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__4 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__4_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__5;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "subst"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__6 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(217, 29, 29, 32, 53, 17, 69, 167)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__7 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__7_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__8 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__8_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__9;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "' occurs at"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__10 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__10_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__11;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 47, .m_capacity = 47, .m_length = 46, .m_data = "invalid equality proof, it is not of the form "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__12 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__12_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__13;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\nafter WHNF, variable expected, but obtained"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__14 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__14_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__15;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__16 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__17 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__17_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__18_value_aux_0),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__17_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__18_value_aux_1),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__6_value),LEAN_SCALAR_PTR_LITERAL(60, 247, 229, 3, 213, 123, 220, 1)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__18 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__18_value;
static const lean_closure_object l_Lean_Meta_substCore___lam__3___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_substCore___lam__2___boxed, .m_arity = 6, .m_num_fixed = 1, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__18_value)} };
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__19 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__19_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "substituting "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__20 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__20_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__21_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__21;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " (id: "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__22 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__22_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__23;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ") with "};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__24 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__24_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__25_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__25;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(x = t)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__26 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__26_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "(t = x)"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__27 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__27_value;
static const lean_string_object l_Lean_Meta_substCore___lam__3___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "argument must be an equality proof"};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__28 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__28_value;
static const lean_ctor_object l_Lean_Meta_substCore___lam__3___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__28_value)}};
static const lean_object* l_Lean_Meta_substCore___lam__3___closed__29 = (const lean_object*)&l_Lean_Meta_substCore___lam__3___closed__29_value;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__30;
static lean_once_cell_t l_Lean_Meta_substCore___lam__3___closed__31_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_substCore___lam__3___closed__31;
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
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
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__17_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Subst"};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(99, 155, 87, 188, 107, 213, 207, 175)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(46, 207, 184, 108, 123, 194, 122, 15)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(87, 208, 80, 10, 197, 128, 95, 79)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value),LEAN_SCALAR_PTR_LITERAL(7, 62, 56, 132, 111, 90, 85, 225)}};
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
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__16_value),LEAN_SCALAR_PTR_LITERAL(254, 30, 149, 183, 84, 179, 28, 215)}};
static const lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_substCore___lam__3___closed__17_value),LEAN_SCALAR_PTR_LITERAL(99, 160, 169, 64, 171, 126, 88, 158)}};
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
lean_object* v___f_130_; lean_object* v___x_25748__overap_131_; lean_object* v___x_132_; 
v___f_130_ = ((lean_object*)(l_panic___at___00Lean_Meta_substCore_spec__6___closed__0));
v___x_25748__overap_131_ = lean_panic_fn_borrowed(v___f_130_, v_msg_124_);
lean_inc(v___y_128_);
lean_inc_ref(v___y_127_);
lean_inc(v___y_126_);
lean_inc_ref(v___y_125_);
v___x_132_ = lean_apply_5(v___x_25748__overap_131_, v___y_125_, v___y_126_, v___y_127_, v___y_128_, lean_box(0));
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
uint8_t v___x_28204__boxed_222_; uint8_t v___x_28205__boxed_223_; lean_object* v_res_224_; 
v___x_28204__boxed_222_ = lean_unbox(v___x_214_);
v___x_28205__boxed_223_ = lean_unbox(v___x_215_);
v_res_224_ = l_Lean_Meta_substCore___lam__0(v_type_210_, v___x_211_, v___x_212_, v___x_213_, v___x_28204__boxed_222_, v___x_28205__boxed_223_, v_hAux_216_, v___y_217_, v___y_218_, v___y_219_, v___y_220_);
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
size_t v_x_28325__boxed_364_; size_t v_x_28326__boxed_365_; lean_object* v_res_366_; 
v_x_28325__boxed_364_ = lean_unbox_usize(v_x_360_);
lean_dec(v_x_360_);
v_x_28326__boxed_365_ = lean_unbox_usize(v_x_361_);
lean_dec(v_x_361_);
v_res_366_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_359_, v_x_28325__boxed_364_, v_x_28326__boxed_365_, v_x_362_, v_x_363_);
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
lean_object* v___y_662_; lean_object* v___y_663_; lean_object* v___y_664_; lean_object* v___y_670_; lean_object* v___y_671_; lean_object* v___y_672_; lean_object* v___y_673_; lean_object* v___y_674_; lean_object* v___y_675_; lean_object* v___y_676_; lean_object* v___y_682_; lean_object* v_mvarId_683_; lean_object* v___y_684_; lean_object* v___y_685_; lean_object* v___y_686_; lean_object* v___y_687_; lean_object* v___y_736_; lean_object* v___y_737_; lean_object* v_newVal_738_; lean_object* v___y_739_; lean_object* v___y_740_; lean_object* v___y_741_; lean_object* v___y_742_; lean_object* v___y_766_; lean_object* v___y_767_; lean_object* v___y_768_; uint8_t v___y_769_; lean_object* v_major_770_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_807_; uint8_t v___y_808_; lean_object* v_motive_809_; lean_object* v_newType_810_; lean_object* v___x_821_; 
lean_inc(v_snd_649_);
v___x_821_ = l_Lean_MVarId_getDecl(v_snd_649_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_821_) == 0)
{
lean_object* v_a_822_; lean_object* v_type_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___f_826_; lean_object* v___x_827_; 
v_a_822_ = lean_ctor_get(v___x_821_, 0);
lean_inc(v_a_822_);
lean_dec_ref_known(v___x_821_, 1);
v_type_823_ = lean_ctor_get(v_a_822_, 2);
lean_inc_ref_n(v_type_823_, 2);
lean_dec(v_a_822_);
v___x_824_ = lean_box(v___x_654_);
v___x_825_ = lean_box(v___x_647_);
lean_inc_ref(v___x_643_);
lean_inc(v___x_644_);
lean_inc_ref(v___x_639_);
v___f_826_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__0___boxed), 12, 6);
lean_closure_set(v___f_826_, 0, v_type_823_);
lean_closure_set(v___f_826_, 1, v___x_639_);
lean_closure_set(v___f_826_, 2, v___x_644_);
lean_closure_set(v___f_826_, 3, v___x_643_);
lean_closure_set(v___f_826_, 4, v___x_824_);
lean_closure_set(v___f_826_, 5, v___x_825_);
lean_inc(v___x_650_);
v___x_827_ = l_Lean_FVarId_getDecl___redArg(v___x_650_, v___y_656_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_object* v_a_828_; lean_object* v___x_829_; lean_object* v___x_830_; 
v_a_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_a_828_);
lean_dec_ref_known(v___x_827_, 1);
v___x_829_ = l_Lean_LocalDecl_type(v_a_828_);
lean_dec(v_a_828_);
v___x_830_ = l_Lean_Meta_matchEq_x3f(v___x_829_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_830_) == 0)
{
lean_object* v_a_831_; lean_object* v___y_833_; 
v_a_831_ = lean_ctor_get(v___x_830_, 0);
lean_inc(v_a_831_);
lean_dec_ref_known(v___x_830_, 1);
if (lean_obj_tag(v_a_831_) == 0)
{
lean_object* v___x_903_; lean_object* v___x_904_; 
lean_dec_ref(v___f_826_);
lean_dec_ref(v_type_823_);
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
v___x_903_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__11, &l_Lean_Meta_substCore___lam__1___closed__11_once, _init_l_Lean_Meta_substCore___lam__1___closed__11);
v___x_904_ = l_panic___at___00Lean_Meta_substCore_spec__6(v___x_903_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
return v___x_904_;
}
else
{
lean_object* v_val_905_; lean_object* v_snd_906_; 
v_val_905_ = lean_ctor_get(v_a_831_, 0);
lean_inc(v_val_905_);
lean_dec_ref_known(v_a_831_, 1);
v_snd_906_ = lean_ctor_get(v_val_905_, 1);
lean_inc(v_snd_906_);
lean_dec(v_val_905_);
if (v_symm_653_ == 0)
{
lean_object* v_snd_907_; 
v_snd_907_ = lean_ctor_get(v_snd_906_, 1);
lean_inc(v_snd_907_);
lean_dec(v_snd_906_);
v___y_833_ = v_snd_907_;
goto v___jp_832_;
}
else
{
lean_object* v_fst_908_; 
v_fst_908_ = lean_ctor_get(v_snd_906_, 0);
lean_inc(v_fst_908_);
lean_dec(v_snd_906_);
v___y_833_ = v_fst_908_;
goto v___jp_832_;
}
}
v___jp_832_:
{
lean_object* v___x_834_; lean_object* v_a_835_; lean_object* v___x_836_; lean_object* v_a_837_; uint8_t v___x_838_; 
v___x_834_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_833_, v___y_657_);
v_a_835_ = lean_ctor_get(v___x_834_, 0);
lean_inc(v_a_835_);
lean_dec_ref(v___x_834_);
lean_inc(v___x_650_);
lean_inc_ref(v_type_823_);
v___x_836_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_type_823_, v___x_650_, v___y_657_);
v_a_837_ = lean_ctor_get(v___x_836_, 0);
lean_inc(v_a_837_);
lean_dec_ref(v___x_836_);
v___x_838_ = lean_unbox(v_a_837_);
if (v___x_838_ == 0)
{
lean_object* v___x_839_; lean_object* v___x_840_; uint8_t v___x_841_; lean_object* v___x_842_; 
lean_dec_ref(v___f_826_);
v___x_839_ = lean_mk_empty_array_with_capacity(v___x_655_);
lean_inc_ref(v___x_643_);
v___x_840_ = lean_array_push(v___x_839_, v___x_643_);
v___x_841_ = 1;
lean_inc_ref(v_type_823_);
v___x_842_ = l_Lean_Meta_mkLambdaFVars(v___x_840_, v_type_823_, v___x_654_, v___x_647_, v___x_654_, v___x_647_, v___x_841_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec_ref(v___x_840_);
if (lean_obj_tag(v___x_842_) == 0)
{
lean_object* v_a_843_; lean_object* v___x_844_; uint8_t v___x_845_; 
v_a_843_ = lean_ctor_get(v___x_842_, 0);
lean_inc(v_a_843_);
lean_dec_ref_known(v___x_842_, 1);
lean_inc_ref(v___x_643_);
v___x_844_ = l_Lean_Expr_replaceFVar(v_type_823_, v___x_643_, v_a_835_);
lean_dec_ref(v_type_823_);
v___x_845_ = lean_unbox(v_a_837_);
lean_dec(v_a_837_);
v___y_807_ = v_a_835_;
v___y_808_ = v___x_845_;
v_motive_809_ = v_a_843_;
v_newType_810_ = v___x_844_;
goto v___jp_806_;
}
else
{
lean_object* v_a_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_853_; 
lean_dec(v_a_837_);
lean_dec(v_a_835_);
lean_dec_ref(v_type_823_);
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
v_a_846_ = lean_ctor_get(v___x_842_, 0);
v_isSharedCheck_853_ = !lean_is_exclusive(v___x_842_);
if (v_isSharedCheck_853_ == 0)
{
v___x_848_ = v___x_842_;
v_isShared_849_ = v_isSharedCheck_853_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_a_846_);
lean_dec(v___x_842_);
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
lean_object* v___x_854_; lean_object* v___x_855_; 
lean_inc_ref(v___x_643_);
v___x_854_ = l_Lean_Expr_replaceFVar(v_type_823_, v___x_643_, v_a_835_);
lean_inc(v_a_835_);
v___x_855_ = l_Lean_Meta_mkEqRefl(v_a_835_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_855_) == 0)
{
lean_object* v_a_856_; lean_object* v___x_857_; 
v_a_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_a_856_);
lean_dec_ref_known(v___x_855_, 1);
lean_inc_ref(v___x_639_);
v___x_857_ = l_Lean_Expr_replaceFVar(v___x_854_, v___x_639_, v_a_856_);
lean_dec(v_a_856_);
lean_dec_ref(v___x_854_);
if (v_symm_653_ == 0)
{
lean_object* v___x_858_; 
lean_dec_ref(v_type_823_);
lean_inc_ref(v___x_643_);
lean_inc(v_a_835_);
v___x_858_ = l_Lean_Meta_mkEq(v_a_835_, v___x_643_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_858_) == 0)
{
lean_object* v_a_859_; lean_object* v___x_860_; lean_object* v___x_861_; 
v_a_859_ = lean_ctor_get(v___x_858_, 0);
lean_inc(v_a_859_);
lean_dec_ref_known(v___x_858_, 1);
v___x_860_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__7));
v___x_861_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v___x_860_, v_a_859_, v___f_826_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_861_) == 0)
{
lean_object* v_a_862_; uint8_t v___x_863_; 
v_a_862_ = lean_ctor_get(v___x_861_, 0);
lean_inc(v_a_862_);
lean_dec_ref_known(v___x_861_, 1);
v___x_863_ = lean_unbox(v_a_837_);
lean_dec(v_a_837_);
v___y_807_ = v_a_835_;
v___y_808_ = v___x_863_;
v_motive_809_ = v_a_862_;
v_newType_810_ = v___x_857_;
goto v___jp_806_;
}
else
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_871_; 
lean_dec_ref(v___x_857_);
lean_dec(v_a_837_);
lean_dec(v_a_835_);
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
v_a_864_ = lean_ctor_get(v___x_861_, 0);
v_isSharedCheck_871_ = !lean_is_exclusive(v___x_861_);
if (v_isSharedCheck_871_ == 0)
{
v___x_866_ = v___x_861_;
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_861_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_871_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v___x_869_; 
if (v_isShared_867_ == 0)
{
v___x_869_ = v___x_866_;
goto v_reusejp_868_;
}
else
{
lean_object* v_reuseFailAlloc_870_; 
v_reuseFailAlloc_870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_870_, 0, v_a_864_);
v___x_869_ = v_reuseFailAlloc_870_;
goto v_reusejp_868_;
}
v_reusejp_868_:
{
return v___x_869_;
}
}
}
}
else
{
lean_object* v_a_872_; lean_object* v___x_874_; uint8_t v_isShared_875_; uint8_t v_isSharedCheck_879_; 
lean_dec_ref(v___x_857_);
lean_dec(v_a_837_);
lean_dec(v_a_835_);
lean_dec_ref(v___f_826_);
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
v_a_872_ = lean_ctor_get(v___x_858_, 0);
v_isSharedCheck_879_ = !lean_is_exclusive(v___x_858_);
if (v_isSharedCheck_879_ == 0)
{
v___x_874_ = v___x_858_;
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
else
{
lean_inc(v_a_872_);
lean_dec(v___x_858_);
v___x_874_ = lean_box(0);
v_isShared_875_ = v_isSharedCheck_879_;
goto v_resetjp_873_;
}
v_resetjp_873_:
{
lean_object* v___x_877_; 
if (v_isShared_875_ == 0)
{
v___x_877_ = v___x_874_;
goto v_reusejp_876_;
}
else
{
lean_object* v_reuseFailAlloc_878_; 
v_reuseFailAlloc_878_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_878_, 0, v_a_872_);
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
lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; uint8_t v___x_883_; lean_object* v___x_884_; 
lean_dec_ref(v___f_826_);
v___x_880_ = lean_mk_empty_array_with_capacity(v___x_644_);
lean_inc_ref(v___x_643_);
v___x_881_ = lean_array_push(v___x_880_, v___x_643_);
lean_inc_ref(v___x_639_);
v___x_882_ = lean_array_push(v___x_881_, v___x_639_);
v___x_883_ = 1;
v___x_884_ = l_Lean_Meta_mkLambdaFVars(v___x_882_, v_type_823_, v___x_654_, v___x_647_, v___x_654_, v___x_647_, v___x_883_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
lean_dec_ref(v___x_882_);
if (lean_obj_tag(v___x_884_) == 0)
{
lean_object* v_a_885_; uint8_t v___x_886_; 
v_a_885_ = lean_ctor_get(v___x_884_, 0);
lean_inc(v_a_885_);
lean_dec_ref_known(v___x_884_, 1);
v___x_886_ = lean_unbox(v_a_837_);
lean_dec(v_a_837_);
v___y_807_ = v_a_835_;
v___y_808_ = v___x_886_;
v_motive_809_ = v_a_885_;
v_newType_810_ = v___x_857_;
goto v___jp_806_;
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
lean_dec_ref(v___x_857_);
lean_dec(v_a_837_);
lean_dec(v_a_835_);
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
v_a_887_ = lean_ctor_get(v___x_884_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_884_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_884_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_884_);
v___x_889_ = lean_box(0);
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
v_resetjp_888_:
{
lean_object* v___x_892_; 
if (v_isShared_890_ == 0)
{
v___x_892_ = v___x_889_;
goto v_reusejp_891_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_a_887_);
v___x_892_ = v_reuseFailAlloc_893_;
goto v_reusejp_891_;
}
v_reusejp_891_:
{
return v___x_892_;
}
}
}
}
}
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec_ref(v___x_854_);
lean_dec(v_a_837_);
lean_dec(v_a_835_);
lean_dec_ref(v___f_826_);
lean_dec_ref(v_type_823_);
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
v_a_895_ = lean_ctor_get(v___x_855_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_855_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_855_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_855_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
lean_object* v___x_900_; 
if (v_isShared_898_ == 0)
{
v___x_900_ = v___x_897_;
goto v_reusejp_899_;
}
else
{
lean_object* v_reuseFailAlloc_901_; 
v_reuseFailAlloc_901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_901_, 0, v_a_895_);
v___x_900_ = v_reuseFailAlloc_901_;
goto v_reusejp_899_;
}
v_reusejp_899_:
{
return v___x_900_;
}
}
}
}
}
}
else
{
lean_object* v_a_909_; lean_object* v___x_911_; uint8_t v_isShared_912_; uint8_t v_isSharedCheck_916_; 
lean_dec_ref(v___f_826_);
lean_dec_ref(v_type_823_);
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
v_a_909_ = lean_ctor_get(v___x_830_, 0);
v_isSharedCheck_916_ = !lean_is_exclusive(v___x_830_);
if (v_isSharedCheck_916_ == 0)
{
v___x_911_ = v___x_830_;
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
else
{
lean_inc(v_a_909_);
lean_dec(v___x_830_);
v___x_911_ = lean_box(0);
v_isShared_912_ = v_isSharedCheck_916_;
goto v_resetjp_910_;
}
v_resetjp_910_:
{
lean_object* v___x_914_; 
if (v_isShared_912_ == 0)
{
v___x_914_ = v___x_911_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_915_; 
v_reuseFailAlloc_915_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_915_, 0, v_a_909_);
v___x_914_ = v_reuseFailAlloc_915_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
return v___x_914_;
}
}
}
}
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec_ref(v___f_826_);
lean_dec_ref(v_type_823_);
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
v_a_917_ = lean_ctor_get(v___x_827_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_827_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_827_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_827_);
v___x_919_ = lean_box(0);
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
v_resetjp_918_:
{
lean_object* v___x_922_; 
if (v_isShared_920_ == 0)
{
v___x_922_ = v___x_919_;
goto v_reusejp_921_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_a_917_);
v___x_922_ = v_reuseFailAlloc_923_;
goto v_reusejp_921_;
}
v_reusejp_921_:
{
return v___x_922_;
}
}
}
}
else
{
lean_object* v_a_925_; lean_object* v___x_927_; uint8_t v_isShared_928_; uint8_t v_isSharedCheck_932_; 
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
v_a_925_ = lean_ctor_get(v___x_821_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_821_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_821_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_821_);
v___x_927_ = lean_box(0);
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
v_resetjp_926_:
{
lean_object* v___x_930_; 
if (v_isShared_928_ == 0)
{
v___x_930_ = v___x_927_;
goto v_reusejp_929_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v_a_925_);
v___x_930_ = v_reuseFailAlloc_931_;
goto v_reusejp_929_;
}
v_reusejp_929_:
{
return v___x_930_;
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
lean_object* v___x_677_; lean_object* v___x_678_; 
v___x_677_ = lean_array_get_size(v___y_670_);
v___x_678_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_640_, v___y_670_, v___x_677_, v___x_677_, v_fvarSubst_641_);
lean_dec_ref(v___y_670_);
if (v_clearH_642_ == 0)
{
lean_object* v_a_679_; 
lean_dec_ref(v___y_672_);
v_a_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc(v_a_679_);
lean_dec_ref(v___x_678_);
v___y_662_ = v___y_671_;
v___y_663_ = v_a_679_;
v___y_664_ = v___x_643_;
goto v___jp_661_;
}
else
{
lean_object* v_a_680_; 
lean_dec_ref(v___x_643_);
v_a_680_ = lean_ctor_get(v___x_678_, 0);
lean_inc(v_a_680_);
lean_dec_ref(v___x_678_);
v___y_662_ = v___y_671_;
v___y_663_ = v_a_680_;
v___y_664_ = v___y_672_;
goto v___jp_661_;
}
}
v___jp_681_:
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_688_ = lean_array_get_size(v_fst_640_);
v___x_689_ = lean_nat_sub(v___x_688_, v___x_644_);
lean_dec(v___x_644_);
lean_inc(v___x_689_);
v___x_690_ = l_Lean_Meta_introNCore(v_mvarId_683_, v___x_689_, v___x_645_, v_skip_646_, v___x_647_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
if (lean_obj_tag(v___x_690_) == 0)
{
lean_object* v_a_691_; lean_object* v_toCold_692_; lean_object* v_options_693_; uint8_t v_hasTrace_694_; 
v_a_691_ = lean_ctor_get(v___x_690_, 0);
lean_inc(v_a_691_);
lean_dec_ref_known(v___x_690_, 1);
v_toCold_692_ = lean_ctor_get(v___y_686_, 0);
v_options_693_ = lean_ctor_get(v_toCold_692_, 2);
v_hasTrace_694_ = lean_ctor_get_uint8(v_options_693_, sizeof(void*)*1);
if (v_hasTrace_694_ == 0)
{
lean_object* v_fst_695_; lean_object* v_snd_696_; 
lean_dec(v___x_689_);
lean_dec(v___x_648_);
v_fst_695_ = lean_ctor_get(v_a_691_, 0);
lean_inc(v_fst_695_);
v_snd_696_ = lean_ctor_get(v_a_691_, 1);
lean_inc(v_snd_696_);
lean_dec(v_a_691_);
v___y_670_ = v_fst_695_;
v___y_671_ = v_snd_696_;
v___y_672_ = v___y_682_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_685_;
v___y_675_ = v___y_686_;
v___y_676_ = v___y_687_;
goto v___jp_669_;
}
else
{
lean_object* v_fst_697_; lean_object* v_snd_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_726_; 
v_fst_697_ = lean_ctor_get(v_a_691_, 0);
v_snd_698_ = lean_ctor_get(v_a_691_, 1);
v_isSharedCheck_726_ = !lean_is_exclusive(v_a_691_);
if (v_isSharedCheck_726_ == 0)
{
v___x_700_ = v_a_691_;
v_isShared_701_ = v_isSharedCheck_726_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_snd_698_);
lean_inc(v_fst_697_);
lean_dec(v_a_691_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_726_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v_inheritedTraceOptions_702_; lean_object* v___x_703_; lean_object* v___x_704_; uint8_t v___x_705_; 
v_inheritedTraceOptions_702_ = lean_ctor_get(v_toCold_692_, 11);
v___x_703_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
lean_inc(v___x_648_);
v___x_704_ = l_Lean_Name_append(v___x_703_, v___x_648_);
v___x_705_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_702_, v_options_693_, v___x_704_);
lean_dec(v___x_704_);
if (v___x_705_ == 0)
{
lean_del_object(v___x_700_);
lean_dec(v___x_689_);
lean_dec(v___x_648_);
v___y_670_ = v_fst_697_;
v___y_671_ = v_snd_698_;
v___y_672_ = v___y_682_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_685_;
v___y_675_ = v___y_686_;
v___y_676_ = v___y_687_;
goto v___jp_669_;
}
else
{
lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_711_; 
v___x_706_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__3, &l_Lean_Meta_substCore___lam__1___closed__3_once, _init_l_Lean_Meta_substCore___lam__1___closed__3);
v___x_707_ = l_Nat_reprFast(v___x_689_);
v___x_708_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_708_, 0, v___x_707_);
v___x_709_ = l_Lean_MessageData_ofFormat(v___x_708_);
if (v_isShared_701_ == 0)
{
lean_ctor_set_tag(v___x_700_, 7);
lean_ctor_set(v___x_700_, 1, v___x_709_);
lean_ctor_set(v___x_700_, 0, v___x_706_);
v___x_711_ = v___x_700_;
goto v_reusejp_710_;
}
else
{
lean_object* v_reuseFailAlloc_725_; 
v_reuseFailAlloc_725_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_725_, 0, v___x_706_);
lean_ctor_set(v_reuseFailAlloc_725_, 1, v___x_709_);
v___x_711_ = v_reuseFailAlloc_725_;
goto v_reusejp_710_;
}
v_reusejp_710_:
{
lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_712_ = lean_obj_once(&l_Lean_Meta_substCore___lam__1___closed__5, &l_Lean_Meta_substCore___lam__1___closed__5_once, _init_l_Lean_Meta_substCore___lam__1___closed__5);
v___x_713_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_711_);
lean_ctor_set(v___x_713_, 1, v___x_712_);
lean_inc(v_snd_698_);
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v_snd_698_);
v___x_715_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_713_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_648_, v___x_715_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
if (lean_obj_tag(v___x_716_) == 0)
{
lean_dec_ref_known(v___x_716_, 1);
v___y_670_ = v_fst_697_;
v___y_671_ = v_snd_698_;
v___y_672_ = v___y_682_;
v___y_673_ = v___y_684_;
v___y_674_ = v___y_685_;
v___y_675_ = v___y_686_;
v___y_676_ = v___y_687_;
goto v___jp_669_;
}
else
{
lean_object* v_a_717_; lean_object* v___x_719_; uint8_t v_isShared_720_; uint8_t v_isSharedCheck_724_; 
lean_dec(v_snd_698_);
lean_dec(v_fst_697_);
lean_dec_ref(v___y_682_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_717_ = lean_ctor_get(v___x_716_, 0);
v_isSharedCheck_724_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_724_ == 0)
{
v___x_719_ = v___x_716_;
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
else
{
lean_inc(v_a_717_);
lean_dec(v___x_716_);
v___x_719_ = lean_box(0);
v_isShared_720_ = v_isSharedCheck_724_;
goto v_resetjp_718_;
}
v_resetjp_718_:
{
lean_object* v___x_722_; 
if (v_isShared_720_ == 0)
{
v___x_722_ = v___x_719_;
goto v_reusejp_721_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_a_717_);
v___x_722_ = v_reuseFailAlloc_723_;
goto v_reusejp_721_;
}
v_reusejp_721_:
{
return v___x_722_;
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
lean_object* v_a_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_734_; 
lean_dec(v___x_689_);
lean_dec_ref(v___y_682_);
lean_dec(v___x_648_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_727_ = lean_ctor_get(v___x_690_, 0);
v_isSharedCheck_734_ = !lean_is_exclusive(v___x_690_);
if (v_isSharedCheck_734_ == 0)
{
v___x_729_ = v___x_690_;
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_a_727_);
lean_dec(v___x_690_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_734_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v___x_732_; 
if (v_isShared_730_ == 0)
{
v___x_732_ = v___x_729_;
goto v_reusejp_731_;
}
else
{
lean_object* v_reuseFailAlloc_733_; 
v_reuseFailAlloc_733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_733_, 0, v_a_727_);
v___x_732_ = v_reuseFailAlloc_733_;
goto v_reusejp_731_;
}
v_reusejp_731_:
{
return v___x_732_;
}
}
}
}
v___jp_735_:
{
lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_743_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_snd_649_, v_newVal_738_, v___y_740_);
lean_dec_ref(v___x_743_);
v___x_744_ = l_Lean_Expr_mvarId_x21(v___y_737_);
lean_dec_ref(v___y_737_);
if (v_clearH_642_ == 0)
{
lean_dec(v___x_651_);
lean_dec(v___x_650_);
v___y_682_ = v___y_736_;
v_mvarId_683_ = v___x_744_;
v___y_684_ = v___y_739_;
v___y_685_ = v___y_740_;
v___y_686_ = v___y_741_;
v___y_687_ = v___y_742_;
goto v___jp_681_;
}
else
{
lean_object* v___x_745_; 
v___x_745_ = l_Lean_MVarId_clear(v___x_744_, v___x_650_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
if (lean_obj_tag(v___x_745_) == 0)
{
lean_object* v_a_746_; lean_object* v___x_747_; 
v_a_746_ = lean_ctor_get(v___x_745_, 0);
lean_inc(v_a_746_);
lean_dec_ref_known(v___x_745_, 1);
v___x_747_ = l_Lean_MVarId_clear(v_a_746_, v___x_651_, v___y_739_, v___y_740_, v___y_741_, v___y_742_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
v___y_682_ = v___y_736_;
v_mvarId_683_ = v_a_748_;
v___y_684_ = v___y_739_;
v___y_685_ = v___y_740_;
v___y_686_ = v___y_741_;
v___y_687_ = v___y_742_;
goto v___jp_681_;
}
else
{
lean_object* v_a_749_; lean_object* v___x_751_; uint8_t v_isShared_752_; uint8_t v_isSharedCheck_756_; 
lean_dec_ref(v___y_736_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_749_ = lean_ctor_get(v___x_747_, 0);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_747_);
if (v_isSharedCheck_756_ == 0)
{
v___x_751_ = v___x_747_;
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
else
{
lean_inc(v_a_749_);
lean_dec(v___x_747_);
v___x_751_ = lean_box(0);
v_isShared_752_ = v_isSharedCheck_756_;
goto v_resetjp_750_;
}
v_resetjp_750_:
{
lean_object* v___x_754_; 
if (v_isShared_752_ == 0)
{
v___x_754_ = v___x_751_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_a_749_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
}
else
{
lean_object* v_a_757_; lean_object* v___x_759_; uint8_t v_isShared_760_; uint8_t v_isSharedCheck_764_; 
lean_dec_ref(v___y_736_);
lean_dec(v___x_651_);
lean_dec(v___x_648_);
lean_dec(v___x_645_);
lean_dec(v___x_644_);
lean_dec_ref(v___x_643_);
lean_dec(v_fvarSubst_641_);
lean_dec_ref(v___x_639_);
lean_dec(v_hFVarId_638_);
lean_dec(v_fvarId_637_);
v_a_757_ = lean_ctor_get(v___x_745_, 0);
v_isSharedCheck_764_ = !lean_is_exclusive(v___x_745_);
if (v_isSharedCheck_764_ == 0)
{
v___x_759_ = v___x_745_;
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
else
{
lean_inc(v_a_757_);
lean_dec(v___x_745_);
v___x_759_ = lean_box(0);
v_isShared_760_ = v_isSharedCheck_764_;
goto v_resetjp_758_;
}
v_resetjp_758_:
{
lean_object* v___x_762_; 
if (v_isShared_760_ == 0)
{
v___x_762_ = v___x_759_;
goto v_reusejp_761_;
}
else
{
lean_object* v_reuseFailAlloc_763_; 
v_reuseFailAlloc_763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_763_, 0, v_a_757_);
v___x_762_ = v_reuseFailAlloc_763_;
goto v_reusejp_761_;
}
v_reusejp_761_:
{
return v___x_762_;
}
}
}
}
}
v___jp_765_:
{
lean_object* v___x_775_; 
v___x_775_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___y_766_, v_a_652_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
if (lean_obj_tag(v___x_775_) == 0)
{
if (v___y_769_ == 0)
{
lean_object* v_a_776_; lean_object* v___x_777_; 
v_a_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc_n(v_a_776_, 2);
lean_dec_ref_known(v___x_775_, 1);
v___x_777_ = l_Lean_Meta_mkEqNDRec(v___y_768_, v_a_776_, v_major_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
if (lean_obj_tag(v___x_777_) == 0)
{
lean_object* v_a_778_; 
v_a_778_ = lean_ctor_get(v___x_777_, 0);
lean_inc(v_a_778_);
lean_dec_ref_known(v___x_777_, 1);
v___y_736_ = v___y_767_;
v___y_737_ = v_a_776_;
v_newVal_738_ = v_a_778_;
v___y_739_ = v___y_771_;
v___y_740_ = v___y_772_;
v___y_741_ = v___y_773_;
v___y_742_ = v___y_774_;
goto v___jp_735_;
}
else
{
lean_object* v_a_779_; lean_object* v___x_781_; uint8_t v_isShared_782_; uint8_t v_isSharedCheck_786_; 
lean_dec(v_a_776_);
lean_dec_ref(v___y_767_);
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
v_a_779_ = lean_ctor_get(v___x_777_, 0);
v_isSharedCheck_786_ = !lean_is_exclusive(v___x_777_);
if (v_isSharedCheck_786_ == 0)
{
v___x_781_ = v___x_777_;
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
else
{
lean_inc(v_a_779_);
lean_dec(v___x_777_);
v___x_781_ = lean_box(0);
v_isShared_782_ = v_isSharedCheck_786_;
goto v_resetjp_780_;
}
v_resetjp_780_:
{
lean_object* v___x_784_; 
if (v_isShared_782_ == 0)
{
v___x_784_ = v___x_781_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_785_; 
v_reuseFailAlloc_785_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_785_, 0, v_a_779_);
v___x_784_ = v_reuseFailAlloc_785_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
return v___x_784_;
}
}
}
}
else
{
lean_object* v_a_787_; lean_object* v___x_788_; 
v_a_787_ = lean_ctor_get(v___x_775_, 0);
lean_inc_n(v_a_787_, 2);
lean_dec_ref_known(v___x_775_, 1);
v___x_788_ = l_Lean_Meta_mkEqRec(v___y_768_, v_a_787_, v_major_770_, v___y_771_, v___y_772_, v___y_773_, v___y_774_);
if (lean_obj_tag(v___x_788_) == 0)
{
lean_object* v_a_789_; 
v_a_789_ = lean_ctor_get(v___x_788_, 0);
lean_inc(v_a_789_);
lean_dec_ref_known(v___x_788_, 1);
v___y_736_ = v___y_767_;
v___y_737_ = v_a_787_;
v_newVal_738_ = v_a_789_;
v___y_739_ = v___y_771_;
v___y_740_ = v___y_772_;
v___y_741_ = v___y_773_;
v___y_742_ = v___y_774_;
goto v___jp_735_;
}
else
{
lean_object* v_a_790_; lean_object* v___x_792_; uint8_t v_isShared_793_; uint8_t v_isSharedCheck_797_; 
lean_dec(v_a_787_);
lean_dec_ref(v___y_767_);
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
v_a_790_ = lean_ctor_get(v___x_788_, 0);
v_isSharedCheck_797_ = !lean_is_exclusive(v___x_788_);
if (v_isSharedCheck_797_ == 0)
{
v___x_792_ = v___x_788_;
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
else
{
lean_inc(v_a_790_);
lean_dec(v___x_788_);
v___x_792_ = lean_box(0);
v_isShared_793_ = v_isSharedCheck_797_;
goto v_resetjp_791_;
}
v_resetjp_791_:
{
lean_object* v___x_795_; 
if (v_isShared_793_ == 0)
{
v___x_795_ = v___x_792_;
goto v_reusejp_794_;
}
else
{
lean_object* v_reuseFailAlloc_796_; 
v_reuseFailAlloc_796_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_796_, 0, v_a_790_);
v___x_795_ = v_reuseFailAlloc_796_;
goto v_reusejp_794_;
}
v_reusejp_794_:
{
return v___x_795_;
}
}
}
}
}
else
{
lean_object* v_a_798_; lean_object* v___x_800_; uint8_t v_isShared_801_; uint8_t v_isSharedCheck_805_; 
lean_dec_ref(v_major_770_);
lean_dec_ref(v___y_768_);
lean_dec_ref(v___y_767_);
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
v_a_798_ = lean_ctor_get(v___x_775_, 0);
v_isSharedCheck_805_ = !lean_is_exclusive(v___x_775_);
if (v_isSharedCheck_805_ == 0)
{
v___x_800_ = v___x_775_;
v_isShared_801_ = v_isSharedCheck_805_;
goto v_resetjp_799_;
}
else
{
lean_inc(v_a_798_);
lean_dec(v___x_775_);
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
if (v_symm_653_ == 0)
{
lean_object* v___x_811_; 
lean_inc_ref(v___x_639_);
v___x_811_ = l_Lean_Meta_mkEqSymm(v___x_639_, v___y_656_, v___y_657_, v___y_658_, v___y_659_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v_a_812_; 
v_a_812_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_a_812_);
lean_dec_ref_known(v___x_811_, 1);
v___y_766_ = v_newType_810_;
v___y_767_ = v___y_807_;
v___y_768_ = v_motive_809_;
v___y_769_ = v___y_808_;
v_major_770_ = v_a_812_;
v___y_771_ = v___y_656_;
v___y_772_ = v___y_657_;
v___y_773_ = v___y_658_;
v___y_774_ = v___y_659_;
goto v___jp_765_;
}
else
{
lean_object* v_a_813_; lean_object* v___x_815_; uint8_t v_isShared_816_; uint8_t v_isSharedCheck_820_; 
lean_dec_ref(v_newType_810_);
lean_dec_ref(v_motive_809_);
lean_dec_ref(v___y_807_);
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
v_a_813_ = lean_ctor_get(v___x_811_, 0);
v_isSharedCheck_820_ = !lean_is_exclusive(v___x_811_);
if (v_isSharedCheck_820_ == 0)
{
v___x_815_ = v___x_811_;
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
else
{
lean_inc(v_a_813_);
lean_dec(v___x_811_);
v___x_815_ = lean_box(0);
v_isShared_816_ = v_isSharedCheck_820_;
goto v_resetjp_814_;
}
v_resetjp_814_:
{
lean_object* v___x_818_; 
if (v_isShared_816_ == 0)
{
v___x_818_ = v___x_815_;
goto v_reusejp_817_;
}
else
{
lean_object* v_reuseFailAlloc_819_; 
v_reuseFailAlloc_819_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_819_, 0, v_a_813_);
v___x_818_ = v_reuseFailAlloc_819_;
goto v_reusejp_817_;
}
v_reusejp_817_:
{
return v___x_818_;
}
}
}
}
else
{
lean_inc_ref(v___x_639_);
v___y_766_ = v_newType_810_;
v___y_767_ = v___y_807_;
v___y_768_ = v_motive_809_;
v___y_769_ = v___y_808_;
v_major_770_ = v___x_639_;
v___y_771_ = v___y_656_;
v___y_772_ = v___y_657_;
v___y_773_ = v___y_658_;
v___y_774_ = v___y_659_;
goto v___jp_765_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__1___boxed(lean_object** _args){
lean_object* v_fvarId_933_ = _args[0];
lean_object* v_hFVarId_934_ = _args[1];
lean_object* v___x_935_ = _args[2];
lean_object* v_fst_936_ = _args[3];
lean_object* v_fvarSubst_937_ = _args[4];
lean_object* v_clearH_938_ = _args[5];
lean_object* v___x_939_ = _args[6];
lean_object* v___x_940_ = _args[7];
lean_object* v___x_941_ = _args[8];
lean_object* v_skip_942_ = _args[9];
lean_object* v___x_943_ = _args[10];
lean_object* v___x_944_ = _args[11];
lean_object* v_snd_945_ = _args[12];
lean_object* v___x_946_ = _args[13];
lean_object* v___x_947_ = _args[14];
lean_object* v_a_948_ = _args[15];
lean_object* v_symm_949_ = _args[16];
lean_object* v___x_950_ = _args[17];
lean_object* v___x_951_ = _args[18];
lean_object* v___y_952_ = _args[19];
lean_object* v___y_953_ = _args[20];
lean_object* v___y_954_ = _args[21];
lean_object* v___y_955_ = _args[22];
lean_object* v___y_956_ = _args[23];
_start:
{
uint8_t v_clearH_boxed_957_; uint8_t v_skip_boxed_958_; uint8_t v___x_28835__boxed_959_; uint8_t v_symm_boxed_960_; uint8_t v___x_28841__boxed_961_; lean_object* v_res_962_; 
v_clearH_boxed_957_ = lean_unbox(v_clearH_938_);
v_skip_boxed_958_ = lean_unbox(v_skip_942_);
v___x_28835__boxed_959_ = lean_unbox(v___x_943_);
v_symm_boxed_960_ = lean_unbox(v_symm_949_);
v___x_28841__boxed_961_ = lean_unbox(v___x_950_);
v_res_962_ = l_Lean_Meta_substCore___lam__1(v_fvarId_933_, v_hFVarId_934_, v___x_935_, v_fst_936_, v_fvarSubst_937_, v_clearH_boxed_957_, v___x_939_, v___x_940_, v___x_941_, v_skip_boxed_958_, v___x_28835__boxed_959_, v___x_944_, v_snd_945_, v___x_946_, v___x_947_, v_a_948_, v_symm_boxed_960_, v___x_28841__boxed_961_, v___x_951_, v___y_952_, v___y_953_, v___y_954_, v___y_955_);
lean_dec(v___y_955_);
lean_dec_ref(v___y_954_);
lean_dec(v___y_953_);
lean_dec_ref(v___y_952_);
lean_dec(v___x_951_);
lean_dec_ref(v_fst_936_);
return v_res_962_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2(lean_object* v___x_963_, lean_object* v___y_964_, lean_object* v___y_965_, lean_object* v___y_966_, lean_object* v___y_967_){
_start:
{
lean_object* v_toCold_969_; lean_object* v_options_970_; uint8_t v_hasTrace_971_; 
v_toCold_969_ = lean_ctor_get(v___y_966_, 0);
v_options_970_ = lean_ctor_get(v_toCold_969_, 2);
v_hasTrace_971_ = lean_ctor_get_uint8(v_options_970_, sizeof(void*)*1);
if (v_hasTrace_971_ == 0)
{
lean_object* v___x_972_; lean_object* v___x_973_; 
lean_dec(v___x_963_);
v___x_972_ = lean_box(v_hasTrace_971_);
v___x_973_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_973_, 0, v___x_972_);
return v___x_973_;
}
else
{
lean_object* v_inheritedTraceOptions_974_; lean_object* v___x_975_; lean_object* v___x_976_; uint8_t v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v_inheritedTraceOptions_974_ = lean_ctor_get(v_toCold_969_, 11);
v___x_975_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
v___x_976_ = l_Lean_Name_append(v___x_975_, v___x_963_);
v___x_977_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_974_, v_options_970_, v___x_976_);
lean_dec(v___x_976_);
v___x_978_ = lean_box(v___x_977_);
v___x_979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
return v___x_979_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__2___boxed(lean_object* v___x_980_, lean_object* v___y_981_, lean_object* v___y_982_, lean_object* v___y_983_, lean_object* v___y_984_, lean_object* v___y_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_Meta_substCore___lam__2(v___x_980_, v___y_981_, v___y_982_, v___y_983_, v___y_984_);
lean_dec(v___y_984_);
lean_dec_ref(v___y_983_);
lean_dec(v___y_982_);
lean_dec_ref(v___y_981_);
return v_res_986_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
if (lean_obj_tag(v_a_987_) == 0)
{
lean_object* v___x_989_; 
v___x_989_ = l_List_reverse___redArg(v_a_988_);
return v___x_989_;
}
else
{
lean_object* v_head_990_; lean_object* v_tail_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1000_; 
v_head_990_ = lean_ctor_get(v_a_987_, 0);
v_tail_991_ = lean_ctor_get(v_a_987_, 1);
v_isSharedCheck_1000_ = !lean_is_exclusive(v_a_987_);
if (v_isSharedCheck_1000_ == 0)
{
v___x_993_ = v_a_987_;
v_isShared_994_ = v_isSharedCheck_1000_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_tail_991_);
lean_inc(v_head_990_);
lean_dec(v_a_987_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1000_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v___x_995_; lean_object* v___x_997_; 
v___x_995_ = l_Lean_MessageData_ofName(v_head_990_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 1, v_a_988_);
lean_ctor_set(v___x_993_, 0, v___x_995_);
v___x_997_ = v___x_993_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v___x_995_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_a_988_);
v___x_997_ = v_reuseFailAlloc_999_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
v_a_987_ = v_tail_991_;
v_a_988_ = v___x_997_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(size_t v_sz_1001_, size_t v_i_1002_, lean_object* v_bs_1003_){
_start:
{
uint8_t v___x_1004_; 
v___x_1004_ = lean_usize_dec_lt(v_i_1002_, v_sz_1001_);
if (v___x_1004_ == 0)
{
return v_bs_1003_;
}
else
{
lean_object* v_v_1005_; lean_object* v___x_1006_; lean_object* v_bs_x27_1007_; size_t v___x_1008_; size_t v___x_1009_; lean_object* v___x_1010_; 
v_v_1005_ = lean_array_uget(v_bs_1003_, v_i_1002_);
v___x_1006_ = lean_unsigned_to_nat(0u);
v_bs_x27_1007_ = lean_array_uset(v_bs_1003_, v_i_1002_, v___x_1006_);
v___x_1008_ = ((size_t)1ULL);
v___x_1009_ = lean_usize_add(v_i_1002_, v___x_1008_);
v___x_1010_ = lean_array_uset(v_bs_x27_1007_, v_i_1002_, v_v_1005_);
v_i_1002_ = v___x_1009_;
v_bs_1003_ = v___x_1010_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8___boxed(lean_object* v_sz_1012_, lean_object* v_i_1013_, lean_object* v_bs_1014_){
_start:
{
size_t v_sz_boxed_1015_; size_t v_i_boxed_1016_; lean_object* v_res_1017_; 
v_sz_boxed_1015_ = lean_unbox_usize(v_sz_1012_);
lean_dec(v_sz_1012_);
v_i_boxed_1016_ = lean_unbox_usize(v_i_1013_);
lean_dec(v_i_1013_);
v_res_1017_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_boxed_1015_, v_i_boxed_1016_, v_bs_1014_);
return v_res_1017_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__1(void){
_start:
{
lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__0));
v___x_1020_ = l_Lean_stringToMessageData(v___x_1019_);
return v___x_1020_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__3(void){
_start:
{
lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1022_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__2));
v___x_1023_ = l_Lean_stringToMessageData(v___x_1022_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__5(void){
_start:
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
v___x_1025_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__4));
v___x_1026_ = l_Lean_stringToMessageData(v___x_1025_);
return v___x_1026_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__9(void){
_start:
{
lean_object* v___x_1031_; lean_object* v___x_1032_; 
v___x_1031_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__8));
v___x_1032_ = l_Lean_stringToMessageData(v___x_1031_);
return v___x_1032_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__11(void){
_start:
{
lean_object* v___x_1034_; lean_object* v___x_1035_; 
v___x_1034_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__10));
v___x_1035_ = l_Lean_stringToMessageData(v___x_1034_);
return v___x_1035_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__13(void){
_start:
{
lean_object* v___x_1037_; lean_object* v___x_1038_; 
v___x_1037_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__12));
v___x_1038_ = l_Lean_stringToMessageData(v___x_1037_);
return v___x_1038_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__15(void){
_start:
{
lean_object* v___x_1040_; lean_object* v___x_1041_; 
v___x_1040_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__14));
v___x_1041_ = l_Lean_stringToMessageData(v___x_1040_);
return v___x_1041_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__21(void){
_start:
{
lean_object* v___x_1051_; lean_object* v___x_1052_; 
v___x_1051_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__20));
v___x_1052_ = l_Lean_stringToMessageData(v___x_1051_);
return v___x_1052_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__23(void){
_start:
{
lean_object* v___x_1054_; lean_object* v___x_1055_; 
v___x_1054_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__22));
v___x_1055_ = l_Lean_stringToMessageData(v___x_1054_);
return v___x_1055_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__25(void){
_start:
{
lean_object* v___x_1057_; lean_object* v___x_1058_; 
v___x_1057_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__24));
v___x_1058_ = l_Lean_stringToMessageData(v___x_1057_);
return v___x_1058_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__30(void){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; 
v___x_1064_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__29));
v___x_1065_ = l_Lean_MessageData_ofFormat(v___x_1064_);
return v___x_1065_;
}
}
static lean_object* _init_l_Lean_Meta_substCore___lam__3___closed__31(void){
_start:
{
lean_object* v___x_1066_; lean_object* v___x_1067_; 
v___x_1066_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__30, &l_Lean_Meta_substCore___lam__3___closed__30_once, _init_l_Lean_Meta_substCore___lam__3___closed__30);
v___x_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
return v___x_1067_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3(lean_object* v_mvarId_1068_, lean_object* v_hFVarId_1069_, lean_object* v___x_1070_, lean_object* v_fvarSubst_1071_, uint8_t v_clearH_1072_, uint8_t v_symm_1073_, uint8_t v_tryToSkip_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_){
_start:
{
lean_object* v___x_1080_; 
lean_inc(v_mvarId_1068_);
v___x_1080_ = l_Lean_MVarId_getTag(v_mvarId_1068_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; lean_object* v___x_1083_; uint8_t v_isShared_1084_; uint8_t v_isSharedCheck_1477_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1083_ = v___x_1080_;
v_isShared_1084_ = v_isSharedCheck_1477_;
goto v_resetjp_1082_;
}
else
{
lean_inc(v_a_1081_);
lean_dec(v___x_1080_);
v___x_1083_ = lean_box(0);
v_isShared_1084_ = v_isSharedCheck_1477_;
goto v_resetjp_1082_;
}
v_resetjp_1082_:
{
lean_object* v___y_1086_; lean_object* v___y_1087_; lean_object* v___y_1088_; lean_object* v___y_1089_; lean_object* v___y_1090_; lean_object* v___y_1091_; uint8_t v___y_1092_; lean_object* v___y_1093_; lean_object* v___y_1094_; lean_object* v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; lean_object* v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; lean_object* v___y_1102_; uint8_t v___y_1103_; uint8_t v_skip_1104_; lean_object* v___y_1145_; lean_object* v___y_1146_; lean_object* v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1149_; uint8_t v___y_1150_; uint8_t v___y_1151_; lean_object* v___y_1152_; lean_object* v___y_1153_; uint8_t v___y_1154_; uint8_t v___y_1155_; lean_object* v___y_1156_; lean_object* v___y_1157_; lean_object* v___y_1158_; lean_object* v___y_1159_; lean_object* v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1188_; lean_object* v___y_1189_; lean_object* v___y_1190_; lean_object* v___y_1191_; lean_object* v___y_1192_; lean_object* v___y_1193_; uint8_t v___y_1194_; uint8_t v___y_1195_; lean_object* v___y_1196_; lean_object* v___y_1197_; lean_object* v___y_1198_; uint8_t v___y_1199_; lean_object* v___y_1200_; uint8_t v___y_1201_; lean_object* v___y_1202_; lean_object* v___y_1203_; lean_object* v___y_1204_; lean_object* v___y_1205_; lean_object* v___y_1206_; lean_object* v___y_1237_; lean_object* v___y_1238_; lean_object* v___y_1239_; uint8_t v___y_1240_; uint8_t v___y_1241_; lean_object* v___y_1242_; lean_object* v___y_1243_; lean_object* v___y_1244_; uint8_t v___y_1245_; uint8_t v___y_1246_; lean_object* v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1296_; lean_object* v___y_1297_; lean_object* v___y_1298_; lean_object* v___y_1299_; lean_object* v___y_1300_; lean_object* v___y_1301_; lean_object* v___y_1302_; lean_object* v___y_1303_; lean_object* v___y_1304_; lean_object* v___x_1352_; lean_object* v___y_1354_; lean_object* v___y_1355_; lean_object* v___y_1356_; lean_object* v___y_1357_; lean_object* v___y_1358_; lean_object* v___y_1359_; lean_object* v___y_1360_; lean_object* v___y_1361_; lean_object* v___y_1362_; lean_object* v___x_1389_; 
v___x_1352_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__7));
lean_inc(v_mvarId_1068_);
v___x_1389_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1068_, v___x_1352_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1389_) == 0)
{
lean_object* v___x_1390_; 
lean_dec_ref_known(v___x_1389_, 1);
lean_inc(v_hFVarId_1069_);
v___x_1390_ = l_Lean_FVarId_getDecl___redArg(v_hFVarId_1069_, v___y_1075_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v___x_1392_; lean_object* v___y_1394_; lean_object* v___y_1395_; lean_object* v___y_1408_; lean_object* v___y_1409_; lean_object* v___x_1440_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1392_ = l_Lean_LocalDecl_type(v_a_1391_);
lean_dec(v_a_1391_);
lean_inc_ref(v___x_1392_);
v___x_1440_ = l_Lean_Meta_matchEq_x3f(v___x_1392_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1440_) == 0)
{
lean_object* v_a_1441_; 
v_a_1441_ = lean_ctor_get(v___x_1440_, 0);
lean_inc(v_a_1441_);
lean_dec_ref_known(v___x_1440_, 1);
if (lean_obj_tag(v_a_1441_) == 0)
{
lean_object* v___x_1442_; lean_object* v___x_1443_; 
lean_dec_ref(v___x_1392_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v___x_1442_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__31, &l_Lean_Meta_substCore___lam__3___closed__31_once, _init_l_Lean_Meta_substCore___lam__3___closed__31);
v___x_1443_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1352_, v_mvarId_1068_, v___x_1442_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
return v___x_1443_;
}
else
{
lean_object* v_val_1444_; lean_object* v_snd_1445_; lean_object* v_fst_1446_; lean_object* v_snd_1447_; lean_object* v___y_1449_; 
v_val_1444_ = lean_ctor_get(v_a_1441_, 0);
lean_inc(v_val_1444_);
lean_dec_ref_known(v_a_1441_, 1);
v_snd_1445_ = lean_ctor_get(v_val_1444_, 1);
lean_inc(v_snd_1445_);
lean_dec(v_val_1444_);
v_fst_1446_ = lean_ctor_get(v_snd_1445_, 0);
lean_inc(v_fst_1446_);
v_snd_1447_ = lean_ctor_get(v_snd_1445_, 1);
lean_inc(v_snd_1447_);
lean_dec(v_snd_1445_);
if (v_symm_1073_ == 0)
{
lean_inc(v_fst_1446_);
v___y_1449_ = v_fst_1446_;
goto v___jp_1448_;
}
else
{
lean_inc(v_snd_1447_);
v___y_1449_ = v_snd_1447_;
goto v___jp_1448_;
}
v___jp_1448_:
{
lean_object* v___x_1450_; 
v___x_1450_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1449_, v___y_1076_);
if (v_symm_1073_ == 0)
{
lean_object* v_a_1451_; 
lean_dec(v_fst_1446_);
v_a_1451_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1451_);
lean_dec_ref(v___x_1450_);
v___y_1408_ = v_a_1451_;
v___y_1409_ = v_snd_1447_;
goto v___jp_1407_;
}
else
{
lean_object* v_a_1452_; 
lean_dec(v_snd_1447_);
v_a_1452_ = lean_ctor_get(v___x_1450_, 0);
lean_inc(v_a_1452_);
lean_dec_ref(v___x_1450_);
v___y_1408_ = v_a_1452_;
v___y_1409_ = v_fst_1446_;
goto v___jp_1407_;
}
}
}
}
else
{
lean_object* v_a_1453_; lean_object* v___x_1455_; uint8_t v_isShared_1456_; uint8_t v_isSharedCheck_1460_; 
lean_dec_ref(v___x_1392_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
lean_dec(v_mvarId_1068_);
v_a_1453_ = lean_ctor_get(v___x_1440_, 0);
v_isSharedCheck_1460_ = !lean_is_exclusive(v___x_1440_);
if (v_isSharedCheck_1460_ == 0)
{
v___x_1455_ = v___x_1440_;
v_isShared_1456_ = v_isSharedCheck_1460_;
goto v_resetjp_1454_;
}
else
{
lean_inc(v_a_1453_);
lean_dec(v___x_1440_);
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
v___jp_1393_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; 
v___x_1396_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__13, &l_Lean_Meta_substCore___lam__3___closed__13_once, _init_l_Lean_Meta_substCore___lam__3___closed__13);
lean_inc_ref(v___y_1395_);
v___x_1397_ = l_Lean_stringToMessageData(v___y_1395_);
v___x_1398_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1398_, 0, v___x_1396_);
lean_ctor_set(v___x_1398_, 1, v___x_1397_);
v___x_1399_ = l_Lean_indentExpr(v___x_1392_);
v___x_1400_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1400_, 0, v___x_1398_);
lean_ctor_set(v___x_1400_, 1, v___x_1399_);
v___x_1401_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__15, &l_Lean_Meta_substCore___lam__3___closed__15_once, _init_l_Lean_Meta_substCore___lam__3___closed__15);
v___x_1402_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1402_, 0, v___x_1400_);
lean_ctor_set(v___x_1402_, 1, v___x_1401_);
v___x_1403_ = l_Lean_indentExpr(v___y_1394_);
v___x_1404_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1402_);
lean_ctor_set(v___x_1404_, 1, v___x_1403_);
v___x_1405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1405_, 0, v___x_1404_);
v___x_1406_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1352_, v_mvarId_1068_, v___x_1405_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
return v___x_1406_;
}
v___jp_1407_:
{
lean_object* v___x_1410_; 
v___x_1410_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v___y_1409_, v___y_1076_);
if (lean_obj_tag(v___y_1408_) == 1)
{
lean_object* v_a_1411_; lean_object* v_fvarId_1412_; lean_object* v___x_1413_; lean_object* v___f_1414_; lean_object* v___x_1415_; lean_object* v_a_1416_; uint8_t v___x_1417_; 
lean_dec_ref(v___x_1392_);
v_a_1411_ = lean_ctor_get(v___x_1410_, 0);
lean_inc(v_a_1411_);
lean_dec_ref(v___x_1410_);
v_fvarId_1412_ = lean_ctor_get(v___y_1408_, 0);
lean_inc(v_fvarId_1412_);
v___x_1413_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__18));
v___f_1414_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__19));
v___x_1415_ = l_Lean_Meta_substCore___lam__2(v___x_1413_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
v_a_1416_ = lean_ctor_get(v___x_1415_, 0);
lean_inc(v_a_1416_);
lean_dec_ref(v___x_1415_);
v___x_1417_ = lean_unbox(v_a_1416_);
lean_dec(v_a_1416_);
if (v___x_1417_ == 0)
{
v___y_1354_ = v___x_1413_;
v___y_1355_ = v_fvarId_1412_;
v___y_1356_ = v___y_1408_;
v___y_1357_ = v___f_1414_;
v___y_1358_ = v_a_1411_;
v___y_1359_ = v___y_1075_;
v___y_1360_ = v___y_1076_;
v___y_1361_ = v___y_1077_;
v___y_1362_ = v___y_1078_;
goto v___jp_1353_;
}
else
{
lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; 
v___x_1418_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__21, &l_Lean_Meta_substCore___lam__3___closed__21_once, _init_l_Lean_Meta_substCore___lam__3___closed__21);
lean_inc_ref(v___y_1408_);
v___x_1419_ = l_Lean_MessageData_ofExpr(v___y_1408_);
v___x_1420_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1418_);
lean_ctor_set(v___x_1420_, 1, v___x_1419_);
v___x_1421_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__23, &l_Lean_Meta_substCore___lam__3___closed__23_once, _init_l_Lean_Meta_substCore___lam__3___closed__23);
v___x_1422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1422_, 0, v___x_1420_);
lean_ctor_set(v___x_1422_, 1, v___x_1421_);
lean_inc(v_fvarId_1412_);
v___x_1423_ = l_Lean_MessageData_ofName(v_fvarId_1412_);
v___x_1424_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1422_);
lean_ctor_set(v___x_1424_, 1, v___x_1423_);
v___x_1425_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__25, &l_Lean_Meta_substCore___lam__3___closed__25_once, _init_l_Lean_Meta_substCore___lam__3___closed__25);
v___x_1426_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1426_, 0, v___x_1424_);
lean_ctor_set(v___x_1426_, 1, v___x_1425_);
lean_inc(v_a_1411_);
v___x_1427_ = l_Lean_MessageData_ofExpr(v_a_1411_);
v___x_1428_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1426_);
lean_ctor_set(v___x_1428_, 1, v___x_1427_);
v___x_1429_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_1413_, v___x_1428_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_dec_ref_known(v___x_1429_, 1);
v___y_1354_ = v___x_1413_;
v___y_1355_ = v_fvarId_1412_;
v___y_1356_ = v___y_1408_;
v___y_1357_ = v___f_1414_;
v___y_1358_ = v_a_1411_;
v___y_1359_ = v___y_1075_;
v___y_1360_ = v___y_1076_;
v___y_1361_ = v___y_1077_;
v___y_1362_ = v___y_1078_;
goto v___jp_1353_;
}
else
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1437_; 
lean_dec(v_fvarId_1412_);
lean_dec(v_a_1411_);
lean_dec_ref_known(v___y_1408_, 1);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
lean_dec(v_mvarId_1068_);
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1432_ = v___x_1429_;
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1429_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1437_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
lean_object* v___x_1435_; 
if (v_isShared_1433_ == 0)
{
v___x_1435_ = v___x_1432_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_a_1430_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_1410_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
if (v_symm_1073_ == 0)
{
lean_object* v___x_1438_; 
v___x_1438_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__26));
v___y_1394_ = v___y_1408_;
v___y_1395_ = v___x_1438_;
goto v___jp_1393_;
}
else
{
lean_object* v___x_1439_; 
v___x_1439_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__27));
v___y_1394_ = v___y_1408_;
v___y_1395_ = v___x_1439_;
goto v___jp_1393_;
}
}
}
}
else
{
lean_object* v_a_1461_; lean_object* v___x_1463_; uint8_t v_isShared_1464_; uint8_t v_isSharedCheck_1468_; 
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
lean_dec(v_mvarId_1068_);
v_a_1461_ = lean_ctor_get(v___x_1390_, 0);
v_isSharedCheck_1468_ = !lean_is_exclusive(v___x_1390_);
if (v_isSharedCheck_1468_ == 0)
{
v___x_1463_ = v___x_1390_;
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
else
{
lean_inc(v_a_1461_);
lean_dec(v___x_1390_);
v___x_1463_ = lean_box(0);
v_isShared_1464_ = v_isSharedCheck_1468_;
goto v_resetjp_1462_;
}
v_resetjp_1462_:
{
lean_object* v___x_1466_; 
if (v_isShared_1464_ == 0)
{
v___x_1466_ = v___x_1463_;
goto v_reusejp_1465_;
}
else
{
lean_object* v_reuseFailAlloc_1467_; 
v_reuseFailAlloc_1467_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1467_, 0, v_a_1461_);
v___x_1466_ = v_reuseFailAlloc_1467_;
goto v_reusejp_1465_;
}
v_reusejp_1465_:
{
return v___x_1466_;
}
}
}
}
else
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1476_; 
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
lean_dec(v_mvarId_1068_);
v_a_1469_ = lean_ctor_get(v___x_1389_, 0);
v_isSharedCheck_1476_ = !lean_is_exclusive(v___x_1389_);
if (v_isSharedCheck_1476_ == 0)
{
v___x_1471_ = v___x_1389_;
v_isShared_1472_ = v_isSharedCheck_1476_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1389_);
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
v___jp_1085_:
{
if (v_skip_1104_ == 0)
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___f_1110_; lean_object* v___x_1111_; 
lean_del_object(v___x_1083_);
v___x_1105_ = lean_box(v_clearH_1072_);
v___x_1106_ = lean_box(v_skip_1104_);
v___x_1107_ = lean_box(v___y_1103_);
v___x_1108_ = lean_box(v_symm_1073_);
v___x_1109_ = lean_box(v___y_1092_);
v___f_1110_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__1___boxed), 24, 19);
lean_closure_set(v___f_1110_, 0, v___y_1101_);
lean_closure_set(v___f_1110_, 1, v_hFVarId_1069_);
lean_closure_set(v___f_1110_, 2, v___y_1095_);
lean_closure_set(v___f_1110_, 3, v___y_1096_);
lean_closure_set(v___f_1110_, 4, v_fvarSubst_1071_);
lean_closure_set(v___f_1110_, 5, v___x_1105_);
lean_closure_set(v___f_1110_, 6, v___y_1088_);
lean_closure_set(v___f_1110_, 7, v___y_1087_);
lean_closure_set(v___f_1110_, 8, v___y_1089_);
lean_closure_set(v___f_1110_, 9, v___x_1106_);
lean_closure_set(v___f_1110_, 10, v___x_1107_);
lean_closure_set(v___f_1110_, 11, v___y_1086_);
lean_closure_set(v___f_1110_, 12, v___y_1099_);
lean_closure_set(v___f_1110_, 13, v___y_1102_);
lean_closure_set(v___f_1110_, 14, v___y_1100_);
lean_closure_set(v___f_1110_, 15, v_a_1081_);
lean_closure_set(v___f_1110_, 16, v___x_1108_);
lean_closure_set(v___f_1110_, 17, v___x_1109_);
lean_closure_set(v___f_1110_, 18, v___y_1091_);
v___x_1111_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v___y_1090_, v___f_1110_, v___y_1098_, v___y_1094_, v___y_1097_, v___y_1093_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1098_);
return v___x_1111_;
}
else
{
lean_dec(v___y_1101_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1096_);
lean_dec_ref(v___y_1095_);
lean_dec(v___y_1091_);
lean_dec(v___y_1089_);
lean_dec_ref(v___y_1088_);
lean_dec(v___y_1087_);
lean_dec(v___y_1086_);
lean_dec(v_a_1081_);
lean_dec(v_hFVarId_1069_);
if (v_clearH_1072_ == 0)
{
lean_object* v___x_1112_; lean_object* v___x_1114_; 
lean_dec(v___y_1102_);
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1094_);
lean_dec(v___y_1093_);
v___x_1112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1112_, 0, v_fvarSubst_1071_);
lean_ctor_set(v___x_1112_, 1, v___y_1090_);
if (v_isShared_1084_ == 0)
{
lean_ctor_set(v___x_1083_, 0, v___x_1112_);
v___x_1114_ = v___x_1083_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1115_; 
v_reuseFailAlloc_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1115_, 0, v___x_1112_);
v___x_1114_ = v_reuseFailAlloc_1115_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
return v___x_1114_;
}
}
else
{
lean_object* v___x_1116_; 
lean_del_object(v___x_1083_);
v___x_1116_ = l_Lean_MVarId_clear(v___y_1090_, v___y_1102_, v___y_1098_, v___y_1094_, v___y_1097_, v___y_1093_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_object* v_a_1117_; lean_object* v___x_1118_; 
v_a_1117_ = lean_ctor_get(v___x_1116_, 0);
lean_inc(v_a_1117_);
lean_dec_ref_known(v___x_1116_, 1);
v___x_1118_ = l_Lean_MVarId_clear(v_a_1117_, v___y_1100_, v___y_1098_, v___y_1094_, v___y_1097_, v___y_1093_);
lean_dec(v___y_1093_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1094_);
lean_dec_ref(v___y_1098_);
if (lean_obj_tag(v___x_1118_) == 0)
{
lean_object* v_a_1119_; lean_object* v___x_1121_; uint8_t v_isShared_1122_; uint8_t v_isSharedCheck_1127_; 
v_a_1119_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1121_ = v___x_1118_;
v_isShared_1122_ = v_isSharedCheck_1127_;
goto v_resetjp_1120_;
}
else
{
lean_inc(v_a_1119_);
lean_dec(v___x_1118_);
v___x_1121_ = lean_box(0);
v_isShared_1122_ = v_isSharedCheck_1127_;
goto v_resetjp_1120_;
}
v_resetjp_1120_:
{
lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1123_, 0, v_fvarSubst_1071_);
lean_ctor_set(v___x_1123_, 1, v_a_1119_);
if (v_isShared_1122_ == 0)
{
lean_ctor_set(v___x_1121_, 0, v___x_1123_);
v___x_1125_ = v___x_1121_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v___x_1123_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
else
{
lean_object* v_a_1128_; lean_object* v___x_1130_; uint8_t v_isShared_1131_; uint8_t v_isSharedCheck_1135_; 
lean_dec(v_fvarSubst_1071_);
v_a_1128_ = lean_ctor_get(v___x_1118_, 0);
v_isSharedCheck_1135_ = !lean_is_exclusive(v___x_1118_);
if (v_isSharedCheck_1135_ == 0)
{
v___x_1130_ = v___x_1118_;
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
else
{
lean_inc(v_a_1128_);
lean_dec(v___x_1118_);
v___x_1130_ = lean_box(0);
v_isShared_1131_ = v_isSharedCheck_1135_;
goto v_resetjp_1129_;
}
v_resetjp_1129_:
{
lean_object* v___x_1133_; 
if (v_isShared_1131_ == 0)
{
v___x_1133_ = v___x_1130_;
goto v_reusejp_1132_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_a_1128_);
v___x_1133_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1132_;
}
v_reusejp_1132_:
{
return v___x_1133_;
}
}
}
}
else
{
lean_object* v_a_1136_; lean_object* v___x_1138_; uint8_t v_isShared_1139_; uint8_t v_isSharedCheck_1143_; 
lean_dec(v___y_1100_);
lean_dec_ref(v___y_1098_);
lean_dec_ref(v___y_1097_);
lean_dec(v___y_1094_);
lean_dec(v___y_1093_);
lean_dec(v_fvarSubst_1071_);
v_a_1136_ = lean_ctor_get(v___x_1116_, 0);
v_isSharedCheck_1143_ = !lean_is_exclusive(v___x_1116_);
if (v_isSharedCheck_1143_ == 0)
{
v___x_1138_ = v___x_1116_;
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
else
{
lean_inc(v_a_1136_);
lean_dec(v___x_1116_);
v___x_1138_ = lean_box(0);
v_isShared_1139_ = v_isSharedCheck_1143_;
goto v_resetjp_1137_;
}
v_resetjp_1137_:
{
lean_object* v___x_1141_; 
if (v_isShared_1139_ == 0)
{
v___x_1141_ = v___x_1138_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v_a_1136_);
v___x_1141_ = v_reuseFailAlloc_1142_;
goto v_reusejp_1140_;
}
v_reusejp_1140_:
{
return v___x_1141_;
}
}
}
}
}
}
v___jp_1144_:
{
lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; 
v___x_1163_ = lean_unsigned_to_nat(0u);
v___x_1164_ = lean_array_get(v___x_1070_, v___y_1157_, v___x_1163_);
lean_inc(v___x_1164_);
v___x_1165_ = l_Lean_mkFVar(v___x_1164_);
v___x_1166_ = lean_unsigned_to_nat(1u);
v___x_1167_ = lean_array_get(v___x_1070_, v___y_1157_, v___x_1166_);
lean_dec_ref(v___y_1157_);
lean_inc(v___x_1167_);
v___x_1168_ = l_Lean_mkFVar(v___x_1167_);
if (v_tryToSkip_1074_ == 0)
{
lean_dec(v___y_1156_);
lean_dec_ref(v___y_1153_);
v___y_1086_ = v___y_1145_;
v___y_1087_ = v___y_1147_;
v___y_1088_ = v___x_1165_;
v___y_1089_ = v___y_1148_;
v___y_1090_ = v___y_1158_;
v___y_1091_ = v___x_1166_;
v___y_1092_ = v___y_1151_;
v___y_1093_ = v___y_1162_;
v___y_1094_ = v___y_1160_;
v___y_1095_ = v___x_1168_;
v___y_1096_ = v___y_1152_;
v___y_1097_ = v___y_1161_;
v___y_1098_ = v___y_1159_;
v___y_1099_ = v___y_1146_;
v___y_1100_ = v___x_1164_;
v___y_1101_ = v___y_1149_;
v___y_1102_ = v___x_1167_;
v___y_1103_ = v___y_1150_;
v_skip_1104_ = v___y_1154_;
goto v___jp_1085_;
}
else
{
lean_object* v___x_1169_; uint8_t v___x_1170_; 
v___x_1169_ = lean_array_get_size(v___y_1153_);
lean_dec_ref(v___y_1153_);
v___x_1170_ = lean_nat_dec_eq(v___x_1169_, v___y_1156_);
lean_dec(v___y_1156_);
if (v___x_1170_ == 0)
{
v___y_1086_ = v___y_1145_;
v___y_1087_ = v___y_1147_;
v___y_1088_ = v___x_1165_;
v___y_1089_ = v___y_1148_;
v___y_1090_ = v___y_1158_;
v___y_1091_ = v___x_1166_;
v___y_1092_ = v___y_1151_;
v___y_1093_ = v___y_1162_;
v___y_1094_ = v___y_1160_;
v___y_1095_ = v___x_1168_;
v___y_1096_ = v___y_1152_;
v___y_1097_ = v___y_1161_;
v___y_1098_ = v___y_1159_;
v___y_1099_ = v___y_1146_;
v___y_1100_ = v___x_1164_;
v___y_1101_ = v___y_1149_;
v___y_1102_ = v___x_1167_;
v___y_1103_ = v___y_1150_;
v_skip_1104_ = v___y_1154_;
goto v___jp_1085_;
}
else
{
lean_object* v___x_1171_; 
lean_inc(v___y_1158_);
v___x_1171_ = l_Lean_MVarId_getType(v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_);
if (lean_obj_tag(v___x_1171_) == 0)
{
lean_object* v_a_1172_; lean_object* v___x_1173_; lean_object* v_a_1174_; uint8_t v___x_1175_; 
v_a_1172_ = lean_ctor_get(v___x_1171_, 0);
lean_inc_n(v_a_1172_, 2);
lean_dec_ref_known(v___x_1171_, 1);
lean_inc(v___x_1164_);
v___x_1173_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1172_, v___x_1164_, v___y_1160_);
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
lean_inc(v_a_1174_);
lean_dec_ref(v___x_1173_);
v___x_1175_ = lean_unbox(v_a_1174_);
lean_dec(v_a_1174_);
if (v___x_1175_ == 0)
{
lean_object* v___x_1176_; lean_object* v_a_1177_; uint8_t v___x_1178_; 
lean_inc(v___x_1167_);
v___x_1176_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1172_, v___x_1167_, v___y_1160_);
v_a_1177_ = lean_ctor_get(v___x_1176_, 0);
lean_inc(v_a_1177_);
lean_dec_ref(v___x_1176_);
v___x_1178_ = lean_unbox(v_a_1177_);
lean_dec(v_a_1177_);
if (v___x_1178_ == 0)
{
v___y_1086_ = v___y_1145_;
v___y_1087_ = v___y_1147_;
v___y_1088_ = v___x_1165_;
v___y_1089_ = v___y_1148_;
v___y_1090_ = v___y_1158_;
v___y_1091_ = v___x_1166_;
v___y_1092_ = v___y_1151_;
v___y_1093_ = v___y_1162_;
v___y_1094_ = v___y_1160_;
v___y_1095_ = v___x_1168_;
v___y_1096_ = v___y_1152_;
v___y_1097_ = v___y_1161_;
v___y_1098_ = v___y_1159_;
v___y_1099_ = v___y_1146_;
v___y_1100_ = v___x_1164_;
v___y_1101_ = v___y_1149_;
v___y_1102_ = v___x_1167_;
v___y_1103_ = v___y_1150_;
v_skip_1104_ = v___y_1155_;
goto v___jp_1085_;
}
else
{
v___y_1086_ = v___y_1145_;
v___y_1087_ = v___y_1147_;
v___y_1088_ = v___x_1165_;
v___y_1089_ = v___y_1148_;
v___y_1090_ = v___y_1158_;
v___y_1091_ = v___x_1166_;
v___y_1092_ = v___y_1151_;
v___y_1093_ = v___y_1162_;
v___y_1094_ = v___y_1160_;
v___y_1095_ = v___x_1168_;
v___y_1096_ = v___y_1152_;
v___y_1097_ = v___y_1161_;
v___y_1098_ = v___y_1159_;
v___y_1099_ = v___y_1146_;
v___y_1100_ = v___x_1164_;
v___y_1101_ = v___y_1149_;
v___y_1102_ = v___x_1167_;
v___y_1103_ = v___y_1150_;
v_skip_1104_ = v___y_1154_;
goto v___jp_1085_;
}
}
else
{
lean_dec(v_a_1172_);
v___y_1086_ = v___y_1145_;
v___y_1087_ = v___y_1147_;
v___y_1088_ = v___x_1165_;
v___y_1089_ = v___y_1148_;
v___y_1090_ = v___y_1158_;
v___y_1091_ = v___x_1166_;
v___y_1092_ = v___y_1151_;
v___y_1093_ = v___y_1162_;
v___y_1094_ = v___y_1160_;
v___y_1095_ = v___x_1168_;
v___y_1096_ = v___y_1152_;
v___y_1097_ = v___y_1161_;
v___y_1098_ = v___y_1159_;
v___y_1099_ = v___y_1146_;
v___y_1100_ = v___x_1164_;
v___y_1101_ = v___y_1149_;
v___y_1102_ = v___x_1167_;
v___y_1103_ = v___y_1150_;
v_skip_1104_ = v___y_1154_;
goto v___jp_1085_;
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec_ref(v___x_1168_);
lean_dec(v___x_1167_);
lean_dec_ref(v___x_1165_);
lean_dec(v___x_1164_);
lean_dec(v___y_1162_);
lean_dec_ref(v___y_1161_);
lean_dec(v___y_1160_);
lean_dec_ref(v___y_1159_);
lean_dec(v___y_1158_);
lean_dec_ref(v___y_1152_);
lean_dec(v___y_1149_);
lean_dec(v___y_1148_);
lean_dec(v___y_1147_);
lean_dec(v___y_1146_);
lean_dec(v___y_1145_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1179_ = lean_ctor_get(v___x_1171_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1171_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1171_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1171_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
}
}
v___jp_1187_:
{
lean_object* v___x_1207_; 
lean_inc_ref(v___y_1202_);
lean_inc(v___y_1206_);
lean_inc_ref(v___y_1205_);
lean_inc(v___y_1204_);
lean_inc_ref(v___y_1203_);
v___x_1207_ = lean_apply_5(v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, lean_box(0));
if (lean_obj_tag(v___x_1207_) == 0)
{
lean_object* v_a_1208_; uint8_t v___x_1209_; 
v_a_1208_ = lean_ctor_get(v___x_1207_, 0);
lean_inc(v_a_1208_);
lean_dec_ref_known(v___x_1207_, 1);
v___x_1209_ = lean_unbox(v_a_1208_);
lean_dec(v_a_1208_);
if (v___x_1209_ == 0)
{
lean_dec(v___y_1197_);
lean_inc(v___y_1190_);
v___y_1145_ = v___y_1189_;
v___y_1146_ = v___y_1190_;
v___y_1147_ = v___y_1191_;
v___y_1148_ = v___y_1192_;
v___y_1149_ = v___y_1193_;
v___y_1150_ = v___y_1195_;
v___y_1151_ = v___y_1194_;
v___y_1152_ = v___y_1196_;
v___y_1153_ = v___y_1198_;
v___y_1154_ = v___y_1199_;
v___y_1155_ = v___y_1201_;
v___y_1156_ = v___y_1200_;
v___y_1157_ = v___y_1188_;
v___y_1158_ = v___y_1190_;
v___y_1159_ = v___y_1203_;
v___y_1160_ = v___y_1204_;
v___y_1161_ = v___y_1205_;
v___y_1162_ = v___y_1206_;
goto v___jp_1144_;
}
else
{
lean_object* v___x_1210_; size_t v_sz_1211_; size_t v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; 
v___x_1210_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__1, &l_Lean_Meta_substCore___lam__3___closed__1_once, _init_l_Lean_Meta_substCore___lam__3___closed__1);
v_sz_1211_ = lean_array_size(v___y_1198_);
v___x_1212_ = ((size_t)0ULL);
lean_inc_ref(v___y_1198_);
v___x_1213_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_substCore_spec__8(v_sz_1211_, v___x_1212_, v___y_1198_);
v___x_1214_ = lean_array_to_list(v___x_1213_);
v___x_1215_ = lean_box(0);
v___x_1216_ = l_List_mapTR_loop___at___00Lean_Meta_substCore_spec__9(v___x_1214_, v___x_1215_);
v___x_1217_ = l_Lean_MessageData_ofList(v___x_1216_);
v___x_1218_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1210_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
v___x_1219_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1197_, v___x_1218_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_);
if (lean_obj_tag(v___x_1219_) == 0)
{
lean_dec_ref_known(v___x_1219_, 1);
lean_inc(v___y_1190_);
v___y_1145_ = v___y_1189_;
v___y_1146_ = v___y_1190_;
v___y_1147_ = v___y_1191_;
v___y_1148_ = v___y_1192_;
v___y_1149_ = v___y_1193_;
v___y_1150_ = v___y_1195_;
v___y_1151_ = v___y_1194_;
v___y_1152_ = v___y_1196_;
v___y_1153_ = v___y_1198_;
v___y_1154_ = v___y_1199_;
v___y_1155_ = v___y_1201_;
v___y_1156_ = v___y_1200_;
v___y_1157_ = v___y_1188_;
v___y_1158_ = v___y_1190_;
v___y_1159_ = v___y_1203_;
v___y_1160_ = v___y_1204_;
v___y_1161_ = v___y_1205_;
v___y_1162_ = v___y_1206_;
goto v___jp_1144_;
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1198_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1220_ = lean_ctor_get(v___x_1219_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1219_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1219_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1219_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_dec(v___y_1206_);
lean_dec_ref(v___y_1205_);
lean_dec(v___y_1204_);
lean_dec_ref(v___y_1203_);
lean_dec(v___y_1200_);
lean_dec_ref(v___y_1198_);
lean_dec(v___y_1197_);
lean_dec_ref(v___y_1196_);
lean_dec(v___y_1193_);
lean_dec(v___y_1192_);
lean_dec(v___y_1191_);
lean_dec(v___y_1190_);
lean_dec(v___y_1189_);
lean_dec_ref(v___y_1188_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1228_ = lean_ctor_get(v___x_1207_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1207_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1207_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1207_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
}
v___jp_1236_:
{
lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1253_ = lean_box(0);
lean_inc(v___y_1247_);
v___x_1254_ = l_Lean_Meta_introNCore(v___y_1242_, v___y_1247_, v___x_1253_, v___y_1245_, v___y_1246_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1254_) == 0)
{
lean_object* v_a_1255_; lean_object* v_fst_1256_; lean_object* v_snd_1257_; lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1286_; 
v_a_1255_ = lean_ctor_get(v___x_1254_, 0);
lean_inc(v_a_1255_);
lean_dec_ref_known(v___x_1254_, 1);
v_fst_1256_ = lean_ctor_get(v_a_1255_, 0);
v_snd_1257_ = lean_ctor_get(v_a_1255_, 1);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_a_1255_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1259_ = v_a_1255_;
v_isShared_1260_ = v_isSharedCheck_1286_;
goto v_resetjp_1258_;
}
else
{
lean_inc(v_snd_1257_);
lean_inc(v_fst_1256_);
lean_dec(v_a_1255_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1286_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1261_; 
lean_inc_ref(v___y_1248_);
lean_inc(v___y_1252_);
lean_inc_ref(v___y_1251_);
lean_inc(v___y_1250_);
lean_inc_ref(v___y_1249_);
v___x_1261_ = lean_apply_5(v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, lean_box(0));
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; uint8_t v___x_1263_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1261_, 1);
v___x_1263_ = lean_unbox(v_a_1262_);
lean_dec(v_a_1262_);
if (v___x_1263_ == 0)
{
lean_del_object(v___x_1259_);
lean_inc_ref(v___y_1243_);
v___y_1188_ = v_fst_1256_;
v___y_1189_ = v___y_1237_;
v___y_1190_ = v_snd_1257_;
v___y_1191_ = v___y_1238_;
v___y_1192_ = v___x_1253_;
v___y_1193_ = v___y_1239_;
v___y_1194_ = v___y_1240_;
v___y_1195_ = v___y_1241_;
v___y_1196_ = v___y_1243_;
v___y_1197_ = v___y_1244_;
v___y_1198_ = v___y_1243_;
v___y_1199_ = v___y_1245_;
v___y_1200_ = v___y_1247_;
v___y_1201_ = v___y_1246_;
v___y_1202_ = v___y_1248_;
v___y_1203_ = v___y_1249_;
v___y_1204_ = v___y_1250_;
v___y_1205_ = v___y_1251_;
v___y_1206_ = v___y_1252_;
goto v___jp_1187_;
}
else
{
lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1267_; 
v___x_1264_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__3, &l_Lean_Meta_substCore___lam__3___closed__3_once, _init_l_Lean_Meta_substCore___lam__3___closed__3);
lean_inc(v_snd_1257_);
v___x_1265_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1265_, 0, v_snd_1257_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set_tag(v___x_1259_, 7);
lean_ctor_set(v___x_1259_, 1, v___x_1265_);
lean_ctor_set(v___x_1259_, 0, v___x_1264_);
v___x_1267_ = v___x_1259_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1264_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v___x_1265_);
v___x_1267_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
lean_object* v___x_1268_; 
lean_inc(v___y_1244_);
v___x_1268_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1244_, v___x_1267_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1268_) == 0)
{
lean_dec_ref_known(v___x_1268_, 1);
lean_inc_ref(v___y_1243_);
v___y_1188_ = v_fst_1256_;
v___y_1189_ = v___y_1237_;
v___y_1190_ = v_snd_1257_;
v___y_1191_ = v___y_1238_;
v___y_1192_ = v___x_1253_;
v___y_1193_ = v___y_1239_;
v___y_1194_ = v___y_1240_;
v___y_1195_ = v___y_1241_;
v___y_1196_ = v___y_1243_;
v___y_1197_ = v___y_1244_;
v___y_1198_ = v___y_1243_;
v___y_1199_ = v___y_1245_;
v___y_1200_ = v___y_1247_;
v___y_1201_ = v___y_1246_;
v___y_1202_ = v___y_1248_;
v___y_1203_ = v___y_1249_;
v___y_1204_ = v___y_1250_;
v___y_1205_ = v___y_1251_;
v___y_1206_ = v___y_1252_;
goto v___jp_1187_;
}
else
{
lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1276_; 
lean_dec(v_snd_1257_);
lean_dec(v_fst_1256_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1247_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec(v___y_1237_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1276_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1276_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1274_; 
if (v_isShared_1272_ == 0)
{
v___x_1274_ = v___x_1271_;
goto v_reusejp_1273_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v_a_1269_);
v___x_1274_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1273_;
}
v_reusejp_1273_:
{
return v___x_1274_;
}
}
}
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_del_object(v___x_1259_);
lean_dec(v_snd_1257_);
lean_dec(v_fst_1256_);
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1247_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec(v___y_1237_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1278_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1261_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1261_);
v___x_1280_ = lean_box(0);
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
v_resetjp_1279_:
{
lean_object* v___x_1283_; 
if (v_isShared_1281_ == 0)
{
v___x_1283_ = v___x_1280_;
goto v_reusejp_1282_;
}
else
{
lean_object* v_reuseFailAlloc_1284_; 
v_reuseFailAlloc_1284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1284_, 0, v_a_1278_);
v___x_1283_ = v_reuseFailAlloc_1284_;
goto v_reusejp_1282_;
}
v_reusejp_1282_:
{
return v___x_1283_;
}
}
}
}
}
else
{
lean_object* v_a_1287_; lean_object* v___x_1289_; uint8_t v_isShared_1290_; uint8_t v_isSharedCheck_1294_; 
lean_dec(v___y_1252_);
lean_dec_ref(v___y_1251_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1247_);
lean_dec(v___y_1244_);
lean_dec_ref(v___y_1243_);
lean_dec(v___y_1239_);
lean_dec(v___y_1238_);
lean_dec(v___y_1237_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1287_ = lean_ctor_get(v___x_1254_, 0);
v_isSharedCheck_1294_ = !lean_is_exclusive(v___x_1254_);
if (v_isSharedCheck_1294_ == 0)
{
v___x_1289_ = v___x_1254_;
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
else
{
lean_inc(v_a_1287_);
lean_dec(v___x_1254_);
v___x_1289_ = lean_box(0);
v_isShared_1290_ = v_isSharedCheck_1294_;
goto v_resetjp_1288_;
}
v_resetjp_1288_:
{
lean_object* v___x_1292_; 
if (v_isShared_1290_ == 0)
{
v___x_1292_ = v___x_1289_;
goto v_reusejp_1291_;
}
else
{
lean_object* v_reuseFailAlloc_1293_; 
v_reuseFailAlloc_1293_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1293_, 0, v_a_1287_);
v___x_1292_ = v_reuseFailAlloc_1293_;
goto v_reusejp_1291_;
}
v_reusejp_1291_:
{
return v___x_1292_;
}
}
}
}
v___jp_1295_:
{
lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; uint8_t v___x_1309_; uint8_t v___x_1310_; lean_object* v___x_1311_; 
v___x_1305_ = lean_unsigned_to_nat(2u);
v___x_1306_ = lean_mk_empty_array_with_capacity(v___x_1305_);
v___x_1307_ = lean_array_push(v___x_1306_, v___y_1300_);
lean_inc(v_hFVarId_1069_);
v___x_1308_ = lean_array_push(v___x_1307_, v_hFVarId_1069_);
v___x_1309_ = 1;
v___x_1310_ = 0;
v___x_1311_ = l_Lean_MVarId_revert(v_mvarId_1068_, v___x_1308_, v___x_1309_, v___x_1310_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1311_) == 0)
{
lean_object* v_a_1312_; lean_object* v_fst_1313_; lean_object* v_snd_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1343_; 
v_a_1312_ = lean_ctor_get(v___x_1311_, 0);
lean_inc(v_a_1312_);
lean_dec_ref_known(v___x_1311_, 1);
v_fst_1313_ = lean_ctor_get(v_a_1312_, 0);
v_snd_1314_ = lean_ctor_get(v_a_1312_, 1);
v_isSharedCheck_1343_ = !lean_is_exclusive(v_a_1312_);
if (v_isSharedCheck_1343_ == 0)
{
v___x_1316_ = v_a_1312_;
v_isShared_1317_ = v_isSharedCheck_1343_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_snd_1314_);
lean_inc(v_fst_1313_);
lean_dec(v_a_1312_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1343_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1318_; 
lean_inc_ref(v___y_1299_);
lean_inc(v___y_1304_);
lean_inc_ref(v___y_1303_);
lean_inc(v___y_1302_);
lean_inc_ref(v___y_1301_);
v___x_1318_ = lean_apply_5(v___y_1299_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_, lean_box(0));
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; uint8_t v___x_1320_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_a_1319_);
lean_dec_ref_known(v___x_1318_, 1);
v___x_1320_ = lean_unbox(v_a_1319_);
lean_dec(v_a_1319_);
if (v___x_1320_ == 0)
{
lean_del_object(v___x_1316_);
v___y_1237_ = v___y_1296_;
v___y_1238_ = v___x_1305_;
v___y_1239_ = v___y_1297_;
v___y_1240_ = v___x_1310_;
v___y_1241_ = v___x_1309_;
v___y_1242_ = v_snd_1314_;
v___y_1243_ = v_fst_1313_;
v___y_1244_ = v___y_1298_;
v___y_1245_ = v___x_1310_;
v___y_1246_ = v___x_1309_;
v___y_1247_ = v___x_1305_;
v___y_1248_ = v___y_1299_;
v___y_1249_ = v___y_1301_;
v___y_1250_ = v___y_1302_;
v___y_1251_ = v___y_1303_;
v___y_1252_ = v___y_1304_;
goto v___jp_1236_;
}
else
{
lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1324_; 
v___x_1321_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__5, &l_Lean_Meta_substCore___lam__3___closed__5_once, _init_l_Lean_Meta_substCore___lam__3___closed__5);
lean_inc(v_snd_1314_);
v___x_1322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1322_, 0, v_snd_1314_);
if (v_isShared_1317_ == 0)
{
lean_ctor_set_tag(v___x_1316_, 7);
lean_ctor_set(v___x_1316_, 1, v___x_1322_);
lean_ctor_set(v___x_1316_, 0, v___x_1321_);
v___x_1324_ = v___x_1316_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1334_; 
v_reuseFailAlloc_1334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1334_, 0, v___x_1321_);
lean_ctor_set(v_reuseFailAlloc_1334_, 1, v___x_1322_);
v___x_1324_ = v_reuseFailAlloc_1334_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1325_; 
lean_inc(v___y_1298_);
v___x_1325_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___y_1298_, v___x_1324_, v___y_1301_, v___y_1302_, v___y_1303_, v___y_1304_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_dec_ref_known(v___x_1325_, 1);
v___y_1237_ = v___y_1296_;
v___y_1238_ = v___x_1305_;
v___y_1239_ = v___y_1297_;
v___y_1240_ = v___x_1310_;
v___y_1241_ = v___x_1309_;
v___y_1242_ = v_snd_1314_;
v___y_1243_ = v_fst_1313_;
v___y_1244_ = v___y_1298_;
v___y_1245_ = v___x_1310_;
v___y_1246_ = v___x_1309_;
v___y_1247_ = v___x_1305_;
v___y_1248_ = v___y_1299_;
v___y_1249_ = v___y_1301_;
v___y_1250_ = v___y_1302_;
v___y_1251_ = v___y_1303_;
v___y_1252_ = v___y_1304_;
goto v___jp_1236_;
}
else
{
lean_object* v_a_1326_; lean_object* v___x_1328_; uint8_t v_isShared_1329_; uint8_t v_isSharedCheck_1333_; 
lean_dec(v_snd_1314_);
lean_dec(v_fst_1313_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec(v___y_1296_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
v_isSharedCheck_1333_ = !lean_is_exclusive(v___x_1325_);
if (v_isSharedCheck_1333_ == 0)
{
v___x_1328_ = v___x_1325_;
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
else
{
lean_inc(v_a_1326_);
lean_dec(v___x_1325_);
v___x_1328_ = lean_box(0);
v_isShared_1329_ = v_isSharedCheck_1333_;
goto v_resetjp_1327_;
}
v_resetjp_1327_:
{
lean_object* v___x_1331_; 
if (v_isShared_1329_ == 0)
{
v___x_1331_ = v___x_1328_;
goto v_reusejp_1330_;
}
else
{
lean_object* v_reuseFailAlloc_1332_; 
v_reuseFailAlloc_1332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1332_, 0, v_a_1326_);
v___x_1331_ = v_reuseFailAlloc_1332_;
goto v_reusejp_1330_;
}
v_reusejp_1330_:
{
return v___x_1331_;
}
}
}
}
}
}
else
{
lean_object* v_a_1335_; lean_object* v___x_1337_; uint8_t v_isShared_1338_; uint8_t v_isSharedCheck_1342_; 
lean_del_object(v___x_1316_);
lean_dec(v_snd_1314_);
lean_dec(v_fst_1313_);
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec(v___y_1296_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1335_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1342_ == 0)
{
v___x_1337_ = v___x_1318_;
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
else
{
lean_inc(v_a_1335_);
lean_dec(v___x_1318_);
v___x_1337_ = lean_box(0);
v_isShared_1338_ = v_isSharedCheck_1342_;
goto v_resetjp_1336_;
}
v_resetjp_1336_:
{
lean_object* v___x_1340_; 
if (v_isShared_1338_ == 0)
{
v___x_1340_ = v___x_1337_;
goto v_reusejp_1339_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_a_1335_);
v___x_1340_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1339_;
}
v_reusejp_1339_:
{
return v___x_1340_;
}
}
}
}
}
else
{
lean_object* v_a_1344_; lean_object* v___x_1346_; uint8_t v_isShared_1347_; uint8_t v_isSharedCheck_1351_; 
lean_dec(v___y_1304_);
lean_dec_ref(v___y_1303_);
lean_dec(v___y_1302_);
lean_dec_ref(v___y_1301_);
lean_dec(v___y_1298_);
lean_dec(v___y_1297_);
lean_dec(v___y_1296_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
v_a_1344_ = lean_ctor_get(v___x_1311_, 0);
v_isSharedCheck_1351_ = !lean_is_exclusive(v___x_1311_);
if (v_isSharedCheck_1351_ == 0)
{
v___x_1346_ = v___x_1311_;
v_isShared_1347_ = v_isSharedCheck_1351_;
goto v_resetjp_1345_;
}
else
{
lean_inc(v_a_1344_);
lean_dec(v___x_1311_);
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
v___jp_1353_:
{
lean_object* v___x_1363_; lean_object* v_a_1364_; lean_object* v___x_1366_; uint8_t v_isShared_1367_; uint8_t v_isSharedCheck_1388_; 
lean_inc(v___y_1355_);
lean_inc_ref(v___y_1358_);
v___x_1363_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v___y_1358_, v___y_1355_, v___y_1360_);
v_a_1364_ = lean_ctor_get(v___x_1363_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1363_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1366_ = v___x_1363_;
v_isShared_1367_ = v_isSharedCheck_1388_;
goto v_resetjp_1365_;
}
else
{
lean_inc(v_a_1364_);
lean_dec(v___x_1363_);
v___x_1366_ = lean_box(0);
v_isShared_1367_ = v_isSharedCheck_1388_;
goto v_resetjp_1365_;
}
v_resetjp_1365_:
{
uint8_t v___x_1368_; 
v___x_1368_ = lean_unbox(v_a_1364_);
lean_dec(v_a_1364_);
if (v___x_1368_ == 0)
{
lean_del_object(v___x_1366_);
lean_dec_ref(v___y_1358_);
lean_dec_ref(v___y_1356_);
lean_inc(v___y_1355_);
lean_inc(v___y_1354_);
v___y_1296_ = v___y_1354_;
v___y_1297_ = v___y_1355_;
v___y_1298_ = v___y_1354_;
v___y_1299_ = v___y_1357_;
v___y_1300_ = v___y_1355_;
v___y_1301_ = v___y_1359_;
v___y_1302_ = v___y_1360_;
v___y_1303_ = v___y_1361_;
v___y_1304_ = v___y_1362_;
goto v___jp_1295_;
}
else
{
lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v___x_1369_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__9, &l_Lean_Meta_substCore___lam__3___closed__9_once, _init_l_Lean_Meta_substCore___lam__3___closed__9);
v___x_1370_ = l_Lean_MessageData_ofExpr(v___y_1356_);
v___x_1371_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1371_, 0, v___x_1369_);
lean_ctor_set(v___x_1371_, 1, v___x_1370_);
v___x_1372_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__11, &l_Lean_Meta_substCore___lam__3___closed__11_once, _init_l_Lean_Meta_substCore___lam__3___closed__11);
v___x_1373_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1373_, 0, v___x_1371_);
lean_ctor_set(v___x_1373_, 1, v___x_1372_);
v___x_1374_ = l_Lean_indentExpr(v___y_1358_);
v___x_1375_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1375_, 0, v___x_1373_);
lean_ctor_set(v___x_1375_, 1, v___x_1374_);
if (v_isShared_1367_ == 0)
{
lean_ctor_set_tag(v___x_1366_, 1);
lean_ctor_set(v___x_1366_, 0, v___x_1375_);
v___x_1377_ = v___x_1366_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
lean_object* v___x_1378_; 
lean_inc(v_mvarId_1068_);
v___x_1378_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1352_, v_mvarId_1068_, v___x_1377_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_dec_ref_known(v___x_1378_, 1);
lean_inc(v___y_1355_);
lean_inc(v___y_1354_);
v___y_1296_ = v___y_1354_;
v___y_1297_ = v___y_1355_;
v___y_1298_ = v___y_1354_;
v___y_1299_ = v___y_1357_;
v___y_1300_ = v___y_1355_;
v___y_1301_ = v___y_1359_;
v___y_1302_ = v___y_1360_;
v___y_1303_ = v___y_1361_;
v___y_1304_ = v___y_1362_;
goto v___jp_1295_;
}
else
{
lean_object* v_a_1379_; lean_object* v___x_1381_; uint8_t v_isShared_1382_; uint8_t v_isSharedCheck_1386_; 
lean_dec(v___y_1362_);
lean_dec_ref(v___y_1361_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1355_);
lean_dec(v___y_1354_);
lean_del_object(v___x_1083_);
lean_dec(v_a_1081_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
lean_dec(v_mvarId_1068_);
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1386_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1386_ == 0)
{
v___x_1381_ = v___x_1378_;
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
else
{
lean_inc(v_a_1379_);
lean_dec(v___x_1378_);
v___x_1381_ = lean_box(0);
v_isShared_1382_ = v_isSharedCheck_1386_;
goto v_resetjp_1380_;
}
v_resetjp_1380_:
{
lean_object* v___x_1384_; 
if (v_isShared_1382_ == 0)
{
v___x_1384_ = v___x_1381_;
goto v_reusejp_1383_;
}
else
{
lean_object* v_reuseFailAlloc_1385_; 
v_reuseFailAlloc_1385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1385_, 0, v_a_1379_);
v___x_1384_ = v_reuseFailAlloc_1385_;
goto v_reusejp_1383_;
}
v_reusejp_1383_:
{
return v___x_1384_;
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
lean_object* v_a_1478_; lean_object* v___x_1480_; uint8_t v_isShared_1481_; uint8_t v_isSharedCheck_1485_; 
lean_dec(v___y_1078_);
lean_dec_ref(v___y_1077_);
lean_dec(v___y_1076_);
lean_dec_ref(v___y_1075_);
lean_dec(v_fvarSubst_1071_);
lean_dec(v_hFVarId_1069_);
lean_dec(v_mvarId_1068_);
v_a_1478_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1485_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1485_ == 0)
{
v___x_1480_ = v___x_1080_;
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
else
{
lean_inc(v_a_1478_);
lean_dec(v___x_1080_);
v___x_1480_ = lean_box(0);
v_isShared_1481_ = v_isSharedCheck_1485_;
goto v_resetjp_1479_;
}
v_resetjp_1479_:
{
lean_object* v___x_1483_; 
if (v_isShared_1481_ == 0)
{
v___x_1483_ = v___x_1480_;
goto v_reusejp_1482_;
}
else
{
lean_object* v_reuseFailAlloc_1484_; 
v_reuseFailAlloc_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1484_, 0, v_a_1478_);
v___x_1483_ = v_reuseFailAlloc_1484_;
goto v_reusejp_1482_;
}
v_reusejp_1482_:
{
return v___x_1483_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___lam__3___boxed(lean_object* v_mvarId_1486_, lean_object* v_hFVarId_1487_, lean_object* v___x_1488_, lean_object* v_fvarSubst_1489_, lean_object* v_clearH_1490_, lean_object* v_symm_1491_, lean_object* v_tryToSkip_1492_, lean_object* v___y_1493_, lean_object* v___y_1494_, lean_object* v___y_1495_, lean_object* v___y_1496_, lean_object* v___y_1497_){
_start:
{
uint8_t v_clearH_boxed_1498_; uint8_t v_symm_boxed_1499_; uint8_t v_tryToSkip_boxed_1500_; lean_object* v_res_1501_; 
v_clearH_boxed_1498_ = lean_unbox(v_clearH_1490_);
v_symm_boxed_1499_ = lean_unbox(v_symm_1491_);
v_tryToSkip_boxed_1500_ = lean_unbox(v_tryToSkip_1492_);
v_res_1501_ = l_Lean_Meta_substCore___lam__3(v_mvarId_1486_, v_hFVarId_1487_, v___x_1488_, v_fvarSubst_1489_, v_clearH_boxed_1498_, v_symm_boxed_1499_, v_tryToSkip_boxed_1500_, v___y_1493_, v___y_1494_, v___y_1495_, v___y_1496_);
lean_dec(v___x_1488_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore(lean_object* v_mvarId_1502_, lean_object* v_hFVarId_1503_, uint8_t v_symm_1504_, lean_object* v_fvarSubst_1505_, uint8_t v_clearH_1506_, uint8_t v_tryToSkip_1507_, lean_object* v_a_1508_, lean_object* v_a_1509_, lean_object* v_a_1510_, lean_object* v_a_1511_){
_start:
{
lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___f_1517_; lean_object* v___x_1518_; 
v___x_1513_ = lean_box(0);
v___x_1514_ = lean_box(v_clearH_1506_);
v___x_1515_ = lean_box(v_symm_1504_);
v___x_1516_ = lean_box(v_tryToSkip_1507_);
lean_inc(v_mvarId_1502_);
v___f_1517_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___lam__3___boxed), 12, 7);
lean_closure_set(v___f_1517_, 0, v_mvarId_1502_);
lean_closure_set(v___f_1517_, 1, v_hFVarId_1503_);
lean_closure_set(v___f_1517_, 2, v___x_1513_);
lean_closure_set(v___f_1517_, 3, v_fvarSubst_1505_);
lean_closure_set(v___f_1517_, 4, v___x_1514_);
lean_closure_set(v___f_1517_, 5, v___x_1515_);
lean_closure_set(v___f_1517_, 6, v___x_1516_);
v___x_1518_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1502_, v___f_1517_, v_a_1508_, v_a_1509_, v_a_1510_, v_a_1511_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore___boxed(lean_object* v_mvarId_1519_, lean_object* v_hFVarId_1520_, lean_object* v_symm_1521_, lean_object* v_fvarSubst_1522_, lean_object* v_clearH_1523_, lean_object* v_tryToSkip_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_, lean_object* v_a_1529_){
_start:
{
uint8_t v_symm_boxed_1530_; uint8_t v_clearH_boxed_1531_; uint8_t v_tryToSkip_boxed_1532_; lean_object* v_res_1533_; 
v_symm_boxed_1530_ = lean_unbox(v_symm_1521_);
v_clearH_boxed_1531_ = lean_unbox(v_clearH_1523_);
v_tryToSkip_boxed_1532_ = lean_unbox(v_tryToSkip_1524_);
v_res_1533_ = l_Lean_Meta_substCore(v_mvarId_1519_, v_hFVarId_1520_, v_symm_boxed_1530_, v_fvarSubst_1522_, v_clearH_boxed_1531_, v_tryToSkip_boxed_1532_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_);
lean_dec(v_a_1528_);
lean_dec_ref(v_a_1527_);
lean_dec(v_a_1526_);
lean_dec_ref(v_a_1525_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(lean_object* v_fst_1534_, lean_object* v_fst_1535_, lean_object* v_n_1536_, lean_object* v_i_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_, lean_object* v___y_1542_, lean_object* v___y_1543_){
_start:
{
lean_object* v___x_1545_; 
v___x_1545_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___redArg(v_fst_1534_, v_fst_1535_, v_n_1536_, v_i_1537_, v_a_1539_);
return v___x_1545_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1___boxed(lean_object* v_fst_1546_, lean_object* v_fst_1547_, lean_object* v_n_1548_, lean_object* v_i_1549_, lean_object* v_a_1550_, lean_object* v_a_1551_, lean_object* v___y_1552_, lean_object* v___y_1553_, lean_object* v___y_1554_, lean_object* v___y_1555_, lean_object* v___y_1556_){
_start:
{
lean_object* v_res_1557_; 
v_res_1557_ = l___private_Init_Data_Nat_Control_0__Nat_foldM_loop___at___00Lean_Meta_substCore_spec__1(v_fst_1546_, v_fst_1547_, v_n_1548_, v_i_1549_, v_a_1550_, v_a_1551_, v___y_1552_, v___y_1553_, v___y_1554_, v___y_1555_);
lean_dec(v___y_1555_);
lean_dec_ref(v___y_1554_);
lean_dec(v___y_1553_);
lean_dec_ref(v___y_1552_);
lean_dec(v_n_1548_);
lean_dec_ref(v_fst_1547_);
lean_dec_ref(v_fst_1546_);
return v_res_1557_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(lean_object* v_mvarId_1558_, lean_object* v_val_1559_, lean_object* v___y_1560_, lean_object* v___y_1561_, lean_object* v___y_1562_, lean_object* v___y_1563_){
_start:
{
lean_object* v___x_1565_; 
v___x_1565_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v_mvarId_1558_, v_val_1559_, v___y_1561_);
return v___x_1565_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___boxed(lean_object* v_mvarId_1566_, lean_object* v_val_1567_, lean_object* v___y_1568_, lean_object* v___y_1569_, lean_object* v___y_1570_, lean_object* v___y_1571_, lean_object* v___y_1572_){
_start:
{
lean_object* v_res_1573_; 
v_res_1573_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4(v_mvarId_1566_, v_val_1567_, v___y_1568_, v___y_1569_, v___y_1570_, v___y_1571_);
lean_dec(v___y_1571_);
lean_dec_ref(v___y_1570_);
lean_dec(v___y_1569_);
lean_dec_ref(v___y_1568_);
return v_res_1573_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(lean_object* v_00_u03b1_1574_, lean_object* v_name_1575_, uint8_t v_bi_1576_, lean_object* v_type_1577_, lean_object* v_k_1578_, uint8_t v_kind_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___redArg(v_name_1575_, v_bi_1576_, v_type_1577_, v_k_1578_, v_kind_1579_, v___y_1580_, v___y_1581_, v___y_1582_, v___y_1583_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7___boxed(lean_object* v_00_u03b1_1586_, lean_object* v_name_1587_, lean_object* v_bi_1588_, lean_object* v_type_1589_, lean_object* v_k_1590_, lean_object* v_kind_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_, lean_object* v___y_1594_, lean_object* v___y_1595_, lean_object* v___y_1596_){
_start:
{
uint8_t v_bi_boxed_1597_; uint8_t v_kind_boxed_1598_; lean_object* v_res_1599_; 
v_bi_boxed_1597_ = lean_unbox(v_bi_1588_);
v_kind_boxed_1598_ = lean_unbox(v_kind_1591_);
v_res_1599_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5_spec__7(v_00_u03b1_1586_, v_name_1587_, v_bi_boxed_1597_, v_type_1589_, v_k_1590_, v_kind_boxed_1598_, v___y_1592_, v___y_1593_, v___y_1594_, v___y_1595_);
lean_dec(v___y_1595_);
lean_dec_ref(v___y_1594_);
lean_dec(v___y_1593_);
lean_dec_ref(v___y_1592_);
return v_res_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(lean_object* v_00_u03b1_1600_, lean_object* v_name_1601_, lean_object* v_type_1602_, lean_object* v_k_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_){
_start:
{
lean_object* v___x_1609_; 
v___x_1609_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___redArg(v_name_1601_, v_type_1602_, v_k_1603_, v___y_1604_, v___y_1605_, v___y_1606_, v___y_1607_);
return v___x_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5___boxed(lean_object* v_00_u03b1_1610_, lean_object* v_name_1611_, lean_object* v_type_1612_, lean_object* v_k_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_){
_start:
{
lean_object* v_res_1619_; 
v_res_1619_ = l_Lean_Meta_withLocalDeclD___at___00Lean_Meta_substCore_spec__5(v_00_u03b1_1610_, v_name_1611_, v_type_1612_, v_k_1613_, v___y_1614_, v___y_1615_, v___y_1616_, v___y_1617_);
lean_dec(v___y_1617_);
lean_dec_ref(v___y_1616_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
return v_res_1619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5(lean_object* v_00_u03b2_1620_, lean_object* v_x_1621_, lean_object* v_x_1622_, lean_object* v_x_1623_){
_start:
{
lean_object* v___x_1624_; 
v___x_1624_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5___redArg(v_x_1621_, v_x_1622_, v_x_1623_);
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(lean_object* v_00_u03b2_1625_, lean_object* v_x_1626_, size_t v_x_1627_, size_t v_x_1628_, lean_object* v_x_1629_, lean_object* v_x_1630_){
_start:
{
lean_object* v___x_1631_; 
v___x_1631_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___redArg(v_x_1626_, v_x_1627_, v_x_1628_, v_x_1629_, v_x_1630_);
return v___x_1631_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8___boxed(lean_object* v_00_u03b2_1632_, lean_object* v_x_1633_, lean_object* v_x_1634_, lean_object* v_x_1635_, lean_object* v_x_1636_, lean_object* v_x_1637_){
_start:
{
size_t v_x_30651__boxed_1638_; size_t v_x_30652__boxed_1639_; lean_object* v_res_1640_; 
v_x_30651__boxed_1638_ = lean_unbox_usize(v_x_1634_);
lean_dec(v_x_1634_);
v_x_30652__boxed_1639_ = lean_unbox_usize(v_x_1635_);
lean_dec(v_x_1635_);
v_res_1640_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8(v_00_u03b2_1632_, v_x_1633_, v_x_30651__boxed_1638_, v_x_30652__boxed_1639_, v_x_1636_, v_x_1637_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13(lean_object* v_00_u03b2_1641_, lean_object* v_n_1642_, lean_object* v_k_1643_, lean_object* v_v_1644_){
_start:
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13___redArg(v_n_1642_, v_k_1643_, v_v_1644_);
return v___x_1645_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(lean_object* v_00_u03b2_1646_, size_t v_depth_1647_, lean_object* v_keys_1648_, lean_object* v_vals_1649_, lean_object* v_heq_1650_, lean_object* v_i_1651_, lean_object* v_entries_1652_){
_start:
{
lean_object* v___x_1653_; 
v___x_1653_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___redArg(v_depth_1647_, v_keys_1648_, v_vals_1649_, v_i_1651_, v_entries_1652_);
return v___x_1653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14___boxed(lean_object* v_00_u03b2_1654_, lean_object* v_depth_1655_, lean_object* v_keys_1656_, lean_object* v_vals_1657_, lean_object* v_heq_1658_, lean_object* v_i_1659_, lean_object* v_entries_1660_){
_start:
{
size_t v_depth_boxed_1661_; lean_object* v_res_1662_; 
v_depth_boxed_1661_ = lean_unbox_usize(v_depth_1655_);
lean_dec(v_depth_1655_);
v_res_1662_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__14(v_00_u03b2_1654_, v_depth_boxed_1661_, v_keys_1656_, v_vals_1657_, v_heq_1658_, v_i_1659_, v_entries_1660_);
lean_dec_ref(v_vals_1657_);
lean_dec_ref(v_keys_1656_);
return v_res_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14(lean_object* v_00_u03b2_1663_, lean_object* v_x_1664_, lean_object* v_x_1665_, lean_object* v_x_1666_, lean_object* v_x_1667_){
_start:
{
lean_object* v___x_1668_; 
v___x_1668_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4_spec__5_spec__8_spec__13_spec__14___redArg(v_x_1664_, v_x_1665_, v_x_1666_, v_x_1667_);
return v___x_1668_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0(lean_object* v_fvarId_1672_, lean_object* v_mvarId_1673_, uint8_t v_tryToClear_1674_, lean_object* v___y_1675_, lean_object* v___y_1676_, lean_object* v___y_1677_, lean_object* v___y_1678_){
_start:
{
lean_object* v___x_1683_; 
lean_inc(v_fvarId_1672_);
v___x_1683_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1672_, v___y_1675_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1683_) == 0)
{
lean_object* v_a_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; 
v_a_1684_ = lean_ctor_get(v___x_1683_, 0);
lean_inc(v_a_1684_);
lean_dec_ref_known(v___x_1683_, 1);
v___x_1685_ = l_Lean_LocalDecl_type(v_a_1684_);
lean_inc(v___y_1678_);
lean_inc_ref(v___y_1677_);
lean_inc(v___y_1676_);
lean_inc_ref(v___y_1675_);
v___x_1686_ = lean_whnf(v___x_1685_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1686_) == 0)
{
lean_object* v_a_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; uint8_t v___x_1690_; 
v_a_1687_ = lean_ctor_get(v___x_1686_, 0);
lean_inc(v_a_1687_);
lean_dec_ref_known(v___x_1686_, 1);
v___x_1688_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_1689_ = lean_unsigned_to_nat(4u);
v___x_1690_ = l_Lean_Expr_isAppOfArity(v_a_1687_, v___x_1688_, v___x_1689_);
if (v___x_1690_ == 0)
{
lean_dec(v_a_1687_);
lean_dec(v_a_1684_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
goto v___jp_1680_;
}
else
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1691_ = l_Lean_Expr_appFn_x21(v_a_1687_);
v___x_1692_ = l_Lean_Expr_appFn_x21(v___x_1691_);
v___x_1693_ = l_Lean_Expr_appFn_x21(v___x_1692_);
v___x_1694_ = l_Lean_Expr_appArg_x21(v___x_1693_);
lean_dec_ref(v___x_1693_);
v___x_1695_ = l_Lean_Expr_appArg_x21(v___x_1692_);
lean_dec_ref(v___x_1692_);
v___x_1696_ = l_Lean_Expr_appArg_x21(v___x_1691_);
lean_dec_ref(v___x_1691_);
v___x_1697_ = l_Lean_Expr_appArg_x21(v_a_1687_);
lean_dec(v_a_1687_);
v___x_1698_ = l_Lean_Meta_isExprDefEq(v___x_1694_, v___x_1696_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1698_) == 0)
{
lean_object* v_a_1699_; uint8_t v___x_1700_; 
v_a_1699_ = lean_ctor_get(v___x_1698_, 0);
lean_inc(v_a_1699_);
lean_dec_ref_known(v___x_1698_, 1);
v___x_1700_ = lean_unbox(v_a_1699_);
if (v___x_1700_ == 0)
{
lean_dec(v_a_1699_);
lean_dec_ref(v___x_1697_);
lean_dec_ref(v___x_1695_);
lean_dec(v_a_1684_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
goto v___jp_1680_;
}
else
{
lean_object* v___x_1701_; uint8_t v___x_1702_; lean_object* v___x_1703_; 
lean_inc(v_fvarId_1672_);
v___x_1701_ = l_Lean_mkFVar(v_fvarId_1672_);
v___x_1702_ = lean_unbox(v_a_1699_);
v___x_1703_ = l_Lean_Meta_mkEqOfHEq(v___x_1701_, v___x_1702_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1703_) == 0)
{
lean_object* v_a_1704_; lean_object* v___x_1705_; 
v_a_1704_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_a_1704_);
lean_dec_ref_known(v___x_1703_, 1);
v___x_1705_ = l_Lean_Meta_mkEq(v___x_1695_, v___x_1697_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1705_) == 0)
{
lean_object* v_a_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
v_a_1706_ = lean_ctor_get(v___x_1705_, 0);
lean_inc(v_a_1706_);
lean_dec_ref_known(v___x_1705_, 1);
v___x_1707_ = l_Lean_LocalDecl_userName(v_a_1684_);
lean_dec(v_a_1684_);
v___x_1708_ = l_Lean_MVarId_assert(v_mvarId_1673_, v___x_1707_, v_a_1706_, v_a_1704_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1708_) == 0)
{
if (v_tryToClear_1674_ == 0)
{
lean_object* v_a_1709_; uint8_t v___x_1710_; lean_object* v___x_1711_; 
lean_dec(v_fvarId_1672_);
v_a_1709_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1709_);
lean_dec_ref_known(v___x_1708_, 1);
v___x_1710_ = lean_unbox(v_a_1699_);
lean_dec(v_a_1699_);
v___x_1711_ = l_Lean_Meta_intro1Core(v_a_1709_, v___x_1710_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
return v___x_1711_;
}
else
{
lean_object* v_a_1712_; lean_object* v___x_1713_; 
v_a_1712_ = lean_ctor_get(v___x_1708_, 0);
lean_inc(v_a_1712_);
lean_dec_ref_known(v___x_1708_, 1);
v___x_1713_ = l_Lean_MVarId_tryClear(v_a_1712_, v_fvarId_1672_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
if (lean_obj_tag(v___x_1713_) == 0)
{
lean_object* v_a_1714_; uint8_t v___x_1715_; lean_object* v___x_1716_; 
v_a_1714_ = lean_ctor_get(v___x_1713_, 0);
lean_inc(v_a_1714_);
lean_dec_ref_known(v___x_1713_, 1);
v___x_1715_ = lean_unbox(v_a_1699_);
lean_dec(v_a_1699_);
v___x_1716_ = l_Lean_Meta_intro1Core(v_a_1714_, v___x_1715_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
return v___x_1716_;
}
else
{
lean_object* v_a_1717_; lean_object* v___x_1719_; uint8_t v_isShared_1720_; uint8_t v_isSharedCheck_1724_; 
lean_dec(v_a_1699_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
v_a_1717_ = lean_ctor_get(v___x_1713_, 0);
v_isSharedCheck_1724_ = !lean_is_exclusive(v___x_1713_);
if (v_isSharedCheck_1724_ == 0)
{
v___x_1719_ = v___x_1713_;
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
else
{
lean_inc(v_a_1717_);
lean_dec(v___x_1713_);
v___x_1719_ = lean_box(0);
v_isShared_1720_ = v_isSharedCheck_1724_;
goto v_resetjp_1718_;
}
v_resetjp_1718_:
{
lean_object* v___x_1722_; 
if (v_isShared_1720_ == 0)
{
v___x_1722_ = v___x_1719_;
goto v_reusejp_1721_;
}
else
{
lean_object* v_reuseFailAlloc_1723_; 
v_reuseFailAlloc_1723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1723_, 0, v_a_1717_);
v___x_1722_ = v_reuseFailAlloc_1723_;
goto v_reusejp_1721_;
}
v_reusejp_1721_:
{
return v___x_1722_;
}
}
}
}
}
else
{
lean_object* v_a_1725_; lean_object* v___x_1727_; uint8_t v_isShared_1728_; uint8_t v_isSharedCheck_1732_; 
lean_dec(v_a_1699_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v_fvarId_1672_);
v_a_1725_ = lean_ctor_get(v___x_1708_, 0);
v_isSharedCheck_1732_ = !lean_is_exclusive(v___x_1708_);
if (v_isSharedCheck_1732_ == 0)
{
v___x_1727_ = v___x_1708_;
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
else
{
lean_inc(v_a_1725_);
lean_dec(v___x_1708_);
v___x_1727_ = lean_box(0);
v_isShared_1728_ = v_isSharedCheck_1732_;
goto v_resetjp_1726_;
}
v_resetjp_1726_:
{
lean_object* v___x_1730_; 
if (v_isShared_1728_ == 0)
{
v___x_1730_ = v___x_1727_;
goto v_reusejp_1729_;
}
else
{
lean_object* v_reuseFailAlloc_1731_; 
v_reuseFailAlloc_1731_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1731_, 0, v_a_1725_);
v___x_1730_ = v_reuseFailAlloc_1731_;
goto v_reusejp_1729_;
}
v_reusejp_1729_:
{
return v___x_1730_;
}
}
}
}
else
{
lean_object* v_a_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1740_; 
lean_dec(v_a_1704_);
lean_dec(v_a_1699_);
lean_dec(v_a_1684_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v_mvarId_1673_);
lean_dec(v_fvarId_1672_);
v_a_1733_ = lean_ctor_get(v___x_1705_, 0);
v_isSharedCheck_1740_ = !lean_is_exclusive(v___x_1705_);
if (v_isSharedCheck_1740_ == 0)
{
v___x_1735_ = v___x_1705_;
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_a_1733_);
lean_dec(v___x_1705_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1740_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v___x_1738_; 
if (v_isShared_1736_ == 0)
{
v___x_1738_ = v___x_1735_;
goto v_reusejp_1737_;
}
else
{
lean_object* v_reuseFailAlloc_1739_; 
v_reuseFailAlloc_1739_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1739_, 0, v_a_1733_);
v___x_1738_ = v_reuseFailAlloc_1739_;
goto v_reusejp_1737_;
}
v_reusejp_1737_:
{
return v___x_1738_;
}
}
}
}
else
{
lean_object* v_a_1741_; lean_object* v___x_1743_; uint8_t v_isShared_1744_; uint8_t v_isSharedCheck_1748_; 
lean_dec(v_a_1699_);
lean_dec_ref(v___x_1697_);
lean_dec_ref(v___x_1695_);
lean_dec(v_a_1684_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v_mvarId_1673_);
lean_dec(v_fvarId_1672_);
v_a_1741_ = lean_ctor_get(v___x_1703_, 0);
v_isSharedCheck_1748_ = !lean_is_exclusive(v___x_1703_);
if (v_isSharedCheck_1748_ == 0)
{
v___x_1743_ = v___x_1703_;
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
else
{
lean_inc(v_a_1741_);
lean_dec(v___x_1703_);
v___x_1743_ = lean_box(0);
v_isShared_1744_ = v_isSharedCheck_1748_;
goto v_resetjp_1742_;
}
v_resetjp_1742_:
{
lean_object* v___x_1746_; 
if (v_isShared_1744_ == 0)
{
v___x_1746_ = v___x_1743_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1747_; 
v_reuseFailAlloc_1747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1747_, 0, v_a_1741_);
v___x_1746_ = v_reuseFailAlloc_1747_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
return v___x_1746_;
}
}
}
}
}
else
{
lean_object* v_a_1749_; lean_object* v___x_1751_; uint8_t v_isShared_1752_; uint8_t v_isSharedCheck_1756_; 
lean_dec_ref(v___x_1697_);
lean_dec_ref(v___x_1695_);
lean_dec(v_a_1684_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v_mvarId_1673_);
lean_dec(v_fvarId_1672_);
v_a_1749_ = lean_ctor_get(v___x_1698_, 0);
v_isSharedCheck_1756_ = !lean_is_exclusive(v___x_1698_);
if (v_isSharedCheck_1756_ == 0)
{
v___x_1751_ = v___x_1698_;
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
else
{
lean_inc(v_a_1749_);
lean_dec(v___x_1698_);
v___x_1751_ = lean_box(0);
v_isShared_1752_ = v_isSharedCheck_1756_;
goto v_resetjp_1750_;
}
v_resetjp_1750_:
{
lean_object* v___x_1754_; 
if (v_isShared_1752_ == 0)
{
v___x_1754_ = v___x_1751_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v_a_1749_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
}
}
}
else
{
lean_object* v_a_1757_; lean_object* v___x_1759_; uint8_t v_isShared_1760_; uint8_t v_isSharedCheck_1764_; 
lean_dec(v_a_1684_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v_mvarId_1673_);
lean_dec(v_fvarId_1672_);
v_a_1757_ = lean_ctor_get(v___x_1686_, 0);
v_isSharedCheck_1764_ = !lean_is_exclusive(v___x_1686_);
if (v_isSharedCheck_1764_ == 0)
{
v___x_1759_ = v___x_1686_;
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
else
{
lean_inc(v_a_1757_);
lean_dec(v___x_1686_);
v___x_1759_ = lean_box(0);
v_isShared_1760_ = v_isSharedCheck_1764_;
goto v_resetjp_1758_;
}
v_resetjp_1758_:
{
lean_object* v___x_1762_; 
if (v_isShared_1760_ == 0)
{
v___x_1762_ = v___x_1759_;
goto v_reusejp_1761_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_a_1757_);
v___x_1762_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1761_;
}
v_reusejp_1761_:
{
return v___x_1762_;
}
}
}
}
else
{
lean_object* v_a_1765_; lean_object* v___x_1767_; uint8_t v_isShared_1768_; uint8_t v_isSharedCheck_1772_; 
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v_mvarId_1673_);
lean_dec(v_fvarId_1672_);
v_a_1765_ = lean_ctor_get(v___x_1683_, 0);
v_isSharedCheck_1772_ = !lean_is_exclusive(v___x_1683_);
if (v_isSharedCheck_1772_ == 0)
{
v___x_1767_ = v___x_1683_;
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
else
{
lean_inc(v_a_1765_);
lean_dec(v___x_1683_);
v___x_1767_ = lean_box(0);
v_isShared_1768_ = v_isSharedCheck_1772_;
goto v_resetjp_1766_;
}
v_resetjp_1766_:
{
lean_object* v___x_1770_; 
if (v_isShared_1768_ == 0)
{
v___x_1770_ = v___x_1767_;
goto v_reusejp_1769_;
}
else
{
lean_object* v_reuseFailAlloc_1771_; 
v_reuseFailAlloc_1771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1771_, 0, v_a_1765_);
v___x_1770_ = v_reuseFailAlloc_1771_;
goto v_reusejp_1769_;
}
v_reusejp_1769_:
{
return v___x_1770_;
}
}
}
v___jp_1680_:
{
lean_object* v___x_1681_; lean_object* v___x_1682_; 
v___x_1681_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1681_, 0, v_fvarId_1672_);
lean_ctor_set(v___x_1681_, 1, v_mvarId_1673_);
v___x_1682_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1682_, 0, v___x_1681_);
return v___x_1682_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___lam__0___boxed(lean_object* v_fvarId_1773_, lean_object* v_mvarId_1774_, lean_object* v_tryToClear_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_, lean_object* v___y_1779_, lean_object* v___y_1780_){
_start:
{
uint8_t v_tryToClear_boxed_1781_; lean_object* v_res_1782_; 
v_tryToClear_boxed_1781_ = lean_unbox(v_tryToClear_1775_);
v_res_1782_ = l_Lean_Meta_heqToEq___lam__0(v_fvarId_1773_, v_mvarId_1774_, v_tryToClear_boxed_1781_, v___y_1776_, v___y_1777_, v___y_1778_, v___y_1779_);
return v_res_1782_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq(lean_object* v_mvarId_1783_, lean_object* v_fvarId_1784_, uint8_t v_tryToClear_1785_, lean_object* v_a_1786_, lean_object* v_a_1787_, lean_object* v_a_1788_, lean_object* v_a_1789_){
_start:
{
lean_object* v___x_1791_; lean_object* v___f_1792_; lean_object* v___x_1793_; 
v___x_1791_ = lean_box(v_tryToClear_1785_);
lean_inc(v_mvarId_1783_);
v___f_1792_ = lean_alloc_closure((void*)(l_Lean_Meta_heqToEq___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1792_, 0, v_fvarId_1784_);
lean_closure_set(v___f_1792_, 1, v_mvarId_1783_);
lean_closure_set(v___f_1792_, 2, v___x_1791_);
v___x_1793_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_1783_, v___f_1792_, v_a_1786_, v_a_1787_, v_a_1788_, v_a_1789_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_heqToEq___boxed(lean_object* v_mvarId_1794_, lean_object* v_fvarId_1795_, lean_object* v_tryToClear_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_, lean_object* v_a_1801_){
_start:
{
uint8_t v_tryToClear_boxed_1802_; lean_object* v_res_1803_; 
v_tryToClear_boxed_1802_ = lean_unbox(v_tryToClear_1796_);
v_res_1803_ = l_Lean_Meta_heqToEq(v_mvarId_1794_, v_fvarId_1795_, v_tryToClear_boxed_1802_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
lean_dec(v_a_1800_);
lean_dec_ref(v_a_1799_);
lean_dec(v_a_1798_);
lean_dec_ref(v_a_1797_);
return v_res_1803_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(lean_object* v_x_1807_, lean_object* v_as_1808_, size_t v_sz_1809_, size_t v_i_1810_, lean_object* v_b_1811_, lean_object* v___y_1812_, lean_object* v___y_1813_, lean_object* v___y_1814_, lean_object* v___y_1815_){
_start:
{
lean_object* v_a_1818_; uint8_t v___x_1822_; 
v___x_1822_ = lean_usize_dec_lt(v_i_1810_, v_sz_1809_);
if (v___x_1822_ == 0)
{
lean_object* v___x_1823_; 
lean_dec(v_x_1807_);
v___x_1823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1823_, 0, v_b_1811_);
return v___x_1823_;
}
else
{
lean_object* v___x_1824_; lean_object* v_a_1826_; lean_object* v___x_1830_; lean_object* v_a_1831_; 
lean_dec_ref(v_b_1811_);
v___x_1824_ = lean_box(0);
v___x_1830_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1831_ = lean_array_uget(v_as_1808_, v_i_1810_);
if (lean_obj_tag(v_a_1831_) == 0)
{
v_a_1818_ = v___x_1830_;
goto v___jp_1817_;
}
else
{
lean_object* v_val_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1931_; 
v_val_1832_ = lean_ctor_get(v_a_1831_, 0);
v_isSharedCheck_1931_ = !lean_is_exclusive(v_a_1831_);
if (v_isSharedCheck_1931_ == 0)
{
v___x_1834_ = v_a_1831_;
v_isShared_1835_ = v_isSharedCheck_1931_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_val_1832_);
lean_dec(v_a_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1931_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
uint8_t v___x_1836_; 
v___x_1836_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1832_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v___x_1838_; 
v___x_1837_ = l_Lean_LocalDecl_type(v_val_1832_);
v___x_1838_ = l_Lean_Meta_matchEq_x3f(v___x_1837_, v___y_1812_, v___y_1813_, v___y_1814_, v___y_1815_);
if (lean_obj_tag(v___x_1838_) == 0)
{
lean_object* v_a_1839_; 
v_a_1839_ = lean_ctor_get(v___x_1838_, 0);
lean_inc(v_a_1839_);
lean_dec_ref_known(v___x_1838_, 1);
if (lean_obj_tag(v_a_1839_) == 1)
{
lean_object* v_val_1840_; lean_object* v___x_1842_; uint8_t v_isShared_1843_; uint8_t v_isSharedCheck_1922_; 
v_val_1840_ = lean_ctor_get(v_a_1839_, 0);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_a_1839_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1842_ = v_a_1839_;
v_isShared_1843_ = v_isSharedCheck_1922_;
goto v_resetjp_1841_;
}
else
{
lean_inc(v_val_1840_);
lean_dec(v_a_1839_);
v___x_1842_ = lean_box(0);
v_isShared_1843_ = v_isSharedCheck_1922_;
goto v_resetjp_1841_;
}
v_resetjp_1841_:
{
lean_object* v_snd_1844_; lean_object* v___x_1846_; uint8_t v_isShared_1847_; uint8_t v_isSharedCheck_1920_; 
v_snd_1844_ = lean_ctor_get(v_val_1840_, 1);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_val_1840_);
if (v_isSharedCheck_1920_ == 0)
{
lean_object* v_unused_1921_; 
v_unused_1921_ = lean_ctor_get(v_val_1840_, 0);
lean_dec(v_unused_1921_);
v___x_1846_ = v_val_1840_;
v_isShared_1847_ = v_isSharedCheck_1920_;
goto v_resetjp_1845_;
}
else
{
lean_inc(v_snd_1844_);
lean_dec(v_val_1840_);
v___x_1846_ = lean_box(0);
v_isShared_1847_ = v_isSharedCheck_1920_;
goto v_resetjp_1845_;
}
v_resetjp_1845_:
{
lean_object* v_fst_1848_; lean_object* v_snd_1849_; lean_object* v___x_1851_; uint8_t v_isShared_1852_; uint8_t v_isSharedCheck_1919_; 
v_fst_1848_ = lean_ctor_get(v_snd_1844_, 0);
v_snd_1849_ = lean_ctor_get(v_snd_1844_, 1);
v_isSharedCheck_1919_ = !lean_is_exclusive(v_snd_1844_);
if (v_isSharedCheck_1919_ == 0)
{
v___x_1851_ = v_snd_1844_;
v_isShared_1852_ = v_isSharedCheck_1919_;
goto v_resetjp_1850_;
}
else
{
lean_inc(v_snd_1849_);
lean_inc(v_fst_1848_);
lean_dec(v_snd_1844_);
v___x_1851_ = lean_box(0);
v_isShared_1852_ = v_isSharedCheck_1919_;
goto v_resetjp_1850_;
}
v_resetjp_1850_:
{
lean_object* v___x_1853_; 
v___x_1853_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_1848_, v___y_1813_);
if (lean_obj_tag(v___x_1853_) == 0)
{
lean_object* v_a_1854_; lean_object* v___x_1855_; 
v_a_1854_ = lean_ctor_get(v___x_1853_, 0);
lean_inc(v_a_1854_);
lean_dec_ref_known(v___x_1853_, 1);
v___x_1855_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_1849_, v___y_1813_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_object* v_a_1856_; lean_object* v___y_1858_; uint8_t v___x_1881_; 
v_a_1856_ = lean_ctor_get(v___x_1855_, 0);
lean_inc(v_a_1856_);
lean_dec_ref_known(v___x_1855_, 1);
v___x_1881_ = l_Lean_Expr_isFVar(v_a_1856_);
if (v___x_1881_ == 0)
{
lean_del_object(v___x_1846_);
lean_del_object(v___x_1834_);
v___y_1858_ = v___y_1813_;
goto v___jp_1857_;
}
else
{
lean_object* v___x_1882_; uint8_t v___x_1883_; 
v___x_1882_ = l_Lean_Expr_fvarId_x21(v_a_1856_);
v___x_1883_ = l_Lean_instBEqFVarId_beq(v___x_1882_, v_x_1807_);
lean_dec(v___x_1882_);
if (v___x_1883_ == 0)
{
lean_del_object(v___x_1846_);
lean_del_object(v___x_1834_);
v___y_1858_ = v___y_1813_;
goto v___jp_1857_;
}
else
{
lean_object* v___x_1884_; 
lean_inc(v_x_1807_);
lean_inc(v_a_1854_);
v___x_1884_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1854_, v_x_1807_, v___y_1813_);
if (lean_obj_tag(v___x_1884_) == 0)
{
lean_object* v_a_1885_; uint8_t v___x_1886_; 
v_a_1885_ = lean_ctor_get(v___x_1884_, 0);
lean_inc(v_a_1885_);
lean_dec_ref_known(v___x_1884_, 1);
v___x_1886_ = lean_unbox(v_a_1885_);
lean_dec(v_a_1885_);
if (v___x_1886_ == 0)
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1890_; 
lean_dec(v_a_1856_);
lean_dec(v_a_1854_);
lean_del_object(v___x_1851_);
lean_del_object(v___x_1842_);
lean_dec(v_x_1807_);
v___x_1887_ = l_Lean_LocalDecl_fvarId(v_val_1832_);
lean_dec(v_val_1832_);
v___x_1888_ = lean_box(v___x_1883_);
if (v_isShared_1847_ == 0)
{
lean_ctor_set(v___x_1846_, 1, v___x_1888_);
lean_ctor_set(v___x_1846_, 0, v___x_1887_);
v___x_1890_ = v___x_1846_;
goto v_reusejp_1889_;
}
else
{
lean_object* v_reuseFailAlloc_1894_; 
v_reuseFailAlloc_1894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1894_, 0, v___x_1887_);
lean_ctor_set(v_reuseFailAlloc_1894_, 1, v___x_1888_);
v___x_1890_ = v_reuseFailAlloc_1894_;
goto v_reusejp_1889_;
}
v_reusejp_1889_:
{
lean_object* v___x_1892_; 
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 0, v___x_1890_);
v___x_1892_ = v___x_1834_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
v_a_1826_ = v___x_1892_;
goto v___jp_1825_;
}
}
}
else
{
lean_del_object(v___x_1846_);
lean_del_object(v___x_1834_);
v___y_1858_ = v___y_1813_;
goto v___jp_1857_;
}
}
else
{
lean_object* v_a_1895_; lean_object* v___x_1897_; uint8_t v_isShared_1898_; uint8_t v_isSharedCheck_1902_; 
lean_dec(v_a_1856_);
lean_dec(v_a_1854_);
lean_del_object(v___x_1851_);
lean_del_object(v___x_1846_);
lean_del_object(v___x_1842_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_x_1807_);
v_a_1895_ = lean_ctor_get(v___x_1884_, 0);
v_isSharedCheck_1902_ = !lean_is_exclusive(v___x_1884_);
if (v_isSharedCheck_1902_ == 0)
{
v___x_1897_ = v___x_1884_;
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
else
{
lean_inc(v_a_1895_);
lean_dec(v___x_1884_);
v___x_1897_ = lean_box(0);
v_isShared_1898_ = v_isSharedCheck_1902_;
goto v_resetjp_1896_;
}
v_resetjp_1896_:
{
lean_object* v___x_1900_; 
if (v_isShared_1898_ == 0)
{
v___x_1900_ = v___x_1897_;
goto v_reusejp_1899_;
}
else
{
lean_object* v_reuseFailAlloc_1901_; 
v_reuseFailAlloc_1901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1901_, 0, v_a_1895_);
v___x_1900_ = v_reuseFailAlloc_1901_;
goto v_reusejp_1899_;
}
v_reusejp_1899_:
{
return v___x_1900_;
}
}
}
}
}
v___jp_1857_:
{
uint8_t v___x_1859_; 
v___x_1859_ = l_Lean_Expr_isFVar(v_a_1854_);
if (v___x_1859_ == 0)
{
lean_dec(v_a_1856_);
lean_dec(v_a_1854_);
lean_del_object(v___x_1851_);
lean_del_object(v___x_1842_);
lean_dec(v_val_1832_);
v_a_1818_ = v___x_1830_;
goto v___jp_1817_;
}
else
{
lean_object* v___x_1860_; uint8_t v___x_1861_; 
v___x_1860_ = l_Lean_Expr_fvarId_x21(v_a_1854_);
lean_dec(v_a_1854_);
v___x_1861_ = l_Lean_instBEqFVarId_beq(v___x_1860_, v_x_1807_);
lean_dec(v___x_1860_);
if (v___x_1861_ == 0)
{
lean_dec(v_a_1856_);
lean_del_object(v___x_1851_);
lean_del_object(v___x_1842_);
lean_dec(v_val_1832_);
v_a_1818_ = v___x_1830_;
goto v___jp_1817_;
}
else
{
lean_object* v___x_1862_; 
lean_inc(v_x_1807_);
v___x_1862_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1856_, v_x_1807_, v___y_1858_);
if (lean_obj_tag(v___x_1862_) == 0)
{
lean_object* v_a_1863_; uint8_t v___x_1864_; 
v_a_1863_ = lean_ctor_get(v___x_1862_, 0);
lean_inc(v_a_1863_);
lean_dec_ref_known(v___x_1862_, 1);
v___x_1864_ = lean_unbox(v_a_1863_);
lean_dec(v_a_1863_);
if (v___x_1864_ == 0)
{
lean_object* v___x_1865_; lean_object* v___x_1866_; lean_object* v___x_1868_; 
lean_dec(v_x_1807_);
v___x_1865_ = l_Lean_LocalDecl_fvarId(v_val_1832_);
lean_dec(v_val_1832_);
v___x_1866_ = lean_box(v___x_1836_);
if (v_isShared_1852_ == 0)
{
lean_ctor_set(v___x_1851_, 1, v___x_1866_);
lean_ctor_set(v___x_1851_, 0, v___x_1865_);
v___x_1868_ = v___x_1851_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1872_; 
v_reuseFailAlloc_1872_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1872_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1872_, 1, v___x_1866_);
v___x_1868_ = v_reuseFailAlloc_1872_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
lean_object* v___x_1870_; 
if (v_isShared_1843_ == 0)
{
lean_ctor_set(v___x_1842_, 0, v___x_1868_);
v___x_1870_ = v___x_1842_;
goto v_reusejp_1869_;
}
else
{
lean_object* v_reuseFailAlloc_1871_; 
v_reuseFailAlloc_1871_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1871_, 0, v___x_1868_);
v___x_1870_ = v_reuseFailAlloc_1871_;
goto v_reusejp_1869_;
}
v_reusejp_1869_:
{
v_a_1826_ = v___x_1870_;
goto v___jp_1825_;
}
}
}
else
{
lean_del_object(v___x_1851_);
lean_del_object(v___x_1842_);
lean_dec(v_val_1832_);
v_a_1818_ = v___x_1830_;
goto v___jp_1817_;
}
}
else
{
lean_object* v_a_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1880_; 
lean_del_object(v___x_1851_);
lean_del_object(v___x_1842_);
lean_dec(v_val_1832_);
lean_dec(v_x_1807_);
v_a_1873_ = lean_ctor_get(v___x_1862_, 0);
v_isSharedCheck_1880_ = !lean_is_exclusive(v___x_1862_);
if (v_isSharedCheck_1880_ == 0)
{
v___x_1875_ = v___x_1862_;
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_a_1873_);
lean_dec(v___x_1862_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1880_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1878_; 
if (v_isShared_1876_ == 0)
{
v___x_1878_ = v___x_1875_;
goto v_reusejp_1877_;
}
else
{
lean_object* v_reuseFailAlloc_1879_; 
v_reuseFailAlloc_1879_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1879_, 0, v_a_1873_);
v___x_1878_ = v_reuseFailAlloc_1879_;
goto v_reusejp_1877_;
}
v_reusejp_1877_:
{
return v___x_1878_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1903_; lean_object* v___x_1905_; uint8_t v_isShared_1906_; uint8_t v_isSharedCheck_1910_; 
lean_dec(v_a_1854_);
lean_del_object(v___x_1851_);
lean_del_object(v___x_1846_);
lean_del_object(v___x_1842_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_x_1807_);
v_a_1903_ = lean_ctor_get(v___x_1855_, 0);
v_isSharedCheck_1910_ = !lean_is_exclusive(v___x_1855_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1905_ = v___x_1855_;
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
else
{
lean_inc(v_a_1903_);
lean_dec(v___x_1855_);
v___x_1905_ = lean_box(0);
v_isShared_1906_ = v_isSharedCheck_1910_;
goto v_resetjp_1904_;
}
v_resetjp_1904_:
{
lean_object* v___x_1908_; 
if (v_isShared_1906_ == 0)
{
v___x_1908_ = v___x_1905_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v_a_1903_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
else
{
lean_object* v_a_1911_; lean_object* v___x_1913_; uint8_t v_isShared_1914_; uint8_t v_isSharedCheck_1918_; 
lean_del_object(v___x_1851_);
lean_dec(v_snd_1849_);
lean_del_object(v___x_1846_);
lean_del_object(v___x_1842_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_x_1807_);
v_a_1911_ = lean_ctor_get(v___x_1853_, 0);
v_isSharedCheck_1918_ = !lean_is_exclusive(v___x_1853_);
if (v_isSharedCheck_1918_ == 0)
{
v___x_1913_ = v___x_1853_;
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
else
{
lean_inc(v_a_1911_);
lean_dec(v___x_1853_);
v___x_1913_ = lean_box(0);
v_isShared_1914_ = v_isSharedCheck_1918_;
goto v_resetjp_1912_;
}
v_resetjp_1912_:
{
lean_object* v___x_1916_; 
if (v_isShared_1914_ == 0)
{
v___x_1916_ = v___x_1913_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_a_1911_);
v___x_1916_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
return v___x_1916_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1839_);
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
v_a_1818_ = v___x_1830_;
goto v___jp_1817_;
}
}
else
{
lean_object* v_a_1923_; lean_object* v___x_1925_; uint8_t v_isShared_1926_; uint8_t v_isSharedCheck_1930_; 
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
lean_dec(v_x_1807_);
v_a_1923_ = lean_ctor_get(v___x_1838_, 0);
v_isSharedCheck_1930_ = !lean_is_exclusive(v___x_1838_);
if (v_isSharedCheck_1930_ == 0)
{
v___x_1925_ = v___x_1838_;
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
else
{
lean_inc(v_a_1923_);
lean_dec(v___x_1838_);
v___x_1925_ = lean_box(0);
v_isShared_1926_ = v_isSharedCheck_1930_;
goto v_resetjp_1924_;
}
v_resetjp_1924_:
{
lean_object* v___x_1928_; 
if (v_isShared_1926_ == 0)
{
v___x_1928_ = v___x_1925_;
goto v_reusejp_1927_;
}
else
{
lean_object* v_reuseFailAlloc_1929_; 
v_reuseFailAlloc_1929_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1929_, 0, v_a_1923_);
v___x_1928_ = v_reuseFailAlloc_1929_;
goto v_reusejp_1927_;
}
v_reusejp_1927_:
{
return v___x_1928_;
}
}
}
}
else
{
lean_del_object(v___x_1834_);
lean_dec(v_val_1832_);
v_a_1818_ = v___x_1830_;
goto v___jp_1817_;
}
}
}
v___jp_1825_:
{
lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; 
v___x_1827_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1827_, 0, v_a_1826_);
v___x_1828_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1828_, 0, v___x_1827_);
lean_ctor_set(v___x_1828_, 1, v___x_1824_);
v___x_1829_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1829_, 0, v___x_1828_);
return v___x_1829_;
}
}
v___jp_1817_:
{
size_t v___x_1819_; size_t v___x_1820_; 
v___x_1819_ = ((size_t)1ULL);
v___x_1820_ = lean_usize_add(v_i_1810_, v___x_1819_);
lean_inc_ref(v_a_1818_);
v_i_1810_ = v___x_1820_;
v_b_1811_ = v_a_1818_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___boxed(lean_object* v_x_1932_, lean_object* v_as_1933_, lean_object* v_sz_1934_, lean_object* v_i_1935_, lean_object* v_b_1936_, lean_object* v___y_1937_, lean_object* v___y_1938_, lean_object* v___y_1939_, lean_object* v___y_1940_, lean_object* v___y_1941_){
_start:
{
size_t v_sz_boxed_1942_; size_t v_i_boxed_1943_; lean_object* v_res_1944_; 
v_sz_boxed_1942_ = lean_unbox_usize(v_sz_1934_);
lean_dec(v_sz_1934_);
v_i_boxed_1943_ = lean_unbox_usize(v_i_1935_);
lean_dec(v_i_1935_);
v_res_1944_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1932_, v_as_1933_, v_sz_boxed_1942_, v_i_boxed_1943_, v_b_1936_, v___y_1937_, v___y_1938_, v___y_1939_, v___y_1940_);
lean_dec(v___y_1940_);
lean_dec_ref(v___y_1939_);
lean_dec(v___y_1938_);
lean_dec_ref(v___y_1937_);
lean_dec_ref(v_as_1933_);
return v_res_1944_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(lean_object* v_x_1945_, lean_object* v_as_1946_, size_t v_sz_1947_, size_t v_i_1948_, lean_object* v_b_1949_, lean_object* v___y_1950_, lean_object* v___y_1951_, lean_object* v___y_1952_, lean_object* v___y_1953_){
_start:
{
lean_object* v_a_1956_; uint8_t v___x_1960_; 
v___x_1960_ = lean_usize_dec_lt(v_i_1948_, v_sz_1947_);
if (v___x_1960_ == 0)
{
lean_object* v___x_1961_; 
lean_dec(v_x_1945_);
v___x_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1961_, 0, v_b_1949_);
return v___x_1961_;
}
else
{
lean_object* v___x_1962_; lean_object* v_a_1964_; lean_object* v___x_1968_; lean_object* v_a_1969_; 
lean_dec_ref(v_b_1949_);
v___x_1962_ = lean_box(0);
v___x_1968_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_1969_ = lean_array_uget(v_as_1946_, v_i_1948_);
if (lean_obj_tag(v_a_1969_) == 0)
{
v_a_1956_ = v___x_1968_;
goto v___jp_1955_;
}
else
{
lean_object* v_val_1970_; lean_object* v___x_1972_; uint8_t v_isShared_1973_; uint8_t v_isSharedCheck_2069_; 
v_val_1970_ = lean_ctor_get(v_a_1969_, 0);
v_isSharedCheck_2069_ = !lean_is_exclusive(v_a_1969_);
if (v_isSharedCheck_2069_ == 0)
{
v___x_1972_ = v_a_1969_;
v_isShared_1973_ = v_isSharedCheck_2069_;
goto v_resetjp_1971_;
}
else
{
lean_inc(v_val_1970_);
lean_dec(v_a_1969_);
v___x_1972_ = lean_box(0);
v_isShared_1973_ = v_isSharedCheck_2069_;
goto v_resetjp_1971_;
}
v_resetjp_1971_:
{
uint8_t v___x_1974_; 
v___x_1974_ = l_Lean_LocalDecl_isImplementationDetail(v_val_1970_);
if (v___x_1974_ == 0)
{
lean_object* v___x_1975_; lean_object* v___x_1976_; 
v___x_1975_ = l_Lean_LocalDecl_type(v_val_1970_);
v___x_1976_ = l_Lean_Meta_matchEq_x3f(v___x_1975_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
if (lean_obj_tag(v___x_1976_) == 0)
{
lean_object* v_a_1977_; 
v_a_1977_ = lean_ctor_get(v___x_1976_, 0);
lean_inc(v_a_1977_);
lean_dec_ref_known(v___x_1976_, 1);
if (lean_obj_tag(v_a_1977_) == 1)
{
lean_object* v_val_1978_; lean_object* v___x_1980_; uint8_t v_isShared_1981_; uint8_t v_isSharedCheck_2060_; 
v_val_1978_ = lean_ctor_get(v_a_1977_, 0);
v_isSharedCheck_2060_ = !lean_is_exclusive(v_a_1977_);
if (v_isSharedCheck_2060_ == 0)
{
v___x_1980_ = v_a_1977_;
v_isShared_1981_ = v_isSharedCheck_2060_;
goto v_resetjp_1979_;
}
else
{
lean_inc(v_val_1978_);
lean_dec(v_a_1977_);
v___x_1980_ = lean_box(0);
v_isShared_1981_ = v_isSharedCheck_2060_;
goto v_resetjp_1979_;
}
v_resetjp_1979_:
{
lean_object* v_snd_1982_; lean_object* v___x_1984_; uint8_t v_isShared_1985_; uint8_t v_isSharedCheck_2058_; 
v_snd_1982_ = lean_ctor_get(v_val_1978_, 1);
v_isSharedCheck_2058_ = !lean_is_exclusive(v_val_1978_);
if (v_isSharedCheck_2058_ == 0)
{
lean_object* v_unused_2059_; 
v_unused_2059_ = lean_ctor_get(v_val_1978_, 0);
lean_dec(v_unused_2059_);
v___x_1984_ = v_val_1978_;
v_isShared_1985_ = v_isSharedCheck_2058_;
goto v_resetjp_1983_;
}
else
{
lean_inc(v_snd_1982_);
lean_dec(v_val_1978_);
v___x_1984_ = lean_box(0);
v_isShared_1985_ = v_isSharedCheck_2058_;
goto v_resetjp_1983_;
}
v_resetjp_1983_:
{
lean_object* v_fst_1986_; lean_object* v_snd_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_2057_; 
v_fst_1986_ = lean_ctor_get(v_snd_1982_, 0);
v_snd_1987_ = lean_ctor_get(v_snd_1982_, 1);
v_isSharedCheck_2057_ = !lean_is_exclusive(v_snd_1982_);
if (v_isSharedCheck_2057_ == 0)
{
v___x_1989_ = v_snd_1982_;
v_isShared_1990_ = v_isSharedCheck_2057_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_snd_1987_);
lean_inc(v_fst_1986_);
lean_dec(v_snd_1982_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_2057_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1991_; 
v___x_1991_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_fst_1986_, v___y_1951_);
if (lean_obj_tag(v___x_1991_) == 0)
{
lean_object* v_a_1992_; lean_object* v___x_1993_; 
v_a_1992_ = lean_ctor_get(v___x_1991_, 0);
lean_inc(v_a_1992_);
lean_dec_ref_known(v___x_1991_, 1);
v___x_1993_ = l_Lean_instantiateMVars___at___00Lean_Meta_substCore_spec__0___redArg(v_snd_1987_, v___y_1951_);
if (lean_obj_tag(v___x_1993_) == 0)
{
lean_object* v_a_1994_; lean_object* v___y_1996_; uint8_t v___x_2019_; 
v_a_1994_ = lean_ctor_get(v___x_1993_, 0);
lean_inc(v_a_1994_);
lean_dec_ref_known(v___x_1993_, 1);
v___x_2019_ = l_Lean_Expr_isFVar(v_a_1994_);
if (v___x_2019_ == 0)
{
lean_del_object(v___x_1984_);
lean_del_object(v___x_1972_);
v___y_1996_ = v___y_1951_;
goto v___jp_1995_;
}
else
{
lean_object* v___x_2020_; uint8_t v___x_2021_; 
v___x_2020_ = l_Lean_Expr_fvarId_x21(v_a_1994_);
v___x_2021_ = l_Lean_instBEqFVarId_beq(v___x_2020_, v_x_1945_);
lean_dec(v___x_2020_);
if (v___x_2021_ == 0)
{
lean_del_object(v___x_1984_);
lean_del_object(v___x_1972_);
v___y_1996_ = v___y_1951_;
goto v___jp_1995_;
}
else
{
lean_object* v___x_2022_; 
lean_inc(v_x_1945_);
lean_inc(v_a_1992_);
v___x_2022_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1992_, v_x_1945_, v___y_1951_);
if (lean_obj_tag(v___x_2022_) == 0)
{
lean_object* v_a_2023_; uint8_t v___x_2024_; 
v_a_2023_ = lean_ctor_get(v___x_2022_, 0);
lean_inc(v_a_2023_);
lean_dec_ref_known(v___x_2022_, 1);
v___x_2024_ = lean_unbox(v_a_2023_);
lean_dec(v_a_2023_);
if (v___x_2024_ == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2028_; 
lean_dec(v_a_1994_);
lean_dec(v_a_1992_);
lean_del_object(v___x_1989_);
lean_del_object(v___x_1980_);
lean_dec(v_x_1945_);
v___x_2025_ = l_Lean_LocalDecl_fvarId(v_val_1970_);
lean_dec(v_val_1970_);
v___x_2026_ = lean_box(v___x_2021_);
if (v_isShared_1985_ == 0)
{
lean_ctor_set(v___x_1984_, 1, v___x_2026_);
lean_ctor_set(v___x_1984_, 0, v___x_2025_);
v___x_2028_ = v___x_1984_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2032_, 1, v___x_2026_);
v___x_2028_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
lean_object* v___x_2030_; 
if (v_isShared_1973_ == 0)
{
lean_ctor_set(v___x_1972_, 0, v___x_2028_);
v___x_2030_ = v___x_1972_;
goto v_reusejp_2029_;
}
else
{
lean_object* v_reuseFailAlloc_2031_; 
v_reuseFailAlloc_2031_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2031_, 0, v___x_2028_);
v___x_2030_ = v_reuseFailAlloc_2031_;
goto v_reusejp_2029_;
}
v_reusejp_2029_:
{
v_a_1964_ = v___x_2030_;
goto v___jp_1963_;
}
}
}
else
{
lean_del_object(v___x_1984_);
lean_del_object(v___x_1972_);
v___y_1996_ = v___y_1951_;
goto v___jp_1995_;
}
}
else
{
lean_object* v_a_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2040_; 
lean_dec(v_a_1994_);
lean_dec(v_a_1992_);
lean_del_object(v___x_1989_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1980_);
lean_del_object(v___x_1972_);
lean_dec(v_val_1970_);
lean_dec(v_x_1945_);
v_a_2033_ = lean_ctor_get(v___x_2022_, 0);
v_isSharedCheck_2040_ = !lean_is_exclusive(v___x_2022_);
if (v_isSharedCheck_2040_ == 0)
{
v___x_2035_ = v___x_2022_;
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_a_2033_);
lean_dec(v___x_2022_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2040_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v___x_2038_; 
if (v_isShared_2036_ == 0)
{
v___x_2038_ = v___x_2035_;
goto v_reusejp_2037_;
}
else
{
lean_object* v_reuseFailAlloc_2039_; 
v_reuseFailAlloc_2039_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2039_, 0, v_a_2033_);
v___x_2038_ = v_reuseFailAlloc_2039_;
goto v_reusejp_2037_;
}
v_reusejp_2037_:
{
return v___x_2038_;
}
}
}
}
}
v___jp_1995_:
{
uint8_t v___x_1997_; 
v___x_1997_ = l_Lean_Expr_isFVar(v_a_1992_);
if (v___x_1997_ == 0)
{
lean_dec(v_a_1994_);
lean_dec(v_a_1992_);
lean_del_object(v___x_1989_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1970_);
v_a_1956_ = v___x_1968_;
goto v___jp_1955_;
}
else
{
lean_object* v___x_1998_; uint8_t v___x_1999_; 
v___x_1998_ = l_Lean_Expr_fvarId_x21(v_a_1992_);
lean_dec(v_a_1992_);
v___x_1999_ = l_Lean_instBEqFVarId_beq(v___x_1998_, v_x_1945_);
lean_dec(v___x_1998_);
if (v___x_1999_ == 0)
{
lean_dec(v_a_1994_);
lean_del_object(v___x_1989_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1970_);
v_a_1956_ = v___x_1968_;
goto v___jp_1955_;
}
else
{
lean_object* v___x_2000_; 
lean_inc(v_x_1945_);
v___x_2000_ = l_Lean_exprDependsOn___at___00Lean_Meta_substCore_spec__3___redArg(v_a_1994_, v_x_1945_, v___y_1996_);
if (lean_obj_tag(v___x_2000_) == 0)
{
lean_object* v_a_2001_; uint8_t v___x_2002_; 
v_a_2001_ = lean_ctor_get(v___x_2000_, 0);
lean_inc(v_a_2001_);
lean_dec_ref_known(v___x_2000_, 1);
v___x_2002_ = lean_unbox(v_a_2001_);
lean_dec(v_a_2001_);
if (v___x_2002_ == 0)
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2006_; 
lean_dec(v_x_1945_);
v___x_2003_ = l_Lean_LocalDecl_fvarId(v_val_1970_);
lean_dec(v_val_1970_);
v___x_2004_ = lean_box(v___x_1974_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 1, v___x_2004_);
lean_ctor_set(v___x_1989_, 0, v___x_2003_);
v___x_2006_ = v___x_1989_;
goto v_reusejp_2005_;
}
else
{
lean_object* v_reuseFailAlloc_2010_; 
v_reuseFailAlloc_2010_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2010_, 0, v___x_2003_);
lean_ctor_set(v_reuseFailAlloc_2010_, 1, v___x_2004_);
v___x_2006_ = v_reuseFailAlloc_2010_;
goto v_reusejp_2005_;
}
v_reusejp_2005_:
{
lean_object* v___x_2008_; 
if (v_isShared_1981_ == 0)
{
lean_ctor_set(v___x_1980_, 0, v___x_2006_);
v___x_2008_ = v___x_1980_;
goto v_reusejp_2007_;
}
else
{
lean_object* v_reuseFailAlloc_2009_; 
v_reuseFailAlloc_2009_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2009_, 0, v___x_2006_);
v___x_2008_ = v_reuseFailAlloc_2009_;
goto v_reusejp_2007_;
}
v_reusejp_2007_:
{
v_a_1964_ = v___x_2008_;
goto v___jp_1963_;
}
}
}
else
{
lean_del_object(v___x_1989_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1970_);
v_a_1956_ = v___x_1968_;
goto v___jp_1955_;
}
}
else
{
lean_object* v_a_2011_; lean_object* v___x_2013_; uint8_t v_isShared_2014_; uint8_t v_isSharedCheck_2018_; 
lean_del_object(v___x_1989_);
lean_del_object(v___x_1980_);
lean_dec(v_val_1970_);
lean_dec(v_x_1945_);
v_a_2011_ = lean_ctor_get(v___x_2000_, 0);
v_isSharedCheck_2018_ = !lean_is_exclusive(v___x_2000_);
if (v_isSharedCheck_2018_ == 0)
{
v___x_2013_ = v___x_2000_;
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
else
{
lean_inc(v_a_2011_);
lean_dec(v___x_2000_);
v___x_2013_ = lean_box(0);
v_isShared_2014_ = v_isSharedCheck_2018_;
goto v_resetjp_2012_;
}
v_resetjp_2012_:
{
lean_object* v___x_2016_; 
if (v_isShared_2014_ == 0)
{
v___x_2016_ = v___x_2013_;
goto v_reusejp_2015_;
}
else
{
lean_object* v_reuseFailAlloc_2017_; 
v_reuseFailAlloc_2017_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2017_, 0, v_a_2011_);
v___x_2016_ = v_reuseFailAlloc_2017_;
goto v_reusejp_2015_;
}
v_reusejp_2015_:
{
return v___x_2016_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2041_; lean_object* v___x_2043_; uint8_t v_isShared_2044_; uint8_t v_isSharedCheck_2048_; 
lean_dec(v_a_1992_);
lean_del_object(v___x_1989_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1980_);
lean_del_object(v___x_1972_);
lean_dec(v_val_1970_);
lean_dec(v_x_1945_);
v_a_2041_ = lean_ctor_get(v___x_1993_, 0);
v_isSharedCheck_2048_ = !lean_is_exclusive(v___x_1993_);
if (v_isSharedCheck_2048_ == 0)
{
v___x_2043_ = v___x_1993_;
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
else
{
lean_inc(v_a_2041_);
lean_dec(v___x_1993_);
v___x_2043_ = lean_box(0);
v_isShared_2044_ = v_isSharedCheck_2048_;
goto v_resetjp_2042_;
}
v_resetjp_2042_:
{
lean_object* v___x_2046_; 
if (v_isShared_2044_ == 0)
{
v___x_2046_ = v___x_2043_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2047_; 
v_reuseFailAlloc_2047_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2047_, 0, v_a_2041_);
v___x_2046_ = v_reuseFailAlloc_2047_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
return v___x_2046_;
}
}
}
}
else
{
lean_object* v_a_2049_; lean_object* v___x_2051_; uint8_t v_isShared_2052_; uint8_t v_isSharedCheck_2056_; 
lean_del_object(v___x_1989_);
lean_dec(v_snd_1987_);
lean_del_object(v___x_1984_);
lean_del_object(v___x_1980_);
lean_del_object(v___x_1972_);
lean_dec(v_val_1970_);
lean_dec(v_x_1945_);
v_a_2049_ = lean_ctor_get(v___x_1991_, 0);
v_isSharedCheck_2056_ = !lean_is_exclusive(v___x_1991_);
if (v_isSharedCheck_2056_ == 0)
{
v___x_2051_ = v___x_1991_;
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
else
{
lean_inc(v_a_2049_);
lean_dec(v___x_1991_);
v___x_2051_ = lean_box(0);
v_isShared_2052_ = v_isSharedCheck_2056_;
goto v_resetjp_2050_;
}
v_resetjp_2050_:
{
lean_object* v___x_2054_; 
if (v_isShared_2052_ == 0)
{
v___x_2054_ = v___x_2051_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_a_2049_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_1977_);
lean_del_object(v___x_1972_);
lean_dec(v_val_1970_);
v_a_1956_ = v___x_1968_;
goto v___jp_1955_;
}
}
else
{
lean_object* v_a_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2068_; 
lean_del_object(v___x_1972_);
lean_dec(v_val_1970_);
lean_dec(v_x_1945_);
v_a_2061_ = lean_ctor_get(v___x_1976_, 0);
v_isSharedCheck_2068_ = !lean_is_exclusive(v___x_1976_);
if (v_isSharedCheck_2068_ == 0)
{
v___x_2063_ = v___x_1976_;
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_a_2061_);
lean_dec(v___x_1976_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2068_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___x_2066_; 
if (v_isShared_2064_ == 0)
{
v___x_2066_ = v___x_2063_;
goto v_reusejp_2065_;
}
else
{
lean_object* v_reuseFailAlloc_2067_; 
v_reuseFailAlloc_2067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2067_, 0, v_a_2061_);
v___x_2066_ = v_reuseFailAlloc_2067_;
goto v_reusejp_2065_;
}
v_reusejp_2065_:
{
return v___x_2066_;
}
}
}
}
else
{
lean_del_object(v___x_1972_);
lean_dec(v_val_1970_);
v_a_1956_ = v___x_1968_;
goto v___jp_1955_;
}
}
}
v___jp_1963_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1965_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1965_, 0, v_a_1964_);
v___x_1966_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1965_);
lean_ctor_set(v___x_1966_, 1, v___x_1962_);
v___x_1967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1967_, 0, v___x_1966_);
return v___x_1967_;
}
}
v___jp_1955_:
{
size_t v___x_1957_; size_t v___x_1958_; lean_object* v___x_1959_; 
v___x_1957_ = ((size_t)1ULL);
v___x_1958_ = lean_usize_add(v_i_1948_, v___x_1957_);
lean_inc_ref(v_a_1956_);
v___x_1959_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4(v_x_1945_, v_as_1946_, v_sz_1947_, v___x_1958_, v_a_1956_, v___y_1950_, v___y_1951_, v___y_1952_, v___y_1953_);
return v___x_1959_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2___boxed(lean_object* v_x_2070_, lean_object* v_as_2071_, lean_object* v_sz_2072_, lean_object* v_i_2073_, lean_object* v_b_2074_, lean_object* v___y_2075_, lean_object* v___y_2076_, lean_object* v___y_2077_, lean_object* v___y_2078_, lean_object* v___y_2079_){
_start:
{
size_t v_sz_boxed_2080_; size_t v_i_boxed_2081_; lean_object* v_res_2082_; 
v_sz_boxed_2080_ = lean_unbox_usize(v_sz_2072_);
lean_dec(v_sz_2072_);
v_i_boxed_2081_ = lean_unbox_usize(v_i_2073_);
lean_dec(v_i_2073_);
v_res_2082_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2070_, v_as_2071_, v_sz_boxed_2080_, v_i_boxed_2081_, v_b_2074_, v___y_2075_, v___y_2076_, v___y_2077_, v___y_2078_);
lean_dec(v___y_2078_);
lean_dec_ref(v___y_2077_);
lean_dec(v___y_2076_);
lean_dec_ref(v___y_2075_);
lean_dec_ref(v_as_2071_);
return v_res_2082_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(lean_object* v_x_2083_, lean_object* v_x_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_, lean_object* v___y_2088_){
_start:
{
if (lean_obj_tag(v_x_2084_) == 0)
{
lean_object* v_cs_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; size_t v_sz_2093_; size_t v___x_2094_; lean_object* v___x_2095_; 
v_cs_2090_ = lean_ctor_get(v_x_2084_, 0);
v___x_2091_ = lean_box(0);
v___x_2092_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2093_ = lean_array_size(v_cs_2090_);
v___x_2094_ = ((size_t)0ULL);
v___x_2095_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2083_, v_cs_2090_, v_sz_2093_, v___x_2094_, v___x_2092_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; lean_object* v___x_2098_; uint8_t v_isShared_2099_; uint8_t v_isSharedCheck_2108_; 
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2108_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2108_ == 0)
{
v___x_2098_ = v___x_2095_;
v_isShared_2099_ = v_isSharedCheck_2108_;
goto v_resetjp_2097_;
}
else
{
lean_inc(v_a_2096_);
lean_dec(v___x_2095_);
v___x_2098_ = lean_box(0);
v_isShared_2099_ = v_isSharedCheck_2108_;
goto v_resetjp_2097_;
}
v_resetjp_2097_:
{
lean_object* v_fst_2100_; 
v_fst_2100_ = lean_ctor_get(v_a_2096_, 0);
lean_inc(v_fst_2100_);
lean_dec(v_a_2096_);
if (lean_obj_tag(v_fst_2100_) == 0)
{
lean_object* v___x_2102_; 
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v___x_2091_);
v___x_2102_ = v___x_2098_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2103_; 
v_reuseFailAlloc_2103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2103_, 0, v___x_2091_);
v___x_2102_ = v_reuseFailAlloc_2103_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
return v___x_2102_;
}
}
else
{
lean_object* v_val_2104_; lean_object* v___x_2106_; 
v_val_2104_ = lean_ctor_get(v_fst_2100_, 0);
lean_inc(v_val_2104_);
lean_dec_ref_known(v_fst_2100_, 1);
if (v_isShared_2099_ == 0)
{
lean_ctor_set(v___x_2098_, 0, v_val_2104_);
v___x_2106_ = v___x_2098_;
goto v_reusejp_2105_;
}
else
{
lean_object* v_reuseFailAlloc_2107_; 
v_reuseFailAlloc_2107_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2107_, 0, v_val_2104_);
v___x_2106_ = v_reuseFailAlloc_2107_;
goto v_reusejp_2105_;
}
v_reusejp_2105_:
{
return v___x_2106_;
}
}
}
}
else
{
lean_object* v_a_2109_; lean_object* v___x_2111_; uint8_t v_isShared_2112_; uint8_t v_isSharedCheck_2116_; 
v_a_2109_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2116_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2111_ = v___x_2095_;
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
else
{
lean_inc(v_a_2109_);
lean_dec(v___x_2095_);
v___x_2111_ = lean_box(0);
v_isShared_2112_ = v_isSharedCheck_2116_;
goto v_resetjp_2110_;
}
v_resetjp_2110_:
{
lean_object* v___x_2114_; 
if (v_isShared_2112_ == 0)
{
v___x_2114_ = v___x_2111_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2109_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
}
}
else
{
lean_object* v_vs_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; size_t v_sz_2120_; size_t v___x_2121_; lean_object* v___x_2122_; 
v_vs_2117_ = lean_ctor_get(v_x_2084_, 0);
v___x_2118_ = lean_box(0);
v___x_2119_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2120_ = lean_array_size(v_vs_2117_);
v___x_2121_ = ((size_t)0ULL);
v___x_2122_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2083_, v_vs_2117_, v_sz_2120_, v___x_2121_, v___x_2119_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2122_) == 0)
{
lean_object* v_a_2123_; lean_object* v___x_2125_; uint8_t v_isShared_2126_; uint8_t v_isSharedCheck_2135_; 
v_a_2123_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2135_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2135_ == 0)
{
v___x_2125_ = v___x_2122_;
v_isShared_2126_ = v_isSharedCheck_2135_;
goto v_resetjp_2124_;
}
else
{
lean_inc(v_a_2123_);
lean_dec(v___x_2122_);
v___x_2125_ = lean_box(0);
v_isShared_2126_ = v_isSharedCheck_2135_;
goto v_resetjp_2124_;
}
v_resetjp_2124_:
{
lean_object* v_fst_2127_; 
v_fst_2127_ = lean_ctor_get(v_a_2123_, 0);
lean_inc(v_fst_2127_);
lean_dec(v_a_2123_);
if (lean_obj_tag(v_fst_2127_) == 0)
{
lean_object* v___x_2129_; 
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v___x_2118_);
v___x_2129_ = v___x_2125_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v___x_2118_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
else
{
lean_object* v_val_2131_; lean_object* v___x_2133_; 
v_val_2131_ = lean_ctor_get(v_fst_2127_, 0);
lean_inc(v_val_2131_);
lean_dec_ref_known(v_fst_2127_, 1);
if (v_isShared_2126_ == 0)
{
lean_ctor_set(v___x_2125_, 0, v_val_2131_);
v___x_2133_ = v___x_2125_;
goto v_reusejp_2132_;
}
else
{
lean_object* v_reuseFailAlloc_2134_; 
v_reuseFailAlloc_2134_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2134_, 0, v_val_2131_);
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
v_a_2136_ = lean_ctor_get(v___x_2122_, 0);
v_isSharedCheck_2143_ = !lean_is_exclusive(v___x_2122_);
if (v_isSharedCheck_2143_ == 0)
{
v___x_2138_ = v___x_2122_;
v_isShared_2139_ = v_isSharedCheck_2143_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_a_2136_);
lean_dec(v___x_2122_);
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
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(lean_object* v_x_2144_, lean_object* v_as_2145_, size_t v_sz_2146_, size_t v_i_2147_, lean_object* v_b_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_){
_start:
{
uint8_t v___x_2154_; 
v___x_2154_ = lean_usize_dec_lt(v_i_2147_, v_sz_2146_);
if (v___x_2154_ == 0)
{
lean_object* v___x_2155_; 
lean_dec(v_x_2144_);
v___x_2155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2155_, 0, v_b_2148_);
return v___x_2155_;
}
else
{
lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v_a_2158_; lean_object* v___x_2159_; 
lean_dec_ref(v_b_2148_);
v___x_2156_ = lean_box(0);
v___x_2157_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_a_2158_ = lean_array_uget_borrowed(v_as_2145_, v_i_2147_);
lean_inc(v_x_2144_);
v___x_2159_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2144_, v_a_2158_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_);
if (lean_obj_tag(v___x_2159_) == 0)
{
lean_object* v_a_2160_; lean_object* v___x_2162_; uint8_t v_isShared_2163_; uint8_t v_isSharedCheck_2172_; 
v_a_2160_ = lean_ctor_get(v___x_2159_, 0);
v_isSharedCheck_2172_ = !lean_is_exclusive(v___x_2159_);
if (v_isSharedCheck_2172_ == 0)
{
v___x_2162_ = v___x_2159_;
v_isShared_2163_ = v_isSharedCheck_2172_;
goto v_resetjp_2161_;
}
else
{
lean_inc(v_a_2160_);
lean_dec(v___x_2159_);
v___x_2162_ = lean_box(0);
v_isShared_2163_ = v_isSharedCheck_2172_;
goto v_resetjp_2161_;
}
v_resetjp_2161_:
{
if (lean_obj_tag(v_a_2160_) == 1)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2167_; 
lean_dec(v_x_2144_);
v___x_2164_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2164_, 0, v_a_2160_);
v___x_2165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
lean_ctor_set(v___x_2165_, 1, v___x_2156_);
if (v_isShared_2163_ == 0)
{
lean_ctor_set(v___x_2162_, 0, v___x_2165_);
v___x_2167_ = v___x_2162_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v___x_2165_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
else
{
size_t v___x_2169_; size_t v___x_2170_; 
lean_del_object(v___x_2162_);
lean_dec(v_a_2160_);
v___x_2169_ = ((size_t)1ULL);
v___x_2170_ = lean_usize_add(v_i_2147_, v___x_2169_);
v_i_2147_ = v___x_2170_;
v_b_2148_ = v___x_2157_;
goto _start;
}
}
}
else
{
lean_object* v_a_2173_; lean_object* v___x_2175_; uint8_t v_isShared_2176_; uint8_t v_isSharedCheck_2180_; 
lean_dec(v_x_2144_);
v_a_2173_ = lean_ctor_get(v___x_2159_, 0);
v_isSharedCheck_2180_ = !lean_is_exclusive(v___x_2159_);
if (v_isSharedCheck_2180_ == 0)
{
v___x_2175_ = v___x_2159_;
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
else
{
lean_inc(v_a_2173_);
lean_dec(v___x_2159_);
v___x_2175_ = lean_box(0);
v_isShared_2176_ = v_isSharedCheck_2180_;
goto v_resetjp_2174_;
}
v_resetjp_2174_:
{
lean_object* v___x_2178_; 
if (v_isShared_2176_ == 0)
{
v___x_2178_ = v___x_2175_;
goto v_reusejp_2177_;
}
else
{
lean_object* v_reuseFailAlloc_2179_; 
v_reuseFailAlloc_2179_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2179_, 0, v_a_2173_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_x_2181_, lean_object* v_as_2182_, lean_object* v_sz_2183_, lean_object* v_i_2184_, lean_object* v_b_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_){
_start:
{
size_t v_sz_boxed_2191_; size_t v_i_boxed_2192_; lean_object* v_res_2193_; 
v_sz_boxed_2191_ = lean_unbox_usize(v_sz_2183_);
lean_dec(v_sz_2183_);
v_i_boxed_2192_ = lean_unbox_usize(v_i_2184_);
lean_dec(v_i_2184_);
v_res_2193_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1_spec__2(v_x_2181_, v_as_2182_, v_sz_boxed_2191_, v_i_boxed_2192_, v_b_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec_ref(v_as_2182_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1___boxed(lean_object* v_x_2194_, lean_object* v_x_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_, lean_object* v___y_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_){
_start:
{
lean_object* v_res_2201_; 
v_res_2201_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2194_, v_x_2195_, v___y_2196_, v___y_2197_, v___y_2198_, v___y_2199_);
lean_dec(v___y_2199_);
lean_dec_ref(v___y_2198_);
lean_dec(v___y_2197_);
lean_dec_ref(v___y_2196_);
lean_dec_ref(v_x_2195_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(lean_object* v_x_2202_, lean_object* v_t_2203_, lean_object* v___y_2204_, lean_object* v___y_2205_, lean_object* v___y_2206_, lean_object* v___y_2207_){
_start:
{
lean_object* v_root_2209_; lean_object* v_tail_2210_; lean_object* v___x_2211_; 
v_root_2209_ = lean_ctor_get(v_t_2203_, 0);
v_tail_2210_ = lean_ctor_get(v_t_2203_, 1);
lean_inc(v_x_2202_);
v___x_2211_ = l_Lean_PersistentArray_findSomeMAux___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__1(v_x_2202_, v_root_2209_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
if (lean_obj_tag(v___x_2211_) == 0)
{
lean_object* v_a_2212_; 
v_a_2212_ = lean_ctor_get(v___x_2211_, 0);
if (lean_obj_tag(v_a_2212_) == 0)
{
lean_object* v___x_2213_; size_t v_sz_2214_; size_t v___x_2215_; lean_object* v___x_2216_; 
lean_inc(v_a_2212_);
lean_dec_ref_known(v___x_2211_, 1);
v___x_2213_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2_spec__4___closed__0));
v_sz_2214_ = lean_array_size(v_tail_2210_);
v___x_2215_ = ((size_t)0ULL);
v___x_2216_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0_spec__2(v_x_2202_, v_tail_2210_, v_sz_2214_, v___x_2215_, v___x_2213_, v___y_2204_, v___y_2205_, v___y_2206_, v___y_2207_);
if (lean_obj_tag(v___x_2216_) == 0)
{
lean_object* v_a_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2229_; 
v_a_2217_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2229_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2229_ == 0)
{
v___x_2219_ = v___x_2216_;
v_isShared_2220_ = v_isSharedCheck_2229_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_a_2217_);
lean_dec(v___x_2216_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2229_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v_fst_2221_; 
v_fst_2221_ = lean_ctor_get(v_a_2217_, 0);
lean_inc(v_fst_2221_);
lean_dec(v_a_2217_);
if (lean_obj_tag(v_fst_2221_) == 0)
{
lean_object* v___x_2223_; 
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v_a_2212_);
v___x_2223_ = v___x_2219_;
goto v_reusejp_2222_;
}
else
{
lean_object* v_reuseFailAlloc_2224_; 
v_reuseFailAlloc_2224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2224_, 0, v_a_2212_);
v___x_2223_ = v_reuseFailAlloc_2224_;
goto v_reusejp_2222_;
}
v_reusejp_2222_:
{
return v___x_2223_;
}
}
else
{
lean_object* v_val_2225_; lean_object* v___x_2227_; 
v_val_2225_ = lean_ctor_get(v_fst_2221_, 0);
lean_inc(v_val_2225_);
lean_dec_ref_known(v_fst_2221_, 1);
if (v_isShared_2220_ == 0)
{
lean_ctor_set(v___x_2219_, 0, v_val_2225_);
v___x_2227_ = v___x_2219_;
goto v_reusejp_2226_;
}
else
{
lean_object* v_reuseFailAlloc_2228_; 
v_reuseFailAlloc_2228_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2228_, 0, v_val_2225_);
v___x_2227_ = v_reuseFailAlloc_2228_;
goto v_reusejp_2226_;
}
v_reusejp_2226_:
{
return v___x_2227_;
}
}
}
}
else
{
lean_object* v_a_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2237_; 
v_a_2230_ = lean_ctor_get(v___x_2216_, 0);
v_isSharedCheck_2237_ = !lean_is_exclusive(v___x_2216_);
if (v_isSharedCheck_2237_ == 0)
{
v___x_2232_ = v___x_2216_;
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_a_2230_);
lean_dec(v___x_2216_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2237_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v___x_2235_; 
if (v_isShared_2233_ == 0)
{
v___x_2235_ = v___x_2232_;
goto v_reusejp_2234_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v_a_2230_);
v___x_2235_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2234_;
}
v_reusejp_2234_:
{
return v___x_2235_;
}
}
}
}
else
{
lean_dec(v_x_2202_);
return v___x_2211_;
}
}
else
{
lean_dec(v_x_2202_);
return v___x_2211_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0___boxed(lean_object* v_x_2238_, lean_object* v_t_2239_, lean_object* v___y_2240_, lean_object* v___y_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_){
_start:
{
lean_object* v_res_2245_; 
v_res_2245_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2238_, v_t_2239_, v___y_2240_, v___y_2241_, v___y_2242_, v___y_2243_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec(v___y_2241_);
lean_dec_ref(v___y_2240_);
lean_dec_ref(v_t_2239_);
return v_res_2245_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(lean_object* v_x_2246_, lean_object* v_lctx_2247_, lean_object* v___y_2248_, lean_object* v___y_2249_, lean_object* v___y_2250_, lean_object* v___y_2251_){
_start:
{
lean_object* v_decls_2253_; lean_object* v___x_2254_; 
v_decls_2253_ = lean_ctor_get(v_lctx_2247_, 1);
v___x_2254_ = l_Lean_PersistentArray_findSomeM_x3f___at___00Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0_spec__0(v_x_2246_, v_decls_2253_, v___y_2248_, v___y_2249_, v___y_2250_, v___y_2251_);
return v___x_2254_;
}
}
LEAN_EXPORT lean_object* l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0___boxed(lean_object* v_x_2255_, lean_object* v_lctx_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_, lean_object* v___y_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2255_, v_lctx_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
lean_dec(v___y_2260_);
lean_dec_ref(v___y_2259_);
lean_dec(v___y_2258_);
lean_dec_ref(v___y_2257_);
lean_dec_ref(v_lctx_2256_);
return v_res_2262_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2264_; lean_object* v___x_2265_; 
v___x_2264_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__0));
v___x_2265_ = l_Lean_stringToMessageData(v___x_2264_);
return v___x_2265_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
v___x_2267_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__2));
v___x_2268_ = l_Lean_stringToMessageData(v___x_2267_);
return v___x_2268_;
}
}
static lean_object* _init_l_Lean_Meta_substVar___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = ((lean_object*)(l_Lean_Meta_substVar___lam__0___closed__4));
v___x_2271_ = l_Lean_stringToMessageData(v___x_2270_);
return v___x_2271_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0(lean_object* v_x_2272_, lean_object* v_mvarId_2273_, lean_object* v___y_2274_, lean_object* v___y_2275_, lean_object* v___y_2276_, lean_object* v___y_2277_){
_start:
{
lean_object* v___x_2324_; 
lean_inc(v_x_2272_);
v___x_2324_ = l_Lean_FVarId_getDecl___redArg(v_x_2272_, v___y_2274_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2324_) == 0)
{
lean_object* v_a_2325_; uint8_t v___x_2326_; uint8_t v___x_2327_; 
v_a_2325_ = lean_ctor_get(v___x_2324_, 0);
lean_inc(v_a_2325_);
lean_dec_ref_known(v___x_2324_, 1);
v___x_2326_ = 0;
v___x_2327_ = l_Lean_LocalDecl_isLet(v_a_2325_, v___x_2326_);
lean_dec(v_a_2325_);
if (v___x_2327_ == 0)
{
goto v___jp_2279_;
}
else
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; 
v___x_2328_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__7));
v___x_2329_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__3, &l_Lean_Meta_substVar___lam__0___closed__3_once, _init_l_Lean_Meta_substVar___lam__0___closed__3);
lean_inc(v_x_2272_);
v___x_2330_ = l_Lean_mkFVar(v_x_2272_);
v___x_2331_ = l_Lean_MessageData_ofExpr(v___x_2330_);
v___x_2332_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2332_, 0, v___x_2329_);
lean_ctor_set(v___x_2332_, 1, v___x_2331_);
v___x_2333_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__5, &l_Lean_Meta_substVar___lam__0___closed__5_once, _init_l_Lean_Meta_substVar___lam__0___closed__5);
v___x_2334_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2334_, 0, v___x_2332_);
lean_ctor_set(v___x_2334_, 1, v___x_2333_);
v___x_2335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2335_, 0, v___x_2334_);
lean_inc(v_mvarId_2273_);
v___x_2336_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2328_, v_mvarId_2273_, v___x_2335_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_dec_ref_known(v___x_2336_, 1);
goto v___jp_2279_;
}
else
{
lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2344_; 
lean_dec(v_mvarId_2273_);
lean_dec(v_x_2272_);
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2344_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2344_ == 0)
{
v___x_2339_ = v___x_2336_;
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2336_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2344_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2342_; 
if (v_isShared_2340_ == 0)
{
v___x_2342_ = v___x_2339_;
goto v_reusejp_2341_;
}
else
{
lean_object* v_reuseFailAlloc_2343_; 
v_reuseFailAlloc_2343_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2343_, 0, v_a_2337_);
v___x_2342_ = v_reuseFailAlloc_2343_;
goto v_reusejp_2341_;
}
v_reusejp_2341_:
{
return v___x_2342_;
}
}
}
}
}
else
{
lean_object* v_a_2345_; lean_object* v___x_2347_; uint8_t v_isShared_2348_; uint8_t v_isSharedCheck_2352_; 
lean_dec(v_mvarId_2273_);
lean_dec(v_x_2272_);
v_a_2345_ = lean_ctor_get(v___x_2324_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2324_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2347_ = v___x_2324_;
v_isShared_2348_ = v_isSharedCheck_2352_;
goto v_resetjp_2346_;
}
else
{
lean_inc(v_a_2345_);
lean_dec(v___x_2324_);
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
v___jp_2279_:
{
lean_object* v_lctx_2280_; lean_object* v___x_2281_; 
v_lctx_2280_ = lean_ctor_get(v___y_2274_, 2);
lean_inc(v_x_2272_);
v___x_2281_ = l_Lean_LocalContext_findDeclM_x3f___at___00Lean_Meta_substVar_spec__0(v_x_2272_, v_lctx_2280_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2281_) == 0)
{
lean_object* v_a_2282_; 
v_a_2282_ = lean_ctor_get(v___x_2281_, 0);
lean_inc(v_a_2282_);
lean_dec_ref_known(v___x_2281_, 1);
if (lean_obj_tag(v_a_2282_) == 1)
{
lean_object* v_val_2283_; lean_object* v_fst_2284_; lean_object* v_snd_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; uint8_t v___x_2288_; lean_object* v___x_2289_; 
lean_dec(v_x_2272_);
v_val_2283_ = lean_ctor_get(v_a_2282_, 0);
lean_inc(v_val_2283_);
lean_dec_ref_known(v_a_2282_, 1);
v_fst_2284_ = lean_ctor_get(v_val_2283_, 0);
lean_inc(v_fst_2284_);
v_snd_2285_ = lean_ctor_get(v_val_2283_, 1);
lean_inc(v_snd_2285_);
lean_dec(v_val_2283_);
v___x_2286_ = lean_box(0);
v___x_2287_ = 1;
v___x_2288_ = lean_unbox(v_snd_2285_);
lean_dec(v_snd_2285_);
v___x_2289_ = l_Lean_Meta_substCore(v_mvarId_2273_, v_fst_2284_, v___x_2288_, v___x_2286_, v___x_2287_, v___x_2287_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
if (lean_obj_tag(v___x_2289_) == 0)
{
lean_object* v_a_2290_; lean_object* v___x_2292_; uint8_t v_isShared_2293_; uint8_t v_isSharedCheck_2298_; 
v_a_2290_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2298_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2292_ = v___x_2289_;
v_isShared_2293_ = v_isSharedCheck_2298_;
goto v_resetjp_2291_;
}
else
{
lean_inc(v_a_2290_);
lean_dec(v___x_2289_);
v___x_2292_ = lean_box(0);
v_isShared_2293_ = v_isSharedCheck_2298_;
goto v_resetjp_2291_;
}
v_resetjp_2291_:
{
lean_object* v_snd_2294_; lean_object* v___x_2296_; 
v_snd_2294_ = lean_ctor_get(v_a_2290_, 1);
lean_inc(v_snd_2294_);
lean_dec(v_a_2290_);
if (v_isShared_2293_ == 0)
{
lean_ctor_set(v___x_2292_, 0, v_snd_2294_);
v___x_2296_ = v___x_2292_;
goto v_reusejp_2295_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v_snd_2294_);
v___x_2296_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2295_;
}
v_reusejp_2295_:
{
return v___x_2296_;
}
}
}
else
{
lean_object* v_a_2299_; lean_object* v___x_2301_; uint8_t v_isShared_2302_; uint8_t v_isSharedCheck_2306_; 
v_a_2299_ = lean_ctor_get(v___x_2289_, 0);
v_isSharedCheck_2306_ = !lean_is_exclusive(v___x_2289_);
if (v_isSharedCheck_2306_ == 0)
{
v___x_2301_ = v___x_2289_;
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
else
{
lean_inc(v_a_2299_);
lean_dec(v___x_2289_);
v___x_2301_ = lean_box(0);
v_isShared_2302_ = v_isSharedCheck_2306_;
goto v_resetjp_2300_;
}
v_resetjp_2300_:
{
lean_object* v___x_2304_; 
if (v_isShared_2302_ == 0)
{
v___x_2304_ = v___x_2301_;
goto v_reusejp_2303_;
}
else
{
lean_object* v_reuseFailAlloc_2305_; 
v_reuseFailAlloc_2305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2305_, 0, v_a_2299_);
v___x_2304_ = v_reuseFailAlloc_2305_;
goto v_reusejp_2303_;
}
v_reusejp_2303_:
{
return v___x_2304_;
}
}
}
}
else
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
lean_dec(v_a_2282_);
v___x_2307_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__7));
v___x_2308_ = lean_obj_once(&l_Lean_Meta_substVar___lam__0___closed__1, &l_Lean_Meta_substVar___lam__0___closed__1_once, _init_l_Lean_Meta_substVar___lam__0___closed__1);
v___x_2309_ = l_Lean_mkFVar(v_x_2272_);
v___x_2310_ = l_Lean_MessageData_ofExpr(v___x_2309_);
v___x_2311_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2311_, 0, v___x_2308_);
lean_ctor_set(v___x_2311_, 1, v___x_2310_);
v___x_2312_ = lean_obj_once(&l_Lean_Meta_substCore___lam__3___closed__9, &l_Lean_Meta_substCore___lam__3___closed__9_once, _init_l_Lean_Meta_substCore___lam__3___closed__9);
v___x_2313_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2313_, 0, v___x_2311_);
lean_ctor_set(v___x_2313_, 1, v___x_2312_);
v___x_2314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2313_);
v___x_2315_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2307_, v_mvarId_2273_, v___x_2314_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_);
return v___x_2315_;
}
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_dec(v_mvarId_2273_);
lean_dec(v_x_2272_);
v_a_2316_ = lean_ctor_get(v___x_2281_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2281_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2281_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2281_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___lam__0___boxed(lean_object* v_x_2353_, lean_object* v_mvarId_2354_, lean_object* v___y_2355_, lean_object* v___y_2356_, lean_object* v___y_2357_, lean_object* v___y_2358_, lean_object* v___y_2359_){
_start:
{
lean_object* v_res_2360_; 
v_res_2360_ = l_Lean_Meta_substVar___lam__0(v_x_2353_, v_mvarId_2354_, v___y_2355_, v___y_2356_, v___y_2357_, v___y_2358_);
lean_dec(v___y_2358_);
lean_dec_ref(v___y_2357_);
lean_dec(v___y_2356_);
lean_dec_ref(v___y_2355_);
return v_res_2360_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar(lean_object* v_mvarId_2361_, lean_object* v_x_2362_, lean_object* v_a_2363_, lean_object* v_a_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_){
_start:
{
lean_object* v___f_2368_; lean_object* v___x_2369_; 
lean_inc(v_mvarId_2361_);
v___f_2368_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2368_, 0, v_x_2362_);
lean_closure_set(v___f_2368_, 1, v_mvarId_2361_);
v___x_2369_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2361_, v___f_2368_, v_a_2363_, v_a_2364_, v_a_2365_, v_a_2366_);
return v___x_2369_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar___boxed(lean_object* v_mvarId_2370_, lean_object* v_x_2371_, lean_object* v_a_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_a_2375_, lean_object* v_a_2376_){
_start:
{
lean_object* v_res_2377_; 
v_res_2377_ = l_Lean_Meta_substVar(v_mvarId_2370_, v_x_2371_, v_a_2372_, v_a_2373_, v_a_2374_, v_a_2375_);
lean_dec(v_a_2375_);
lean_dec_ref(v_a_2374_);
lean_dec(v_a_2373_);
lean_dec_ref(v_a_2372_);
return v_res_2377_;
}
}
static lean_object* _init_l_Lean_Meta_substEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2379_; lean_object* v___x_2380_; 
v___x_2379_ = ((lean_object*)(l_Lean_Meta_substEq___lam__0___closed__0));
v___x_2380_ = l_Lean_stringToMessageData(v___x_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0(lean_object* v_fst_2381_, lean_object* v_snd_2382_, uint8_t v___x_2383_, lean_object* v_fvarSubst_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_){
_start:
{
lean_object* v___x_2390_; 
lean_inc(v_fst_2381_);
v___x_2390_ = l_Lean_FVarId_getDecl___redArg(v_fst_2381_, v___y_2385_, v___y_2387_, v___y_2388_);
if (lean_obj_tag(v___x_2390_) == 0)
{
lean_object* v_a_2391_; lean_object* v_newType_2393_; uint8_t v_symm_2394_; lean_object* v___y_2395_; lean_object* v___y_2396_; lean_object* v___y_2397_; lean_object* v___y_2398_; lean_object* v___y_2435_; lean_object* v___y_2436_; lean_object* v___y_2437_; lean_object* v___y_2438_; lean_object* v___x_2446_; lean_object* v___x_2447_; 
v_a_2391_ = lean_ctor_get(v___x_2390_, 0);
lean_inc(v_a_2391_);
lean_dec_ref_known(v___x_2390_, 1);
v___x_2446_ = l_Lean_LocalDecl_type(v_a_2391_);
v___x_2447_ = l_Lean_Meta_matchEq_x3f(v___x_2446_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
if (lean_obj_tag(v___x_2447_) == 0)
{
lean_object* v_a_2448_; 
v_a_2448_ = lean_ctor_get(v___x_2447_, 0);
lean_inc(v_a_2448_);
lean_dec_ref_known(v___x_2447_, 1);
if (lean_obj_tag(v_a_2448_) == 1)
{
lean_object* v_val_2449_; lean_object* v_snd_2450_; lean_object* v_fst_2451_; lean_object* v_snd_2452_; lean_object* v___x_2453_; 
v_val_2449_ = lean_ctor_get(v_a_2448_, 0);
lean_inc(v_val_2449_);
lean_dec_ref_known(v_a_2448_, 1);
v_snd_2450_ = lean_ctor_get(v_val_2449_, 1);
lean_inc(v_snd_2450_);
lean_dec(v_val_2449_);
v_fst_2451_ = lean_ctor_get(v_snd_2450_, 0);
lean_inc(v_fst_2451_);
v_snd_2452_ = lean_ctor_get(v_snd_2450_, 1);
lean_inc_n(v_snd_2452_, 2);
lean_dec(v_snd_2450_);
lean_inc(v___y_2388_);
lean_inc_ref(v___y_2387_);
lean_inc(v___y_2386_);
lean_inc_ref(v___y_2385_);
v___x_2453_ = lean_whnf(v_snd_2452_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
if (lean_obj_tag(v___x_2453_) == 0)
{
lean_object* v_a_2454_; uint8_t v___x_2455_; 
v_a_2454_ = lean_ctor_get(v___x_2453_, 0);
lean_inc(v_a_2454_);
lean_dec_ref_known(v___x_2453_, 1);
v___x_2455_ = l_Lean_Expr_isFVar(v_a_2454_);
if (v___x_2455_ == 0)
{
lean_object* v___x_2456_; 
lean_dec(v_a_2454_);
lean_inc(v___y_2388_);
lean_inc_ref(v___y_2387_);
lean_inc(v___y_2386_);
lean_inc_ref(v___y_2385_);
lean_inc(v_fst_2451_);
v___x_2456_ = lean_whnf(v_fst_2451_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
if (lean_obj_tag(v___x_2456_) == 0)
{
lean_object* v_a_2457_; uint8_t v___x_2458_; 
v_a_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_a_2457_);
lean_dec_ref_known(v___x_2456_, 1);
v___x_2458_ = l_Lean_Expr_isFVar(v_a_2457_);
if (v___x_2458_ == 0)
{
lean_dec(v_a_2457_);
lean_dec(v_snd_2452_);
lean_dec(v_fst_2451_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_fst_2381_);
v___y_2435_ = v___y_2385_;
v___y_2436_ = v___y_2386_;
v___y_2437_ = v___y_2387_;
v___y_2438_ = v___y_2388_;
goto v___jp_2434_;
}
else
{
uint8_t v___x_2459_; 
v___x_2459_ = lean_expr_eqv(v_fst_2451_, v_a_2457_);
lean_dec(v_fst_2451_);
if (v___x_2459_ == 0)
{
lean_object* v___x_2460_; 
v___x_2460_ = l_Lean_Meta_mkEq(v_a_2457_, v_snd_2452_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v_newType_2393_ = v_a_2461_;
v_symm_2394_ = v___x_2455_;
v___y_2395_ = v___y_2385_;
v___y_2396_ = v___y_2386_;
v___y_2397_ = v___y_2387_;
v___y_2398_ = v___y_2388_;
goto v___jp_2392_;
}
else
{
lean_object* v_a_2462_; lean_object* v___x_2464_; uint8_t v_isShared_2465_; uint8_t v_isSharedCheck_2469_; 
lean_dec(v_a_2391_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_snd_2382_);
lean_dec(v_fst_2381_);
v_a_2462_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2469_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2469_ == 0)
{
v___x_2464_ = v___x_2460_;
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
else
{
lean_inc(v_a_2462_);
lean_dec(v___x_2460_);
v___x_2464_ = lean_box(0);
v_isShared_2465_ = v_isSharedCheck_2469_;
goto v_resetjp_2463_;
}
v_resetjp_2463_:
{
lean_object* v___x_2467_; 
if (v_isShared_2465_ == 0)
{
v___x_2467_ = v___x_2464_;
goto v_reusejp_2466_;
}
else
{
lean_object* v_reuseFailAlloc_2468_; 
v_reuseFailAlloc_2468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2468_, 0, v_a_2462_);
v___x_2467_ = v_reuseFailAlloc_2468_;
goto v_reusejp_2466_;
}
v_reusejp_2466_:
{
return v___x_2467_;
}
}
}
}
else
{
lean_object* v___x_2470_; 
lean_dec(v_a_2457_);
lean_dec(v_snd_2452_);
lean_dec(v_a_2391_);
v___x_2470_ = l_Lean_Meta_substCore(v_snd_2382_, v_fst_2381_, v___x_2455_, v_fvarSubst_2384_, v___x_2383_, v___x_2383_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
return v___x_2470_;
}
}
}
else
{
lean_object* v_a_2471_; lean_object* v___x_2473_; uint8_t v_isShared_2474_; uint8_t v_isSharedCheck_2478_; 
lean_dec(v_snd_2452_);
lean_dec(v_fst_2451_);
lean_dec(v_a_2391_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_snd_2382_);
lean_dec(v_fst_2381_);
v_a_2471_ = lean_ctor_get(v___x_2456_, 0);
v_isSharedCheck_2478_ = !lean_is_exclusive(v___x_2456_);
if (v_isSharedCheck_2478_ == 0)
{
v___x_2473_ = v___x_2456_;
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
else
{
lean_inc(v_a_2471_);
lean_dec(v___x_2456_);
v___x_2473_ = lean_box(0);
v_isShared_2474_ = v_isSharedCheck_2478_;
goto v_resetjp_2472_;
}
v_resetjp_2472_:
{
lean_object* v___x_2476_; 
if (v_isShared_2474_ == 0)
{
v___x_2476_ = v___x_2473_;
goto v_reusejp_2475_;
}
else
{
lean_object* v_reuseFailAlloc_2477_; 
v_reuseFailAlloc_2477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2477_, 0, v_a_2471_);
v___x_2476_ = v_reuseFailAlloc_2477_;
goto v_reusejp_2475_;
}
v_reusejp_2475_:
{
return v___x_2476_;
}
}
}
}
else
{
uint8_t v___x_2479_; 
v___x_2479_ = lean_expr_eqv(v_snd_2452_, v_a_2454_);
lean_dec(v_snd_2452_);
if (v___x_2479_ == 0)
{
lean_object* v___x_2480_; 
v___x_2480_ = l_Lean_Meta_mkEq(v_fst_2451_, v_a_2454_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
if (lean_obj_tag(v___x_2480_) == 0)
{
lean_object* v_a_2481_; 
v_a_2481_ = lean_ctor_get(v___x_2480_, 0);
lean_inc(v_a_2481_);
lean_dec_ref_known(v___x_2480_, 1);
v_newType_2393_ = v_a_2481_;
v_symm_2394_ = v___x_2383_;
v___y_2395_ = v___y_2385_;
v___y_2396_ = v___y_2386_;
v___y_2397_ = v___y_2387_;
v___y_2398_ = v___y_2388_;
goto v___jp_2392_;
}
else
{
lean_object* v_a_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2489_; 
lean_dec(v_a_2391_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_snd_2382_);
lean_dec(v_fst_2381_);
v_a_2482_ = lean_ctor_get(v___x_2480_, 0);
v_isSharedCheck_2489_ = !lean_is_exclusive(v___x_2480_);
if (v_isSharedCheck_2489_ == 0)
{
v___x_2484_ = v___x_2480_;
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_a_2482_);
lean_dec(v___x_2480_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2489_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v___x_2487_; 
if (v_isShared_2485_ == 0)
{
v___x_2487_ = v___x_2484_;
goto v_reusejp_2486_;
}
else
{
lean_object* v_reuseFailAlloc_2488_; 
v_reuseFailAlloc_2488_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2488_, 0, v_a_2482_);
v___x_2487_ = v_reuseFailAlloc_2488_;
goto v_reusejp_2486_;
}
v_reusejp_2486_:
{
return v___x_2487_;
}
}
}
}
else
{
lean_object* v___x_2490_; 
lean_dec(v_a_2454_);
lean_dec(v_fst_2451_);
lean_dec(v_a_2391_);
v___x_2490_ = l_Lean_Meta_substCore(v_snd_2382_, v_fst_2381_, v___x_2383_, v_fvarSubst_2384_, v___x_2383_, v___x_2383_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
return v___x_2490_;
}
}
}
else
{
lean_object* v_a_2491_; lean_object* v___x_2493_; uint8_t v_isShared_2494_; uint8_t v_isSharedCheck_2498_; 
lean_dec(v_snd_2452_);
lean_dec(v_fst_2451_);
lean_dec(v_a_2391_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_snd_2382_);
lean_dec(v_fst_2381_);
v_a_2491_ = lean_ctor_get(v___x_2453_, 0);
v_isSharedCheck_2498_ = !lean_is_exclusive(v___x_2453_);
if (v_isSharedCheck_2498_ == 0)
{
v___x_2493_ = v___x_2453_;
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
else
{
lean_inc(v_a_2491_);
lean_dec(v___x_2453_);
v___x_2493_ = lean_box(0);
v_isShared_2494_ = v_isSharedCheck_2498_;
goto v_resetjp_2492_;
}
v_resetjp_2492_:
{
lean_object* v___x_2496_; 
if (v_isShared_2494_ == 0)
{
v___x_2496_ = v___x_2493_;
goto v_reusejp_2495_;
}
else
{
lean_object* v_reuseFailAlloc_2497_; 
v_reuseFailAlloc_2497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2497_, 0, v_a_2491_);
v___x_2496_ = v_reuseFailAlloc_2497_;
goto v_reusejp_2495_;
}
v_reusejp_2495_:
{
return v___x_2496_;
}
}
}
}
else
{
lean_dec(v_a_2448_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_fst_2381_);
v___y_2435_ = v___y_2385_;
v___y_2436_ = v___y_2386_;
v___y_2437_ = v___y_2387_;
v___y_2438_ = v___y_2388_;
goto v___jp_2434_;
}
}
else
{
lean_object* v_a_2499_; lean_object* v___x_2501_; uint8_t v_isShared_2502_; uint8_t v_isSharedCheck_2506_; 
lean_dec(v_a_2391_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_snd_2382_);
lean_dec(v_fst_2381_);
v_a_2499_ = lean_ctor_get(v___x_2447_, 0);
v_isSharedCheck_2506_ = !lean_is_exclusive(v___x_2447_);
if (v_isSharedCheck_2506_ == 0)
{
v___x_2501_ = v___x_2447_;
v_isShared_2502_ = v_isSharedCheck_2506_;
goto v_resetjp_2500_;
}
else
{
lean_inc(v_a_2499_);
lean_dec(v___x_2447_);
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
v___jp_2392_:
{
lean_object* v___x_2399_; lean_object* v___x_2400_; lean_object* v___x_2401_; 
v___x_2399_ = l_Lean_LocalDecl_userName(v_a_2391_);
lean_dec(v_a_2391_);
lean_inc(v_fst_2381_);
v___x_2400_ = l_Lean_mkFVar(v_fst_2381_);
v___x_2401_ = l_Lean_MVarId_assert(v_snd_2382_, v___x_2399_, v_newType_2393_, v___x_2400_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2401_) == 0)
{
lean_object* v_a_2402_; lean_object* v___x_2403_; 
v_a_2402_ = lean_ctor_get(v___x_2401_, 0);
lean_inc(v_a_2402_);
lean_dec_ref_known(v___x_2401_, 1);
v___x_2403_ = l_Lean_Meta_intro1Core(v_a_2402_, v___x_2383_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2403_) == 0)
{
lean_object* v_a_2404_; lean_object* v_fst_2405_; lean_object* v_snd_2406_; lean_object* v___x_2407_; 
v_a_2404_ = lean_ctor_get(v___x_2403_, 0);
lean_inc(v_a_2404_);
lean_dec_ref_known(v___x_2403_, 1);
v_fst_2405_ = lean_ctor_get(v_a_2404_, 0);
lean_inc(v_fst_2405_);
v_snd_2406_ = lean_ctor_get(v_a_2404_, 1);
lean_inc(v_snd_2406_);
lean_dec(v_a_2404_);
v___x_2407_ = l_Lean_MVarId_clear(v_snd_2406_, v_fst_2381_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
if (lean_obj_tag(v___x_2407_) == 0)
{
lean_object* v_a_2408_; lean_object* v___x_2409_; 
v_a_2408_ = lean_ctor_get(v___x_2407_, 0);
lean_inc(v_a_2408_);
lean_dec_ref_known(v___x_2407_, 1);
v___x_2409_ = l_Lean_Meta_substCore(v_a_2408_, v_fst_2405_, v_symm_2394_, v_fvarSubst_2384_, v___x_2383_, v___x_2383_, v___y_2395_, v___y_2396_, v___y_2397_, v___y_2398_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
return v___x_2409_;
}
else
{
lean_object* v_a_2410_; lean_object* v___x_2412_; uint8_t v_isShared_2413_; uint8_t v_isSharedCheck_2417_; 
lean_dec(v_fst_2405_);
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v_fvarSubst_2384_);
v_a_2410_ = lean_ctor_get(v___x_2407_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2407_);
if (v_isSharedCheck_2417_ == 0)
{
v___x_2412_ = v___x_2407_;
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
else
{
lean_inc(v_a_2410_);
lean_dec(v___x_2407_);
v___x_2412_ = lean_box(0);
v_isShared_2413_ = v_isSharedCheck_2417_;
goto v_resetjp_2411_;
}
v_resetjp_2411_:
{
lean_object* v___x_2415_; 
if (v_isShared_2413_ == 0)
{
v___x_2415_ = v___x_2412_;
goto v_reusejp_2414_;
}
else
{
lean_object* v_reuseFailAlloc_2416_; 
v_reuseFailAlloc_2416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2416_, 0, v_a_2410_);
v___x_2415_ = v_reuseFailAlloc_2416_;
goto v_reusejp_2414_;
}
v_reusejp_2414_:
{
return v___x_2415_;
}
}
}
}
else
{
lean_object* v_a_2418_; lean_object* v___x_2420_; uint8_t v_isShared_2421_; uint8_t v_isSharedCheck_2425_; 
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_fst_2381_);
v_a_2418_ = lean_ctor_get(v___x_2403_, 0);
v_isSharedCheck_2425_ = !lean_is_exclusive(v___x_2403_);
if (v_isSharedCheck_2425_ == 0)
{
v___x_2420_ = v___x_2403_;
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
else
{
lean_inc(v_a_2418_);
lean_dec(v___x_2403_);
v___x_2420_ = lean_box(0);
v_isShared_2421_ = v_isSharedCheck_2425_;
goto v_resetjp_2419_;
}
v_resetjp_2419_:
{
lean_object* v___x_2423_; 
if (v_isShared_2421_ == 0)
{
v___x_2423_ = v___x_2420_;
goto v_reusejp_2422_;
}
else
{
lean_object* v_reuseFailAlloc_2424_; 
v_reuseFailAlloc_2424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2424_, 0, v_a_2418_);
v___x_2423_ = v_reuseFailAlloc_2424_;
goto v_reusejp_2422_;
}
v_reusejp_2422_:
{
return v___x_2423_;
}
}
}
}
else
{
lean_object* v_a_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2433_; 
lean_dec(v___y_2398_);
lean_dec_ref(v___y_2397_);
lean_dec(v___y_2396_);
lean_dec_ref(v___y_2395_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_fst_2381_);
v_a_2426_ = lean_ctor_get(v___x_2401_, 0);
v_isSharedCheck_2433_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2433_ == 0)
{
v___x_2428_ = v___x_2401_;
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_a_2426_);
lean_dec(v___x_2401_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2433_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2431_; 
if (v_isShared_2429_ == 0)
{
v___x_2431_ = v___x_2428_;
goto v_reusejp_2430_;
}
else
{
lean_object* v_reuseFailAlloc_2432_; 
v_reuseFailAlloc_2432_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2432_, 0, v_a_2426_);
v___x_2431_ = v_reuseFailAlloc_2432_;
goto v_reusejp_2430_;
}
v_reusejp_2430_:
{
return v___x_2431_;
}
}
}
}
v___jp_2434_:
{
lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; 
v___x_2439_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__7));
v___x_2440_ = lean_obj_once(&l_Lean_Meta_substEq___lam__0___closed__1, &l_Lean_Meta_substEq___lam__0___closed__1_once, _init_l_Lean_Meta_substEq___lam__0___closed__1);
v___x_2441_ = l_Lean_LocalDecl_type(v_a_2391_);
lean_dec(v_a_2391_);
v___x_2442_ = l_Lean_indentExpr(v___x_2441_);
v___x_2443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2443_, 0, v___x_2440_);
lean_ctor_set(v___x_2443_, 1, v___x_2442_);
v___x_2444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2444_, 0, v___x_2443_);
v___x_2445_ = l_Lean_Meta_throwTacticEx___redArg(v___x_2439_, v_snd_2382_, v___x_2444_, v___y_2435_, v___y_2436_, v___y_2437_, v___y_2438_);
lean_dec(v___y_2438_);
lean_dec_ref(v___y_2437_);
lean_dec(v___y_2436_);
lean_dec_ref(v___y_2435_);
return v___x_2445_;
}
}
else
{
lean_object* v_a_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2514_; 
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
lean_dec(v_fvarSubst_2384_);
lean_dec(v_snd_2382_);
lean_dec(v_fst_2381_);
v_a_2507_ = lean_ctor_get(v___x_2390_, 0);
v_isSharedCheck_2514_ = !lean_is_exclusive(v___x_2390_);
if (v_isSharedCheck_2514_ == 0)
{
v___x_2509_ = v___x_2390_;
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_a_2507_);
lean_dec(v___x_2390_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2514_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v___x_2512_; 
if (v_isShared_2510_ == 0)
{
v___x_2512_ = v___x_2509_;
goto v_reusejp_2511_;
}
else
{
lean_object* v_reuseFailAlloc_2513_; 
v_reuseFailAlloc_2513_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2513_, 0, v_a_2507_);
v___x_2512_ = v_reuseFailAlloc_2513_;
goto v_reusejp_2511_;
}
v_reusejp_2511_:
{
return v___x_2512_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___lam__0___boxed(lean_object* v_fst_2515_, lean_object* v_snd_2516_, lean_object* v___x_2517_, lean_object* v_fvarSubst_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_, lean_object* v___y_2521_, lean_object* v___y_2522_, lean_object* v___y_2523_){
_start:
{
uint8_t v___x_1727__boxed_2524_; lean_object* v_res_2525_; 
v___x_1727__boxed_2524_ = lean_unbox(v___x_2517_);
v_res_2525_ = l_Lean_Meta_substEq___lam__0(v_fst_2515_, v_snd_2516_, v___x_1727__boxed_2524_, v_fvarSubst_2518_, v___y_2519_, v___y_2520_, v___y_2521_, v___y_2522_);
return v_res_2525_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq(lean_object* v_mvarId_2526_, lean_object* v_hFVarId_2527_, lean_object* v_fvarSubst_2528_, lean_object* v_a_2529_, lean_object* v_a_2530_, lean_object* v_a_2531_, lean_object* v_a_2532_){
_start:
{
uint8_t v___x_2534_; lean_object* v___x_2535_; 
v___x_2534_ = 1;
v___x_2535_ = l_Lean_Meta_heqToEq(v_mvarId_2526_, v_hFVarId_2527_, v___x_2534_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_);
if (lean_obj_tag(v___x_2535_) == 0)
{
lean_object* v_a_2536_; lean_object* v_fst_2537_; lean_object* v_snd_2538_; lean_object* v___x_2539_; lean_object* v___f_2540_; lean_object* v___x_2541_; 
v_a_2536_ = lean_ctor_get(v___x_2535_, 0);
lean_inc(v_a_2536_);
lean_dec_ref_known(v___x_2535_, 1);
v_fst_2537_ = lean_ctor_get(v_a_2536_, 0);
lean_inc(v_fst_2537_);
v_snd_2538_ = lean_ctor_get(v_a_2536_, 1);
lean_inc_n(v_snd_2538_, 2);
lean_dec(v_a_2536_);
v___x_2539_ = lean_box(v___x_2534_);
v___f_2540_ = lean_alloc_closure((void*)(l_Lean_Meta_substEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_2540_, 0, v_fst_2537_);
lean_closure_set(v___f_2540_, 1, v_snd_2538_);
lean_closure_set(v___f_2540_, 2, v___x_2539_);
lean_closure_set(v___f_2540_, 3, v_fvarSubst_2528_);
v___x_2541_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_snd_2538_, v___f_2540_, v_a_2529_, v_a_2530_, v_a_2531_, v_a_2532_);
return v___x_2541_;
}
else
{
lean_object* v_a_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2549_; 
lean_dec(v_fvarSubst_2528_);
v_a_2542_ = lean_ctor_get(v___x_2535_, 0);
v_isSharedCheck_2549_ = !lean_is_exclusive(v___x_2535_);
if (v_isSharedCheck_2549_ == 0)
{
v___x_2544_ = v___x_2535_;
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_a_2542_);
lean_dec(v___x_2535_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2549_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___x_2547_; 
if (v_isShared_2545_ == 0)
{
v___x_2547_ = v___x_2544_;
goto v_reusejp_2546_;
}
else
{
lean_object* v_reuseFailAlloc_2548_; 
v_reuseFailAlloc_2548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2548_, 0, v_a_2542_);
v___x_2547_ = v_reuseFailAlloc_2548_;
goto v_reusejp_2546_;
}
v_reusejp_2546_:
{
return v___x_2547_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substEq___boxed(lean_object* v_mvarId_2550_, lean_object* v_hFVarId_2551_, lean_object* v_fvarSubst_2552_, lean_object* v_a_2553_, lean_object* v_a_2554_, lean_object* v_a_2555_, lean_object* v_a_2556_, lean_object* v_a_2557_){
_start:
{
lean_object* v_res_2558_; 
v_res_2558_ = l_Lean_Meta_substEq(v_mvarId_2550_, v_hFVarId_2551_, v_fvarSubst_2552_, v_a_2553_, v_a_2554_, v_a_2555_, v_a_2556_);
lean_dec(v_a_2556_);
lean_dec_ref(v_a_2555_);
lean_dec(v_a_2554_);
lean_dec_ref(v_a_2553_);
return v_res_2558_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0(lean_object* v_h_2559_, lean_object* v_mvarId_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
lean_object* v___x_2566_; 
lean_inc(v_h_2559_);
v___x_2566_ = l_Lean_FVarId_getType___redArg(v_h_2559_, v___y_2561_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2566_) == 0)
{
lean_object* v_a_2567_; lean_object* v___x_2568_; 
v_a_2567_ = lean_ctor_get(v___x_2566_, 0);
lean_inc_n(v_a_2567_, 2);
lean_dec_ref_known(v___x_2566_, 1);
v___x_2568_ = l_Lean_Meta_matchEq_x3f(v_a_2567_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2568_) == 0)
{
lean_object* v_a_2569_; 
v_a_2569_ = lean_ctor_get(v___x_2568_, 0);
lean_inc(v_a_2569_);
lean_dec_ref_known(v___x_2568_, 1);
if (lean_obj_tag(v_a_2569_) == 0)
{
lean_object* v___x_2570_; 
v___x_2570_ = l_Lean_Meta_matchHEq_x3f(v_a_2567_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2570_) == 0)
{
lean_object* v_a_2571_; 
v_a_2571_ = lean_ctor_get(v___x_2570_, 0);
lean_inc(v_a_2571_);
lean_dec_ref_known(v___x_2570_, 1);
if (lean_obj_tag(v_a_2571_) == 0)
{
lean_object* v___x_2572_; 
v___x_2572_ = l_Lean_Meta_substVar(v_mvarId_2560_, v_h_2559_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
return v___x_2572_;
}
else
{
uint8_t v___x_2573_; lean_object* v___x_2574_; 
lean_dec_ref_known(v_a_2571_, 1);
v___x_2573_ = 1;
lean_inc(v_h_2559_);
lean_inc(v_mvarId_2560_);
v___x_2574_ = l_Lean_Meta_heqToEq(v_mvarId_2560_, v_h_2559_, v___x_2573_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2574_) == 0)
{
lean_object* v_a_2575_; lean_object* v_fst_2576_; lean_object* v_snd_2577_; uint8_t v___x_2578_; 
v_a_2575_ = lean_ctor_get(v___x_2574_, 0);
lean_inc(v_a_2575_);
lean_dec_ref_known(v___x_2574_, 1);
v_fst_2576_ = lean_ctor_get(v_a_2575_, 0);
lean_inc(v_fst_2576_);
v_snd_2577_ = lean_ctor_get(v_a_2575_, 1);
lean_inc(v_snd_2577_);
lean_dec(v_a_2575_);
v___x_2578_ = l_Lean_instBEqMVarId_beq(v_mvarId_2560_, v_snd_2577_);
if (v___x_2578_ == 0)
{
lean_object* v___x_2579_; 
lean_dec(v_mvarId_2560_);
lean_dec(v_h_2559_);
v___x_2579_ = l_Lean_Meta_subst(v_snd_2577_, v_fst_2576_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
return v___x_2579_;
}
else
{
lean_object* v___x_2580_; 
lean_dec(v_snd_2577_);
lean_dec(v_fst_2576_);
v___x_2580_ = l_Lean_Meta_substVar(v_mvarId_2560_, v_h_2559_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
return v___x_2580_;
}
}
else
{
lean_object* v_a_2581_; lean_object* v___x_2583_; uint8_t v_isShared_2584_; uint8_t v_isSharedCheck_2588_; 
lean_dec(v_mvarId_2560_);
lean_dec(v_h_2559_);
v_a_2581_ = lean_ctor_get(v___x_2574_, 0);
v_isSharedCheck_2588_ = !lean_is_exclusive(v___x_2574_);
if (v_isSharedCheck_2588_ == 0)
{
v___x_2583_ = v___x_2574_;
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
else
{
lean_inc(v_a_2581_);
lean_dec(v___x_2574_);
v___x_2583_ = lean_box(0);
v_isShared_2584_ = v_isSharedCheck_2588_;
goto v_resetjp_2582_;
}
v_resetjp_2582_:
{
lean_object* v___x_2586_; 
if (v_isShared_2584_ == 0)
{
v___x_2586_ = v___x_2583_;
goto v_reusejp_2585_;
}
else
{
lean_object* v_reuseFailAlloc_2587_; 
v_reuseFailAlloc_2587_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2587_, 0, v_a_2581_);
v___x_2586_ = v_reuseFailAlloc_2587_;
goto v_reusejp_2585_;
}
v_reusejp_2585_:
{
return v___x_2586_;
}
}
}
}
}
else
{
lean_object* v_a_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2596_; 
lean_dec(v_mvarId_2560_);
lean_dec(v_h_2559_);
v_a_2589_ = lean_ctor_get(v___x_2570_, 0);
v_isSharedCheck_2596_ = !lean_is_exclusive(v___x_2570_);
if (v_isSharedCheck_2596_ == 0)
{
v___x_2591_ = v___x_2570_;
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_a_2589_);
lean_dec(v___x_2570_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2596_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2594_; 
if (v_isShared_2592_ == 0)
{
v___x_2594_ = v___x_2591_;
goto v_reusejp_2593_;
}
else
{
lean_object* v_reuseFailAlloc_2595_; 
v_reuseFailAlloc_2595_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2595_, 0, v_a_2589_);
v___x_2594_ = v_reuseFailAlloc_2595_;
goto v_reusejp_2593_;
}
v_reusejp_2593_:
{
return v___x_2594_;
}
}
}
}
else
{
lean_object* v___x_2597_; lean_object* v___x_2598_; 
lean_dec_ref_known(v_a_2569_, 1);
lean_dec(v_a_2567_);
v___x_2597_ = lean_box(0);
v___x_2598_ = l_Lean_Meta_substEq(v_mvarId_2560_, v_h_2559_, v___x_2597_, v___y_2561_, v___y_2562_, v___y_2563_, v___y_2564_);
if (lean_obj_tag(v___x_2598_) == 0)
{
lean_object* v_a_2599_; lean_object* v___x_2601_; uint8_t v_isShared_2602_; uint8_t v_isSharedCheck_2607_; 
v_a_2599_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2607_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2607_ == 0)
{
v___x_2601_ = v___x_2598_;
v_isShared_2602_ = v_isSharedCheck_2607_;
goto v_resetjp_2600_;
}
else
{
lean_inc(v_a_2599_);
lean_dec(v___x_2598_);
v___x_2601_ = lean_box(0);
v_isShared_2602_ = v_isSharedCheck_2607_;
goto v_resetjp_2600_;
}
v_resetjp_2600_:
{
lean_object* v_snd_2603_; lean_object* v___x_2605_; 
v_snd_2603_ = lean_ctor_get(v_a_2599_, 1);
lean_inc(v_snd_2603_);
lean_dec(v_a_2599_);
if (v_isShared_2602_ == 0)
{
lean_ctor_set(v___x_2601_, 0, v_snd_2603_);
v___x_2605_ = v___x_2601_;
goto v_reusejp_2604_;
}
else
{
lean_object* v_reuseFailAlloc_2606_; 
v_reuseFailAlloc_2606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2606_, 0, v_snd_2603_);
v___x_2605_ = v_reuseFailAlloc_2606_;
goto v_reusejp_2604_;
}
v_reusejp_2604_:
{
return v___x_2605_;
}
}
}
else
{
lean_object* v_a_2608_; lean_object* v___x_2610_; uint8_t v_isShared_2611_; uint8_t v_isSharedCheck_2615_; 
v_a_2608_ = lean_ctor_get(v___x_2598_, 0);
v_isSharedCheck_2615_ = !lean_is_exclusive(v___x_2598_);
if (v_isSharedCheck_2615_ == 0)
{
v___x_2610_ = v___x_2598_;
v_isShared_2611_ = v_isSharedCheck_2615_;
goto v_resetjp_2609_;
}
else
{
lean_inc(v_a_2608_);
lean_dec(v___x_2598_);
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
else
{
lean_object* v_a_2616_; lean_object* v___x_2618_; uint8_t v_isShared_2619_; uint8_t v_isSharedCheck_2623_; 
lean_dec(v_a_2567_);
lean_dec(v_mvarId_2560_);
lean_dec(v_h_2559_);
v_a_2616_ = lean_ctor_get(v___x_2568_, 0);
v_isSharedCheck_2623_ = !lean_is_exclusive(v___x_2568_);
if (v_isSharedCheck_2623_ == 0)
{
v___x_2618_ = v___x_2568_;
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
else
{
lean_inc(v_a_2616_);
lean_dec(v___x_2568_);
v___x_2618_ = lean_box(0);
v_isShared_2619_ = v_isSharedCheck_2623_;
goto v_resetjp_2617_;
}
v_resetjp_2617_:
{
lean_object* v___x_2621_; 
if (v_isShared_2619_ == 0)
{
v___x_2621_ = v___x_2618_;
goto v_reusejp_2620_;
}
else
{
lean_object* v_reuseFailAlloc_2622_; 
v_reuseFailAlloc_2622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2622_, 0, v_a_2616_);
v___x_2621_ = v_reuseFailAlloc_2622_;
goto v_reusejp_2620_;
}
v_reusejp_2620_:
{
return v___x_2621_;
}
}
}
}
else
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2631_; 
lean_dec(v_mvarId_2560_);
lean_dec(v_h_2559_);
v_a_2624_ = lean_ctor_get(v___x_2566_, 0);
v_isSharedCheck_2631_ = !lean_is_exclusive(v___x_2566_);
if (v_isSharedCheck_2631_ == 0)
{
v___x_2626_ = v___x_2566_;
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2566_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2631_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
lean_object* v___x_2629_; 
if (v_isShared_2627_ == 0)
{
v___x_2629_ = v___x_2626_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2630_; 
v_reuseFailAlloc_2630_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2630_, 0, v_a_2624_);
v___x_2629_ = v_reuseFailAlloc_2630_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
return v___x_2629_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___lam__0___boxed(lean_object* v_h_2632_, lean_object* v_mvarId_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Lean_Meta_subst___lam__0(v_h_2632_, v_mvarId_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst(lean_object* v_mvarId_2640_, lean_object* v_h_2641_, lean_object* v_a_2642_, lean_object* v_a_2643_, lean_object* v_a_2644_, lean_object* v_a_2645_){
_start:
{
lean_object* v___f_2647_; lean_object* v___x_2648_; 
lean_inc(v_mvarId_2640_);
v___f_2647_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2647_, 0, v_h_2641_);
lean_closure_set(v___f_2647_, 1, v_mvarId_2640_);
v___x_2648_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_2640_, v___f_2647_, v_a_2642_, v_a_2643_, v_a_2644_, v_a_2645_);
return v___x_2648_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst___boxed(lean_object* v_mvarId_2649_, lean_object* v_h_2650_, lean_object* v_a_2651_, lean_object* v_a_2652_, lean_object* v_a_2653_, lean_object* v_a_2654_, lean_object* v_a_2655_){
_start:
{
lean_object* v_res_2656_; 
v_res_2656_ = l_Lean_Meta_subst(v_mvarId_2649_, v_h_2650_, v_a_2651_, v_a_2652_, v_a_2653_, v_a_2654_);
lean_dec(v_a_2654_);
lean_dec_ref(v_a_2653_);
lean_dec(v_a_2652_);
lean_dec_ref(v_a_2651_);
return v_res_2656_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(lean_object* v_x_2657_, lean_object* v___y_2658_, lean_object* v___y_2659_, lean_object* v___y_2660_, lean_object* v___y_2661_){
_start:
{
lean_object* v___x_2663_; 
v___x_2663_ = l_Lean_Meta_saveState___redArg(v___y_2659_, v___y_2661_);
if (lean_obj_tag(v___x_2663_) == 0)
{
lean_object* v_a_2664_; lean_object* v___x_2665_; 
v_a_2664_ = lean_ctor_get(v___x_2663_, 0);
lean_inc(v_a_2664_);
lean_dec_ref_known(v___x_2663_, 1);
lean_inc(v___y_2661_);
lean_inc_ref(v___y_2660_);
lean_inc(v___y_2659_);
lean_inc_ref(v___y_2658_);
v___x_2665_ = lean_apply_5(v_x_2657_, v___y_2658_, v___y_2659_, v___y_2660_, v___y_2661_, lean_box(0));
if (lean_obj_tag(v___x_2665_) == 0)
{
lean_dec(v_a_2664_);
return v___x_2665_;
}
else
{
lean_object* v_a_2666_; uint8_t v___x_2667_; 
v_a_2666_ = lean_ctor_get(v___x_2665_, 0);
lean_inc(v_a_2666_);
v___x_2667_ = l_Lean_Exception_isInterrupt(v_a_2666_);
if (v___x_2667_ == 0)
{
uint8_t v___x_2668_; 
lean_inc(v_a_2666_);
v___x_2668_ = l_Lean_Exception_isRuntime(v_a_2666_);
if (v___x_2668_ == 0)
{
lean_object* v___x_2669_; 
lean_dec_ref_known(v___x_2665_, 1);
v___x_2669_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2664_, v___y_2659_, v___y_2661_);
if (lean_obj_tag(v___x_2669_) == 0)
{
lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2676_; 
v_isSharedCheck_2676_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2676_ == 0)
{
lean_object* v_unused_2677_; 
v_unused_2677_ = lean_ctor_get(v___x_2669_, 0);
lean_dec(v_unused_2677_);
v___x_2671_ = v___x_2669_;
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
else
{
lean_dec(v___x_2669_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2676_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v___x_2674_; 
if (v_isShared_2672_ == 0)
{
lean_ctor_set_tag(v___x_2671_, 1);
lean_ctor_set(v___x_2671_, 0, v_a_2666_);
v___x_2674_ = v___x_2671_;
goto v_reusejp_2673_;
}
else
{
lean_object* v_reuseFailAlloc_2675_; 
v_reuseFailAlloc_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2675_, 0, v_a_2666_);
v___x_2674_ = v_reuseFailAlloc_2675_;
goto v_reusejp_2673_;
}
v_reusejp_2673_:
{
return v___x_2674_;
}
}
}
else
{
lean_object* v_a_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2685_; 
lean_dec(v_a_2666_);
v_a_2678_ = lean_ctor_get(v___x_2669_, 0);
v_isSharedCheck_2685_ = !lean_is_exclusive(v___x_2669_);
if (v_isSharedCheck_2685_ == 0)
{
v___x_2680_ = v___x_2669_;
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_a_2678_);
lean_dec(v___x_2669_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2685_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v___x_2683_; 
if (v_isShared_2681_ == 0)
{
v___x_2683_ = v___x_2680_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2684_; 
v_reuseFailAlloc_2684_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2684_, 0, v_a_2678_);
v___x_2683_ = v_reuseFailAlloc_2684_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
return v___x_2683_;
}
}
}
}
else
{
lean_dec(v_a_2666_);
lean_dec(v_a_2664_);
return v___x_2665_;
}
}
else
{
lean_dec(v_a_2666_);
lean_dec(v_a_2664_);
return v___x_2665_;
}
}
}
else
{
lean_object* v_a_2686_; lean_object* v___x_2688_; uint8_t v_isShared_2689_; uint8_t v_isSharedCheck_2693_; 
lean_dec_ref(v_x_2657_);
v_a_2686_ = lean_ctor_get(v___x_2663_, 0);
v_isSharedCheck_2693_ = !lean_is_exclusive(v___x_2663_);
if (v_isSharedCheck_2693_ == 0)
{
v___x_2688_ = v___x_2663_;
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
else
{
lean_inc(v_a_2686_);
lean_dec(v___x_2663_);
v___x_2688_ = lean_box(0);
v_isShared_2689_ = v_isSharedCheck_2693_;
goto v_resetjp_2687_;
}
v_resetjp_2687_:
{
lean_object* v___x_2691_; 
if (v_isShared_2689_ == 0)
{
v___x_2691_ = v___x_2688_;
goto v_reusejp_2690_;
}
else
{
lean_object* v_reuseFailAlloc_2692_; 
v_reuseFailAlloc_2692_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2692_, 0, v_a_2686_);
v___x_2691_ = v_reuseFailAlloc_2692_;
goto v_reusejp_2690_;
}
v_reusejp_2690_:
{
return v___x_2691_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg___boxed(lean_object* v_x_2694_, lean_object* v___y_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_){
_start:
{
lean_object* v_res_2700_; 
v_res_2700_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2694_, v___y_2695_, v___y_2696_, v___y_2697_, v___y_2698_);
lean_dec(v___y_2698_);
lean_dec_ref(v___y_2697_);
lean_dec(v___y_2696_);
lean_dec_ref(v___y_2695_);
return v_res_2700_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(lean_object* v_00_u03b1_2701_, lean_object* v_x_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v___x_2708_; 
v___x_2708_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v_x_2702_, v___y_2703_, v___y_2704_, v___y_2705_, v___y_2706_);
return v___x_2708_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___boxed(lean_object* v_00_u03b1_2709_, lean_object* v_x_2710_, lean_object* v___y_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_){
_start:
{
lean_object* v_res_2716_; 
v_res_2716_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1(v_00_u03b1_2709_, v_x_2710_, v___y_2711_, v___y_2712_, v___y_2713_, v___y_2714_);
lean_dec(v___y_2714_);
lean_dec_ref(v___y_2713_);
lean_dec(v___y_2712_);
lean_dec_ref(v___y_2711_);
return v_res_2716_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(lean_object* v_msg_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_){
_start:
{
lean_object* v_ref_2723_; lean_object* v___x_2724_; lean_object* v_a_2725_; lean_object* v___x_2727_; uint8_t v_isShared_2728_; uint8_t v_isSharedCheck_2733_; 
v_ref_2723_ = lean_ctor_get(v___y_2720_, 2);
v___x_2724_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_substCore_spec__2_spec__2(v_msg_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
v_a_2725_ = lean_ctor_get(v___x_2724_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2724_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2727_ = v___x_2724_;
v_isShared_2728_ = v_isSharedCheck_2733_;
goto v_resetjp_2726_;
}
else
{
lean_inc(v_a_2725_);
lean_dec(v___x_2724_);
v___x_2727_ = lean_box(0);
v_isShared_2728_ = v_isSharedCheck_2733_;
goto v_resetjp_2726_;
}
v_resetjp_2726_:
{
lean_object* v___x_2729_; lean_object* v___x_2731_; 
lean_inc(v_ref_2723_);
v___x_2729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2729_, 0, v_ref_2723_);
lean_ctor_set(v___x_2729_, 1, v_a_2725_);
if (v_isShared_2728_ == 0)
{
lean_ctor_set_tag(v___x_2727_, 1);
lean_ctor_set(v___x_2727_, 0, v___x_2729_);
v___x_2731_ = v___x_2727_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v___x_2729_);
v___x_2731_ = v_reuseFailAlloc_2732_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
return v___x_2731_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg___boxed(lean_object* v_msg_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_, lean_object* v___y_2739_){
_start:
{
lean_object* v_res_2740_; 
v_res_2740_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_2734_, v___y_2735_, v___y_2736_, v___y_2737_, v___y_2738_);
lean_dec(v___y_2738_);
lean_dec_ref(v___y_2737_);
lean_dec(v___y_2736_);
lean_dec_ref(v___y_2735_);
return v_res_2740_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; 
v___x_2742_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__0));
v___x_2743_ = l_Lean_stringToMessageData(v___x_2742_);
return v___x_2743_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2745_; lean_object* v___x_2746_; 
v___x_2745_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__2));
v___x_2746_ = l_Lean_stringToMessageData(v___x_2745_);
return v___x_2746_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2748_; lean_object* v___x_2749_; 
v___x_2748_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__4));
v___x_2749_ = l_Lean_stringToMessageData(v___x_2748_);
return v___x_2749_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2751_; lean_object* v___x_2752_; 
v___x_2751_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__6));
v___x_2752_ = l_Lean_stringToMessageData(v___x_2751_);
return v___x_2752_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2754_; lean_object* v___x_2755_; 
v___x_2754_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__8));
v___x_2755_ = l_Lean_stringToMessageData(v___x_2754_);
return v___x_2755_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__0___closed__17(void){
_start:
{
lean_object* v___x_2768_; lean_object* v___x_2769_; 
v___x_2768_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__16));
v___x_2769_ = l_Lean_stringToMessageData(v___x_2768_);
return v___x_2769_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0(lean_object* v_mvarId_2778_, uint8_t v_substLHS_2779_, lean_object* v___y_2780_, lean_object* v___y_2781_, lean_object* v___y_2782_, lean_object* v___y_2783_){
_start:
{
lean_object* v___x_2785_; 
lean_inc(v_mvarId_2778_);
v___x_2785_ = l_Lean_MVarId_getType_x27(v_mvarId_2778_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
if (lean_obj_tag(v___x_2785_) == 0)
{
lean_object* v_a_2786_; 
v_a_2786_ = lean_ctor_get(v___x_2785_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v___x_2785_, 1);
if (lean_obj_tag(v_a_2786_) == 7)
{
lean_object* v_binderType_2790_; lean_object* v_body_2791_; uint8_t v___x_2792_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2796_; lean_object* v___y_2797_; lean_object* v___y_2798_; lean_object* v___y_2799_; lean_object* v___y_2800_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2887_; lean_object* v_fst_2927_; lean_object* v_fst_2928_; lean_object* v_fst_2929_; lean_object* v_snd_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2947_; lean_object* v___y_2948_; lean_object* v___y_2949_; lean_object* v___y_2950_; 
v_binderType_2790_ = lean_ctor_get(v_a_2786_, 1);
lean_inc_ref(v_binderType_2790_);
v_body_2791_ = lean_ctor_get(v_a_2786_, 2);
lean_inc_ref(v_body_2791_);
lean_dec_ref_known(v_a_2786_, 3);
v___x_2792_ = l_Lean_Expr_hasLooseBVars(v_body_2791_);
if (v___x_2792_ == 0)
{
lean_object* v___x_2961_; 
v___x_2961_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_2790_, v___y_2781_);
if (lean_obj_tag(v___x_2961_) == 0)
{
lean_object* v_a_2962_; lean_object* v___x_2963_; uint8_t v___x_2964_; 
v_a_2962_ = lean_ctor_get(v___x_2961_, 0);
lean_inc(v_a_2962_);
lean_dec_ref_known(v___x_2961_, 1);
v___x_2963_ = l_Lean_Expr_cleanupAnnotations(v_a_2962_);
lean_dec(v_a_2962_);
v___x_2964_ = l_Lean_Expr_isApp(v___x_2963_);
if (v___x_2964_ == 0)
{
lean_dec_ref(v___x_2963_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v___y_2947_ = v___y_2780_;
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
goto v___jp_2946_;
}
else
{
lean_object* v___x_2965_; uint8_t v___x_2966_; 
v___x_2965_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2963_);
v___x_2966_ = l_Lean_Expr_isApp(v___x_2965_);
if (v___x_2966_ == 0)
{
lean_dec_ref(v___x_2965_);
lean_dec_ref(v___x_2963_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v___y_2947_ = v___y_2780_;
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
goto v___jp_2946_;
}
else
{
lean_object* v___x_2967_; uint8_t v___x_2968_; 
v___x_2967_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2965_);
v___x_2968_ = l_Lean_Expr_isApp(v___x_2967_);
if (v___x_2968_ == 0)
{
lean_dec_ref(v___x_2967_);
lean_dec_ref(v___x_2965_);
lean_dec_ref(v___x_2963_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v___y_2947_ = v___y_2780_;
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
goto v___jp_2946_;
}
else
{
lean_object* v_arg_2969_; lean_object* v_arg_2970_; lean_object* v_arg_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; uint8_t v___x_2974_; 
v_arg_2969_ = lean_ctor_get(v___x_2963_, 1);
lean_inc_ref(v_arg_2969_);
lean_dec_ref(v___x_2963_);
v_arg_2970_ = lean_ctor_get(v___x_2965_, 1);
lean_inc_ref(v_arg_2970_);
lean_dec_ref(v___x_2965_);
v_arg_2971_ = lean_ctor_get(v___x_2967_, 1);
lean_inc_ref(v_arg_2971_);
v___x_2972_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2967_);
lean_dec_ref(v___x_2967_);
v___x_2973_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__11));
v___x_2974_ = l_Lean_Expr_isConstOf(v___x_2972_, v___x_2973_);
if (v___x_2974_ == 0)
{
uint8_t v___x_2975_; 
v___x_2975_ = l_Lean_Expr_isApp(v___x_2972_);
if (v___x_2975_ == 0)
{
lean_dec_ref(v___x_2972_);
lean_dec_ref(v_arg_2971_);
lean_dec_ref(v_arg_2970_);
lean_dec_ref(v_arg_2969_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v___y_2947_ = v___y_2780_;
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
goto v___jp_2946_;
}
else
{
lean_object* v___x_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v___x_2976_ = l_Lean_Expr_appFnCleanup___redArg(v___x_2972_);
v___x_2977_ = ((lean_object*)(l_Lean_Meta_heqToEq___lam__0___closed__1));
v___x_2978_ = l_Lean_Expr_isConstOf(v___x_2976_, v___x_2977_);
lean_dec_ref(v___x_2976_);
if (v___x_2978_ == 0)
{
lean_dec_ref(v___x_2972_);
lean_dec_ref(v_arg_2971_);
lean_dec_ref(v_arg_2970_);
lean_dec_ref(v_arg_2969_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v___y_2947_ = v___y_2780_;
v___y_2948_ = v___y_2781_;
v___y_2949_ = v___y_2782_;
v___y_2950_ = v___y_2783_;
goto v___jp_2946_;
}
else
{
lean_object* v_arg_2979_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___x_2987_; 
v_arg_2979_ = lean_ctor_get(v___x_2972_, 1);
lean_inc_ref_n(v_arg_2979_, 2);
lean_dec_ref(v___x_2972_);
v___x_2987_ = l_Lean_Meta_isExprDefEq(v_arg_2979_, v_arg_2970_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
if (lean_obj_tag(v___x_2987_) == 0)
{
lean_object* v_a_2988_; uint8_t v___x_2989_; 
v_a_2988_ = lean_ctor_get(v___x_2987_, 0);
lean_inc(v_a_2988_);
lean_dec_ref_known(v___x_2987_, 1);
v___x_2989_ = lean_unbox(v_a_2988_);
lean_dec(v_a_2988_);
if (v___x_2989_ == 0)
{
lean_object* v___x_2990_; lean_object* v___x_2991_; lean_object* v_a_2992_; lean_object* v___x_2994_; uint8_t v_isShared_2995_; uint8_t v_isSharedCheck_2999_; 
lean_dec_ref(v_arg_2979_);
lean_dec_ref(v_arg_2971_);
lean_dec_ref(v_arg_2969_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v___x_2990_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__17, &l_Lean_Meta_introSubstEq___lam__0___closed__17_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__17);
v___x_2991_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2990_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
v_a_2992_ = lean_ctor_get(v___x_2991_, 0);
v_isSharedCheck_2999_ = !lean_is_exclusive(v___x_2991_);
if (v_isSharedCheck_2999_ == 0)
{
v___x_2994_ = v___x_2991_;
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
else
{
lean_inc(v_a_2992_);
lean_dec(v___x_2991_);
v___x_2994_ = lean_box(0);
v_isShared_2995_ = v_isSharedCheck_2999_;
goto v_resetjp_2993_;
}
v_resetjp_2993_:
{
lean_object* v___x_2997_; 
if (v_isShared_2995_ == 0)
{
v___x_2997_ = v___x_2994_;
goto v_reusejp_2996_;
}
else
{
lean_object* v_reuseFailAlloc_2998_; 
v_reuseFailAlloc_2998_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2998_, 0, v_a_2992_);
v___x_2997_ = v_reuseFailAlloc_2998_;
goto v_reusejp_2996_;
}
v_reusejp_2996_:
{
return v___x_2997_;
}
}
}
else
{
v___y_2981_ = v___y_2780_;
v___y_2982_ = v___y_2781_;
v___y_2983_ = v___y_2782_;
v___y_2984_ = v___y_2783_;
goto v___jp_2980_;
}
}
else
{
lean_object* v_a_3000_; lean_object* v___x_3002_; uint8_t v_isShared_3003_; uint8_t v_isSharedCheck_3007_; 
lean_dec_ref(v_arg_2979_);
lean_dec_ref(v_arg_2971_);
lean_dec_ref(v_arg_2969_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v_a_3000_ = lean_ctor_get(v___x_2987_, 0);
v_isSharedCheck_3007_ = !lean_is_exclusive(v___x_2987_);
if (v_isSharedCheck_3007_ == 0)
{
v___x_3002_ = v___x_2987_;
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
else
{
lean_inc(v_a_3000_);
lean_dec(v___x_2987_);
v___x_3002_ = lean_box(0);
v_isShared_3003_ = v_isSharedCheck_3007_;
goto v_resetjp_3001_;
}
v_resetjp_3001_:
{
lean_object* v___x_3005_; 
if (v_isShared_3003_ == 0)
{
v___x_3005_ = v___x_3002_;
goto v_reusejp_3004_;
}
else
{
lean_object* v_reuseFailAlloc_3006_; 
v_reuseFailAlloc_3006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3006_, 0, v_a_3000_);
v___x_3005_ = v_reuseFailAlloc_3006_;
goto v_reusejp_3004_;
}
v_reusejp_3004_:
{
return v___x_3005_;
}
}
}
v___jp_2980_:
{
if (v_substLHS_2779_ == 0)
{
lean_object* v___x_2985_; 
v___x_2985_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__13));
v_fst_2927_ = v_arg_2979_;
v_fst_2928_ = v_arg_2971_;
v_fst_2929_ = v_arg_2969_;
v_snd_2930_ = v___x_2985_;
v___y_2931_ = v___y_2981_;
v___y_2932_ = v___y_2982_;
v___y_2933_ = v___y_2983_;
v___y_2934_ = v___y_2984_;
goto v___jp_2926_;
}
else
{
lean_object* v___x_2986_; 
v___x_2986_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__15));
v_fst_2927_ = v_arg_2979_;
v_fst_2928_ = v_arg_2969_;
v_fst_2929_ = v_arg_2971_;
v_snd_2930_ = v___x_2986_;
v___y_2931_ = v___y_2981_;
v___y_2932_ = v___y_2982_;
v___y_2933_ = v___y_2983_;
v___y_2934_ = v___y_2984_;
goto v___jp_2926_;
}
}
}
}
}
else
{
lean_dec_ref(v___x_2972_);
if (v_substLHS_2779_ == 0)
{
lean_object* v___x_3008_; 
v___x_3008_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__19));
v_fst_2927_ = v_arg_2971_;
v_fst_2928_ = v_arg_2970_;
v_fst_2929_ = v_arg_2969_;
v_snd_2930_ = v___x_3008_;
v___y_2931_ = v___y_2780_;
v___y_2932_ = v___y_2781_;
v___y_2933_ = v___y_2782_;
v___y_2934_ = v___y_2783_;
goto v___jp_2926_;
}
else
{
lean_object* v___x_3009_; 
v___x_3009_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__0___closed__21));
v_fst_2927_ = v_arg_2971_;
v_fst_2928_ = v_arg_2969_;
v_fst_2929_ = v_arg_2970_;
v_snd_2930_ = v___x_3009_;
v___y_2931_ = v___y_2780_;
v___y_2932_ = v___y_2781_;
v___y_2933_ = v___y_2782_;
v___y_2934_ = v___y_2783_;
goto v___jp_2926_;
}
}
}
}
}
}
else
{
lean_object* v_a_3010_; lean_object* v___x_3012_; uint8_t v_isShared_3013_; uint8_t v_isSharedCheck_3017_; 
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v_a_3010_ = lean_ctor_get(v___x_2961_, 0);
v_isSharedCheck_3017_ = !lean_is_exclusive(v___x_2961_);
if (v_isSharedCheck_3017_ == 0)
{
v___x_3012_ = v___x_2961_;
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
else
{
lean_inc(v_a_3010_);
lean_dec(v___x_2961_);
v___x_3012_ = lean_box(0);
v_isShared_3013_ = v_isSharedCheck_3017_;
goto v_resetjp_3011_;
}
v_resetjp_3011_:
{
lean_object* v___x_3015_; 
if (v_isShared_3013_ == 0)
{
v___x_3015_ = v___x_3012_;
goto v_reusejp_3014_;
}
else
{
lean_object* v_reuseFailAlloc_3016_; 
v_reuseFailAlloc_3016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3016_, 0, v_a_3010_);
v___x_3015_ = v_reuseFailAlloc_3016_;
goto v_reusejp_3014_;
}
v_reusejp_3014_:
{
return v___x_3015_;
}
}
}
}
else
{
lean_dec_ref(v_body_2791_);
lean_dec_ref(v_binderType_2790_);
lean_dec(v_mvarId_2778_);
goto v___jp_2787_;
}
v___jp_2793_:
{
lean_object* v___x_2805_; lean_object* v___x_2806_; uint8_t v___x_2807_; uint8_t v___x_2808_; lean_object* v___x_2809_; 
v___x_2805_ = lean_mk_empty_array_with_capacity(v___y_2799_);
lean_inc_ref(v___x_2805_);
v___x_2806_ = lean_array_push(v___x_2805_, v___y_2797_);
v___x_2807_ = 1;
v___x_2808_ = 1;
v___x_2809_ = l_Lean_Meta_mkLambdaFVars(v___x_2806_, v_body_2791_, v___x_2792_, v___x_2807_, v___x_2792_, v___x_2807_, v___x_2808_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
lean_dec_ref(v___x_2806_);
if (lean_obj_tag(v___x_2809_) == 0)
{
lean_object* v_a_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; 
v_a_2810_ = lean_ctor_get(v___x_2809_, 0);
lean_inc_n(v_a_2810_, 2);
lean_dec_ref_known(v___x_2809_, 1);
lean_inc_ref(v___y_2800_);
v___x_2811_ = lean_array_push(v___x_2805_, v___y_2800_);
v___x_2812_ = l_Lean_Expr_beta(v_a_2810_, v___x_2811_);
lean_inc(v___y_2795_);
v___x_2813_ = l_Lean_MVarId_getTag(v___y_2795_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
if (lean_obj_tag(v___x_2813_) == 0)
{
lean_object* v_a_2814_; lean_object* v___x_2815_; 
v_a_2814_ = lean_ctor_get(v___x_2813_, 0);
lean_inc(v_a_2814_);
lean_dec_ref_known(v___x_2813_, 1);
lean_inc_ref(v___x_2812_);
v___x_2815_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2812_, v_a_2814_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
if (lean_obj_tag(v___x_2815_) == 0)
{
lean_object* v_a_2816_; lean_object* v___x_2817_; 
v_a_2816_ = lean_ctor_get(v___x_2815_, 0);
lean_inc(v_a_2816_);
lean_dec_ref_known(v___x_2815_, 1);
v___x_2817_ = l_Lean_Meta_getLevel(v___x_2812_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
if (lean_obj_tag(v___x_2817_) == 0)
{
lean_object* v_a_2818_; lean_object* v___x_2819_; 
v_a_2818_ = lean_ctor_get(v___x_2817_, 0);
lean_inc(v_a_2818_);
lean_dec_ref_known(v___x_2817_, 1);
lean_inc_ref(v___y_2796_);
v___x_2819_ = l_Lean_Meta_getLevel(v___y_2796_, v___y_2801_, v___y_2802_, v___y_2803_, v___y_2804_);
if (lean_obj_tag(v___x_2819_) == 0)
{
lean_object* v_a_2820_; lean_object* v___x_2821_; lean_object* v___x_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; lean_object* v___x_2828_; uint8_t v_isShared_2829_; uint8_t v_isSharedCheck_2837_; 
v_a_2820_ = lean_ctor_get(v___x_2819_, 0);
lean_inc(v_a_2820_);
lean_dec_ref_known(v___x_2819_, 1);
v___x_2821_ = lean_box(0);
v___x_2822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2822_, 0, v_a_2820_);
lean_ctor_set(v___x_2822_, 1, v___x_2821_);
v___x_2823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2823_, 0, v_a_2818_);
lean_ctor_set(v___x_2823_, 1, v___x_2822_);
lean_inc(v___y_2794_);
v___x_2824_ = l_Lean_mkConst(v___y_2794_, v___x_2823_);
lean_inc(v_a_2816_);
lean_inc_ref(v___y_2800_);
v___x_2825_ = l_Lean_mkApp4(v___x_2824_, v___y_2796_, v___y_2800_, v_a_2810_, v_a_2816_);
v___x_2826_ = l_Lean_MVarId_assign___at___00Lean_Meta_substCore_spec__4___redArg(v___y_2795_, v___x_2825_, v___y_2802_);
v_isSharedCheck_2837_ = !lean_is_exclusive(v___x_2826_);
if (v_isSharedCheck_2837_ == 0)
{
lean_object* v_unused_2838_; 
v_unused_2838_ = lean_ctor_get(v___x_2826_, 0);
lean_dec(v_unused_2838_);
v___x_2828_ = v___x_2826_;
v_isShared_2829_ = v_isSharedCheck_2837_;
goto v_resetjp_2827_;
}
else
{
lean_dec(v___x_2826_);
v___x_2828_ = lean_box(0);
v_isShared_2829_ = v_isSharedCheck_2837_;
goto v_resetjp_2827_;
}
v_resetjp_2827_:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2835_; 
v___x_2830_ = l_Lean_Meta_FVarSubst_empty;
v___x_2831_ = l_Lean_Meta_FVarSubst_insert(v___x_2830_, v___y_2798_, v___y_2800_);
v___x_2832_ = l_Lean_Expr_mvarId_x21(v_a_2816_);
lean_dec(v_a_2816_);
v___x_2833_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2833_, 0, v___x_2831_);
lean_ctor_set(v___x_2833_, 1, v___x_2832_);
if (v_isShared_2829_ == 0)
{
lean_ctor_set(v___x_2828_, 0, v___x_2833_);
v___x_2835_ = v___x_2828_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2836_; 
v_reuseFailAlloc_2836_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2836_, 0, v___x_2833_);
v___x_2835_ = v_reuseFailAlloc_2836_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
return v___x_2835_;
}
}
}
else
{
lean_object* v_a_2839_; lean_object* v___x_2841_; uint8_t v_isShared_2842_; uint8_t v_isSharedCheck_2846_; 
lean_dec(v_a_2818_);
lean_dec(v_a_2816_);
lean_dec(v_a_2810_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
v_a_2839_ = lean_ctor_get(v___x_2819_, 0);
v_isSharedCheck_2846_ = !lean_is_exclusive(v___x_2819_);
if (v_isSharedCheck_2846_ == 0)
{
v___x_2841_ = v___x_2819_;
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
else
{
lean_inc(v_a_2839_);
lean_dec(v___x_2819_);
v___x_2841_ = lean_box(0);
v_isShared_2842_ = v_isSharedCheck_2846_;
goto v_resetjp_2840_;
}
v_resetjp_2840_:
{
lean_object* v___x_2844_; 
if (v_isShared_2842_ == 0)
{
v___x_2844_ = v___x_2841_;
goto v_reusejp_2843_;
}
else
{
lean_object* v_reuseFailAlloc_2845_; 
v_reuseFailAlloc_2845_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2845_, 0, v_a_2839_);
v___x_2844_ = v_reuseFailAlloc_2845_;
goto v_reusejp_2843_;
}
v_reusejp_2843_:
{
return v___x_2844_;
}
}
}
}
else
{
lean_object* v_a_2847_; lean_object* v___x_2849_; uint8_t v_isShared_2850_; uint8_t v_isSharedCheck_2854_; 
lean_dec(v_a_2816_);
lean_dec(v_a_2810_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
v_a_2847_ = lean_ctor_get(v___x_2817_, 0);
v_isSharedCheck_2854_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2854_ == 0)
{
v___x_2849_ = v___x_2817_;
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
else
{
lean_inc(v_a_2847_);
lean_dec(v___x_2817_);
v___x_2849_ = lean_box(0);
v_isShared_2850_ = v_isSharedCheck_2854_;
goto v_resetjp_2848_;
}
v_resetjp_2848_:
{
lean_object* v___x_2852_; 
if (v_isShared_2850_ == 0)
{
v___x_2852_ = v___x_2849_;
goto v_reusejp_2851_;
}
else
{
lean_object* v_reuseFailAlloc_2853_; 
v_reuseFailAlloc_2853_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2853_, 0, v_a_2847_);
v___x_2852_ = v_reuseFailAlloc_2853_;
goto v_reusejp_2851_;
}
v_reusejp_2851_:
{
return v___x_2852_;
}
}
}
}
else
{
lean_object* v_a_2855_; lean_object* v___x_2857_; uint8_t v_isShared_2858_; uint8_t v_isSharedCheck_2862_; 
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2810_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
v_a_2855_ = lean_ctor_get(v___x_2815_, 0);
v_isSharedCheck_2862_ = !lean_is_exclusive(v___x_2815_);
if (v_isSharedCheck_2862_ == 0)
{
v___x_2857_ = v___x_2815_;
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
else
{
lean_inc(v_a_2855_);
lean_dec(v___x_2815_);
v___x_2857_ = lean_box(0);
v_isShared_2858_ = v_isSharedCheck_2862_;
goto v_resetjp_2856_;
}
v_resetjp_2856_:
{
lean_object* v___x_2860_; 
if (v_isShared_2858_ == 0)
{
v___x_2860_ = v___x_2857_;
goto v_reusejp_2859_;
}
else
{
lean_object* v_reuseFailAlloc_2861_; 
v_reuseFailAlloc_2861_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2861_, 0, v_a_2855_);
v___x_2860_ = v_reuseFailAlloc_2861_;
goto v_reusejp_2859_;
}
v_reusejp_2859_:
{
return v___x_2860_;
}
}
}
}
else
{
lean_object* v_a_2863_; lean_object* v___x_2865_; uint8_t v_isShared_2866_; uint8_t v_isSharedCheck_2870_; 
lean_dec_ref(v___x_2812_);
lean_dec(v_a_2810_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
v_a_2863_ = lean_ctor_get(v___x_2813_, 0);
v_isSharedCheck_2870_ = !lean_is_exclusive(v___x_2813_);
if (v_isSharedCheck_2870_ == 0)
{
v___x_2865_ = v___x_2813_;
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
else
{
lean_inc(v_a_2863_);
lean_dec(v___x_2813_);
v___x_2865_ = lean_box(0);
v_isShared_2866_ = v_isSharedCheck_2870_;
goto v_resetjp_2864_;
}
v_resetjp_2864_:
{
lean_object* v___x_2868_; 
if (v_isShared_2866_ == 0)
{
v___x_2868_ = v___x_2865_;
goto v_reusejp_2867_;
}
else
{
lean_object* v_reuseFailAlloc_2869_; 
v_reuseFailAlloc_2869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2869_, 0, v_a_2863_);
v___x_2868_ = v_reuseFailAlloc_2869_;
goto v_reusejp_2867_;
}
v_reusejp_2867_:
{
return v___x_2868_;
}
}
}
}
else
{
lean_object* v_a_2871_; lean_object* v___x_2873_; uint8_t v_isShared_2874_; uint8_t v_isSharedCheck_2878_; 
lean_dec_ref(v___x_2805_);
lean_dec_ref(v___y_2800_);
lean_dec(v___y_2798_);
lean_dec_ref(v___y_2796_);
lean_dec(v___y_2795_);
v_a_2871_ = lean_ctor_get(v___x_2809_, 0);
v_isSharedCheck_2878_ = !lean_is_exclusive(v___x_2809_);
if (v_isSharedCheck_2878_ == 0)
{
v___x_2873_ = v___x_2809_;
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
else
{
lean_inc(v_a_2871_);
lean_dec(v___x_2809_);
v___x_2873_ = lean_box(0);
v_isShared_2874_ = v_isSharedCheck_2878_;
goto v_resetjp_2872_;
}
v_resetjp_2872_:
{
lean_object* v___x_2876_; 
if (v_isShared_2874_ == 0)
{
v___x_2876_ = v___x_2873_;
goto v_reusejp_2875_;
}
else
{
lean_object* v_reuseFailAlloc_2877_; 
v_reuseFailAlloc_2877_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2877_, 0, v_a_2871_);
v___x_2876_ = v_reuseFailAlloc_2877_;
goto v_reusejp_2875_;
}
v_reusejp_2875_:
{
return v___x_2876_;
}
}
}
}
v___jp_2879_:
{
lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; 
v___x_2888_ = l_Lean_Expr_fvarId_x21(v___y_2882_);
v___x_2889_ = lean_unsigned_to_nat(1u);
v___x_2890_ = lean_mk_empty_array_with_capacity(v___x_2889_);
lean_inc(v___x_2888_);
v___x_2891_ = lean_array_push(v___x_2890_, v___x_2888_);
v___x_2892_ = l_Lean_MVarId_revert(v_mvarId_2778_, v___x_2891_, v___x_2792_, v___x_2792_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
if (lean_obj_tag(v___x_2892_) == 0)
{
lean_object* v_a_2893_; lean_object* v_fst_2894_; lean_object* v_snd_2895_; lean_object* v___x_2897_; uint8_t v_isShared_2898_; uint8_t v_isSharedCheck_2917_; 
v_a_2893_ = lean_ctor_get(v___x_2892_, 0);
lean_inc(v_a_2893_);
lean_dec_ref_known(v___x_2892_, 1);
v_fst_2894_ = lean_ctor_get(v_a_2893_, 0);
v_snd_2895_ = lean_ctor_get(v_a_2893_, 1);
v_isSharedCheck_2917_ = !lean_is_exclusive(v_a_2893_);
if (v_isSharedCheck_2917_ == 0)
{
v___x_2897_ = v_a_2893_;
v_isShared_2898_ = v_isSharedCheck_2917_;
goto v_resetjp_2896_;
}
else
{
lean_inc(v_snd_2895_);
lean_inc(v_fst_2894_);
lean_dec(v_a_2893_);
v___x_2897_ = lean_box(0);
v_isShared_2898_ = v_isSharedCheck_2917_;
goto v_resetjp_2896_;
}
v_resetjp_2896_:
{
lean_object* v___x_2899_; uint8_t v___x_2900_; 
v___x_2899_ = lean_array_get_size(v_fst_2894_);
lean_dec(v_fst_2894_);
v___x_2900_ = lean_nat_dec_eq(v___x_2899_, v___x_2889_);
if (v___x_2900_ == 0)
{
lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2904_; 
lean_dec(v_snd_2895_);
lean_dec(v___x_2888_);
lean_dec_ref(v___y_2883_);
lean_dec_ref(v___y_2881_);
lean_dec_ref(v_body_2791_);
v___x_2901_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__3, &l_Lean_Meta_introSubstEq___lam__0___closed__3_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__3);
v___x_2902_ = l_Lean_MessageData_ofExpr(v___y_2882_);
if (v_isShared_2898_ == 0)
{
lean_ctor_set_tag(v___x_2897_, 7);
lean_ctor_set(v___x_2897_, 1, v___x_2902_);
lean_ctor_set(v___x_2897_, 0, v___x_2901_);
v___x_2904_ = v___x_2897_;
goto v_reusejp_2903_;
}
else
{
lean_object* v_reuseFailAlloc_2916_; 
v_reuseFailAlloc_2916_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2916_, 0, v___x_2901_);
lean_ctor_set(v_reuseFailAlloc_2916_, 1, v___x_2902_);
v___x_2904_ = v_reuseFailAlloc_2916_;
goto v_reusejp_2903_;
}
v_reusejp_2903_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v_a_2908_; lean_object* v___x_2910_; uint8_t v_isShared_2911_; uint8_t v_isSharedCheck_2915_; 
v___x_2905_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__5, &l_Lean_Meta_introSubstEq___lam__0___closed__5_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__5);
v___x_2906_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2906_, 0, v___x_2904_);
lean_ctor_set(v___x_2906_, 1, v___x_2905_);
v___x_2907_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2906_, v___y_2884_, v___y_2885_, v___y_2886_, v___y_2887_);
v_a_2908_ = lean_ctor_get(v___x_2907_, 0);
v_isSharedCheck_2915_ = !lean_is_exclusive(v___x_2907_);
if (v_isSharedCheck_2915_ == 0)
{
v___x_2910_ = v___x_2907_;
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
else
{
lean_inc(v_a_2908_);
lean_dec(v___x_2907_);
v___x_2910_ = lean_box(0);
v_isShared_2911_ = v_isSharedCheck_2915_;
goto v_resetjp_2909_;
}
v_resetjp_2909_:
{
lean_object* v___x_2913_; 
if (v_isShared_2911_ == 0)
{
v___x_2913_ = v___x_2910_;
goto v_reusejp_2912_;
}
else
{
lean_object* v_reuseFailAlloc_2914_; 
v_reuseFailAlloc_2914_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2914_, 0, v_a_2908_);
v___x_2913_ = v_reuseFailAlloc_2914_;
goto v_reusejp_2912_;
}
v_reusejp_2912_:
{
return v___x_2913_;
}
}
}
}
else
{
lean_del_object(v___x_2897_);
v___y_2794_ = v___y_2880_;
v___y_2795_ = v_snd_2895_;
v___y_2796_ = v___y_2881_;
v___y_2797_ = v___y_2882_;
v___y_2798_ = v___x_2888_;
v___y_2799_ = v___x_2889_;
v___y_2800_ = v___y_2883_;
v___y_2801_ = v___y_2884_;
v___y_2802_ = v___y_2885_;
v___y_2803_ = v___y_2886_;
v___y_2804_ = v___y_2887_;
goto v___jp_2793_;
}
}
}
else
{
lean_object* v_a_2918_; lean_object* v___x_2920_; uint8_t v_isShared_2921_; uint8_t v_isSharedCheck_2925_; 
lean_dec(v___x_2888_);
lean_dec_ref(v___y_2883_);
lean_dec_ref(v___y_2882_);
lean_dec_ref(v___y_2881_);
lean_dec_ref(v_body_2791_);
v_a_2918_ = lean_ctor_get(v___x_2892_, 0);
v_isSharedCheck_2925_ = !lean_is_exclusive(v___x_2892_);
if (v_isSharedCheck_2925_ == 0)
{
v___x_2920_ = v___x_2892_;
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
else
{
lean_inc(v_a_2918_);
lean_dec(v___x_2892_);
v___x_2920_ = lean_box(0);
v_isShared_2921_ = v_isSharedCheck_2925_;
goto v_resetjp_2919_;
}
v_resetjp_2919_:
{
lean_object* v___x_2923_; 
if (v_isShared_2921_ == 0)
{
v___x_2923_ = v___x_2920_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2924_; 
v_reuseFailAlloc_2924_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2924_, 0, v_a_2918_);
v___x_2923_ = v_reuseFailAlloc_2924_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
return v___x_2923_;
}
}
}
}
v___jp_2926_:
{
uint8_t v___x_2935_; 
v___x_2935_ = l_Lean_Expr_isFVar(v_fst_2929_);
if (v___x_2935_ == 0)
{
lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v_a_2938_; lean_object* v___x_2940_; uint8_t v_isShared_2941_; uint8_t v_isSharedCheck_2945_; 
lean_dec_ref(v_fst_2929_);
lean_dec_ref(v_fst_2928_);
lean_dec_ref(v_fst_2927_);
lean_dec_ref(v_body_2791_);
lean_dec(v_mvarId_2778_);
v___x_2936_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__7, &l_Lean_Meta_introSubstEq___lam__0___closed__7_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__7);
v___x_2937_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2936_, v___y_2931_, v___y_2932_, v___y_2933_, v___y_2934_);
v_a_2938_ = lean_ctor_get(v___x_2937_, 0);
v_isSharedCheck_2945_ = !lean_is_exclusive(v___x_2937_);
if (v_isSharedCheck_2945_ == 0)
{
v___x_2940_ = v___x_2937_;
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
else
{
lean_inc(v_a_2938_);
lean_dec(v___x_2937_);
v___x_2940_ = lean_box(0);
v_isShared_2941_ = v_isSharedCheck_2945_;
goto v_resetjp_2939_;
}
v_resetjp_2939_:
{
lean_object* v___x_2943_; 
if (v_isShared_2941_ == 0)
{
v___x_2943_ = v___x_2940_;
goto v_reusejp_2942_;
}
else
{
lean_object* v_reuseFailAlloc_2944_; 
v_reuseFailAlloc_2944_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2944_, 0, v_a_2938_);
v___x_2943_ = v_reuseFailAlloc_2944_;
goto v_reusejp_2942_;
}
v_reusejp_2942_:
{
return v___x_2943_;
}
}
}
else
{
v___y_2880_ = v_snd_2930_;
v___y_2881_ = v_fst_2927_;
v___y_2882_ = v_fst_2929_;
v___y_2883_ = v_fst_2928_;
v___y_2884_ = v___y_2931_;
v___y_2885_ = v___y_2932_;
v___y_2886_ = v___y_2933_;
v___y_2887_ = v___y_2934_;
goto v___jp_2879_;
}
}
v___jp_2946_:
{
lean_object* v___x_2951_; lean_object* v___x_2952_; lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_2960_; 
v___x_2951_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__9, &l_Lean_Meta_introSubstEq___lam__0___closed__9_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__9);
v___x_2952_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2951_, v___y_2947_, v___y_2948_, v___y_2949_, v___y_2950_);
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_2960_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_2960_ == 0)
{
v___x_2955_ = v___x_2952_;
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2952_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_2960_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v___x_2958_; 
if (v_isShared_2956_ == 0)
{
v___x_2958_ = v___x_2955_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v_a_2953_);
v___x_2958_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
return v___x_2958_;
}
}
}
}
else
{
lean_dec(v_a_2786_);
lean_dec(v_mvarId_2778_);
goto v___jp_2787_;
}
v___jp_2787_:
{
lean_object* v___x_2788_; lean_object* v___x_2789_; 
v___x_2788_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__0___closed__1, &l_Lean_Meta_introSubstEq___lam__0___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__0___closed__1);
v___x_2789_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_2788_, v___y_2780_, v___y_2781_, v___y_2782_, v___y_2783_);
return v___x_2789_;
}
}
else
{
lean_object* v_a_3018_; lean_object* v___x_3020_; uint8_t v_isShared_3021_; uint8_t v_isSharedCheck_3025_; 
lean_dec(v_mvarId_2778_);
v_a_3018_ = lean_ctor_get(v___x_2785_, 0);
v_isSharedCheck_3025_ = !lean_is_exclusive(v___x_2785_);
if (v_isSharedCheck_3025_ == 0)
{
v___x_3020_ = v___x_2785_;
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
else
{
lean_inc(v_a_3018_);
lean_dec(v___x_2785_);
v___x_3020_ = lean_box(0);
v_isShared_3021_ = v_isSharedCheck_3025_;
goto v_resetjp_3019_;
}
v_resetjp_3019_:
{
lean_object* v___x_3023_; 
if (v_isShared_3021_ == 0)
{
v___x_3023_ = v___x_3020_;
goto v_reusejp_3022_;
}
else
{
lean_object* v_reuseFailAlloc_3024_; 
v_reuseFailAlloc_3024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3024_, 0, v_a_3018_);
v___x_3023_ = v_reuseFailAlloc_3024_;
goto v_reusejp_3022_;
}
v_reusejp_3022_:
{
return v___x_3023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__0___boxed(lean_object* v_mvarId_3026_, lean_object* v_substLHS_3027_, lean_object* v___y_3028_, lean_object* v___y_3029_, lean_object* v___y_3030_, lean_object* v___y_3031_, lean_object* v___y_3032_){
_start:
{
uint8_t v_substLHS_boxed_3033_; lean_object* v_res_3034_; 
v_substLHS_boxed_3033_ = lean_unbox(v_substLHS_3027_);
v_res_3034_ = l_Lean_Meta_introSubstEq___lam__0(v_mvarId_3026_, v_substLHS_boxed_3033_, v___y_3028_, v___y_3029_, v___y_3030_, v___y_3031_);
lean_dec(v___y_3031_);
lean_dec_ref(v___y_3030_);
lean_dec(v___y_3029_);
lean_dec_ref(v___y_3028_);
return v_res_3034_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(lean_object* v_keys_3035_, lean_object* v_i_3036_, lean_object* v_k_3037_){
_start:
{
lean_object* v___x_3038_; uint8_t v___x_3039_; 
v___x_3038_ = lean_array_get_size(v_keys_3035_);
v___x_3039_ = lean_nat_dec_lt(v_i_3036_, v___x_3038_);
if (v___x_3039_ == 0)
{
lean_dec(v_i_3036_);
return v___x_3039_;
}
else
{
lean_object* v_k_x27_3040_; uint8_t v___x_3041_; 
v_k_x27_3040_ = lean_array_fget_borrowed(v_keys_3035_, v_i_3036_);
v___x_3041_ = l_Lean_instBEqMVarId_beq(v_k_3037_, v_k_x27_3040_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; lean_object* v___x_3043_; 
v___x_3042_ = lean_unsigned_to_nat(1u);
v___x_3043_ = lean_nat_add(v_i_3036_, v___x_3042_);
lean_dec(v_i_3036_);
v_i_3036_ = v___x_3043_;
goto _start;
}
else
{
lean_dec(v_i_3036_);
return v___x_3039_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v_keys_3045_, lean_object* v_i_3046_, lean_object* v_k_3047_){
_start:
{
uint8_t v_res_3048_; lean_object* v_r_3049_; 
v_res_3048_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3045_, v_i_3046_, v_k_3047_);
lean_dec(v_k_3047_);
lean_dec_ref(v_keys_3045_);
v_r_3049_ = lean_box(v_res_3048_);
return v_r_3049_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(lean_object* v_x_3050_, size_t v_x_3051_, lean_object* v_x_3052_){
_start:
{
if (lean_obj_tag(v_x_3050_) == 0)
{
lean_object* v_es_3053_; lean_object* v___x_3054_; size_t v___x_3055_; size_t v___x_3056_; lean_object* v_j_3057_; lean_object* v___x_3058_; 
v_es_3053_ = lean_ctor_get(v_x_3050_, 0);
v___x_3054_ = lean_box(2);
v___x_3055_ = ((size_t)31ULL);
v___x_3056_ = lean_usize_land(v_x_3051_, v___x_3055_);
v_j_3057_ = lean_usize_to_nat(v___x_3056_);
v___x_3058_ = lean_array_get_borrowed(v___x_3054_, v_es_3053_, v_j_3057_);
lean_dec(v_j_3057_);
switch(lean_obj_tag(v___x_3058_))
{
case 0:
{
lean_object* v_key_3059_; uint8_t v___x_3060_; 
v_key_3059_ = lean_ctor_get(v___x_3058_, 0);
v___x_3060_ = l_Lean_instBEqMVarId_beq(v_x_3052_, v_key_3059_);
return v___x_3060_;
}
case 1:
{
lean_object* v_node_3061_; size_t v___x_3062_; size_t v___x_3063_; 
v_node_3061_ = lean_ctor_get(v___x_3058_, 0);
v___x_3062_ = ((size_t)5ULL);
v___x_3063_ = lean_usize_shift_right(v_x_3051_, v___x_3062_);
v_x_3050_ = v_node_3061_;
v_x_3051_ = v___x_3063_;
goto _start;
}
default: 
{
uint8_t v___x_3065_; 
v___x_3065_ = 0;
return v___x_3065_;
}
}
}
else
{
lean_object* v_ks_3066_; lean_object* v___x_3067_; uint8_t v___x_3068_; 
v_ks_3066_ = lean_ctor_get(v_x_3050_, 0);
v___x_3067_ = lean_unsigned_to_nat(0u);
v___x_3068_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_ks_3066_, v___x_3067_, v_x_3052_);
return v___x_3068_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v_x_3069_, lean_object* v_x_3070_, lean_object* v_x_3071_){
_start:
{
size_t v_x_11140__boxed_3072_; uint8_t v_res_3073_; lean_object* v_r_3074_; 
v_x_11140__boxed_3072_ = lean_unbox_usize(v_x_3070_);
lean_dec(v_x_3070_);
v_res_3073_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3069_, v_x_11140__boxed_3072_, v_x_3071_);
lean_dec(v_x_3071_);
lean_dec_ref(v_x_3069_);
v_r_3074_ = lean_box(v_res_3073_);
return v_r_3074_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(lean_object* v_x_3075_, lean_object* v_x_3076_){
_start:
{
uint64_t v___x_3077_; size_t v___x_3078_; uint8_t v___x_3079_; 
v___x_3077_ = l_Lean_instHashableMVarId_hash(v_x_3076_);
v___x_3078_ = lean_uint64_to_usize(v___x_3077_);
v___x_3079_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3075_, v___x_3078_, v_x_3076_);
return v___x_3079_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg___boxed(lean_object* v_x_3080_, lean_object* v_x_3081_){
_start:
{
uint8_t v_res_3082_; lean_object* v_r_3083_; 
v_res_3082_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3080_, v_x_3081_);
lean_dec(v_x_3081_);
lean_dec_ref(v_x_3080_);
v_r_3083_ = lean_box(v_res_3082_);
return v_r_3083_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(lean_object* v_mvarId_3084_, lean_object* v___y_3085_){
_start:
{
lean_object* v___x_3087_; lean_object* v_mctx_3088_; lean_object* v_eAssignment_3089_; uint8_t v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; 
v___x_3087_ = lean_st_ref_get(v___y_3085_);
v_mctx_3088_ = lean_ctor_get(v___x_3087_, 0);
lean_inc_ref(v_mctx_3088_);
lean_dec(v___x_3087_);
v_eAssignment_3089_ = lean_ctor_get(v_mctx_3088_, 8);
lean_inc_ref(v_eAssignment_3089_);
lean_dec_ref(v_mctx_3088_);
v___x_3090_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_eAssignment_3089_, v_mvarId_3084_);
lean_dec_ref(v_eAssignment_3089_);
v___x_3091_ = lean_box(v___x_3090_);
v___x_3092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3092_, 0, v___x_3091_);
return v___x_3092_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg___boxed(lean_object* v_mvarId_3093_, lean_object* v___y_3094_, lean_object* v___y_3095_){
_start:
{
lean_object* v_res_3096_; 
v_res_3096_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3093_, v___y_3094_);
lean_dec(v___y_3094_);
lean_dec(v_mvarId_3093_);
return v_res_3096_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_3098_; lean_object* v___x_3099_; 
v___x_3098_ = ((lean_object*)(l_Lean_Meta_introSubstEq___lam__1___closed__0));
v___x_3099_ = l_Lean_stringToMessageData(v___x_3098_);
return v___x_3099_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1(lean_object* v_mvarId_3100_, uint8_t v___x_3101_, lean_object* v_____r_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_){
_start:
{
lean_object* v___x_3140_; lean_object* v_a_3141_; uint8_t v___x_3142_; 
v___x_3140_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3100_, v___y_3104_);
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
lean_inc(v_a_3141_);
lean_dec_ref(v___x_3140_);
v___x_3142_ = lean_unbox(v_a_3141_);
lean_dec(v_a_3141_);
if (v___x_3142_ == 0)
{
goto v___jp_3108_;
}
else
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v_a_3145_; lean_object* v___x_3147_; uint8_t v_isShared_3148_; uint8_t v_isSharedCheck_3152_; 
lean_dec(v_mvarId_3100_);
v___x_3143_ = lean_obj_once(&l_Lean_Meta_introSubstEq___lam__1___closed__1, &l_Lean_Meta_introSubstEq___lam__1___closed__1_once, _init_l_Lean_Meta_introSubstEq___lam__1___closed__1);
v___x_3144_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v___x_3143_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_);
v_a_3145_ = lean_ctor_get(v___x_3144_, 0);
v_isSharedCheck_3152_ = !lean_is_exclusive(v___x_3144_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3147_ = v___x_3144_;
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
else
{
lean_inc(v_a_3145_);
lean_dec(v___x_3144_);
v___x_3147_ = lean_box(0);
v_isShared_3148_ = v_isSharedCheck_3152_;
goto v_resetjp_3146_;
}
v_resetjp_3146_:
{
lean_object* v___x_3150_; 
if (v_isShared_3148_ == 0)
{
v___x_3150_ = v___x_3147_;
goto v_reusejp_3149_;
}
else
{
lean_object* v_reuseFailAlloc_3151_; 
v_reuseFailAlloc_3151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3151_, 0, v_a_3145_);
v___x_3150_ = v_reuseFailAlloc_3151_;
goto v_reusejp_3149_;
}
v_reusejp_3149_:
{
return v___x_3150_;
}
}
}
v___jp_3108_:
{
lean_object* v___x_3109_; 
v___x_3109_ = l_Lean_Meta_intro1Core(v_mvarId_3100_, v___x_3101_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v_a_3110_; lean_object* v_fst_3111_; lean_object* v_snd_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; 
v_a_3110_ = lean_ctor_get(v___x_3109_, 0);
lean_inc(v_a_3110_);
lean_dec_ref_known(v___x_3109_, 1);
v_fst_3111_ = lean_ctor_get(v_a_3110_, 0);
lean_inc(v_fst_3111_);
v_snd_3112_ = lean_ctor_get(v_a_3110_, 1);
lean_inc(v_snd_3112_);
lean_dec(v_a_3110_);
v___x_3113_ = lean_box(0);
v___x_3114_ = l_Lean_Meta_substEq(v_snd_3112_, v_fst_3111_, v___x_3113_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_);
if (lean_obj_tag(v___x_3114_) == 0)
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3123_; 
v_a_3115_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3123_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3123_ == 0)
{
v___x_3117_ = v___x_3114_;
v_isShared_3118_ = v_isSharedCheck_3123_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_3114_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3123_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3119_; lean_object* v___x_3121_; 
v___x_3119_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3119_, 0, v_a_3115_);
if (v_isShared_3118_ == 0)
{
lean_ctor_set(v___x_3117_, 0, v___x_3119_);
v___x_3121_ = v___x_3117_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3122_; 
v_reuseFailAlloc_3122_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3122_, 0, v___x_3119_);
v___x_3121_ = v_reuseFailAlloc_3122_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
return v___x_3121_;
}
}
}
else
{
lean_object* v_a_3124_; lean_object* v___x_3126_; uint8_t v_isShared_3127_; uint8_t v_isSharedCheck_3131_; 
v_a_3124_ = lean_ctor_get(v___x_3114_, 0);
v_isSharedCheck_3131_ = !lean_is_exclusive(v___x_3114_);
if (v_isSharedCheck_3131_ == 0)
{
v___x_3126_ = v___x_3114_;
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
else
{
lean_inc(v_a_3124_);
lean_dec(v___x_3114_);
v___x_3126_ = lean_box(0);
v_isShared_3127_ = v_isSharedCheck_3131_;
goto v_resetjp_3125_;
}
v_resetjp_3125_:
{
lean_object* v___x_3129_; 
if (v_isShared_3127_ == 0)
{
v___x_3129_ = v___x_3126_;
goto v_reusejp_3128_;
}
else
{
lean_object* v_reuseFailAlloc_3130_; 
v_reuseFailAlloc_3130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3130_, 0, v_a_3124_);
v___x_3129_ = v_reuseFailAlloc_3130_;
goto v_reusejp_3128_;
}
v_reusejp_3128_:
{
return v___x_3129_;
}
}
}
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3134_; uint8_t v_isShared_3135_; uint8_t v_isSharedCheck_3139_; 
v_a_3132_ = lean_ctor_get(v___x_3109_, 0);
v_isSharedCheck_3139_ = !lean_is_exclusive(v___x_3109_);
if (v_isSharedCheck_3139_ == 0)
{
v___x_3134_ = v___x_3109_;
v_isShared_3135_ = v_isSharedCheck_3139_;
goto v_resetjp_3133_;
}
else
{
lean_inc(v_a_3132_);
lean_dec(v___x_3109_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___lam__1___boxed(lean_object* v_mvarId_3153_, lean_object* v___x_3154_, lean_object* v_____r_3155_, lean_object* v___y_3156_, lean_object* v___y_3157_, lean_object* v___y_3158_, lean_object* v___y_3159_, lean_object* v___y_3160_){
_start:
{
uint8_t v___x_11212__boxed_3161_; lean_object* v_res_3162_; 
v___x_11212__boxed_3161_ = lean_unbox(v___x_3154_);
v_res_3162_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3153_, v___x_11212__boxed_3161_, v_____r_3155_, v___y_3156_, v___y_3157_, v___y_3158_, v___y_3159_);
lean_dec(v___y_3159_);
lean_dec_ref(v___y_3158_);
lean_dec(v___y_3157_);
lean_dec_ref(v___y_3156_);
return v_res_3162_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__2(void){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3166_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__18));
v___x_3167_ = ((lean_object*)(l_Lean_Meta_substCore___lam__1___closed__1));
v___x_3168_ = l_Lean_Name_append(v___x_3167_, v___x_3166_);
return v___x_3168_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__4(void){
_start:
{
lean_object* v___x_3170_; lean_object* v___x_3171_; 
v___x_3170_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__3));
v___x_3171_ = l_Lean_stringToMessageData(v___x_3170_);
return v___x_3171_;
}
}
static lean_object* _init_l_Lean_Meta_introSubstEq___closed__6(void){
_start:
{
lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3173_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__5));
v___x_3174_ = l_Lean_stringToMessageData(v___x_3173_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq(lean_object* v_mvarId_3175_, uint8_t v_substLHS_3176_, lean_object* v_a_3177_, lean_object* v_a_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_){
_start:
{
lean_object* v___y_3183_; lean_object* v___x_3201_; lean_object* v___f_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; 
v___x_3201_ = lean_box(v_substLHS_3176_);
lean_inc_n(v_mvarId_3175_, 2);
v___f_3202_ = lean_alloc_closure((void*)(l_Lean_Meta_introSubstEq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3202_, 0, v_mvarId_3175_);
lean_closure_set(v___f_3202_, 1, v___x_3201_);
v___x_3203_ = ((lean_object*)(l_Lean_Meta_introSubstEq___closed__1));
v___x_3204_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3175_, v___x_3203_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_);
if (lean_obj_tag(v___x_3204_) == 0)
{
lean_object* v___x_3205_; lean_object* v___x_3206_; 
lean_dec_ref_known(v___x_3204_, 1);
lean_inc(v_mvarId_3175_);
v___x_3205_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___boxed), 8, 3);
lean_closure_set(v___x_3205_, 0, lean_box(0));
lean_closure_set(v___x_3205_, 1, v_mvarId_3175_);
lean_closure_set(v___x_3205_, 2, v___f_3202_);
v___x_3206_ = l_Lean_commitIfNoEx___at___00Lean_Meta_introSubstEq_spec__1___redArg(v___x_3205_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_);
if (lean_obj_tag(v___x_3206_) == 0)
{
lean_dec(v_mvarId_3175_);
return v___x_3206_;
}
else
{
lean_object* v_a_3207_; uint8_t v___x_3208_; 
v_a_3207_ = lean_ctor_get(v___x_3206_, 0);
v___x_3208_ = l_Lean_Exception_isInterrupt(v_a_3207_);
if (v___x_3208_ == 0)
{
uint8_t v___x_3209_; 
lean_inc(v_a_3207_);
v___x_3209_ = l_Lean_Exception_isRuntime(v_a_3207_);
if (v___x_3209_ == 0)
{
lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3243_; 
lean_inc(v_a_3207_);
v_isSharedCheck_3243_ = !lean_is_exclusive(v___x_3206_);
if (v_isSharedCheck_3243_ == 0)
{
lean_object* v_unused_3244_; 
v_unused_3244_ = lean_ctor_get(v___x_3206_, 0);
lean_dec(v_unused_3244_);
v___x_3211_ = v___x_3206_;
v_isShared_3212_ = v_isSharedCheck_3243_;
goto v_resetjp_3210_;
}
else
{
lean_dec(v___x_3206_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3243_;
goto v_resetjp_3210_;
}
v_resetjp_3210_:
{
lean_object* v_toCold_3213_; lean_object* v_options_3214_; lean_object* v_inheritedTraceOptions_3215_; uint8_t v_hasTrace_3216_; 
v_toCold_3213_ = lean_ctor_get(v_a_3179_, 0);
v_options_3214_ = lean_ctor_get(v_toCold_3213_, 2);
v_inheritedTraceOptions_3215_ = lean_ctor_get(v_toCold_3213_, 11);
v_hasTrace_3216_ = lean_ctor_get_uint8(v_options_3214_, sizeof(void*)*1);
if (v_hasTrace_3216_ == 0)
{
lean_del_object(v___x_3211_);
lean_dec(v_a_3207_);
goto v___jp_3217_;
}
else
{
lean_object* v___x_3220_; lean_object* v___x_3221_; uint8_t v___x_3222_; 
v___x_3220_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__18));
v___x_3221_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__2, &l_Lean_Meta_introSubstEq___closed__2_once, _init_l_Lean_Meta_introSubstEq___closed__2);
v___x_3222_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3215_, v_options_3214_, v___x_3221_);
if (v___x_3222_ == 0)
{
lean_del_object(v___x_3211_);
lean_dec(v_a_3207_);
goto v___jp_3217_;
}
else
{
lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3229_; 
v___x_3223_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__4, &l_Lean_Meta_introSubstEq___closed__4_once, _init_l_Lean_Meta_introSubstEq___closed__4);
v___x_3224_ = l_Lean_Exception_toMessageData(v_a_3207_);
v___x_3225_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3225_, 0, v___x_3223_);
lean_ctor_set(v___x_3225_, 1, v___x_3224_);
v___x_3226_ = lean_obj_once(&l_Lean_Meta_introSubstEq___closed__6, &l_Lean_Meta_introSubstEq___closed__6_once, _init_l_Lean_Meta_introSubstEq___closed__6);
v___x_3227_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3227_, 0, v___x_3225_);
lean_ctor_set(v___x_3227_, 1, v___x_3226_);
lean_inc(v_mvarId_3175_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 0, v_mvarId_3175_);
v___x_3229_ = v___x_3211_;
goto v_reusejp_3228_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v_mvarId_3175_);
v___x_3229_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3228_;
}
v_reusejp_3228_:
{
lean_object* v___x_3230_; lean_object* v___x_3231_; 
v___x_3230_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3227_);
lean_ctor_set(v___x_3230_, 1, v___x_3229_);
v___x_3231_ = l_Lean_addTrace___at___00Lean_Meta_substCore_spec__2(v___x_3220_, v___x_3230_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_);
if (lean_obj_tag(v___x_3231_) == 0)
{
lean_object* v_a_3232_; lean_object* v___x_3233_; 
v_a_3232_ = lean_ctor_get(v___x_3231_, 0);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3231_, 1);
v___x_3233_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3175_, v___x_3209_, v_a_3232_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_);
v___y_3183_ = v___x_3233_;
goto v___jp_3182_;
}
else
{
lean_object* v_a_3234_; lean_object* v___x_3236_; uint8_t v_isShared_3237_; uint8_t v_isSharedCheck_3241_; 
lean_dec(v_mvarId_3175_);
v_a_3234_ = lean_ctor_get(v___x_3231_, 0);
v_isSharedCheck_3241_ = !lean_is_exclusive(v___x_3231_);
if (v_isSharedCheck_3241_ == 0)
{
v___x_3236_ = v___x_3231_;
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
else
{
lean_inc(v_a_3234_);
lean_dec(v___x_3231_);
v___x_3236_ = lean_box(0);
v_isShared_3237_ = v_isSharedCheck_3241_;
goto v_resetjp_3235_;
}
v_resetjp_3235_:
{
lean_object* v___x_3239_; 
if (v_isShared_3237_ == 0)
{
v___x_3239_ = v___x_3236_;
goto v_reusejp_3238_;
}
else
{
lean_object* v_reuseFailAlloc_3240_; 
v_reuseFailAlloc_3240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3240_, 0, v_a_3234_);
v___x_3239_ = v_reuseFailAlloc_3240_;
goto v_reusejp_3238_;
}
v_reusejp_3238_:
{
return v___x_3239_;
}
}
}
}
}
}
v___jp_3217_:
{
lean_object* v___x_3218_; lean_object* v___x_3219_; 
v___x_3218_ = lean_box(0);
v___x_3219_ = l_Lean_Meta_introSubstEq___lam__1(v_mvarId_3175_, v___x_3209_, v___x_3218_, v_a_3177_, v_a_3178_, v_a_3179_, v_a_3180_);
v___y_3183_ = v___x_3219_;
goto v___jp_3182_;
}
}
}
else
{
lean_dec(v_mvarId_3175_);
return v___x_3206_;
}
}
else
{
lean_dec(v_mvarId_3175_);
return v___x_3206_;
}
}
}
else
{
lean_object* v_a_3245_; lean_object* v___x_3247_; uint8_t v_isShared_3248_; uint8_t v_isSharedCheck_3252_; 
lean_dec_ref(v___f_3202_);
lean_dec(v_mvarId_3175_);
v_a_3245_ = lean_ctor_get(v___x_3204_, 0);
v_isSharedCheck_3252_ = !lean_is_exclusive(v___x_3204_);
if (v_isSharedCheck_3252_ == 0)
{
v___x_3247_ = v___x_3204_;
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
else
{
lean_inc(v_a_3245_);
lean_dec(v___x_3204_);
v___x_3247_ = lean_box(0);
v_isShared_3248_ = v_isSharedCheck_3252_;
goto v_resetjp_3246_;
}
v_resetjp_3246_:
{
lean_object* v___x_3250_; 
if (v_isShared_3248_ == 0)
{
v___x_3250_ = v___x_3247_;
goto v_reusejp_3249_;
}
else
{
lean_object* v_reuseFailAlloc_3251_; 
v_reuseFailAlloc_3251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3251_, 0, v_a_3245_);
v___x_3250_ = v_reuseFailAlloc_3251_;
goto v_reusejp_3249_;
}
v_reusejp_3249_:
{
return v___x_3250_;
}
}
}
v___jp_3182_:
{
if (lean_obj_tag(v___y_3183_) == 0)
{
lean_object* v_a_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3192_; 
v_a_3184_ = lean_ctor_get(v___y_3183_, 0);
v_isSharedCheck_3192_ = !lean_is_exclusive(v___y_3183_);
if (v_isSharedCheck_3192_ == 0)
{
v___x_3186_ = v___y_3183_;
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_a_3184_);
lean_dec(v___y_3183_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3192_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v_a_3188_; lean_object* v___x_3190_; 
v_a_3188_ = lean_ctor_get(v_a_3184_, 0);
lean_inc(v_a_3188_);
lean_dec(v_a_3184_);
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 0, v_a_3188_);
v___x_3190_ = v___x_3186_;
goto v_reusejp_3189_;
}
else
{
lean_object* v_reuseFailAlloc_3191_; 
v_reuseFailAlloc_3191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3191_, 0, v_a_3188_);
v___x_3190_ = v_reuseFailAlloc_3191_;
goto v_reusejp_3189_;
}
v_reusejp_3189_:
{
return v___x_3190_;
}
}
}
else
{
lean_object* v_a_3193_; lean_object* v___x_3195_; uint8_t v_isShared_3196_; uint8_t v_isSharedCheck_3200_; 
v_a_3193_ = lean_ctor_get(v___y_3183_, 0);
v_isSharedCheck_3200_ = !lean_is_exclusive(v___y_3183_);
if (v_isSharedCheck_3200_ == 0)
{
v___x_3195_ = v___y_3183_;
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
else
{
lean_inc(v_a_3193_);
lean_dec(v___y_3183_);
v___x_3195_ = lean_box(0);
v_isShared_3196_ = v_isSharedCheck_3200_;
goto v_resetjp_3194_;
}
v_resetjp_3194_:
{
lean_object* v___x_3198_; 
if (v_isShared_3196_ == 0)
{
v___x_3198_ = v___x_3195_;
goto v_reusejp_3197_;
}
else
{
lean_object* v_reuseFailAlloc_3199_; 
v_reuseFailAlloc_3199_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3199_, 0, v_a_3193_);
v___x_3198_ = v_reuseFailAlloc_3199_;
goto v_reusejp_3197_;
}
v_reusejp_3197_:
{
return v___x_3198_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_introSubstEq___boxed(lean_object* v_mvarId_3253_, lean_object* v_substLHS_3254_, lean_object* v_a_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_){
_start:
{
uint8_t v_substLHS_boxed_3260_; lean_object* v_res_3261_; 
v_substLHS_boxed_3260_ = lean_unbox(v_substLHS_3254_);
v_res_3261_ = l_Lean_Meta_introSubstEq(v_mvarId_3253_, v_substLHS_boxed_3260_, v_a_3255_, v_a_3256_, v_a_3257_, v_a_3258_);
lean_dec(v_a_3258_);
lean_dec_ref(v_a_3257_);
lean_dec(v_a_3256_);
lean_dec_ref(v_a_3255_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(lean_object* v_00_u03b1_3262_, lean_object* v_msg_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
lean_object* v___x_3269_; 
v___x_3269_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___redArg(v_msg_3263_, v___y_3264_, v___y_3265_, v___y_3266_, v___y_3267_);
return v___x_3269_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0___boxed(lean_object* v_00_u03b1_3270_, lean_object* v_msg_3271_, lean_object* v___y_3272_, lean_object* v___y_3273_, lean_object* v___y_3274_, lean_object* v___y_3275_, lean_object* v___y_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = l_Lean_throwError___at___00Lean_Meta_introSubstEq_spec__0(v_00_u03b1_3270_, v_msg_3271_, v___y_3272_, v___y_3273_, v___y_3274_, v___y_3275_);
lean_dec(v___y_3275_);
lean_dec_ref(v___y_3274_);
lean_dec(v___y_3273_);
lean_dec_ref(v___y_3272_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(lean_object* v_mvarId_3278_, lean_object* v___y_3279_, lean_object* v___y_3280_, lean_object* v___y_3281_, lean_object* v___y_3282_){
_start:
{
lean_object* v___x_3284_; 
v___x_3284_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___redArg(v_mvarId_3278_, v___y_3280_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2___boxed(lean_object* v_mvarId_3285_, lean_object* v___y_3286_, lean_object* v___y_3287_, lean_object* v___y_3288_, lean_object* v___y_3289_, lean_object* v___y_3290_){
_start:
{
lean_object* v_res_3291_; 
v_res_3291_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2(v_mvarId_3285_, v___y_3286_, v___y_3287_, v___y_3288_, v___y_3289_);
lean_dec(v___y_3289_);
lean_dec_ref(v___y_3288_);
lean_dec(v___y_3287_);
lean_dec_ref(v___y_3286_);
lean_dec(v_mvarId_3285_);
return v_res_3291_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(lean_object* v_00_u03b2_3292_, lean_object* v_x_3293_, lean_object* v_x_3294_){
_start:
{
uint8_t v___x_3295_; 
v___x_3295_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___redArg(v_x_3293_, v_x_3294_);
return v___x_3295_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2___boxed(lean_object* v_00_u03b2_3296_, lean_object* v_x_3297_, lean_object* v_x_3298_){
_start:
{
uint8_t v_res_3299_; lean_object* v_r_3300_; 
v_res_3299_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2(v_00_u03b2_3296_, v_x_3297_, v_x_3298_);
lean_dec(v_x_3298_);
lean_dec_ref(v_x_3297_);
v_r_3300_ = lean_box(v_res_3299_);
return v_r_3300_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(lean_object* v_00_u03b2_3301_, lean_object* v_x_3302_, size_t v_x_3303_, lean_object* v_x_3304_){
_start:
{
uint8_t v___x_3305_; 
v___x_3305_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___redArg(v_x_3302_, v_x_3303_, v_x_3304_);
return v___x_3305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3___boxed(lean_object* v_00_u03b2_3306_, lean_object* v_x_3307_, lean_object* v_x_3308_, lean_object* v_x_3309_){
_start:
{
size_t v_x_11558__boxed_3310_; uint8_t v_res_3311_; lean_object* v_r_3312_; 
v_x_11558__boxed_3310_ = lean_unbox_usize(v_x_3308_);
lean_dec(v_x_3308_);
v_res_3311_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3(v_00_u03b2_3306_, v_x_3307_, v_x_11558__boxed_3310_, v_x_3309_);
lean_dec(v_x_3309_);
lean_dec_ref(v_x_3307_);
v_r_3312_ = lean_box(v_res_3311_);
return v_r_3312_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_3313_, lean_object* v_keys_3314_, lean_object* v_vals_3315_, lean_object* v_heq_3316_, lean_object* v_i_3317_, lean_object* v_k_3318_){
_start:
{
uint8_t v___x_3319_; 
v___x_3319_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___redArg(v_keys_3314_, v_i_3317_, v_k_3318_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4___boxed(lean_object* v_00_u03b2_3320_, lean_object* v_keys_3321_, lean_object* v_vals_3322_, lean_object* v_heq_3323_, lean_object* v_i_3324_, lean_object* v_k_3325_){
_start:
{
uint8_t v_res_3326_; lean_object* v_r_3327_; 
v_res_3326_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_introSubstEq_spec__2_spec__2_spec__3_spec__4(v_00_u03b2_3320_, v_keys_3321_, v_vals_3322_, v_heq_3323_, v_i_3324_, v_k_3325_);
lean_dec(v_k_3325_);
lean_dec_ref(v_vals_3322_);
lean_dec_ref(v_keys_3321_);
v_r_3327_ = lean_box(v_res_3326_);
return v_r_3327_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(lean_object* v_x_3328_, lean_object* v___y_3329_, lean_object* v___y_3330_, lean_object* v___y_3331_, lean_object* v___y_3332_){
_start:
{
lean_object* v___x_3334_; 
v___x_3334_ = l_Lean_Meta_saveState___redArg(v___y_3330_, v___y_3332_);
if (lean_obj_tag(v___x_3334_) == 0)
{
lean_object* v_a_3335_; lean_object* v___x_3336_; 
v_a_3335_ = lean_ctor_get(v___x_3334_, 0);
lean_inc(v_a_3335_);
lean_dec_ref_known(v___x_3334_, 1);
lean_inc(v___y_3332_);
lean_inc_ref(v___y_3331_);
lean_inc(v___y_3330_);
lean_inc_ref(v___y_3329_);
v___x_3336_ = lean_apply_5(v_x_3328_, v___y_3329_, v___y_3330_, v___y_3331_, v___y_3332_, lean_box(0));
if (lean_obj_tag(v___x_3336_) == 0)
{
lean_object* v_a_3337_; lean_object* v___x_3339_; uint8_t v_isShared_3340_; uint8_t v_isSharedCheck_3345_; 
lean_dec(v_a_3335_);
v_a_3337_ = lean_ctor_get(v___x_3336_, 0);
v_isSharedCheck_3345_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3345_ == 0)
{
v___x_3339_ = v___x_3336_;
v_isShared_3340_ = v_isSharedCheck_3345_;
goto v_resetjp_3338_;
}
else
{
lean_inc(v_a_3337_);
lean_dec(v___x_3336_);
v___x_3339_ = lean_box(0);
v_isShared_3340_ = v_isSharedCheck_3345_;
goto v_resetjp_3338_;
}
v_resetjp_3338_:
{
lean_object* v___x_3341_; lean_object* v___x_3343_; 
v___x_3341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3341_, 0, v_a_3337_);
if (v_isShared_3340_ == 0)
{
lean_ctor_set(v___x_3339_, 0, v___x_3341_);
v___x_3343_ = v___x_3339_;
goto v_reusejp_3342_;
}
else
{
lean_object* v_reuseFailAlloc_3344_; 
v_reuseFailAlloc_3344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3344_, 0, v___x_3341_);
v___x_3343_ = v_reuseFailAlloc_3344_;
goto v_reusejp_3342_;
}
v_reusejp_3342_:
{
return v___x_3343_;
}
}
}
else
{
lean_object* v_a_3346_; lean_object* v___x_3348_; uint8_t v_isShared_3349_; uint8_t v_isSharedCheck_3376_; 
v_a_3346_ = lean_ctor_get(v___x_3336_, 0);
v_isSharedCheck_3376_ = !lean_is_exclusive(v___x_3336_);
if (v_isSharedCheck_3376_ == 0)
{
v___x_3348_ = v___x_3336_;
v_isShared_3349_ = v_isSharedCheck_3376_;
goto v_resetjp_3347_;
}
else
{
lean_inc(v_a_3346_);
lean_dec(v___x_3336_);
v___x_3348_ = lean_box(0);
v_isShared_3349_ = v_isSharedCheck_3376_;
goto v_resetjp_3347_;
}
v_resetjp_3347_:
{
uint8_t v___x_3350_; 
v___x_3350_ = l_Lean_Exception_isInterrupt(v_a_3346_);
if (v___x_3350_ == 0)
{
uint8_t v___x_3351_; 
lean_inc(v_a_3346_);
v___x_3351_ = l_Lean_Exception_isRuntime(v_a_3346_);
if (v___x_3351_ == 0)
{
lean_object* v___x_3352_; 
lean_del_object(v___x_3348_);
lean_dec(v_a_3346_);
v___x_3352_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3335_, v___y_3330_, v___y_3332_);
if (lean_obj_tag(v___x_3352_) == 0)
{
lean_object* v___x_3354_; uint8_t v_isShared_3355_; uint8_t v_isSharedCheck_3360_; 
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3360_ == 0)
{
lean_object* v_unused_3361_; 
v_unused_3361_ = lean_ctor_get(v___x_3352_, 0);
lean_dec(v_unused_3361_);
v___x_3354_ = v___x_3352_;
v_isShared_3355_ = v_isSharedCheck_3360_;
goto v_resetjp_3353_;
}
else
{
lean_dec(v___x_3352_);
v___x_3354_ = lean_box(0);
v_isShared_3355_ = v_isSharedCheck_3360_;
goto v_resetjp_3353_;
}
v_resetjp_3353_:
{
lean_object* v___x_3356_; lean_object* v___x_3358_; 
v___x_3356_ = lean_box(0);
if (v_isShared_3355_ == 0)
{
lean_ctor_set(v___x_3354_, 0, v___x_3356_);
v___x_3358_ = v___x_3354_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v___x_3356_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
v_a_3362_ = lean_ctor_get(v___x_3352_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3352_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3352_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3352_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
else
{
lean_object* v___x_3371_; 
lean_dec(v_a_3335_);
if (v_isShared_3349_ == 0)
{
v___x_3371_ = v___x_3348_;
goto v_reusejp_3370_;
}
else
{
lean_object* v_reuseFailAlloc_3372_; 
v_reuseFailAlloc_3372_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3372_, 0, v_a_3346_);
v___x_3371_ = v_reuseFailAlloc_3372_;
goto v_reusejp_3370_;
}
v_reusejp_3370_:
{
return v___x_3371_;
}
}
}
else
{
lean_object* v___x_3374_; 
lean_dec(v_a_3335_);
if (v_isShared_3349_ == 0)
{
v___x_3374_ = v___x_3348_;
goto v_reusejp_3373_;
}
else
{
lean_object* v_reuseFailAlloc_3375_; 
v_reuseFailAlloc_3375_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3375_, 0, v_a_3346_);
v___x_3374_ = v_reuseFailAlloc_3375_;
goto v_reusejp_3373_;
}
v_reusejp_3373_:
{
return v___x_3374_;
}
}
}
}
}
else
{
lean_object* v_a_3377_; lean_object* v___x_3379_; uint8_t v_isShared_3380_; uint8_t v_isSharedCheck_3384_; 
lean_dec_ref(v_x_3328_);
v_a_3377_ = lean_ctor_get(v___x_3334_, 0);
v_isSharedCheck_3384_ = !lean_is_exclusive(v___x_3334_);
if (v_isSharedCheck_3384_ == 0)
{
v___x_3379_ = v___x_3334_;
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
else
{
lean_inc(v_a_3377_);
lean_dec(v___x_3334_);
v___x_3379_ = lean_box(0);
v_isShared_3380_ = v_isSharedCheck_3384_;
goto v_resetjp_3378_;
}
v_resetjp_3378_:
{
lean_object* v___x_3382_; 
if (v_isShared_3380_ == 0)
{
v___x_3382_ = v___x_3379_;
goto v_reusejp_3381_;
}
else
{
lean_object* v_reuseFailAlloc_3383_; 
v_reuseFailAlloc_3383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3383_, 0, v_a_3377_);
v___x_3382_ = v_reuseFailAlloc_3383_;
goto v_reusejp_3381_;
}
v_reusejp_3381_:
{
return v___x_3382_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg___boxed(lean_object* v_x_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_){
_start:
{
lean_object* v_res_3391_; 
v_res_3391_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_);
lean_dec(v___y_3389_);
lean_dec_ref(v___y_3388_);
lean_dec(v___y_3387_);
lean_dec_ref(v___y_3386_);
return v_res_3391_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(lean_object* v_00_u03b1_3392_, lean_object* v_x_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_){
_start:
{
lean_object* v___x_3399_; 
v___x_3399_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v_x_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_);
return v___x_3399_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___boxed(lean_object* v_00_u03b1_3400_, lean_object* v_x_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
lean_object* v_res_3407_; 
v_res_3407_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0(v_00_u03b1_3400_, v_x_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_);
lean_dec(v___y_3405_);
lean_dec_ref(v___y_3404_);
lean_dec(v___y_3403_);
lean_dec_ref(v___y_3402_);
return v_res_3407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f(lean_object* v_mvarId_3408_, lean_object* v_hFVarId_3409_, lean_object* v_a_3410_, lean_object* v_a_3411_, lean_object* v_a_3412_, lean_object* v_a_3413_){
_start:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = lean_alloc_closure((void*)(l_Lean_Meta_substVar___boxed), 7, 2);
lean_closure_set(v___x_3415_, 0, v_mvarId_3408_);
lean_closure_set(v___x_3415_, 1, v_hFVarId_3409_);
v___x_3416_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3415_, v_a_3410_, v_a_3411_, v_a_3412_, v_a_3413_);
return v___x_3416_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVar_x3f___boxed(lean_object* v_mvarId_3417_, lean_object* v_hFVarId_3418_, lean_object* v_a_3419_, lean_object* v_a_3420_, lean_object* v_a_3421_, lean_object* v_a_3422_, lean_object* v_a_3423_){
_start:
{
lean_object* v_res_3424_; 
v_res_3424_ = l_Lean_Meta_substVar_x3f(v_mvarId_3417_, v_hFVarId_3418_, v_a_3419_, v_a_3420_, v_a_3421_, v_a_3422_);
lean_dec(v_a_3422_);
lean_dec_ref(v_a_3421_);
lean_dec(v_a_3420_);
lean_dec_ref(v_a_3419_);
return v_res_3424_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f(lean_object* v_mvarId_3425_, lean_object* v_hFVarId_3426_, lean_object* v_a_3427_, lean_object* v_a_3428_, lean_object* v_a_3429_, lean_object* v_a_3430_){
_start:
{
lean_object* v___x_3432_; lean_object* v___x_3433_; 
v___x_3432_ = lean_alloc_closure((void*)(l_Lean_Meta_subst___boxed), 7, 2);
lean_closure_set(v___x_3432_, 0, v_mvarId_3425_);
lean_closure_set(v___x_3432_, 1, v_hFVarId_3426_);
v___x_3433_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3432_, v_a_3427_, v_a_3428_, v_a_3429_, v_a_3430_);
return v___x_3433_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_subst_x3f___boxed(lean_object* v_mvarId_3434_, lean_object* v_hFVarId_3435_, lean_object* v_a_3436_, lean_object* v_a_3437_, lean_object* v_a_3438_, lean_object* v_a_3439_, lean_object* v_a_3440_){
_start:
{
lean_object* v_res_3441_; 
v_res_3441_ = l_Lean_Meta_subst_x3f(v_mvarId_3434_, v_hFVarId_3435_, v_a_3436_, v_a_3437_, v_a_3438_, v_a_3439_);
lean_dec(v_a_3439_);
lean_dec_ref(v_a_3438_);
lean_dec(v_a_3437_);
lean_dec_ref(v_a_3436_);
return v_res_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f(lean_object* v_mvarId_3442_, lean_object* v_hFVarId_3443_, uint8_t v_symm_3444_, lean_object* v_fvarSubst_3445_, uint8_t v_clearH_3446_, uint8_t v_tryToSkip_3447_, lean_object* v_a_3448_, lean_object* v_a_3449_, lean_object* v_a_3450_, lean_object* v_a_3451_){
_start:
{
lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; 
v___x_3453_ = lean_box(v_symm_3444_);
v___x_3454_ = lean_box(v_clearH_3446_);
v___x_3455_ = lean_box(v_tryToSkip_3447_);
v___x_3456_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_3456_, 0, v_mvarId_3442_);
lean_closure_set(v___x_3456_, 1, v_hFVarId_3443_);
lean_closure_set(v___x_3456_, 2, v___x_3453_);
lean_closure_set(v___x_3456_, 3, v_fvarSubst_3445_);
lean_closure_set(v___x_3456_, 4, v___x_3454_);
lean_closure_set(v___x_3456_, 5, v___x_3455_);
v___x_3457_ = l_Lean_observing_x3f___at___00Lean_Meta_substVar_x3f_spec__0___redArg(v___x_3456_, v_a_3448_, v_a_3449_, v_a_3450_, v_a_3451_);
return v___x_3457_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substCore_x3f___boxed(lean_object* v_mvarId_3458_, lean_object* v_hFVarId_3459_, lean_object* v_symm_3460_, lean_object* v_fvarSubst_3461_, lean_object* v_clearH_3462_, lean_object* v_tryToSkip_3463_, lean_object* v_a_3464_, lean_object* v_a_3465_, lean_object* v_a_3466_, lean_object* v_a_3467_, lean_object* v_a_3468_){
_start:
{
uint8_t v_symm_boxed_3469_; uint8_t v_clearH_boxed_3470_; uint8_t v_tryToSkip_boxed_3471_; lean_object* v_res_3472_; 
v_symm_boxed_3469_ = lean_unbox(v_symm_3460_);
v_clearH_boxed_3470_ = lean_unbox(v_clearH_3462_);
v_tryToSkip_boxed_3471_ = lean_unbox(v_tryToSkip_3463_);
v_res_3472_ = l_Lean_Meta_substCore_x3f(v_mvarId_3458_, v_hFVarId_3459_, v_symm_boxed_3469_, v_fvarSubst_3461_, v_clearH_boxed_3470_, v_tryToSkip_boxed_3471_, v_a_3464_, v_a_3465_, v_a_3466_, v_a_3467_);
lean_dec(v_a_3467_);
lean_dec_ref(v_a_3466_);
lean_dec(v_a_3465_);
lean_dec_ref(v_a_3464_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar(lean_object* v_mvarId_3473_, lean_object* v_hFVarId_3474_, lean_object* v_a_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_, lean_object* v_a_3478_){
_start:
{
lean_object* v___x_3480_; 
lean_inc(v_mvarId_3473_);
v___x_3480_ = l_Lean_Meta_substVar_x3f(v_mvarId_3473_, v_hFVarId_3474_, v_a_3475_, v_a_3476_, v_a_3477_, v_a_3478_);
if (lean_obj_tag(v___x_3480_) == 0)
{
lean_object* v_a_3481_; lean_object* v___x_3483_; uint8_t v_isShared_3484_; uint8_t v_isSharedCheck_3492_; 
v_a_3481_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3492_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3492_ == 0)
{
v___x_3483_ = v___x_3480_;
v_isShared_3484_ = v_isSharedCheck_3492_;
goto v_resetjp_3482_;
}
else
{
lean_inc(v_a_3481_);
lean_dec(v___x_3480_);
v___x_3483_ = lean_box(0);
v_isShared_3484_ = v_isSharedCheck_3492_;
goto v_resetjp_3482_;
}
v_resetjp_3482_:
{
if (lean_obj_tag(v_a_3481_) == 0)
{
lean_object* v___x_3486_; 
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 0, v_mvarId_3473_);
v___x_3486_ = v___x_3483_;
goto v_reusejp_3485_;
}
else
{
lean_object* v_reuseFailAlloc_3487_; 
v_reuseFailAlloc_3487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3487_, 0, v_mvarId_3473_);
v___x_3486_ = v_reuseFailAlloc_3487_;
goto v_reusejp_3485_;
}
v_reusejp_3485_:
{
return v___x_3486_;
}
}
else
{
lean_object* v_val_3488_; lean_object* v___x_3490_; 
lean_dec(v_mvarId_3473_);
v_val_3488_ = lean_ctor_get(v_a_3481_, 0);
lean_inc(v_val_3488_);
lean_dec_ref_known(v_a_3481_, 1);
if (v_isShared_3484_ == 0)
{
lean_ctor_set(v___x_3483_, 0, v_val_3488_);
v___x_3490_ = v___x_3483_;
goto v_reusejp_3489_;
}
else
{
lean_object* v_reuseFailAlloc_3491_; 
v_reuseFailAlloc_3491_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3491_, 0, v_val_3488_);
v___x_3490_ = v_reuseFailAlloc_3491_;
goto v_reusejp_3489_;
}
v_reusejp_3489_:
{
return v___x_3490_;
}
}
}
}
else
{
lean_object* v_a_3493_; lean_object* v___x_3495_; uint8_t v_isShared_3496_; uint8_t v_isSharedCheck_3500_; 
lean_dec(v_mvarId_3473_);
v_a_3493_ = lean_ctor_get(v___x_3480_, 0);
v_isSharedCheck_3500_ = !lean_is_exclusive(v___x_3480_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3495_ = v___x_3480_;
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
else
{
lean_inc(v_a_3493_);
lean_dec(v___x_3480_);
v___x_3495_ = lean_box(0);
v_isShared_3496_ = v_isSharedCheck_3500_;
goto v_resetjp_3494_;
}
v_resetjp_3494_:
{
lean_object* v___x_3498_; 
if (v_isShared_3496_ == 0)
{
v___x_3498_ = v___x_3495_;
goto v_reusejp_3497_;
}
else
{
lean_object* v_reuseFailAlloc_3499_; 
v_reuseFailAlloc_3499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3499_, 0, v_a_3493_);
v___x_3498_ = v_reuseFailAlloc_3499_;
goto v_reusejp_3497_;
}
v_reusejp_3497_:
{
return v___x_3498_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubstVar___boxed(lean_object* v_mvarId_3501_, lean_object* v_hFVarId_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_, lean_object* v_a_3507_){
_start:
{
lean_object* v_res_3508_; 
v_res_3508_ = l_Lean_Meta_trySubstVar(v_mvarId_3501_, v_hFVarId_3502_, v_a_3503_, v_a_3504_, v_a_3505_, v_a_3506_);
lean_dec(v_a_3506_);
lean_dec_ref(v_a_3505_);
lean_dec(v_a_3504_);
lean_dec_ref(v_a_3503_);
return v_res_3508_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst(lean_object* v_mvarId_3509_, lean_object* v_hFVarId_3510_, lean_object* v_a_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_){
_start:
{
lean_object* v___x_3516_; 
lean_inc(v_mvarId_3509_);
v___x_3516_ = l_Lean_Meta_subst_x3f(v_mvarId_3509_, v_hFVarId_3510_, v_a_3511_, v_a_3512_, v_a_3513_, v_a_3514_);
if (lean_obj_tag(v___x_3516_) == 0)
{
lean_object* v_a_3517_; lean_object* v___x_3519_; uint8_t v_isShared_3520_; uint8_t v_isSharedCheck_3528_; 
v_a_3517_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3528_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3528_ == 0)
{
v___x_3519_ = v___x_3516_;
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
else
{
lean_inc(v_a_3517_);
lean_dec(v___x_3516_);
v___x_3519_ = lean_box(0);
v_isShared_3520_ = v_isSharedCheck_3528_;
goto v_resetjp_3518_;
}
v_resetjp_3518_:
{
if (lean_obj_tag(v_a_3517_) == 0)
{
lean_object* v___x_3522_; 
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 0, v_mvarId_3509_);
v___x_3522_ = v___x_3519_;
goto v_reusejp_3521_;
}
else
{
lean_object* v_reuseFailAlloc_3523_; 
v_reuseFailAlloc_3523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3523_, 0, v_mvarId_3509_);
v___x_3522_ = v_reuseFailAlloc_3523_;
goto v_reusejp_3521_;
}
v_reusejp_3521_:
{
return v___x_3522_;
}
}
else
{
lean_object* v_val_3524_; lean_object* v___x_3526_; 
lean_dec(v_mvarId_3509_);
v_val_3524_ = lean_ctor_get(v_a_3517_, 0);
lean_inc(v_val_3524_);
lean_dec_ref_known(v_a_3517_, 1);
if (v_isShared_3520_ == 0)
{
lean_ctor_set(v___x_3519_, 0, v_val_3524_);
v___x_3526_ = v___x_3519_;
goto v_reusejp_3525_;
}
else
{
lean_object* v_reuseFailAlloc_3527_; 
v_reuseFailAlloc_3527_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3527_, 0, v_val_3524_);
v___x_3526_ = v_reuseFailAlloc_3527_;
goto v_reusejp_3525_;
}
v_reusejp_3525_:
{
return v___x_3526_;
}
}
}
}
else
{
lean_object* v_a_3529_; lean_object* v___x_3531_; uint8_t v_isShared_3532_; uint8_t v_isSharedCheck_3536_; 
lean_dec(v_mvarId_3509_);
v_a_3529_ = lean_ctor_get(v___x_3516_, 0);
v_isSharedCheck_3536_ = !lean_is_exclusive(v___x_3516_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3531_ = v___x_3516_;
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
else
{
lean_inc(v_a_3529_);
lean_dec(v___x_3516_);
v___x_3531_ = lean_box(0);
v_isShared_3532_ = v_isSharedCheck_3536_;
goto v_resetjp_3530_;
}
v_resetjp_3530_:
{
lean_object* v___x_3534_; 
if (v_isShared_3532_ == 0)
{
v___x_3534_ = v___x_3531_;
goto v_reusejp_3533_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v_a_3529_);
v___x_3534_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3533_;
}
v_reusejp_3533_:
{
return v___x_3534_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_trySubst___boxed(lean_object* v_mvarId_3537_, lean_object* v_hFVarId_3538_, lean_object* v_a_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_, lean_object* v_a_3542_, lean_object* v_a_3543_){
_start:
{
lean_object* v_res_3544_; 
v_res_3544_ = l_Lean_Meta_trySubst(v_mvarId_3537_, v_hFVarId_3538_, v_a_3539_, v_a_3540_, v_a_3541_, v_a_3542_);
lean_dec(v_a_3542_);
lean_dec_ref(v_a_3541_);
lean_dec(v_a_3540_);
lean_dec_ref(v_a_3539_);
return v_res_3544_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(lean_object* v_mvarId_3548_, lean_object* v_as_3549_, size_t v_sz_3550_, size_t v_i_3551_, lean_object* v_b_3552_, lean_object* v___y_3553_, lean_object* v___y_3554_, lean_object* v___y_3555_, lean_object* v___y_3556_){
_start:
{
uint8_t v___x_3558_; 
v___x_3558_ = lean_usize_dec_lt(v_i_3551_, v_sz_3550_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; 
lean_dec(v_mvarId_3548_);
v___x_3559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3559_, 0, v_b_3552_);
return v___x_3559_;
}
else
{
lean_object* v_snd_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3613_; 
v_snd_3560_ = lean_ctor_get(v_b_3552_, 1);
v_isSharedCheck_3613_ = !lean_is_exclusive(v_b_3552_);
if (v_isSharedCheck_3613_ == 0)
{
lean_object* v_unused_3614_; 
v_unused_3614_ = lean_ctor_get(v_b_3552_, 0);
lean_dec(v_unused_3614_);
v___x_3562_ = v_b_3552_;
v_isShared_3563_ = v_isSharedCheck_3613_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_snd_3560_);
lean_dec(v_b_3552_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3613_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3564_; lean_object* v_a_3566_; lean_object* v_a_3573_; 
v___x_3564_ = lean_box(0);
v_a_3573_ = lean_array_uget(v_as_3549_, v_i_3551_);
if (lean_obj_tag(v_a_3573_) == 0)
{
v_a_3566_ = v_snd_3560_;
goto v___jp_3565_;
}
else
{
lean_object* v_val_3574_; lean_object* v___x_3576_; uint8_t v_isShared_3577_; uint8_t v_isSharedCheck_3612_; 
v_val_3574_ = lean_ctor_get(v_a_3573_, 0);
v_isSharedCheck_3612_ = !lean_is_exclusive(v_a_3573_);
if (v_isSharedCheck_3612_ == 0)
{
v___x_3576_ = v_a_3573_;
v_isShared_3577_ = v_isSharedCheck_3612_;
goto v_resetjp_3575_;
}
else
{
lean_inc(v_val_3574_);
lean_dec(v_a_3573_);
v___x_3576_ = lean_box(0);
v_isShared_3577_ = v_isSharedCheck_3612_;
goto v_resetjp_3575_;
}
v_resetjp_3575_:
{
lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v___x_3578_ = lean_box(0);
v___x_3579_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3580_ = l_Lean_LocalDecl_fvarId(v_val_3574_);
lean_dec(v_val_3574_);
lean_inc(v_mvarId_3548_);
v___x_3581_ = l_Lean_Meta_subst_x3f(v_mvarId_3548_, v___x_3580_, v___y_3553_, v___y_3554_, v___y_3555_, v___y_3556_);
if (lean_obj_tag(v___x_3581_) == 0)
{
lean_object* v_a_3582_; lean_object* v___x_3584_; uint8_t v_isShared_3585_; uint8_t v_isSharedCheck_3603_; 
v_a_3582_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3603_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3603_ == 0)
{
v___x_3584_ = v___x_3581_;
v_isShared_3585_ = v_isSharedCheck_3603_;
goto v_resetjp_3583_;
}
else
{
lean_inc(v_a_3582_);
lean_dec(v___x_3581_);
v___x_3584_ = lean_box(0);
v_isShared_3585_ = v_isSharedCheck_3603_;
goto v_resetjp_3583_;
}
v_resetjp_3583_:
{
if (lean_obj_tag(v_a_3582_) == 1)
{
lean_object* v___x_3587_; 
lean_del_object(v___x_3562_);
lean_dec(v_mvarId_3548_);
lean_inc_ref(v_a_3582_);
if (v_isShared_3577_ == 0)
{
lean_ctor_set(v___x_3576_, 0, v_a_3582_);
v___x_3587_ = v___x_3576_;
goto v_reusejp_3586_;
}
else
{
lean_object* v_reuseFailAlloc_3602_; 
v_reuseFailAlloc_3602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3602_, 0, v_a_3582_);
v___x_3587_ = v_reuseFailAlloc_3602_;
goto v_reusejp_3586_;
}
v_reusejp_3586_:
{
lean_object* v___x_3589_; uint8_t v_isShared_3590_; uint8_t v_isSharedCheck_3600_; 
v_isSharedCheck_3600_ = !lean_is_exclusive(v_a_3582_);
if (v_isSharedCheck_3600_ == 0)
{
lean_object* v_unused_3601_; 
v_unused_3601_ = lean_ctor_get(v_a_3582_, 0);
lean_dec(v_unused_3601_);
v___x_3589_ = v_a_3582_;
v_isShared_3590_ = v_isSharedCheck_3600_;
goto v_resetjp_3588_;
}
else
{
lean_dec(v_a_3582_);
v___x_3589_ = lean_box(0);
v_isShared_3590_ = v_isSharedCheck_3600_;
goto v_resetjp_3588_;
}
v_resetjp_3588_:
{
lean_object* v___x_3591_; lean_object* v___x_3593_; 
v___x_3591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3591_, 0, v___x_3587_);
lean_ctor_set(v___x_3591_, 1, v___x_3578_);
if (v_isShared_3590_ == 0)
{
lean_ctor_set_tag(v___x_3589_, 0);
lean_ctor_set(v___x_3589_, 0, v___x_3591_);
v___x_3593_ = v___x_3589_;
goto v_reusejp_3592_;
}
else
{
lean_object* v_reuseFailAlloc_3599_; 
v_reuseFailAlloc_3599_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3599_, 0, v___x_3591_);
v___x_3593_ = v_reuseFailAlloc_3599_;
goto v_reusejp_3592_;
}
v_reusejp_3592_:
{
lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3597_; 
v___x_3594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3594_, 0, v___x_3593_);
v___x_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3594_);
lean_ctor_set(v___x_3595_, 1, v_snd_3560_);
if (v_isShared_3585_ == 0)
{
lean_ctor_set(v___x_3584_, 0, v___x_3595_);
v___x_3597_ = v___x_3584_;
goto v_reusejp_3596_;
}
else
{
lean_object* v_reuseFailAlloc_3598_; 
v_reuseFailAlloc_3598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3598_, 0, v___x_3595_);
v___x_3597_ = v_reuseFailAlloc_3598_;
goto v_reusejp_3596_;
}
v_reusejp_3596_:
{
return v___x_3597_;
}
}
}
}
}
else
{
lean_del_object(v___x_3584_);
lean_dec(v_a_3582_);
lean_del_object(v___x_3576_);
lean_dec(v_snd_3560_);
v_a_3566_ = v___x_3579_;
goto v___jp_3565_;
}
}
}
else
{
lean_object* v_a_3604_; lean_object* v___x_3606_; uint8_t v_isShared_3607_; uint8_t v_isSharedCheck_3611_; 
lean_del_object(v___x_3576_);
lean_del_object(v___x_3562_);
lean_dec(v_snd_3560_);
lean_dec(v_mvarId_3548_);
v_a_3604_ = lean_ctor_get(v___x_3581_, 0);
v_isSharedCheck_3611_ = !lean_is_exclusive(v___x_3581_);
if (v_isSharedCheck_3611_ == 0)
{
v___x_3606_ = v___x_3581_;
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
else
{
lean_inc(v_a_3604_);
lean_dec(v___x_3581_);
v___x_3606_ = lean_box(0);
v_isShared_3607_ = v_isSharedCheck_3611_;
goto v_resetjp_3605_;
}
v_resetjp_3605_:
{
lean_object* v___x_3609_; 
if (v_isShared_3607_ == 0)
{
v___x_3609_ = v___x_3606_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v_a_3604_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
}
}
}
v___jp_3565_:
{
lean_object* v___x_3568_; 
if (v_isShared_3563_ == 0)
{
lean_ctor_set(v___x_3562_, 1, v_a_3566_);
lean_ctor_set(v___x_3562_, 0, v___x_3564_);
v___x_3568_ = v___x_3562_;
goto v_reusejp_3567_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v___x_3564_);
lean_ctor_set(v_reuseFailAlloc_3572_, 1, v_a_3566_);
v___x_3568_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3567_;
}
v_reusejp_3567_:
{
size_t v___x_3569_; size_t v___x_3570_; 
v___x_3569_ = ((size_t)1ULL);
v___x_3570_ = lean_usize_add(v_i_3551_, v___x_3569_);
v_i_3551_ = v___x_3570_;
v_b_3552_ = v___x_3568_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___boxed(lean_object* v_mvarId_3615_, lean_object* v_as_3616_, lean_object* v_sz_3617_, lean_object* v_i_3618_, lean_object* v_b_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_, lean_object* v___y_3622_, lean_object* v___y_3623_, lean_object* v___y_3624_){
_start:
{
size_t v_sz_boxed_3625_; size_t v_i_boxed_3626_; lean_object* v_res_3627_; 
v_sz_boxed_3625_ = lean_unbox_usize(v_sz_3617_);
lean_dec(v_sz_3617_);
v_i_boxed_3626_ = lean_unbox_usize(v_i_3618_);
lean_dec(v_i_3618_);
v_res_3627_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3615_, v_as_3616_, v_sz_boxed_3625_, v_i_boxed_3626_, v_b_3619_, v___y_3620_, v___y_3621_, v___y_3622_, v___y_3623_);
lean_dec(v___y_3623_);
lean_dec_ref(v___y_3622_);
lean_dec(v___y_3621_);
lean_dec_ref(v___y_3620_);
lean_dec_ref(v_as_3616_);
return v_res_3627_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(lean_object* v_mvarId_3628_, lean_object* v_as_3629_, size_t v_sz_3630_, size_t v_i_3631_, lean_object* v_b_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_){
_start:
{
uint8_t v___x_3638_; 
v___x_3638_ = lean_usize_dec_lt(v_i_3631_, v_sz_3630_);
if (v___x_3638_ == 0)
{
lean_object* v___x_3639_; 
lean_dec(v_mvarId_3628_);
v___x_3639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3639_, 0, v_b_3632_);
return v___x_3639_;
}
else
{
lean_object* v_snd_3640_; lean_object* v___x_3642_; uint8_t v_isShared_3643_; uint8_t v_isSharedCheck_3693_; 
v_snd_3640_ = lean_ctor_get(v_b_3632_, 1);
v_isSharedCheck_3693_ = !lean_is_exclusive(v_b_3632_);
if (v_isSharedCheck_3693_ == 0)
{
lean_object* v_unused_3694_; 
v_unused_3694_ = lean_ctor_get(v_b_3632_, 0);
lean_dec(v_unused_3694_);
v___x_3642_ = v_b_3632_;
v_isShared_3643_ = v_isSharedCheck_3693_;
goto v_resetjp_3641_;
}
else
{
lean_inc(v_snd_3640_);
lean_dec(v_b_3632_);
v___x_3642_ = lean_box(0);
v_isShared_3643_ = v_isSharedCheck_3693_;
goto v_resetjp_3641_;
}
v_resetjp_3641_:
{
lean_object* v___x_3644_; lean_object* v_a_3646_; lean_object* v_a_3653_; 
v___x_3644_ = lean_box(0);
v_a_3653_ = lean_array_uget(v_as_3629_, v_i_3631_);
if (lean_obj_tag(v_a_3653_) == 0)
{
v_a_3646_ = v_snd_3640_;
goto v___jp_3645_;
}
else
{
lean_object* v_val_3654_; lean_object* v___x_3656_; uint8_t v_isShared_3657_; uint8_t v_isSharedCheck_3692_; 
v_val_3654_ = lean_ctor_get(v_a_3653_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v_a_3653_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3656_ = v_a_3653_;
v_isShared_3657_ = v_isSharedCheck_3692_;
goto v_resetjp_3655_;
}
else
{
lean_inc(v_val_3654_);
lean_dec(v_a_3653_);
v___x_3656_ = lean_box(0);
v_isShared_3657_ = v_isSharedCheck_3692_;
goto v_resetjp_3655_;
}
v_resetjp_3655_:
{
lean_object* v___x_3658_; lean_object* v___x_3659_; lean_object* v___x_3660_; lean_object* v___x_3661_; 
v___x_3658_ = lean_box(0);
v___x_3659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3___closed__0));
v___x_3660_ = l_Lean_LocalDecl_fvarId(v_val_3654_);
lean_dec(v_val_3654_);
lean_inc(v_mvarId_3628_);
v___x_3661_ = l_Lean_Meta_subst_x3f(v_mvarId_3628_, v___x_3660_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
if (lean_obj_tag(v___x_3661_) == 0)
{
lean_object* v_a_3662_; lean_object* v___x_3664_; uint8_t v_isShared_3665_; uint8_t v_isSharedCheck_3683_; 
v_a_3662_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3683_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3683_ == 0)
{
v___x_3664_ = v___x_3661_;
v_isShared_3665_ = v_isSharedCheck_3683_;
goto v_resetjp_3663_;
}
else
{
lean_inc(v_a_3662_);
lean_dec(v___x_3661_);
v___x_3664_ = lean_box(0);
v_isShared_3665_ = v_isSharedCheck_3683_;
goto v_resetjp_3663_;
}
v_resetjp_3663_:
{
if (lean_obj_tag(v_a_3662_) == 1)
{
lean_object* v___x_3667_; 
lean_del_object(v___x_3642_);
lean_dec(v_mvarId_3628_);
lean_inc_ref(v_a_3662_);
if (v_isShared_3657_ == 0)
{
lean_ctor_set(v___x_3656_, 0, v_a_3662_);
v___x_3667_ = v___x_3656_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3682_; 
v_reuseFailAlloc_3682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3682_, 0, v_a_3662_);
v___x_3667_ = v_reuseFailAlloc_3682_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3680_; 
v_isSharedCheck_3680_ = !lean_is_exclusive(v_a_3662_);
if (v_isSharedCheck_3680_ == 0)
{
lean_object* v_unused_3681_; 
v_unused_3681_ = lean_ctor_get(v_a_3662_, 0);
lean_dec(v_unused_3681_);
v___x_3669_ = v_a_3662_;
v_isShared_3670_ = v_isSharedCheck_3680_;
goto v_resetjp_3668_;
}
else
{
lean_dec(v_a_3662_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3680_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3671_; lean_object* v___x_3673_; 
v___x_3671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3667_);
lean_ctor_set(v___x_3671_, 1, v___x_3658_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set_tag(v___x_3669_, 0);
lean_ctor_set(v___x_3669_, 0, v___x_3671_);
v___x_3673_ = v___x_3669_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3671_);
v___x_3673_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3677_; 
v___x_3674_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3673_);
v___x_3675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3675_, 0, v___x_3674_);
lean_ctor_set(v___x_3675_, 1, v_snd_3640_);
if (v_isShared_3665_ == 0)
{
lean_ctor_set(v___x_3664_, 0, v___x_3675_);
v___x_3677_ = v___x_3664_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
}
}
else
{
lean_del_object(v___x_3664_);
lean_dec(v_a_3662_);
lean_del_object(v___x_3656_);
lean_dec(v_snd_3640_);
v_a_3646_ = v___x_3659_;
goto v___jp_3645_;
}
}
}
else
{
lean_object* v_a_3684_; lean_object* v___x_3686_; uint8_t v_isShared_3687_; uint8_t v_isSharedCheck_3691_; 
lean_del_object(v___x_3656_);
lean_del_object(v___x_3642_);
lean_dec(v_snd_3640_);
lean_dec(v_mvarId_3628_);
v_a_3684_ = lean_ctor_get(v___x_3661_, 0);
v_isSharedCheck_3691_ = !lean_is_exclusive(v___x_3661_);
if (v_isSharedCheck_3691_ == 0)
{
v___x_3686_ = v___x_3661_;
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
else
{
lean_inc(v_a_3684_);
lean_dec(v___x_3661_);
v___x_3686_ = lean_box(0);
v_isShared_3687_ = v_isSharedCheck_3691_;
goto v_resetjp_3685_;
}
v_resetjp_3685_:
{
lean_object* v___x_3689_; 
if (v_isShared_3687_ == 0)
{
v___x_3689_ = v___x_3686_;
goto v_reusejp_3688_;
}
else
{
lean_object* v_reuseFailAlloc_3690_; 
v_reuseFailAlloc_3690_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3690_, 0, v_a_3684_);
v___x_3689_ = v_reuseFailAlloc_3690_;
goto v_reusejp_3688_;
}
v_reusejp_3688_:
{
return v___x_3689_;
}
}
}
}
}
v___jp_3645_:
{
lean_object* v___x_3648_; 
if (v_isShared_3643_ == 0)
{
lean_ctor_set(v___x_3642_, 1, v_a_3646_);
lean_ctor_set(v___x_3642_, 0, v___x_3644_);
v___x_3648_ = v___x_3642_;
goto v_reusejp_3647_;
}
else
{
lean_object* v_reuseFailAlloc_3652_; 
v_reuseFailAlloc_3652_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3652_, 0, v___x_3644_);
lean_ctor_set(v_reuseFailAlloc_3652_, 1, v_a_3646_);
v___x_3648_ = v_reuseFailAlloc_3652_;
goto v_reusejp_3647_;
}
v_reusejp_3647_:
{
size_t v___x_3649_; size_t v___x_3650_; lean_object* v___x_3651_; 
v___x_3649_ = ((size_t)1ULL);
v___x_3650_ = lean_usize_add(v_i_3631_, v___x_3649_);
v___x_3651_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2_spec__3(v_mvarId_3628_, v_as_3629_, v_sz_3630_, v___x_3650_, v___x_3648_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_);
return v___x_3651_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2___boxed(lean_object* v_mvarId_3695_, lean_object* v_as_3696_, lean_object* v_sz_3697_, lean_object* v_i_3698_, lean_object* v_b_3699_, lean_object* v___y_3700_, lean_object* v___y_3701_, lean_object* v___y_3702_, lean_object* v___y_3703_, lean_object* v___y_3704_){
_start:
{
size_t v_sz_boxed_3705_; size_t v_i_boxed_3706_; lean_object* v_res_3707_; 
v_sz_boxed_3705_ = lean_unbox_usize(v_sz_3697_);
lean_dec(v_sz_3697_);
v_i_boxed_3706_ = lean_unbox_usize(v_i_3698_);
lean_dec(v_i_3698_);
v_res_3707_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3695_, v_as_3696_, v_sz_boxed_3705_, v_i_boxed_3706_, v_b_3699_, v___y_3700_, v___y_3701_, v___y_3702_, v___y_3703_);
lean_dec(v___y_3703_);
lean_dec_ref(v___y_3702_);
lean_dec(v___y_3701_);
lean_dec_ref(v___y_3700_);
lean_dec_ref(v_as_3696_);
return v_res_3707_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(lean_object* v_init_3708_, lean_object* v_mvarId_3709_, lean_object* v_n_3710_, lean_object* v_b_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_, lean_object* v___y_3715_){
_start:
{
if (lean_obj_tag(v_n_3710_) == 0)
{
lean_object* v_cs_3717_; lean_object* v___x_3718_; lean_object* v___x_3719_; size_t v_sz_3720_; size_t v___x_3721_; lean_object* v___x_3722_; 
v_cs_3717_ = lean_ctor_get(v_n_3710_, 0);
v___x_3718_ = lean_box(0);
v___x_3719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3719_, 0, v___x_3718_);
lean_ctor_set(v___x_3719_, 1, v_b_3711_);
v_sz_3720_ = lean_array_size(v_cs_3717_);
v___x_3721_ = ((size_t)0ULL);
v___x_3722_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3708_, v_mvarId_3709_, v_cs_3717_, v_sz_3720_, v___x_3721_, v___x_3719_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
if (lean_obj_tag(v___x_3722_) == 0)
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3737_; 
v_a_3723_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3737_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3737_ == 0)
{
v___x_3725_ = v___x_3722_;
v_isShared_3726_ = v_isSharedCheck_3737_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3722_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3737_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v_fst_3727_; 
v_fst_3727_ = lean_ctor_get(v_a_3723_, 0);
if (lean_obj_tag(v_fst_3727_) == 0)
{
lean_object* v_snd_3728_; lean_object* v___x_3729_; lean_object* v___x_3731_; 
v_snd_3728_ = lean_ctor_get(v_a_3723_, 1);
lean_inc(v_snd_3728_);
lean_dec(v_a_3723_);
v___x_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3729_, 0, v_snd_3728_);
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 0, v___x_3729_);
v___x_3731_ = v___x_3725_;
goto v_reusejp_3730_;
}
else
{
lean_object* v_reuseFailAlloc_3732_; 
v_reuseFailAlloc_3732_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3732_, 0, v___x_3729_);
v___x_3731_ = v_reuseFailAlloc_3732_;
goto v_reusejp_3730_;
}
v_reusejp_3730_:
{
return v___x_3731_;
}
}
else
{
lean_object* v_val_3733_; lean_object* v___x_3735_; 
lean_inc_ref(v_fst_3727_);
lean_dec(v_a_3723_);
v_val_3733_ = lean_ctor_get(v_fst_3727_, 0);
lean_inc(v_val_3733_);
lean_dec_ref_known(v_fst_3727_, 1);
if (v_isShared_3726_ == 0)
{
lean_ctor_set(v___x_3725_, 0, v_val_3733_);
v___x_3735_ = v___x_3725_;
goto v_reusejp_3734_;
}
else
{
lean_object* v_reuseFailAlloc_3736_; 
v_reuseFailAlloc_3736_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3736_, 0, v_val_3733_);
v___x_3735_ = v_reuseFailAlloc_3736_;
goto v_reusejp_3734_;
}
v_reusejp_3734_:
{
return v___x_3735_;
}
}
}
}
else
{
lean_object* v_a_3738_; lean_object* v___x_3740_; uint8_t v_isShared_3741_; uint8_t v_isSharedCheck_3745_; 
v_a_3738_ = lean_ctor_get(v___x_3722_, 0);
v_isSharedCheck_3745_ = !lean_is_exclusive(v___x_3722_);
if (v_isSharedCheck_3745_ == 0)
{
v___x_3740_ = v___x_3722_;
v_isShared_3741_ = v_isSharedCheck_3745_;
goto v_resetjp_3739_;
}
else
{
lean_inc(v_a_3738_);
lean_dec(v___x_3722_);
v___x_3740_ = lean_box(0);
v_isShared_3741_ = v_isSharedCheck_3745_;
goto v_resetjp_3739_;
}
v_resetjp_3739_:
{
lean_object* v___x_3743_; 
if (v_isShared_3741_ == 0)
{
v___x_3743_ = v___x_3740_;
goto v_reusejp_3742_;
}
else
{
lean_object* v_reuseFailAlloc_3744_; 
v_reuseFailAlloc_3744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3744_, 0, v_a_3738_);
v___x_3743_ = v_reuseFailAlloc_3744_;
goto v_reusejp_3742_;
}
v_reusejp_3742_:
{
return v___x_3743_;
}
}
}
}
else
{
lean_object* v_vs_3746_; lean_object* v___x_3747_; lean_object* v___x_3748_; size_t v_sz_3749_; size_t v___x_3750_; lean_object* v___x_3751_; 
v_vs_3746_ = lean_ctor_get(v_n_3710_, 0);
v___x_3747_ = lean_box(0);
v___x_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3747_);
lean_ctor_set(v___x_3748_, 1, v_b_3711_);
v_sz_3749_ = lean_array_size(v_vs_3746_);
v___x_3750_ = ((size_t)0ULL);
v___x_3751_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__2(v_mvarId_3709_, v_vs_3746_, v_sz_3749_, v___x_3750_, v___x_3748_, v___y_3712_, v___y_3713_, v___y_3714_, v___y_3715_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3754_; uint8_t v_isShared_3755_; uint8_t v_isSharedCheck_3766_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3766_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3766_ == 0)
{
v___x_3754_ = v___x_3751_;
v_isShared_3755_ = v_isSharedCheck_3766_;
goto v_resetjp_3753_;
}
else
{
lean_inc(v_a_3752_);
lean_dec(v___x_3751_);
v___x_3754_ = lean_box(0);
v_isShared_3755_ = v_isSharedCheck_3766_;
goto v_resetjp_3753_;
}
v_resetjp_3753_:
{
lean_object* v_fst_3756_; 
v_fst_3756_ = lean_ctor_get(v_a_3752_, 0);
if (lean_obj_tag(v_fst_3756_) == 0)
{
lean_object* v_snd_3757_; lean_object* v___x_3758_; lean_object* v___x_3760_; 
v_snd_3757_ = lean_ctor_get(v_a_3752_, 1);
lean_inc(v_snd_3757_);
lean_dec(v_a_3752_);
v___x_3758_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3758_, 0, v_snd_3757_);
if (v_isShared_3755_ == 0)
{
lean_ctor_set(v___x_3754_, 0, v___x_3758_);
v___x_3760_ = v___x_3754_;
goto v_reusejp_3759_;
}
else
{
lean_object* v_reuseFailAlloc_3761_; 
v_reuseFailAlloc_3761_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3761_, 0, v___x_3758_);
v___x_3760_ = v_reuseFailAlloc_3761_;
goto v_reusejp_3759_;
}
v_reusejp_3759_:
{
return v___x_3760_;
}
}
else
{
lean_object* v_val_3762_; lean_object* v___x_3764_; 
lean_inc_ref(v_fst_3756_);
lean_dec(v_a_3752_);
v_val_3762_ = lean_ctor_get(v_fst_3756_, 0);
lean_inc(v_val_3762_);
lean_dec_ref_known(v_fst_3756_, 1);
if (v_isShared_3755_ == 0)
{
lean_ctor_set(v___x_3754_, 0, v_val_3762_);
v___x_3764_ = v___x_3754_;
goto v_reusejp_3763_;
}
else
{
lean_object* v_reuseFailAlloc_3765_; 
v_reuseFailAlloc_3765_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3765_, 0, v_val_3762_);
v___x_3764_ = v_reuseFailAlloc_3765_;
goto v_reusejp_3763_;
}
v_reusejp_3763_:
{
return v___x_3764_;
}
}
}
}
else
{
lean_object* v_a_3767_; lean_object* v___x_3769_; uint8_t v_isShared_3770_; uint8_t v_isSharedCheck_3774_; 
v_a_3767_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3774_ == 0)
{
v___x_3769_ = v___x_3751_;
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
else
{
lean_inc(v_a_3767_);
lean_dec(v___x_3751_);
v___x_3769_ = lean_box(0);
v_isShared_3770_ = v_isSharedCheck_3774_;
goto v_resetjp_3768_;
}
v_resetjp_3768_:
{
lean_object* v___x_3772_; 
if (v_isShared_3770_ == 0)
{
v___x_3772_ = v___x_3769_;
goto v_reusejp_3771_;
}
else
{
lean_object* v_reuseFailAlloc_3773_; 
v_reuseFailAlloc_3773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3773_, 0, v_a_3767_);
v___x_3772_ = v_reuseFailAlloc_3773_;
goto v_reusejp_3771_;
}
v_reusejp_3771_:
{
return v___x_3772_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(lean_object* v_init_3775_, lean_object* v_mvarId_3776_, lean_object* v_as_3777_, size_t v_sz_3778_, size_t v_i_3779_, lean_object* v_b_3780_, lean_object* v___y_3781_, lean_object* v___y_3782_, lean_object* v___y_3783_, lean_object* v___y_3784_){
_start:
{
uint8_t v___x_3786_; 
v___x_3786_ = lean_usize_dec_lt(v_i_3779_, v_sz_3778_);
if (v___x_3786_ == 0)
{
lean_object* v___x_3787_; 
lean_dec(v_mvarId_3776_);
v___x_3787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3787_, 0, v_b_3780_);
return v___x_3787_;
}
else
{
lean_object* v_snd_3788_; lean_object* v___x_3790_; uint8_t v_isShared_3791_; uint8_t v_isSharedCheck_3822_; 
v_snd_3788_ = lean_ctor_get(v_b_3780_, 1);
v_isSharedCheck_3822_ = !lean_is_exclusive(v_b_3780_);
if (v_isSharedCheck_3822_ == 0)
{
lean_object* v_unused_3823_; 
v_unused_3823_ = lean_ctor_get(v_b_3780_, 0);
lean_dec(v_unused_3823_);
v___x_3790_ = v_b_3780_;
v_isShared_3791_ = v_isSharedCheck_3822_;
goto v_resetjp_3789_;
}
else
{
lean_inc(v_snd_3788_);
lean_dec(v_b_3780_);
v___x_3790_ = lean_box(0);
v_isShared_3791_ = v_isSharedCheck_3822_;
goto v_resetjp_3789_;
}
v_resetjp_3789_:
{
lean_object* v___x_3792_; lean_object* v_a_3793_; lean_object* v___x_3794_; 
v___x_3792_ = lean_box(0);
v_a_3793_ = lean_array_uget_borrowed(v_as_3777_, v_i_3779_);
lean_inc(v_snd_3788_);
lean_inc(v_mvarId_3776_);
v___x_3794_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3775_, v_mvarId_3776_, v_a_3793_, v_snd_3788_, v___y_3781_, v___y_3782_, v___y_3783_, v___y_3784_);
if (lean_obj_tag(v___x_3794_) == 0)
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3813_; 
v_a_3795_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3813_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3813_ == 0)
{
v___x_3797_ = v___x_3794_;
v_isShared_3798_ = v_isSharedCheck_3813_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3794_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3813_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
if (lean_obj_tag(v_a_3795_) == 0)
{
lean_object* v___x_3799_; lean_object* v___x_3801_; 
lean_dec(v_mvarId_3776_);
v___x_3799_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3799_, 0, v_a_3795_);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 0, v___x_3799_);
v___x_3801_ = v___x_3790_;
goto v_reusejp_3800_;
}
else
{
lean_object* v_reuseFailAlloc_3805_; 
v_reuseFailAlloc_3805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3805_, 0, v___x_3799_);
lean_ctor_set(v_reuseFailAlloc_3805_, 1, v_snd_3788_);
v___x_3801_ = v_reuseFailAlloc_3805_;
goto v_reusejp_3800_;
}
v_reusejp_3800_:
{
lean_object* v___x_3803_; 
if (v_isShared_3798_ == 0)
{
lean_ctor_set(v___x_3797_, 0, v___x_3801_);
v___x_3803_ = v___x_3797_;
goto v_reusejp_3802_;
}
else
{
lean_object* v_reuseFailAlloc_3804_; 
v_reuseFailAlloc_3804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3804_, 0, v___x_3801_);
v___x_3803_ = v_reuseFailAlloc_3804_;
goto v_reusejp_3802_;
}
v_reusejp_3802_:
{
return v___x_3803_;
}
}
}
else
{
lean_object* v_a_3806_; lean_object* v___x_3808_; 
lean_del_object(v___x_3797_);
lean_dec(v_snd_3788_);
v_a_3806_ = lean_ctor_get(v_a_3795_, 0);
lean_inc(v_a_3806_);
lean_dec_ref_known(v_a_3795_, 1);
if (v_isShared_3791_ == 0)
{
lean_ctor_set(v___x_3790_, 1, v_a_3806_);
lean_ctor_set(v___x_3790_, 0, v___x_3792_);
v___x_3808_ = v___x_3790_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3812_; 
v_reuseFailAlloc_3812_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3812_, 0, v___x_3792_);
lean_ctor_set(v_reuseFailAlloc_3812_, 1, v_a_3806_);
v___x_3808_ = v_reuseFailAlloc_3812_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
size_t v___x_3809_; size_t v___x_3810_; 
v___x_3809_ = ((size_t)1ULL);
v___x_3810_ = lean_usize_add(v_i_3779_, v___x_3809_);
v_i_3779_ = v___x_3810_;
v_b_3780_ = v___x_3808_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3814_; lean_object* v___x_3816_; uint8_t v_isShared_3817_; uint8_t v_isSharedCheck_3821_; 
lean_del_object(v___x_3790_);
lean_dec(v_snd_3788_);
lean_dec(v_mvarId_3776_);
v_a_3814_ = lean_ctor_get(v___x_3794_, 0);
v_isSharedCheck_3821_ = !lean_is_exclusive(v___x_3794_);
if (v_isSharedCheck_3821_ == 0)
{
v___x_3816_ = v___x_3794_;
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
else
{
lean_inc(v_a_3814_);
lean_dec(v___x_3794_);
v___x_3816_ = lean_box(0);
v_isShared_3817_ = v_isSharedCheck_3821_;
goto v_resetjp_3815_;
}
v_resetjp_3815_:
{
lean_object* v___x_3819_; 
if (v_isShared_3817_ == 0)
{
v___x_3819_ = v___x_3816_;
goto v_reusejp_3818_;
}
else
{
lean_object* v_reuseFailAlloc_3820_; 
v_reuseFailAlloc_3820_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3820_, 0, v_a_3814_);
v___x_3819_ = v_reuseFailAlloc_3820_;
goto v_reusejp_3818_;
}
v_reusejp_3818_:
{
return v___x_3819_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_init_3824_, lean_object* v_mvarId_3825_, lean_object* v_as_3826_, lean_object* v_sz_3827_, lean_object* v_i_3828_, lean_object* v_b_3829_, lean_object* v___y_3830_, lean_object* v___y_3831_, lean_object* v___y_3832_, lean_object* v___y_3833_, lean_object* v___y_3834_){
_start:
{
size_t v_sz_boxed_3835_; size_t v_i_boxed_3836_; lean_object* v_res_3837_; 
v_sz_boxed_3835_ = lean_unbox_usize(v_sz_3827_);
lean_dec(v_sz_3827_);
v_i_boxed_3836_ = lean_unbox_usize(v_i_3828_);
lean_dec(v_i_3828_);
v_res_3837_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0_spec__1(v_init_3824_, v_mvarId_3825_, v_as_3826_, v_sz_boxed_3835_, v_i_boxed_3836_, v_b_3829_, v___y_3830_, v___y_3831_, v___y_3832_, v___y_3833_);
lean_dec(v___y_3833_);
lean_dec_ref(v___y_3832_);
lean_dec(v___y_3831_);
lean_dec_ref(v___y_3830_);
lean_dec_ref(v_as_3826_);
lean_dec_ref(v_init_3824_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0___boxed(lean_object* v_init_3838_, lean_object* v_mvarId_3839_, lean_object* v_n_3840_, lean_object* v_b_3841_, lean_object* v___y_3842_, lean_object* v___y_3843_, lean_object* v___y_3844_, lean_object* v___y_3845_, lean_object* v___y_3846_){
_start:
{
lean_object* v_res_3847_; 
v_res_3847_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_3838_, v_mvarId_3839_, v_n_3840_, v_b_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
lean_dec(v___y_3845_);
lean_dec_ref(v___y_3844_);
lean_dec(v___y_3843_);
lean_dec_ref(v___y_3842_);
lean_dec_ref(v_n_3840_);
lean_dec_ref(v_init_3838_);
return v_res_3847_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(lean_object* v_mvarId_3851_, lean_object* v_as_3852_, size_t v_sz_3853_, size_t v_i_3854_, lean_object* v_b_3855_, lean_object* v___y_3856_, lean_object* v___y_3857_, lean_object* v___y_3858_, lean_object* v___y_3859_){
_start:
{
uint8_t v___x_3861_; 
v___x_3861_ = lean_usize_dec_lt(v_i_3854_, v_sz_3853_);
if (v___x_3861_ == 0)
{
lean_object* v___x_3862_; 
lean_dec(v_mvarId_3851_);
v___x_3862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3862_, 0, v_b_3855_);
return v___x_3862_;
}
else
{
lean_object* v_snd_3863_; lean_object* v___x_3865_; uint8_t v_isShared_3866_; uint8_t v_isSharedCheck_3915_; 
v_snd_3863_ = lean_ctor_get(v_b_3855_, 1);
v_isSharedCheck_3915_ = !lean_is_exclusive(v_b_3855_);
if (v_isSharedCheck_3915_ == 0)
{
lean_object* v_unused_3916_; 
v_unused_3916_ = lean_ctor_get(v_b_3855_, 0);
lean_dec(v_unused_3916_);
v___x_3865_ = v_b_3855_;
v_isShared_3866_ = v_isSharedCheck_3915_;
goto v_resetjp_3864_;
}
else
{
lean_inc(v_snd_3863_);
lean_dec(v_b_3855_);
v___x_3865_ = lean_box(0);
v_isShared_3866_ = v_isSharedCheck_3915_;
goto v_resetjp_3864_;
}
v_resetjp_3864_:
{
lean_object* v___x_3867_; lean_object* v_a_3869_; lean_object* v_a_3876_; 
v___x_3867_ = lean_box(0);
v_a_3876_ = lean_array_uget(v_as_3852_, v_i_3854_);
if (lean_obj_tag(v_a_3876_) == 0)
{
v_a_3869_ = v_snd_3863_;
goto v___jp_3868_;
}
else
{
lean_object* v_val_3877_; lean_object* v___x_3879_; uint8_t v_isShared_3880_; uint8_t v_isSharedCheck_3914_; 
v_val_3877_ = lean_ctor_get(v_a_3876_, 0);
v_isSharedCheck_3914_ = !lean_is_exclusive(v_a_3876_);
if (v_isSharedCheck_3914_ == 0)
{
v___x_3879_ = v_a_3876_;
v_isShared_3880_ = v_isSharedCheck_3914_;
goto v_resetjp_3878_;
}
else
{
lean_inc(v_val_3877_);
lean_dec(v_a_3876_);
v___x_3879_ = lean_box(0);
v_isShared_3880_ = v_isSharedCheck_3914_;
goto v_resetjp_3878_;
}
v_resetjp_3878_:
{
lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; 
v___x_3881_ = lean_box(0);
v___x_3882_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v___x_3883_ = l_Lean_LocalDecl_fvarId(v_val_3877_);
lean_dec(v_val_3877_);
lean_inc(v_mvarId_3851_);
v___x_3884_ = l_Lean_Meta_subst_x3f(v_mvarId_3851_, v___x_3883_, v___y_3856_, v___y_3857_, v___y_3858_, v___y_3859_);
if (lean_obj_tag(v___x_3884_) == 0)
{
lean_object* v_a_3885_; lean_object* v___x_3887_; uint8_t v_isShared_3888_; uint8_t v_isSharedCheck_3905_; 
v_a_3885_ = lean_ctor_get(v___x_3884_, 0);
v_isSharedCheck_3905_ = !lean_is_exclusive(v___x_3884_);
if (v_isSharedCheck_3905_ == 0)
{
v___x_3887_ = v___x_3884_;
v_isShared_3888_ = v_isSharedCheck_3905_;
goto v_resetjp_3886_;
}
else
{
lean_inc(v_a_3885_);
lean_dec(v___x_3884_);
v___x_3887_ = lean_box(0);
v_isShared_3888_ = v_isSharedCheck_3905_;
goto v_resetjp_3886_;
}
v_resetjp_3886_:
{
if (lean_obj_tag(v_a_3885_) == 1)
{
lean_object* v___x_3890_; 
lean_del_object(v___x_3865_);
lean_dec(v_mvarId_3851_);
lean_inc_ref(v_a_3885_);
if (v_isShared_3880_ == 0)
{
lean_ctor_set(v___x_3879_, 0, v_a_3885_);
v___x_3890_ = v___x_3879_;
goto v_reusejp_3889_;
}
else
{
lean_object* v_reuseFailAlloc_3904_; 
v_reuseFailAlloc_3904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3904_, 0, v_a_3885_);
v___x_3890_ = v_reuseFailAlloc_3904_;
goto v_reusejp_3889_;
}
v_reusejp_3889_:
{
lean_object* v___x_3892_; uint8_t v_isShared_3893_; uint8_t v_isSharedCheck_3902_; 
v_isSharedCheck_3902_ = !lean_is_exclusive(v_a_3885_);
if (v_isSharedCheck_3902_ == 0)
{
lean_object* v_unused_3903_; 
v_unused_3903_ = lean_ctor_get(v_a_3885_, 0);
lean_dec(v_unused_3903_);
v___x_3892_ = v_a_3885_;
v_isShared_3893_ = v_isSharedCheck_3902_;
goto v_resetjp_3891_;
}
else
{
lean_dec(v_a_3885_);
v___x_3892_ = lean_box(0);
v_isShared_3893_ = v_isSharedCheck_3902_;
goto v_resetjp_3891_;
}
v_resetjp_3891_:
{
lean_object* v___x_3894_; lean_object* v___x_3896_; 
v___x_3894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3890_);
lean_ctor_set(v___x_3894_, 1, v___x_3881_);
if (v_isShared_3893_ == 0)
{
lean_ctor_set(v___x_3892_, 0, v___x_3894_);
v___x_3896_ = v___x_3892_;
goto v_reusejp_3895_;
}
else
{
lean_object* v_reuseFailAlloc_3901_; 
v_reuseFailAlloc_3901_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3901_, 0, v___x_3894_);
v___x_3896_ = v_reuseFailAlloc_3901_;
goto v_reusejp_3895_;
}
v_reusejp_3895_:
{
lean_object* v___x_3897_; lean_object* v___x_3899_; 
v___x_3897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3896_);
lean_ctor_set(v___x_3897_, 1, v_snd_3863_);
if (v_isShared_3888_ == 0)
{
lean_ctor_set(v___x_3887_, 0, v___x_3897_);
v___x_3899_ = v___x_3887_;
goto v_reusejp_3898_;
}
else
{
lean_object* v_reuseFailAlloc_3900_; 
v_reuseFailAlloc_3900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3900_, 0, v___x_3897_);
v___x_3899_ = v_reuseFailAlloc_3900_;
goto v_reusejp_3898_;
}
v_reusejp_3898_:
{
return v___x_3899_;
}
}
}
}
}
else
{
lean_del_object(v___x_3887_);
lean_dec(v_a_3885_);
lean_del_object(v___x_3879_);
lean_dec(v_snd_3863_);
v_a_3869_ = v___x_3882_;
goto v___jp_3868_;
}
}
}
else
{
lean_object* v_a_3906_; lean_object* v___x_3908_; uint8_t v_isShared_3909_; uint8_t v_isSharedCheck_3913_; 
lean_del_object(v___x_3879_);
lean_del_object(v___x_3865_);
lean_dec(v_snd_3863_);
lean_dec(v_mvarId_3851_);
v_a_3906_ = lean_ctor_get(v___x_3884_, 0);
v_isSharedCheck_3913_ = !lean_is_exclusive(v___x_3884_);
if (v_isSharedCheck_3913_ == 0)
{
v___x_3908_ = v___x_3884_;
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
else
{
lean_inc(v_a_3906_);
lean_dec(v___x_3884_);
v___x_3908_ = lean_box(0);
v_isShared_3909_ = v_isSharedCheck_3913_;
goto v_resetjp_3907_;
}
v_resetjp_3907_:
{
lean_object* v___x_3911_; 
if (v_isShared_3909_ == 0)
{
v___x_3911_ = v___x_3908_;
goto v_reusejp_3910_;
}
else
{
lean_object* v_reuseFailAlloc_3912_; 
v_reuseFailAlloc_3912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3912_, 0, v_a_3906_);
v___x_3911_ = v_reuseFailAlloc_3912_;
goto v_reusejp_3910_;
}
v_reusejp_3910_:
{
return v___x_3911_;
}
}
}
}
}
v___jp_3868_:
{
lean_object* v___x_3871_; 
if (v_isShared_3866_ == 0)
{
lean_ctor_set(v___x_3865_, 1, v_a_3869_);
lean_ctor_set(v___x_3865_, 0, v___x_3867_);
v___x_3871_ = v___x_3865_;
goto v_reusejp_3870_;
}
else
{
lean_object* v_reuseFailAlloc_3875_; 
v_reuseFailAlloc_3875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3875_, 0, v___x_3867_);
lean_ctor_set(v_reuseFailAlloc_3875_, 1, v_a_3869_);
v___x_3871_ = v_reuseFailAlloc_3875_;
goto v_reusejp_3870_;
}
v_reusejp_3870_:
{
size_t v___x_3872_; size_t v___x_3873_; 
v___x_3872_ = ((size_t)1ULL);
v___x_3873_ = lean_usize_add(v_i_3854_, v___x_3872_);
v_i_3854_ = v___x_3873_;
v_b_3855_ = v___x_3871_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___boxed(lean_object* v_mvarId_3917_, lean_object* v_as_3918_, lean_object* v_sz_3919_, lean_object* v_i_3920_, lean_object* v_b_3921_, lean_object* v___y_3922_, lean_object* v___y_3923_, lean_object* v___y_3924_, lean_object* v___y_3925_, lean_object* v___y_3926_){
_start:
{
size_t v_sz_boxed_3927_; size_t v_i_boxed_3928_; lean_object* v_res_3929_; 
v_sz_boxed_3927_ = lean_unbox_usize(v_sz_3919_);
lean_dec(v_sz_3919_);
v_i_boxed_3928_ = lean_unbox_usize(v_i_3920_);
lean_dec(v_i_3920_);
v_res_3929_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3917_, v_as_3918_, v_sz_boxed_3927_, v_i_boxed_3928_, v_b_3921_, v___y_3922_, v___y_3923_, v___y_3924_, v___y_3925_);
lean_dec(v___y_3925_);
lean_dec_ref(v___y_3924_);
lean_dec(v___y_3923_);
lean_dec_ref(v___y_3922_);
lean_dec_ref(v_as_3918_);
return v_res_3929_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(lean_object* v_mvarId_3930_, lean_object* v_as_3931_, size_t v_sz_3932_, size_t v_i_3933_, lean_object* v_b_3934_, lean_object* v___y_3935_, lean_object* v___y_3936_, lean_object* v___y_3937_, lean_object* v___y_3938_){
_start:
{
uint8_t v___x_3940_; 
v___x_3940_ = lean_usize_dec_lt(v_i_3933_, v_sz_3932_);
if (v___x_3940_ == 0)
{
lean_object* v___x_3941_; 
lean_dec(v_mvarId_3930_);
v___x_3941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3941_, 0, v_b_3934_);
return v___x_3941_;
}
else
{
lean_object* v_snd_3942_; lean_object* v___x_3944_; uint8_t v_isShared_3945_; uint8_t v_isSharedCheck_3994_; 
v_snd_3942_ = lean_ctor_get(v_b_3934_, 1);
v_isSharedCheck_3994_ = !lean_is_exclusive(v_b_3934_);
if (v_isSharedCheck_3994_ == 0)
{
lean_object* v_unused_3995_; 
v_unused_3995_ = lean_ctor_get(v_b_3934_, 0);
lean_dec(v_unused_3995_);
v___x_3944_ = v_b_3934_;
v_isShared_3945_ = v_isSharedCheck_3994_;
goto v_resetjp_3943_;
}
else
{
lean_inc(v_snd_3942_);
lean_dec(v_b_3934_);
v___x_3944_ = lean_box(0);
v_isShared_3945_ = v_isSharedCheck_3994_;
goto v_resetjp_3943_;
}
v_resetjp_3943_:
{
lean_object* v___x_3946_; lean_object* v_a_3948_; lean_object* v_a_3955_; 
v___x_3946_ = lean_box(0);
v_a_3955_ = lean_array_uget(v_as_3931_, v_i_3933_);
if (lean_obj_tag(v_a_3955_) == 0)
{
v_a_3948_ = v_snd_3942_;
goto v___jp_3947_;
}
else
{
lean_object* v_val_3956_; lean_object* v___x_3958_; uint8_t v_isShared_3959_; uint8_t v_isSharedCheck_3993_; 
v_val_3956_ = lean_ctor_get(v_a_3955_, 0);
v_isSharedCheck_3993_ = !lean_is_exclusive(v_a_3955_);
if (v_isSharedCheck_3993_ == 0)
{
v___x_3958_ = v_a_3955_;
v_isShared_3959_ = v_isSharedCheck_3993_;
goto v_resetjp_3957_;
}
else
{
lean_inc(v_val_3956_);
lean_dec(v_a_3955_);
v___x_3958_ = lean_box(0);
v_isShared_3959_ = v_isSharedCheck_3993_;
goto v_resetjp_3957_;
}
v_resetjp_3957_:
{
lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; 
v___x_3960_ = lean_box(0);
v___x_3961_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4___closed__0));
v___x_3962_ = l_Lean_LocalDecl_fvarId(v_val_3956_);
lean_dec(v_val_3956_);
lean_inc(v_mvarId_3930_);
v___x_3963_ = l_Lean_Meta_subst_x3f(v_mvarId_3930_, v___x_3962_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_);
if (lean_obj_tag(v___x_3963_) == 0)
{
lean_object* v_a_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3984_; 
v_a_3964_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_3984_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3984_ == 0)
{
v___x_3966_ = v___x_3963_;
v_isShared_3967_ = v_isSharedCheck_3984_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_a_3964_);
lean_dec(v___x_3963_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3984_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
if (lean_obj_tag(v_a_3964_) == 1)
{
lean_object* v___x_3969_; 
lean_del_object(v___x_3944_);
lean_dec(v_mvarId_3930_);
lean_inc_ref(v_a_3964_);
if (v_isShared_3959_ == 0)
{
lean_ctor_set(v___x_3958_, 0, v_a_3964_);
v___x_3969_ = v___x_3958_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3983_; 
v_reuseFailAlloc_3983_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3983_, 0, v_a_3964_);
v___x_3969_ = v_reuseFailAlloc_3983_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
lean_object* v___x_3971_; uint8_t v_isShared_3972_; uint8_t v_isSharedCheck_3981_; 
v_isSharedCheck_3981_ = !lean_is_exclusive(v_a_3964_);
if (v_isSharedCheck_3981_ == 0)
{
lean_object* v_unused_3982_; 
v_unused_3982_ = lean_ctor_get(v_a_3964_, 0);
lean_dec(v_unused_3982_);
v___x_3971_ = v_a_3964_;
v_isShared_3972_ = v_isSharedCheck_3981_;
goto v_resetjp_3970_;
}
else
{
lean_dec(v_a_3964_);
v___x_3971_ = lean_box(0);
v_isShared_3972_ = v_isSharedCheck_3981_;
goto v_resetjp_3970_;
}
v_resetjp_3970_:
{
lean_object* v___x_3973_; lean_object* v___x_3975_; 
v___x_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3973_, 0, v___x_3969_);
lean_ctor_set(v___x_3973_, 1, v___x_3960_);
if (v_isShared_3972_ == 0)
{
lean_ctor_set(v___x_3971_, 0, v___x_3973_);
v___x_3975_ = v___x_3971_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3980_; 
v_reuseFailAlloc_3980_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3980_, 0, v___x_3973_);
v___x_3975_ = v_reuseFailAlloc_3980_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
lean_object* v___x_3976_; lean_object* v___x_3978_; 
v___x_3976_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3976_, 0, v___x_3975_);
lean_ctor_set(v___x_3976_, 1, v_snd_3942_);
if (v_isShared_3967_ == 0)
{
lean_ctor_set(v___x_3966_, 0, v___x_3976_);
v___x_3978_ = v___x_3966_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v___x_3976_);
v___x_3978_ = v_reuseFailAlloc_3979_;
goto v_reusejp_3977_;
}
v_reusejp_3977_:
{
return v___x_3978_;
}
}
}
}
}
else
{
lean_del_object(v___x_3966_);
lean_dec(v_a_3964_);
lean_del_object(v___x_3958_);
lean_dec(v_snd_3942_);
v_a_3948_ = v___x_3961_;
goto v___jp_3947_;
}
}
}
else
{
lean_object* v_a_3985_; lean_object* v___x_3987_; uint8_t v_isShared_3988_; uint8_t v_isSharedCheck_3992_; 
lean_del_object(v___x_3958_);
lean_del_object(v___x_3944_);
lean_dec(v_snd_3942_);
lean_dec(v_mvarId_3930_);
v_a_3985_ = lean_ctor_get(v___x_3963_, 0);
v_isSharedCheck_3992_ = !lean_is_exclusive(v___x_3963_);
if (v_isSharedCheck_3992_ == 0)
{
v___x_3987_ = v___x_3963_;
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
else
{
lean_inc(v_a_3985_);
lean_dec(v___x_3963_);
v___x_3987_ = lean_box(0);
v_isShared_3988_ = v_isSharedCheck_3992_;
goto v_resetjp_3986_;
}
v_resetjp_3986_:
{
lean_object* v___x_3990_; 
if (v_isShared_3988_ == 0)
{
v___x_3990_ = v___x_3987_;
goto v_reusejp_3989_;
}
else
{
lean_object* v_reuseFailAlloc_3991_; 
v_reuseFailAlloc_3991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3991_, 0, v_a_3985_);
v___x_3990_ = v_reuseFailAlloc_3991_;
goto v_reusejp_3989_;
}
v_reusejp_3989_:
{
return v___x_3990_;
}
}
}
}
}
v___jp_3947_:
{
lean_object* v___x_3950_; 
if (v_isShared_3945_ == 0)
{
lean_ctor_set(v___x_3944_, 1, v_a_3948_);
lean_ctor_set(v___x_3944_, 0, v___x_3946_);
v___x_3950_ = v___x_3944_;
goto v_reusejp_3949_;
}
else
{
lean_object* v_reuseFailAlloc_3954_; 
v_reuseFailAlloc_3954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3954_, 0, v___x_3946_);
lean_ctor_set(v_reuseFailAlloc_3954_, 1, v_a_3948_);
v___x_3950_ = v_reuseFailAlloc_3954_;
goto v_reusejp_3949_;
}
v_reusejp_3949_:
{
size_t v___x_3951_; size_t v___x_3952_; lean_object* v___x_3953_; 
v___x_3951_ = ((size_t)1ULL);
v___x_3952_ = lean_usize_add(v_i_3933_, v___x_3951_);
v___x_3953_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1_spec__4(v_mvarId_3930_, v_as_3931_, v_sz_3932_, v___x_3952_, v___x_3950_, v___y_3935_, v___y_3936_, v___y_3937_, v___y_3938_);
return v___x_3953_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1___boxed(lean_object* v_mvarId_3996_, lean_object* v_as_3997_, lean_object* v_sz_3998_, lean_object* v_i_3999_, lean_object* v_b_4000_, lean_object* v___y_4001_, lean_object* v___y_4002_, lean_object* v___y_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_){
_start:
{
size_t v_sz_boxed_4006_; size_t v_i_boxed_4007_; lean_object* v_res_4008_; 
v_sz_boxed_4006_ = lean_unbox_usize(v_sz_3998_);
lean_dec(v_sz_3998_);
v_i_boxed_4007_ = lean_unbox_usize(v_i_3999_);
lean_dec(v_i_3999_);
v_res_4008_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_3996_, v_as_3997_, v_sz_boxed_4006_, v_i_boxed_4007_, v_b_4000_, v___y_4001_, v___y_4002_, v___y_4003_, v___y_4004_);
lean_dec(v___y_4004_);
lean_dec_ref(v___y_4003_);
lean_dec(v___y_4002_);
lean_dec_ref(v___y_4001_);
lean_dec_ref(v_as_3997_);
return v_res_4008_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(lean_object* v_mvarId_4009_, lean_object* v_t_4010_, lean_object* v_init_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_){
_start:
{
lean_object* v_root_4017_; lean_object* v_tail_4018_; lean_object* v___x_4019_; 
v_root_4017_ = lean_ctor_get(v_t_4010_, 0);
v_tail_4018_ = lean_ctor_get(v_t_4010_, 1);
lean_inc(v_mvarId_4009_);
lean_inc_ref(v_init_4011_);
v___x_4019_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__0(v_init_4011_, v_mvarId_4009_, v_root_4017_, v_init_4011_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_);
lean_dec_ref(v_init_4011_);
if (lean_obj_tag(v___x_4019_) == 0)
{
lean_object* v_a_4020_; lean_object* v___x_4022_; uint8_t v_isShared_4023_; uint8_t v_isSharedCheck_4056_; 
v_a_4020_ = lean_ctor_get(v___x_4019_, 0);
v_isSharedCheck_4056_ = !lean_is_exclusive(v___x_4019_);
if (v_isSharedCheck_4056_ == 0)
{
v___x_4022_ = v___x_4019_;
v_isShared_4023_ = v_isSharedCheck_4056_;
goto v_resetjp_4021_;
}
else
{
lean_inc(v_a_4020_);
lean_dec(v___x_4019_);
v___x_4022_ = lean_box(0);
v_isShared_4023_ = v_isSharedCheck_4056_;
goto v_resetjp_4021_;
}
v_resetjp_4021_:
{
if (lean_obj_tag(v_a_4020_) == 0)
{
lean_object* v_a_4024_; lean_object* v___x_4026_; 
lean_dec(v_mvarId_4009_);
v_a_4024_ = lean_ctor_get(v_a_4020_, 0);
lean_inc(v_a_4024_);
lean_dec_ref_known(v_a_4020_, 1);
if (v_isShared_4023_ == 0)
{
lean_ctor_set(v___x_4022_, 0, v_a_4024_);
v___x_4026_ = v___x_4022_;
goto v_reusejp_4025_;
}
else
{
lean_object* v_reuseFailAlloc_4027_; 
v_reuseFailAlloc_4027_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4027_, 0, v_a_4024_);
v___x_4026_ = v_reuseFailAlloc_4027_;
goto v_reusejp_4025_;
}
v_reusejp_4025_:
{
return v___x_4026_;
}
}
else
{
lean_object* v_a_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; size_t v_sz_4031_; size_t v___x_4032_; lean_object* v___x_4033_; 
lean_del_object(v___x_4022_);
v_a_4028_ = lean_ctor_get(v_a_4020_, 0);
lean_inc(v_a_4028_);
lean_dec_ref_known(v_a_4020_, 1);
v___x_4029_ = lean_box(0);
v___x_4030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4030_, 0, v___x_4029_);
lean_ctor_set(v___x_4030_, 1, v_a_4028_);
v_sz_4031_ = lean_array_size(v_tail_4018_);
v___x_4032_ = ((size_t)0ULL);
v___x_4033_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0_spec__1(v_mvarId_4009_, v_tail_4018_, v_sz_4031_, v___x_4032_, v___x_4030_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_);
if (lean_obj_tag(v___x_4033_) == 0)
{
lean_object* v_a_4034_; lean_object* v___x_4036_; uint8_t v_isShared_4037_; uint8_t v_isSharedCheck_4047_; 
v_a_4034_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4047_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4047_ == 0)
{
v___x_4036_ = v___x_4033_;
v_isShared_4037_ = v_isSharedCheck_4047_;
goto v_resetjp_4035_;
}
else
{
lean_inc(v_a_4034_);
lean_dec(v___x_4033_);
v___x_4036_ = lean_box(0);
v_isShared_4037_ = v_isSharedCheck_4047_;
goto v_resetjp_4035_;
}
v_resetjp_4035_:
{
lean_object* v_fst_4038_; 
v_fst_4038_ = lean_ctor_get(v_a_4034_, 0);
if (lean_obj_tag(v_fst_4038_) == 0)
{
lean_object* v_snd_4039_; lean_object* v___x_4041_; 
v_snd_4039_ = lean_ctor_get(v_a_4034_, 1);
lean_inc(v_snd_4039_);
lean_dec(v_a_4034_);
if (v_isShared_4037_ == 0)
{
lean_ctor_set(v___x_4036_, 0, v_snd_4039_);
v___x_4041_ = v___x_4036_;
goto v_reusejp_4040_;
}
else
{
lean_object* v_reuseFailAlloc_4042_; 
v_reuseFailAlloc_4042_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4042_, 0, v_snd_4039_);
v___x_4041_ = v_reuseFailAlloc_4042_;
goto v_reusejp_4040_;
}
v_reusejp_4040_:
{
return v___x_4041_;
}
}
else
{
lean_object* v_val_4043_; lean_object* v___x_4045_; 
lean_inc_ref(v_fst_4038_);
lean_dec(v_a_4034_);
v_val_4043_ = lean_ctor_get(v_fst_4038_, 0);
lean_inc(v_val_4043_);
lean_dec_ref_known(v_fst_4038_, 1);
if (v_isShared_4037_ == 0)
{
lean_ctor_set(v___x_4036_, 0, v_val_4043_);
v___x_4045_ = v___x_4036_;
goto v_reusejp_4044_;
}
else
{
lean_object* v_reuseFailAlloc_4046_; 
v_reuseFailAlloc_4046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4046_, 0, v_val_4043_);
v___x_4045_ = v_reuseFailAlloc_4046_;
goto v_reusejp_4044_;
}
v_reusejp_4044_:
{
return v___x_4045_;
}
}
}
}
else
{
lean_object* v_a_4048_; lean_object* v___x_4050_; uint8_t v_isShared_4051_; uint8_t v_isSharedCheck_4055_; 
v_a_4048_ = lean_ctor_get(v___x_4033_, 0);
v_isSharedCheck_4055_ = !lean_is_exclusive(v___x_4033_);
if (v_isSharedCheck_4055_ == 0)
{
v___x_4050_ = v___x_4033_;
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
else
{
lean_inc(v_a_4048_);
lean_dec(v___x_4033_);
v___x_4050_ = lean_box(0);
v_isShared_4051_ = v_isSharedCheck_4055_;
goto v_resetjp_4049_;
}
v_resetjp_4049_:
{
lean_object* v___x_4053_; 
if (v_isShared_4051_ == 0)
{
v___x_4053_ = v___x_4050_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v_a_4048_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
}
}
}
}
else
{
lean_object* v_a_4057_; lean_object* v___x_4059_; uint8_t v_isShared_4060_; uint8_t v_isSharedCheck_4064_; 
lean_dec(v_mvarId_4009_);
v_a_4057_ = lean_ctor_get(v___x_4019_, 0);
v_isSharedCheck_4064_ = !lean_is_exclusive(v___x_4019_);
if (v_isSharedCheck_4064_ == 0)
{
v___x_4059_ = v___x_4019_;
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
else
{
lean_inc(v_a_4057_);
lean_dec(v___x_4019_);
v___x_4059_ = lean_box(0);
v_isShared_4060_ = v_isSharedCheck_4064_;
goto v_resetjp_4058_;
}
v_resetjp_4058_:
{
lean_object* v___x_4062_; 
if (v_isShared_4060_ == 0)
{
v___x_4062_ = v___x_4059_;
goto v_reusejp_4061_;
}
else
{
lean_object* v_reuseFailAlloc_4063_; 
v_reuseFailAlloc_4063_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4063_, 0, v_a_4057_);
v___x_4062_ = v_reuseFailAlloc_4063_;
goto v_reusejp_4061_;
}
v_reusejp_4061_:
{
return v___x_4062_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0___boxed(lean_object* v_mvarId_4065_, lean_object* v_t_4066_, lean_object* v_init_4067_, lean_object* v___y_4068_, lean_object* v___y_4069_, lean_object* v___y_4070_, lean_object* v___y_4071_, lean_object* v___y_4072_){
_start:
{
lean_object* v_res_4073_; 
v_res_4073_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4065_, v_t_4066_, v_init_4067_, v___y_4068_, v___y_4069_, v___y_4070_, v___y_4071_);
lean_dec(v___y_4071_);
lean_dec_ref(v___y_4070_);
lean_dec(v___y_4069_);
lean_dec_ref(v___y_4068_);
lean_dec_ref(v_t_4066_);
return v_res_4073_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0(lean_object* v_mvarId_4077_, lean_object* v___y_4078_, lean_object* v___y_4079_, lean_object* v___y_4080_, lean_object* v___y_4081_){
_start:
{
lean_object* v_lctx_4083_; lean_object* v_decls_4084_; lean_object* v___x_4085_; lean_object* v___x_4086_; lean_object* v___x_4087_; 
v_lctx_4083_ = lean_ctor_get(v___y_4078_, 2);
v_decls_4084_ = lean_ctor_get(v_lctx_4083_, 1);
v___x_4085_ = lean_box(0);
v___x_4086_ = ((lean_object*)(l_Lean_Meta_substSomeVar_x3f___lam__0___closed__0));
v___x_4087_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_substSomeVar_x3f_spec__0(v_mvarId_4077_, v_decls_4084_, v___x_4086_, v___y_4078_, v___y_4079_, v___y_4080_, v___y_4081_);
if (lean_obj_tag(v___x_4087_) == 0)
{
lean_object* v_a_4088_; lean_object* v___x_4090_; uint8_t v_isShared_4091_; uint8_t v_isSharedCheck_4100_; 
v_a_4088_ = lean_ctor_get(v___x_4087_, 0);
v_isSharedCheck_4100_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4100_ == 0)
{
v___x_4090_ = v___x_4087_;
v_isShared_4091_ = v_isSharedCheck_4100_;
goto v_resetjp_4089_;
}
else
{
lean_inc(v_a_4088_);
lean_dec(v___x_4087_);
v___x_4090_ = lean_box(0);
v_isShared_4091_ = v_isSharedCheck_4100_;
goto v_resetjp_4089_;
}
v_resetjp_4089_:
{
lean_object* v_fst_4092_; 
v_fst_4092_ = lean_ctor_get(v_a_4088_, 0);
lean_inc(v_fst_4092_);
lean_dec(v_a_4088_);
if (lean_obj_tag(v_fst_4092_) == 0)
{
lean_object* v___x_4094_; 
if (v_isShared_4091_ == 0)
{
lean_ctor_set(v___x_4090_, 0, v___x_4085_);
v___x_4094_ = v___x_4090_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v___x_4085_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
else
{
lean_object* v_val_4096_; lean_object* v___x_4098_; 
v_val_4096_ = lean_ctor_get(v_fst_4092_, 0);
lean_inc(v_val_4096_);
lean_dec_ref_known(v_fst_4092_, 1);
if (v_isShared_4091_ == 0)
{
lean_ctor_set(v___x_4090_, 0, v_val_4096_);
v___x_4098_ = v___x_4090_;
goto v_reusejp_4097_;
}
else
{
lean_object* v_reuseFailAlloc_4099_; 
v_reuseFailAlloc_4099_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4099_, 0, v_val_4096_);
v___x_4098_ = v_reuseFailAlloc_4099_;
goto v_reusejp_4097_;
}
v_reusejp_4097_:
{
return v___x_4098_;
}
}
}
}
else
{
lean_object* v_a_4101_; lean_object* v___x_4103_; uint8_t v_isShared_4104_; uint8_t v_isSharedCheck_4108_; 
v_a_4101_ = lean_ctor_get(v___x_4087_, 0);
v_isSharedCheck_4108_ = !lean_is_exclusive(v___x_4087_);
if (v_isSharedCheck_4108_ == 0)
{
v___x_4103_ = v___x_4087_;
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
else
{
lean_inc(v_a_4101_);
lean_dec(v___x_4087_);
v___x_4103_ = lean_box(0);
v_isShared_4104_ = v_isSharedCheck_4108_;
goto v_resetjp_4102_;
}
v_resetjp_4102_:
{
lean_object* v___x_4106_; 
if (v_isShared_4104_ == 0)
{
v___x_4106_ = v___x_4103_;
goto v_reusejp_4105_;
}
else
{
lean_object* v_reuseFailAlloc_4107_; 
v_reuseFailAlloc_4107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4107_, 0, v_a_4101_);
v___x_4106_ = v_reuseFailAlloc_4107_;
goto v_reusejp_4105_;
}
v_reusejp_4105_:
{
return v___x_4106_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___lam__0___boxed(lean_object* v_mvarId_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_, lean_object* v___y_4112_, lean_object* v___y_4113_, lean_object* v___y_4114_){
_start:
{
lean_object* v_res_4115_; 
v_res_4115_ = l_Lean_Meta_substSomeVar_x3f___lam__0(v_mvarId_4109_, v___y_4110_, v___y_4111_, v___y_4112_, v___y_4113_);
lean_dec(v___y_4113_);
lean_dec_ref(v___y_4112_);
lean_dec(v___y_4111_);
lean_dec_ref(v___y_4110_);
return v_res_4115_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f(lean_object* v_mvarId_4116_, lean_object* v_a_4117_, lean_object* v_a_4118_, lean_object* v_a_4119_, lean_object* v_a_4120_){
_start:
{
lean_object* v___f_4122_; lean_object* v___x_4123_; 
lean_inc(v_mvarId_4116_);
v___f_4122_ = lean_alloc_closure((void*)(l_Lean_Meta_substSomeVar_x3f___lam__0___boxed), 6, 1);
lean_closure_set(v___f_4122_, 0, v_mvarId_4116_);
v___x_4123_ = l_Lean_MVarId_withContext___at___00Lean_Meta_substCore_spec__7___redArg(v_mvarId_4116_, v___f_4122_, v_a_4117_, v_a_4118_, v_a_4119_, v_a_4120_);
return v___x_4123_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substSomeVar_x3f___boxed(lean_object* v_mvarId_4124_, lean_object* v_a_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_, lean_object* v_a_4128_, lean_object* v_a_4129_){
_start:
{
lean_object* v_res_4130_; 
v_res_4130_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4124_, v_a_4125_, v_a_4126_, v_a_4127_, v_a_4128_);
lean_dec(v_a_4128_);
lean_dec_ref(v_a_4127_);
lean_dec(v_a_4126_);
lean_dec_ref(v_a_4125_);
return v_res_4130_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars(lean_object* v_mvarId_4131_, lean_object* v_a_4132_, lean_object* v_a_4133_, lean_object* v_a_4134_, lean_object* v_a_4135_){
_start:
{
lean_object* v___x_4137_; 
lean_inc(v_mvarId_4131_);
v___x_4137_ = l_Lean_Meta_substSomeVar_x3f(v_mvarId_4131_, v_a_4132_, v_a_4133_, v_a_4134_, v_a_4135_);
if (lean_obj_tag(v___x_4137_) == 0)
{
lean_object* v_a_4138_; lean_object* v___x_4140_; uint8_t v_isShared_4141_; uint8_t v_isSharedCheck_4147_; 
v_a_4138_ = lean_ctor_get(v___x_4137_, 0);
v_isSharedCheck_4147_ = !lean_is_exclusive(v___x_4137_);
if (v_isSharedCheck_4147_ == 0)
{
v___x_4140_ = v___x_4137_;
v_isShared_4141_ = v_isSharedCheck_4147_;
goto v_resetjp_4139_;
}
else
{
lean_inc(v_a_4138_);
lean_dec(v___x_4137_);
v___x_4140_ = lean_box(0);
v_isShared_4141_ = v_isSharedCheck_4147_;
goto v_resetjp_4139_;
}
v_resetjp_4139_:
{
if (lean_obj_tag(v_a_4138_) == 1)
{
lean_object* v_val_4142_; 
lean_del_object(v___x_4140_);
lean_dec(v_mvarId_4131_);
v_val_4142_ = lean_ctor_get(v_a_4138_, 0);
lean_inc(v_val_4142_);
lean_dec_ref_known(v_a_4138_, 1);
v_mvarId_4131_ = v_val_4142_;
goto _start;
}
else
{
lean_object* v___x_4145_; 
lean_dec(v_a_4138_);
if (v_isShared_4141_ == 0)
{
lean_ctor_set(v___x_4140_, 0, v_mvarId_4131_);
v___x_4145_ = v___x_4140_;
goto v_reusejp_4144_;
}
else
{
lean_object* v_reuseFailAlloc_4146_; 
v_reuseFailAlloc_4146_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4146_, 0, v_mvarId_4131_);
v___x_4145_ = v_reuseFailAlloc_4146_;
goto v_reusejp_4144_;
}
v_reusejp_4144_:
{
return v___x_4145_;
}
}
}
}
else
{
lean_object* v_a_4148_; lean_object* v___x_4150_; uint8_t v_isShared_4151_; uint8_t v_isSharedCheck_4155_; 
lean_dec(v_mvarId_4131_);
v_a_4148_ = lean_ctor_get(v___x_4137_, 0);
v_isSharedCheck_4155_ = !lean_is_exclusive(v___x_4137_);
if (v_isSharedCheck_4155_ == 0)
{
v___x_4150_ = v___x_4137_;
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
else
{
lean_inc(v_a_4148_);
lean_dec(v___x_4137_);
v___x_4150_ = lean_box(0);
v_isShared_4151_ = v_isSharedCheck_4155_;
goto v_resetjp_4149_;
}
v_resetjp_4149_:
{
lean_object* v___x_4153_; 
if (v_isShared_4151_ == 0)
{
v___x_4153_ = v___x_4150_;
goto v_reusejp_4152_;
}
else
{
lean_object* v_reuseFailAlloc_4154_; 
v_reuseFailAlloc_4154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4154_, 0, v_a_4148_);
v___x_4153_ = v_reuseFailAlloc_4154_;
goto v_reusejp_4152_;
}
v_reusejp_4152_:
{
return v___x_4153_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_substVars___boxed(lean_object* v_mvarId_4156_, lean_object* v_a_4157_, lean_object* v_a_4158_, lean_object* v_a_4159_, lean_object* v_a_4160_, lean_object* v_a_4161_){
_start:
{
lean_object* v_res_4162_; 
v_res_4162_ = l_Lean_Meta_substVars(v_mvarId_4156_, v_a_4157_, v_a_4158_, v_a_4159_, v_a_4160_);
lean_dec(v_a_4160_);
lean_dec_ref(v_a_4159_);
lean_dec(v_a_4158_);
lean_dec_ref(v_a_4157_);
return v_res_4162_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4225_; uint8_t v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; 
v___x_4225_ = ((lean_object*)(l_Lean_Meta_substCore___lam__3___closed__18));
v___x_4226_ = 0;
v___x_4227_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_));
v___x_4228_ = l_Lean_registerTraceClass(v___x_4225_, v___x_4226_, v___x_4227_);
return v___x_4228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2____boxed(lean_object* v_a_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = l___private_Lean_Meta_Tactic_Subst_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Subst_1630641459____hygCtx___hyg_2_();
return v_res_4230_;
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
