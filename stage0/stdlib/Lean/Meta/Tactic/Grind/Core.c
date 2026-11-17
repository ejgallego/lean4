// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Core
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Inv import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Tactic.Grind.PP import Lean.Meta.Tactic.Grind.Ctor import Lean.Meta.Tactic.Grind.Beta import Lean.Meta.Tactic.Grind.Simp import Lean.Meta.Tactic.Grind.Internalize import Init.Omega
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
lean_object* l_Lean_Meta_Grind_getParents___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_ParentSet_elems(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_setENode___redArg(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Meta_Grind_propagateDown(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isInconsistent___redArg(lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_Meta_Grind_checkInvariants(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_ppState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecide(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
extern lean_object* l_Lean_eagerReflBoolFalse;
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getFalseExpr___redArg(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_closeGoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_propagateCtor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_getTrueExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_mkEqFalseProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_propagateUp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_preprocessLight___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_expr_instantiate1(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushNewFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Meta_Grind_PendingSolverPropagations_propagate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isTrue(lean_object*);
uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
uint64_t lean_usize_to_uint64(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_DelayedTheoremInstance_check(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_Grind_Goal_getRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getGeneration___redArg(lean_object*, lean_object*);
lean_object* lean_grind_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_propagateBetaEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_mergeTerms___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_mergeCondParents___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_resetParentsOf___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_copyParentsTo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_addCongrTable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isArrow(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t l_Lean_Meta_Grind_isMatchCond(lean_object*);
lean_object* l_Lean_Meta_Grind_isCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
uint64_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_isFalseExpr___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ENode_isCongrRoot(lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Meta_Grind_ppENodeRef___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getFnRoots(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getEqcLambdas(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_markAsInconsistent___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Meta_mkEqTrue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_grind_process_to_do(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isProp(lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_newEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_newDiseq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getType___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "parent"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value_aux_1),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(5, 81, 119, 21, 241, 124, 41, 97)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "remove: "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "reinsert: "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "mp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__1_value),LEAN_SCALAR_PTR_LITERAL(183, 66, 254, 161, 210, 133, 94, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "True"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__5_value),LEAN_SCALAR_PTR_LITERAL(78, 21, 103, 131, 118, 13, 187, 164)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__6_value),LEAN_SCALAR_PTR_LITERAL(177, 152, 123, 219, 220, 182, 189, 250)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "eq_false_of_decide"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(171, 157, 112, 124, 91, 52, 64, 56)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0___boxed(lean_object**);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "beta"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 64, 101, 181, 200, 140, 42, 219)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "curr: "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "parent: "};
static const lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fn: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", parents: "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3___boxed(lean_object**);
static const lean_string_object l_Lean_Meta_Grind_propagateBeta___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "fns: "};
static const lean_object* l_Lean_Meta_Grind_propagateBeta___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_propagateBeta___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__1;
static const lean_string_object l_Lean_Meta_Grind_propagateBeta___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", lams: "};
static const lean_object* l_Lean_Meta_Grind_propagateBeta___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_propagateBeta___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Grind_propagateBeta___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_propagateBeta___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___boxed(lean_object**);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Inhabited"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "default"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(164, 88, 86, 106, 191, 136, 33, 185)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(174, 152, 115, 107, 166, 56, 116, 8)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " new root "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "adding "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 3, .m_data = " ↦ "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "after addEqStep, "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "eqc"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(49, 235, 244, 178, 10, 61, 92, 220)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 43, .m_capacity = 43, .m_length = 42, .m_data = " are already in the same equivalence class"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq___boxed(lean_object**);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Not"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__0_value),LEAN_SCALAR_PTR_LITERAL(185, 11, 203, 55, 27, 192, 137, 230)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "assert"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__2_value),LEAN_SCALAR_PTR_LITERAL(157, 181, 250, 47, 64, 71, 92, 131)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_grind_process_to_do(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(lean_object* v_e_1_, uint8_t v_flippedNew_2_, lean_object* v_targetNew_x3f_3_, lean_object* v_proofNew_x3f_4_, lean_object* v_a_5_, lean_object* v_a_6_, lean_object* v_a_7_, lean_object* v_a_8_, lean_object* v_a_9_){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_st_ref_get(v_a_5_);
lean_inc_ref(v_e_1_);
v___x_12_ = l_Lean_Meta_Grind_Goal_getENode(v___x_11_, v_e_1_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
lean_dec(v___x_11_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v_a_13_; lean_object* v_self_14_; lean_object* v_next_15_; lean_object* v_root_16_; lean_object* v_congr_17_; lean_object* v_target_x3f_18_; lean_object* v_proof_x3f_19_; uint8_t v_flipped_20_; lean_object* v_size_21_; uint8_t v_interpreted_22_; uint8_t v_ctor_23_; uint8_t v_hasLambdas_24_; uint8_t v_heqProofs_25_; lean_object* v_idx_26_; lean_object* v_generation_27_; lean_object* v_mt_28_; lean_object* v_sTerms_29_; uint8_t v_funCC_30_; lean_object* v_ematchDiagSource_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_54_; 
v_a_13_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_a_13_);
lean_dec_ref_known(v___x_12_, 1);
v_self_14_ = lean_ctor_get(v_a_13_, 0);
v_next_15_ = lean_ctor_get(v_a_13_, 1);
v_root_16_ = lean_ctor_get(v_a_13_, 2);
v_congr_17_ = lean_ctor_get(v_a_13_, 3);
v_target_x3f_18_ = lean_ctor_get(v_a_13_, 4);
v_proof_x3f_19_ = lean_ctor_get(v_a_13_, 5);
v_flipped_20_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12);
v_size_21_ = lean_ctor_get(v_a_13_, 6);
v_interpreted_22_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 1);
v_ctor_23_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 2);
v_hasLambdas_24_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 3);
v_heqProofs_25_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 4);
v_idx_26_ = lean_ctor_get(v_a_13_, 7);
v_generation_27_ = lean_ctor_get(v_a_13_, 8);
v_mt_28_ = lean_ctor_get(v_a_13_, 9);
v_sTerms_29_ = lean_ctor_get(v_a_13_, 10);
v_funCC_30_ = lean_ctor_get_uint8(v_a_13_, sizeof(void*)*12 + 5);
v_ematchDiagSource_31_ = lean_ctor_get(v_a_13_, 11);
v_isSharedCheck_54_ = !lean_is_exclusive(v_a_13_);
if (v_isSharedCheck_54_ == 0)
{
v___x_33_ = v_a_13_;
v_isShared_34_ = v_isSharedCheck_54_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_ematchDiagSource_31_);
lean_inc(v_sTerms_29_);
lean_inc(v_mt_28_);
lean_inc(v_generation_27_);
lean_inc(v_idx_26_);
lean_inc(v_size_21_);
lean_inc(v_proof_x3f_19_);
lean_inc(v_target_x3f_18_);
lean_inc(v_congr_17_);
lean_inc(v_root_16_);
lean_inc(v_next_15_);
lean_inc(v_self_14_);
lean_dec(v_a_13_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_54_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___y_36_; 
if (lean_obj_tag(v_target_x3f_18_) == 1)
{
lean_object* v_val_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_53_; 
v_val_41_ = lean_ctor_get(v_target_x3f_18_, 0);
v_isSharedCheck_53_ = !lean_is_exclusive(v_target_x3f_18_);
if (v_isSharedCheck_53_ == 0)
{
v___x_43_ = v_target_x3f_18_;
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_val_41_);
lean_dec(v_target_x3f_18_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_53_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
uint8_t v___y_46_; 
if (v_flipped_20_ == 0)
{
uint8_t v___x_51_; 
v___x_51_ = 1;
v___y_46_ = v___x_51_;
goto v___jp_45_;
}
else
{
uint8_t v___x_52_; 
v___x_52_ = 0;
v___y_46_ = v___x_52_;
goto v___jp_45_;
}
v___jp_45_:
{
lean_object* v___x_48_; 
lean_inc_ref(v_e_1_);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v_e_1_);
v___x_48_ = v___x_43_;
goto v_reusejp_47_;
}
else
{
lean_object* v_reuseFailAlloc_50_; 
v_reuseFailAlloc_50_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_50_, 0, v_e_1_);
v___x_48_ = v_reuseFailAlloc_50_;
goto v_reusejp_47_;
}
v_reusejp_47_:
{
lean_object* v___x_49_; 
v___x_49_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_val_41_, v___y_46_, v___x_48_, v_proof_x3f_19_, v_a_5_, v_a_6_, v_a_7_, v_a_8_, v_a_9_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_dec_ref_known(v___x_49_, 1);
v___y_36_ = v_a_5_;
goto v___jp_35_;
}
else
{
lean_del_object(v___x_33_);
lean_dec(v_ematchDiagSource_31_);
lean_dec(v_sTerms_29_);
lean_dec(v_mt_28_);
lean_dec(v_generation_27_);
lean_dec(v_idx_26_);
lean_dec(v_size_21_);
lean_dec_ref(v_congr_17_);
lean_dec_ref(v_root_16_);
lean_dec_ref(v_next_15_);
lean_dec_ref(v_self_14_);
lean_dec(v_proofNew_x3f_4_);
lean_dec(v_targetNew_x3f_3_);
lean_dec_ref(v_e_1_);
return v___x_49_;
}
}
}
}
}
else
{
lean_dec(v_proof_x3f_19_);
lean_dec(v_target_x3f_18_);
v___y_36_ = v_a_5_;
goto v___jp_35_;
}
v___jp_35_:
{
lean_object* v___x_38_; 
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 5, v_proofNew_x3f_4_);
lean_ctor_set(v___x_33_, 4, v_targetNew_x3f_3_);
v___x_38_ = v___x_33_;
goto v_reusejp_37_;
}
else
{
lean_object* v_reuseFailAlloc_40_; 
v_reuseFailAlloc_40_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_40_, 0, v_self_14_);
lean_ctor_set(v_reuseFailAlloc_40_, 1, v_next_15_);
lean_ctor_set(v_reuseFailAlloc_40_, 2, v_root_16_);
lean_ctor_set(v_reuseFailAlloc_40_, 3, v_congr_17_);
lean_ctor_set(v_reuseFailAlloc_40_, 4, v_targetNew_x3f_3_);
lean_ctor_set(v_reuseFailAlloc_40_, 5, v_proofNew_x3f_4_);
lean_ctor_set(v_reuseFailAlloc_40_, 6, v_size_21_);
lean_ctor_set(v_reuseFailAlloc_40_, 7, v_idx_26_);
lean_ctor_set(v_reuseFailAlloc_40_, 8, v_generation_27_);
lean_ctor_set(v_reuseFailAlloc_40_, 9, v_mt_28_);
lean_ctor_set(v_reuseFailAlloc_40_, 10, v_sTerms_29_);
lean_ctor_set(v_reuseFailAlloc_40_, 11, v_ematchDiagSource_31_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 1, v_interpreted_22_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 2, v_ctor_23_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 3, v_hasLambdas_24_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 4, v_heqProofs_25_);
lean_ctor_set_uint8(v_reuseFailAlloc_40_, sizeof(void*)*12 + 5, v_funCC_30_);
v___x_38_ = v_reuseFailAlloc_40_;
goto v_reusejp_37_;
}
v_reusejp_37_:
{
lean_object* v___x_39_; 
lean_ctor_set_uint8(v___x_38_, sizeof(void*)*12, v_flippedNew_2_);
v___x_39_ = l_Lean_Meta_Grind_setENode___redArg(v_e_1_, v___x_38_, v___y_36_);
return v___x_39_;
}
}
}
}
else
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_62_; 
lean_dec(v_proofNew_x3f_4_);
lean_dec(v_targetNew_x3f_3_);
lean_dec_ref(v_e_1_);
v_a_55_ = lean_ctor_get(v___x_12_, 0);
v_isSharedCheck_62_ = !lean_is_exclusive(v___x_12_);
if (v_isSharedCheck_62_ == 0)
{
v___x_57_ = v___x_12_;
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_12_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_62_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
lean_object* v___x_60_; 
if (v_isShared_58_ == 0)
{
v___x_60_ = v___x_57_;
goto v_reusejp_59_;
}
else
{
lean_object* v_reuseFailAlloc_61_; 
v_reuseFailAlloc_61_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_61_, 0, v_a_55_);
v___x_60_ = v_reuseFailAlloc_61_;
goto v_reusejp_59_;
}
v_reusejp_59_:
{
return v___x_60_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg___boxed(lean_object* v_e_63_, lean_object* v_flippedNew_64_, lean_object* v_targetNew_x3f_65_, lean_object* v_proofNew_x3f_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
uint8_t v_flippedNew_boxed_73_; lean_object* v_res_74_; 
v_flippedNew_boxed_73_ = lean_unbox(v_flippedNew_64_);
v_res_74_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_63_, v_flippedNew_boxed_73_, v_targetNew_x3f_65_, v_proofNew_x3f_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_, v_a_71_);
lean_dec(v_a_71_);
lean_dec_ref(v_a_70_);
lean_dec(v_a_69_);
lean_dec_ref(v_a_68_);
lean_dec(v_a_67_);
return v_res_74_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(lean_object* v_e_75_, uint8_t v_flippedNew_76_, lean_object* v_targetNew_x3f_77_, lean_object* v_proofNew_x3f_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_, lean_object* v_a_85_, lean_object* v_a_86_, lean_object* v_a_87_, lean_object* v_a_88_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_75_, v_flippedNew_76_, v_targetNew_x3f_77_, v_proofNew_x3f_78_, v_a_79_, v_a_85_, v_a_86_, v_a_87_, v_a_88_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___boxed(lean_object* v_e_91_, lean_object* v_flippedNew_92_, lean_object* v_targetNew_x3f_93_, lean_object* v_proofNew_x3f_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_, lean_object* v_a_100_, lean_object* v_a_101_, lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_){
_start:
{
uint8_t v_flippedNew_boxed_106_; lean_object* v_res_107_; 
v_flippedNew_boxed_106_ = lean_unbox(v_flippedNew_92_);
v_res_107_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go(v_e_91_, v_flippedNew_boxed_106_, v_targetNew_x3f_93_, v_proofNew_x3f_94_, v_a_95_, v_a_96_, v_a_97_, v_a_98_, v_a_99_, v_a_100_, v_a_101_, v_a_102_, v_a_103_, v_a_104_);
lean_dec(v_a_104_);
lean_dec_ref(v_a_103_);
lean_dec(v_a_102_);
lean_dec_ref(v_a_101_);
lean_dec(v_a_100_);
lean_dec_ref(v_a_99_);
lean_dec(v_a_98_);
lean_dec_ref(v_a_97_);
lean_dec(v_a_96_);
lean_dec(v_a_95_);
return v_res_107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(lean_object* v_e_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_, lean_object* v_a_113_){
_start:
{
uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; 
v___x_115_ = 0;
v___x_116_ = lean_box(0);
v___x_117_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans_go___redArg(v_e_108_, v___x_115_, v___x_116_, v___x_116_, v_a_109_, v_a_110_, v_a_111_, v_a_112_, v_a_113_);
return v___x_117_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg___boxed(lean_object* v_e_118_, lean_object* v_a_119_, lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_e_118_, v_a_119_, v_a_120_, v_a_121_, v_a_122_, v_a_123_);
lean_dec(v_a_123_);
lean_dec_ref(v_a_122_);
lean_dec(v_a_121_);
lean_dec_ref(v_a_120_);
lean_dec(v_a_119_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(lean_object* v_e_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_, lean_object* v_a_134_, lean_object* v_a_135_, lean_object* v_a_136_){
_start:
{
lean_object* v___x_138_; 
v___x_138_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_e_126_, v_a_127_, v_a_133_, v_a_134_, v_a_135_, v_a_136_);
return v___x_138_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___boxed(lean_object* v_e_139_, lean_object* v_a_140_, lean_object* v_a_141_, lean_object* v_a_142_, lean_object* v_a_143_, lean_object* v_a_144_, lean_object* v_a_145_, lean_object* v_a_146_, lean_object* v_a_147_, lean_object* v_a_148_, lean_object* v_a_149_, lean_object* v_a_150_){
_start:
{
lean_object* v_res_151_; 
v_res_151_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans(v_e_139_, v_a_140_, v_a_141_, v_a_142_, v_a_143_, v_a_144_, v_a_145_, v_a_146_, v_a_147_, v_a_148_, v_a_149_);
lean_dec(v_a_149_);
lean_dec_ref(v_a_148_);
lean_dec(v_a_147_);
lean_dec_ref(v_a_146_);
lean_dec(v_a_145_);
lean_dec_ref(v_a_144_);
lean_dec(v_a_143_);
lean_dec_ref(v_a_142_);
lean_dec(v_a_141_);
lean_dec(v_a_140_);
return v_res_151_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(lean_object* v_parent_153_){
_start:
{
uint8_t v___x_164_; 
v___x_164_ = l_Lean_Expr_isApp(v_parent_153_);
if (v___x_164_ == 0)
{
goto v___jp_154_;
}
else
{
uint8_t v___x_165_; 
v___x_165_ = l_Lean_Meta_Grind_isMatchCond(v_parent_153_);
if (v___x_165_ == 0)
{
return v___x_164_;
}
else
{
goto v___jp_154_;
}
}
v___jp_154_:
{
uint8_t v___x_155_; 
v___x_155_ = l_Lean_Expr_isArrow(v_parent_153_);
if (v___x_155_ == 0)
{
if (lean_obj_tag(v_parent_153_) == 11)
{
lean_object* v_typeName_156_; 
v_typeName_156_ = lean_ctor_get(v_parent_153_, 0);
if (lean_obj_tag(v_typeName_156_) == 1)
{
lean_object* v_pre_157_; 
v_pre_157_ = lean_ctor_get(v_typeName_156_, 0);
if (lean_obj_tag(v_pre_157_) == 0)
{
lean_object* v_idx_158_; lean_object* v_str_159_; lean_object* v___x_160_; uint8_t v___x_161_; 
v_idx_158_ = lean_ctor_get(v_parent_153_, 1);
v_str_159_ = lean_ctor_get(v_typeName_156_, 1);
v___x_160_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___closed__0));
v___x_161_ = lean_string_dec_eq(v_str_159_, v___x_160_);
if (v___x_161_ == 0)
{
return v___x_161_;
}
else
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = lean_unsigned_to_nat(0u);
v___x_163_ = lean_nat_dec_eq(v_idx_158_, v___x_162_);
return v___x_163_;
}
}
else
{
return v___x_155_;
}
}
else
{
return v___x_155_;
}
}
else
{
return v___x_155_;
}
}
else
{
return v___x_155_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant___boxed(lean_object* v_parent_166_){
_start:
{
uint8_t v_res_167_; lean_object* v_r_168_; 
v_res_167_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_parent_166_);
lean_dec_ref(v_parent_166_);
v_r_168_ = lean_box(v_res_167_);
return v_r_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(lean_object* v_msgData_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_){
_start:
{
lean_object* v___x_175_; lean_object* v_env_176_; uint8_t v___x_177_; lean_object* v_env_178_; lean_object* v___x_179_; lean_object* v_toCold_180_; lean_object* v_mctx_181_; lean_object* v_lctx_182_; lean_object* v_options_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_175_ = lean_st_ref_get(v___y_173_);
v_env_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc_ref(v_env_176_);
lean_dec(v___x_175_);
v___x_177_ = 0;
v_env_178_ = l_Lean_Environment_setRecordingDeps(v_env_176_, v___x_177_);
v___x_179_ = lean_st_ref_get(v___y_171_);
v_toCold_180_ = lean_ctor_get(v___y_172_, 0);
v_mctx_181_ = lean_ctor_get(v___x_179_, 0);
lean_inc_ref(v_mctx_181_);
lean_dec(v___x_179_);
v_lctx_182_ = lean_ctor_get(v___y_170_, 2);
v_options_183_ = lean_ctor_get(v_toCold_180_, 2);
lean_inc_ref(v_options_183_);
lean_inc_ref(v_lctx_182_);
v___x_184_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_184_, 0, v_env_178_);
lean_ctor_set(v___x_184_, 1, v_mctx_181_);
lean_ctor_set(v___x_184_, 2, v_lctx_182_);
lean_ctor_set(v___x_184_, 3, v_options_183_);
v___x_185_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_185_, 0, v___x_184_);
lean_ctor_set(v___x_185_, 1, v_msgData_169_);
v___x_186_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2___boxed(lean_object* v_msgData_187_, lean_object* v___y_188_, lean_object* v___y_189_, lean_object* v___y_190_, lean_object* v___y_191_, lean_object* v___y_192_){
_start:
{
lean_object* v_res_193_; 
v_res_193_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(v_msgData_187_, v___y_188_, v___y_189_, v___y_190_, v___y_191_);
lean_dec(v___y_191_);
lean_dec_ref(v___y_190_);
lean_dec(v___y_189_);
lean_dec_ref(v___y_188_);
return v_res_193_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0(void){
_start:
{
lean_object* v___x_194_; double v___x_195_; 
v___x_194_ = lean_unsigned_to_nat(0u);
v___x_195_ = lean_float_of_nat(v___x_194_);
return v___x_195_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(lean_object* v_cls_199_, lean_object* v_msg_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
lean_object* v_ref_206_; lean_object* v___x_207_; lean_object* v_a_208_; lean_object* v___x_210_; uint8_t v_isShared_211_; uint8_t v_isSharedCheck_253_; 
v_ref_206_ = lean_ctor_get(v___y_203_, 2);
v___x_207_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1_spec__2(v_msg_200_, v___y_201_, v___y_202_, v___y_203_, v___y_204_);
v_a_208_ = lean_ctor_get(v___x_207_, 0);
v_isSharedCheck_253_ = !lean_is_exclusive(v___x_207_);
if (v_isSharedCheck_253_ == 0)
{
v___x_210_ = v___x_207_;
v_isShared_211_ = v_isSharedCheck_253_;
goto v_resetjp_209_;
}
else
{
lean_inc(v_a_208_);
lean_dec(v___x_207_);
v___x_210_ = lean_box(0);
v_isShared_211_ = v_isSharedCheck_253_;
goto v_resetjp_209_;
}
v_resetjp_209_:
{
lean_object* v___x_212_; lean_object* v_traceState_213_; lean_object* v_env_214_; lean_object* v_nextMacroScope_215_; lean_object* v_ngen_216_; lean_object* v_auxDeclNGen_217_; lean_object* v_cache_218_; lean_object* v_recordedDeps_219_; lean_object* v_messages_220_; lean_object* v_infoState_221_; lean_object* v_snapshotTasks_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_252_; 
v___x_212_ = lean_st_ref_take(v___y_204_);
v_traceState_213_ = lean_ctor_get(v___x_212_, 4);
v_env_214_ = lean_ctor_get(v___x_212_, 0);
v_nextMacroScope_215_ = lean_ctor_get(v___x_212_, 1);
v_ngen_216_ = lean_ctor_get(v___x_212_, 2);
v_auxDeclNGen_217_ = lean_ctor_get(v___x_212_, 3);
v_cache_218_ = lean_ctor_get(v___x_212_, 5);
v_recordedDeps_219_ = lean_ctor_get(v___x_212_, 6);
v_messages_220_ = lean_ctor_get(v___x_212_, 7);
v_infoState_221_ = lean_ctor_get(v___x_212_, 8);
v_snapshotTasks_222_ = lean_ctor_get(v___x_212_, 9);
v_isSharedCheck_252_ = !lean_is_exclusive(v___x_212_);
if (v_isSharedCheck_252_ == 0)
{
v___x_224_ = v___x_212_;
v_isShared_225_ = v_isSharedCheck_252_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_snapshotTasks_222_);
lean_inc(v_infoState_221_);
lean_inc(v_messages_220_);
lean_inc(v_recordedDeps_219_);
lean_inc(v_cache_218_);
lean_inc(v_traceState_213_);
lean_inc(v_auxDeclNGen_217_);
lean_inc(v_ngen_216_);
lean_inc(v_nextMacroScope_215_);
lean_inc(v_env_214_);
lean_dec(v___x_212_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_252_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
uint64_t v_tid_226_; lean_object* v_traces_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_251_; 
v_tid_226_ = lean_ctor_get_uint64(v_traceState_213_, sizeof(void*)*1);
v_traces_227_ = lean_ctor_get(v_traceState_213_, 0);
v_isSharedCheck_251_ = !lean_is_exclusive(v_traceState_213_);
if (v_isSharedCheck_251_ == 0)
{
v___x_229_ = v_traceState_213_;
v_isShared_230_ = v_isSharedCheck_251_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_traces_227_);
lean_dec(v_traceState_213_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_251_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_231_; lean_object* v___x_232_; double v___x_233_; uint8_t v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_242_; 
v___x_231_ = lean_box(0);
v___x_232_ = lean_box(0);
v___x_233_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__0);
v___x_234_ = 0;
v___x_235_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__1));
v___x_236_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_236_, 0, v_cls_199_);
lean_ctor_set(v___x_236_, 1, v___x_232_);
lean_ctor_set(v___x_236_, 2, v___x_235_);
lean_ctor_set_float(v___x_236_, sizeof(void*)*3, v___x_233_);
lean_ctor_set_float(v___x_236_, sizeof(void*)*3 + 8, v___x_233_);
lean_ctor_set_uint8(v___x_236_, sizeof(void*)*3 + 16, v___x_234_);
v___x_237_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___closed__2));
v___x_238_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set(v___x_238_, 1, v_a_208_);
lean_ctor_set(v___x_238_, 2, v___x_237_);
lean_inc(v_ref_206_);
v___x_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_239_, 0, v_ref_206_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = l_Lean_PersistentArray_push___redArg(v_traces_227_, v___x_239_);
if (v_isShared_230_ == 0)
{
lean_ctor_set(v___x_229_, 0, v___x_240_);
v___x_242_ = v___x_229_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_240_);
lean_ctor_set_uint64(v_reuseFailAlloc_250_, sizeof(void*)*1, v_tid_226_);
v___x_242_ = v_reuseFailAlloc_250_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
lean_object* v___x_244_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 4, v___x_242_);
v___x_244_ = v___x_224_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_249_; 
v_reuseFailAlloc_249_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_249_, 0, v_env_214_);
lean_ctor_set(v_reuseFailAlloc_249_, 1, v_nextMacroScope_215_);
lean_ctor_set(v_reuseFailAlloc_249_, 2, v_ngen_216_);
lean_ctor_set(v_reuseFailAlloc_249_, 3, v_auxDeclNGen_217_);
lean_ctor_set(v_reuseFailAlloc_249_, 4, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_249_, 5, v_cache_218_);
lean_ctor_set(v_reuseFailAlloc_249_, 6, v_recordedDeps_219_);
lean_ctor_set(v_reuseFailAlloc_249_, 7, v_messages_220_);
lean_ctor_set(v_reuseFailAlloc_249_, 8, v_infoState_221_);
lean_ctor_set(v_reuseFailAlloc_249_, 9, v_snapshotTasks_222_);
v___x_244_ = v_reuseFailAlloc_249_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
lean_object* v___x_245_; lean_object* v___x_247_; 
v___x_245_ = lean_st_ref_put(v___y_204_, v___x_244_);
if (v_isShared_211_ == 0)
{
lean_ctor_set(v___x_210_, 0, v___x_231_);
v___x_247_ = v___x_210_;
goto v_reusejp_246_;
}
else
{
lean_object* v_reuseFailAlloc_248_; 
v_reuseFailAlloc_248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_248_, 0, v___x_231_);
v___x_247_ = v_reuseFailAlloc_248_;
goto v_reusejp_246_;
}
v_reusejp_246_:
{
return v___x_247_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg___boxed(lean_object* v_cls_254_, lean_object* v_msg_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_, lean_object* v___y_259_, lean_object* v___y_260_){
_start:
{
lean_object* v_res_261_; 
v_res_261_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_254_, v_msg_255_, v___y_256_, v___y_257_, v___y_258_, v___y_259_);
lean_dec(v___y_259_);
lean_dec_ref(v___y_258_);
lean_dec(v___y_257_);
lean_dec_ref(v___y_256_);
return v_res_261_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(lean_object* v___x_262_, lean_object* v_xs_263_, lean_object* v_v_264_, lean_object* v_i_265_){
_start:
{
lean_object* v___x_266_; uint8_t v___x_267_; 
v___x_266_ = lean_array_get_size(v_xs_263_);
v___x_267_ = lean_nat_dec_lt(v_i_265_, v___x_266_);
if (v___x_267_ == 0)
{
lean_object* v___x_268_; 
lean_dec(v_i_265_);
lean_dec_ref(v_v_264_);
v___x_268_ = lean_box(0);
return v___x_268_;
}
else
{
lean_object* v___x_269_; uint8_t v___x_270_; 
v___x_269_ = lean_array_fget_borrowed(v_xs_263_, v_i_265_);
lean_inc_ref(v_v_264_);
lean_inc(v___x_269_);
v___x_270_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_262_, v___x_269_, v_v_264_);
if (v___x_270_ == 0)
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(1u);
v___x_272_ = lean_nat_add(v_i_265_, v___x_271_);
lean_dec(v_i_265_);
v_i_265_ = v___x_272_;
goto _start;
}
else
{
lean_object* v___x_274_; 
lean_dec_ref(v_v_264_);
v___x_274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_274_, 0, v_i_265_);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5___boxed(lean_object* v___x_275_, lean_object* v_xs_276_, lean_object* v_v_277_, lean_object* v_i_278_){
_start:
{
lean_object* v_res_279_; 
v_res_279_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(v___x_275_, v_xs_276_, v_v_277_, v_i_278_);
lean_dec_ref(v_xs_276_);
lean_dec_ref(v___x_275_);
return v_res_279_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(lean_object* v___x_280_, lean_object* v_xs_281_, lean_object* v_v_282_){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_unsigned_to_nat(0u);
v___x_284_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1_spec__5(v___x_280_, v_xs_281_, v_v_282_, v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1___boxed(lean_object* v___x_285_, lean_object* v_xs_286_, lean_object* v_v_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(v___x_285_, v_xs_286_, v_v_287_);
lean_dec_ref(v_xs_286_);
lean_dec_ref(v___x_285_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(lean_object* v___x_289_, lean_object* v_x_290_, size_t v_x_291_, lean_object* v_x_292_){
_start:
{
if (lean_obj_tag(v_x_290_) == 0)
{
lean_object* v_es_293_; lean_object* v___x_294_; size_t v___x_295_; size_t v___x_296_; lean_object* v_j_297_; lean_object* v_entry_298_; 
v_es_293_ = lean_ctor_get(v_x_290_, 0);
v___x_294_ = lean_box(2);
v___x_295_ = ((size_t)31ULL);
v___x_296_ = lean_usize_land(v_x_291_, v___x_295_);
v_j_297_ = lean_usize_to_nat(v___x_296_);
v_entry_298_ = lean_array_get(v___x_294_, v_es_293_, v_j_297_);
switch(lean_obj_tag(v_entry_298_))
{
case 0:
{
lean_object* v_key_299_; uint8_t v___x_300_; 
v_key_299_ = lean_ctor_get(v_entry_298_, 0);
lean_inc(v_key_299_);
lean_dec_ref_known(v_entry_298_, 2);
v___x_300_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_289_, v_x_292_, v_key_299_);
if (v___x_300_ == 0)
{
lean_dec(v_j_297_);
return v_x_290_;
}
else
{
lean_object* v___x_302_; uint8_t v_isShared_303_; uint8_t v_isSharedCheck_308_; 
lean_inc_ref(v_es_293_);
v_isSharedCheck_308_ = !lean_is_exclusive(v_x_290_);
if (v_isSharedCheck_308_ == 0)
{
lean_object* v_unused_309_; 
v_unused_309_ = lean_ctor_get(v_x_290_, 0);
lean_dec(v_unused_309_);
v___x_302_ = v_x_290_;
v_isShared_303_ = v_isSharedCheck_308_;
goto v_resetjp_301_;
}
else
{
lean_dec(v_x_290_);
v___x_302_ = lean_box(0);
v_isShared_303_ = v_isSharedCheck_308_;
goto v_resetjp_301_;
}
v_resetjp_301_:
{
lean_object* v___x_304_; lean_object* v___x_306_; 
v___x_304_ = lean_array_set(v_es_293_, v_j_297_, v___x_294_);
lean_dec(v_j_297_);
if (v_isShared_303_ == 0)
{
lean_ctor_set(v___x_302_, 0, v___x_304_);
v___x_306_ = v___x_302_;
goto v_reusejp_305_;
}
else
{
lean_object* v_reuseFailAlloc_307_; 
v_reuseFailAlloc_307_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_307_, 0, v___x_304_);
v___x_306_ = v_reuseFailAlloc_307_;
goto v_reusejp_305_;
}
v_reusejp_305_:
{
return v___x_306_;
}
}
}
}
case 1:
{
lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_344_; 
lean_inc_ref(v_es_293_);
v_isSharedCheck_344_ = !lean_is_exclusive(v_x_290_);
if (v_isSharedCheck_344_ == 0)
{
lean_object* v_unused_345_; 
v_unused_345_ = lean_ctor_get(v_x_290_, 0);
lean_dec(v_unused_345_);
v___x_311_ = v_x_290_;
v_isShared_312_ = v_isSharedCheck_344_;
goto v_resetjp_310_;
}
else
{
lean_dec(v_x_290_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_344_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
lean_object* v_node_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_343_; 
v_node_313_ = lean_ctor_get(v_entry_298_, 0);
v_isSharedCheck_343_ = !lean_is_exclusive(v_entry_298_);
if (v_isSharedCheck_343_ == 0)
{
v___x_315_ = v_entry_298_;
v_isShared_316_ = v_isSharedCheck_343_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_node_313_);
lean_dec(v_entry_298_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_343_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
size_t v___x_317_; lean_object* v_entries_318_; size_t v___x_319_; lean_object* v_newNode_320_; lean_object* v___x_321_; 
v___x_317_ = ((size_t)5ULL);
v_entries_318_ = lean_array_set(v_es_293_, v_j_297_, v___x_294_);
v___x_319_ = lean_usize_shift_right(v_x_291_, v___x_317_);
v_newNode_320_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_289_, v_node_313_, v___x_319_, v_x_292_);
lean_inc_ref(v_newNode_320_);
v___x_321_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_320_);
if (lean_obj_tag(v___x_321_) == 0)
{
lean_object* v___x_323_; 
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 0, v_newNode_320_);
v___x_323_ = v___x_315_;
goto v_reusejp_322_;
}
else
{
lean_object* v_reuseFailAlloc_328_; 
v_reuseFailAlloc_328_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_328_, 0, v_newNode_320_);
v___x_323_ = v_reuseFailAlloc_328_;
goto v_reusejp_322_;
}
v_reusejp_322_:
{
lean_object* v___x_324_; lean_object* v___x_326_; 
v___x_324_ = lean_array_set(v_entries_318_, v_j_297_, v___x_323_);
lean_dec(v_j_297_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_324_);
v___x_326_ = v___x_311_;
goto v_reusejp_325_;
}
else
{
lean_object* v_reuseFailAlloc_327_; 
v_reuseFailAlloc_327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_327_, 0, v___x_324_);
v___x_326_ = v_reuseFailAlloc_327_;
goto v_reusejp_325_;
}
v_reusejp_325_:
{
return v___x_326_;
}
}
}
else
{
lean_object* v_val_329_; lean_object* v_fst_330_; lean_object* v_snd_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_342_; 
lean_dec_ref(v_newNode_320_);
lean_del_object(v___x_315_);
v_val_329_ = lean_ctor_get(v___x_321_, 0);
lean_inc(v_val_329_);
lean_dec_ref_known(v___x_321_, 1);
v_fst_330_ = lean_ctor_get(v_val_329_, 0);
v_snd_331_ = lean_ctor_get(v_val_329_, 1);
v_isSharedCheck_342_ = !lean_is_exclusive(v_val_329_);
if (v_isSharedCheck_342_ == 0)
{
v___x_333_ = v_val_329_;
v_isShared_334_ = v_isSharedCheck_342_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_snd_331_);
lean_inc(v_fst_330_);
lean_dec(v_val_329_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_342_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_341_; 
v_reuseFailAlloc_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_341_, 0, v_fst_330_);
lean_ctor_set(v_reuseFailAlloc_341_, 1, v_snd_331_);
v___x_336_ = v_reuseFailAlloc_341_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_337_ = lean_array_set(v_entries_318_, v_j_297_, v___x_336_);
lean_dec(v_j_297_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_337_);
v___x_339_ = v___x_311_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_337_);
v___x_339_ = v_reuseFailAlloc_340_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
return v___x_339_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_297_);
lean_dec_ref(v_x_292_);
return v_x_290_;
}
}
}
else
{
lean_object* v_ks_346_; lean_object* v_vs_347_; lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_361_; 
v_ks_346_ = lean_ctor_get(v_x_290_, 0);
v_vs_347_ = lean_ctor_get(v_x_290_, 1);
v_isSharedCheck_361_ = !lean_is_exclusive(v_x_290_);
if (v_isSharedCheck_361_ == 0)
{
v___x_349_ = v_x_290_;
v_isShared_350_ = v_isSharedCheck_361_;
goto v_resetjp_348_;
}
else
{
lean_inc(v_vs_347_);
lean_inc(v_ks_346_);
lean_dec(v_x_290_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_361_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
lean_object* v___x_351_; 
v___x_351_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0_spec__1(v___x_289_, v_ks_346_, v_x_292_);
if (lean_obj_tag(v___x_351_) == 0)
{
lean_object* v___x_353_; 
if (v_isShared_350_ == 0)
{
v___x_353_ = v___x_349_;
goto v_reusejp_352_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_ks_346_);
lean_ctor_set(v_reuseFailAlloc_354_, 1, v_vs_347_);
v___x_353_ = v_reuseFailAlloc_354_;
goto v_reusejp_352_;
}
v_reusejp_352_:
{
return v___x_353_;
}
}
else
{
lean_object* v_val_355_; lean_object* v_keys_x27_356_; lean_object* v_vals_x27_357_; lean_object* v___x_359_; 
v_val_355_ = lean_ctor_get(v___x_351_, 0);
lean_inc_n(v_val_355_, 2);
lean_dec_ref_known(v___x_351_, 1);
v_keys_x27_356_ = l_Array_eraseIdx___redArg(v_ks_346_, v_val_355_);
v_vals_x27_357_ = l_Array_eraseIdx___redArg(v_vs_347_, v_val_355_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 1, v_vals_x27_357_);
lean_ctor_set(v___x_349_, 0, v_keys_x27_356_);
v___x_359_ = v___x_349_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_360_; 
v_reuseFailAlloc_360_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_360_, 0, v_keys_x27_356_);
lean_ctor_set(v_reuseFailAlloc_360_, 1, v_vals_x27_357_);
v___x_359_ = v_reuseFailAlloc_360_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
return v___x_359_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg___boxed(lean_object* v___x_362_, lean_object* v_x_363_, lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
size_t v_x_24473__boxed_366_; lean_object* v_res_367_; 
v_x_24473__boxed_366_ = lean_unbox_usize(v_x_364_);
lean_dec(v_x_364_);
v_res_367_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_362_, v_x_363_, v_x_24473__boxed_366_, v_x_365_);
lean_dec_ref(v___x_362_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(lean_object* v___x_368_, lean_object* v_x_369_, lean_object* v_x_370_){
_start:
{
uint64_t v___x_371_; size_t v_h_372_; lean_object* v___x_373_; 
v___x_371_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_368_, v_x_370_);
v_h_372_ = lean_uint64_to_usize(v___x_371_);
v___x_373_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_368_, v_x_369_, v_h_372_, v_x_370_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg___boxed(lean_object* v___x_374_, lean_object* v_x_375_, lean_object* v_x_376_){
_start:
{
lean_object* v_res_377_; 
v_res_377_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v___x_374_, v_x_375_, v_x_376_);
lean_dec_ref(v___x_374_);
return v_res_377_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6(void){
_start:
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; 
v___x_388_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3));
v___x_389_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_390_ = l_Lean_Name_append(v___x_389_, v___x_388_);
return v___x_390_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8(void){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; 
v___x_392_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__7));
v___x_393_ = l_Lean_stringToMessageData(v___x_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(lean_object* v_as_x27_394_, lean_object* v_b_395_, lean_object* v___y_396_, lean_object* v___y_397_, lean_object* v___y_398_, lean_object* v___y_399_, lean_object* v___y_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_, lean_object* v___y_405_){
_start:
{
if (lean_obj_tag(v_as_x27_394_) == 0)
{
lean_object* v___x_407_; 
v___x_407_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_407_, 0, v_b_395_);
return v___x_407_;
}
else
{
lean_object* v_head_408_; lean_object* v_tail_409_; lean_object* v___x_410_; lean_object* v___y_412_; uint8_t v___x_456_; 
v_head_408_ = lean_ctor_get(v_as_x27_394_, 0);
v_tail_409_ = lean_ctor_get(v_as_x27_394_, 1);
v___x_410_ = lean_box(0);
v___x_456_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_head_408_);
if (v___x_456_ == 0)
{
v_as_x27_394_ = v_tail_409_;
v_b_395_ = v___x_410_;
goto _start;
}
else
{
lean_object* v___x_458_; 
lean_inc(v_head_408_);
v___x_458_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_head_408_, v___y_396_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_458_) == 0)
{
lean_object* v_a_459_; uint8_t v___x_460_; 
v_a_459_ = lean_ctor_get(v___x_458_, 0);
lean_inc(v_a_459_);
lean_dec_ref_known(v___x_458_, 1);
v___x_460_ = lean_unbox(v_a_459_);
lean_dec(v_a_459_);
if (v___x_460_ == 0)
{
v_as_x27_394_ = v_tail_409_;
v_b_395_ = v___x_410_;
goto _start;
}
else
{
lean_object* v_toCold_462_; lean_object* v_options_463_; uint8_t v_hasTrace_464_; 
v_toCold_462_ = lean_ctor_get(v___y_404_, 0);
v_options_463_ = lean_ctor_get(v_toCold_462_, 2);
v_hasTrace_464_ = lean_ctor_get_uint8(v_options_463_, sizeof(void*)*1);
if (v_hasTrace_464_ == 0)
{
v___y_412_ = v___y_396_;
goto v___jp_411_;
}
else
{
lean_object* v_inheritedTraceOptions_465_; lean_object* v___x_466_; lean_object* v___x_467_; uint8_t v___x_468_; 
v_inheritedTraceOptions_465_ = lean_ctor_get(v_toCold_462_, 11);
v___x_466_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3));
v___x_467_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6);
v___x_468_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_465_, v_options_463_, v___x_467_);
if (v___x_468_ == 0)
{
v___y_412_ = v___y_396_;
goto v___jp_411_;
}
else
{
lean_object* v___x_469_; 
v___x_469_ = l_Lean_Meta_Grind_updateLastTag(v___y_396_, v___y_397_, v___y_398_, v___y_399_, v___y_400_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; 
lean_dec_ref_known(v___x_469_, 1);
v___x_470_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__8);
lean_inc(v_head_408_);
v___x_471_ = l_Lean_MessageData_ofExpr(v_head_408_);
v___x_472_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_472_, 0, v___x_470_);
lean_ctor_set(v___x_472_, 1, v___x_471_);
v___x_473_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_466_, v___x_472_, v___y_402_, v___y_403_, v___y_404_, v___y_405_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_dec_ref_known(v___x_473_, 1);
v___y_412_ = v___y_396_;
goto v___jp_411_;
}
else
{
return v___x_473_;
}
}
else
{
return v___x_469_;
}
}
}
}
}
else
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_481_; 
v_a_474_ = lean_ctor_get(v___x_458_, 0);
v_isSharedCheck_481_ = !lean_is_exclusive(v___x_458_);
if (v_isSharedCheck_481_ == 0)
{
v___x_476_ = v___x_458_;
v_isShared_477_ = v_isSharedCheck_481_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_458_);
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
v_reuseFailAlloc_480_ = lean_alloc_ctor(1, 1, 0);
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
}
v___jp_411_:
{
lean_object* v___x_413_; lean_object* v_toGoalState_414_; lean_object* v_mvarId_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_455_; 
v___x_413_ = lean_st_ref_take(v___y_412_);
v_toGoalState_414_ = lean_ctor_get(v___x_413_, 0);
v_mvarId_415_ = lean_ctor_get(v___x_413_, 1);
v_isSharedCheck_455_ = !lean_is_exclusive(v___x_413_);
if (v_isSharedCheck_455_ == 0)
{
v___x_417_ = v___x_413_;
v_isShared_418_ = v_isSharedCheck_455_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_mvarId_415_);
lean_inc(v_toGoalState_414_);
lean_dec(v___x_413_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_455_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
lean_object* v_nextDeclIdx_419_; lean_object* v_enodeMap_420_; lean_object* v_exprs_421_; lean_object* v_parents_422_; lean_object* v_condParents_423_; lean_object* v_congrTable_424_; lean_object* v_appMap_425_; lean_object* v_indicesFound_426_; lean_object* v_toProcess_427_; lean_object* v_internalizing_428_; uint8_t v_inconsistent_429_; lean_object* v_nextIdx_430_; lean_object* v_newRawFacts_431_; lean_object* v_facts_432_; lean_object* v_extThms_433_; lean_object* v_ematch_434_; lean_object* v_inj_435_; lean_object* v_split_436_; lean_object* v_clean_437_; lean_object* v_sstates_438_; lean_object* v_goalStack_439_; uint64_t v_introBase_440_; lean_object* v_numIntros_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_454_; 
v_nextDeclIdx_419_ = lean_ctor_get(v_toGoalState_414_, 0);
v_enodeMap_420_ = lean_ctor_get(v_toGoalState_414_, 1);
v_exprs_421_ = lean_ctor_get(v_toGoalState_414_, 2);
v_parents_422_ = lean_ctor_get(v_toGoalState_414_, 3);
v_condParents_423_ = lean_ctor_get(v_toGoalState_414_, 4);
v_congrTable_424_ = lean_ctor_get(v_toGoalState_414_, 5);
v_appMap_425_ = lean_ctor_get(v_toGoalState_414_, 6);
v_indicesFound_426_ = lean_ctor_get(v_toGoalState_414_, 7);
v_toProcess_427_ = lean_ctor_get(v_toGoalState_414_, 8);
v_internalizing_428_ = lean_ctor_get(v_toGoalState_414_, 9);
v_inconsistent_429_ = lean_ctor_get_uint8(v_toGoalState_414_, sizeof(void*)*21 + 8);
v_nextIdx_430_ = lean_ctor_get(v_toGoalState_414_, 10);
v_newRawFacts_431_ = lean_ctor_get(v_toGoalState_414_, 11);
v_facts_432_ = lean_ctor_get(v_toGoalState_414_, 12);
v_extThms_433_ = lean_ctor_get(v_toGoalState_414_, 13);
v_ematch_434_ = lean_ctor_get(v_toGoalState_414_, 14);
v_inj_435_ = lean_ctor_get(v_toGoalState_414_, 15);
v_split_436_ = lean_ctor_get(v_toGoalState_414_, 16);
v_clean_437_ = lean_ctor_get(v_toGoalState_414_, 17);
v_sstates_438_ = lean_ctor_get(v_toGoalState_414_, 18);
v_goalStack_439_ = lean_ctor_get(v_toGoalState_414_, 19);
v_introBase_440_ = lean_ctor_get_uint64(v_toGoalState_414_, sizeof(void*)*21);
v_numIntros_441_ = lean_ctor_get(v_toGoalState_414_, 20);
v_isSharedCheck_454_ = !lean_is_exclusive(v_toGoalState_414_);
if (v_isSharedCheck_454_ == 0)
{
v___x_443_ = v_toGoalState_414_;
v_isShared_444_ = v_isSharedCheck_454_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_numIntros_441_);
lean_inc(v_goalStack_439_);
lean_inc(v_sstates_438_);
lean_inc(v_clean_437_);
lean_inc(v_split_436_);
lean_inc(v_inj_435_);
lean_inc(v_ematch_434_);
lean_inc(v_extThms_433_);
lean_inc(v_facts_432_);
lean_inc(v_newRawFacts_431_);
lean_inc(v_nextIdx_430_);
lean_inc(v_internalizing_428_);
lean_inc(v_toProcess_427_);
lean_inc(v_indicesFound_426_);
lean_inc(v_appMap_425_);
lean_inc(v_congrTable_424_);
lean_inc(v_condParents_423_);
lean_inc(v_parents_422_);
lean_inc(v_exprs_421_);
lean_inc(v_enodeMap_420_);
lean_inc(v_nextDeclIdx_419_);
lean_dec(v_toGoalState_414_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_454_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; lean_object* v___x_447_; 
lean_inc(v_head_408_);
v___x_445_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v_enodeMap_420_, v_congrTable_424_, v_head_408_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 5, v___x_445_);
v___x_447_ = v___x_443_;
goto v_reusejp_446_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_nextDeclIdx_419_);
lean_ctor_set(v_reuseFailAlloc_453_, 1, v_enodeMap_420_);
lean_ctor_set(v_reuseFailAlloc_453_, 2, v_exprs_421_);
lean_ctor_set(v_reuseFailAlloc_453_, 3, v_parents_422_);
lean_ctor_set(v_reuseFailAlloc_453_, 4, v_condParents_423_);
lean_ctor_set(v_reuseFailAlloc_453_, 5, v___x_445_);
lean_ctor_set(v_reuseFailAlloc_453_, 6, v_appMap_425_);
lean_ctor_set(v_reuseFailAlloc_453_, 7, v_indicesFound_426_);
lean_ctor_set(v_reuseFailAlloc_453_, 8, v_toProcess_427_);
lean_ctor_set(v_reuseFailAlloc_453_, 9, v_internalizing_428_);
lean_ctor_set(v_reuseFailAlloc_453_, 10, v_nextIdx_430_);
lean_ctor_set(v_reuseFailAlloc_453_, 11, v_newRawFacts_431_);
lean_ctor_set(v_reuseFailAlloc_453_, 12, v_facts_432_);
lean_ctor_set(v_reuseFailAlloc_453_, 13, v_extThms_433_);
lean_ctor_set(v_reuseFailAlloc_453_, 14, v_ematch_434_);
lean_ctor_set(v_reuseFailAlloc_453_, 15, v_inj_435_);
lean_ctor_set(v_reuseFailAlloc_453_, 16, v_split_436_);
lean_ctor_set(v_reuseFailAlloc_453_, 17, v_clean_437_);
lean_ctor_set(v_reuseFailAlloc_453_, 18, v_sstates_438_);
lean_ctor_set(v_reuseFailAlloc_453_, 19, v_goalStack_439_);
lean_ctor_set(v_reuseFailAlloc_453_, 20, v_numIntros_441_);
lean_ctor_set_uint8(v_reuseFailAlloc_453_, sizeof(void*)*21 + 8, v_inconsistent_429_);
lean_ctor_set_uint64(v_reuseFailAlloc_453_, sizeof(void*)*21, v_introBase_440_);
v___x_447_ = v_reuseFailAlloc_453_;
goto v_reusejp_446_;
}
v_reusejp_446_:
{
lean_object* v___x_449_; 
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_447_);
v___x_449_ = v___x_417_;
goto v_reusejp_448_;
}
else
{
lean_object* v_reuseFailAlloc_452_; 
v_reuseFailAlloc_452_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_452_, 0, v___x_447_);
lean_ctor_set(v_reuseFailAlloc_452_, 1, v_mvarId_415_);
v___x_449_ = v_reuseFailAlloc_452_;
goto v_reusejp_448_;
}
v_reusejp_448_:
{
lean_object* v___x_450_; 
v___x_450_ = lean_st_ref_put(v___y_412_, v___x_449_);
v_as_x27_394_ = v_tail_409_;
v_b_395_ = v___x_410_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___boxed(lean_object* v_as_x27_482_, lean_object* v_b_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_, lean_object* v___y_492_, lean_object* v___y_493_, lean_object* v___y_494_){
_start:
{
lean_object* v_res_495_; 
v_res_495_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v_as_x27_482_, v_b_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_, v___y_492_, v___y_493_);
lean_dec(v___y_493_);
lean_dec_ref(v___y_492_);
lean_dec(v___y_491_);
lean_dec_ref(v___y_490_);
lean_dec(v___y_489_);
lean_dec_ref(v___y_488_);
lean_dec(v___y_487_);
lean_dec_ref(v___y_486_);
lean_dec(v___y_485_);
lean_dec(v___y_484_);
lean_dec(v_as_x27_482_);
return v_res_495_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(lean_object* v_root_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_){
_start:
{
lean_object* v___x_508_; 
v___x_508_ = l_Lean_Meta_Grind_getParents___redArg(v_root_496_, v_a_497_);
if (lean_obj_tag(v___x_508_) == 0)
{
lean_object* v_a_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; 
v_a_509_ = lean_ctor_get(v___x_508_, 0);
lean_inc(v_a_509_);
lean_dec_ref_known(v___x_508_, 1);
v___x_510_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_509_);
v___x_511_ = lean_box(0);
v___x_512_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v___x_510_, v___x_511_, v_a_497_, v_a_498_, v_a_499_, v_a_500_, v_a_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_);
lean_dec(v___x_510_);
if (lean_obj_tag(v___x_512_) == 0)
{
lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_519_ == 0)
{
lean_object* v_unused_520_; 
v_unused_520_ = lean_ctor_get(v___x_512_, 0);
lean_dec(v_unused_520_);
v___x_514_ = v___x_512_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_dec(v___x_512_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
lean_ctor_set(v___x_514_, 0, v_a_509_);
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_509_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
else
{
lean_object* v_a_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_528_; 
lean_dec(v_a_509_);
v_a_521_ = lean_ctor_get(v___x_512_, 0);
v_isSharedCheck_528_ = !lean_is_exclusive(v___x_512_);
if (v_isSharedCheck_528_ == 0)
{
v___x_523_ = v___x_512_;
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_a_521_);
lean_dec(v___x_512_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_528_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_526_; 
if (v_isShared_524_ == 0)
{
v___x_526_ = v___x_523_;
goto v_reusejp_525_;
}
else
{
lean_object* v_reuseFailAlloc_527_; 
v_reuseFailAlloc_527_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_527_, 0, v_a_521_);
v___x_526_ = v_reuseFailAlloc_527_;
goto v_reusejp_525_;
}
v_reusejp_525_:
{
return v___x_526_;
}
}
}
}
else
{
return v___x_508_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents___boxed(lean_object* v_root_529_, lean_object* v_a_530_, lean_object* v_a_531_, lean_object* v_a_532_, lean_object* v_a_533_, lean_object* v_a_534_, lean_object* v_a_535_, lean_object* v_a_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v_res_541_; 
v_res_541_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(v_root_529_, v_a_530_, v_a_531_, v_a_532_, v_a_533_, v_a_534_, v_a_535_, v_a_536_, v_a_537_, v_a_538_, v_a_539_);
lean_dec(v_a_539_);
lean_dec_ref(v_a_538_);
lean_dec(v_a_537_);
lean_dec_ref(v_a_536_);
lean_dec(v_a_535_);
lean_dec_ref(v_a_534_);
lean_dec(v_a_533_);
lean_dec_ref(v_a_532_);
lean_dec(v_a_531_);
lean_dec(v_a_530_);
lean_dec_ref(v_root_529_);
return v_res_541_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(lean_object* v___x_542_, lean_object* v_00_u03b2_543_, lean_object* v_x_544_, lean_object* v_x_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___redArg(v___x_542_, v_x_544_, v_x_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0___boxed(lean_object* v___x_547_, lean_object* v_00_u03b2_548_, lean_object* v_x_549_, lean_object* v_x_550_){
_start:
{
lean_object* v_res_551_; 
v_res_551_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0(v___x_547_, v_00_u03b2_548_, v_x_549_, v_x_550_);
lean_dec_ref(v___x_547_);
return v_res_551_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(lean_object* v_cls_552_, lean_object* v_msg_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_, lean_object* v___y_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_){
_start:
{
lean_object* v___x_565_; 
v___x_565_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_552_, v_msg_553_, v___y_560_, v___y_561_, v___y_562_, v___y_563_);
return v___x_565_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___boxed(lean_object* v_cls_566_, lean_object* v_msg_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_, lean_object* v___y_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_, lean_object* v___y_577_, lean_object* v___y_578_){
_start:
{
lean_object* v_res_579_; 
v_res_579_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1(v_cls_566_, v_msg_567_, v___y_568_, v___y_569_, v___y_570_, v___y_571_, v___y_572_, v___y_573_, v___y_574_, v___y_575_, v___y_576_, v___y_577_);
lean_dec(v___y_577_);
lean_dec_ref(v___y_576_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
lean_dec(v___y_571_);
lean_dec_ref(v___y_570_);
lean_dec(v___y_569_);
lean_dec(v___y_568_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(lean_object* v_as_580_, lean_object* v_as_x27_581_, lean_object* v_b_582_, lean_object* v_a_583_, lean_object* v___y_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_, lean_object* v___y_589_, lean_object* v___y_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_){
_start:
{
lean_object* v___x_595_; 
v___x_595_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg(v_as_x27_581_, v_b_582_, v___y_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_, v___y_589_, v___y_590_, v___y_591_, v___y_592_, v___y_593_);
return v___x_595_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___boxed(lean_object* v_as_596_, lean_object* v_as_x27_597_, lean_object* v_b_598_, lean_object* v_a_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_, lean_object* v___y_610_){
_start:
{
lean_object* v_res_611_; 
v_res_611_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2(v_as_596_, v_as_x27_597_, v_b_598_, v_a_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
lean_dec(v___y_609_);
lean_dec_ref(v___y_608_);
lean_dec(v___y_607_);
lean_dec_ref(v___y_606_);
lean_dec(v___y_605_);
lean_dec_ref(v___y_604_);
lean_dec(v___y_603_);
lean_dec_ref(v___y_602_);
lean_dec(v___y_601_);
lean_dec(v___y_600_);
lean_dec(v_as_x27_597_);
lean_dec(v_as_596_);
return v_res_611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(lean_object* v___x_612_, lean_object* v_00_u03b2_613_, lean_object* v_x_614_, size_t v_x_615_, lean_object* v_x_616_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___redArg(v___x_612_, v_x_614_, v_x_615_, v_x_616_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0___boxed(lean_object* v___x_618_, lean_object* v_00_u03b2_619_, lean_object* v_x_620_, lean_object* v_x_621_, lean_object* v_x_622_){
_start:
{
size_t v_x_24933__boxed_623_; lean_object* v_res_624_; 
v_x_24933__boxed_623_ = lean_unbox_usize(v_x_621_);
lean_dec(v_x_621_);
v_res_624_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__0_spec__0(v___x_618_, v_00_u03b2_619_, v_x_620_, v_x_24933__boxed_623_, v_x_622_);
lean_dec_ref(v___x_618_);
return v_res_624_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1(void){
_start:
{
lean_object* v___x_626_; lean_object* v___x_627_; 
v___x_626_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__0));
v___x_627_ = l_Lean_stringToMessageData(v___x_626_);
return v___x_627_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(lean_object* v_as_x27_628_, lean_object* v_b_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_){
_start:
{
if (lean_obj_tag(v_as_x27_628_) == 0)
{
lean_object* v___x_641_; 
v___x_641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_641_, 0, v_b_629_);
return v___x_641_;
}
else
{
lean_object* v_head_642_; lean_object* v_tail_643_; lean_object* v___x_644_; lean_object* v___y_646_; lean_object* v___y_647_; lean_object* v___y_648_; lean_object* v___y_649_; lean_object* v___y_650_; lean_object* v___y_651_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_655_; uint8_t v___x_658_; 
v_head_642_ = lean_ctor_get(v_as_x27_628_, 0);
v_tail_643_ = lean_ctor_get(v_as_x27_628_, 1);
v___x_644_ = lean_box(0);
v___x_658_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_isCongrRelevant(v_head_642_);
if (v___x_658_ == 0)
{
v_as_x27_628_ = v_tail_643_;
v_b_629_ = v___x_644_;
goto _start;
}
else
{
lean_object* v___x_660_; 
lean_inc(v_head_642_);
v___x_660_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_head_642_, v___y_630_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
if (lean_obj_tag(v___x_660_) == 0)
{
lean_object* v_a_661_; uint8_t v___x_662_; 
v_a_661_ = lean_ctor_get(v___x_660_, 0);
lean_inc(v_a_661_);
lean_dec_ref_known(v___x_660_, 1);
v___x_662_ = lean_unbox(v_a_661_);
lean_dec(v_a_661_);
if (v___x_662_ == 0)
{
v_as_x27_628_ = v_tail_643_;
v_b_629_ = v___x_644_;
goto _start;
}
else
{
lean_object* v_toCold_664_; lean_object* v_options_665_; uint8_t v_hasTrace_666_; 
v_toCold_664_ = lean_ctor_get(v___y_638_, 0);
v_options_665_ = lean_ctor_get(v_toCold_664_, 2);
v_hasTrace_666_ = lean_ctor_get_uint8(v_options_665_, sizeof(void*)*1);
if (v_hasTrace_666_ == 0)
{
v___y_646_ = v___y_630_;
v___y_647_ = v___y_631_;
v___y_648_ = v___y_632_;
v___y_649_ = v___y_633_;
v___y_650_ = v___y_634_;
v___y_651_ = v___y_635_;
v___y_652_ = v___y_636_;
v___y_653_ = v___y_637_;
v___y_654_ = v___y_638_;
v___y_655_ = v___y_639_;
goto v___jp_645_;
}
else
{
lean_object* v_inheritedTraceOptions_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v_inheritedTraceOptions_667_ = lean_ctor_get(v_toCold_664_, 11);
v___x_668_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__3));
v___x_669_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__6);
v___x_670_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_667_, v_options_665_, v___x_669_);
if (v___x_670_ == 0)
{
v___y_646_ = v___y_630_;
v___y_647_ = v___y_631_;
v___y_648_ = v___y_632_;
v___y_649_ = v___y_633_;
v___y_650_ = v___y_634_;
v___y_651_ = v___y_635_;
v___y_652_ = v___y_636_;
v___y_653_ = v___y_637_;
v___y_654_ = v___y_638_;
v___y_655_ = v___y_639_;
goto v___jp_645_;
}
else
{
lean_object* v___x_671_; 
v___x_671_ = l_Lean_Meta_Grind_updateLastTag(v___y_630_, v___y_631_, v___y_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec_ref_known(v___x_671_, 1);
v___x_672_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___closed__1);
lean_inc(v_head_642_);
v___x_673_ = l_Lean_MessageData_ofExpr(v_head_642_);
v___x_674_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_674_, 0, v___x_672_);
lean_ctor_set(v___x_674_, 1, v___x_673_);
v___x_675_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_668_, v___x_674_, v___y_636_, v___y_637_, v___y_638_, v___y_639_);
if (lean_obj_tag(v___x_675_) == 0)
{
lean_dec_ref_known(v___x_675_, 1);
v___y_646_ = v___y_630_;
v___y_647_ = v___y_631_;
v___y_648_ = v___y_632_;
v___y_649_ = v___y_633_;
v___y_650_ = v___y_634_;
v___y_651_ = v___y_635_;
v___y_652_ = v___y_636_;
v___y_653_ = v___y_637_;
v___y_654_ = v___y_638_;
v___y_655_ = v___y_639_;
goto v___jp_645_;
}
else
{
return v___x_675_;
}
}
else
{
return v___x_671_;
}
}
}
}
}
else
{
lean_object* v_a_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_683_; 
v_a_676_ = lean_ctor_get(v___x_660_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_660_);
if (v_isSharedCheck_683_ == 0)
{
v___x_678_ = v___x_660_;
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_a_676_);
lean_dec(v___x_660_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_683_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___x_681_; 
if (v_isShared_679_ == 0)
{
v___x_681_ = v___x_678_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v_a_676_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
v___jp_645_:
{
lean_object* v___x_656_; 
lean_inc(v_head_642_);
v___x_656_ = l_Lean_Meta_Grind_addCongrTable(v_head_642_, v___y_646_, v___y_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_);
if (lean_obj_tag(v___x_656_) == 0)
{
lean_dec_ref_known(v___x_656_, 1);
v_as_x27_628_ = v_tail_643_;
v_b_629_ = v___x_644_;
goto _start;
}
else
{
return v___x_656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg___boxed(lean_object* v_as_x27_684_, lean_object* v_b_685_, lean_object* v___y_686_, lean_object* v___y_687_, lean_object* v___y_688_, lean_object* v___y_689_, lean_object* v___y_690_, lean_object* v___y_691_, lean_object* v___y_692_, lean_object* v___y_693_, lean_object* v___y_694_, lean_object* v___y_695_, lean_object* v___y_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v_as_x27_684_, v_b_685_, v___y_686_, v___y_687_, v___y_688_, v___y_689_, v___y_690_, v___y_691_, v___y_692_, v___y_693_, v___y_694_, v___y_695_);
lean_dec(v___y_695_);
lean_dec_ref(v___y_694_);
lean_dec(v___y_693_);
lean_dec_ref(v___y_692_);
lean_dec(v___y_691_);
lean_dec_ref(v___y_690_);
lean_dec(v___y_689_);
lean_dec_ref(v___y_688_);
lean_dec(v___y_687_);
lean_dec(v___y_686_);
lean_dec(v_as_x27_684_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(lean_object* v_parents_698_, lean_object* v_a_699_, lean_object* v_a_700_, lean_object* v_a_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; 
v___x_710_ = l_Lean_Meta_Grind_ParentSet_elems(v_parents_698_);
v___x_711_ = lean_box(0);
v___x_712_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v___x_710_, v___x_711_, v_a_699_, v_a_700_, v_a_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_, v_a_707_, v_a_708_);
lean_dec(v___x_710_);
if (lean_obj_tag(v___x_712_) == 0)
{
lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_712_);
if (v_isSharedCheck_719_ == 0)
{
lean_object* v_unused_720_; 
v_unused_720_ = lean_ctor_get(v___x_712_, 0);
lean_dec(v_unused_720_);
v___x_714_ = v___x_712_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_dec(v___x_712_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
lean_ctor_set(v___x_714_, 0, v___x_711_);
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v___x_711_);
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
return v___x_712_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents___boxed(lean_object* v_parents_721_, lean_object* v_a_722_, lean_object* v_a_723_, lean_object* v_a_724_, lean_object* v_a_725_, lean_object* v_a_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(v_parents_721_, v_a_722_, v_a_723_, v_a_724_, v_a_725_, v_a_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
lean_dec(v_a_727_);
lean_dec_ref(v_a_726_);
lean_dec(v_a_725_);
lean_dec_ref(v_a_724_);
lean_dec(v_a_723_);
lean_dec(v_a_722_);
lean_dec(v_parents_721_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(lean_object* v_as_734_, lean_object* v_as_x27_735_, lean_object* v_b_736_, lean_object* v_a_737_, lean_object* v___y_738_, lean_object* v___y_739_, lean_object* v___y_740_, lean_object* v___y_741_, lean_object* v___y_742_, lean_object* v___y_743_, lean_object* v___y_744_, lean_object* v___y_745_, lean_object* v___y_746_, lean_object* v___y_747_){
_start:
{
lean_object* v___x_749_; 
v___x_749_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___redArg(v_as_x27_735_, v_b_736_, v___y_738_, v___y_739_, v___y_740_, v___y_741_, v___y_742_, v___y_743_, v___y_744_, v___y_745_, v___y_746_, v___y_747_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0___boxed(lean_object* v_as_750_, lean_object* v_as_x27_751_, lean_object* v_b_752_, lean_object* v_a_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_){
_start:
{
lean_object* v_res_765_; 
v_res_765_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents_spec__0(v_as_750_, v_as_x27_751_, v_b_752_, v_a_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_, v___y_763_);
lean_dec(v___y_763_);
lean_dec_ref(v___y_762_);
lean_dec(v___y_761_);
lean_dec_ref(v___y_760_);
lean_dec(v___y_759_);
lean_dec_ref(v___y_758_);
lean_dec(v___y_757_);
lean_dec_ref(v___y_756_);
lean_dec(v___y_755_);
lean_dec(v___y_754_);
lean_dec(v_as_x27_751_);
lean_dec(v_as_750_);
return v_res_765_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_keys_766_, lean_object* v_i_767_, lean_object* v_k_768_){
_start:
{
lean_object* v___x_769_; uint8_t v___x_770_; 
v___x_769_ = lean_array_get_size(v_keys_766_);
v___x_770_ = lean_nat_dec_lt(v_i_767_, v___x_769_);
if (v___x_770_ == 0)
{
lean_dec(v_i_767_);
return v___x_770_;
}
else
{
lean_object* v_k_x27_771_; uint8_t v___x_772_; 
v_k_x27_771_ = lean_array_fget_borrowed(v_keys_766_, v_i_767_);
v___x_772_ = l_Lean_instBEqMVarId_beq(v_k_768_, v_k_x27_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_773_; lean_object* v___x_774_; 
v___x_773_ = lean_unsigned_to_nat(1u);
v___x_774_ = lean_nat_add(v_i_767_, v___x_773_);
lean_dec(v_i_767_);
v_i_767_ = v___x_774_;
goto _start;
}
else
{
lean_dec(v_i_767_);
return v___x_770_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_keys_776_, lean_object* v_i_777_, lean_object* v_k_778_){
_start:
{
uint8_t v_res_779_; lean_object* v_r_780_; 
v_res_779_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_776_, v_i_777_, v_k_778_);
lean_dec(v_k_778_);
lean_dec_ref(v_keys_776_);
v_r_780_ = lean_box(v_res_779_);
return v_r_780_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(lean_object* v_x_781_, size_t v_x_782_, lean_object* v_x_783_){
_start:
{
if (lean_obj_tag(v_x_781_) == 0)
{
lean_object* v_es_784_; lean_object* v___x_785_; size_t v___x_786_; size_t v___x_787_; lean_object* v_j_788_; lean_object* v___x_789_; 
v_es_784_ = lean_ctor_get(v_x_781_, 0);
v___x_785_ = lean_box(2);
v___x_786_ = ((size_t)31ULL);
v___x_787_ = lean_usize_land(v_x_782_, v___x_786_);
v_j_788_ = lean_usize_to_nat(v___x_787_);
v___x_789_ = lean_array_get_borrowed(v___x_785_, v_es_784_, v_j_788_);
lean_dec(v_j_788_);
switch(lean_obj_tag(v___x_789_))
{
case 0:
{
lean_object* v_key_790_; uint8_t v___x_791_; 
v_key_790_ = lean_ctor_get(v___x_789_, 0);
v___x_791_ = l_Lean_instBEqMVarId_beq(v_x_783_, v_key_790_);
return v___x_791_;
}
case 1:
{
lean_object* v_node_792_; size_t v___x_793_; size_t v___x_794_; 
v_node_792_ = lean_ctor_get(v___x_789_, 0);
v___x_793_ = ((size_t)5ULL);
v___x_794_ = lean_usize_shift_right(v_x_782_, v___x_793_);
v_x_781_ = v_node_792_;
v_x_782_ = v___x_794_;
goto _start;
}
default: 
{
uint8_t v___x_796_; 
v___x_796_ = 0;
return v___x_796_;
}
}
}
else
{
lean_object* v_ks_797_; lean_object* v___x_798_; uint8_t v___x_799_; 
v_ks_797_ = lean_ctor_get(v_x_781_, 0);
v___x_798_ = lean_unsigned_to_nat(0u);
v___x_799_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_ks_797_, v___x_798_, v_x_783_);
return v___x_799_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_800_, lean_object* v_x_801_, lean_object* v_x_802_){
_start:
{
size_t v_x_10112__boxed_803_; uint8_t v_res_804_; lean_object* v_r_805_; 
v_x_10112__boxed_803_ = lean_unbox_usize(v_x_801_);
lean_dec(v_x_801_);
v_res_804_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_800_, v_x_10112__boxed_803_, v_x_802_);
lean_dec(v_x_802_);
lean_dec_ref(v_x_800_);
v_r_805_ = lean_box(v_res_804_);
return v_r_805_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(lean_object* v_x_806_, lean_object* v_x_807_){
_start:
{
uint64_t v___x_808_; size_t v___x_809_; uint8_t v___x_810_; 
v___x_808_ = l_Lean_instHashableMVarId_hash(v_x_807_);
v___x_809_ = lean_uint64_to_usize(v___x_808_);
v___x_810_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_806_, v___x_809_, v_x_807_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg___boxed(lean_object* v_x_811_, lean_object* v_x_812_){
_start:
{
uint8_t v_res_813_; lean_object* v_r_814_; 
v_res_813_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_x_811_, v_x_812_);
lean_dec(v_x_812_);
lean_dec_ref(v_x_811_);
v_r_814_ = lean_box(v_res_813_);
return v_r_814_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(lean_object* v_mvarId_815_, lean_object* v___y_816_){
_start:
{
lean_object* v___x_818_; lean_object* v_mctx_819_; lean_object* v_eAssignment_820_; uint8_t v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; 
v___x_818_ = lean_st_ref_get(v___y_816_);
v_mctx_819_ = lean_ctor_get(v___x_818_, 0);
lean_inc_ref(v_mctx_819_);
lean_dec(v___x_818_);
v_eAssignment_820_ = lean_ctor_get(v_mctx_819_, 8);
lean_inc_ref(v_eAssignment_820_);
lean_dec_ref(v_mctx_819_);
v___x_821_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_eAssignment_820_, v_mvarId_815_);
lean_dec_ref(v_eAssignment_820_);
v___x_822_ = lean_box(v___x_821_);
v___x_823_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_823_, 0, v___x_822_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg___boxed(lean_object* v_mvarId_824_, lean_object* v___y_825_, lean_object* v___y_826_){
_start:
{
lean_object* v_res_827_; 
v_res_827_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_824_, v___y_825_);
lean_dec(v___y_825_);
lean_dec(v_mvarId_824_);
return v_res_827_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4(void){
_start:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v___x_838_; 
v___x_836_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__3));
v___x_837_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__2));
v___x_838_ = l_Lean_mkConst(v___x_837_, v___x_836_);
return v___x_838_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8(void){
_start:
{
lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_844_ = lean_box(0);
v___x_845_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__7));
v___x_846_ = l_Lean_mkConst(v___x_845_, v___x_844_);
return v___x_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(lean_object* v_a_847_, lean_object* v_a_848_, lean_object* v_a_849_, lean_object* v_a_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_, lean_object* v_a_855_, lean_object* v_a_856_){
_start:
{
lean_object* v___x_858_; lean_object* v_mvarId_859_; lean_object* v___x_860_; lean_object* v_a_861_; lean_object* v___x_863_; uint8_t v_isShared_864_; uint8_t v_isSharedCheck_914_; 
v___x_858_ = lean_st_ref_get(v_a_847_);
v_mvarId_859_ = lean_ctor_get(v___x_858_, 1);
lean_inc(v_mvarId_859_);
lean_dec(v___x_858_);
v___x_860_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_859_, v_a_854_);
lean_dec(v_mvarId_859_);
v_a_861_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_914_ == 0)
{
v___x_863_ = v___x_860_;
v_isShared_864_ = v_isSharedCheck_914_;
goto v_resetjp_862_;
}
else
{
lean_inc(v_a_861_);
lean_dec(v___x_860_);
v___x_863_ = lean_box(0);
v_isShared_864_ = v_isSharedCheck_914_;
goto v_resetjp_862_;
}
v_resetjp_862_:
{
uint8_t v___x_865_; 
v___x_865_ = lean_unbox(v_a_861_);
lean_dec(v_a_861_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; 
lean_del_object(v___x_863_);
v___x_866_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_851_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
v___x_868_ = l_Lean_Meta_Grind_mkEqFalseProof(v_a_867_, v_a_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_870_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
v___x_870_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_851_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_851_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_873_);
lean_dec_ref_known(v___x_872_, 1);
v___x_874_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4);
v___x_875_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__8);
v___x_876_ = l_Lean_mkApp4(v___x_874_, v_a_871_, v_a_873_, v_a_869_, v___x_875_);
v___x_877_ = l_Lean_Meta_Grind_closeGoal(v___x_876_, v_a_847_, v_a_848_, v_a_849_, v_a_850_, v_a_851_, v_a_852_, v_a_853_, v_a_854_, v_a_855_, v_a_856_);
return v___x_877_;
}
else
{
lean_object* v_a_878_; lean_object* v___x_880_; uint8_t v_isShared_881_; uint8_t v_isSharedCheck_885_; 
lean_dec(v_a_871_);
lean_dec(v_a_869_);
v_a_878_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_885_ == 0)
{
v___x_880_ = v___x_872_;
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
else
{
lean_inc(v_a_878_);
lean_dec(v___x_872_);
v___x_880_ = lean_box(0);
v_isShared_881_ = v_isSharedCheck_885_;
goto v_resetjp_879_;
}
v_resetjp_879_:
{
lean_object* v___x_883_; 
if (v_isShared_881_ == 0)
{
v___x_883_ = v___x_880_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v_a_878_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
}
else
{
lean_object* v_a_886_; lean_object* v___x_888_; uint8_t v_isShared_889_; uint8_t v_isSharedCheck_893_; 
lean_dec(v_a_869_);
v_a_886_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_893_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_893_ == 0)
{
v___x_888_ = v___x_870_;
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
else
{
lean_inc(v_a_886_);
lean_dec(v___x_870_);
v___x_888_ = lean_box(0);
v_isShared_889_ = v_isSharedCheck_893_;
goto v_resetjp_887_;
}
v_resetjp_887_:
{
lean_object* v___x_891_; 
if (v_isShared_889_ == 0)
{
v___x_891_ = v___x_888_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_892_; 
v_reuseFailAlloc_892_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_892_, 0, v_a_886_);
v___x_891_ = v_reuseFailAlloc_892_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
return v___x_891_;
}
}
}
}
else
{
lean_object* v_a_894_; lean_object* v___x_896_; uint8_t v_isShared_897_; uint8_t v_isSharedCheck_901_; 
v_a_894_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_901_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_901_ == 0)
{
v___x_896_ = v___x_868_;
v_isShared_897_ = v_isSharedCheck_901_;
goto v_resetjp_895_;
}
else
{
lean_inc(v_a_894_);
lean_dec(v___x_868_);
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
lean_object* v_a_902_; lean_object* v___x_904_; uint8_t v_isShared_905_; uint8_t v_isSharedCheck_909_; 
v_a_902_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_909_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_909_ == 0)
{
v___x_904_ = v___x_866_;
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
else
{
lean_inc(v_a_902_);
lean_dec(v___x_866_);
v___x_904_ = lean_box(0);
v_isShared_905_ = v_isSharedCheck_909_;
goto v_resetjp_903_;
}
v_resetjp_903_:
{
lean_object* v___x_907_; 
if (v_isShared_905_ == 0)
{
v___x_907_ = v___x_904_;
goto v_reusejp_906_;
}
else
{
lean_object* v_reuseFailAlloc_908_; 
v_reuseFailAlloc_908_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_908_, 0, v_a_902_);
v___x_907_ = v_reuseFailAlloc_908_;
goto v_reusejp_906_;
}
v_reusejp_906_:
{
return v___x_907_;
}
}
}
}
else
{
lean_object* v___x_910_; lean_object* v___x_912_; 
v___x_910_ = lean_box(0);
if (v_isShared_864_ == 0)
{
lean_ctor_set(v___x_863_, 0, v___x_910_);
v___x_912_ = v___x_863_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v___x_910_);
v___x_912_ = v_reuseFailAlloc_913_;
goto v_reusejp_911_;
}
v_reusejp_911_:
{
return v___x_912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___boxed(lean_object* v_a_915_, lean_object* v_a_916_, lean_object* v_a_917_, lean_object* v_a_918_, lean_object* v_a_919_, lean_object* v_a_920_, lean_object* v_a_921_, lean_object* v_a_922_, lean_object* v_a_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(v_a_915_, v_a_916_, v_a_917_, v_a_918_, v_a_919_, v_a_920_, v_a_921_, v_a_922_, v_a_923_, v_a_924_);
lean_dec(v_a_924_);
lean_dec_ref(v_a_923_);
lean_dec(v_a_922_);
lean_dec_ref(v_a_921_);
lean_dec(v_a_920_);
lean_dec_ref(v_a_919_);
lean_dec(v_a_918_);
lean_dec_ref(v_a_917_);
lean_dec(v_a_916_);
lean_dec(v_a_915_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(lean_object* v_mvarId_927_, lean_object* v___y_928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_){
_start:
{
lean_object* v___x_939_; 
v___x_939_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___redArg(v_mvarId_927_, v___y_935_);
return v___x_939_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0___boxed(lean_object* v_mvarId_940_, lean_object* v___y_941_, lean_object* v___y_942_, lean_object* v___y_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
lean_object* v_res_952_; 
v_res_952_ = l_Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0(v_mvarId_940_, v___y_941_, v___y_942_, v___y_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
lean_dec(v___y_946_);
lean_dec_ref(v___y_945_);
lean_dec(v___y_944_);
lean_dec_ref(v___y_943_);
lean_dec(v___y_942_);
lean_dec(v___y_941_);
lean_dec(v_mvarId_940_);
return v_res_952_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(lean_object* v_00_u03b2_953_, lean_object* v_x_954_, lean_object* v_x_955_){
_start:
{
uint8_t v___x_956_; 
v___x_956_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___redArg(v_x_954_, v_x_955_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0___boxed(lean_object* v_00_u03b2_957_, lean_object* v_x_958_, lean_object* v_x_959_){
_start:
{
uint8_t v_res_960_; lean_object* v_r_961_; 
v_res_960_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0(v_00_u03b2_957_, v_x_958_, v_x_959_);
lean_dec(v_x_959_);
lean_dec_ref(v_x_958_);
v_r_961_ = lean_box(v_res_960_);
return v_r_961_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_962_, lean_object* v_x_963_, size_t v_x_964_, lean_object* v_x_965_){
_start:
{
uint8_t v___x_966_; 
v___x_966_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___redArg(v_x_963_, v_x_964_, v_x_965_);
return v___x_966_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_967_, lean_object* v_x_968_, lean_object* v_x_969_, lean_object* v_x_970_){
_start:
{
size_t v_x_10395__boxed_971_; uint8_t v_res_972_; lean_object* v_r_973_; 
v_x_10395__boxed_971_ = lean_unbox_usize(v_x_969_);
lean_dec(v_x_969_);
v_res_972_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1(v_00_u03b2_967_, v_x_968_, v_x_10395__boxed_971_, v_x_970_);
lean_dec(v_x_970_);
lean_dec_ref(v_x_968_);
v_r_973_ = lean_box(v_res_972_);
return v_r_973_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_974_, lean_object* v_keys_975_, lean_object* v_vals_976_, lean_object* v_heq_977_, lean_object* v_i_978_, lean_object* v_k_979_){
_start:
{
uint8_t v___x_980_; 
v___x_980_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___redArg(v_keys_975_, v_i_978_, v_k_979_);
return v___x_980_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b2_981_, lean_object* v_keys_982_, lean_object* v_vals_983_, lean_object* v_heq_984_, lean_object* v_i_985_, lean_object* v_k_986_){
_start:
{
uint8_t v_res_987_; lean_object* v_r_988_; 
v_res_987_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse_spec__0_spec__0_spec__1_spec__2(v_00_u03b2_981_, v_keys_982_, v_vals_983_, v_heq_984_, v_i_985_, v_k_986_);
lean_dec(v_k_986_);
lean_dec_ref(v_vals_983_);
lean_dec_ref(v_keys_982_);
v_r_988_ = lean_box(v_res_987_);
return v_r_988_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2(void){
_start:
{
lean_object* v___x_992_; lean_object* v___x_993_; lean_object* v___x_994_; 
v___x_992_ = lean_box(0);
v___x_993_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__1));
v___x_994_ = l_Lean_mkConst(v___x_993_, v___x_992_);
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(lean_object* v_lhs_995_, lean_object* v_rhs_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_, lean_object* v_a_1000_, lean_object* v_a_1001_, lean_object* v_a_1002_, lean_object* v_a_1003_, lean_object* v_a_1004_, lean_object* v_a_1005_, lean_object* v_a_1006_){
_start:
{
lean_object* v___x_1008_; 
lean_inc_ref(v_rhs_996_);
lean_inc_ref(v_lhs_995_);
v___x_1008_ = l_Lean_Meta_mkEq(v_lhs_995_, v_rhs_996_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
if (lean_obj_tag(v___x_1008_) == 0)
{
lean_object* v_a_1009_; lean_object* v___x_1010_; 
v_a_1009_ = lean_ctor_get(v___x_1008_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1008_, 1);
lean_inc(v_a_1006_);
lean_inc_ref(v_a_1005_);
lean_inc(v_a_1004_);
lean_inc_ref(v_a_1003_);
lean_inc(v_a_1002_);
lean_inc_ref(v_a_1001_);
lean_inc(v_a_1000_);
lean_inc_ref(v_a_999_);
lean_inc(v_a_998_);
lean_inc(v_a_997_);
v___x_1010_ = lean_grind_mk_eq_proof(v_lhs_995_, v_rhs_996_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
if (lean_obj_tag(v___x_1010_) == 0)
{
lean_object* v_a_1011_; lean_object* v___x_1012_; 
v_a_1011_ = lean_ctor_get(v___x_1010_, 0);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1010_, 1);
lean_inc(v_a_1009_);
v___x_1012_ = l_Lean_Meta_mkDecide(v_a_1009_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
if (lean_obj_tag(v___x_1012_) == 0)
{
lean_object* v_a_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; lean_object* v___x_1016_; lean_object* v___x_1017_; lean_object* v___x_1018_; 
v_a_1013_ = lean_ctor_get(v___x_1012_, 0);
lean_inc(v_a_1013_);
lean_dec_ref_known(v___x_1012_, 1);
v___x_1014_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___closed__2);
v___x_1015_ = l_Lean_Expr_appArg_x21(v_a_1013_);
lean_dec(v_a_1013_);
v___x_1016_ = l_Lean_eagerReflBoolFalse;
lean_inc(v_a_1009_);
v___x_1017_ = l_Lean_mkApp3(v___x_1014_, v_a_1009_, v___x_1015_, v___x_1016_);
v___x_1018_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_1001_);
if (lean_obj_tag(v___x_1018_) == 0)
{
lean_object* v_a_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; 
v_a_1019_ = lean_ctor_get(v___x_1018_, 0);
lean_inc(v_a_1019_);
lean_dec_ref_known(v___x_1018_, 1);
v___x_1020_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse___closed__4);
v___x_1021_ = l_Lean_mkApp4(v___x_1020_, v_a_1009_, v_a_1019_, v___x_1017_, v_a_1011_);
v___x_1022_ = l_Lean_Meta_Grind_closeGoal(v___x_1021_, v_a_997_, v_a_998_, v_a_999_, v_a_1000_, v_a_1001_, v_a_1002_, v_a_1003_, v_a_1004_, v_a_1005_, v_a_1006_);
return v___x_1022_;
}
else
{
lean_object* v_a_1023_; lean_object* v___x_1025_; uint8_t v_isShared_1026_; uint8_t v_isSharedCheck_1030_; 
lean_dec_ref(v___x_1017_);
lean_dec(v_a_1011_);
lean_dec(v_a_1009_);
v_a_1023_ = lean_ctor_get(v___x_1018_, 0);
v_isSharedCheck_1030_ = !lean_is_exclusive(v___x_1018_);
if (v_isSharedCheck_1030_ == 0)
{
v___x_1025_ = v___x_1018_;
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
else
{
lean_inc(v_a_1023_);
lean_dec(v___x_1018_);
v___x_1025_ = lean_box(0);
v_isShared_1026_ = v_isSharedCheck_1030_;
goto v_resetjp_1024_;
}
v_resetjp_1024_:
{
lean_object* v___x_1028_; 
if (v_isShared_1026_ == 0)
{
v___x_1028_ = v___x_1025_;
goto v_reusejp_1027_;
}
else
{
lean_object* v_reuseFailAlloc_1029_; 
v_reuseFailAlloc_1029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1029_, 0, v_a_1023_);
v___x_1028_ = v_reuseFailAlloc_1029_;
goto v_reusejp_1027_;
}
v_reusejp_1027_:
{
return v___x_1028_;
}
}
}
}
else
{
lean_object* v_a_1031_; lean_object* v___x_1033_; uint8_t v_isShared_1034_; uint8_t v_isSharedCheck_1038_; 
lean_dec(v_a_1011_);
lean_dec(v_a_1009_);
v_a_1031_ = lean_ctor_get(v___x_1012_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_1012_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_1033_ = v___x_1012_;
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
else
{
lean_inc(v_a_1031_);
lean_dec(v___x_1012_);
v___x_1033_ = lean_box(0);
v_isShared_1034_ = v_isSharedCheck_1038_;
goto v_resetjp_1032_;
}
v_resetjp_1032_:
{
lean_object* v___x_1036_; 
if (v_isShared_1034_ == 0)
{
v___x_1036_ = v___x_1033_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v_a_1031_);
v___x_1036_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1035_;
}
v_reusejp_1035_:
{
return v___x_1036_;
}
}
}
}
else
{
lean_object* v_a_1039_; lean_object* v___x_1041_; uint8_t v_isShared_1042_; uint8_t v_isSharedCheck_1046_; 
lean_dec(v_a_1009_);
v_a_1039_ = lean_ctor_get(v___x_1010_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_1010_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_1010_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_1010_);
v___x_1041_ = lean_box(0);
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
v_resetjp_1040_:
{
lean_object* v___x_1044_; 
if (v_isShared_1042_ == 0)
{
v___x_1044_ = v___x_1041_;
goto v_reusejp_1043_;
}
else
{
lean_object* v_reuseFailAlloc_1045_; 
v_reuseFailAlloc_1045_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1045_, 0, v_a_1039_);
v___x_1044_ = v_reuseFailAlloc_1045_;
goto v_reusejp_1043_;
}
v_reusejp_1043_:
{
return v___x_1044_;
}
}
}
}
else
{
lean_object* v_a_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1054_; 
lean_dec_ref(v_rhs_996_);
lean_dec_ref(v_lhs_995_);
v_a_1047_ = lean_ctor_get(v___x_1008_, 0);
v_isSharedCheck_1054_ = !lean_is_exclusive(v___x_1008_);
if (v_isSharedCheck_1054_ == 0)
{
v___x_1049_ = v___x_1008_;
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_a_1047_);
lean_dec(v___x_1008_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1054_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v___x_1052_; 
if (v_isShared_1050_ == 0)
{
v___x_1052_ = v___x_1049_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1053_; 
v_reuseFailAlloc_1053_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1053_, 0, v_a_1047_);
v___x_1052_ = v_reuseFailAlloc_1053_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
return v___x_1052_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq___boxed(lean_object* v_lhs_1055_, lean_object* v_rhs_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_, lean_object* v_a_1060_, lean_object* v_a_1061_, lean_object* v_a_1062_, lean_object* v_a_1063_, lean_object* v_a_1064_, lean_object* v_a_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_){
_start:
{
lean_object* v_res_1068_; 
v_res_1068_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(v_lhs_1055_, v_rhs_1056_, v_a_1057_, v_a_1058_, v_a_1059_, v_a_1060_, v_a_1061_, v_a_1062_, v_a_1063_, v_a_1064_, v_a_1065_, v_a_1066_);
lean_dec(v_a_1066_);
lean_dec_ref(v_a_1065_);
lean_dec(v_a_1064_);
lean_dec_ref(v_a_1063_);
lean_dec(v_a_1062_);
lean_dec_ref(v_a_1061_);
lean_dec(v_a_1060_);
lean_dec_ref(v_a_1059_);
lean_dec(v_a_1058_);
lean_dec(v_a_1057_);
return v_res_1068_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(lean_object* v___x_1069_, lean_object* v_as_x27_1070_, lean_object* v_b_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_){
_start:
{
if (lean_obj_tag(v_as_x27_1070_) == 0)
{
lean_object* v___x_1083_; 
lean_dec(v___x_1069_);
v___x_1083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1083_, 0, v_b_1071_);
return v___x_1083_;
}
else
{
lean_object* v_head_1084_; lean_object* v_tail_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; 
v_head_1084_ = lean_ctor_get(v_as_x27_1070_, 0);
v_tail_1085_ = lean_ctor_get(v_as_x27_1070_, 1);
v___x_1086_ = lean_box(0);
v___x_1087_ = lean_st_ref_get(v___y_1072_);
lean_inc(v_head_1084_);
v___x_1088_ = l_Lean_Meta_Grind_Goal_getENode(v___x_1087_, v_head_1084_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec(v___x_1087_);
if (lean_obj_tag(v___x_1088_) == 0)
{
lean_object* v_a_1089_; lean_object* v_self_1090_; lean_object* v_next_1091_; lean_object* v_root_1092_; lean_object* v_congr_1093_; lean_object* v_target_x3f_1094_; lean_object* v_proof_x3f_1095_; uint8_t v_flipped_1096_; lean_object* v_size_1097_; uint8_t v_interpreted_1098_; uint8_t v_ctor_1099_; uint8_t v_hasLambdas_1100_; uint8_t v_heqProofs_1101_; lean_object* v_idx_1102_; lean_object* v_generation_1103_; lean_object* v_mt_1104_; lean_object* v_sTerms_1105_; uint8_t v_funCC_1106_; lean_object* v_ematchDiagSource_1107_; lean_object* v___x_1109_; uint8_t v_isShared_1110_; uint8_t v_isSharedCheck_1119_; 
v_a_1089_ = lean_ctor_get(v___x_1088_, 0);
lean_inc(v_a_1089_);
lean_dec_ref_known(v___x_1088_, 1);
v_self_1090_ = lean_ctor_get(v_a_1089_, 0);
v_next_1091_ = lean_ctor_get(v_a_1089_, 1);
v_root_1092_ = lean_ctor_get(v_a_1089_, 2);
v_congr_1093_ = lean_ctor_get(v_a_1089_, 3);
v_target_x3f_1094_ = lean_ctor_get(v_a_1089_, 4);
v_proof_x3f_1095_ = lean_ctor_get(v_a_1089_, 5);
v_flipped_1096_ = lean_ctor_get_uint8(v_a_1089_, sizeof(void*)*12);
v_size_1097_ = lean_ctor_get(v_a_1089_, 6);
v_interpreted_1098_ = lean_ctor_get_uint8(v_a_1089_, sizeof(void*)*12 + 1);
v_ctor_1099_ = lean_ctor_get_uint8(v_a_1089_, sizeof(void*)*12 + 2);
v_hasLambdas_1100_ = lean_ctor_get_uint8(v_a_1089_, sizeof(void*)*12 + 3);
v_heqProofs_1101_ = lean_ctor_get_uint8(v_a_1089_, sizeof(void*)*12 + 4);
v_idx_1102_ = lean_ctor_get(v_a_1089_, 7);
v_generation_1103_ = lean_ctor_get(v_a_1089_, 8);
v_mt_1104_ = lean_ctor_get(v_a_1089_, 9);
v_sTerms_1105_ = lean_ctor_get(v_a_1089_, 10);
v_funCC_1106_ = lean_ctor_get_uint8(v_a_1089_, sizeof(void*)*12 + 5);
v_ematchDiagSource_1107_ = lean_ctor_get(v_a_1089_, 11);
v_isSharedCheck_1119_ = !lean_is_exclusive(v_a_1089_);
if (v_isSharedCheck_1119_ == 0)
{
v___x_1109_ = v_a_1089_;
v_isShared_1110_ = v_isSharedCheck_1119_;
goto v_resetjp_1108_;
}
else
{
lean_inc(v_ematchDiagSource_1107_);
lean_inc(v_sTerms_1105_);
lean_inc(v_mt_1104_);
lean_inc(v_generation_1103_);
lean_inc(v_idx_1102_);
lean_inc(v_size_1097_);
lean_inc(v_proof_x3f_1095_);
lean_inc(v_target_x3f_1094_);
lean_inc(v_congr_1093_);
lean_inc(v_root_1092_);
lean_inc(v_next_1091_);
lean_inc(v_self_1090_);
lean_dec(v_a_1089_);
v___x_1109_ = lean_box(0);
v_isShared_1110_ = v_isSharedCheck_1119_;
goto v_resetjp_1108_;
}
v_resetjp_1108_:
{
uint8_t v___x_1111_; 
v___x_1111_ = lean_nat_dec_lt(v_mt_1104_, v___x_1069_);
lean_dec(v_mt_1104_);
if (v___x_1111_ == 0)
{
lean_del_object(v___x_1109_);
lean_dec(v_ematchDiagSource_1107_);
lean_dec(v_sTerms_1105_);
lean_dec(v_generation_1103_);
lean_dec(v_idx_1102_);
lean_dec(v_size_1097_);
lean_dec(v_proof_x3f_1095_);
lean_dec(v_target_x3f_1094_);
lean_dec_ref(v_congr_1093_);
lean_dec_ref(v_root_1092_);
lean_dec_ref(v_next_1091_);
lean_dec_ref(v_self_1090_);
v_as_x27_1070_ = v_tail_1085_;
v_b_1071_ = v___x_1086_;
goto _start;
}
else
{
lean_object* v___x_1114_; 
lean_inc(v___x_1069_);
if (v_isShared_1110_ == 0)
{
lean_ctor_set(v___x_1109_, 9, v___x_1069_);
v___x_1114_ = v___x_1109_;
goto v_reusejp_1113_;
}
else
{
lean_object* v_reuseFailAlloc_1118_; 
v_reuseFailAlloc_1118_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_1118_, 0, v_self_1090_);
lean_ctor_set(v_reuseFailAlloc_1118_, 1, v_next_1091_);
lean_ctor_set(v_reuseFailAlloc_1118_, 2, v_root_1092_);
lean_ctor_set(v_reuseFailAlloc_1118_, 3, v_congr_1093_);
lean_ctor_set(v_reuseFailAlloc_1118_, 4, v_target_x3f_1094_);
lean_ctor_set(v_reuseFailAlloc_1118_, 5, v_proof_x3f_1095_);
lean_ctor_set(v_reuseFailAlloc_1118_, 6, v_size_1097_);
lean_ctor_set(v_reuseFailAlloc_1118_, 7, v_idx_1102_);
lean_ctor_set(v_reuseFailAlloc_1118_, 8, v_generation_1103_);
lean_ctor_set(v_reuseFailAlloc_1118_, 9, v___x_1069_);
lean_ctor_set(v_reuseFailAlloc_1118_, 10, v_sTerms_1105_);
lean_ctor_set(v_reuseFailAlloc_1118_, 11, v_ematchDiagSource_1107_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*12, v_flipped_1096_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*12 + 1, v_interpreted_1098_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*12 + 2, v_ctor_1099_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*12 + 3, v_hasLambdas_1100_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*12 + 4, v_heqProofs_1101_);
lean_ctor_set_uint8(v_reuseFailAlloc_1118_, sizeof(void*)*12 + 5, v_funCC_1106_);
v___x_1114_ = v_reuseFailAlloc_1118_;
goto v_reusejp_1113_;
}
v_reusejp_1113_:
{
lean_object* v___x_1115_; 
lean_inc(v_head_1084_);
v___x_1115_ = l_Lean_Meta_Grind_setENode___redArg(v_head_1084_, v___x_1114_, v___y_1072_);
if (lean_obj_tag(v___x_1115_) == 0)
{
lean_object* v___x_1116_; 
lean_dec_ref_known(v___x_1115_, 1);
v___x_1116_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v_head_1084_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
if (lean_obj_tag(v___x_1116_) == 0)
{
lean_dec_ref_known(v___x_1116_, 1);
v_as_x27_1070_ = v_tail_1085_;
v_b_1071_ = v___x_1086_;
goto _start;
}
else
{
lean_dec(v___x_1069_);
return v___x_1116_;
}
}
else
{
lean_dec(v___x_1069_);
return v___x_1115_;
}
}
}
}
}
else
{
lean_object* v_a_1120_; lean_object* v___x_1122_; uint8_t v_isShared_1123_; uint8_t v_isSharedCheck_1127_; 
lean_dec(v___x_1069_);
v_a_1120_ = lean_ctor_get(v___x_1088_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1088_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1122_ = v___x_1088_;
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
else
{
lean_inc(v_a_1120_);
lean_dec(v___x_1088_);
v___x_1122_ = lean_box(0);
v_isShared_1123_ = v_isSharedCheck_1127_;
goto v_resetjp_1121_;
}
v_resetjp_1121_:
{
lean_object* v___x_1125_; 
if (v_isShared_1123_ == 0)
{
v___x_1125_ = v___x_1122_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_a_1120_);
v___x_1125_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
return v___x_1125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(lean_object* v_root_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_, lean_object* v_a_1134_, lean_object* v_a_1135_, lean_object* v_a_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v___x_1140_; lean_object* v_toGoalState_1141_; lean_object* v_ematch_1142_; lean_object* v_gmt_1143_; lean_object* v___x_1144_; 
v___x_1140_ = lean_st_ref_get(v_a_1129_);
v_toGoalState_1141_ = lean_ctor_get(v___x_1140_, 0);
lean_inc_ref(v_toGoalState_1141_);
lean_dec(v___x_1140_);
v_ematch_1142_ = lean_ctor_get(v_toGoalState_1141_, 14);
lean_inc_ref(v_ematch_1142_);
lean_dec_ref(v_toGoalState_1141_);
v_gmt_1143_ = lean_ctor_get(v_ematch_1142_, 1);
lean_inc(v_gmt_1143_);
lean_dec_ref(v_ematch_1142_);
v___x_1144_ = l_Lean_Meta_Grind_getParents___redArg(v_root_1128_, v_a_1129_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
v___x_1146_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1145_);
lean_dec(v_a_1145_);
v___x_1147_ = lean_box(0);
v___x_1148_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v_gmt_1143_, v___x_1146_, v___x_1147_, v_a_1129_, v_a_1130_, v_a_1131_, v_a_1132_, v_a_1133_, v_a_1134_, v_a_1135_, v_a_1136_, v_a_1137_, v_a_1138_);
lean_dec(v___x_1146_);
if (lean_obj_tag(v___x_1148_) == 0)
{
lean_object* v___x_1150_; uint8_t v_isShared_1151_; uint8_t v_isSharedCheck_1155_; 
v_isSharedCheck_1155_ = !lean_is_exclusive(v___x_1148_);
if (v_isSharedCheck_1155_ == 0)
{
lean_object* v_unused_1156_; 
v_unused_1156_ = lean_ctor_get(v___x_1148_, 0);
lean_dec(v_unused_1156_);
v___x_1150_ = v___x_1148_;
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
else
{
lean_dec(v___x_1148_);
v___x_1150_ = lean_box(0);
v_isShared_1151_ = v_isSharedCheck_1155_;
goto v_resetjp_1149_;
}
v_resetjp_1149_:
{
lean_object* v___x_1153_; 
if (v_isShared_1151_ == 0)
{
lean_ctor_set(v___x_1150_, 0, v___x_1147_);
v___x_1153_ = v___x_1150_;
goto v_reusejp_1152_;
}
else
{
lean_object* v_reuseFailAlloc_1154_; 
v_reuseFailAlloc_1154_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1154_, 0, v___x_1147_);
v___x_1153_ = v_reuseFailAlloc_1154_;
goto v_reusejp_1152_;
}
v_reusejp_1152_:
{
return v___x_1153_;
}
}
}
else
{
return v___x_1148_;
}
}
else
{
lean_object* v_a_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1164_; 
lean_dec(v_gmt_1143_);
v_a_1157_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1164_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1164_ == 0)
{
v___x_1159_ = v___x_1144_;
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_a_1157_);
lean_dec(v___x_1144_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1164_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v___x_1162_; 
if (v_isShared_1160_ == 0)
{
v___x_1162_ = v___x_1159_;
goto v_reusejp_1161_;
}
else
{
lean_object* v_reuseFailAlloc_1163_; 
v_reuseFailAlloc_1163_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1163_, 0, v_a_1157_);
v___x_1162_ = v_reuseFailAlloc_1163_;
goto v_reusejp_1161_;
}
v_reusejp_1161_:
{
return v___x_1162_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT___boxed(lean_object* v_root_1165_, lean_object* v_a_1166_, lean_object* v_a_1167_, lean_object* v_a_1168_, lean_object* v_a_1169_, lean_object* v_a_1170_, lean_object* v_a_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_){
_start:
{
lean_object* v_res_1177_; 
v_res_1177_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v_root_1165_, v_a_1166_, v_a_1167_, v_a_1168_, v_a_1169_, v_a_1170_, v_a_1171_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_);
lean_dec(v_a_1175_);
lean_dec_ref(v_a_1174_);
lean_dec(v_a_1173_);
lean_dec_ref(v_a_1172_);
lean_dec(v_a_1171_);
lean_dec_ref(v_a_1170_);
lean_dec(v_a_1169_);
lean_dec_ref(v_a_1168_);
lean_dec(v_a_1167_);
lean_dec(v_a_1166_);
lean_dec_ref(v_root_1165_);
return v_res_1177_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg___boxed(lean_object* v___x_1178_, lean_object* v_as_x27_1179_, lean_object* v_b_1180_, lean_object* v___y_1181_, lean_object* v___y_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_){
_start:
{
lean_object* v_res_1192_; 
v_res_1192_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v___x_1178_, v_as_x27_1179_, v_b_1180_, v___y_1181_, v___y_1182_, v___y_1183_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_, v___y_1189_, v___y_1190_);
lean_dec(v___y_1190_);
lean_dec_ref(v___y_1189_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
lean_dec_ref(v___y_1183_);
lean_dec(v___y_1182_);
lean_dec(v___y_1181_);
lean_dec(v_as_x27_1179_);
return v_res_1192_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(lean_object* v___x_1193_, lean_object* v_as_1194_, lean_object* v_as_x27_1195_, lean_object* v_b_1196_, lean_object* v_a_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_, lean_object* v___y_1201_, lean_object* v___y_1202_, lean_object* v___y_1203_, lean_object* v___y_1204_, lean_object* v___y_1205_, lean_object* v___y_1206_, lean_object* v___y_1207_){
_start:
{
lean_object* v___x_1209_; 
v___x_1209_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___redArg(v___x_1193_, v_as_x27_1195_, v_b_1196_, v___y_1198_, v___y_1199_, v___y_1200_, v___y_1201_, v___y_1202_, v___y_1203_, v___y_1204_, v___y_1205_, v___y_1206_, v___y_1207_);
return v___x_1209_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0___boxed(lean_object* v___x_1210_, lean_object* v_as_1211_, lean_object* v_as_x27_1212_, lean_object* v_b_1213_, lean_object* v_a_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_, lean_object* v___y_1220_, lean_object* v___y_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT_spec__0(v___x_1210_, v_as_1211_, v_as_x27_1212_, v_b_1213_, v_a_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_, v___y_1220_, v___y_1221_, v___y_1222_, v___y_1223_, v___y_1224_);
lean_dec(v___y_1224_);
lean_dec_ref(v___y_1223_);
lean_dec(v___y_1222_);
lean_dec_ref(v___y_1221_);
lean_dec(v___y_1220_);
lean_dec_ref(v___y_1219_);
lean_dec(v___y_1218_);
lean_dec_ref(v___y_1217_);
lean_dec(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec(v_as_x27_1212_);
lean_dec(v_as_1211_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
if (lean_obj_tag(v_a_1227_) == 0)
{
lean_object* v___x_1229_; 
v___x_1229_ = l_List_reverse___redArg(v_a_1228_);
return v___x_1229_;
}
else
{
lean_object* v_head_1230_; lean_object* v_tail_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1240_; 
v_head_1230_ = lean_ctor_get(v_a_1227_, 0);
v_tail_1231_ = lean_ctor_get(v_a_1227_, 1);
v_isSharedCheck_1240_ = !lean_is_exclusive(v_a_1227_);
if (v_isSharedCheck_1240_ == 0)
{
v___x_1233_ = v_a_1227_;
v_isShared_1234_ = v_isSharedCheck_1240_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_tail_1231_);
lean_inc(v_head_1230_);
lean_dec(v_a_1227_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1240_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1237_; 
v___x_1235_ = l_Lean_MessageData_ofExpr(v_head_1230_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v_a_1228_);
lean_ctor_set(v___x_1233_, 0, v___x_1235_);
v___x_1237_ = v___x_1233_;
goto v_reusejp_1236_;
}
else
{
lean_object* v_reuseFailAlloc_1239_; 
v_reuseFailAlloc_1239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1239_, 0, v___x_1235_);
lean_ctor_set(v_reuseFailAlloc_1239_, 1, v_a_1228_);
v___x_1237_ = v_reuseFailAlloc_1239_;
goto v_reusejp_1236_;
}
v_reusejp_1236_:
{
v_a_1227_ = v_tail_1231_;
v_a_1228_ = v___x_1237_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(lean_object* v_snd_1241_, lean_object* v_a_1242_, lean_object* v_fst_1243_, lean_object* v_a_1244_, lean_object* v_lams_1245_, lean_object* v_____r_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_, lean_object* v___y_1253_, lean_object* v___y_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_){
_start:
{
lean_object* v___x_1295_; 
v___x_1295_ = l_Lean_Meta_Grind_isEqv___redArg(v_snd_1241_, v_a_1244_, v___y_1247_);
if (lean_obj_tag(v___x_1295_) == 0)
{
lean_object* v_a_1296_; uint8_t v___x_1297_; 
v_a_1296_ = lean_ctor_get(v___x_1295_, 0);
lean_inc(v_a_1296_);
lean_dec_ref_known(v___x_1295_, 1);
v___x_1297_ = lean_unbox(v_a_1296_);
lean_dec(v_a_1296_);
if (v___x_1297_ == 0)
{
goto v___jp_1258_;
}
else
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_inc(v_fst_1243_);
v___x_1298_ = l_Array_reverse___redArg(v_fst_1243_);
lean_inc(v_snd_1241_);
v___x_1299_ = l_Lean_Meta_Grind_propagateBetaEqs(v_lams_1245_, v_snd_1241_, v___x_1298_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1299_) == 0)
{
lean_dec_ref_known(v___x_1299_, 1);
goto v___jp_1258_;
}
else
{
lean_object* v_a_1300_; lean_object* v___x_1302_; uint8_t v_isShared_1303_; uint8_t v_isSharedCheck_1307_; 
lean_dec(v_fst_1243_);
lean_dec(v_snd_1241_);
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
else
{
lean_object* v_a_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1315_; 
lean_dec(v_fst_1243_);
lean_dec(v_snd_1241_);
v_a_1308_ = lean_ctor_get(v___x_1295_, 0);
v_isSharedCheck_1315_ = !lean_is_exclusive(v___x_1295_);
if (v_isSharedCheck_1315_ == 0)
{
v___x_1310_ = v___x_1295_;
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_a_1308_);
lean_dec(v___x_1295_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1315_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1313_; 
if (v_isShared_1311_ == 0)
{
v___x_1313_ = v___x_1310_;
goto v_reusejp_1312_;
}
else
{
lean_object* v_reuseFailAlloc_1314_; 
v_reuseFailAlloc_1314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1314_, 0, v_a_1308_);
v___x_1313_ = v_reuseFailAlloc_1314_;
goto v_reusejp_1312_;
}
v_reusejp_1312_:
{
return v___x_1313_;
}
}
}
v___jp_1258_:
{
if (lean_obj_tag(v_snd_1241_) == 5)
{
lean_object* v_fn_1259_; lean_object* v_arg_1260_; lean_object* v___x_1261_; 
v_fn_1259_ = lean_ctor_get(v_snd_1241_, 0);
lean_inc_ref(v_fn_1259_);
v_arg_1260_ = lean_ctor_get(v_snd_1241_, 1);
lean_inc_ref(v_arg_1260_);
v___x_1261_ = l_Lean_Meta_Grind_getGeneration___redArg(v_a_1242_, v___y_1247_);
if (lean_obj_tag(v___x_1261_) == 0)
{
lean_object* v_a_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; 
v_a_1262_ = lean_ctor_get(v___x_1261_, 0);
lean_inc(v_a_1262_);
lean_dec_ref_known(v___x_1261_, 1);
v___x_1263_ = lean_box(0);
lean_inc(v___y_1256_);
lean_inc_ref(v___y_1255_);
lean_inc(v___y_1254_);
lean_inc_ref(v___y_1253_);
lean_inc(v___y_1252_);
lean_inc_ref(v___y_1251_);
lean_inc(v___y_1250_);
lean_inc_ref(v___y_1249_);
lean_inc(v___y_1248_);
lean_inc(v___y_1247_);
v___x_1264_ = lean_grind_internalize(v_snd_1241_, v_a_1262_, v___x_1263_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_, v___y_1253_, v___y_1254_, v___y_1255_, v___y_1256_);
if (lean_obj_tag(v___x_1264_) == 0)
{
lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1274_; 
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1274_ == 0)
{
lean_object* v_unused_1275_; 
v_unused_1275_ = lean_ctor_get(v___x_1264_, 0);
lean_dec(v_unused_1275_);
v___x_1266_ = v___x_1264_;
v_isShared_1267_ = v_isSharedCheck_1274_;
goto v_resetjp_1265_;
}
else
{
lean_dec(v___x_1264_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1274_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1268_ = lean_array_push(v_fst_1243_, v_arg_1260_);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1268_);
lean_ctor_set(v___x_1269_, 1, v_fn_1259_);
v___x_1270_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1269_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1270_);
v___x_1272_ = v___x_1266_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
else
{
lean_object* v_a_1276_; lean_object* v___x_1278_; uint8_t v_isShared_1279_; uint8_t v_isSharedCheck_1283_; 
lean_dec_ref(v_arg_1260_);
lean_dec_ref(v_fn_1259_);
lean_dec(v_fst_1243_);
v_a_1276_ = lean_ctor_get(v___x_1264_, 0);
v_isSharedCheck_1283_ = !lean_is_exclusive(v___x_1264_);
if (v_isSharedCheck_1283_ == 0)
{
v___x_1278_ = v___x_1264_;
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
else
{
lean_inc(v_a_1276_);
lean_dec(v___x_1264_);
v___x_1278_ = lean_box(0);
v_isShared_1279_ = v_isSharedCheck_1283_;
goto v_resetjp_1277_;
}
v_resetjp_1277_:
{
lean_object* v___x_1281_; 
if (v_isShared_1279_ == 0)
{
v___x_1281_ = v___x_1278_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1282_; 
v_reuseFailAlloc_1282_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1282_, 0, v_a_1276_);
v___x_1281_ = v_reuseFailAlloc_1282_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
return v___x_1281_;
}
}
}
}
else
{
lean_object* v_a_1284_; lean_object* v___x_1286_; uint8_t v_isShared_1287_; uint8_t v_isSharedCheck_1291_; 
lean_dec_ref(v_arg_1260_);
lean_dec_ref_known(v_snd_1241_, 2);
lean_dec_ref(v_fn_1259_);
lean_dec(v_fst_1243_);
v_a_1284_ = lean_ctor_get(v___x_1261_, 0);
v_isSharedCheck_1291_ = !lean_is_exclusive(v___x_1261_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1286_ = v___x_1261_;
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
else
{
lean_inc(v_a_1284_);
lean_dec(v___x_1261_);
v___x_1286_ = lean_box(0);
v_isShared_1287_ = v_isSharedCheck_1291_;
goto v_resetjp_1285_;
}
v_resetjp_1285_:
{
lean_object* v___x_1289_; 
if (v_isShared_1287_ == 0)
{
v___x_1289_ = v___x_1286_;
goto v_reusejp_1288_;
}
else
{
lean_object* v_reuseFailAlloc_1290_; 
v_reuseFailAlloc_1290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1290_, 0, v_a_1284_);
v___x_1289_ = v_reuseFailAlloc_1290_;
goto v_reusejp_1288_;
}
v_reusejp_1288_:
{
return v___x_1289_;
}
}
}
}
else
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
v___x_1292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1292_, 0, v_fst_1243_);
lean_ctor_set(v___x_1292_, 1, v_snd_1241_);
v___x_1293_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1293_, 0, v___x_1292_);
v___x_1294_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1294_, 0, v___x_1293_);
return v___x_1294_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0___boxed(lean_object** _args){
lean_object* v_snd_1316_ = _args[0];
lean_object* v_a_1317_ = _args[1];
lean_object* v_fst_1318_ = _args[2];
lean_object* v_a_1319_ = _args[3];
lean_object* v_lams_1320_ = _args[4];
lean_object* v_____r_1321_ = _args[5];
lean_object* v___y_1322_ = _args[6];
lean_object* v___y_1323_ = _args[7];
lean_object* v___y_1324_ = _args[8];
lean_object* v___y_1325_ = _args[9];
lean_object* v___y_1326_ = _args[10];
lean_object* v___y_1327_ = _args[11];
lean_object* v___y_1328_ = _args[12];
lean_object* v___y_1329_ = _args[13];
lean_object* v___y_1330_ = _args[14];
lean_object* v___y_1331_ = _args[15];
lean_object* v___y_1332_ = _args[16];
_start:
{
lean_object* v_res_1333_; 
v_res_1333_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(v_snd_1316_, v_a_1317_, v_fst_1318_, v_a_1319_, v_lams_1320_, v_____r_1321_, v___y_1322_, v___y_1323_, v___y_1324_, v___y_1325_, v___y_1326_, v___y_1327_, v___y_1328_, v___y_1329_, v___y_1330_, v___y_1331_);
lean_dec(v___y_1331_);
lean_dec_ref(v___y_1330_);
lean_dec(v___y_1329_);
lean_dec_ref(v___y_1328_);
lean_dec(v___y_1327_);
lean_dec_ref(v___y_1326_);
lean_dec(v___y_1325_);
lean_dec_ref(v___y_1324_);
lean_dec(v___y_1323_);
lean_dec(v___y_1322_);
lean_dec_ref(v_lams_1320_);
lean_dec_ref(v_a_1319_);
lean_dec_ref(v_a_1317_);
return v_res_1333_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; 
v___x_1339_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1340_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_1341_ = l_Lean_Name_append(v___x_1340_, v___x_1339_);
return v___x_1341_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_1343_; lean_object* v___x_1344_; 
v___x_1343_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__3));
v___x_1344_ = l_Lean_stringToMessageData(v___x_1343_);
return v___x_1344_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(lean_object* v_a_1345_, lean_object* v_a_1346_, lean_object* v_lams_1347_, lean_object* v_a_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_, lean_object* v___y_1352_, lean_object* v___y_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_){
_start:
{
lean_object* v___y_1361_; lean_object* v_toCold_1381_; lean_object* v_options_1382_; lean_object* v_fst_1383_; lean_object* v_snd_1384_; lean_object* v___x_1386_; uint8_t v_isShared_1387_; uint8_t v_isSharedCheck_1421_; 
v_toCold_1381_ = lean_ctor_get(v___y_1357_, 0);
v_options_1382_ = lean_ctor_get(v_toCold_1381_, 2);
v_fst_1383_ = lean_ctor_get(v_a_1348_, 0);
v_snd_1384_ = lean_ctor_get(v_a_1348_, 1);
v_isSharedCheck_1421_ = !lean_is_exclusive(v_a_1348_);
if (v_isSharedCheck_1421_ == 0)
{
v___x_1386_ = v_a_1348_;
v_isShared_1387_ = v_isSharedCheck_1421_;
goto v_resetjp_1385_;
}
else
{
lean_inc(v_snd_1384_);
lean_inc(v_fst_1383_);
lean_dec(v_a_1348_);
v___x_1386_ = lean_box(0);
v_isShared_1387_ = v_isSharedCheck_1421_;
goto v_resetjp_1385_;
}
v___jp_1360_:
{
if (lean_obj_tag(v___y_1361_) == 0)
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1372_; 
v_a_1362_ = lean_ctor_get(v___y_1361_, 0);
v_isSharedCheck_1372_ = !lean_is_exclusive(v___y_1361_);
if (v_isSharedCheck_1372_ == 0)
{
v___x_1364_ = v___y_1361_;
v_isShared_1365_ = v_isSharedCheck_1372_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v___y_1361_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1372_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
if (lean_obj_tag(v_a_1362_) == 0)
{
lean_object* v_a_1366_; lean_object* v___x_1368_; 
v_a_1366_ = lean_ctor_get(v_a_1362_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v_a_1362_, 1);
if (v_isShared_1365_ == 0)
{
lean_ctor_set(v___x_1364_, 0, v_a_1366_);
v___x_1368_ = v___x_1364_;
goto v_reusejp_1367_;
}
else
{
lean_object* v_reuseFailAlloc_1369_; 
v_reuseFailAlloc_1369_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1369_, 0, v_a_1366_);
v___x_1368_ = v_reuseFailAlloc_1369_;
goto v_reusejp_1367_;
}
v_reusejp_1367_:
{
return v___x_1368_;
}
}
else
{
lean_object* v_a_1370_; 
lean_del_object(v___x_1364_);
v_a_1370_ = lean_ctor_get(v_a_1362_, 0);
lean_inc(v_a_1370_);
lean_dec_ref_known(v_a_1362_, 1);
v_a_1348_ = v_a_1370_;
goto _start;
}
}
}
else
{
lean_object* v_a_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1380_; 
v_a_1373_ = lean_ctor_get(v___y_1361_, 0);
v_isSharedCheck_1380_ = !lean_is_exclusive(v___y_1361_);
if (v_isSharedCheck_1380_ == 0)
{
v___x_1375_ = v___y_1361_;
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_a_1373_);
lean_dec(v___y_1361_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1380_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1378_; 
if (v_isShared_1376_ == 0)
{
v___x_1378_ = v___x_1375_;
goto v_reusejp_1377_;
}
else
{
lean_object* v_reuseFailAlloc_1379_; 
v_reuseFailAlloc_1379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1379_, 0, v_a_1373_);
v___x_1378_ = v_reuseFailAlloc_1379_;
goto v_reusejp_1377_;
}
v_reusejp_1377_:
{
return v___x_1378_;
}
}
}
}
v_resetjp_1385_:
{
lean_object* v_inheritedTraceOptions_1388_; uint8_t v_hasTrace_1389_; 
v_inheritedTraceOptions_1388_ = lean_ctor_get(v_toCold_1381_, 11);
v_hasTrace_1389_ = lean_ctor_get_uint8(v_options_1382_, sizeof(void*)*1);
if (v_hasTrace_1389_ == 0)
{
lean_del_object(v___x_1386_);
goto v___jp_1390_;
}
else
{
lean_object* v___x_1393_; lean_object* v___x_1394_; uint8_t v___x_1395_; 
v___x_1393_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1394_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1395_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1388_, v_options_1382_, v___x_1394_);
if (v___x_1395_ == 0)
{
lean_del_object(v___x_1386_);
goto v___jp_1390_;
}
else
{
lean_object* v___x_1396_; 
v___x_1396_ = l_Lean_Meta_Grind_updateLastTag(v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
lean_dec_ref_known(v___x_1396_, 1);
v___x_1397_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__4);
lean_inc(v_snd_1384_);
v___x_1398_ = l_Lean_MessageData_ofExpr(v_snd_1384_);
if (v_isShared_1387_ == 0)
{
lean_ctor_set_tag(v___x_1386_, 7);
lean_ctor_set(v___x_1386_, 1, v___x_1398_);
lean_ctor_set(v___x_1386_, 0, v___x_1397_);
v___x_1400_ = v___x_1386_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v___x_1397_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v___x_1398_);
v___x_1400_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___x_1401_; 
v___x_1401_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1393_, v___x_1400_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
if (lean_obj_tag(v___x_1401_) == 0)
{
lean_object* v_a_1402_; lean_object* v___x_1403_; 
v_a_1402_ = lean_ctor_get(v___x_1401_, 0);
lean_inc(v_a_1402_);
lean_dec_ref_known(v___x_1401_, 1);
v___x_1403_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(v_snd_1384_, v_a_1345_, v_fst_1383_, v_a_1346_, v_lams_1347_, v_a_1402_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
v___y_1361_ = v___x_1403_;
goto v___jp_1360_;
}
else
{
lean_object* v_a_1404_; lean_object* v___x_1406_; uint8_t v_isShared_1407_; uint8_t v_isSharedCheck_1411_; 
lean_dec(v_snd_1384_);
lean_dec(v_fst_1383_);
v_a_1404_ = lean_ctor_get(v___x_1401_, 0);
v_isSharedCheck_1411_ = !lean_is_exclusive(v___x_1401_);
if (v_isSharedCheck_1411_ == 0)
{
v___x_1406_ = v___x_1401_;
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
else
{
lean_inc(v_a_1404_);
lean_dec(v___x_1401_);
v___x_1406_ = lean_box(0);
v_isShared_1407_ = v_isSharedCheck_1411_;
goto v_resetjp_1405_;
}
v_resetjp_1405_:
{
lean_object* v___x_1409_; 
if (v_isShared_1407_ == 0)
{
v___x_1409_ = v___x_1406_;
goto v_reusejp_1408_;
}
else
{
lean_object* v_reuseFailAlloc_1410_; 
v_reuseFailAlloc_1410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1410_, 0, v_a_1404_);
v___x_1409_ = v_reuseFailAlloc_1410_;
goto v_reusejp_1408_;
}
v_reusejp_1408_:
{
return v___x_1409_;
}
}
}
}
}
else
{
lean_object* v_a_1413_; lean_object* v___x_1415_; uint8_t v_isShared_1416_; uint8_t v_isSharedCheck_1420_; 
lean_del_object(v___x_1386_);
lean_dec(v_snd_1384_);
lean_dec(v_fst_1383_);
v_a_1413_ = lean_ctor_get(v___x_1396_, 0);
v_isSharedCheck_1420_ = !lean_is_exclusive(v___x_1396_);
if (v_isSharedCheck_1420_ == 0)
{
v___x_1415_ = v___x_1396_;
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
else
{
lean_inc(v_a_1413_);
lean_dec(v___x_1396_);
v___x_1415_ = lean_box(0);
v_isShared_1416_ = v_isSharedCheck_1420_;
goto v_resetjp_1414_;
}
v_resetjp_1414_:
{
lean_object* v___x_1418_; 
if (v_isShared_1416_ == 0)
{
v___x_1418_ = v___x_1415_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_a_1413_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
}
}
}
v___jp_1390_:
{
lean_object* v___x_1391_; lean_object* v___x_1392_; 
v___x_1391_ = lean_box(0);
v___x_1392_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___lam__0(v_snd_1384_, v_a_1345_, v_fst_1383_, v_a_1346_, v_lams_1347_, v___x_1391_, v___y_1349_, v___y_1350_, v___y_1351_, v___y_1352_, v___y_1353_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_, v___y_1358_);
v___y_1361_ = v___x_1392_;
goto v___jp_1360_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___boxed(lean_object* v_a_1422_, lean_object* v_a_1423_, lean_object* v_lams_1424_, lean_object* v_a_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_, lean_object* v___y_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_){
_start:
{
lean_object* v_res_1437_; 
v_res_1437_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_a_1422_, v_a_1423_, v_lams_1424_, v_a_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_, v___y_1433_, v___y_1434_, v___y_1435_);
lean_dec(v___y_1435_);
lean_dec_ref(v___y_1434_);
lean_dec(v___y_1433_);
lean_dec_ref(v___y_1432_);
lean_dec(v___y_1431_);
lean_dec_ref(v___y_1430_);
lean_dec(v___y_1429_);
lean_dec_ref(v___y_1428_);
lean_dec(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v_lams_1424_);
lean_dec_ref(v_a_1423_);
lean_dec_ref(v_a_1422_);
return v_res_1437_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__1));
v___x_1442_ = l_Lean_stringToMessageData(v___x_1441_);
return v___x_1442_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(lean_object* v_a_1443_, lean_object* v_lams_1444_, lean_object* v_as_x27_1445_, lean_object* v_b_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_, lean_object* v___y_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
if (lean_obj_tag(v_as_x27_1445_) == 0)
{
lean_object* v___x_1458_; 
v___x_1458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1458_, 0, v_b_1446_);
return v___x_1458_;
}
else
{
lean_object* v_toCold_1459_; lean_object* v_options_1460_; lean_object* v_head_1461_; lean_object* v_tail_1462_; lean_object* v_inheritedTraceOptions_1463_; uint8_t v_hasTrace_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v___y_1477_; 
v_toCold_1459_ = lean_ctor_get(v___y_1455_, 0);
v_options_1460_ = lean_ctor_get(v_toCold_1459_, 2);
v_head_1461_ = lean_ctor_get(v_as_x27_1445_, 0);
v_tail_1462_ = lean_ctor_get(v_as_x27_1445_, 1);
v_inheritedTraceOptions_1463_ = lean_ctor_get(v_toCold_1459_, 11);
v_hasTrace_1464_ = lean_ctor_get_uint8(v_options_1460_, sizeof(void*)*1);
v___x_1465_ = lean_box(0);
v___x_1466_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
if (v_hasTrace_1464_ == 0)
{
v___y_1468_ = v___y_1447_;
v___y_1469_ = v___y_1448_;
v___y_1470_ = v___y_1449_;
v___y_1471_ = v___y_1450_;
v___y_1472_ = v___y_1451_;
v___y_1473_ = v___y_1452_;
v___y_1474_ = v___y_1453_;
v___y_1475_ = v___y_1454_;
v___y_1476_ = v___y_1455_;
v___y_1477_ = v___y_1456_;
goto v___jp_1467_;
}
else
{
lean_object* v___x_1489_; lean_object* v___x_1490_; uint8_t v___x_1491_; 
v___x_1489_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1490_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1491_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1463_, v_options_1460_, v___x_1490_);
if (v___x_1491_ == 0)
{
v___y_1468_ = v___y_1447_;
v___y_1469_ = v___y_1448_;
v___y_1470_ = v___y_1449_;
v___y_1471_ = v___y_1450_;
v___y_1472_ = v___y_1451_;
v___y_1473_ = v___y_1452_;
v___y_1474_ = v___y_1453_;
v___y_1475_ = v___y_1454_;
v___y_1476_ = v___y_1455_;
v___y_1477_ = v___y_1456_;
goto v___jp_1467_;
}
else
{
lean_object* v___x_1492_; 
v___x_1492_ = l_Lean_Meta_Grind_updateLastTag(v___y_1447_, v___y_1448_, v___y_1449_, v___y_1450_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1492_) == 0)
{
lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_dec_ref_known(v___x_1492_, 1);
v___x_1493_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2);
lean_inc(v_head_1461_);
v___x_1494_ = l_Lean_MessageData_ofExpr(v_head_1461_);
v___x_1495_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1495_, 0, v___x_1493_);
lean_ctor_set(v___x_1495_, 1, v___x_1494_);
v___x_1496_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1489_, v___x_1495_, v___y_1453_, v___y_1454_, v___y_1455_, v___y_1456_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_dec_ref_known(v___x_1496_, 1);
v___y_1468_ = v___y_1447_;
v___y_1469_ = v___y_1448_;
v___y_1470_ = v___y_1449_;
v___y_1471_ = v___y_1450_;
v___y_1472_ = v___y_1451_;
v___y_1473_ = v___y_1452_;
v___y_1474_ = v___y_1453_;
v___y_1475_ = v___y_1454_;
v___y_1476_ = v___y_1455_;
v___y_1477_ = v___y_1456_;
goto v___jp_1467_;
}
else
{
return v___x_1496_;
}
}
else
{
return v___x_1492_;
}
}
}
v___jp_1467_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; 
lean_inc(v_head_1461_);
v___x_1478_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1478_, 0, v___x_1466_);
lean_ctor_set(v___x_1478_, 1, v_head_1461_);
v___x_1479_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_head_1461_, v_a_1443_, v_lams_1444_, v___x_1478_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_, v___y_1472_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_, v___y_1477_);
if (lean_obj_tag(v___x_1479_) == 0)
{
lean_dec_ref_known(v___x_1479_, 1);
v_as_x27_1445_ = v_tail_1462_;
v_b_1446_ = v___x_1465_;
goto _start;
}
else
{
lean_object* v_a_1481_; lean_object* v___x_1483_; uint8_t v_isShared_1484_; uint8_t v_isSharedCheck_1488_; 
v_a_1481_ = lean_ctor_get(v___x_1479_, 0);
v_isSharedCheck_1488_ = !lean_is_exclusive(v___x_1479_);
if (v_isSharedCheck_1488_ == 0)
{
v___x_1483_ = v___x_1479_;
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
else
{
lean_inc(v_a_1481_);
lean_dec(v___x_1479_);
v___x_1483_ = lean_box(0);
v_isShared_1484_ = v_isSharedCheck_1488_;
goto v_resetjp_1482_;
}
v_resetjp_1482_:
{
lean_object* v___x_1486_; 
if (v_isShared_1484_ == 0)
{
v___x_1486_ = v___x_1483_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v_a_1481_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___boxed(lean_object* v_a_1497_, lean_object* v_lams_1498_, lean_object* v_as_x27_1499_, lean_object* v_b_1500_, lean_object* v___y_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
lean_object* v_res_1512_; 
v_res_1512_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1497_, v_lams_1498_, v_as_x27_1499_, v_b_1500_, v___y_1501_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_);
lean_dec(v___y_1510_);
lean_dec_ref(v___y_1509_);
lean_dec(v___y_1508_);
lean_dec_ref(v___y_1507_);
lean_dec(v___y_1506_);
lean_dec_ref(v___y_1505_);
lean_dec(v___y_1504_);
lean_dec_ref(v___y_1503_);
lean_dec(v___y_1502_);
lean_dec(v___y_1501_);
lean_dec(v_as_x27_1499_);
lean_dec_ref(v_lams_1498_);
lean_dec_ref(v_a_1497_);
return v_res_1512_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(lean_object* v_a_1513_, lean_object* v_lams_1514_, lean_object* v_as_1515_, lean_object* v_as_x27_1516_, lean_object* v_b_1517_, lean_object* v___y_1518_, lean_object* v___y_1519_, lean_object* v___y_1520_, lean_object* v___y_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_, lean_object* v___y_1527_){
_start:
{
if (lean_obj_tag(v_as_x27_1516_) == 0)
{
lean_object* v___x_1529_; 
v___x_1529_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1529_, 0, v_b_1517_);
return v___x_1529_;
}
else
{
lean_object* v_toCold_1530_; lean_object* v_options_1531_; lean_object* v_head_1532_; lean_object* v_tail_1533_; lean_object* v_inheritedTraceOptions_1534_; uint8_t v_hasTrace_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___y_1539_; lean_object* v___y_1540_; lean_object* v___y_1541_; lean_object* v___y_1542_; lean_object* v___y_1543_; lean_object* v___y_1544_; lean_object* v___y_1545_; lean_object* v___y_1546_; lean_object* v___y_1547_; lean_object* v___y_1548_; 
v_toCold_1530_ = lean_ctor_get(v___y_1526_, 0);
v_options_1531_ = lean_ctor_get(v_toCold_1530_, 2);
v_head_1532_ = lean_ctor_get(v_as_x27_1516_, 0);
v_tail_1533_ = lean_ctor_get(v_as_x27_1516_, 1);
v_inheritedTraceOptions_1534_ = lean_ctor_get(v_toCold_1530_, 11);
v_hasTrace_1535_ = lean_ctor_get_uint8(v_options_1531_, sizeof(void*)*1);
v___x_1536_ = lean_box(0);
v___x_1537_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
if (v_hasTrace_1535_ == 0)
{
v___y_1539_ = v___y_1518_;
v___y_1540_ = v___y_1519_;
v___y_1541_ = v___y_1520_;
v___y_1542_ = v___y_1521_;
v___y_1543_ = v___y_1522_;
v___y_1544_ = v___y_1523_;
v___y_1545_ = v___y_1524_;
v___y_1546_ = v___y_1525_;
v___y_1547_ = v___y_1526_;
v___y_1548_ = v___y_1527_;
goto v___jp_1538_;
}
else
{
lean_object* v___x_1560_; lean_object* v___x_1561_; uint8_t v___x_1562_; 
v___x_1560_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1561_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1562_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1534_, v_options_1531_, v___x_1561_);
if (v___x_1562_ == 0)
{
v___y_1539_ = v___y_1518_;
v___y_1540_ = v___y_1519_;
v___y_1541_ = v___y_1520_;
v___y_1542_ = v___y_1521_;
v___y_1543_ = v___y_1522_;
v___y_1544_ = v___y_1523_;
v___y_1545_ = v___y_1524_;
v___y_1546_ = v___y_1525_;
v___y_1547_ = v___y_1526_;
v___y_1548_ = v___y_1527_;
goto v___jp_1538_;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = l_Lean_Meta_Grind_updateLastTag(v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
if (lean_obj_tag(v___x_1563_) == 0)
{
lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; 
lean_dec_ref_known(v___x_1563_, 1);
v___x_1564_ = lean_obj_once(&l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__2);
lean_inc(v_head_1532_);
v___x_1565_ = l_Lean_MessageData_ofExpr(v_head_1532_);
v___x_1566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1566_, 0, v___x_1564_);
lean_ctor_set(v___x_1566_, 1, v___x_1565_);
v___x_1567_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1560_, v___x_1566_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
if (lean_obj_tag(v___x_1567_) == 0)
{
lean_dec_ref_known(v___x_1567_, 1);
v___y_1539_ = v___y_1518_;
v___y_1540_ = v___y_1519_;
v___y_1541_ = v___y_1520_;
v___y_1542_ = v___y_1521_;
v___y_1543_ = v___y_1522_;
v___y_1544_ = v___y_1523_;
v___y_1545_ = v___y_1524_;
v___y_1546_ = v___y_1525_;
v___y_1547_ = v___y_1526_;
v___y_1548_ = v___y_1527_;
goto v___jp_1538_;
}
else
{
return v___x_1567_;
}
}
else
{
return v___x_1563_;
}
}
}
v___jp_1538_:
{
lean_object* v___x_1549_; lean_object* v___x_1550_; 
lean_inc(v_head_1532_);
v___x_1549_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1549_, 0, v___x_1537_);
lean_ctor_set(v___x_1549_, 1, v_head_1532_);
v___x_1550_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_head_1532_, v_a_1513_, v_lams_1514_, v___x_1549_, v___y_1539_, v___y_1540_, v___y_1541_, v___y_1542_, v___y_1543_, v___y_1544_, v___y_1545_, v___y_1546_, v___y_1547_, v___y_1548_);
if (lean_obj_tag(v___x_1550_) == 0)
{
lean_object* v___x_1551_; 
lean_dec_ref_known(v___x_1550_, 1);
v___x_1551_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1513_, v_lams_1514_, v_tail_1533_, v___x_1536_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_, v___y_1526_, v___y_1527_);
return v___x_1551_;
}
else
{
lean_object* v_a_1552_; lean_object* v___x_1554_; uint8_t v_isShared_1555_; uint8_t v_isSharedCheck_1559_; 
v_a_1552_ = lean_ctor_get(v___x_1550_, 0);
v_isSharedCheck_1559_ = !lean_is_exclusive(v___x_1550_);
if (v_isSharedCheck_1559_ == 0)
{
v___x_1554_ = v___x_1550_;
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
else
{
lean_inc(v_a_1552_);
lean_dec(v___x_1550_);
v___x_1554_ = lean_box(0);
v_isShared_1555_ = v_isSharedCheck_1559_;
goto v_resetjp_1553_;
}
v_resetjp_1553_:
{
lean_object* v___x_1557_; 
if (v_isShared_1555_ == 0)
{
v___x_1557_ = v___x_1554_;
goto v_reusejp_1556_;
}
else
{
lean_object* v_reuseFailAlloc_1558_; 
v_reuseFailAlloc_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1558_, 0, v_a_1552_);
v___x_1557_ = v_reuseFailAlloc_1558_;
goto v_reusejp_1556_;
}
v_reusejp_1556_:
{
return v___x_1557_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg___boxed(lean_object* v_a_1568_, lean_object* v_lams_1569_, lean_object* v_as_1570_, lean_object* v_as_x27_1571_, lean_object* v_b_1572_, lean_object* v___y_1573_, lean_object* v___y_1574_, lean_object* v___y_1575_, lean_object* v___y_1576_, lean_object* v___y_1577_, lean_object* v___y_1578_, lean_object* v___y_1579_, lean_object* v___y_1580_, lean_object* v___y_1581_, lean_object* v___y_1582_, lean_object* v___y_1583_){
_start:
{
lean_object* v_res_1584_; 
v_res_1584_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1568_, v_lams_1569_, v_as_1570_, v_as_x27_1571_, v_b_1572_, v___y_1573_, v___y_1574_, v___y_1575_, v___y_1576_, v___y_1577_, v___y_1578_, v___y_1579_, v___y_1580_, v___y_1581_, v___y_1582_);
lean_dec(v___y_1582_);
lean_dec_ref(v___y_1581_);
lean_dec(v___y_1580_);
lean_dec_ref(v___y_1579_);
lean_dec(v___y_1578_);
lean_dec_ref(v___y_1577_);
lean_dec(v___y_1576_);
lean_dec_ref(v___y_1575_);
lean_dec(v___y_1574_);
lean_dec(v___y_1573_);
lean_dec(v_as_x27_1571_);
lean_dec(v_as_1570_);
lean_dec_ref(v_lams_1569_);
lean_dec_ref(v_a_1568_);
return v_res_1584_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1(void){
_start:
{
lean_object* v___x_1586_; lean_object* v___x_1587_; 
v___x_1586_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__0));
v___x_1587_ = l_Lean_stringToMessageData(v___x_1586_);
return v___x_1587_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3(void){
_start:
{
lean_object* v___x_1589_; lean_object* v___x_1590_; 
v___x_1589_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__2));
v___x_1590_ = l_Lean_stringToMessageData(v___x_1589_);
return v___x_1590_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(lean_object* v_a_1591_, lean_object* v_lams_1592_, lean_object* v_as_1593_, size_t v_sz_1594_, size_t v_i_1595_, lean_object* v_b_1596_, lean_object* v___y_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
uint8_t v___x_1608_; 
v___x_1608_ = lean_usize_dec_lt(v_i_1595_, v_sz_1594_);
if (v___x_1608_ == 0)
{
lean_object* v___x_1609_; 
v___x_1609_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1609_, 0, v_b_1596_);
return v___x_1609_;
}
else
{
lean_object* v_toCold_1610_; lean_object* v_options_1611_; lean_object* v_inheritedTraceOptions_1612_; uint8_t v_hasTrace_1613_; lean_object* v___x_1614_; lean_object* v_a_1615_; lean_object* v___y_1617_; lean_object* v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1620_; lean_object* v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1624_; lean_object* v___y_1625_; lean_object* v___y_1626_; 
v_toCold_1610_ = lean_ctor_get(v___y_1605_, 0);
v_options_1611_ = lean_ctor_get(v_toCold_1610_, 2);
v_inheritedTraceOptions_1612_ = lean_ctor_get(v_toCold_1610_, 11);
v_hasTrace_1613_ = lean_ctor_get_uint8(v_options_1611_, sizeof(void*)*1);
v___x_1614_ = lean_box(0);
v_a_1615_ = lean_array_uget_borrowed(v_as_1593_, v_i_1595_);
if (v_hasTrace_1613_ == 0)
{
v___y_1617_ = v___y_1597_;
v___y_1618_ = v___y_1598_;
v___y_1619_ = v___y_1599_;
v___y_1620_ = v___y_1600_;
v___y_1621_ = v___y_1601_;
v___y_1622_ = v___y_1602_;
v___y_1623_ = v___y_1603_;
v___y_1624_ = v___y_1604_;
v___y_1625_ = v___y_1605_;
v___y_1626_ = v___y_1606_;
goto v___jp_1616_;
}
else
{
lean_object* v___x_1642_; lean_object* v___x_1643_; uint8_t v___x_1644_; 
v___x_1642_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1643_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1644_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1612_, v_options_1611_, v___x_1643_);
if (v___x_1644_ == 0)
{
v___y_1617_ = v___y_1597_;
v___y_1618_ = v___y_1598_;
v___y_1619_ = v___y_1599_;
v___y_1620_ = v___y_1600_;
v___y_1621_ = v___y_1601_;
v___y_1622_ = v___y_1602_;
v___y_1623_ = v___y_1603_;
v___y_1624_ = v___y_1604_;
v___y_1625_ = v___y_1605_;
v___y_1626_ = v___y_1606_;
goto v___jp_1616_;
}
else
{
lean_object* v___x_1645_; 
v___x_1645_ = l_Lean_Meta_Grind_updateLastTag(v___y_1597_, v___y_1598_, v___y_1599_, v___y_1600_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_);
if (lean_obj_tag(v___x_1645_) == 0)
{
lean_object* v___x_1646_; 
lean_dec_ref_known(v___x_1645_, 1);
v___x_1646_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1615_, v___y_1597_);
if (lean_obj_tag(v___x_1646_) == 0)
{
lean_object* v_a_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; 
v_a_1647_ = lean_ctor_get(v___x_1646_, 0);
lean_inc(v_a_1647_);
lean_dec_ref_known(v___x_1646_, 1);
v___x_1648_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1);
lean_inc(v_a_1615_);
v___x_1649_ = l_Lean_MessageData_ofExpr(v_a_1615_);
v___x_1650_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1648_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
v___x_1651_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3);
v___x_1652_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1652_, 0, v___x_1650_);
lean_ctor_set(v___x_1652_, 1, v___x_1651_);
v___x_1653_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1647_);
lean_dec(v_a_1647_);
v___x_1654_ = lean_box(0);
v___x_1655_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1653_, v___x_1654_);
v___x_1656_ = l_Lean_MessageData_ofList(v___x_1655_);
v___x_1657_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1652_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
v___x_1658_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1642_, v___x_1657_, v___y_1603_, v___y_1604_, v___y_1605_, v___y_1606_);
if (lean_obj_tag(v___x_1658_) == 0)
{
lean_dec_ref_known(v___x_1658_, 1);
v___y_1617_ = v___y_1597_;
v___y_1618_ = v___y_1598_;
v___y_1619_ = v___y_1599_;
v___y_1620_ = v___y_1600_;
v___y_1621_ = v___y_1601_;
v___y_1622_ = v___y_1602_;
v___y_1623_ = v___y_1603_;
v___y_1624_ = v___y_1604_;
v___y_1625_ = v___y_1605_;
v___y_1626_ = v___y_1606_;
goto v___jp_1616_;
}
else
{
return v___x_1658_;
}
}
else
{
lean_object* v_a_1659_; lean_object* v___x_1661_; uint8_t v_isShared_1662_; uint8_t v_isSharedCheck_1666_; 
v_a_1659_ = lean_ctor_get(v___x_1646_, 0);
v_isSharedCheck_1666_ = !lean_is_exclusive(v___x_1646_);
if (v_isSharedCheck_1666_ == 0)
{
v___x_1661_ = v___x_1646_;
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
else
{
lean_inc(v_a_1659_);
lean_dec(v___x_1646_);
v___x_1661_ = lean_box(0);
v_isShared_1662_ = v_isSharedCheck_1666_;
goto v_resetjp_1660_;
}
v_resetjp_1660_:
{
lean_object* v___x_1664_; 
if (v_isShared_1662_ == 0)
{
v___x_1664_ = v___x_1661_;
goto v_reusejp_1663_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v_a_1659_);
v___x_1664_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1663_;
}
v_reusejp_1663_:
{
return v___x_1664_;
}
}
}
}
else
{
return v___x_1645_;
}
}
}
v___jp_1616_:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1615_, v___y_1617_);
if (lean_obj_tag(v___x_1627_) == 0)
{
lean_object* v_a_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; 
v_a_1628_ = lean_ctor_get(v___x_1627_, 0);
lean_inc(v_a_1628_);
lean_dec_ref_known(v___x_1627_, 1);
v___x_1629_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1628_);
lean_dec(v_a_1628_);
v___x_1630_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1591_, v_lams_1592_, v___x_1629_, v___x_1629_, v___x_1614_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_, v___y_1625_, v___y_1626_);
lean_dec(v___x_1629_);
if (lean_obj_tag(v___x_1630_) == 0)
{
size_t v___x_1631_; size_t v___x_1632_; 
lean_dec_ref_known(v___x_1630_, 1);
v___x_1631_ = ((size_t)1ULL);
v___x_1632_ = lean_usize_add(v_i_1595_, v___x_1631_);
v_i_1595_ = v___x_1632_;
v_b_1596_ = v___x_1614_;
goto _start;
}
else
{
return v___x_1630_;
}
}
else
{
lean_object* v_a_1634_; lean_object* v___x_1636_; uint8_t v_isShared_1637_; uint8_t v_isSharedCheck_1641_; 
v_a_1634_ = lean_ctor_get(v___x_1627_, 0);
v_isSharedCheck_1641_ = !lean_is_exclusive(v___x_1627_);
if (v_isSharedCheck_1641_ == 0)
{
v___x_1636_ = v___x_1627_;
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
else
{
lean_inc(v_a_1634_);
lean_dec(v___x_1627_);
v___x_1636_ = lean_box(0);
v_isShared_1637_ = v_isSharedCheck_1641_;
goto v_resetjp_1635_;
}
v_resetjp_1635_:
{
lean_object* v___x_1639_; 
if (v_isShared_1637_ == 0)
{
v___x_1639_ = v___x_1636_;
goto v_reusejp_1638_;
}
else
{
lean_object* v_reuseFailAlloc_1640_; 
v_reuseFailAlloc_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1640_, 0, v_a_1634_);
v___x_1639_ = v_reuseFailAlloc_1640_;
goto v_reusejp_1638_;
}
v_reusejp_1638_:
{
return v___x_1639_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___boxed(lean_object** _args){
lean_object* v_a_1667_ = _args[0];
lean_object* v_lams_1668_ = _args[1];
lean_object* v_as_1669_ = _args[2];
lean_object* v_sz_1670_ = _args[3];
lean_object* v_i_1671_ = _args[4];
lean_object* v_b_1672_ = _args[5];
lean_object* v___y_1673_ = _args[6];
lean_object* v___y_1674_ = _args[7];
lean_object* v___y_1675_ = _args[8];
lean_object* v___y_1676_ = _args[9];
lean_object* v___y_1677_ = _args[10];
lean_object* v___y_1678_ = _args[11];
lean_object* v___y_1679_ = _args[12];
lean_object* v___y_1680_ = _args[13];
lean_object* v___y_1681_ = _args[14];
lean_object* v___y_1682_ = _args[15];
lean_object* v___y_1683_ = _args[16];
_start:
{
size_t v_sz_boxed_1684_; size_t v_i_boxed_1685_; lean_object* v_res_1686_; 
v_sz_boxed_1684_ = lean_unbox_usize(v_sz_1670_);
lean_dec(v_sz_1670_);
v_i_boxed_1685_ = lean_unbox_usize(v_i_1671_);
lean_dec(v_i_1671_);
v_res_1686_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(v_a_1667_, v_lams_1668_, v_as_1669_, v_sz_boxed_1684_, v_i_boxed_1685_, v_b_1672_, v___y_1673_, v___y_1674_, v___y_1675_, v___y_1676_, v___y_1677_, v___y_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
lean_dec(v___y_1678_);
lean_dec_ref(v___y_1677_);
lean_dec(v___y_1676_);
lean_dec_ref(v___y_1675_);
lean_dec(v___y_1674_);
lean_dec(v___y_1673_);
lean_dec_ref(v_as_1669_);
lean_dec_ref(v_lams_1668_);
lean_dec_ref(v_a_1667_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(lean_object* v_a_1687_, lean_object* v_lams_1688_, lean_object* v_as_1689_, size_t v_sz_1690_, size_t v_i_1691_, lean_object* v_b_1692_, lean_object* v___y_1693_, lean_object* v___y_1694_, lean_object* v___y_1695_, lean_object* v___y_1696_, lean_object* v___y_1697_, lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v___y_1700_, lean_object* v___y_1701_, lean_object* v___y_1702_){
_start:
{
uint8_t v___x_1704_; 
v___x_1704_ = lean_usize_dec_lt(v_i_1691_, v_sz_1690_);
if (v___x_1704_ == 0)
{
lean_object* v___x_1705_; 
v___x_1705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1705_, 0, v_b_1692_);
return v___x_1705_;
}
else
{
lean_object* v_toCold_1706_; lean_object* v_options_1707_; lean_object* v_inheritedTraceOptions_1708_; uint8_t v_hasTrace_1709_; lean_object* v___x_1710_; lean_object* v_a_1711_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1722_; 
v_toCold_1706_ = lean_ctor_get(v___y_1701_, 0);
v_options_1707_ = lean_ctor_get(v_toCold_1706_, 2);
v_inheritedTraceOptions_1708_ = lean_ctor_get(v_toCold_1706_, 11);
v_hasTrace_1709_ = lean_ctor_get_uint8(v_options_1707_, sizeof(void*)*1);
v___x_1710_ = lean_box(0);
v_a_1711_ = lean_array_uget_borrowed(v_as_1689_, v_i_1691_);
if (v_hasTrace_1709_ == 0)
{
v___y_1713_ = v___y_1693_;
v___y_1714_ = v___y_1694_;
v___y_1715_ = v___y_1695_;
v___y_1716_ = v___y_1696_;
v___y_1717_ = v___y_1697_;
v___y_1718_ = v___y_1698_;
v___y_1719_ = v___y_1699_;
v___y_1720_ = v___y_1700_;
v___y_1721_ = v___y_1701_;
v___y_1722_ = v___y_1702_;
goto v___jp_1712_;
}
else
{
lean_object* v___x_1738_; lean_object* v___x_1739_; uint8_t v___x_1740_; 
v___x_1738_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1739_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1740_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1708_, v_options_1707_, v___x_1739_);
if (v___x_1740_ == 0)
{
v___y_1713_ = v___y_1693_;
v___y_1714_ = v___y_1694_;
v___y_1715_ = v___y_1695_;
v___y_1716_ = v___y_1696_;
v___y_1717_ = v___y_1697_;
v___y_1718_ = v___y_1698_;
v___y_1719_ = v___y_1699_;
v___y_1720_ = v___y_1700_;
v___y_1721_ = v___y_1701_;
v___y_1722_ = v___y_1702_;
goto v___jp_1712_;
}
else
{
lean_object* v___x_1741_; 
v___x_1741_ = l_Lean_Meta_Grind_updateLastTag(v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
if (lean_obj_tag(v___x_1741_) == 0)
{
lean_object* v___x_1742_; 
lean_dec_ref_known(v___x_1741_, 1);
v___x_1742_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1711_, v___y_1693_);
if (lean_obj_tag(v___x_1742_) == 0)
{
lean_object* v_a_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; 
v_a_1743_ = lean_ctor_get(v___x_1742_, 0);
lean_inc(v_a_1743_);
lean_dec_ref_known(v___x_1742_, 1);
v___x_1744_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__1);
lean_inc(v_a_1711_);
v___x_1745_ = l_Lean_MessageData_ofExpr(v_a_1711_);
v___x_1746_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1746_, 0, v___x_1744_);
lean_ctor_set(v___x_1746_, 1, v___x_1745_);
v___x_1747_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4___closed__3);
v___x_1748_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1748_, 0, v___x_1746_);
lean_ctor_set(v___x_1748_, 1, v___x_1747_);
v___x_1749_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1743_);
lean_dec(v_a_1743_);
v___x_1750_ = lean_box(0);
v___x_1751_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1749_, v___x_1750_);
v___x_1752_ = l_Lean_MessageData_ofList(v___x_1751_);
v___x_1753_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1753_, 0, v___x_1748_);
lean_ctor_set(v___x_1753_, 1, v___x_1752_);
v___x_1754_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1738_, v___x_1753_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
if (lean_obj_tag(v___x_1754_) == 0)
{
lean_dec_ref_known(v___x_1754_, 1);
v___y_1713_ = v___y_1693_;
v___y_1714_ = v___y_1694_;
v___y_1715_ = v___y_1695_;
v___y_1716_ = v___y_1696_;
v___y_1717_ = v___y_1697_;
v___y_1718_ = v___y_1698_;
v___y_1719_ = v___y_1699_;
v___y_1720_ = v___y_1700_;
v___y_1721_ = v___y_1701_;
v___y_1722_ = v___y_1702_;
goto v___jp_1712_;
}
else
{
return v___x_1754_;
}
}
else
{
lean_object* v_a_1755_; lean_object* v___x_1757_; uint8_t v_isShared_1758_; uint8_t v_isSharedCheck_1762_; 
v_a_1755_ = lean_ctor_get(v___x_1742_, 0);
v_isSharedCheck_1762_ = !lean_is_exclusive(v___x_1742_);
if (v_isSharedCheck_1762_ == 0)
{
v___x_1757_ = v___x_1742_;
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
else
{
lean_inc(v_a_1755_);
lean_dec(v___x_1742_);
v___x_1757_ = lean_box(0);
v_isShared_1758_ = v_isSharedCheck_1762_;
goto v_resetjp_1756_;
}
v_resetjp_1756_:
{
lean_object* v___x_1760_; 
if (v_isShared_1758_ == 0)
{
v___x_1760_ = v___x_1757_;
goto v_reusejp_1759_;
}
else
{
lean_object* v_reuseFailAlloc_1761_; 
v_reuseFailAlloc_1761_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1761_, 0, v_a_1755_);
v___x_1760_ = v_reuseFailAlloc_1761_;
goto v_reusejp_1759_;
}
v_reusejp_1759_:
{
return v___x_1760_;
}
}
}
}
else
{
return v___x_1741_;
}
}
}
v___jp_1712_:
{
lean_object* v___x_1723_; 
v___x_1723_ = l_Lean_Meta_Grind_getParents___redArg(v_a_1711_, v___y_1713_);
if (lean_obj_tag(v___x_1723_) == 0)
{
lean_object* v_a_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v_a_1724_ = lean_ctor_get(v___x_1723_, 0);
lean_inc(v_a_1724_);
lean_dec_ref_known(v___x_1723_, 1);
v___x_1725_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1724_);
lean_dec(v_a_1724_);
v___x_1726_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1687_, v_lams_1688_, v___x_1725_, v___x_1725_, v___x_1710_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_, v___y_1722_);
lean_dec(v___x_1725_);
if (lean_obj_tag(v___x_1726_) == 0)
{
size_t v___x_1727_; size_t v___x_1728_; lean_object* v___x_1729_; 
lean_dec_ref_known(v___x_1726_, 1);
v___x_1727_ = ((size_t)1ULL);
v___x_1728_ = lean_usize_add(v_i_1691_, v___x_1727_);
v___x_1729_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3_spec__4(v_a_1687_, v_lams_1688_, v_as_1689_, v_sz_1690_, v___x_1728_, v___x_1710_, v___y_1693_, v___y_1694_, v___y_1695_, v___y_1696_, v___y_1697_, v___y_1698_, v___y_1699_, v___y_1700_, v___y_1701_, v___y_1702_);
return v___x_1729_;
}
else
{
return v___x_1726_;
}
}
else
{
lean_object* v_a_1730_; lean_object* v___x_1732_; uint8_t v_isShared_1733_; uint8_t v_isSharedCheck_1737_; 
v_a_1730_ = lean_ctor_get(v___x_1723_, 0);
v_isSharedCheck_1737_ = !lean_is_exclusive(v___x_1723_);
if (v_isSharedCheck_1737_ == 0)
{
v___x_1732_ = v___x_1723_;
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
else
{
lean_inc(v_a_1730_);
lean_dec(v___x_1723_);
v___x_1732_ = lean_box(0);
v_isShared_1733_ = v_isSharedCheck_1737_;
goto v_resetjp_1731_;
}
v_resetjp_1731_:
{
lean_object* v___x_1735_; 
if (v_isShared_1733_ == 0)
{
v___x_1735_ = v___x_1732_;
goto v_reusejp_1734_;
}
else
{
lean_object* v_reuseFailAlloc_1736_; 
v_reuseFailAlloc_1736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1736_, 0, v_a_1730_);
v___x_1735_ = v_reuseFailAlloc_1736_;
goto v_reusejp_1734_;
}
v_reusejp_1734_:
{
return v___x_1735_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3___boxed(lean_object** _args){
lean_object* v_a_1763_ = _args[0];
lean_object* v_lams_1764_ = _args[1];
lean_object* v_as_1765_ = _args[2];
lean_object* v_sz_1766_ = _args[3];
lean_object* v_i_1767_ = _args[4];
lean_object* v_b_1768_ = _args[5];
lean_object* v___y_1769_ = _args[6];
lean_object* v___y_1770_ = _args[7];
lean_object* v___y_1771_ = _args[8];
lean_object* v___y_1772_ = _args[9];
lean_object* v___y_1773_ = _args[10];
lean_object* v___y_1774_ = _args[11];
lean_object* v___y_1775_ = _args[12];
lean_object* v___y_1776_ = _args[13];
lean_object* v___y_1777_ = _args[14];
lean_object* v___y_1778_ = _args[15];
lean_object* v___y_1779_ = _args[16];
_start:
{
size_t v_sz_boxed_1780_; size_t v_i_boxed_1781_; lean_object* v_res_1782_; 
v_sz_boxed_1780_ = lean_unbox_usize(v_sz_1766_);
lean_dec(v_sz_1766_);
v_i_boxed_1781_ = lean_unbox_usize(v_i_1767_);
lean_dec(v_i_1767_);
v_res_1782_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(v_a_1763_, v_lams_1764_, v_as_1765_, v_sz_boxed_1780_, v_i_boxed_1781_, v_b_1768_, v___y_1769_, v___y_1770_, v___y_1771_, v___y_1772_, v___y_1773_, v___y_1774_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
lean_dec(v___y_1778_);
lean_dec_ref(v___y_1777_);
lean_dec(v___y_1776_);
lean_dec_ref(v___y_1775_);
lean_dec(v___y_1774_);
lean_dec_ref(v___y_1773_);
lean_dec(v___y_1772_);
lean_dec_ref(v___y_1771_);
lean_dec(v___y_1770_);
lean_dec(v___y_1769_);
lean_dec_ref(v_as_1765_);
lean_dec_ref(v_lams_1764_);
lean_dec_ref(v_a_1763_);
return v_res_1782_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__1(void){
_start:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
v___x_1784_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBeta___closed__0));
v___x_1785_ = l_Lean_stringToMessageData(v___x_1784_);
return v___x_1785_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_propagateBeta___closed__3(void){
_start:
{
lean_object* v___x_1787_; lean_object* v___x_1788_; 
v___x_1787_ = ((lean_object*)(l_Lean_Meta_Grind_propagateBeta___closed__2));
v___x_1788_ = l_Lean_stringToMessageData(v___x_1787_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta(lean_object* v_lams_1789_, lean_object* v_fns_1790_, lean_object* v_a_1791_, lean_object* v_a_1792_, lean_object* v_a_1793_, lean_object* v_a_1794_, lean_object* v_a_1795_, lean_object* v_a_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_, lean_object* v_a_1799_, lean_object* v_a_1800_){
_start:
{
lean_object* v___x_1802_; lean_object* v___x_1803_; uint8_t v___x_1804_; 
v___x_1802_ = lean_array_get_size(v_lams_1789_);
v___x_1803_ = lean_unsigned_to_nat(0u);
v___x_1804_ = lean_nat_dec_eq(v___x_1802_, v___x_1803_);
if (v___x_1804_ == 0)
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; 
v___x_1805_ = l_Lean_instInhabitedExpr;
v___x_1806_ = lean_unsigned_to_nat(1u);
v___x_1807_ = lean_nat_sub(v___x_1802_, v___x_1806_);
v___x_1808_ = lean_array_get_borrowed(v___x_1805_, v_lams_1789_, v___x_1807_);
lean_dec(v___x_1807_);
v___x_1809_ = lean_st_ref_get(v_a_1791_);
lean_inc(v___x_1808_);
v___x_1810_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_1809_, v___x_1808_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
lean_dec(v___x_1809_);
if (lean_obj_tag(v___x_1810_) == 0)
{
lean_object* v_a_1811_; lean_object* v___y_1813_; lean_object* v___y_1814_; lean_object* v___y_1815_; lean_object* v___y_1816_; lean_object* v___y_1817_; lean_object* v___y_1818_; lean_object* v___y_1819_; lean_object* v___y_1820_; lean_object* v___y_1821_; lean_object* v___y_1822_; lean_object* v_toCold_1835_; lean_object* v_options_1836_; uint8_t v_hasTrace_1837_; 
v_a_1811_ = lean_ctor_get(v___x_1810_, 0);
lean_inc(v_a_1811_);
lean_dec_ref_known(v___x_1810_, 1);
v_toCold_1835_ = lean_ctor_get(v_a_1799_, 0);
v_options_1836_ = lean_ctor_get(v_toCold_1835_, 2);
v_hasTrace_1837_ = lean_ctor_get_uint8(v_options_1836_, sizeof(void*)*1);
if (v_hasTrace_1837_ == 0)
{
v___y_1813_ = v_a_1791_;
v___y_1814_ = v_a_1792_;
v___y_1815_ = v_a_1793_;
v___y_1816_ = v_a_1794_;
v___y_1817_ = v_a_1795_;
v___y_1818_ = v_a_1796_;
v___y_1819_ = v_a_1797_;
v___y_1820_ = v_a_1798_;
v___y_1821_ = v_a_1799_;
v___y_1822_ = v_a_1800_;
goto v___jp_1812_;
}
else
{
lean_object* v_inheritedTraceOptions_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; uint8_t v___x_1841_; 
v_inheritedTraceOptions_1838_ = lean_ctor_get(v_toCold_1835_, 11);
v___x_1839_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__1));
v___x_1840_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2, &l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2_once, _init_l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg___closed__2);
v___x_1841_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_1838_, v_options_1836_, v___x_1840_);
if (v___x_1841_ == 0)
{
v___y_1813_ = v_a_1791_;
v___y_1814_ = v_a_1792_;
v___y_1815_ = v_a_1793_;
v___y_1816_ = v_a_1794_;
v___y_1817_ = v_a_1795_;
v___y_1818_ = v_a_1796_;
v___y_1819_ = v_a_1797_;
v___y_1820_ = v_a_1798_;
v___y_1821_ = v_a_1799_;
v___y_1822_ = v_a_1800_;
goto v___jp_1812_;
}
else
{
lean_object* v___x_1842_; 
v___x_1842_ = l_Lean_Meta_Grind_updateLastTag(v_a_1791_, v_a_1792_, v_a_1793_, v_a_1794_, v_a_1795_, v_a_1796_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
if (lean_obj_tag(v___x_1842_) == 0)
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; 
lean_dec_ref_known(v___x_1842_, 1);
v___x_1843_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__1, &l_Lean_Meta_Grind_propagateBeta___closed__1_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__1);
lean_inc_ref(v_fns_1790_);
v___x_1844_ = lean_array_to_list(v_fns_1790_);
v___x_1845_ = lean_box(0);
v___x_1846_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1844_, v___x_1845_);
v___x_1847_ = l_Lean_MessageData_ofList(v___x_1846_);
v___x_1848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1843_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
v___x_1849_ = lean_obj_once(&l_Lean_Meta_Grind_propagateBeta___closed__3, &l_Lean_Meta_Grind_propagateBeta___closed__3_once, _init_l_Lean_Meta_Grind_propagateBeta___closed__3);
v___x_1850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
lean_inc_ref(v_lams_1789_);
v___x_1851_ = lean_array_to_list(v_lams_1789_);
v___x_1852_ = l_List_mapTR_loop___at___00Lean_Meta_Grind_propagateBeta_spec__2(v___x_1851_, v___x_1845_);
v___x_1853_ = l_Lean_MessageData_ofList(v___x_1852_);
v___x_1854_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1854_, 0, v___x_1850_);
lean_ctor_set(v___x_1854_, 1, v___x_1853_);
v___x_1855_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_1839_, v___x_1854_, v_a_1797_, v_a_1798_, v_a_1799_, v_a_1800_);
if (lean_obj_tag(v___x_1855_) == 0)
{
lean_dec_ref_known(v___x_1855_, 1);
v___y_1813_ = v_a_1791_;
v___y_1814_ = v_a_1792_;
v___y_1815_ = v_a_1793_;
v___y_1816_ = v_a_1794_;
v___y_1817_ = v_a_1795_;
v___y_1818_ = v_a_1796_;
v___y_1819_ = v_a_1797_;
v___y_1820_ = v_a_1798_;
v___y_1821_ = v_a_1799_;
v___y_1822_ = v_a_1800_;
goto v___jp_1812_;
}
else
{
lean_dec(v_a_1811_);
lean_dec_ref(v_fns_1790_);
lean_dec_ref(v_lams_1789_);
return v___x_1855_;
}
}
else
{
lean_dec(v_a_1811_);
lean_dec_ref(v_fns_1790_);
lean_dec_ref(v_lams_1789_);
return v___x_1842_;
}
}
}
v___jp_1812_:
{
lean_object* v___x_1823_; size_t v_sz_1824_; size_t v___x_1825_; lean_object* v___x_1826_; 
v___x_1823_ = lean_box(0);
v_sz_1824_ = lean_array_size(v_fns_1790_);
v___x_1825_ = ((size_t)0ULL);
v___x_1826_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_propagateBeta_spec__3(v_a_1811_, v_lams_1789_, v_fns_1790_, v_sz_1824_, v___x_1825_, v___x_1823_, v___y_1813_, v___y_1814_, v___y_1815_, v___y_1816_, v___y_1817_, v___y_1818_, v___y_1819_, v___y_1820_, v___y_1821_, v___y_1822_);
lean_dec_ref(v_fns_1790_);
lean_dec_ref(v_lams_1789_);
lean_dec(v_a_1811_);
if (lean_obj_tag(v___x_1826_) == 0)
{
lean_object* v___x_1828_; uint8_t v_isShared_1829_; uint8_t v_isSharedCheck_1833_; 
v_isSharedCheck_1833_ = !lean_is_exclusive(v___x_1826_);
if (v_isSharedCheck_1833_ == 0)
{
lean_object* v_unused_1834_; 
v_unused_1834_ = lean_ctor_get(v___x_1826_, 0);
lean_dec(v_unused_1834_);
v___x_1828_ = v___x_1826_;
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
else
{
lean_dec(v___x_1826_);
v___x_1828_ = lean_box(0);
v_isShared_1829_ = v_isSharedCheck_1833_;
goto v_resetjp_1827_;
}
v_resetjp_1827_:
{
lean_object* v___x_1831_; 
if (v_isShared_1829_ == 0)
{
lean_ctor_set(v___x_1828_, 0, v___x_1823_);
v___x_1831_ = v___x_1828_;
goto v_reusejp_1830_;
}
else
{
lean_object* v_reuseFailAlloc_1832_; 
v_reuseFailAlloc_1832_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1832_, 0, v___x_1823_);
v___x_1831_ = v_reuseFailAlloc_1832_;
goto v_reusejp_1830_;
}
v_reusejp_1830_:
{
return v___x_1831_;
}
}
}
else
{
return v___x_1826_;
}
}
}
else
{
lean_object* v_a_1856_; lean_object* v___x_1858_; uint8_t v_isShared_1859_; uint8_t v_isSharedCheck_1863_; 
lean_dec_ref(v_fns_1790_);
lean_dec_ref(v_lams_1789_);
v_a_1856_ = lean_ctor_get(v___x_1810_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1810_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1858_ = v___x_1810_;
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
else
{
lean_inc(v_a_1856_);
lean_dec(v___x_1810_);
v___x_1858_ = lean_box(0);
v_isShared_1859_ = v_isSharedCheck_1863_;
goto v_resetjp_1857_;
}
v_resetjp_1857_:
{
lean_object* v___x_1861_; 
if (v_isShared_1859_ == 0)
{
v___x_1861_ = v___x_1858_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v_a_1856_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
}
else
{
lean_object* v___x_1864_; lean_object* v___x_1865_; 
lean_dec_ref(v_fns_1790_);
lean_dec_ref(v_lams_1789_);
v___x_1864_ = lean_box(0);
v___x_1865_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1865_, 0, v___x_1864_);
return v___x_1865_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateBeta___boxed(lean_object* v_lams_1866_, lean_object* v_fns_1867_, lean_object* v_a_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_Meta_Grind_propagateBeta(v_lams_1866_, v_fns_1867_, v_a_1868_, v_a_1869_, v_a_1870_, v_a_1871_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec(v_a_1873_);
lean_dec_ref(v_a_1872_);
lean_dec(v_a_1871_);
lean_dec_ref(v_a_1870_);
lean_dec(v_a_1869_);
lean_dec(v_a_1868_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0(lean_object* v_a_1880_, lean_object* v_a_1881_, lean_object* v_lams_1882_, lean_object* v_inst_1883_, lean_object* v_a_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_, lean_object* v___y_1887_, lean_object* v___y_1888_, lean_object* v___y_1889_, lean_object* v___y_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_){
_start:
{
lean_object* v___x_1896_; 
v___x_1896_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___redArg(v_a_1880_, v_a_1881_, v_lams_1882_, v_a_1884_, v___y_1885_, v___y_1886_, v___y_1887_, v___y_1888_, v___y_1889_, v___y_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
return v___x_1896_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0___boxed(lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_lams_1899_, lean_object* v_inst_1900_, lean_object* v_a_1901_, lean_object* v___y_1902_, lean_object* v___y_1903_, lean_object* v___y_1904_, lean_object* v___y_1905_, lean_object* v___y_1906_, lean_object* v___y_1907_, lean_object* v___y_1908_, lean_object* v___y_1909_, lean_object* v___y_1910_, lean_object* v___y_1911_, lean_object* v___y_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_Grind_propagateBeta_spec__0(v_a_1897_, v_a_1898_, v_lams_1899_, v_inst_1900_, v_a_1901_, v___y_1902_, v___y_1903_, v___y_1904_, v___y_1905_, v___y_1906_, v___y_1907_, v___y_1908_, v___y_1909_, v___y_1910_, v___y_1911_);
lean_dec(v___y_1911_);
lean_dec_ref(v___y_1910_);
lean_dec(v___y_1909_);
lean_dec_ref(v___y_1908_);
lean_dec(v___y_1907_);
lean_dec_ref(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec_ref(v___y_1904_);
lean_dec(v___y_1903_);
lean_dec(v___y_1902_);
lean_dec_ref(v_lams_1899_);
lean_dec_ref(v_a_1898_);
lean_dec_ref(v_a_1897_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(lean_object* v_a_1914_, lean_object* v_lams_1915_, lean_object* v_as_1916_, lean_object* v_as_x27_1917_, lean_object* v_b_1918_, lean_object* v_a_1919_, lean_object* v___y_1920_, lean_object* v___y_1921_, lean_object* v___y_1922_, lean_object* v___y_1923_, lean_object* v___y_1924_, lean_object* v___y_1925_, lean_object* v___y_1926_, lean_object* v___y_1927_, lean_object* v___y_1928_, lean_object* v___y_1929_){
_start:
{
lean_object* v___x_1931_; 
v___x_1931_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___redArg(v_a_1914_, v_lams_1915_, v_as_1916_, v_as_x27_1917_, v_b_1918_, v___y_1920_, v___y_1921_, v___y_1922_, v___y_1923_, v___y_1924_, v___y_1925_, v___y_1926_, v___y_1927_, v___y_1928_, v___y_1929_);
return v___x_1931_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1___boxed(lean_object** _args){
lean_object* v_a_1932_ = _args[0];
lean_object* v_lams_1933_ = _args[1];
lean_object* v_as_1934_ = _args[2];
lean_object* v_as_x27_1935_ = _args[3];
lean_object* v_b_1936_ = _args[4];
lean_object* v_a_1937_ = _args[5];
lean_object* v___y_1938_ = _args[6];
lean_object* v___y_1939_ = _args[7];
lean_object* v___y_1940_ = _args[8];
lean_object* v___y_1941_ = _args[9];
lean_object* v___y_1942_ = _args[10];
lean_object* v___y_1943_ = _args[11];
lean_object* v___y_1944_ = _args[12];
lean_object* v___y_1945_ = _args[13];
lean_object* v___y_1946_ = _args[14];
lean_object* v___y_1947_ = _args[15];
lean_object* v___y_1948_ = _args[16];
_start:
{
lean_object* v_res_1949_; 
v_res_1949_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1(v_a_1932_, v_lams_1933_, v_as_1934_, v_as_x27_1935_, v_b_1936_, v_a_1937_, v___y_1938_, v___y_1939_, v___y_1940_, v___y_1941_, v___y_1942_, v___y_1943_, v___y_1944_, v___y_1945_, v___y_1946_, v___y_1947_);
lean_dec(v___y_1947_);
lean_dec_ref(v___y_1946_);
lean_dec(v___y_1945_);
lean_dec_ref(v___y_1944_);
lean_dec(v___y_1943_);
lean_dec_ref(v___y_1942_);
lean_dec(v___y_1941_);
lean_dec_ref(v___y_1940_);
lean_dec(v___y_1939_);
lean_dec(v___y_1938_);
lean_dec(v_as_x27_1935_);
lean_dec(v_as_1934_);
lean_dec_ref(v_lams_1933_);
lean_dec_ref(v_a_1932_);
return v_res_1949_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(lean_object* v_a_1950_, lean_object* v_lams_1951_, lean_object* v_as_1952_, lean_object* v_as_x27_1953_, lean_object* v_b_1954_, lean_object* v_a_1955_, lean_object* v___y_1956_, lean_object* v___y_1957_, lean_object* v___y_1958_, lean_object* v___y_1959_, lean_object* v___y_1960_, lean_object* v___y_1961_, lean_object* v___y_1962_, lean_object* v___y_1963_, lean_object* v___y_1964_, lean_object* v___y_1965_){
_start:
{
lean_object* v___x_1967_; 
v___x_1967_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg(v_a_1950_, v_lams_1951_, v_as_x27_1953_, v_b_1954_, v___y_1956_, v___y_1957_, v___y_1958_, v___y_1959_, v___y_1960_, v___y_1961_, v___y_1962_, v___y_1963_, v___y_1964_, v___y_1965_);
return v___x_1967_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___boxed(lean_object** _args){
lean_object* v_a_1968_ = _args[0];
lean_object* v_lams_1969_ = _args[1];
lean_object* v_as_1970_ = _args[2];
lean_object* v_as_x27_1971_ = _args[3];
lean_object* v_b_1972_ = _args[4];
lean_object* v_a_1973_ = _args[5];
lean_object* v___y_1974_ = _args[6];
lean_object* v___y_1975_ = _args[7];
lean_object* v___y_1976_ = _args[8];
lean_object* v___y_1977_ = _args[9];
lean_object* v___y_1978_ = _args[10];
lean_object* v___y_1979_ = _args[11];
lean_object* v___y_1980_ = _args[12];
lean_object* v___y_1981_ = _args[13];
lean_object* v___y_1982_ = _args[14];
lean_object* v___y_1983_ = _args[15];
lean_object* v___y_1984_ = _args[16];
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1(v_a_1968_, v_lams_1969_, v_as_1970_, v_as_x27_1971_, v_b_1972_, v_a_1973_, v___y_1974_, v___y_1975_, v___y_1976_, v___y_1977_, v___y_1978_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_, v___y_1983_);
lean_dec(v___y_1983_);
lean_dec_ref(v___y_1982_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1979_);
lean_dec_ref(v___y_1978_);
lean_dec(v___y_1977_);
lean_dec_ref(v___y_1976_);
lean_dec(v___y_1975_);
lean_dec(v___y_1974_);
lean_dec(v_as_x27_1971_);
lean_dec(v_as_1970_);
lean_dec_ref(v_lams_1969_);
lean_dec_ref(v_a_1968_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(lean_object* v_d_1989_, lean_object* v_as_1990_, size_t v_sz_1991_, size_t v_i_1992_, lean_object* v_b_1993_){
_start:
{
lean_object* v_a_1995_; uint8_t v___x_1999_; 
v___x_1999_ = lean_usize_dec_lt(v_i_1992_, v_sz_1991_);
if (v___x_1999_ == 0)
{
lean_inc_ref(v_b_1993_);
return v_b_1993_;
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v_a_2002_; 
v___x_2000_ = lean_box(0);
v___x_2001_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0));
v_a_2002_ = lean_array_uget_borrowed(v_as_1990_, v_i_1992_);
if (lean_obj_tag(v_a_2002_) == 6)
{
lean_object* v_binderType_2003_; size_t v___x_2004_; size_t v___x_2005_; uint8_t v___x_2006_; 
v_binderType_2003_ = lean_ctor_get(v_a_2002_, 1);
v___x_2004_ = lean_ptr_addr(v_d_1989_);
v___x_2005_ = lean_ptr_addr(v_binderType_2003_);
v___x_2006_ = lean_usize_dec_eq(v___x_2004_, v___x_2005_);
if (v___x_2006_ == 0)
{
v_a_1995_ = v___x_2001_;
goto v___jp_1994_;
}
else
{
lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; 
lean_inc_ref(v_a_2002_);
v___x_2007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2007_, 0, v_a_2002_);
v___x_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
v___x_2009_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2009_, 0, v___x_2008_);
lean_ctor_set(v___x_2009_, 1, v___x_2000_);
return v___x_2009_;
}
}
else
{
v_a_1995_ = v___x_2001_;
goto v___jp_1994_;
}
}
v___jp_1994_:
{
size_t v___x_1996_; size_t v___x_1997_; 
v___x_1996_ = ((size_t)1ULL);
v___x_1997_ = lean_usize_add(v_i_1992_, v___x_1996_);
v_i_1992_ = v___x_1997_;
v_b_1993_ = v_a_1995_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___boxed(lean_object* v_d_2010_, lean_object* v_as_2011_, lean_object* v_sz_2012_, lean_object* v_i_2013_, lean_object* v_b_2014_){
_start:
{
size_t v_sz_boxed_2015_; size_t v_i_boxed_2016_; lean_object* v_res_2017_; 
v_sz_boxed_2015_ = lean_unbox_usize(v_sz_2012_);
lean_dec(v_sz_2012_);
v_i_boxed_2016_ = lean_unbox_usize(v_i_2013_);
lean_dec(v_i_2013_);
v_res_2017_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(v_d_2010_, v_as_2011_, v_sz_boxed_2015_, v_i_boxed_2016_, v_b_2014_);
lean_dec_ref(v_b_2014_);
lean_dec_ref(v_as_2011_);
lean_dec_ref(v_d_2010_);
return v_res_2017_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(lean_object* v_lams_2018_, lean_object* v_d_2019_){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; size_t v_sz_2022_; size_t v___x_2023_; lean_object* v___x_2024_; lean_object* v_fst_2025_; 
v___x_2020_ = lean_box(0);
v___x_2021_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0___closed__0));
v_sz_2022_ = lean_array_size(v_lams_2018_);
v___x_2023_ = ((size_t)0ULL);
v___x_2024_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f_spec__0(v_d_2019_, v_lams_2018_, v_sz_2022_, v___x_2023_, v___x_2021_);
v_fst_2025_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_fst_2025_);
lean_dec_ref(v___x_2024_);
if (lean_obj_tag(v_fst_2025_) == 0)
{
return v___x_2020_;
}
else
{
lean_object* v_val_2026_; 
v_val_2026_ = lean_ctor_get(v_fst_2025_, 0);
lean_inc(v_val_2026_);
lean_dec_ref_known(v_fst_2025_, 1);
return v_val_2026_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f___boxed(lean_object* v_lams_2027_, lean_object* v_d_2028_){
_start:
{
lean_object* v_res_2029_; 
v_res_2029_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(v_lams_2027_, v_d_2028_);
lean_dec_ref(v_d_2028_);
lean_dec_ref(v_lams_2027_);
return v_res_2029_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(lean_object* v_lams_u2082_2040_, lean_object* v_as_2041_, size_t v_sz_2042_, size_t v_i_2043_, lean_object* v_b_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_){
_start:
{
lean_object* v_a_2057_; uint8_t v___x_2061_; 
v___x_2061_ = lean_usize_dec_lt(v_i_2043_, v_sz_2042_);
if (v___x_2061_ == 0)
{
lean_object* v___x_2062_; 
v___x_2062_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2062_, 0, v_b_2044_);
return v___x_2062_;
}
else
{
lean_object* v___x_2063_; lean_object* v_a_2064_; 
v___x_2063_ = lean_box(0);
v_a_2064_ = lean_array_uget_borrowed(v_as_2041_, v_i_2043_);
if (lean_obj_tag(v_a_2064_) == 6)
{
lean_object* v_binderType_2065_; lean_object* v_body_2066_; lean_object* v___x_2067_; 
v_binderType_2065_ = lean_ctor_get(v_a_2064_, 1);
v_body_2066_ = lean_ctor_get(v_a_2064_, 2);
lean_inc_ref(v_binderType_2065_);
v___x_2067_ = l_Lean_Meta_getLevel(v_binderType_2065_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
if (lean_obj_tag(v___x_2067_) == 0)
{
lean_object* v_a_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v_a_2068_ = lean_ctor_get(v___x_2067_, 0);
lean_inc(v_a_2068_);
lean_dec_ref_known(v___x_2067_, 1);
v___x_2069_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__1));
v___x_2070_ = lean_box(0);
v___x_2071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2071_, 0, v_a_2068_);
lean_ctor_set(v___x_2071_, 1, v___x_2070_);
lean_inc_ref(v___x_2071_);
v___x_2072_ = l_Lean_mkConst(v___x_2069_, v___x_2071_);
lean_inc_ref(v_binderType_2065_);
v___x_2073_ = l_Lean_Expr_app___override(v___x_2072_, v_binderType_2065_);
v___x_2074_ = lean_box(0);
v___x_2075_ = l_Lean_Meta_synthInstance_x3f(v___x_2073_, v___x_2074_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
if (lean_obj_tag(v___x_2075_) == 0)
{
lean_object* v_a_2076_; 
v_a_2076_ = lean_ctor_get(v___x_2075_, 0);
lean_inc(v_a_2076_);
lean_dec_ref_known(v___x_2075_, 1);
if (lean_obj_tag(v_a_2076_) == 1)
{
lean_object* v_val_2077_; lean_object* v___y_2079_; lean_object* v___y_2080_; lean_object* v___y_2081_; lean_object* v___y_2082_; lean_object* v___y_2083_; lean_object* v___y_2084_; lean_object* v___y_2085_; lean_object* v___y_2086_; lean_object* v___y_2087_; lean_object* v___y_2088_; uint8_t v___x_2140_; 
v_val_2077_ = lean_ctor_get(v_a_2076_, 0);
lean_inc(v_val_2077_);
lean_dec_ref_known(v_a_2076_, 1);
v___x_2140_ = l_Lean_Expr_hasLooseBVars(v_body_2066_);
if (v___x_2140_ == 0)
{
v___y_2079_ = v___y_2045_;
v___y_2080_ = v___y_2046_;
v___y_2081_ = v___y_2047_;
v___y_2082_ = v___y_2048_;
v___y_2083_ = v___y_2049_;
v___y_2084_ = v___y_2050_;
v___y_2085_ = v___y_2051_;
v___y_2086_ = v___y_2052_;
v___y_2087_ = v___y_2053_;
v___y_2088_ = v___y_2054_;
goto v___jp_2078_;
}
else
{
lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___x_2141_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__5));
lean_inc_ref(v___x_2071_);
v___x_2142_ = l_Lean_mkConst(v___x_2141_, v___x_2071_);
lean_inc_ref(v_binderType_2065_);
v___x_2143_ = l_Lean_Expr_app___override(v___x_2142_, v_binderType_2065_);
v___x_2144_ = l_Lean_Meta_synthInstance_x3f(v___x_2143_, v___x_2074_, v___y_2051_, v___y_2052_, v___y_2053_, v___y_2054_);
if (lean_obj_tag(v___x_2144_) == 0)
{
lean_object* v_a_2145_; 
v_a_2145_ = lean_ctor_get(v___x_2144_, 0);
lean_inc(v_a_2145_);
lean_dec_ref_known(v___x_2144_, 1);
if (lean_obj_tag(v_a_2145_) == 0)
{
lean_dec(v_val_2077_);
lean_dec_ref_known(v___x_2071_, 2);
v_a_2057_ = v___x_2063_;
goto v___jp_2056_;
}
else
{
lean_dec_ref_known(v_a_2145_, 1);
v___y_2079_ = v___y_2045_;
v___y_2080_ = v___y_2046_;
v___y_2081_ = v___y_2047_;
v___y_2082_ = v___y_2048_;
v___y_2083_ = v___y_2049_;
v___y_2084_ = v___y_2050_;
v___y_2085_ = v___y_2051_;
v___y_2086_ = v___y_2052_;
v___y_2087_ = v___y_2053_;
v___y_2088_ = v___y_2054_;
goto v___jp_2078_;
}
}
else
{
lean_object* v_a_2146_; lean_object* v___x_2148_; uint8_t v_isShared_2149_; uint8_t v_isSharedCheck_2153_; 
lean_dec(v_val_2077_);
lean_dec_ref_known(v___x_2071_, 2);
v_a_2146_ = lean_ctor_get(v___x_2144_, 0);
v_isSharedCheck_2153_ = !lean_is_exclusive(v___x_2144_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2148_ = v___x_2144_;
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
else
{
lean_inc(v_a_2146_);
lean_dec(v___x_2144_);
v___x_2148_ = lean_box(0);
v_isShared_2149_ = v_isSharedCheck_2153_;
goto v_resetjp_2147_;
}
v_resetjp_2147_:
{
lean_object* v___x_2151_; 
if (v_isShared_2149_ == 0)
{
v___x_2151_ = v___x_2148_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_a_2146_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
return v___x_2151_;
}
}
}
}
v___jp_2078_:
{
lean_object* v___x_2089_; 
v___x_2089_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_getFunWithGivenDomain_x3f(v_lams_u2082_2040_, v_binderType_2065_);
if (lean_obj_tag(v___x_2089_) == 1)
{
lean_object* v_val_2090_; 
v_val_2090_ = lean_ctor_get(v___x_2089_, 0);
lean_inc(v_val_2090_);
lean_dec_ref_known(v___x_2089_, 1);
if (lean_obj_tag(v_val_2090_) == 6)
{
lean_object* v_body_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; 
v_body_2091_ = lean_ctor_get(v_val_2090_, 2);
v___x_2092_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___closed__3));
v___x_2093_ = l_Lean_mkConst(v___x_2092_, v___x_2071_);
lean_inc_ref(v_binderType_2065_);
v___x_2094_ = l_Lean_mkAppB(v___x_2093_, v_binderType_2065_, v_val_2077_);
v___x_2095_ = l_Lean_Meta_Grind_preprocessLight___redArg(v___x_2094_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; lean_object* v___x_2097_; lean_object* v___x_2098_; lean_object* v___x_2099_; 
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_a_2096_);
lean_dec_ref_known(v___x_2095_, 1);
v___x_2097_ = lean_expr_instantiate1(v_body_2066_, v_a_2096_);
v___x_2098_ = lean_expr_instantiate1(v_body_2091_, v_a_2096_);
lean_inc(v___y_2088_);
lean_inc_ref(v___y_2087_);
lean_inc(v___y_2086_);
lean_inc_ref(v___y_2085_);
lean_inc(v___y_2084_);
lean_inc_ref(v___y_2083_);
lean_inc(v___y_2082_);
lean_inc_ref(v___y_2081_);
lean_inc(v___y_2080_);
lean_inc(v___y_2079_);
lean_inc_ref(v_a_2064_);
v___x_2099_ = lean_grind_mk_eq_proof(v_a_2064_, v_val_2090_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2099_) == 0)
{
lean_object* v_a_2100_; lean_object* v___x_2101_; 
v_a_2100_ = lean_ctor_get(v___x_2099_, 0);
lean_inc(v_a_2100_);
lean_dec_ref_known(v___x_2099_, 1);
v___x_2101_ = l_Lean_Meta_mkCongrFun(v_a_2100_, v_a_2096_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_object* v_a_2102_; lean_object* v___x_2103_; 
v_a_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_a_2102_);
lean_dec_ref_known(v___x_2101_, 1);
v___x_2103_ = l_Lean_Meta_mkEq(v___x_2097_, v___x_2098_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2103_, 1);
v___x_2105_ = l_Lean_Meta_mkExpectedPropHint(v_a_2102_, v_a_2104_);
v___x_2106_ = lean_unsigned_to_nat(0u);
v___x_2107_ = l_Lean_Meta_Grind_pushNewFact(v___x_2105_, v___x_2106_, v___y_2079_, v___y_2080_, v___y_2081_, v___y_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_, v___y_2087_, v___y_2088_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_dec_ref_known(v___x_2107_, 1);
v_a_2057_ = v___x_2063_;
goto v___jp_2056_;
}
else
{
return v___x_2107_;
}
}
else
{
lean_object* v_a_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2115_; 
lean_dec(v_a_2102_);
v_a_2108_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2115_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2115_ == 0)
{
v___x_2110_ = v___x_2103_;
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_a_2108_);
lean_dec(v___x_2103_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2115_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
lean_object* v___x_2113_; 
if (v_isShared_2111_ == 0)
{
v___x_2113_ = v___x_2110_;
goto v_reusejp_2112_;
}
else
{
lean_object* v_reuseFailAlloc_2114_; 
v_reuseFailAlloc_2114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2114_, 0, v_a_2108_);
v___x_2113_ = v_reuseFailAlloc_2114_;
goto v_reusejp_2112_;
}
v_reusejp_2112_:
{
return v___x_2113_;
}
}
}
}
else
{
lean_object* v_a_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2123_; 
lean_dec_ref(v___x_2098_);
lean_dec_ref(v___x_2097_);
v_a_2116_ = lean_ctor_get(v___x_2101_, 0);
v_isSharedCheck_2123_ = !lean_is_exclusive(v___x_2101_);
if (v_isSharedCheck_2123_ == 0)
{
v___x_2118_ = v___x_2101_;
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_a_2116_);
lean_dec(v___x_2101_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2123_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2121_; 
if (v_isShared_2119_ == 0)
{
v___x_2121_ = v___x_2118_;
goto v_reusejp_2120_;
}
else
{
lean_object* v_reuseFailAlloc_2122_; 
v_reuseFailAlloc_2122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2122_, 0, v_a_2116_);
v___x_2121_ = v_reuseFailAlloc_2122_;
goto v_reusejp_2120_;
}
v_reusejp_2120_:
{
return v___x_2121_;
}
}
}
}
else
{
lean_object* v_a_2124_; lean_object* v___x_2126_; uint8_t v_isShared_2127_; uint8_t v_isSharedCheck_2131_; 
lean_dec_ref(v___x_2098_);
lean_dec_ref(v___x_2097_);
lean_dec(v_a_2096_);
v_a_2124_ = lean_ctor_get(v___x_2099_, 0);
v_isSharedCheck_2131_ = !lean_is_exclusive(v___x_2099_);
if (v_isSharedCheck_2131_ == 0)
{
v___x_2126_ = v___x_2099_;
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
else
{
lean_inc(v_a_2124_);
lean_dec(v___x_2099_);
v___x_2126_ = lean_box(0);
v_isShared_2127_ = v_isSharedCheck_2131_;
goto v_resetjp_2125_;
}
v_resetjp_2125_:
{
lean_object* v___x_2129_; 
if (v_isShared_2127_ == 0)
{
v___x_2129_ = v___x_2126_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_a_2124_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec_ref_known(v_val_2090_, 3);
v_a_2132_ = lean_ctor_get(v___x_2095_, 0);
v_isSharedCheck_2139_ = !lean_is_exclusive(v___x_2095_);
if (v_isSharedCheck_2139_ == 0)
{
v___x_2134_ = v___x_2095_;
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
else
{
lean_inc(v_a_2132_);
lean_dec(v___x_2095_);
v___x_2134_ = lean_box(0);
v_isShared_2135_ = v_isSharedCheck_2139_;
goto v_resetjp_2133_;
}
v_resetjp_2133_:
{
lean_object* v___x_2137_; 
if (v_isShared_2135_ == 0)
{
v___x_2137_ = v___x_2134_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2138_; 
v_reuseFailAlloc_2138_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2138_, 0, v_a_2132_);
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
lean_dec(v_val_2090_);
lean_dec(v_val_2077_);
lean_dec_ref_known(v___x_2071_, 2);
v_a_2057_ = v___x_2063_;
goto v___jp_2056_;
}
}
else
{
lean_dec(v___x_2089_);
lean_dec(v_val_2077_);
lean_dec_ref_known(v___x_2071_, 2);
v_a_2057_ = v___x_2063_;
goto v___jp_2056_;
}
}
}
else
{
lean_dec(v_a_2076_);
lean_dec_ref_known(v___x_2071_, 2);
v_a_2057_ = v___x_2063_;
goto v___jp_2056_;
}
}
else
{
lean_object* v_a_2154_; lean_object* v___x_2156_; uint8_t v_isShared_2157_; uint8_t v_isSharedCheck_2161_; 
lean_dec_ref_known(v___x_2071_, 2);
v_a_2154_ = lean_ctor_get(v___x_2075_, 0);
v_isSharedCheck_2161_ = !lean_is_exclusive(v___x_2075_);
if (v_isSharedCheck_2161_ == 0)
{
v___x_2156_ = v___x_2075_;
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
else
{
lean_inc(v_a_2154_);
lean_dec(v___x_2075_);
v___x_2156_ = lean_box(0);
v_isShared_2157_ = v_isSharedCheck_2161_;
goto v_resetjp_2155_;
}
v_resetjp_2155_:
{
lean_object* v___x_2159_; 
if (v_isShared_2157_ == 0)
{
v___x_2159_ = v___x_2156_;
goto v_reusejp_2158_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_a_2154_);
v___x_2159_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2158_;
}
v_reusejp_2158_:
{
return v___x_2159_;
}
}
}
}
else
{
lean_object* v_a_2162_; lean_object* v___x_2164_; uint8_t v_isShared_2165_; uint8_t v_isSharedCheck_2169_; 
v_a_2162_ = lean_ctor_get(v___x_2067_, 0);
v_isSharedCheck_2169_ = !lean_is_exclusive(v___x_2067_);
if (v_isSharedCheck_2169_ == 0)
{
v___x_2164_ = v___x_2067_;
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
else
{
lean_inc(v_a_2162_);
lean_dec(v___x_2067_);
v___x_2164_ = lean_box(0);
v_isShared_2165_ = v_isSharedCheck_2169_;
goto v_resetjp_2163_;
}
v_resetjp_2163_:
{
lean_object* v___x_2167_; 
if (v_isShared_2165_ == 0)
{
v___x_2167_ = v___x_2164_;
goto v_reusejp_2166_;
}
else
{
lean_object* v_reuseFailAlloc_2168_; 
v_reuseFailAlloc_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2168_, 0, v_a_2162_);
v___x_2167_ = v_reuseFailAlloc_2168_;
goto v_reusejp_2166_;
}
v_reusejp_2166_:
{
return v___x_2167_;
}
}
}
}
else
{
v_a_2057_ = v___x_2063_;
goto v___jp_2056_;
}
}
v___jp_2056_:
{
size_t v___x_2058_; size_t v___x_2059_; 
v___x_2058_ = ((size_t)1ULL);
v___x_2059_ = lean_usize_add(v_i_2043_, v___x_2058_);
v_i_2043_ = v___x_2059_;
v_b_2044_ = v_a_2057_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0___boxed(lean_object* v_lams_u2082_2170_, lean_object* v_as_2171_, lean_object* v_sz_2172_, lean_object* v_i_2173_, lean_object* v_b_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_, lean_object* v___y_2177_, lean_object* v___y_2178_, lean_object* v___y_2179_, lean_object* v___y_2180_, lean_object* v___y_2181_, lean_object* v___y_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_){
_start:
{
size_t v_sz_boxed_2186_; size_t v_i_boxed_2187_; lean_object* v_res_2188_; 
v_sz_boxed_2186_ = lean_unbox_usize(v_sz_2172_);
lean_dec(v_sz_2172_);
v_i_boxed_2187_ = lean_unbox_usize(v_i_2173_);
lean_dec(v_i_2173_);
v_res_2188_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(v_lams_u2082_2170_, v_as_2171_, v_sz_boxed_2186_, v_i_boxed_2187_, v_b_2174_, v___y_2175_, v___y_2176_, v___y_2177_, v___y_2178_, v___y_2179_, v___y_2180_, v___y_2181_, v___y_2182_, v___y_2183_, v___y_2184_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec(v___y_2182_);
lean_dec_ref(v___y_2181_);
lean_dec(v___y_2180_);
lean_dec_ref(v___y_2179_);
lean_dec(v___y_2178_);
lean_dec_ref(v___y_2177_);
lean_dec(v___y_2176_);
lean_dec(v___y_2175_);
lean_dec_ref(v_as_2171_);
lean_dec_ref(v_lams_u2082_2170_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(lean_object* v_lams_u2081_2189_, lean_object* v_lams_u2082_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_){
_start:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; uint8_t v___x_2207_; 
v___x_2205_ = lean_array_get_size(v_lams_u2081_2189_);
v___x_2206_ = lean_unsigned_to_nat(0u);
v___x_2207_ = lean_nat_dec_eq(v___x_2205_, v___x_2206_);
if (v___x_2207_ == 0)
{
lean_object* v___x_2208_; uint8_t v___x_2209_; 
v___x_2208_ = lean_array_get_size(v_lams_u2082_2190_);
v___x_2209_ = lean_nat_dec_eq(v___x_2208_, v___x_2206_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; size_t v_sz_2211_; size_t v___x_2212_; lean_object* v___x_2213_; 
v___x_2210_ = lean_box(0);
v_sz_2211_ = lean_array_size(v_lams_u2081_2189_);
v___x_2212_ = ((size_t)0ULL);
v___x_2213_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns_spec__0(v_lams_u2082_2190_, v_lams_u2081_2189_, v_sz_2211_, v___x_2212_, v___x_2210_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_, v_a_2199_, v_a_2200_);
if (lean_obj_tag(v___x_2213_) == 0)
{
lean_object* v___x_2215_; uint8_t v_isShared_2216_; uint8_t v_isSharedCheck_2220_; 
v_isSharedCheck_2220_ = !lean_is_exclusive(v___x_2213_);
if (v_isSharedCheck_2220_ == 0)
{
lean_object* v_unused_2221_; 
v_unused_2221_ = lean_ctor_get(v___x_2213_, 0);
lean_dec(v_unused_2221_);
v___x_2215_ = v___x_2213_;
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
else
{
lean_dec(v___x_2213_);
v___x_2215_ = lean_box(0);
v_isShared_2216_ = v_isSharedCheck_2220_;
goto v_resetjp_2214_;
}
v_resetjp_2214_:
{
lean_object* v___x_2218_; 
if (v_isShared_2216_ == 0)
{
lean_ctor_set(v___x_2215_, 0, v___x_2210_);
v___x_2218_ = v___x_2215_;
goto v_reusejp_2217_;
}
else
{
lean_object* v_reuseFailAlloc_2219_; 
v_reuseFailAlloc_2219_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2219_, 0, v___x_2210_);
v___x_2218_ = v_reuseFailAlloc_2219_;
goto v_reusejp_2217_;
}
v_reusejp_2217_:
{
return v___x_2218_;
}
}
}
else
{
return v___x_2213_;
}
}
else
{
goto v___jp_2202_;
}
}
else
{
goto v___jp_2202_;
}
v___jp_2202_:
{
lean_object* v___x_2203_; lean_object* v___x_2204_; 
v___x_2203_ = lean_box(0);
v___x_2204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2203_);
return v___x_2204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns___boxed(lean_object* v_lams_u2081_2222_, lean_object* v_lams_u2082_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, lean_object* v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_){
_start:
{
lean_object* v_res_2235_; 
v_res_2235_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(v_lams_u2081_2222_, v_lams_u2082_2223_, v_a_2224_, v_a_2225_, v_a_2226_, v_a_2227_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_);
lean_dec(v_a_2233_);
lean_dec_ref(v_a_2232_);
lean_dec(v_a_2231_);
lean_dec_ref(v_a_2230_);
lean_dec(v_a_2229_);
lean_dec_ref(v_a_2228_);
lean_dec(v_a_2227_);
lean_dec_ref(v_a_2226_);
lean_dec(v_a_2225_);
lean_dec(v_a_2224_);
lean_dec_ref(v_lams_u2082_2223_);
lean_dec_ref(v_lams_u2081_2222_);
return v_res_2235_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(lean_object* v_x_2236_){
_start:
{
uint8_t v___x_2237_; 
v___x_2237_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_2236_);
return v___x_2237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg___boxed(lean_object* v_x_2238_){
_start:
{
uint8_t v_res_2239_; lean_object* v_r_2240_; 
v_res_2239_ = l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___redArg(v_x_2238_);
lean_dec_ref(v_x_2238_);
v_r_2240_ = lean_box(v_res_2239_);
return v_r_2240_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(lean_object* v_00_u03b2_2241_, lean_object* v_x_2242_){
_start:
{
uint8_t v___x_2243_; 
v___x_2243_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_2242_);
return v___x_2243_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0___boxed(lean_object* v_00_u03b2_2244_, lean_object* v_x_2245_){
_start:
{
uint8_t v_res_2246_; lean_object* v_r_2247_; 
v_res_2246_ = l_Lean_PersistentHashMap_isEmpty___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__0(v_00_u03b2_2244_, v_x_2245_);
lean_dec_ref(v_x_2245_);
v_r_2247_ = lean_box(v_res_2246_);
return v_r_2247_;
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(lean_object* v_xs_2248_, lean_object* v_v_2249_, lean_object* v_i_2250_){
_start:
{
lean_object* v___x_2251_; uint8_t v___x_2252_; 
v___x_2251_ = lean_array_get_size(v_xs_2248_);
v___x_2252_ = lean_nat_dec_lt(v_i_2250_, v___x_2251_);
if (v___x_2252_ == 0)
{
lean_object* v___x_2253_; 
lean_dec(v_i_2250_);
v___x_2253_ = lean_box(0);
return v___x_2253_;
}
else
{
lean_object* v___x_2254_; size_t v___x_2255_; size_t v___x_2256_; uint8_t v___x_2257_; 
v___x_2254_ = lean_array_fget_borrowed(v_xs_2248_, v_i_2250_);
v___x_2255_ = lean_ptr_addr(v___x_2254_);
v___x_2256_ = lean_ptr_addr(v_v_2249_);
v___x_2257_ = lean_usize_dec_eq(v___x_2255_, v___x_2256_);
if (v___x_2257_ == 0)
{
lean_object* v___x_2258_; lean_object* v___x_2259_; 
v___x_2258_ = lean_unsigned_to_nat(1u);
v___x_2259_ = lean_nat_add(v_i_2250_, v___x_2258_);
lean_dec(v_i_2250_);
v_i_2250_ = v___x_2259_;
goto _start;
}
else
{
lean_object* v___x_2261_; 
v___x_2261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2261_, 0, v_i_2250_);
return v___x_2261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8___boxed(lean_object* v_xs_2262_, lean_object* v_v_2263_, lean_object* v_i_2264_){
_start:
{
lean_object* v_res_2265_; 
v_res_2265_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(v_xs_2262_, v_v_2263_, v_i_2264_);
lean_dec_ref(v_v_2263_);
lean_dec_ref(v_xs_2262_);
return v_res_2265_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(lean_object* v_xs_2266_, lean_object* v_v_2267_){
_start:
{
lean_object* v___x_2268_; lean_object* v___x_2269_; 
v___x_2268_ = lean_unsigned_to_nat(0u);
v___x_2269_ = l_Array_idxOfAux___at___00Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5_spec__8(v_xs_2266_, v_v_2267_, v___x_2268_);
return v___x_2269_;
}
}
LEAN_EXPORT lean_object* l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5___boxed(lean_object* v_xs_2270_, lean_object* v_v_2271_){
_start:
{
lean_object* v_res_2272_; 
v_res_2272_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(v_xs_2270_, v_v_2271_);
lean_dec_ref(v_v_2271_);
lean_dec_ref(v_xs_2270_);
return v_res_2272_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(lean_object* v_x_2273_, size_t v_x_2274_, lean_object* v_x_2275_){
_start:
{
if (lean_obj_tag(v_x_2273_) == 0)
{
lean_object* v_es_2276_; lean_object* v___x_2277_; size_t v___x_2278_; size_t v___x_2279_; lean_object* v_j_2280_; lean_object* v_entry_2281_; 
v_es_2276_ = lean_ctor_get(v_x_2273_, 0);
v___x_2277_ = lean_box(2);
v___x_2278_ = ((size_t)31ULL);
v___x_2279_ = lean_usize_land(v_x_2274_, v___x_2278_);
v_j_2280_ = lean_usize_to_nat(v___x_2279_);
v_entry_2281_ = lean_array_get(v___x_2277_, v_es_2276_, v_j_2280_);
switch(lean_obj_tag(v_entry_2281_))
{
case 0:
{
lean_object* v_key_2282_; size_t v___x_2283_; size_t v___x_2284_; uint8_t v___x_2285_; 
v_key_2282_ = lean_ctor_get(v_entry_2281_, 0);
lean_inc(v_key_2282_);
lean_dec_ref_known(v_entry_2281_, 2);
v___x_2283_ = lean_ptr_addr(v_x_2275_);
v___x_2284_ = lean_ptr_addr(v_key_2282_);
lean_dec(v_key_2282_);
v___x_2285_ = lean_usize_dec_eq(v___x_2283_, v___x_2284_);
if (v___x_2285_ == 0)
{
lean_dec(v_j_2280_);
return v_x_2273_;
}
else
{
lean_object* v___x_2287_; uint8_t v_isShared_2288_; uint8_t v_isSharedCheck_2293_; 
lean_inc_ref(v_es_2276_);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_x_2273_);
if (v_isSharedCheck_2293_ == 0)
{
lean_object* v_unused_2294_; 
v_unused_2294_ = lean_ctor_get(v_x_2273_, 0);
lean_dec(v_unused_2294_);
v___x_2287_ = v_x_2273_;
v_isShared_2288_ = v_isSharedCheck_2293_;
goto v_resetjp_2286_;
}
else
{
lean_dec(v_x_2273_);
v___x_2287_ = lean_box(0);
v_isShared_2288_ = v_isSharedCheck_2293_;
goto v_resetjp_2286_;
}
v_resetjp_2286_:
{
lean_object* v___x_2289_; lean_object* v___x_2291_; 
v___x_2289_ = lean_array_set(v_es_2276_, v_j_2280_, v___x_2277_);
lean_dec(v_j_2280_);
if (v_isShared_2288_ == 0)
{
lean_ctor_set(v___x_2287_, 0, v___x_2289_);
v___x_2291_ = v___x_2287_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v___x_2289_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
case 1:
{
lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2329_; 
lean_inc_ref(v_es_2276_);
v_isSharedCheck_2329_ = !lean_is_exclusive(v_x_2273_);
if (v_isSharedCheck_2329_ == 0)
{
lean_object* v_unused_2330_; 
v_unused_2330_ = lean_ctor_get(v_x_2273_, 0);
lean_dec(v_unused_2330_);
v___x_2296_ = v_x_2273_;
v_isShared_2297_ = v_isSharedCheck_2329_;
goto v_resetjp_2295_;
}
else
{
lean_dec(v_x_2273_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2329_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v_node_2298_; lean_object* v___x_2300_; uint8_t v_isShared_2301_; uint8_t v_isSharedCheck_2328_; 
v_node_2298_ = lean_ctor_get(v_entry_2281_, 0);
v_isSharedCheck_2328_ = !lean_is_exclusive(v_entry_2281_);
if (v_isSharedCheck_2328_ == 0)
{
v___x_2300_ = v_entry_2281_;
v_isShared_2301_ = v_isSharedCheck_2328_;
goto v_resetjp_2299_;
}
else
{
lean_inc(v_node_2298_);
lean_dec(v_entry_2281_);
v___x_2300_ = lean_box(0);
v_isShared_2301_ = v_isSharedCheck_2328_;
goto v_resetjp_2299_;
}
v_resetjp_2299_:
{
size_t v___x_2302_; lean_object* v_entries_2303_; size_t v___x_2304_; lean_object* v_newNode_2305_; lean_object* v___x_2306_; 
v___x_2302_ = ((size_t)5ULL);
v_entries_2303_ = lean_array_set(v_es_2276_, v_j_2280_, v___x_2277_);
v___x_2304_ = lean_usize_shift_right(v_x_2274_, v___x_2302_);
v_newNode_2305_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_node_2298_, v___x_2304_, v_x_2275_);
lean_inc_ref(v_newNode_2305_);
v___x_2306_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_2305_);
if (lean_obj_tag(v___x_2306_) == 0)
{
lean_object* v___x_2308_; 
if (v_isShared_2301_ == 0)
{
lean_ctor_set(v___x_2300_, 0, v_newNode_2305_);
v___x_2308_ = v___x_2300_;
goto v_reusejp_2307_;
}
else
{
lean_object* v_reuseFailAlloc_2313_; 
v_reuseFailAlloc_2313_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2313_, 0, v_newNode_2305_);
v___x_2308_ = v_reuseFailAlloc_2313_;
goto v_reusejp_2307_;
}
v_reusejp_2307_:
{
lean_object* v___x_2309_; lean_object* v___x_2311_; 
v___x_2309_ = lean_array_set(v_entries_2303_, v_j_2280_, v___x_2308_);
lean_dec(v_j_2280_);
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 0, v___x_2309_);
v___x_2311_ = v___x_2296_;
goto v_reusejp_2310_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v___x_2309_);
v___x_2311_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2310_;
}
v_reusejp_2310_:
{
return v___x_2311_;
}
}
}
else
{
lean_object* v_val_2314_; lean_object* v_fst_2315_; lean_object* v_snd_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2327_; 
lean_dec_ref(v_newNode_2305_);
lean_del_object(v___x_2300_);
v_val_2314_ = lean_ctor_get(v___x_2306_, 0);
lean_inc(v_val_2314_);
lean_dec_ref_known(v___x_2306_, 1);
v_fst_2315_ = lean_ctor_get(v_val_2314_, 0);
v_snd_2316_ = lean_ctor_get(v_val_2314_, 1);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_val_2314_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2318_ = v_val_2314_;
v_isShared_2319_ = v_isSharedCheck_2327_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_snd_2316_);
lean_inc(v_fst_2315_);
lean_dec(v_val_2314_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2327_;
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
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_fst_2315_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_snd_2316_);
v___x_2321_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
lean_object* v___x_2322_; lean_object* v___x_2324_; 
v___x_2322_ = lean_array_set(v_entries_2303_, v_j_2280_, v___x_2321_);
lean_dec(v_j_2280_);
if (v_isShared_2297_ == 0)
{
lean_ctor_set(v___x_2296_, 0, v___x_2322_);
v___x_2324_ = v___x_2296_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2325_; 
v_reuseFailAlloc_2325_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2325_, 0, v___x_2322_);
v___x_2324_ = v_reuseFailAlloc_2325_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
return v___x_2324_;
}
}
}
}
}
}
}
default: 
{
lean_dec(v_j_2280_);
return v_x_2273_;
}
}
}
else
{
lean_object* v_ks_2331_; lean_object* v_vs_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2346_; 
v_ks_2331_ = lean_ctor_get(v_x_2273_, 0);
v_vs_2332_ = lean_ctor_get(v_x_2273_, 1);
v_isSharedCheck_2346_ = !lean_is_exclusive(v_x_2273_);
if (v_isSharedCheck_2346_ == 0)
{
v___x_2334_ = v_x_2273_;
v_isShared_2335_ = v_isSharedCheck_2346_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_vs_2332_);
lean_inc(v_ks_2331_);
lean_dec(v_x_2273_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2346_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2336_; 
v___x_2336_ = l_Array_finIdxOf_x3f___at___00Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3_spec__5(v_ks_2331_, v_x_2275_);
if (lean_obj_tag(v___x_2336_) == 0)
{
lean_object* v___x_2338_; 
if (v_isShared_2335_ == 0)
{
v___x_2338_ = v___x_2334_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v_ks_2331_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v_vs_2332_);
v___x_2338_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
return v___x_2338_;
}
}
else
{
lean_object* v_val_2340_; lean_object* v_keys_x27_2341_; lean_object* v_vals_x27_2342_; lean_object* v___x_2344_; 
v_val_2340_ = lean_ctor_get(v___x_2336_, 0);
lean_inc_n(v_val_2340_, 2);
lean_dec_ref_known(v___x_2336_, 1);
v_keys_x27_2341_ = l_Array_eraseIdx___redArg(v_ks_2331_, v_val_2340_);
v_vals_x27_2342_ = l_Array_eraseIdx___redArg(v_vs_2332_, v_val_2340_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v_vals_x27_2342_);
lean_ctor_set(v___x_2334_, 0, v_keys_x27_2341_);
v___x_2344_ = v___x_2334_;
goto v_reusejp_2343_;
}
else
{
lean_object* v_reuseFailAlloc_2345_; 
v_reuseFailAlloc_2345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2345_, 0, v_keys_x27_2341_);
lean_ctor_set(v_reuseFailAlloc_2345_, 1, v_vals_x27_2342_);
v___x_2344_ = v_reuseFailAlloc_2345_;
goto v_reusejp_2343_;
}
v_reusejp_2343_:
{
return v___x_2344_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg___boxed(lean_object* v_x_2347_, lean_object* v_x_2348_, lean_object* v_x_2349_){
_start:
{
size_t v_x_20834__boxed_2350_; lean_object* v_res_2351_; 
v_x_20834__boxed_2350_ = lean_unbox_usize(v_x_2348_);
lean_dec(v_x_2348_);
v_res_2351_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2347_, v_x_20834__boxed_2350_, v_x_2349_);
lean_dec_ref(v_x_2349_);
return v_res_2351_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(lean_object* v_x_2352_, lean_object* v_x_2353_){
_start:
{
size_t v___x_2354_; size_t v___x_2355_; size_t v___x_2356_; uint64_t v___x_2357_; size_t v_h_2358_; lean_object* v___x_2359_; 
v___x_2354_ = lean_ptr_addr(v_x_2353_);
v___x_2355_ = ((size_t)3ULL);
v___x_2356_ = lean_usize_shift_right(v___x_2354_, v___x_2355_);
v___x_2357_ = lean_usize_to_uint64(v___x_2356_);
v_h_2358_ = lean_uint64_to_usize(v___x_2357_);
v___x_2359_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2352_, v_h_2358_, v_x_2353_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg___boxed(lean_object* v_x_2360_, lean_object* v_x_2361_){
_start:
{
lean_object* v_res_2362_; 
v_res_2362_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_x_2360_, v_x_2361_);
lean_dec_ref(v_x_2361_);
return v_res_2362_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(lean_object* v_as_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_, lean_object* v___y_2369_, lean_object* v___y_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_){
_start:
{
if (lean_obj_tag(v_as_2363_) == 0)
{
lean_object* v___x_2375_; lean_object* v___x_2376_; 
v___x_2375_ = lean_box(0);
v___x_2376_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2376_, 0, v___x_2375_);
return v___x_2376_;
}
else
{
lean_object* v_head_2377_; lean_object* v_tail_2378_; lean_object* v___x_2379_; 
v_head_2377_ = lean_ctor_get(v_as_2363_, 0);
lean_inc(v_head_2377_);
v_tail_2378_ = lean_ctor_get(v_as_2363_, 1);
lean_inc(v_tail_2378_);
lean_dec_ref_known(v_as_2363_, 2);
v___x_2379_ = l_Lean_Meta_Grind_DelayedTheoremInstance_check(v_head_2377_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_, v___y_2368_, v___y_2369_, v___y_2370_, v___y_2371_, v___y_2372_, v___y_2373_);
if (lean_obj_tag(v___x_2379_) == 0)
{
lean_dec_ref_known(v___x_2379_, 1);
v_as_2363_ = v_tail_2378_;
goto _start;
}
else
{
lean_dec(v_tail_2378_);
return v___x_2379_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3___boxed(lean_object* v_as_2381_, lean_object* v___y_2382_, lean_object* v___y_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(v_as_2381_, v___y_2382_, v___y_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_);
lean_dec(v___y_2391_);
lean_dec_ref(v___y_2390_);
lean_dec(v___y_2389_);
lean_dec_ref(v___y_2388_);
lean_dec(v___y_2387_);
lean_dec_ref(v___y_2386_);
lean_dec(v___y_2385_);
lean_dec_ref(v___y_2384_);
lean_dec(v___y_2383_);
lean_dec(v___y_2382_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(lean_object* v_keys_2394_, lean_object* v_vals_2395_, lean_object* v_i_2396_, lean_object* v_k_2397_){
_start:
{
lean_object* v___x_2398_; uint8_t v___x_2399_; 
v___x_2398_ = lean_array_get_size(v_keys_2394_);
v___x_2399_ = lean_nat_dec_lt(v_i_2396_, v___x_2398_);
if (v___x_2399_ == 0)
{
lean_object* v___x_2400_; 
lean_dec(v_i_2396_);
v___x_2400_ = lean_box(0);
return v___x_2400_;
}
else
{
lean_object* v_k_x27_2401_; size_t v___x_2402_; size_t v___x_2403_; uint8_t v___x_2404_; 
v_k_x27_2401_ = lean_array_fget_borrowed(v_keys_2394_, v_i_2396_);
v___x_2402_ = lean_ptr_addr(v_k_2397_);
v___x_2403_ = lean_ptr_addr(v_k_x27_2401_);
v___x_2404_ = lean_usize_dec_eq(v___x_2402_, v___x_2403_);
if (v___x_2404_ == 0)
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = lean_unsigned_to_nat(1u);
v___x_2406_ = lean_nat_add(v_i_2396_, v___x_2405_);
lean_dec(v_i_2396_);
v_i_2396_ = v___x_2406_;
goto _start;
}
else
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = lean_array_fget_borrowed(v_vals_2395_, v_i_2396_);
lean_dec(v_i_2396_);
lean_inc(v___x_2408_);
v___x_2409_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2409_, 0, v___x_2408_);
return v___x_2409_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg___boxed(lean_object* v_keys_2410_, lean_object* v_vals_2411_, lean_object* v_i_2412_, lean_object* v_k_2413_){
_start:
{
lean_object* v_res_2414_; 
v_res_2414_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_keys_2410_, v_vals_2411_, v_i_2412_, v_k_2413_);
lean_dec_ref(v_k_2413_);
lean_dec_ref(v_vals_2411_);
lean_dec_ref(v_keys_2410_);
return v_res_2414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(lean_object* v_x_2415_, size_t v_x_2416_, lean_object* v_x_2417_){
_start:
{
if (lean_obj_tag(v_x_2415_) == 0)
{
lean_object* v_es_2418_; lean_object* v___x_2419_; size_t v___x_2420_; size_t v___x_2421_; lean_object* v_j_2422_; lean_object* v___x_2423_; 
v_es_2418_ = lean_ctor_get(v_x_2415_, 0);
v___x_2419_ = lean_box(2);
v___x_2420_ = ((size_t)31ULL);
v___x_2421_ = lean_usize_land(v_x_2416_, v___x_2420_);
v_j_2422_ = lean_usize_to_nat(v___x_2421_);
v___x_2423_ = lean_array_get_borrowed(v___x_2419_, v_es_2418_, v_j_2422_);
lean_dec(v_j_2422_);
switch(lean_obj_tag(v___x_2423_))
{
case 0:
{
lean_object* v_key_2424_; lean_object* v_val_2425_; size_t v___x_2426_; size_t v___x_2427_; uint8_t v___x_2428_; 
v_key_2424_ = lean_ctor_get(v___x_2423_, 0);
v_val_2425_ = lean_ctor_get(v___x_2423_, 1);
v___x_2426_ = lean_ptr_addr(v_x_2417_);
v___x_2427_ = lean_ptr_addr(v_key_2424_);
v___x_2428_ = lean_usize_dec_eq(v___x_2426_, v___x_2427_);
if (v___x_2428_ == 0)
{
lean_object* v___x_2429_; 
v___x_2429_ = lean_box(0);
return v___x_2429_;
}
else
{
lean_object* v___x_2430_; 
lean_inc(v_val_2425_);
v___x_2430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2430_, 0, v_val_2425_);
return v___x_2430_;
}
}
case 1:
{
lean_object* v_node_2431_; size_t v___x_2432_; size_t v___x_2433_; 
v_node_2431_ = lean_ctor_get(v___x_2423_, 0);
v___x_2432_ = ((size_t)5ULL);
v___x_2433_ = lean_usize_shift_right(v_x_2416_, v___x_2432_);
v_x_2415_ = v_node_2431_;
v_x_2416_ = v___x_2433_;
goto _start;
}
default: 
{
lean_object* v___x_2435_; 
v___x_2435_ = lean_box(0);
return v___x_2435_;
}
}
}
else
{
lean_object* v_ks_2436_; lean_object* v_vs_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; 
v_ks_2436_ = lean_ctor_get(v_x_2415_, 0);
v_vs_2437_ = lean_ctor_get(v_x_2415_, 1);
v___x_2438_ = lean_unsigned_to_nat(0u);
v___x_2439_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_ks_2436_, v_vs_2437_, v___x_2438_, v_x_2417_);
return v___x_2439_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg___boxed(lean_object* v_x_2440_, lean_object* v_x_2441_, lean_object* v_x_2442_){
_start:
{
size_t v_x_21059__boxed_2443_; lean_object* v_res_2444_; 
v_x_21059__boxed_2443_ = lean_unbox_usize(v_x_2441_);
lean_dec(v_x_2441_);
v_res_2444_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2440_, v_x_21059__boxed_2443_, v_x_2442_);
lean_dec_ref(v_x_2442_);
lean_dec_ref(v_x_2440_);
return v_res_2444_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(lean_object* v_x_2445_, lean_object* v_x_2446_){
_start:
{
size_t v___x_2447_; size_t v___x_2448_; size_t v___x_2449_; uint64_t v___x_2450_; size_t v___x_2451_; lean_object* v___x_2452_; 
v___x_2447_ = lean_ptr_addr(v_x_2446_);
v___x_2448_ = ((size_t)3ULL);
v___x_2449_ = lean_usize_shift_right(v___x_2447_, v___x_2448_);
v___x_2450_ = lean_usize_to_uint64(v___x_2449_);
v___x_2451_ = lean_uint64_to_usize(v___x_2450_);
v___x_2452_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2445_, v___x_2451_, v_x_2446_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg___boxed(lean_object* v_x_2453_, lean_object* v_x_2454_){
_start:
{
lean_object* v_res_2455_; 
v_res_2455_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_x_2453_, v_x_2454_);
lean_dec_ref(v_x_2454_);
lean_dec_ref(v_x_2453_);
return v_res_2455_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(lean_object* v_as_x27_2456_, lean_object* v_b_2457_, lean_object* v___y_2458_, lean_object* v___y_2459_, lean_object* v___y_2460_, lean_object* v___y_2461_, lean_object* v___y_2462_, lean_object* v___y_2463_, lean_object* v___y_2464_, lean_object* v___y_2465_, lean_object* v___y_2466_, lean_object* v___y_2467_){
_start:
{
if (lean_obj_tag(v_as_x27_2456_) == 0)
{
lean_object* v___x_2469_; 
v___x_2469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2469_, 0, v_b_2457_);
return v___x_2469_;
}
else
{
lean_object* v_head_2470_; lean_object* v_tail_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v_toGoalState_2474_; lean_object* v_ematch_2475_; lean_object* v_delayedThmInsts_2476_; lean_object* v___x_2477_; 
v_head_2470_ = lean_ctor_get(v_as_x27_2456_, 0);
v_tail_2471_ = lean_ctor_get(v_as_x27_2456_, 1);
v___x_2472_ = lean_box(0);
v___x_2473_ = lean_st_ref_get(v___y_2458_);
v_toGoalState_2474_ = lean_ctor_get(v___x_2473_, 0);
lean_inc_ref(v_toGoalState_2474_);
lean_dec(v___x_2473_);
v_ematch_2475_ = lean_ctor_get(v_toGoalState_2474_, 14);
lean_inc_ref(v_ematch_2475_);
lean_dec_ref(v_toGoalState_2474_);
v_delayedThmInsts_2476_ = lean_ctor_get(v_ematch_2475_, 10);
lean_inc_ref(v_delayedThmInsts_2476_);
lean_dec_ref(v_ematch_2475_);
v___x_2477_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_delayedThmInsts_2476_, v_head_2470_);
lean_dec_ref(v_delayedThmInsts_2476_);
if (lean_obj_tag(v___x_2477_) == 1)
{
lean_object* v_val_2478_; lean_object* v___x_2479_; lean_object* v_toGoalState_2480_; lean_object* v_ematch_2481_; lean_object* v_mvarId_2482_; lean_object* v___x_2484_; uint8_t v_isShared_2485_; uint8_t v_isSharedCheck_2541_; 
v_val_2478_ = lean_ctor_get(v___x_2477_, 0);
lean_inc(v_val_2478_);
lean_dec_ref_known(v___x_2477_, 1);
v___x_2479_ = lean_st_ref_take(v___y_2458_);
v_toGoalState_2480_ = lean_ctor_get(v___x_2479_, 0);
lean_inc_ref(v_toGoalState_2480_);
v_ematch_2481_ = lean_ctor_get(v_toGoalState_2480_, 14);
lean_inc_ref(v_ematch_2481_);
v_mvarId_2482_ = lean_ctor_get(v___x_2479_, 1);
v_isSharedCheck_2541_ = !lean_is_exclusive(v___x_2479_);
if (v_isSharedCheck_2541_ == 0)
{
lean_object* v_unused_2542_; 
v_unused_2542_ = lean_ctor_get(v___x_2479_, 0);
lean_dec(v_unused_2542_);
v___x_2484_ = v___x_2479_;
v_isShared_2485_ = v_isSharedCheck_2541_;
goto v_resetjp_2483_;
}
else
{
lean_inc(v_mvarId_2482_);
lean_dec(v___x_2479_);
v___x_2484_ = lean_box(0);
v_isShared_2485_ = v_isSharedCheck_2541_;
goto v_resetjp_2483_;
}
v_resetjp_2483_:
{
lean_object* v_nextDeclIdx_2486_; lean_object* v_enodeMap_2487_; lean_object* v_exprs_2488_; lean_object* v_parents_2489_; lean_object* v_condParents_2490_; lean_object* v_congrTable_2491_; lean_object* v_appMap_2492_; lean_object* v_indicesFound_2493_; lean_object* v_toProcess_2494_; lean_object* v_internalizing_2495_; uint8_t v_inconsistent_2496_; lean_object* v_nextIdx_2497_; lean_object* v_newRawFacts_2498_; lean_object* v_facts_2499_; lean_object* v_extThms_2500_; lean_object* v_inj_2501_; lean_object* v_split_2502_; lean_object* v_clean_2503_; lean_object* v_sstates_2504_; lean_object* v_goalStack_2505_; uint64_t v_introBase_2506_; lean_object* v_numIntros_2507_; lean_object* v___x_2509_; uint8_t v_isShared_2510_; uint8_t v_isSharedCheck_2539_; 
v_nextDeclIdx_2486_ = lean_ctor_get(v_toGoalState_2480_, 0);
v_enodeMap_2487_ = lean_ctor_get(v_toGoalState_2480_, 1);
v_exprs_2488_ = lean_ctor_get(v_toGoalState_2480_, 2);
v_parents_2489_ = lean_ctor_get(v_toGoalState_2480_, 3);
v_condParents_2490_ = lean_ctor_get(v_toGoalState_2480_, 4);
v_congrTable_2491_ = lean_ctor_get(v_toGoalState_2480_, 5);
v_appMap_2492_ = lean_ctor_get(v_toGoalState_2480_, 6);
v_indicesFound_2493_ = lean_ctor_get(v_toGoalState_2480_, 7);
v_toProcess_2494_ = lean_ctor_get(v_toGoalState_2480_, 8);
v_internalizing_2495_ = lean_ctor_get(v_toGoalState_2480_, 9);
v_inconsistent_2496_ = lean_ctor_get_uint8(v_toGoalState_2480_, sizeof(void*)*21 + 8);
v_nextIdx_2497_ = lean_ctor_get(v_toGoalState_2480_, 10);
v_newRawFacts_2498_ = lean_ctor_get(v_toGoalState_2480_, 11);
v_facts_2499_ = lean_ctor_get(v_toGoalState_2480_, 12);
v_extThms_2500_ = lean_ctor_get(v_toGoalState_2480_, 13);
v_inj_2501_ = lean_ctor_get(v_toGoalState_2480_, 15);
v_split_2502_ = lean_ctor_get(v_toGoalState_2480_, 16);
v_clean_2503_ = lean_ctor_get(v_toGoalState_2480_, 17);
v_sstates_2504_ = lean_ctor_get(v_toGoalState_2480_, 18);
v_goalStack_2505_ = lean_ctor_get(v_toGoalState_2480_, 19);
v_introBase_2506_ = lean_ctor_get_uint64(v_toGoalState_2480_, sizeof(void*)*21);
v_numIntros_2507_ = lean_ctor_get(v_toGoalState_2480_, 20);
v_isSharedCheck_2539_ = !lean_is_exclusive(v_toGoalState_2480_);
if (v_isSharedCheck_2539_ == 0)
{
lean_object* v_unused_2540_; 
v_unused_2540_ = lean_ctor_get(v_toGoalState_2480_, 14);
lean_dec(v_unused_2540_);
v___x_2509_ = v_toGoalState_2480_;
v_isShared_2510_ = v_isSharedCheck_2539_;
goto v_resetjp_2508_;
}
else
{
lean_inc(v_numIntros_2507_);
lean_inc(v_goalStack_2505_);
lean_inc(v_sstates_2504_);
lean_inc(v_clean_2503_);
lean_inc(v_split_2502_);
lean_inc(v_inj_2501_);
lean_inc(v_extThms_2500_);
lean_inc(v_facts_2499_);
lean_inc(v_newRawFacts_2498_);
lean_inc(v_nextIdx_2497_);
lean_inc(v_internalizing_2495_);
lean_inc(v_toProcess_2494_);
lean_inc(v_indicesFound_2493_);
lean_inc(v_appMap_2492_);
lean_inc(v_congrTable_2491_);
lean_inc(v_condParents_2490_);
lean_inc(v_parents_2489_);
lean_inc(v_exprs_2488_);
lean_inc(v_enodeMap_2487_);
lean_inc(v_nextDeclIdx_2486_);
lean_dec(v_toGoalState_2480_);
v___x_2509_ = lean_box(0);
v_isShared_2510_ = v_isSharedCheck_2539_;
goto v_resetjp_2508_;
}
v_resetjp_2508_:
{
lean_object* v_thmMap_2511_; lean_object* v_gmt_2512_; lean_object* v_thms_2513_; lean_object* v_newThms_2514_; lean_object* v_numInstances_2515_; lean_object* v_numDelayedInstances_2516_; lean_object* v_num_2517_; lean_object* v_preInstances_2518_; lean_object* v_nextThmIdx_2519_; lean_object* v_matchEqNames_2520_; lean_object* v_delayedThmInsts_2521_; lean_object* v___x_2523_; uint8_t v_isShared_2524_; uint8_t v_isSharedCheck_2538_; 
v_thmMap_2511_ = lean_ctor_get(v_ematch_2481_, 0);
v_gmt_2512_ = lean_ctor_get(v_ematch_2481_, 1);
v_thms_2513_ = lean_ctor_get(v_ematch_2481_, 2);
v_newThms_2514_ = lean_ctor_get(v_ematch_2481_, 3);
v_numInstances_2515_ = lean_ctor_get(v_ematch_2481_, 4);
v_numDelayedInstances_2516_ = lean_ctor_get(v_ematch_2481_, 5);
v_num_2517_ = lean_ctor_get(v_ematch_2481_, 6);
v_preInstances_2518_ = lean_ctor_get(v_ematch_2481_, 7);
v_nextThmIdx_2519_ = lean_ctor_get(v_ematch_2481_, 8);
v_matchEqNames_2520_ = lean_ctor_get(v_ematch_2481_, 9);
v_delayedThmInsts_2521_ = lean_ctor_get(v_ematch_2481_, 10);
v_isSharedCheck_2538_ = !lean_is_exclusive(v_ematch_2481_);
if (v_isSharedCheck_2538_ == 0)
{
v___x_2523_ = v_ematch_2481_;
v_isShared_2524_ = v_isSharedCheck_2538_;
goto v_resetjp_2522_;
}
else
{
lean_inc(v_delayedThmInsts_2521_);
lean_inc(v_matchEqNames_2520_);
lean_inc(v_nextThmIdx_2519_);
lean_inc(v_preInstances_2518_);
lean_inc(v_num_2517_);
lean_inc(v_numDelayedInstances_2516_);
lean_inc(v_numInstances_2515_);
lean_inc(v_newThms_2514_);
lean_inc(v_thms_2513_);
lean_inc(v_gmt_2512_);
lean_inc(v_thmMap_2511_);
lean_dec(v_ematch_2481_);
v___x_2523_ = lean_box(0);
v_isShared_2524_ = v_isSharedCheck_2538_;
goto v_resetjp_2522_;
}
v_resetjp_2522_:
{
lean_object* v___x_2525_; lean_object* v___x_2527_; 
v___x_2525_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_delayedThmInsts_2521_, v_head_2470_);
if (v_isShared_2524_ == 0)
{
lean_ctor_set(v___x_2523_, 10, v___x_2525_);
v___x_2527_ = v___x_2523_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2537_; 
v_reuseFailAlloc_2537_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2537_, 0, v_thmMap_2511_);
lean_ctor_set(v_reuseFailAlloc_2537_, 1, v_gmt_2512_);
lean_ctor_set(v_reuseFailAlloc_2537_, 2, v_thms_2513_);
lean_ctor_set(v_reuseFailAlloc_2537_, 3, v_newThms_2514_);
lean_ctor_set(v_reuseFailAlloc_2537_, 4, v_numInstances_2515_);
lean_ctor_set(v_reuseFailAlloc_2537_, 5, v_numDelayedInstances_2516_);
lean_ctor_set(v_reuseFailAlloc_2537_, 6, v_num_2517_);
lean_ctor_set(v_reuseFailAlloc_2537_, 7, v_preInstances_2518_);
lean_ctor_set(v_reuseFailAlloc_2537_, 8, v_nextThmIdx_2519_);
lean_ctor_set(v_reuseFailAlloc_2537_, 9, v_matchEqNames_2520_);
lean_ctor_set(v_reuseFailAlloc_2537_, 10, v___x_2525_);
v___x_2527_ = v_reuseFailAlloc_2537_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
lean_object* v___x_2529_; 
if (v_isShared_2510_ == 0)
{
lean_ctor_set(v___x_2509_, 14, v___x_2527_);
v___x_2529_ = v___x_2509_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2536_; 
v_reuseFailAlloc_2536_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_2536_, 0, v_nextDeclIdx_2486_);
lean_ctor_set(v_reuseFailAlloc_2536_, 1, v_enodeMap_2487_);
lean_ctor_set(v_reuseFailAlloc_2536_, 2, v_exprs_2488_);
lean_ctor_set(v_reuseFailAlloc_2536_, 3, v_parents_2489_);
lean_ctor_set(v_reuseFailAlloc_2536_, 4, v_condParents_2490_);
lean_ctor_set(v_reuseFailAlloc_2536_, 5, v_congrTable_2491_);
lean_ctor_set(v_reuseFailAlloc_2536_, 6, v_appMap_2492_);
lean_ctor_set(v_reuseFailAlloc_2536_, 7, v_indicesFound_2493_);
lean_ctor_set(v_reuseFailAlloc_2536_, 8, v_toProcess_2494_);
lean_ctor_set(v_reuseFailAlloc_2536_, 9, v_internalizing_2495_);
lean_ctor_set(v_reuseFailAlloc_2536_, 10, v_nextIdx_2497_);
lean_ctor_set(v_reuseFailAlloc_2536_, 11, v_newRawFacts_2498_);
lean_ctor_set(v_reuseFailAlloc_2536_, 12, v_facts_2499_);
lean_ctor_set(v_reuseFailAlloc_2536_, 13, v_extThms_2500_);
lean_ctor_set(v_reuseFailAlloc_2536_, 14, v___x_2527_);
lean_ctor_set(v_reuseFailAlloc_2536_, 15, v_inj_2501_);
lean_ctor_set(v_reuseFailAlloc_2536_, 16, v_split_2502_);
lean_ctor_set(v_reuseFailAlloc_2536_, 17, v_clean_2503_);
lean_ctor_set(v_reuseFailAlloc_2536_, 18, v_sstates_2504_);
lean_ctor_set(v_reuseFailAlloc_2536_, 19, v_goalStack_2505_);
lean_ctor_set(v_reuseFailAlloc_2536_, 20, v_numIntros_2507_);
lean_ctor_set_uint8(v_reuseFailAlloc_2536_, sizeof(void*)*21 + 8, v_inconsistent_2496_);
lean_ctor_set_uint64(v_reuseFailAlloc_2536_, sizeof(void*)*21, v_introBase_2506_);
v___x_2529_ = v_reuseFailAlloc_2536_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
lean_object* v___x_2531_; 
if (v_isShared_2485_ == 0)
{
lean_ctor_set(v___x_2484_, 0, v___x_2529_);
v___x_2531_ = v___x_2484_;
goto v_reusejp_2530_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v___x_2529_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v_mvarId_2482_);
v___x_2531_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2530_;
}
v_reusejp_2530_:
{
lean_object* v___x_2532_; lean_object* v___x_2533_; 
v___x_2532_ = lean_st_ref_put(v___y_2458_, v___x_2531_);
v___x_2533_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__3(v_val_2478_, v___y_2458_, v___y_2459_, v___y_2460_, v___y_2461_, v___y_2462_, v___y_2463_, v___y_2464_, v___y_2465_, v___y_2466_, v___y_2467_);
if (lean_obj_tag(v___x_2533_) == 0)
{
lean_dec_ref_known(v___x_2533_, 1);
v_as_x27_2456_ = v_tail_2471_;
v_b_2457_ = v___x_2472_;
goto _start;
}
else
{
return v___x_2533_;
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
lean_dec(v___x_2477_);
v_as_x27_2456_ = v_tail_2471_;
v_b_2457_ = v___x_2472_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg___boxed(lean_object* v_as_x27_2544_, lean_object* v_b_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_as_x27_2544_, v_b_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_, v___y_2555_);
lean_dec(v___y_2555_);
lean_dec_ref(v___y_2554_);
lean_dec(v___y_2553_);
lean_dec_ref(v___y_2552_);
lean_dec(v___y_2551_);
lean_dec_ref(v___y_2550_);
lean_dec(v___y_2549_);
lean_dec_ref(v___y_2548_);
lean_dec(v___y_2547_);
lean_dec(v___y_2546_);
lean_dec(v_as_x27_2544_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(lean_object* v_toPropagateDown_2558_, lean_object* v_a_2559_, lean_object* v_a_2560_, lean_object* v_a_2561_, lean_object* v_a_2562_, lean_object* v_a_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_, lean_object* v_a_2568_){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_2559_);
if (lean_obj_tag(v___x_2573_) == 0)
{
lean_object* v_a_2574_; uint8_t v___x_2575_; 
v_a_2574_ = lean_ctor_get(v___x_2573_, 0);
lean_inc(v_a_2574_);
lean_dec_ref_known(v___x_2573_, 1);
v___x_2575_ = lean_unbox(v_a_2574_);
lean_dec(v_a_2574_);
if (v___x_2575_ == 0)
{
lean_object* v___x_2576_; lean_object* v_toGoalState_2577_; lean_object* v_ematch_2578_; lean_object* v_delayedThmInsts_2579_; uint8_t v___x_2580_; 
v___x_2576_ = lean_st_ref_get(v_a_2559_);
v_toGoalState_2577_ = lean_ctor_get(v___x_2576_, 0);
lean_inc_ref(v_toGoalState_2577_);
lean_dec(v___x_2576_);
v_ematch_2578_ = lean_ctor_get(v_toGoalState_2577_, 14);
lean_inc_ref(v_ematch_2578_);
lean_dec_ref(v_toGoalState_2577_);
v_delayedThmInsts_2579_ = lean_ctor_get(v_ematch_2578_, 10);
lean_inc_ref(v_delayedThmInsts_2579_);
lean_dec_ref(v_ematch_2578_);
v___x_2580_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_delayedThmInsts_2579_);
lean_dec_ref(v_delayedThmInsts_2579_);
if (v___x_2580_ == 0)
{
lean_object* v___x_2581_; lean_object* v___x_2582_; 
v___x_2581_ = lean_box(0);
v___x_2582_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_toPropagateDown_2558_, v___x_2581_, v_a_2559_, v_a_2560_, v_a_2561_, v_a_2562_, v_a_2563_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_, v_a_2568_);
if (lean_obj_tag(v___x_2582_) == 0)
{
lean_object* v___x_2584_; uint8_t v_isShared_2585_; uint8_t v_isSharedCheck_2589_; 
v_isSharedCheck_2589_ = !lean_is_exclusive(v___x_2582_);
if (v_isSharedCheck_2589_ == 0)
{
lean_object* v_unused_2590_; 
v_unused_2590_ = lean_ctor_get(v___x_2582_, 0);
lean_dec(v_unused_2590_);
v___x_2584_ = v___x_2582_;
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
else
{
lean_dec(v___x_2582_);
v___x_2584_ = lean_box(0);
v_isShared_2585_ = v_isSharedCheck_2589_;
goto v_resetjp_2583_;
}
v_resetjp_2583_:
{
lean_object* v___x_2587_; 
if (v_isShared_2585_ == 0)
{
lean_ctor_set(v___x_2584_, 0, v___x_2581_);
v___x_2587_ = v___x_2584_;
goto v_reusejp_2586_;
}
else
{
lean_object* v_reuseFailAlloc_2588_; 
v_reuseFailAlloc_2588_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2588_, 0, v___x_2581_);
v___x_2587_ = v_reuseFailAlloc_2588_;
goto v_reusejp_2586_;
}
v_reusejp_2586_:
{
return v___x_2587_;
}
}
}
else
{
return v___x_2582_;
}
}
else
{
goto v___jp_2570_;
}
}
else
{
goto v___jp_2570_;
}
}
else
{
lean_object* v_a_2591_; lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
v_a_2591_ = lean_ctor_get(v___x_2573_, 0);
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2573_);
if (v_isSharedCheck_2598_ == 0)
{
v___x_2593_ = v___x_2573_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_inc(v_a_2591_);
lean_dec(v___x_2573_);
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
v___jp_2570_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; 
v___x_2571_ = lean_box(0);
v___x_2572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2572_, 0, v___x_2571_);
return v___x_2572_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts___boxed(lean_object* v_toPropagateDown_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(v_toPropagateDown_2599_, v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_, v_a_2609_);
lean_dec(v_a_2609_);
lean_dec_ref(v_a_2608_);
lean_dec(v_a_2607_);
lean_dec_ref(v_a_2606_);
lean_dec(v_a_2605_);
lean_dec_ref(v_a_2604_);
lean_dec(v_a_2603_);
lean_dec_ref(v_a_2602_);
lean_dec(v_a_2601_);
lean_dec(v_a_2600_);
lean_dec(v_toPropagateDown_2599_);
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(lean_object* v_00_u03b2_2612_, lean_object* v_x_2613_, lean_object* v_x_2614_){
_start:
{
lean_object* v___x_2615_; 
v___x_2615_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___redArg(v_x_2613_, v_x_2614_);
return v___x_2615_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1___boxed(lean_object* v_00_u03b2_2616_, lean_object* v_x_2617_, lean_object* v_x_2618_){
_start:
{
lean_object* v_res_2619_; 
v_res_2619_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1(v_00_u03b2_2616_, v_x_2617_, v_x_2618_);
lean_dec_ref(v_x_2618_);
lean_dec_ref(v_x_2617_);
return v_res_2619_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(lean_object* v_00_u03b2_2620_, lean_object* v_x_2621_, lean_object* v_x_2622_){
_start:
{
lean_object* v___x_2623_; 
v___x_2623_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___redArg(v_x_2621_, v_x_2622_);
return v___x_2623_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2___boxed(lean_object* v_00_u03b2_2624_, lean_object* v_x_2625_, lean_object* v_x_2626_){
_start:
{
lean_object* v_res_2627_; 
v_res_2627_ = l_Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2(v_00_u03b2_2624_, v_x_2625_, v_x_2626_);
lean_dec_ref(v_x_2626_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(lean_object* v_as_2628_, lean_object* v_as_x27_2629_, lean_object* v_b_2630_, lean_object* v_a_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_, lean_object* v___y_2639_, lean_object* v___y_2640_, lean_object* v___y_2641_){
_start:
{
lean_object* v___x_2643_; 
v___x_2643_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___redArg(v_as_x27_2629_, v_b_2630_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_, v___y_2638_, v___y_2639_, v___y_2640_, v___y_2641_);
return v___x_2643_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4___boxed(lean_object* v_as_2644_, lean_object* v_as_x27_2645_, lean_object* v_b_2646_, lean_object* v_a_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_, lean_object* v___y_2655_, lean_object* v___y_2656_, lean_object* v___y_2657_, lean_object* v___y_2658_){
_start:
{
lean_object* v_res_2659_; 
v_res_2659_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__4(v_as_2644_, v_as_x27_2645_, v_b_2646_, v_a_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_, v___y_2655_, v___y_2656_, v___y_2657_);
lean_dec(v___y_2657_);
lean_dec_ref(v___y_2656_);
lean_dec(v___y_2655_);
lean_dec_ref(v___y_2654_);
lean_dec(v___y_2653_);
lean_dec_ref(v___y_2652_);
lean_dec(v___y_2651_);
lean_dec_ref(v___y_2650_);
lean_dec(v___y_2649_);
lean_dec(v___y_2648_);
lean_dec(v_as_x27_2645_);
lean_dec(v_as_2644_);
return v_res_2659_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(lean_object* v_00_u03b2_2660_, lean_object* v_x_2661_, size_t v_x_2662_, lean_object* v_x_2663_){
_start:
{
lean_object* v___x_2664_; 
v___x_2664_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___redArg(v_x_2661_, v_x_2662_, v_x_2663_);
return v___x_2664_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1___boxed(lean_object* v_00_u03b2_2665_, lean_object* v_x_2666_, lean_object* v_x_2667_, lean_object* v_x_2668_){
_start:
{
size_t v_x_21346__boxed_2669_; lean_object* v_res_2670_; 
v_x_21346__boxed_2669_ = lean_unbox_usize(v_x_2667_);
lean_dec(v_x_2667_);
v_res_2670_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1(v_00_u03b2_2665_, v_x_2666_, v_x_21346__boxed_2669_, v_x_2668_);
lean_dec_ref(v_x_2668_);
lean_dec_ref(v_x_2666_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(lean_object* v_00_u03b2_2671_, lean_object* v_x_2672_, size_t v_x_2673_, lean_object* v_x_2674_){
_start:
{
lean_object* v___x_2675_; 
v___x_2675_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___redArg(v_x_2672_, v_x_2673_, v_x_2674_);
return v___x_2675_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3___boxed(lean_object* v_00_u03b2_2676_, lean_object* v_x_2677_, lean_object* v_x_2678_, lean_object* v_x_2679_){
_start:
{
size_t v_x_21357__boxed_2680_; lean_object* v_res_2681_; 
v_x_21357__boxed_2680_ = lean_unbox_usize(v_x_2678_);
lean_dec(v_x_2678_);
v_res_2681_ = l_Lean_PersistentHashMap_eraseAux___at___00Lean_PersistentHashMap_erase___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__2_spec__3(v_00_u03b2_2676_, v_x_2677_, v_x_21357__boxed_2680_, v_x_2679_);
lean_dec_ref(v_x_2679_);
return v_res_2681_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(lean_object* v_00_u03b2_2682_, lean_object* v_keys_2683_, lean_object* v_vals_2684_, lean_object* v_heq_2685_, lean_object* v_i_2686_, lean_object* v_k_2687_){
_start:
{
lean_object* v___x_2688_; 
v___x_2688_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___redArg(v_keys_2683_, v_vals_2684_, v_i_2686_, v_k_2687_);
return v___x_2688_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2689_, lean_object* v_keys_2690_, lean_object* v_vals_2691_, lean_object* v_heq_2692_, lean_object* v_i_2693_, lean_object* v_k_2694_){
_start:
{
lean_object* v_res_2695_; 
v_res_2695_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts_spec__1_spec__1_spec__2(v_00_u03b2_2689_, v_keys_2690_, v_vals_2691_, v_heq_2692_, v_i_2693_, v_k_2694_);
lean_dec_ref(v_k_2694_);
lean_dec_ref(v_vals_2691_);
lean_dec_ref(v_keys_2690_);
return v_res_2695_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(lean_object* v___x_2696_, lean_object* v_keys_2697_, lean_object* v_vals_2698_, lean_object* v_i_2699_, lean_object* v_k_2700_){
_start:
{
lean_object* v___x_2701_; uint8_t v___x_2702_; 
v___x_2701_ = lean_array_get_size(v_keys_2697_);
v___x_2702_ = lean_nat_dec_lt(v_i_2699_, v___x_2701_);
if (v___x_2702_ == 0)
{
lean_object* v___x_2703_; 
lean_dec_ref(v_k_2700_);
lean_dec(v_i_2699_);
v___x_2703_ = lean_box(0);
return v___x_2703_;
}
else
{
lean_object* v_k_x27_2704_; uint8_t v___x_2705_; 
v_k_x27_2704_ = lean_array_fget_borrowed(v_keys_2697_, v_i_2699_);
lean_inc(v_k_x27_2704_);
lean_inc_ref(v_k_2700_);
v___x_2705_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2696_, v_k_2700_, v_k_x27_2704_);
if (v___x_2705_ == 0)
{
lean_object* v___x_2706_; lean_object* v___x_2707_; 
v___x_2706_ = lean_unsigned_to_nat(1u);
v___x_2707_ = lean_nat_add(v_i_2699_, v___x_2706_);
lean_dec(v_i_2699_);
v_i_2699_ = v___x_2707_;
goto _start;
}
else
{
lean_object* v___x_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
lean_dec_ref(v_k_2700_);
v___x_2709_ = lean_array_fget_borrowed(v_vals_2698_, v_i_2699_);
lean_dec(v_i_2699_);
lean_inc(v___x_2709_);
lean_inc(v_k_x27_2704_);
v___x_2710_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2710_, 0, v_k_x27_2704_);
lean_ctor_set(v___x_2710_, 1, v___x_2709_);
v___x_2711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2711_, 0, v___x_2710_);
return v___x_2711_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_2712_, lean_object* v_keys_2713_, lean_object* v_vals_2714_, lean_object* v_i_2715_, lean_object* v_k_2716_){
_start:
{
lean_object* v_res_2717_; 
v_res_2717_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_2712_, v_keys_2713_, v_vals_2714_, v_i_2715_, v_k_2716_);
lean_dec_ref(v_vals_2714_);
lean_dec_ref(v_keys_2713_);
lean_dec_ref(v___x_2712_);
return v_res_2717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(lean_object* v___x_2718_, lean_object* v_x_2719_, size_t v_x_2720_, lean_object* v_x_2721_){
_start:
{
if (lean_obj_tag(v_x_2719_) == 0)
{
lean_object* v_es_2722_; lean_object* v___x_2723_; size_t v___x_2724_; size_t v___x_2725_; lean_object* v_j_2726_; lean_object* v___x_2727_; 
v_es_2722_ = lean_ctor_get(v_x_2719_, 0);
lean_inc_ref(v_es_2722_);
lean_dec_ref_known(v_x_2719_, 1);
v___x_2723_ = lean_box(2);
v___x_2724_ = ((size_t)31ULL);
v___x_2725_ = lean_usize_land(v_x_2720_, v___x_2724_);
v_j_2726_ = lean_usize_to_nat(v___x_2725_);
v___x_2727_ = lean_array_get(v___x_2723_, v_es_2722_, v_j_2726_);
lean_dec(v_j_2726_);
lean_dec_ref(v_es_2722_);
switch(lean_obj_tag(v___x_2727_))
{
case 0:
{
lean_object* v_key_2728_; lean_object* v_val_2729_; uint8_t v___x_2730_; 
v_key_2728_ = lean_ctor_get(v___x_2727_, 0);
lean_inc_n(v_key_2728_, 2);
v_val_2729_ = lean_ctor_get(v___x_2727_, 1);
lean_inc(v_val_2729_);
lean_dec_ref_known(v___x_2727_, 2);
v___x_2730_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2718_, v_x_2721_, v_key_2728_);
if (v___x_2730_ == 0)
{
lean_object* v___x_2731_; 
lean_dec(v_val_2729_);
lean_dec(v_key_2728_);
v___x_2731_ = lean_box(0);
return v___x_2731_;
}
else
{
lean_object* v___x_2732_; lean_object* v___x_2733_; 
v___x_2732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2732_, 0, v_key_2728_);
lean_ctor_set(v___x_2732_, 1, v_val_2729_);
v___x_2733_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2733_, 0, v___x_2732_);
return v___x_2733_;
}
}
case 1:
{
lean_object* v_node_2734_; size_t v___x_2735_; size_t v___x_2736_; 
v_node_2734_ = lean_ctor_get(v___x_2727_, 0);
lean_inc(v_node_2734_);
lean_dec_ref_known(v___x_2727_, 1);
v___x_2735_ = ((size_t)5ULL);
v___x_2736_ = lean_usize_shift_right(v_x_2720_, v___x_2735_);
v_x_2719_ = v_node_2734_;
v_x_2720_ = v___x_2736_;
goto _start;
}
default: 
{
lean_object* v___x_2738_; 
lean_dec_ref(v_x_2721_);
v___x_2738_ = lean_box(0);
return v___x_2738_;
}
}
}
else
{
lean_object* v_ks_2739_; lean_object* v_vs_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
v_ks_2739_ = lean_ctor_get(v_x_2719_, 0);
lean_inc_ref(v_ks_2739_);
v_vs_2740_ = lean_ctor_get(v_x_2719_, 1);
lean_inc_ref(v_vs_2740_);
lean_dec_ref_known(v_x_2719_, 2);
v___x_2741_ = lean_unsigned_to_nat(0u);
v___x_2742_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_2718_, v_ks_2739_, v_vs_2740_, v___x_2741_, v_x_2721_);
lean_dec_ref(v_vs_2740_);
lean_dec_ref(v_ks_2739_);
return v___x_2742_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg___boxed(lean_object* v___x_2743_, lean_object* v_x_2744_, lean_object* v_x_2745_, lean_object* v_x_2746_){
_start:
{
size_t v_x_28070__boxed_2747_; lean_object* v_res_2748_; 
v_x_28070__boxed_2747_ = lean_unbox_usize(v_x_2745_);
lean_dec(v_x_2745_);
v_res_2748_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_2743_, v_x_2744_, v_x_28070__boxed_2747_, v_x_2746_);
lean_dec_ref(v___x_2743_);
return v_res_2748_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(lean_object* v___x_2749_, lean_object* v_x_2750_, lean_object* v_x_2751_){
_start:
{
uint64_t v___x_2752_; size_t v___x_2753_; lean_object* v___x_2754_; 
v___x_2752_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2749_, v_x_2751_);
v___x_2753_ = lean_uint64_to_usize(v___x_2752_);
lean_inc_ref(v_x_2750_);
v___x_2754_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_2749_, v_x_2750_, v___x_2753_, v_x_2751_);
return v___x_2754_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg___boxed(lean_object* v___x_2755_, lean_object* v_x_2756_, lean_object* v_x_2757_){
_start:
{
lean_object* v_res_2758_; 
v_res_2758_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v___x_2755_, v_x_2756_, v_x_2757_);
lean_dec_ref(v_x_2756_);
lean_dec_ref(v___x_2755_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(lean_object* v___x_2759_, lean_object* v_x_2760_, lean_object* v_x_2761_, lean_object* v_x_2762_, lean_object* v_x_2763_){
_start:
{
lean_object* v_ks_2764_; lean_object* v_vs_2765_; lean_object* v___x_2767_; uint8_t v_isShared_2768_; uint8_t v_isSharedCheck_2789_; 
v_ks_2764_ = lean_ctor_get(v_x_2760_, 0);
v_vs_2765_ = lean_ctor_get(v_x_2760_, 1);
v_isSharedCheck_2789_ = !lean_is_exclusive(v_x_2760_);
if (v_isSharedCheck_2789_ == 0)
{
v___x_2767_ = v_x_2760_;
v_isShared_2768_ = v_isSharedCheck_2789_;
goto v_resetjp_2766_;
}
else
{
lean_inc(v_vs_2765_);
lean_inc(v_ks_2764_);
lean_dec(v_x_2760_);
v___x_2767_ = lean_box(0);
v_isShared_2768_ = v_isSharedCheck_2789_;
goto v_resetjp_2766_;
}
v_resetjp_2766_:
{
lean_object* v___x_2769_; uint8_t v___x_2770_; 
v___x_2769_ = lean_array_get_size(v_ks_2764_);
v___x_2770_ = lean_nat_dec_lt(v_x_2761_, v___x_2769_);
if (v___x_2770_ == 0)
{
lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2774_; 
lean_dec(v_x_2761_);
v___x_2771_ = lean_array_push(v_ks_2764_, v_x_2762_);
v___x_2772_ = lean_array_push(v_vs_2765_, v_x_2763_);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 1, v___x_2772_);
lean_ctor_set(v___x_2767_, 0, v___x_2771_);
v___x_2774_ = v___x_2767_;
goto v_reusejp_2773_;
}
else
{
lean_object* v_reuseFailAlloc_2775_; 
v_reuseFailAlloc_2775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2775_, 0, v___x_2771_);
lean_ctor_set(v_reuseFailAlloc_2775_, 1, v___x_2772_);
v___x_2774_ = v_reuseFailAlloc_2775_;
goto v_reusejp_2773_;
}
v_reusejp_2773_:
{
return v___x_2774_;
}
}
else
{
lean_object* v_k_x27_2776_; uint8_t v___x_2777_; 
v_k_x27_2776_ = lean_array_fget_borrowed(v_ks_2764_, v_x_2761_);
lean_inc(v_k_x27_2776_);
lean_inc_ref(v_x_2762_);
v___x_2777_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2759_, v_x_2762_, v_k_x27_2776_);
if (v___x_2777_ == 0)
{
lean_object* v___x_2779_; 
if (v_isShared_2768_ == 0)
{
v___x_2779_ = v___x_2767_;
goto v_reusejp_2778_;
}
else
{
lean_object* v_reuseFailAlloc_2783_; 
v_reuseFailAlloc_2783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2783_, 0, v_ks_2764_);
lean_ctor_set(v_reuseFailAlloc_2783_, 1, v_vs_2765_);
v___x_2779_ = v_reuseFailAlloc_2783_;
goto v_reusejp_2778_;
}
v_reusejp_2778_:
{
lean_object* v___x_2780_; lean_object* v___x_2781_; 
v___x_2780_ = lean_unsigned_to_nat(1u);
v___x_2781_ = lean_nat_add(v_x_2761_, v___x_2780_);
lean_dec(v_x_2761_);
v_x_2760_ = v___x_2779_;
v_x_2761_ = v___x_2781_;
goto _start;
}
}
else
{
lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v___x_2787_; 
v___x_2784_ = lean_array_fset(v_ks_2764_, v_x_2761_, v_x_2762_);
v___x_2785_ = lean_array_fset(v_vs_2765_, v_x_2761_, v_x_2763_);
lean_dec(v_x_2761_);
if (v_isShared_2768_ == 0)
{
lean_ctor_set(v___x_2767_, 1, v___x_2785_);
lean_ctor_set(v___x_2767_, 0, v___x_2784_);
v___x_2787_ = v___x_2767_;
goto v_reusejp_2786_;
}
else
{
lean_object* v_reuseFailAlloc_2788_; 
v_reuseFailAlloc_2788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2788_, 0, v___x_2784_);
lean_ctor_set(v_reuseFailAlloc_2788_, 1, v___x_2785_);
v___x_2787_ = v_reuseFailAlloc_2788_;
goto v_reusejp_2786_;
}
v_reusejp_2786_:
{
return v___x_2787_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg___boxed(lean_object* v___x_2790_, lean_object* v_x_2791_, lean_object* v_x_2792_, lean_object* v_x_2793_, lean_object* v_x_2794_){
_start:
{
lean_object* v_res_2795_; 
v_res_2795_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_2790_, v_x_2791_, v_x_2792_, v_x_2793_, v_x_2794_);
lean_dec_ref(v___x_2790_);
return v_res_2795_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(lean_object* v___x_2796_, lean_object* v_n_2797_, lean_object* v_k_2798_, lean_object* v_v_2799_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; 
v___x_2800_ = lean_unsigned_to_nat(0u);
v___x_2801_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_2796_, v_n_2797_, v___x_2800_, v_k_2798_, v_v_2799_);
return v___x_2801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg___boxed(lean_object* v___x_2802_, lean_object* v_n_2803_, lean_object* v_k_2804_, lean_object* v_v_2805_){
_start:
{
lean_object* v_res_2806_; 
v_res_2806_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_2802_, v_n_2803_, v_k_2804_, v_v_2805_);
lean_dec_ref(v___x_2802_);
return v_res_2806_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2807_; 
v___x_2807_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_2807_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(lean_object* v___x_2808_, lean_object* v_x_2809_, size_t v_x_2810_, size_t v_x_2811_, lean_object* v_x_2812_, lean_object* v_x_2813_){
_start:
{
if (lean_obj_tag(v_x_2809_) == 0)
{
lean_object* v_es_2814_; size_t v___x_2815_; size_t v___x_2816_; lean_object* v_j_2817_; lean_object* v___x_2818_; uint8_t v___x_2819_; 
v_es_2814_ = lean_ctor_get(v_x_2809_, 0);
v___x_2815_ = ((size_t)31ULL);
v___x_2816_ = lean_usize_land(v_x_2810_, v___x_2815_);
v_j_2817_ = lean_usize_to_nat(v___x_2816_);
v___x_2818_ = lean_array_get_size(v_es_2814_);
v___x_2819_ = lean_nat_dec_lt(v_j_2817_, v___x_2818_);
if (v___x_2819_ == 0)
{
lean_dec(v_j_2817_);
lean_dec(v_x_2813_);
lean_dec_ref(v_x_2812_);
return v_x_2809_;
}
else
{
lean_object* v___x_2821_; uint8_t v_isShared_2822_; uint8_t v_isSharedCheck_2858_; 
lean_inc_ref(v_es_2814_);
v_isSharedCheck_2858_ = !lean_is_exclusive(v_x_2809_);
if (v_isSharedCheck_2858_ == 0)
{
lean_object* v_unused_2859_; 
v_unused_2859_ = lean_ctor_get(v_x_2809_, 0);
lean_dec(v_unused_2859_);
v___x_2821_ = v_x_2809_;
v_isShared_2822_ = v_isSharedCheck_2858_;
goto v_resetjp_2820_;
}
else
{
lean_dec(v_x_2809_);
v___x_2821_ = lean_box(0);
v_isShared_2822_ = v_isSharedCheck_2858_;
goto v_resetjp_2820_;
}
v_resetjp_2820_:
{
lean_object* v_v_2823_; lean_object* v___x_2824_; lean_object* v_xs_x27_2825_; lean_object* v___y_2827_; 
v_v_2823_ = lean_array_fget(v_es_2814_, v_j_2817_);
v___x_2824_ = lean_box(0);
v_xs_x27_2825_ = lean_array_fset(v_es_2814_, v_j_2817_, v___x_2824_);
switch(lean_obj_tag(v_v_2823_))
{
case 0:
{
lean_object* v_key_2832_; lean_object* v_val_2833_; lean_object* v___x_2835_; uint8_t v_isShared_2836_; uint8_t v_isSharedCheck_2843_; 
v_key_2832_ = lean_ctor_get(v_v_2823_, 0);
v_val_2833_ = lean_ctor_get(v_v_2823_, 1);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_v_2823_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2835_ = v_v_2823_;
v_isShared_2836_ = v_isSharedCheck_2843_;
goto v_resetjp_2834_;
}
else
{
lean_inc(v_val_2833_);
lean_inc(v_key_2832_);
lean_dec(v_v_2823_);
v___x_2835_ = lean_box(0);
v_isShared_2836_ = v_isSharedCheck_2843_;
goto v_resetjp_2834_;
}
v_resetjp_2834_:
{
uint8_t v___x_2837_; 
lean_inc(v_key_2832_);
lean_inc_ref(v_x_2812_);
v___x_2837_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_2808_, v_x_2812_, v_key_2832_);
if (v___x_2837_ == 0)
{
lean_object* v___x_2838_; lean_object* v___x_2839_; 
lean_del_object(v___x_2835_);
v___x_2838_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_2832_, v_val_2833_, v_x_2812_, v_x_2813_);
v___x_2839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2839_, 0, v___x_2838_);
v___y_2827_ = v___x_2839_;
goto v___jp_2826_;
}
else
{
lean_object* v___x_2841_; 
lean_dec(v_val_2833_);
lean_dec(v_key_2832_);
if (v_isShared_2836_ == 0)
{
lean_ctor_set(v___x_2835_, 1, v_x_2813_);
lean_ctor_set(v___x_2835_, 0, v_x_2812_);
v___x_2841_ = v___x_2835_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2842_; 
v_reuseFailAlloc_2842_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2842_, 0, v_x_2812_);
lean_ctor_set(v_reuseFailAlloc_2842_, 1, v_x_2813_);
v___x_2841_ = v_reuseFailAlloc_2842_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
v___y_2827_ = v___x_2841_;
goto v___jp_2826_;
}
}
}
}
case 1:
{
lean_object* v_node_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2856_; 
v_node_2844_ = lean_ctor_get(v_v_2823_, 0);
v_isSharedCheck_2856_ = !lean_is_exclusive(v_v_2823_);
if (v_isSharedCheck_2856_ == 0)
{
v___x_2846_ = v_v_2823_;
v_isShared_2847_ = v_isSharedCheck_2856_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_node_2844_);
lean_dec(v_v_2823_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2856_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
size_t v___x_2848_; size_t v___x_2849_; size_t v___x_2850_; size_t v___x_2851_; lean_object* v___x_2852_; lean_object* v___x_2854_; 
v___x_2848_ = ((size_t)5ULL);
v___x_2849_ = lean_usize_shift_right(v_x_2810_, v___x_2848_);
v___x_2850_ = ((size_t)1ULL);
v___x_2851_ = lean_usize_add(v_x_2811_, v___x_2850_);
v___x_2852_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2808_, v_node_2844_, v___x_2849_, v___x_2851_, v_x_2812_, v_x_2813_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 0, v___x_2852_);
v___x_2854_ = v___x_2846_;
goto v_reusejp_2853_;
}
else
{
lean_object* v_reuseFailAlloc_2855_; 
v_reuseFailAlloc_2855_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2855_, 0, v___x_2852_);
v___x_2854_ = v_reuseFailAlloc_2855_;
goto v_reusejp_2853_;
}
v_reusejp_2853_:
{
v___y_2827_ = v___x_2854_;
goto v___jp_2826_;
}
}
}
default: 
{
lean_object* v___x_2857_; 
v___x_2857_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2857_, 0, v_x_2812_);
lean_ctor_set(v___x_2857_, 1, v_x_2813_);
v___y_2827_ = v___x_2857_;
goto v___jp_2826_;
}
}
v___jp_2826_:
{
lean_object* v___x_2828_; lean_object* v___x_2830_; 
v___x_2828_ = lean_array_fset(v_xs_x27_2825_, v_j_2817_, v___y_2827_);
lean_dec(v_j_2817_);
if (v_isShared_2822_ == 0)
{
lean_ctor_set(v___x_2821_, 0, v___x_2828_);
v___x_2830_ = v___x_2821_;
goto v_reusejp_2829_;
}
else
{
lean_object* v_reuseFailAlloc_2831_; 
v_reuseFailAlloc_2831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2831_, 0, v___x_2828_);
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
}
else
{
lean_object* v_ks_2860_; lean_object* v_vs_2861_; lean_object* v___x_2863_; uint8_t v_isShared_2864_; uint8_t v_isSharedCheck_2879_; 
v_ks_2860_ = lean_ctor_get(v_x_2809_, 0);
v_vs_2861_ = lean_ctor_get(v_x_2809_, 1);
v_isSharedCheck_2879_ = !lean_is_exclusive(v_x_2809_);
if (v_isSharedCheck_2879_ == 0)
{
v___x_2863_ = v_x_2809_;
v_isShared_2864_ = v_isSharedCheck_2879_;
goto v_resetjp_2862_;
}
else
{
lean_inc(v_vs_2861_);
lean_inc(v_ks_2860_);
lean_dec(v_x_2809_);
v___x_2863_ = lean_box(0);
v_isShared_2864_ = v_isSharedCheck_2879_;
goto v_resetjp_2862_;
}
v_resetjp_2862_:
{
lean_object* v___x_2866_; 
if (v_isShared_2864_ == 0)
{
v___x_2866_ = v___x_2863_;
goto v_reusejp_2865_;
}
else
{
lean_object* v_reuseFailAlloc_2878_; 
v_reuseFailAlloc_2878_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2878_, 0, v_ks_2860_);
lean_ctor_set(v_reuseFailAlloc_2878_, 1, v_vs_2861_);
v___x_2866_ = v_reuseFailAlloc_2878_;
goto v_reusejp_2865_;
}
v_reusejp_2865_:
{
lean_object* v_newNode_2867_; size_t v___x_2868_; uint8_t v___x_2869_; 
v_newNode_2867_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_2808_, v___x_2866_, v_x_2812_, v_x_2813_);
v___x_2868_ = ((size_t)7ULL);
v___x_2869_ = lean_usize_dec_le(v___x_2868_, v_x_2811_);
if (v___x_2869_ == 0)
{
lean_object* v___x_2870_; lean_object* v___x_2871_; uint8_t v___x_2872_; 
v___x_2870_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_2867_);
v___x_2871_ = lean_unsigned_to_nat(4u);
v___x_2872_ = lean_nat_dec_lt(v___x_2870_, v___x_2871_);
lean_dec(v___x_2870_);
if (v___x_2872_ == 0)
{
lean_object* v_ks_2873_; lean_object* v_vs_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; 
v_ks_2873_ = lean_ctor_get(v_newNode_2867_, 0);
lean_inc_ref(v_ks_2873_);
v_vs_2874_ = lean_ctor_get(v_newNode_2867_, 1);
lean_inc_ref(v_vs_2874_);
lean_dec_ref(v_newNode_2867_);
v___x_2875_ = lean_unsigned_to_nat(0u);
v___x_2876_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___closed__0);
v___x_2877_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_2808_, v_x_2811_, v_ks_2873_, v_vs_2874_, v___x_2875_, v___x_2876_);
lean_dec_ref(v_vs_2874_);
lean_dec_ref(v_ks_2873_);
return v___x_2877_;
}
else
{
return v_newNode_2867_;
}
}
else
{
return v_newNode_2867_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(lean_object* v___x_2880_, size_t v_depth_2881_, lean_object* v_keys_2882_, lean_object* v_vals_2883_, lean_object* v_i_2884_, lean_object* v_entries_2885_){
_start:
{
lean_object* v___x_2886_; uint8_t v___x_2887_; 
v___x_2886_ = lean_array_get_size(v_keys_2882_);
v___x_2887_ = lean_nat_dec_lt(v_i_2884_, v___x_2886_);
if (v___x_2887_ == 0)
{
lean_dec(v_i_2884_);
return v_entries_2885_;
}
else
{
lean_object* v_k_2888_; lean_object* v_v_2889_; uint64_t v___x_2890_; size_t v_h_2891_; size_t v___x_2892_; lean_object* v___x_2893_; size_t v___x_2894_; size_t v___x_2895_; size_t v___x_2896_; size_t v_h_2897_; lean_object* v___x_2898_; lean_object* v___x_2899_; 
v_k_2888_ = lean_array_fget_borrowed(v_keys_2882_, v_i_2884_);
v_v_2889_ = lean_array_fget_borrowed(v_vals_2883_, v_i_2884_);
v___x_2890_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2880_, v_k_2888_);
v_h_2891_ = lean_uint64_to_usize(v___x_2890_);
v___x_2892_ = ((size_t)5ULL);
v___x_2893_ = lean_unsigned_to_nat(1u);
v___x_2894_ = ((size_t)1ULL);
v___x_2895_ = lean_usize_sub(v_depth_2881_, v___x_2894_);
v___x_2896_ = lean_usize_mul(v___x_2892_, v___x_2895_);
v_h_2897_ = lean_usize_shift_right(v_h_2891_, v___x_2896_);
v___x_2898_ = lean_nat_add(v_i_2884_, v___x_2893_);
lean_dec(v_i_2884_);
lean_inc(v_v_2889_);
lean_inc(v_k_2888_);
v___x_2899_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2880_, v_entries_2885_, v_h_2897_, v_depth_2881_, v_k_2888_, v_v_2889_);
v_i_2884_ = v___x_2898_;
v_entries_2885_ = v___x_2899_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v___x_2901_, lean_object* v_depth_2902_, lean_object* v_keys_2903_, lean_object* v_vals_2904_, lean_object* v_i_2905_, lean_object* v_entries_2906_){
_start:
{
size_t v_depth_boxed_2907_; lean_object* v_res_2908_; 
v_depth_boxed_2907_ = lean_unbox_usize(v_depth_2902_);
lean_dec(v_depth_2902_);
v_res_2908_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_2901_, v_depth_boxed_2907_, v_keys_2903_, v_vals_2904_, v_i_2905_, v_entries_2906_);
lean_dec_ref(v_vals_2904_);
lean_dec_ref(v_keys_2903_);
lean_dec_ref(v___x_2901_);
return v_res_2908_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg___boxed(lean_object* v___x_2909_, lean_object* v_x_2910_, lean_object* v_x_2911_, lean_object* v_x_2912_, lean_object* v_x_2913_, lean_object* v_x_2914_){
_start:
{
size_t v_x_28224__boxed_2915_; size_t v_x_28225__boxed_2916_; lean_object* v_res_2917_; 
v_x_28224__boxed_2915_ = lean_unbox_usize(v_x_2911_);
lean_dec(v_x_2911_);
v_x_28225__boxed_2916_ = lean_unbox_usize(v_x_2912_);
lean_dec(v_x_2912_);
v_res_2917_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2909_, v_x_2910_, v_x_28224__boxed_2915_, v_x_28225__boxed_2916_, v_x_2913_, v_x_2914_);
lean_dec_ref(v___x_2909_);
return v_res_2917_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(lean_object* v___x_2918_, lean_object* v_x_2919_, lean_object* v_x_2920_, lean_object* v_x_2921_){
_start:
{
uint64_t v___x_2922_; size_t v___x_2923_; size_t v___x_2924_; lean_object* v___x_2925_; 
v___x_2922_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_2918_, v_x_2920_);
v___x_2923_ = lean_uint64_to_usize(v___x_2922_);
v___x_2924_ = ((size_t)1ULL);
v___x_2925_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_2918_, v_x_2919_, v___x_2923_, v___x_2924_, v_x_2920_, v_x_2921_);
return v___x_2925_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg___boxed(lean_object* v___x_2926_, lean_object* v_x_2927_, lean_object* v_x_2928_, lean_object* v_x_2929_){
_start:
{
lean_object* v_res_2930_; 
v_res_2930_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v___x_2926_, v_x_2927_, v_x_2928_, v_x_2929_);
lean_dec_ref(v___x_2926_);
return v_res_2930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(lean_object* v_lhs_2935_, lean_object* v_rootNew_2936_, uint8_t v_a_2937_, lean_object* v_a_2938_, lean_object* v___y_2939_, lean_object* v___y_2940_, lean_object* v___y_2941_, lean_object* v___y_2942_, lean_object* v___y_2943_, lean_object* v___y_2944_){
_start:
{
lean_object* v_snd_2946_; lean_object* v___x_2948_; uint8_t v_isShared_2949_; uint8_t v_isSharedCheck_3135_; 
v_snd_2946_ = lean_ctor_get(v_a_2938_, 1);
v_isSharedCheck_3135_ = !lean_is_exclusive(v_a_2938_);
if (v_isSharedCheck_3135_ == 0)
{
lean_object* v_unused_3136_; 
v_unused_3136_ = lean_ctor_get(v_a_2938_, 0);
lean_dec(v_unused_3136_);
v___x_2948_ = v_a_2938_;
v_isShared_2949_ = v_isSharedCheck_3135_;
goto v_resetjp_2947_;
}
else
{
lean_inc(v_snd_2946_);
lean_dec(v_a_2938_);
v___x_2948_ = lean_box(0);
v_isShared_2949_ = v_isSharedCheck_3135_;
goto v_resetjp_2947_;
}
v_resetjp_2947_:
{
lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2952_; 
v___x_2950_ = lean_box(0);
v___x_2951_ = lean_st_ref_get(v___y_2939_);
lean_inc(v_snd_2946_);
v___x_2952_ = l_Lean_Meta_Grind_Goal_getENode(v___x_2951_, v_snd_2946_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
lean_dec(v___x_2951_);
if (lean_obj_tag(v___x_2952_) == 0)
{
lean_object* v_a_2953_; lean_object* v___x_2955_; uint8_t v_isShared_2956_; uint8_t v_isSharedCheck_3126_; 
v_a_2953_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_3126_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_3126_ == 0)
{
v___x_2955_ = v___x_2952_;
v_isShared_2956_ = v_isSharedCheck_3126_;
goto v_resetjp_2954_;
}
else
{
lean_inc(v_a_2953_);
lean_dec(v___x_2952_);
v___x_2955_ = lean_box(0);
v_isShared_2956_ = v_isSharedCheck_3126_;
goto v_resetjp_2954_;
}
v_resetjp_2954_:
{
lean_object* v_self_2957_; lean_object* v_next_2958_; lean_object* v_congr_2959_; lean_object* v_target_x3f_2960_; lean_object* v_proof_x3f_2961_; uint8_t v_flipped_2962_; lean_object* v_size_2963_; uint8_t v_interpreted_2964_; uint8_t v_ctor_2965_; uint8_t v_hasLambdas_2966_; uint8_t v_heqProofs_2967_; lean_object* v_idx_2968_; lean_object* v_generation_2969_; lean_object* v_mt_2970_; lean_object* v_sTerms_2971_; uint8_t v_funCC_2972_; lean_object* v_ematchDiagSource_2973_; lean_object* v___x_2975_; uint8_t v_isShared_2976_; uint8_t v_isSharedCheck_3124_; 
v_self_2957_ = lean_ctor_get(v_a_2953_, 0);
v_next_2958_ = lean_ctor_get(v_a_2953_, 1);
v_congr_2959_ = lean_ctor_get(v_a_2953_, 3);
v_target_x3f_2960_ = lean_ctor_get(v_a_2953_, 4);
v_proof_x3f_2961_ = lean_ctor_get(v_a_2953_, 5);
v_flipped_2962_ = lean_ctor_get_uint8(v_a_2953_, sizeof(void*)*12);
v_size_2963_ = lean_ctor_get(v_a_2953_, 6);
v_interpreted_2964_ = lean_ctor_get_uint8(v_a_2953_, sizeof(void*)*12 + 1);
v_ctor_2965_ = lean_ctor_get_uint8(v_a_2953_, sizeof(void*)*12 + 2);
v_hasLambdas_2966_ = lean_ctor_get_uint8(v_a_2953_, sizeof(void*)*12 + 3);
v_heqProofs_2967_ = lean_ctor_get_uint8(v_a_2953_, sizeof(void*)*12 + 4);
v_idx_2968_ = lean_ctor_get(v_a_2953_, 7);
v_generation_2969_ = lean_ctor_get(v_a_2953_, 8);
v_mt_2970_ = lean_ctor_get(v_a_2953_, 9);
v_sTerms_2971_ = lean_ctor_get(v_a_2953_, 10);
v_funCC_2972_ = lean_ctor_get_uint8(v_a_2953_, sizeof(void*)*12 + 5);
v_ematchDiagSource_2973_ = lean_ctor_get(v_a_2953_, 11);
v_isSharedCheck_3124_ = !lean_is_exclusive(v_a_2953_);
if (v_isSharedCheck_3124_ == 0)
{
lean_object* v_unused_3125_; 
v_unused_3125_ = lean_ctor_get(v_a_2953_, 2);
lean_dec(v_unused_3125_);
v___x_2975_ = v_a_2953_;
v_isShared_2976_ = v_isSharedCheck_3124_;
goto v_resetjp_2974_;
}
else
{
lean_inc(v_ematchDiagSource_2973_);
lean_inc(v_sTerms_2971_);
lean_inc(v_mt_2970_);
lean_inc(v_generation_2969_);
lean_inc(v_idx_2968_);
lean_inc(v_size_2963_);
lean_inc(v_proof_x3f_2961_);
lean_inc(v_target_x3f_2960_);
lean_inc(v_congr_2959_);
lean_inc(v_next_2958_);
lean_inc(v_self_2957_);
lean_dec(v_a_2953_);
v___x_2975_ = lean_box(0);
v_isShared_2976_ = v_isSharedCheck_3124_;
goto v_resetjp_2974_;
}
v_resetjp_2974_:
{
lean_object* v___x_2993_; 
lean_inc(v_ematchDiagSource_2973_);
lean_inc(v_sTerms_2971_);
lean_inc(v_mt_2970_);
lean_inc(v_generation_2969_);
lean_inc(v_idx_2968_);
lean_inc(v_size_2963_);
lean_inc(v_proof_x3f_2961_);
lean_inc(v_target_x3f_2960_);
lean_inc_ref(v_rootNew_2936_);
lean_inc_ref(v_next_2958_);
lean_inc_ref(v_self_2957_);
if (v_isShared_2976_ == 0)
{
lean_ctor_set(v___x_2975_, 2, v_rootNew_2936_);
v___x_2993_ = v___x_2975_;
goto v_reusejp_2992_;
}
else
{
lean_object* v_reuseFailAlloc_3123_; 
v_reuseFailAlloc_3123_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3123_, 0, v_self_2957_);
lean_ctor_set(v_reuseFailAlloc_3123_, 1, v_next_2958_);
lean_ctor_set(v_reuseFailAlloc_3123_, 2, v_rootNew_2936_);
lean_ctor_set(v_reuseFailAlloc_3123_, 3, v_congr_2959_);
lean_ctor_set(v_reuseFailAlloc_3123_, 4, v_target_x3f_2960_);
lean_ctor_set(v_reuseFailAlloc_3123_, 5, v_proof_x3f_2961_);
lean_ctor_set(v_reuseFailAlloc_3123_, 6, v_size_2963_);
lean_ctor_set(v_reuseFailAlloc_3123_, 7, v_idx_2968_);
lean_ctor_set(v_reuseFailAlloc_3123_, 8, v_generation_2969_);
lean_ctor_set(v_reuseFailAlloc_3123_, 9, v_mt_2970_);
lean_ctor_set(v_reuseFailAlloc_3123_, 10, v_sTerms_2971_);
lean_ctor_set(v_reuseFailAlloc_3123_, 11, v_ematchDiagSource_2973_);
lean_ctor_set_uint8(v_reuseFailAlloc_3123_, sizeof(void*)*12, v_flipped_2962_);
lean_ctor_set_uint8(v_reuseFailAlloc_3123_, sizeof(void*)*12 + 1, v_interpreted_2964_);
lean_ctor_set_uint8(v_reuseFailAlloc_3123_, sizeof(void*)*12 + 2, v_ctor_2965_);
lean_ctor_set_uint8(v_reuseFailAlloc_3123_, sizeof(void*)*12 + 3, v_hasLambdas_2966_);
lean_ctor_set_uint8(v_reuseFailAlloc_3123_, sizeof(void*)*12 + 4, v_heqProofs_2967_);
lean_ctor_set_uint8(v_reuseFailAlloc_3123_, sizeof(void*)*12 + 5, v_funCC_2972_);
v___x_2993_ = v_reuseFailAlloc_3123_;
goto v_reusejp_2992_;
}
v___jp_2977_:
{
size_t v___x_2978_; size_t v___x_2979_; uint8_t v___x_2980_; 
v___x_2978_ = lean_ptr_addr(v_next_2958_);
v___x_2979_ = lean_ptr_addr(v_lhs_2935_);
v___x_2980_ = lean_usize_dec_eq(v___x_2978_, v___x_2979_);
if (v___x_2980_ == 0)
{
lean_object* v___x_2982_; 
lean_del_object(v___x_2955_);
lean_dec(v_snd_2946_);
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 1, v_next_2958_);
lean_ctor_set(v___x_2948_, 0, v___x_2950_);
v___x_2982_ = v___x_2948_;
goto v_reusejp_2981_;
}
else
{
lean_object* v_reuseFailAlloc_2984_; 
v_reuseFailAlloc_2984_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2984_, 0, v___x_2950_);
lean_ctor_set(v_reuseFailAlloc_2984_, 1, v_next_2958_);
v___x_2982_ = v_reuseFailAlloc_2984_;
goto v_reusejp_2981_;
}
v_reusejp_2981_:
{
v_a_2938_ = v___x_2982_;
goto _start;
}
}
else
{
lean_object* v___x_2985_; lean_object* v___x_2987_; 
lean_dec_ref(v_next_2958_);
lean_dec_ref(v_rootNew_2936_);
v___x_2985_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__0));
if (v_isShared_2949_ == 0)
{
lean_ctor_set(v___x_2948_, 0, v___x_2985_);
v___x_2987_ = v___x_2948_;
goto v_reusejp_2986_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2985_);
lean_ctor_set(v_reuseFailAlloc_2991_, 1, v_snd_2946_);
v___x_2987_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2986_;
}
v_reusejp_2986_:
{
lean_object* v___x_2989_; 
if (v_isShared_2956_ == 0)
{
lean_ctor_set(v___x_2955_, 0, v___x_2987_);
v___x_2989_ = v___x_2955_;
goto v_reusejp_2988_;
}
else
{
lean_object* v_reuseFailAlloc_2990_; 
v_reuseFailAlloc_2990_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2990_, 0, v___x_2987_);
v___x_2989_ = v_reuseFailAlloc_2990_;
goto v_reusejp_2988_;
}
v_reusejp_2988_:
{
return v___x_2989_;
}
}
}
}
v_reusejp_2992_:
{
lean_object* v___x_2994_; 
lean_inc_ref(v___x_2993_);
lean_inc_ref(v_self_2957_);
v___x_2994_ = l_Lean_Meta_Grind_setENode___redArg(v_self_2957_, v___x_2993_, v___y_2939_);
if (lean_obj_tag(v___x_2994_) == 0)
{
lean_dec_ref_known(v___x_2994_, 1);
if (v_a_2937_ == 0)
{
lean_dec_ref(v___x_2993_);
lean_dec(v_ematchDiagSource_2973_);
lean_dec(v_sTerms_2971_);
lean_dec(v_mt_2970_);
lean_dec(v_generation_2969_);
lean_dec(v_idx_2968_);
lean_dec(v_size_2963_);
lean_dec(v_proof_x3f_2961_);
lean_dec(v_target_x3f_2960_);
lean_dec_ref(v_self_2957_);
goto v___jp_2977_;
}
else
{
lean_object* v___x_2995_; lean_object* v___x_2996_; uint8_t v___x_2997_; 
v___x_2995_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1));
v___x_2996_ = lean_unsigned_to_nat(3u);
v___x_2997_ = l_Lean_Expr_isAppOfArity(v_self_2957_, v___x_2995_, v___x_2996_);
if (v___x_2997_ == 0)
{
lean_dec_ref(v___x_2993_);
lean_dec(v_ematchDiagSource_2973_);
lean_dec(v_sTerms_2971_);
lean_dec(v_mt_2970_);
lean_dec(v_generation_2969_);
lean_dec(v_idx_2968_);
lean_dec(v_size_2963_);
lean_dec(v_proof_x3f_2961_);
lean_dec(v_target_x3f_2960_);
lean_dec_ref(v_self_2957_);
goto v___jp_2977_;
}
else
{
uint8_t v___x_2998_; 
v___x_2998_ = l_Lean_Meta_Grind_ENode_isCongrRoot(v___x_2993_);
lean_dec_ref(v___x_2993_);
if (v___x_2998_ == 0)
{
lean_object* v___x_2999_; lean_object* v_toGoalState_3000_; lean_object* v_enodeMap_3001_; lean_object* v_congrTable_3002_; lean_object* v___x_3003_; 
v___x_2999_ = lean_st_ref_get(v___y_2939_);
v_toGoalState_3000_ = lean_ctor_get(v___x_2999_, 0);
lean_inc_ref(v_toGoalState_3000_);
lean_dec(v___x_2999_);
v_enodeMap_3001_ = lean_ctor_get(v_toGoalState_3000_, 1);
lean_inc_ref(v_enodeMap_3001_);
v_congrTable_3002_ = lean_ctor_get(v_toGoalState_3000_, 5);
lean_inc_ref(v_congrTable_3002_);
lean_dec_ref(v_toGoalState_3000_);
lean_inc_ref(v_self_2957_);
v___x_3003_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v_enodeMap_3001_, v_congrTable_3002_, v_self_2957_);
lean_dec_ref(v_congrTable_3002_);
lean_dec_ref(v_enodeMap_3001_);
if (lean_obj_tag(v___x_3003_) == 0)
{
lean_dec(v_ematchDiagSource_2973_);
lean_dec(v_sTerms_2971_);
lean_dec(v_mt_2970_);
lean_dec(v_generation_2969_);
lean_dec(v_idx_2968_);
lean_dec(v_size_2963_);
lean_dec(v_proof_x3f_2961_);
lean_dec(v_target_x3f_2960_);
lean_dec_ref(v_self_2957_);
goto v___jp_2977_;
}
else
{
lean_object* v_val_3004_; lean_object* v_fst_3005_; lean_object* v___x_3006_; 
v_val_3004_ = lean_ctor_get(v___x_3003_, 0);
lean_inc(v_val_3004_);
lean_dec_ref_known(v___x_3003_, 1);
v_fst_3005_ = lean_ctor_get(v_val_3004_, 0);
lean_inc(v_fst_3005_);
lean_dec(v_val_3004_);
v___x_3006_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_fst_3005_, v___y_2940_);
if (lean_obj_tag(v___x_3006_) == 0)
{
lean_object* v_a_3007_; uint8_t v___x_3008_; 
v_a_3007_ = lean_ctor_get(v___x_3006_, 0);
lean_inc(v_a_3007_);
lean_dec_ref_known(v___x_3006_, 1);
v___x_3008_ = lean_unbox(v_a_3007_);
lean_dec(v_a_3007_);
if (v___x_3008_ == 0)
{
lean_object* v___x_3009_; lean_object* v_toGoalState_3010_; lean_object* v_mvarId_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3106_; 
v___x_3009_ = lean_st_ref_take(v___y_2939_);
v_toGoalState_3010_ = lean_ctor_get(v___x_3009_, 0);
v_mvarId_3011_ = lean_ctor_get(v___x_3009_, 1);
v_isSharedCheck_3106_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3106_ == 0)
{
v___x_3013_ = v___x_3009_;
v_isShared_3014_ = v_isSharedCheck_3106_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_mvarId_3011_);
lean_inc(v_toGoalState_3010_);
lean_dec(v___x_3009_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3106_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v_nextDeclIdx_3015_; lean_object* v_enodeMap_3016_; lean_object* v_exprs_3017_; lean_object* v_parents_3018_; lean_object* v_condParents_3019_; lean_object* v_congrTable_3020_; lean_object* v_appMap_3021_; lean_object* v_indicesFound_3022_; lean_object* v_toProcess_3023_; lean_object* v_internalizing_3024_; uint8_t v_inconsistent_3025_; lean_object* v_nextIdx_3026_; lean_object* v_newRawFacts_3027_; lean_object* v_facts_3028_; lean_object* v_extThms_3029_; lean_object* v_ematch_3030_; lean_object* v_inj_3031_; lean_object* v_split_3032_; lean_object* v_clean_3033_; lean_object* v_sstates_3034_; lean_object* v_goalStack_3035_; uint64_t v_introBase_3036_; lean_object* v_numIntros_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3105_; 
v_nextDeclIdx_3015_ = lean_ctor_get(v_toGoalState_3010_, 0);
v_enodeMap_3016_ = lean_ctor_get(v_toGoalState_3010_, 1);
v_exprs_3017_ = lean_ctor_get(v_toGoalState_3010_, 2);
v_parents_3018_ = lean_ctor_get(v_toGoalState_3010_, 3);
v_condParents_3019_ = lean_ctor_get(v_toGoalState_3010_, 4);
v_congrTable_3020_ = lean_ctor_get(v_toGoalState_3010_, 5);
v_appMap_3021_ = lean_ctor_get(v_toGoalState_3010_, 6);
v_indicesFound_3022_ = lean_ctor_get(v_toGoalState_3010_, 7);
v_toProcess_3023_ = lean_ctor_get(v_toGoalState_3010_, 8);
v_internalizing_3024_ = lean_ctor_get(v_toGoalState_3010_, 9);
v_inconsistent_3025_ = lean_ctor_get_uint8(v_toGoalState_3010_, sizeof(void*)*21 + 8);
v_nextIdx_3026_ = lean_ctor_get(v_toGoalState_3010_, 10);
v_newRawFacts_3027_ = lean_ctor_get(v_toGoalState_3010_, 11);
v_facts_3028_ = lean_ctor_get(v_toGoalState_3010_, 12);
v_extThms_3029_ = lean_ctor_get(v_toGoalState_3010_, 13);
v_ematch_3030_ = lean_ctor_get(v_toGoalState_3010_, 14);
v_inj_3031_ = lean_ctor_get(v_toGoalState_3010_, 15);
v_split_3032_ = lean_ctor_get(v_toGoalState_3010_, 16);
v_clean_3033_ = lean_ctor_get(v_toGoalState_3010_, 17);
v_sstates_3034_ = lean_ctor_get(v_toGoalState_3010_, 18);
v_goalStack_3035_ = lean_ctor_get(v_toGoalState_3010_, 19);
v_introBase_3036_ = lean_ctor_get_uint64(v_toGoalState_3010_, sizeof(void*)*21);
v_numIntros_3037_ = lean_ctor_get(v_toGoalState_3010_, 20);
v_isSharedCheck_3105_ = !lean_is_exclusive(v_toGoalState_3010_);
if (v_isSharedCheck_3105_ == 0)
{
v___x_3039_ = v_toGoalState_3010_;
v_isShared_3040_ = v_isSharedCheck_3105_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_numIntros_3037_);
lean_inc(v_goalStack_3035_);
lean_inc(v_sstates_3034_);
lean_inc(v_clean_3033_);
lean_inc(v_split_3032_);
lean_inc(v_inj_3031_);
lean_inc(v_ematch_3030_);
lean_inc(v_extThms_3029_);
lean_inc(v_facts_3028_);
lean_inc(v_newRawFacts_3027_);
lean_inc(v_nextIdx_3026_);
lean_inc(v_internalizing_3024_);
lean_inc(v_toProcess_3023_);
lean_inc(v_indicesFound_3022_);
lean_inc(v_appMap_3021_);
lean_inc(v_congrTable_3020_);
lean_inc(v_condParents_3019_);
lean_inc(v_parents_3018_);
lean_inc(v_exprs_3017_);
lean_inc(v_enodeMap_3016_);
lean_inc(v_nextDeclIdx_3015_);
lean_dec(v_toGoalState_3010_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3105_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3044_; 
v___x_3041_ = lean_box(0);
lean_inc_ref(v_self_2957_);
v___x_3042_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v_enodeMap_3016_, v_congrTable_3020_, v_self_2957_, v___x_3041_);
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 5, v___x_3042_);
v___x_3044_ = v___x_3039_;
goto v_reusejp_3043_;
}
else
{
lean_object* v_reuseFailAlloc_3104_; 
v_reuseFailAlloc_3104_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_3104_, 0, v_nextDeclIdx_3015_);
lean_ctor_set(v_reuseFailAlloc_3104_, 1, v_enodeMap_3016_);
lean_ctor_set(v_reuseFailAlloc_3104_, 2, v_exprs_3017_);
lean_ctor_set(v_reuseFailAlloc_3104_, 3, v_parents_3018_);
lean_ctor_set(v_reuseFailAlloc_3104_, 4, v_condParents_3019_);
lean_ctor_set(v_reuseFailAlloc_3104_, 5, v___x_3042_);
lean_ctor_set(v_reuseFailAlloc_3104_, 6, v_appMap_3021_);
lean_ctor_set(v_reuseFailAlloc_3104_, 7, v_indicesFound_3022_);
lean_ctor_set(v_reuseFailAlloc_3104_, 8, v_toProcess_3023_);
lean_ctor_set(v_reuseFailAlloc_3104_, 9, v_internalizing_3024_);
lean_ctor_set(v_reuseFailAlloc_3104_, 10, v_nextIdx_3026_);
lean_ctor_set(v_reuseFailAlloc_3104_, 11, v_newRawFacts_3027_);
lean_ctor_set(v_reuseFailAlloc_3104_, 12, v_facts_3028_);
lean_ctor_set(v_reuseFailAlloc_3104_, 13, v_extThms_3029_);
lean_ctor_set(v_reuseFailAlloc_3104_, 14, v_ematch_3030_);
lean_ctor_set(v_reuseFailAlloc_3104_, 15, v_inj_3031_);
lean_ctor_set(v_reuseFailAlloc_3104_, 16, v_split_3032_);
lean_ctor_set(v_reuseFailAlloc_3104_, 17, v_clean_3033_);
lean_ctor_set(v_reuseFailAlloc_3104_, 18, v_sstates_3034_);
lean_ctor_set(v_reuseFailAlloc_3104_, 19, v_goalStack_3035_);
lean_ctor_set(v_reuseFailAlloc_3104_, 20, v_numIntros_3037_);
lean_ctor_set_uint8(v_reuseFailAlloc_3104_, sizeof(void*)*21 + 8, v_inconsistent_3025_);
lean_ctor_set_uint64(v_reuseFailAlloc_3104_, sizeof(void*)*21, v_introBase_3036_);
v___x_3044_ = v_reuseFailAlloc_3104_;
goto v_reusejp_3043_;
}
v_reusejp_3043_:
{
lean_object* v___x_3046_; 
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 0, v___x_3044_);
v___x_3046_ = v___x_3013_;
goto v_reusejp_3045_;
}
else
{
lean_object* v_reuseFailAlloc_3103_; 
v_reuseFailAlloc_3103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3103_, 0, v___x_3044_);
lean_ctor_set(v_reuseFailAlloc_3103_, 1, v_mvarId_3011_);
v___x_3046_ = v_reuseFailAlloc_3103_;
goto v_reusejp_3045_;
}
v_reusejp_3045_:
{
lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; 
v___x_3047_ = lean_st_ref_put(v___y_2939_, v___x_3046_);
lean_inc_ref(v_rootNew_2936_);
lean_inc_ref(v_next_2958_);
lean_inc_ref_n(v_self_2957_, 3);
v___x_3048_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v___x_3048_, 0, v_self_2957_);
lean_ctor_set(v___x_3048_, 1, v_next_2958_);
lean_ctor_set(v___x_3048_, 2, v_rootNew_2936_);
lean_ctor_set(v___x_3048_, 3, v_self_2957_);
lean_ctor_set(v___x_3048_, 4, v_target_x3f_2960_);
lean_ctor_set(v___x_3048_, 5, v_proof_x3f_2961_);
lean_ctor_set(v___x_3048_, 6, v_size_2963_);
lean_ctor_set(v___x_3048_, 7, v_idx_2968_);
lean_ctor_set(v___x_3048_, 8, v_generation_2969_);
lean_ctor_set(v___x_3048_, 9, v_mt_2970_);
lean_ctor_set(v___x_3048_, 10, v_sTerms_2971_);
lean_ctor_set(v___x_3048_, 11, v_ematchDiagSource_2973_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*12, v_flipped_2962_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*12 + 1, v_interpreted_2964_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*12 + 2, v_ctor_2965_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*12 + 3, v_hasLambdas_2966_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*12 + 4, v_heqProofs_2967_);
lean_ctor_set_uint8(v___x_3048_, sizeof(void*)*12 + 5, v_funCC_2972_);
v___x_3049_ = l_Lean_Meta_Grind_setENode___redArg(v_self_2957_, v___x_3048_, v___y_2939_);
if (lean_obj_tag(v___x_3049_) == 0)
{
lean_object* v___x_3050_; lean_object* v___x_3051_; 
lean_dec_ref_known(v___x_3049_, 1);
v___x_3050_ = lean_st_ref_get(v___y_2939_);
lean_inc(v_fst_3005_);
v___x_3051_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3050_, v_fst_3005_, v___y_2941_, v___y_2942_, v___y_2943_, v___y_2944_);
lean_dec(v___x_3050_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v_self_3053_; lean_object* v_next_3054_; lean_object* v_root_3055_; lean_object* v_target_x3f_3056_; lean_object* v_proof_x3f_3057_; uint8_t v_flipped_3058_; lean_object* v_size_3059_; uint8_t v_interpreted_3060_; uint8_t v_ctor_3061_; uint8_t v_hasLambdas_3062_; uint8_t v_heqProofs_3063_; lean_object* v_idx_3064_; lean_object* v_generation_3065_; lean_object* v_mt_3066_; lean_object* v_sTerms_3067_; uint8_t v_funCC_3068_; lean_object* v_ematchDiagSource_3069_; lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3085_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
v_self_3053_ = lean_ctor_get(v_a_3052_, 0);
v_next_3054_ = lean_ctor_get(v_a_3052_, 1);
v_root_3055_ = lean_ctor_get(v_a_3052_, 2);
v_target_x3f_3056_ = lean_ctor_get(v_a_3052_, 4);
v_proof_x3f_3057_ = lean_ctor_get(v_a_3052_, 5);
v_flipped_3058_ = lean_ctor_get_uint8(v_a_3052_, sizeof(void*)*12);
v_size_3059_ = lean_ctor_get(v_a_3052_, 6);
v_interpreted_3060_ = lean_ctor_get_uint8(v_a_3052_, sizeof(void*)*12 + 1);
v_ctor_3061_ = lean_ctor_get_uint8(v_a_3052_, sizeof(void*)*12 + 2);
v_hasLambdas_3062_ = lean_ctor_get_uint8(v_a_3052_, sizeof(void*)*12 + 3);
v_heqProofs_3063_ = lean_ctor_get_uint8(v_a_3052_, sizeof(void*)*12 + 4);
v_idx_3064_ = lean_ctor_get(v_a_3052_, 7);
v_generation_3065_ = lean_ctor_get(v_a_3052_, 8);
v_mt_3066_ = lean_ctor_get(v_a_3052_, 9);
v_sTerms_3067_ = lean_ctor_get(v_a_3052_, 10);
v_funCC_3068_ = lean_ctor_get_uint8(v_a_3052_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3069_ = lean_ctor_get(v_a_3052_, 11);
v_isSharedCheck_3085_ = !lean_is_exclusive(v_a_3052_);
if (v_isSharedCheck_3085_ == 0)
{
lean_object* v_unused_3086_; 
v_unused_3086_ = lean_ctor_get(v_a_3052_, 3);
lean_dec(v_unused_3086_);
v___x_3071_ = v_a_3052_;
v_isShared_3072_ = v_isSharedCheck_3085_;
goto v_resetjp_3070_;
}
else
{
lean_inc(v_ematchDiagSource_3069_);
lean_inc(v_sTerms_3067_);
lean_inc(v_mt_3066_);
lean_inc(v_generation_3065_);
lean_inc(v_idx_3064_);
lean_inc(v_size_3059_);
lean_inc(v_proof_x3f_3057_);
lean_inc(v_target_x3f_3056_);
lean_inc(v_root_3055_);
lean_inc(v_next_3054_);
lean_inc(v_self_3053_);
lean_dec(v_a_3052_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3085_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3074_; 
if (v_isShared_3072_ == 0)
{
lean_ctor_set(v___x_3071_, 3, v_self_2957_);
v___x_3074_ = v___x_3071_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3084_; 
v_reuseFailAlloc_3084_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3084_, 0, v_self_3053_);
lean_ctor_set(v_reuseFailAlloc_3084_, 1, v_next_3054_);
lean_ctor_set(v_reuseFailAlloc_3084_, 2, v_root_3055_);
lean_ctor_set(v_reuseFailAlloc_3084_, 3, v_self_2957_);
lean_ctor_set(v_reuseFailAlloc_3084_, 4, v_target_x3f_3056_);
lean_ctor_set(v_reuseFailAlloc_3084_, 5, v_proof_x3f_3057_);
lean_ctor_set(v_reuseFailAlloc_3084_, 6, v_size_3059_);
lean_ctor_set(v_reuseFailAlloc_3084_, 7, v_idx_3064_);
lean_ctor_set(v_reuseFailAlloc_3084_, 8, v_generation_3065_);
lean_ctor_set(v_reuseFailAlloc_3084_, 9, v_mt_3066_);
lean_ctor_set(v_reuseFailAlloc_3084_, 10, v_sTerms_3067_);
lean_ctor_set(v_reuseFailAlloc_3084_, 11, v_ematchDiagSource_3069_);
lean_ctor_set_uint8(v_reuseFailAlloc_3084_, sizeof(void*)*12, v_flipped_3058_);
lean_ctor_set_uint8(v_reuseFailAlloc_3084_, sizeof(void*)*12 + 1, v_interpreted_3060_);
lean_ctor_set_uint8(v_reuseFailAlloc_3084_, sizeof(void*)*12 + 2, v_ctor_3061_);
lean_ctor_set_uint8(v_reuseFailAlloc_3084_, sizeof(void*)*12 + 3, v_hasLambdas_3062_);
lean_ctor_set_uint8(v_reuseFailAlloc_3084_, sizeof(void*)*12 + 4, v_heqProofs_3063_);
lean_ctor_set_uint8(v_reuseFailAlloc_3084_, sizeof(void*)*12 + 5, v_funCC_3068_);
v___x_3074_ = v_reuseFailAlloc_3084_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; 
v___x_3075_ = l_Lean_Meta_Grind_setENode___redArg(v_fst_3005_, v___x_3074_, v___y_2939_);
if (lean_obj_tag(v___x_3075_) == 0)
{
lean_dec_ref_known(v___x_3075_, 1);
goto v___jp_2977_;
}
else
{
lean_object* v_a_3076_; lean_object* v___x_3078_; uint8_t v_isShared_3079_; uint8_t v_isSharedCheck_3083_; 
lean_dec_ref(v_next_2958_);
lean_del_object(v___x_2955_);
lean_del_object(v___x_2948_);
lean_dec(v_snd_2946_);
lean_dec_ref(v_rootNew_2936_);
v_a_3076_ = lean_ctor_get(v___x_3075_, 0);
v_isSharedCheck_3083_ = !lean_is_exclusive(v___x_3075_);
if (v_isSharedCheck_3083_ == 0)
{
v___x_3078_ = v___x_3075_;
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
else
{
lean_inc(v_a_3076_);
lean_dec(v___x_3075_);
v___x_3078_ = lean_box(0);
v_isShared_3079_ = v_isSharedCheck_3083_;
goto v_resetjp_3077_;
}
v_resetjp_3077_:
{
lean_object* v___x_3081_; 
if (v_isShared_3079_ == 0)
{
v___x_3081_ = v___x_3078_;
goto v_reusejp_3080_;
}
else
{
lean_object* v_reuseFailAlloc_3082_; 
v_reuseFailAlloc_3082_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3082_, 0, v_a_3076_);
v___x_3081_ = v_reuseFailAlloc_3082_;
goto v_reusejp_3080_;
}
v_reusejp_3080_:
{
return v___x_3081_;
}
}
}
}
}
}
else
{
lean_object* v_a_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3094_; 
lean_dec(v_fst_3005_);
lean_dec_ref(v_next_2958_);
lean_dec_ref(v_self_2957_);
lean_del_object(v___x_2955_);
lean_del_object(v___x_2948_);
lean_dec(v_snd_2946_);
lean_dec_ref(v_rootNew_2936_);
v_a_3087_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3094_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3094_ == 0)
{
v___x_3089_ = v___x_3051_;
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_a_3087_);
lean_dec(v___x_3051_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3094_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3092_; 
if (v_isShared_3090_ == 0)
{
v___x_3092_ = v___x_3089_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3093_; 
v_reuseFailAlloc_3093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3093_, 0, v_a_3087_);
v___x_3092_ = v_reuseFailAlloc_3093_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
return v___x_3092_;
}
}
}
}
else
{
lean_object* v_a_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3102_; 
lean_dec(v_fst_3005_);
lean_dec_ref(v_next_2958_);
lean_dec_ref(v_self_2957_);
lean_del_object(v___x_2955_);
lean_del_object(v___x_2948_);
lean_dec(v_snd_2946_);
lean_dec_ref(v_rootNew_2936_);
v_a_3095_ = lean_ctor_get(v___x_3049_, 0);
v_isSharedCheck_3102_ = !lean_is_exclusive(v___x_3049_);
if (v_isSharedCheck_3102_ == 0)
{
v___x_3097_ = v___x_3049_;
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_a_3095_);
lean_dec(v___x_3049_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3102_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3100_; 
if (v_isShared_3098_ == 0)
{
v___x_3100_ = v___x_3097_;
goto v_reusejp_3099_;
}
else
{
lean_object* v_reuseFailAlloc_3101_; 
v_reuseFailAlloc_3101_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3101_, 0, v_a_3095_);
v___x_3100_ = v_reuseFailAlloc_3101_;
goto v_reusejp_3099_;
}
v_reusejp_3099_:
{
return v___x_3100_;
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
lean_dec(v_fst_3005_);
lean_dec(v_ematchDiagSource_2973_);
lean_dec(v_sTerms_2971_);
lean_dec(v_mt_2970_);
lean_dec(v_generation_2969_);
lean_dec(v_idx_2968_);
lean_dec(v_size_2963_);
lean_dec(v_proof_x3f_2961_);
lean_dec(v_target_x3f_2960_);
lean_dec_ref(v_self_2957_);
goto v___jp_2977_;
}
}
else
{
lean_object* v_a_3107_; lean_object* v___x_3109_; uint8_t v_isShared_3110_; uint8_t v_isSharedCheck_3114_; 
lean_dec(v_fst_3005_);
lean_dec(v_ematchDiagSource_2973_);
lean_dec(v_sTerms_2971_);
lean_dec(v_mt_2970_);
lean_dec(v_generation_2969_);
lean_dec(v_idx_2968_);
lean_dec(v_size_2963_);
lean_dec(v_proof_x3f_2961_);
lean_dec(v_target_x3f_2960_);
lean_dec_ref(v_next_2958_);
lean_dec_ref(v_self_2957_);
lean_del_object(v___x_2955_);
lean_del_object(v___x_2948_);
lean_dec(v_snd_2946_);
lean_dec_ref(v_rootNew_2936_);
v_a_3107_ = lean_ctor_get(v___x_3006_, 0);
v_isSharedCheck_3114_ = !lean_is_exclusive(v___x_3006_);
if (v_isSharedCheck_3114_ == 0)
{
v___x_3109_ = v___x_3006_;
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
else
{
lean_inc(v_a_3107_);
lean_dec(v___x_3006_);
v___x_3109_ = lean_box(0);
v_isShared_3110_ = v_isSharedCheck_3114_;
goto v_resetjp_3108_;
}
v_resetjp_3108_:
{
lean_object* v___x_3112_; 
if (v_isShared_3110_ == 0)
{
v___x_3112_ = v___x_3109_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_a_3107_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
return v___x_3112_;
}
}
}
}
}
else
{
lean_dec(v_ematchDiagSource_2973_);
lean_dec(v_sTerms_2971_);
lean_dec(v_mt_2970_);
lean_dec(v_generation_2969_);
lean_dec(v_idx_2968_);
lean_dec(v_size_2963_);
lean_dec(v_proof_x3f_2961_);
lean_dec(v_target_x3f_2960_);
lean_dec_ref(v_self_2957_);
goto v___jp_2977_;
}
}
}
}
else
{
lean_object* v_a_3115_; lean_object* v___x_3117_; uint8_t v_isShared_3118_; uint8_t v_isSharedCheck_3122_; 
lean_dec_ref(v___x_2993_);
lean_dec(v_ematchDiagSource_2973_);
lean_dec(v_sTerms_2971_);
lean_dec(v_mt_2970_);
lean_dec(v_generation_2969_);
lean_dec(v_idx_2968_);
lean_dec(v_size_2963_);
lean_dec(v_proof_x3f_2961_);
lean_dec(v_target_x3f_2960_);
lean_dec_ref(v_next_2958_);
lean_dec_ref(v_self_2957_);
lean_del_object(v___x_2955_);
lean_del_object(v___x_2948_);
lean_dec(v_snd_2946_);
lean_dec_ref(v_rootNew_2936_);
v_a_3115_ = lean_ctor_get(v___x_2994_, 0);
v_isSharedCheck_3122_ = !lean_is_exclusive(v___x_2994_);
if (v_isSharedCheck_3122_ == 0)
{
v___x_3117_ = v___x_2994_;
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
else
{
lean_inc(v_a_3115_);
lean_dec(v___x_2994_);
v___x_3117_ = lean_box(0);
v_isShared_3118_ = v_isSharedCheck_3122_;
goto v_resetjp_3116_;
}
v_resetjp_3116_:
{
lean_object* v___x_3120_; 
if (v_isShared_3118_ == 0)
{
v___x_3120_ = v___x_3117_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_a_3115_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3127_; lean_object* v___x_3129_; uint8_t v_isShared_3130_; uint8_t v_isSharedCheck_3134_; 
lean_del_object(v___x_2948_);
lean_dec(v_snd_2946_);
lean_dec_ref(v_rootNew_2936_);
v_a_3127_ = lean_ctor_get(v___x_2952_, 0);
v_isSharedCheck_3134_ = !lean_is_exclusive(v___x_2952_);
if (v_isSharedCheck_3134_ == 0)
{
v___x_3129_ = v___x_2952_;
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
else
{
lean_inc(v_a_3127_);
lean_dec(v___x_2952_);
v___x_3129_ = lean_box(0);
v_isShared_3130_ = v_isSharedCheck_3134_;
goto v_resetjp_3128_;
}
v_resetjp_3128_:
{
lean_object* v___x_3132_; 
if (v_isShared_3130_ == 0)
{
v___x_3132_ = v___x_3129_;
goto v_reusejp_3131_;
}
else
{
lean_object* v_reuseFailAlloc_3133_; 
v_reuseFailAlloc_3133_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3133_, 0, v_a_3127_);
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
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___boxed(lean_object* v_lhs_3137_, lean_object* v_rootNew_3138_, lean_object* v_a_3139_, lean_object* v_a_3140_, lean_object* v___y_3141_, lean_object* v___y_3142_, lean_object* v___y_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_){
_start:
{
uint8_t v_a_28408__boxed_3148_; lean_object* v_res_3149_; 
v_a_28408__boxed_3148_ = lean_unbox(v_a_3139_);
v_res_3149_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3137_, v_rootNew_3138_, v_a_28408__boxed_3148_, v_a_3140_, v___y_3141_, v___y_3142_, v___y_3143_, v___y_3144_, v___y_3145_, v___y_3146_);
lean_dec(v___y_3146_);
lean_dec_ref(v___y_3145_);
lean_dec(v___y_3144_);
lean_dec_ref(v___y_3143_);
lean_dec_ref(v___y_3142_);
lean_dec(v___y_3141_);
lean_dec_ref(v_lhs_3137_);
return v_res_3149_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(lean_object* v_lhs_3150_, lean_object* v_rootNew_3151_, lean_object* v_a_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_, lean_object* v_a_3157_, lean_object* v_a_3158_, lean_object* v_a_3159_, lean_object* v_a_3160_, lean_object* v_a_3161_){
_start:
{
lean_object* v___x_3163_; 
v___x_3163_ = l_Lean_Meta_Sym_isFalseExpr___redArg(v_rootNew_3151_, v_a_3156_);
if (lean_obj_tag(v___x_3163_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; uint8_t v___x_3167_; lean_object* v___x_3168_; 
v_a_3164_ = lean_ctor_get(v___x_3163_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v___x_3163_, 1);
v___x_3165_ = lean_box(0);
lean_inc_ref(v_lhs_3150_);
v___x_3166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3165_);
lean_ctor_set(v___x_3166_, 1, v_lhs_3150_);
v___x_3167_ = lean_unbox(v_a_3164_);
lean_dec(v_a_3164_);
v___x_3168_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3150_, v_rootNew_3151_, v___x_3167_, v___x_3166_, v_a_3152_, v_a_3156_, v_a_3158_, v_a_3159_, v_a_3160_, v_a_3161_);
lean_dec_ref(v_lhs_3150_);
if (lean_obj_tag(v___x_3168_) == 0)
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3182_; 
v_a_3169_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3182_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3182_ == 0)
{
v___x_3171_ = v___x_3168_;
v_isShared_3172_ = v_isSharedCheck_3182_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3168_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3182_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v_fst_3173_; 
v_fst_3173_ = lean_ctor_get(v_a_3169_, 0);
lean_inc(v_fst_3173_);
lean_dec(v_a_3169_);
if (lean_obj_tag(v_fst_3173_) == 0)
{
lean_object* v___x_3174_; lean_object* v___x_3176_; 
v___x_3174_ = lean_box(0);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v___x_3174_);
v___x_3176_ = v___x_3171_;
goto v_reusejp_3175_;
}
else
{
lean_object* v_reuseFailAlloc_3177_; 
v_reuseFailAlloc_3177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3177_, 0, v___x_3174_);
v___x_3176_ = v_reuseFailAlloc_3177_;
goto v_reusejp_3175_;
}
v_reusejp_3175_:
{
return v___x_3176_;
}
}
else
{
lean_object* v_val_3178_; lean_object* v___x_3180_; 
v_val_3178_ = lean_ctor_get(v_fst_3173_, 0);
lean_inc(v_val_3178_);
lean_dec_ref_known(v_fst_3173_, 1);
if (v_isShared_3172_ == 0)
{
lean_ctor_set(v___x_3171_, 0, v_val_3178_);
v___x_3180_ = v___x_3171_;
goto v_reusejp_3179_;
}
else
{
lean_object* v_reuseFailAlloc_3181_; 
v_reuseFailAlloc_3181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3181_, 0, v_val_3178_);
v___x_3180_ = v_reuseFailAlloc_3181_;
goto v_reusejp_3179_;
}
v_reusejp_3179_:
{
return v___x_3180_;
}
}
}
}
else
{
lean_object* v_a_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3190_; 
v_a_3183_ = lean_ctor_get(v___x_3168_, 0);
v_isSharedCheck_3190_ = !lean_is_exclusive(v___x_3168_);
if (v_isSharedCheck_3190_ == 0)
{
v___x_3185_ = v___x_3168_;
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_a_3183_);
lean_dec(v___x_3168_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3190_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v___x_3188_; 
if (v_isShared_3186_ == 0)
{
v___x_3188_ = v___x_3185_;
goto v_reusejp_3187_;
}
else
{
lean_object* v_reuseFailAlloc_3189_; 
v_reuseFailAlloc_3189_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3189_, 0, v_a_3183_);
v___x_3188_ = v_reuseFailAlloc_3189_;
goto v_reusejp_3187_;
}
v_reusejp_3187_:
{
return v___x_3188_;
}
}
}
}
else
{
lean_object* v_a_3191_; lean_object* v___x_3193_; uint8_t v_isShared_3194_; uint8_t v_isSharedCheck_3198_; 
lean_dec_ref(v_rootNew_3151_);
lean_dec_ref(v_lhs_3150_);
v_a_3191_ = lean_ctor_get(v___x_3163_, 0);
v_isSharedCheck_3198_ = !lean_is_exclusive(v___x_3163_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3193_ = v___x_3163_;
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
else
{
lean_inc(v_a_3191_);
lean_dec(v___x_3163_);
v___x_3193_ = lean_box(0);
v_isShared_3194_ = v_isSharedCheck_3198_;
goto v_resetjp_3192_;
}
v_resetjp_3192_:
{
lean_object* v___x_3196_; 
if (v_isShared_3194_ == 0)
{
v___x_3196_ = v___x_3193_;
goto v_reusejp_3195_;
}
else
{
lean_object* v_reuseFailAlloc_3197_; 
v_reuseFailAlloc_3197_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3197_, 0, v_a_3191_);
v___x_3196_ = v_reuseFailAlloc_3197_;
goto v_reusejp_3195_;
}
v_reusejp_3195_:
{
return v___x_3196_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots___boxed(lean_object* v_lhs_3199_, lean_object* v_rootNew_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_, lean_object* v_a_3204_, lean_object* v_a_3205_, lean_object* v_a_3206_, lean_object* v_a_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_, lean_object* v_a_3210_, lean_object* v_a_3211_){
_start:
{
lean_object* v_res_3212_; 
v_res_3212_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(v_lhs_3199_, v_rootNew_3200_, v_a_3201_, v_a_3202_, v_a_3203_, v_a_3204_, v_a_3205_, v_a_3206_, v_a_3207_, v_a_3208_, v_a_3209_, v_a_3210_);
lean_dec(v_a_3210_);
lean_dec_ref(v_a_3209_);
lean_dec(v_a_3208_);
lean_dec_ref(v_a_3207_);
lean_dec(v_a_3206_);
lean_dec_ref(v_a_3205_);
lean_dec(v_a_3204_);
lean_dec_ref(v_a_3203_);
lean_dec(v_a_3202_);
lean_dec(v_a_3201_);
return v_res_3212_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(lean_object* v___x_3213_, lean_object* v_00_u03b2_3214_, lean_object* v_x_3215_, lean_object* v_x_3216_){
_start:
{
lean_object* v___x_3217_; 
v___x_3217_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___redArg(v___x_3213_, v_x_3215_, v_x_3216_);
return v___x_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0___boxed(lean_object* v___x_3218_, lean_object* v_00_u03b2_3219_, lean_object* v_x_3220_, lean_object* v_x_3221_){
_start:
{
lean_object* v_res_3222_; 
v_res_3222_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0(v___x_3218_, v_00_u03b2_3219_, v_x_3220_, v_x_3221_);
lean_dec_ref(v_x_3220_);
lean_dec_ref(v___x_3218_);
return v_res_3222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(lean_object* v___x_3223_, lean_object* v_00_u03b2_3224_, lean_object* v_x_3225_, lean_object* v_x_3226_, lean_object* v_x_3227_){
_start:
{
lean_object* v___x_3228_; 
v___x_3228_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___redArg(v___x_3223_, v_x_3225_, v_x_3226_, v_x_3227_);
return v___x_3228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1___boxed(lean_object* v___x_3229_, lean_object* v_00_u03b2_3230_, lean_object* v_x_3231_, lean_object* v_x_3232_, lean_object* v_x_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1(v___x_3229_, v_00_u03b2_3230_, v_x_3231_, v_x_3232_, v_x_3233_);
lean_dec_ref(v___x_3229_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(lean_object* v_lhs_3235_, lean_object* v_rootNew_3236_, uint8_t v_a_3237_, lean_object* v_inst_3238_, lean_object* v_a_3239_, lean_object* v___y_3240_, lean_object* v___y_3241_, lean_object* v___y_3242_, lean_object* v___y_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_){
_start:
{
lean_object* v___x_3251_; 
v___x_3251_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg(v_lhs_3235_, v_rootNew_3236_, v_a_3237_, v_a_3239_, v___y_3240_, v___y_3244_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_);
return v___x_3251_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___boxed(lean_object* v_lhs_3252_, lean_object* v_rootNew_3253_, lean_object* v_a_3254_, lean_object* v_inst_3255_, lean_object* v_a_3256_, lean_object* v___y_3257_, lean_object* v___y_3258_, lean_object* v___y_3259_, lean_object* v___y_3260_, lean_object* v___y_3261_, lean_object* v___y_3262_, lean_object* v___y_3263_, lean_object* v___y_3264_, lean_object* v___y_3265_, lean_object* v___y_3266_, lean_object* v___y_3267_){
_start:
{
uint8_t v_a_28793__boxed_3268_; lean_object* v_res_3269_; 
v_a_28793__boxed_3268_ = lean_unbox(v_a_3254_);
v_res_3269_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2(v_lhs_3252_, v_rootNew_3253_, v_a_28793__boxed_3268_, v_inst_3255_, v_a_3256_, v___y_3257_, v___y_3258_, v___y_3259_, v___y_3260_, v___y_3261_, v___y_3262_, v___y_3263_, v___y_3264_, v___y_3265_, v___y_3266_);
lean_dec(v___y_3266_);
lean_dec_ref(v___y_3265_);
lean_dec(v___y_3264_);
lean_dec_ref(v___y_3263_);
lean_dec(v___y_3262_);
lean_dec_ref(v___y_3261_);
lean_dec(v___y_3260_);
lean_dec_ref(v___y_3259_);
lean_dec(v___y_3258_);
lean_dec(v___y_3257_);
lean_dec_ref(v_lhs_3252_);
return v_res_3269_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(lean_object* v___x_3270_, lean_object* v_00_u03b2_3271_, lean_object* v_x_3272_, size_t v_x_3273_, lean_object* v_x_3274_){
_start:
{
lean_object* v___x_3275_; 
lean_inc_ref(v_x_3272_);
v___x_3275_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___redArg(v___x_3270_, v_x_3272_, v_x_3273_, v_x_3274_);
return v___x_3275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0___boxed(lean_object* v___x_3276_, lean_object* v_00_u03b2_3277_, lean_object* v_x_3278_, lean_object* v_x_3279_, lean_object* v_x_3280_){
_start:
{
size_t v_x_28836__boxed_3281_; lean_object* v_res_3282_; 
v_x_28836__boxed_3281_ = lean_unbox_usize(v_x_3279_);
lean_dec(v_x_3279_);
v_res_3282_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0(v___x_3276_, v_00_u03b2_3277_, v_x_3278_, v_x_28836__boxed_3281_, v_x_3280_);
lean_dec_ref(v_x_3278_);
lean_dec_ref(v___x_3276_);
return v_res_3282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(lean_object* v___x_3283_, lean_object* v_00_u03b2_3284_, lean_object* v_x_3285_, size_t v_x_3286_, size_t v_x_3287_, lean_object* v_x_3288_, lean_object* v_x_3289_){
_start:
{
lean_object* v___x_3290_; 
v___x_3290_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___redArg(v___x_3283_, v_x_3285_, v_x_3286_, v_x_3287_, v_x_3288_, v_x_3289_);
return v___x_3290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2___boxed(lean_object* v___x_3291_, lean_object* v_00_u03b2_3292_, lean_object* v_x_3293_, lean_object* v_x_3294_, lean_object* v_x_3295_, lean_object* v_x_3296_, lean_object* v_x_3297_){
_start:
{
size_t v_x_28850__boxed_3298_; size_t v_x_28851__boxed_3299_; lean_object* v_res_3300_; 
v_x_28850__boxed_3298_ = lean_unbox_usize(v_x_3294_);
lean_dec(v_x_3294_);
v_x_28851__boxed_3299_ = lean_unbox_usize(v_x_3295_);
lean_dec(v_x_3295_);
v_res_3300_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2(v___x_3291_, v_00_u03b2_3292_, v_x_3293_, v_x_28850__boxed_3298_, v_x_28851__boxed_3299_, v_x_3296_, v_x_3297_);
lean_dec_ref(v___x_3291_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(lean_object* v___x_3301_, lean_object* v_00_u03b2_3302_, lean_object* v_keys_3303_, lean_object* v_vals_3304_, lean_object* v_heq_3305_, lean_object* v_i_3306_, lean_object* v_k_3307_){
_start:
{
lean_object* v___x_3308_; 
v___x_3308_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___redArg(v___x_3301_, v_keys_3303_, v_vals_3304_, v_i_3306_, v_k_3307_);
return v___x_3308_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1___boxed(lean_object* v___x_3309_, lean_object* v_00_u03b2_3310_, lean_object* v_keys_3311_, lean_object* v_vals_3312_, lean_object* v_heq_3313_, lean_object* v_i_3314_, lean_object* v_k_3315_){
_start:
{
lean_object* v_res_3316_; 
v_res_3316_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__0_spec__0_spec__1(v___x_3309_, v_00_u03b2_3310_, v_keys_3311_, v_vals_3312_, v_heq_3313_, v_i_3314_, v_k_3315_);
lean_dec_ref(v_vals_3312_);
lean_dec_ref(v_keys_3311_);
lean_dec_ref(v___x_3309_);
return v_res_3316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(lean_object* v___x_3317_, lean_object* v_00_u03b2_3318_, lean_object* v_n_3319_, lean_object* v_k_3320_, lean_object* v_v_3321_){
_start:
{
lean_object* v___x_3322_; 
v___x_3322_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___redArg(v___x_3317_, v_n_3319_, v_k_3320_, v_v_3321_);
return v___x_3322_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4___boxed(lean_object* v___x_3323_, lean_object* v_00_u03b2_3324_, lean_object* v_n_3325_, lean_object* v_k_3326_, lean_object* v_v_3327_){
_start:
{
lean_object* v_res_3328_; 
v_res_3328_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4(v___x_3323_, v_00_u03b2_3324_, v_n_3325_, v_k_3326_, v_v_3327_);
lean_dec_ref(v___x_3323_);
return v_res_3328_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(lean_object* v___x_3329_, lean_object* v_00_u03b2_3330_, size_t v_depth_3331_, lean_object* v_keys_3332_, lean_object* v_vals_3333_, lean_object* v_heq_3334_, lean_object* v_i_3335_, lean_object* v_entries_3336_){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___redArg(v___x_3329_, v_depth_3331_, v_keys_3332_, v_vals_3333_, v_i_3335_, v_entries_3336_);
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5___boxed(lean_object* v___x_3338_, lean_object* v_00_u03b2_3339_, lean_object* v_depth_3340_, lean_object* v_keys_3341_, lean_object* v_vals_3342_, lean_object* v_heq_3343_, lean_object* v_i_3344_, lean_object* v_entries_3345_){
_start:
{
size_t v_depth_boxed_3346_; lean_object* v_res_3347_; 
v_depth_boxed_3346_ = lean_unbox_usize(v_depth_3340_);
lean_dec(v_depth_3340_);
v_res_3347_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__5(v___x_3338_, v_00_u03b2_3339_, v_depth_boxed_3346_, v_keys_3341_, v_vals_3342_, v_heq_3343_, v_i_3344_, v_entries_3345_);
lean_dec_ref(v_vals_3342_);
lean_dec_ref(v_keys_3341_);
lean_dec_ref(v___x_3338_);
return v_res_3347_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(lean_object* v___x_3348_, lean_object* v_00_u03b2_3349_, lean_object* v_x_3350_, lean_object* v_x_3351_, lean_object* v_x_3352_, lean_object* v_x_3353_){
_start:
{
lean_object* v___x_3354_; 
v___x_3354_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___redArg(v___x_3348_, v_x_3350_, v_x_3351_, v_x_3352_, v_x_3353_);
return v___x_3354_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6___boxed(lean_object* v___x_3355_, lean_object* v_00_u03b2_3356_, lean_object* v_x_3357_, lean_object* v_x_3358_, lean_object* v_x_3359_, lean_object* v_x_3360_){
_start:
{
lean_object* v_res_3361_; 
v_res_3361_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__1_spec__2_spec__4_spec__6(v___x_3355_, v_00_u03b2_3356_, v_x_3357_, v_x_3358_, v_x_3359_, v_x_3360_);
lean_dec_ref(v___x_3355_);
return v_res_3361_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(lean_object* v_as_x27_3362_, lean_object* v_b_3363_, lean_object* v___y_3364_, lean_object* v___y_3365_, lean_object* v___y_3366_, lean_object* v___y_3367_, lean_object* v___y_3368_, lean_object* v___y_3369_, lean_object* v___y_3370_, lean_object* v___y_3371_, lean_object* v___y_3372_, lean_object* v___y_3373_){
_start:
{
if (lean_obj_tag(v_as_x27_3362_) == 0)
{
lean_object* v___x_3375_; 
v___x_3375_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3375_, 0, v_b_3363_);
return v___x_3375_;
}
else
{
lean_object* v_head_3376_; lean_object* v_tail_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; 
v_head_3376_ = lean_ctor_get(v_as_x27_3362_, 0);
v_tail_3377_ = lean_ctor_get(v_as_x27_3362_, 1);
v___x_3378_ = lean_box(0);
lean_inc(v_head_3376_);
v___x_3379_ = l_Lean_Meta_Grind_propagateUp(v_head_3376_, v___y_3364_, v___y_3365_, v___y_3366_, v___y_3367_, v___y_3368_, v___y_3369_, v___y_3370_, v___y_3371_, v___y_3372_, v___y_3373_);
if (lean_obj_tag(v___x_3379_) == 0)
{
lean_dec_ref_known(v___x_3379_, 1);
v_as_x27_3362_ = v_tail_3377_;
v_b_3363_ = v___x_3378_;
goto _start;
}
else
{
return v___x_3379_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg___boxed(lean_object* v_as_x27_3381_, lean_object* v_b_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_, lean_object* v___y_3386_, lean_object* v___y_3387_, lean_object* v___y_3388_, lean_object* v___y_3389_, lean_object* v___y_3390_, lean_object* v___y_3391_, lean_object* v___y_3392_, lean_object* v___y_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v_as_x27_3381_, v_b_3382_, v___y_3383_, v___y_3384_, v___y_3385_, v___y_3386_, v___y_3387_, v___y_3388_, v___y_3389_, v___y_3390_, v___y_3391_, v___y_3392_);
lean_dec(v___y_3392_);
lean_dec_ref(v___y_3391_);
lean_dec(v___y_3390_);
lean_dec_ref(v___y_3389_);
lean_dec(v___y_3388_);
lean_dec_ref(v___y_3387_);
lean_dec(v___y_3386_);
lean_dec_ref(v___y_3385_);
lean_dec(v___y_3384_);
lean_dec(v___y_3383_);
lean_dec(v_as_x27_3381_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(lean_object* v_as_x27_3395_, lean_object* v_b_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_, lean_object* v___y_3404_, lean_object* v___y_3405_, lean_object* v___y_3406_){
_start:
{
if (lean_obj_tag(v_as_x27_3395_) == 0)
{
lean_object* v___x_3408_; 
v___x_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3408_, 0, v_b_3396_);
return v___x_3408_;
}
else
{
lean_object* v_head_3409_; lean_object* v_tail_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; 
v_head_3409_ = lean_ctor_get(v_as_x27_3395_, 0);
v_tail_3410_ = lean_ctor_get(v_as_x27_3395_, 1);
v___x_3411_ = lean_box(0);
lean_inc(v_head_3409_);
v___x_3412_ = l_Lean_Meta_Grind_propagateDown(v_head_3409_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_, v___y_3403_, v___y_3404_, v___y_3405_, v___y_3406_);
if (lean_obj_tag(v___x_3412_) == 0)
{
lean_dec_ref_known(v___x_3412_, 1);
v_as_x27_3395_ = v_tail_3410_;
v_b_3396_ = v___x_3411_;
goto _start;
}
else
{
return v___x_3412_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg___boxed(lean_object* v_as_x27_3414_, lean_object* v_b_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_, lean_object* v___y_3419_, lean_object* v___y_3420_, lean_object* v___y_3421_, lean_object* v___y_3422_, lean_object* v___y_3423_, lean_object* v___y_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_){
_start:
{
lean_object* v_res_3427_; 
v_res_3427_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v_as_x27_3414_, v_b_3415_, v___y_3416_, v___y_3417_, v___y_3418_, v___y_3419_, v___y_3420_, v___y_3421_, v___y_3422_, v___y_3423_, v___y_3424_, v___y_3425_);
lean_dec(v___y_3425_);
lean_dec_ref(v___y_3424_);
lean_dec(v___y_3423_);
lean_dec_ref(v___y_3422_);
lean_dec(v___y_3421_);
lean_dec_ref(v___y_3420_);
lean_dec(v___y_3419_);
lean_dec_ref(v___y_3418_);
lean_dec(v___y_3417_);
lean_dec(v___y_3416_);
lean_dec(v_as_x27_3414_);
return v_res_3427_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1(void){
_start:
{
lean_object* v_cls_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; 
v_cls_3431_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
v___x_3432_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_3433_ = l_Lean_Name_append(v___x_3432_, v_cls_3431_);
return v___x_3433_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3(void){
_start:
{
lean_object* v___x_3435_; lean_object* v___x_3436_; 
v___x_3435_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__2));
v___x_3436_ = l_Lean_stringToMessageData(v___x_3435_);
return v___x_3436_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5(void){
_start:
{
lean_object* v___x_3438_; lean_object* v___x_3439_; 
v___x_3438_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__4));
v___x_3439_ = l_Lean_stringToMessageData(v___x_3438_);
return v___x_3439_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7(void){
_start:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; 
v___x_3441_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__6));
v___x_3442_ = l_Lean_stringToMessageData(v___x_3441_);
return v___x_3442_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9(void){
_start:
{
lean_object* v___x_3444_; lean_object* v___x_3445_; 
v___x_3444_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__8));
v___x_3445_ = l_Lean_stringToMessageData(v___x_3444_);
return v___x_3445_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(lean_object* v_proof_3446_, uint8_t v_isHEq_3447_, lean_object* v_lhs_3448_, lean_object* v_rhs_3449_, lean_object* v_lhsNode_3450_, lean_object* v_rhsNode_3451_, lean_object* v_lhsRoot_3452_, lean_object* v_rhsRoot_3453_, uint8_t v_flipped_3454_, lean_object* v_a_3455_, lean_object* v_a_3456_, lean_object* v_a_3457_, lean_object* v_a_3458_, lean_object* v_a_3459_, lean_object* v_a_3460_, lean_object* v_a_3461_, lean_object* v_a_3462_, lean_object* v_a_3463_, lean_object* v_a_3464_){
_start:
{
lean_object* v___y_3470_; lean_object* v___y_3471_; lean_object* v___y_3472_; lean_object* v___y_3473_; lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___y_3482_; lean_object* v___y_3483_; lean_object* v___y_3484_; lean_object* v___y_3485_; lean_object* v___y_3486_; lean_object* v___y_3509_; lean_object* v___y_3510_; lean_object* v___y_3511_; lean_object* v___y_3512_; lean_object* v___y_3513_; uint8_t v___y_3514_; uint8_t v___y_3515_; lean_object* v___y_3516_; uint8_t v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3519_; lean_object* v___y_3520_; lean_object* v___y_3521_; lean_object* v___y_3522_; uint8_t v___y_3523_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3533_; uint8_t v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3537_; lean_object* v___y_3538_; lean_object* v___y_3539_; lean_object* v___y_3540_; lean_object* v___y_3541_; lean_object* v___y_3542_; lean_object* v___y_3543_; lean_object* v___y_3544_; uint8_t v___y_3545_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___y_3587_; lean_object* v___y_3588_; lean_object* v___y_3589_; lean_object* v___y_3590_; lean_object* v___y_3591_; lean_object* v___y_3592_; lean_object* v___y_3593_; lean_object* v___y_3594_; lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3602_; lean_object* v___y_3603_; uint8_t v___y_3604_; lean_object* v___y_3605_; lean_object* v___y_3606_; uint8_t v___y_3607_; lean_object* v___y_3637_; lean_object* v___y_3638_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3641_; lean_object* v___y_3642_; uint8_t v___y_3643_; lean_object* v___y_3644_; lean_object* v___y_3645_; lean_object* v___y_3646_; lean_object* v___y_3647_; uint8_t v___y_3648_; lean_object* v___y_3649_; lean_object* v___y_3650_; lean_object* v___y_3651_; lean_object* v___y_3652_; lean_object* v___y_3653_; lean_object* v___y_3654_; lean_object* v___y_3655_; lean_object* v___y_3656_; lean_object* v___y_3657_; lean_object* v___y_3658_; lean_object* v_toCold_3712_; lean_object* v_options_3713_; lean_object* v_inheritedTraceOptions_3714_; uint8_t v_hasTrace_3715_; lean_object* v_cls_3716_; lean_object* v___y_3718_; lean_object* v___y_3719_; lean_object* v___y_3720_; lean_object* v___y_3721_; lean_object* v_fns_u2082_3722_; lean_object* v___y_3723_; lean_object* v___y_3724_; lean_object* v___y_3725_; lean_object* v___y_3726_; lean_object* v___y_3727_; lean_object* v___y_3728_; lean_object* v___y_3729_; lean_object* v___y_3730_; lean_object* v___y_3731_; lean_object* v___y_3732_; lean_object* v___y_3806_; lean_object* v___y_3807_; lean_object* v___y_3808_; lean_object* v_fns_u2081_3809_; lean_object* v___y_3810_; lean_object* v___y_3811_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; lean_object* v___y_3845_; 
v_toCold_3712_ = lean_ctor_get(v_a_3463_, 0);
v_options_3713_ = lean_ctor_get(v_toCold_3712_, 2);
v_inheritedTraceOptions_3714_ = lean_ctor_get(v_toCold_3712_, 11);
v_hasTrace_3715_ = lean_ctor_get_uint8(v_options_3713_, sizeof(void*)*1);
v_cls_3716_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
if (v_hasTrace_3715_ == 0)
{
v___y_3836_ = v_a_3455_;
v___y_3837_ = v_a_3456_;
v___y_3838_ = v_a_3457_;
v___y_3839_ = v_a_3458_;
v___y_3840_ = v_a_3459_;
v___y_3841_ = v_a_3460_;
v___y_3842_ = v_a_3461_;
v___y_3843_ = v_a_3462_;
v___y_3844_ = v_a_3463_;
v___y_3845_ = v_a_3464_;
goto v___jp_3835_;
}
else
{
lean_object* v___x_3916_; uint8_t v___x_3917_; 
v___x_3916_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_3917_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3714_, v_options_3713_, v___x_3916_);
if (v___x_3917_ == 0)
{
v___y_3836_ = v_a_3455_;
v___y_3837_ = v_a_3456_;
v___y_3838_ = v_a_3457_;
v___y_3839_ = v_a_3458_;
v___y_3840_ = v_a_3459_;
v___y_3841_ = v_a_3460_;
v___y_3842_ = v_a_3461_;
v___y_3843_ = v_a_3462_;
v___y_3844_ = v_a_3463_;
v___y_3845_ = v_a_3464_;
goto v___jp_3835_;
}
else
{
lean_object* v___x_3918_; 
v___x_3918_ = l_Lean_Meta_Grind_updateLastTag(v_a_3455_, v_a_3456_, v_a_3457_, v_a_3458_, v_a_3459_, v_a_3460_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_);
if (lean_obj_tag(v___x_3918_) == 0)
{
lean_object* v___x_3919_; 
lean_dec_ref_known(v___x_3918_, 1);
lean_inc_ref(v_lhs_3448_);
v___x_3919_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_3448_, v_a_3455_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_);
if (lean_obj_tag(v___x_3919_) == 0)
{
lean_object* v_a_3920_; lean_object* v___x_3921_; 
v_a_3920_ = lean_ctor_get(v___x_3919_, 0);
lean_inc(v_a_3920_);
lean_dec_ref_known(v___x_3919_, 1);
lean_inc_ref(v_rhs_3449_);
v___x_3921_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_rhs_3449_, v_a_3455_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_);
if (lean_obj_tag(v___x_3921_) == 0)
{
lean_object* v_a_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; 
v_a_3922_ = lean_ctor_get(v___x_3921_, 0);
lean_inc(v_a_3922_);
lean_dec_ref_known(v___x_3921_, 1);
v___x_3923_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__7);
v___x_3924_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3923_);
lean_ctor_set(v___x_3924_, 1, v_a_3920_);
v___x_3925_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__9);
v___x_3926_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3926_, 0, v___x_3924_);
lean_ctor_set(v___x_3926_, 1, v___x_3925_);
v___x_3927_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3927_, 0, v___x_3926_);
lean_ctor_set(v___x_3927_, 1, v_a_3922_);
v___x_3928_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_3716_, v___x_3927_, v_a_3461_, v_a_3462_, v_a_3463_, v_a_3464_);
if (lean_obj_tag(v___x_3928_) == 0)
{
lean_dec_ref_known(v___x_3928_, 1);
v___y_3836_ = v_a_3455_;
v___y_3837_ = v_a_3456_;
v___y_3838_ = v_a_3457_;
v___y_3839_ = v_a_3458_;
v___y_3840_ = v_a_3459_;
v___y_3841_ = v_a_3460_;
v___y_3842_ = v_a_3461_;
v___y_3843_ = v_a_3462_;
v___y_3844_ = v_a_3463_;
v___y_3845_ = v_a_3464_;
goto v___jp_3835_;
}
else
{
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhsNode_3450_);
lean_dec_ref(v_rhs_3449_);
lean_dec_ref(v_lhs_3448_);
lean_dec_ref(v_proof_3446_);
return v___x_3928_;
}
}
else
{
lean_object* v_a_3929_; lean_object* v___x_3931_; uint8_t v_isShared_3932_; uint8_t v_isSharedCheck_3936_; 
lean_dec(v_a_3920_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhsNode_3450_);
lean_dec_ref(v_rhs_3449_);
lean_dec_ref(v_lhs_3448_);
lean_dec_ref(v_proof_3446_);
v_a_3929_ = lean_ctor_get(v___x_3921_, 0);
v_isSharedCheck_3936_ = !lean_is_exclusive(v___x_3921_);
if (v_isSharedCheck_3936_ == 0)
{
v___x_3931_ = v___x_3921_;
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
else
{
lean_inc(v_a_3929_);
lean_dec(v___x_3921_);
v___x_3931_ = lean_box(0);
v_isShared_3932_ = v_isSharedCheck_3936_;
goto v_resetjp_3930_;
}
v_resetjp_3930_:
{
lean_object* v___x_3934_; 
if (v_isShared_3932_ == 0)
{
v___x_3934_ = v___x_3931_;
goto v_reusejp_3933_;
}
else
{
lean_object* v_reuseFailAlloc_3935_; 
v_reuseFailAlloc_3935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3935_, 0, v_a_3929_);
v___x_3934_ = v_reuseFailAlloc_3935_;
goto v_reusejp_3933_;
}
v_reusejp_3933_:
{
return v___x_3934_;
}
}
}
}
else
{
lean_object* v_a_3937_; lean_object* v___x_3939_; uint8_t v_isShared_3940_; uint8_t v_isSharedCheck_3944_; 
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhsNode_3450_);
lean_dec_ref(v_rhs_3449_);
lean_dec_ref(v_lhs_3448_);
lean_dec_ref(v_proof_3446_);
v_a_3937_ = lean_ctor_get(v___x_3919_, 0);
v_isSharedCheck_3944_ = !lean_is_exclusive(v___x_3919_);
if (v_isSharedCheck_3944_ == 0)
{
v___x_3939_ = v___x_3919_;
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
else
{
lean_inc(v_a_3937_);
lean_dec(v___x_3919_);
v___x_3939_ = lean_box(0);
v_isShared_3940_ = v_isSharedCheck_3944_;
goto v_resetjp_3938_;
}
v_resetjp_3938_:
{
lean_object* v___x_3942_; 
if (v_isShared_3940_ == 0)
{
v___x_3942_ = v___x_3939_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3937_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
}
}
else
{
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhsNode_3450_);
lean_dec_ref(v_rhs_3449_);
lean_dec_ref(v_lhs_3448_);
lean_dec_ref(v_proof_3446_);
return v___x_3918_;
}
}
}
v___jp_3466_:
{
lean_object* v___x_3467_; lean_object* v___x_3468_; 
v___x_3467_ = lean_box(0);
v___x_3468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3468_, 0, v___x_3467_);
return v___x_3468_;
}
v___jp_3469_:
{
lean_object* v___x_3487_; 
v___x_3487_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_3477_);
if (lean_obj_tag(v___x_3487_) == 0)
{
lean_object* v_a_3488_; uint8_t v___x_3489_; 
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_a_3488_);
lean_dec_ref_known(v___x_3487_, 1);
v___x_3489_ = lean_unbox(v_a_3488_);
lean_dec(v_a_3488_);
if (v___x_3489_ == 0)
{
lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; 
v___x_3490_ = l_Lean_Meta_Grind_ParentSet_elems(v___y_3474_);
lean_dec(v___y_3474_);
v___x_3491_ = lean_box(0);
v___x_3492_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v___x_3490_, v___x_3491_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
lean_dec(v___x_3490_);
if (lean_obj_tag(v___x_3492_) == 0)
{
lean_object* v___x_3493_; lean_object* v___x_3494_; 
lean_dec_ref_known(v___x_3492_, 1);
v___x_3493_ = l_Lean_Meta_Grind_ParentSet_elems(v___y_3476_);
lean_dec(v___y_3476_);
v___x_3494_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v___x_3493_, v___x_3491_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
lean_dec(v___x_3493_);
if (lean_obj_tag(v___x_3494_) == 0)
{
lean_object* v___x_3495_; 
lean_dec_ref_known(v___x_3494_, 1);
v___x_3495_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v___y_3475_, v___x_3491_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
if (lean_obj_tag(v___x_3495_) == 0)
{
lean_object* v___x_3496_; 
lean_dec_ref_known(v___x_3495_, 1);
v___x_3496_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_propagateUnitConstFuns(v___y_3470_, v___y_3472_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
lean_dec_ref(v___y_3472_);
lean_dec_ref(v___y_3470_);
if (lean_obj_tag(v___x_3496_) == 0)
{
lean_object* v___x_3497_; 
lean_dec_ref_known(v___x_3496_, 1);
v___x_3497_ = l_Lean_Meta_Grind_PendingSolverPropagations_propagate(v___y_3471_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
if (lean_obj_tag(v___x_3497_) == 0)
{
uint8_t v___x_3498_; 
lean_dec_ref_known(v___x_3497_, 1);
v___x_3498_ = l_Lean_Expr_isTrue(v___y_3473_);
lean_dec_ref(v___y_3473_);
if (v___x_3498_ == 0)
{
lean_dec(v___y_3475_);
goto v___jp_3466_;
}
else
{
lean_object* v___x_3499_; 
v___x_3499_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_checkDelayedThmInsts(v___y_3475_, v___y_3477_, v___y_3478_, v___y_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_, v___y_3484_, v___y_3485_, v___y_3486_);
lean_dec(v___y_3475_);
return v___x_3499_;
}
}
else
{
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3473_);
return v___x_3497_;
}
}
else
{
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3473_);
lean_dec(v___y_3471_);
return v___x_3496_;
}
}
else
{
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
return v___x_3495_;
}
}
else
{
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
return v___x_3494_;
}
}
else
{
lean_dec(v___y_3476_);
lean_dec(v___y_3475_);
lean_dec_ref(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
return v___x_3492_;
}
}
else
{
lean_dec(v___y_3476_);
lean_dec(v___y_3475_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
goto v___jp_3466_;
}
}
else
{
lean_object* v_a_3500_; lean_object* v___x_3502_; uint8_t v_isShared_3503_; uint8_t v_isSharedCheck_3507_; 
lean_dec(v___y_3476_);
lean_dec(v___y_3475_);
lean_dec(v___y_3474_);
lean_dec_ref(v___y_3473_);
lean_dec_ref(v___y_3472_);
lean_dec(v___y_3471_);
lean_dec_ref(v___y_3470_);
v_a_3500_ = lean_ctor_get(v___x_3487_, 0);
v_isSharedCheck_3507_ = !lean_is_exclusive(v___x_3487_);
if (v_isSharedCheck_3507_ == 0)
{
v___x_3502_ = v___x_3487_;
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
else
{
lean_inc(v_a_3500_);
lean_dec(v___x_3487_);
v___x_3502_ = lean_box(0);
v_isShared_3503_ = v_isSharedCheck_3507_;
goto v_resetjp_3501_;
}
v_resetjp_3501_:
{
lean_object* v___x_3505_; 
if (v_isShared_3503_ == 0)
{
v___x_3505_ = v___x_3502_;
goto v_reusejp_3504_;
}
else
{
lean_object* v_reuseFailAlloc_3506_; 
v_reuseFailAlloc_3506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3506_, 0, v_a_3500_);
v___x_3505_ = v_reuseFailAlloc_3506_;
goto v_reusejp_3504_;
}
v_reusejp_3504_:
{
return v___x_3505_;
}
}
}
}
v___jp_3508_:
{
lean_object* v___x_3546_; lean_object* v___x_3547_; 
lean_inc_ref(v___y_3528_);
v___x_3546_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v___x_3546_, 0, v___y_3528_);
lean_ctor_set(v___x_3546_, 1, v___y_3541_);
lean_ctor_set(v___x_3546_, 2, v___y_3531_);
lean_ctor_set(v___x_3546_, 3, v___y_3542_);
lean_ctor_set(v___x_3546_, 4, v___y_3526_);
lean_ctor_set(v___x_3546_, 5, v___y_3540_);
lean_ctor_set(v___x_3546_, 6, v___y_3509_);
lean_ctor_set(v___x_3546_, 7, v___y_3520_);
lean_ctor_set(v___x_3546_, 8, v___y_3536_);
lean_ctor_set(v___x_3546_, 9, v___y_3524_);
lean_ctor_set(v___x_3546_, 10, v___y_3510_);
lean_ctor_set(v___x_3546_, 11, v___y_3544_);
lean_ctor_set_uint8(v___x_3546_, sizeof(void*)*12, v___y_3534_);
lean_ctor_set_uint8(v___x_3546_, sizeof(void*)*12 + 1, v___y_3515_);
lean_ctor_set_uint8(v___x_3546_, sizeof(void*)*12 + 2, v___y_3517_);
lean_ctor_set_uint8(v___x_3546_, sizeof(void*)*12 + 3, v___y_3545_);
lean_ctor_set_uint8(v___x_3546_, sizeof(void*)*12 + 4, v___y_3523_);
lean_ctor_set_uint8(v___x_3546_, sizeof(void*)*12 + 5, v___y_3514_);
lean_inc_ref(v___y_3543_);
v___x_3547_ = l_Lean_Meta_Grind_setENode___redArg(v___y_3543_, v___x_3546_, v___y_3538_);
if (lean_obj_tag(v___x_3547_) == 0)
{
lean_object* v___x_3548_; 
lean_dec_ref_known(v___x_3547_, 1);
lean_inc_ref(v___y_3530_);
v___x_3548_ = l_Lean_Meta_Grind_propagateBeta(v___y_3530_, v___y_3521_, v___y_3538_, v___y_3527_, v___y_3513_, v___y_3533_, v___y_3516_, v___y_3525_, v___y_3512_, v___y_3529_, v___y_3539_, v___y_3537_);
if (lean_obj_tag(v___x_3548_) == 0)
{
lean_object* v___x_3549_; 
lean_dec_ref_known(v___x_3548_, 1);
lean_inc_ref(v___y_3532_);
v___x_3549_ = l_Lean_Meta_Grind_propagateBeta(v___y_3532_, v___y_3518_, v___y_3538_, v___y_3527_, v___y_3513_, v___y_3533_, v___y_3516_, v___y_3525_, v___y_3512_, v___y_3529_, v___y_3539_, v___y_3537_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v___x_3550_; 
lean_dec_ref_known(v___x_3549_, 1);
v___x_3550_ = l_Lean_Meta_Grind_Solvers_mergeTerms___redArg(v___y_3522_, v_lhsRoot_3452_, v___y_3523_, v___y_3538_, v___y_3512_, v___y_3529_, v___y_3539_, v___y_3537_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; lean_object* v___x_3552_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3550_, 1);
lean_inc_ref(v___y_3543_);
v___x_3552_ = l_Lean_Meta_Grind_mergeCondParents___redArg(v___y_3519_, v___y_3543_, v___y_3538_);
if (lean_obj_tag(v___x_3552_) == 0)
{
lean_object* v_a_3553_; lean_object* v___x_3554_; 
v_a_3553_ = lean_ctor_get(v___x_3552_, 0);
lean_inc(v_a_3553_);
lean_dec_ref_known(v___x_3552_, 1);
v___x_3554_ = l_Lean_Meta_Grind_resetParentsOf___redArg(v___y_3519_, v___y_3538_);
lean_dec_ref(v___y_3519_);
if (lean_obj_tag(v___x_3554_) == 0)
{
lean_object* v___x_3555_; 
lean_dec_ref_known(v___x_3554_, 1);
lean_inc_ref(v___y_3543_);
v___x_3555_ = l_Lean_Meta_Grind_copyParentsTo(v___y_3511_, v___y_3543_, v___y_3538_, v___y_3527_, v___y_3513_, v___y_3533_, v___y_3516_, v___y_3525_, v___y_3512_, v___y_3529_, v___y_3539_, v___y_3537_);
if (lean_obj_tag(v___x_3555_) == 0)
{
lean_object* v___x_3556_; 
lean_dec_ref_known(v___x_3555_, 1);
v___x_3556_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_3538_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; uint8_t v___x_3558_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
lean_inc(v_a_3557_);
lean_dec_ref_known(v___x_3556_, 1);
v___x_3558_ = lean_unbox(v_a_3557_);
lean_dec(v_a_3557_);
if (v___x_3558_ == 0)
{
lean_object* v___x_3559_; 
v___x_3559_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_updateMT(v___y_3528_, v___y_3538_, v___y_3527_, v___y_3513_, v___y_3533_, v___y_3516_, v___y_3525_, v___y_3512_, v___y_3529_, v___y_3539_, v___y_3537_);
lean_dec_ref(v___y_3528_);
if (lean_obj_tag(v___x_3559_) == 0)
{
lean_dec_ref_known(v___x_3559_, 1);
v___y_3470_ = v___y_3530_;
v___y_3471_ = v_a_3551_;
v___y_3472_ = v___y_3532_;
v___y_3473_ = v___y_3543_;
v___y_3474_ = v___y_3511_;
v___y_3475_ = v___y_3535_;
v___y_3476_ = v_a_3553_;
v___y_3477_ = v___y_3538_;
v___y_3478_ = v___y_3527_;
v___y_3479_ = v___y_3513_;
v___y_3480_ = v___y_3533_;
v___y_3481_ = v___y_3516_;
v___y_3482_ = v___y_3525_;
v___y_3483_ = v___y_3512_;
v___y_3484_ = v___y_3529_;
v___y_3485_ = v___y_3539_;
v___y_3486_ = v___y_3537_;
goto v___jp_3469_;
}
else
{
lean_dec(v_a_3553_);
lean_dec(v_a_3551_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec(v___y_3511_);
return v___x_3559_;
}
}
else
{
lean_dec_ref(v___y_3528_);
v___y_3470_ = v___y_3530_;
v___y_3471_ = v_a_3551_;
v___y_3472_ = v___y_3532_;
v___y_3473_ = v___y_3543_;
v___y_3474_ = v___y_3511_;
v___y_3475_ = v___y_3535_;
v___y_3476_ = v_a_3553_;
v___y_3477_ = v___y_3538_;
v___y_3478_ = v___y_3527_;
v___y_3479_ = v___y_3513_;
v___y_3480_ = v___y_3533_;
v___y_3481_ = v___y_3516_;
v___y_3482_ = v___y_3525_;
v___y_3483_ = v___y_3512_;
v___y_3484_ = v___y_3529_;
v___y_3485_ = v___y_3539_;
v___y_3486_ = v___y_3537_;
goto v___jp_3469_;
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
lean_dec(v_a_3553_);
lean_dec(v_a_3551_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec(v___y_3511_);
v_a_3560_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3556_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3556_);
v___x_3562_ = lean_box(0);
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
v_resetjp_3561_:
{
lean_object* v___x_3565_; 
if (v_isShared_3563_ == 0)
{
v___x_3565_ = v___x_3562_;
goto v_reusejp_3564_;
}
else
{
lean_object* v_reuseFailAlloc_3566_; 
v_reuseFailAlloc_3566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3566_, 0, v_a_3560_);
v___x_3565_ = v_reuseFailAlloc_3566_;
goto v_reusejp_3564_;
}
v_reusejp_3564_:
{
return v___x_3565_;
}
}
}
}
else
{
lean_dec(v_a_3553_);
lean_dec(v_a_3551_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec(v___y_3511_);
return v___x_3555_;
}
}
else
{
lean_dec(v_a_3553_);
lean_dec(v_a_3551_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec(v___y_3511_);
return v___x_3554_;
}
}
else
{
lean_object* v_a_3568_; lean_object* v___x_3570_; uint8_t v_isShared_3571_; uint8_t v_isSharedCheck_3575_; 
lean_dec(v_a_3551_);
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3511_);
v_a_3568_ = lean_ctor_get(v___x_3552_, 0);
v_isSharedCheck_3575_ = !lean_is_exclusive(v___x_3552_);
if (v_isSharedCheck_3575_ == 0)
{
v___x_3570_ = v___x_3552_;
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
else
{
lean_inc(v_a_3568_);
lean_dec(v___x_3552_);
v___x_3570_ = lean_box(0);
v_isShared_3571_ = v_isSharedCheck_3575_;
goto v_resetjp_3569_;
}
v_resetjp_3569_:
{
lean_object* v___x_3573_; 
if (v_isShared_3571_ == 0)
{
v___x_3573_ = v___x_3570_;
goto v_reusejp_3572_;
}
else
{
lean_object* v_reuseFailAlloc_3574_; 
v_reuseFailAlloc_3574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3574_, 0, v_a_3568_);
v___x_3573_ = v_reuseFailAlloc_3574_;
goto v_reusejp_3572_;
}
v_reusejp_3572_:
{
return v___x_3573_;
}
}
}
}
else
{
lean_object* v_a_3576_; lean_object* v___x_3578_; uint8_t v_isShared_3579_; uint8_t v_isSharedCheck_3583_; 
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3511_);
v_a_3576_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3583_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3583_ == 0)
{
v___x_3578_ = v___x_3550_;
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
else
{
lean_inc(v_a_3576_);
lean_dec(v___x_3550_);
v___x_3578_ = lean_box(0);
v_isShared_3579_ = v_isSharedCheck_3583_;
goto v_resetjp_3577_;
}
v_resetjp_3577_:
{
lean_object* v___x_3581_; 
if (v_isShared_3579_ == 0)
{
v___x_3581_ = v___x_3578_;
goto v_reusejp_3580_;
}
else
{
lean_object* v_reuseFailAlloc_3582_; 
v_reuseFailAlloc_3582_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3582_, 0, v_a_3576_);
v___x_3581_ = v_reuseFailAlloc_3582_;
goto v_reusejp_3580_;
}
v_reusejp_3580_:
{
return v___x_3581_;
}
}
}
}
else
{
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3519_);
lean_dec(v___y_3511_);
lean_dec_ref(v_lhsRoot_3452_);
return v___x_3549_;
}
}
else
{
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v___y_3518_);
lean_dec(v___y_3511_);
lean_dec_ref(v_lhsRoot_3452_);
return v___x_3548_;
}
}
else
{
lean_dec_ref(v___y_3543_);
lean_dec(v___y_3535_);
lean_dec_ref(v___y_3532_);
lean_dec_ref(v___y_3530_);
lean_dec_ref(v___y_3528_);
lean_dec_ref(v___y_3522_);
lean_dec_ref(v___y_3521_);
lean_dec_ref(v___y_3519_);
lean_dec_ref(v___y_3518_);
lean_dec(v___y_3511_);
lean_dec_ref(v_lhsRoot_3452_);
return v___x_3547_;
}
}
v___jp_3584_:
{
lean_object* v___x_3608_; lean_object* v___x_3609_; 
v___x_3608_ = lean_st_ref_get(v___y_3592_);
v___x_3609_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3608_, v___y_3601_, v___y_3593_, v___y_3585_, v___y_3595_, v___y_3591_);
lean_dec(v___x_3608_);
if (lean_obj_tag(v___x_3609_) == 0)
{
lean_object* v_a_3610_; lean_object* v_self_3611_; lean_object* v_root_3612_; lean_object* v_congr_3613_; lean_object* v_target_x3f_3614_; lean_object* v_proof_x3f_3615_; uint8_t v_flipped_3616_; lean_object* v_size_3617_; uint8_t v_interpreted_3618_; uint8_t v_ctor_3619_; uint8_t v_hasLambdas_3620_; lean_object* v_idx_3621_; lean_object* v_generation_3622_; lean_object* v_mt_3623_; lean_object* v_sTerms_3624_; uint8_t v_funCC_3625_; lean_object* v_ematchDiagSource_3626_; lean_object* v___x_3627_; 
v_a_3610_ = lean_ctor_get(v___x_3609_, 0);
lean_inc(v_a_3610_);
lean_dec_ref_known(v___x_3609_, 1);
v_self_3611_ = lean_ctor_get(v_a_3610_, 0);
lean_inc_ref(v_self_3611_);
v_root_3612_ = lean_ctor_get(v_a_3610_, 2);
lean_inc_ref(v_root_3612_);
v_congr_3613_ = lean_ctor_get(v_a_3610_, 3);
lean_inc_ref(v_congr_3613_);
v_target_x3f_3614_ = lean_ctor_get(v_a_3610_, 4);
lean_inc(v_target_x3f_3614_);
v_proof_x3f_3615_ = lean_ctor_get(v_a_3610_, 5);
lean_inc(v_proof_x3f_3615_);
v_flipped_3616_ = lean_ctor_get_uint8(v_a_3610_, sizeof(void*)*12);
v_size_3617_ = lean_ctor_get(v_a_3610_, 6);
v_interpreted_3618_ = lean_ctor_get_uint8(v_a_3610_, sizeof(void*)*12 + 1);
v_ctor_3619_ = lean_ctor_get_uint8(v_a_3610_, sizeof(void*)*12 + 2);
v_hasLambdas_3620_ = lean_ctor_get_uint8(v_a_3610_, sizeof(void*)*12 + 3);
v_idx_3621_ = lean_ctor_get(v_a_3610_, 7);
lean_inc(v_idx_3621_);
v_generation_3622_ = lean_ctor_get(v_a_3610_, 8);
lean_inc(v_generation_3622_);
v_mt_3623_ = lean_ctor_get(v_a_3610_, 9);
lean_inc(v_mt_3623_);
v_sTerms_3624_ = lean_ctor_get(v_a_3610_, 10);
lean_inc(v_sTerms_3624_);
v_funCC_3625_ = lean_ctor_get_uint8(v_a_3610_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3626_ = lean_ctor_get(v_a_3610_, 11);
lean_inc(v_ematchDiagSource_3626_);
v___x_3627_ = lean_nat_add(v_size_3617_, v___y_3603_);
lean_dec(v___y_3603_);
if (v_hasLambdas_3620_ == 0)
{
v___y_3509_ = v___x_3627_;
v___y_3510_ = v_sTerms_3624_;
v___y_3511_ = v___y_3589_;
v___y_3512_ = v___y_3593_;
v___y_3513_ = v___y_3594_;
v___y_3514_ = v_funCC_3625_;
v___y_3515_ = v_interpreted_3618_;
v___y_3516_ = v___y_3596_;
v___y_3517_ = v_ctor_3619_;
v___y_3518_ = v___y_3597_;
v___y_3519_ = v___y_3599_;
v___y_3520_ = v_idx_3621_;
v___y_3521_ = v___y_3602_;
v___y_3522_ = v_a_3610_;
v___y_3523_ = v___y_3607_;
v___y_3524_ = v_mt_3623_;
v___y_3525_ = v___y_3605_;
v___y_3526_ = v_target_x3f_3614_;
v___y_3527_ = v___y_3606_;
v___y_3528_ = v_self_3611_;
v___y_3529_ = v___y_3585_;
v___y_3530_ = v___y_3586_;
v___y_3531_ = v_root_3612_;
v___y_3532_ = v___y_3587_;
v___y_3533_ = v___y_3588_;
v___y_3534_ = v_flipped_3616_;
v___y_3535_ = v___y_3590_;
v___y_3536_ = v_generation_3622_;
v___y_3537_ = v___y_3591_;
v___y_3538_ = v___y_3592_;
v___y_3539_ = v___y_3595_;
v___y_3540_ = v_proof_x3f_3615_;
v___y_3541_ = v___y_3598_;
v___y_3542_ = v_congr_3613_;
v___y_3543_ = v___y_3600_;
v___y_3544_ = v_ematchDiagSource_3626_;
v___y_3545_ = v___y_3604_;
goto v___jp_3508_;
}
else
{
v___y_3509_ = v___x_3627_;
v___y_3510_ = v_sTerms_3624_;
v___y_3511_ = v___y_3589_;
v___y_3512_ = v___y_3593_;
v___y_3513_ = v___y_3594_;
v___y_3514_ = v_funCC_3625_;
v___y_3515_ = v_interpreted_3618_;
v___y_3516_ = v___y_3596_;
v___y_3517_ = v_ctor_3619_;
v___y_3518_ = v___y_3597_;
v___y_3519_ = v___y_3599_;
v___y_3520_ = v_idx_3621_;
v___y_3521_ = v___y_3602_;
v___y_3522_ = v_a_3610_;
v___y_3523_ = v___y_3607_;
v___y_3524_ = v_mt_3623_;
v___y_3525_ = v___y_3605_;
v___y_3526_ = v_target_x3f_3614_;
v___y_3527_ = v___y_3606_;
v___y_3528_ = v_self_3611_;
v___y_3529_ = v___y_3585_;
v___y_3530_ = v___y_3586_;
v___y_3531_ = v_root_3612_;
v___y_3532_ = v___y_3587_;
v___y_3533_ = v___y_3588_;
v___y_3534_ = v_flipped_3616_;
v___y_3535_ = v___y_3590_;
v___y_3536_ = v_generation_3622_;
v___y_3537_ = v___y_3591_;
v___y_3538_ = v___y_3592_;
v___y_3539_ = v___y_3595_;
v___y_3540_ = v_proof_x3f_3615_;
v___y_3541_ = v___y_3598_;
v___y_3542_ = v_congr_3613_;
v___y_3543_ = v___y_3600_;
v___y_3544_ = v_ematchDiagSource_3626_;
v___y_3545_ = v_hasLambdas_3620_;
goto v___jp_3508_;
}
}
else
{
lean_object* v_a_3628_; lean_object* v___x_3630_; uint8_t v_isShared_3631_; uint8_t v_isSharedCheck_3635_; 
lean_dec(v___y_3603_);
lean_dec_ref(v___y_3602_);
lean_dec_ref(v___y_3600_);
lean_dec_ref(v___y_3599_);
lean_dec_ref(v___y_3598_);
lean_dec_ref(v___y_3597_);
lean_dec(v___y_3590_);
lean_dec(v___y_3589_);
lean_dec_ref(v___y_3587_);
lean_dec_ref(v___y_3586_);
lean_dec_ref(v_lhsRoot_3452_);
v_a_3628_ = lean_ctor_get(v___x_3609_, 0);
v_isSharedCheck_3635_ = !lean_is_exclusive(v___x_3609_);
if (v_isSharedCheck_3635_ == 0)
{
v___x_3630_ = v___x_3609_;
v_isShared_3631_ = v_isSharedCheck_3635_;
goto v_resetjp_3629_;
}
else
{
lean_inc(v_a_3628_);
lean_dec(v___x_3609_);
v___x_3630_ = lean_box(0);
v_isShared_3631_ = v_isSharedCheck_3635_;
goto v_resetjp_3629_;
}
v_resetjp_3629_:
{
lean_object* v___x_3633_; 
if (v_isShared_3631_ == 0)
{
v___x_3633_ = v___x_3630_;
goto v_reusejp_3632_;
}
else
{
lean_object* v_reuseFailAlloc_3634_; 
v_reuseFailAlloc_3634_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3634_, 0, v_a_3628_);
v___x_3633_ = v_reuseFailAlloc_3634_;
goto v_reusejp_3632_;
}
v_reusejp_3632_:
{
return v___x_3633_;
}
}
}
}
v___jp_3636_:
{
lean_object* v___x_3659_; 
v___x_3659_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_reinsertParents(v___y_3647_, v___y_3649_, v___y_3650_, v___y_3651_, v___y_3652_, v___y_3653_, v___y_3654_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
if (lean_obj_tag(v___x_3659_) == 0)
{
uint8_t v___x_3660_; lean_object* v___x_3661_; lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
lean_dec_ref_known(v___x_3659_, 1);
v___x_3660_ = 0;
v___x_3661_ = lean_st_ref_get(v___y_3649_);
v___x_3662_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_3661_, v_lhs_3448_, v___x_3660_);
lean_dec(v___x_3661_);
v___x_3663_ = lean_st_ref_get(v___y_3649_);
lean_inc_ref(v___y_3642_);
v___x_3664_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3663_, v___y_3642_, v___y_3655_, v___y_3656_, v___y_3657_, v___y_3658_);
lean_dec(v___x_3663_);
if (lean_obj_tag(v___x_3664_) == 0)
{
lean_object* v_a_3665_; lean_object* v_self_3666_; lean_object* v_root_3667_; lean_object* v_congr_3668_; lean_object* v_target_x3f_3669_; lean_object* v_proof_x3f_3670_; uint8_t v_flipped_3671_; lean_object* v_size_3672_; uint8_t v_interpreted_3673_; uint8_t v_ctor_3674_; uint8_t v_hasLambdas_3675_; uint8_t v_heqProofs_3676_; lean_object* v_idx_3677_; lean_object* v_generation_3678_; lean_object* v_mt_3679_; lean_object* v_sTerms_3680_; uint8_t v_funCC_3681_; lean_object* v_ematchDiagSource_3682_; lean_object* v_self_3683_; lean_object* v_next_3684_; uint8_t v_heqProofs_3685_; lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3693_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref_known(v___x_3664_, 1);
v_self_3666_ = lean_ctor_get(v_a_3665_, 0);
lean_inc_ref(v_self_3666_);
v_root_3667_ = lean_ctor_get(v_a_3665_, 2);
lean_inc_ref(v_root_3667_);
v_congr_3668_ = lean_ctor_get(v_a_3665_, 3);
lean_inc_ref(v_congr_3668_);
v_target_x3f_3669_ = lean_ctor_get(v_a_3665_, 4);
lean_inc(v_target_x3f_3669_);
v_proof_x3f_3670_ = lean_ctor_get(v_a_3665_, 5);
lean_inc(v_proof_x3f_3670_);
v_flipped_3671_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*12);
v_size_3672_ = lean_ctor_get(v_a_3665_, 6);
lean_inc(v_size_3672_);
v_interpreted_3673_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*12 + 1);
v_ctor_3674_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*12 + 2);
v_hasLambdas_3675_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*12 + 3);
v_heqProofs_3676_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*12 + 4);
v_idx_3677_ = lean_ctor_get(v_a_3665_, 7);
lean_inc(v_idx_3677_);
v_generation_3678_ = lean_ctor_get(v_a_3665_, 8);
lean_inc(v_generation_3678_);
v_mt_3679_ = lean_ctor_get(v_a_3665_, 9);
lean_inc(v_mt_3679_);
v_sTerms_3680_ = lean_ctor_get(v_a_3665_, 10);
lean_inc(v_sTerms_3680_);
v_funCC_3681_ = lean_ctor_get_uint8(v_a_3665_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3682_ = lean_ctor_get(v_a_3665_, 11);
lean_inc(v_ematchDiagSource_3682_);
lean_dec(v_a_3665_);
v_self_3683_ = lean_ctor_get(v_rhsRoot_3453_, 0);
v_next_3684_ = lean_ctor_get(v_rhsRoot_3453_, 1);
v_heqProofs_3685_ = lean_ctor_get_uint8(v_rhsRoot_3453_, sizeof(void*)*12 + 4);
v_isSharedCheck_3693_ = !lean_is_exclusive(v_rhsRoot_3453_);
if (v_isSharedCheck_3693_ == 0)
{
lean_object* v_unused_3694_; lean_object* v_unused_3695_; lean_object* v_unused_3696_; lean_object* v_unused_3697_; lean_object* v_unused_3698_; lean_object* v_unused_3699_; lean_object* v_unused_3700_; lean_object* v_unused_3701_; lean_object* v_unused_3702_; lean_object* v_unused_3703_; 
v_unused_3694_ = lean_ctor_get(v_rhsRoot_3453_, 11);
lean_dec(v_unused_3694_);
v_unused_3695_ = lean_ctor_get(v_rhsRoot_3453_, 10);
lean_dec(v_unused_3695_);
v_unused_3696_ = lean_ctor_get(v_rhsRoot_3453_, 9);
lean_dec(v_unused_3696_);
v_unused_3697_ = lean_ctor_get(v_rhsRoot_3453_, 8);
lean_dec(v_unused_3697_);
v_unused_3698_ = lean_ctor_get(v_rhsRoot_3453_, 7);
lean_dec(v_unused_3698_);
v_unused_3699_ = lean_ctor_get(v_rhsRoot_3453_, 6);
lean_dec(v_unused_3699_);
v_unused_3700_ = lean_ctor_get(v_rhsRoot_3453_, 5);
lean_dec(v_unused_3700_);
v_unused_3701_ = lean_ctor_get(v_rhsRoot_3453_, 4);
lean_dec(v_unused_3701_);
v_unused_3702_ = lean_ctor_get(v_rhsRoot_3453_, 3);
lean_dec(v_unused_3702_);
v_unused_3703_ = lean_ctor_get(v_rhsRoot_3453_, 2);
lean_dec(v_unused_3703_);
v___x_3687_ = v_rhsRoot_3453_;
v_isShared_3688_ = v_isSharedCheck_3693_;
goto v_resetjp_3686_;
}
else
{
lean_inc(v_next_3684_);
lean_inc(v_self_3683_);
lean_dec(v_rhsRoot_3453_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3693_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3690_; 
if (v_isShared_3688_ == 0)
{
lean_ctor_set(v___x_3687_, 11, v_ematchDiagSource_3682_);
lean_ctor_set(v___x_3687_, 10, v_sTerms_3680_);
lean_ctor_set(v___x_3687_, 9, v_mt_3679_);
lean_ctor_set(v___x_3687_, 8, v_generation_3678_);
lean_ctor_set(v___x_3687_, 7, v_idx_3677_);
lean_ctor_set(v___x_3687_, 6, v_size_3672_);
lean_ctor_set(v___x_3687_, 5, v_proof_x3f_3670_);
lean_ctor_set(v___x_3687_, 4, v_target_x3f_3669_);
lean_ctor_set(v___x_3687_, 3, v_congr_3668_);
lean_ctor_set(v___x_3687_, 2, v_root_3667_);
lean_ctor_set(v___x_3687_, 0, v_self_3666_);
v___x_3690_ = v___x_3687_;
goto v_reusejp_3689_;
}
else
{
lean_object* v_reuseFailAlloc_3692_; 
v_reuseFailAlloc_3692_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3692_, 0, v_self_3666_);
lean_ctor_set(v_reuseFailAlloc_3692_, 1, v_next_3684_);
lean_ctor_set(v_reuseFailAlloc_3692_, 2, v_root_3667_);
lean_ctor_set(v_reuseFailAlloc_3692_, 3, v_congr_3668_);
lean_ctor_set(v_reuseFailAlloc_3692_, 4, v_target_x3f_3669_);
lean_ctor_set(v_reuseFailAlloc_3692_, 5, v_proof_x3f_3670_);
lean_ctor_set(v_reuseFailAlloc_3692_, 6, v_size_3672_);
lean_ctor_set(v_reuseFailAlloc_3692_, 7, v_idx_3677_);
lean_ctor_set(v_reuseFailAlloc_3692_, 8, v_generation_3678_);
lean_ctor_set(v_reuseFailAlloc_3692_, 9, v_mt_3679_);
lean_ctor_set(v_reuseFailAlloc_3692_, 10, v_sTerms_3680_);
lean_ctor_set(v_reuseFailAlloc_3692_, 11, v_ematchDiagSource_3682_);
v___x_3690_ = v_reuseFailAlloc_3692_;
goto v_reusejp_3689_;
}
v_reusejp_3689_:
{
lean_object* v___x_3691_; 
lean_ctor_set_uint8(v___x_3690_, sizeof(void*)*12, v_flipped_3671_);
lean_ctor_set_uint8(v___x_3690_, sizeof(void*)*12 + 1, v_interpreted_3673_);
lean_ctor_set_uint8(v___x_3690_, sizeof(void*)*12 + 2, v_ctor_3674_);
lean_ctor_set_uint8(v___x_3690_, sizeof(void*)*12 + 3, v_hasLambdas_3675_);
lean_ctor_set_uint8(v___x_3690_, sizeof(void*)*12 + 4, v_heqProofs_3676_);
lean_ctor_set_uint8(v___x_3690_, sizeof(void*)*12 + 5, v_funCC_3681_);
v___x_3691_ = l_Lean_Meta_Grind_setENode___redArg(v___y_3639_, v___x_3690_, v___y_3649_);
if (lean_obj_tag(v___x_3691_) == 0)
{
lean_dec_ref_known(v___x_3691_, 1);
if (v_isHEq_3447_ == 0)
{
if (v_heqProofs_3685_ == 0)
{
v___y_3585_ = v___y_3656_;
v___y_3586_ = v___y_3637_;
v___y_3587_ = v___y_3641_;
v___y_3588_ = v___y_3652_;
v___y_3589_ = v___y_3647_;
v___y_3590_ = v___x_3662_;
v___y_3591_ = v___y_3658_;
v___y_3592_ = v___y_3649_;
v___y_3593_ = v___y_3655_;
v___y_3594_ = v___y_3651_;
v___y_3595_ = v___y_3657_;
v___y_3596_ = v___y_3653_;
v___y_3597_ = v___y_3638_;
v___y_3598_ = v___y_3640_;
v___y_3599_ = v___y_3642_;
v___y_3600_ = v___y_3644_;
v___y_3601_ = v_self_3683_;
v___y_3602_ = v___y_3645_;
v___y_3603_ = v___y_3646_;
v___y_3604_ = v___y_3648_;
v___y_3605_ = v___y_3654_;
v___y_3606_ = v___y_3650_;
v___y_3607_ = v___y_3643_;
goto v___jp_3584_;
}
else
{
v___y_3585_ = v___y_3656_;
v___y_3586_ = v___y_3637_;
v___y_3587_ = v___y_3641_;
v___y_3588_ = v___y_3652_;
v___y_3589_ = v___y_3647_;
v___y_3590_ = v___x_3662_;
v___y_3591_ = v___y_3658_;
v___y_3592_ = v___y_3649_;
v___y_3593_ = v___y_3655_;
v___y_3594_ = v___y_3651_;
v___y_3595_ = v___y_3657_;
v___y_3596_ = v___y_3653_;
v___y_3597_ = v___y_3638_;
v___y_3598_ = v___y_3640_;
v___y_3599_ = v___y_3642_;
v___y_3600_ = v___y_3644_;
v___y_3601_ = v_self_3683_;
v___y_3602_ = v___y_3645_;
v___y_3603_ = v___y_3646_;
v___y_3604_ = v___y_3648_;
v___y_3605_ = v___y_3654_;
v___y_3606_ = v___y_3650_;
v___y_3607_ = v_heqProofs_3685_;
goto v___jp_3584_;
}
}
else
{
v___y_3585_ = v___y_3656_;
v___y_3586_ = v___y_3637_;
v___y_3587_ = v___y_3641_;
v___y_3588_ = v___y_3652_;
v___y_3589_ = v___y_3647_;
v___y_3590_ = v___x_3662_;
v___y_3591_ = v___y_3658_;
v___y_3592_ = v___y_3649_;
v___y_3593_ = v___y_3655_;
v___y_3594_ = v___y_3651_;
v___y_3595_ = v___y_3657_;
v___y_3596_ = v___y_3653_;
v___y_3597_ = v___y_3638_;
v___y_3598_ = v___y_3640_;
v___y_3599_ = v___y_3642_;
v___y_3600_ = v___y_3644_;
v___y_3601_ = v_self_3683_;
v___y_3602_ = v___y_3645_;
v___y_3603_ = v___y_3646_;
v___y_3604_ = v___y_3648_;
v___y_3605_ = v___y_3654_;
v___y_3606_ = v___y_3650_;
v___y_3607_ = v_isHEq_3447_;
goto v___jp_3584_;
}
}
else
{
lean_dec_ref(v_self_3683_);
lean_dec(v___x_3662_);
lean_dec(v___y_3647_);
lean_dec(v___y_3646_);
lean_dec_ref(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec_ref(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec_ref(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec_ref(v_lhsRoot_3452_);
return v___x_3691_;
}
}
}
}
else
{
lean_object* v_a_3704_; lean_object* v___x_3706_; uint8_t v_isShared_3707_; uint8_t v_isSharedCheck_3711_; 
lean_dec(v___x_3662_);
lean_dec(v___y_3647_);
lean_dec(v___y_3646_);
lean_dec_ref(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec_ref(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec_ref(v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
v_a_3704_ = lean_ctor_get(v___x_3664_, 0);
v_isSharedCheck_3711_ = !lean_is_exclusive(v___x_3664_);
if (v_isSharedCheck_3711_ == 0)
{
v___x_3706_ = v___x_3664_;
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
else
{
lean_inc(v_a_3704_);
lean_dec(v___x_3664_);
v___x_3706_ = lean_box(0);
v_isShared_3707_ = v_isSharedCheck_3711_;
goto v_resetjp_3705_;
}
v_resetjp_3705_:
{
lean_object* v___x_3709_; 
if (v_isShared_3707_ == 0)
{
v___x_3709_ = v___x_3706_;
goto v_reusejp_3708_;
}
else
{
lean_object* v_reuseFailAlloc_3710_; 
v_reuseFailAlloc_3710_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3710_, 0, v_a_3704_);
v___x_3709_ = v_reuseFailAlloc_3710_;
goto v_reusejp_3708_;
}
v_reusejp_3708_:
{
return v___x_3709_;
}
}
}
}
else
{
lean_dec(v___y_3647_);
lean_dec(v___y_3646_);
lean_dec_ref(v___y_3645_);
lean_dec_ref(v___y_3644_);
lean_dec_ref(v___y_3642_);
lean_dec_ref(v___y_3641_);
lean_dec_ref(v___y_3640_);
lean_dec_ref(v___y_3639_);
lean_dec_ref(v___y_3638_);
lean_dec_ref(v___y_3637_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
return v___x_3659_;
}
}
v___jp_3717_:
{
lean_object* v_self_3733_; lean_object* v_next_3734_; lean_object* v_size_3735_; uint8_t v_hasLambdas_3736_; uint8_t v_heqProofs_3737_; lean_object* v___x_3738_; 
v_self_3733_ = lean_ctor_get(v_lhsRoot_3452_, 0);
v_next_3734_ = lean_ctor_get(v_lhsRoot_3452_, 1);
v_size_3735_ = lean_ctor_get(v_lhsRoot_3452_, 6);
v_hasLambdas_3736_ = lean_ctor_get_uint8(v_lhsRoot_3452_, sizeof(void*)*12 + 3);
v_heqProofs_3737_ = lean_ctor_get_uint8(v_lhsRoot_3452_, sizeof(void*)*12 + 4);
v___x_3738_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents(v_self_3733_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3738_) == 0)
{
lean_object* v_a_3739_; lean_object* v_root_3740_; lean_object* v___x_3741_; 
v_a_3739_ = lean_ctor_get(v___x_3738_, 0);
lean_inc(v_a_3739_);
lean_dec_ref_known(v___x_3738_, 1);
v_root_3740_ = lean_ctor_get(v_rhsNode_3451_, 2);
lean_inc_ref_n(v_root_3740_, 2);
lean_dec_ref(v_rhsNode_3451_);
lean_inc_ref(v_lhs_3448_);
v___x_3741_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots(v_lhs_3448_, v_root_3740_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3741_) == 0)
{
lean_object* v_toCold_3742_; lean_object* v_options_3743_; uint8_t v_hasTrace_3744_; 
lean_dec_ref_known(v___x_3741_, 1);
v_toCold_3742_ = lean_ctor_get(v___y_3731_, 0);
v_options_3743_ = lean_ctor_get(v_toCold_3742_, 2);
v_hasTrace_3744_ = lean_ctor_get_uint8(v_options_3743_, sizeof(void*)*1);
if (v_hasTrace_3744_ == 0)
{
lean_inc(v_size_3735_);
lean_inc_ref(v_self_3733_);
lean_inc_ref(v_next_3734_);
v___y_3637_ = v___y_3718_;
v___y_3638_ = v_fns_u2082_3722_;
v___y_3639_ = v___y_3719_;
v___y_3640_ = v_next_3734_;
v___y_3641_ = v___y_3720_;
v___y_3642_ = v_self_3733_;
v___y_3643_ = v_heqProofs_3737_;
v___y_3644_ = v_root_3740_;
v___y_3645_ = v___y_3721_;
v___y_3646_ = v_size_3735_;
v___y_3647_ = v_a_3739_;
v___y_3648_ = v_hasLambdas_3736_;
v___y_3649_ = v___y_3723_;
v___y_3650_ = v___y_3724_;
v___y_3651_ = v___y_3725_;
v___y_3652_ = v___y_3726_;
v___y_3653_ = v___y_3727_;
v___y_3654_ = v___y_3728_;
v___y_3655_ = v___y_3729_;
v___y_3656_ = v___y_3730_;
v___y_3657_ = v___y_3731_;
v___y_3658_ = v___y_3732_;
goto v___jp_3636_;
}
else
{
lean_object* v_inheritedTraceOptions_3745_; lean_object* v___x_3746_; uint8_t v___x_3747_; 
v_inheritedTraceOptions_3745_ = lean_ctor_get(v_toCold_3742_, 11);
v___x_3746_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_3747_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3745_, v_options_3743_, v___x_3746_);
if (v___x_3747_ == 0)
{
lean_inc(v_size_3735_);
lean_inc_ref(v_self_3733_);
lean_inc_ref(v_next_3734_);
v___y_3637_ = v___y_3718_;
v___y_3638_ = v_fns_u2082_3722_;
v___y_3639_ = v___y_3719_;
v___y_3640_ = v_next_3734_;
v___y_3641_ = v___y_3720_;
v___y_3642_ = v_self_3733_;
v___y_3643_ = v_heqProofs_3737_;
v___y_3644_ = v_root_3740_;
v___y_3645_ = v___y_3721_;
v___y_3646_ = v_size_3735_;
v___y_3647_ = v_a_3739_;
v___y_3648_ = v_hasLambdas_3736_;
v___y_3649_ = v___y_3723_;
v___y_3650_ = v___y_3724_;
v___y_3651_ = v___y_3725_;
v___y_3652_ = v___y_3726_;
v___y_3653_ = v___y_3727_;
v___y_3654_ = v___y_3728_;
v___y_3655_ = v___y_3729_;
v___y_3656_ = v___y_3730_;
v___y_3657_ = v___y_3731_;
v___y_3658_ = v___y_3732_;
goto v___jp_3636_;
}
else
{
lean_object* v___x_3748_; 
v___x_3748_ = l_Lean_Meta_Grind_updateLastTag(v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_, v___y_3727_, v___y_3728_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3748_) == 0)
{
lean_object* v___x_3749_; 
lean_dec_ref_known(v___x_3748_, 1);
lean_inc_ref(v_lhs_3448_);
v___x_3749_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_3448_, v___y_3723_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3749_) == 0)
{
lean_object* v_a_3750_; lean_object* v___x_3751_; 
v_a_3750_ = lean_ctor_get(v___x_3749_, 0);
lean_inc(v_a_3750_);
lean_dec_ref_known(v___x_3749_, 1);
lean_inc_ref(v_root_3740_);
v___x_3751_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_root_3740_, v___y_3723_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3751_) == 0)
{
lean_object* v_a_3752_; lean_object* v___x_3753_; lean_object* v___x_3754_; 
v_a_3752_ = lean_ctor_get(v___x_3751_, 0);
lean_inc(v_a_3752_);
lean_dec_ref_known(v___x_3751_, 1);
v___x_3753_ = lean_st_ref_get(v___y_3723_);
lean_inc_ref(v_lhs_3448_);
v___x_3754_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_3753_, v_lhs_3448_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
lean_dec(v___x_3753_);
if (lean_obj_tag(v___x_3754_) == 0)
{
lean_object* v_a_3755_; lean_object* v___x_3756_; 
v_a_3755_ = lean_ctor_get(v___x_3754_, 0);
lean_inc(v_a_3755_);
lean_dec_ref_known(v___x_3754_, 1);
v___x_3756_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_a_3755_, v___y_3723_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3756_) == 0)
{
lean_object* v_a_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; lean_object* v___x_3763_; lean_object* v___x_3764_; 
v_a_3757_ = lean_ctor_get(v___x_3756_, 0);
lean_inc(v_a_3757_);
lean_dec_ref_known(v___x_3756_, 1);
v___x_3758_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__3);
v___x_3759_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3759_, 0, v_a_3750_);
lean_ctor_set(v___x_3759_, 1, v___x_3758_);
v___x_3760_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3759_);
lean_ctor_set(v___x_3760_, 1, v_a_3752_);
v___x_3761_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__5);
v___x_3762_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3760_);
lean_ctor_set(v___x_3762_, 1, v___x_3761_);
v___x_3763_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3763_, 0, v___x_3762_);
lean_ctor_set(v___x_3763_, 1, v_a_3757_);
v___x_3764_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v_cls_3716_, v___x_3763_, v___y_3729_, v___y_3730_, v___y_3731_, v___y_3732_);
if (lean_obj_tag(v___x_3764_) == 0)
{
lean_dec_ref_known(v___x_3764_, 1);
lean_inc(v_size_3735_);
lean_inc_ref(v_self_3733_);
lean_inc_ref(v_next_3734_);
v___y_3637_ = v___y_3718_;
v___y_3638_ = v_fns_u2082_3722_;
v___y_3639_ = v___y_3719_;
v___y_3640_ = v_next_3734_;
v___y_3641_ = v___y_3720_;
v___y_3642_ = v_self_3733_;
v___y_3643_ = v_heqProofs_3737_;
v___y_3644_ = v_root_3740_;
v___y_3645_ = v___y_3721_;
v___y_3646_ = v_size_3735_;
v___y_3647_ = v_a_3739_;
v___y_3648_ = v_hasLambdas_3736_;
v___y_3649_ = v___y_3723_;
v___y_3650_ = v___y_3724_;
v___y_3651_ = v___y_3725_;
v___y_3652_ = v___y_3726_;
v___y_3653_ = v___y_3727_;
v___y_3654_ = v___y_3728_;
v___y_3655_ = v___y_3729_;
v___y_3656_ = v___y_3730_;
v___y_3657_ = v___y_3731_;
v___y_3658_ = v___y_3732_;
goto v___jp_3636_;
}
else
{
lean_dec_ref(v_root_3740_);
lean_dec(v_a_3739_);
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
return v___x_3764_;
}
}
else
{
lean_object* v_a_3765_; lean_object* v___x_3767_; uint8_t v_isShared_3768_; uint8_t v_isSharedCheck_3772_; 
lean_dec(v_a_3752_);
lean_dec(v_a_3750_);
lean_dec_ref(v_root_3740_);
lean_dec(v_a_3739_);
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
v_a_3765_ = lean_ctor_get(v___x_3756_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v___x_3756_);
if (v_isSharedCheck_3772_ == 0)
{
v___x_3767_ = v___x_3756_;
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
else
{
lean_inc(v_a_3765_);
lean_dec(v___x_3756_);
v___x_3767_ = lean_box(0);
v_isShared_3768_ = v_isSharedCheck_3772_;
goto v_resetjp_3766_;
}
v_resetjp_3766_:
{
lean_object* v___x_3770_; 
if (v_isShared_3768_ == 0)
{
v___x_3770_ = v___x_3767_;
goto v_reusejp_3769_;
}
else
{
lean_object* v_reuseFailAlloc_3771_; 
v_reuseFailAlloc_3771_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3771_, 0, v_a_3765_);
v___x_3770_ = v_reuseFailAlloc_3771_;
goto v_reusejp_3769_;
}
v_reusejp_3769_:
{
return v___x_3770_;
}
}
}
}
else
{
lean_object* v_a_3773_; lean_object* v___x_3775_; uint8_t v_isShared_3776_; uint8_t v_isSharedCheck_3780_; 
lean_dec(v_a_3752_);
lean_dec(v_a_3750_);
lean_dec_ref(v_root_3740_);
lean_dec(v_a_3739_);
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
v_a_3773_ = lean_ctor_get(v___x_3754_, 0);
v_isSharedCheck_3780_ = !lean_is_exclusive(v___x_3754_);
if (v_isSharedCheck_3780_ == 0)
{
v___x_3775_ = v___x_3754_;
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
else
{
lean_inc(v_a_3773_);
lean_dec(v___x_3754_);
v___x_3775_ = lean_box(0);
v_isShared_3776_ = v_isSharedCheck_3780_;
goto v_resetjp_3774_;
}
v_resetjp_3774_:
{
lean_object* v___x_3778_; 
if (v_isShared_3776_ == 0)
{
v___x_3778_ = v___x_3775_;
goto v_reusejp_3777_;
}
else
{
lean_object* v_reuseFailAlloc_3779_; 
v_reuseFailAlloc_3779_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3779_, 0, v_a_3773_);
v___x_3778_ = v_reuseFailAlloc_3779_;
goto v_reusejp_3777_;
}
v_reusejp_3777_:
{
return v___x_3778_;
}
}
}
}
else
{
lean_object* v_a_3781_; lean_object* v___x_3783_; uint8_t v_isShared_3784_; uint8_t v_isSharedCheck_3788_; 
lean_dec(v_a_3750_);
lean_dec_ref(v_root_3740_);
lean_dec(v_a_3739_);
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
v_a_3781_ = lean_ctor_get(v___x_3751_, 0);
v_isSharedCheck_3788_ = !lean_is_exclusive(v___x_3751_);
if (v_isSharedCheck_3788_ == 0)
{
v___x_3783_ = v___x_3751_;
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
else
{
lean_inc(v_a_3781_);
lean_dec(v___x_3751_);
v___x_3783_ = lean_box(0);
v_isShared_3784_ = v_isSharedCheck_3788_;
goto v_resetjp_3782_;
}
v_resetjp_3782_:
{
lean_object* v___x_3786_; 
if (v_isShared_3784_ == 0)
{
v___x_3786_ = v___x_3783_;
goto v_reusejp_3785_;
}
else
{
lean_object* v_reuseFailAlloc_3787_; 
v_reuseFailAlloc_3787_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3787_, 0, v_a_3781_);
v___x_3786_ = v_reuseFailAlloc_3787_;
goto v_reusejp_3785_;
}
v_reusejp_3785_:
{
return v___x_3786_;
}
}
}
}
else
{
lean_object* v_a_3789_; lean_object* v___x_3791_; uint8_t v_isShared_3792_; uint8_t v_isSharedCheck_3796_; 
lean_dec_ref(v_root_3740_);
lean_dec(v_a_3739_);
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
v_a_3789_ = lean_ctor_get(v___x_3749_, 0);
v_isSharedCheck_3796_ = !lean_is_exclusive(v___x_3749_);
if (v_isSharedCheck_3796_ == 0)
{
v___x_3791_ = v___x_3749_;
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
else
{
lean_inc(v_a_3789_);
lean_dec(v___x_3749_);
v___x_3791_ = lean_box(0);
v_isShared_3792_ = v_isSharedCheck_3796_;
goto v_resetjp_3790_;
}
v_resetjp_3790_:
{
lean_object* v___x_3794_; 
if (v_isShared_3792_ == 0)
{
v___x_3794_ = v___x_3791_;
goto v_reusejp_3793_;
}
else
{
lean_object* v_reuseFailAlloc_3795_; 
v_reuseFailAlloc_3795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3795_, 0, v_a_3789_);
v___x_3794_ = v_reuseFailAlloc_3795_;
goto v_reusejp_3793_;
}
v_reusejp_3793_:
{
return v___x_3794_;
}
}
}
}
else
{
lean_dec_ref(v_root_3740_);
lean_dec(v_a_3739_);
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
return v___x_3748_;
}
}
}
}
else
{
lean_dec_ref(v_root_3740_);
lean_dec(v_a_3739_);
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_lhs_3448_);
return v___x_3741_;
}
}
else
{
lean_object* v_a_3797_; lean_object* v___x_3799_; uint8_t v_isShared_3800_; uint8_t v_isSharedCheck_3804_; 
lean_dec_ref(v_fns_u2082_3722_);
lean_dec_ref(v___y_3721_);
lean_dec_ref(v___y_3720_);
lean_dec_ref(v___y_3719_);
lean_dec_ref(v___y_3718_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhs_3448_);
v_a_3797_ = lean_ctor_get(v___x_3738_, 0);
v_isSharedCheck_3804_ = !lean_is_exclusive(v___x_3738_);
if (v_isSharedCheck_3804_ == 0)
{
v___x_3799_ = v___x_3738_;
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
else
{
lean_inc(v_a_3797_);
lean_dec(v___x_3738_);
v___x_3799_ = lean_box(0);
v_isShared_3800_ = v_isSharedCheck_3804_;
goto v_resetjp_3798_;
}
v_resetjp_3798_:
{
lean_object* v___x_3802_; 
if (v_isShared_3800_ == 0)
{
v___x_3802_ = v___x_3799_;
goto v_reusejp_3801_;
}
else
{
lean_object* v_reuseFailAlloc_3803_; 
v_reuseFailAlloc_3803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3803_, 0, v_a_3797_);
v___x_3802_ = v_reuseFailAlloc_3803_;
goto v_reusejp_3801_;
}
v_reusejp_3801_:
{
return v___x_3802_;
}
}
}
}
v___jp_3805_:
{
lean_object* v___x_3820_; lean_object* v___x_3821_; uint8_t v___x_3822_; 
v___x_3820_ = lean_array_get_size(v___y_3808_);
v___x_3821_ = lean_unsigned_to_nat(0u);
v___x_3822_ = lean_nat_dec_eq(v___x_3820_, v___x_3821_);
if (v___x_3822_ == 0)
{
lean_object* v_self_3823_; lean_object* v___x_3824_; 
v_self_3823_ = lean_ctor_get(v_lhsRoot_3452_, 0);
lean_inc_ref(v_self_3823_);
v___x_3824_ = l_Lean_Meta_Grind_getFnRoots(v_self_3823_, v___y_3810_, v___y_3811_, v___y_3812_, v___y_3813_, v___y_3814_, v___y_3815_, v___y_3816_, v___y_3817_, v___y_3818_, v___y_3819_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
lean_inc(v_a_3825_);
lean_dec_ref_known(v___x_3824_, 1);
v___y_3718_ = v___y_3806_;
v___y_3719_ = v___y_3807_;
v___y_3720_ = v___y_3808_;
v___y_3721_ = v_fns_u2081_3809_;
v_fns_u2082_3722_ = v_a_3825_;
v___y_3723_ = v___y_3810_;
v___y_3724_ = v___y_3811_;
v___y_3725_ = v___y_3812_;
v___y_3726_ = v___y_3813_;
v___y_3727_ = v___y_3814_;
v___y_3728_ = v___y_3815_;
v___y_3729_ = v___y_3816_;
v___y_3730_ = v___y_3817_;
v___y_3731_ = v___y_3818_;
v___y_3732_ = v___y_3819_;
goto v___jp_3717_;
}
else
{
lean_object* v_a_3826_; lean_object* v___x_3828_; uint8_t v_isShared_3829_; uint8_t v_isSharedCheck_3833_; 
lean_dec_ref(v_fns_u2081_3809_);
lean_dec_ref(v___y_3808_);
lean_dec_ref(v___y_3807_);
lean_dec_ref(v___y_3806_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhs_3448_);
v_a_3826_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3833_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3833_ == 0)
{
v___x_3828_ = v___x_3824_;
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
else
{
lean_inc(v_a_3826_);
lean_dec(v___x_3824_);
v___x_3828_ = lean_box(0);
v_isShared_3829_ = v_isSharedCheck_3833_;
goto v_resetjp_3827_;
}
v_resetjp_3827_:
{
lean_object* v___x_3831_; 
if (v_isShared_3829_ == 0)
{
v___x_3831_ = v___x_3828_;
goto v_reusejp_3830_;
}
else
{
lean_object* v_reuseFailAlloc_3832_; 
v_reuseFailAlloc_3832_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3832_, 0, v_a_3826_);
v___x_3831_ = v_reuseFailAlloc_3832_;
goto v_reusejp_3830_;
}
v_reusejp_3830_:
{
return v___x_3831_;
}
}
}
}
else
{
lean_object* v___x_3834_; 
v___x_3834_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
v___y_3718_ = v___y_3806_;
v___y_3719_ = v___y_3807_;
v___y_3720_ = v___y_3808_;
v___y_3721_ = v_fns_u2081_3809_;
v_fns_u2082_3722_ = v___x_3834_;
v___y_3723_ = v___y_3810_;
v___y_3724_ = v___y_3811_;
v___y_3725_ = v___y_3812_;
v___y_3726_ = v___y_3813_;
v___y_3727_ = v___y_3814_;
v___y_3728_ = v___y_3815_;
v___y_3729_ = v___y_3816_;
v___y_3730_ = v___y_3817_;
v___y_3731_ = v___y_3818_;
v___y_3732_ = v___y_3819_;
goto v___jp_3717_;
}
}
v___jp_3835_:
{
lean_object* v___x_3846_; 
lean_inc_ref(v_lhs_3448_);
v___x_3846_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_invertTrans___redArg(v_lhs_3448_, v___y_3836_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
if (lean_obj_tag(v___x_3846_) == 0)
{
lean_object* v___x_3848_; uint8_t v_isShared_3849_; uint8_t v_isSharedCheck_3914_; 
v_isSharedCheck_3914_ = !lean_is_exclusive(v___x_3846_);
if (v_isSharedCheck_3914_ == 0)
{
lean_object* v_unused_3915_; 
v_unused_3915_ = lean_ctor_get(v___x_3846_, 0);
lean_dec(v_unused_3915_);
v___x_3848_ = v___x_3846_;
v_isShared_3849_ = v_isSharedCheck_3914_;
goto v_resetjp_3847_;
}
else
{
lean_dec(v___x_3846_);
v___x_3848_ = lean_box(0);
v_isShared_3849_ = v_isSharedCheck_3914_;
goto v_resetjp_3847_;
}
v_resetjp_3847_:
{
lean_object* v_self_3850_; lean_object* v_next_3851_; lean_object* v_root_3852_; lean_object* v_congr_3853_; lean_object* v_size_3854_; uint8_t v_interpreted_3855_; uint8_t v_ctor_3856_; uint8_t v_hasLambdas_3857_; uint8_t v_heqProofs_3858_; lean_object* v_idx_3859_; lean_object* v_generation_3860_; lean_object* v_mt_3861_; lean_object* v_sTerms_3862_; uint8_t v_funCC_3863_; lean_object* v_ematchDiagSource_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3911_; 
v_self_3850_ = lean_ctor_get(v_lhsNode_3450_, 0);
v_next_3851_ = lean_ctor_get(v_lhsNode_3450_, 1);
v_root_3852_ = lean_ctor_get(v_lhsNode_3450_, 2);
v_congr_3853_ = lean_ctor_get(v_lhsNode_3450_, 3);
v_size_3854_ = lean_ctor_get(v_lhsNode_3450_, 6);
v_interpreted_3855_ = lean_ctor_get_uint8(v_lhsNode_3450_, sizeof(void*)*12 + 1);
v_ctor_3856_ = lean_ctor_get_uint8(v_lhsNode_3450_, sizeof(void*)*12 + 2);
v_hasLambdas_3857_ = lean_ctor_get_uint8(v_lhsNode_3450_, sizeof(void*)*12 + 3);
v_heqProofs_3858_ = lean_ctor_get_uint8(v_lhsNode_3450_, sizeof(void*)*12 + 4);
v_idx_3859_ = lean_ctor_get(v_lhsNode_3450_, 7);
v_generation_3860_ = lean_ctor_get(v_lhsNode_3450_, 8);
v_mt_3861_ = lean_ctor_get(v_lhsNode_3450_, 9);
v_sTerms_3862_ = lean_ctor_get(v_lhsNode_3450_, 10);
v_funCC_3863_ = lean_ctor_get_uint8(v_lhsNode_3450_, sizeof(void*)*12 + 5);
v_ematchDiagSource_3864_ = lean_ctor_get(v_lhsNode_3450_, 11);
v_isSharedCheck_3911_ = !lean_is_exclusive(v_lhsNode_3450_);
if (v_isSharedCheck_3911_ == 0)
{
lean_object* v_unused_3912_; lean_object* v_unused_3913_; 
v_unused_3912_ = lean_ctor_get(v_lhsNode_3450_, 5);
lean_dec(v_unused_3912_);
v_unused_3913_ = lean_ctor_get(v_lhsNode_3450_, 4);
lean_dec(v_unused_3913_);
v___x_3866_ = v_lhsNode_3450_;
v_isShared_3867_ = v_isSharedCheck_3911_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_ematchDiagSource_3864_);
lean_inc(v_sTerms_3862_);
lean_inc(v_mt_3861_);
lean_inc(v_generation_3860_);
lean_inc(v_idx_3859_);
lean_inc(v_size_3854_);
lean_inc(v_congr_3853_);
lean_inc(v_root_3852_);
lean_inc(v_next_3851_);
lean_inc(v_self_3850_);
lean_dec(v_lhsNode_3450_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3911_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3849_ == 0)
{
lean_ctor_set_tag(v___x_3848_, 1);
lean_ctor_set(v___x_3848_, 0, v_rhs_3449_);
v___x_3869_ = v___x_3848_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3910_; 
v_reuseFailAlloc_3910_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3910_, 0, v_rhs_3449_);
v___x_3869_ = v_reuseFailAlloc_3910_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
lean_object* v___x_3870_; lean_object* v___x_3872_; 
v___x_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3870_, 0, v_proof_3446_);
lean_inc_ref(v_root_3852_);
if (v_isShared_3867_ == 0)
{
lean_ctor_set(v___x_3866_, 5, v___x_3870_);
lean_ctor_set(v___x_3866_, 4, v___x_3869_);
v___x_3872_ = v___x_3866_;
goto v_reusejp_3871_;
}
else
{
lean_object* v_reuseFailAlloc_3909_; 
v_reuseFailAlloc_3909_ = lean_alloc_ctor(0, 12, 6);
lean_ctor_set(v_reuseFailAlloc_3909_, 0, v_self_3850_);
lean_ctor_set(v_reuseFailAlloc_3909_, 1, v_next_3851_);
lean_ctor_set(v_reuseFailAlloc_3909_, 2, v_root_3852_);
lean_ctor_set(v_reuseFailAlloc_3909_, 3, v_congr_3853_);
lean_ctor_set(v_reuseFailAlloc_3909_, 4, v___x_3869_);
lean_ctor_set(v_reuseFailAlloc_3909_, 5, v___x_3870_);
lean_ctor_set(v_reuseFailAlloc_3909_, 6, v_size_3854_);
lean_ctor_set(v_reuseFailAlloc_3909_, 7, v_idx_3859_);
lean_ctor_set(v_reuseFailAlloc_3909_, 8, v_generation_3860_);
lean_ctor_set(v_reuseFailAlloc_3909_, 9, v_mt_3861_);
lean_ctor_set(v_reuseFailAlloc_3909_, 10, v_sTerms_3862_);
lean_ctor_set(v_reuseFailAlloc_3909_, 11, v_ematchDiagSource_3864_);
lean_ctor_set_uint8(v_reuseFailAlloc_3909_, sizeof(void*)*12 + 1, v_interpreted_3855_);
lean_ctor_set_uint8(v_reuseFailAlloc_3909_, sizeof(void*)*12 + 2, v_ctor_3856_);
lean_ctor_set_uint8(v_reuseFailAlloc_3909_, sizeof(void*)*12 + 3, v_hasLambdas_3857_);
lean_ctor_set_uint8(v_reuseFailAlloc_3909_, sizeof(void*)*12 + 4, v_heqProofs_3858_);
lean_ctor_set_uint8(v_reuseFailAlloc_3909_, sizeof(void*)*12 + 5, v_funCC_3863_);
v___x_3872_ = v_reuseFailAlloc_3909_;
goto v_reusejp_3871_;
}
v_reusejp_3871_:
{
lean_object* v___x_3873_; 
lean_ctor_set_uint8(v___x_3872_, sizeof(void*)*12, v_flipped_3454_);
lean_inc_ref(v_lhs_3448_);
v___x_3873_ = l_Lean_Meta_Grind_setENode___redArg(v_lhs_3448_, v___x_3872_, v___y_3836_);
if (lean_obj_tag(v___x_3873_) == 0)
{
lean_object* v___x_3874_; 
lean_dec_ref_known(v___x_3873_, 1);
v___x_3874_ = l_Lean_Meta_Grind_getEqcLambdas(v_lhsRoot_3452_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
if (lean_obj_tag(v___x_3874_) == 0)
{
lean_object* v_a_3875_; lean_object* v___x_3876_; 
v_a_3875_ = lean_ctor_get(v___x_3874_, 0);
lean_inc(v_a_3875_);
lean_dec_ref_known(v___x_3874_, 1);
v___x_3876_ = l_Lean_Meta_Grind_getEqcLambdas(v_rhsRoot_3453_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
if (lean_obj_tag(v___x_3876_) == 0)
{
lean_object* v_a_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; uint8_t v___x_3880_; 
v_a_3877_ = lean_ctor_get(v___x_3876_, 0);
lean_inc(v_a_3877_);
lean_dec_ref_known(v___x_3876_, 1);
v___x_3878_ = lean_array_get_size(v_a_3875_);
v___x_3879_ = lean_unsigned_to_nat(0u);
v___x_3880_ = lean_nat_dec_eq(v___x_3878_, v___x_3879_);
if (v___x_3880_ == 0)
{
lean_object* v_self_3881_; lean_object* v___x_3882_; 
v_self_3881_ = lean_ctor_get(v_rhsRoot_3453_, 0);
lean_inc_ref(v_self_3881_);
v___x_3882_ = l_Lean_Meta_Grind_getFnRoots(v_self_3881_, v___y_3836_, v___y_3837_, v___y_3838_, v___y_3839_, v___y_3840_, v___y_3841_, v___y_3842_, v___y_3843_, v___y_3844_, v___y_3845_);
if (lean_obj_tag(v___x_3882_) == 0)
{
lean_object* v_a_3883_; 
v_a_3883_ = lean_ctor_get(v___x_3882_, 0);
lean_inc(v_a_3883_);
lean_dec_ref_known(v___x_3882_, 1);
v___y_3806_ = v_a_3875_;
v___y_3807_ = v_root_3852_;
v___y_3808_ = v_a_3877_;
v_fns_u2081_3809_ = v_a_3883_;
v___y_3810_ = v___y_3836_;
v___y_3811_ = v___y_3837_;
v___y_3812_ = v___y_3838_;
v___y_3813_ = v___y_3839_;
v___y_3814_ = v___y_3840_;
v___y_3815_ = v___y_3841_;
v___y_3816_ = v___y_3842_;
v___y_3817_ = v___y_3843_;
v___y_3818_ = v___y_3844_;
v___y_3819_ = v___y_3845_;
goto v___jp_3805_;
}
else
{
lean_object* v_a_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_3891_; 
lean_dec(v_a_3877_);
lean_dec(v_a_3875_);
lean_dec_ref(v_root_3852_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhs_3448_);
v_a_3884_ = lean_ctor_get(v___x_3882_, 0);
v_isSharedCheck_3891_ = !lean_is_exclusive(v___x_3882_);
if (v_isSharedCheck_3891_ == 0)
{
v___x_3886_ = v___x_3882_;
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_a_3884_);
lean_dec(v___x_3882_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_3891_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v___x_3889_; 
if (v_isShared_3887_ == 0)
{
v___x_3889_ = v___x_3886_;
goto v_reusejp_3888_;
}
else
{
lean_object* v_reuseFailAlloc_3890_; 
v_reuseFailAlloc_3890_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3890_, 0, v_a_3884_);
v___x_3889_ = v_reuseFailAlloc_3890_;
goto v_reusejp_3888_;
}
v_reusejp_3888_:
{
return v___x_3889_;
}
}
}
}
else
{
lean_object* v___x_3892_; 
v___x_3892_ = ((lean_object*)(l_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Lean_Meta_Grind_propagateBeta_spec__1_spec__1___redArg___closed__0));
v___y_3806_ = v_a_3875_;
v___y_3807_ = v_root_3852_;
v___y_3808_ = v_a_3877_;
v_fns_u2081_3809_ = v___x_3892_;
v___y_3810_ = v___y_3836_;
v___y_3811_ = v___y_3837_;
v___y_3812_ = v___y_3838_;
v___y_3813_ = v___y_3839_;
v___y_3814_ = v___y_3840_;
v___y_3815_ = v___y_3841_;
v___y_3816_ = v___y_3842_;
v___y_3817_ = v___y_3843_;
v___y_3818_ = v___y_3844_;
v___y_3819_ = v___y_3845_;
goto v___jp_3805_;
}
}
else
{
lean_object* v_a_3893_; lean_object* v___x_3895_; uint8_t v_isShared_3896_; uint8_t v_isSharedCheck_3900_; 
lean_dec(v_a_3875_);
lean_dec_ref(v_root_3852_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhs_3448_);
v_a_3893_ = lean_ctor_get(v___x_3876_, 0);
v_isSharedCheck_3900_ = !lean_is_exclusive(v___x_3876_);
if (v_isSharedCheck_3900_ == 0)
{
v___x_3895_ = v___x_3876_;
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
else
{
lean_inc(v_a_3893_);
lean_dec(v___x_3876_);
v___x_3895_ = lean_box(0);
v_isShared_3896_ = v_isSharedCheck_3900_;
goto v_resetjp_3894_;
}
v_resetjp_3894_:
{
lean_object* v___x_3898_; 
if (v_isShared_3896_ == 0)
{
v___x_3898_ = v___x_3895_;
goto v_reusejp_3897_;
}
else
{
lean_object* v_reuseFailAlloc_3899_; 
v_reuseFailAlloc_3899_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3899_, 0, v_a_3893_);
v___x_3898_ = v_reuseFailAlloc_3899_;
goto v_reusejp_3897_;
}
v_reusejp_3897_:
{
return v___x_3898_;
}
}
}
}
else
{
lean_object* v_a_3901_; lean_object* v___x_3903_; uint8_t v_isShared_3904_; uint8_t v_isSharedCheck_3908_; 
lean_dec_ref(v_root_3852_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhs_3448_);
v_a_3901_ = lean_ctor_get(v___x_3874_, 0);
v_isSharedCheck_3908_ = !lean_is_exclusive(v___x_3874_);
if (v_isSharedCheck_3908_ == 0)
{
v___x_3903_ = v___x_3874_;
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
else
{
lean_inc(v_a_3901_);
lean_dec(v___x_3874_);
v___x_3903_ = lean_box(0);
v_isShared_3904_ = v_isSharedCheck_3908_;
goto v_resetjp_3902_;
}
v_resetjp_3902_:
{
lean_object* v___x_3906_; 
if (v_isShared_3904_ == 0)
{
v___x_3906_ = v___x_3903_;
goto v_reusejp_3905_;
}
else
{
lean_object* v_reuseFailAlloc_3907_; 
v_reuseFailAlloc_3907_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3907_, 0, v_a_3901_);
v___x_3906_ = v_reuseFailAlloc_3907_;
goto v_reusejp_3905_;
}
v_reusejp_3905_:
{
return v___x_3906_;
}
}
}
}
else
{
lean_dec_ref(v_root_3852_);
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhs_3448_);
return v___x_3873_;
}
}
}
}
}
}
else
{
lean_dec_ref(v_rhsRoot_3453_);
lean_dec_ref(v_lhsRoot_3452_);
lean_dec_ref(v_rhsNode_3451_);
lean_dec_ref(v_lhsNode_3450_);
lean_dec_ref(v_rhs_3449_);
lean_dec_ref(v_lhs_3448_);
lean_dec_ref(v_proof_3446_);
return v___x_3846_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___boxed(lean_object** _args){
lean_object* v_proof_3945_ = _args[0];
lean_object* v_isHEq_3946_ = _args[1];
lean_object* v_lhs_3947_ = _args[2];
lean_object* v_rhs_3948_ = _args[3];
lean_object* v_lhsNode_3949_ = _args[4];
lean_object* v_rhsNode_3950_ = _args[5];
lean_object* v_lhsRoot_3951_ = _args[6];
lean_object* v_rhsRoot_3952_ = _args[7];
lean_object* v_flipped_3953_ = _args[8];
lean_object* v_a_3954_ = _args[9];
lean_object* v_a_3955_ = _args[10];
lean_object* v_a_3956_ = _args[11];
lean_object* v_a_3957_ = _args[12];
lean_object* v_a_3958_ = _args[13];
lean_object* v_a_3959_ = _args[14];
lean_object* v_a_3960_ = _args[15];
lean_object* v_a_3961_ = _args[16];
lean_object* v_a_3962_ = _args[17];
lean_object* v_a_3963_ = _args[18];
lean_object* v_a_3964_ = _args[19];
_start:
{
uint8_t v_isHEq_boxed_3965_; uint8_t v_flipped_boxed_3966_; lean_object* v_res_3967_; 
v_isHEq_boxed_3965_ = lean_unbox(v_isHEq_3946_);
v_flipped_boxed_3966_ = lean_unbox(v_flipped_3953_);
v_res_3967_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_3945_, v_isHEq_boxed_3965_, v_lhs_3947_, v_rhs_3948_, v_lhsNode_3949_, v_rhsNode_3950_, v_lhsRoot_3951_, v_rhsRoot_3952_, v_flipped_boxed_3966_, v_a_3954_, v_a_3955_, v_a_3956_, v_a_3957_, v_a_3958_, v_a_3959_, v_a_3960_, v_a_3961_, v_a_3962_, v_a_3963_);
lean_dec(v_a_3963_);
lean_dec_ref(v_a_3962_);
lean_dec(v_a_3961_);
lean_dec_ref(v_a_3960_);
lean_dec(v_a_3959_);
lean_dec_ref(v_a_3958_);
lean_dec(v_a_3957_);
lean_dec_ref(v_a_3956_);
lean_dec(v_a_3955_);
lean_dec(v_a_3954_);
return v_res_3967_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(lean_object* v_as_3968_, lean_object* v_as_x27_3969_, lean_object* v_b_3970_, lean_object* v_a_3971_, lean_object* v___y_3972_, lean_object* v___y_3973_, lean_object* v___y_3974_, lean_object* v___y_3975_, lean_object* v___y_3976_, lean_object* v___y_3977_, lean_object* v___y_3978_, lean_object* v___y_3979_, lean_object* v___y_3980_, lean_object* v___y_3981_){
_start:
{
lean_object* v___x_3983_; 
v___x_3983_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___redArg(v_as_x27_3969_, v_b_3970_, v___y_3972_, v___y_3973_, v___y_3974_, v___y_3975_, v___y_3976_, v___y_3977_, v___y_3978_, v___y_3979_, v___y_3980_, v___y_3981_);
return v___x_3983_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0___boxed(lean_object* v_as_3984_, lean_object* v_as_x27_3985_, lean_object* v_b_3986_, lean_object* v_a_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_, lean_object* v___y_3990_, lean_object* v___y_3991_, lean_object* v___y_3992_, lean_object* v___y_3993_, lean_object* v___y_3994_, lean_object* v___y_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_){
_start:
{
lean_object* v_res_3999_; 
v_res_3999_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__0(v_as_3984_, v_as_x27_3985_, v_b_3986_, v_a_3987_, v___y_3988_, v___y_3989_, v___y_3990_, v___y_3991_, v___y_3992_, v___y_3993_, v___y_3994_, v___y_3995_, v___y_3996_, v___y_3997_);
lean_dec(v___y_3997_);
lean_dec_ref(v___y_3996_);
lean_dec(v___y_3995_);
lean_dec_ref(v___y_3994_);
lean_dec(v___y_3993_);
lean_dec_ref(v___y_3992_);
lean_dec(v___y_3991_);
lean_dec_ref(v___y_3990_);
lean_dec(v___y_3989_);
lean_dec(v___y_3988_);
lean_dec(v_as_x27_3985_);
lean_dec(v_as_3984_);
return v_res_3999_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(lean_object* v_as_4000_, lean_object* v_as_x27_4001_, lean_object* v_b_4002_, lean_object* v_a_4003_, lean_object* v___y_4004_, lean_object* v___y_4005_, lean_object* v___y_4006_, lean_object* v___y_4007_, lean_object* v___y_4008_, lean_object* v___y_4009_, lean_object* v___y_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_){
_start:
{
lean_object* v___x_4015_; 
v___x_4015_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___redArg(v_as_x27_4001_, v_b_4002_, v___y_4004_, v___y_4005_, v___y_4006_, v___y_4007_, v___y_4008_, v___y_4009_, v___y_4010_, v___y_4011_, v___y_4012_, v___y_4013_);
return v___x_4015_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1___boxed(lean_object* v_as_4016_, lean_object* v_as_x27_4017_, lean_object* v_b_4018_, lean_object* v_a_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_, lean_object* v___y_4022_, lean_object* v___y_4023_, lean_object* v___y_4024_, lean_object* v___y_4025_, lean_object* v___y_4026_, lean_object* v___y_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_){
_start:
{
lean_object* v_res_4031_; 
v_res_4031_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go_spec__1(v_as_4016_, v_as_x27_4017_, v_b_4018_, v_a_4019_, v___y_4020_, v___y_4021_, v___y_4022_, v___y_4023_, v___y_4024_, v___y_4025_, v___y_4026_, v___y_4027_, v___y_4028_, v___y_4029_);
lean_dec(v___y_4029_);
lean_dec_ref(v___y_4028_);
lean_dec(v___y_4027_);
lean_dec_ref(v___y_4026_);
lean_dec(v___y_4025_);
lean_dec_ref(v___y_4024_);
lean_dec(v___y_4023_);
lean_dec_ref(v___y_4022_);
lean_dec(v___y_4021_);
lean_dec(v___y_4020_);
lean_dec(v_as_x27_4017_);
lean_dec(v_as_4016_);
return v_res_4031_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1(void){
_start:
{
lean_object* v___x_4033_; lean_object* v___x_4034_; 
v___x_4033_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__0));
v___x_4034_ = l_Lean_stringToMessageData(v___x_4033_);
return v___x_4034_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4(void){
_start:
{
lean_object* v___x_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; 
v___x_4039_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3));
v___x_4040_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_4041_ = l_Lean_Name_append(v___x_4040_, v___x_4039_);
return v___x_4041_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6(void){
_start:
{
lean_object* v___x_4043_; lean_object* v___x_4044_; 
v___x_4043_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__5));
v___x_4044_ = l_Lean_stringToMessageData(v___x_4043_);
return v___x_4044_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8(void){
_start:
{
lean_object* v___x_4046_; lean_object* v___x_4047_; 
v___x_4046_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__7));
v___x_4047_ = l_Lean_stringToMessageData(v___x_4046_);
return v___x_4047_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(lean_object* v_lhs_4048_, lean_object* v_rhs_4049_, lean_object* v_proof_4050_, uint8_t v_isHEq_4051_, lean_object* v_a_4052_, lean_object* v_a_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_, lean_object* v_a_4058_, lean_object* v_a_4059_, lean_object* v_a_4060_, lean_object* v_a_4061_){
_start:
{
lean_object* v___x_4066_; lean_object* v___x_4067_; 
v___x_4066_ = lean_st_ref_get(v_a_4052_);
lean_inc_ref(v_lhs_4048_);
v___x_4067_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4066_, v_lhs_4048_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
lean_dec(v___x_4066_);
if (lean_obj_tag(v___x_4067_) == 0)
{
lean_object* v_a_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; 
v_a_4068_ = lean_ctor_get(v___x_4067_, 0);
lean_inc(v_a_4068_);
lean_dec_ref_known(v___x_4067_, 1);
v___x_4069_ = lean_st_ref_get(v_a_4052_);
lean_inc_ref(v_rhs_4049_);
v___x_4070_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4069_, v_rhs_4049_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
lean_dec(v___x_4069_);
if (lean_obj_tag(v___x_4070_) == 0)
{
lean_object* v_a_4071_; lean_object* v_root_4072_; lean_object* v_root_4073_; size_t v___x_4074_; size_t v___x_4075_; uint8_t v___x_4076_; 
v_a_4071_ = lean_ctor_get(v___x_4070_, 0);
lean_inc(v_a_4071_);
lean_dec_ref_known(v___x_4070_, 1);
v_root_4072_ = lean_ctor_get(v_a_4068_, 2);
v_root_4073_ = lean_ctor_get(v_a_4071_, 2);
v___x_4074_ = lean_ptr_addr(v_root_4072_);
v___x_4075_ = lean_ptr_addr(v_root_4073_);
v___x_4076_ = lean_usize_dec_eq(v___x_4074_, v___x_4075_);
if (v___x_4076_ == 0)
{
lean_object* v_toCold_4077_; lean_object* v_options_4078_; lean_object* v_inheritedTraceOptions_4079_; uint8_t v_hasTrace_4080_; lean_object* v___y_4082_; lean_object* v___y_4083_; lean_object* v___y_4084_; lean_object* v___y_4085_; lean_object* v___y_4086_; lean_object* v___y_4087_; lean_object* v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4090_; lean_object* v___y_4091_; lean_object* v___y_4118_; uint8_t v___y_4119_; lean_object* v___y_4120_; lean_object* v___y_4121_; lean_object* v___y_4122_; lean_object* v___y_4123_; lean_object* v___y_4124_; lean_object* v___y_4125_; lean_object* v___y_4126_; lean_object* v___y_4127_; lean_object* v___y_4128_; lean_object* v___y_4129_; lean_object* v___y_4130_; lean_object* v___y_4146_; uint8_t v___y_4147_; lean_object* v___y_4148_; lean_object* v___y_4149_; lean_object* v___y_4150_; lean_object* v___y_4151_; lean_object* v___y_4152_; lean_object* v___y_4153_; lean_object* v___y_4154_; lean_object* v___y_4155_; lean_object* v___y_4156_; lean_object* v___y_4157_; lean_object* v___y_4158_; lean_object* v___y_4176_; uint8_t v___y_4177_; uint8_t v___y_4178_; lean_object* v___y_4179_; lean_object* v___y_4180_; lean_object* v___y_4181_; lean_object* v___y_4182_; lean_object* v___y_4183_; lean_object* v___y_4184_; lean_object* v___y_4185_; lean_object* v___y_4186_; lean_object* v___y_4187_; lean_object* v___y_4188_; lean_object* v___y_4189_; lean_object* v___y_4192_; lean_object* v___y_4193_; lean_object* v___y_4194_; uint8_t v___y_4195_; lean_object* v___y_4196_; lean_object* v___y_4197_; lean_object* v___y_4198_; lean_object* v___y_4199_; lean_object* v___y_4200_; lean_object* v___y_4201_; uint8_t v___y_4202_; lean_object* v___y_4203_; lean_object* v___y_4204_; lean_object* v___y_4205_; uint8_t v___y_4206_; lean_object* v___y_4209_; lean_object* v___y_4210_; lean_object* v___y_4211_; uint8_t v___y_4212_; lean_object* v___y_4213_; lean_object* v___y_4214_; lean_object* v___y_4215_; lean_object* v___y_4216_; lean_object* v___y_4217_; lean_object* v___y_4218_; uint8_t v___y_4219_; lean_object* v___y_4220_; lean_object* v___y_4221_; lean_object* v___y_4222_; lean_object* v___y_4225_; lean_object* v___y_4226_; lean_object* v___y_4227_; uint8_t v___y_4228_; lean_object* v___y_4229_; lean_object* v___y_4230_; lean_object* v___y_4231_; lean_object* v___y_4232_; lean_object* v___y_4233_; lean_object* v___y_4234_; lean_object* v___y_4235_; uint8_t v___y_4236_; lean_object* v___y_4237_; lean_object* v___y_4238_; lean_object* v_size_4239_; uint8_t v_interpreted_4240_; uint8_t v_ctor_4241_; lean_object* v___y_4245_; uint8_t v_ctor_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; uint8_t v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; uint8_t v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4267_; lean_object* v___y_4268_; uint8_t v_valueInconsistency_4269_; uint8_t v_trueEqFalse_4270_; lean_object* v___y_4271_; lean_object* v___y_4272_; lean_object* v___y_4273_; lean_object* v___y_4274_; lean_object* v___y_4275_; lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4286_; lean_object* v___y_4287_; lean_object* v___y_4288_; lean_object* v___y_4289_; lean_object* v___y_4290_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___y_4293_; lean_object* v___y_4294_; lean_object* v___y_4295_; lean_object* v___y_4296_; lean_object* v___y_4297_; uint8_t v___y_4298_; lean_object* v___y_4301_; lean_object* v___y_4302_; lean_object* v___y_4303_; lean_object* v___y_4304_; lean_object* v___y_4305_; lean_object* v___y_4306_; lean_object* v___y_4307_; lean_object* v___y_4308_; lean_object* v___y_4309_; lean_object* v___y_4310_; lean_object* v___y_4311_; lean_object* v___y_4312_; lean_object* v___y_4313_; lean_object* v___y_4314_; lean_object* v___y_4328_; lean_object* v___y_4329_; lean_object* v___y_4330_; lean_object* v___y_4331_; lean_object* v___y_4332_; lean_object* v___y_4333_; lean_object* v___y_4334_; lean_object* v___y_4335_; lean_object* v___y_4336_; lean_object* v___y_4337_; 
v_toCold_4077_ = lean_ctor_get(v_a_4060_, 0);
v_options_4078_ = lean_ctor_get(v_toCold_4077_, 2);
v_inheritedTraceOptions_4079_ = lean_ctor_get(v_toCold_4077_, 11);
v_hasTrace_4080_ = lean_ctor_get_uint8(v_options_4078_, sizeof(void*)*1);
if (v_hasTrace_4080_ == 0)
{
v___y_4328_ = v_a_4052_;
v___y_4329_ = v_a_4053_;
v___y_4330_ = v_a_4054_;
v___y_4331_ = v_a_4055_;
v___y_4332_ = v_a_4056_;
v___y_4333_ = v_a_4057_;
v___y_4334_ = v_a_4058_;
v___y_4335_ = v_a_4059_;
v___y_4336_ = v_a_4060_;
v___y_4337_ = v_a_4061_;
goto v___jp_4327_;
}
else
{
lean_object* v___x_4371_; lean_object* v_____do__lift_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4382_; lean_object* v___y_4383_; lean_object* v___x_4386_; uint8_t v___x_4387_; 
v___x_4371_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__3));
v___x_4386_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__4);
v___x_4387_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4079_, v_options_4078_, v___x_4386_);
if (v___x_4387_ == 0)
{
v___y_4328_ = v_a_4052_;
v___y_4329_ = v_a_4053_;
v___y_4330_ = v_a_4054_;
v___y_4331_ = v_a_4055_;
v___y_4332_ = v_a_4056_;
v___y_4333_ = v_a_4057_;
v___y_4334_ = v_a_4058_;
v___y_4335_ = v_a_4059_;
v___y_4336_ = v_a_4060_;
v___y_4337_ = v_a_4061_;
goto v___jp_4327_;
}
else
{
lean_object* v___x_4388_; 
v___x_4388_ = l_Lean_Meta_Grind_updateLastTag(v_a_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4388_) == 0)
{
lean_dec_ref_known(v___x_4388_, 1);
if (v_isHEq_4051_ == 0)
{
lean_object* v___x_4389_; 
lean_inc_ref(v_rhs_4049_);
lean_inc_ref(v_lhs_4048_);
v___x_4389_ = l_Lean_Meta_mkEq(v_lhs_4048_, v_rhs_4049_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4389_) == 0)
{
lean_object* v_a_4390_; 
v_a_4390_ = lean_ctor_get(v___x_4389_, 0);
lean_inc(v_a_4390_);
lean_dec_ref_known(v___x_4389_, 1);
v_____do__lift_4373_ = v_a_4390_;
v___y_4374_ = v_a_4052_;
v___y_4375_ = v_a_4053_;
v___y_4376_ = v_a_4054_;
v___y_4377_ = v_a_4055_;
v___y_4378_ = v_a_4056_;
v___y_4379_ = v_a_4057_;
v___y_4380_ = v_a_4058_;
v___y_4381_ = v_a_4059_;
v___y_4382_ = v_a_4060_;
v___y_4383_ = v_a_4061_;
goto v___jp_4372_;
}
else
{
lean_object* v_a_4391_; lean_object* v___x_4393_; uint8_t v_isShared_4394_; uint8_t v_isSharedCheck_4398_; 
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
v_a_4391_ = lean_ctor_get(v___x_4389_, 0);
v_isSharedCheck_4398_ = !lean_is_exclusive(v___x_4389_);
if (v_isSharedCheck_4398_ == 0)
{
v___x_4393_ = v___x_4389_;
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
else
{
lean_inc(v_a_4391_);
lean_dec(v___x_4389_);
v___x_4393_ = lean_box(0);
v_isShared_4394_ = v_isSharedCheck_4398_;
goto v_resetjp_4392_;
}
v_resetjp_4392_:
{
lean_object* v___x_4396_; 
if (v_isShared_4394_ == 0)
{
v___x_4396_ = v___x_4393_;
goto v_reusejp_4395_;
}
else
{
lean_object* v_reuseFailAlloc_4397_; 
v_reuseFailAlloc_4397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4397_, 0, v_a_4391_);
v___x_4396_ = v_reuseFailAlloc_4397_;
goto v_reusejp_4395_;
}
v_reusejp_4395_:
{
return v___x_4396_;
}
}
}
}
else
{
lean_object* v___x_4399_; 
lean_inc_ref(v_rhs_4049_);
lean_inc_ref(v_lhs_4048_);
v___x_4399_ = l_Lean_Meta_mkHEq(v_lhs_4048_, v_rhs_4049_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4399_) == 0)
{
lean_object* v_a_4400_; 
v_a_4400_ = lean_ctor_get(v___x_4399_, 0);
lean_inc(v_a_4400_);
lean_dec_ref_known(v___x_4399_, 1);
v_____do__lift_4373_ = v_a_4400_;
v___y_4374_ = v_a_4052_;
v___y_4375_ = v_a_4053_;
v___y_4376_ = v_a_4054_;
v___y_4377_ = v_a_4055_;
v___y_4378_ = v_a_4056_;
v___y_4379_ = v_a_4057_;
v___y_4380_ = v_a_4058_;
v___y_4381_ = v_a_4059_;
v___y_4382_ = v_a_4060_;
v___y_4383_ = v_a_4061_;
goto v___jp_4372_;
}
else
{
lean_object* v_a_4401_; lean_object* v___x_4403_; uint8_t v_isShared_4404_; uint8_t v_isSharedCheck_4408_; 
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
v_a_4401_ = lean_ctor_get(v___x_4399_, 0);
v_isSharedCheck_4408_ = !lean_is_exclusive(v___x_4399_);
if (v_isSharedCheck_4408_ == 0)
{
v___x_4403_ = v___x_4399_;
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
else
{
lean_inc(v_a_4401_);
lean_dec(v___x_4399_);
v___x_4403_ = lean_box(0);
v_isShared_4404_ = v_isSharedCheck_4408_;
goto v_resetjp_4402_;
}
v_resetjp_4402_:
{
lean_object* v___x_4406_; 
if (v_isShared_4404_ == 0)
{
v___x_4406_ = v___x_4403_;
goto v_reusejp_4405_;
}
else
{
lean_object* v_reuseFailAlloc_4407_; 
v_reuseFailAlloc_4407_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4407_, 0, v_a_4401_);
v___x_4406_ = v_reuseFailAlloc_4407_;
goto v_reusejp_4405_;
}
v_reusejp_4405_:
{
return v___x_4406_;
}
}
}
}
}
else
{
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
return v___x_4388_;
}
}
v___jp_4372_:
{
lean_object* v___x_4384_; lean_object* v___x_4385_; 
v___x_4384_ = l_Lean_MessageData_ofExpr(v_____do__lift_4373_);
v___x_4385_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4371_, v___x_4384_, v___y_4380_, v___y_4381_, v___y_4382_, v___y_4383_);
if (lean_obj_tag(v___x_4385_) == 0)
{
lean_dec_ref_known(v___x_4385_, 1);
v___y_4328_ = v___y_4374_;
v___y_4329_ = v___y_4375_;
v___y_4330_ = v___y_4376_;
v___y_4331_ = v___y_4377_;
v___y_4332_ = v___y_4378_;
v___y_4333_ = v___y_4379_;
v___y_4334_ = v___y_4380_;
v___y_4335_ = v___y_4381_;
v___y_4336_ = v___y_4382_;
v___y_4337_ = v___y_4383_;
goto v___jp_4327_;
}
else
{
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
return v___x_4385_;
}
}
}
v___jp_4081_:
{
lean_object* v_toCold_4092_; lean_object* v_options_4093_; uint8_t v_hasTrace_4094_; 
v_toCold_4092_ = lean_ctor_get(v___y_4090_, 0);
v_options_4093_ = lean_ctor_get(v_toCold_4092_, 2);
v_hasTrace_4094_ = lean_ctor_get_uint8(v_options_4093_, sizeof(void*)*1);
if (v_hasTrace_4094_ == 0)
{
lean_object* v___x_4095_; 
v___x_4095_ = l_Lean_Meta_Grind_checkInvariants(v___x_4076_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
return v___x_4095_;
}
else
{
lean_object* v_inheritedTraceOptions_4096_; lean_object* v___x_4097_; lean_object* v___x_4098_; uint8_t v___x_4099_; 
v_inheritedTraceOptions_4096_ = lean_ctor_get(v_toCold_4092_, 11);
v___x_4097_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
v___x_4098_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_4099_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4096_, v_options_4093_, v___x_4098_);
if (v___x_4099_ == 0)
{
lean_object* v___x_4100_; 
v___x_4100_ = l_Lean_Meta_Grind_checkInvariants(v___x_4076_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
return v___x_4100_;
}
else
{
lean_object* v___x_4101_; 
v___x_4101_ = l_Lean_Meta_Grind_updateLastTag(v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
if (lean_obj_tag(v___x_4101_) == 0)
{
lean_object* v___x_4102_; lean_object* v___x_4103_; 
lean_dec_ref_known(v___x_4101_, 1);
v___x_4102_ = lean_st_ref_get(v___y_4082_);
v___x_4103_ = l_Lean_Meta_Grind_Goal_ppState(v___x_4102_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
lean_dec(v___x_4102_);
if (lean_obj_tag(v___x_4103_) == 0)
{
lean_object* v_a_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; 
v_a_4104_ = lean_ctor_get(v___x_4103_, 0);
lean_inc(v_a_4104_);
lean_dec_ref_known(v___x_4103_, 1);
v___x_4105_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__1);
v___x_4106_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4106_, 0, v___x_4105_);
lean_ctor_set(v___x_4106_, 1, v_a_4104_);
v___x_4107_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4097_, v___x_4106_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
if (lean_obj_tag(v___x_4107_) == 0)
{
lean_object* v___x_4108_; 
lean_dec_ref_known(v___x_4107_, 1);
v___x_4108_ = l_Lean_Meta_Grind_checkInvariants(v___x_4076_, v___y_4082_, v___y_4083_, v___y_4084_, v___y_4085_, v___y_4086_, v___y_4087_, v___y_4088_, v___y_4089_, v___y_4090_, v___y_4091_);
return v___x_4108_;
}
else
{
return v___x_4107_;
}
}
else
{
lean_object* v_a_4109_; lean_object* v___x_4111_; uint8_t v_isShared_4112_; uint8_t v_isSharedCheck_4116_; 
v_a_4109_ = lean_ctor_get(v___x_4103_, 0);
v_isSharedCheck_4116_ = !lean_is_exclusive(v___x_4103_);
if (v_isSharedCheck_4116_ == 0)
{
v___x_4111_ = v___x_4103_;
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
else
{
lean_inc(v_a_4109_);
lean_dec(v___x_4103_);
v___x_4111_ = lean_box(0);
v_isShared_4112_ = v_isSharedCheck_4116_;
goto v_resetjp_4110_;
}
v_resetjp_4110_:
{
lean_object* v___x_4114_; 
if (v_isShared_4112_ == 0)
{
v___x_4114_ = v___x_4111_;
goto v_reusejp_4113_;
}
else
{
lean_object* v_reuseFailAlloc_4115_; 
v_reuseFailAlloc_4115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4115_, 0, v_a_4109_);
v___x_4114_ = v_reuseFailAlloc_4115_;
goto v_reusejp_4113_;
}
v_reusejp_4113_:
{
return v___x_4114_;
}
}
}
}
else
{
return v___x_4101_;
}
}
}
}
v___jp_4117_:
{
lean_object* v___x_4131_; 
v___x_4131_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_4121_);
if (lean_obj_tag(v___x_4131_) == 0)
{
lean_object* v_a_4132_; uint8_t v___x_4133_; 
v_a_4132_ = lean_ctor_get(v___x_4131_, 0);
lean_inc(v_a_4132_);
lean_dec_ref_known(v___x_4131_, 1);
v___x_4133_ = lean_unbox(v_a_4132_);
lean_dec(v_a_4132_);
if (v___x_4133_ == 0)
{
if (v___y_4119_ == 0)
{
lean_dec_ref(v___y_4120_);
lean_dec_ref(v___y_4118_);
v___y_4082_ = v___y_4121_;
v___y_4083_ = v___y_4122_;
v___y_4084_ = v___y_4123_;
v___y_4085_ = v___y_4124_;
v___y_4086_ = v___y_4125_;
v___y_4087_ = v___y_4126_;
v___y_4088_ = v___y_4127_;
v___y_4089_ = v___y_4128_;
v___y_4090_ = v___y_4129_;
v___y_4091_ = v___y_4130_;
goto v___jp_4081_;
}
else
{
lean_object* v_self_4134_; lean_object* v_self_4135_; lean_object* v___x_4136_; 
v_self_4134_ = lean_ctor_get(v___y_4118_, 0);
lean_inc_ref(v_self_4134_);
lean_dec_ref(v___y_4118_);
v_self_4135_ = lean_ctor_get(v___y_4120_, 0);
lean_inc_ref(v_self_4135_);
lean_dec_ref(v___y_4120_);
v___x_4136_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithValuesEq(v_self_4134_, v_self_4135_, v___y_4121_, v___y_4122_, v___y_4123_, v___y_4124_, v___y_4125_, v___y_4126_, v___y_4127_, v___y_4128_, v___y_4129_, v___y_4130_);
if (lean_obj_tag(v___x_4136_) == 0)
{
lean_dec_ref_known(v___x_4136_, 1);
v___y_4082_ = v___y_4121_;
v___y_4083_ = v___y_4122_;
v___y_4084_ = v___y_4123_;
v___y_4085_ = v___y_4124_;
v___y_4086_ = v___y_4125_;
v___y_4087_ = v___y_4126_;
v___y_4088_ = v___y_4127_;
v___y_4089_ = v___y_4128_;
v___y_4090_ = v___y_4129_;
v___y_4091_ = v___y_4130_;
goto v___jp_4081_;
}
else
{
return v___x_4136_;
}
}
}
else
{
lean_dec_ref(v___y_4120_);
lean_dec_ref(v___y_4118_);
v___y_4082_ = v___y_4121_;
v___y_4083_ = v___y_4122_;
v___y_4084_ = v___y_4123_;
v___y_4085_ = v___y_4124_;
v___y_4086_ = v___y_4125_;
v___y_4087_ = v___y_4126_;
v___y_4088_ = v___y_4127_;
v___y_4089_ = v___y_4128_;
v___y_4090_ = v___y_4129_;
v___y_4091_ = v___y_4130_;
goto v___jp_4081_;
}
}
else
{
lean_object* v_a_4137_; lean_object* v___x_4139_; uint8_t v_isShared_4140_; uint8_t v_isSharedCheck_4144_; 
lean_dec_ref(v___y_4120_);
lean_dec_ref(v___y_4118_);
v_a_4137_ = lean_ctor_get(v___x_4131_, 0);
v_isSharedCheck_4144_ = !lean_is_exclusive(v___x_4131_);
if (v_isSharedCheck_4144_ == 0)
{
v___x_4139_ = v___x_4131_;
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
else
{
lean_inc(v_a_4137_);
lean_dec(v___x_4131_);
v___x_4139_ = lean_box(0);
v_isShared_4140_ = v_isSharedCheck_4144_;
goto v_resetjp_4138_;
}
v_resetjp_4138_:
{
lean_object* v___x_4142_; 
if (v_isShared_4140_ == 0)
{
v___x_4142_ = v___x_4139_;
goto v_reusejp_4141_;
}
else
{
lean_object* v_reuseFailAlloc_4143_; 
v_reuseFailAlloc_4143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4143_, 0, v_a_4137_);
v___x_4142_ = v_reuseFailAlloc_4143_;
goto v_reusejp_4141_;
}
v_reusejp_4141_:
{
return v___x_4142_;
}
}
}
}
v___jp_4145_:
{
lean_object* v___x_4159_; 
v___x_4159_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_4149_);
if (lean_obj_tag(v___x_4159_) == 0)
{
lean_object* v_a_4160_; uint8_t v___x_4161_; 
v_a_4160_ = lean_ctor_get(v___x_4159_, 0);
lean_inc(v_a_4160_);
lean_dec_ref_known(v___x_4159_, 1);
v___x_4161_ = lean_unbox(v_a_4160_);
lean_dec(v_a_4160_);
if (v___x_4161_ == 0)
{
uint8_t v_ctor_4162_; 
v_ctor_4162_ = lean_ctor_get_uint8(v___y_4146_, sizeof(void*)*12 + 2);
if (v_ctor_4162_ == 0)
{
v___y_4118_ = v___y_4146_;
v___y_4119_ = v___y_4147_;
v___y_4120_ = v___y_4148_;
v___y_4121_ = v___y_4149_;
v___y_4122_ = v___y_4150_;
v___y_4123_ = v___y_4151_;
v___y_4124_ = v___y_4152_;
v___y_4125_ = v___y_4153_;
v___y_4126_ = v___y_4154_;
v___y_4127_ = v___y_4155_;
v___y_4128_ = v___y_4156_;
v___y_4129_ = v___y_4157_;
v___y_4130_ = v___y_4158_;
goto v___jp_4117_;
}
else
{
uint8_t v_ctor_4163_; 
v_ctor_4163_ = lean_ctor_get_uint8(v___y_4148_, sizeof(void*)*12 + 2);
if (v_ctor_4163_ == 0)
{
v___y_4118_ = v___y_4146_;
v___y_4119_ = v___y_4147_;
v___y_4120_ = v___y_4148_;
v___y_4121_ = v___y_4149_;
v___y_4122_ = v___y_4150_;
v___y_4123_ = v___y_4151_;
v___y_4124_ = v___y_4152_;
v___y_4125_ = v___y_4153_;
v___y_4126_ = v___y_4154_;
v___y_4127_ = v___y_4155_;
v___y_4128_ = v___y_4156_;
v___y_4129_ = v___y_4157_;
v___y_4130_ = v___y_4158_;
goto v___jp_4117_;
}
else
{
lean_object* v_self_4164_; lean_object* v_self_4165_; lean_object* v___x_4166_; 
v_self_4164_ = lean_ctor_get(v___y_4146_, 0);
v_self_4165_ = lean_ctor_get(v___y_4148_, 0);
lean_inc_ref(v_self_4165_);
lean_inc_ref(v_self_4164_);
v___x_4166_ = l_Lean_Meta_Grind_propagateCtor(v_self_4164_, v_self_4165_, v___y_4149_, v___y_4150_, v___y_4151_, v___y_4152_, v___y_4153_, v___y_4154_, v___y_4155_, v___y_4156_, v___y_4157_, v___y_4158_);
if (lean_obj_tag(v___x_4166_) == 0)
{
lean_dec_ref_known(v___x_4166_, 1);
v___y_4118_ = v___y_4146_;
v___y_4119_ = v___y_4147_;
v___y_4120_ = v___y_4148_;
v___y_4121_ = v___y_4149_;
v___y_4122_ = v___y_4150_;
v___y_4123_ = v___y_4151_;
v___y_4124_ = v___y_4152_;
v___y_4125_ = v___y_4153_;
v___y_4126_ = v___y_4154_;
v___y_4127_ = v___y_4155_;
v___y_4128_ = v___y_4156_;
v___y_4129_ = v___y_4157_;
v___y_4130_ = v___y_4158_;
goto v___jp_4117_;
}
else
{
lean_dec_ref(v___y_4148_);
lean_dec_ref(v___y_4146_);
return v___x_4166_;
}
}
}
}
else
{
v___y_4118_ = v___y_4146_;
v___y_4119_ = v___y_4147_;
v___y_4120_ = v___y_4148_;
v___y_4121_ = v___y_4149_;
v___y_4122_ = v___y_4150_;
v___y_4123_ = v___y_4151_;
v___y_4124_ = v___y_4152_;
v___y_4125_ = v___y_4153_;
v___y_4126_ = v___y_4154_;
v___y_4127_ = v___y_4155_;
v___y_4128_ = v___y_4156_;
v___y_4129_ = v___y_4157_;
v___y_4130_ = v___y_4158_;
goto v___jp_4117_;
}
}
else
{
lean_object* v_a_4167_; lean_object* v___x_4169_; uint8_t v_isShared_4170_; uint8_t v_isSharedCheck_4174_; 
lean_dec_ref(v___y_4148_);
lean_dec_ref(v___y_4146_);
v_a_4167_ = lean_ctor_get(v___x_4159_, 0);
v_isSharedCheck_4174_ = !lean_is_exclusive(v___x_4159_);
if (v_isSharedCheck_4174_ == 0)
{
v___x_4169_ = v___x_4159_;
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
else
{
lean_inc(v_a_4167_);
lean_dec(v___x_4159_);
v___x_4169_ = lean_box(0);
v_isShared_4170_ = v_isSharedCheck_4174_;
goto v_resetjp_4168_;
}
v_resetjp_4168_:
{
lean_object* v___x_4172_; 
if (v_isShared_4170_ == 0)
{
v___x_4172_ = v___x_4169_;
goto v_reusejp_4171_;
}
else
{
lean_object* v_reuseFailAlloc_4173_; 
v_reuseFailAlloc_4173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4173_, 0, v_a_4167_);
v___x_4172_ = v_reuseFailAlloc_4173_;
goto v_reusejp_4171_;
}
v_reusejp_4171_:
{
return v___x_4172_;
}
}
}
}
v___jp_4175_:
{
if (v___y_4178_ == 0)
{
v___y_4146_ = v___y_4176_;
v___y_4147_ = v___y_4177_;
v___y_4148_ = v___y_4179_;
v___y_4149_ = v___y_4180_;
v___y_4150_ = v___y_4181_;
v___y_4151_ = v___y_4182_;
v___y_4152_ = v___y_4183_;
v___y_4153_ = v___y_4184_;
v___y_4154_ = v___y_4185_;
v___y_4155_ = v___y_4186_;
v___y_4156_ = v___y_4187_;
v___y_4157_ = v___y_4188_;
v___y_4158_ = v___y_4189_;
goto v___jp_4145_;
}
else
{
lean_object* v___x_4190_; 
v___x_4190_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_closeGoalWithTrueEqFalse(v___y_4180_, v___y_4181_, v___y_4182_, v___y_4183_, v___y_4184_, v___y_4185_, v___y_4186_, v___y_4187_, v___y_4188_, v___y_4189_);
if (lean_obj_tag(v___x_4190_) == 0)
{
lean_dec_ref_known(v___x_4190_, 1);
v___y_4146_ = v___y_4176_;
v___y_4147_ = v___y_4177_;
v___y_4148_ = v___y_4179_;
v___y_4149_ = v___y_4180_;
v___y_4150_ = v___y_4181_;
v___y_4151_ = v___y_4182_;
v___y_4152_ = v___y_4183_;
v___y_4153_ = v___y_4184_;
v___y_4154_ = v___y_4185_;
v___y_4155_ = v___y_4186_;
v___y_4156_ = v___y_4187_;
v___y_4157_ = v___y_4188_;
v___y_4158_ = v___y_4189_;
goto v___jp_4145_;
}
else
{
lean_dec_ref(v___y_4179_);
lean_dec_ref(v___y_4176_);
return v___x_4190_;
}
}
}
v___jp_4191_:
{
lean_object* v___x_4207_; 
lean_inc_ref(v___y_4192_);
lean_inc_ref(v___y_4204_);
v___x_4207_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_4050_, v_isHEq_4051_, v_rhs_4049_, v_lhs_4048_, v_a_4071_, v_a_4068_, v___y_4204_, v___y_4192_, v___y_4206_, v___y_4199_, v___y_4200_, v___y_4197_, v___y_4201_, v___y_4203_, v___y_4198_, v___y_4205_, v___y_4193_, v___y_4196_, v___y_4194_);
if (lean_obj_tag(v___x_4207_) == 0)
{
lean_dec_ref_known(v___x_4207_, 1);
v___y_4176_ = v___y_4192_;
v___y_4177_ = v___y_4195_;
v___y_4178_ = v___y_4202_;
v___y_4179_ = v___y_4204_;
v___y_4180_ = v___y_4199_;
v___y_4181_ = v___y_4200_;
v___y_4182_ = v___y_4197_;
v___y_4183_ = v___y_4201_;
v___y_4184_ = v___y_4203_;
v___y_4185_ = v___y_4198_;
v___y_4186_ = v___y_4205_;
v___y_4187_ = v___y_4193_;
v___y_4188_ = v___y_4196_;
v___y_4189_ = v___y_4194_;
goto v___jp_4175_;
}
else
{
lean_dec_ref(v___y_4204_);
lean_dec_ref(v___y_4192_);
return v___x_4207_;
}
}
v___jp_4208_:
{
lean_object* v___x_4223_; 
lean_inc_ref(v___y_4221_);
lean_inc_ref(v___y_4209_);
v___x_4223_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go(v_proof_4050_, v_isHEq_4051_, v_lhs_4048_, v_rhs_4049_, v_a_4068_, v_a_4071_, v___y_4209_, v___y_4221_, v___x_4076_, v___y_4216_, v___y_4217_, v___y_4214_, v___y_4218_, v___y_4220_, v___y_4215_, v___y_4222_, v___y_4210_, v___y_4213_, v___y_4211_);
if (lean_obj_tag(v___x_4223_) == 0)
{
lean_dec_ref_known(v___x_4223_, 1);
v___y_4176_ = v___y_4209_;
v___y_4177_ = v___y_4212_;
v___y_4178_ = v___y_4219_;
v___y_4179_ = v___y_4221_;
v___y_4180_ = v___y_4216_;
v___y_4181_ = v___y_4217_;
v___y_4182_ = v___y_4214_;
v___y_4183_ = v___y_4218_;
v___y_4184_ = v___y_4220_;
v___y_4185_ = v___y_4215_;
v___y_4186_ = v___y_4222_;
v___y_4187_ = v___y_4210_;
v___y_4188_ = v___y_4213_;
v___y_4189_ = v___y_4211_;
goto v___jp_4175_;
}
else
{
lean_dec_ref(v___y_4221_);
lean_dec_ref(v___y_4209_);
return v___x_4223_;
}
}
v___jp_4224_:
{
lean_object* v_size_4242_; uint8_t v___x_4243_; 
v_size_4242_ = lean_ctor_get(v___y_4225_, 6);
v___x_4243_ = lean_nat_dec_lt(v_size_4239_, v_size_4242_);
lean_dec(v_size_4239_);
if (v___x_4243_ == 0)
{
v___y_4209_ = v___y_4225_;
v___y_4210_ = v___y_4226_;
v___y_4211_ = v___y_4227_;
v___y_4212_ = v___y_4228_;
v___y_4213_ = v___y_4229_;
v___y_4214_ = v___y_4230_;
v___y_4215_ = v___y_4231_;
v___y_4216_ = v___y_4232_;
v___y_4217_ = v___y_4233_;
v___y_4218_ = v___y_4234_;
v___y_4219_ = v___y_4236_;
v___y_4220_ = v___y_4235_;
v___y_4221_ = v___y_4238_;
v___y_4222_ = v___y_4237_;
goto v___jp_4208_;
}
else
{
if (v_interpreted_4240_ == 0)
{
if (v_ctor_4241_ == 0)
{
v___y_4192_ = v___y_4225_;
v___y_4193_ = v___y_4226_;
v___y_4194_ = v___y_4227_;
v___y_4195_ = v___y_4228_;
v___y_4196_ = v___y_4229_;
v___y_4197_ = v___y_4230_;
v___y_4198_ = v___y_4231_;
v___y_4199_ = v___y_4232_;
v___y_4200_ = v___y_4233_;
v___y_4201_ = v___y_4234_;
v___y_4202_ = v___y_4236_;
v___y_4203_ = v___y_4235_;
v___y_4204_ = v___y_4238_;
v___y_4205_ = v___y_4237_;
v___y_4206_ = v___x_4243_;
goto v___jp_4191_;
}
else
{
v___y_4209_ = v___y_4225_;
v___y_4210_ = v___y_4226_;
v___y_4211_ = v___y_4227_;
v___y_4212_ = v___y_4228_;
v___y_4213_ = v___y_4229_;
v___y_4214_ = v___y_4230_;
v___y_4215_ = v___y_4231_;
v___y_4216_ = v___y_4232_;
v___y_4217_ = v___y_4233_;
v___y_4218_ = v___y_4234_;
v___y_4219_ = v___y_4236_;
v___y_4220_ = v___y_4235_;
v___y_4221_ = v___y_4238_;
v___y_4222_ = v___y_4237_;
goto v___jp_4208_;
}
}
else
{
v___y_4209_ = v___y_4225_;
v___y_4210_ = v___y_4226_;
v___y_4211_ = v___y_4227_;
v___y_4212_ = v___y_4228_;
v___y_4213_ = v___y_4229_;
v___y_4214_ = v___y_4230_;
v___y_4215_ = v___y_4231_;
v___y_4216_ = v___y_4232_;
v___y_4217_ = v___y_4233_;
v___y_4218_ = v___y_4234_;
v___y_4219_ = v___y_4236_;
v___y_4220_ = v___y_4235_;
v___y_4221_ = v___y_4238_;
v___y_4222_ = v___y_4237_;
goto v___jp_4208_;
}
}
}
v___jp_4244_:
{
if (v_ctor_4246_ == 0)
{
lean_object* v_size_4260_; uint8_t v_interpreted_4261_; uint8_t v_ctor_4262_; 
v_size_4260_ = lean_ctor_get(v___y_4258_, 6);
lean_inc(v_size_4260_);
v_interpreted_4261_ = lean_ctor_get_uint8(v___y_4258_, sizeof(void*)*12 + 1);
v_ctor_4262_ = lean_ctor_get_uint8(v___y_4258_, sizeof(void*)*12 + 2);
v___y_4225_ = v___y_4245_;
v___y_4226_ = v___y_4247_;
v___y_4227_ = v___y_4248_;
v___y_4228_ = v___y_4249_;
v___y_4229_ = v___y_4250_;
v___y_4230_ = v___y_4251_;
v___y_4231_ = v___y_4252_;
v___y_4232_ = v___y_4253_;
v___y_4233_ = v___y_4254_;
v___y_4234_ = v___y_4255_;
v___y_4235_ = v___y_4256_;
v___y_4236_ = v___y_4257_;
v___y_4237_ = v___y_4259_;
v___y_4238_ = v___y_4258_;
v_size_4239_ = v_size_4260_;
v_interpreted_4240_ = v_interpreted_4261_;
v_ctor_4241_ = v_ctor_4262_;
goto v___jp_4224_;
}
else
{
uint8_t v_ctor_4263_; 
v_ctor_4263_ = lean_ctor_get_uint8(v___y_4258_, sizeof(void*)*12 + 2);
if (v_ctor_4263_ == 0)
{
v___y_4192_ = v___y_4245_;
v___y_4193_ = v___y_4247_;
v___y_4194_ = v___y_4248_;
v___y_4195_ = v___y_4249_;
v___y_4196_ = v___y_4250_;
v___y_4197_ = v___y_4251_;
v___y_4198_ = v___y_4252_;
v___y_4199_ = v___y_4253_;
v___y_4200_ = v___y_4254_;
v___y_4201_ = v___y_4255_;
v___y_4202_ = v___y_4257_;
v___y_4203_ = v___y_4256_;
v___y_4204_ = v___y_4258_;
v___y_4205_ = v___y_4259_;
v___y_4206_ = v_ctor_4246_;
goto v___jp_4191_;
}
else
{
lean_object* v_size_4264_; uint8_t v_interpreted_4265_; 
v_size_4264_ = lean_ctor_get(v___y_4258_, 6);
lean_inc(v_size_4264_);
v_interpreted_4265_ = lean_ctor_get_uint8(v___y_4258_, sizeof(void*)*12 + 1);
v___y_4225_ = v___y_4245_;
v___y_4226_ = v___y_4247_;
v___y_4227_ = v___y_4248_;
v___y_4228_ = v___y_4249_;
v___y_4229_ = v___y_4250_;
v___y_4230_ = v___y_4251_;
v___y_4231_ = v___y_4252_;
v___y_4232_ = v___y_4253_;
v___y_4233_ = v___y_4254_;
v___y_4234_ = v___y_4255_;
v___y_4235_ = v___y_4256_;
v___y_4236_ = v___y_4257_;
v___y_4237_ = v___y_4259_;
v___y_4238_ = v___y_4258_;
v_size_4239_ = v_size_4264_;
v_interpreted_4240_ = v_interpreted_4265_;
v_ctor_4241_ = v_ctor_4263_;
goto v___jp_4224_;
}
}
}
v___jp_4266_:
{
uint8_t v_interpreted_4281_; 
v_interpreted_4281_ = lean_ctor_get_uint8(v___y_4267_, sizeof(void*)*12 + 1);
if (v_interpreted_4281_ == 0)
{
uint8_t v_ctor_4282_; 
v_ctor_4282_ = lean_ctor_get_uint8(v___y_4267_, sizeof(void*)*12 + 2);
v___y_4245_ = v___y_4267_;
v_ctor_4246_ = v_ctor_4282_;
v___y_4247_ = v___y_4278_;
v___y_4248_ = v___y_4280_;
v___y_4249_ = v_valueInconsistency_4269_;
v___y_4250_ = v___y_4279_;
v___y_4251_ = v___y_4273_;
v___y_4252_ = v___y_4276_;
v___y_4253_ = v___y_4271_;
v___y_4254_ = v___y_4272_;
v___y_4255_ = v___y_4274_;
v___y_4256_ = v___y_4275_;
v___y_4257_ = v_trueEqFalse_4270_;
v___y_4258_ = v___y_4268_;
v___y_4259_ = v___y_4277_;
goto v___jp_4244_;
}
else
{
uint8_t v_interpreted_4283_; 
v_interpreted_4283_ = lean_ctor_get_uint8(v___y_4268_, sizeof(void*)*12 + 1);
if (v_interpreted_4283_ == 0)
{
v___y_4192_ = v___y_4267_;
v___y_4193_ = v___y_4278_;
v___y_4194_ = v___y_4280_;
v___y_4195_ = v_valueInconsistency_4269_;
v___y_4196_ = v___y_4279_;
v___y_4197_ = v___y_4273_;
v___y_4198_ = v___y_4276_;
v___y_4199_ = v___y_4271_;
v___y_4200_ = v___y_4272_;
v___y_4201_ = v___y_4274_;
v___y_4202_ = v_trueEqFalse_4270_;
v___y_4203_ = v___y_4275_;
v___y_4204_ = v___y_4268_;
v___y_4205_ = v___y_4277_;
v___y_4206_ = v_interpreted_4281_;
goto v___jp_4191_;
}
else
{
uint8_t v_ctor_4284_; 
v_ctor_4284_ = lean_ctor_get_uint8(v___y_4267_, sizeof(void*)*12 + 2);
v___y_4245_ = v___y_4267_;
v_ctor_4246_ = v_ctor_4284_;
v___y_4247_ = v___y_4278_;
v___y_4248_ = v___y_4280_;
v___y_4249_ = v_valueInconsistency_4269_;
v___y_4250_ = v___y_4279_;
v___y_4251_ = v___y_4273_;
v___y_4252_ = v___y_4276_;
v___y_4253_ = v___y_4271_;
v___y_4254_ = v___y_4272_;
v___y_4255_ = v___y_4274_;
v___y_4256_ = v___y_4275_;
v___y_4257_ = v_trueEqFalse_4270_;
v___y_4258_ = v___y_4268_;
v___y_4259_ = v___y_4277_;
goto v___jp_4244_;
}
}
}
v___jp_4285_:
{
lean_object* v___x_4299_; 
v___x_4299_ = l_Lean_Meta_Grind_markAsInconsistent___redArg(v___y_4291_, v___y_4287_, v___y_4296_, v___y_4290_, v___y_4289_);
if (lean_obj_tag(v___x_4299_) == 0)
{
lean_dec_ref_known(v___x_4299_, 1);
v___y_4267_ = v___y_4288_;
v___y_4268_ = v___y_4297_;
v_valueInconsistency_4269_ = v___x_4076_;
v_trueEqFalse_4270_ = v___y_4298_;
v___y_4271_ = v___y_4291_;
v___y_4272_ = v___y_4293_;
v___y_4273_ = v___y_4292_;
v___y_4274_ = v___y_4294_;
v___y_4275_ = v___y_4295_;
v___y_4276_ = v___y_4286_;
v___y_4277_ = v___y_4287_;
v___y_4278_ = v___y_4296_;
v___y_4279_ = v___y_4290_;
v___y_4280_ = v___y_4289_;
goto v___jp_4266_;
}
else
{
lean_dec_ref(v___y_4297_);
lean_dec_ref(v___y_4288_);
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
return v___x_4299_;
}
}
v___jp_4300_:
{
lean_object* v___x_4315_; 
v___x_4315_ = l_Lean_Meta_Grind_hasSameType(v___y_4308_, v___y_4302_, v___y_4303_, v___y_4313_, v___y_4306_, v___y_4305_);
if (lean_obj_tag(v___x_4315_) == 0)
{
lean_object* v_a_4316_; uint8_t v___x_4317_; 
v_a_4316_ = lean_ctor_get(v___x_4315_, 0);
lean_inc(v_a_4316_);
lean_dec_ref_known(v___x_4315_, 1);
v___x_4317_ = lean_unbox(v_a_4316_);
if (v___x_4317_ == 0)
{
lean_dec(v_a_4316_);
v___y_4267_ = v___y_4304_;
v___y_4268_ = v___y_4314_;
v_valueInconsistency_4269_ = v___x_4076_;
v_trueEqFalse_4270_ = v___x_4076_;
v___y_4271_ = v___y_4307_;
v___y_4272_ = v___y_4310_;
v___y_4273_ = v___y_4309_;
v___y_4274_ = v___y_4311_;
v___y_4275_ = v___y_4312_;
v___y_4276_ = v___y_4301_;
v___y_4277_ = v___y_4303_;
v___y_4278_ = v___y_4313_;
v___y_4279_ = v___y_4306_;
v___y_4280_ = v___y_4305_;
goto v___jp_4266_;
}
else
{
uint8_t v___x_4318_; 
v___x_4318_ = lean_unbox(v_a_4316_);
lean_dec(v_a_4316_);
v___y_4267_ = v___y_4304_;
v___y_4268_ = v___y_4314_;
v_valueInconsistency_4269_ = v___x_4318_;
v_trueEqFalse_4270_ = v___x_4076_;
v___y_4271_ = v___y_4307_;
v___y_4272_ = v___y_4310_;
v___y_4273_ = v___y_4309_;
v___y_4274_ = v___y_4311_;
v___y_4275_ = v___y_4312_;
v___y_4276_ = v___y_4301_;
v___y_4277_ = v___y_4303_;
v___y_4278_ = v___y_4313_;
v___y_4279_ = v___y_4306_;
v___y_4280_ = v___y_4305_;
goto v___jp_4266_;
}
}
else
{
lean_object* v_a_4319_; lean_object* v___x_4321_; uint8_t v_isShared_4322_; uint8_t v_isSharedCheck_4326_; 
lean_dec_ref(v___y_4314_);
lean_dec_ref(v___y_4304_);
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
v_a_4319_ = lean_ctor_get(v___x_4315_, 0);
v_isSharedCheck_4326_ = !lean_is_exclusive(v___x_4315_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4321_ = v___x_4315_;
v_isShared_4322_ = v_isSharedCheck_4326_;
goto v_resetjp_4320_;
}
else
{
lean_inc(v_a_4319_);
lean_dec(v___x_4315_);
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
v___jp_4327_:
{
lean_object* v___x_4338_; lean_object* v___x_4339_; 
v___x_4338_ = lean_st_ref_get(v___y_4328_);
lean_inc_ref(v_root_4072_);
v___x_4339_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4338_, v_root_4072_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_);
lean_dec(v___x_4338_);
if (lean_obj_tag(v___x_4339_) == 0)
{
lean_object* v_a_4340_; lean_object* v___x_4341_; lean_object* v___x_4342_; 
v_a_4340_ = lean_ctor_get(v___x_4339_, 0);
lean_inc(v_a_4340_);
lean_dec_ref_known(v___x_4339_, 1);
v___x_4341_ = lean_st_ref_get(v___y_4328_);
lean_inc_ref(v_root_4073_);
v___x_4342_ = l_Lean_Meta_Grind_Goal_getENode(v___x_4341_, v_root_4073_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_);
lean_dec(v___x_4341_);
if (lean_obj_tag(v___x_4342_) == 0)
{
uint8_t v_interpreted_4343_; 
v_interpreted_4343_ = lean_ctor_get_uint8(v_a_4340_, sizeof(void*)*12 + 1);
if (v_interpreted_4343_ == 0)
{
lean_object* v_a_4344_; uint8_t v_ctor_4345_; 
v_a_4344_ = lean_ctor_get(v___x_4342_, 0);
lean_inc(v_a_4344_);
lean_dec_ref_known(v___x_4342_, 1);
v_ctor_4345_ = lean_ctor_get_uint8(v_a_4340_, sizeof(void*)*12 + 2);
v___y_4245_ = v_a_4340_;
v_ctor_4246_ = v_ctor_4345_;
v___y_4247_ = v___y_4335_;
v___y_4248_ = v___y_4337_;
v___y_4249_ = v___x_4076_;
v___y_4250_ = v___y_4336_;
v___y_4251_ = v___y_4330_;
v___y_4252_ = v___y_4333_;
v___y_4253_ = v___y_4328_;
v___y_4254_ = v___y_4329_;
v___y_4255_ = v___y_4331_;
v___y_4256_ = v___y_4332_;
v___y_4257_ = v___x_4076_;
v___y_4258_ = v_a_4344_;
v___y_4259_ = v___y_4334_;
goto v___jp_4244_;
}
else
{
lean_object* v_a_4346_; uint8_t v_interpreted_4347_; 
v_a_4346_ = lean_ctor_get(v___x_4342_, 0);
lean_inc(v_a_4346_);
lean_dec_ref_known(v___x_4342_, 1);
v_interpreted_4347_ = lean_ctor_get_uint8(v_a_4346_, sizeof(void*)*12 + 1);
if (v_interpreted_4347_ == 0)
{
v___y_4192_ = v_a_4340_;
v___y_4193_ = v___y_4335_;
v___y_4194_ = v___y_4337_;
v___y_4195_ = v___x_4076_;
v___y_4196_ = v___y_4336_;
v___y_4197_ = v___y_4330_;
v___y_4198_ = v___y_4333_;
v___y_4199_ = v___y_4328_;
v___y_4200_ = v___y_4329_;
v___y_4201_ = v___y_4331_;
v___y_4202_ = v___x_4076_;
v___y_4203_ = v___y_4332_;
v___y_4204_ = v_a_4346_;
v___y_4205_ = v___y_4334_;
v___y_4206_ = v_interpreted_4343_;
goto v___jp_4191_;
}
else
{
lean_object* v_self_4348_; uint8_t v_ctor_4349_; uint8_t v_heqProofs_4350_; lean_object* v_self_4351_; uint8_t v_heqProofs_4352_; uint8_t v___x_4353_; 
v_self_4348_ = lean_ctor_get(v_a_4340_, 0);
v_ctor_4349_ = lean_ctor_get_uint8(v_a_4340_, sizeof(void*)*12 + 2);
v_heqProofs_4350_ = lean_ctor_get_uint8(v_a_4340_, sizeof(void*)*12 + 4);
v_self_4351_ = lean_ctor_get(v_a_4346_, 0);
v_heqProofs_4352_ = lean_ctor_get_uint8(v_a_4346_, sizeof(void*)*12 + 4);
v___x_4353_ = l_Lean_Expr_isTrue(v_root_4072_);
if (v___x_4353_ == 0)
{
uint8_t v___x_4354_; 
v___x_4354_ = l_Lean_Expr_isTrue(v_root_4073_);
if (v___x_4354_ == 0)
{
if (v_isHEq_4051_ == 0)
{
if (v_heqProofs_4350_ == 0)
{
if (v_heqProofs_4352_ == 0)
{
v___y_4245_ = v_a_4340_;
v_ctor_4246_ = v_ctor_4349_;
v___y_4247_ = v___y_4335_;
v___y_4248_ = v___y_4337_;
v___y_4249_ = v_interpreted_4347_;
v___y_4250_ = v___y_4336_;
v___y_4251_ = v___y_4330_;
v___y_4252_ = v___y_4333_;
v___y_4253_ = v___y_4328_;
v___y_4254_ = v___y_4329_;
v___y_4255_ = v___y_4331_;
v___y_4256_ = v___y_4332_;
v___y_4257_ = v___x_4076_;
v___y_4258_ = v_a_4346_;
v___y_4259_ = v___y_4334_;
goto v___jp_4244_;
}
else
{
lean_inc_ref(v_self_4351_);
lean_inc_ref(v_self_4348_);
v___y_4301_ = v___y_4333_;
v___y_4302_ = v_self_4351_;
v___y_4303_ = v___y_4334_;
v___y_4304_ = v_a_4340_;
v___y_4305_ = v___y_4337_;
v___y_4306_ = v___y_4336_;
v___y_4307_ = v___y_4328_;
v___y_4308_ = v_self_4348_;
v___y_4309_ = v___y_4330_;
v___y_4310_ = v___y_4329_;
v___y_4311_ = v___y_4331_;
v___y_4312_ = v___y_4332_;
v___y_4313_ = v___y_4335_;
v___y_4314_ = v_a_4346_;
goto v___jp_4300_;
}
}
else
{
lean_inc_ref(v_self_4351_);
lean_inc_ref(v_self_4348_);
v___y_4301_ = v___y_4333_;
v___y_4302_ = v_self_4351_;
v___y_4303_ = v___y_4334_;
v___y_4304_ = v_a_4340_;
v___y_4305_ = v___y_4337_;
v___y_4306_ = v___y_4336_;
v___y_4307_ = v___y_4328_;
v___y_4308_ = v_self_4348_;
v___y_4309_ = v___y_4330_;
v___y_4310_ = v___y_4329_;
v___y_4311_ = v___y_4331_;
v___y_4312_ = v___y_4332_;
v___y_4313_ = v___y_4335_;
v___y_4314_ = v_a_4346_;
goto v___jp_4300_;
}
}
else
{
lean_inc_ref(v_self_4351_);
lean_inc_ref(v_self_4348_);
v___y_4301_ = v___y_4333_;
v___y_4302_ = v_self_4351_;
v___y_4303_ = v___y_4334_;
v___y_4304_ = v_a_4340_;
v___y_4305_ = v___y_4337_;
v___y_4306_ = v___y_4336_;
v___y_4307_ = v___y_4328_;
v___y_4308_ = v_self_4348_;
v___y_4309_ = v___y_4330_;
v___y_4310_ = v___y_4329_;
v___y_4311_ = v___y_4331_;
v___y_4312_ = v___y_4332_;
v___y_4313_ = v___y_4335_;
v___y_4314_ = v_a_4346_;
goto v___jp_4300_;
}
}
else
{
v___y_4286_ = v___y_4333_;
v___y_4287_ = v___y_4334_;
v___y_4288_ = v_a_4340_;
v___y_4289_ = v___y_4337_;
v___y_4290_ = v___y_4336_;
v___y_4291_ = v___y_4328_;
v___y_4292_ = v___y_4330_;
v___y_4293_ = v___y_4329_;
v___y_4294_ = v___y_4331_;
v___y_4295_ = v___y_4332_;
v___y_4296_ = v___y_4335_;
v___y_4297_ = v_a_4346_;
v___y_4298_ = v___x_4354_;
goto v___jp_4285_;
}
}
else
{
v___y_4286_ = v___y_4333_;
v___y_4287_ = v___y_4334_;
v___y_4288_ = v_a_4340_;
v___y_4289_ = v___y_4337_;
v___y_4290_ = v___y_4336_;
v___y_4291_ = v___y_4328_;
v___y_4292_ = v___y_4330_;
v___y_4293_ = v___y_4329_;
v___y_4294_ = v___y_4331_;
v___y_4295_ = v___y_4332_;
v___y_4296_ = v___y_4335_;
v___y_4297_ = v_a_4346_;
v___y_4298_ = v___x_4353_;
goto v___jp_4285_;
}
}
}
}
else
{
lean_object* v_a_4355_; lean_object* v___x_4357_; uint8_t v_isShared_4358_; uint8_t v_isSharedCheck_4362_; 
lean_dec(v_a_4340_);
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
v_a_4355_ = lean_ctor_get(v___x_4342_, 0);
v_isSharedCheck_4362_ = !lean_is_exclusive(v___x_4342_);
if (v_isSharedCheck_4362_ == 0)
{
v___x_4357_ = v___x_4342_;
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
else
{
lean_inc(v_a_4355_);
lean_dec(v___x_4342_);
v___x_4357_ = lean_box(0);
v_isShared_4358_ = v_isSharedCheck_4362_;
goto v_resetjp_4356_;
}
v_resetjp_4356_:
{
lean_object* v___x_4360_; 
if (v_isShared_4358_ == 0)
{
v___x_4360_ = v___x_4357_;
goto v_reusejp_4359_;
}
else
{
lean_object* v_reuseFailAlloc_4361_; 
v_reuseFailAlloc_4361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4361_, 0, v_a_4355_);
v___x_4360_ = v_reuseFailAlloc_4361_;
goto v_reusejp_4359_;
}
v_reusejp_4359_:
{
return v___x_4360_;
}
}
}
}
else
{
lean_object* v_a_4363_; lean_object* v___x_4365_; uint8_t v_isShared_4366_; uint8_t v_isSharedCheck_4370_; 
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
v_a_4363_ = lean_ctor_get(v___x_4339_, 0);
v_isSharedCheck_4370_ = !lean_is_exclusive(v___x_4339_);
if (v_isSharedCheck_4370_ == 0)
{
v___x_4365_ = v___x_4339_;
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
else
{
lean_inc(v_a_4363_);
lean_dec(v___x_4339_);
v___x_4365_ = lean_box(0);
v_isShared_4366_ = v_isSharedCheck_4370_;
goto v_resetjp_4364_;
}
v_resetjp_4364_:
{
lean_object* v___x_4368_; 
if (v_isShared_4366_ == 0)
{
v___x_4368_ = v___x_4365_;
goto v_reusejp_4367_;
}
else
{
lean_object* v_reuseFailAlloc_4369_; 
v_reuseFailAlloc_4369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4369_, 0, v_a_4363_);
v___x_4368_ = v_reuseFailAlloc_4369_;
goto v_reusejp_4367_;
}
v_reusejp_4367_:
{
return v___x_4368_;
}
}
}
}
}
else
{
lean_object* v_toCold_4409_; lean_object* v_options_4410_; uint8_t v_hasTrace_4411_; 
lean_dec(v_a_4071_);
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
v_toCold_4409_ = lean_ctor_get(v_a_4060_, 0);
v_options_4410_ = lean_ctor_get(v_toCold_4409_, 2);
v_hasTrace_4411_ = lean_ctor_get_uint8(v_options_4410_, sizeof(void*)*1);
if (v_hasTrace_4411_ == 0)
{
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
goto v___jp_4063_;
}
else
{
lean_object* v_inheritedTraceOptions_4412_; lean_object* v___x_4413_; lean_object* v___x_4414_; uint8_t v___x_4415_; 
v_inheritedTraceOptions_4412_ = lean_ctor_get(v_toCold_4409_, 11);
v___x_4413_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__0));
v___x_4414_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_go___closed__1);
v___x_4415_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_4412_, v_options_4410_, v___x_4414_);
if (v___x_4415_ == 0)
{
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
goto v___jp_4063_;
}
else
{
lean_object* v___x_4416_; 
v___x_4416_ = l_Lean_Meta_Grind_updateLastTag(v_a_4052_, v_a_4053_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4416_) == 0)
{
lean_object* v___x_4417_; 
lean_dec_ref_known(v___x_4416_, 1);
v___x_4417_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_lhs_4048_, v_a_4052_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4417_) == 0)
{
lean_object* v_a_4418_; lean_object* v___x_4419_; 
v_a_4418_ = lean_ctor_get(v___x_4417_, 0);
lean_inc(v_a_4418_);
lean_dec_ref_known(v___x_4417_, 1);
v___x_4419_ = l_Lean_Meta_Grind_ppENodeRef___redArg(v_rhs_4049_, v_a_4052_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4419_) == 0)
{
lean_object* v_a_4420_; lean_object* v___x_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; 
v_a_4420_ = lean_ctor_get(v___x_4419_, 0);
lean_inc(v_a_4420_);
lean_dec_ref_known(v___x_4419_, 1);
v___x_4421_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__6);
v___x_4422_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4422_, 0, v_a_4418_);
lean_ctor_set(v___x_4422_, 1, v___x_4421_);
v___x_4423_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4423_, 0, v___x_4422_);
lean_ctor_set(v___x_4423_, 1, v_a_4420_);
v___x_4424_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___closed__8);
v___x_4425_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_4425_, 0, v___x_4423_);
lean_ctor_set(v___x_4425_, 1, v___x_4424_);
v___x_4426_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_4413_, v___x_4425_, v_a_4058_, v_a_4059_, v_a_4060_, v_a_4061_);
if (lean_obj_tag(v___x_4426_) == 0)
{
lean_dec_ref_known(v___x_4426_, 1);
goto v___jp_4063_;
}
else
{
return v___x_4426_;
}
}
else
{
lean_object* v_a_4427_; lean_object* v___x_4429_; uint8_t v_isShared_4430_; uint8_t v_isSharedCheck_4434_; 
lean_dec(v_a_4418_);
v_a_4427_ = lean_ctor_get(v___x_4419_, 0);
v_isSharedCheck_4434_ = !lean_is_exclusive(v___x_4419_);
if (v_isSharedCheck_4434_ == 0)
{
v___x_4429_ = v___x_4419_;
v_isShared_4430_ = v_isSharedCheck_4434_;
goto v_resetjp_4428_;
}
else
{
lean_inc(v_a_4427_);
lean_dec(v___x_4419_);
v___x_4429_ = lean_box(0);
v_isShared_4430_ = v_isSharedCheck_4434_;
goto v_resetjp_4428_;
}
v_resetjp_4428_:
{
lean_object* v___x_4432_; 
if (v_isShared_4430_ == 0)
{
v___x_4432_ = v___x_4429_;
goto v_reusejp_4431_;
}
else
{
lean_object* v_reuseFailAlloc_4433_; 
v_reuseFailAlloc_4433_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4433_, 0, v_a_4427_);
v___x_4432_ = v_reuseFailAlloc_4433_;
goto v_reusejp_4431_;
}
v_reusejp_4431_:
{
return v___x_4432_;
}
}
}
}
else
{
lean_object* v_a_4435_; lean_object* v___x_4437_; uint8_t v_isShared_4438_; uint8_t v_isSharedCheck_4442_; 
lean_dec_ref(v_rhs_4049_);
v_a_4435_ = lean_ctor_get(v___x_4417_, 0);
v_isSharedCheck_4442_ = !lean_is_exclusive(v___x_4417_);
if (v_isSharedCheck_4442_ == 0)
{
v___x_4437_ = v___x_4417_;
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
else
{
lean_inc(v_a_4435_);
lean_dec(v___x_4417_);
v___x_4437_ = lean_box(0);
v_isShared_4438_ = v_isSharedCheck_4442_;
goto v_resetjp_4436_;
}
v_resetjp_4436_:
{
lean_object* v___x_4440_; 
if (v_isShared_4438_ == 0)
{
v___x_4440_ = v___x_4437_;
goto v_reusejp_4439_;
}
else
{
lean_object* v_reuseFailAlloc_4441_; 
v_reuseFailAlloc_4441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4441_, 0, v_a_4435_);
v___x_4440_ = v_reuseFailAlloc_4441_;
goto v_reusejp_4439_;
}
v_reusejp_4439_:
{
return v___x_4440_;
}
}
}
}
else
{
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
return v___x_4416_;
}
}
}
}
}
else
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4450_; 
lean_dec(v_a_4068_);
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
v_a_4443_ = lean_ctor_get(v___x_4070_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4070_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4445_ = v___x_4070_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4070_);
v___x_4445_ = lean_box(0);
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
v_resetjp_4444_:
{
lean_object* v___x_4448_; 
if (v_isShared_4446_ == 0)
{
v___x_4448_ = v___x_4445_;
goto v_reusejp_4447_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v_a_4443_);
v___x_4448_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4447_;
}
v_reusejp_4447_:
{
return v___x_4448_;
}
}
}
}
else
{
lean_object* v_a_4451_; lean_object* v___x_4453_; uint8_t v_isShared_4454_; uint8_t v_isSharedCheck_4458_; 
lean_dec_ref(v_proof_4050_);
lean_dec_ref(v_rhs_4049_);
lean_dec_ref(v_lhs_4048_);
v_a_4451_ = lean_ctor_get(v___x_4067_, 0);
v_isSharedCheck_4458_ = !lean_is_exclusive(v___x_4067_);
if (v_isSharedCheck_4458_ == 0)
{
v___x_4453_ = v___x_4067_;
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
else
{
lean_inc(v_a_4451_);
lean_dec(v___x_4067_);
v___x_4453_ = lean_box(0);
v_isShared_4454_ = v_isSharedCheck_4458_;
goto v_resetjp_4452_;
}
v_resetjp_4452_:
{
lean_object* v___x_4456_; 
if (v_isShared_4454_ == 0)
{
v___x_4456_ = v___x_4453_;
goto v_reusejp_4455_;
}
else
{
lean_object* v_reuseFailAlloc_4457_; 
v_reuseFailAlloc_4457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4457_, 0, v_a_4451_);
v___x_4456_ = v_reuseFailAlloc_4457_;
goto v_reusejp_4455_;
}
v_reusejp_4455_:
{
return v___x_4456_;
}
}
}
v___jp_4063_:
{
lean_object* v___x_4064_; lean_object* v___x_4065_; 
v___x_4064_ = lean_box(0);
v___x_4065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4065_, 0, v___x_4064_);
return v___x_4065_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep___boxed(lean_object* v_lhs_4459_, lean_object* v_rhs_4460_, lean_object* v_proof_4461_, lean_object* v_isHEq_4462_, lean_object* v_a_4463_, lean_object* v_a_4464_, lean_object* v_a_4465_, lean_object* v_a_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_){
_start:
{
uint8_t v_isHEq_boxed_4474_; lean_object* v_res_4475_; 
v_isHEq_boxed_4474_ = lean_unbox(v_isHEq_4462_);
v_res_4475_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_4459_, v_rhs_4460_, v_proof_4461_, v_isHEq_boxed_4474_, v_a_4463_, v_a_4464_, v_a_4465_, v_a_4466_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_);
lean_dec(v_a_4472_);
lean_dec_ref(v_a_4471_);
lean_dec(v_a_4470_);
lean_dec_ref(v_a_4469_);
lean_dec(v_a_4468_);
lean_dec_ref(v_a_4467_);
lean_dec(v_a_4466_);
lean_dec_ref(v_a_4465_);
lean_dec(v_a_4464_);
lean_dec(v_a_4463_);
return v_res_4475_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg(lean_object* v_a_4478_){
_start:
{
lean_object* v___x_4480_; lean_object* v_toGoalState_4481_; lean_object* v_mvarId_4482_; lean_object* v___x_4484_; uint8_t v_isShared_4485_; uint8_t v_isSharedCheck_4523_; 
v___x_4480_ = lean_st_ref_take(v_a_4478_);
v_toGoalState_4481_ = lean_ctor_get(v___x_4480_, 0);
v_mvarId_4482_ = lean_ctor_get(v___x_4480_, 1);
v_isSharedCheck_4523_ = !lean_is_exclusive(v___x_4480_);
if (v_isSharedCheck_4523_ == 0)
{
v___x_4484_ = v___x_4480_;
v_isShared_4485_ = v_isSharedCheck_4523_;
goto v_resetjp_4483_;
}
else
{
lean_inc(v_mvarId_4482_);
lean_inc(v_toGoalState_4481_);
lean_dec(v___x_4480_);
v___x_4484_ = lean_box(0);
v_isShared_4485_ = v_isSharedCheck_4523_;
goto v_resetjp_4483_;
}
v_resetjp_4483_:
{
lean_object* v_nextDeclIdx_4486_; lean_object* v_enodeMap_4487_; lean_object* v_exprs_4488_; lean_object* v_parents_4489_; lean_object* v_condParents_4490_; lean_object* v_congrTable_4491_; lean_object* v_appMap_4492_; lean_object* v_indicesFound_4493_; lean_object* v_internalizing_4494_; uint8_t v_inconsistent_4495_; lean_object* v_nextIdx_4496_; lean_object* v_newRawFacts_4497_; lean_object* v_facts_4498_; lean_object* v_extThms_4499_; lean_object* v_ematch_4500_; lean_object* v_inj_4501_; lean_object* v_split_4502_; lean_object* v_clean_4503_; lean_object* v_sstates_4504_; lean_object* v_goalStack_4505_; uint64_t v_introBase_4506_; lean_object* v_numIntros_4507_; lean_object* v___x_4509_; uint8_t v_isShared_4510_; uint8_t v_isSharedCheck_4521_; 
v_nextDeclIdx_4486_ = lean_ctor_get(v_toGoalState_4481_, 0);
v_enodeMap_4487_ = lean_ctor_get(v_toGoalState_4481_, 1);
v_exprs_4488_ = lean_ctor_get(v_toGoalState_4481_, 2);
v_parents_4489_ = lean_ctor_get(v_toGoalState_4481_, 3);
v_condParents_4490_ = lean_ctor_get(v_toGoalState_4481_, 4);
v_congrTable_4491_ = lean_ctor_get(v_toGoalState_4481_, 5);
v_appMap_4492_ = lean_ctor_get(v_toGoalState_4481_, 6);
v_indicesFound_4493_ = lean_ctor_get(v_toGoalState_4481_, 7);
v_internalizing_4494_ = lean_ctor_get(v_toGoalState_4481_, 9);
v_inconsistent_4495_ = lean_ctor_get_uint8(v_toGoalState_4481_, sizeof(void*)*21 + 8);
v_nextIdx_4496_ = lean_ctor_get(v_toGoalState_4481_, 10);
v_newRawFacts_4497_ = lean_ctor_get(v_toGoalState_4481_, 11);
v_facts_4498_ = lean_ctor_get(v_toGoalState_4481_, 12);
v_extThms_4499_ = lean_ctor_get(v_toGoalState_4481_, 13);
v_ematch_4500_ = lean_ctor_get(v_toGoalState_4481_, 14);
v_inj_4501_ = lean_ctor_get(v_toGoalState_4481_, 15);
v_split_4502_ = lean_ctor_get(v_toGoalState_4481_, 16);
v_clean_4503_ = lean_ctor_get(v_toGoalState_4481_, 17);
v_sstates_4504_ = lean_ctor_get(v_toGoalState_4481_, 18);
v_goalStack_4505_ = lean_ctor_get(v_toGoalState_4481_, 19);
v_introBase_4506_ = lean_ctor_get_uint64(v_toGoalState_4481_, sizeof(void*)*21);
v_numIntros_4507_ = lean_ctor_get(v_toGoalState_4481_, 20);
v_isSharedCheck_4521_ = !lean_is_exclusive(v_toGoalState_4481_);
if (v_isSharedCheck_4521_ == 0)
{
lean_object* v_unused_4522_; 
v_unused_4522_ = lean_ctor_get(v_toGoalState_4481_, 8);
lean_dec(v_unused_4522_);
v___x_4509_ = v_toGoalState_4481_;
v_isShared_4510_ = v_isSharedCheck_4521_;
goto v_resetjp_4508_;
}
else
{
lean_inc(v_numIntros_4507_);
lean_inc(v_goalStack_4505_);
lean_inc(v_sstates_4504_);
lean_inc(v_clean_4503_);
lean_inc(v_split_4502_);
lean_inc(v_inj_4501_);
lean_inc(v_ematch_4500_);
lean_inc(v_extThms_4499_);
lean_inc(v_facts_4498_);
lean_inc(v_newRawFacts_4497_);
lean_inc(v_nextIdx_4496_);
lean_inc(v_internalizing_4494_);
lean_inc(v_indicesFound_4493_);
lean_inc(v_appMap_4492_);
lean_inc(v_congrTable_4491_);
lean_inc(v_condParents_4490_);
lean_inc(v_parents_4489_);
lean_inc(v_exprs_4488_);
lean_inc(v_enodeMap_4487_);
lean_inc(v_nextDeclIdx_4486_);
lean_dec(v_toGoalState_4481_);
v___x_4509_ = lean_box(0);
v_isShared_4510_ = v_isSharedCheck_4521_;
goto v_resetjp_4508_;
}
v_resetjp_4508_:
{
lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4514_; 
v___x_4511_ = lean_box(0);
v___x_4512_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg___closed__0));
if (v_isShared_4510_ == 0)
{
lean_ctor_set(v___x_4509_, 8, v___x_4512_);
v___x_4514_ = v___x_4509_;
goto v_reusejp_4513_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v_nextDeclIdx_4486_);
lean_ctor_set(v_reuseFailAlloc_4520_, 1, v_enodeMap_4487_);
lean_ctor_set(v_reuseFailAlloc_4520_, 2, v_exprs_4488_);
lean_ctor_set(v_reuseFailAlloc_4520_, 3, v_parents_4489_);
lean_ctor_set(v_reuseFailAlloc_4520_, 4, v_condParents_4490_);
lean_ctor_set(v_reuseFailAlloc_4520_, 5, v_congrTable_4491_);
lean_ctor_set(v_reuseFailAlloc_4520_, 6, v_appMap_4492_);
lean_ctor_set(v_reuseFailAlloc_4520_, 7, v_indicesFound_4493_);
lean_ctor_set(v_reuseFailAlloc_4520_, 8, v___x_4512_);
lean_ctor_set(v_reuseFailAlloc_4520_, 9, v_internalizing_4494_);
lean_ctor_set(v_reuseFailAlloc_4520_, 10, v_nextIdx_4496_);
lean_ctor_set(v_reuseFailAlloc_4520_, 11, v_newRawFacts_4497_);
lean_ctor_set(v_reuseFailAlloc_4520_, 12, v_facts_4498_);
lean_ctor_set(v_reuseFailAlloc_4520_, 13, v_extThms_4499_);
lean_ctor_set(v_reuseFailAlloc_4520_, 14, v_ematch_4500_);
lean_ctor_set(v_reuseFailAlloc_4520_, 15, v_inj_4501_);
lean_ctor_set(v_reuseFailAlloc_4520_, 16, v_split_4502_);
lean_ctor_set(v_reuseFailAlloc_4520_, 17, v_clean_4503_);
lean_ctor_set(v_reuseFailAlloc_4520_, 18, v_sstates_4504_);
lean_ctor_set(v_reuseFailAlloc_4520_, 19, v_goalStack_4505_);
lean_ctor_set(v_reuseFailAlloc_4520_, 20, v_numIntros_4507_);
lean_ctor_set_uint8(v_reuseFailAlloc_4520_, sizeof(void*)*21 + 8, v_inconsistent_4495_);
lean_ctor_set_uint64(v_reuseFailAlloc_4520_, sizeof(void*)*21, v_introBase_4506_);
v___x_4514_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4513_;
}
v_reusejp_4513_:
{
lean_object* v___x_4516_; 
if (v_isShared_4485_ == 0)
{
lean_ctor_set(v___x_4484_, 0, v___x_4514_);
v___x_4516_ = v___x_4484_;
goto v_reusejp_4515_;
}
else
{
lean_object* v_reuseFailAlloc_4519_; 
v_reuseFailAlloc_4519_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4519_, 0, v___x_4514_);
lean_ctor_set(v_reuseFailAlloc_4519_, 1, v_mvarId_4482_);
v___x_4516_ = v_reuseFailAlloc_4519_;
goto v_reusejp_4515_;
}
v_reusejp_4515_:
{
lean_object* v___x_4517_; lean_object* v___x_4518_; 
v___x_4517_ = lean_st_ref_put(v_a_4478_, v___x_4516_);
v___x_4518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4518_, 0, v___x_4511_);
return v___x_4518_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg___boxed(lean_object* v_a_4524_, lean_object* v_a_4525_){
_start:
{
lean_object* v_res_4526_; 
v_res_4526_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg(v_a_4524_);
lean_dec(v_a_4524_);
return v_res_4526_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess(lean_object* v_a_4527_, lean_object* v_a_4528_, lean_object* v_a_4529_, lean_object* v_a_4530_, lean_object* v_a_4531_, lean_object* v_a_4532_, lean_object* v_a_4533_, lean_object* v_a_4534_, lean_object* v_a_4535_, lean_object* v_a_4536_){
_start:
{
lean_object* v___x_4538_; 
v___x_4538_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg(v_a_4527_);
return v___x_4538_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___boxed(lean_object* v_a_4539_, lean_object* v_a_4540_, lean_object* v_a_4541_, lean_object* v_a_4542_, lean_object* v_a_4543_, lean_object* v_a_4544_, lean_object* v_a_4545_, lean_object* v_a_4546_, lean_object* v_a_4547_, lean_object* v_a_4548_, lean_object* v_a_4549_){
_start:
{
lean_object* v_res_4550_; 
v_res_4550_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess(v_a_4539_, v_a_4540_, v_a_4541_, v_a_4542_, v_a_4543_, v_a_4544_, v_a_4545_, v_a_4546_, v_a_4547_, v_a_4548_);
lean_dec(v_a_4548_);
lean_dec_ref(v_a_4547_);
lean_dec(v_a_4546_);
lean_dec_ref(v_a_4545_);
lean_dec(v_a_4544_);
lean_dec_ref(v_a_4543_);
lean_dec(v_a_4542_);
lean_dec_ref(v_a_4541_);
lean_dec(v_a_4540_);
lean_dec(v_a_4539_);
return v_res_4550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___redArg(lean_object* v_a_4551_){
_start:
{
lean_object* v___x_4553_; lean_object* v_toGoalState_4554_; lean_object* v_toProcess_4555_; lean_object* v___x_4556_; lean_object* v___x_4557_; lean_object* v___x_4558_; uint8_t v___x_4559_; 
v___x_4553_ = lean_st_ref_get(v_a_4551_);
v_toGoalState_4554_ = lean_ctor_get(v___x_4553_, 0);
lean_inc_ref(v_toGoalState_4554_);
lean_dec(v___x_4553_);
v_toProcess_4555_ = lean_ctor_get(v_toGoalState_4554_, 8);
lean_inc_ref(v_toProcess_4555_);
lean_dec_ref(v_toGoalState_4554_);
v___x_4556_ = lean_array_get_size(v_toProcess_4555_);
v___x_4557_ = lean_unsigned_to_nat(1u);
v___x_4558_ = lean_nat_sub(v___x_4556_, v___x_4557_);
v___x_4559_ = lean_nat_dec_lt(v___x_4558_, v___x_4556_);
if (v___x_4559_ == 0)
{
lean_object* v___x_4560_; lean_object* v___x_4561_; 
lean_dec(v___x_4558_);
lean_dec_ref(v_toProcess_4555_);
v___x_4560_ = lean_box(0);
v___x_4561_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4561_, 0, v___x_4560_);
return v___x_4561_;
}
else
{
lean_object* v___x_4562_; lean_object* v___x_4563_; lean_object* v___x_4564_; lean_object* v_toGoalState_4565_; lean_object* v_mvarId_4566_; lean_object* v___x_4568_; uint8_t v_isShared_4569_; uint8_t v_isSharedCheck_4606_; 
v___x_4562_ = lean_array_fget(v_toProcess_4555_, v___x_4558_);
lean_dec(v___x_4558_);
lean_dec_ref(v_toProcess_4555_);
v___x_4563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4563_, 0, v___x_4562_);
v___x_4564_ = lean_st_ref_take(v_a_4551_);
v_toGoalState_4565_ = lean_ctor_get(v___x_4564_, 0);
v_mvarId_4566_ = lean_ctor_get(v___x_4564_, 1);
v_isSharedCheck_4606_ = !lean_is_exclusive(v___x_4564_);
if (v_isSharedCheck_4606_ == 0)
{
v___x_4568_ = v___x_4564_;
v_isShared_4569_ = v_isSharedCheck_4606_;
goto v_resetjp_4567_;
}
else
{
lean_inc(v_mvarId_4566_);
lean_inc(v_toGoalState_4565_);
lean_dec(v___x_4564_);
v___x_4568_ = lean_box(0);
v_isShared_4569_ = v_isSharedCheck_4606_;
goto v_resetjp_4567_;
}
v_resetjp_4567_:
{
lean_object* v_nextDeclIdx_4570_; lean_object* v_enodeMap_4571_; lean_object* v_exprs_4572_; lean_object* v_parents_4573_; lean_object* v_condParents_4574_; lean_object* v_congrTable_4575_; lean_object* v_appMap_4576_; lean_object* v_indicesFound_4577_; lean_object* v_toProcess_4578_; lean_object* v_internalizing_4579_; uint8_t v_inconsistent_4580_; lean_object* v_nextIdx_4581_; lean_object* v_newRawFacts_4582_; lean_object* v_facts_4583_; lean_object* v_extThms_4584_; lean_object* v_ematch_4585_; lean_object* v_inj_4586_; lean_object* v_split_4587_; lean_object* v_clean_4588_; lean_object* v_sstates_4589_; lean_object* v_goalStack_4590_; uint64_t v_introBase_4591_; lean_object* v_numIntros_4592_; lean_object* v___x_4594_; uint8_t v_isShared_4595_; uint8_t v_isSharedCheck_4605_; 
v_nextDeclIdx_4570_ = lean_ctor_get(v_toGoalState_4565_, 0);
v_enodeMap_4571_ = lean_ctor_get(v_toGoalState_4565_, 1);
v_exprs_4572_ = lean_ctor_get(v_toGoalState_4565_, 2);
v_parents_4573_ = lean_ctor_get(v_toGoalState_4565_, 3);
v_condParents_4574_ = lean_ctor_get(v_toGoalState_4565_, 4);
v_congrTable_4575_ = lean_ctor_get(v_toGoalState_4565_, 5);
v_appMap_4576_ = lean_ctor_get(v_toGoalState_4565_, 6);
v_indicesFound_4577_ = lean_ctor_get(v_toGoalState_4565_, 7);
v_toProcess_4578_ = lean_ctor_get(v_toGoalState_4565_, 8);
v_internalizing_4579_ = lean_ctor_get(v_toGoalState_4565_, 9);
v_inconsistent_4580_ = lean_ctor_get_uint8(v_toGoalState_4565_, sizeof(void*)*21 + 8);
v_nextIdx_4581_ = lean_ctor_get(v_toGoalState_4565_, 10);
v_newRawFacts_4582_ = lean_ctor_get(v_toGoalState_4565_, 11);
v_facts_4583_ = lean_ctor_get(v_toGoalState_4565_, 12);
v_extThms_4584_ = lean_ctor_get(v_toGoalState_4565_, 13);
v_ematch_4585_ = lean_ctor_get(v_toGoalState_4565_, 14);
v_inj_4586_ = lean_ctor_get(v_toGoalState_4565_, 15);
v_split_4587_ = lean_ctor_get(v_toGoalState_4565_, 16);
v_clean_4588_ = lean_ctor_get(v_toGoalState_4565_, 17);
v_sstates_4589_ = lean_ctor_get(v_toGoalState_4565_, 18);
v_goalStack_4590_ = lean_ctor_get(v_toGoalState_4565_, 19);
v_introBase_4591_ = lean_ctor_get_uint64(v_toGoalState_4565_, sizeof(void*)*21);
v_numIntros_4592_ = lean_ctor_get(v_toGoalState_4565_, 20);
v_isSharedCheck_4605_ = !lean_is_exclusive(v_toGoalState_4565_);
if (v_isSharedCheck_4605_ == 0)
{
v___x_4594_ = v_toGoalState_4565_;
v_isShared_4595_ = v_isSharedCheck_4605_;
goto v_resetjp_4593_;
}
else
{
lean_inc(v_numIntros_4592_);
lean_inc(v_goalStack_4590_);
lean_inc(v_sstates_4589_);
lean_inc(v_clean_4588_);
lean_inc(v_split_4587_);
lean_inc(v_inj_4586_);
lean_inc(v_ematch_4585_);
lean_inc(v_extThms_4584_);
lean_inc(v_facts_4583_);
lean_inc(v_newRawFacts_4582_);
lean_inc(v_nextIdx_4581_);
lean_inc(v_internalizing_4579_);
lean_inc(v_toProcess_4578_);
lean_inc(v_indicesFound_4577_);
lean_inc(v_appMap_4576_);
lean_inc(v_congrTable_4575_);
lean_inc(v_condParents_4574_);
lean_inc(v_parents_4573_);
lean_inc(v_exprs_4572_);
lean_inc(v_enodeMap_4571_);
lean_inc(v_nextDeclIdx_4570_);
lean_dec(v_toGoalState_4565_);
v___x_4594_ = lean_box(0);
v_isShared_4595_ = v_isSharedCheck_4605_;
goto v_resetjp_4593_;
}
v_resetjp_4593_:
{
lean_object* v___x_4596_; lean_object* v___x_4598_; 
v___x_4596_ = lean_array_pop(v_toProcess_4578_);
if (v_isShared_4595_ == 0)
{
lean_ctor_set(v___x_4594_, 8, v___x_4596_);
v___x_4598_ = v___x_4594_;
goto v_reusejp_4597_;
}
else
{
lean_object* v_reuseFailAlloc_4604_; 
v_reuseFailAlloc_4604_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_4604_, 0, v_nextDeclIdx_4570_);
lean_ctor_set(v_reuseFailAlloc_4604_, 1, v_enodeMap_4571_);
lean_ctor_set(v_reuseFailAlloc_4604_, 2, v_exprs_4572_);
lean_ctor_set(v_reuseFailAlloc_4604_, 3, v_parents_4573_);
lean_ctor_set(v_reuseFailAlloc_4604_, 4, v_condParents_4574_);
lean_ctor_set(v_reuseFailAlloc_4604_, 5, v_congrTable_4575_);
lean_ctor_set(v_reuseFailAlloc_4604_, 6, v_appMap_4576_);
lean_ctor_set(v_reuseFailAlloc_4604_, 7, v_indicesFound_4577_);
lean_ctor_set(v_reuseFailAlloc_4604_, 8, v___x_4596_);
lean_ctor_set(v_reuseFailAlloc_4604_, 9, v_internalizing_4579_);
lean_ctor_set(v_reuseFailAlloc_4604_, 10, v_nextIdx_4581_);
lean_ctor_set(v_reuseFailAlloc_4604_, 11, v_newRawFacts_4582_);
lean_ctor_set(v_reuseFailAlloc_4604_, 12, v_facts_4583_);
lean_ctor_set(v_reuseFailAlloc_4604_, 13, v_extThms_4584_);
lean_ctor_set(v_reuseFailAlloc_4604_, 14, v_ematch_4585_);
lean_ctor_set(v_reuseFailAlloc_4604_, 15, v_inj_4586_);
lean_ctor_set(v_reuseFailAlloc_4604_, 16, v_split_4587_);
lean_ctor_set(v_reuseFailAlloc_4604_, 17, v_clean_4588_);
lean_ctor_set(v_reuseFailAlloc_4604_, 18, v_sstates_4589_);
lean_ctor_set(v_reuseFailAlloc_4604_, 19, v_goalStack_4590_);
lean_ctor_set(v_reuseFailAlloc_4604_, 20, v_numIntros_4592_);
lean_ctor_set_uint8(v_reuseFailAlloc_4604_, sizeof(void*)*21 + 8, v_inconsistent_4580_);
lean_ctor_set_uint64(v_reuseFailAlloc_4604_, sizeof(void*)*21, v_introBase_4591_);
v___x_4598_ = v_reuseFailAlloc_4604_;
goto v_reusejp_4597_;
}
v_reusejp_4597_:
{
lean_object* v___x_4600_; 
if (v_isShared_4569_ == 0)
{
lean_ctor_set(v___x_4568_, 0, v___x_4598_);
v___x_4600_ = v___x_4568_;
goto v_reusejp_4599_;
}
else
{
lean_object* v_reuseFailAlloc_4603_; 
v_reuseFailAlloc_4603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4603_, 0, v___x_4598_);
lean_ctor_set(v_reuseFailAlloc_4603_, 1, v_mvarId_4566_);
v___x_4600_ = v_reuseFailAlloc_4603_;
goto v_reusejp_4599_;
}
v_reusejp_4599_:
{
lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4601_ = lean_st_ref_put(v_a_4551_, v___x_4600_);
v___x_4602_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4563_);
return v___x_4602_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___redArg___boxed(lean_object* v_a_4607_, lean_object* v_a_4608_){
_start:
{
lean_object* v_res_4609_; 
v_res_4609_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___redArg(v_a_4607_);
lean_dec(v_a_4607_);
return v_res_4609_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f(lean_object* v_a_4610_, lean_object* v_a_4611_, lean_object* v_a_4612_, lean_object* v_a_4613_, lean_object* v_a_4614_, lean_object* v_a_4615_, lean_object* v_a_4616_, lean_object* v_a_4617_, lean_object* v_a_4618_, lean_object* v_a_4619_){
_start:
{
lean_object* v___x_4621_; 
v___x_4621_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___redArg(v_a_4610_);
return v___x_4621_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___boxed(lean_object* v_a_4622_, lean_object* v_a_4623_, lean_object* v_a_4624_, lean_object* v_a_4625_, lean_object* v_a_4626_, lean_object* v_a_4627_, lean_object* v_a_4628_, lean_object* v_a_4629_, lean_object* v_a_4630_, lean_object* v_a_4631_, lean_object* v_a_4632_){
_start:
{
lean_object* v_res_4633_; 
v_res_4633_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f(v_a_4622_, v_a_4623_, v_a_4624_, v_a_4625_, v_a_4626_, v_a_4627_, v_a_4628_, v_a_4629_, v_a_4630_, v_a_4631_);
lean_dec(v_a_4631_);
lean_dec_ref(v_a_4630_);
lean_dec(v_a_4629_);
lean_dec_ref(v_a_4628_);
lean_dec(v_a_4627_);
lean_dec_ref(v_a_4626_);
lean_dec(v_a_4625_);
lean_dec_ref(v_a_4624_);
lean_dec(v_a_4623_);
lean_dec(v_a_4622_);
return v_res_4633_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(lean_object* v_lhs_4634_, lean_object* v_rhs_4635_, lean_object* v_proof_4636_, uint8_t v_isHEq_4637_, lean_object* v_a_4638_, lean_object* v_a_4639_, lean_object* v_a_4640_, lean_object* v_a_4641_, lean_object* v_a_4642_, lean_object* v_a_4643_, lean_object* v_a_4644_, lean_object* v_a_4645_, lean_object* v_a_4646_, lean_object* v_a_4647_){
_start:
{
lean_object* v___x_4649_; 
v___x_4649_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_4634_, v_rhs_4635_, v_proof_4636_, v_isHEq_4637_, v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_, v_a_4646_, v_a_4647_);
if (lean_obj_tag(v___x_4649_) == 0)
{
lean_object* v___x_4650_; 
lean_dec_ref_known(v___x_4649_, 1);
lean_inc(v_a_4647_);
lean_inc_ref(v_a_4646_);
lean_inc(v_a_4645_);
lean_inc_ref(v_a_4644_);
lean_inc(v_a_4643_);
lean_inc_ref(v_a_4642_);
lean_inc(v_a_4641_);
lean_inc_ref(v_a_4640_);
lean_inc(v_a_4639_);
lean_inc(v_a_4638_);
v___x_4650_ = lean_grind_process_to_do(v_a_4638_, v_a_4639_, v_a_4640_, v_a_4641_, v_a_4642_, v_a_4643_, v_a_4644_, v_a_4645_, v_a_4646_, v_a_4647_);
return v___x_4650_;
}
else
{
return v___x_4649_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore___boxed(lean_object* v_lhs_4651_, lean_object* v_rhs_4652_, lean_object* v_proof_4653_, lean_object* v_isHEq_4654_, lean_object* v_a_4655_, lean_object* v_a_4656_, lean_object* v_a_4657_, lean_object* v_a_4658_, lean_object* v_a_4659_, lean_object* v_a_4660_, lean_object* v_a_4661_, lean_object* v_a_4662_, lean_object* v_a_4663_, lean_object* v_a_4664_, lean_object* v_a_4665_){
_start:
{
uint8_t v_isHEq_boxed_4666_; lean_object* v_res_4667_; 
v_isHEq_boxed_4666_ = lean_unbox(v_isHEq_4654_);
v_res_4667_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4651_, v_rhs_4652_, v_proof_4653_, v_isHEq_boxed_4666_, v_a_4655_, v_a_4656_, v_a_4657_, v_a_4658_, v_a_4659_, v_a_4660_, v_a_4661_, v_a_4662_, v_a_4663_, v_a_4664_);
lean_dec(v_a_4664_);
lean_dec_ref(v_a_4663_);
lean_dec(v_a_4662_);
lean_dec_ref(v_a_4661_);
lean_dec(v_a_4660_);
lean_dec_ref(v_a_4659_);
lean_dec(v_a_4658_);
lean_dec_ref(v_a_4657_);
lean_dec(v_a_4656_);
lean_dec(v_a_4655_);
return v_res_4667_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(lean_object* v_lhs_4668_, lean_object* v_rhs_4669_, lean_object* v_proof_4670_, lean_object* v_a_4671_, lean_object* v_a_4672_, lean_object* v_a_4673_, lean_object* v_a_4674_, lean_object* v_a_4675_, lean_object* v_a_4676_, lean_object* v_a_4677_, lean_object* v_a_4678_, lean_object* v_a_4679_, lean_object* v_a_4680_){
_start:
{
uint8_t v___x_4682_; lean_object* v___x_4683_; 
v___x_4682_ = 0;
v___x_4683_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4668_, v_rhs_4669_, v_proof_4670_, v___x_4682_, v_a_4671_, v_a_4672_, v_a_4673_, v_a_4674_, v_a_4675_, v_a_4676_, v_a_4677_, v_a_4678_, v_a_4679_, v_a_4680_);
return v___x_4683_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq___boxed(lean_object* v_lhs_4684_, lean_object* v_rhs_4685_, lean_object* v_proof_4686_, lean_object* v_a_4687_, lean_object* v_a_4688_, lean_object* v_a_4689_, lean_object* v_a_4690_, lean_object* v_a_4691_, lean_object* v_a_4692_, lean_object* v_a_4693_, lean_object* v_a_4694_, lean_object* v_a_4695_, lean_object* v_a_4696_, lean_object* v_a_4697_){
_start:
{
lean_object* v_res_4698_; 
v_res_4698_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_lhs_4684_, v_rhs_4685_, v_proof_4686_, v_a_4687_, v_a_4688_, v_a_4689_, v_a_4690_, v_a_4691_, v_a_4692_, v_a_4693_, v_a_4694_, v_a_4695_, v_a_4696_);
lean_dec(v_a_4696_);
lean_dec_ref(v_a_4695_);
lean_dec(v_a_4694_);
lean_dec_ref(v_a_4693_);
lean_dec(v_a_4692_);
lean_dec_ref(v_a_4691_);
lean_dec(v_a_4690_);
lean_dec_ref(v_a_4689_);
lean_dec(v_a_4688_);
lean_dec(v_a_4687_);
return v_res_4698_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(lean_object* v_lhs_4699_, lean_object* v_rhs_4700_, lean_object* v_proof_4701_, lean_object* v_a_4702_, lean_object* v_a_4703_, lean_object* v_a_4704_, lean_object* v_a_4705_, lean_object* v_a_4706_, lean_object* v_a_4707_, lean_object* v_a_4708_, lean_object* v_a_4709_, lean_object* v_a_4710_, lean_object* v_a_4711_){
_start:
{
uint8_t v___x_4713_; lean_object* v___x_4714_; 
v___x_4713_ = 1;
v___x_4714_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4699_, v_rhs_4700_, v_proof_4701_, v___x_4713_, v_a_4702_, v_a_4703_, v_a_4704_, v_a_4705_, v_a_4706_, v_a_4707_, v_a_4708_, v_a_4709_, v_a_4710_, v_a_4711_);
return v___x_4714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq___boxed(lean_object* v_lhs_4715_, lean_object* v_rhs_4716_, lean_object* v_proof_4717_, lean_object* v_a_4718_, lean_object* v_a_4719_, lean_object* v_a_4720_, lean_object* v_a_4721_, lean_object* v_a_4722_, lean_object* v_a_4723_, lean_object* v_a_4724_, lean_object* v_a_4725_, lean_object* v_a_4726_, lean_object* v_a_4727_, lean_object* v_a_4728_){
_start:
{
lean_object* v_res_4729_; 
v_res_4729_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addHEq(v_lhs_4715_, v_rhs_4716_, v_proof_4717_, v_a_4718_, v_a_4719_, v_a_4720_, v_a_4721_, v_a_4722_, v_a_4723_, v_a_4724_, v_a_4725_, v_a_4726_, v_a_4727_);
lean_dec(v_a_4727_);
lean_dec_ref(v_a_4726_);
lean_dec(v_a_4725_);
lean_dec_ref(v_a_4724_);
lean_dec(v_a_4723_);
lean_dec_ref(v_a_4722_);
lean_dec(v_a_4721_);
lean_dec_ref(v_a_4720_);
lean_dec(v_a_4719_);
lean_dec(v_a_4718_);
return v_res_4729_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(lean_object* v_fact_4730_, lean_object* v_a_4731_){
_start:
{
lean_object* v___x_4733_; lean_object* v_toGoalState_4734_; lean_object* v_mvarId_4735_; lean_object* v___x_4737_; uint8_t v_isShared_4738_; uint8_t v_isSharedCheck_4776_; 
v___x_4733_ = lean_st_ref_take(v_a_4731_);
v_toGoalState_4734_ = lean_ctor_get(v___x_4733_, 0);
v_mvarId_4735_ = lean_ctor_get(v___x_4733_, 1);
v_isSharedCheck_4776_ = !lean_is_exclusive(v___x_4733_);
if (v_isSharedCheck_4776_ == 0)
{
v___x_4737_ = v___x_4733_;
v_isShared_4738_ = v_isSharedCheck_4776_;
goto v_resetjp_4736_;
}
else
{
lean_inc(v_mvarId_4735_);
lean_inc(v_toGoalState_4734_);
lean_dec(v___x_4733_);
v___x_4737_ = lean_box(0);
v_isShared_4738_ = v_isSharedCheck_4776_;
goto v_resetjp_4736_;
}
v_resetjp_4736_:
{
lean_object* v_nextDeclIdx_4739_; lean_object* v_enodeMap_4740_; lean_object* v_exprs_4741_; lean_object* v_parents_4742_; lean_object* v_condParents_4743_; lean_object* v_congrTable_4744_; lean_object* v_appMap_4745_; lean_object* v_indicesFound_4746_; lean_object* v_toProcess_4747_; lean_object* v_internalizing_4748_; uint8_t v_inconsistent_4749_; lean_object* v_nextIdx_4750_; lean_object* v_newRawFacts_4751_; lean_object* v_facts_4752_; lean_object* v_extThms_4753_; lean_object* v_ematch_4754_; lean_object* v_inj_4755_; lean_object* v_split_4756_; lean_object* v_clean_4757_; lean_object* v_sstates_4758_; lean_object* v_goalStack_4759_; uint64_t v_introBase_4760_; lean_object* v_numIntros_4761_; lean_object* v___x_4763_; uint8_t v_isShared_4764_; uint8_t v_isSharedCheck_4775_; 
v_nextDeclIdx_4739_ = lean_ctor_get(v_toGoalState_4734_, 0);
v_enodeMap_4740_ = lean_ctor_get(v_toGoalState_4734_, 1);
v_exprs_4741_ = lean_ctor_get(v_toGoalState_4734_, 2);
v_parents_4742_ = lean_ctor_get(v_toGoalState_4734_, 3);
v_condParents_4743_ = lean_ctor_get(v_toGoalState_4734_, 4);
v_congrTable_4744_ = lean_ctor_get(v_toGoalState_4734_, 5);
v_appMap_4745_ = lean_ctor_get(v_toGoalState_4734_, 6);
v_indicesFound_4746_ = lean_ctor_get(v_toGoalState_4734_, 7);
v_toProcess_4747_ = lean_ctor_get(v_toGoalState_4734_, 8);
v_internalizing_4748_ = lean_ctor_get(v_toGoalState_4734_, 9);
v_inconsistent_4749_ = lean_ctor_get_uint8(v_toGoalState_4734_, sizeof(void*)*21 + 8);
v_nextIdx_4750_ = lean_ctor_get(v_toGoalState_4734_, 10);
v_newRawFacts_4751_ = lean_ctor_get(v_toGoalState_4734_, 11);
v_facts_4752_ = lean_ctor_get(v_toGoalState_4734_, 12);
v_extThms_4753_ = lean_ctor_get(v_toGoalState_4734_, 13);
v_ematch_4754_ = lean_ctor_get(v_toGoalState_4734_, 14);
v_inj_4755_ = lean_ctor_get(v_toGoalState_4734_, 15);
v_split_4756_ = lean_ctor_get(v_toGoalState_4734_, 16);
v_clean_4757_ = lean_ctor_get(v_toGoalState_4734_, 17);
v_sstates_4758_ = lean_ctor_get(v_toGoalState_4734_, 18);
v_goalStack_4759_ = lean_ctor_get(v_toGoalState_4734_, 19);
v_introBase_4760_ = lean_ctor_get_uint64(v_toGoalState_4734_, sizeof(void*)*21);
v_numIntros_4761_ = lean_ctor_get(v_toGoalState_4734_, 20);
v_isSharedCheck_4775_ = !lean_is_exclusive(v_toGoalState_4734_);
if (v_isSharedCheck_4775_ == 0)
{
v___x_4763_ = v_toGoalState_4734_;
v_isShared_4764_ = v_isSharedCheck_4775_;
goto v_resetjp_4762_;
}
else
{
lean_inc(v_numIntros_4761_);
lean_inc(v_goalStack_4759_);
lean_inc(v_sstates_4758_);
lean_inc(v_clean_4757_);
lean_inc(v_split_4756_);
lean_inc(v_inj_4755_);
lean_inc(v_ematch_4754_);
lean_inc(v_extThms_4753_);
lean_inc(v_facts_4752_);
lean_inc(v_newRawFacts_4751_);
lean_inc(v_nextIdx_4750_);
lean_inc(v_internalizing_4748_);
lean_inc(v_toProcess_4747_);
lean_inc(v_indicesFound_4746_);
lean_inc(v_appMap_4745_);
lean_inc(v_congrTable_4744_);
lean_inc(v_condParents_4743_);
lean_inc(v_parents_4742_);
lean_inc(v_exprs_4741_);
lean_inc(v_enodeMap_4740_);
lean_inc(v_nextDeclIdx_4739_);
lean_dec(v_toGoalState_4734_);
v___x_4763_ = lean_box(0);
v_isShared_4764_ = v_isSharedCheck_4775_;
goto v_resetjp_4762_;
}
v_resetjp_4762_:
{
lean_object* v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4768_; 
v___x_4765_ = lean_box(0);
v___x_4766_ = l_Lean_PersistentArray_push___redArg(v_facts_4752_, v_fact_4730_);
if (v_isShared_4764_ == 0)
{
lean_ctor_set(v___x_4763_, 12, v___x_4766_);
v___x_4768_ = v___x_4763_;
goto v_reusejp_4767_;
}
else
{
lean_object* v_reuseFailAlloc_4774_; 
v_reuseFailAlloc_4774_ = lean_alloc_ctor(0, 21, 9);
lean_ctor_set(v_reuseFailAlloc_4774_, 0, v_nextDeclIdx_4739_);
lean_ctor_set(v_reuseFailAlloc_4774_, 1, v_enodeMap_4740_);
lean_ctor_set(v_reuseFailAlloc_4774_, 2, v_exprs_4741_);
lean_ctor_set(v_reuseFailAlloc_4774_, 3, v_parents_4742_);
lean_ctor_set(v_reuseFailAlloc_4774_, 4, v_condParents_4743_);
lean_ctor_set(v_reuseFailAlloc_4774_, 5, v_congrTable_4744_);
lean_ctor_set(v_reuseFailAlloc_4774_, 6, v_appMap_4745_);
lean_ctor_set(v_reuseFailAlloc_4774_, 7, v_indicesFound_4746_);
lean_ctor_set(v_reuseFailAlloc_4774_, 8, v_toProcess_4747_);
lean_ctor_set(v_reuseFailAlloc_4774_, 9, v_internalizing_4748_);
lean_ctor_set(v_reuseFailAlloc_4774_, 10, v_nextIdx_4750_);
lean_ctor_set(v_reuseFailAlloc_4774_, 11, v_newRawFacts_4751_);
lean_ctor_set(v_reuseFailAlloc_4774_, 12, v___x_4766_);
lean_ctor_set(v_reuseFailAlloc_4774_, 13, v_extThms_4753_);
lean_ctor_set(v_reuseFailAlloc_4774_, 14, v_ematch_4754_);
lean_ctor_set(v_reuseFailAlloc_4774_, 15, v_inj_4755_);
lean_ctor_set(v_reuseFailAlloc_4774_, 16, v_split_4756_);
lean_ctor_set(v_reuseFailAlloc_4774_, 17, v_clean_4757_);
lean_ctor_set(v_reuseFailAlloc_4774_, 18, v_sstates_4758_);
lean_ctor_set(v_reuseFailAlloc_4774_, 19, v_goalStack_4759_);
lean_ctor_set(v_reuseFailAlloc_4774_, 20, v_numIntros_4761_);
lean_ctor_set_uint8(v_reuseFailAlloc_4774_, sizeof(void*)*21 + 8, v_inconsistent_4749_);
lean_ctor_set_uint64(v_reuseFailAlloc_4774_, sizeof(void*)*21, v_introBase_4760_);
v___x_4768_ = v_reuseFailAlloc_4774_;
goto v_reusejp_4767_;
}
v_reusejp_4767_:
{
lean_object* v___x_4770_; 
if (v_isShared_4738_ == 0)
{
lean_ctor_set(v___x_4737_, 0, v___x_4768_);
v___x_4770_ = v___x_4737_;
goto v_reusejp_4769_;
}
else
{
lean_object* v_reuseFailAlloc_4773_; 
v_reuseFailAlloc_4773_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4773_, 0, v___x_4768_);
lean_ctor_set(v_reuseFailAlloc_4773_, 1, v_mvarId_4735_);
v___x_4770_ = v_reuseFailAlloc_4773_;
goto v_reusejp_4769_;
}
v_reusejp_4769_:
{
lean_object* v___x_4771_; lean_object* v___x_4772_; 
v___x_4771_ = lean_st_ref_put(v_a_4731_, v___x_4770_);
v___x_4772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4772_, 0, v___x_4765_);
return v___x_4772_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg___boxed(lean_object* v_fact_4777_, lean_object* v_a_4778_, lean_object* v_a_4779_){
_start:
{
lean_object* v_res_4780_; 
v_res_4780_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_4777_, v_a_4778_);
lean_dec(v_a_4778_);
return v_res_4780_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(lean_object* v_fact_4781_, lean_object* v_a_4782_, lean_object* v_a_4783_, lean_object* v_a_4784_, lean_object* v_a_4785_, lean_object* v_a_4786_, lean_object* v_a_4787_, lean_object* v_a_4788_, lean_object* v_a_4789_, lean_object* v_a_4790_, lean_object* v_a_4791_){
_start:
{
lean_object* v___x_4793_; 
v___x_4793_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_4781_, v_a_4782_);
return v___x_4793_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___boxed(lean_object* v_fact_4794_, lean_object* v_a_4795_, lean_object* v_a_4796_, lean_object* v_a_4797_, lean_object* v_a_4798_, lean_object* v_a_4799_, lean_object* v_a_4800_, lean_object* v_a_4801_, lean_object* v_a_4802_, lean_object* v_a_4803_, lean_object* v_a_4804_, lean_object* v_a_4805_){
_start:
{
lean_object* v_res_4806_; 
v_res_4806_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact(v_fact_4794_, v_a_4795_, v_a_4796_, v_a_4797_, v_a_4798_, v_a_4799_, v_a_4800_, v_a_4801_, v_a_4802_, v_a_4803_, v_a_4804_);
lean_dec(v_a_4804_);
lean_dec_ref(v_a_4803_);
lean_dec(v_a_4802_);
lean_dec_ref(v_a_4801_);
lean_dec(v_a_4800_);
lean_dec_ref(v_a_4799_);
lean_dec(v_a_4798_);
lean_dec_ref(v_a_4797_);
lean_dec(v_a_4796_);
lean_dec(v_a_4795_);
return v_res_4806_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq(lean_object* v_lhs_4807_, lean_object* v_rhs_4808_, lean_object* v_proof_4809_, lean_object* v_generation_4810_, lean_object* v_a_4811_, lean_object* v_a_4812_, lean_object* v_a_4813_, lean_object* v_a_4814_, lean_object* v_a_4815_, lean_object* v_a_4816_, lean_object* v_a_4817_, lean_object* v_a_4818_, lean_object* v_a_4819_, lean_object* v_a_4820_){
_start:
{
lean_object* v___x_4822_; 
lean_inc_ref(v_rhs_4808_);
lean_inc_ref(v_lhs_4807_);
v___x_4822_ = l_Lean_Meta_mkEq(v_lhs_4807_, v_rhs_4808_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_);
if (lean_obj_tag(v___x_4822_) == 0)
{
lean_object* v_a_4823_; lean_object* v___x_4824_; lean_object* v___x_4826_; uint8_t v_isShared_4827_; uint8_t v_isSharedCheck_4834_; 
v_a_4823_ = lean_ctor_get(v___x_4822_, 0);
lean_inc_n(v_a_4823_, 2);
lean_dec_ref_known(v___x_4822_, 1);
v___x_4824_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_a_4823_, v_a_4811_);
v_isSharedCheck_4834_ = !lean_is_exclusive(v___x_4824_);
if (v_isSharedCheck_4834_ == 0)
{
lean_object* v_unused_4835_; 
v_unused_4835_ = lean_ctor_get(v___x_4824_, 0);
lean_dec(v_unused_4835_);
v___x_4826_ = v___x_4824_;
v_isShared_4827_ = v_isSharedCheck_4834_;
goto v_resetjp_4825_;
}
else
{
lean_dec(v___x_4824_);
v___x_4826_ = lean_box(0);
v_isShared_4827_ = v_isSharedCheck_4834_;
goto v_resetjp_4825_;
}
v_resetjp_4825_:
{
lean_object* v___x_4829_; 
if (v_isShared_4827_ == 0)
{
lean_ctor_set_tag(v___x_4826_, 1);
lean_ctor_set(v___x_4826_, 0, v_a_4823_);
v___x_4829_ = v___x_4826_;
goto v_reusejp_4828_;
}
else
{
lean_object* v_reuseFailAlloc_4833_; 
v_reuseFailAlloc_4833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4833_, 0, v_a_4823_);
v___x_4829_ = v_reuseFailAlloc_4833_;
goto v_reusejp_4828_;
}
v_reusejp_4828_:
{
lean_object* v___x_4830_; 
lean_inc(v_a_4820_);
lean_inc_ref(v_a_4819_);
lean_inc(v_a_4818_);
lean_inc_ref(v_a_4817_);
lean_inc(v_a_4816_);
lean_inc_ref(v_a_4815_);
lean_inc(v_a_4814_);
lean_inc_ref(v_a_4813_);
lean_inc(v_a_4812_);
lean_inc(v_a_4811_);
lean_inc_ref(v___x_4829_);
lean_inc(v_generation_4810_);
lean_inc_ref(v_lhs_4807_);
v___x_4830_ = lean_grind_internalize(v_lhs_4807_, v_generation_4810_, v___x_4829_, v_a_4811_, v_a_4812_, v_a_4813_, v_a_4814_, v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_);
if (lean_obj_tag(v___x_4830_) == 0)
{
lean_object* v___x_4831_; 
lean_dec_ref_known(v___x_4830_, 1);
lean_inc(v_a_4820_);
lean_inc_ref(v_a_4819_);
lean_inc(v_a_4818_);
lean_inc_ref(v_a_4817_);
lean_inc(v_a_4816_);
lean_inc_ref(v_a_4815_);
lean_inc(v_a_4814_);
lean_inc_ref(v_a_4813_);
lean_inc(v_a_4812_);
lean_inc(v_a_4811_);
lean_inc_ref(v_rhs_4808_);
v___x_4831_ = lean_grind_internalize(v_rhs_4808_, v_generation_4810_, v___x_4829_, v_a_4811_, v_a_4812_, v_a_4813_, v_a_4814_, v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_);
if (lean_obj_tag(v___x_4831_) == 0)
{
lean_object* v___x_4832_; 
lean_dec_ref_known(v___x_4831_, 1);
v___x_4832_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_lhs_4807_, v_rhs_4808_, v_proof_4809_, v_a_4811_, v_a_4812_, v_a_4813_, v_a_4814_, v_a_4815_, v_a_4816_, v_a_4817_, v_a_4818_, v_a_4819_, v_a_4820_);
return v___x_4832_;
}
else
{
lean_dec_ref(v_proof_4809_);
lean_dec_ref(v_rhs_4808_);
lean_dec_ref(v_lhs_4807_);
return v___x_4831_;
}
}
else
{
lean_dec_ref(v___x_4829_);
lean_dec(v_generation_4810_);
lean_dec_ref(v_proof_4809_);
lean_dec_ref(v_rhs_4808_);
lean_dec_ref(v_lhs_4807_);
return v___x_4830_;
}
}
}
}
else
{
lean_object* v_a_4836_; lean_object* v___x_4838_; uint8_t v_isShared_4839_; uint8_t v_isSharedCheck_4843_; 
lean_dec(v_generation_4810_);
lean_dec_ref(v_proof_4809_);
lean_dec_ref(v_rhs_4808_);
lean_dec_ref(v_lhs_4807_);
v_a_4836_ = lean_ctor_get(v___x_4822_, 0);
v_isSharedCheck_4843_ = !lean_is_exclusive(v___x_4822_);
if (v_isSharedCheck_4843_ == 0)
{
v___x_4838_ = v___x_4822_;
v_isShared_4839_ = v_isSharedCheck_4843_;
goto v_resetjp_4837_;
}
else
{
lean_inc(v_a_4836_);
lean_dec(v___x_4822_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addNewEq___boxed(lean_object* v_lhs_4844_, lean_object* v_rhs_4845_, lean_object* v_proof_4846_, lean_object* v_generation_4847_, lean_object* v_a_4848_, lean_object* v_a_4849_, lean_object* v_a_4850_, lean_object* v_a_4851_, lean_object* v_a_4852_, lean_object* v_a_4853_, lean_object* v_a_4854_, lean_object* v_a_4855_, lean_object* v_a_4856_, lean_object* v_a_4857_, lean_object* v_a_4858_){
_start:
{
lean_object* v_res_4859_; 
v_res_4859_ = l_Lean_Meta_Grind_addNewEq(v_lhs_4844_, v_rhs_4845_, v_proof_4846_, v_generation_4847_, v_a_4848_, v_a_4849_, v_a_4850_, v_a_4851_, v_a_4852_, v_a_4853_, v_a_4854_, v_a_4855_, v_a_4856_, v_a_4857_);
lean_dec(v_a_4857_);
lean_dec_ref(v_a_4856_);
lean_dec(v_a_4855_);
lean_dec_ref(v_a_4854_);
lean_dec(v_a_4853_);
lean_dec_ref(v_a_4852_);
lean_dec(v_a_4851_);
lean_dec_ref(v_a_4850_);
lean_dec(v_a_4849_);
lean_dec(v_a_4848_);
return v_res_4859_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(lean_object* v_proof_4860_, lean_object* v_generation_4861_, lean_object* v_p_4862_, uint8_t v_isNeg_4863_, lean_object* v_a_4864_, lean_object* v_a_4865_, lean_object* v_a_4866_, lean_object* v_a_4867_, lean_object* v_a_4868_, lean_object* v_a_4869_, lean_object* v_a_4870_, lean_object* v_a_4871_, lean_object* v_a_4872_, lean_object* v_a_4873_){
_start:
{
lean_object* v___x_4875_; lean_object* v___x_4876_; 
v___x_4875_ = lean_box(0);
lean_inc(v_a_4873_);
lean_inc_ref(v_a_4872_);
lean_inc(v_a_4871_);
lean_inc_ref(v_a_4870_);
lean_inc(v_a_4869_);
lean_inc_ref(v_a_4868_);
lean_inc(v_a_4867_);
lean_inc_ref(v_a_4866_);
lean_inc(v_a_4865_);
lean_inc(v_a_4864_);
lean_inc_ref(v_p_4862_);
v___x_4876_ = lean_grind_internalize(v_p_4862_, v_generation_4861_, v___x_4875_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_);
if (lean_obj_tag(v___x_4876_) == 0)
{
lean_dec_ref_known(v___x_4876_, 1);
if (v_isNeg_4863_ == 0)
{
lean_object* v___x_4877_; 
v___x_4877_ = l_Lean_Meta_Sym_getTrueExpr___redArg(v_a_4868_);
if (lean_obj_tag(v___x_4877_) == 0)
{
lean_object* v_a_4878_; lean_object* v___x_4879_; 
v_a_4878_ = lean_ctor_get(v___x_4877_, 0);
lean_inc(v_a_4878_);
lean_dec_ref_known(v___x_4877_, 1);
v___x_4879_ = l_Lean_Meta_mkEqTrue(v_proof_4860_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_);
if (lean_obj_tag(v___x_4879_) == 0)
{
lean_object* v_a_4880_; lean_object* v___x_4881_; 
v_a_4880_ = lean_ctor_get(v___x_4879_, 0);
lean_inc(v_a_4880_);
lean_dec_ref_known(v___x_4879_, 1);
v___x_4881_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4862_, v_a_4878_, v_a_4880_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_);
return v___x_4881_;
}
else
{
lean_object* v_a_4882_; lean_object* v___x_4884_; uint8_t v_isShared_4885_; uint8_t v_isSharedCheck_4889_; 
lean_dec(v_a_4878_);
lean_dec_ref(v_p_4862_);
v_a_4882_ = lean_ctor_get(v___x_4879_, 0);
v_isSharedCheck_4889_ = !lean_is_exclusive(v___x_4879_);
if (v_isSharedCheck_4889_ == 0)
{
v___x_4884_ = v___x_4879_;
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
else
{
lean_inc(v_a_4882_);
lean_dec(v___x_4879_);
v___x_4884_ = lean_box(0);
v_isShared_4885_ = v_isSharedCheck_4889_;
goto v_resetjp_4883_;
}
v_resetjp_4883_:
{
lean_object* v___x_4887_; 
if (v_isShared_4885_ == 0)
{
v___x_4887_ = v___x_4884_;
goto v_reusejp_4886_;
}
else
{
lean_object* v_reuseFailAlloc_4888_; 
v_reuseFailAlloc_4888_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4888_, 0, v_a_4882_);
v___x_4887_ = v_reuseFailAlloc_4888_;
goto v_reusejp_4886_;
}
v_reusejp_4886_:
{
return v___x_4887_;
}
}
}
}
else
{
lean_object* v_a_4890_; lean_object* v___x_4892_; uint8_t v_isShared_4893_; uint8_t v_isSharedCheck_4897_; 
lean_dec_ref(v_p_4862_);
lean_dec_ref(v_proof_4860_);
v_a_4890_ = lean_ctor_get(v___x_4877_, 0);
v_isSharedCheck_4897_ = !lean_is_exclusive(v___x_4877_);
if (v_isSharedCheck_4897_ == 0)
{
v___x_4892_ = v___x_4877_;
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
else
{
lean_inc(v_a_4890_);
lean_dec(v___x_4877_);
v___x_4892_ = lean_box(0);
v_isShared_4893_ = v_isSharedCheck_4897_;
goto v_resetjp_4891_;
}
v_resetjp_4891_:
{
lean_object* v___x_4895_; 
if (v_isShared_4893_ == 0)
{
v___x_4895_ = v___x_4892_;
goto v_reusejp_4894_;
}
else
{
lean_object* v_reuseFailAlloc_4896_; 
v_reuseFailAlloc_4896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4896_, 0, v_a_4890_);
v___x_4895_ = v_reuseFailAlloc_4896_;
goto v_reusejp_4894_;
}
v_reusejp_4894_:
{
return v___x_4895_;
}
}
}
}
else
{
lean_object* v___x_4898_; 
v___x_4898_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_4868_);
if (lean_obj_tag(v___x_4898_) == 0)
{
lean_object* v_a_4899_; lean_object* v___x_4900_; 
v_a_4899_ = lean_ctor_get(v___x_4898_, 0);
lean_inc(v_a_4899_);
lean_dec_ref_known(v___x_4898_, 1);
v___x_4900_ = l_Lean_Meta_mkEqFalse(v_proof_4860_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_);
if (lean_obj_tag(v___x_4900_) == 0)
{
lean_object* v_a_4901_; lean_object* v___x_4902_; 
v_a_4901_ = lean_ctor_get(v___x_4900_, 0);
lean_inc(v_a_4901_);
lean_dec_ref_known(v___x_4900_, 1);
v___x_4902_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4862_, v_a_4899_, v_a_4901_, v_a_4864_, v_a_4865_, v_a_4866_, v_a_4867_, v_a_4868_, v_a_4869_, v_a_4870_, v_a_4871_, v_a_4872_, v_a_4873_);
return v___x_4902_;
}
else
{
lean_object* v_a_4903_; lean_object* v___x_4905_; uint8_t v_isShared_4906_; uint8_t v_isSharedCheck_4910_; 
lean_dec(v_a_4899_);
lean_dec_ref(v_p_4862_);
v_a_4903_ = lean_ctor_get(v___x_4900_, 0);
v_isSharedCheck_4910_ = !lean_is_exclusive(v___x_4900_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4905_ = v___x_4900_;
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
else
{
lean_inc(v_a_4903_);
lean_dec(v___x_4900_);
v___x_4905_ = lean_box(0);
v_isShared_4906_ = v_isSharedCheck_4910_;
goto v_resetjp_4904_;
}
v_resetjp_4904_:
{
lean_object* v___x_4908_; 
if (v_isShared_4906_ == 0)
{
v___x_4908_ = v___x_4905_;
goto v_reusejp_4907_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_a_4903_);
v___x_4908_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4907_;
}
v_reusejp_4907_:
{
return v___x_4908_;
}
}
}
}
else
{
lean_object* v_a_4911_; lean_object* v___x_4913_; uint8_t v_isShared_4914_; uint8_t v_isSharedCheck_4918_; 
lean_dec_ref(v_p_4862_);
lean_dec_ref(v_proof_4860_);
v_a_4911_ = lean_ctor_get(v___x_4898_, 0);
v_isSharedCheck_4918_ = !lean_is_exclusive(v___x_4898_);
if (v_isSharedCheck_4918_ == 0)
{
v___x_4913_ = v___x_4898_;
v_isShared_4914_ = v_isSharedCheck_4918_;
goto v_resetjp_4912_;
}
else
{
lean_inc(v_a_4911_);
lean_dec(v___x_4898_);
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
}
else
{
lean_dec_ref(v_p_4862_);
lean_dec_ref(v_proof_4860_);
return v___x_4876_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact___boxed(lean_object* v_proof_4919_, lean_object* v_generation_4920_, lean_object* v_p_4921_, lean_object* v_isNeg_4922_, lean_object* v_a_4923_, lean_object* v_a_4924_, lean_object* v_a_4925_, lean_object* v_a_4926_, lean_object* v_a_4927_, lean_object* v_a_4928_, lean_object* v_a_4929_, lean_object* v_a_4930_, lean_object* v_a_4931_, lean_object* v_a_4932_, lean_object* v_a_4933_){
_start:
{
uint8_t v_isNeg_boxed_4934_; lean_object* v_res_4935_; 
v_isNeg_boxed_4934_ = lean_unbox(v_isNeg_4922_);
v_res_4935_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_4919_, v_generation_4920_, v_p_4921_, v_isNeg_boxed_4934_, v_a_4923_, v_a_4924_, v_a_4925_, v_a_4926_, v_a_4927_, v_a_4928_, v_a_4929_, v_a_4930_, v_a_4931_, v_a_4932_);
lean_dec(v_a_4932_);
lean_dec_ref(v_a_4931_);
lean_dec(v_a_4930_);
lean_dec_ref(v_a_4929_);
lean_dec(v_a_4928_);
lean_dec_ref(v_a_4927_);
lean_dec(v_a_4926_);
lean_dec_ref(v_a_4925_);
lean_dec(v_a_4924_);
lean_dec(v_a_4923_);
return v_res_4935_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(lean_object* v_proof_4936_, lean_object* v_generation_4937_, lean_object* v_p_4938_, lean_object* v_lhs_4939_, lean_object* v_rhs_4940_, uint8_t v_isNeg_4941_, uint8_t v_isHEq_4942_, lean_object* v_a_4943_, lean_object* v_a_4944_, lean_object* v_a_4945_, lean_object* v_a_4946_, lean_object* v_a_4947_, lean_object* v_a_4948_, lean_object* v_a_4949_, lean_object* v_a_4950_, lean_object* v_a_4951_, lean_object* v_a_4952_){
_start:
{
if (v_isNeg_4941_ == 0)
{
lean_object* v___x_4954_; lean_object* v___x_4955_; 
lean_inc_ref(v_p_4938_);
v___x_4954_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4954_, 0, v_p_4938_);
lean_inc(v_a_4952_);
lean_inc_ref(v_a_4951_);
lean_inc(v_a_4950_);
lean_inc_ref(v_a_4949_);
lean_inc(v_a_4948_);
lean_inc_ref(v_a_4947_);
lean_inc(v_a_4946_);
lean_inc_ref(v_a_4945_);
lean_inc(v_a_4944_);
lean_inc(v_a_4943_);
lean_inc_ref(v___x_4954_);
lean_inc(v_generation_4937_);
lean_inc_ref(v_lhs_4939_);
v___x_4955_ = lean_grind_internalize(v_lhs_4939_, v_generation_4937_, v___x_4954_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4955_) == 0)
{
lean_object* v___x_4956_; 
lean_dec_ref_known(v___x_4955_, 1);
lean_inc(v_a_4952_);
lean_inc_ref(v_a_4951_);
lean_inc(v_a_4950_);
lean_inc_ref(v_a_4949_);
lean_inc(v_a_4948_);
lean_inc_ref(v_a_4947_);
lean_inc(v_a_4946_);
lean_inc_ref(v_a_4945_);
lean_inc(v_a_4944_);
lean_inc(v_a_4943_);
lean_inc_ref(v_rhs_4940_);
v___x_4956_ = lean_grind_internalize(v_rhs_4940_, v_generation_4937_, v___x_4954_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4956_) == 0)
{
lean_object* v___x_4957_; lean_object* v___x_4958_; 
lean_dec_ref_known(v___x_4956_, 1);
v___x_4957_ = lean_box(0);
v___x_4958_ = l_Lean_Meta_Grind_Solvers_internalize(v_p_4938_, v___x_4957_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4958_) == 0)
{
lean_object* v___x_4959_; 
lean_dec_ref_known(v___x_4958_, 1);
v___x_4959_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqCore(v_lhs_4939_, v_rhs_4940_, v_proof_4936_, v_isHEq_4942_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
return v___x_4959_;
}
else
{
lean_dec_ref(v_rhs_4940_);
lean_dec_ref(v_lhs_4939_);
lean_dec_ref(v_proof_4936_);
return v___x_4958_;
}
}
else
{
lean_dec_ref(v_rhs_4940_);
lean_dec_ref(v_lhs_4939_);
lean_dec_ref(v_p_4938_);
lean_dec_ref(v_proof_4936_);
return v___x_4956_;
}
}
else
{
lean_dec_ref_known(v___x_4954_, 1);
lean_dec_ref(v_rhs_4940_);
lean_dec_ref(v_lhs_4939_);
lean_dec_ref(v_p_4938_);
lean_dec(v_generation_4937_);
lean_dec_ref(v_proof_4936_);
return v___x_4955_;
}
}
else
{
lean_object* v___x_4960_; lean_object* v___x_4961_; 
lean_dec_ref(v_rhs_4940_);
lean_dec_ref(v_lhs_4939_);
v___x_4960_ = lean_box(0);
lean_inc(v_a_4952_);
lean_inc_ref(v_a_4951_);
lean_inc(v_a_4950_);
lean_inc_ref(v_a_4949_);
lean_inc(v_a_4948_);
lean_inc_ref(v_a_4947_);
lean_inc(v_a_4946_);
lean_inc_ref(v_a_4945_);
lean_inc(v_a_4944_);
lean_inc(v_a_4943_);
lean_inc_ref(v_p_4938_);
v___x_4961_ = lean_grind_internalize(v_p_4938_, v_generation_4937_, v___x_4960_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4961_) == 0)
{
lean_object* v___x_4962_; 
lean_dec_ref_known(v___x_4961_, 1);
v___x_4962_ = l_Lean_Meta_Sym_getFalseExpr___redArg(v_a_4947_);
if (lean_obj_tag(v___x_4962_) == 0)
{
lean_object* v_a_4963_; lean_object* v___x_4964_; 
v_a_4963_ = lean_ctor_get(v___x_4962_, 0);
lean_inc(v_a_4963_);
lean_dec_ref_known(v___x_4962_, 1);
v___x_4964_ = l_Lean_Meta_mkEqFalse(v_proof_4936_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
if (lean_obj_tag(v___x_4964_) == 0)
{
lean_object* v_a_4965_; lean_object* v___x_4966_; 
v_a_4965_ = lean_ctor_get(v___x_4964_, 0);
lean_inc(v_a_4965_);
lean_dec_ref_known(v___x_4964_, 1);
v___x_4966_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEq(v_p_4938_, v_a_4963_, v_a_4965_, v_a_4943_, v_a_4944_, v_a_4945_, v_a_4946_, v_a_4947_, v_a_4948_, v_a_4949_, v_a_4950_, v_a_4951_, v_a_4952_);
return v___x_4966_;
}
else
{
lean_object* v_a_4967_; lean_object* v___x_4969_; uint8_t v_isShared_4970_; uint8_t v_isSharedCheck_4974_; 
lean_dec(v_a_4963_);
lean_dec_ref(v_p_4938_);
v_a_4967_ = lean_ctor_get(v___x_4964_, 0);
v_isSharedCheck_4974_ = !lean_is_exclusive(v___x_4964_);
if (v_isSharedCheck_4974_ == 0)
{
v___x_4969_ = v___x_4964_;
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
else
{
lean_inc(v_a_4967_);
lean_dec(v___x_4964_);
v___x_4969_ = lean_box(0);
v_isShared_4970_ = v_isSharedCheck_4974_;
goto v_resetjp_4968_;
}
v_resetjp_4968_:
{
lean_object* v___x_4972_; 
if (v_isShared_4970_ == 0)
{
v___x_4972_ = v___x_4969_;
goto v_reusejp_4971_;
}
else
{
lean_object* v_reuseFailAlloc_4973_; 
v_reuseFailAlloc_4973_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4973_, 0, v_a_4967_);
v___x_4972_ = v_reuseFailAlloc_4973_;
goto v_reusejp_4971_;
}
v_reusejp_4971_:
{
return v___x_4972_;
}
}
}
}
else
{
lean_object* v_a_4975_; lean_object* v___x_4977_; uint8_t v_isShared_4978_; uint8_t v_isSharedCheck_4982_; 
lean_dec_ref(v_p_4938_);
lean_dec_ref(v_proof_4936_);
v_a_4975_ = lean_ctor_get(v___x_4962_, 0);
v_isSharedCheck_4982_ = !lean_is_exclusive(v___x_4962_);
if (v_isSharedCheck_4982_ == 0)
{
v___x_4977_ = v___x_4962_;
v_isShared_4978_ = v_isSharedCheck_4982_;
goto v_resetjp_4976_;
}
else
{
lean_inc(v_a_4975_);
lean_dec(v___x_4962_);
v___x_4977_ = lean_box(0);
v_isShared_4978_ = v_isSharedCheck_4982_;
goto v_resetjp_4976_;
}
v_resetjp_4976_:
{
lean_object* v___x_4980_; 
if (v_isShared_4978_ == 0)
{
v___x_4980_ = v___x_4977_;
goto v_reusejp_4979_;
}
else
{
lean_object* v_reuseFailAlloc_4981_; 
v_reuseFailAlloc_4981_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4981_, 0, v_a_4975_);
v___x_4980_ = v_reuseFailAlloc_4981_;
goto v_reusejp_4979_;
}
v_reusejp_4979_:
{
return v___x_4980_;
}
}
}
}
else
{
lean_dec_ref(v_p_4938_);
lean_dec_ref(v_proof_4936_);
return v___x_4961_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq___boxed(lean_object** _args){
lean_object* v_proof_4983_ = _args[0];
lean_object* v_generation_4984_ = _args[1];
lean_object* v_p_4985_ = _args[2];
lean_object* v_lhs_4986_ = _args[3];
lean_object* v_rhs_4987_ = _args[4];
lean_object* v_isNeg_4988_ = _args[5];
lean_object* v_isHEq_4989_ = _args[6];
lean_object* v_a_4990_ = _args[7];
lean_object* v_a_4991_ = _args[8];
lean_object* v_a_4992_ = _args[9];
lean_object* v_a_4993_ = _args[10];
lean_object* v_a_4994_ = _args[11];
lean_object* v_a_4995_ = _args[12];
lean_object* v_a_4996_ = _args[13];
lean_object* v_a_4997_ = _args[14];
lean_object* v_a_4998_ = _args[15];
lean_object* v_a_4999_ = _args[16];
lean_object* v_a_5000_ = _args[17];
_start:
{
uint8_t v_isNeg_boxed_5001_; uint8_t v_isHEq_boxed_5002_; lean_object* v_res_5003_; 
v_isNeg_boxed_5001_ = lean_unbox(v_isNeg_4988_);
v_isHEq_boxed_5002_ = lean_unbox(v_isHEq_4989_);
v_res_5003_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_4983_, v_generation_4984_, v_p_4985_, v_lhs_4986_, v_rhs_4987_, v_isNeg_boxed_5001_, v_isHEq_boxed_5002_, v_a_4990_, v_a_4991_, v_a_4992_, v_a_4993_, v_a_4994_, v_a_4995_, v_a_4996_, v_a_4997_, v_a_4998_, v_a_4999_);
lean_dec(v_a_4999_);
lean_dec_ref(v_a_4998_);
lean_dec(v_a_4997_);
lean_dec_ref(v_a_4996_);
lean_dec(v_a_4995_);
lean_dec_ref(v_a_4994_);
lean_dec(v_a_4993_);
lean_dec_ref(v_a_4992_);
lean_dec(v_a_4991_);
lean_dec(v_a_4990_);
return v_res_5003_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(lean_object* v_proof_5007_, lean_object* v_generation_5008_, lean_object* v_p_5009_, uint8_t v_isNeg_5010_, lean_object* v_a_5011_, lean_object* v_a_5012_, lean_object* v_a_5013_, lean_object* v_a_5014_, lean_object* v_a_5015_, lean_object* v_a_5016_, lean_object* v_a_5017_, lean_object* v_a_5018_, lean_object* v_a_5019_, lean_object* v_a_5020_){
_start:
{
lean_object* v___x_5022_; 
lean_inc_ref(v_p_5009_);
v___x_5022_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_p_5009_, v_a_5018_);
if (lean_obj_tag(v___x_5022_) == 0)
{
lean_object* v_a_5023_; lean_object* v___x_5024_; uint8_t v___x_5025_; 
v_a_5023_ = lean_ctor_get(v___x_5022_, 0);
lean_inc(v_a_5023_);
lean_dec_ref_known(v___x_5022_, 1);
v___x_5024_ = l_Lean_Expr_cleanupAnnotations(v_a_5023_);
lean_dec(v_a_5023_);
v___x_5025_ = l_Lean_Expr_isApp(v___x_5024_);
if (v___x_5025_ == 0)
{
lean_object* v___x_5026_; 
lean_dec_ref(v___x_5024_);
v___x_5026_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_5007_, v_generation_5008_, v_p_5009_, v_isNeg_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5026_;
}
else
{
lean_object* v___x_5027_; uint8_t v___x_5028_; 
v___x_5027_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5024_);
v___x_5028_ = l_Lean_Expr_isApp(v___x_5027_);
if (v___x_5028_ == 0)
{
lean_object* v___x_5029_; 
lean_dec_ref(v___x_5027_);
lean_dec_ref(v___x_5024_);
v___x_5029_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_5007_, v_generation_5008_, v_p_5009_, v_isNeg_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5029_;
}
else
{
lean_object* v___x_5030_; uint8_t v___x_5031_; 
v___x_5030_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5027_);
v___x_5031_ = l_Lean_Expr_isApp(v___x_5030_);
if (v___x_5031_ == 0)
{
lean_object* v___x_5032_; 
lean_dec_ref(v___x_5030_);
lean_dec_ref(v___x_5027_);
lean_dec_ref(v___x_5024_);
v___x_5032_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_5007_, v_generation_5008_, v_p_5009_, v_isNeg_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5032_;
}
else
{
lean_object* v_arg_5033_; lean_object* v_arg_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; uint8_t v___x_5037_; 
v_arg_5033_ = lean_ctor_get(v___x_5024_, 1);
lean_inc_ref(v_arg_5033_);
lean_dec_ref(v___x_5024_);
v_arg_5034_ = lean_ctor_get(v___x_5030_, 1);
lean_inc_ref(v_arg_5034_);
v___x_5035_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5030_);
lean_dec_ref(v___x_5030_);
v___x_5036_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep_updateRoots_spec__2___redArg___closed__1));
v___x_5037_ = l_Lean_Expr_isConstOf(v___x_5035_, v___x_5036_);
if (v___x_5037_ == 0)
{
uint8_t v___x_5038_; 
lean_dec_ref(v___x_5027_);
v___x_5038_ = l_Lean_Expr_isApp(v___x_5035_);
if (v___x_5038_ == 0)
{
lean_object* v___x_5039_; 
lean_dec_ref(v___x_5035_);
lean_dec_ref(v_arg_5034_);
lean_dec_ref(v_arg_5033_);
v___x_5039_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_5007_, v_generation_5008_, v_p_5009_, v_isNeg_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5039_;
}
else
{
lean_object* v___x_5040_; lean_object* v___x_5041_; uint8_t v___x_5042_; 
v___x_5040_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5035_);
lean_dec_ref(v___x_5035_);
v___x_5041_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___closed__1));
v___x_5042_ = l_Lean_Expr_isConstOf(v___x_5040_, v___x_5041_);
lean_dec_ref(v___x_5040_);
if (v___x_5042_ == 0)
{
lean_object* v___x_5043_; 
lean_dec_ref(v_arg_5034_);
lean_dec_ref(v_arg_5033_);
v___x_5043_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_5007_, v_generation_5008_, v_p_5009_, v_isNeg_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5043_;
}
else
{
lean_object* v___x_5044_; 
v___x_5044_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_5007_, v_generation_5008_, v_p_5009_, v_arg_5034_, v_arg_5033_, v_isNeg_5010_, v___x_5042_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5044_;
}
}
}
else
{
uint8_t v___x_5045_; 
lean_dec_ref(v___x_5035_);
v___x_5045_ = l_Lean_Expr_isProp(v_arg_5034_);
lean_dec_ref(v_arg_5034_);
if (v___x_5045_ == 0)
{
lean_object* v_arg_5046_; lean_object* v___x_5047_; 
v_arg_5046_ = lean_ctor_get(v___x_5027_, 1);
lean_inc_ref(v_arg_5046_);
lean_dec_ref(v___x_5027_);
v___x_5047_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goEq(v_proof_5007_, v_generation_5008_, v_p_5009_, v_arg_5046_, v_arg_5033_, v_isNeg_5010_, v___x_5045_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5047_;
}
else
{
lean_object* v___x_5048_; 
lean_dec_ref(v_arg_5033_);
lean_dec_ref(v___x_5027_);
v___x_5048_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_goFact(v_proof_5007_, v_generation_5008_, v_p_5009_, v_isNeg_5010_, v_a_5011_, v_a_5012_, v_a_5013_, v_a_5014_, v_a_5015_, v_a_5016_, v_a_5017_, v_a_5018_, v_a_5019_, v_a_5020_);
return v___x_5048_;
}
}
}
}
}
}
else
{
lean_object* v_a_5049_; lean_object* v___x_5051_; uint8_t v_isShared_5052_; uint8_t v_isSharedCheck_5056_; 
lean_dec_ref(v_p_5009_);
lean_dec(v_generation_5008_);
lean_dec_ref(v_proof_5007_);
v_a_5049_ = lean_ctor_get(v___x_5022_, 0);
v_isSharedCheck_5056_ = !lean_is_exclusive(v___x_5022_);
if (v_isSharedCheck_5056_ == 0)
{
v___x_5051_ = v___x_5022_;
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
else
{
lean_inc(v_a_5049_);
lean_dec(v___x_5022_);
v___x_5051_ = lean_box(0);
v_isShared_5052_ = v_isSharedCheck_5056_;
goto v_resetjp_5050_;
}
v_resetjp_5050_:
{
lean_object* v___x_5054_; 
if (v_isShared_5052_ == 0)
{
v___x_5054_ = v___x_5051_;
goto v_reusejp_5053_;
}
else
{
lean_object* v_reuseFailAlloc_5055_; 
v_reuseFailAlloc_5055_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5055_, 0, v_a_5049_);
v___x_5054_ = v_reuseFailAlloc_5055_;
goto v_reusejp_5053_;
}
v_reusejp_5053_:
{
return v___x_5054_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go___boxed(lean_object* v_proof_5057_, lean_object* v_generation_5058_, lean_object* v_p_5059_, lean_object* v_isNeg_5060_, lean_object* v_a_5061_, lean_object* v_a_5062_, lean_object* v_a_5063_, lean_object* v_a_5064_, lean_object* v_a_5065_, lean_object* v_a_5066_, lean_object* v_a_5067_, lean_object* v_a_5068_, lean_object* v_a_5069_, lean_object* v_a_5070_, lean_object* v_a_5071_){
_start:
{
uint8_t v_isNeg_boxed_5072_; lean_object* v_res_5073_; 
v_isNeg_boxed_5072_ = lean_unbox(v_isNeg_5060_);
v_res_5073_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5057_, v_generation_5058_, v_p_5059_, v_isNeg_boxed_5072_, v_a_5061_, v_a_5062_, v_a_5063_, v_a_5064_, v_a_5065_, v_a_5066_, v_a_5067_, v_a_5068_, v_a_5069_, v_a_5070_);
lean_dec(v_a_5070_);
lean_dec_ref(v_a_5069_);
lean_dec(v_a_5068_);
lean_dec_ref(v_a_5067_);
lean_dec(v_a_5066_);
lean_dec_ref(v_a_5065_);
lean_dec(v_a_5064_);
lean_dec_ref(v_a_5063_);
lean_dec(v_a_5062_);
lean_dec(v_a_5061_);
return v_res_5073_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4(void){
_start:
{
lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; 
v___x_5081_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3));
v___x_5082_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__5));
v___x_5083_ = l_Lean_Name_append(v___x_5082_, v___x_5081_);
return v___x_5083_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(lean_object* v_fact_5084_, lean_object* v_proof_5085_, lean_object* v_generation_5086_, lean_object* v_a_5087_, lean_object* v_a_5088_, lean_object* v_a_5089_, lean_object* v_a_5090_, lean_object* v_a_5091_, lean_object* v_a_5092_, lean_object* v_a_5093_, lean_object* v_a_5094_, lean_object* v_a_5095_, lean_object* v_a_5096_){
_start:
{
lean_object* v___y_5099_; lean_object* v___y_5100_; lean_object* v___y_5101_; lean_object* v___y_5102_; lean_object* v___y_5103_; lean_object* v___y_5104_; lean_object* v___y_5105_; lean_object* v___y_5106_; lean_object* v___y_5107_; lean_object* v___y_5108_; lean_object* v___y_5112_; lean_object* v___y_5113_; lean_object* v___y_5114_; lean_object* v___y_5115_; lean_object* v___y_5116_; lean_object* v___y_5117_; lean_object* v___y_5118_; lean_object* v___y_5119_; lean_object* v___y_5120_; lean_object* v___y_5121_; lean_object* v___x_5129_; lean_object* v_toCold_5130_; lean_object* v_options_5131_; uint8_t v_hasTrace_5132_; 
lean_inc_ref(v_fact_5084_);
v___x_5129_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_storeFact___redArg(v_fact_5084_, v_a_5087_);
lean_dec_ref(v___x_5129_);
v_toCold_5130_ = lean_ctor_get(v_a_5095_, 0);
v_options_5131_ = lean_ctor_get(v_toCold_5130_, 2);
v_hasTrace_5132_ = lean_ctor_get_uint8(v_options_5131_, sizeof(void*)*1);
if (v_hasTrace_5132_ == 0)
{
v___y_5112_ = v_a_5087_;
v___y_5113_ = v_a_5088_;
v___y_5114_ = v_a_5089_;
v___y_5115_ = v_a_5090_;
v___y_5116_ = v_a_5091_;
v___y_5117_ = v_a_5092_;
v___y_5118_ = v_a_5093_;
v___y_5119_ = v_a_5094_;
v___y_5120_ = v_a_5095_;
v___y_5121_ = v_a_5096_;
goto v___jp_5111_;
}
else
{
lean_object* v_inheritedTraceOptions_5133_; lean_object* v___x_5134_; lean_object* v___x_5135_; uint8_t v___x_5136_; 
v_inheritedTraceOptions_5133_ = lean_ctor_get(v_toCold_5130_, 11);
v___x_5134_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__3));
v___x_5135_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4, &l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4_once, _init_l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__4);
v___x_5136_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_5133_, v_options_5131_, v___x_5135_);
if (v___x_5136_ == 0)
{
v___y_5112_ = v_a_5087_;
v___y_5113_ = v_a_5088_;
v___y_5114_ = v_a_5089_;
v___y_5115_ = v_a_5090_;
v___y_5116_ = v_a_5091_;
v___y_5117_ = v_a_5092_;
v___y_5118_ = v_a_5093_;
v___y_5119_ = v_a_5094_;
v___y_5120_ = v_a_5095_;
v___y_5121_ = v_a_5096_;
goto v___jp_5111_;
}
else
{
lean_object* v___x_5137_; 
v___x_5137_ = l_Lean_Meta_Grind_updateLastTag(v_a_5087_, v_a_5088_, v_a_5089_, v_a_5090_, v_a_5091_, v_a_5092_, v_a_5093_, v_a_5094_, v_a_5095_, v_a_5096_);
if (lean_obj_tag(v___x_5137_) == 0)
{
lean_object* v___x_5138_; lean_object* v___x_5139_; 
lean_dec_ref_known(v___x_5137_, 1);
lean_inc_ref(v_fact_5084_);
v___x_5138_ = l_Lean_MessageData_ofExpr(v_fact_5084_);
v___x_5139_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__1___redArg(v___x_5134_, v___x_5138_, v_a_5093_, v_a_5094_, v_a_5095_, v_a_5096_);
if (lean_obj_tag(v___x_5139_) == 0)
{
lean_dec_ref_known(v___x_5139_, 1);
v___y_5112_ = v_a_5087_;
v___y_5113_ = v_a_5088_;
v___y_5114_ = v_a_5089_;
v___y_5115_ = v_a_5090_;
v___y_5116_ = v_a_5091_;
v___y_5117_ = v_a_5092_;
v___y_5118_ = v_a_5093_;
v___y_5119_ = v_a_5094_;
v___y_5120_ = v_a_5095_;
v___y_5121_ = v_a_5096_;
goto v___jp_5111_;
}
else
{
lean_dec(v_generation_5086_);
lean_dec_ref(v_proof_5085_);
lean_dec_ref(v_fact_5084_);
return v___x_5139_;
}
}
else
{
lean_dec(v_generation_5086_);
lean_dec_ref(v_proof_5085_);
lean_dec_ref(v_fact_5084_);
return v___x_5137_;
}
}
}
v___jp_5098_:
{
uint8_t v___x_5109_; lean_object* v___x_5110_; 
v___x_5109_ = 0;
v___x_5110_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5085_, v_generation_5086_, v_fact_5084_, v___x_5109_, v___y_5099_, v___y_5100_, v___y_5101_, v___y_5102_, v___y_5103_, v___y_5104_, v___y_5105_, v___y_5106_, v___y_5107_, v___y_5108_);
return v___x_5110_;
}
v___jp_5111_:
{
lean_object* v___x_5122_; uint8_t v___x_5123_; 
v___x_5122_ = l_Lean_Expr_cleanupAnnotations(v_fact_5084_);
v___x_5123_ = l_Lean_Expr_isApp(v___x_5122_);
if (v___x_5123_ == 0)
{
lean_dec_ref(v___x_5122_);
v___y_5099_ = v___y_5112_;
v___y_5100_ = v___y_5113_;
v___y_5101_ = v___y_5114_;
v___y_5102_ = v___y_5115_;
v___y_5103_ = v___y_5116_;
v___y_5104_ = v___y_5117_;
v___y_5105_ = v___y_5118_;
v___y_5106_ = v___y_5119_;
v___y_5107_ = v___y_5120_;
v___y_5108_ = v___y_5121_;
goto v___jp_5098_;
}
else
{
lean_object* v___x_5124_; lean_object* v___x_5125_; uint8_t v___x_5126_; 
v___x_5124_ = l_Lean_Expr_appFnCleanup___redArg(v___x_5122_);
v___x_5125_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___closed__1));
v___x_5126_ = l_Lean_Expr_isConstOf(v___x_5124_, v___x_5125_);
lean_dec_ref(v___x_5124_);
if (v___x_5126_ == 0)
{
lean_dec_ref(v___x_5122_);
v___y_5099_ = v___y_5112_;
v___y_5100_ = v___y_5113_;
v___y_5101_ = v___y_5114_;
v___y_5102_ = v___y_5115_;
v___y_5103_ = v___y_5116_;
v___y_5104_ = v___y_5117_;
v___y_5105_ = v___y_5118_;
v___y_5106_ = v___y_5119_;
v___y_5107_ = v___y_5120_;
v___y_5108_ = v___y_5121_;
goto v___jp_5098_;
}
else
{
lean_object* v_arg_5127_; lean_object* v___x_5128_; 
lean_dec_ref(v_fact_5084_);
v_arg_5127_ = lean_ctor_get(v___x_5122_, 1);
lean_inc_ref(v_arg_5127_);
lean_dec_ref(v___x_5122_);
v___x_5128_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep_go(v_proof_5085_, v_generation_5086_, v_arg_5127_, v___x_5126_, v___y_5112_, v___y_5113_, v___y_5114_, v___y_5115_, v___y_5116_, v___y_5117_, v___y_5118_, v___y_5119_, v___y_5120_, v___y_5121_);
return v___x_5128_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep___boxed(lean_object* v_fact_5140_, lean_object* v_proof_5141_, lean_object* v_generation_5142_, lean_object* v_a_5143_, lean_object* v_a_5144_, lean_object* v_a_5145_, lean_object* v_a_5146_, lean_object* v_a_5147_, lean_object* v_a_5148_, lean_object* v_a_5149_, lean_object* v_a_5150_, lean_object* v_a_5151_, lean_object* v_a_5152_, lean_object* v_a_5153_){
_start:
{
lean_object* v_res_5154_; 
v_res_5154_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_fact_5140_, v_proof_5141_, v_generation_5142_, v_a_5143_, v_a_5144_, v_a_5145_, v_a_5146_, v_a_5147_, v_a_5148_, v_a_5149_, v_a_5150_, v_a_5151_, v_a_5152_);
lean_dec(v_a_5152_);
lean_dec_ref(v_a_5151_);
lean_dec(v_a_5150_);
lean_dec_ref(v_a_5149_);
lean_dec(v_a_5148_);
lean_dec_ref(v_a_5147_);
lean_dec(v_a_5146_);
lean_dec_ref(v_a_5145_);
lean_dec(v_a_5144_);
lean_dec(v_a_5143_);
return v_res_5154_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg(lean_object* v___y_5158_, lean_object* v___y_5159_, lean_object* v___y_5160_, lean_object* v___y_5161_, lean_object* v___y_5162_, lean_object* v___y_5163_, lean_object* v___y_5164_, lean_object* v___y_5165_, lean_object* v___y_5166_, lean_object* v___y_5167_){
_start:
{
lean_object* v___x_5169_; 
v___x_5169_ = l_Lean_Meta_Grind_isInconsistent___redArg(v___y_5158_);
if (lean_obj_tag(v___x_5169_) == 0)
{
lean_object* v_a_5170_; uint8_t v___x_5171_; 
v_a_5170_ = lean_ctor_get(v___x_5169_, 0);
lean_inc(v_a_5170_);
lean_dec_ref_known(v___x_5169_, 1);
v___x_5171_ = lean_unbox(v_a_5170_);
if (v___x_5171_ == 0)
{
lean_object* v___x_5172_; lean_object* v___x_5173_; 
v___x_5172_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_removeParents_spec__2___redArg___closed__0));
v___x_5173_ = l_Lean_Core_checkSystem(v___x_5172_, v___y_5166_, v___y_5167_);
if (lean_obj_tag(v___x_5173_) == 0)
{
lean_object* v___x_5174_; 
lean_dec_ref_known(v___x_5173_, 1);
v___x_5174_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_popToProcess_x3f___redArg(v___y_5158_);
if (lean_obj_tag(v___x_5174_) == 0)
{
lean_object* v_a_5175_; lean_object* v___x_5177_; uint8_t v_isShared_5178_; uint8_t v_isSharedCheck_5273_; 
v_a_5175_ = lean_ctor_get(v___x_5174_, 0);
v_isSharedCheck_5273_ = !lean_is_exclusive(v___x_5174_);
if (v_isSharedCheck_5273_ == 0)
{
v___x_5177_ = v___x_5174_;
v_isShared_5178_ = v_isSharedCheck_5273_;
goto v_resetjp_5176_;
}
else
{
lean_inc(v_a_5175_);
lean_dec(v___x_5174_);
v___x_5177_ = lean_box(0);
v_isShared_5178_ = v_isSharedCheck_5273_;
goto v_resetjp_5176_;
}
v_resetjp_5176_:
{
if (lean_obj_tag(v_a_5175_) == 1)
{
lean_object* v_val_5179_; 
lean_del_object(v___x_5177_);
v_val_5179_ = lean_ctor_get(v_a_5175_, 0);
lean_inc(v_val_5179_);
lean_dec_ref_known(v_a_5175_, 1);
switch(lean_obj_tag(v_val_5179_))
{
case 0:
{
lean_object* v_lhs_5180_; lean_object* v_rhs_5181_; lean_object* v_proof_5182_; uint8_t v_isHEq_5183_; lean_object* v___x_5184_; 
lean_dec(v_a_5170_);
v_lhs_5180_ = lean_ctor_get(v_val_5179_, 0);
lean_inc_ref(v_lhs_5180_);
v_rhs_5181_ = lean_ctor_get(v_val_5179_, 1);
lean_inc_ref(v_rhs_5181_);
v_proof_5182_ = lean_ctor_get(v_val_5179_, 2);
lean_inc_ref(v_proof_5182_);
v_isHEq_5183_ = lean_ctor_get_uint8(v_val_5179_, sizeof(void*)*3);
lean_dec_ref_known(v_val_5179_, 3);
v___x_5184_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_5180_, v_rhs_5181_, v_proof_5182_, v_isHEq_5183_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
if (lean_obj_tag(v___x_5184_) == 0)
{
lean_dec_ref_known(v___x_5184_, 1);
goto _start;
}
else
{
lean_object* v_a_5186_; lean_object* v___x_5188_; uint8_t v_isShared_5189_; uint8_t v_isSharedCheck_5193_; 
v_a_5186_ = lean_ctor_get(v___x_5184_, 0);
v_isSharedCheck_5193_ = !lean_is_exclusive(v___x_5184_);
if (v_isSharedCheck_5193_ == 0)
{
v___x_5188_ = v___x_5184_;
v_isShared_5189_ = v_isSharedCheck_5193_;
goto v_resetjp_5187_;
}
else
{
lean_inc(v_a_5186_);
lean_dec(v___x_5184_);
v___x_5188_ = lean_box(0);
v_isShared_5189_ = v_isSharedCheck_5193_;
goto v_resetjp_5187_;
}
v_resetjp_5187_:
{
lean_object* v___x_5191_; 
if (v_isShared_5189_ == 0)
{
v___x_5191_ = v___x_5188_;
goto v_reusejp_5190_;
}
else
{
lean_object* v_reuseFailAlloc_5192_; 
v_reuseFailAlloc_5192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5192_, 0, v_a_5186_);
v___x_5191_ = v_reuseFailAlloc_5192_;
goto v_reusejp_5190_;
}
v_reusejp_5190_:
{
return v___x_5191_;
}
}
}
}
case 1:
{
lean_object* v_prop_5194_; lean_object* v_proof_5195_; lean_object* v_generation_5196_; lean_object* v___x_5197_; 
lean_dec(v_a_5170_);
v_prop_5194_ = lean_ctor_get(v_val_5179_, 0);
lean_inc_ref(v_prop_5194_);
v_proof_5195_ = lean_ctor_get(v_val_5179_, 1);
lean_inc_ref(v_proof_5195_);
v_generation_5196_ = lean_ctor_get(v_val_5179_, 2);
lean_inc(v_generation_5196_);
lean_dec_ref_known(v_val_5179_, 3);
v___x_5197_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_prop_5194_, v_proof_5195_, v_generation_5196_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
if (lean_obj_tag(v___x_5197_) == 0)
{
lean_dec_ref_known(v___x_5197_, 1);
goto _start;
}
else
{
lean_object* v_a_5199_; lean_object* v___x_5201_; uint8_t v_isShared_5202_; uint8_t v_isSharedCheck_5206_; 
v_a_5199_ = lean_ctor_get(v___x_5197_, 0);
v_isSharedCheck_5206_ = !lean_is_exclusive(v___x_5197_);
if (v_isSharedCheck_5206_ == 0)
{
v___x_5201_ = v___x_5197_;
v_isShared_5202_ = v_isSharedCheck_5206_;
goto v_resetjp_5200_;
}
else
{
lean_inc(v_a_5199_);
lean_dec(v___x_5197_);
v___x_5201_ = lean_box(0);
v_isShared_5202_ = v_isSharedCheck_5206_;
goto v_resetjp_5200_;
}
v_resetjp_5200_:
{
lean_object* v___x_5204_; 
if (v_isShared_5202_ == 0)
{
v___x_5204_ = v___x_5201_;
goto v_reusejp_5203_;
}
else
{
lean_object* v_reuseFailAlloc_5205_; 
v_reuseFailAlloc_5205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5205_, 0, v_a_5199_);
v___x_5204_ = v_reuseFailAlloc_5205_;
goto v_reusejp_5203_;
}
v_reusejp_5203_:
{
return v___x_5204_;
}
}
}
}
case 2:
{
lean_object* v_e_5207_; lean_object* v___x_5208_; 
lean_dec(v_a_5170_);
v_e_5207_ = lean_ctor_get(v_val_5179_, 0);
lean_inc_ref(v_e_5207_);
lean_dec_ref_known(v_val_5179_, 1);
v___x_5208_ = l_Lean_Meta_Grind_propagateUp(v_e_5207_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
if (lean_obj_tag(v___x_5208_) == 0)
{
lean_dec_ref_known(v___x_5208_, 1);
goto _start;
}
else
{
lean_object* v_a_5210_; lean_object* v___x_5212_; uint8_t v_isShared_5213_; uint8_t v_isSharedCheck_5217_; 
v_a_5210_ = lean_ctor_get(v___x_5208_, 0);
v_isSharedCheck_5217_ = !lean_is_exclusive(v___x_5208_);
if (v_isSharedCheck_5217_ == 0)
{
v___x_5212_ = v___x_5208_;
v_isShared_5213_ = v_isSharedCheck_5217_;
goto v_resetjp_5211_;
}
else
{
lean_inc(v_a_5210_);
lean_dec(v___x_5208_);
v___x_5212_ = lean_box(0);
v_isShared_5213_ = v_isSharedCheck_5217_;
goto v_resetjp_5211_;
}
v_resetjp_5211_:
{
lean_object* v___x_5215_; 
if (v_isShared_5213_ == 0)
{
v___x_5215_ = v___x_5212_;
goto v_reusejp_5214_;
}
else
{
lean_object* v_reuseFailAlloc_5216_; 
v_reuseFailAlloc_5216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5216_, 0, v_a_5210_);
v___x_5215_ = v_reuseFailAlloc_5216_;
goto v_reusejp_5214_;
}
v_reusejp_5214_:
{
return v___x_5215_;
}
}
}
}
case 3:
{
lean_object* v_lhs_5218_; lean_object* v_rhs_5219_; lean_object* v_proof_5220_; lean_object* v_generation_5221_; lean_object* v___x_5222_; lean_object* v___x_5223_; 
v_lhs_5218_ = lean_ctor_get(v_val_5179_, 0);
lean_inc_ref(v_lhs_5218_);
v_rhs_5219_ = lean_ctor_get(v_val_5179_, 1);
lean_inc_ref_n(v_rhs_5219_, 2);
v_proof_5220_ = lean_ctor_get(v_val_5179_, 2);
lean_inc_ref(v_proof_5220_);
v_generation_5221_ = lean_ctor_get(v_val_5179_, 3);
lean_inc(v_generation_5221_);
lean_dec_ref_known(v_val_5179_, 4);
v___x_5222_ = lean_box(0);
lean_inc(v___y_5167_);
lean_inc_ref(v___y_5166_);
lean_inc(v___y_5165_);
lean_inc_ref(v___y_5164_);
lean_inc(v___y_5163_);
lean_inc_ref(v___y_5162_);
lean_inc(v___y_5161_);
lean_inc_ref(v___y_5160_);
lean_inc(v___y_5159_);
lean_inc(v___y_5158_);
v___x_5223_ = lean_grind_internalize(v_rhs_5219_, v_generation_5221_, v___x_5222_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
if (lean_obj_tag(v___x_5223_) == 0)
{
uint8_t v___x_5224_; lean_object* v___x_5225_; 
lean_dec_ref_known(v___x_5223_, 1);
v___x_5224_ = lean_unbox(v_a_5170_);
lean_dec(v_a_5170_);
v___x_5225_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addEqStep(v_lhs_5218_, v_rhs_5219_, v_proof_5220_, v___x_5224_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
if (lean_obj_tag(v___x_5225_) == 0)
{
lean_dec_ref_known(v___x_5225_, 1);
goto _start;
}
else
{
lean_object* v_a_5227_; lean_object* v___x_5229_; uint8_t v_isShared_5230_; uint8_t v_isSharedCheck_5234_; 
v_a_5227_ = lean_ctor_get(v___x_5225_, 0);
v_isSharedCheck_5234_ = !lean_is_exclusive(v___x_5225_);
if (v_isSharedCheck_5234_ == 0)
{
v___x_5229_ = v___x_5225_;
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
else
{
lean_inc(v_a_5227_);
lean_dec(v___x_5225_);
v___x_5229_ = lean_box(0);
v_isShared_5230_ = v_isSharedCheck_5234_;
goto v_resetjp_5228_;
}
v_resetjp_5228_:
{
lean_object* v___x_5232_; 
if (v_isShared_5230_ == 0)
{
v___x_5232_ = v___x_5229_;
goto v_reusejp_5231_;
}
else
{
lean_object* v_reuseFailAlloc_5233_; 
v_reuseFailAlloc_5233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5233_, 0, v_a_5227_);
v___x_5232_ = v_reuseFailAlloc_5233_;
goto v_reusejp_5231_;
}
v_reusejp_5231_:
{
return v___x_5232_;
}
}
}
}
else
{
lean_object* v_a_5235_; lean_object* v___x_5237_; uint8_t v_isShared_5238_; uint8_t v_isSharedCheck_5242_; 
lean_dec_ref(v_proof_5220_);
lean_dec_ref(v_rhs_5219_);
lean_dec_ref(v_lhs_5218_);
lean_dec(v_a_5170_);
v_a_5235_ = lean_ctor_get(v___x_5223_, 0);
v_isSharedCheck_5242_ = !lean_is_exclusive(v___x_5223_);
if (v_isSharedCheck_5242_ == 0)
{
v___x_5237_ = v___x_5223_;
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
else
{
lean_inc(v_a_5235_);
lean_dec(v___x_5223_);
v___x_5237_ = lean_box(0);
v_isShared_5238_ = v_isSharedCheck_5242_;
goto v_resetjp_5236_;
}
v_resetjp_5236_:
{
lean_object* v___x_5240_; 
if (v_isShared_5238_ == 0)
{
v___x_5240_ = v___x_5237_;
goto v_reusejp_5239_;
}
else
{
lean_object* v_reuseFailAlloc_5241_; 
v_reuseFailAlloc_5241_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5241_, 0, v_a_5235_);
v___x_5240_ = v_reuseFailAlloc_5241_;
goto v_reusejp_5239_;
}
v_reusejp_5239_:
{
return v___x_5240_;
}
}
}
}
case 4:
{
lean_object* v_solverId_5243_; lean_object* v_lhs_5244_; lean_object* v_rhs_5245_; lean_object* v___x_5246_; 
lean_dec(v_a_5170_);
v_solverId_5243_ = lean_ctor_get(v_val_5179_, 0);
lean_inc(v_solverId_5243_);
v_lhs_5244_ = lean_ctor_get(v_val_5179_, 1);
lean_inc_ref(v_lhs_5244_);
v_rhs_5245_ = lean_ctor_get(v_val_5179_, 2);
lean_inc_ref(v_rhs_5245_);
lean_dec_ref_known(v_val_5179_, 3);
v___x_5246_ = l_Lean_Meta_Grind_Solvers_newEq(v_solverId_5243_, v_lhs_5244_, v_rhs_5245_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
lean_dec(v_solverId_5243_);
if (lean_obj_tag(v___x_5246_) == 0)
{
lean_dec_ref_known(v___x_5246_, 1);
goto _start;
}
else
{
lean_object* v_a_5248_; lean_object* v___x_5250_; uint8_t v_isShared_5251_; uint8_t v_isSharedCheck_5255_; 
v_a_5248_ = lean_ctor_get(v___x_5246_, 0);
v_isSharedCheck_5255_ = !lean_is_exclusive(v___x_5246_);
if (v_isSharedCheck_5255_ == 0)
{
v___x_5250_ = v___x_5246_;
v_isShared_5251_ = v_isSharedCheck_5255_;
goto v_resetjp_5249_;
}
else
{
lean_inc(v_a_5248_);
lean_dec(v___x_5246_);
v___x_5250_ = lean_box(0);
v_isShared_5251_ = v_isSharedCheck_5255_;
goto v_resetjp_5249_;
}
v_resetjp_5249_:
{
lean_object* v___x_5253_; 
if (v_isShared_5251_ == 0)
{
v___x_5253_ = v___x_5250_;
goto v_reusejp_5252_;
}
else
{
lean_object* v_reuseFailAlloc_5254_; 
v_reuseFailAlloc_5254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5254_, 0, v_a_5248_);
v___x_5253_ = v_reuseFailAlloc_5254_;
goto v_reusejp_5252_;
}
v_reusejp_5252_:
{
return v___x_5253_;
}
}
}
}
default: 
{
lean_object* v_solverId_5256_; lean_object* v_lhs_5257_; lean_object* v_rhs_5258_; lean_object* v___x_5259_; 
lean_dec(v_a_5170_);
v_solverId_5256_ = lean_ctor_get(v_val_5179_, 0);
lean_inc(v_solverId_5256_);
v_lhs_5257_ = lean_ctor_get(v_val_5179_, 1);
lean_inc_ref(v_lhs_5257_);
v_rhs_5258_ = lean_ctor_get(v_val_5179_, 2);
lean_inc_ref(v_rhs_5258_);
lean_dec_ref_known(v_val_5179_, 3);
v___x_5259_ = l_Lean_Meta_Grind_Solvers_newDiseq(v_solverId_5256_, v_lhs_5257_, v_rhs_5258_, v___y_5158_, v___y_5159_, v___y_5160_, v___y_5161_, v___y_5162_, v___y_5163_, v___y_5164_, v___y_5165_, v___y_5166_, v___y_5167_);
lean_dec(v_solverId_5256_);
if (lean_obj_tag(v___x_5259_) == 0)
{
lean_dec_ref_known(v___x_5259_, 1);
goto _start;
}
else
{
lean_object* v_a_5261_; lean_object* v___x_5263_; uint8_t v_isShared_5264_; uint8_t v_isSharedCheck_5268_; 
v_a_5261_ = lean_ctor_get(v___x_5259_, 0);
v_isSharedCheck_5268_ = !lean_is_exclusive(v___x_5259_);
if (v_isSharedCheck_5268_ == 0)
{
v___x_5263_ = v___x_5259_;
v_isShared_5264_ = v_isSharedCheck_5268_;
goto v_resetjp_5262_;
}
else
{
lean_inc(v_a_5261_);
lean_dec(v___x_5259_);
v___x_5263_ = lean_box(0);
v_isShared_5264_ = v_isSharedCheck_5268_;
goto v_resetjp_5262_;
}
v_resetjp_5262_:
{
lean_object* v___x_5266_; 
if (v_isShared_5264_ == 0)
{
v___x_5266_ = v___x_5263_;
goto v_reusejp_5265_;
}
else
{
lean_object* v_reuseFailAlloc_5267_; 
v_reuseFailAlloc_5267_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5267_, 0, v_a_5261_);
v___x_5266_ = v_reuseFailAlloc_5267_;
goto v_reusejp_5265_;
}
v_reusejp_5265_:
{
return v___x_5266_;
}
}
}
}
}
}
else
{
lean_object* v___x_5269_; lean_object* v___x_5271_; 
lean_dec(v_a_5175_);
lean_dec(v_a_5170_);
v___x_5269_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg___closed__0));
if (v_isShared_5178_ == 0)
{
lean_ctor_set(v___x_5177_, 0, v___x_5269_);
v___x_5271_ = v___x_5177_;
goto v_reusejp_5270_;
}
else
{
lean_object* v_reuseFailAlloc_5272_; 
v_reuseFailAlloc_5272_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5272_, 0, v___x_5269_);
v___x_5271_ = v_reuseFailAlloc_5272_;
goto v_reusejp_5270_;
}
v_reusejp_5270_:
{
return v___x_5271_;
}
}
}
}
else
{
lean_object* v_a_5274_; lean_object* v___x_5276_; uint8_t v_isShared_5277_; uint8_t v_isSharedCheck_5281_; 
lean_dec(v_a_5170_);
v_a_5274_ = lean_ctor_get(v___x_5174_, 0);
v_isSharedCheck_5281_ = !lean_is_exclusive(v___x_5174_);
if (v_isSharedCheck_5281_ == 0)
{
v___x_5276_ = v___x_5174_;
v_isShared_5277_ = v_isSharedCheck_5281_;
goto v_resetjp_5275_;
}
else
{
lean_inc(v_a_5274_);
lean_dec(v___x_5174_);
v___x_5276_ = lean_box(0);
v_isShared_5277_ = v_isSharedCheck_5281_;
goto v_resetjp_5275_;
}
v_resetjp_5275_:
{
lean_object* v___x_5279_; 
if (v_isShared_5277_ == 0)
{
v___x_5279_ = v___x_5276_;
goto v_reusejp_5278_;
}
else
{
lean_object* v_reuseFailAlloc_5280_; 
v_reuseFailAlloc_5280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5280_, 0, v_a_5274_);
v___x_5279_ = v_reuseFailAlloc_5280_;
goto v_reusejp_5278_;
}
v_reusejp_5278_:
{
return v___x_5279_;
}
}
}
}
else
{
lean_object* v_a_5282_; lean_object* v___x_5284_; uint8_t v_isShared_5285_; uint8_t v_isSharedCheck_5289_; 
lean_dec(v_a_5170_);
v_a_5282_ = lean_ctor_get(v___x_5173_, 0);
v_isSharedCheck_5289_ = !lean_is_exclusive(v___x_5173_);
if (v_isSharedCheck_5289_ == 0)
{
v___x_5284_ = v___x_5173_;
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
else
{
lean_inc(v_a_5282_);
lean_dec(v___x_5173_);
v___x_5284_ = lean_box(0);
v_isShared_5285_ = v_isSharedCheck_5289_;
goto v_resetjp_5283_;
}
v_resetjp_5283_:
{
lean_object* v___x_5287_; 
if (v_isShared_5285_ == 0)
{
v___x_5287_ = v___x_5284_;
goto v_reusejp_5286_;
}
else
{
lean_object* v_reuseFailAlloc_5288_; 
v_reuseFailAlloc_5288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5288_, 0, v_a_5282_);
v___x_5287_ = v_reuseFailAlloc_5288_;
goto v_reusejp_5286_;
}
v_reusejp_5286_:
{
return v___x_5287_;
}
}
}
}
else
{
lean_object* v___x_5290_; 
lean_dec(v_a_5170_);
v___x_5290_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_resetToProcess___redArg(v___y_5158_);
if (lean_obj_tag(v___x_5290_) == 0)
{
lean_object* v___x_5292_; uint8_t v_isShared_5293_; uint8_t v_isSharedCheck_5298_; 
v_isSharedCheck_5298_ = !lean_is_exclusive(v___x_5290_);
if (v_isSharedCheck_5298_ == 0)
{
lean_object* v_unused_5299_; 
v_unused_5299_ = lean_ctor_get(v___x_5290_, 0);
lean_dec(v_unused_5299_);
v___x_5292_ = v___x_5290_;
v_isShared_5293_ = v_isSharedCheck_5298_;
goto v_resetjp_5291_;
}
else
{
lean_dec(v___x_5290_);
v___x_5292_ = lean_box(0);
v_isShared_5293_ = v_isSharedCheck_5298_;
goto v_resetjp_5291_;
}
v_resetjp_5291_:
{
lean_object* v___x_5294_; lean_object* v___x_5296_; 
v___x_5294_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg___closed__0));
if (v_isShared_5293_ == 0)
{
lean_ctor_set(v___x_5292_, 0, v___x_5294_);
v___x_5296_ = v___x_5292_;
goto v_reusejp_5295_;
}
else
{
lean_object* v_reuseFailAlloc_5297_; 
v_reuseFailAlloc_5297_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5297_, 0, v___x_5294_);
v___x_5296_ = v_reuseFailAlloc_5297_;
goto v_reusejp_5295_;
}
v_reusejp_5295_:
{
return v___x_5296_;
}
}
}
else
{
lean_object* v_a_5300_; lean_object* v___x_5302_; uint8_t v_isShared_5303_; uint8_t v_isSharedCheck_5307_; 
v_a_5300_ = lean_ctor_get(v___x_5290_, 0);
v_isSharedCheck_5307_ = !lean_is_exclusive(v___x_5290_);
if (v_isSharedCheck_5307_ == 0)
{
v___x_5302_ = v___x_5290_;
v_isShared_5303_ = v_isSharedCheck_5307_;
goto v_resetjp_5301_;
}
else
{
lean_inc(v_a_5300_);
lean_dec(v___x_5290_);
v___x_5302_ = lean_box(0);
v_isShared_5303_ = v_isSharedCheck_5307_;
goto v_resetjp_5301_;
}
v_resetjp_5301_:
{
lean_object* v___x_5305_; 
if (v_isShared_5303_ == 0)
{
v___x_5305_ = v___x_5302_;
goto v_reusejp_5304_;
}
else
{
lean_object* v_reuseFailAlloc_5306_; 
v_reuseFailAlloc_5306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5306_, 0, v_a_5300_);
v___x_5305_ = v_reuseFailAlloc_5306_;
goto v_reusejp_5304_;
}
v_reusejp_5304_:
{
return v___x_5305_;
}
}
}
}
}
else
{
lean_object* v_a_5308_; lean_object* v___x_5310_; uint8_t v_isShared_5311_; uint8_t v_isSharedCheck_5315_; 
v_a_5308_ = lean_ctor_get(v___x_5169_, 0);
v_isSharedCheck_5315_ = !lean_is_exclusive(v___x_5169_);
if (v_isSharedCheck_5315_ == 0)
{
v___x_5310_ = v___x_5169_;
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
else
{
lean_inc(v_a_5308_);
lean_dec(v___x_5169_);
v___x_5310_ = lean_box(0);
v_isShared_5311_ = v_isSharedCheck_5315_;
goto v_resetjp_5309_;
}
v_resetjp_5309_:
{
lean_object* v___x_5313_; 
if (v_isShared_5311_ == 0)
{
v___x_5313_ = v___x_5310_;
goto v_reusejp_5312_;
}
else
{
lean_object* v_reuseFailAlloc_5314_; 
v_reuseFailAlloc_5314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5314_, 0, v_a_5308_);
v___x_5313_ = v_reuseFailAlloc_5314_;
goto v_reusejp_5312_;
}
v_reusejp_5312_:
{
return v___x_5313_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg___boxed(lean_object* v___y_5316_, lean_object* v___y_5317_, lean_object* v___y_5318_, lean_object* v___y_5319_, lean_object* v___y_5320_, lean_object* v___y_5321_, lean_object* v___y_5322_, lean_object* v___y_5323_, lean_object* v___y_5324_, lean_object* v___y_5325_, lean_object* v___y_5326_){
_start:
{
lean_object* v_res_5327_; 
v_res_5327_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg(v___y_5316_, v___y_5317_, v___y_5318_, v___y_5319_, v___y_5320_, v___y_5321_, v___y_5322_, v___y_5323_, v___y_5324_, v___y_5325_);
lean_dec(v___y_5325_);
lean_dec_ref(v___y_5324_);
lean_dec(v___y_5323_);
lean_dec_ref(v___y_5322_);
lean_dec(v___y_5321_);
lean_dec_ref(v___y_5320_);
lean_dec(v___y_5319_);
lean_dec_ref(v___y_5318_);
lean_dec(v___y_5317_);
lean_dec(v___y_5316_);
return v_res_5327_;
}
}
LEAN_EXPORT lean_object* lean_grind_process_to_do(lean_object* v_a_5328_, lean_object* v_a_5329_, lean_object* v_a_5330_, lean_object* v_a_5331_, lean_object* v_a_5332_, lean_object* v_a_5333_, lean_object* v_a_5334_, lean_object* v_a_5335_, lean_object* v_a_5336_, lean_object* v_a_5337_){
_start:
{
lean_object* v___x_5339_; lean_object* v___x_5340_; 
v___x_5339_ = lean_box(0);
v___x_5340_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg(v_a_5328_, v_a_5329_, v_a_5330_, v_a_5331_, v_a_5332_, v_a_5333_, v_a_5334_, v_a_5335_, v_a_5336_, v_a_5337_);
lean_dec(v_a_5337_);
lean_dec_ref(v_a_5336_);
lean_dec(v_a_5335_);
lean_dec_ref(v_a_5334_);
lean_dec(v_a_5333_);
lean_dec_ref(v_a_5332_);
lean_dec(v_a_5331_);
lean_dec_ref(v_a_5330_);
lean_dec(v_a_5329_);
lean_dec(v_a_5328_);
if (lean_obj_tag(v___x_5340_) == 0)
{
lean_object* v_a_5341_; lean_object* v___x_5343_; uint8_t v_isShared_5344_; uint8_t v_isSharedCheck_5353_; 
v_a_5341_ = lean_ctor_get(v___x_5340_, 0);
v_isSharedCheck_5353_ = !lean_is_exclusive(v___x_5340_);
if (v_isSharedCheck_5353_ == 0)
{
v___x_5343_ = v___x_5340_;
v_isShared_5344_ = v_isSharedCheck_5353_;
goto v_resetjp_5342_;
}
else
{
lean_inc(v_a_5341_);
lean_dec(v___x_5340_);
v___x_5343_ = lean_box(0);
v_isShared_5344_ = v_isSharedCheck_5353_;
goto v_resetjp_5342_;
}
v_resetjp_5342_:
{
lean_object* v_fst_5345_; 
v_fst_5345_ = lean_ctor_get(v_a_5341_, 0);
lean_inc(v_fst_5345_);
lean_dec(v_a_5341_);
if (lean_obj_tag(v_fst_5345_) == 0)
{
lean_object* v___x_5347_; 
if (v_isShared_5344_ == 0)
{
lean_ctor_set(v___x_5343_, 0, v___x_5339_);
v___x_5347_ = v___x_5343_;
goto v_reusejp_5346_;
}
else
{
lean_object* v_reuseFailAlloc_5348_; 
v_reuseFailAlloc_5348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5348_, 0, v___x_5339_);
v___x_5347_ = v_reuseFailAlloc_5348_;
goto v_reusejp_5346_;
}
v_reusejp_5346_:
{
return v___x_5347_;
}
}
else
{
lean_object* v_val_5349_; lean_object* v___x_5351_; 
v_val_5349_ = lean_ctor_get(v_fst_5345_, 0);
lean_inc(v_val_5349_);
lean_dec_ref_known(v_fst_5345_, 1);
if (v_isShared_5344_ == 0)
{
lean_ctor_set(v___x_5343_, 0, v_val_5349_);
v___x_5351_ = v___x_5343_;
goto v_reusejp_5350_;
}
else
{
lean_object* v_reuseFailAlloc_5352_; 
v_reuseFailAlloc_5352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5352_, 0, v_val_5349_);
v___x_5351_ = v_reuseFailAlloc_5352_;
goto v_reusejp_5350_;
}
v_reusejp_5350_:
{
return v___x_5351_;
}
}
}
}
else
{
lean_object* v_a_5354_; lean_object* v___x_5356_; uint8_t v_isShared_5357_; uint8_t v_isSharedCheck_5361_; 
v_a_5354_ = lean_ctor_get(v___x_5340_, 0);
v_isSharedCheck_5361_ = !lean_is_exclusive(v___x_5340_);
if (v_isSharedCheck_5361_ == 0)
{
v___x_5356_ = v___x_5340_;
v_isShared_5357_ = v_isSharedCheck_5361_;
goto v_resetjp_5355_;
}
else
{
lean_inc(v_a_5354_);
lean_dec(v___x_5340_);
v___x_5356_ = lean_box(0);
v_isShared_5357_ = v_isSharedCheck_5361_;
goto v_resetjp_5355_;
}
v_resetjp_5355_:
{
lean_object* v___x_5359_; 
if (v_isShared_5357_ == 0)
{
v___x_5359_ = v___x_5356_;
goto v_reusejp_5358_;
}
else
{
lean_object* v_reuseFailAlloc_5360_; 
v_reuseFailAlloc_5360_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5360_, 0, v_a_5354_);
v___x_5359_ = v_reuseFailAlloc_5360_;
goto v_reusejp_5358_;
}
v_reusejp_5358_:
{
return v___x_5359_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl___boxed(lean_object* v_a_5362_, lean_object* v_a_5363_, lean_object* v_a_5364_, lean_object* v_a_5365_, lean_object* v_a_5366_, lean_object* v_a_5367_, lean_object* v_a_5368_, lean_object* v_a_5369_, lean_object* v_a_5370_, lean_object* v_a_5371_, lean_object* v_a_5372_){
_start:
{
lean_object* v_res_5373_; 
v_res_5373_ = lean_grind_process_to_do(v_a_5362_, v_a_5363_, v_a_5364_, v_a_5365_, v_a_5366_, v_a_5367_, v_a_5368_, v_a_5369_, v_a_5370_, v_a_5371_);
return v_res_5373_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0(lean_object* v_inst_5374_, lean_object* v_a_5375_, lean_object* v___y_5376_, lean_object* v___y_5377_, lean_object* v___y_5378_, lean_object* v___y_5379_, lean_object* v___y_5380_, lean_object* v___y_5381_, lean_object* v___y_5382_, lean_object* v___y_5383_, lean_object* v___y_5384_, lean_object* v___y_5385_){
_start:
{
lean_object* v___x_5387_; 
v___x_5387_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___redArg(v___y_5376_, v___y_5377_, v___y_5378_, v___y_5379_, v___y_5380_, v___y_5381_, v___y_5382_, v___y_5383_, v___y_5384_, v___y_5385_);
return v___x_5387_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0___boxed(lean_object* v_inst_5388_, lean_object* v_a_5389_, lean_object* v___y_5390_, lean_object* v___y_5391_, lean_object* v___y_5392_, lean_object* v___y_5393_, lean_object* v___y_5394_, lean_object* v___y_5395_, lean_object* v___y_5396_, lean_object* v___y_5397_, lean_object* v___y_5398_, lean_object* v___y_5399_, lean_object* v___y_5400_){
_start:
{
lean_object* v_res_5401_; 
v_res_5401_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_processToDoImpl_spec__0(v_inst_5388_, v_a_5389_, v___y_5390_, v___y_5391_, v___y_5392_, v___y_5393_, v___y_5394_, v___y_5395_, v___y_5396_, v___y_5397_, v___y_5398_, v___y_5399_);
lean_dec(v___y_5399_);
lean_dec_ref(v___y_5398_);
lean_dec(v___y_5397_);
lean_dec_ref(v___y_5396_);
lean_dec(v___y_5395_);
lean_dec_ref(v___y_5394_);
lean_dec(v___y_5393_);
lean_dec_ref(v___y_5392_);
lean_dec(v___y_5391_);
lean_dec(v___y_5390_);
lean_dec_ref(v_a_5389_);
return v_res_5401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add(lean_object* v_fact_5402_, lean_object* v_proof_5403_, lean_object* v_generation_5404_, lean_object* v_a_5405_, lean_object* v_a_5406_, lean_object* v_a_5407_, lean_object* v_a_5408_, lean_object* v_a_5409_, lean_object* v_a_5410_, lean_object* v_a_5411_, lean_object* v_a_5412_, lean_object* v_a_5413_, lean_object* v_a_5414_){
_start:
{
uint8_t v___x_5419_; 
v___x_5419_ = l_Lean_Expr_isTrue(v_fact_5402_);
if (v___x_5419_ == 0)
{
lean_object* v___x_5420_; 
v___x_5420_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_5405_);
if (lean_obj_tag(v___x_5420_) == 0)
{
lean_object* v_a_5421_; uint8_t v___x_5422_; 
v_a_5421_ = lean_ctor_get(v___x_5420_, 0);
lean_inc(v_a_5421_);
lean_dec_ref_known(v___x_5420_, 1);
v___x_5422_ = lean_unbox(v_a_5421_);
lean_dec(v_a_5421_);
if (v___x_5422_ == 0)
{
lean_object* v___x_5423_; 
lean_inc(v_a_5414_);
lean_inc_ref(v_a_5413_);
lean_inc(v_a_5412_);
lean_inc_ref(v_a_5411_);
lean_inc(v_a_5410_);
lean_inc_ref(v_a_5409_);
lean_inc(v_a_5408_);
lean_inc_ref(v_a_5407_);
lean_inc(v_a_5406_);
lean_inc(v_a_5405_);
v___x_5423_ = lean_grind_process_to_do(v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_, v_a_5413_, v_a_5414_);
if (lean_obj_tag(v___x_5423_) == 0)
{
lean_object* v___x_5424_; 
lean_dec_ref_known(v___x_5423_, 1);
v___x_5424_ = l_Lean_Meta_Grind_isInconsistent___redArg(v_a_5405_);
if (lean_obj_tag(v___x_5424_) == 0)
{
lean_object* v_a_5425_; uint8_t v___x_5426_; 
v_a_5425_ = lean_ctor_get(v___x_5424_, 0);
lean_inc(v_a_5425_);
lean_dec_ref_known(v___x_5424_, 1);
v___x_5426_ = lean_unbox(v_a_5425_);
lean_dec(v_a_5425_);
if (v___x_5426_ == 0)
{
lean_object* v___x_5427_; 
v___x_5427_ = l___private_Lean_Meta_Tactic_Grind_Core_0__Lean_Meta_Grind_addFactStep(v_fact_5402_, v_proof_5403_, v_generation_5404_, v_a_5405_, v_a_5406_, v_a_5407_, v_a_5408_, v_a_5409_, v_a_5410_, v_a_5411_, v_a_5412_, v_a_5413_, v_a_5414_);
return v___x_5427_;
}
else
{
lean_dec(v_generation_5404_);
lean_dec_ref(v_proof_5403_);
lean_dec_ref(v_fact_5402_);
goto v___jp_5416_;
}
}
else
{
lean_object* v_a_5428_; lean_object* v___x_5430_; uint8_t v_isShared_5431_; uint8_t v_isSharedCheck_5435_; 
lean_dec(v_generation_5404_);
lean_dec_ref(v_proof_5403_);
lean_dec_ref(v_fact_5402_);
v_a_5428_ = lean_ctor_get(v___x_5424_, 0);
v_isSharedCheck_5435_ = !lean_is_exclusive(v___x_5424_);
if (v_isSharedCheck_5435_ == 0)
{
v___x_5430_ = v___x_5424_;
v_isShared_5431_ = v_isSharedCheck_5435_;
goto v_resetjp_5429_;
}
else
{
lean_inc(v_a_5428_);
lean_dec(v___x_5424_);
v___x_5430_ = lean_box(0);
v_isShared_5431_ = v_isSharedCheck_5435_;
goto v_resetjp_5429_;
}
v_resetjp_5429_:
{
lean_object* v___x_5433_; 
if (v_isShared_5431_ == 0)
{
v___x_5433_ = v___x_5430_;
goto v_reusejp_5432_;
}
else
{
lean_object* v_reuseFailAlloc_5434_; 
v_reuseFailAlloc_5434_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5434_, 0, v_a_5428_);
v___x_5433_ = v_reuseFailAlloc_5434_;
goto v_reusejp_5432_;
}
v_reusejp_5432_:
{
return v___x_5433_;
}
}
}
}
else
{
lean_dec(v_generation_5404_);
lean_dec_ref(v_proof_5403_);
lean_dec_ref(v_fact_5402_);
return v___x_5423_;
}
}
else
{
lean_dec(v_generation_5404_);
lean_dec_ref(v_proof_5403_);
lean_dec_ref(v_fact_5402_);
goto v___jp_5416_;
}
}
else
{
lean_object* v_a_5436_; lean_object* v___x_5438_; uint8_t v_isShared_5439_; uint8_t v_isSharedCheck_5443_; 
lean_dec(v_generation_5404_);
lean_dec_ref(v_proof_5403_);
lean_dec_ref(v_fact_5402_);
v_a_5436_ = lean_ctor_get(v___x_5420_, 0);
v_isSharedCheck_5443_ = !lean_is_exclusive(v___x_5420_);
if (v_isSharedCheck_5443_ == 0)
{
v___x_5438_ = v___x_5420_;
v_isShared_5439_ = v_isSharedCheck_5443_;
goto v_resetjp_5437_;
}
else
{
lean_inc(v_a_5436_);
lean_dec(v___x_5420_);
v___x_5438_ = lean_box(0);
v_isShared_5439_ = v_isSharedCheck_5443_;
goto v_resetjp_5437_;
}
v_resetjp_5437_:
{
lean_object* v___x_5441_; 
if (v_isShared_5439_ == 0)
{
v___x_5441_ = v___x_5438_;
goto v_reusejp_5440_;
}
else
{
lean_object* v_reuseFailAlloc_5442_; 
v_reuseFailAlloc_5442_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5442_, 0, v_a_5436_);
v___x_5441_ = v_reuseFailAlloc_5442_;
goto v_reusejp_5440_;
}
v_reusejp_5440_:
{
return v___x_5441_;
}
}
}
}
else
{
lean_dec(v_generation_5404_);
lean_dec_ref(v_proof_5403_);
lean_dec_ref(v_fact_5402_);
goto v___jp_5416_;
}
v___jp_5416_:
{
lean_object* v___x_5417_; lean_object* v___x_5418_; 
v___x_5417_ = lean_box(0);
v___x_5418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_5418_, 0, v___x_5417_);
return v___x_5418_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_add___boxed(lean_object* v_fact_5444_, lean_object* v_proof_5445_, lean_object* v_generation_5446_, lean_object* v_a_5447_, lean_object* v_a_5448_, lean_object* v_a_5449_, lean_object* v_a_5450_, lean_object* v_a_5451_, lean_object* v_a_5452_, lean_object* v_a_5453_, lean_object* v_a_5454_, lean_object* v_a_5455_, lean_object* v_a_5456_, lean_object* v_a_5457_){
_start:
{
lean_object* v_res_5458_; 
v_res_5458_ = l_Lean_Meta_Grind_add(v_fact_5444_, v_proof_5445_, v_generation_5446_, v_a_5447_, v_a_5448_, v_a_5449_, v_a_5450_, v_a_5451_, v_a_5452_, v_a_5453_, v_a_5454_, v_a_5455_, v_a_5456_);
lean_dec(v_a_5456_);
lean_dec_ref(v_a_5455_);
lean_dec(v_a_5454_);
lean_dec_ref(v_a_5453_);
lean_dec(v_a_5452_);
lean_dec_ref(v_a_5451_);
lean_dec(v_a_5450_);
lean_dec_ref(v_a_5449_);
lean_dec(v_a_5448_);
lean_dec(v_a_5447_);
return v_res_5458_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis(lean_object* v_fvarId_5459_, lean_object* v_generation_5460_, lean_object* v_a_5461_, lean_object* v_a_5462_, lean_object* v_a_5463_, lean_object* v_a_5464_, lean_object* v_a_5465_, lean_object* v_a_5466_, lean_object* v_a_5467_, lean_object* v_a_5468_, lean_object* v_a_5469_, lean_object* v_a_5470_){
_start:
{
lean_object* v___x_5472_; 
lean_inc(v_fvarId_5459_);
v___x_5472_ = l_Lean_FVarId_getType___redArg(v_fvarId_5459_, v_a_5467_, v_a_5469_, v_a_5470_);
if (lean_obj_tag(v___x_5472_) == 0)
{
lean_object* v_a_5473_; lean_object* v___x_5474_; lean_object* v___x_5475_; 
v_a_5473_ = lean_ctor_get(v___x_5472_, 0);
lean_inc(v_a_5473_);
lean_dec_ref_known(v___x_5472_, 1);
v___x_5474_ = l_Lean_mkFVar(v_fvarId_5459_);
v___x_5475_ = l_Lean_Meta_Grind_add(v_a_5473_, v___x_5474_, v_generation_5460_, v_a_5461_, v_a_5462_, v_a_5463_, v_a_5464_, v_a_5465_, v_a_5466_, v_a_5467_, v_a_5468_, v_a_5469_, v_a_5470_);
return v___x_5475_;
}
else
{
lean_object* v_a_5476_; lean_object* v___x_5478_; uint8_t v_isShared_5479_; uint8_t v_isSharedCheck_5483_; 
lean_dec(v_generation_5460_);
lean_dec(v_fvarId_5459_);
v_a_5476_ = lean_ctor_get(v___x_5472_, 0);
v_isSharedCheck_5483_ = !lean_is_exclusive(v___x_5472_);
if (v_isSharedCheck_5483_ == 0)
{
v___x_5478_ = v___x_5472_;
v_isShared_5479_ = v_isSharedCheck_5483_;
goto v_resetjp_5477_;
}
else
{
lean_inc(v_a_5476_);
lean_dec(v___x_5472_);
v___x_5478_ = lean_box(0);
v_isShared_5479_ = v_isSharedCheck_5483_;
goto v_resetjp_5477_;
}
v_resetjp_5477_:
{
lean_object* v___x_5481_; 
if (v_isShared_5479_ == 0)
{
v___x_5481_ = v___x_5478_;
goto v_reusejp_5480_;
}
else
{
lean_object* v_reuseFailAlloc_5482_; 
v_reuseFailAlloc_5482_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5482_, 0, v_a_5476_);
v___x_5481_ = v_reuseFailAlloc_5482_;
goto v_reusejp_5480_;
}
v_reusejp_5480_:
{
return v___x_5481_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_addHypothesis___boxed(lean_object* v_fvarId_5484_, lean_object* v_generation_5485_, lean_object* v_a_5486_, lean_object* v_a_5487_, lean_object* v_a_5488_, lean_object* v_a_5489_, lean_object* v_a_5490_, lean_object* v_a_5491_, lean_object* v_a_5492_, lean_object* v_a_5493_, lean_object* v_a_5494_, lean_object* v_a_5495_, lean_object* v_a_5496_){
_start:
{
lean_object* v_res_5497_; 
v_res_5497_ = l_Lean_Meta_Grind_addHypothesis(v_fvarId_5484_, v_generation_5485_, v_a_5486_, v_a_5487_, v_a_5488_, v_a_5489_, v_a_5490_, v_a_5491_, v_a_5492_, v_a_5493_, v_a_5494_, v_a_5495_);
lean_dec(v_a_5495_);
lean_dec_ref(v_a_5494_);
lean_dec(v_a_5493_);
lean_dec_ref(v_a_5492_);
lean_dec(v_a_5491_);
lean_dec_ref(v_a_5490_);
lean_dec(v_a_5489_);
lean_dec_ref(v_a_5488_);
lean_dec(v_a_5487_);
lean_dec(v_a_5486_);
return v_res_5497_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Ctor(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Beta(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Ctor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Beta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_PP(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Ctor(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Beta(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Simp(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Internalize(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Core(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_PP(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Ctor(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Beta(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Simp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Core(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Core(builtin);
}
#ifdef __cplusplus
}
#endif
