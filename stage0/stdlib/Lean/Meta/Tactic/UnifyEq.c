// Lean compiler output
// Module: Lean.Meta.Tactic.UnifyEq
// Imports: public import Lean.Meta.Tactic.Injection import Init.Data.Nat.Internal.Linear
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
lean_object* l_Lean_Meta_evalNat(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_substCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkArrow(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAdd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_LocalDecl_index(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_isConstructorApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_injectionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqOfHEq(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "Dependent elimination failed: Failed to solve equation"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "\nat case `"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "`"};
static const lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Internal"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "elimOffset"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(238, 85, 239, 193, 128, 115, 38, 143)}};
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(94, 91, 22, 141, 221, 120, 153, 253)}};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__0_value;
static const lean_ctor_object l_Lean_Meta_unifyEq_x3f___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__1 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__1_value;
static const lean_string_object l_Lean_Meta_unifyEq_x3f___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Expected an equality, but found"};
static const lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_unifyEq_x3f___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_unifyEq_x3f___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(lean_object* v_mvarId_1_, lean_object* v_eqDecl_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_, lean_object* v_a_6_){
_start:
{
lean_object* v___x_8_; lean_object* v___x_9_; uint8_t v___x_10_; lean_object* v___x_11_; 
v___x_8_ = l_Lean_LocalDecl_fvarId(v_eqDecl_2_);
lean_inc(v___x_8_);
v___x_9_ = l_Lean_mkFVar(v___x_8_);
v___x_10_ = 1;
v___x_11_ = l_Lean_Meta_mkEqOfHEq(v___x_9_, v___x_10_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_11_) == 0)
{
lean_object* v_a_12_; lean_object* v___x_13_; 
v_a_12_ = lean_ctor_get(v___x_11_, 0);
lean_inc_n(v_a_12_, 2);
lean_dec_ref_known(v___x_11_, 1);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
v___x_13_ = lean_infer_type(v_a_12_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_13_) == 0)
{
lean_object* v_a_14_; lean_object* v___x_15_; 
v_a_14_ = lean_ctor_get(v___x_13_, 0);
lean_inc(v_a_14_);
lean_dec_ref_known(v___x_13_, 1);
lean_inc(v_a_6_);
lean_inc_ref(v_a_5_);
lean_inc(v_a_4_);
lean_inc_ref(v_a_3_);
v___x_15_ = lean_whnf(v_a_14_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
lean_inc(v_a_16_);
lean_dec_ref_known(v___x_15_, 1);
v___x_17_ = l_Lean_LocalDecl_userName(v_eqDecl_2_);
v___x_18_ = l_Lean_MVarId_assert(v_mvarId_1_, v___x_17_, v_a_16_, v_a_12_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
if (lean_obj_tag(v___x_18_) == 0)
{
lean_object* v_a_19_; lean_object* v___x_20_; 
v_a_19_ = lean_ctor_get(v___x_18_, 0);
lean_inc(v_a_19_);
lean_dec_ref_known(v___x_18_, 1);
v___x_20_ = l_Lean_MVarId_clear(v_a_19_, v___x_8_, v_a_3_, v_a_4_, v_a_5_, v_a_6_);
return v___x_20_;
}
else
{
lean_dec(v___x_8_);
return v___x_18_;
}
}
else
{
lean_object* v_a_21_; lean_object* v___x_23_; uint8_t v_isShared_24_; uint8_t v_isSharedCheck_28_; 
lean_dec(v_a_12_);
lean_dec(v___x_8_);
lean_dec(v_mvarId_1_);
v_a_21_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_28_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_28_ == 0)
{
v___x_23_ = v___x_15_;
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
else
{
lean_inc(v_a_21_);
lean_dec(v___x_15_);
v___x_23_ = lean_box(0);
v_isShared_24_ = v_isSharedCheck_28_;
goto v_resetjp_22_;
}
v_resetjp_22_:
{
lean_object* v___x_26_; 
if (v_isShared_24_ == 0)
{
v___x_26_ = v___x_23_;
goto v_reusejp_25_;
}
else
{
lean_object* v_reuseFailAlloc_27_; 
v_reuseFailAlloc_27_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_27_, 0, v_a_21_);
v___x_26_ = v_reuseFailAlloc_27_;
goto v_reusejp_25_;
}
v_reusejp_25_:
{
return v___x_26_;
}
}
}
}
else
{
lean_object* v_a_29_; lean_object* v___x_31_; uint8_t v_isShared_32_; uint8_t v_isSharedCheck_36_; 
lean_dec(v_a_12_);
lean_dec(v___x_8_);
lean_dec(v_mvarId_1_);
v_a_29_ = lean_ctor_get(v___x_13_, 0);
v_isSharedCheck_36_ = !lean_is_exclusive(v___x_13_);
if (v_isSharedCheck_36_ == 0)
{
v___x_31_ = v___x_13_;
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
else
{
lean_inc(v_a_29_);
lean_dec(v___x_13_);
v___x_31_ = lean_box(0);
v_isShared_32_ = v_isSharedCheck_36_;
goto v_resetjp_30_;
}
v_resetjp_30_:
{
lean_object* v___x_34_; 
if (v_isShared_32_ == 0)
{
v___x_34_ = v___x_31_;
goto v_reusejp_33_;
}
else
{
lean_object* v_reuseFailAlloc_35_; 
v_reuseFailAlloc_35_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_35_, 0, v_a_29_);
v___x_34_ = v_reuseFailAlloc_35_;
goto v_reusejp_33_;
}
v_reusejp_33_:
{
return v___x_34_;
}
}
}
}
else
{
lean_object* v_a_37_; lean_object* v___x_39_; uint8_t v_isShared_40_; uint8_t v_isSharedCheck_44_; 
lean_dec(v___x_8_);
lean_dec(v_mvarId_1_);
v_a_37_ = lean_ctor_get(v___x_11_, 0);
v_isSharedCheck_44_ = !lean_is_exclusive(v___x_11_);
if (v_isSharedCheck_44_ == 0)
{
v___x_39_ = v___x_11_;
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
else
{
lean_inc(v_a_37_);
lean_dec(v___x_11_);
v___x_39_ = lean_box(0);
v_isShared_40_ = v_isSharedCheck_44_;
goto v_resetjp_38_;
}
v_resetjp_38_:
{
lean_object* v___x_42_; 
if (v_isShared_40_ == 0)
{
v___x_42_ = v___x_39_;
goto v_reusejp_41_;
}
else
{
lean_object* v_reuseFailAlloc_43_; 
v_reuseFailAlloc_43_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_43_, 0, v_a_37_);
v___x_42_ = v_reuseFailAlloc_43_;
goto v_reusejp_41_;
}
v_reusejp_41_:
{
return v___x_42_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27___boxed(lean_object* v_mvarId_45_, lean_object* v_eqDecl_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_){
_start:
{
lean_object* v_res_52_; 
v_res_52_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(v_mvarId_45_, v_eqDecl_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec_ref(v_a_47_);
lean_dec_ref(v_eqDecl_46_);
return v_res_52_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0(void){
_start:
{
lean_object* v___x_53_; lean_object* v___x_54_; 
v___x_53_ = lean_unsigned_to_nat(0u);
v___x_54_ = l_Lean_mkNatLit(v___x_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(lean_object* v_e_55_, lean_object* v_a_56_, lean_object* v_a_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v___x_61_; 
lean_inc_ref(v_e_55_);
v___x_61_ = l_Lean_Meta_evalNat(v_e_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
if (lean_obj_tag(v___x_61_) == 0)
{
lean_object* v_a_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_80_; 
v_a_62_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_80_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_80_ == 0)
{
v___x_64_ = v___x_61_;
v_isShared_65_ = v_isSharedCheck_80_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_a_62_);
lean_dec(v___x_61_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_80_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
if (lean_obj_tag(v_a_62_) == 0)
{
lean_object* v___x_66_; 
lean_del_object(v___x_64_);
v___x_66_ = l_Lean_Meta_isOffset_x3f(v_e_55_, v_a_56_, v_a_57_, v_a_58_, v_a_59_);
return v___x_66_;
}
else
{
lean_object* v_val_67_; lean_object* v___x_69_; uint8_t v_isShared_70_; uint8_t v_isSharedCheck_79_; 
lean_dec_ref(v_e_55_);
v_val_67_ = lean_ctor_get(v_a_62_, 0);
v_isSharedCheck_79_ = !lean_is_exclusive(v_a_62_);
if (v_isSharedCheck_79_ == 0)
{
v___x_69_ = v_a_62_;
v_isShared_70_ = v_isSharedCheck_79_;
goto v_resetjp_68_;
}
else
{
lean_inc(v_val_67_);
lean_dec(v_a_62_);
v___x_69_ = lean_box(0);
v_isShared_70_ = v_isSharedCheck_79_;
goto v_resetjp_68_;
}
v_resetjp_68_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_74_; 
v___x_71_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___closed__0);
v___x_72_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_72_, 0, v___x_71_);
lean_ctor_set(v___x_72_, 1, v_val_67_);
if (v_isShared_70_ == 0)
{
lean_ctor_set(v___x_69_, 0, v___x_72_);
v___x_74_ = v___x_69_;
goto v_reusejp_73_;
}
else
{
lean_object* v_reuseFailAlloc_78_; 
v_reuseFailAlloc_78_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_78_, 0, v___x_72_);
v___x_74_ = v_reuseFailAlloc_78_;
goto v_reusejp_73_;
}
v_reusejp_73_:
{
lean_object* v___x_76_; 
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 0, v___x_74_);
v___x_76_ = v___x_64_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v___x_74_);
v___x_76_ = v_reuseFailAlloc_77_;
goto v_reusejp_75_;
}
v_reusejp_75_:
{
return v___x_76_;
}
}
}
}
}
}
else
{
lean_object* v_a_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_88_; 
lean_dec_ref(v_e_55_);
v_a_81_ = lean_ctor_get(v___x_61_, 0);
v_isSharedCheck_88_ = !lean_is_exclusive(v___x_61_);
if (v_isSharedCheck_88_ == 0)
{
v___x_83_ = v___x_61_;
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_a_81_);
lean_dec(v___x_61_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_88_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_86_; 
if (v_isShared_84_ == 0)
{
v___x_86_ = v___x_83_;
goto v_reusejp_85_;
}
else
{
lean_object* v_reuseFailAlloc_87_; 
v_reuseFailAlloc_87_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_87_, 0, v_a_81_);
v___x_86_ = v_reuseFailAlloc_87_;
goto v_reusejp_85_;
}
v_reusejp_85_:
{
return v___x_86_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f___boxed(lean_object* v_e_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
lean_object* v_res_95_; 
v_res_95_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_e_89_, v_a_90_, v_a_91_, v_a_92_, v_a_93_);
lean_dec(v_a_93_);
lean_dec_ref(v_a_92_);
lean_dec(v_a_91_);
lean_dec_ref(v_a_90_);
return v_res_95_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(lean_object* v_x_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___x_102_; 
v___x_102_ = l_Lean_Meta_saveState___redArg(v___y_98_, v___y_100_);
if (lean_obj_tag(v___x_102_) == 0)
{
lean_object* v_a_103_; lean_object* v___x_104_; 
v_a_103_ = lean_ctor_get(v___x_102_, 0);
lean_inc(v_a_103_);
lean_dec_ref_known(v___x_102_, 1);
lean_inc(v___y_100_);
lean_inc_ref(v___y_99_);
lean_inc(v___y_98_);
lean_inc_ref(v___y_97_);
v___x_104_ = lean_apply_5(v_x_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_, lean_box(0));
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v_a_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_113_; 
lean_dec(v_a_103_);
v_a_105_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_113_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_113_ == 0)
{
v___x_107_ = v___x_104_;
v_isShared_108_ = v_isSharedCheck_113_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_a_105_);
lean_dec(v___x_104_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_113_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_109_; lean_object* v___x_111_; 
v___x_109_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_109_, 0, v_a_105_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 0, v___x_109_);
v___x_111_ = v___x_107_;
goto v_reusejp_110_;
}
else
{
lean_object* v_reuseFailAlloc_112_; 
v_reuseFailAlloc_112_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_112_, 0, v___x_109_);
v___x_111_ = v_reuseFailAlloc_112_;
goto v_reusejp_110_;
}
v_reusejp_110_:
{
return v___x_111_;
}
}
}
else
{
lean_object* v_a_114_; lean_object* v___x_116_; uint8_t v_isShared_117_; uint8_t v_isSharedCheck_144_; 
v_a_114_ = lean_ctor_get(v___x_104_, 0);
v_isSharedCheck_144_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_144_ == 0)
{
v___x_116_ = v___x_104_;
v_isShared_117_ = v_isSharedCheck_144_;
goto v_resetjp_115_;
}
else
{
lean_inc(v_a_114_);
lean_dec(v___x_104_);
v___x_116_ = lean_box(0);
v_isShared_117_ = v_isSharedCheck_144_;
goto v_resetjp_115_;
}
v_resetjp_115_:
{
uint8_t v___x_118_; 
v___x_118_ = l_Lean_Exception_isInterrupt(v_a_114_);
if (v___x_118_ == 0)
{
uint8_t v___x_119_; 
lean_inc(v_a_114_);
v___x_119_ = l_Lean_Exception_isRuntime(v_a_114_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; 
lean_del_object(v___x_116_);
lean_dec(v_a_114_);
v___x_120_ = l_Lean_Meta_SavedState_restore___redArg(v_a_103_, v___y_98_, v___y_100_);
if (lean_obj_tag(v___x_120_) == 0)
{
lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_128_; 
v_isSharedCheck_128_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v___x_120_, 0);
lean_dec(v_unused_129_);
v___x_122_ = v___x_120_;
v_isShared_123_ = v_isSharedCheck_128_;
goto v_resetjp_121_;
}
else
{
lean_dec(v___x_120_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_128_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_124_; lean_object* v___x_126_; 
v___x_124_ = lean_box(0);
if (v_isShared_123_ == 0)
{
lean_ctor_set(v___x_122_, 0, v___x_124_);
v___x_126_ = v___x_122_;
goto v_reusejp_125_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_124_);
v___x_126_ = v_reuseFailAlloc_127_;
goto v_reusejp_125_;
}
v_reusejp_125_:
{
return v___x_126_;
}
}
}
else
{
lean_object* v_a_130_; lean_object* v___x_132_; uint8_t v_isShared_133_; uint8_t v_isSharedCheck_137_; 
v_a_130_ = lean_ctor_get(v___x_120_, 0);
v_isSharedCheck_137_ = !lean_is_exclusive(v___x_120_);
if (v_isSharedCheck_137_ == 0)
{
v___x_132_ = v___x_120_;
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
else
{
lean_inc(v_a_130_);
lean_dec(v___x_120_);
v___x_132_ = lean_box(0);
v_isShared_133_ = v_isSharedCheck_137_;
goto v_resetjp_131_;
}
v_resetjp_131_:
{
lean_object* v___x_135_; 
if (v_isShared_133_ == 0)
{
v___x_135_ = v___x_132_;
goto v_reusejp_134_;
}
else
{
lean_object* v_reuseFailAlloc_136_; 
v_reuseFailAlloc_136_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_136_, 0, v_a_130_);
v___x_135_ = v_reuseFailAlloc_136_;
goto v_reusejp_134_;
}
v_reusejp_134_:
{
return v___x_135_;
}
}
}
}
else
{
lean_object* v___x_139_; 
lean_dec(v_a_103_);
if (v_isShared_117_ == 0)
{
v___x_139_ = v___x_116_;
goto v_reusejp_138_;
}
else
{
lean_object* v_reuseFailAlloc_140_; 
v_reuseFailAlloc_140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_140_, 0, v_a_114_);
v___x_139_ = v_reuseFailAlloc_140_;
goto v_reusejp_138_;
}
v_reusejp_138_:
{
return v___x_139_;
}
}
}
else
{
lean_object* v___x_142_; 
lean_dec(v_a_103_);
if (v_isShared_117_ == 0)
{
v___x_142_ = v___x_116_;
goto v_reusejp_141_;
}
else
{
lean_object* v_reuseFailAlloc_143_; 
v_reuseFailAlloc_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_143_, 0, v_a_114_);
v___x_142_ = v_reuseFailAlloc_143_;
goto v_reusejp_141_;
}
v_reusejp_141_:
{
return v___x_142_;
}
}
}
}
}
else
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
lean_dec_ref(v_x_96_);
v_a_145_ = lean_ctor_get(v___x_102_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_102_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_102_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_102_);
v___x_147_ = lean_box(0);
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
v_resetjp_146_:
{
lean_object* v___x_150_; 
if (v_isShared_148_ == 0)
{
v___x_150_ = v___x_147_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_145_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
return v___x_150_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg___boxed(lean_object* v_x_153_, lean_object* v___y_154_, lean_object* v___y_155_, lean_object* v___y_156_, lean_object* v___y_157_, lean_object* v___y_158_){
_start:
{
lean_object* v_res_159_; 
v_res_159_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v_x_153_, v___y_154_, v___y_155_, v___y_156_, v___y_157_);
lean_dec(v___y_157_);
lean_dec_ref(v___y_156_);
lean_dec(v___y_155_);
lean_dec_ref(v___y_154_);
return v_res_159_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(lean_object* v_00_u03b1_160_, lean_object* v_x_161_, lean_object* v___y_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v___x_167_; 
v___x_167_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v_x_161_, v___y_162_, v___y_163_, v___y_164_, v___y_165_);
return v___x_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___boxed(lean_object* v_00_u03b1_168_, lean_object* v_x_169_, lean_object* v___y_170_, lean_object* v___y_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0(v_00_u03b1_168_, v_x_169_, v___y_170_, v___y_171_, v___y_172_, v___y_173_);
lean_dec(v___y_173_);
lean_dec_ref(v___y_172_);
lean_dec(v___y_171_);
lean_dec_ref(v___y_170_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(lean_object* v_msgData_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_){
_start:
{
lean_object* v___x_182_; lean_object* v_env_183_; uint8_t v___x_184_; lean_object* v_env_185_; lean_object* v___x_186_; lean_object* v_toCold_187_; lean_object* v_mctx_188_; lean_object* v_lctx_189_; lean_object* v_options_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; 
v___x_182_ = lean_st_ref_get(v___y_180_);
v_env_183_ = lean_ctor_get(v___x_182_, 0);
lean_inc_ref(v_env_183_);
lean_dec(v___x_182_);
v___x_184_ = 0;
v_env_185_ = l_Lean_Environment_setRecordingDeps(v_env_183_, v___x_184_);
v___x_186_ = lean_st_ref_get(v___y_178_);
v_toCold_187_ = lean_ctor_get(v___y_179_, 0);
v_mctx_188_ = lean_ctor_get(v___x_186_, 0);
lean_inc_ref(v_mctx_188_);
lean_dec(v___x_186_);
v_lctx_189_ = lean_ctor_get(v___y_177_, 2);
v_options_190_ = lean_ctor_get(v_toCold_187_, 2);
lean_inc_ref(v_options_190_);
lean_inc_ref(v_lctx_189_);
v___x_191_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_191_, 0, v_env_185_);
lean_ctor_set(v___x_191_, 1, v_mctx_188_);
lean_ctor_set(v___x_191_, 2, v_lctx_189_);
lean_ctor_set(v___x_191_, 3, v_options_190_);
v___x_192_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_192_, 0, v___x_191_);
lean_ctor_set(v___x_192_, 1, v_msgData_176_);
v___x_193_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_193_, 0, v___x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1___boxed(lean_object* v_msgData_194_, lean_object* v___y_195_, lean_object* v___y_196_, lean_object* v___y_197_, lean_object* v___y_198_, lean_object* v___y_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(v_msgData_194_, v___y_195_, v___y_196_, v___y_197_, v___y_198_);
lean_dec(v___y_198_);
lean_dec_ref(v___y_197_);
lean_dec(v___y_196_);
lean_dec_ref(v___y_195_);
return v_res_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(lean_object* v_msg_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_, lean_object* v___y_205_){
_start:
{
lean_object* v_ref_207_; lean_object* v___x_208_; lean_object* v_a_209_; lean_object* v___x_211_; uint8_t v_isShared_212_; uint8_t v_isSharedCheck_217_; 
v_ref_207_ = lean_ctor_get(v___y_204_, 2);
v___x_208_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1_spec__1(v_msg_201_, v___y_202_, v___y_203_, v___y_204_, v___y_205_);
v_a_209_ = lean_ctor_get(v___x_208_, 0);
v_isSharedCheck_217_ = !lean_is_exclusive(v___x_208_);
if (v_isSharedCheck_217_ == 0)
{
v___x_211_ = v___x_208_;
v_isShared_212_ = v_isSharedCheck_217_;
goto v_resetjp_210_;
}
else
{
lean_inc(v_a_209_);
lean_dec(v___x_208_);
v___x_211_ = lean_box(0);
v_isShared_212_ = v_isSharedCheck_217_;
goto v_resetjp_210_;
}
v_resetjp_210_:
{
lean_object* v___x_213_; lean_object* v___x_215_; 
lean_inc(v_ref_207_);
v___x_213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_213_, 0, v_ref_207_);
lean_ctor_set(v___x_213_, 1, v_a_209_);
if (v_isShared_212_ == 0)
{
lean_ctor_set_tag(v___x_211_, 1);
lean_ctor_set(v___x_211_, 0, v___x_213_);
v___x_215_ = v___x_211_;
goto v_reusejp_214_;
}
else
{
lean_object* v_reuseFailAlloc_216_; 
v_reuseFailAlloc_216_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_216_, 0, v___x_213_);
v___x_215_ = v_reuseFailAlloc_216_;
goto v_reusejp_214_;
}
v_reusejp_214_:
{
return v___x_215_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg___boxed(lean_object* v_msg_218_, lean_object* v___y_219_, lean_object* v___y_220_, lean_object* v___y_221_, lean_object* v___y_222_, lean_object* v___y_223_){
_start:
{
lean_object* v_res_224_; 
v_res_224_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v_msg_218_, v___y_219_, v___y_220_, v___y_221_, v___y_222_);
lean_dec(v___y_222_);
lean_dec_ref(v___y_221_);
lean_dec(v___y_220_);
lean_dec_ref(v___y_219_);
return v_res_224_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__0));
v___x_227_ = l_Lean_stringToMessageData(v___x_226_);
return v___x_227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(lean_object* v_mvarId_228_, lean_object* v_eqFVarId_229_, lean_object* v_subst_230_, lean_object* v_acyclic_231_, lean_object* v_eqDecl_232_, lean_object* v_a_233_, lean_object* v_b_234_, uint8_t v_symm_235_, lean_object* v_a_236_, lean_object* v_a_237_, lean_object* v_a_238_, lean_object* v_a_239_){
_start:
{
uint8_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; 
v___x_241_ = 1;
v___x_242_ = lean_box(v_symm_235_);
v___x_243_ = lean_box(v___x_241_);
v___x_244_ = lean_box(v___x_241_);
lean_inc(v_subst_230_);
lean_inc(v_eqFVarId_229_);
lean_inc(v_mvarId_228_);
v___x_245_ = lean_alloc_closure((void*)(l_Lean_Meta_substCore___boxed), 11, 6);
lean_closure_set(v___x_245_, 0, v_mvarId_228_);
lean_closure_set(v___x_245_, 1, v_eqFVarId_229_);
lean_closure_set(v___x_245_, 2, v___x_242_);
lean_closure_set(v___x_245_, 3, v_subst_230_);
lean_closure_set(v___x_245_, 4, v___x_243_);
lean_closure_set(v___x_245_, 5, v___x_244_);
v___x_246_ = l_Lean_observing_x3f___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__0___redArg(v___x_245_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_246_) == 0)
{
lean_object* v_a_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_322_; 
v_a_247_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_322_ == 0)
{
v___x_249_ = v___x_246_;
v_isShared_250_ = v_isSharedCheck_322_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_a_247_);
lean_dec(v___x_246_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_322_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
if (lean_obj_tag(v_a_247_) == 1)
{
lean_object* v_val_251_; lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_265_; 
lean_dec_ref(v_b_234_);
lean_dec_ref(v_a_233_);
lean_dec_ref(v_acyclic_231_);
lean_dec(v_subst_230_);
lean_dec(v_eqFVarId_229_);
lean_dec(v_mvarId_228_);
v_val_251_ = lean_ctor_get(v_a_247_, 0);
v_isSharedCheck_265_ = !lean_is_exclusive(v_a_247_);
if (v_isSharedCheck_265_ == 0)
{
v___x_253_ = v_a_247_;
v_isShared_254_ = v_isSharedCheck_265_;
goto v_resetjp_252_;
}
else
{
lean_inc(v_val_251_);
lean_dec(v_a_247_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_265_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
lean_object* v_fst_255_; lean_object* v_snd_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_260_; 
v_fst_255_ = lean_ctor_get(v_val_251_, 0);
lean_inc(v_fst_255_);
v_snd_256_ = lean_ctor_get(v_val_251_, 1);
lean_inc(v_snd_256_);
lean_dec(v_val_251_);
v___x_257_ = lean_unsigned_to_nat(0u);
v___x_258_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_258_, 0, v_snd_256_);
lean_ctor_set(v___x_258_, 1, v_fst_255_);
lean_ctor_set(v___x_258_, 2, v___x_257_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_258_);
v___x_260_ = v___x_253_;
goto v_reusejp_259_;
}
else
{
lean_object* v_reuseFailAlloc_264_; 
v_reuseFailAlloc_264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_264_, 0, v___x_258_);
v___x_260_ = v_reuseFailAlloc_264_;
goto v_reusejp_259_;
}
v_reusejp_259_:
{
lean_object* v___x_262_; 
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 0, v___x_260_);
v___x_262_ = v___x_249_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_263_; 
v_reuseFailAlloc_263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_263_, 0, v___x_260_);
v___x_262_ = v_reuseFailAlloc_263_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
return v___x_262_;
}
}
}
}
else
{
lean_object* v___x_266_; 
lean_del_object(v___x_249_);
lean_dec(v_a_247_);
v___x_266_ = l_Lean_Meta_isExprDefEq(v_a_233_, v_b_234_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_266_) == 0)
{
lean_object* v_a_267_; uint8_t v___x_268_; 
v_a_267_ = lean_ctor_get(v___x_266_, 0);
lean_inc(v_a_267_);
lean_dec_ref_known(v___x_266_, 1);
v___x_268_ = lean_unbox(v_a_267_);
lean_dec(v_a_267_);
if (v___x_268_ == 0)
{
lean_object* v___x_269_; lean_object* v___x_270_; 
lean_dec(v_subst_230_);
v___x_269_ = l_Lean_mkFVar(v_eqFVarId_229_);
lean_inc(v_a_239_);
lean_inc_ref(v_a_238_);
lean_inc(v_a_237_);
lean_inc_ref(v_a_236_);
v___x_270_ = lean_apply_7(v_acyclic_231_, v_mvarId_228_, v___x_269_, v_a_236_, v_a_237_, v_a_238_, v_a_239_, lean_box(0));
if (lean_obj_tag(v___x_270_) == 0)
{
lean_object* v_a_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_285_; 
v_a_271_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_285_ == 0)
{
v___x_273_ = v___x_270_;
v_isShared_274_ = v_isSharedCheck_285_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_a_271_);
lean_dec(v___x_270_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_285_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
uint8_t v___x_275_; 
v___x_275_ = lean_unbox(v_a_271_);
lean_dec(v_a_271_);
if (v___x_275_ == 0)
{
lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_280_; 
lean_del_object(v___x_273_);
v___x_276_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_277_ = l_Lean_LocalDecl_type(v_eqDecl_232_);
v___x_278_ = l_Lean_indentExpr(v___x_277_);
v___x_279_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_279_, 0, v___x_276_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
v___x_280_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_279_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
return v___x_280_;
}
else
{
lean_object* v___x_281_; lean_object* v___x_283_; 
v___x_281_ = lean_box(0);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_281_);
v___x_283_ = v___x_273_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v___x_281_);
v___x_283_ = v_reuseFailAlloc_284_;
goto v_reusejp_282_;
}
v_reusejp_282_:
{
return v___x_283_;
}
}
}
}
else
{
lean_object* v_a_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_293_; 
v_a_286_ = lean_ctor_get(v___x_270_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_270_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_270_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_270_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___x_291_; 
if (v_isShared_289_ == 0)
{
v___x_291_ = v___x_288_;
goto v_reusejp_290_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_a_286_);
v___x_291_ = v_reuseFailAlloc_292_;
goto v_reusejp_290_;
}
v_reusejp_290_:
{
return v___x_291_;
}
}
}
}
else
{
lean_object* v___x_294_; 
lean_dec_ref(v_acyclic_231_);
v___x_294_ = l_Lean_MVarId_clear(v_mvarId_228_, v_eqFVarId_229_, v_a_236_, v_a_237_, v_a_238_, v_a_239_);
if (lean_obj_tag(v___x_294_) == 0)
{
lean_object* v_a_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_305_; 
v_a_295_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_305_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_305_ == 0)
{
v___x_297_ = v___x_294_;
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_a_295_);
lean_dec(v___x_294_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_305_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_303_; 
v___x_299_ = lean_unsigned_to_nat(0u);
v___x_300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_300_, 0, v_a_295_);
lean_ctor_set(v___x_300_, 1, v_subst_230_);
lean_ctor_set(v___x_300_, 2, v___x_299_);
v___x_301_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_301_, 0, v___x_300_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_301_);
v___x_303_ = v___x_297_;
goto v_reusejp_302_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_301_);
v___x_303_ = v_reuseFailAlloc_304_;
goto v_reusejp_302_;
}
v_reusejp_302_:
{
return v___x_303_;
}
}
}
else
{
lean_object* v_a_306_; lean_object* v___x_308_; uint8_t v_isShared_309_; uint8_t v_isSharedCheck_313_; 
lean_dec(v_subst_230_);
v_a_306_ = lean_ctor_get(v___x_294_, 0);
v_isSharedCheck_313_ = !lean_is_exclusive(v___x_294_);
if (v_isSharedCheck_313_ == 0)
{
v___x_308_ = v___x_294_;
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
else
{
lean_inc(v_a_306_);
lean_dec(v___x_294_);
v___x_308_ = lean_box(0);
v_isShared_309_ = v_isSharedCheck_313_;
goto v_resetjp_307_;
}
v_resetjp_307_:
{
lean_object* v___x_311_; 
if (v_isShared_309_ == 0)
{
v___x_311_ = v___x_308_;
goto v_reusejp_310_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v_a_306_);
v___x_311_ = v_reuseFailAlloc_312_;
goto v_reusejp_310_;
}
v_reusejp_310_:
{
return v___x_311_;
}
}
}
}
}
else
{
lean_object* v_a_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_321_; 
lean_dec_ref(v_acyclic_231_);
lean_dec(v_subst_230_);
lean_dec(v_eqFVarId_229_);
lean_dec(v_mvarId_228_);
v_a_314_ = lean_ctor_get(v___x_266_, 0);
v_isSharedCheck_321_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_321_ == 0)
{
v___x_316_ = v___x_266_;
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_a_314_);
lean_dec(v___x_266_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_321_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_319_; 
if (v_isShared_317_ == 0)
{
v___x_319_ = v___x_316_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_320_; 
v_reuseFailAlloc_320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_320_, 0, v_a_314_);
v___x_319_ = v_reuseFailAlloc_320_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
return v___x_319_;
}
}
}
}
}
}
else
{
lean_object* v_a_323_; lean_object* v___x_325_; uint8_t v_isShared_326_; uint8_t v_isSharedCheck_330_; 
lean_dec_ref(v_b_234_);
lean_dec_ref(v_a_233_);
lean_dec_ref(v_acyclic_231_);
lean_dec(v_subst_230_);
lean_dec(v_eqFVarId_229_);
lean_dec(v_mvarId_228_);
v_a_323_ = lean_ctor_get(v___x_246_, 0);
v_isSharedCheck_330_ = !lean_is_exclusive(v___x_246_);
if (v_isSharedCheck_330_ == 0)
{
v___x_325_ = v___x_246_;
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
else
{
lean_inc(v_a_323_);
lean_dec(v___x_246_);
v___x_325_ = lean_box(0);
v_isShared_326_ = v_isSharedCheck_330_;
goto v_resetjp_324_;
}
v_resetjp_324_:
{
lean_object* v___x_328_; 
if (v_isShared_326_ == 0)
{
v___x_328_ = v___x_325_;
goto v_reusejp_327_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_a_323_);
v___x_328_ = v_reuseFailAlloc_329_;
goto v_reusejp_327_;
}
v_reusejp_327_:
{
return v___x_328_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___boxed(lean_object* v_mvarId_331_, lean_object* v_eqFVarId_332_, lean_object* v_subst_333_, lean_object* v_acyclic_334_, lean_object* v_eqDecl_335_, lean_object* v_a_336_, lean_object* v_b_337_, lean_object* v_symm_338_, lean_object* v_a_339_, lean_object* v_a_340_, lean_object* v_a_341_, lean_object* v_a_342_, lean_object* v_a_343_){
_start:
{
uint8_t v_symm_boxed_344_; lean_object* v_res_345_; 
v_symm_boxed_344_ = lean_unbox(v_symm_338_);
v_res_345_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_331_, v_eqFVarId_332_, v_subst_333_, v_acyclic_334_, v_eqDecl_335_, v_a_336_, v_b_337_, v_symm_boxed_344_, v_a_339_, v_a_340_, v_a_341_, v_a_342_);
lean_dec(v_a_342_);
lean_dec_ref(v_a_341_);
lean_dec(v_a_340_);
lean_dec_ref(v_a_339_);
lean_dec_ref(v_eqDecl_335_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(lean_object* v_00_u03b1_346_, lean_object* v_msg_347_, lean_object* v___y_348_, lean_object* v___y_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v___x_353_; 
v___x_353_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v_msg_347_, v___y_348_, v___y_349_, v___y_350_, v___y_351_);
return v___x_353_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___boxed(lean_object* v_00_u03b1_354_, lean_object* v_msg_355_, lean_object* v___y_356_, lean_object* v___y_357_, lean_object* v___y_358_, lean_object* v___y_359_, lean_object* v___y_360_){
_start:
{
lean_object* v_res_361_; 
v_res_361_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1(v_00_u03b1_354_, v_msg_355_, v___y_356_, v___y_357_, v___y_358_, v___y_359_);
lean_dec(v___y_359_);
lean_dec_ref(v___y_358_);
lean_dec(v___y_357_);
lean_dec_ref(v___y_356_);
return v_res_361_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__0));
v___x_364_ = l_Lean_stringToMessageData(v___x_363_);
return v___x_364_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3(void){
_start:
{
lean_object* v___x_366_; lean_object* v___x_367_; 
v___x_366_ = ((lean_object*)(l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__2));
v___x_367_ = l_Lean_stringToMessageData(v___x_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(lean_object* v_mvarId_368_, lean_object* v_eqFVarId_369_, lean_object* v_subst_370_, lean_object* v_caseName_x3f_371_, lean_object* v_eqDecl_372_, lean_object* v_injectionOffset_x3f_373_, lean_object* v_a_374_, lean_object* v_b_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_){
_start:
{
lean_object* v___y_382_; lean_object* v___y_383_; lean_object* v___x_467_; 
lean_inc(v_a_379_);
lean_inc_ref(v_a_378_);
lean_inc(v_a_377_);
lean_inc_ref(v_a_376_);
lean_inc_ref(v_b_375_);
lean_inc_ref(v_a_374_);
v___x_467_ = lean_apply_7(v_injectionOffset_x3f_373_, v_a_374_, v_b_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_, lean_box(0));
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_532_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_532_ == 0)
{
v___x_470_ = v___x_467_;
v_isShared_471_ = v_isSharedCheck_532_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_467_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_532_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
if (lean_obj_tag(v_a_468_) == 1)
{
lean_object* v_val_472_; lean_object* v___x_474_; uint8_t v_isShared_475_; uint8_t v_isSharedCheck_484_; 
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_caseName_x3f_371_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
v_val_472_ = lean_ctor_get(v_a_468_, 0);
v_isSharedCheck_484_ = !lean_is_exclusive(v_a_468_);
if (v_isSharedCheck_484_ == 0)
{
v___x_474_ = v_a_468_;
v_isShared_475_ = v_isSharedCheck_484_;
goto v_resetjp_473_;
}
else
{
lean_inc(v_val_472_);
lean_dec(v_a_468_);
v___x_474_ = lean_box(0);
v_isShared_475_ = v_isSharedCheck_484_;
goto v_resetjp_473_;
}
v_resetjp_473_:
{
lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_479_; 
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_477_, 0, v_val_472_);
lean_ctor_set(v___x_477_, 1, v_subst_370_);
lean_ctor_set(v___x_477_, 2, v___x_476_);
if (v_isShared_475_ == 0)
{
lean_ctor_set(v___x_474_, 0, v___x_477_);
v___x_479_ = v___x_474_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_477_);
v___x_479_ = v_reuseFailAlloc_483_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
lean_object* v___x_481_; 
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 0, v___x_479_);
v___x_481_ = v___x_470_;
goto v_reusejp_480_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v___x_479_);
v___x_481_ = v_reuseFailAlloc_482_;
goto v_reusejp_480_;
}
v_reusejp_480_:
{
return v___x_481_;
}
}
}
}
else
{
lean_object* v___x_485_; 
lean_del_object(v___x_470_);
lean_dec(v_a_468_);
lean_inc_ref(v_a_374_);
v___x_485_ = l_Lean_Meta_isConstructorApp(v_a_374_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_485_) == 0)
{
lean_object* v_a_486_; uint8_t v___x_487_; 
v_a_486_ = lean_ctor_get(v___x_485_, 0);
lean_inc(v_a_486_);
lean_dec_ref_known(v___x_485_, 1);
v___x_487_ = lean_unbox(v_a_486_);
lean_dec(v_a_486_);
if (v___x_487_ == 0)
{
goto v___jp_426_;
}
else
{
lean_object* v___x_488_; 
lean_inc_ref(v_b_375_);
v___x_488_ = l_Lean_Meta_isConstructorApp(v_b_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_488_) == 0)
{
lean_object* v_a_489_; uint8_t v___x_490_; 
v_a_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_a_489_);
lean_dec_ref_known(v___x_488_, 1);
v___x_490_ = lean_unbox(v_a_489_);
lean_dec(v_a_489_);
if (v___x_490_ == 0)
{
goto v___jp_426_;
}
else
{
lean_object* v___x_491_; 
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_caseName_x3f_371_);
v___x_491_ = l_Lean_Meta_injectionCore(v_mvarId_368_, v_eqFVarId_369_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_491_) == 0)
{
lean_object* v_a_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_507_; 
v_a_492_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_507_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_507_ == 0)
{
v___x_494_ = v___x_491_;
v_isShared_495_ = v_isSharedCheck_507_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_a_492_);
lean_dec(v___x_491_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_507_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
if (lean_obj_tag(v_a_492_) == 0)
{
lean_object* v___x_496_; lean_object* v___x_498_; 
lean_dec(v_subst_370_);
v___x_496_ = lean_box(0);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_496_);
v___x_498_ = v___x_494_;
goto v_reusejp_497_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_496_);
v___x_498_ = v_reuseFailAlloc_499_;
goto v_reusejp_497_;
}
v_reusejp_497_:
{
return v___x_498_;
}
}
else
{
lean_object* v_mvarId_500_; lean_object* v_numNewEqs_501_; lean_object* v___x_502_; lean_object* v___x_503_; lean_object* v___x_505_; 
v_mvarId_500_ = lean_ctor_get(v_a_492_, 0);
lean_inc(v_mvarId_500_);
v_numNewEqs_501_ = lean_ctor_get(v_a_492_, 1);
lean_inc(v_numNewEqs_501_);
lean_dec_ref_known(v_a_492_, 2);
v___x_502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_502_, 0, v_mvarId_500_);
lean_ctor_set(v___x_502_, 1, v_subst_370_);
lean_ctor_set(v___x_502_, 2, v_numNewEqs_501_);
v___x_503_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_503_, 0, v___x_502_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 0, v___x_503_);
v___x_505_ = v___x_494_;
goto v_reusejp_504_;
}
else
{
lean_object* v_reuseFailAlloc_506_; 
v_reuseFailAlloc_506_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_506_, 0, v___x_503_);
v___x_505_ = v_reuseFailAlloc_506_;
goto v_reusejp_504_;
}
v_reusejp_504_:
{
return v___x_505_;
}
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_dec(v_subst_370_);
v_a_508_ = lean_ctor_get(v___x_491_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_491_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_491_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_491_);
v___x_510_ = lean_box(0);
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
v_resetjp_509_:
{
lean_object* v___x_513_; 
if (v_isShared_511_ == 0)
{
v___x_513_ = v___x_510_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_514_; 
v_reuseFailAlloc_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_514_, 0, v_a_508_);
v___x_513_ = v_reuseFailAlloc_514_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
return v___x_513_;
}
}
}
}
}
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_caseName_x3f_371_);
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
v_a_516_ = lean_ctor_get(v___x_488_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_488_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_488_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_488_);
v___x_518_ = lean_box(0);
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
v_resetjp_517_:
{
lean_object* v___x_521_; 
if (v_isShared_519_ == 0)
{
v___x_521_ = v___x_518_;
goto v_reusejp_520_;
}
else
{
lean_object* v_reuseFailAlloc_522_; 
v_reuseFailAlloc_522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_522_, 0, v_a_516_);
v___x_521_ = v_reuseFailAlloc_522_;
goto v_reusejp_520_;
}
v_reusejp_520_:
{
return v___x_521_;
}
}
}
}
}
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_caseName_x3f_371_);
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
v_a_524_ = lean_ctor_get(v___x_485_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_485_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_485_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_485_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_529_; 
if (v_isShared_527_ == 0)
{
v___x_529_ = v___x_526_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_530_; 
v_reuseFailAlloc_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_530_, 0, v_a_524_);
v___x_529_ = v_reuseFailAlloc_530_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
return v___x_529_;
}
}
}
}
}
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_caseName_x3f_371_);
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
v_a_533_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_467_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_467_);
v___x_535_ = lean_box(0);
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
v_resetjp_534_:
{
lean_object* v___x_538_; 
if (v_isShared_536_ == 0)
{
v___x_538_ = v___x_535_;
goto v_reusejp_537_;
}
else
{
lean_object* v_reuseFailAlloc_539_; 
v_reuseFailAlloc_539_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_539_, 0, v_a_533_);
v___x_538_ = v_reuseFailAlloc_539_;
goto v_reusejp_537_;
}
v_reusejp_537_:
{
return v___x_538_;
}
}
}
v___jp_381_:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
lean_inc(v_eqFVarId_369_);
v___x_384_ = l_Lean_mkFVar(v_eqFVarId_369_);
v___x_385_ = l_Lean_Meta_mkEq(v___y_383_, v___y_382_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_385_) == 0)
{
lean_object* v_a_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v_a_386_ = lean_ctor_get(v___x_385_, 0);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_385_, 1);
v___x_387_ = l_Lean_LocalDecl_userName(v_eqDecl_372_);
v___x_388_ = l_Lean_MVarId_assert(v_mvarId_368_, v___x_387_, v_a_386_, v___x_384_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_388_) == 0)
{
lean_object* v_a_389_; lean_object* v___x_390_; 
v_a_389_ = lean_ctor_get(v___x_388_, 0);
lean_inc(v_a_389_);
lean_dec_ref_known(v___x_388_, 1);
v___x_390_ = l_Lean_MVarId_clear(v_a_389_, v_eqFVarId_369_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_390_) == 0)
{
lean_object* v_a_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_401_; 
v_a_391_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_401_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_401_ == 0)
{
v___x_393_ = v___x_390_;
v_isShared_394_ = v_isSharedCheck_401_;
goto v_resetjp_392_;
}
else
{
lean_inc(v_a_391_);
lean_dec(v___x_390_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_401_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_395_ = lean_unsigned_to_nat(1u);
v___x_396_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_396_, 0, v_a_391_);
lean_ctor_set(v___x_396_, 1, v_subst_370_);
lean_ctor_set(v___x_396_, 2, v___x_395_);
v___x_397_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_397_, 0, v___x_396_);
if (v_isShared_394_ == 0)
{
lean_ctor_set(v___x_393_, 0, v___x_397_);
v___x_399_ = v___x_393_;
goto v_reusejp_398_;
}
else
{
lean_object* v_reuseFailAlloc_400_; 
v_reuseFailAlloc_400_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_400_, 0, v___x_397_);
v___x_399_ = v_reuseFailAlloc_400_;
goto v_reusejp_398_;
}
v_reusejp_398_:
{
return v___x_399_;
}
}
}
else
{
lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_409_; 
lean_dec(v_subst_370_);
v_a_402_ = lean_ctor_get(v___x_390_, 0);
v_isSharedCheck_409_ = !lean_is_exclusive(v___x_390_);
if (v_isSharedCheck_409_ == 0)
{
v___x_404_ = v___x_390_;
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_390_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_409_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_407_; 
if (v_isShared_405_ == 0)
{
v___x_407_ = v___x_404_;
goto v_reusejp_406_;
}
else
{
lean_object* v_reuseFailAlloc_408_; 
v_reuseFailAlloc_408_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_408_, 0, v_a_402_);
v___x_407_ = v_reuseFailAlloc_408_;
goto v_reusejp_406_;
}
v_reusejp_406_:
{
return v___x_407_;
}
}
}
}
else
{
lean_object* v_a_410_; lean_object* v___x_412_; uint8_t v_isShared_413_; uint8_t v_isSharedCheck_417_; 
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
v_a_410_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_417_ == 0)
{
v___x_412_ = v___x_388_;
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
else
{
lean_inc(v_a_410_);
lean_dec(v___x_388_);
v___x_412_ = lean_box(0);
v_isShared_413_ = v_isSharedCheck_417_;
goto v_resetjp_411_;
}
v_resetjp_411_:
{
lean_object* v___x_415_; 
if (v_isShared_413_ == 0)
{
v___x_415_ = v___x_412_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_a_410_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
}
}
else
{
lean_object* v_a_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_425_; 
lean_dec_ref(v___x_384_);
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
v_a_418_ = lean_ctor_get(v___x_385_, 0);
v_isSharedCheck_425_ = !lean_is_exclusive(v___x_385_);
if (v_isSharedCheck_425_ == 0)
{
v___x_420_ = v___x_385_;
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_a_418_);
lean_dec(v___x_385_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_425_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_423_; 
if (v_isShared_421_ == 0)
{
v___x_423_ = v___x_420_;
goto v_reusejp_422_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_a_418_);
v___x_423_ = v_reuseFailAlloc_424_;
goto v_reusejp_422_;
}
v_reusejp_422_:
{
return v___x_423_;
}
}
}
}
v___jp_426_:
{
lean_object* v___x_427_; 
lean_inc(v_a_379_);
lean_inc_ref(v_a_378_);
lean_inc(v_a_377_);
lean_inc_ref(v_a_376_);
lean_inc_ref(v_a_374_);
v___x_427_ = lean_whnf(v_a_374_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_427_) == 0)
{
lean_object* v_a_428_; lean_object* v___x_429_; 
v_a_428_ = lean_ctor_get(v___x_427_, 0);
lean_inc(v_a_428_);
lean_dec_ref_known(v___x_427_, 1);
lean_inc(v_a_379_);
lean_inc_ref(v_a_378_);
lean_inc(v_a_377_);
lean_inc_ref(v_a_376_);
lean_inc_ref(v_b_375_);
v___x_429_ = lean_whnf(v_b_375_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
if (lean_obj_tag(v___x_429_) == 0)
{
lean_object* v_a_430_; uint8_t v___x_431_; 
v_a_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_a_430_);
lean_dec_ref_known(v___x_429_, 1);
v___x_431_ = lean_expr_eqv(v_a_428_, v_a_374_);
lean_dec_ref(v_a_374_);
if (v___x_431_ == 0)
{
lean_dec_ref(v_b_375_);
lean_dec(v_caseName_x3f_371_);
v___y_382_ = v_a_430_;
v___y_383_ = v_a_428_;
goto v___jp_381_;
}
else
{
uint8_t v___x_432_; 
v___x_432_ = lean_expr_eqv(v_a_430_, v_b_375_);
lean_dec_ref(v_b_375_);
if (v___x_432_ == 0)
{
lean_dec(v_caseName_x3f_371_);
v___y_382_ = v_a_430_;
v___y_383_ = v_a_428_;
goto v___jp_381_;
}
else
{
lean_dec(v_a_430_);
lean_dec(v_a_428_);
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
if (lean_obj_tag(v_caseName_x3f_371_) == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; 
v___x_433_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_434_ = l_Lean_LocalDecl_type(v_eqDecl_372_);
v___x_435_ = l_Lean_indentExpr(v___x_434_);
v___x_436_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_436_, 0, v___x_433_);
lean_ctor_set(v___x_436_, 1, v___x_435_);
v___x_437_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_436_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
return v___x_437_;
}
else
{
lean_object* v_val_438_; uint8_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v_val_438_ = lean_ctor_get(v_caseName_x3f_371_, 0);
lean_inc(v_val_438_);
lean_dec_ref_known(v_caseName_x3f_371_, 1);
v___x_439_ = 0;
v___x_440_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq___closed__1);
v___x_441_ = l_Lean_LocalDecl_type(v_eqDecl_372_);
v___x_442_ = l_Lean_indentExpr(v___x_441_);
v___x_443_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_443_, 0, v___x_440_);
lean_ctor_set(v___x_443_, 1, v___x_442_);
v___x_444_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__1);
v___x_445_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_445_, 0, v___x_443_);
lean_ctor_set(v___x_445_, 1, v___x_444_);
v___x_446_ = l_Lean_MessageData_ofConstName(v_val_438_, v___x_439_);
v___x_447_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_445_);
lean_ctor_set(v___x_447_, 1, v___x_446_);
v___x_448_ = lean_obj_once(&l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3, &l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3_once, _init_l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___closed__3);
v___x_449_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_449_, 0, v___x_447_);
lean_ctor_set(v___x_449_, 1, v___x_448_);
v___x_450_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_449_, v_a_376_, v_a_377_, v_a_378_, v_a_379_);
return v___x_450_;
}
}
}
}
else
{
lean_object* v_a_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_458_; 
lean_dec(v_a_428_);
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_caseName_x3f_371_);
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
v_a_451_ = lean_ctor_get(v___x_429_, 0);
v_isSharedCheck_458_ = !lean_is_exclusive(v___x_429_);
if (v_isSharedCheck_458_ == 0)
{
v___x_453_ = v___x_429_;
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_a_451_);
lean_dec(v___x_429_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_458_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___x_456_; 
if (v_isShared_454_ == 0)
{
v___x_456_ = v___x_453_;
goto v_reusejp_455_;
}
else
{
lean_object* v_reuseFailAlloc_457_; 
v_reuseFailAlloc_457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_457_, 0, v_a_451_);
v___x_456_ = v_reuseFailAlloc_457_;
goto v_reusejp_455_;
}
v_reusejp_455_:
{
return v___x_456_;
}
}
}
}
else
{
lean_object* v_a_459_; lean_object* v___x_461_; uint8_t v_isShared_462_; uint8_t v_isSharedCheck_466_; 
lean_dec_ref(v_b_375_);
lean_dec_ref(v_a_374_);
lean_dec(v_caseName_x3f_371_);
lean_dec(v_subst_370_);
lean_dec(v_eqFVarId_369_);
lean_dec(v_mvarId_368_);
v_a_459_ = lean_ctor_get(v___x_427_, 0);
v_isSharedCheck_466_ = !lean_is_exclusive(v___x_427_);
if (v_isSharedCheck_466_ == 0)
{
v___x_461_ = v___x_427_;
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
else
{
lean_inc(v_a_459_);
lean_dec(v___x_427_);
v___x_461_ = lean_box(0);
v_isShared_462_ = v_isSharedCheck_466_;
goto v_resetjp_460_;
}
v_resetjp_460_:
{
lean_object* v___x_464_; 
if (v_isShared_462_ == 0)
{
v___x_464_ = v___x_461_;
goto v_reusejp_463_;
}
else
{
lean_object* v_reuseFailAlloc_465_; 
v_reuseFailAlloc_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_465_, 0, v_a_459_);
v___x_464_ = v_reuseFailAlloc_465_;
goto v_reusejp_463_;
}
v_reusejp_463_:
{
return v___x_464_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection___boxed(lean_object* v_mvarId_541_, lean_object* v_eqFVarId_542_, lean_object* v_subst_543_, lean_object* v_caseName_x3f_544_, lean_object* v_eqDecl_545_, lean_object* v_injectionOffset_x3f_546_, lean_object* v_a_547_, lean_object* v_b_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_){
_start:
{
lean_object* v_res_554_; 
v_res_554_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(v_mvarId_541_, v_eqFVarId_542_, v_subst_543_, v_caseName_x3f_544_, v_eqDecl_545_, v_injectionOffset_x3f_546_, v_a_547_, v_b_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_);
lean_dec(v_a_552_);
lean_dec_ref(v_a_551_);
lean_dec(v_a_550_);
lean_dec_ref(v_a_549_);
lean_dec_ref(v_eqDecl_545_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(lean_object* v_e_555_, lean_object* v___y_556_){
_start:
{
uint8_t v___x_558_; 
v___x_558_ = l_Lean_Expr_hasMVar(v_e_555_);
if (v___x_558_ == 0)
{
lean_object* v___x_559_; 
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v_e_555_);
return v___x_559_;
}
else
{
lean_object* v___x_560_; lean_object* v_mctx_561_; lean_object* v___x_562_; lean_object* v_fst_563_; lean_object* v_snd_564_; lean_object* v___x_565_; lean_object* v_cache_566_; lean_object* v_zetaDeltaFVarIds_567_; lean_object* v_postponed_568_; lean_object* v_diag_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_578_; 
v___x_560_ = lean_st_ref_get(v___y_556_);
v_mctx_561_ = lean_ctor_get(v___x_560_, 0);
lean_inc_ref(v_mctx_561_);
lean_dec(v___x_560_);
v___x_562_ = l_Lean_instantiateMVarsCore(v_mctx_561_, v_e_555_);
v_fst_563_ = lean_ctor_get(v___x_562_, 0);
lean_inc(v_fst_563_);
v_snd_564_ = lean_ctor_get(v___x_562_, 1);
lean_inc(v_snd_564_);
lean_dec_ref(v___x_562_);
v___x_565_ = lean_st_ref_take(v___y_556_);
v_cache_566_ = lean_ctor_get(v___x_565_, 1);
v_zetaDeltaFVarIds_567_ = lean_ctor_get(v___x_565_, 2);
v_postponed_568_ = lean_ctor_get(v___x_565_, 3);
v_diag_569_ = lean_ctor_get(v___x_565_, 4);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_565_);
if (v_isSharedCheck_578_ == 0)
{
lean_object* v_unused_579_; 
v_unused_579_ = lean_ctor_get(v___x_565_, 0);
lean_dec(v_unused_579_);
v___x_571_ = v___x_565_;
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_diag_569_);
lean_inc(v_postponed_568_);
lean_inc(v_zetaDeltaFVarIds_567_);
lean_inc(v_cache_566_);
lean_dec(v___x_565_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_578_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_574_; 
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v_snd_564_);
v___x_574_ = v___x_571_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_snd_564_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v_cache_566_);
lean_ctor_set(v_reuseFailAlloc_577_, 2, v_zetaDeltaFVarIds_567_);
lean_ctor_set(v_reuseFailAlloc_577_, 3, v_postponed_568_);
lean_ctor_set(v_reuseFailAlloc_577_, 4, v_diag_569_);
v___x_574_ = v_reuseFailAlloc_577_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_575_ = lean_st_ref_put(v___y_556_, v___x_574_);
v___x_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_576_, 0, v_fst_563_);
return v___x_576_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg___boxed(lean_object* v_e_580_, lean_object* v___y_581_, lean_object* v___y_582_){
_start:
{
lean_object* v_res_583_; 
v_res_583_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v_e_580_, v___y_581_);
lean_dec(v___y_581_);
return v_res_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(lean_object* v_e_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v_e_584_, v___y_586_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___boxed(lean_object* v_e_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_){
_start:
{
lean_object* v_res_597_; 
v_res_597_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1(v_e_591_, v___y_592_, v___y_593_, v___y_594_, v___y_595_);
lean_dec(v___y_595_);
lean_dec_ref(v___y_594_);
lean_dec(v___y_593_);
lean_dec_ref(v___y_592_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(lean_object* v_mvarId_598_, lean_object* v_x_599_, lean_object* v___y_600_, lean_object* v___y_601_, lean_object* v___y_602_, lean_object* v___y_603_){
_start:
{
lean_object* v___x_605_; 
v___x_605_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_598_, v_x_599_, v___y_600_, v___y_601_, v___y_602_, v___y_603_);
if (lean_obj_tag(v___x_605_) == 0)
{
lean_object* v_a_606_; lean_object* v___x_608_; uint8_t v_isShared_609_; uint8_t v_isSharedCheck_613_; 
v_a_606_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_613_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_613_ == 0)
{
v___x_608_ = v___x_605_;
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
else
{
lean_inc(v_a_606_);
lean_dec(v___x_605_);
v___x_608_ = lean_box(0);
v_isShared_609_ = v_isSharedCheck_613_;
goto v_resetjp_607_;
}
v_resetjp_607_:
{
lean_object* v___x_611_; 
if (v_isShared_609_ == 0)
{
v___x_611_ = v___x_608_;
goto v_reusejp_610_;
}
else
{
lean_object* v_reuseFailAlloc_612_; 
v_reuseFailAlloc_612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_612_, 0, v_a_606_);
v___x_611_ = v_reuseFailAlloc_612_;
goto v_reusejp_610_;
}
v_reusejp_610_:
{
return v___x_611_;
}
}
}
else
{
lean_object* v_a_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_621_; 
v_a_614_ = lean_ctor_get(v___x_605_, 0);
v_isSharedCheck_621_ = !lean_is_exclusive(v___x_605_);
if (v_isSharedCheck_621_ == 0)
{
v___x_616_ = v___x_605_;
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_a_614_);
lean_dec(v___x_605_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_621_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_619_; 
if (v_isShared_617_ == 0)
{
v___x_619_ = v___x_616_;
goto v_reusejp_618_;
}
else
{
lean_object* v_reuseFailAlloc_620_; 
v_reuseFailAlloc_620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_620_, 0, v_a_614_);
v___x_619_ = v_reuseFailAlloc_620_;
goto v_reusejp_618_;
}
v_reusejp_618_:
{
return v___x_619_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg___boxed(lean_object* v_mvarId_622_, lean_object* v_x_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_622_, v_x_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(lean_object* v_00_u03b1_630_, lean_object* v_mvarId_631_, lean_object* v_x_632_, lean_object* v___y_633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_){
_start:
{
lean_object* v___x_638_; 
v___x_638_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_631_, v_x_632_, v___y_633_, v___y_634_, v___y_635_, v___y_636_);
return v___x_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___boxed(lean_object* v_00_u03b1_639_, lean_object* v_mvarId_640_, lean_object* v_x_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_, lean_object* v___y_646_){
_start:
{
lean_object* v_res_647_; 
v_res_647_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2(v_00_u03b1_639_, v_mvarId_640_, v_x_641_, v___y_642_, v___y_643_, v___y_644_, v___y_645_);
lean_dec(v___y_645_);
lean_dec_ref(v___y_644_);
lean_dec(v___y_643_);
lean_dec_ref(v___y_642_);
return v_res_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(lean_object* v_x_648_, lean_object* v_x_649_, lean_object* v_x_650_, lean_object* v_x_651_){
_start:
{
lean_object* v_ks_652_; lean_object* v_vs_653_; lean_object* v___x_655_; uint8_t v_isShared_656_; uint8_t v_isSharedCheck_677_; 
v_ks_652_ = lean_ctor_get(v_x_648_, 0);
v_vs_653_ = lean_ctor_get(v_x_648_, 1);
v_isSharedCheck_677_ = !lean_is_exclusive(v_x_648_);
if (v_isSharedCheck_677_ == 0)
{
v___x_655_ = v_x_648_;
v_isShared_656_ = v_isSharedCheck_677_;
goto v_resetjp_654_;
}
else
{
lean_inc(v_vs_653_);
lean_inc(v_ks_652_);
lean_dec(v_x_648_);
v___x_655_ = lean_box(0);
v_isShared_656_ = v_isSharedCheck_677_;
goto v_resetjp_654_;
}
v_resetjp_654_:
{
lean_object* v___x_657_; uint8_t v___x_658_; 
v___x_657_ = lean_array_get_size(v_ks_652_);
v___x_658_ = lean_nat_dec_lt(v_x_649_, v___x_657_);
if (v___x_658_ == 0)
{
lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_662_; 
lean_dec(v_x_649_);
v___x_659_ = lean_array_push(v_ks_652_, v_x_650_);
v___x_660_ = lean_array_push(v_vs_653_, v_x_651_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 1, v___x_660_);
lean_ctor_set(v___x_655_, 0, v___x_659_);
v___x_662_ = v___x_655_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_663_; 
v_reuseFailAlloc_663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_663_, 0, v___x_659_);
lean_ctor_set(v_reuseFailAlloc_663_, 1, v___x_660_);
v___x_662_ = v_reuseFailAlloc_663_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
return v___x_662_;
}
}
else
{
lean_object* v_k_x27_664_; uint8_t v___x_665_; 
v_k_x27_664_ = lean_array_fget_borrowed(v_ks_652_, v_x_649_);
v___x_665_ = l_Lean_instBEqMVarId_beq(v_x_650_, v_k_x27_664_);
if (v___x_665_ == 0)
{
lean_object* v___x_667_; 
if (v_isShared_656_ == 0)
{
v___x_667_ = v___x_655_;
goto v_reusejp_666_;
}
else
{
lean_object* v_reuseFailAlloc_671_; 
v_reuseFailAlloc_671_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_671_, 0, v_ks_652_);
lean_ctor_set(v_reuseFailAlloc_671_, 1, v_vs_653_);
v___x_667_ = v_reuseFailAlloc_671_;
goto v_reusejp_666_;
}
v_reusejp_666_:
{
lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_668_ = lean_unsigned_to_nat(1u);
v___x_669_ = lean_nat_add(v_x_649_, v___x_668_);
lean_dec(v_x_649_);
v_x_648_ = v___x_667_;
v_x_649_ = v___x_669_;
goto _start;
}
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; lean_object* v___x_675_; 
v___x_672_ = lean_array_fset(v_ks_652_, v_x_649_, v_x_650_);
v___x_673_ = lean_array_fset(v_vs_653_, v_x_649_, v_x_651_);
lean_dec(v_x_649_);
if (v_isShared_656_ == 0)
{
lean_ctor_set(v___x_655_, 1, v___x_673_);
lean_ctor_set(v___x_655_, 0, v___x_672_);
v___x_675_ = v___x_655_;
goto v_reusejp_674_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v___x_672_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v___x_673_);
v___x_675_ = v_reuseFailAlloc_676_;
goto v_reusejp_674_;
}
v_reusejp_674_:
{
return v___x_675_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(lean_object* v_n_678_, lean_object* v_k_679_, lean_object* v_v_680_){
_start:
{
lean_object* v___x_681_; lean_object* v___x_682_; 
v___x_681_ = lean_unsigned_to_nat(0u);
v___x_682_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(v_n_678_, v___x_681_, v_k_679_, v_v_680_);
return v___x_682_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_683_; 
v___x_683_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_683_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(lean_object* v_x_684_, size_t v_x_685_, size_t v_x_686_, lean_object* v_x_687_, lean_object* v_x_688_){
_start:
{
if (lean_obj_tag(v_x_684_) == 0)
{
lean_object* v_es_689_; size_t v___x_690_; size_t v___x_691_; lean_object* v_j_692_; lean_object* v___x_693_; uint8_t v___x_694_; 
v_es_689_ = lean_ctor_get(v_x_684_, 0);
v___x_690_ = ((size_t)31ULL);
v___x_691_ = lean_usize_land(v_x_685_, v___x_690_);
v_j_692_ = lean_usize_to_nat(v___x_691_);
v___x_693_ = lean_array_get_size(v_es_689_);
v___x_694_ = lean_nat_dec_lt(v_j_692_, v___x_693_);
if (v___x_694_ == 0)
{
lean_dec(v_j_692_);
lean_dec(v_x_688_);
lean_dec(v_x_687_);
return v_x_684_;
}
else
{
lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_733_; 
lean_inc_ref(v_es_689_);
v_isSharedCheck_733_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_733_ == 0)
{
lean_object* v_unused_734_; 
v_unused_734_ = lean_ctor_get(v_x_684_, 0);
lean_dec(v_unused_734_);
v___x_696_ = v_x_684_;
v_isShared_697_ = v_isSharedCheck_733_;
goto v_resetjp_695_;
}
else
{
lean_dec(v_x_684_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_733_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v_v_698_; lean_object* v___x_699_; lean_object* v_xs_x27_700_; lean_object* v___y_702_; 
v_v_698_ = lean_array_fget(v_es_689_, v_j_692_);
v___x_699_ = lean_box(0);
v_xs_x27_700_ = lean_array_fset(v_es_689_, v_j_692_, v___x_699_);
switch(lean_obj_tag(v_v_698_))
{
case 0:
{
lean_object* v_key_707_; lean_object* v_val_708_; lean_object* v___x_710_; uint8_t v_isShared_711_; uint8_t v_isSharedCheck_718_; 
v_key_707_ = lean_ctor_get(v_v_698_, 0);
v_val_708_ = lean_ctor_get(v_v_698_, 1);
v_isSharedCheck_718_ = !lean_is_exclusive(v_v_698_);
if (v_isSharedCheck_718_ == 0)
{
v___x_710_ = v_v_698_;
v_isShared_711_ = v_isSharedCheck_718_;
goto v_resetjp_709_;
}
else
{
lean_inc(v_val_708_);
lean_inc(v_key_707_);
lean_dec(v_v_698_);
v___x_710_ = lean_box(0);
v_isShared_711_ = v_isSharedCheck_718_;
goto v_resetjp_709_;
}
v_resetjp_709_:
{
uint8_t v___x_712_; 
v___x_712_ = l_Lean_instBEqMVarId_beq(v_x_687_, v_key_707_);
if (v___x_712_ == 0)
{
lean_object* v___x_713_; lean_object* v___x_714_; 
lean_del_object(v___x_710_);
v___x_713_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_707_, v_val_708_, v_x_687_, v_x_688_);
v___x_714_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
v___y_702_ = v___x_714_;
goto v___jp_701_;
}
else
{
lean_object* v___x_716_; 
lean_dec(v_val_708_);
lean_dec(v_key_707_);
if (v_isShared_711_ == 0)
{
lean_ctor_set(v___x_710_, 1, v_x_688_);
lean_ctor_set(v___x_710_, 0, v_x_687_);
v___x_716_ = v___x_710_;
goto v_reusejp_715_;
}
else
{
lean_object* v_reuseFailAlloc_717_; 
v_reuseFailAlloc_717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_717_, 0, v_x_687_);
lean_ctor_set(v_reuseFailAlloc_717_, 1, v_x_688_);
v___x_716_ = v_reuseFailAlloc_717_;
goto v_reusejp_715_;
}
v_reusejp_715_:
{
v___y_702_ = v___x_716_;
goto v___jp_701_;
}
}
}
}
case 1:
{
lean_object* v_node_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_731_; 
v_node_719_ = lean_ctor_get(v_v_698_, 0);
v_isSharedCheck_731_ = !lean_is_exclusive(v_v_698_);
if (v_isSharedCheck_731_ == 0)
{
v___x_721_ = v_v_698_;
v_isShared_722_ = v_isSharedCheck_731_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_node_719_);
lean_dec(v_v_698_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_731_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
size_t v___x_723_; size_t v___x_724_; size_t v___x_725_; size_t v___x_726_; lean_object* v___x_727_; lean_object* v___x_729_; 
v___x_723_ = ((size_t)5ULL);
v___x_724_ = lean_usize_shift_right(v_x_685_, v___x_723_);
v___x_725_ = ((size_t)1ULL);
v___x_726_ = lean_usize_add(v_x_686_, v___x_725_);
v___x_727_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_node_719_, v___x_724_, v___x_726_, v_x_687_, v_x_688_);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_727_);
v___x_729_ = v___x_721_;
goto v_reusejp_728_;
}
else
{
lean_object* v_reuseFailAlloc_730_; 
v_reuseFailAlloc_730_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_730_, 0, v___x_727_);
v___x_729_ = v_reuseFailAlloc_730_;
goto v_reusejp_728_;
}
v_reusejp_728_:
{
v___y_702_ = v___x_729_;
goto v___jp_701_;
}
}
}
default: 
{
lean_object* v___x_732_; 
v___x_732_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_732_, 0, v_x_687_);
lean_ctor_set(v___x_732_, 1, v_x_688_);
v___y_702_ = v___x_732_;
goto v___jp_701_;
}
}
v___jp_701_:
{
lean_object* v___x_703_; lean_object* v___x_705_; 
v___x_703_ = lean_array_fset(v_xs_x27_700_, v_j_692_, v___y_702_);
lean_dec(v_j_692_);
if (v_isShared_697_ == 0)
{
lean_ctor_set(v___x_696_, 0, v___x_703_);
v___x_705_ = v___x_696_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(0, 1, 0);
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
}
else
{
lean_object* v_ks_735_; lean_object* v_vs_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_754_; 
v_ks_735_ = lean_ctor_get(v_x_684_, 0);
v_vs_736_ = lean_ctor_get(v_x_684_, 1);
v_isSharedCheck_754_ = !lean_is_exclusive(v_x_684_);
if (v_isSharedCheck_754_ == 0)
{
v___x_738_ = v_x_684_;
v_isShared_739_ = v_isSharedCheck_754_;
goto v_resetjp_737_;
}
else
{
lean_inc(v_vs_736_);
lean_inc(v_ks_735_);
lean_dec(v_x_684_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_754_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_741_; 
if (v_isShared_739_ == 0)
{
v___x_741_ = v___x_738_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_753_; 
v_reuseFailAlloc_753_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_753_, 0, v_ks_735_);
lean_ctor_set(v_reuseFailAlloc_753_, 1, v_vs_736_);
v___x_741_ = v_reuseFailAlloc_753_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v_newNode_742_; size_t v___x_743_; uint8_t v___x_744_; 
v_newNode_742_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(v___x_741_, v_x_687_, v_x_688_);
v___x_743_ = ((size_t)7ULL);
v___x_744_ = lean_usize_dec_le(v___x_743_, v_x_686_);
if (v___x_744_ == 0)
{
lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; 
v___x_745_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_742_);
v___x_746_ = lean_unsigned_to_nat(4u);
v___x_747_ = lean_nat_dec_lt(v___x_745_, v___x_746_);
lean_dec(v___x_745_);
if (v___x_747_ == 0)
{
lean_object* v_ks_748_; lean_object* v_vs_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_ks_748_ = lean_ctor_get(v_newNode_742_, 0);
lean_inc_ref(v_ks_748_);
v_vs_749_ = lean_ctor_get(v_newNode_742_, 1);
lean_inc_ref(v_vs_749_);
lean_dec_ref(v_newNode_742_);
v___x_750_ = lean_unsigned_to_nat(0u);
v___x_751_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___closed__0);
v___x_752_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_x_686_, v_ks_748_, v_vs_749_, v___x_750_, v___x_751_);
lean_dec_ref(v_vs_749_);
lean_dec_ref(v_ks_748_);
return v___x_752_;
}
else
{
return v_newNode_742_;
}
}
else
{
return v_newNode_742_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(size_t v_depth_755_, lean_object* v_keys_756_, lean_object* v_vals_757_, lean_object* v_i_758_, lean_object* v_entries_759_){
_start:
{
lean_object* v___x_760_; uint8_t v___x_761_; 
v___x_760_ = lean_array_get_size(v_keys_756_);
v___x_761_ = lean_nat_dec_lt(v_i_758_, v___x_760_);
if (v___x_761_ == 0)
{
lean_dec(v_i_758_);
return v_entries_759_;
}
else
{
lean_object* v_k_762_; lean_object* v_v_763_; uint64_t v___x_764_; size_t v_h_765_; size_t v___x_766_; lean_object* v___x_767_; size_t v___x_768_; size_t v___x_769_; size_t v___x_770_; size_t v_h_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_k_762_ = lean_array_fget_borrowed(v_keys_756_, v_i_758_);
v_v_763_ = lean_array_fget_borrowed(v_vals_757_, v_i_758_);
v___x_764_ = l_Lean_instHashableMVarId_hash(v_k_762_);
v_h_765_ = lean_uint64_to_usize(v___x_764_);
v___x_766_ = ((size_t)5ULL);
v___x_767_ = lean_unsigned_to_nat(1u);
v___x_768_ = ((size_t)1ULL);
v___x_769_ = lean_usize_sub(v_depth_755_, v___x_768_);
v___x_770_ = lean_usize_mul(v___x_766_, v___x_769_);
v_h_771_ = lean_usize_shift_right(v_h_765_, v___x_770_);
v___x_772_ = lean_nat_add(v_i_758_, v___x_767_);
lean_dec(v_i_758_);
lean_inc(v_v_763_);
lean_inc(v_k_762_);
v___x_773_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_entries_759_, v_h_771_, v_depth_755_, v_k_762_, v_v_763_);
v_i_758_ = v___x_772_;
v_entries_759_ = v___x_773_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg___boxed(lean_object* v_depth_775_, lean_object* v_keys_776_, lean_object* v_vals_777_, lean_object* v_i_778_, lean_object* v_entries_779_){
_start:
{
size_t v_depth_boxed_780_; lean_object* v_res_781_; 
v_depth_boxed_780_ = lean_unbox_usize(v_depth_775_);
lean_dec(v_depth_775_);
v_res_781_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_depth_boxed_780_, v_keys_776_, v_vals_777_, v_i_778_, v_entries_779_);
lean_dec_ref(v_vals_777_);
lean_dec_ref(v_keys_776_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg___boxed(lean_object* v_x_782_, lean_object* v_x_783_, lean_object* v_x_784_, lean_object* v_x_785_, lean_object* v_x_786_){
_start:
{
size_t v_x_9041__boxed_787_; size_t v_x_9042__boxed_788_; lean_object* v_res_789_; 
v_x_9041__boxed_787_ = lean_unbox_usize(v_x_783_);
lean_dec(v_x_783_);
v_x_9042__boxed_788_ = lean_unbox_usize(v_x_784_);
lean_dec(v_x_784_);
v_res_789_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_782_, v_x_9041__boxed_787_, v_x_9042__boxed_788_, v_x_785_, v_x_786_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(lean_object* v_x_790_, lean_object* v_x_791_, lean_object* v_x_792_){
_start:
{
uint64_t v___x_793_; size_t v___x_794_; size_t v___x_795_; lean_object* v___x_796_; 
v___x_793_ = l_Lean_instHashableMVarId_hash(v_x_791_);
v___x_794_ = lean_uint64_to_usize(v___x_793_);
v___x_795_ = ((size_t)1ULL);
v___x_796_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_790_, v___x_794_, v___x_795_, v_x_791_, v_x_792_);
return v___x_796_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(lean_object* v_mvarId_797_, lean_object* v_val_798_, lean_object* v___y_799_){
_start:
{
lean_object* v___x_801_; lean_object* v_mctx_802_; lean_object* v_cache_803_; lean_object* v_zetaDeltaFVarIds_804_; lean_object* v_postponed_805_; lean_object* v_diag_806_; lean_object* v___x_808_; uint8_t v_isShared_809_; uint8_t v_isSharedCheck_835_; 
v___x_801_ = lean_st_ref_take(v___y_799_);
v_mctx_802_ = lean_ctor_get(v___x_801_, 0);
v_cache_803_ = lean_ctor_get(v___x_801_, 1);
v_zetaDeltaFVarIds_804_ = lean_ctor_get(v___x_801_, 2);
v_postponed_805_ = lean_ctor_get(v___x_801_, 3);
v_diag_806_ = lean_ctor_get(v___x_801_, 4);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_801_);
if (v_isSharedCheck_835_ == 0)
{
v___x_808_ = v___x_801_;
v_isShared_809_ = v_isSharedCheck_835_;
goto v_resetjp_807_;
}
else
{
lean_inc(v_diag_806_);
lean_inc(v_postponed_805_);
lean_inc(v_zetaDeltaFVarIds_804_);
lean_inc(v_cache_803_);
lean_inc(v_mctx_802_);
lean_dec(v___x_801_);
v___x_808_ = lean_box(0);
v_isShared_809_ = v_isSharedCheck_835_;
goto v_resetjp_807_;
}
v_resetjp_807_:
{
lean_object* v_depth_810_; lean_object* v_levelAssignDepth_811_; lean_object* v_lmvarCounter_812_; lean_object* v_mvarCounter_813_; lean_object* v_lDecls_814_; lean_object* v_decls_815_; lean_object* v_userNames_816_; lean_object* v_lAssignment_817_; lean_object* v_eAssignment_818_; lean_object* v_dAssignment_819_; lean_object* v_instanceTypedMVars_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_834_; 
v_depth_810_ = lean_ctor_get(v_mctx_802_, 0);
v_levelAssignDepth_811_ = lean_ctor_get(v_mctx_802_, 1);
v_lmvarCounter_812_ = lean_ctor_get(v_mctx_802_, 2);
v_mvarCounter_813_ = lean_ctor_get(v_mctx_802_, 3);
v_lDecls_814_ = lean_ctor_get(v_mctx_802_, 4);
v_decls_815_ = lean_ctor_get(v_mctx_802_, 5);
v_userNames_816_ = lean_ctor_get(v_mctx_802_, 6);
v_lAssignment_817_ = lean_ctor_get(v_mctx_802_, 7);
v_eAssignment_818_ = lean_ctor_get(v_mctx_802_, 8);
v_dAssignment_819_ = lean_ctor_get(v_mctx_802_, 9);
v_instanceTypedMVars_820_ = lean_ctor_get(v_mctx_802_, 10);
v_isSharedCheck_834_ = !lean_is_exclusive(v_mctx_802_);
if (v_isSharedCheck_834_ == 0)
{
v___x_822_ = v_mctx_802_;
v_isShared_823_ = v_isSharedCheck_834_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_instanceTypedMVars_820_);
lean_inc(v_dAssignment_819_);
lean_inc(v_eAssignment_818_);
lean_inc(v_lAssignment_817_);
lean_inc(v_userNames_816_);
lean_inc(v_decls_815_);
lean_inc(v_lDecls_814_);
lean_inc(v_mvarCounter_813_);
lean_inc(v_lmvarCounter_812_);
lean_inc(v_levelAssignDepth_811_);
lean_inc(v_depth_810_);
lean_dec(v_mctx_802_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_834_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_827_; 
v___x_824_ = lean_box(0);
v___x_825_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(v_eAssignment_818_, v_mvarId_797_, v_val_798_);
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 8, v___x_825_);
v___x_827_ = v___x_822_;
goto v_reusejp_826_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v_depth_810_);
lean_ctor_set(v_reuseFailAlloc_833_, 1, v_levelAssignDepth_811_);
lean_ctor_set(v_reuseFailAlloc_833_, 2, v_lmvarCounter_812_);
lean_ctor_set(v_reuseFailAlloc_833_, 3, v_mvarCounter_813_);
lean_ctor_set(v_reuseFailAlloc_833_, 4, v_lDecls_814_);
lean_ctor_set(v_reuseFailAlloc_833_, 5, v_decls_815_);
lean_ctor_set(v_reuseFailAlloc_833_, 6, v_userNames_816_);
lean_ctor_set(v_reuseFailAlloc_833_, 7, v_lAssignment_817_);
lean_ctor_set(v_reuseFailAlloc_833_, 8, v___x_825_);
lean_ctor_set(v_reuseFailAlloc_833_, 9, v_dAssignment_819_);
lean_ctor_set(v_reuseFailAlloc_833_, 10, v_instanceTypedMVars_820_);
v___x_827_ = v_reuseFailAlloc_833_;
goto v_reusejp_826_;
}
v_reusejp_826_:
{
lean_object* v___x_829_; 
if (v_isShared_809_ == 0)
{
lean_ctor_set(v___x_808_, 0, v___x_827_);
v___x_829_ = v___x_808_;
goto v_reusejp_828_;
}
else
{
lean_object* v_reuseFailAlloc_832_; 
v_reuseFailAlloc_832_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_832_, 0, v___x_827_);
lean_ctor_set(v_reuseFailAlloc_832_, 1, v_cache_803_);
lean_ctor_set(v_reuseFailAlloc_832_, 2, v_zetaDeltaFVarIds_804_);
lean_ctor_set(v_reuseFailAlloc_832_, 3, v_postponed_805_);
lean_ctor_set(v_reuseFailAlloc_832_, 4, v_diag_806_);
v___x_829_ = v_reuseFailAlloc_832_;
goto v_reusejp_828_;
}
v_reusejp_828_:
{
lean_object* v___x_830_; lean_object* v___x_831_; 
v___x_830_ = lean_st_ref_put(v___y_799_, v___x_829_);
v___x_831_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_831_, 0, v___x_824_);
return v___x_831_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg___boxed(lean_object* v_mvarId_836_, lean_object* v_val_837_, lean_object* v___y_838_, lean_object* v___y_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_836_, v_val_837_, v___y_838_);
lean_dec(v___y_838_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0(lean_object* v_mvarId_848_, lean_object* v_a_849_, uint8_t v___x_850_, lean_object* v_a_851_, lean_object* v_b_852_, lean_object* v___y_853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_){
_start:
{
lean_object* v_fst_859_; lean_object* v_fst_860_; lean_object* v_snd_861_; lean_object* v___x_965_; lean_object* v_env_966_; lean_object* v___x_967_; uint8_t v___x_968_; 
v___x_965_ = lean_st_ref_get(v___y_856_);
v_env_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc_ref(v_env_966_);
lean_dec(v___x_965_);
v___x_967_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__0___closed__3));
v___x_968_ = l_Lean_Environment_contains(v_env_966_, v___x_967_, v___x_850_);
if (v___x_968_ == 0)
{
lean_object* v___x_969_; lean_object* v___x_970_; 
lean_dec_ref(v_b_852_);
lean_dec_ref(v_a_851_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v___x_969_ = lean_box(0);
v___x_970_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_970_, 0, v___x_969_);
return v___x_970_;
}
else
{
lean_object* v___x_971_; 
v___x_971_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_a_851_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_971_) == 0)
{
lean_object* v_a_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_1038_; 
v_a_972_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_1038_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_1038_ == 0)
{
v___x_974_ = v___x_971_;
v_isShared_975_ = v_isSharedCheck_1038_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_a_972_);
lean_dec(v___x_971_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_1038_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
if (lean_obj_tag(v_a_972_) == 1)
{
lean_object* v_val_976_; lean_object* v_fst_977_; lean_object* v_snd_978_; lean_object* v___x_979_; 
v_val_976_ = lean_ctor_get(v_a_972_, 0);
lean_inc(v_val_976_);
lean_dec_ref_known(v_a_972_, 1);
v_fst_977_ = lean_ctor_get(v_val_976_, 0);
lean_inc(v_fst_977_);
v_snd_978_ = lean_ctor_get(v_val_976_, 1);
lean_inc(v_snd_978_);
lean_dec(v_val_976_);
v___x_979_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_toOffset_x3f(v_b_852_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_979_) == 0)
{
lean_object* v_a_980_; lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_1025_; 
v_a_980_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_982_ = v___x_979_;
v_isShared_983_ = v_isSharedCheck_1025_;
goto v_resetjp_981_;
}
else
{
lean_inc(v_a_980_);
lean_dec(v___x_979_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_1025_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
if (lean_obj_tag(v_a_980_) == 1)
{
lean_object* v_val_989_; lean_object* v_fst_990_; lean_object* v_snd_991_; lean_object* v___x_992_; uint8_t v___x_993_; 
lean_del_object(v___x_974_);
v_val_989_ = lean_ctor_get(v_a_980_, 0);
lean_inc(v_val_989_);
lean_dec_ref_known(v_a_980_, 1);
v_fst_990_ = lean_ctor_get(v_val_989_, 0);
lean_inc(v_fst_990_);
v_snd_991_ = lean_ctor_get(v_val_989_, 1);
lean_inc(v_snd_991_);
lean_dec(v_val_989_);
v___x_992_ = lean_unsigned_to_nat(0u);
v___x_993_ = lean_nat_dec_eq(v_snd_978_, v___x_992_);
if (v___x_993_ == 0)
{
uint8_t v___x_994_; 
v___x_994_ = lean_nat_dec_eq(v_snd_991_, v___x_992_);
if (v___x_994_ == 0)
{
uint8_t v___x_995_; 
lean_del_object(v___x_982_);
v___x_995_ = lean_nat_dec_lt(v_snd_978_, v_snd_991_);
if (v___x_995_ == 0)
{
uint8_t v___x_996_; 
v___x_996_ = lean_nat_dec_eq(v_snd_978_, v_snd_991_);
if (v___x_996_ == 0)
{
lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; 
v___x_997_ = lean_nat_sub(v_snd_978_, v_snd_991_);
lean_dec(v_snd_978_);
v___x_998_ = l_Lean_mkNatLit(v___x_997_);
v___x_999_ = l_Lean_Meta_mkAdd(v_fst_977_, v___x_998_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_999_) == 0)
{
lean_object* v_a_1000_; 
v_a_1000_ = lean_ctor_get(v___x_999_, 0);
lean_inc(v_a_1000_);
lean_dec_ref_known(v___x_999_, 1);
v_fst_859_ = v_a_1000_;
v_fst_860_ = v_fst_990_;
v_snd_861_ = v_snd_991_;
goto v___jp_858_;
}
else
{
lean_object* v_a_1001_; lean_object* v___x_1003_; uint8_t v_isShared_1004_; uint8_t v_isSharedCheck_1008_; 
lean_dec(v_snd_991_);
lean_dec(v_fst_990_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_1001_ = lean_ctor_get(v___x_999_, 0);
v_isSharedCheck_1008_ = !lean_is_exclusive(v___x_999_);
if (v_isSharedCheck_1008_ == 0)
{
v___x_1003_ = v___x_999_;
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
else
{
lean_inc(v_a_1001_);
lean_dec(v___x_999_);
v___x_1003_ = lean_box(0);
v_isShared_1004_ = v_isSharedCheck_1008_;
goto v_resetjp_1002_;
}
v_resetjp_1002_:
{
lean_object* v___x_1006_; 
if (v_isShared_1004_ == 0)
{
v___x_1006_ = v___x_1003_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_a_1001_);
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
lean_dec(v_snd_991_);
v_fst_859_ = v_fst_977_;
v_fst_860_ = v_fst_990_;
v_snd_861_ = v_snd_978_;
goto v___jp_858_;
}
}
else
{
lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v___x_1009_ = lean_nat_sub(v_snd_991_, v_snd_978_);
lean_dec(v_snd_991_);
v___x_1010_ = l_Lean_mkNatLit(v___x_1009_);
v___x_1011_ = l_Lean_Meta_mkAdd(v_fst_990_, v___x_1010_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_1011_) == 0)
{
lean_object* v_a_1012_; 
v_a_1012_ = lean_ctor_get(v___x_1011_, 0);
lean_inc(v_a_1012_);
lean_dec_ref_known(v___x_1011_, 1);
v_fst_859_ = v_fst_977_;
v_fst_860_ = v_a_1012_;
v_snd_861_ = v_snd_978_;
goto v___jp_858_;
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v_snd_978_);
lean_dec(v_fst_977_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_1013_ = lean_ctor_get(v___x_1011_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1011_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1011_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1011_);
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
else
{
lean_dec(v_snd_991_);
lean_dec(v_fst_990_);
lean_dec(v_snd_978_);
lean_dec(v_fst_977_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
goto v___jp_984_;
}
}
else
{
lean_dec(v_snd_991_);
lean_dec(v_fst_990_);
lean_dec(v_snd_978_);
lean_dec(v_fst_977_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
goto v___jp_984_;
}
}
else
{
lean_object* v___x_1021_; lean_object* v___x_1023_; 
lean_del_object(v___x_982_);
lean_dec(v_a_980_);
lean_dec(v_snd_978_);
lean_dec(v_fst_977_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v___x_1021_ = lean_box(0);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v___x_1021_);
v___x_1023_ = v___x_974_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v___x_1021_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
v___jp_984_:
{
lean_object* v___x_985_; lean_object* v___x_987_; 
v___x_985_ = lean_box(0);
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v___x_985_);
v___x_987_ = v___x_982_;
goto v_reusejp_986_;
}
else
{
lean_object* v_reuseFailAlloc_988_; 
v_reuseFailAlloc_988_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_988_, 0, v___x_985_);
v___x_987_ = v_reuseFailAlloc_988_;
goto v_reusejp_986_;
}
v_reusejp_986_:
{
return v___x_987_;
}
}
}
}
else
{
lean_object* v_a_1026_; lean_object* v___x_1028_; uint8_t v_isShared_1029_; uint8_t v_isSharedCheck_1033_; 
lean_dec(v_snd_978_);
lean_dec(v_fst_977_);
lean_del_object(v___x_974_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_1026_ = lean_ctor_get(v___x_979_, 0);
v_isSharedCheck_1033_ = !lean_is_exclusive(v___x_979_);
if (v_isSharedCheck_1033_ == 0)
{
v___x_1028_ = v___x_979_;
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
else
{
lean_inc(v_a_1026_);
lean_dec(v___x_979_);
v___x_1028_ = lean_box(0);
v_isShared_1029_ = v_isSharedCheck_1033_;
goto v_resetjp_1027_;
}
v_resetjp_1027_:
{
lean_object* v___x_1031_; 
if (v_isShared_1029_ == 0)
{
v___x_1031_ = v___x_1028_;
goto v_reusejp_1030_;
}
else
{
lean_object* v_reuseFailAlloc_1032_; 
v_reuseFailAlloc_1032_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1032_, 0, v_a_1026_);
v___x_1031_ = v_reuseFailAlloc_1032_;
goto v_reusejp_1030_;
}
v_reusejp_1030_:
{
return v___x_1031_;
}
}
}
}
else
{
lean_object* v___x_1034_; lean_object* v___x_1036_; 
lean_dec(v_a_972_);
lean_dec_ref(v_b_852_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v___x_1034_ = lean_box(0);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 0, v___x_1034_);
v___x_1036_ = v___x_974_;
goto v_reusejp_1035_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1034_);
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
lean_dec_ref(v_b_852_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_1039_ = lean_ctor_get(v___x_971_, 0);
v_isSharedCheck_1046_ = !lean_is_exclusive(v___x_971_);
if (v_isSharedCheck_1046_ == 0)
{
v___x_1041_ = v___x_971_;
v_isShared_1042_ = v_isSharedCheck_1046_;
goto v_resetjp_1040_;
}
else
{
lean_inc(v_a_1039_);
lean_dec(v___x_971_);
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
v___jp_858_:
{
lean_object* v___x_862_; 
lean_inc(v_mvarId_848_);
v___x_862_ = l_Lean_MVarId_getType(v_mvarId_848_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_862_) == 0)
{
lean_object* v_a_863_; lean_object* v___x_864_; 
v_a_863_ = lean_ctor_get(v___x_862_, 0);
lean_inc_n(v_a_863_, 2);
lean_dec_ref_known(v___x_862_, 1);
v___x_864_ = l_Lean_Meta_getLevel(v_a_863_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_864_) == 0)
{
lean_object* v_a_865_; lean_object* v___x_866_; 
v_a_865_ = lean_ctor_get(v___x_864_, 0);
lean_inc(v_a_865_);
lean_dec_ref_known(v___x_864_, 1);
lean_inc_ref(v_fst_860_);
lean_inc_ref(v_fst_859_);
v___x_866_ = l_Lean_Meta_mkEq(v_fst_859_, v_fst_860_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_object* v_a_867_; lean_object* v___x_868_; 
v_a_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_a_867_);
lean_dec_ref_known(v___x_866_, 1);
lean_inc(v_a_863_);
v___x_868_ = l_Lean_mkArrow(v_a_867_, v_a_863_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_868_) == 0)
{
lean_object* v_a_869_; lean_object* v___x_870_; 
v_a_869_ = lean_ctor_get(v___x_868_, 0);
lean_inc(v_a_869_);
lean_dec_ref_known(v___x_868_, 1);
lean_inc(v_mvarId_848_);
v___x_870_ = l_Lean_MVarId_getTag(v_mvarId_848_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v_a_871_; lean_object* v___x_872_; 
v_a_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_a_871_);
lean_dec_ref_known(v___x_870_, 1);
v___x_872_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_869_, v_a_871_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v_a_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_915_; 
v_a_873_ = lean_ctor_get(v___x_872_, 0);
lean_inc_n(v_a_873_, 2);
lean_dec_ref_known(v___x_872_, 1);
v___x_874_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__0___closed__3));
v___x_875_ = lean_box(0);
v___x_876_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_876_, 0, v_a_865_);
lean_ctor_set(v___x_876_, 1, v___x_875_);
v___x_877_ = l_Lean_mkConst(v___x_874_, v___x_876_);
v___x_878_ = l_Lean_mkNatLit(v_snd_861_);
lean_inc_ref(v_a_849_);
v___x_879_ = l_Lean_LocalDecl_toExpr(v_a_849_);
v___x_880_ = lean_unsigned_to_nat(6u);
v___x_881_ = lean_mk_empty_array_with_capacity(v___x_880_);
v___x_882_ = lean_array_push(v___x_881_, v_a_863_);
v___x_883_ = lean_array_push(v___x_882_, v_fst_859_);
v___x_884_ = lean_array_push(v___x_883_, v_fst_860_);
v___x_885_ = lean_array_push(v___x_884_, v___x_878_);
v___x_886_ = lean_array_push(v___x_885_, v___x_879_);
v___x_887_ = lean_array_push(v___x_886_, v_a_873_);
v___x_888_ = l_Lean_mkAppN(v___x_877_, v___x_887_);
lean_dec_ref(v___x_887_);
v___x_889_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_848_, v___x_888_, v___y_854_);
v_isSharedCheck_915_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_915_ == 0)
{
lean_object* v_unused_916_; 
v_unused_916_ = lean_ctor_get(v___x_889_, 0);
lean_dec(v_unused_916_);
v___x_891_ = v___x_889_;
v_isShared_892_ = v_isSharedCheck_915_;
goto v_resetjp_890_;
}
else
{
lean_dec(v___x_889_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_915_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; 
v___x_893_ = l_Lean_Expr_mvarId_x21(v_a_873_);
lean_dec(v_a_873_);
v___x_894_ = l_Lean_LocalDecl_fvarId(v_a_849_);
lean_dec_ref(v_a_849_);
v___x_895_ = l_Lean_MVarId_tryClear(v___x_893_, v___x_894_, v___y_853_, v___y_854_, v___y_855_, v___y_856_);
if (lean_obj_tag(v___x_895_) == 0)
{
lean_object* v_a_896_; lean_object* v___x_898_; uint8_t v_isShared_899_; uint8_t v_isSharedCheck_906_; 
v_a_896_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_906_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_906_ == 0)
{
v___x_898_ = v___x_895_;
v_isShared_899_ = v_isSharedCheck_906_;
goto v_resetjp_897_;
}
else
{
lean_inc(v_a_896_);
lean_dec(v___x_895_);
v___x_898_ = lean_box(0);
v_isShared_899_ = v_isSharedCheck_906_;
goto v_resetjp_897_;
}
v_resetjp_897_:
{
lean_object* v___x_901_; 
if (v_isShared_892_ == 0)
{
lean_ctor_set_tag(v___x_891_, 1);
lean_ctor_set(v___x_891_, 0, v_a_896_);
v___x_901_ = v___x_891_;
goto v_reusejp_900_;
}
else
{
lean_object* v_reuseFailAlloc_905_; 
v_reuseFailAlloc_905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_905_, 0, v_a_896_);
v___x_901_ = v_reuseFailAlloc_905_;
goto v_reusejp_900_;
}
v_reusejp_900_:
{
lean_object* v___x_903_; 
if (v_isShared_899_ == 0)
{
lean_ctor_set(v___x_898_, 0, v___x_901_);
v___x_903_ = v___x_898_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v___x_901_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_del_object(v___x_891_);
v_a_907_ = lean_ctor_get(v___x_895_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_895_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_895_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_895_);
v___x_909_ = lean_box(0);
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
v_resetjp_908_:
{
lean_object* v___x_912_; 
if (v_isShared_910_ == 0)
{
v___x_912_ = v___x_909_;
goto v_reusejp_911_;
}
else
{
lean_object* v_reuseFailAlloc_913_; 
v_reuseFailAlloc_913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_913_, 0, v_a_907_);
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
else
{
lean_object* v_a_917_; lean_object* v___x_919_; uint8_t v_isShared_920_; uint8_t v_isSharedCheck_924_; 
lean_dec(v_a_865_);
lean_dec(v_a_863_);
lean_dec(v_snd_861_);
lean_dec_ref(v_fst_860_);
lean_dec_ref(v_fst_859_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_917_ = lean_ctor_get(v___x_872_, 0);
v_isSharedCheck_924_ = !lean_is_exclusive(v___x_872_);
if (v_isSharedCheck_924_ == 0)
{
v___x_919_ = v___x_872_;
v_isShared_920_ = v_isSharedCheck_924_;
goto v_resetjp_918_;
}
else
{
lean_inc(v_a_917_);
lean_dec(v___x_872_);
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
lean_dec(v_a_869_);
lean_dec(v_a_865_);
lean_dec(v_a_863_);
lean_dec(v_snd_861_);
lean_dec_ref(v_fst_860_);
lean_dec_ref(v_fst_859_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_925_ = lean_ctor_get(v___x_870_, 0);
v_isSharedCheck_932_ = !lean_is_exclusive(v___x_870_);
if (v_isSharedCheck_932_ == 0)
{
v___x_927_ = v___x_870_;
v_isShared_928_ = v_isSharedCheck_932_;
goto v_resetjp_926_;
}
else
{
lean_inc(v_a_925_);
lean_dec(v___x_870_);
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
}
else
{
lean_object* v_a_933_; lean_object* v___x_935_; uint8_t v_isShared_936_; uint8_t v_isSharedCheck_940_; 
lean_dec(v_a_865_);
lean_dec(v_a_863_);
lean_dec(v_snd_861_);
lean_dec_ref(v_fst_860_);
lean_dec_ref(v_fst_859_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_933_ = lean_ctor_get(v___x_868_, 0);
v_isSharedCheck_940_ = !lean_is_exclusive(v___x_868_);
if (v_isSharedCheck_940_ == 0)
{
v___x_935_ = v___x_868_;
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
else
{
lean_inc(v_a_933_);
lean_dec(v___x_868_);
v___x_935_ = lean_box(0);
v_isShared_936_ = v_isSharedCheck_940_;
goto v_resetjp_934_;
}
v_resetjp_934_:
{
lean_object* v___x_938_; 
if (v_isShared_936_ == 0)
{
v___x_938_ = v___x_935_;
goto v_reusejp_937_;
}
else
{
lean_object* v_reuseFailAlloc_939_; 
v_reuseFailAlloc_939_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_939_, 0, v_a_933_);
v___x_938_ = v_reuseFailAlloc_939_;
goto v_reusejp_937_;
}
v_reusejp_937_:
{
return v___x_938_;
}
}
}
}
else
{
lean_object* v_a_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_948_; 
lean_dec(v_a_865_);
lean_dec(v_a_863_);
lean_dec(v_snd_861_);
lean_dec_ref(v_fst_860_);
lean_dec_ref(v_fst_859_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_941_ = lean_ctor_get(v___x_866_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_866_);
if (v_isSharedCheck_948_ == 0)
{
v___x_943_ = v___x_866_;
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_a_941_);
lean_dec(v___x_866_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_948_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_946_; 
if (v_isShared_944_ == 0)
{
v___x_946_ = v___x_943_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v_a_941_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec(v_a_863_);
lean_dec(v_snd_861_);
lean_dec_ref(v_fst_860_);
lean_dec_ref(v_fst_859_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_949_ = lean_ctor_get(v___x_864_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_864_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_864_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_864_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
else
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
lean_dec(v_snd_861_);
lean_dec_ref(v_fst_860_);
lean_dec_ref(v_fst_859_);
lean_dec_ref(v_a_849_);
lean_dec(v_mvarId_848_);
v_a_957_ = lean_ctor_get(v___x_862_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_862_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_862_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_862_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__0___boxed(lean_object* v_mvarId_1047_, lean_object* v_a_1048_, lean_object* v___x_1049_, lean_object* v_a_1050_, lean_object* v_b_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
uint8_t v___x_9272__boxed_1057_; lean_object* v_res_1058_; 
v___x_9272__boxed_1057_ = lean_unbox(v___x_1049_);
v_res_1058_ = l_Lean_Meta_unifyEq_x3f___lam__0(v_mvarId_1047_, v_a_1048_, v___x_9272__boxed_1057_, v_a_1050_, v_b_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_);
lean_dec(v___y_1055_);
lean_dec_ref(v___y_1054_);
lean_dec(v___y_1053_);
lean_dec_ref(v___y_1052_);
return v_res_1058_;
}
}
static lean_object* _init_l_Lean_Meta_unifyEq_x3f___lam__1___closed__3(void){
_start:
{
lean_object* v___x_1063_; lean_object* v___x_1064_; 
v___x_1063_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__1___closed__2));
v___x_1064_ = l_Lean_stringToMessageData(v___x_1063_);
return v___x_1064_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1(lean_object* v_eqFVarId_1065_, lean_object* v_mvarId_1066_, lean_object* v_subst_1067_, lean_object* v_acyclic_1068_, lean_object* v_caseName_x3f_1069_, lean_object* v___y_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_){
_start:
{
lean_object* v___x_1075_; 
lean_inc(v_eqFVarId_1065_);
v___x_1075_ = l_Lean_FVarId_getDecl___redArg(v_eqFVarId_1065_, v___y_1070_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1075_) == 0)
{
lean_object* v_a_1076_; lean_object* v___x_1077_; uint8_t v___x_1078_; 
v_a_1076_ = lean_ctor_get(v___x_1075_, 0);
lean_inc(v_a_1076_);
lean_dec_ref_known(v___x_1075_, 1);
v___x_1077_ = l_Lean_LocalDecl_type(v_a_1076_);
v___x_1078_ = l_Lean_Expr_isHEq(v___x_1077_);
if (v___x_1078_ == 0)
{
lean_object* v___x_1079_; lean_object* v___x_1080_; uint8_t v___x_1081_; 
v___x_1079_ = ((lean_object*)(l_Lean_Meta_unifyEq_x3f___lam__1___closed__1));
v___x_1080_ = lean_unsigned_to_nat(3u);
v___x_1081_ = l_Lean_Expr_isAppOfArity(v___x_1077_, v___x_1079_, v___x_1080_);
if (v___x_1081_ == 0)
{
lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; 
lean_dec(v_a_1076_);
lean_dec(v_caseName_x3f_1069_);
lean_dec_ref(v_acyclic_1068_);
lean_dec(v_subst_1067_);
lean_dec(v_mvarId_1066_);
lean_dec(v_eqFVarId_1065_);
v___x_1082_ = lean_obj_once(&l_Lean_Meta_unifyEq_x3f___lam__1___closed__3, &l_Lean_Meta_unifyEq_x3f___lam__1___closed__3_once, _init_l_Lean_Meta_unifyEq_x3f___lam__1___closed__3);
v___x_1083_ = l_Lean_indentExpr(v___x_1077_);
v___x_1084_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1082_);
lean_ctor_set(v___x_1084_, 1, v___x_1083_);
v___x_1085_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq_spec__1___redArg(v___x_1084_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
return v___x_1085_;
}
else
{
lean_object* v___x_1086_; lean_object* v___f_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v_a_1092_; lean_object* v___x_1093_; 
v___x_1086_ = lean_box(v___x_1081_);
lean_inc(v_a_1076_);
lean_inc(v_mvarId_1066_);
v___f_1087_ = lean_alloc_closure((void*)(l_Lean_Meta_unifyEq_x3f___lam__0___boxed), 10, 3);
lean_closure_set(v___f_1087_, 0, v_mvarId_1066_);
lean_closure_set(v___f_1087_, 1, v_a_1076_);
lean_closure_set(v___f_1087_, 2, v___x_1086_);
v___x_1088_ = l_Lean_Expr_appFn_x21(v___x_1077_);
v___x_1089_ = l_Lean_Expr_appArg_x21(v___x_1088_);
lean_dec_ref(v___x_1088_);
v___x_1090_ = l_Lean_Expr_appArg_x21(v___x_1077_);
lean_dec_ref(v___x_1077_);
lean_inc_ref(v___x_1089_);
v___x_1091_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v___x_1089_, v___y_1071_);
v_a_1092_ = lean_ctor_get(v___x_1091_, 0);
lean_inc(v_a_1092_);
lean_dec_ref(v___x_1091_);
lean_inc_ref(v___x_1090_);
v___x_1093_ = l_Lean_instantiateMVars___at___00Lean_Meta_unifyEq_x3f_spec__1___redArg(v___x_1090_, v___y_1071_);
if (lean_obj_tag(v_a_1092_) == 1)
{
lean_object* v_a_1094_; 
lean_dec_ref(v___f_1087_);
lean_dec(v_caseName_x3f_1069_);
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc(v_a_1094_);
lean_dec_ref(v___x_1093_);
if (lean_obj_tag(v_a_1094_) == 1)
{
lean_object* v_fvarId_1095_; lean_object* v_fvarId_1096_; lean_object* v___x_1097_; 
v_fvarId_1095_ = lean_ctor_get(v_a_1092_, 0);
lean_inc(v_fvarId_1095_);
lean_dec_ref_known(v_a_1092_, 1);
v_fvarId_1096_ = lean_ctor_get(v_a_1094_, 0);
lean_inc(v_fvarId_1096_);
lean_dec_ref_known(v_a_1094_, 1);
v___x_1097_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1095_, v___y_1070_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1099_; 
v_a_1098_ = lean_ctor_get(v___x_1097_, 0);
lean_inc(v_a_1098_);
lean_dec_ref_known(v___x_1097_, 1);
v___x_1099_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1096_, v___y_1070_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1099_) == 0)
{
lean_object* v_a_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; uint8_t v___x_1103_; lean_object* v___x_1104_; 
v_a_1100_ = lean_ctor_get(v___x_1099_, 0);
lean_inc(v_a_1100_);
lean_dec_ref_known(v___x_1099_, 1);
v___x_1101_ = l_Lean_LocalDecl_index(v_a_1098_);
lean_dec(v_a_1098_);
v___x_1102_ = l_Lean_LocalDecl_index(v_a_1100_);
lean_dec(v_a_1100_);
v___x_1103_ = lean_nat_dec_lt(v___x_1101_, v___x_1102_);
lean_dec(v___x_1102_);
lean_dec(v___x_1101_);
v___x_1104_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1066_, v_eqFVarId_1065_, v_subst_1067_, v_acyclic_1068_, v_a_1076_, v___x_1089_, v___x_1090_, v___x_1103_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v_a_1076_);
return v___x_1104_;
}
else
{
lean_object* v_a_1105_; lean_object* v___x_1107_; uint8_t v_isShared_1108_; uint8_t v_isSharedCheck_1112_; 
lean_dec(v_a_1098_);
lean_dec_ref(v___x_1090_);
lean_dec_ref(v___x_1089_);
lean_dec(v_a_1076_);
lean_dec_ref(v_acyclic_1068_);
lean_dec(v_subst_1067_);
lean_dec(v_mvarId_1066_);
lean_dec(v_eqFVarId_1065_);
v_a_1105_ = lean_ctor_get(v___x_1099_, 0);
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1099_);
if (v_isSharedCheck_1112_ == 0)
{
v___x_1107_ = v___x_1099_;
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
else
{
lean_inc(v_a_1105_);
lean_dec(v___x_1099_);
v___x_1107_ = lean_box(0);
v_isShared_1108_ = v_isSharedCheck_1112_;
goto v_resetjp_1106_;
}
v_resetjp_1106_:
{
lean_object* v___x_1110_; 
if (v_isShared_1108_ == 0)
{
v___x_1110_ = v___x_1107_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v_a_1105_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
}
else
{
lean_object* v_a_1113_; lean_object* v___x_1115_; uint8_t v_isShared_1116_; uint8_t v_isSharedCheck_1120_; 
lean_dec(v_fvarId_1096_);
lean_dec_ref(v___x_1090_);
lean_dec_ref(v___x_1089_);
lean_dec(v_a_1076_);
lean_dec_ref(v_acyclic_1068_);
lean_dec(v_subst_1067_);
lean_dec(v_mvarId_1066_);
lean_dec(v_eqFVarId_1065_);
v_a_1113_ = lean_ctor_get(v___x_1097_, 0);
v_isSharedCheck_1120_ = !lean_is_exclusive(v___x_1097_);
if (v_isSharedCheck_1120_ == 0)
{
v___x_1115_ = v___x_1097_;
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
else
{
lean_inc(v_a_1113_);
lean_dec(v___x_1097_);
v___x_1115_ = lean_box(0);
v_isShared_1116_ = v_isSharedCheck_1120_;
goto v_resetjp_1114_;
}
v_resetjp_1114_:
{
lean_object* v___x_1118_; 
if (v_isShared_1116_ == 0)
{
v___x_1118_ = v___x_1115_;
goto v_reusejp_1117_;
}
else
{
lean_object* v_reuseFailAlloc_1119_; 
v_reuseFailAlloc_1119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1119_, 0, v_a_1113_);
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
else
{
lean_object* v___x_1121_; 
lean_dec_ref_known(v_a_1092_, 1);
lean_dec(v_a_1094_);
v___x_1121_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1066_, v_eqFVarId_1065_, v_subst_1067_, v_acyclic_1068_, v_a_1076_, v___x_1089_, v___x_1090_, v___x_1078_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v_a_1076_);
return v___x_1121_;
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1161_; 
v_a_1122_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1161_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1124_ = v___x_1093_;
v_isShared_1125_ = v_isSharedCheck_1161_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1093_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1161_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
if (lean_obj_tag(v_a_1122_) == 1)
{
lean_object* v___x_1126_; 
lean_dec_ref_known(v_a_1122_, 1);
lean_del_object(v___x_1124_);
lean_dec(v_a_1092_);
lean_dec_ref(v___f_1087_);
lean_dec(v_caseName_x3f_1069_);
v___x_1126_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_substEq(v_mvarId_1066_, v_eqFVarId_1065_, v_subst_1067_, v_acyclic_1068_, v_a_1076_, v___x_1089_, v___x_1090_, v___x_1081_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v_a_1076_);
return v___x_1126_;
}
else
{
lean_object* v___x_1127_; 
lean_dec_ref(v___x_1090_);
lean_dec_ref(v___x_1089_);
lean_dec_ref(v_acyclic_1068_);
lean_inc(v_a_1122_);
lean_inc(v_a_1092_);
v___x_1127_ = l_Lean_Meta_isExprDefEq(v_a_1092_, v_a_1122_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1127_) == 0)
{
lean_object* v_a_1128_; uint8_t v___x_1129_; 
v_a_1128_ = lean_ctor_get(v___x_1127_, 0);
lean_inc(v_a_1128_);
lean_dec_ref_known(v___x_1127_, 1);
v___x_1129_ = lean_unbox(v_a_1128_);
lean_dec(v_a_1128_);
if (v___x_1129_ == 0)
{
lean_object* v___x_1130_; 
lean_del_object(v___x_1124_);
v___x_1130_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_unifyEq_x3f_injection(v_mvarId_1066_, v_eqFVarId_1065_, v_subst_1067_, v_caseName_x3f_1069_, v_a_1076_, v___f_1087_, v_a_1092_, v_a_1122_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v_a_1076_);
return v___x_1130_;
}
else
{
lean_object* v___x_1131_; 
lean_dec(v_a_1122_);
lean_dec(v_a_1092_);
lean_dec_ref(v___f_1087_);
lean_dec(v_a_1076_);
lean_dec(v_caseName_x3f_1069_);
v___x_1131_ = l_Lean_MVarId_clear(v_mvarId_1066_, v_eqFVarId_1065_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
if (lean_obj_tag(v___x_1131_) == 0)
{
lean_object* v_a_1132_; lean_object* v___x_1134_; uint8_t v_isShared_1135_; uint8_t v_isSharedCheck_1144_; 
v_a_1132_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1144_ == 0)
{
v___x_1134_ = v___x_1131_;
v_isShared_1135_ = v_isSharedCheck_1144_;
goto v_resetjp_1133_;
}
else
{
lean_inc(v_a_1132_);
lean_dec(v___x_1131_);
v___x_1134_ = lean_box(0);
v_isShared_1135_ = v_isSharedCheck_1144_;
goto v_resetjp_1133_;
}
v_resetjp_1133_:
{
lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1139_; 
v___x_1136_ = lean_unsigned_to_nat(0u);
v___x_1137_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1137_, 0, v_a_1132_);
lean_ctor_set(v___x_1137_, 1, v_subst_1067_);
lean_ctor_set(v___x_1137_, 2, v___x_1136_);
if (v_isShared_1125_ == 0)
{
lean_ctor_set_tag(v___x_1124_, 1);
lean_ctor_set(v___x_1124_, 0, v___x_1137_);
v___x_1139_ = v___x_1124_;
goto v_reusejp_1138_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1137_);
v___x_1139_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1138_;
}
v_reusejp_1138_:
{
lean_object* v___x_1141_; 
if (v_isShared_1135_ == 0)
{
lean_ctor_set(v___x_1134_, 0, v___x_1139_);
v___x_1141_ = v___x_1134_;
goto v_reusejp_1140_;
}
else
{
lean_object* v_reuseFailAlloc_1142_; 
v_reuseFailAlloc_1142_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1142_, 0, v___x_1139_);
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
else
{
lean_object* v_a_1145_; lean_object* v___x_1147_; uint8_t v_isShared_1148_; uint8_t v_isSharedCheck_1152_; 
lean_del_object(v___x_1124_);
lean_dec(v_subst_1067_);
v_a_1145_ = lean_ctor_get(v___x_1131_, 0);
v_isSharedCheck_1152_ = !lean_is_exclusive(v___x_1131_);
if (v_isSharedCheck_1152_ == 0)
{
v___x_1147_ = v___x_1131_;
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
else
{
lean_inc(v_a_1145_);
lean_dec(v___x_1131_);
v___x_1147_ = lean_box(0);
v_isShared_1148_ = v_isSharedCheck_1152_;
goto v_resetjp_1146_;
}
v_resetjp_1146_:
{
lean_object* v___x_1150_; 
if (v_isShared_1148_ == 0)
{
v___x_1150_ = v___x_1147_;
goto v_reusejp_1149_;
}
else
{
lean_object* v_reuseFailAlloc_1151_; 
v_reuseFailAlloc_1151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1151_, 0, v_a_1145_);
v___x_1150_ = v_reuseFailAlloc_1151_;
goto v_reusejp_1149_;
}
v_reusejp_1149_:
{
return v___x_1150_;
}
}
}
}
}
else
{
lean_object* v_a_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1160_; 
lean_del_object(v___x_1124_);
lean_dec(v_a_1122_);
lean_dec(v_a_1092_);
lean_dec_ref(v___f_1087_);
lean_dec(v_a_1076_);
lean_dec(v_caseName_x3f_1069_);
lean_dec(v_subst_1067_);
lean_dec(v_mvarId_1066_);
lean_dec(v_eqFVarId_1065_);
v_a_1153_ = lean_ctor_get(v___x_1127_, 0);
v_isSharedCheck_1160_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1160_ == 0)
{
v___x_1155_ = v___x_1127_;
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_a_1153_);
lean_dec(v___x_1127_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1160_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1159_; 
v_reuseFailAlloc_1159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1159_, 0, v_a_1153_);
v___x_1158_ = v_reuseFailAlloc_1159_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
return v___x_1158_;
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
lean_object* v___x_1162_; 
lean_dec_ref(v___x_1077_);
lean_dec(v_caseName_x3f_1069_);
lean_dec_ref(v_acyclic_1068_);
lean_dec(v_eqFVarId_1065_);
v___x_1162_ = l___private_Lean_Meta_Tactic_UnifyEq_0__Lean_Meta_heqToEq_x27(v_mvarId_1066_, v_a_1076_, v___y_1070_, v___y_1071_, v___y_1072_, v___y_1073_);
lean_dec(v_a_1076_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1165_; uint8_t v_isShared_1166_; uint8_t v_isSharedCheck_1173_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1165_ = v___x_1162_;
v_isShared_1166_ = v_isSharedCheck_1173_;
goto v_resetjp_1164_;
}
else
{
lean_inc(v_a_1163_);
lean_dec(v___x_1162_);
v___x_1165_ = lean_box(0);
v_isShared_1166_ = v_isSharedCheck_1173_;
goto v_resetjp_1164_;
}
v_resetjp_1164_:
{
lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1167_ = lean_unsigned_to_nat(1u);
v___x_1168_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1168_, 0, v_a_1163_);
lean_ctor_set(v___x_1168_, 1, v_subst_1067_);
lean_ctor_set(v___x_1168_, 2, v___x_1167_);
v___x_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1169_, 0, v___x_1168_);
if (v_isShared_1166_ == 0)
{
lean_ctor_set(v___x_1165_, 0, v___x_1169_);
v___x_1171_ = v___x_1165_;
goto v_reusejp_1170_;
}
else
{
lean_object* v_reuseFailAlloc_1172_; 
v_reuseFailAlloc_1172_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1172_, 0, v___x_1169_);
v___x_1171_ = v_reuseFailAlloc_1172_;
goto v_reusejp_1170_;
}
v_reusejp_1170_:
{
return v___x_1171_;
}
}
}
else
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1181_; 
lean_dec(v_subst_1067_);
v_a_1174_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1181_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1181_ == 0)
{
v___x_1176_ = v___x_1162_;
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1162_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1181_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v___x_1179_; 
if (v_isShared_1177_ == 0)
{
v___x_1179_ = v___x_1176_;
goto v_reusejp_1178_;
}
else
{
lean_object* v_reuseFailAlloc_1180_; 
v_reuseFailAlloc_1180_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1180_, 0, v_a_1174_);
v___x_1179_ = v_reuseFailAlloc_1180_;
goto v_reusejp_1178_;
}
v_reusejp_1178_:
{
return v___x_1179_;
}
}
}
}
}
else
{
lean_object* v_a_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1189_; 
lean_dec(v_caseName_x3f_1069_);
lean_dec_ref(v_acyclic_1068_);
lean_dec(v_subst_1067_);
lean_dec(v_mvarId_1066_);
lean_dec(v_eqFVarId_1065_);
v_a_1182_ = lean_ctor_get(v___x_1075_, 0);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1075_);
if (v_isSharedCheck_1189_ == 0)
{
v___x_1184_ = v___x_1075_;
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_a_1182_);
lean_dec(v___x_1075_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1189_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___x_1187_; 
if (v_isShared_1185_ == 0)
{
v___x_1187_ = v___x_1184_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_a_1182_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
return v___x_1187_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___lam__1___boxed(lean_object* v_eqFVarId_1190_, lean_object* v_mvarId_1191_, lean_object* v_subst_1192_, lean_object* v_acyclic_1193_, lean_object* v_caseName_x3f_1194_, lean_object* v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = l_Lean_Meta_unifyEq_x3f___lam__1(v_eqFVarId_1190_, v_mvarId_1191_, v_subst_1192_, v_acyclic_1193_, v_caseName_x3f_1194_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_);
lean_dec(v___y_1198_);
lean_dec_ref(v___y_1197_);
lean_dec(v___y_1196_);
lean_dec_ref(v___y_1195_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f(lean_object* v_mvarId_1201_, lean_object* v_eqFVarId_1202_, lean_object* v_subst_1203_, lean_object* v_acyclic_1204_, lean_object* v_caseName_x3f_1205_, lean_object* v_a_1206_, lean_object* v_a_1207_, lean_object* v_a_1208_, lean_object* v_a_1209_){
_start:
{
lean_object* v___f_1211_; lean_object* v___x_1212_; 
lean_inc(v_mvarId_1201_);
v___f_1211_ = lean_alloc_closure((void*)(l_Lean_Meta_unifyEq_x3f___lam__1___boxed), 10, 5);
lean_closure_set(v___f_1211_, 0, v_eqFVarId_1202_);
lean_closure_set(v___f_1211_, 1, v_mvarId_1201_);
lean_closure_set(v___f_1211_, 2, v_subst_1203_);
lean_closure_set(v___f_1211_, 3, v_acyclic_1204_);
lean_closure_set(v___f_1211_, 4, v_caseName_x3f_1205_);
v___x_1212_ = l_Lean_MVarId_withContext___at___00Lean_Meta_unifyEq_x3f_spec__2___redArg(v_mvarId_1201_, v___f_1211_, v_a_1206_, v_a_1207_, v_a_1208_, v_a_1209_);
return v___x_1212_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_unifyEq_x3f___boxed(lean_object* v_mvarId_1213_, lean_object* v_eqFVarId_1214_, lean_object* v_subst_1215_, lean_object* v_acyclic_1216_, lean_object* v_caseName_x3f_1217_, lean_object* v_a_1218_, lean_object* v_a_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_){
_start:
{
lean_object* v_res_1223_; 
v_res_1223_ = l_Lean_Meta_unifyEq_x3f(v_mvarId_1213_, v_eqFVarId_1214_, v_subst_1215_, v_acyclic_1216_, v_caseName_x3f_1217_, v_a_1218_, v_a_1219_, v_a_1220_, v_a_1221_);
lean_dec(v_a_1221_);
lean_dec_ref(v_a_1220_);
lean_dec(v_a_1219_);
lean_dec_ref(v_a_1218_);
return v_res_1223_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(lean_object* v_mvarId_1224_, lean_object* v_val_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_, lean_object* v___y_1229_){
_start:
{
lean_object* v___x_1231_; 
v___x_1231_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___redArg(v_mvarId_1224_, v_val_1225_, v___y_1227_);
return v___x_1231_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0___boxed(lean_object* v_mvarId_1232_, lean_object* v_val_1233_, lean_object* v___y_1234_, lean_object* v___y_1235_, lean_object* v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_){
_start:
{
lean_object* v_res_1239_; 
v_res_1239_ = l_Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0(v_mvarId_1232_, v_val_1233_, v___y_1234_, v___y_1235_, v___y_1236_, v___y_1237_);
lean_dec(v___y_1237_);
lean_dec_ref(v___y_1236_);
lean_dec(v___y_1235_);
lean_dec_ref(v___y_1234_);
return v_res_1239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0(lean_object* v_00_u03b2_1240_, lean_object* v_x_1241_, lean_object* v_x_1242_, lean_object* v_x_1243_){
_start:
{
lean_object* v___x_1244_; 
v___x_1244_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0___redArg(v_x_1241_, v_x_1242_, v_x_1243_);
return v___x_1244_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(lean_object* v_00_u03b2_1245_, lean_object* v_x_1246_, size_t v_x_1247_, size_t v_x_1248_, lean_object* v_x_1249_, lean_object* v_x_1250_){
_start:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___redArg(v_x_1246_, v_x_1247_, v_x_1248_, v_x_1249_, v_x_1250_);
return v___x_1251_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3___boxed(lean_object* v_00_u03b2_1252_, lean_object* v_x_1253_, lean_object* v_x_1254_, lean_object* v_x_1255_, lean_object* v_x_1256_, lean_object* v_x_1257_){
_start:
{
size_t v_x_9976__boxed_1258_; size_t v_x_9977__boxed_1259_; lean_object* v_res_1260_; 
v_x_9976__boxed_1258_ = lean_unbox_usize(v_x_1254_);
lean_dec(v_x_1254_);
v_x_9977__boxed_1259_ = lean_unbox_usize(v_x_1255_);
lean_dec(v_x_1255_);
v_res_1260_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3(v_00_u03b2_1252_, v_x_1253_, v_x_9976__boxed_1258_, v_x_9977__boxed_1259_, v_x_1256_, v_x_1257_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4(lean_object* v_00_u03b2_1261_, lean_object* v_n_1262_, lean_object* v_k_1263_, lean_object* v_v_1264_){
_start:
{
lean_object* v___x_1265_; 
v___x_1265_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4___redArg(v_n_1262_, v_k_1263_, v_v_1264_);
return v___x_1265_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(lean_object* v_00_u03b2_1266_, size_t v_depth_1267_, lean_object* v_keys_1268_, lean_object* v_vals_1269_, lean_object* v_heq_1270_, lean_object* v_i_1271_, lean_object* v_entries_1272_){
_start:
{
lean_object* v___x_1273_; 
v___x_1273_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___redArg(v_depth_1267_, v_keys_1268_, v_vals_1269_, v_i_1271_, v_entries_1272_);
return v___x_1273_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1274_, lean_object* v_depth_1275_, lean_object* v_keys_1276_, lean_object* v_vals_1277_, lean_object* v_heq_1278_, lean_object* v_i_1279_, lean_object* v_entries_1280_){
_start:
{
size_t v_depth_boxed_1281_; lean_object* v_res_1282_; 
v_depth_boxed_1281_ = lean_unbox_usize(v_depth_1275_);
lean_dec(v_depth_1275_);
v_res_1282_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__5(v_00_u03b2_1274_, v_depth_boxed_1281_, v_keys_1276_, v_vals_1277_, v_heq_1278_, v_i_1279_, v_entries_1280_);
lean_dec_ref(v_vals_1277_);
lean_dec_ref(v_keys_1276_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1283_, lean_object* v_x_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_, lean_object* v_x_1287_){
_start:
{
lean_object* v___x_1288_; 
v___x_1288_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_unifyEq_x3f_spec__0_spec__0_spec__3_spec__4_spec__5___redArg(v_x_1284_, v_x_1285_, v_x_1286_, v_x_1287_);
return v___x_1288_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Injection(uint8_t builtin);
lean_object* initialize_Init_Data_Nat_Internal_Linear(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Injection(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Nat_Internal_Linear(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_UnifyEq(builtin);
}
#ifdef __cplusplus
}
#endif
