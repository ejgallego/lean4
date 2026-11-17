// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Inv
// Imports: public import Lean.Meta.Tactic.Grind.Types import Init.Grind.Util import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Decidable import Lean.Meta.Sym.Canon
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
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getExprs___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t lean_expr_equal(lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
lean_object* lean_panic_fn_borrowed(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ENode_isRoot(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getLitKind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getTarget_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getNext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_hasSameType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Meta_Grind_getCongrRoot___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_isRoot___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getParents___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ParentSet_isEmpty(lean_object*);
lean_object* l_Lean_Meta_Grind_ParentSet_elems(lean_object*);
lean_object* l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot_x3f(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isConstructorApp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isBVar(lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Meta_Grind_useFunCC___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_isMatchCond(lean_object*);
lean_object* l_Lean_Meta_getBoolDecision_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_shareCommon(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Canon_normNumLit_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Meta_Grind_isCond(lean_object*);
lean_object* l_Lean_Meta_Grind_condCondition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqcs(lean_object*, uint8_t);
lean_object* l_Lean_Meta_Grind_mkEqHEqProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_check(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_updateLastTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Meta_Grind_grind_debug_proofs;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Solvers_checkInvariants(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0;
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Lean.Meta.Tactic.Grind.Inv"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_private.Lean.Meta.Tactic.Grind.Inv.0.Lean.Meta.Grind.checkEqc"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 75, .m_capacity = 75, .m_length = 74, .m_data = "assertion violation: isSameExpr n root.self\n    -- Go to next element\n    "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__3;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 173, .m_capacity = 173, .m_length = 172, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.684779629._hygCtx._hyg.358.0 )\n    -- Starting at `curr`, following the `target\?` field leads to `root`.\n    "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__5;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 306, .m_capacity = 306, .m_length = 305, .m_data = "assertion violation: isSameExpr ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.684779629._hygCtx._hyg.53.0 ) root.self\n    -- Check congruence root. Literals are not in the congruence table: given `x = 1`, the term `-1`\n    -- is congruent to `-x`, but the satellite solvers are responsible for `-x = -1`.\n    "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__0_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__1;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 202, .m_capacity = 202, .m_length = 201, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.684779629._hygCtx._hyg.299.0 )\n    -- If the equivalence class does not have HEq proofs, then the types must be definitionally equal.\n    "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__2_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__3;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 114, .m_capacity = 114, .m_length = 113, .m_data = "assertion violation: isSameExpr e ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.684779629._hygCtx._hyg.253.0 )\n      "};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__4_value;
static lean_once_cell_t l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__5;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__6 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__6_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "assertion violation: root.size == size\n\n"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2(lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__1_value;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___redArg___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__0_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__2_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__3_value;
static const lean_ctor_object l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__4_value;
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MatchCond"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__2_value),LEAN_SCALAR_PTR_LITERAL(109, 233, 187, 249, 156, 65, 204, 232)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "_private.Lean.Meta.Tactic.Grind.Inv.0.Lean.Meta.Grind.checkParents"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.3145645808._hygCtx._hyg.626.0 )\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "e: "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", parent: "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__5_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0___boxed, .m_arity = 13, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 102, .m_capacity = 102, .m_length = 101, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.3145645808._hygCtx._hyg.189.0 )\n      "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "unreachable code has been reached"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 105, .m_capacity = 105, .m_length = 104, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.3145645808._hygCtx._hyg.677.0 ).isEmpty\n\n"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2(lean_object*, lean_object*, size_t, size_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 80, .m_capacity = 80, .m_length = 79, .m_data = "_private.Lean.Meta.Tactic.Grind.Inv.0.Lean.Meta.Grind.checkPtrEqImpliesStructEq"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__0 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__0_value;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 40, .m_data = "assertion violation: !Expr.equal e₁ e₂\n\n"};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__1 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__1_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__2;
static const lean_string_object l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 114, .m_capacity = 114, .m_length = 109, .m_data = "assertion violation: !isSameExpr e₁ e₂\n      -- and the two expressions must not be structurally equal\n      "};
static const lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__3 = (const lean_object*)&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__3_value;
static lean_once_cell_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__4;
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___boxed(lean_object**);
static lean_once_cell_t l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "debug"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__1_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "proofs"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__2_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3_value_aux_0),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(92, 174, 15, 22, 76, 124, 59, 78)}};
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3_value_aux_1),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(25, 245, 48, 218, 201, 55, 112, 25)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__4_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__5_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "checked: "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__7 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__7_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__8;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " = "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__9 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__9_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__10;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "_private.Lean.Meta.Tactic.Grind.Inv.0.Lean.Meta.Grind.checkCongrTable"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 99, .m_capacity = 99, .m_length = 98, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.3283713146._hygCtx._hyg.56.0 )\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "`grind` internal error, stale congruence table entry"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__4;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "assertion violation: isSameExpr e e'\n\n"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__5_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__6;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "_private.Lean.Meta.Tactic.Grind.Inv.0.Lean.Meta.Grind.checkCondParents"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__0_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "assertion violation: isCond parent\n      "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__1_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__2;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 116, .m_capacity = 116, .m_length = 115, .m_data = "assertion violation: isSameExpr ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.657126401._hygCtx._hyg.107.0 ) key.expr\n\n"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__3_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__4;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 118, .m_capacity = 118, .m_length = 117, .m_data = "assertion violation: isSameExpr ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.657126401._hygCtx._hyg.51.0 ) key.expr\n    "};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__0_value;
static lean_once_cell_t l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_checkInvariants_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_checkInvariants_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Lean.Meta.Grind.checkInvariants"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 108, .m_capacity = 108, .m_length = 107, .m_data = "assertion violation: ( __do_lift._@.Lean.Meta.Tactic.Grind.Inv.3119225764._hygCtx._hyg.90.0 ).isNone\n      "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkInvariants(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkInvariants___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_Lean_Meta_Grind_instInhabitedGoalM___redArg();
return v___x_1_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(lean_object* v_msg_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_, lean_object* v___y_11_, lean_object* v___y_12_){
_start:
{
lean_object* v___x_14_; lean_object* v___x_35727__overap_15_; lean_object* v___x_16_; 
v___x_14_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0);
v___x_35727__overap_15_ = lean_panic_fn_borrowed(v___x_14_, v_msg_2_);
lean_inc(v___y_12_);
lean_inc_ref(v___y_11_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc_ref(v___y_5_);
lean_inc(v___y_4_);
lean_inc(v___y_3_);
v___x_16_ = lean_apply_11(v___x_35727__overap_15_, v___y_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, v___y_11_, v___y_12_, lean_box(0));
return v___x_16_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___boxed(lean_object* v_msg_17_, lean_object* v___y_18_, lean_object* v___y_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_, lean_object* v___y_27_, lean_object* v___y_28_){
_start:
{
lean_object* v_res_29_; 
v_res_29_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(v_msg_17_, v___y_18_, v___y_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_, v___y_27_);
lean_dec(v___y_27_);
lean_dec_ref(v___y_26_);
lean_dec(v___y_25_);
lean_dec_ref(v___y_24_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
lean_dec(v___y_19_);
lean_dec(v___y_18_);
return v_res_29_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4(lean_object* v_msg_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_, lean_object* v___y_37_, lean_object* v___y_38_, lean_object* v___y_39_, lean_object* v___y_40_){
_start:
{
lean_object* v___x_42_; lean_object* v___x_36715__overap_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0);
v___x_36715__overap_43_ = lean_panic_fn_borrowed(v___x_42_, v_msg_30_);
lean_inc(v___y_40_);
lean_inc_ref(v___y_39_);
lean_inc(v___y_38_);
lean_inc_ref(v___y_37_);
lean_inc(v___y_36_);
lean_inc_ref(v___y_35_);
lean_inc(v___y_34_);
lean_inc_ref(v___y_33_);
lean_inc(v___y_32_);
lean_inc(v___y_31_);
v___x_44_ = lean_apply_11(v___x_36715__overap_43_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_, v___y_36_, v___y_37_, v___y_38_, v___y_39_, v___y_40_, lean_box(0));
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4___boxed(lean_object* v_msg_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_, lean_object* v___y_55_, lean_object* v___y_56_){
_start:
{
lean_object* v_res_57_; 
v_res_57_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4(v_msg_45_, v___y_46_, v___y_47_, v___y_48_, v___y_49_, v___y_50_, v___y_51_, v___y_52_, v___y_53_, v___y_54_, v___y_55_);
lean_dec(v___y_55_);
lean_dec_ref(v___y_54_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
lean_dec(v___y_49_);
lean_dec_ref(v___y_48_);
lean_dec(v___y_47_);
lean_dec(v___y_46_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___redArg(lean_object* v_a_58_, lean_object* v___y_59_){
_start:
{
lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_61_ = lean_st_ref_get(v___y_59_);
v___x_62_ = l_Lean_Meta_Grind_Goal_getTarget_x3f(v___x_61_, v_a_58_);
lean_dec(v___x_61_);
if (lean_obj_tag(v___x_62_) == 1)
{
lean_object* v_val_63_; 
lean_dec_ref(v_a_58_);
v_val_63_ = lean_ctor_get(v___x_62_, 0);
lean_inc(v_val_63_);
lean_dec_ref_known(v___x_62_, 1);
v_a_58_ = v_val_63_;
goto _start;
}
else
{
lean_object* v___x_65_; 
lean_dec(v___x_62_);
v___x_65_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_65_, 0, v_a_58_);
return v___x_65_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___redArg___boxed(lean_object* v_a_66_, lean_object* v___y_67_, lean_object* v___y_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___redArg(v_a_66_, v___y_67_);
lean_dec(v___y_67_);
return v_res_69_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; 
v___x_73_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__2));
v___x_74_ = lean_unsigned_to_nat(4u);
v___x_75_ = lean_unsigned_to_nat(44u);
v___x_76_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1));
v___x_77_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_78_ = l_mkPanicMessageWithDecl(v___x_77_, v___x_76_, v___x_75_, v___x_74_, v___x_73_);
return v___x_78_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; 
v___x_80_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__4));
v___x_81_ = lean_unsigned_to_nat(6u);
v___x_82_ = lean_unsigned_to_nat(36u);
v___x_83_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1));
v___x_84_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_85_ = l_mkPanicMessageWithDecl(v___x_84_, v___x_83_, v___x_82_, v___x_81_, v___x_80_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0(lean_object* v_root_86_, lean_object* v_snd_87_, lean_object* v_curr_88_, lean_object* v___x_89_, lean_object* v_____r_90_, lean_object* v___y_91_, lean_object* v___y_92_, lean_object* v___y_93_, lean_object* v___y_94_, lean_object* v___y_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v___y_103_; lean_object* v___y_104_; lean_object* v___y_105_; lean_object* v___y_106_; lean_object* v___y_107_; lean_object* v___y_108_; lean_object* v___y_109_; lean_object* v___y_110_; lean_object* v___y_111_; lean_object* v___y_112_; uint8_t v_heqProofs_156_; 
v_heqProofs_156_ = lean_ctor_get_uint8(v_root_86_, sizeof(void*)*12 + 4);
if (v_heqProofs_156_ == 0)
{
lean_object* v___x_157_; 
lean_inc_ref(v_curr_88_);
lean_inc(v_snd_87_);
v___x_157_ = l_Lean_Meta_Grind_hasSameType(v_snd_87_, v_curr_88_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
if (lean_obj_tag(v___x_157_) == 0)
{
lean_object* v_a_158_; uint8_t v___x_159_; 
v_a_158_ = lean_ctor_get(v___x_157_, 0);
lean_inc(v_a_158_);
lean_dec_ref_known(v___x_157_, 1);
v___x_159_ = lean_unbox(v_a_158_);
lean_dec(v_a_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec(v___x_89_);
lean_dec_ref(v_curr_88_);
lean_dec(v_snd_87_);
v___x_160_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__5);
v___x_161_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(v___x_160_, v___y_91_, v___y_92_, v___y_93_, v___y_94_, v___y_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
return v___x_161_;
}
else
{
v___y_103_ = v___y_91_;
v___y_104_ = v___y_92_;
v___y_105_ = v___y_93_;
v___y_106_ = v___y_94_;
v___y_107_ = v___y_95_;
v___y_108_ = v___y_96_;
v___y_109_ = v___y_97_;
v___y_110_ = v___y_98_;
v___y_111_ = v___y_99_;
v___y_112_ = v___y_100_;
goto v___jp_102_;
}
}
else
{
lean_object* v_a_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_169_; 
lean_dec(v___x_89_);
lean_dec_ref(v_curr_88_);
lean_dec(v_snd_87_);
v_a_162_ = lean_ctor_get(v___x_157_, 0);
v_isSharedCheck_169_ = !lean_is_exclusive(v___x_157_);
if (v_isSharedCheck_169_ == 0)
{
v___x_164_ = v___x_157_;
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_a_162_);
lean_dec(v___x_157_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_169_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v___x_167_; 
if (v_isShared_165_ == 0)
{
v___x_167_ = v___x_164_;
goto v_reusejp_166_;
}
else
{
lean_object* v_reuseFailAlloc_168_; 
v_reuseFailAlloc_168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_168_, 0, v_a_162_);
v___x_167_ = v_reuseFailAlloc_168_;
goto v_reusejp_166_;
}
v_reusejp_166_:
{
return v___x_167_;
}
}
}
}
else
{
v___y_103_ = v___y_91_;
v___y_104_ = v___y_92_;
v___y_105_ = v___y_93_;
v___y_106_ = v___y_94_;
v___y_107_ = v___y_95_;
v___y_108_ = v___y_96_;
v___y_109_ = v___y_97_;
v___y_110_ = v___y_98_;
v___y_111_ = v___y_99_;
v___y_112_ = v___y_100_;
goto v___jp_102_;
}
v___jp_102_:
{
lean_object* v___x_113_; 
lean_inc(v_snd_87_);
v___x_113_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___redArg(v_snd_87_, v___y_103_);
if (lean_obj_tag(v___x_113_) == 0)
{
lean_object* v_a_114_; size_t v___x_115_; size_t v___x_116_; uint8_t v___x_117_; 
v_a_114_ = lean_ctor_get(v___x_113_, 0);
lean_inc(v_a_114_);
lean_dec_ref_known(v___x_113_, 1);
v___x_115_ = lean_ptr_addr(v_a_114_);
lean_dec(v_a_114_);
v___x_116_ = lean_ptr_addr(v_curr_88_);
v___x_117_ = lean_usize_dec_eq(v___x_115_, v___x_116_);
if (v___x_117_ == 0)
{
lean_object* v___x_118_; lean_object* v___x_119_; 
lean_dec(v___x_89_);
lean_dec_ref(v_curr_88_);
lean_dec(v_snd_87_);
v___x_118_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__3);
v___x_119_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(v___x_118_, v___y_103_, v___y_104_, v___y_105_, v___y_106_, v___y_107_, v___y_108_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
return v___x_119_;
}
else
{
lean_object* v___x_120_; lean_object* v___x_121_; 
v___x_120_ = lean_st_ref_get(v___y_103_);
v___x_121_ = l_Lean_Meta_Grind_Goal_getNext(v___x_120_, v_snd_87_, v___y_109_, v___y_110_, v___y_111_, v___y_112_);
lean_dec(v___x_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_139_; 
v_a_122_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_139_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_139_ == 0)
{
v___x_124_ = v___x_121_;
v_isShared_125_ = v_isSharedCheck_139_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_121_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_139_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
size_t v___x_126_; size_t v___x_127_; uint8_t v___x_128_; 
v___x_126_ = lean_ptr_addr(v_curr_88_);
lean_dec_ref(v_curr_88_);
v___x_127_ = lean_ptr_addr(v_a_122_);
v___x_128_ = lean_usize_dec_eq(v___x_126_, v___x_127_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_132_; 
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v___x_89_);
lean_ctor_set(v___x_129_, 1, v_a_122_);
v___x_130_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_130_, 0, v___x_129_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_130_);
v___x_132_ = v___x_124_;
goto v_reusejp_131_;
}
else
{
lean_object* v_reuseFailAlloc_133_; 
v_reuseFailAlloc_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_133_, 0, v___x_130_);
v___x_132_ = v_reuseFailAlloc_133_;
goto v_reusejp_131_;
}
v_reusejp_131_:
{
return v___x_132_;
}
}
else
{
lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_137_; 
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_89_);
lean_ctor_set(v___x_134_, 1, v_a_122_);
v___x_135_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_135_, 0, v___x_134_);
if (v_isShared_125_ == 0)
{
lean_ctor_set(v___x_124_, 0, v___x_135_);
v___x_137_ = v___x_124_;
goto v_reusejp_136_;
}
else
{
lean_object* v_reuseFailAlloc_138_; 
v_reuseFailAlloc_138_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_138_, 0, v___x_135_);
v___x_137_ = v_reuseFailAlloc_138_;
goto v_reusejp_136_;
}
v_reusejp_136_:
{
return v___x_137_;
}
}
}
}
else
{
lean_object* v_a_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_147_; 
lean_dec(v___x_89_);
lean_dec_ref(v_curr_88_);
v_a_140_ = lean_ctor_get(v___x_121_, 0);
v_isSharedCheck_147_ = !lean_is_exclusive(v___x_121_);
if (v_isSharedCheck_147_ == 0)
{
v___x_142_ = v___x_121_;
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_a_140_);
lean_dec(v___x_121_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_147_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_145_; 
if (v_isShared_143_ == 0)
{
v___x_145_ = v___x_142_;
goto v_reusejp_144_;
}
else
{
lean_object* v_reuseFailAlloc_146_; 
v_reuseFailAlloc_146_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_146_, 0, v_a_140_);
v___x_145_ = v_reuseFailAlloc_146_;
goto v_reusejp_144_;
}
v_reusejp_144_:
{
return v___x_145_;
}
}
}
}
}
else
{
lean_object* v_a_148_; lean_object* v___x_150_; uint8_t v_isShared_151_; uint8_t v_isSharedCheck_155_; 
lean_dec(v___x_89_);
lean_dec_ref(v_curr_88_);
lean_dec(v_snd_87_);
v_a_148_ = lean_ctor_get(v___x_113_, 0);
v_isSharedCheck_155_ = !lean_is_exclusive(v___x_113_);
if (v_isSharedCheck_155_ == 0)
{
v___x_150_ = v___x_113_;
v_isShared_151_ = v_isSharedCheck_155_;
goto v_resetjp_149_;
}
else
{
lean_inc(v_a_148_);
lean_dec(v___x_113_);
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
v_reuseFailAlloc_154_ = lean_alloc_ctor(1, 1, 0);
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
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___boxed(lean_object* v_root_170_, lean_object* v_snd_171_, lean_object* v_curr_172_, lean_object* v___x_173_, lean_object* v_____r_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_, lean_object* v___y_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0(v_root_170_, v_snd_171_, v_curr_172_, v___x_173_, v_____r_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_, v___y_179_, v___y_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
lean_dec(v___y_180_);
lean_dec_ref(v___y_179_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec(v___y_175_);
lean_dec_ref(v_root_170_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___redArg(lean_object* v___x_187_, lean_object* v_keys_188_, lean_object* v_vals_189_, lean_object* v_i_190_, lean_object* v_k_191_){
_start:
{
lean_object* v___x_192_; uint8_t v___x_193_; 
v___x_192_ = lean_array_get_size(v_keys_188_);
v___x_193_ = lean_nat_dec_lt(v_i_190_, v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; 
lean_dec_ref(v_k_191_);
lean_dec(v_i_190_);
v___x_194_ = lean_box(0);
return v___x_194_;
}
else
{
lean_object* v_k_x27_195_; uint8_t v___x_196_; 
v_k_x27_195_ = lean_array_fget_borrowed(v_keys_188_, v_i_190_);
lean_inc(v_k_x27_195_);
lean_inc_ref(v_k_191_);
v___x_196_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_187_, v_k_191_, v_k_x27_195_);
if (v___x_196_ == 0)
{
lean_object* v___x_197_; lean_object* v___x_198_; 
v___x_197_ = lean_unsigned_to_nat(1u);
v___x_198_ = lean_nat_add(v_i_190_, v___x_197_);
lean_dec(v_i_190_);
v_i_190_ = v___x_198_;
goto _start;
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec_ref(v_k_191_);
v___x_200_ = lean_array_fget_borrowed(v_vals_189_, v_i_190_);
lean_dec(v_i_190_);
lean_inc(v___x_200_);
lean_inc(v_k_x27_195_);
v___x_201_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_201_, 0, v_k_x27_195_);
lean_ctor_set(v___x_201_, 1, v___x_200_);
v___x_202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_202_, 0, v___x_201_);
return v___x_202_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___redArg___boxed(lean_object* v___x_203_, lean_object* v_keys_204_, lean_object* v_vals_205_, lean_object* v_i_206_, lean_object* v_k_207_){
_start:
{
lean_object* v_res_208_; 
v_res_208_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___redArg(v___x_203_, v_keys_204_, v_vals_205_, v_i_206_, v_k_207_);
lean_dec_ref(v_vals_205_);
lean_dec_ref(v_keys_204_);
lean_dec_ref(v___x_203_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___redArg(lean_object* v___x_209_, lean_object* v_x_210_, size_t v_x_211_, lean_object* v_x_212_){
_start:
{
if (lean_obj_tag(v_x_210_) == 0)
{
lean_object* v_es_213_; lean_object* v___x_214_; size_t v___x_215_; size_t v___x_216_; lean_object* v_j_217_; lean_object* v___x_218_; 
v_es_213_ = lean_ctor_get(v_x_210_, 0);
lean_inc_ref(v_es_213_);
lean_dec_ref_known(v_x_210_, 1);
v___x_214_ = lean_box(2);
v___x_215_ = ((size_t)31ULL);
v___x_216_ = lean_usize_land(v_x_211_, v___x_215_);
v_j_217_ = lean_usize_to_nat(v___x_216_);
v___x_218_ = lean_array_get(v___x_214_, v_es_213_, v_j_217_);
lean_dec(v_j_217_);
lean_dec_ref(v_es_213_);
switch(lean_obj_tag(v___x_218_))
{
case 0:
{
lean_object* v_key_219_; lean_object* v_val_220_; uint8_t v___x_221_; 
v_key_219_ = lean_ctor_get(v___x_218_, 0);
lean_inc_n(v_key_219_, 2);
v_val_220_ = lean_ctor_get(v___x_218_, 1);
lean_inc(v_val_220_);
lean_dec_ref_known(v___x_218_, 2);
v___x_221_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_isCongruent(v___x_209_, v_x_212_, v_key_219_);
if (v___x_221_ == 0)
{
lean_object* v___x_222_; 
lean_dec(v_val_220_);
lean_dec(v_key_219_);
v___x_222_ = lean_box(0);
return v___x_222_;
}
else
{
lean_object* v___x_223_; lean_object* v___x_224_; 
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v_key_219_);
lean_ctor_set(v___x_223_, 1, v_val_220_);
v___x_224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_224_, 0, v___x_223_);
return v___x_224_;
}
}
case 1:
{
lean_object* v_node_225_; size_t v___x_226_; size_t v___x_227_; 
v_node_225_ = lean_ctor_get(v___x_218_, 0);
lean_inc(v_node_225_);
lean_dec_ref_known(v___x_218_, 1);
v___x_226_ = ((size_t)5ULL);
v___x_227_ = lean_usize_shift_right(v_x_211_, v___x_226_);
v_x_210_ = v_node_225_;
v_x_211_ = v___x_227_;
goto _start;
}
default: 
{
lean_object* v___x_229_; 
lean_dec_ref(v_x_212_);
v___x_229_ = lean_box(0);
return v___x_229_;
}
}
}
else
{
lean_object* v_ks_230_; lean_object* v_vs_231_; lean_object* v___x_232_; lean_object* v___x_233_; 
v_ks_230_ = lean_ctor_get(v_x_210_, 0);
lean_inc_ref(v_ks_230_);
v_vs_231_ = lean_ctor_get(v_x_210_, 1);
lean_inc_ref(v_vs_231_);
lean_dec_ref_known(v_x_210_, 2);
v___x_232_ = lean_unsigned_to_nat(0u);
v___x_233_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___redArg(v___x_209_, v_ks_230_, v_vs_231_, v___x_232_, v_x_212_);
lean_dec_ref(v_vs_231_);
lean_dec_ref(v_ks_230_);
return v___x_233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___redArg___boxed(lean_object* v___x_234_, lean_object* v_x_235_, lean_object* v_x_236_, lean_object* v_x_237_){
_start:
{
size_t v_x_37572__boxed_238_; lean_object* v_res_239_; 
v_x_37572__boxed_238_ = lean_unbox_usize(v_x_236_);
lean_dec(v_x_236_);
v_res_239_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___redArg(v___x_234_, v_x_235_, v_x_37572__boxed_238_, v_x_237_);
lean_dec_ref(v___x_234_);
return v_res_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg(lean_object* v___x_240_, lean_object* v_x_241_, lean_object* v_x_242_){
_start:
{
uint64_t v___x_243_; size_t v___x_244_; lean_object* v___x_245_; 
v___x_243_ = l___private_Lean_Meta_Tactic_Grind_Types_0__Lean_Meta_Grind_congrHash(v___x_240_, v_x_242_);
v___x_244_ = lean_uint64_to_usize(v___x_243_);
lean_inc_ref(v_x_241_);
v___x_245_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___redArg(v___x_240_, v_x_241_, v___x_244_, v_x_242_);
return v___x_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg___boxed(lean_object* v___x_246_, lean_object* v_x_247_, lean_object* v_x_248_){
_start:
{
lean_object* v_res_249_; 
v_res_249_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg(v___x_246_, v_x_247_, v_x_248_);
lean_dec_ref(v_x_247_);
lean_dec_ref(v___x_246_);
return v_res_249_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_251_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__0));
v___x_252_ = lean_unsigned_to_nat(4u);
v___x_253_ = lean_unsigned_to_nat(24u);
v___x_254_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1));
v___x_255_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_256_ = l_mkPanicMessageWithDecl(v___x_255_, v___x_254_, v___x_253_, v___x_252_, v___x_251_);
return v___x_256_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_258_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__2));
v___x_259_ = lean_unsigned_to_nat(8u);
v___x_260_ = lean_unsigned_to_nat(33u);
v___x_261_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1));
v___x_262_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_263_ = l_mkPanicMessageWithDecl(v___x_262_, v___x_261_, v___x_260_, v___x_259_, v___x_258_);
return v___x_263_;
}
}
static lean_object* _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_265_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__4));
v___x_266_ = lean_unsigned_to_nat(10u);
v___x_267_ = lean_unsigned_to_nat(31u);
v___x_268_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1));
v___x_269_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_270_ = l_mkPanicMessageWithDecl(v___x_269_, v___x_268_, v___x_267_, v___x_266_, v___x_265_);
return v___x_270_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg(lean_object* v_curr_272_, lean_object* v_root_273_, lean_object* v_a_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_, lean_object* v___y_278_, lean_object* v___y_279_, lean_object* v___y_280_, lean_object* v___y_281_, lean_object* v___y_282_, lean_object* v___y_283_, lean_object* v___y_284_){
_start:
{
lean_object* v___y_287_; lean_object* v_fst_307_; lean_object* v_snd_308_; lean_object* v_size_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_fst_307_ = lean_ctor_get(v_a_274_, 0);
lean_inc(v_fst_307_);
v_snd_308_ = lean_ctor_get(v_a_274_, 1);
lean_inc_n(v_snd_308_, 2);
lean_dec_ref(v_a_274_);
v_size_309_ = lean_unsigned_to_nat(0u);
v___x_310_ = lean_unsigned_to_nat(1u);
v___x_311_ = lean_nat_add(v_fst_307_, v___x_310_);
lean_dec(v_fst_307_);
v___x_312_ = lean_st_ref_get(v___y_275_);
v___x_313_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_312_, v_snd_308_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
lean_dec(v___x_312_);
if (lean_obj_tag(v___x_313_) == 0)
{
lean_object* v_a_314_; size_t v___x_315_; size_t v___x_316_; uint8_t v___x_317_; 
v_a_314_ = lean_ctor_get(v___x_313_, 0);
lean_inc(v_a_314_);
lean_dec_ref_known(v___x_313_, 1);
v___x_315_ = lean_ptr_addr(v_a_314_);
lean_dec(v_a_314_);
v___x_316_ = lean_ptr_addr(v_curr_272_);
v___x_317_ = lean_usize_dec_eq(v___x_315_, v___x_316_);
if (v___x_317_ == 0)
{
lean_object* v___x_318_; lean_object* v___x_319_; 
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
v___x_318_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__1, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__1_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__1);
v___x_319_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(v___x_318_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
v___y_287_ = v___x_319_;
goto v___jp_286_;
}
else
{
lean_object* v___x_320_; 
lean_inc(v_snd_308_);
v___x_320_ = l_Lean_Meta_Grind_getLitKind(v_snd_308_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
if (lean_obj_tag(v___x_320_) == 0)
{
lean_object* v_a_321_; 
v_a_321_ = lean_ctor_get(v___x_320_, 0);
lean_inc(v_a_321_);
lean_dec_ref_known(v___x_320_, 1);
if (lean_obj_tag(v_snd_308_) == 11)
{
lean_object* v_typeName_383_; 
v_typeName_383_ = lean_ctor_get(v_snd_308_, 0);
if (lean_obj_tag(v_typeName_383_) == 1)
{
lean_object* v_pre_384_; 
v_pre_384_ = lean_ctor_get(v_typeName_383_, 0);
if (lean_obj_tag(v_pre_384_) == 0)
{
lean_object* v_idx_385_; lean_object* v_str_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v_idx_385_ = lean_ctor_get(v_snd_308_, 1);
v_str_386_ = lean_ctor_get(v_typeName_383_, 1);
v___x_387_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__6));
v___x_388_ = lean_string_dec_eq(v_str_386_, v___x_387_);
if (v___x_388_ == 0)
{
goto v___jp_380_;
}
else
{
uint8_t v___x_389_; 
v___x_389_ = lean_nat_dec_eq(v_idx_385_, v_size_309_);
if (v___x_389_ == 0)
{
goto v___jp_380_;
}
else
{
lean_dec(v_a_321_);
goto v___jp_325_;
}
}
}
else
{
goto v___jp_380_;
}
}
else
{
goto v___jp_380_;
}
}
else
{
goto v___jp_380_;
}
v___jp_322_:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_box(0);
lean_inc_ref(v_curr_272_);
v___x_324_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0(v_root_273_, v_snd_308_, v_curr_272_, v___x_311_, v___x_323_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
v___y_287_ = v___x_324_;
goto v___jp_286_;
}
v___jp_325_:
{
lean_object* v___x_326_; lean_object* v_toGoalState_327_; lean_object* v_enodeMap_328_; lean_object* v_congrTable_329_; lean_object* v___x_330_; 
v___x_326_ = lean_st_ref_get(v___y_275_);
v_toGoalState_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc_ref(v_toGoalState_327_);
lean_dec(v___x_326_);
v_enodeMap_328_ = lean_ctor_get(v_toGoalState_327_, 1);
lean_inc_ref(v_enodeMap_328_);
v_congrTable_329_ = lean_ctor_get(v_toGoalState_327_, 5);
lean_inc_ref(v_congrTable_329_);
lean_dec_ref(v_toGoalState_327_);
lean_inc(v_snd_308_);
v___x_330_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg(v_enodeMap_328_, v_congrTable_329_, v_snd_308_);
lean_dec_ref(v_congrTable_329_);
lean_dec_ref(v_enodeMap_328_);
if (lean_obj_tag(v___x_330_) == 0)
{
lean_object* v___x_331_; 
lean_inc(v_snd_308_);
v___x_331_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_snd_308_, v___y_275_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; uint8_t v___x_333_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
lean_inc(v_a_332_);
lean_dec_ref_known(v___x_331_, 1);
v___x_333_ = lean_unbox(v_a_332_);
lean_dec(v_a_332_);
if (v___x_333_ == 0)
{
lean_object* v___x_334_; lean_object* v___x_335_; 
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
v___x_334_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__3, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__3_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__3);
v___x_335_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(v___x_334_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
v___y_287_ = v___x_335_;
goto v___jp_286_;
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; 
v___x_336_ = lean_box(0);
lean_inc_ref(v_curr_272_);
v___x_337_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0(v_root_273_, v_snd_308_, v_curr_272_, v___x_311_, v___x_336_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
v___y_287_ = v___x_337_;
goto v___jp_286_;
}
}
else
{
lean_object* v_a_338_; lean_object* v___x_340_; uint8_t v_isShared_341_; uint8_t v_isSharedCheck_345_; 
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
lean_dec_ref(v_curr_272_);
v_a_338_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_345_ == 0)
{
v___x_340_ = v___x_331_;
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
else
{
lean_inc(v_a_338_);
lean_dec(v___x_331_);
v___x_340_ = lean_box(0);
v_isShared_341_ = v_isSharedCheck_345_;
goto v_resetjp_339_;
}
v_resetjp_339_:
{
lean_object* v___x_343_; 
if (v_isShared_341_ == 0)
{
v___x_343_ = v___x_340_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v_a_338_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
}
else
{
lean_object* v_val_346_; lean_object* v_fst_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; 
v_val_346_ = lean_ctor_get(v___x_330_, 0);
lean_inc(v_val_346_);
lean_dec_ref_known(v___x_330_, 1);
v_fst_347_ = lean_ctor_get(v_val_346_, 0);
lean_inc(v_fst_347_);
lean_dec(v_val_346_);
v___x_348_ = l_Lean_Expr_getAppFn(v_fst_347_);
v___x_349_ = l_Lean_Expr_getAppFn(v_snd_308_);
v___x_350_ = l_Lean_Meta_Grind_hasSameType(v___x_348_, v___x_349_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
if (lean_obj_tag(v___x_350_) == 0)
{
lean_object* v_a_351_; uint8_t v___x_352_; 
v_a_351_ = lean_ctor_get(v___x_350_, 0);
lean_inc(v_a_351_);
lean_dec_ref_known(v___x_350_, 1);
v___x_352_ = lean_unbox(v_a_351_);
lean_dec(v_a_351_);
if (v___x_352_ == 0)
{
lean_object* v___x_353_; lean_object* v___x_354_; 
lean_dec(v_fst_347_);
v___x_353_ = lean_box(0);
lean_inc_ref(v_curr_272_);
v___x_354_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0(v_root_273_, v_snd_308_, v_curr_272_, v___x_311_, v___x_353_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
v___y_287_ = v___x_354_;
goto v___jp_286_;
}
else
{
lean_object* v___x_355_; 
lean_inc(v_snd_308_);
v___x_355_ = l_Lean_Meta_Grind_getCongrRoot___redArg(v_snd_308_, v___y_275_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
if (lean_obj_tag(v___x_355_) == 0)
{
lean_object* v_a_356_; size_t v___x_357_; size_t v___x_358_; uint8_t v___x_359_; 
v_a_356_ = lean_ctor_get(v___x_355_, 0);
lean_inc(v_a_356_);
lean_dec_ref_known(v___x_355_, 1);
v___x_357_ = lean_ptr_addr(v_fst_347_);
lean_dec(v_fst_347_);
v___x_358_ = lean_ptr_addr(v_a_356_);
lean_dec(v_a_356_);
v___x_359_ = lean_usize_dec_eq(v___x_357_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; lean_object* v___x_361_; 
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
v___x_360_ = lean_obj_once(&l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__5, &l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__5_once, _init_l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__5);
v___x_361_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1(v___x_360_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
v___y_287_ = v___x_361_;
goto v___jp_286_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_box(0);
lean_inc_ref(v_curr_272_);
v___x_363_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0(v_root_273_, v_snd_308_, v_curr_272_, v___x_311_, v___x_362_, v___y_275_, v___y_276_, v___y_277_, v___y_278_, v___y_279_, v___y_280_, v___y_281_, v___y_282_, v___y_283_, v___y_284_);
v___y_287_ = v___x_363_;
goto v___jp_286_;
}
}
else
{
lean_object* v_a_364_; lean_object* v___x_366_; uint8_t v_isShared_367_; uint8_t v_isSharedCheck_371_; 
lean_dec(v_fst_347_);
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
lean_dec_ref(v_curr_272_);
v_a_364_ = lean_ctor_get(v___x_355_, 0);
v_isSharedCheck_371_ = !lean_is_exclusive(v___x_355_);
if (v_isSharedCheck_371_ == 0)
{
v___x_366_ = v___x_355_;
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
else
{
lean_inc(v_a_364_);
lean_dec(v___x_355_);
v___x_366_ = lean_box(0);
v_isShared_367_ = v_isSharedCheck_371_;
goto v_resetjp_365_;
}
v_resetjp_365_:
{
lean_object* v___x_369_; 
if (v_isShared_367_ == 0)
{
v___x_369_ = v___x_366_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v_a_364_);
v___x_369_ = v_reuseFailAlloc_370_;
goto v_reusejp_368_;
}
v_reusejp_368_:
{
return v___x_369_;
}
}
}
}
}
else
{
lean_object* v_a_372_; lean_object* v___x_374_; uint8_t v_isShared_375_; uint8_t v_isSharedCheck_379_; 
lean_dec(v_fst_347_);
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
lean_dec_ref(v_curr_272_);
v_a_372_ = lean_ctor_get(v___x_350_, 0);
v_isSharedCheck_379_ = !lean_is_exclusive(v___x_350_);
if (v_isSharedCheck_379_ == 0)
{
v___x_374_ = v___x_350_;
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
else
{
lean_inc(v_a_372_);
lean_dec(v___x_350_);
v___x_374_ = lean_box(0);
v_isShared_375_ = v_isSharedCheck_379_;
goto v_resetjp_373_;
}
v_resetjp_373_:
{
lean_object* v___x_377_; 
if (v_isShared_375_ == 0)
{
v___x_377_ = v___x_374_;
goto v_reusejp_376_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_a_372_);
v___x_377_ = v_reuseFailAlloc_378_;
goto v_reusejp_376_;
}
v_reusejp_376_:
{
return v___x_377_;
}
}
}
}
}
v___jp_380_:
{
uint8_t v___x_381_; 
v___x_381_ = l_Lean_Expr_isApp(v_snd_308_);
if (v___x_381_ == 0)
{
lean_dec(v_a_321_);
goto v___jp_322_;
}
else
{
uint8_t v___x_382_; 
v___x_382_ = lean_unbox(v_a_321_);
lean_dec(v_a_321_);
if (v___x_382_ == 0)
{
goto v___jp_325_;
}
else
{
goto v___jp_322_;
}
}
}
}
else
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
lean_dec_ref(v_curr_272_);
v_a_390_ = lean_ctor_get(v___x_320_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_320_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_320_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_320_);
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
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_405_; 
lean_dec(v___x_311_);
lean_dec(v_snd_308_);
lean_dec_ref(v_curr_272_);
v_a_398_ = lean_ctor_get(v___x_313_, 0);
v_isSharedCheck_405_ = !lean_is_exclusive(v___x_313_);
if (v_isSharedCheck_405_ == 0)
{
v___x_400_ = v___x_313_;
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_313_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_405_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_403_; 
if (v_isShared_401_ == 0)
{
v___x_403_ = v___x_400_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_404_; 
v_reuseFailAlloc_404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_404_, 0, v_a_398_);
v___x_403_ = v_reuseFailAlloc_404_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
return v___x_403_;
}
}
}
v___jp_286_:
{
if (lean_obj_tag(v___y_287_) == 0)
{
lean_object* v_a_288_; lean_object* v___x_290_; uint8_t v_isShared_291_; uint8_t v_isSharedCheck_298_; 
v_a_288_ = lean_ctor_get(v___y_287_, 0);
v_isSharedCheck_298_ = !lean_is_exclusive(v___y_287_);
if (v_isSharedCheck_298_ == 0)
{
v___x_290_ = v___y_287_;
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
else
{
lean_inc(v_a_288_);
lean_dec(v___y_287_);
v___x_290_ = lean_box(0);
v_isShared_291_ = v_isSharedCheck_298_;
goto v_resetjp_289_;
}
v_resetjp_289_:
{
if (lean_obj_tag(v_a_288_) == 0)
{
lean_object* v_a_292_; lean_object* v___x_294_; 
lean_dec_ref(v_curr_272_);
v_a_292_ = lean_ctor_get(v_a_288_, 0);
lean_inc(v_a_292_);
lean_dec_ref_known(v_a_288_, 1);
if (v_isShared_291_ == 0)
{
lean_ctor_set(v___x_290_, 0, v_a_292_);
v___x_294_ = v___x_290_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_292_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
else
{
lean_object* v_a_296_; 
lean_del_object(v___x_290_);
v_a_296_ = lean_ctor_get(v_a_288_, 0);
lean_inc(v_a_296_);
lean_dec_ref_known(v_a_288_, 1);
v_a_274_ = v_a_296_;
goto _start;
}
}
}
else
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_306_; 
lean_dec_ref(v_curr_272_);
v_a_299_ = lean_ctor_get(v___y_287_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___y_287_);
if (v_isSharedCheck_306_ == 0)
{
v___x_301_ = v___y_287_;
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___y_287_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___boxed(lean_object* v_curr_406_, lean_object* v_root_407_, lean_object* v_a_408_, lean_object* v___y_409_, lean_object* v___y_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_, lean_object* v___y_416_, lean_object* v___y_417_, lean_object* v___y_418_, lean_object* v___y_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg(v_curr_406_, v_root_407_, v_a_408_, v___y_409_, v___y_410_, v___y_411_, v___y_412_, v___y_413_, v___y_414_, v___y_415_, v___y_416_, v___y_417_, v___y_418_);
lean_dec(v___y_418_);
lean_dec_ref(v___y_417_);
lean_dec(v___y_416_);
lean_dec_ref(v___y_415_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
lean_dec(v___y_410_);
lean_dec(v___y_409_);
lean_dec_ref(v_root_407_);
return v_res_420_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__1(void){
_start:
{
lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_422_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__0));
v___x_423_ = lean_unsigned_to_nat(2u);
v___x_424_ = lean_unsigned_to_nat(50u);
v___x_425_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__1));
v___x_426_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_427_ = l_mkPanicMessageWithDecl(v___x_426_, v___x_425_, v___x_424_, v___x_423_, v___x_422_);
return v___x_427_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc(lean_object* v_root_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_self_440_; lean_object* v_size_441_; lean_object* v_size_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v_self_440_ = lean_ctor_get(v_root_428_, 0);
lean_inc_ref_n(v_self_440_, 2);
v_size_441_ = lean_ctor_get(v_root_428_, 6);
lean_inc(v_size_441_);
v_size_442_ = lean_unsigned_to_nat(0u);
v___x_443_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_443_, 0, v_size_442_);
lean_ctor_set(v___x_443_, 1, v_self_440_);
v___x_444_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg(v_self_440_, v_root_428_, v___x_443_, v_a_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_);
lean_dec_ref(v_root_428_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v___x_447_; uint8_t v_isShared_448_; uint8_t v_isSharedCheck_457_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_457_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_457_ == 0)
{
v___x_447_ = v___x_444_;
v_isShared_448_ = v_isSharedCheck_457_;
goto v_resetjp_446_;
}
else
{
lean_inc(v_a_445_);
lean_dec(v___x_444_);
v___x_447_ = lean_box(0);
v_isShared_448_ = v_isSharedCheck_457_;
goto v_resetjp_446_;
}
v_resetjp_446_:
{
lean_object* v_fst_449_; uint8_t v___x_450_; 
v_fst_449_ = lean_ctor_get(v_a_445_, 0);
lean_inc(v_fst_449_);
lean_dec(v_a_445_);
v___x_450_ = lean_nat_dec_eq(v_size_441_, v_fst_449_);
lean_dec(v_fst_449_);
lean_dec(v_size_441_);
if (v___x_450_ == 0)
{
lean_object* v___x_451_; lean_object* v___x_452_; 
lean_del_object(v___x_447_);
v___x_451_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__1, &l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___closed__1);
v___x_452_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4(v___x_451_, v_a_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_, v_a_438_);
return v___x_452_;
}
else
{
lean_object* v___x_453_; lean_object* v___x_455_; 
v___x_453_ = lean_box(0);
if (v_isShared_448_ == 0)
{
lean_ctor_set(v___x_447_, 0, v___x_453_);
v___x_455_ = v___x_447_;
goto v_reusejp_454_;
}
else
{
lean_object* v_reuseFailAlloc_456_; 
v_reuseFailAlloc_456_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_456_, 0, v___x_453_);
v___x_455_ = v_reuseFailAlloc_456_;
goto v_reusejp_454_;
}
v_reusejp_454_:
{
return v___x_455_;
}
}
}
}
else
{
lean_object* v_a_458_; lean_object* v___x_460_; uint8_t v_isShared_461_; uint8_t v_isSharedCheck_465_; 
lean_dec(v_size_441_);
v_a_458_ = lean_ctor_get(v___x_444_, 0);
v_isSharedCheck_465_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_465_ == 0)
{
v___x_460_ = v___x_444_;
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
else
{
lean_inc(v_a_458_);
lean_dec(v___x_444_);
v___x_460_ = lean_box(0);
v_isShared_461_ = v_isSharedCheck_465_;
goto v_resetjp_459_;
}
v_resetjp_459_:
{
lean_object* v___x_463_; 
if (v_isShared_461_ == 0)
{
v___x_463_ = v___x_460_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_464_; 
v_reuseFailAlloc_464_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_464_, 0, v_a_458_);
v___x_463_ = v_reuseFailAlloc_464_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
return v___x_463_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc___boxed(lean_object* v_root_466_, lean_object* v_a_467_, lean_object* v_a_468_, lean_object* v_a_469_, lean_object* v_a_470_, lean_object* v_a_471_, lean_object* v_a_472_, lean_object* v_a_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
lean_object* v_res_478_; 
v_res_478_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc(v_root_466_, v_a_467_, v_a_468_, v_a_469_, v_a_470_, v_a_471_, v_a_472_, v_a_473_, v_a_474_, v_a_475_, v_a_476_);
lean_dec(v_a_476_);
lean_dec_ref(v_a_475_);
lean_dec(v_a_474_);
lean_dec_ref(v_a_473_);
lean_dec(v_a_472_);
lean_dec_ref(v_a_471_);
lean_dec(v_a_470_);
lean_dec_ref(v_a_469_);
lean_dec(v_a_468_);
lean_dec(v_a_467_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0(lean_object* v_inst_479_, lean_object* v_a_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_){
_start:
{
lean_object* v___x_492_; 
v___x_492_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___redArg(v_a_480_, v___y_481_);
return v___x_492_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0___boxed(lean_object* v_inst_493_, lean_object* v_a_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_, lean_object* v___y_499_, lean_object* v___y_500_, lean_object* v___y_501_, lean_object* v___y_502_, lean_object* v___y_503_, lean_object* v___y_504_, lean_object* v___y_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__0(v_inst_493_, v_a_494_, v___y_495_, v___y_496_, v___y_497_, v___y_498_, v___y_499_, v___y_500_, v___y_501_, v___y_502_, v___y_503_, v___y_504_);
lean_dec(v___y_504_);
lean_dec_ref(v___y_503_);
lean_dec(v___y_502_);
lean_dec_ref(v___y_501_);
lean_dec(v___y_500_);
lean_dec_ref(v___y_499_);
lean_dec(v___y_498_);
lean_dec_ref(v___y_497_);
lean_dec(v___y_496_);
lean_dec(v___y_495_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2(lean_object* v___x_507_, lean_object* v_00_u03b2_508_, lean_object* v_x_509_, lean_object* v_x_510_){
_start:
{
lean_object* v___x_511_; 
v___x_511_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg(v___x_507_, v_x_509_, v_x_510_);
return v___x_511_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___boxed(lean_object* v___x_512_, lean_object* v_00_u03b2_513_, lean_object* v_x_514_, lean_object* v_x_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2(v___x_512_, v_00_u03b2_513_, v_x_514_, v_x_515_);
lean_dec_ref(v_x_514_);
lean_dec_ref(v___x_512_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3(lean_object* v_curr_517_, lean_object* v_root_518_, lean_object* v_inst_519_, lean_object* v_a_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_){
_start:
{
lean_object* v___x_532_; 
v___x_532_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg(v_curr_517_, v_root_518_, v_a_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_, v___y_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, v___y_530_);
return v___x_532_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___boxed(lean_object* v_curr_533_, lean_object* v_root_534_, lean_object* v_inst_535_, lean_object* v_a_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_, lean_object* v___y_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_){
_start:
{
lean_object* v_res_548_; 
v_res_548_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3(v_curr_533_, v_root_534_, v_inst_535_, v_a_536_, v___y_537_, v___y_538_, v___y_539_, v___y_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_, v___y_546_);
lean_dec(v___y_546_);
lean_dec_ref(v___y_545_);
lean_dec(v___y_544_);
lean_dec_ref(v___y_543_);
lean_dec(v___y_542_);
lean_dec_ref(v___y_541_);
lean_dec(v___y_540_);
lean_dec_ref(v___y_539_);
lean_dec(v___y_538_);
lean_dec(v___y_537_);
lean_dec_ref(v_root_534_);
return v_res_548_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2(lean_object* v___x_549_, lean_object* v_00_u03b2_550_, lean_object* v_x_551_, size_t v_x_552_, lean_object* v_x_553_){
_start:
{
lean_object* v___x_554_; 
lean_inc_ref(v_x_551_);
v___x_554_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___redArg(v___x_549_, v_x_551_, v_x_552_, v_x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2___boxed(lean_object* v___x_555_, lean_object* v_00_u03b2_556_, lean_object* v_x_557_, lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
size_t v_x_38130__boxed_560_; lean_object* v_res_561_; 
v_x_38130__boxed_560_ = lean_unbox_usize(v_x_558_);
lean_dec(v_x_558_);
v_res_561_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2(v___x_555_, v_00_u03b2_556_, v_x_557_, v_x_38130__boxed_560_, v_x_559_);
lean_dec_ref(v_x_557_);
lean_dec_ref(v___x_555_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4(lean_object* v___x_562_, lean_object* v_00_u03b2_563_, lean_object* v_keys_564_, lean_object* v_vals_565_, lean_object* v_heq_566_, lean_object* v_i_567_, lean_object* v_k_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___redArg(v___x_562_, v_keys_564_, v_vals_565_, v_i_567_, v_k_568_);
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4___boxed(lean_object* v___x_570_, lean_object* v_00_u03b2_571_, lean_object* v_keys_572_, lean_object* v_vals_573_, lean_object* v_heq_574_, lean_object* v_i_575_, lean_object* v_k_576_){
_start:
{
lean_object* v_res_577_; 
v_res_577_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2_spec__2_spec__4(v___x_570_, v_00_u03b2_571_, v_keys_572_, v_vals_573_, v_heq_574_, v_i_575_, v_k_576_);
lean_dec_ref(v_vals_573_);
lean_dec_ref(v_keys_572_);
lean_dec_ref(v___x_570_);
return v_res_577_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(lean_object* v_e_578_, lean_object* v_child_579_, lean_object* v_a_580_){
_start:
{
lean_object* v___x_582_; lean_object* v___x_583_; 
v___x_582_ = lean_st_ref_get(v_a_580_);
v___x_583_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v___x_582_, v_child_579_);
lean_dec(v___x_582_);
if (lean_obj_tag(v___x_583_) == 1)
{
lean_object* v_val_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_595_; 
v_val_584_ = lean_ctor_get(v___x_583_, 0);
v_isSharedCheck_595_ = !lean_is_exclusive(v___x_583_);
if (v_isSharedCheck_595_ == 0)
{
v___x_586_ = v___x_583_;
v_isShared_587_ = v_isSharedCheck_595_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_val_584_);
lean_dec(v___x_583_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_595_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
size_t v___x_588_; size_t v___x_589_; uint8_t v___x_590_; lean_object* v___x_591_; lean_object* v___x_593_; 
v___x_588_ = lean_ptr_addr(v_val_584_);
lean_dec(v_val_584_);
v___x_589_ = lean_ptr_addr(v_e_578_);
v___x_590_ = lean_usize_dec_eq(v___x_588_, v___x_589_);
v___x_591_ = lean_box(v___x_590_);
if (v_isShared_587_ == 0)
{
lean_ctor_set_tag(v___x_586_, 0);
lean_ctor_set(v___x_586_, 0, v___x_591_);
v___x_593_ = v___x_586_;
goto v_reusejp_592_;
}
else
{
lean_object* v_reuseFailAlloc_594_; 
v_reuseFailAlloc_594_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_594_, 0, v___x_591_);
v___x_593_ = v_reuseFailAlloc_594_;
goto v_reusejp_592_;
}
v_reusejp_592_:
{
return v___x_593_;
}
}
}
else
{
uint8_t v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
lean_dec(v___x_583_);
v___x_596_ = 0;
v___x_597_ = lean_box(v___x_596_);
v___x_598_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_598_, 0, v___x_597_);
return v___x_598_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg___boxed(lean_object* v_e_599_, lean_object* v_child_600_, lean_object* v_a_601_, lean_object* v_a_602_){
_start:
{
lean_object* v_res_603_; 
v_res_603_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_599_, v_child_600_, v_a_601_);
lean_dec(v_a_601_);
lean_dec_ref(v_child_600_);
lean_dec_ref(v_e_599_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild(lean_object* v_e_604_, lean_object* v_child_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_){
_start:
{
lean_object* v___x_617_; 
v___x_617_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_604_, v_child_605_, v_a_606_);
return v___x_617_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___boxed(lean_object* v_e_618_, lean_object* v_child_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild(v_e_618_, v_child_619_, v_a_620_, v_a_621_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_, v_a_627_, v_a_628_, v_a_629_);
lean_dec(v_a_629_);
lean_dec_ref(v_a_628_);
lean_dec(v_a_627_);
lean_dec_ref(v_a_626_);
lean_dec(v_a_625_);
lean_dec_ref(v_a_624_);
lean_dec(v_a_623_);
lean_dec_ref(v_a_622_);
lean_dec(v_a_621_);
lean_dec(v_a_620_);
lean_dec_ref(v_child_619_);
lean_dec_ref(v_e_618_);
return v_res_631_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___lam__0(lean_object* v___x_632_, lean_object* v_00___633_, lean_object* v___y_634_, lean_object* v___y_635_, lean_object* v___y_636_, lean_object* v___y_637_, lean_object* v___y_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_){
_start:
{
lean_object* v___x_645_; lean_object* v___x_646_; 
v___x_645_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_645_, 0, v___x_632_);
v___x_646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_646_, 0, v___x_645_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___lam__0___boxed(lean_object* v___x_647_, lean_object* v_00___648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_, lean_object* v___y_653_, lean_object* v___y_654_, lean_object* v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_){
_start:
{
lean_object* v_res_660_; 
v_res_660_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___lam__0(v___x_647_, v_00___648_, v___y_649_, v___y_650_, v___y_651_, v___y_652_, v___y_653_, v___y_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_);
lean_dec(v___y_658_);
lean_dec_ref(v___y_657_);
lean_dec(v___y_656_);
lean_dec_ref(v___y_655_);
lean_dec(v___y_654_);
lean_dec_ref(v___y_653_);
lean_dec(v___y_652_);
lean_dec_ref(v___y_651_);
lean_dec(v___y_650_);
lean_dec(v___y_649_);
return v_res_660_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0(void){
_start:
{
lean_object* v___x_661_; lean_object* v_dummy_662_; 
v___x_661_ = lean_box(0);
v_dummy_662_ = l_Lean_Expr_sort___override(v___x_661_);
return v_dummy_662_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg(lean_object* v_upperBound_666_, lean_object* v___x_667_, lean_object* v___x_668_, lean_object* v_e_669_, lean_object* v_a_670_, lean_object* v_b_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_, lean_object* v___y_675_, lean_object* v___y_676_, lean_object* v___y_677_, lean_object* v___y_678_, lean_object* v___y_679_, lean_object* v___y_680_, lean_object* v___y_681_){
_start:
{
lean_object* v___y_684_; uint8_t v___x_706_; 
v___x_706_ = lean_nat_dec_lt(v_a_670_, v_upperBound_666_);
if (v___x_706_ == 0)
{
lean_object* v___x_707_; 
lean_dec(v_a_670_);
v___x_707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_707_, 0, v_b_671_);
return v___x_707_;
}
else
{
lean_object* v___x_708_; uint8_t v_a_710_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
lean_dec_ref(v_b_671_);
v___x_708_ = lean_box(0);
v___x_715_ = l_Lean_instInhabitedExpr;
v___x_716_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__1));
v___x_717_ = lean_array_get_borrowed(v___x_715_, v___x_667_, v_a_670_);
v___x_718_ = l_Lean_Expr_getAppFn(v___x_717_);
v___x_719_ = l_Lean_Expr_isBVar(v___x_718_);
lean_dec_ref(v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; lean_object* v___x_721_; 
v___x_720_ = lean_array_get_borrowed(v___x_715_, v___x_668_, v_a_670_);
v___x_721_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_669_, v___x_720_, v___y_672_);
if (lean_obj_tag(v___x_721_) == 0)
{
lean_object* v_a_722_; uint8_t v___x_723_; 
v_a_722_ = lean_ctor_get(v___x_721_, 0);
lean_inc(v_a_722_);
lean_dec_ref_known(v___x_721_, 1);
v___x_723_ = lean_unbox(v_a_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; 
lean_dec(v_a_722_);
lean_inc(v___x_717_);
lean_inc(v___x_720_);
v___x_724_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild(v_e_669_, v___x_720_, v___x_717_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
if (lean_obj_tag(v___x_724_) == 0)
{
lean_object* v_a_725_; uint8_t v___x_726_; 
v_a_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_724_, 1);
v___x_726_ = lean_unbox(v_a_725_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; 
lean_dec(v_a_725_);
v___x_727_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___lam__0(v___x_716_, v___x_708_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
v___y_684_ = v___x_727_;
goto v___jp_683_;
}
else
{
uint8_t v___x_728_; 
lean_dec(v_a_670_);
v___x_728_ = lean_unbox(v_a_725_);
lean_dec(v_a_725_);
v_a_710_ = v___x_728_;
goto v___jp_709_;
}
}
else
{
lean_object* v_a_729_; lean_object* v___x_731_; uint8_t v_isShared_732_; uint8_t v_isSharedCheck_736_; 
lean_dec(v_a_670_);
v_a_729_ = lean_ctor_get(v___x_724_, 0);
v_isSharedCheck_736_ = !lean_is_exclusive(v___x_724_);
if (v_isSharedCheck_736_ == 0)
{
v___x_731_ = v___x_724_;
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
else
{
lean_inc(v_a_729_);
lean_dec(v___x_724_);
v___x_731_ = lean_box(0);
v_isShared_732_ = v_isSharedCheck_736_;
goto v_resetjp_730_;
}
v_resetjp_730_:
{
lean_object* v___x_734_; 
if (v_isShared_732_ == 0)
{
v___x_734_ = v___x_731_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_a_729_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
}
}
else
{
uint8_t v___x_737_; 
lean_dec(v_a_670_);
v___x_737_ = lean_unbox(v_a_722_);
lean_dec(v_a_722_);
v_a_710_ = v___x_737_;
goto v___jp_709_;
}
}
else
{
lean_object* v_a_738_; lean_object* v___x_740_; uint8_t v_isShared_741_; uint8_t v_isSharedCheck_745_; 
lean_dec(v_a_670_);
v_a_738_ = lean_ctor_get(v___x_721_, 0);
v_isSharedCheck_745_ = !lean_is_exclusive(v___x_721_);
if (v_isSharedCheck_745_ == 0)
{
v___x_740_ = v___x_721_;
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
else
{
lean_inc(v_a_738_);
lean_dec(v___x_721_);
v___x_740_ = lean_box(0);
v_isShared_741_ = v_isSharedCheck_745_;
goto v_resetjp_739_;
}
v_resetjp_739_:
{
lean_object* v___x_743_; 
if (v_isShared_741_ == 0)
{
v___x_743_ = v___x_740_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v_a_738_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
else
{
lean_object* v___x_746_; 
v___x_746_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___lam__0(v___x_716_, v___x_708_, v___y_672_, v___y_673_, v___y_674_, v___y_675_, v___y_676_, v___y_677_, v___y_678_, v___y_679_, v___y_680_, v___y_681_);
v___y_684_ = v___x_746_;
goto v___jp_683_;
}
v___jp_709_:
{
lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; 
v___x_711_ = lean_box(v_a_710_);
v___x_712_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_712_, 0, v___x_711_);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v___x_712_);
lean_ctor_set(v___x_713_, 1, v___x_708_);
v___x_714_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_714_, 0, v___x_713_);
return v___x_714_;
}
}
v___jp_683_:
{
if (lean_obj_tag(v___y_684_) == 0)
{
lean_object* v_a_685_; lean_object* v___x_687_; uint8_t v_isShared_688_; uint8_t v_isSharedCheck_697_; 
v_a_685_ = lean_ctor_get(v___y_684_, 0);
v_isSharedCheck_697_ = !lean_is_exclusive(v___y_684_);
if (v_isSharedCheck_697_ == 0)
{
v___x_687_ = v___y_684_;
v_isShared_688_ = v_isSharedCheck_697_;
goto v_resetjp_686_;
}
else
{
lean_inc(v_a_685_);
lean_dec(v___y_684_);
v___x_687_ = lean_box(0);
v_isShared_688_ = v_isSharedCheck_697_;
goto v_resetjp_686_;
}
v_resetjp_686_:
{
if (lean_obj_tag(v_a_685_) == 0)
{
lean_object* v_a_689_; lean_object* v___x_691_; 
lean_dec(v_a_670_);
v_a_689_ = lean_ctor_get(v_a_685_, 0);
lean_inc(v_a_689_);
lean_dec_ref_known(v_a_685_, 1);
if (v_isShared_688_ == 0)
{
lean_ctor_set(v___x_687_, 0, v_a_689_);
v___x_691_ = v___x_687_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_a_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
else
{
lean_object* v_a_693_; lean_object* v___x_694_; lean_object* v___x_695_; 
lean_del_object(v___x_687_);
v_a_693_ = lean_ctor_get(v_a_685_, 0);
lean_inc(v_a_693_);
lean_dec_ref_known(v_a_685_, 1);
v___x_694_ = lean_unsigned_to_nat(1u);
v___x_695_ = lean_nat_add(v_a_670_, v___x_694_);
lean_dec(v_a_670_);
v_a_670_ = v___x_695_;
v_b_671_ = v_a_693_;
goto _start;
}
}
}
else
{
lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
lean_dec(v_a_670_);
v_a_698_ = lean_ctor_get(v___y_684_, 0);
v_isSharedCheck_705_ = !lean_is_exclusive(v___y_684_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___y_684_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_dec(v___y_684_);
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
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___redArg(lean_object* v_val_747_, lean_object* v_pat_748_, lean_object* v___x_749_, lean_object* v_e_750_, lean_object* v_as_x27_751_, lean_object* v_b_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_, lean_object* v___y_756_, lean_object* v___y_757_, lean_object* v___y_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_){
_start:
{
if (lean_obj_tag(v_as_x27_751_) == 0)
{
lean_object* v___x_764_; 
v___x_764_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_764_, 0, v_b_752_);
return v___x_764_;
}
else
{
lean_object* v_head_765_; lean_object* v_tail_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
lean_dec_ref(v_b_752_);
v_head_765_ = lean_ctor_get(v_as_x27_751_, 0);
v_tail_766_ = lean_ctor_get(v_as_x27_751_, 1);
v___x_767_ = lean_box(0);
v___x_768_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__1));
lean_inc(v_head_765_);
v___x_769_ = l_Lean_Meta_isConstructorApp_x3f(v_head_765_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
if (lean_obj_tag(v___x_769_) == 0)
{
lean_object* v_a_770_; 
v_a_770_ = lean_ctor_get(v___x_769_, 0);
lean_inc(v_a_770_);
lean_dec_ref_known(v___x_769_, 1);
if (lean_obj_tag(v_a_770_) == 1)
{
lean_object* v_val_771_; lean_object* v_toConstantVal_772_; lean_object* v_toConstantVal_773_; lean_object* v_numParams_774_; lean_object* v_numFields_775_; lean_object* v_name_776_; lean_object* v_name_777_; uint8_t v___x_778_; 
v_val_771_ = lean_ctor_get(v_a_770_, 0);
lean_inc(v_val_771_);
lean_dec_ref_known(v_a_770_, 1);
v_toConstantVal_772_ = lean_ctor_get(v_val_771_, 0);
lean_inc_ref(v_toConstantVal_772_);
v_toConstantVal_773_ = lean_ctor_get(v_val_747_, 0);
v_numParams_774_ = lean_ctor_get(v_val_771_, 3);
lean_inc(v_numParams_774_);
v_numFields_775_ = lean_ctor_get(v_val_771_, 4);
lean_inc(v_numFields_775_);
lean_dec(v_val_771_);
v_name_776_ = lean_ctor_get(v_toConstantVal_772_, 0);
lean_inc(v_name_776_);
lean_dec_ref(v_toConstantVal_772_);
v_name_777_ = lean_ctor_get(v_toConstantVal_773_, 0);
v___x_778_ = lean_name_eq(v_name_776_, v_name_777_);
lean_dec(v_name_776_);
if (v___x_778_ == 0)
{
lean_dec(v_numFields_775_);
lean_dec(v_numParams_774_);
v_as_x27_751_ = v_tail_766_;
v_b_752_ = v___x_768_;
goto _start;
}
else
{
lean_object* v___x_780_; lean_object* v___x_781_; uint8_t v___x_782_; 
v___x_780_ = lean_nat_add(v_numParams_774_, v_numFields_775_);
lean_dec(v_numFields_775_);
v___x_781_ = l_Lean_Expr_getAppNumArgs(v_pat_748_);
v___x_782_ = lean_nat_dec_eq(v___x_781_, v___x_780_);
lean_dec(v___x_781_);
if (v___x_782_ == 0)
{
lean_dec(v___x_780_);
lean_dec(v_numParams_774_);
v_as_x27_751_ = v_tail_766_;
v_b_752_ = v___x_768_;
goto _start;
}
else
{
lean_object* v_nargs_784_; lean_object* v_dummy_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; 
v_nargs_784_ = l_Lean_Expr_getAppNumArgs(v_head_765_);
v_dummy_785_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0, &l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0);
lean_inc(v_nargs_784_);
v___x_786_ = lean_mk_array(v_nargs_784_, v_dummy_785_);
v___x_787_ = lean_unsigned_to_nat(1u);
v___x_788_ = lean_nat_sub(v_nargs_784_, v___x_787_);
lean_dec(v_nargs_784_);
lean_inc(v_head_765_);
v___x_789_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_head_765_, v___x_786_, v___x_788_);
v___x_790_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg(v___x_780_, v___x_749_, v___x_789_, v_e_750_, v_numParams_774_, v___x_768_, v___y_753_, v___y_754_, v___y_755_, v___y_756_, v___y_757_, v___y_758_, v___y_759_, v___y_760_, v___y_761_, v___y_762_);
lean_dec_ref(v___x_789_);
lean_dec(v___x_780_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v_a_791_; lean_object* v___x_793_; uint8_t v_isShared_794_; uint8_t v_isSharedCheck_808_; 
v_a_791_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_808_ == 0)
{
v___x_793_ = v___x_790_;
v_isShared_794_ = v_isSharedCheck_808_;
goto v_resetjp_792_;
}
else
{
lean_inc(v_a_791_);
lean_dec(v___x_790_);
v___x_793_ = lean_box(0);
v_isShared_794_ = v_isSharedCheck_808_;
goto v_resetjp_792_;
}
v_resetjp_792_:
{
lean_object* v_fst_795_; lean_object* v___x_797_; uint8_t v_isShared_798_; uint8_t v_isSharedCheck_806_; 
v_fst_795_ = lean_ctor_get(v_a_791_, 0);
v_isSharedCheck_806_ = !lean_is_exclusive(v_a_791_);
if (v_isSharedCheck_806_ == 0)
{
lean_object* v_unused_807_; 
v_unused_807_ = lean_ctor_get(v_a_791_, 1);
lean_dec(v_unused_807_);
v___x_797_ = v_a_791_;
v_isShared_798_ = v_isSharedCheck_806_;
goto v_resetjp_796_;
}
else
{
lean_inc(v_fst_795_);
lean_dec(v_a_791_);
v___x_797_ = lean_box(0);
v_isShared_798_ = v_isSharedCheck_806_;
goto v_resetjp_796_;
}
v_resetjp_796_:
{
if (lean_obj_tag(v_fst_795_) == 0)
{
lean_del_object(v___x_797_);
lean_del_object(v___x_793_);
v_as_x27_751_ = v_tail_766_;
v_b_752_ = v___x_768_;
goto _start;
}
else
{
lean_object* v___x_801_; 
if (v_isShared_798_ == 0)
{
lean_ctor_set(v___x_797_, 1, v___x_767_);
v___x_801_ = v___x_797_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_805_; 
v_reuseFailAlloc_805_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_805_, 0, v_fst_795_);
lean_ctor_set(v_reuseFailAlloc_805_, 1, v___x_767_);
v___x_801_ = v_reuseFailAlloc_805_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
lean_object* v___x_803_; 
if (v_isShared_794_ == 0)
{
lean_ctor_set(v___x_793_, 0, v___x_801_);
v___x_803_ = v___x_793_;
goto v_reusejp_802_;
}
else
{
lean_object* v_reuseFailAlloc_804_; 
v_reuseFailAlloc_804_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_804_, 0, v___x_801_);
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
}
}
else
{
return v___x_790_;
}
}
}
}
else
{
lean_dec(v_a_770_);
v_as_x27_751_ = v_tail_766_;
v_b_752_ = v___x_768_;
goto _start;
}
}
else
{
lean_object* v_a_810_; lean_object* v___x_812_; uint8_t v_isShared_813_; uint8_t v_isSharedCheck_817_; 
v_a_810_ = lean_ctor_get(v___x_769_, 0);
v_isSharedCheck_817_ = !lean_is_exclusive(v___x_769_);
if (v_isSharedCheck_817_ == 0)
{
v___x_812_ = v___x_769_;
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
else
{
lean_inc(v_a_810_);
lean_dec(v___x_769_);
v___x_812_ = lean_box(0);
v_isShared_813_ = v_isSharedCheck_817_;
goto v_resetjp_811_;
}
v_resetjp_811_:
{
lean_object* v___x_815_; 
if (v_isShared_813_ == 0)
{
v___x_815_ = v___x_812_;
goto v_reusejp_814_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v_a_810_);
v___x_815_ = v_reuseFailAlloc_816_;
goto v_reusejp_814_;
}
v_reusejp_814_:
{
return v___x_815_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild(lean_object* v_e_818_, lean_object* v_lhs_819_, lean_object* v_pat_820_, lean_object* v_a_821_, lean_object* v_a_822_, lean_object* v_a_823_, lean_object* v_a_824_, lean_object* v_a_825_, lean_object* v_a_826_, lean_object* v_a_827_, lean_object* v_a_828_, lean_object* v_a_829_, lean_object* v_a_830_){
_start:
{
lean_object* v___x_832_; 
lean_inc_ref(v_pat_820_);
v___x_832_ = l_Lean_Meta_isConstructorApp_x3f(v_pat_820_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
if (lean_obj_tag(v___x_832_) == 0)
{
lean_object* v_a_833_; lean_object* v___x_835_; uint8_t v_isShared_836_; uint8_t v_isSharedCheck_876_; 
v_a_833_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_876_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_876_ == 0)
{
v___x_835_ = v___x_832_;
v_isShared_836_ = v_isSharedCheck_876_;
goto v_resetjp_834_;
}
else
{
lean_inc(v_a_833_);
lean_dec(v___x_832_);
v___x_835_ = lean_box(0);
v_isShared_836_ = v_isSharedCheck_876_;
goto v_resetjp_834_;
}
v_resetjp_834_:
{
if (lean_obj_tag(v_a_833_) == 1)
{
lean_object* v_val_837_; lean_object* v_dummy_838_; lean_object* v_nargs_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; uint8_t v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; 
lean_del_object(v___x_835_);
v_val_837_ = lean_ctor_get(v_a_833_, 0);
lean_inc(v_val_837_);
lean_dec_ref_known(v_a_833_, 1);
v_dummy_838_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0, &l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0);
v_nargs_839_ = l_Lean_Expr_getAppNumArgs(v_pat_820_);
lean_inc(v_nargs_839_);
v___x_840_ = lean_mk_array(v_nargs_839_, v_dummy_838_);
v___x_841_ = lean_unsigned_to_nat(1u);
v___x_842_ = lean_nat_sub(v_nargs_839_, v___x_841_);
lean_dec(v_nargs_839_);
lean_inc_ref(v_pat_820_);
v___x_843_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_pat_820_, v___x_840_, v___x_842_);
v___x_844_ = 0;
v___x_845_ = lean_st_ref_get(v_a_821_);
v___x_846_ = l_Lean_Meta_Grind_Goal_getEqc(v___x_845_, v_lhs_819_, v___x_844_);
lean_dec(v___x_845_);
v___x_847_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__1));
v___x_848_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___redArg(v_val_837_, v_pat_820_, v___x_843_, v_e_818_, v___x_846_, v___x_847_, v_a_821_, v_a_822_, v_a_823_, v_a_824_, v_a_825_, v_a_826_, v_a_827_, v_a_828_, v_a_829_, v_a_830_);
lean_dec(v___x_846_);
lean_dec_ref(v___x_843_);
lean_dec_ref(v_pat_820_);
lean_dec(v_val_837_);
if (lean_obj_tag(v___x_848_) == 0)
{
lean_object* v_a_849_; lean_object* v___x_851_; uint8_t v_isShared_852_; uint8_t v_isSharedCheck_862_; 
v_a_849_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_862_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_862_ == 0)
{
v___x_851_ = v___x_848_;
v_isShared_852_ = v_isSharedCheck_862_;
goto v_resetjp_850_;
}
else
{
lean_inc(v_a_849_);
lean_dec(v___x_848_);
v___x_851_ = lean_box(0);
v_isShared_852_ = v_isSharedCheck_862_;
goto v_resetjp_850_;
}
v_resetjp_850_:
{
lean_object* v_fst_853_; 
v_fst_853_ = lean_ctor_get(v_a_849_, 0);
lean_inc(v_fst_853_);
lean_dec(v_a_849_);
if (lean_obj_tag(v_fst_853_) == 0)
{
lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_854_ = lean_box(v___x_844_);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v___x_854_);
v___x_856_ = v___x_851_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_857_; 
v_reuseFailAlloc_857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_857_, 0, v___x_854_);
v___x_856_ = v_reuseFailAlloc_857_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
return v___x_856_;
}
}
else
{
lean_object* v_val_858_; lean_object* v___x_860_; 
v_val_858_ = lean_ctor_get(v_fst_853_, 0);
lean_inc(v_val_858_);
lean_dec_ref_known(v_fst_853_, 1);
if (v_isShared_852_ == 0)
{
lean_ctor_set(v___x_851_, 0, v_val_858_);
v___x_860_ = v___x_851_;
goto v_reusejp_859_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_val_858_);
v___x_860_ = v_reuseFailAlloc_861_;
goto v_reusejp_859_;
}
v_reusejp_859_:
{
return v___x_860_;
}
}
}
}
else
{
lean_object* v_a_863_; lean_object* v___x_865_; uint8_t v_isShared_866_; uint8_t v_isSharedCheck_870_; 
v_a_863_ = lean_ctor_get(v___x_848_, 0);
v_isSharedCheck_870_ = !lean_is_exclusive(v___x_848_);
if (v_isSharedCheck_870_ == 0)
{
v___x_865_ = v___x_848_;
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
else
{
lean_inc(v_a_863_);
lean_dec(v___x_848_);
v___x_865_ = lean_box(0);
v_isShared_866_ = v_isSharedCheck_870_;
goto v_resetjp_864_;
}
v_resetjp_864_:
{
lean_object* v___x_868_; 
if (v_isShared_866_ == 0)
{
v___x_868_ = v___x_865_;
goto v_reusejp_867_;
}
else
{
lean_object* v_reuseFailAlloc_869_; 
v_reuseFailAlloc_869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_869_, 0, v_a_863_);
v___x_868_ = v_reuseFailAlloc_869_;
goto v_reusejp_867_;
}
v_reusejp_867_:
{
return v___x_868_;
}
}
}
}
else
{
uint8_t v___x_871_; lean_object* v___x_872_; lean_object* v___x_874_; 
lean_dec(v_a_833_);
lean_dec_ref(v_pat_820_);
lean_dec_ref(v_lhs_819_);
v___x_871_ = 0;
v___x_872_ = lean_box(v___x_871_);
if (v_isShared_836_ == 0)
{
lean_ctor_set(v___x_835_, 0, v___x_872_);
v___x_874_ = v___x_835_;
goto v_reusejp_873_;
}
else
{
lean_object* v_reuseFailAlloc_875_; 
v_reuseFailAlloc_875_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_875_, 0, v___x_872_);
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
lean_object* v_a_877_; lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_884_; 
lean_dec_ref(v_pat_820_);
lean_dec_ref(v_lhs_819_);
v_a_877_ = lean_ctor_get(v___x_832_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_832_);
if (v_isSharedCheck_884_ == 0)
{
v___x_879_ = v___x_832_;
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
else
{
lean_inc(v_a_877_);
lean_dec(v___x_832_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_884_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_882_; 
if (v_isShared_880_ == 0)
{
v___x_882_ = v___x_879_;
goto v_reusejp_881_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_877_);
v___x_882_ = v_reuseFailAlloc_883_;
goto v_reusejp_881_;
}
v_reusejp_881_:
{
return v___x_882_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___boxed(lean_object* v_e_885_, lean_object* v_lhs_886_, lean_object* v_pat_887_, lean_object* v_a_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_, lean_object* v_a_893_, lean_object* v_a_894_, lean_object* v_a_895_, lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild(v_e_885_, v_lhs_886_, v_pat_887_, v_a_888_, v_a_889_, v_a_890_, v_a_891_, v_a_892_, v_a_893_, v_a_894_, v_a_895_, v_a_896_, v_a_897_);
lean_dec(v_a_897_);
lean_dec_ref(v_a_896_);
lean_dec(v_a_895_);
lean_dec_ref(v_a_894_);
lean_dec(v_a_893_);
lean_dec_ref(v_a_892_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
lean_dec(v_a_889_);
lean_dec(v_a_888_);
lean_dec_ref(v_e_885_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg___boxed(lean_object** _args){
lean_object* v_upperBound_900_ = _args[0];
lean_object* v___x_901_ = _args[1];
lean_object* v___x_902_ = _args[2];
lean_object* v_e_903_ = _args[3];
lean_object* v_a_904_ = _args[4];
lean_object* v_b_905_ = _args[5];
lean_object* v___y_906_ = _args[6];
lean_object* v___y_907_ = _args[7];
lean_object* v___y_908_ = _args[8];
lean_object* v___y_909_ = _args[9];
lean_object* v___y_910_ = _args[10];
lean_object* v___y_911_ = _args[11];
lean_object* v___y_912_ = _args[12];
lean_object* v___y_913_ = _args[13];
lean_object* v___y_914_ = _args[14];
lean_object* v___y_915_ = _args[15];
lean_object* v___y_916_ = _args[16];
_start:
{
lean_object* v_res_917_; 
v_res_917_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg(v_upperBound_900_, v___x_901_, v___x_902_, v_e_903_, v_a_904_, v_b_905_, v___y_906_, v___y_907_, v___y_908_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
lean_dec(v___y_915_);
lean_dec_ref(v___y_914_);
lean_dec(v___y_913_);
lean_dec_ref(v___y_912_);
lean_dec(v___y_911_);
lean_dec_ref(v___y_910_);
lean_dec(v___y_909_);
lean_dec_ref(v___y_908_);
lean_dec(v___y_907_);
lean_dec(v___y_906_);
lean_dec_ref(v_e_903_);
lean_dec_ref(v___x_902_);
lean_dec_ref(v___x_901_);
lean_dec(v_upperBound_900_);
return v_res_917_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___redArg___boxed(lean_object** _args){
lean_object* v_val_918_ = _args[0];
lean_object* v_pat_919_ = _args[1];
lean_object* v___x_920_ = _args[2];
lean_object* v_e_921_ = _args[3];
lean_object* v_as_x27_922_ = _args[4];
lean_object* v_b_923_ = _args[5];
lean_object* v___y_924_ = _args[6];
lean_object* v___y_925_ = _args[7];
lean_object* v___y_926_ = _args[8];
lean_object* v___y_927_ = _args[9];
lean_object* v___y_928_ = _args[10];
lean_object* v___y_929_ = _args[11];
lean_object* v___y_930_ = _args[12];
lean_object* v___y_931_ = _args[13];
lean_object* v___y_932_ = _args[14];
lean_object* v___y_933_ = _args[15];
lean_object* v___y_934_ = _args[16];
_start:
{
lean_object* v_res_935_; 
v_res_935_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___redArg(v_val_918_, v_pat_919_, v___x_920_, v_e_921_, v_as_x27_922_, v_b_923_, v___y_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec(v___y_929_);
lean_dec_ref(v___y_928_);
lean_dec(v___y_927_);
lean_dec_ref(v___y_926_);
lean_dec(v___y_925_);
lean_dec(v___y_924_);
lean_dec(v_as_x27_922_);
lean_dec_ref(v_e_921_);
lean_dec_ref(v___x_920_);
lean_dec_ref(v_pat_919_);
lean_dec_ref(v_val_918_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0(lean_object* v_upperBound_936_, lean_object* v___x_937_, lean_object* v___x_938_, lean_object* v_e_939_, lean_object* v_inst_940_, lean_object* v_R_941_, lean_object* v_a_942_, lean_object* v_b_943_, lean_object* v_c_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___redArg(v_upperBound_936_, v___x_937_, v___x_938_, v_e_939_, v_a_942_, v_b_943_, v___y_945_, v___y_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
return v___x_956_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0___boxed(lean_object** _args){
lean_object* v_upperBound_957_ = _args[0];
lean_object* v___x_958_ = _args[1];
lean_object* v___x_959_ = _args[2];
lean_object* v_e_960_ = _args[3];
lean_object* v_inst_961_ = _args[4];
lean_object* v_R_962_ = _args[5];
lean_object* v_a_963_ = _args[6];
lean_object* v_b_964_ = _args[7];
lean_object* v_c_965_ = _args[8];
lean_object* v___y_966_ = _args[9];
lean_object* v___y_967_ = _args[10];
lean_object* v___y_968_ = _args[11];
lean_object* v___y_969_ = _args[12];
lean_object* v___y_970_ = _args[13];
lean_object* v___y_971_ = _args[14];
lean_object* v___y_972_ = _args[15];
lean_object* v___y_973_ = _args[16];
lean_object* v___y_974_ = _args[17];
lean_object* v___y_975_ = _args[18];
lean_object* v___y_976_ = _args[19];
_start:
{
lean_object* v_res_977_; 
v_res_977_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__0(v_upperBound_957_, v___x_958_, v___x_959_, v_e_960_, v_inst_961_, v_R_962_, v_a_963_, v_b_964_, v_c_965_, v___y_966_, v___y_967_, v___y_968_, v___y_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_, v___y_974_, v___y_975_);
lean_dec(v___y_975_);
lean_dec_ref(v___y_974_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
lean_dec(v___y_969_);
lean_dec_ref(v___y_968_);
lean_dec(v___y_967_);
lean_dec(v___y_966_);
lean_dec_ref(v_e_960_);
lean_dec_ref(v___x_959_);
lean_dec_ref(v___x_958_);
lean_dec(v_upperBound_957_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1(lean_object* v_val_978_, lean_object* v_pat_979_, lean_object* v___x_980_, lean_object* v_e_981_, lean_object* v_as_982_, lean_object* v_as_x27_983_, lean_object* v_b_984_, lean_object* v_a_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_, lean_object* v___y_995_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___redArg(v_val_978_, v_pat_979_, v___x_980_, v_e_981_, v_as_x27_983_, v_b_984_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_, v___y_991_, v___y_992_, v___y_993_, v___y_994_, v___y_995_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1___boxed(lean_object** _args){
lean_object* v_val_998_ = _args[0];
lean_object* v_pat_999_ = _args[1];
lean_object* v___x_1000_ = _args[2];
lean_object* v_e_1001_ = _args[3];
lean_object* v_as_1002_ = _args[4];
lean_object* v_as_x27_1003_ = _args[5];
lean_object* v_b_1004_ = _args[6];
lean_object* v_a_1005_ = _args[7];
lean_object* v___y_1006_ = _args[8];
lean_object* v___y_1007_ = _args[9];
lean_object* v___y_1008_ = _args[10];
lean_object* v___y_1009_ = _args[11];
lean_object* v___y_1010_ = _args[12];
lean_object* v___y_1011_ = _args[13];
lean_object* v___y_1012_ = _args[14];
lean_object* v___y_1013_ = _args[15];
lean_object* v___y_1014_ = _args[16];
lean_object* v___y_1015_ = _args[17];
lean_object* v___y_1016_ = _args[18];
_start:
{
lean_object* v_res_1017_; 
v_res_1017_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild_spec__1(v_val_998_, v_pat_999_, v___x_1000_, v_e_1001_, v_as_1002_, v_as_x27_1003_, v_b_1004_, v_a_1005_, v___y_1006_, v___y_1007_, v___y_1008_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
lean_dec(v___y_1015_);
lean_dec_ref(v___y_1014_);
lean_dec(v___y_1013_);
lean_dec_ref(v___y_1012_);
lean_dec(v___y_1011_);
lean_dec_ref(v___y_1010_);
lean_dec(v___y_1009_);
lean_dec_ref(v___y_1008_);
lean_dec(v___y_1007_);
lean_dec(v___y_1006_);
lean_dec(v_as_x27_1003_);
lean_dec(v_as_1002_);
lean_dec_ref(v_e_1001_);
lean_dec_ref(v___x_1000_);
lean_dec_ref(v_pat_999_);
lean_dec_ref(v_val_998_);
return v_res_1017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0(lean_object* v___x_1018_, lean_object* v_body_1019_, lean_object* v_____r_1020_, lean_object* v___y_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; 
v___x_1032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1032_, 0, v___x_1018_);
lean_ctor_set(v___x_1032_, 1, v_body_1019_);
v___x_1033_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1033_, 0, v___x_1032_);
v___x_1034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1034_, 0, v___x_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0___boxed(lean_object* v___x_1035_, lean_object* v_body_1036_, lean_object* v_____r_1037_, lean_object* v___y_1038_, lean_object* v___y_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_, lean_object* v___y_1044_, lean_object* v___y_1045_, lean_object* v___y_1046_, lean_object* v___y_1047_, lean_object* v___y_1048_){
_start:
{
lean_object* v_res_1049_; 
v_res_1049_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0(v___x_1035_, v_body_1036_, v_____r_1037_, v___y_1038_, v___y_1039_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, v___y_1044_, v___y_1045_, v___y_1046_, v___y_1047_);
lean_dec(v___y_1047_);
lean_dec_ref(v___y_1046_);
lean_dec(v___y_1045_);
lean_dec_ref(v___y_1044_);
lean_dec(v___y_1043_);
lean_dec_ref(v___y_1042_);
lean_dec(v___y_1041_);
lean_dec_ref(v___y_1040_);
lean_dec(v___y_1039_);
lean_dec(v___y_1038_);
return v_res_1049_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2(uint8_t v___x_1050_, lean_object* v_snd_1051_, lean_object* v_00___1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_, lean_object* v___y_1062_){
_start:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; 
v___x_1064_ = lean_box(v___x_1050_);
v___x_1065_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1065_, 0, v___x_1064_);
v___x_1066_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1066_, 0, v___x_1065_);
lean_ctor_set(v___x_1066_, 1, v_snd_1051_);
v___x_1067_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1067_, 0, v___x_1066_);
v___x_1068_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1067_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2___boxed(lean_object* v___x_1069_, lean_object* v_snd_1070_, lean_object* v_00___1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_, lean_object* v___y_1076_, lean_object* v___y_1077_, lean_object* v___y_1078_, lean_object* v___y_1079_, lean_object* v___y_1080_, lean_object* v___y_1081_, lean_object* v___y_1082_){
_start:
{
uint8_t v___x_29218__boxed_1083_; lean_object* v_res_1084_; 
v___x_29218__boxed_1083_ = lean_unbox(v___x_1069_);
v_res_1084_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2(v___x_29218__boxed_1083_, v_snd_1070_, v_00___1071_, v___y_1072_, v___y_1073_, v___y_1074_, v___y_1075_, v___y_1076_, v___y_1077_, v___y_1078_, v___y_1079_, v___y_1080_, v___y_1081_);
lean_dec(v___y_1081_);
lean_dec_ref(v___y_1080_);
lean_dec(v___y_1079_);
lean_dec_ref(v___y_1078_);
lean_dec(v___y_1077_);
lean_dec_ref(v___y_1076_);
lean_dec(v___y_1075_);
lean_dec_ref(v___y_1074_);
lean_dec(v___y_1073_);
lean_dec(v___y_1072_);
return v_res_1084_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(lean_object* v___f_1085_, lean_object* v_x_1086_, lean_object* v___y_1087_, lean_object* v___y_1088_, lean_object* v___y_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_, lean_object* v___y_1095_, lean_object* v___y_1096_){
_start:
{
lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1098_ = lean_box(0);
lean_inc(v___y_1096_);
lean_inc_ref(v___y_1095_);
lean_inc(v___y_1094_);
lean_inc_ref(v___y_1093_);
lean_inc(v___y_1092_);
lean_inc_ref(v___y_1091_);
lean_inc(v___y_1090_);
lean_inc_ref(v___y_1089_);
lean_inc(v___y_1088_);
lean_inc(v___y_1087_);
v___x_1099_ = lean_apply_12(v___f_1085_, v___x_1098_, v___y_1087_, v___y_1088_, v___y_1089_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_, v___y_1095_, v___y_1096_, lean_box(0));
return v___x_1099_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1___boxed(lean_object* v___f_1100_, lean_object* v_x_1101_, lean_object* v___y_1102_, lean_object* v___y_1103_, lean_object* v___y_1104_, lean_object* v___y_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_, lean_object* v___y_1110_, lean_object* v___y_1111_, lean_object* v___y_1112_){
_start:
{
lean_object* v_res_1113_; 
v_res_1113_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(v___f_1100_, v_x_1101_, v___y_1102_, v___y_1103_, v___y_1104_, v___y_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_, v___y_1110_, v___y_1111_);
lean_dec(v___y_1111_);
lean_dec_ref(v___y_1110_);
lean_dec(v___y_1109_);
lean_dec_ref(v___y_1108_);
lean_dec(v___y_1107_);
lean_dec_ref(v___y_1106_);
lean_dec(v___y_1105_);
lean_dec_ref(v___y_1104_);
lean_dec(v___y_1103_);
lean_dec(v___y_1102_);
return v_res_1113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg(lean_object* v_e_1123_, lean_object* v_a_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_, lean_object* v___y_1131_, lean_object* v___y_1132_, lean_object* v___y_1133_, lean_object* v___y_1134_){
_start:
{
lean_object* v___y_1137_; lean_object* v_snd_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1279_; 
v_snd_1157_ = lean_ctor_get(v_a_1124_, 1);
v_isSharedCheck_1279_ = !lean_is_exclusive(v_a_1124_);
if (v_isSharedCheck_1279_ == 0)
{
lean_object* v_unused_1280_; 
v_unused_1280_ = lean_ctor_get(v_a_1124_, 0);
lean_dec(v_unused_1280_);
v___x_1159_ = v_a_1124_;
v_isShared_1160_ = v_isSharedCheck_1279_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_snd_1157_);
lean_dec(v_a_1124_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1279_;
goto v_resetjp_1158_;
}
v___jp_1136_:
{
if (lean_obj_tag(v___y_1137_) == 0)
{
lean_object* v_a_1138_; lean_object* v___x_1140_; uint8_t v_isShared_1141_; uint8_t v_isSharedCheck_1148_; 
v_a_1138_ = lean_ctor_get(v___y_1137_, 0);
v_isSharedCheck_1148_ = !lean_is_exclusive(v___y_1137_);
if (v_isSharedCheck_1148_ == 0)
{
v___x_1140_ = v___y_1137_;
v_isShared_1141_ = v_isSharedCheck_1148_;
goto v_resetjp_1139_;
}
else
{
lean_inc(v_a_1138_);
lean_dec(v___y_1137_);
v___x_1140_ = lean_box(0);
v_isShared_1141_ = v_isSharedCheck_1148_;
goto v_resetjp_1139_;
}
v_resetjp_1139_:
{
if (lean_obj_tag(v_a_1138_) == 0)
{
lean_object* v_a_1142_; lean_object* v___x_1144_; 
v_a_1142_ = lean_ctor_get(v_a_1138_, 0);
lean_inc(v_a_1142_);
lean_dec_ref_known(v_a_1138_, 1);
if (v_isShared_1141_ == 0)
{
lean_ctor_set(v___x_1140_, 0, v_a_1142_);
v___x_1144_ = v___x_1140_;
goto v_reusejp_1143_;
}
else
{
lean_object* v_reuseFailAlloc_1145_; 
v_reuseFailAlloc_1145_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1145_, 0, v_a_1142_);
v___x_1144_ = v_reuseFailAlloc_1145_;
goto v_reusejp_1143_;
}
v_reusejp_1143_:
{
return v___x_1144_;
}
}
else
{
lean_object* v_a_1146_; 
lean_del_object(v___x_1140_);
v_a_1146_ = lean_ctor_get(v_a_1138_, 0);
lean_inc(v_a_1146_);
lean_dec_ref_known(v_a_1138_, 1);
v_a_1124_ = v_a_1146_;
goto _start;
}
}
}
else
{
lean_object* v_a_1149_; lean_object* v___x_1151_; uint8_t v_isShared_1152_; uint8_t v_isSharedCheck_1156_; 
v_a_1149_ = lean_ctor_get(v___y_1137_, 0);
v_isSharedCheck_1156_ = !lean_is_exclusive(v___y_1137_);
if (v_isSharedCheck_1156_ == 0)
{
v___x_1151_ = v___y_1137_;
v_isShared_1152_ = v_isSharedCheck_1156_;
goto v_resetjp_1150_;
}
else
{
lean_inc(v_a_1149_);
lean_dec(v___y_1137_);
v___x_1151_ = lean_box(0);
v_isShared_1152_ = v_isSharedCheck_1156_;
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
lean_object* v_reuseFailAlloc_1155_; 
v_reuseFailAlloc_1155_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1155_, 0, v_a_1149_);
v___x_1154_ = v_reuseFailAlloc_1155_;
goto v_reusejp_1153_;
}
v_reusejp_1153_:
{
return v___x_1154_;
}
}
}
}
v_resetjp_1158_:
{
if (lean_obj_tag(v_snd_1157_) == 7)
{
lean_object* v_binderType_1161_; lean_object* v_body_1162_; lean_object* v___x_1163_; lean_object* v___f_1164_; lean_object* v___x_1165_; 
lean_del_object(v___x_1159_);
v_binderType_1161_ = lean_ctor_get(v_snd_1157_, 1);
v_body_1162_ = lean_ctor_get(v_snd_1157_, 2);
v___x_1163_ = lean_box(0);
lean_inc_ref(v_body_1162_);
v___f_1164_ = lean_alloc_closure((void*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0___boxed), 14, 2);
lean_closure_set(v___f_1164_, 0, v___x_1163_);
lean_closure_set(v___f_1164_, 1, v_body_1162_);
lean_inc_ref(v_binderType_1161_);
v___x_1165_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_binderType_1161_, v___y_1132_);
if (lean_obj_tag(v___x_1165_) == 0)
{
lean_object* v_a_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v_a_1166_ = lean_ctor_get(v___x_1165_, 0);
lean_inc(v_a_1166_);
lean_dec_ref_known(v___x_1165_, 1);
v___x_1167_ = l_Lean_Expr_cleanupAnnotations(v_a_1166_);
lean_dec(v_a_1166_);
v___x_1168_ = l_Lean_Expr_isApp(v___x_1167_);
if (v___x_1168_ == 0)
{
lean_object* v___x_1169_; lean_object* v___x_1170_; 
lean_dec_ref(v___x_1167_);
lean_dec_ref_known(v_snd_1157_, 3);
v___x_1169_ = lean_box(0);
v___x_1170_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(v___f_1164_, v___x_1169_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1170_;
goto v___jp_1136_;
}
else
{
lean_object* v___x_1171_; uint8_t v___x_1172_; 
v___x_1171_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1167_);
v___x_1172_ = l_Lean_Expr_isApp(v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; lean_object* v___x_1174_; 
lean_dec_ref(v___x_1171_);
lean_dec_ref(v___x_1167_);
lean_dec_ref_known(v_snd_1157_, 3);
v___x_1173_ = lean_box(0);
v___x_1174_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(v___f_1164_, v___x_1173_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1174_;
goto v___jp_1136_;
}
else
{
lean_object* v___x_1175_; uint8_t v___x_1176_; 
v___x_1175_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1171_);
v___x_1176_ = l_Lean_Expr_isApp(v___x_1175_);
if (v___x_1176_ == 0)
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
lean_dec_ref(v___x_1175_);
lean_dec_ref(v___x_1171_);
lean_dec_ref(v___x_1167_);
lean_dec_ref_known(v_snd_1157_, 3);
v___x_1177_ = lean_box(0);
v___x_1178_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(v___f_1164_, v___x_1177_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1178_;
goto v___jp_1136_;
}
else
{
lean_object* v_arg_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; uint8_t v___x_1182_; 
v_arg_1179_ = lean_ctor_get(v___x_1167_, 1);
lean_inc_ref(v_arg_1179_);
lean_dec_ref(v___x_1167_);
v___x_1180_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1175_);
v___x_1181_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__1));
v___x_1182_ = l_Lean_Expr_isConstOf(v___x_1180_, v___x_1181_);
if (v___x_1182_ == 0)
{
uint8_t v___x_1183_; 
lean_dec_ref(v___x_1171_);
v___x_1183_ = l_Lean_Expr_isApp(v___x_1180_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1184_; lean_object* v___x_1185_; 
lean_dec_ref(v___x_1180_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v___x_1175_);
lean_dec_ref_known(v_snd_1157_, 3);
v___x_1184_ = lean_box(0);
v___x_1185_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(v___f_1164_, v___x_1184_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1185_;
goto v___jp_1136_;
}
else
{
lean_object* v___x_1186_; lean_object* v___x_1187_; uint8_t v___x_1188_; 
v___x_1186_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1180_);
v___x_1187_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__3));
v___x_1188_ = l_Lean_Expr_isConstOf(v___x_1186_, v___x_1187_);
lean_dec_ref(v___x_1186_);
if (v___x_1188_ == 0)
{
lean_object* v___x_1189_; lean_object* v___x_1190_; 
lean_dec_ref(v___x_1180_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref(v___x_1175_);
lean_dec_ref_known(v_snd_1157_, 3);
v___x_1189_ = lean_box(0);
v___x_1190_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__1(v___f_1164_, v___x_1189_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1190_;
goto v___jp_1136_;
}
else
{
lean_object* v_arg_1191_; lean_object* v_arg_1192_; lean_object* v___x_1196_; 
lean_dec_ref(v___f_1164_);
v_arg_1191_ = lean_ctor_get(v___x_1175_, 1);
lean_inc_ref(v_arg_1191_);
lean_dec_ref(v___x_1175_);
v_arg_1192_ = lean_ctor_get(v___x_1180_, 1);
lean_inc_ref(v_arg_1192_);
lean_dec_ref(v___x_1180_);
v___x_1196_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1123_, v_arg_1192_, v___y_1125_);
lean_dec_ref(v_arg_1192_);
if (lean_obj_tag(v___x_1196_) == 0)
{
lean_object* v_a_1197_; uint8_t v___x_1198_; 
v_a_1197_ = lean_ctor_get(v___x_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v___x_1196_, 1);
v___x_1198_ = lean_unbox(v_a_1197_);
lean_dec(v_a_1197_);
if (v___x_1198_ == 0)
{
lean_object* v___x_1199_; 
v___x_1199_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1123_, v_arg_1191_, v___y_1125_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; uint8_t v___x_1201_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___x_1199_, 1);
v___x_1201_ = lean_unbox(v_a_1200_);
lean_dec(v_a_1200_);
if (v___x_1201_ == 0)
{
lean_object* v___x_1202_; 
lean_inc_ref(v_arg_1191_);
v___x_1202_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild(v_e_1123_, v_arg_1191_, v_arg_1179_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
if (lean_obj_tag(v___x_1202_) == 0)
{
lean_object* v_a_1203_; uint8_t v___x_1207_; 
v_a_1203_ = lean_ctor_get(v___x_1202_, 0);
lean_inc(v_a_1203_);
lean_dec_ref_known(v___x_1202_, 1);
v___x_1207_ = l_Lean_Expr_hasLooseBVars(v_arg_1191_);
lean_dec_ref(v_arg_1191_);
if (v___x_1207_ == 0)
{
uint8_t v___x_1208_; 
v___x_1208_ = lean_unbox(v_a_1203_);
lean_dec(v_a_1203_);
if (v___x_1208_ == 0)
{
lean_inc_ref(v_body_1162_);
lean_dec_ref_known(v_snd_1157_, 3);
goto v___jp_1204_;
}
else
{
lean_object* v___x_1209_; lean_object* v___x_1210_; 
v___x_1209_ = lean_box(0);
v___x_1210_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2(v___x_1188_, v_snd_1157_, v___x_1209_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1210_;
goto v___jp_1136_;
}
}
else
{
lean_inc_ref(v_body_1162_);
lean_dec(v_a_1203_);
lean_dec_ref_known(v_snd_1157_, 3);
goto v___jp_1204_;
}
v___jp_1204_:
{
lean_object* v___x_1205_; lean_object* v___x_1206_; 
v___x_1205_ = lean_box(0);
v___x_1206_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0(v___x_1163_, v_body_1162_, v___x_1205_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1206_;
goto v___jp_1136_;
}
}
else
{
lean_object* v_a_1211_; lean_object* v___x_1213_; uint8_t v_isShared_1214_; uint8_t v_isSharedCheck_1218_; 
lean_dec_ref(v_arg_1191_);
lean_dec_ref_known(v_snd_1157_, 3);
v_a_1211_ = lean_ctor_get(v___x_1202_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v___x_1202_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1213_ = v___x_1202_;
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
else
{
lean_inc(v_a_1211_);
lean_dec(v___x_1202_);
v___x_1213_ = lean_box(0);
v_isShared_1214_ = v_isSharedCheck_1218_;
goto v_resetjp_1212_;
}
v_resetjp_1212_:
{
lean_object* v___x_1216_; 
if (v_isShared_1214_ == 0)
{
v___x_1216_ = v___x_1213_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v_a_1211_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
else
{
lean_dec_ref(v_arg_1191_);
lean_dec_ref(v_arg_1179_);
goto v___jp_1193_;
}
}
else
{
lean_object* v_a_1219_; lean_object* v___x_1221_; uint8_t v_isShared_1222_; uint8_t v_isSharedCheck_1226_; 
lean_dec_ref(v_arg_1191_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref_known(v_snd_1157_, 3);
v_a_1219_ = lean_ctor_get(v___x_1199_, 0);
v_isSharedCheck_1226_ = !lean_is_exclusive(v___x_1199_);
if (v_isSharedCheck_1226_ == 0)
{
v___x_1221_ = v___x_1199_;
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
else
{
lean_inc(v_a_1219_);
lean_dec(v___x_1199_);
v___x_1221_ = lean_box(0);
v_isShared_1222_ = v_isSharedCheck_1226_;
goto v_resetjp_1220_;
}
v_resetjp_1220_:
{
lean_object* v___x_1224_; 
if (v_isShared_1222_ == 0)
{
v___x_1224_ = v___x_1221_;
goto v_reusejp_1223_;
}
else
{
lean_object* v_reuseFailAlloc_1225_; 
v_reuseFailAlloc_1225_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1225_, 0, v_a_1219_);
v___x_1224_ = v_reuseFailAlloc_1225_;
goto v_reusejp_1223_;
}
v_reusejp_1223_:
{
return v___x_1224_;
}
}
}
}
else
{
lean_dec_ref(v_arg_1191_);
lean_dec_ref(v_arg_1179_);
goto v___jp_1193_;
}
}
else
{
lean_object* v_a_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1234_; 
lean_dec_ref(v_arg_1191_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref_known(v_snd_1157_, 3);
v_a_1227_ = lean_ctor_get(v___x_1196_, 0);
v_isSharedCheck_1234_ = !lean_is_exclusive(v___x_1196_);
if (v_isSharedCheck_1234_ == 0)
{
v___x_1229_ = v___x_1196_;
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_a_1227_);
lean_dec(v___x_1196_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1234_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1232_; 
if (v_isShared_1230_ == 0)
{
v___x_1232_ = v___x_1229_;
goto v_reusejp_1231_;
}
else
{
lean_object* v_reuseFailAlloc_1233_; 
v_reuseFailAlloc_1233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1233_, 0, v_a_1227_);
v___x_1232_ = v_reuseFailAlloc_1233_;
goto v_reusejp_1231_;
}
v_reusejp_1231_:
{
return v___x_1232_;
}
}
}
v___jp_1193_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; 
v___x_1194_ = lean_box(0);
v___x_1195_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2(v___x_1188_, v_snd_1157_, v___x_1194_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1195_;
goto v___jp_1136_;
}
}
}
}
else
{
lean_object* v_arg_1235_; lean_object* v___x_1236_; 
lean_dec_ref(v___x_1180_);
lean_dec_ref(v___x_1175_);
lean_dec_ref(v___f_1164_);
v_arg_1235_ = lean_ctor_get(v___x_1171_, 1);
lean_inc_ref(v_arg_1235_);
lean_dec_ref(v___x_1171_);
v___x_1236_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1123_, v_arg_1235_, v___y_1125_);
if (lean_obj_tag(v___x_1236_) == 0)
{
lean_object* v_a_1237_; uint8_t v___x_1238_; 
v_a_1237_ = lean_ctor_get(v___x_1236_, 0);
lean_inc(v_a_1237_);
lean_dec_ref_known(v___x_1236_, 1);
v___x_1238_ = lean_unbox(v_a_1237_);
lean_dec(v_a_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; 
lean_inc_ref(v_arg_1235_);
v___x_1239_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild(v_e_1123_, v_arg_1235_, v_arg_1179_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
if (lean_obj_tag(v___x_1239_) == 0)
{
lean_object* v_a_1240_; uint8_t v___x_1244_; 
v_a_1240_ = lean_ctor_get(v___x_1239_, 0);
lean_inc(v_a_1240_);
lean_dec_ref_known(v___x_1239_, 1);
v___x_1244_ = l_Lean_Expr_hasLooseBVars(v_arg_1235_);
lean_dec_ref(v_arg_1235_);
if (v___x_1244_ == 0)
{
uint8_t v___x_1245_; 
v___x_1245_ = lean_unbox(v_a_1240_);
lean_dec(v_a_1240_);
if (v___x_1245_ == 0)
{
lean_inc_ref(v_body_1162_);
lean_dec_ref_known(v_snd_1157_, 3);
goto v___jp_1241_;
}
else
{
lean_object* v___x_1246_; lean_object* v___x_1247_; 
v___x_1246_ = lean_box(0);
v___x_1247_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2(v___x_1182_, v_snd_1157_, v___x_1246_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1247_;
goto v___jp_1136_;
}
}
else
{
lean_inc_ref(v_body_1162_);
lean_dec(v_a_1240_);
lean_dec_ref_known(v_snd_1157_, 3);
goto v___jp_1241_;
}
v___jp_1241_:
{
lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1242_ = lean_box(0);
v___x_1243_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__0(v___x_1163_, v_body_1162_, v___x_1242_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1243_;
goto v___jp_1136_;
}
}
else
{
lean_object* v_a_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1255_; 
lean_dec_ref(v_arg_1235_);
lean_dec_ref_known(v_snd_1157_, 3);
v_a_1248_ = lean_ctor_get(v___x_1239_, 0);
v_isSharedCheck_1255_ = !lean_is_exclusive(v___x_1239_);
if (v_isSharedCheck_1255_ == 0)
{
v___x_1250_ = v___x_1239_;
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_a_1248_);
lean_dec(v___x_1239_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1255_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v___x_1253_; 
if (v_isShared_1251_ == 0)
{
v___x_1253_ = v___x_1250_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_a_1248_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
}
}
else
{
lean_object* v___x_1256_; lean_object* v___x_1257_; 
lean_dec_ref(v_arg_1235_);
lean_dec_ref(v_arg_1179_);
v___x_1256_ = lean_box(0);
v___x_1257_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___lam__2(v___x_1182_, v_snd_1157_, v___x_1256_, v___y_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_, v___y_1130_, v___y_1131_, v___y_1132_, v___y_1133_, v___y_1134_);
v___y_1137_ = v___x_1257_;
goto v___jp_1136_;
}
}
else
{
lean_object* v_a_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1265_; 
lean_dec_ref(v_arg_1235_);
lean_dec_ref(v_arg_1179_);
lean_dec_ref_known(v_snd_1157_, 3);
v_a_1258_ = lean_ctor_get(v___x_1236_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1236_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1260_ = v___x_1236_;
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_a_1258_);
lean_dec(v___x_1236_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1265_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v___x_1263_; 
if (v_isShared_1261_ == 0)
{
v___x_1263_ = v___x_1260_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v_a_1258_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
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
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec_ref(v___f_1164_);
lean_dec_ref_known(v_snd_1157_, 3);
v_a_1266_ = lean_ctor_get(v___x_1165_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1165_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1165_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1165_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1274_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___closed__4));
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 0, v___x_1274_);
v___x_1276_ = v___x_1159_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1278_; 
v_reuseFailAlloc_1278_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1278_, 0, v___x_1274_);
lean_ctor_set(v_reuseFailAlloc_1278_, 1, v_snd_1157_);
v___x_1276_ = v_reuseFailAlloc_1278_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
lean_object* v___x_1277_; 
v___x_1277_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1277_, 0, v___x_1276_);
return v___x_1277_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg___boxed(lean_object* v_e_1281_, lean_object* v_a_1282_, lean_object* v___y_1283_, lean_object* v___y_1284_, lean_object* v___y_1285_, lean_object* v___y_1286_, lean_object* v___y_1287_, lean_object* v___y_1288_, lean_object* v___y_1289_, lean_object* v___y_1290_, lean_object* v___y_1291_, lean_object* v___y_1292_, lean_object* v___y_1293_){
_start:
{
lean_object* v_res_1294_; 
v_res_1294_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg(v_e_1281_, v_a_1282_, v___y_1283_, v___y_1284_, v___y_1285_, v___y_1286_, v___y_1287_, v___y_1288_, v___y_1289_, v___y_1290_, v___y_1291_, v___y_1292_);
lean_dec(v___y_1292_);
lean_dec_ref(v___y_1291_);
lean_dec(v___y_1290_);
lean_dec_ref(v___y_1289_);
lean_dec(v___y_1288_);
lean_dec_ref(v___y_1287_);
lean_dec(v___y_1286_);
lean_dec_ref(v___y_1285_);
lean_dec(v___y_1284_);
lean_dec(v___y_1283_);
lean_dec_ref(v_e_1281_);
return v_res_1294_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent(lean_object* v_e_1302_, lean_object* v_parent_1303_, lean_object* v_a_1304_, lean_object* v_a_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_){
_start:
{
lean_object* v___x_1319_; 
v___x_1319_ = l_Lean_Meta_instantiateMVarsIfMVarApp___redArg(v_parent_1303_, v_a_1311_);
if (lean_obj_tag(v___x_1319_) == 0)
{
lean_object* v_a_1320_; lean_object* v___x_1321_; uint8_t v___x_1322_; 
v_a_1320_ = lean_ctor_get(v___x_1319_, 0);
lean_inc(v_a_1320_);
lean_dec_ref_known(v___x_1319_, 1);
v___x_1321_ = l_Lean_Expr_cleanupAnnotations(v_a_1320_);
lean_dec(v_a_1320_);
v___x_1322_ = l_Lean_Expr_isApp(v___x_1321_);
if (v___x_1322_ == 0)
{
lean_dec_ref(v___x_1321_);
goto v___jp_1315_;
}
else
{
lean_object* v___x_1323_; lean_object* v___x_1324_; uint8_t v___x_1325_; 
v___x_1323_ = l_Lean_Expr_appFnCleanup___redArg(v___x_1321_);
v___x_1324_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___closed__3));
v___x_1325_ = l_Lean_Expr_isConstOf(v___x_1323_, v___x_1324_);
lean_dec_ref(v___x_1323_);
if (v___x_1325_ == 0)
{
lean_dec_ref(v___x_1321_);
goto v___jp_1315_;
}
else
{
lean_object* v_arg_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v_arg_1326_ = lean_ctor_get(v___x_1321_, 1);
lean_inc_ref(v_arg_1326_);
lean_dec_ref(v___x_1321_);
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1327_);
lean_ctor_set(v___x_1328_, 1, v_arg_1326_);
v___x_1329_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg(v_e_1302_, v___x_1328_, v_a_1304_, v_a_1305_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_);
if (lean_obj_tag(v___x_1329_) == 0)
{
lean_object* v_a_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1344_; 
v_a_1330_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1344_ == 0)
{
v___x_1332_ = v___x_1329_;
v_isShared_1333_ = v_isSharedCheck_1344_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_a_1330_);
lean_dec(v___x_1329_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1344_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v_fst_1334_; 
v_fst_1334_ = lean_ctor_get(v_a_1330_, 0);
lean_inc(v_fst_1334_);
lean_dec(v_a_1330_);
if (lean_obj_tag(v_fst_1334_) == 0)
{
uint8_t v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1338_; 
v___x_1335_ = 0;
v___x_1336_ = lean_box(v___x_1335_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v___x_1336_);
v___x_1338_ = v___x_1332_;
goto v_reusejp_1337_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1336_);
v___x_1338_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1337_;
}
v_reusejp_1337_:
{
return v___x_1338_;
}
}
else
{
lean_object* v_val_1340_; lean_object* v___x_1342_; 
v_val_1340_ = lean_ctor_get(v_fst_1334_, 0);
lean_inc(v_val_1340_);
lean_dec_ref_known(v_fst_1334_, 1);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 0, v_val_1340_);
v___x_1342_ = v___x_1332_;
goto v_reusejp_1341_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v_val_1340_);
v___x_1342_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1341_;
}
v_reusejp_1341_:
{
return v___x_1342_;
}
}
}
}
else
{
lean_object* v_a_1345_; lean_object* v___x_1347_; uint8_t v_isShared_1348_; uint8_t v_isSharedCheck_1352_; 
v_a_1345_ = lean_ctor_get(v___x_1329_, 0);
v_isSharedCheck_1352_ = !lean_is_exclusive(v___x_1329_);
if (v_isSharedCheck_1352_ == 0)
{
v___x_1347_ = v___x_1329_;
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
else
{
lean_inc(v_a_1345_);
lean_dec(v___x_1329_);
v___x_1347_ = lean_box(0);
v_isShared_1348_ = v_isSharedCheck_1352_;
goto v_resetjp_1346_;
}
v_resetjp_1346_:
{
lean_object* v___x_1350_; 
if (v_isShared_1348_ == 0)
{
v___x_1350_ = v___x_1347_;
goto v_reusejp_1349_;
}
else
{
lean_object* v_reuseFailAlloc_1351_; 
v_reuseFailAlloc_1351_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1351_, 0, v_a_1345_);
v___x_1350_ = v_reuseFailAlloc_1351_;
goto v_reusejp_1349_;
}
v_reusejp_1349_:
{
return v___x_1350_;
}
}
}
}
}
}
else
{
lean_object* v_a_1353_; lean_object* v___x_1355_; uint8_t v_isShared_1356_; uint8_t v_isSharedCheck_1360_; 
v_a_1353_ = lean_ctor_get(v___x_1319_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1319_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1355_ = v___x_1319_;
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
else
{
lean_inc(v_a_1353_);
lean_dec(v___x_1319_);
v___x_1355_ = lean_box(0);
v_isShared_1356_ = v_isSharedCheck_1360_;
goto v_resetjp_1354_;
}
v_resetjp_1354_:
{
lean_object* v___x_1358_; 
if (v_isShared_1356_ == 0)
{
v___x_1358_ = v___x_1355_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v_a_1353_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
v___jp_1315_:
{
uint8_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v___x_1316_ = 0;
v___x_1317_ = lean_box(v___x_1316_);
v___x_1318_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1318_, 0, v___x_1317_);
return v___x_1318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent___boxed(lean_object* v_e_1361_, lean_object* v_parent_1362_, lean_object* v_a_1363_, lean_object* v_a_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_, lean_object* v_a_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent(v_e_1361_, v_parent_1362_, v_a_1363_, v_a_1364_, v_a_1365_, v_a_1366_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_, v_a_1371_, v_a_1372_);
lean_dec(v_a_1372_);
lean_dec_ref(v_a_1371_);
lean_dec(v_a_1370_);
lean_dec_ref(v_a_1369_);
lean_dec(v_a_1368_);
lean_dec_ref(v_a_1367_);
lean_dec(v_a_1366_);
lean_dec_ref(v_a_1365_);
lean_dec(v_a_1364_);
lean_dec(v_a_1363_);
lean_dec_ref(v_e_1361_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0(lean_object* v_e_1375_, lean_object* v_inst_1376_, lean_object* v_a_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v___x_1389_; 
v___x_1389_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___redArg(v_e_1375_, v_a_1377_, v___y_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0___boxed(lean_object* v_e_1390_, lean_object* v_inst_1391_, lean_object* v_a_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_, lean_object* v___y_1397_, lean_object* v___y_1398_, lean_object* v___y_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_){
_start:
{
lean_object* v_res_1404_; 
v_res_1404_ = l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent_spec__0(v_e_1390_, v_inst_1391_, v_a_1392_, v___y_1393_, v___y_1394_, v___y_1395_, v___y_1396_, v___y_1397_, v___y_1398_, v___y_1399_, v___y_1400_, v___y_1401_, v___y_1402_);
lean_dec(v___y_1402_);
lean_dec_ref(v___y_1401_);
lean_dec(v___y_1400_);
lean_dec_ref(v___y_1399_);
lean_dec(v___y_1398_);
lean_dec_ref(v___y_1397_);
lean_dec(v___y_1396_);
lean_dec_ref(v___y_1395_);
lean_dec(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v_e_1390_);
return v_res_1404_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(lean_object* v_msg_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_, lean_object* v___y_1409_, lean_object* v___y_1410_, lean_object* v___y_1411_, lean_object* v___y_1412_, lean_object* v___y_1413_, lean_object* v___y_1414_, lean_object* v___y_1415_){
_start:
{
lean_object* v___x_1417_; lean_object* v___x_57571__overap_1418_; lean_object* v___x_1419_; 
v___x_1417_ = lean_obj_once(&l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0, &l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0_once, _init_l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__1___closed__0);
v___x_57571__overap_1418_ = lean_panic_fn_borrowed(v___x_1417_, v_msg_1405_);
lean_inc(v___y_1415_);
lean_inc_ref(v___y_1414_);
lean_inc(v___y_1413_);
lean_inc_ref(v___y_1412_);
lean_inc(v___y_1411_);
lean_inc_ref(v___y_1410_);
lean_inc(v___y_1409_);
lean_inc_ref(v___y_1408_);
lean_inc(v___y_1407_);
lean_inc(v___y_1406_);
v___x_1419_ = lean_apply_11(v___x_57571__overap_1418_, v___y_1406_, v___y_1407_, v___y_1408_, v___y_1409_, v___y_1410_, v___y_1411_, v___y_1412_, v___y_1413_, v___y_1414_, v___y_1415_, lean_box(0));
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0___boxed(lean_object* v_msg_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_, lean_object* v___y_1425_, lean_object* v___y_1426_, lean_object* v___y_1427_, lean_object* v___y_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_){
_start:
{
lean_object* v_res_1432_; 
v_res_1432_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v_msg_1420_, v___y_1421_, v___y_1422_, v___y_1423_, v___y_1424_, v___y_1425_, v___y_1426_, v___y_1427_, v___y_1428_, v___y_1429_, v___y_1430_);
lean_dec(v___y_1430_);
lean_dec_ref(v___y_1429_);
lean_dec(v___y_1428_);
lean_dec_ref(v___y_1427_);
lean_dec(v___y_1426_);
lean_dec_ref(v___y_1425_);
lean_dec(v___y_1424_);
lean_dec_ref(v___y_1423_);
lean_dec(v___y_1422_);
lean_dec(v___y_1421_);
return v_res_1432_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1_spec__1(lean_object* v_msgData_1433_, lean_object* v___y_1434_, lean_object* v___y_1435_, lean_object* v___y_1436_, lean_object* v___y_1437_){
_start:
{
lean_object* v___x_1439_; lean_object* v_env_1440_; uint8_t v___x_1441_; lean_object* v_env_1442_; lean_object* v___x_1443_; lean_object* v_toCold_1444_; lean_object* v_mctx_1445_; lean_object* v_lctx_1446_; lean_object* v_options_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; lean_object* v___x_1450_; 
v___x_1439_ = lean_st_ref_get(v___y_1437_);
v_env_1440_ = lean_ctor_get(v___x_1439_, 0);
lean_inc_ref(v_env_1440_);
lean_dec(v___x_1439_);
v___x_1441_ = 0;
v_env_1442_ = l_Lean_Environment_setRecordingDeps(v_env_1440_, v___x_1441_);
v___x_1443_ = lean_st_ref_get(v___y_1435_);
v_toCold_1444_ = lean_ctor_get(v___y_1436_, 0);
v_mctx_1445_ = lean_ctor_get(v___x_1443_, 0);
lean_inc_ref(v_mctx_1445_);
lean_dec(v___x_1443_);
v_lctx_1446_ = lean_ctor_get(v___y_1434_, 2);
v_options_1447_ = lean_ctor_get(v_toCold_1444_, 2);
lean_inc_ref(v_options_1447_);
lean_inc_ref(v_lctx_1446_);
v___x_1448_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1448_, 0, v_env_1442_);
lean_ctor_set(v___x_1448_, 1, v_mctx_1445_);
lean_ctor_set(v___x_1448_, 2, v_lctx_1446_);
lean_ctor_set(v___x_1448_, 3, v_options_1447_);
v___x_1449_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1448_);
lean_ctor_set(v___x_1449_, 1, v_msgData_1433_);
v___x_1450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1450_, 0, v___x_1449_);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1_spec__1___boxed(lean_object* v_msgData_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_, lean_object* v___y_1455_, lean_object* v___y_1456_){
_start:
{
lean_object* v_res_1457_; 
v_res_1457_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1_spec__1(v_msgData_1451_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
lean_dec(v___y_1455_);
lean_dec_ref(v___y_1454_);
lean_dec(v___y_1453_);
lean_dec_ref(v___y_1452_);
return v_res_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(lean_object* v_msg_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_){
_start:
{
lean_object* v_ref_1464_; lean_object* v___x_1465_; lean_object* v_a_1466_; lean_object* v___x_1468_; uint8_t v_isShared_1469_; uint8_t v_isSharedCheck_1474_; 
v_ref_1464_ = lean_ctor_get(v___y_1461_, 2);
v___x_1465_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1_spec__1(v_msg_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
v_a_1466_ = lean_ctor_get(v___x_1465_, 0);
v_isSharedCheck_1474_ = !lean_is_exclusive(v___x_1465_);
if (v_isSharedCheck_1474_ == 0)
{
v___x_1468_ = v___x_1465_;
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
else
{
lean_inc(v_a_1466_);
lean_dec(v___x_1465_);
v___x_1468_ = lean_box(0);
v_isShared_1469_ = v_isSharedCheck_1474_;
goto v_resetjp_1467_;
}
v_resetjp_1467_:
{
lean_object* v___x_1470_; lean_object* v___x_1472_; 
lean_inc(v_ref_1464_);
v___x_1470_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1470_, 0, v_ref_1464_);
lean_ctor_set(v___x_1470_, 1, v_a_1466_);
if (v_isShared_1469_ == 0)
{
lean_ctor_set_tag(v___x_1468_, 1);
lean_ctor_set(v___x_1468_, 0, v___x_1470_);
v___x_1472_ = v___x_1468_;
goto v_reusejp_1471_;
}
else
{
lean_object* v_reuseFailAlloc_1473_; 
v_reuseFailAlloc_1473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1473_, 0, v___x_1470_);
v___x_1472_ = v_reuseFailAlloc_1473_;
goto v_reusejp_1471_;
}
v_reusejp_1471_:
{
return v___x_1472_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg___boxed(lean_object* v_msg_1475_, lean_object* v___y_1476_, lean_object* v___y_1477_, lean_object* v___y_1478_, lean_object* v___y_1479_, lean_object* v___y_1480_){
_start:
{
lean_object* v_res_1481_; 
v_res_1481_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(v_msg_1475_, v___y_1476_, v___y_1477_, v___y_1478_, v___y_1479_);
lean_dec(v___y_1479_);
lean_dec_ref(v___y_1478_);
lean_dec(v___y_1477_);
lean_dec_ref(v___y_1476_);
return v_res_1481_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__2(void){
_start:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1484_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__1));
v___x_1485_ = lean_unsigned_to_nat(10u);
v___x_1486_ = lean_unsigned_to_nat(126u);
v___x_1487_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__0));
v___x_1488_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_1489_ = l_mkPanicMessageWithDecl(v___x_1488_, v___x_1487_, v___x_1486_, v___x_1485_, v___x_1484_);
return v___x_1489_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4(void){
_start:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; 
v___x_1491_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__3));
v___x_1492_ = l_Lean_stringToMessageData(v___x_1491_);
return v___x_1492_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6(void){
_start:
{
lean_object* v___x_1494_; lean_object* v___x_1495_; 
v___x_1494_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__5));
v___x_1495_ = l_Lean_stringToMessageData(v___x_1494_);
return v___x_1495_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1(lean_object* v_head_1496_, lean_object* v_e_1497_, lean_object* v___f_1498_, lean_object* v___x_1499_, lean_object* v_____r_1500_, uint8_t v_found_1501_, lean_object* v___y_1502_, lean_object* v___y_1503_, lean_object* v___y_1504_, lean_object* v___y_1505_, lean_object* v___y_1506_, lean_object* v___y_1507_, lean_object* v___y_1508_, lean_object* v___y_1509_, lean_object* v___y_1510_, lean_object* v___y_1511_){
_start:
{
if (v_found_1501_ == 0)
{
lean_object* v___x_1513_; lean_object* v___y_1515_; lean_object* v___y_1516_; lean_object* v___y_1517_; lean_object* v___y_1518_; lean_object* v___y_1519_; lean_object* v___y_1520_; lean_object* v___y_1521_; lean_object* v___y_1522_; lean_object* v___y_1523_; lean_object* v___y_1524_; lean_object* v___x_1531_; lean_object* v_a_1532_; uint8_t v___x_1533_; 
v___x_1513_ = l_Lean_Expr_getAppFn(v_head_1496_);
v___x_1531_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1497_, v___x_1513_, v___y_1502_);
v_a_1532_ = lean_ctor_get(v___x_1531_, 0);
lean_inc(v_a_1532_);
lean_dec_ref(v___x_1531_);
v___x_1533_ = lean_unbox(v_a_1532_);
lean_dec(v_a_1532_);
if (v___x_1533_ == 0)
{
lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v_a_1542_; lean_object* v___x_1544_; uint8_t v_isShared_1545_; uint8_t v_isSharedCheck_1549_; 
lean_dec_ref(v___x_1513_);
lean_dec_ref(v___f_1498_);
v___x_1534_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4);
v___x_1535_ = l_Lean_MessageData_ofExpr(v_e_1497_);
v___x_1536_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1536_, 0, v___x_1534_);
lean_ctor_set(v___x_1536_, 1, v___x_1535_);
v___x_1537_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6);
v___x_1538_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1538_, 0, v___x_1536_);
lean_ctor_set(v___x_1538_, 1, v___x_1537_);
v___x_1539_ = l_Lean_MessageData_ofExpr(v_head_1496_);
v___x_1540_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1540_, 0, v___x_1538_);
lean_ctor_set(v___x_1540_, 1, v___x_1539_);
v___x_1541_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(v___x_1540_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_);
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
v_isSharedCheck_1549_ = !lean_is_exclusive(v___x_1541_);
if (v_isSharedCheck_1549_ == 0)
{
v___x_1544_ = v___x_1541_;
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
else
{
lean_inc(v_a_1542_);
lean_dec(v___x_1541_);
v___x_1544_ = lean_box(0);
v_isShared_1545_ = v_isSharedCheck_1549_;
goto v_resetjp_1543_;
}
v_resetjp_1543_:
{
lean_object* v___x_1547_; 
if (v_isShared_1545_ == 0)
{
v___x_1547_ = v___x_1544_;
goto v_reusejp_1546_;
}
else
{
lean_object* v_reuseFailAlloc_1548_; 
v_reuseFailAlloc_1548_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1548_, 0, v_a_1542_);
v___x_1547_ = v_reuseFailAlloc_1548_;
goto v_reusejp_1546_;
}
v_reusejp_1546_:
{
return v___x_1547_;
}
}
}
else
{
lean_dec_ref(v_head_1496_);
v___y_1515_ = v___y_1502_;
v___y_1516_ = v___y_1503_;
v___y_1517_ = v___y_1504_;
v___y_1518_ = v___y_1505_;
v___y_1519_ = v___y_1506_;
v___y_1520_ = v___y_1507_;
v___y_1521_ = v___y_1508_;
v___y_1522_ = v___y_1509_;
v___y_1523_ = v___y_1510_;
v___y_1524_ = v___y_1511_;
goto v___jp_1514_;
}
v___jp_1514_:
{
lean_object* v___x_1525_; lean_object* v_a_1526_; uint8_t v___x_1527_; 
v___x_1525_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1497_, v___x_1513_, v___y_1515_);
lean_dec_ref(v___x_1513_);
lean_dec_ref(v_e_1497_);
v_a_1526_ = lean_ctor_get(v___x_1525_, 0);
lean_inc(v_a_1526_);
lean_dec_ref(v___x_1525_);
v___x_1527_ = lean_unbox(v_a_1526_);
lean_dec(v_a_1526_);
if (v___x_1527_ == 0)
{
lean_object* v___x_1528_; lean_object* v___x_1529_; 
lean_dec_ref(v___f_1498_);
v___x_1528_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__2);
v___x_1529_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_1528_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_);
return v___x_1529_;
}
else
{
lean_object* v___x_1530_; 
lean_inc(v___y_1524_);
lean_inc_ref(v___y_1523_);
lean_inc(v___y_1522_);
lean_inc_ref(v___y_1521_);
lean_inc(v___y_1520_);
lean_inc_ref(v___y_1519_);
lean_inc(v___y_1518_);
lean_inc_ref(v___y_1517_);
lean_inc(v___y_1516_);
lean_inc(v___y_1515_);
v___x_1530_ = lean_apply_12(v___f_1498_, v___x_1499_, v___y_1515_, v___y_1516_, v___y_1517_, v___y_1518_, v___y_1519_, v___y_1520_, v___y_1521_, v___y_1522_, v___y_1523_, v___y_1524_, lean_box(0));
return v___x_1530_;
}
}
}
else
{
lean_object* v___x_1550_; 
lean_dec_ref(v_e_1497_);
lean_dec_ref(v_head_1496_);
lean_inc(v___y_1511_);
lean_inc_ref(v___y_1510_);
lean_inc(v___y_1509_);
lean_inc_ref(v___y_1508_);
lean_inc(v___y_1507_);
lean_inc_ref(v___y_1506_);
lean_inc(v___y_1505_);
lean_inc_ref(v___y_1504_);
lean_inc(v___y_1503_);
lean_inc(v___y_1502_);
v___x_1550_ = lean_apply_12(v___f_1498_, v___x_1499_, v___y_1502_, v___y_1503_, v___y_1504_, v___y_1505_, v___y_1506_, v___y_1507_, v___y_1508_, v___y_1509_, v___y_1510_, v___y_1511_, lean_box(0));
return v___x_1550_;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___boxed(lean_object** _args){
lean_object* v_head_1551_ = _args[0];
lean_object* v_e_1552_ = _args[1];
lean_object* v___f_1553_ = _args[2];
lean_object* v___x_1554_ = _args[3];
lean_object* v_____r_1555_ = _args[4];
lean_object* v_found_1556_ = _args[5];
lean_object* v___y_1557_ = _args[6];
lean_object* v___y_1558_ = _args[7];
lean_object* v___y_1559_ = _args[8];
lean_object* v___y_1560_ = _args[9];
lean_object* v___y_1561_ = _args[10];
lean_object* v___y_1562_ = _args[11];
lean_object* v___y_1563_ = _args[12];
lean_object* v___y_1564_ = _args[13];
lean_object* v___y_1565_ = _args[14];
lean_object* v___y_1566_ = _args[15];
lean_object* v___y_1567_ = _args[16];
_start:
{
uint8_t v_found_boxed_1568_; lean_object* v_res_1569_; 
v_found_boxed_1568_ = lean_unbox(v_found_1556_);
v_res_1569_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1(v_head_1551_, v_e_1552_, v___f_1553_, v___x_1554_, v_____r_1555_, v_found_boxed_1568_, v___y_1557_, v___y_1558_, v___y_1559_, v___y_1560_, v___y_1561_, v___y_1562_, v___y_1563_, v___y_1564_, v___y_1565_, v___y_1566_);
lean_dec(v___y_1566_);
lean_dec_ref(v___y_1565_);
lean_dec(v___y_1564_);
lean_dec_ref(v___y_1563_);
lean_dec(v___y_1562_);
lean_dec_ref(v___y_1561_);
lean_dec(v___y_1560_);
lean_dec_ref(v___y_1559_);
lean_dec(v___y_1558_);
lean_dec(v___y_1557_);
return v_res_1569_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___redArg(lean_object* v_e_1570_, lean_object* v_as_1571_, size_t v_sz_1572_, size_t v_i_1573_, uint8_t v_b_1574_, lean_object* v___y_1575_){
_start:
{
uint8_t v___x_1577_; 
v___x_1577_ = lean_usize_dec_lt(v_i_1573_, v_sz_1572_);
if (v___x_1577_ == 0)
{
lean_object* v___x_1578_; lean_object* v___x_1579_; 
v___x_1578_ = lean_box(v_b_1574_);
v___x_1579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1579_, 0, v___x_1578_);
return v___x_1579_;
}
else
{
lean_object* v_a_1580_; lean_object* v___x_1581_; 
v_a_1580_ = lean_array_uget_borrowed(v_as_1571_, v_i_1573_);
v___x_1581_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1570_, v_a_1580_, v___y_1575_);
if (lean_obj_tag(v___x_1581_) == 0)
{
lean_object* v_a_1582_; uint8_t v___x_1583_; 
v_a_1582_ = lean_ctor_get(v___x_1581_, 0);
v___x_1583_ = lean_unbox(v_a_1582_);
if (v___x_1583_ == 0)
{
size_t v___x_1584_; size_t v___x_1585_; 
lean_dec_ref_known(v___x_1581_, 1);
v___x_1584_ = ((size_t)1ULL);
v___x_1585_ = lean_usize_add(v_i_1573_, v___x_1584_);
v_i_1573_ = v___x_1585_;
goto _start;
}
else
{
return v___x_1581_;
}
}
else
{
return v___x_1581_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___redArg___boxed(lean_object* v_e_1587_, lean_object* v_as_1588_, lean_object* v_sz_1589_, lean_object* v_i_1590_, lean_object* v_b_1591_, lean_object* v___y_1592_, lean_object* v___y_1593_){
_start:
{
size_t v_sz_boxed_1594_; size_t v_i_boxed_1595_; uint8_t v_b_boxed_1596_; lean_object* v_res_1597_; 
v_sz_boxed_1594_ = lean_unbox_usize(v_sz_1589_);
lean_dec(v_sz_1589_);
v_i_boxed_1595_ = lean_unbox_usize(v_i_1590_);
lean_dec(v_i_1590_);
v_b_boxed_1596_ = lean_unbox(v_b_1591_);
v_res_1597_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___redArg(v_e_1587_, v_as_1588_, v_sz_boxed_1594_, v_i_boxed_1595_, v_b_boxed_1596_, v___y_1592_);
lean_dec(v___y_1592_);
lean_dec_ref(v_as_1588_);
lean_dec_ref(v_e_1587_);
return v_res_1597_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0(lean_object* v___x_1598_, lean_object* v_00___1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_){
_start:
{
lean_object* v___x_1611_; lean_object* v___x_1612_; 
v___x_1611_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1598_);
v___x_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1612_, 0, v___x_1611_);
return v___x_1612_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0___boxed(lean_object* v___x_1613_, lean_object* v_00___1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_, lean_object* v___y_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v_res_1626_; 
v_res_1626_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0(v___x_1613_, v_00___1614_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_, v___y_1621_, v___y_1622_, v___y_1623_, v___y_1624_);
lean_dec(v___y_1624_);
lean_dec_ref(v___y_1623_);
lean_dec(v___y_1622_);
lean_dec_ref(v___y_1621_);
lean_dec(v___y_1620_);
lean_dec_ref(v___y_1619_);
lean_dec(v___y_1618_);
lean_dec_ref(v___y_1617_);
lean_dec(v___y_1616_);
lean_dec(v___y_1615_);
return v_res_1626_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1630_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__1));
v___x_1631_ = lean_unsigned_to_nat(8u);
v___x_1632_ = lean_unsigned_to_nat(103u);
v___x_1633_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__0));
v___x_1634_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_1635_ = l_mkPanicMessageWithDecl(v___x_1634_, v___x_1633_, v___x_1632_, v___x_1631_, v___x_1630_);
return v___x_1635_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; 
v___x_1637_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__3));
v___x_1638_ = lean_unsigned_to_nat(52u);
v___x_1639_ = lean_unsigned_to_nat(105u);
v___x_1640_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__0));
v___x_1641_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_1642_ = l_mkPanicMessageWithDecl(v___x_1641_, v___x_1640_, v___x_1639_, v___x_1638_, v___x_1637_);
return v___x_1642_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg(lean_object* v_e_1643_, lean_object* v_as_x27_1644_, lean_object* v_b_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_, lean_object* v___y_1649_, lean_object* v___y_1650_, lean_object* v___y_1651_, lean_object* v___y_1652_, lean_object* v___y_1653_, lean_object* v___y_1654_, lean_object* v___y_1655_){
_start:
{
if (lean_obj_tag(v_as_x27_1644_) == 0)
{
lean_object* v___x_1657_; 
lean_dec_ref(v_e_1643_);
v___x_1657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1657_, 0, v_b_1645_);
return v___x_1657_;
}
else
{
lean_object* v_head_1658_; lean_object* v_tail_1659_; lean_object* v___y_1661_; lean_object* v___x_1681_; lean_object* v___f_1682_; lean_object* v___y_1684_; lean_object* v___y_1685_; lean_object* v___y_1686_; lean_object* v___y_1687_; lean_object* v___y_1688_; lean_object* v___y_1689_; lean_object* v___y_1690_; lean_object* v___y_1691_; lean_object* v___y_1692_; lean_object* v___y_1693_; uint8_t v___y_1711_; lean_object* v___y_1712_; lean_object* v___y_1713_; lean_object* v___y_1714_; lean_object* v___y_1715_; lean_object* v___y_1716_; lean_object* v___y_1717_; lean_object* v___y_1718_; lean_object* v___y_1719_; lean_object* v___y_1720_; lean_object* v___y_1721_; lean_object* v___y_1724_; uint8_t v_found_1725_; lean_object* v___y_1726_; lean_object* v___y_1727_; lean_object* v___y_1728_; lean_object* v___y_1729_; lean_object* v___y_1730_; lean_object* v___y_1731_; lean_object* v___y_1732_; lean_object* v___y_1733_; lean_object* v___y_1734_; lean_object* v___y_1735_; uint8_t v___y_1743_; lean_object* v___y_1744_; lean_object* v___y_1745_; lean_object* v___y_1746_; lean_object* v___y_1747_; lean_object* v___y_1748_; lean_object* v___y_1749_; lean_object* v___y_1750_; lean_object* v___y_1751_; lean_object* v___y_1752_; lean_object* v___y_1753_; lean_object* v___x_1782_; 
v_head_1658_ = lean_ctor_get(v_as_x27_1644_, 0);
v_tail_1659_ = lean_ctor_get(v_as_x27_1644_, 1);
v___x_1681_ = lean_box(0);
v___f_1682_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__0));
lean_inc(v_head_1658_);
v___x_1782_ = l_Lean_Meta_Grind_useFunCC___redArg(v_head_1658_, v___y_1646_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; uint8_t v___x_1860_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
lean_inc(v_a_1783_);
lean_dec_ref_known(v___x_1782_, 1);
v___x_1860_ = l_Lean_Expr_isApp(v_head_1658_);
if (v___x_1860_ == 0)
{
lean_dec(v_a_1783_);
goto v___jp_1784_;
}
else
{
uint8_t v___x_1861_; 
v___x_1861_ = lean_unbox(v_a_1783_);
lean_dec(v_a_1783_);
if (v___x_1861_ == 0)
{
goto v___jp_1784_;
}
else
{
lean_object* v___x_1862_; 
v___x_1862_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0(v___x_1681_, v___x_1681_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
v___y_1661_ = v___x_1862_;
goto v___jp_1660_;
}
}
v___jp_1784_:
{
uint8_t v___x_1785_; 
v___x_1785_ = l_Lean_Meta_Grind_isMatchCond(v_head_1658_);
if (v___x_1785_ == 0)
{
if (lean_obj_tag(v_head_1658_) == 11)
{
lean_object* v_typeName_1786_; 
v_typeName_1786_ = lean_ctor_get(v_head_1658_, 0);
if (lean_obj_tag(v_typeName_1786_) == 1)
{
lean_object* v_pre_1787_; 
v_pre_1787_ = lean_ctor_get(v_typeName_1786_, 0);
if (lean_obj_tag(v_pre_1787_) == 0)
{
lean_object* v_idx_1788_; lean_object* v_struct_1789_; lean_object* v_str_1790_; lean_object* v___x_1791_; uint8_t v___x_1792_; 
v_idx_1788_ = lean_ctor_get(v_head_1658_, 1);
v_struct_1789_ = lean_ctor_get(v_head_1658_, 2);
v_str_1790_ = lean_ctor_get(v_typeName_1786_, 1);
v___x_1791_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___closed__6));
v___x_1792_ = lean_string_dec_eq(v_str_1790_, v___x_1791_);
if (v___x_1792_ == 0)
{
v___y_1743_ = v___x_1785_;
v___y_1744_ = v___y_1646_;
v___y_1745_ = v___y_1647_;
v___y_1746_ = v___y_1648_;
v___y_1747_ = v___y_1649_;
v___y_1748_ = v___y_1650_;
v___y_1749_ = v___y_1651_;
v___y_1750_ = v___y_1652_;
v___y_1751_ = v___y_1653_;
v___y_1752_ = v___y_1654_;
v___y_1753_ = v___y_1655_;
goto v___jp_1742_;
}
else
{
lean_object* v___x_1793_; uint8_t v___x_1794_; 
v___x_1793_ = lean_unsigned_to_nat(0u);
v___x_1794_ = lean_nat_dec_eq(v_idx_1788_, v___x_1793_);
if (v___x_1794_ == 0)
{
v___y_1743_ = v___x_1785_;
v___y_1744_ = v___y_1646_;
v___y_1745_ = v___y_1647_;
v___y_1746_ = v___y_1648_;
v___y_1747_ = v___y_1649_;
v___y_1748_ = v___y_1650_;
v___y_1749_ = v___y_1651_;
v___y_1750_ = v___y_1652_;
v___y_1751_ = v___y_1653_;
v___y_1752_ = v___y_1654_;
v___y_1753_ = v___y_1655_;
goto v___jp_1742_;
}
else
{
lean_object* v___x_1795_; 
lean_inc_ref(v_head_1658_);
v___x_1795_ = l_Lean_Meta_getBoolDecision_x3f(v_head_1658_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
if (lean_obj_tag(v___x_1795_) == 0)
{
lean_object* v_a_1796_; 
v_a_1796_ = lean_ctor_get(v___x_1795_, 0);
lean_inc(v_a_1796_);
lean_dec_ref_known(v___x_1795_, 1);
if (lean_obj_tag(v_a_1796_) == 1)
{
lean_object* v_val_1797_; lean_object* v_fst_1798_; lean_object* v___x_1800_; uint8_t v_isShared_1801_; uint8_t v_isSharedCheck_1828_; 
v_val_1797_ = lean_ctor_get(v_a_1796_, 0);
lean_inc(v_val_1797_);
lean_dec_ref_known(v_a_1796_, 1);
v_fst_1798_ = lean_ctor_get(v_val_1797_, 0);
v_isSharedCheck_1828_ = !lean_is_exclusive(v_val_1797_);
if (v_isSharedCheck_1828_ == 0)
{
lean_object* v_unused_1829_; 
v_unused_1829_ = lean_ctor_get(v_val_1797_, 1);
lean_dec(v_unused_1829_);
v___x_1800_ = v_val_1797_;
v_isShared_1801_ = v_isSharedCheck_1828_;
goto v_resetjp_1799_;
}
else
{
lean_inc(v_fst_1798_);
lean_dec(v_val_1797_);
v___x_1800_ = lean_box(0);
v_isShared_1801_ = v_isSharedCheck_1828_;
goto v_resetjp_1799_;
}
v_resetjp_1799_:
{
lean_object* v___x_1802_; 
v___x_1802_ = l_Lean_Meta_Sym_shareCommon(v_fst_1798_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
if (lean_obj_tag(v___x_1802_) == 0)
{
lean_object* v_a_1803_; lean_object* v___x_1804_; lean_object* v_a_1805_; uint8_t v___x_1806_; 
v_a_1803_ = lean_ctor_get(v___x_1802_, 0);
lean_inc(v_a_1803_);
lean_dec_ref_known(v___x_1802_, 1);
v___x_1804_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1643_, v_struct_1789_, v___y_1646_);
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
lean_inc(v_a_1805_);
lean_dec_ref(v___x_1804_);
v___x_1806_ = lean_unbox(v_a_1805_);
lean_dec(v_a_1805_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; lean_object* v_a_1808_; uint8_t v___x_1809_; 
v___x_1807_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1643_, v_a_1803_, v___y_1646_);
lean_dec(v_a_1803_);
v_a_1808_ = lean_ctor_get(v___x_1807_, 0);
lean_inc(v_a_1808_);
lean_dec_ref(v___x_1807_);
v___x_1809_ = lean_unbox(v_a_1808_);
lean_dec(v_a_1808_);
if (v___x_1809_ == 0)
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1813_; 
v___x_1810_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4);
v___x_1811_ = l_Lean_MessageData_ofExpr(v_e_1643_);
if (v_isShared_1801_ == 0)
{
lean_ctor_set_tag(v___x_1800_, 7);
lean_ctor_set(v___x_1800_, 1, v___x_1811_);
lean_ctor_set(v___x_1800_, 0, v___x_1810_);
v___x_1813_ = v___x_1800_;
goto v_reusejp_1812_;
}
else
{
lean_object* v_reuseFailAlloc_1819_; 
v_reuseFailAlloc_1819_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1819_, 0, v___x_1810_);
lean_ctor_set(v_reuseFailAlloc_1819_, 1, v___x_1811_);
v___x_1813_ = v_reuseFailAlloc_1819_;
goto v_reusejp_1812_;
}
v_reusejp_1812_:
{
lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; 
v___x_1814_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6);
v___x_1815_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1813_);
lean_ctor_set(v___x_1815_, 1, v___x_1814_);
lean_inc_ref(v_head_1658_);
v___x_1816_ = l_Lean_MessageData_ofExpr(v_head_1658_);
v___x_1817_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1817_, 0, v___x_1815_);
lean_ctor_set(v___x_1817_, 1, v___x_1816_);
v___x_1818_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(v___x_1817_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
return v___x_1818_;
}
}
else
{
lean_del_object(v___x_1800_);
goto v___jp_1708_;
}
}
else
{
lean_dec(v_a_1803_);
lean_del_object(v___x_1800_);
goto v___jp_1708_;
}
}
else
{
lean_object* v_a_1820_; lean_object* v___x_1822_; uint8_t v_isShared_1823_; uint8_t v_isSharedCheck_1827_; 
lean_del_object(v___x_1800_);
lean_dec_ref(v_e_1643_);
v_a_1820_ = lean_ctor_get(v___x_1802_, 0);
v_isSharedCheck_1827_ = !lean_is_exclusive(v___x_1802_);
if (v_isSharedCheck_1827_ == 0)
{
v___x_1822_ = v___x_1802_;
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
else
{
lean_inc(v_a_1820_);
lean_dec(v___x_1802_);
v___x_1822_ = lean_box(0);
v_isShared_1823_ = v_isSharedCheck_1827_;
goto v_resetjp_1821_;
}
v_resetjp_1821_:
{
lean_object* v___x_1825_; 
if (v_isShared_1823_ == 0)
{
v___x_1825_ = v___x_1822_;
goto v_reusejp_1824_;
}
else
{
lean_object* v_reuseFailAlloc_1826_; 
v_reuseFailAlloc_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1826_, 0, v_a_1820_);
v___x_1825_ = v_reuseFailAlloc_1826_;
goto v_reusejp_1824_;
}
v_reusejp_1824_:
{
return v___x_1825_;
}
}
}
}
}
else
{
lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_dec(v_a_1796_);
v___x_1830_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__4);
v___x_1831_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4(v___x_1830_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_dec_ref_known(v___x_1831_, 1);
v_as_x27_1644_ = v_tail_1659_;
v_b_1645_ = v___x_1681_;
goto _start;
}
else
{
lean_dec_ref(v_e_1643_);
return v___x_1831_;
}
}
}
else
{
lean_object* v_a_1833_; lean_object* v___x_1835_; uint8_t v_isShared_1836_; uint8_t v_isSharedCheck_1840_; 
lean_dec_ref(v_e_1643_);
v_a_1833_ = lean_ctor_get(v___x_1795_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1795_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1835_ = v___x_1795_;
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
else
{
lean_inc(v_a_1833_);
lean_dec(v___x_1795_);
v___x_1835_ = lean_box(0);
v_isShared_1836_ = v_isSharedCheck_1840_;
goto v_resetjp_1834_;
}
v_resetjp_1834_:
{
lean_object* v___x_1838_; 
if (v_isShared_1836_ == 0)
{
v___x_1838_ = v___x_1835_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1833_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
}
}
}
else
{
v___y_1743_ = v___x_1785_;
v___y_1744_ = v___y_1646_;
v___y_1745_ = v___y_1647_;
v___y_1746_ = v___y_1648_;
v___y_1747_ = v___y_1649_;
v___y_1748_ = v___y_1650_;
v___y_1749_ = v___y_1651_;
v___y_1750_ = v___y_1652_;
v___y_1751_ = v___y_1653_;
v___y_1752_ = v___y_1654_;
v___y_1753_ = v___y_1655_;
goto v___jp_1742_;
}
}
else
{
v___y_1743_ = v___x_1785_;
v___y_1744_ = v___y_1646_;
v___y_1745_ = v___y_1647_;
v___y_1746_ = v___y_1648_;
v___y_1747_ = v___y_1649_;
v___y_1748_ = v___y_1650_;
v___y_1749_ = v___y_1651_;
v___y_1750_ = v___y_1652_;
v___y_1751_ = v___y_1653_;
v___y_1752_ = v___y_1654_;
v___y_1753_ = v___y_1655_;
goto v___jp_1742_;
}
}
else
{
v___y_1743_ = v___x_1785_;
v___y_1744_ = v___y_1646_;
v___y_1745_ = v___y_1647_;
v___y_1746_ = v___y_1648_;
v___y_1747_ = v___y_1649_;
v___y_1748_ = v___y_1650_;
v___y_1749_ = v___y_1651_;
v___y_1750_ = v___y_1652_;
v___y_1751_ = v___y_1653_;
v___y_1752_ = v___y_1654_;
v___y_1753_ = v___y_1655_;
goto v___jp_1742_;
}
}
else
{
lean_object* v___x_1841_; 
lean_inc(v_head_1658_);
v___x_1841_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent(v_e_1643_, v_head_1658_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; uint8_t v___x_1843_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
v___x_1843_ = lean_unbox(v_a_1842_);
lean_dec(v_a_1842_);
if (v___x_1843_ == 0)
{
lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; lean_object* v___x_1851_; 
v___x_1844_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__4);
v___x_1845_ = l_Lean_MessageData_ofExpr(v_e_1643_);
v___x_1846_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1846_, 0, v___x_1844_);
lean_ctor_set(v___x_1846_, 1, v___x_1845_);
v___x_1847_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__6);
v___x_1848_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1848_, 0, v___x_1846_);
lean_ctor_set(v___x_1848_, 1, v___x_1847_);
lean_inc(v_head_1658_);
v___x_1849_ = l_Lean_MessageData_ofExpr(v_head_1658_);
v___x_1850_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1848_);
lean_ctor_set(v___x_1850_, 1, v___x_1849_);
v___x_1851_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(v___x_1850_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
return v___x_1851_;
}
else
{
v___y_1684_ = v___y_1646_;
v___y_1685_ = v___y_1647_;
v___y_1686_ = v___y_1648_;
v___y_1687_ = v___y_1649_;
v___y_1688_ = v___y_1650_;
v___y_1689_ = v___y_1651_;
v___y_1690_ = v___y_1652_;
v___y_1691_ = v___y_1653_;
v___y_1692_ = v___y_1654_;
v___y_1693_ = v___y_1655_;
goto v___jp_1683_;
}
}
else
{
lean_object* v_a_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1859_; 
lean_dec_ref(v_e_1643_);
v_a_1852_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1859_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1859_ == 0)
{
v___x_1854_ = v___x_1841_;
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_a_1852_);
lean_dec(v___x_1841_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1859_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1857_; 
if (v_isShared_1855_ == 0)
{
v___x_1857_ = v___x_1854_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1858_; 
v_reuseFailAlloc_1858_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1858_, 0, v_a_1852_);
v___x_1857_ = v_reuseFailAlloc_1858_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
return v___x_1857_;
}
}
}
}
}
}
else
{
lean_object* v_a_1863_; lean_object* v___x_1865_; uint8_t v_isShared_1866_; uint8_t v_isSharedCheck_1870_; 
lean_dec_ref(v_e_1643_);
v_a_1863_ = lean_ctor_get(v___x_1782_, 0);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1782_);
if (v_isSharedCheck_1870_ == 0)
{
v___x_1865_ = v___x_1782_;
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
else
{
lean_inc(v_a_1863_);
lean_dec(v___x_1782_);
v___x_1865_ = lean_box(0);
v_isShared_1866_ = v_isSharedCheck_1870_;
goto v_resetjp_1864_;
}
v_resetjp_1864_:
{
lean_object* v___x_1868_; 
if (v_isShared_1866_ == 0)
{
v___x_1868_ = v___x_1865_;
goto v_reusejp_1867_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v_a_1863_);
v___x_1868_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1867_;
}
v_reusejp_1867_:
{
return v___x_1868_;
}
}
}
v___jp_1660_:
{
if (lean_obj_tag(v___y_1661_) == 0)
{
lean_object* v_a_1662_; lean_object* v___x_1664_; uint8_t v_isShared_1665_; uint8_t v_isSharedCheck_1672_; 
v_a_1662_ = lean_ctor_get(v___y_1661_, 0);
v_isSharedCheck_1672_ = !lean_is_exclusive(v___y_1661_);
if (v_isSharedCheck_1672_ == 0)
{
v___x_1664_ = v___y_1661_;
v_isShared_1665_ = v_isSharedCheck_1672_;
goto v_resetjp_1663_;
}
else
{
lean_inc(v_a_1662_);
lean_dec(v___y_1661_);
v___x_1664_ = lean_box(0);
v_isShared_1665_ = v_isSharedCheck_1672_;
goto v_resetjp_1663_;
}
v_resetjp_1663_:
{
if (lean_obj_tag(v_a_1662_) == 0)
{
lean_object* v_a_1666_; lean_object* v___x_1668_; 
lean_dec_ref(v_e_1643_);
v_a_1666_ = lean_ctor_get(v_a_1662_, 0);
lean_inc(v_a_1666_);
lean_dec_ref_known(v_a_1662_, 1);
if (v_isShared_1665_ == 0)
{
lean_ctor_set(v___x_1664_, 0, v_a_1666_);
v___x_1668_ = v___x_1664_;
goto v_reusejp_1667_;
}
else
{
lean_object* v_reuseFailAlloc_1669_; 
v_reuseFailAlloc_1669_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1669_, 0, v_a_1666_);
v___x_1668_ = v_reuseFailAlloc_1669_;
goto v_reusejp_1667_;
}
v_reusejp_1667_:
{
return v___x_1668_;
}
}
else
{
lean_object* v_a_1670_; 
lean_del_object(v___x_1664_);
v_a_1670_ = lean_ctor_get(v_a_1662_, 0);
lean_inc(v_a_1670_);
lean_dec_ref_known(v_a_1662_, 1);
v_as_x27_1644_ = v_tail_1659_;
v_b_1645_ = v_a_1670_;
goto _start;
}
}
}
else
{
lean_object* v_a_1673_; lean_object* v___x_1675_; uint8_t v_isShared_1676_; uint8_t v_isSharedCheck_1680_; 
lean_dec_ref(v_e_1643_);
v_a_1673_ = lean_ctor_get(v___y_1661_, 0);
v_isSharedCheck_1680_ = !lean_is_exclusive(v___y_1661_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1675_ = v___y_1661_;
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
else
{
lean_inc(v_a_1673_);
lean_dec(v___y_1661_);
v___x_1675_ = lean_box(0);
v_isShared_1676_ = v_isSharedCheck_1680_;
goto v_resetjp_1674_;
}
v_resetjp_1674_:
{
lean_object* v___x_1678_; 
if (v_isShared_1676_ == 0)
{
v___x_1678_ = v___x_1675_;
goto v_reusejp_1677_;
}
else
{
lean_object* v_reuseFailAlloc_1679_; 
v_reuseFailAlloc_1679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1679_, 0, v_a_1673_);
v___x_1678_ = v_reuseFailAlloc_1679_;
goto v_reusejp_1677_;
}
v_reusejp_1677_:
{
return v___x_1678_;
}
}
}
}
v___jp_1683_:
{
lean_object* v___x_1694_; 
lean_inc(v_head_1658_);
v___x_1694_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondParent(v_e_1643_, v_head_1658_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
if (lean_obj_tag(v___x_1694_) == 0)
{
lean_object* v_a_1695_; uint8_t v___x_1696_; 
v_a_1695_ = lean_ctor_get(v___x_1694_, 0);
lean_inc(v_a_1695_);
lean_dec_ref_known(v___x_1694_, 1);
v___x_1696_ = lean_unbox(v_a_1695_);
lean_dec(v_a_1695_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1698_; 
v___x_1697_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___closed__2);
v___x_1698_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_1697_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
v___y_1661_ = v___x_1698_;
goto v___jp_1660_;
}
else
{
lean_object* v___x_1699_; 
v___x_1699_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0(v___x_1681_, v___x_1681_, v___y_1684_, v___y_1685_, v___y_1686_, v___y_1687_, v___y_1688_, v___y_1689_, v___y_1690_, v___y_1691_, v___y_1692_, v___y_1693_);
v___y_1661_ = v___x_1699_;
goto v___jp_1660_;
}
}
else
{
lean_object* v_a_1700_; lean_object* v___x_1702_; uint8_t v_isShared_1703_; uint8_t v_isSharedCheck_1707_; 
lean_dec_ref(v_e_1643_);
v_a_1700_ = lean_ctor_get(v___x_1694_, 0);
v_isSharedCheck_1707_ = !lean_is_exclusive(v___x_1694_);
if (v_isSharedCheck_1707_ == 0)
{
v___x_1702_ = v___x_1694_;
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
else
{
lean_inc(v_a_1700_);
lean_dec(v___x_1694_);
v___x_1702_ = lean_box(0);
v_isShared_1703_ = v_isSharedCheck_1707_;
goto v_resetjp_1701_;
}
v_resetjp_1701_:
{
lean_object* v___x_1705_; 
if (v_isShared_1703_ == 0)
{
v___x_1705_ = v___x_1702_;
goto v_reusejp_1704_;
}
else
{
lean_object* v_reuseFailAlloc_1706_; 
v_reuseFailAlloc_1706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1706_, 0, v_a_1700_);
v___x_1705_ = v_reuseFailAlloc_1706_;
goto v_reusejp_1704_;
}
v_reusejp_1704_:
{
return v___x_1705_;
}
}
}
}
v___jp_1708_:
{
lean_object* v___x_1709_; 
v___x_1709_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__0(v___x_1681_, v___x_1681_, v___y_1646_, v___y_1647_, v___y_1648_, v___y_1649_, v___y_1650_, v___y_1651_, v___y_1652_, v___y_1653_, v___y_1654_, v___y_1655_);
v___y_1661_ = v___x_1709_;
goto v___jp_1660_;
}
v___jp_1710_:
{
lean_object* v___x_1722_; 
lean_inc_ref(v_e_1643_);
lean_inc(v_head_1658_);
v___x_1722_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1(v_head_1658_, v_e_1643_, v___f_1682_, v___x_1681_, v___x_1681_, v___y_1711_, v___y_1712_, v___y_1713_, v___y_1714_, v___y_1715_, v___y_1716_, v___y_1717_, v___y_1718_, v___y_1719_, v___y_1720_, v___y_1721_);
v___y_1661_ = v___x_1722_;
goto v___jp_1660_;
}
v___jp_1723_:
{
uint8_t v___x_1736_; 
v___x_1736_ = l_Lean_Expr_hasLooseBVars(v___y_1724_);
if (v___x_1736_ == 0)
{
lean_object* v___x_1737_; lean_object* v_a_1738_; uint8_t v___x_1739_; 
v___x_1737_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1643_, v___y_1724_, v___y_1726_);
lean_dec_ref(v___y_1724_);
v_a_1738_ = lean_ctor_get(v___x_1737_, 0);
lean_inc(v_a_1738_);
lean_dec_ref(v___x_1737_);
v___x_1739_ = lean_unbox(v_a_1738_);
if (v___x_1739_ == 0)
{
lean_dec(v_a_1738_);
v___y_1711_ = v_found_1725_;
v___y_1712_ = v___y_1726_;
v___y_1713_ = v___y_1727_;
v___y_1714_ = v___y_1728_;
v___y_1715_ = v___y_1729_;
v___y_1716_ = v___y_1730_;
v___y_1717_ = v___y_1731_;
v___y_1718_ = v___y_1732_;
v___y_1719_ = v___y_1733_;
v___y_1720_ = v___y_1734_;
v___y_1721_ = v___y_1735_;
goto v___jp_1710_;
}
else
{
uint8_t v___x_1740_; lean_object* v___x_1741_; 
v___x_1740_ = lean_unbox(v_a_1738_);
lean_dec(v_a_1738_);
lean_inc_ref(v_e_1643_);
lean_inc(v_head_1658_);
v___x_1741_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1(v_head_1658_, v_e_1643_, v___f_1682_, v___x_1681_, v___x_1681_, v___x_1740_, v___y_1726_, v___y_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_, v___y_1734_, v___y_1735_);
v___y_1661_ = v___x_1741_;
goto v___jp_1660_;
}
}
else
{
lean_dec_ref(v___y_1724_);
v___y_1711_ = v_found_1725_;
v___y_1712_ = v___y_1726_;
v___y_1713_ = v___y_1727_;
v___y_1714_ = v___y_1728_;
v___y_1715_ = v___y_1729_;
v___y_1716_ = v___y_1730_;
v___y_1717_ = v___y_1731_;
v___y_1718_ = v___y_1732_;
v___y_1719_ = v___y_1733_;
v___y_1720_ = v___y_1734_;
v___y_1721_ = v___y_1735_;
goto v___jp_1710_;
}
}
v___jp_1742_:
{
lean_object* v_dummy_1754_; lean_object* v_nargs_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; size_t v_sz_1760_; size_t v___x_1761_; lean_object* v___x_1762_; 
v_dummy_1754_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0, &l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkMatchCondNestedChild___closed__0);
v_nargs_1755_ = l_Lean_Expr_getAppNumArgs(v_head_1658_);
lean_inc(v_nargs_1755_);
v___x_1756_ = lean_mk_array(v_nargs_1755_, v_dummy_1754_);
v___x_1757_ = lean_unsigned_to_nat(1u);
v___x_1758_ = lean_nat_sub(v_nargs_1755_, v___x_1757_);
lean_dec(v_nargs_1755_);
lean_inc(v_head_1658_);
v___x_1759_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_head_1658_, v___x_1756_, v___x_1758_);
v_sz_1760_ = lean_array_size(v___x_1759_);
v___x_1761_ = ((size_t)0ULL);
v___x_1762_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___redArg(v_e_1643_, v___x_1759_, v_sz_1760_, v___x_1761_, v___y_1743_, v___y_1744_);
lean_dec_ref(v___x_1759_);
if (lean_obj_tag(v___x_1762_) == 0)
{
if (lean_obj_tag(v_head_1658_) == 7)
{
lean_object* v_a_1763_; lean_object* v_binderType_1764_; lean_object* v_body_1765_; lean_object* v___x_1766_; lean_object* v_a_1767_; uint8_t v___x_1768_; 
v_a_1763_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1763_);
lean_dec_ref_known(v___x_1762_, 1);
v_binderType_1764_ = lean_ctor_get(v_head_1658_, 1);
v_body_1765_ = lean_ctor_get(v_head_1658_, 2);
v___x_1766_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkChild___redArg(v_e_1643_, v_binderType_1764_, v___y_1744_);
v_a_1767_ = lean_ctor_get(v___x_1766_, 0);
lean_inc(v_a_1767_);
lean_dec_ref(v___x_1766_);
v___x_1768_ = lean_unbox(v_a_1767_);
if (v___x_1768_ == 0)
{
uint8_t v___x_1769_; 
lean_dec(v_a_1767_);
v___x_1769_ = lean_unbox(v_a_1763_);
lean_dec(v_a_1763_);
lean_inc_ref(v_body_1765_);
v___y_1724_ = v_body_1765_;
v_found_1725_ = v___x_1769_;
v___y_1726_ = v___y_1744_;
v___y_1727_ = v___y_1745_;
v___y_1728_ = v___y_1746_;
v___y_1729_ = v___y_1747_;
v___y_1730_ = v___y_1748_;
v___y_1731_ = v___y_1749_;
v___y_1732_ = v___y_1750_;
v___y_1733_ = v___y_1751_;
v___y_1734_ = v___y_1752_;
v___y_1735_ = v___y_1753_;
goto v___jp_1723_;
}
else
{
uint8_t v___x_1770_; 
lean_dec(v_a_1763_);
v___x_1770_ = lean_unbox(v_a_1767_);
lean_dec(v_a_1767_);
lean_inc_ref(v_body_1765_);
v___y_1724_ = v_body_1765_;
v_found_1725_ = v___x_1770_;
v___y_1726_ = v___y_1744_;
v___y_1727_ = v___y_1745_;
v___y_1728_ = v___y_1746_;
v___y_1729_ = v___y_1747_;
v___y_1730_ = v___y_1748_;
v___y_1731_ = v___y_1749_;
v___y_1732_ = v___y_1750_;
v___y_1733_ = v___y_1751_;
v___y_1734_ = v___y_1752_;
v___y_1735_ = v___y_1753_;
goto v___jp_1723_;
}
}
else
{
lean_object* v_a_1771_; uint8_t v___x_1772_; lean_object* v___x_1773_; 
v_a_1771_ = lean_ctor_get(v___x_1762_, 0);
lean_inc(v_a_1771_);
lean_dec_ref_known(v___x_1762_, 1);
v___x_1772_ = lean_unbox(v_a_1771_);
lean_dec(v_a_1771_);
lean_inc_ref(v_e_1643_);
lean_inc(v_head_1658_);
v___x_1773_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1(v_head_1658_, v_e_1643_, v___f_1682_, v___x_1681_, v___x_1681_, v___x_1772_, v___y_1744_, v___y_1745_, v___y_1746_, v___y_1747_, v___y_1748_, v___y_1749_, v___y_1750_, v___y_1751_, v___y_1752_, v___y_1753_);
v___y_1661_ = v___x_1773_;
goto v___jp_1660_;
}
}
else
{
lean_object* v_a_1774_; lean_object* v___x_1776_; uint8_t v_isShared_1777_; uint8_t v_isSharedCheck_1781_; 
lean_dec_ref(v_e_1643_);
v_a_1774_ = lean_ctor_get(v___x_1762_, 0);
v_isSharedCheck_1781_ = !lean_is_exclusive(v___x_1762_);
if (v_isSharedCheck_1781_ == 0)
{
v___x_1776_ = v___x_1762_;
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
else
{
lean_inc(v_a_1774_);
lean_dec(v___x_1762_);
v___x_1776_ = lean_box(0);
v_isShared_1777_ = v_isSharedCheck_1781_;
goto v_resetjp_1775_;
}
v_resetjp_1775_:
{
lean_object* v___x_1779_; 
if (v_isShared_1777_ == 0)
{
v___x_1779_ = v___x_1776_;
goto v_reusejp_1778_;
}
else
{
lean_object* v_reuseFailAlloc_1780_; 
v_reuseFailAlloc_1780_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1780_, 0, v_a_1774_);
v___x_1779_ = v_reuseFailAlloc_1780_;
goto v_reusejp_1778_;
}
v_reusejp_1778_:
{
return v___x_1779_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___boxed(lean_object* v_e_1871_, lean_object* v_as_x27_1872_, lean_object* v_b_1873_, lean_object* v___y_1874_, lean_object* v___y_1875_, lean_object* v___y_1876_, lean_object* v___y_1877_, lean_object* v___y_1878_, lean_object* v___y_1879_, lean_object* v___y_1880_, lean_object* v___y_1881_, lean_object* v___y_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_){
_start:
{
lean_object* v_res_1885_; 
v_res_1885_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg(v_e_1871_, v_as_x27_1872_, v_b_1873_, v___y_1874_, v___y_1875_, v___y_1876_, v___y_1877_, v___y_1878_, v___y_1879_, v___y_1880_, v___y_1881_, v___y_1882_, v___y_1883_);
lean_dec(v___y_1883_);
lean_dec_ref(v___y_1882_);
lean_dec(v___y_1881_);
lean_dec_ref(v___y_1880_);
lean_dec(v___y_1879_);
lean_dec_ref(v___y_1878_);
lean_dec(v___y_1877_);
lean_dec_ref(v___y_1876_);
lean_dec(v___y_1875_);
lean_dec(v___y_1874_);
lean_dec(v_as_x27_1872_);
return v_res_1885_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__1(void){
_start:
{
lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; 
v___x_1887_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__0));
v___x_1888_ = lean_unsigned_to_nat(6u);
v___x_1889_ = lean_unsigned_to_nat(129u);
v___x_1890_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg___lam__1___closed__0));
v___x_1891_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_1892_ = l_mkPanicMessageWithDecl(v___x_1891_, v___x_1890_, v___x_1889_, v___x_1888_, v___x_1887_);
return v___x_1892_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents(lean_object* v_e_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_, lean_object* v_a_1903_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l_Lean_Meta_Grind_isRoot___redArg(v_e_1893_, v_a_1894_);
if (lean_obj_tag(v___x_1905_) == 0)
{
lean_object* v_a_1906_; uint8_t v___x_1907_; 
v_a_1906_ = lean_ctor_get(v___x_1905_, 0);
lean_inc(v_a_1906_);
lean_dec_ref_known(v___x_1905_, 1);
v___x_1907_ = lean_unbox(v_a_1906_);
lean_dec(v_a_1906_);
if (v___x_1907_ == 0)
{
lean_object* v___x_1908_; 
v___x_1908_ = l_Lean_Meta_Grind_getParents___redArg(v_e_1893_, v_a_1894_);
lean_dec_ref(v_e_1893_);
if (lean_obj_tag(v___x_1908_) == 0)
{
lean_object* v_a_1909_; lean_object* v___x_1911_; uint8_t v_isShared_1912_; uint8_t v_isSharedCheck_1920_; 
v_a_1909_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1920_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1911_ = v___x_1908_;
v_isShared_1912_ = v_isSharedCheck_1920_;
goto v_resetjp_1910_;
}
else
{
lean_inc(v_a_1909_);
lean_dec(v___x_1908_);
v___x_1911_ = lean_box(0);
v_isShared_1912_ = v_isSharedCheck_1920_;
goto v_resetjp_1910_;
}
v_resetjp_1910_:
{
uint8_t v___x_1913_; 
v___x_1913_ = l_Lean_Meta_Grind_ParentSet_isEmpty(v_a_1909_);
lean_dec(v_a_1909_);
if (v___x_1913_ == 0)
{
lean_object* v___x_1914_; lean_object* v___x_1915_; 
lean_del_object(v___x_1911_);
v___x_1914_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__1, &l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___closed__1);
v___x_1915_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__4(v___x_1914_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_);
return v___x_1915_;
}
else
{
lean_object* v___x_1916_; lean_object* v___x_1918_; 
v___x_1916_ = lean_box(0);
if (v_isShared_1912_ == 0)
{
lean_ctor_set(v___x_1911_, 0, v___x_1916_);
v___x_1918_ = v___x_1911_;
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
else
{
lean_object* v_a_1921_; lean_object* v___x_1923_; uint8_t v_isShared_1924_; uint8_t v_isSharedCheck_1928_; 
v_a_1921_ = lean_ctor_get(v___x_1908_, 0);
v_isSharedCheck_1928_ = !lean_is_exclusive(v___x_1908_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1923_ = v___x_1908_;
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
else
{
lean_inc(v_a_1921_);
lean_dec(v___x_1908_);
v___x_1923_ = lean_box(0);
v_isShared_1924_ = v_isSharedCheck_1928_;
goto v_resetjp_1922_;
}
v_resetjp_1922_:
{
lean_object* v___x_1926_; 
if (v_isShared_1924_ == 0)
{
v___x_1926_ = v___x_1923_;
goto v_reusejp_1925_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v_a_1921_);
v___x_1926_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1925_;
}
v_reusejp_1925_:
{
return v___x_1926_;
}
}
}
}
else
{
lean_object* v___x_1929_; 
v___x_1929_ = l_Lean_Meta_Grind_getParents___redArg(v_e_1893_, v_a_1894_);
if (lean_obj_tag(v___x_1929_) == 0)
{
lean_object* v_a_1930_; lean_object* v___x_1931_; lean_object* v___x_1932_; lean_object* v___x_1933_; 
v_a_1930_ = lean_ctor_get(v___x_1929_, 0);
lean_inc(v_a_1930_);
lean_dec_ref_known(v___x_1929_, 1);
v___x_1931_ = l_Lean_Meta_Grind_ParentSet_elems(v_a_1930_);
lean_dec(v_a_1930_);
v___x_1932_ = lean_box(0);
v___x_1933_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg(v_e_1893_, v___x_1931_, v___x_1932_, v_a_1894_, v_a_1895_, v_a_1896_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, v_a_1902_, v_a_1903_);
lean_dec(v___x_1931_);
if (lean_obj_tag(v___x_1933_) == 0)
{
lean_object* v___x_1935_; uint8_t v_isShared_1936_; uint8_t v_isSharedCheck_1940_; 
v_isSharedCheck_1940_ = !lean_is_exclusive(v___x_1933_);
if (v_isSharedCheck_1940_ == 0)
{
lean_object* v_unused_1941_; 
v_unused_1941_ = lean_ctor_get(v___x_1933_, 0);
lean_dec(v_unused_1941_);
v___x_1935_ = v___x_1933_;
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
else
{
lean_dec(v___x_1933_);
v___x_1935_ = lean_box(0);
v_isShared_1936_ = v_isSharedCheck_1940_;
goto v_resetjp_1934_;
}
v_resetjp_1934_:
{
lean_object* v___x_1938_; 
if (v_isShared_1936_ == 0)
{
lean_ctor_set(v___x_1935_, 0, v___x_1932_);
v___x_1938_ = v___x_1935_;
goto v_reusejp_1937_;
}
else
{
lean_object* v_reuseFailAlloc_1939_; 
v_reuseFailAlloc_1939_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1939_, 0, v___x_1932_);
v___x_1938_ = v_reuseFailAlloc_1939_;
goto v_reusejp_1937_;
}
v_reusejp_1937_:
{
return v___x_1938_;
}
}
}
else
{
return v___x_1933_;
}
}
else
{
lean_object* v_a_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1949_; 
lean_dec_ref(v_e_1893_);
v_a_1942_ = lean_ctor_get(v___x_1929_, 0);
v_isSharedCheck_1949_ = !lean_is_exclusive(v___x_1929_);
if (v_isSharedCheck_1949_ == 0)
{
v___x_1944_ = v___x_1929_;
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_a_1942_);
lean_dec(v___x_1929_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1949_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1947_; 
if (v_isShared_1945_ == 0)
{
v___x_1947_ = v___x_1944_;
goto v_reusejp_1946_;
}
else
{
lean_object* v_reuseFailAlloc_1948_; 
v_reuseFailAlloc_1948_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1948_, 0, v_a_1942_);
v___x_1947_ = v_reuseFailAlloc_1948_;
goto v_reusejp_1946_;
}
v_reusejp_1946_:
{
return v___x_1947_;
}
}
}
}
}
else
{
lean_object* v_a_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1957_; 
lean_dec_ref(v_e_1893_);
v_a_1950_ = lean_ctor_get(v___x_1905_, 0);
v_isSharedCheck_1957_ = !lean_is_exclusive(v___x_1905_);
if (v_isSharedCheck_1957_ == 0)
{
v___x_1952_ = v___x_1905_;
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_a_1950_);
lean_dec(v___x_1905_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1957_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1956_; 
v_reuseFailAlloc_1956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1956_, 0, v_a_1950_);
v___x_1955_ = v_reuseFailAlloc_1956_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
return v___x_1955_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents___boxed(lean_object* v_e_1958_, lean_object* v_a_1959_, lean_object* v_a_1960_, lean_object* v_a_1961_, lean_object* v_a_1962_, lean_object* v_a_1963_, lean_object* v_a_1964_, lean_object* v_a_1965_, lean_object* v_a_1966_, lean_object* v_a_1967_, lean_object* v_a_1968_, lean_object* v_a_1969_){
_start:
{
lean_object* v_res_1970_; 
v_res_1970_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents(v_e_1958_, v_a_1959_, v_a_1960_, v_a_1961_, v_a_1962_, v_a_1963_, v_a_1964_, v_a_1965_, v_a_1966_, v_a_1967_, v_a_1968_);
lean_dec(v_a_1968_);
lean_dec_ref(v_a_1967_);
lean_dec(v_a_1966_);
lean_dec_ref(v_a_1965_);
lean_dec(v_a_1964_);
lean_dec_ref(v_a_1963_);
lean_dec(v_a_1962_);
lean_dec_ref(v_a_1961_);
lean_dec(v_a_1960_);
lean_dec(v_a_1959_);
return v_res_1970_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1(lean_object* v_00_u03b1_1971_, lean_object* v_msg_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_, lean_object* v___y_1975_, lean_object* v___y_1976_, lean_object* v___y_1977_, lean_object* v___y_1978_, lean_object* v___y_1979_, lean_object* v___y_1980_, lean_object* v___y_1981_, lean_object* v___y_1982_){
_start:
{
lean_object* v___x_1984_; 
v___x_1984_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(v_msg_1972_, v___y_1979_, v___y_1980_, v___y_1981_, v___y_1982_);
return v___x_1984_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___boxed(lean_object* v_00_u03b1_1985_, lean_object* v_msg_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_, lean_object* v___y_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1(v_00_u03b1_1985_, v_msg_1986_, v___y_1987_, v___y_1988_, v___y_1989_, v___y_1990_, v___y_1991_, v___y_1992_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
lean_dec(v___y_1996_);
lean_dec_ref(v___y_1995_);
lean_dec(v___y_1994_);
lean_dec_ref(v___y_1993_);
lean_dec(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec(v___y_1990_);
lean_dec_ref(v___y_1989_);
lean_dec(v___y_1988_);
lean_dec(v___y_1987_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2(lean_object* v_e_1999_, lean_object* v_as_2000_, size_t v_sz_2001_, size_t v_i_2002_, uint8_t v_b_2003_, lean_object* v___y_2004_, lean_object* v___y_2005_, lean_object* v___y_2006_, lean_object* v___y_2007_, lean_object* v___y_2008_, lean_object* v___y_2009_, lean_object* v___y_2010_, lean_object* v___y_2011_, lean_object* v___y_2012_, lean_object* v___y_2013_){
_start:
{
lean_object* v___x_2015_; 
v___x_2015_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___redArg(v_e_1999_, v_as_2000_, v_sz_2001_, v_i_2002_, v_b_2003_, v___y_2004_);
return v___x_2015_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2___boxed(lean_object* v_e_2016_, lean_object* v_as_2017_, lean_object* v_sz_2018_, lean_object* v_i_2019_, lean_object* v_b_2020_, lean_object* v___y_2021_, lean_object* v___y_2022_, lean_object* v___y_2023_, lean_object* v___y_2024_, lean_object* v___y_2025_, lean_object* v___y_2026_, lean_object* v___y_2027_, lean_object* v___y_2028_, lean_object* v___y_2029_, lean_object* v___y_2030_, lean_object* v___y_2031_){
_start:
{
size_t v_sz_boxed_2032_; size_t v_i_boxed_2033_; uint8_t v_b_boxed_2034_; lean_object* v_res_2035_; 
v_sz_boxed_2032_ = lean_unbox_usize(v_sz_2018_);
lean_dec(v_sz_2018_);
v_i_boxed_2033_ = lean_unbox_usize(v_i_2019_);
lean_dec(v_i_2019_);
v_b_boxed_2034_ = lean_unbox(v_b_2020_);
v_res_2035_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__2(v_e_2016_, v_as_2017_, v_sz_boxed_2032_, v_i_boxed_2033_, v_b_boxed_2034_, v___y_2021_, v___y_2022_, v___y_2023_, v___y_2024_, v___y_2025_, v___y_2026_, v___y_2027_, v___y_2028_, v___y_2029_, v___y_2030_);
lean_dec(v___y_2030_);
lean_dec_ref(v___y_2029_);
lean_dec(v___y_2028_);
lean_dec_ref(v___y_2027_);
lean_dec(v___y_2026_);
lean_dec_ref(v___y_2025_);
lean_dec(v___y_2024_);
lean_dec_ref(v___y_2023_);
lean_dec(v___y_2022_);
lean_dec(v___y_2021_);
lean_dec_ref(v_as_2017_);
lean_dec_ref(v_e_2016_);
return v_res_2035_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3(lean_object* v_e_2036_, lean_object* v_as_2037_, lean_object* v_as_x27_2038_, lean_object* v_b_2039_, lean_object* v_a_2040_, lean_object* v___y_2041_, lean_object* v___y_2042_, lean_object* v___y_2043_, lean_object* v___y_2044_, lean_object* v___y_2045_, lean_object* v___y_2046_, lean_object* v___y_2047_, lean_object* v___y_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_){
_start:
{
lean_object* v___x_2052_; 
v___x_2052_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___redArg(v_e_2036_, v_as_x27_2038_, v_b_2039_, v___y_2041_, v___y_2042_, v___y_2043_, v___y_2044_, v___y_2045_, v___y_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
return v___x_2052_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3___boxed(lean_object* v_e_2053_, lean_object* v_as_2054_, lean_object* v_as_x27_2055_, lean_object* v_b_2056_, lean_object* v_a_2057_, lean_object* v___y_2058_, lean_object* v___y_2059_, lean_object* v___y_2060_, lean_object* v___y_2061_, lean_object* v___y_2062_, lean_object* v___y_2063_, lean_object* v___y_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v_res_2069_; 
v_res_2069_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__3(v_e_2053_, v_as_2054_, v_as_x27_2055_, v_b_2056_, v_a_2057_, v___y_2058_, v___y_2059_, v___y_2060_, v___y_2061_, v___y_2062_, v___y_2063_, v___y_2064_, v___y_2065_, v___y_2066_, v___y_2067_);
lean_dec(v___y_2067_);
lean_dec_ref(v___y_2066_);
lean_dec(v___y_2065_);
lean_dec_ref(v___y_2064_);
lean_dec(v___y_2063_);
lean_dec_ref(v___y_2062_);
lean_dec(v___y_2061_);
lean_dec_ref(v___y_2060_);
lean_dec(v___y_2059_);
lean_dec(v___y_2058_);
lean_dec(v_as_x27_2055_);
lean_dec(v_as_2054_);
return v_res_2069_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__2(void){
_start:
{
lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; 
v___x_2072_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__1));
v___x_2073_ = lean_unsigned_to_nat(6u);
v___x_2074_ = lean_unsigned_to_nat(140u);
v___x_2075_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__0));
v___x_2076_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_2077_ = l_mkPanicMessageWithDecl(v___x_2076_, v___x_2075_, v___x_2074_, v___x_2073_, v___x_2072_);
return v___x_2077_;
}
}
static lean_object* _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; 
v___x_2079_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__3));
v___x_2080_ = lean_unsigned_to_nat(6u);
v___x_2081_ = lean_unsigned_to_nat(138u);
v___x_2082_ = ((lean_object*)(l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__0));
v___x_2083_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_2084_ = l_mkPanicMessageWithDecl(v___x_2083_, v___x_2082_, v___x_2081_, v___x_2080_, v___x_2079_);
return v___x_2084_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg(lean_object* v_upperBound_2085_, lean_object* v_a_2086_, lean_object* v___x_2087_, lean_object* v_a_2088_, lean_object* v_b_2089_, lean_object* v___y_2090_, lean_object* v___y_2091_, lean_object* v___y_2092_, lean_object* v___y_2093_, lean_object* v___y_2094_, lean_object* v___y_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
lean_object* v_a_2102_; lean_object* v___y_2107_; uint8_t v___x_2126_; 
v___x_2126_ = lean_nat_dec_lt(v_a_2088_, v_upperBound_2085_);
if (v___x_2126_ == 0)
{
lean_object* v___x_2127_; 
lean_dec(v_a_2088_);
v___x_2127_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2127_, 0, v_b_2089_);
return v___x_2127_;
}
else
{
lean_object* v___x_2128_; lean_object* v___x_2129_; size_t v___x_2130_; size_t v___x_2131_; uint8_t v___x_2132_; 
v___x_2128_ = l_Lean_instInhabitedExpr;
v___x_2129_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2128_, v_a_2086_, v_a_2088_);
v___x_2130_ = lean_ptr_addr(v___x_2087_);
v___x_2131_ = lean_ptr_addr(v___x_2129_);
v___x_2132_ = lean_usize_dec_eq(v___x_2130_, v___x_2131_);
if (v___x_2132_ == 0)
{
uint8_t v___x_2133_; 
v___x_2133_ = lean_expr_equal(v___x_2087_, v___x_2129_);
lean_dec(v___x_2129_);
if (v___x_2133_ == 0)
{
lean_object* v___x_2134_; 
v___x_2134_ = lean_box(0);
v_a_2102_ = v___x_2134_;
goto v___jp_2101_;
}
else
{
lean_object* v___x_2135_; lean_object* v___x_2136_; 
v___x_2135_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__2, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__2_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__2);
v___x_2136_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_2135_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
v___y_2107_ = v___x_2136_;
goto v___jp_2106_;
}
}
else
{
lean_object* v___x_2137_; lean_object* v___x_2138_; 
lean_dec(v___x_2129_);
v___x_2137_ = lean_obj_once(&l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__4, &l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__4_once, _init_l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___closed__4);
v___x_2138_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_2137_, v___y_2090_, v___y_2091_, v___y_2092_, v___y_2093_, v___y_2094_, v___y_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
v___y_2107_ = v___x_2138_;
goto v___jp_2106_;
}
}
v___jp_2101_:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; 
v___x_2103_ = lean_unsigned_to_nat(1u);
v___x_2104_ = lean_nat_add(v_a_2088_, v___x_2103_);
lean_dec(v_a_2088_);
v_a_2088_ = v___x_2104_;
v_b_2089_ = v_a_2102_;
goto _start;
}
v___jp_2106_:
{
if (lean_obj_tag(v___y_2107_) == 0)
{
lean_object* v_a_2108_; lean_object* v___x_2110_; uint8_t v_isShared_2111_; uint8_t v_isSharedCheck_2117_; 
v_a_2108_ = lean_ctor_get(v___y_2107_, 0);
v_isSharedCheck_2117_ = !lean_is_exclusive(v___y_2107_);
if (v_isSharedCheck_2117_ == 0)
{
v___x_2110_ = v___y_2107_;
v_isShared_2111_ = v_isSharedCheck_2117_;
goto v_resetjp_2109_;
}
else
{
lean_inc(v_a_2108_);
lean_dec(v___y_2107_);
v___x_2110_ = lean_box(0);
v_isShared_2111_ = v_isSharedCheck_2117_;
goto v_resetjp_2109_;
}
v_resetjp_2109_:
{
if (lean_obj_tag(v_a_2108_) == 0)
{
lean_object* v_a_2112_; lean_object* v___x_2114_; 
lean_dec(v_a_2088_);
v_a_2112_ = lean_ctor_get(v_a_2108_, 0);
lean_inc(v_a_2112_);
lean_dec_ref_known(v_a_2108_, 1);
if (v_isShared_2111_ == 0)
{
lean_ctor_set(v___x_2110_, 0, v_a_2112_);
v___x_2114_ = v___x_2110_;
goto v_reusejp_2113_;
}
else
{
lean_object* v_reuseFailAlloc_2115_; 
v_reuseFailAlloc_2115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2115_, 0, v_a_2112_);
v___x_2114_ = v_reuseFailAlloc_2115_;
goto v_reusejp_2113_;
}
v_reusejp_2113_:
{
return v___x_2114_;
}
}
else
{
lean_object* v_a_2116_; 
lean_del_object(v___x_2110_);
v_a_2116_ = lean_ctor_get(v_a_2108_, 0);
lean_inc(v_a_2116_);
lean_dec_ref_known(v_a_2108_, 1);
v_a_2102_ = v_a_2116_;
goto v___jp_2101_;
}
}
}
else
{
lean_object* v_a_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2125_; 
lean_dec(v_a_2088_);
v_a_2118_ = lean_ctor_get(v___y_2107_, 0);
v_isSharedCheck_2125_ = !lean_is_exclusive(v___y_2107_);
if (v_isSharedCheck_2125_ == 0)
{
v___x_2120_ = v___y_2107_;
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_a_2118_);
lean_dec(v___y_2107_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2125_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2123_; 
if (v_isShared_2121_ == 0)
{
v___x_2123_ = v___x_2120_;
goto v_reusejp_2122_;
}
else
{
lean_object* v_reuseFailAlloc_2124_; 
v_reuseFailAlloc_2124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2124_, 0, v_a_2118_);
v___x_2123_ = v_reuseFailAlloc_2124_;
goto v_reusejp_2122_;
}
v_reusejp_2122_:
{
return v___x_2123_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg___boxed(lean_object* v_upperBound_2139_, lean_object* v_a_2140_, lean_object* v___x_2141_, lean_object* v_a_2142_, lean_object* v_b_2143_, lean_object* v___y_2144_, lean_object* v___y_2145_, lean_object* v___y_2146_, lean_object* v___y_2147_, lean_object* v___y_2148_, lean_object* v___y_2149_, lean_object* v___y_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_){
_start:
{
lean_object* v_res_2155_; 
v_res_2155_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg(v_upperBound_2139_, v_a_2140_, v___x_2141_, v_a_2142_, v_b_2143_, v___y_2144_, v___y_2145_, v___y_2146_, v___y_2147_, v___y_2148_, v___y_2149_, v___y_2150_, v___y_2151_, v___y_2152_, v___y_2153_);
lean_dec(v___y_2153_);
lean_dec_ref(v___y_2152_);
lean_dec(v___y_2151_);
lean_dec_ref(v___y_2150_);
lean_dec(v___y_2149_);
lean_dec_ref(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec_ref(v___y_2146_);
lean_dec(v___y_2145_);
lean_dec(v___y_2144_);
lean_dec_ref(v___x_2141_);
lean_dec_ref(v_a_2140_);
lean_dec(v_upperBound_2139_);
return v_res_2155_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___redArg(lean_object* v_upperBound_2156_, lean_object* v___x_2157_, lean_object* v_a_2158_, lean_object* v_a_2159_, lean_object* v_b_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_, lean_object* v___y_2163_, lean_object* v___y_2164_, lean_object* v___y_2165_, lean_object* v___y_2166_, lean_object* v___y_2167_, lean_object* v___y_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_){
_start:
{
uint8_t v___x_2172_; 
v___x_2172_ = lean_nat_dec_lt(v_a_2159_, v_upperBound_2156_);
if (v___x_2172_ == 0)
{
lean_object* v___x_2173_; 
lean_dec(v_a_2159_);
v___x_2173_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2173_, 0, v_b_2160_);
return v___x_2173_;
}
else
{
lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___x_2174_ = lean_box(0);
v___x_2175_ = l_Lean_instInhabitedExpr;
v___x_2176_ = lean_unsigned_to_nat(1u);
v___x_2177_ = lean_nat_add(v_a_2159_, v___x_2176_);
v___x_2178_ = l_Lean_PersistentArray_get_x21___redArg(v___x_2175_, v_a_2158_, v_a_2159_);
lean_dec(v_a_2159_);
lean_inc(v___x_2177_);
v___x_2179_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg(v___x_2157_, v_a_2158_, v___x_2178_, v___x_2177_, v___x_2174_, v___y_2161_, v___y_2162_, v___y_2163_, v___y_2164_, v___y_2165_, v___y_2166_, v___y_2167_, v___y_2168_, v___y_2169_, v___y_2170_);
lean_dec(v___x_2178_);
if (lean_obj_tag(v___x_2179_) == 0)
{
lean_dec_ref_known(v___x_2179_, 1);
v_a_2159_ = v___x_2177_;
v_b_2160_ = v___x_2174_;
goto _start;
}
else
{
lean_dec(v___x_2177_);
return v___x_2179_;
}
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___redArg___boxed(lean_object* v_upperBound_2181_, lean_object* v___x_2182_, lean_object* v_a_2183_, lean_object* v_a_2184_, lean_object* v_b_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_, lean_object* v___y_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_){
_start:
{
lean_object* v_res_2197_; 
v_res_2197_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___redArg(v_upperBound_2181_, v___x_2182_, v_a_2183_, v_a_2184_, v_b_2185_, v___y_2186_, v___y_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_, v___y_2192_, v___y_2193_, v___y_2194_, v___y_2195_);
lean_dec(v___y_2195_);
lean_dec_ref(v___y_2194_);
lean_dec(v___y_2193_);
lean_dec_ref(v___y_2192_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
lean_dec(v___y_2187_);
lean_dec(v___y_2186_);
lean_dec_ref(v_a_2183_);
lean_dec(v___x_2182_);
lean_dec(v_upperBound_2181_);
return v_res_2197_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq(lean_object* v_a_2198_, lean_object* v_a_2199_, lean_object* v_a_2200_, lean_object* v_a_2201_, lean_object* v_a_2202_, lean_object* v_a_2203_, lean_object* v_a_2204_, lean_object* v_a_2205_, lean_object* v_a_2206_, lean_object* v_a_2207_){
_start:
{
lean_object* v___x_2209_; 
v___x_2209_ = l_Lean_Meta_Grind_getExprs___redArg(v_a_2198_);
if (lean_obj_tag(v___x_2209_) == 0)
{
lean_object* v_a_2210_; lean_object* v_size_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; 
v_a_2210_ = lean_ctor_get(v___x_2209_, 0);
lean_inc(v_a_2210_);
lean_dec_ref_known(v___x_2209_, 1);
v_size_2211_ = lean_ctor_get(v_a_2210_, 2);
lean_inc(v_size_2211_);
v___x_2212_ = lean_unsigned_to_nat(0u);
v___x_2213_ = lean_box(0);
v___x_2214_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___redArg(v_size_2211_, v_size_2211_, v_a_2210_, v___x_2212_, v___x_2213_, v_a_2198_, v_a_2199_, v_a_2200_, v_a_2201_, v_a_2202_, v_a_2203_, v_a_2204_, v_a_2205_, v_a_2206_, v_a_2207_);
lean_dec(v_a_2210_);
lean_dec(v_size_2211_);
if (lean_obj_tag(v___x_2214_) == 0)
{
lean_object* v___x_2216_; uint8_t v_isShared_2217_; uint8_t v_isSharedCheck_2221_; 
v_isSharedCheck_2221_ = !lean_is_exclusive(v___x_2214_);
if (v_isSharedCheck_2221_ == 0)
{
lean_object* v_unused_2222_; 
v_unused_2222_ = lean_ctor_get(v___x_2214_, 0);
lean_dec(v_unused_2222_);
v___x_2216_ = v___x_2214_;
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
else
{
lean_dec(v___x_2214_);
v___x_2216_ = lean_box(0);
v_isShared_2217_ = v_isSharedCheck_2221_;
goto v_resetjp_2215_;
}
v_resetjp_2215_:
{
lean_object* v___x_2219_; 
if (v_isShared_2217_ == 0)
{
lean_ctor_set(v___x_2216_, 0, v___x_2213_);
v___x_2219_ = v___x_2216_;
goto v_reusejp_2218_;
}
else
{
lean_object* v_reuseFailAlloc_2220_; 
v_reuseFailAlloc_2220_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2220_, 0, v___x_2213_);
v___x_2219_ = v_reuseFailAlloc_2220_;
goto v_reusejp_2218_;
}
v_reusejp_2218_:
{
return v___x_2219_;
}
}
}
else
{
return v___x_2214_;
}
}
else
{
lean_object* v_a_2223_; lean_object* v___x_2225_; uint8_t v_isShared_2226_; uint8_t v_isSharedCheck_2230_; 
v_a_2223_ = lean_ctor_get(v___x_2209_, 0);
v_isSharedCheck_2230_ = !lean_is_exclusive(v___x_2209_);
if (v_isSharedCheck_2230_ == 0)
{
v___x_2225_ = v___x_2209_;
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
else
{
lean_inc(v_a_2223_);
lean_dec(v___x_2209_);
v___x_2225_ = lean_box(0);
v_isShared_2226_ = v_isSharedCheck_2230_;
goto v_resetjp_2224_;
}
v_resetjp_2224_:
{
lean_object* v___x_2228_; 
if (v_isShared_2226_ == 0)
{
v___x_2228_ = v___x_2225_;
goto v_reusejp_2227_;
}
else
{
lean_object* v_reuseFailAlloc_2229_; 
v_reuseFailAlloc_2229_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2229_, 0, v_a_2223_);
v___x_2228_ = v_reuseFailAlloc_2229_;
goto v_reusejp_2227_;
}
v_reusejp_2227_:
{
return v___x_2228_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq___boxed(lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_, lean_object* v_a_2234_, lean_object* v_a_2235_, lean_object* v_a_2236_, lean_object* v_a_2237_, lean_object* v_a_2238_, lean_object* v_a_2239_, lean_object* v_a_2240_, lean_object* v_a_2241_){
_start:
{
lean_object* v_res_2242_; 
v_res_2242_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq(v_a_2231_, v_a_2232_, v_a_2233_, v_a_2234_, v_a_2235_, v_a_2236_, v_a_2237_, v_a_2238_, v_a_2239_, v_a_2240_);
lean_dec(v_a_2240_);
lean_dec_ref(v_a_2239_);
lean_dec(v_a_2238_);
lean_dec_ref(v_a_2237_);
lean_dec(v_a_2236_);
lean_dec_ref(v_a_2235_);
lean_dec(v_a_2234_);
lean_dec_ref(v_a_2233_);
lean_dec(v_a_2232_);
lean_dec(v_a_2231_);
return v_res_2242_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0(lean_object* v_upperBound_2243_, lean_object* v_a_2244_, lean_object* v___x_2245_, lean_object* v_inst_2246_, lean_object* v_R_2247_, lean_object* v_a_2248_, lean_object* v_b_2249_, lean_object* v_c_2250_, lean_object* v___y_2251_, lean_object* v___y_2252_, lean_object* v___y_2253_, lean_object* v___y_2254_, lean_object* v___y_2255_, lean_object* v___y_2256_, lean_object* v___y_2257_, lean_object* v___y_2258_, lean_object* v___y_2259_, lean_object* v___y_2260_){
_start:
{
lean_object* v___x_2262_; 
v___x_2262_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___redArg(v_upperBound_2243_, v_a_2244_, v___x_2245_, v_a_2248_, v_b_2249_, v___y_2251_, v___y_2252_, v___y_2253_, v___y_2254_, v___y_2255_, v___y_2256_, v___y_2257_, v___y_2258_, v___y_2259_, v___y_2260_);
return v___x_2262_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0___boxed(lean_object** _args){
lean_object* v_upperBound_2263_ = _args[0];
lean_object* v_a_2264_ = _args[1];
lean_object* v___x_2265_ = _args[2];
lean_object* v_inst_2266_ = _args[3];
lean_object* v_R_2267_ = _args[4];
lean_object* v_a_2268_ = _args[5];
lean_object* v_b_2269_ = _args[6];
lean_object* v_c_2270_ = _args[7];
lean_object* v___y_2271_ = _args[8];
lean_object* v___y_2272_ = _args[9];
lean_object* v___y_2273_ = _args[10];
lean_object* v___y_2274_ = _args[11];
lean_object* v___y_2275_ = _args[12];
lean_object* v___y_2276_ = _args[13];
lean_object* v___y_2277_ = _args[14];
lean_object* v___y_2278_ = _args[15];
lean_object* v___y_2279_ = _args[16];
lean_object* v___y_2280_ = _args[17];
lean_object* v___y_2281_ = _args[18];
_start:
{
lean_object* v_res_2282_; 
v_res_2282_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__0(v_upperBound_2263_, v_a_2264_, v___x_2265_, v_inst_2266_, v_R_2267_, v_a_2268_, v_b_2269_, v_c_2270_, v___y_2271_, v___y_2272_, v___y_2273_, v___y_2274_, v___y_2275_, v___y_2276_, v___y_2277_, v___y_2278_, v___y_2279_, v___y_2280_);
lean_dec(v___y_2280_);
lean_dec_ref(v___y_2279_);
lean_dec(v___y_2278_);
lean_dec_ref(v___y_2277_);
lean_dec(v___y_2276_);
lean_dec_ref(v___y_2275_);
lean_dec(v___y_2274_);
lean_dec_ref(v___y_2273_);
lean_dec(v___y_2272_);
lean_dec(v___y_2271_);
lean_dec_ref(v___x_2265_);
lean_dec_ref(v_a_2264_);
lean_dec(v_upperBound_2263_);
return v_res_2282_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1(lean_object* v_upperBound_2283_, lean_object* v___x_2284_, lean_object* v_a_2285_, lean_object* v_inst_2286_, lean_object* v_R_2287_, lean_object* v_a_2288_, lean_object* v_b_2289_, lean_object* v_c_2290_, lean_object* v___y_2291_, lean_object* v___y_2292_, lean_object* v___y_2293_, lean_object* v___y_2294_, lean_object* v___y_2295_, lean_object* v___y_2296_, lean_object* v___y_2297_, lean_object* v___y_2298_, lean_object* v___y_2299_, lean_object* v___y_2300_){
_start:
{
lean_object* v___x_2302_; 
v___x_2302_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___redArg(v_upperBound_2283_, v___x_2284_, v_a_2285_, v_a_2288_, v_b_2289_, v___y_2291_, v___y_2292_, v___y_2293_, v___y_2294_, v___y_2295_, v___y_2296_, v___y_2297_, v___y_2298_, v___y_2299_, v___y_2300_);
return v___x_2302_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1___boxed(lean_object** _args){
lean_object* v_upperBound_2303_ = _args[0];
lean_object* v___x_2304_ = _args[1];
lean_object* v_a_2305_ = _args[2];
lean_object* v_inst_2306_ = _args[3];
lean_object* v_R_2307_ = _args[4];
lean_object* v_a_2308_ = _args[5];
lean_object* v_b_2309_ = _args[6];
lean_object* v_c_2310_ = _args[7];
lean_object* v___y_2311_ = _args[8];
lean_object* v___y_2312_ = _args[9];
lean_object* v___y_2313_ = _args[10];
lean_object* v___y_2314_ = _args[11];
lean_object* v___y_2315_ = _args[12];
lean_object* v___y_2316_ = _args[13];
lean_object* v___y_2317_ = _args[14];
lean_object* v___y_2318_ = _args[15];
lean_object* v___y_2319_ = _args[16];
lean_object* v___y_2320_ = _args[17];
lean_object* v___y_2321_ = _args[18];
_start:
{
lean_object* v_res_2322_; 
v_res_2322_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq_spec__1(v_upperBound_2303_, v___x_2304_, v_a_2305_, v_inst_2306_, v_R_2307_, v_a_2308_, v_b_2309_, v_c_2310_, v___y_2311_, v___y_2312_, v___y_2313_, v___y_2314_, v___y_2315_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_, v___y_2320_);
lean_dec(v___y_2320_);
lean_dec_ref(v___y_2319_);
lean_dec(v___y_2318_);
lean_dec_ref(v___y_2317_);
lean_dec(v___y_2316_);
lean_dec_ref(v___y_2315_);
lean_dec(v___y_2314_);
lean_dec_ref(v___y_2313_);
lean_dec(v___y_2312_);
lean_dec(v___y_2311_);
lean_dec_ref(v_a_2305_);
lean_dec(v___x_2304_);
lean_dec(v_upperBound_2303_);
return v_res_2322_;
}
}
static double _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_2323_; double v___x_2324_; 
v___x_2323_ = lean_unsigned_to_nat(0u);
v___x_2324_ = lean_float_of_nat(v___x_2323_);
return v___x_2324_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg(lean_object* v_cls_2328_, lean_object* v_msg_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_, lean_object* v___y_2333_){
_start:
{
lean_object* v_ref_2335_; lean_object* v___x_2336_; lean_object* v_a_2337_; lean_object* v___x_2339_; uint8_t v_isShared_2340_; uint8_t v_isSharedCheck_2382_; 
v_ref_2335_ = lean_ctor_get(v___y_2332_, 2);
v___x_2336_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1_spec__1(v_msg_2329_, v___y_2330_, v___y_2331_, v___y_2332_, v___y_2333_);
v_a_2337_ = lean_ctor_get(v___x_2336_, 0);
v_isSharedCheck_2382_ = !lean_is_exclusive(v___x_2336_);
if (v_isSharedCheck_2382_ == 0)
{
v___x_2339_ = v___x_2336_;
v_isShared_2340_ = v_isSharedCheck_2382_;
goto v_resetjp_2338_;
}
else
{
lean_inc(v_a_2337_);
lean_dec(v___x_2336_);
v___x_2339_ = lean_box(0);
v_isShared_2340_ = v_isSharedCheck_2382_;
goto v_resetjp_2338_;
}
v_resetjp_2338_:
{
lean_object* v___x_2341_; lean_object* v_traceState_2342_; lean_object* v_env_2343_; lean_object* v_nextMacroScope_2344_; lean_object* v_ngen_2345_; lean_object* v_auxDeclNGen_2346_; lean_object* v_cache_2347_; lean_object* v_recordedDeps_2348_; lean_object* v_messages_2349_; lean_object* v_infoState_2350_; lean_object* v_snapshotTasks_2351_; lean_object* v___x_2353_; uint8_t v_isShared_2354_; uint8_t v_isSharedCheck_2381_; 
v___x_2341_ = lean_st_ref_take(v___y_2333_);
v_traceState_2342_ = lean_ctor_get(v___x_2341_, 4);
v_env_2343_ = lean_ctor_get(v___x_2341_, 0);
v_nextMacroScope_2344_ = lean_ctor_get(v___x_2341_, 1);
v_ngen_2345_ = lean_ctor_get(v___x_2341_, 2);
v_auxDeclNGen_2346_ = lean_ctor_get(v___x_2341_, 3);
v_cache_2347_ = lean_ctor_get(v___x_2341_, 5);
v_recordedDeps_2348_ = lean_ctor_get(v___x_2341_, 6);
v_messages_2349_ = lean_ctor_get(v___x_2341_, 7);
v_infoState_2350_ = lean_ctor_get(v___x_2341_, 8);
v_snapshotTasks_2351_ = lean_ctor_get(v___x_2341_, 9);
v_isSharedCheck_2381_ = !lean_is_exclusive(v___x_2341_);
if (v_isSharedCheck_2381_ == 0)
{
v___x_2353_ = v___x_2341_;
v_isShared_2354_ = v_isSharedCheck_2381_;
goto v_resetjp_2352_;
}
else
{
lean_inc(v_snapshotTasks_2351_);
lean_inc(v_infoState_2350_);
lean_inc(v_messages_2349_);
lean_inc(v_recordedDeps_2348_);
lean_inc(v_cache_2347_);
lean_inc(v_traceState_2342_);
lean_inc(v_auxDeclNGen_2346_);
lean_inc(v_ngen_2345_);
lean_inc(v_nextMacroScope_2344_);
lean_inc(v_env_2343_);
lean_dec(v___x_2341_);
v___x_2353_ = lean_box(0);
v_isShared_2354_ = v_isSharedCheck_2381_;
goto v_resetjp_2352_;
}
v_resetjp_2352_:
{
uint64_t v_tid_2355_; lean_object* v_traces_2356_; lean_object* v___x_2358_; uint8_t v_isShared_2359_; uint8_t v_isSharedCheck_2380_; 
v_tid_2355_ = lean_ctor_get_uint64(v_traceState_2342_, sizeof(void*)*1);
v_traces_2356_ = lean_ctor_get(v_traceState_2342_, 0);
v_isSharedCheck_2380_ = !lean_is_exclusive(v_traceState_2342_);
if (v_isSharedCheck_2380_ == 0)
{
v___x_2358_ = v_traceState_2342_;
v_isShared_2359_ = v_isSharedCheck_2380_;
goto v_resetjp_2357_;
}
else
{
lean_inc(v_traces_2356_);
lean_dec(v_traceState_2342_);
v___x_2358_ = lean_box(0);
v_isShared_2359_ = v_isSharedCheck_2380_;
goto v_resetjp_2357_;
}
v_resetjp_2357_:
{
lean_object* v___x_2360_; lean_object* v___x_2361_; double v___x_2362_; uint8_t v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v___x_2368_; lean_object* v___x_2369_; lean_object* v___x_2371_; 
v___x_2360_ = lean_box(0);
v___x_2361_ = lean_box(0);
v___x_2362_ = lean_float_once(&l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__0, &l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__0_once, _init_l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__0);
v___x_2363_ = 0;
v___x_2364_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__1));
v___x_2365_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2365_, 0, v_cls_2328_);
lean_ctor_set(v___x_2365_, 1, v___x_2361_);
lean_ctor_set(v___x_2365_, 2, v___x_2364_);
lean_ctor_set_float(v___x_2365_, sizeof(void*)*3, v___x_2362_);
lean_ctor_set_float(v___x_2365_, sizeof(void*)*3 + 8, v___x_2362_);
lean_ctor_set_uint8(v___x_2365_, sizeof(void*)*3 + 16, v___x_2363_);
v___x_2366_ = ((lean_object*)(l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___closed__2));
v___x_2367_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2367_, 0, v___x_2365_);
lean_ctor_set(v___x_2367_, 1, v_a_2337_);
lean_ctor_set(v___x_2367_, 2, v___x_2366_);
lean_inc(v_ref_2335_);
v___x_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2368_, 0, v_ref_2335_);
lean_ctor_set(v___x_2368_, 1, v___x_2367_);
v___x_2369_ = l_Lean_PersistentArray_push___redArg(v_traces_2356_, v___x_2368_);
if (v_isShared_2359_ == 0)
{
lean_ctor_set(v___x_2358_, 0, v___x_2369_);
v___x_2371_ = v___x_2358_;
goto v_reusejp_2370_;
}
else
{
lean_object* v_reuseFailAlloc_2379_; 
v_reuseFailAlloc_2379_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2379_, 0, v___x_2369_);
lean_ctor_set_uint64(v_reuseFailAlloc_2379_, sizeof(void*)*1, v_tid_2355_);
v___x_2371_ = v_reuseFailAlloc_2379_;
goto v_reusejp_2370_;
}
v_reusejp_2370_:
{
lean_object* v___x_2373_; 
if (v_isShared_2354_ == 0)
{
lean_ctor_set(v___x_2353_, 4, v___x_2371_);
v___x_2373_ = v___x_2353_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2378_; 
v_reuseFailAlloc_2378_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2378_, 0, v_env_2343_);
lean_ctor_set(v_reuseFailAlloc_2378_, 1, v_nextMacroScope_2344_);
lean_ctor_set(v_reuseFailAlloc_2378_, 2, v_ngen_2345_);
lean_ctor_set(v_reuseFailAlloc_2378_, 3, v_auxDeclNGen_2346_);
lean_ctor_set(v_reuseFailAlloc_2378_, 4, v___x_2371_);
lean_ctor_set(v_reuseFailAlloc_2378_, 5, v_cache_2347_);
lean_ctor_set(v_reuseFailAlloc_2378_, 6, v_recordedDeps_2348_);
lean_ctor_set(v_reuseFailAlloc_2378_, 7, v_messages_2349_);
lean_ctor_set(v_reuseFailAlloc_2378_, 8, v_infoState_2350_);
lean_ctor_set(v_reuseFailAlloc_2378_, 9, v_snapshotTasks_2351_);
v___x_2373_ = v_reuseFailAlloc_2378_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
lean_object* v___x_2374_; lean_object* v___x_2376_; 
v___x_2374_ = lean_st_ref_put(v___y_2333_, v___x_2373_);
if (v_isShared_2340_ == 0)
{
lean_ctor_set(v___x_2339_, 0, v___x_2360_);
v___x_2376_ = v___x_2339_;
goto v_reusejp_2375_;
}
else
{
lean_object* v_reuseFailAlloc_2377_; 
v_reuseFailAlloc_2377_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2377_, 0, v___x_2360_);
v___x_2376_ = v_reuseFailAlloc_2377_;
goto v_reusejp_2375_;
}
v_reusejp_2375_:
{
return v___x_2376_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg___boxed(lean_object* v_cls_2383_, lean_object* v_msg_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_){
_start:
{
lean_object* v_res_2390_; 
v_res_2390_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg(v_cls_2383_, v_msg_2384_, v___y_2385_, v___y_2386_, v___y_2387_, v___y_2388_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2387_);
lean_dec(v___y_2386_);
lean_dec_ref(v___y_2385_);
return v_res_2390_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6(void){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; lean_object* v___x_2403_; 
v___x_2401_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3));
v___x_2402_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__5));
v___x_2403_ = l_Lean_Name_append(v___x_2402_, v___x_2401_);
return v___x_2403_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__8(void){
_start:
{
lean_object* v___x_2405_; lean_object* v___x_2406_; 
v___x_2405_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__7));
v___x_2406_ = l_Lean_stringToMessageData(v___x_2405_);
return v___x_2406_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__10(void){
_start:
{
lean_object* v___x_2408_; lean_object* v___x_2409_; 
v___x_2408_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__9));
v___x_2409_ = l_Lean_stringToMessageData(v___x_2408_);
return v___x_2409_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg(lean_object* v_a_2410_, lean_object* v_as_x27_2411_, lean_object* v_b_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_, lean_object* v___y_2421_, lean_object* v___y_2422_){
_start:
{
if (lean_obj_tag(v_as_x27_2411_) == 0)
{
lean_object* v___x_2424_; 
lean_dec_ref(v_a_2410_);
v___x_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2424_, 0, v_b_2412_);
return v___x_2424_;
}
else
{
lean_object* v_head_2425_; lean_object* v_tail_2426_; lean_object* v___x_2427_; size_t v___x_2428_; size_t v___x_2429_; uint8_t v___x_2430_; 
v_head_2425_ = lean_ctor_get(v_as_x27_2411_, 0);
v_tail_2426_ = lean_ctor_get(v_as_x27_2411_, 1);
v___x_2427_ = lean_box(0);
v___x_2428_ = lean_ptr_addr(v_a_2410_);
v___x_2429_ = lean_ptr_addr(v_head_2425_);
v___x_2430_ = lean_usize_dec_eq(v___x_2428_, v___x_2429_);
if (v___x_2430_ == 0)
{
lean_object* v___x_2431_; 
lean_inc(v_head_2425_);
lean_inc_ref(v_a_2410_);
v___x_2431_ = l_Lean_Meta_Grind_mkEqHEqProof(v_a_2410_, v_head_2425_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2431_) == 0)
{
lean_object* v_toCold_2432_; lean_object* v_options_2433_; lean_object* v_a_2434_; lean_object* v_inheritedTraceOptions_2435_; uint8_t v_hasTrace_2436_; lean_object* v___x_2437_; lean_object* v___y_2439_; lean_object* v___y_2440_; lean_object* v___y_2441_; lean_object* v___y_2442_; lean_object* v___y_2443_; lean_object* v___y_2444_; lean_object* v___y_2445_; lean_object* v___y_2446_; lean_object* v___y_2447_; lean_object* v___y_2448_; 
v_toCold_2432_ = lean_ctor_get(v___y_2421_, 0);
v_options_2433_ = lean_ctor_get(v_toCold_2432_, 2);
v_a_2434_ = lean_ctor_get(v___x_2431_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2431_, 1);
v_inheritedTraceOptions_2435_ = lean_ctor_get(v_toCold_2432_, 11);
v_hasTrace_2436_ = lean_ctor_get_uint8(v_options_2433_, sizeof(void*)*1);
v___x_2437_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__3));
if (v_hasTrace_2436_ == 0)
{
v___y_2439_ = v___y_2413_;
v___y_2440_ = v___y_2414_;
v___y_2441_ = v___y_2415_;
v___y_2442_ = v___y_2416_;
v___y_2443_ = v___y_2417_;
v___y_2444_ = v___y_2418_;
v___y_2445_ = v___y_2419_;
v___y_2446_ = v___y_2420_;
v___y_2447_ = v___y_2421_;
v___y_2448_ = v___y_2422_;
goto v___jp_2438_;
}
else
{
lean_object* v___x_2475_; uint8_t v___x_2476_; 
v___x_2475_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6);
v___x_2476_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2435_, v_options_2433_, v___x_2475_);
if (v___x_2476_ == 0)
{
v___y_2439_ = v___y_2413_;
v___y_2440_ = v___y_2414_;
v___y_2441_ = v___y_2415_;
v___y_2442_ = v___y_2416_;
v___y_2443_ = v___y_2417_;
v___y_2444_ = v___y_2418_;
v___y_2445_ = v___y_2419_;
v___y_2446_ = v___y_2420_;
v___y_2447_ = v___y_2421_;
v___y_2448_ = v___y_2422_;
goto v___jp_2438_;
}
else
{
lean_object* v___x_2477_; 
v___x_2477_ = l_Lean_Meta_Grind_updateLastTag(v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2477_) == 0)
{
lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; 
lean_dec_ref_known(v___x_2477_, 1);
lean_inc_ref(v_a_2410_);
v___x_2478_ = l_Lean_MessageData_ofExpr(v_a_2410_);
v___x_2479_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__10, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__10_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__10);
v___x_2480_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2480_, 0, v___x_2478_);
lean_ctor_set(v___x_2480_, 1, v___x_2479_);
lean_inc(v_head_2425_);
v___x_2481_ = l_Lean_MessageData_ofExpr(v_head_2425_);
v___x_2482_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2482_, 0, v___x_2480_);
lean_ctor_set(v___x_2482_, 1, v___x_2481_);
v___x_2483_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg(v___x_2437_, v___x_2482_, v___y_2419_, v___y_2420_, v___y_2421_, v___y_2422_);
if (lean_obj_tag(v___x_2483_) == 0)
{
lean_dec_ref_known(v___x_2483_, 1);
v___y_2439_ = v___y_2413_;
v___y_2440_ = v___y_2414_;
v___y_2441_ = v___y_2415_;
v___y_2442_ = v___y_2416_;
v___y_2443_ = v___y_2417_;
v___y_2444_ = v___y_2418_;
v___y_2445_ = v___y_2419_;
v___y_2446_ = v___y_2420_;
v___y_2447_ = v___y_2421_;
v___y_2448_ = v___y_2422_;
goto v___jp_2438_;
}
else
{
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2410_);
return v___x_2483_;
}
}
else
{
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2410_);
return v___x_2477_;
}
}
}
v___jp_2438_:
{
uint8_t v___x_2449_; lean_object* v___x_2450_; 
v___x_2449_ = 0;
lean_inc(v_a_2434_);
v___x_2450_ = l_Lean_Meta_check(v_a_2434_, v___x_2449_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
if (lean_obj_tag(v___x_2450_) == 0)
{
lean_object* v_toCold_2451_; lean_object* v_options_2452_; uint8_t v_hasTrace_2453_; 
lean_dec_ref_known(v___x_2450_, 1);
v_toCold_2451_ = lean_ctor_get(v___y_2447_, 0);
v_options_2452_ = lean_ctor_get(v_toCold_2451_, 2);
v_hasTrace_2453_ = lean_ctor_get_uint8(v_options_2452_, sizeof(void*)*1);
if (v_hasTrace_2453_ == 0)
{
lean_dec(v_a_2434_);
v_as_x27_2411_ = v_tail_2426_;
v_b_2412_ = v___x_2427_;
goto _start;
}
else
{
lean_object* v_inheritedTraceOptions_2455_; lean_object* v___x_2456_; uint8_t v___x_2457_; 
v_inheritedTraceOptions_2455_ = lean_ctor_get(v_toCold_2451_, 11);
v___x_2456_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__6);
v___x_2457_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2455_, v_options_2452_, v___x_2456_);
if (v___x_2457_ == 0)
{
lean_dec(v_a_2434_);
v_as_x27_2411_ = v_tail_2426_;
v_b_2412_ = v___x_2427_;
goto _start;
}
else
{
lean_object* v___x_2459_; 
v___x_2459_ = l_Lean_Meta_Grind_updateLastTag(v___y_2439_, v___y_2440_, v___y_2441_, v___y_2442_, v___y_2443_, v___y_2444_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
if (lean_obj_tag(v___x_2459_) == 0)
{
lean_object* v___x_2460_; 
lean_dec_ref_known(v___x_2459_, 1);
lean_inc(v___y_2448_);
lean_inc_ref(v___y_2447_);
lean_inc(v___y_2446_);
lean_inc_ref(v___y_2445_);
v___x_2460_ = lean_infer_type(v_a_2434_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
if (lean_obj_tag(v___x_2460_) == 0)
{
lean_object* v_a_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; 
v_a_2461_ = lean_ctor_get(v___x_2460_, 0);
lean_inc(v_a_2461_);
lean_dec_ref_known(v___x_2460_, 1);
v___x_2462_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__8, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__8_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___closed__8);
v___x_2463_ = l_Lean_MessageData_ofExpr(v_a_2461_);
v___x_2464_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2464_, 0, v___x_2462_);
lean_ctor_set(v___x_2464_, 1, v___x_2463_);
v___x_2465_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg(v___x_2437_, v___x_2464_, v___y_2445_, v___y_2446_, v___y_2447_, v___y_2448_);
if (lean_obj_tag(v___x_2465_) == 0)
{
lean_dec_ref_known(v___x_2465_, 1);
v_as_x27_2411_ = v_tail_2426_;
v_b_2412_ = v___x_2427_;
goto _start;
}
else
{
lean_dec_ref(v_a_2410_);
return v___x_2465_;
}
}
else
{
lean_object* v_a_2467_; lean_object* v___x_2469_; uint8_t v_isShared_2470_; uint8_t v_isSharedCheck_2474_; 
lean_dec_ref(v_a_2410_);
v_a_2467_ = lean_ctor_get(v___x_2460_, 0);
v_isSharedCheck_2474_ = !lean_is_exclusive(v___x_2460_);
if (v_isSharedCheck_2474_ == 0)
{
v___x_2469_ = v___x_2460_;
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
else
{
lean_inc(v_a_2467_);
lean_dec(v___x_2460_);
v___x_2469_ = lean_box(0);
v_isShared_2470_ = v_isSharedCheck_2474_;
goto v_resetjp_2468_;
}
v_resetjp_2468_:
{
lean_object* v___x_2472_; 
if (v_isShared_2470_ == 0)
{
v___x_2472_ = v___x_2469_;
goto v_reusejp_2471_;
}
else
{
lean_object* v_reuseFailAlloc_2473_; 
v_reuseFailAlloc_2473_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2473_, 0, v_a_2467_);
v___x_2472_ = v_reuseFailAlloc_2473_;
goto v_reusejp_2471_;
}
v_reusejp_2471_:
{
return v___x_2472_;
}
}
}
}
else
{
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2410_);
return v___x_2459_;
}
}
}
}
else
{
lean_dec(v_a_2434_);
lean_dec_ref(v_a_2410_);
return v___x_2450_;
}
}
}
else
{
lean_object* v_a_2484_; lean_object* v___x_2486_; uint8_t v_isShared_2487_; uint8_t v_isSharedCheck_2491_; 
lean_dec_ref(v_a_2410_);
v_a_2484_ = lean_ctor_get(v___x_2431_, 0);
v_isSharedCheck_2491_ = !lean_is_exclusive(v___x_2431_);
if (v_isSharedCheck_2491_ == 0)
{
v___x_2486_ = v___x_2431_;
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
else
{
lean_inc(v_a_2484_);
lean_dec(v___x_2431_);
v___x_2486_ = lean_box(0);
v_isShared_2487_ = v_isSharedCheck_2491_;
goto v_resetjp_2485_;
}
v_resetjp_2485_:
{
lean_object* v___x_2489_; 
if (v_isShared_2487_ == 0)
{
v___x_2489_ = v___x_2486_;
goto v_reusejp_2488_;
}
else
{
lean_object* v_reuseFailAlloc_2490_; 
v_reuseFailAlloc_2490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2490_, 0, v_a_2484_);
v___x_2489_ = v_reuseFailAlloc_2490_;
goto v_reusejp_2488_;
}
v_reusejp_2488_:
{
return v___x_2489_;
}
}
}
}
else
{
v_as_x27_2411_ = v_tail_2426_;
v_b_2412_ = v___x_2427_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg___boxed(lean_object* v_a_2493_, lean_object* v_as_x27_2494_, lean_object* v_b_2495_, lean_object* v___y_2496_, lean_object* v___y_2497_, lean_object* v___y_2498_, lean_object* v___y_2499_, lean_object* v___y_2500_, lean_object* v___y_2501_, lean_object* v___y_2502_, lean_object* v___y_2503_, lean_object* v___y_2504_, lean_object* v___y_2505_, lean_object* v___y_2506_){
_start:
{
lean_object* v_res_2507_; 
v_res_2507_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg(v_a_2493_, v_as_x27_2494_, v_b_2495_, v___y_2496_, v___y_2497_, v___y_2498_, v___y_2499_, v___y_2500_, v___y_2501_, v___y_2502_, v___y_2503_, v___y_2504_, v___y_2505_);
lean_dec(v___y_2505_);
lean_dec_ref(v___y_2504_);
lean_dec(v___y_2503_);
lean_dec_ref(v___y_2502_);
lean_dec(v___y_2501_);
lean_dec_ref(v___y_2500_);
lean_dec(v___y_2499_);
lean_dec_ref(v___y_2498_);
lean_dec(v___y_2497_);
lean_dec(v___y_2496_);
lean_dec(v_as_x27_2494_);
return v_res_2507_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___redArg(lean_object* v_a_2508_, lean_object* v_as_x27_2509_, lean_object* v_b_2510_, lean_object* v___y_2511_, lean_object* v___y_2512_, lean_object* v___y_2513_, lean_object* v___y_2514_, lean_object* v___y_2515_, lean_object* v___y_2516_, lean_object* v___y_2517_, lean_object* v___y_2518_, lean_object* v___y_2519_, lean_object* v___y_2520_){
_start:
{
if (lean_obj_tag(v_as_x27_2509_) == 0)
{
lean_object* v___x_2522_; 
v___x_2522_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2522_, 0, v_b_2510_);
return v___x_2522_;
}
else
{
lean_object* v_head_2523_; lean_object* v_tail_2524_; lean_object* v___x_2525_; lean_object* v___x_2526_; 
v_head_2523_ = lean_ctor_get(v_as_x27_2509_, 0);
v_tail_2524_ = lean_ctor_get(v_as_x27_2509_, 1);
v___x_2525_ = lean_box(0);
lean_inc(v_head_2523_);
v___x_2526_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg(v_head_2523_, v_a_2508_, v___x_2525_, v___y_2511_, v___y_2512_, v___y_2513_, v___y_2514_, v___y_2515_, v___y_2516_, v___y_2517_, v___y_2518_, v___y_2519_, v___y_2520_);
if (lean_obj_tag(v___x_2526_) == 0)
{
lean_dec_ref_known(v___x_2526_, 1);
v_as_x27_2509_ = v_tail_2524_;
v_b_2510_ = v___x_2525_;
goto _start;
}
else
{
return v___x_2526_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___redArg___boxed(lean_object* v_a_2528_, lean_object* v_as_x27_2529_, lean_object* v_b_2530_, lean_object* v___y_2531_, lean_object* v___y_2532_, lean_object* v___y_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_, lean_object* v___y_2538_, lean_object* v___y_2539_, lean_object* v___y_2540_, lean_object* v___y_2541_){
_start:
{
lean_object* v_res_2542_; 
v_res_2542_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___redArg(v_a_2528_, v_as_x27_2529_, v_b_2530_, v___y_2531_, v___y_2532_, v___y_2533_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_, v___y_2538_, v___y_2539_, v___y_2540_);
lean_dec(v___y_2540_);
lean_dec_ref(v___y_2539_);
lean_dec(v___y_2538_);
lean_dec_ref(v___y_2537_);
lean_dec(v___y_2536_);
lean_dec_ref(v___y_2535_);
lean_dec(v___y_2534_);
lean_dec_ref(v___y_2533_);
lean_dec(v___y_2532_);
lean_dec(v___y_2531_);
lean_dec(v_as_x27_2529_);
lean_dec(v_a_2528_);
return v_res_2542_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___redArg(lean_object* v_as_x27_2543_, lean_object* v_b_2544_, lean_object* v___y_2545_, lean_object* v___y_2546_, lean_object* v___y_2547_, lean_object* v___y_2548_, lean_object* v___y_2549_, lean_object* v___y_2550_, lean_object* v___y_2551_, lean_object* v___y_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_){
_start:
{
if (lean_obj_tag(v_as_x27_2543_) == 0)
{
lean_object* v___x_2556_; 
v___x_2556_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2556_, 0, v_b_2544_);
return v___x_2556_;
}
else
{
lean_object* v_head_2557_; lean_object* v_tail_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; 
v_head_2557_ = lean_ctor_get(v_as_x27_2543_, 0);
v_tail_2558_ = lean_ctor_get(v_as_x27_2543_, 1);
v___x_2559_ = lean_box(0);
v___x_2560_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___redArg(v_head_2557_, v_head_2557_, v___x_2559_, v___y_2545_, v___y_2546_, v___y_2547_, v___y_2548_, v___y_2549_, v___y_2550_, v___y_2551_, v___y_2552_, v___y_2553_, v___y_2554_);
if (lean_obj_tag(v___x_2560_) == 0)
{
lean_dec_ref_known(v___x_2560_, 1);
v_as_x27_2543_ = v_tail_2558_;
v_b_2544_ = v___x_2559_;
goto _start;
}
else
{
return v___x_2560_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___redArg___boxed(lean_object* v_as_x27_2562_, lean_object* v_b_2563_, lean_object* v___y_2564_, lean_object* v___y_2565_, lean_object* v___y_2566_, lean_object* v___y_2567_, lean_object* v___y_2568_, lean_object* v___y_2569_, lean_object* v___y_2570_, lean_object* v___y_2571_, lean_object* v___y_2572_, lean_object* v___y_2573_, lean_object* v___y_2574_){
_start:
{
lean_object* v_res_2575_; 
v_res_2575_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___redArg(v_as_x27_2562_, v_b_2563_, v___y_2564_, v___y_2565_, v___y_2566_, v___y_2567_, v___y_2568_, v___y_2569_, v___y_2570_, v___y_2571_, v___y_2572_, v___y_2573_);
lean_dec(v___y_2573_);
lean_dec_ref(v___y_2572_);
lean_dec(v___y_2571_);
lean_dec_ref(v___y_2570_);
lean_dec(v___y_2569_);
lean_dec_ref(v___y_2568_);
lean_dec(v___y_2567_);
lean_dec_ref(v___y_2566_);
lean_dec(v___y_2565_);
lean_dec(v___y_2564_);
lean_dec(v_as_x27_2562_);
return v_res_2575_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs(lean_object* v_a_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_, lean_object* v_a_2582_, lean_object* v_a_2583_, lean_object* v_a_2584_, lean_object* v_a_2585_){
_start:
{
lean_object* v___x_2587_; uint8_t v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; 
v___x_2587_ = lean_st_ref_get(v_a_2576_);
v___x_2588_ = 0;
v___x_2589_ = l_Lean_Meta_Grind_Goal_getEqcs(v___x_2587_, v___x_2588_);
lean_dec(v___x_2587_);
v___x_2590_ = lean_box(0);
v___x_2591_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___redArg(v___x_2589_, v___x_2590_, v_a_2576_, v_a_2577_, v_a_2578_, v_a_2579_, v_a_2580_, v_a_2581_, v_a_2582_, v_a_2583_, v_a_2584_, v_a_2585_);
lean_dec(v___x_2589_);
if (lean_obj_tag(v___x_2591_) == 0)
{
lean_object* v___x_2593_; uint8_t v_isShared_2594_; uint8_t v_isSharedCheck_2598_; 
v_isSharedCheck_2598_ = !lean_is_exclusive(v___x_2591_);
if (v_isSharedCheck_2598_ == 0)
{
lean_object* v_unused_2599_; 
v_unused_2599_ = lean_ctor_get(v___x_2591_, 0);
lean_dec(v_unused_2599_);
v___x_2593_ = v___x_2591_;
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
else
{
lean_dec(v___x_2591_);
v___x_2593_ = lean_box(0);
v_isShared_2594_ = v_isSharedCheck_2598_;
goto v_resetjp_2592_;
}
v_resetjp_2592_:
{
lean_object* v___x_2596_; 
if (v_isShared_2594_ == 0)
{
lean_ctor_set(v___x_2593_, 0, v___x_2590_);
v___x_2596_ = v___x_2593_;
goto v_reusejp_2595_;
}
else
{
lean_object* v_reuseFailAlloc_2597_; 
v_reuseFailAlloc_2597_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2597_, 0, v___x_2590_);
v___x_2596_ = v_reuseFailAlloc_2597_;
goto v_reusejp_2595_;
}
v_reusejp_2595_:
{
return v___x_2596_;
}
}
}
else
{
return v___x_2591_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs___boxed(lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_, lean_object* v_a_2603_, lean_object* v_a_2604_, lean_object* v_a_2605_, lean_object* v_a_2606_, lean_object* v_a_2607_, lean_object* v_a_2608_, lean_object* v_a_2609_, lean_object* v_a_2610_){
_start:
{
lean_object* v_res_2611_; 
v_res_2611_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs(v_a_2600_, v_a_2601_, v_a_2602_, v_a_2603_, v_a_2604_, v_a_2605_, v_a_2606_, v_a_2607_, v_a_2608_, v_a_2609_);
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
return v_res_2611_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0(lean_object* v_cls_2612_, lean_object* v_msg_2613_, lean_object* v___y_2614_, lean_object* v___y_2615_, lean_object* v___y_2616_, lean_object* v___y_2617_, lean_object* v___y_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
lean_object* v___x_2625_; 
v___x_2625_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___redArg(v_cls_2612_, v_msg_2613_, v___y_2620_, v___y_2621_, v___y_2622_, v___y_2623_);
return v___x_2625_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0___boxed(lean_object* v_cls_2626_, lean_object* v_msg_2627_, lean_object* v___y_2628_, lean_object* v___y_2629_, lean_object* v___y_2630_, lean_object* v___y_2631_, lean_object* v___y_2632_, lean_object* v___y_2633_, lean_object* v___y_2634_, lean_object* v___y_2635_, lean_object* v___y_2636_, lean_object* v___y_2637_, lean_object* v___y_2638_){
_start:
{
lean_object* v_res_2639_; 
v_res_2639_ = l_Lean_addTrace___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__0(v_cls_2626_, v_msg_2627_, v___y_2628_, v___y_2629_, v___y_2630_, v___y_2631_, v___y_2632_, v___y_2633_, v___y_2634_, v___y_2635_, v___y_2636_, v___y_2637_);
lean_dec(v___y_2637_);
lean_dec_ref(v___y_2636_);
lean_dec(v___y_2635_);
lean_dec_ref(v___y_2634_);
lean_dec(v___y_2633_);
lean_dec_ref(v___y_2632_);
lean_dec(v___y_2631_);
lean_dec_ref(v___y_2630_);
lean_dec(v___y_2629_);
lean_dec(v___y_2628_);
return v_res_2639_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1(lean_object* v_a_2640_, lean_object* v_as_2641_, lean_object* v_as_x27_2642_, lean_object* v_b_2643_, lean_object* v_a_2644_, lean_object* v___y_2645_, lean_object* v___y_2646_, lean_object* v___y_2647_, lean_object* v___y_2648_, lean_object* v___y_2649_, lean_object* v___y_2650_, lean_object* v___y_2651_, lean_object* v___y_2652_, lean_object* v___y_2653_, lean_object* v___y_2654_){
_start:
{
lean_object* v___x_2656_; 
v___x_2656_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___redArg(v_a_2640_, v_as_x27_2642_, v_b_2643_, v___y_2645_, v___y_2646_, v___y_2647_, v___y_2648_, v___y_2649_, v___y_2650_, v___y_2651_, v___y_2652_, v___y_2653_, v___y_2654_);
return v___x_2656_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1___boxed(lean_object* v_a_2657_, lean_object* v_as_2658_, lean_object* v_as_x27_2659_, lean_object* v_b_2660_, lean_object* v_a_2661_, lean_object* v___y_2662_, lean_object* v___y_2663_, lean_object* v___y_2664_, lean_object* v___y_2665_, lean_object* v___y_2666_, lean_object* v___y_2667_, lean_object* v___y_2668_, lean_object* v___y_2669_, lean_object* v___y_2670_, lean_object* v___y_2671_, lean_object* v___y_2672_){
_start:
{
lean_object* v_res_2673_; 
v_res_2673_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__1(v_a_2657_, v_as_2658_, v_as_x27_2659_, v_b_2660_, v_a_2661_, v___y_2662_, v___y_2663_, v___y_2664_, v___y_2665_, v___y_2666_, v___y_2667_, v___y_2668_, v___y_2669_, v___y_2670_, v___y_2671_);
lean_dec(v___y_2671_);
lean_dec_ref(v___y_2670_);
lean_dec(v___y_2669_);
lean_dec_ref(v___y_2668_);
lean_dec(v___y_2667_);
lean_dec_ref(v___y_2666_);
lean_dec(v___y_2665_);
lean_dec_ref(v___y_2664_);
lean_dec(v___y_2663_);
lean_dec(v___y_2662_);
lean_dec(v_as_x27_2659_);
lean_dec(v_as_2658_);
return v_res_2673_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2(lean_object* v_a_2674_, lean_object* v_as_2675_, lean_object* v_as_x27_2676_, lean_object* v_b_2677_, lean_object* v_a_2678_, lean_object* v___y_2679_, lean_object* v___y_2680_, lean_object* v___y_2681_, lean_object* v___y_2682_, lean_object* v___y_2683_, lean_object* v___y_2684_, lean_object* v___y_2685_, lean_object* v___y_2686_, lean_object* v___y_2687_, lean_object* v___y_2688_){
_start:
{
lean_object* v___x_2690_; 
v___x_2690_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___redArg(v_a_2674_, v_as_x27_2676_, v_b_2677_, v___y_2679_, v___y_2680_, v___y_2681_, v___y_2682_, v___y_2683_, v___y_2684_, v___y_2685_, v___y_2686_, v___y_2687_, v___y_2688_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2___boxed(lean_object* v_a_2691_, lean_object* v_as_2692_, lean_object* v_as_x27_2693_, lean_object* v_b_2694_, lean_object* v_a_2695_, lean_object* v___y_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_, lean_object* v___y_2701_, lean_object* v___y_2702_, lean_object* v___y_2703_, lean_object* v___y_2704_, lean_object* v___y_2705_, lean_object* v___y_2706_){
_start:
{
lean_object* v_res_2707_; 
v_res_2707_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__2(v_a_2691_, v_as_2692_, v_as_x27_2693_, v_b_2694_, v_a_2695_, v___y_2696_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_, v___y_2701_, v___y_2702_, v___y_2703_, v___y_2704_, v___y_2705_);
lean_dec(v___y_2705_);
lean_dec_ref(v___y_2704_);
lean_dec(v___y_2703_);
lean_dec_ref(v___y_2702_);
lean_dec(v___y_2701_);
lean_dec_ref(v___y_2700_);
lean_dec(v___y_2699_);
lean_dec_ref(v___y_2698_);
lean_dec(v___y_2697_);
lean_dec(v___y_2696_);
lean_dec(v_as_x27_2693_);
lean_dec(v_as_2692_);
lean_dec(v_a_2691_);
return v_res_2707_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3(lean_object* v_as_2708_, lean_object* v_as_x27_2709_, lean_object* v_b_2710_, lean_object* v_a_2711_, lean_object* v___y_2712_, lean_object* v___y_2713_, lean_object* v___y_2714_, lean_object* v___y_2715_, lean_object* v___y_2716_, lean_object* v___y_2717_, lean_object* v___y_2718_, lean_object* v___y_2719_, lean_object* v___y_2720_, lean_object* v___y_2721_){
_start:
{
lean_object* v___x_2723_; 
v___x_2723_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___redArg(v_as_x27_2709_, v_b_2710_, v___y_2712_, v___y_2713_, v___y_2714_, v___y_2715_, v___y_2716_, v___y_2717_, v___y_2718_, v___y_2719_, v___y_2720_, v___y_2721_);
return v___x_2723_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3___boxed(lean_object* v_as_2724_, lean_object* v_as_x27_2725_, lean_object* v_b_2726_, lean_object* v_a_2727_, lean_object* v___y_2728_, lean_object* v___y_2729_, lean_object* v___y_2730_, lean_object* v___y_2731_, lean_object* v___y_2732_, lean_object* v___y_2733_, lean_object* v___y_2734_, lean_object* v___y_2735_, lean_object* v___y_2736_, lean_object* v___y_2737_, lean_object* v___y_2738_){
_start:
{
lean_object* v_res_2739_; 
v_res_2739_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs_spec__3(v_as_2724_, v_as_x27_2725_, v_b_2726_, v_a_2727_, v___y_2728_, v___y_2729_, v___y_2730_, v___y_2731_, v___y_2732_, v___y_2733_, v___y_2734_, v___y_2735_, v___y_2736_, v___y_2737_);
lean_dec(v___y_2737_);
lean_dec_ref(v___y_2736_);
lean_dec(v___y_2735_);
lean_dec_ref(v___y_2734_);
lean_dec(v___y_2733_);
lean_dec_ref(v___y_2732_);
lean_dec(v___y_2731_);
lean_dec_ref(v___y_2730_);
lean_dec(v___y_2729_);
lean_dec(v___y_2728_);
lean_dec(v_as_x27_2725_);
lean_dec(v_as_2724_);
return v_res_2739_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_2742_; lean_object* v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___x_2747_; 
v___x_2742_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__1));
v___x_2743_ = lean_unsigned_to_nat(4u);
v___x_2744_ = lean_unsigned_to_nat(163u);
v___x_2745_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__0));
v___x_2746_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_2747_ = l_mkPanicMessageWithDecl(v___x_2746_, v___x_2745_, v___x_2744_, v___x_2743_, v___x_2742_);
return v___x_2747_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; 
v___x_2749_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__3));
v___x_2750_ = l_Lean_stringToMessageData(v___x_2749_);
return v___x_2750_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__6(void){
_start:
{
lean_object* v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; 
v___x_2752_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__5));
v___x_2753_ = lean_unsigned_to_nat(4u);
v___x_2754_ = lean_unsigned_to_nat(166u);
v___x_2755_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__0));
v___x_2756_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_2757_ = l_mkPanicMessageWithDecl(v___x_2756_, v___x_2755_, v___x_2754_, v___x_2753_, v___x_2752_);
return v___x_2757_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg(lean_object* v___x_2758_, lean_object* v___x_2759_, lean_object* v_as_x27_2760_, lean_object* v_b_2761_, lean_object* v___y_2762_, lean_object* v___y_2763_, lean_object* v___y_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_, lean_object* v___y_2769_, lean_object* v___y_2770_, lean_object* v___y_2771_){
_start:
{
if (lean_obj_tag(v_as_x27_2760_) == 0)
{
lean_object* v___x_2773_; 
v___x_2773_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2773_, 0, v_b_2761_);
return v___x_2773_;
}
else
{
lean_object* v_head_2774_; lean_object* v_tail_2775_; lean_object* v___y_2777_; lean_object* v___x_2797_; lean_object* v___x_2798_; 
v_head_2774_ = lean_ctor_get(v_as_x27_2760_, 0);
v_tail_2775_ = lean_ctor_get(v_as_x27_2760_, 1);
v___x_2797_ = lean_box(0);
lean_inc(v_head_2774_);
v___x_2798_ = l_Lean_Meta_Grind_isCongrRoot___redArg(v_head_2774_, v___y_2762_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
if (lean_obj_tag(v___x_2798_) == 0)
{
lean_object* v_a_2799_; uint8_t v___x_2800_; 
v_a_2799_ = lean_ctor_get(v___x_2798_, 0);
lean_inc(v_a_2799_);
lean_dec_ref_known(v___x_2798_, 1);
v___x_2800_ = lean_unbox(v_a_2799_);
lean_dec(v_a_2799_);
if (v___x_2800_ == 0)
{
lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2801_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__2);
v___x_2802_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_2801_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
v___y_2777_ = v___x_2802_;
goto v___jp_2776_;
}
else
{
lean_object* v___x_2803_; 
lean_inc(v_head_2774_);
v___x_2803_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__2___redArg(v___x_2758_, v___x_2759_, v_head_2774_);
if (lean_obj_tag(v___x_2803_) == 0)
{
lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; 
v___x_2804_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__4);
lean_inc(v_head_2774_);
v___x_2805_ = l_Lean_indentExpr(v_head_2774_);
v___x_2806_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2806_, 0, v___x_2804_);
lean_ctor_set(v___x_2806_, 1, v___x_2805_);
v___x_2807_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__1___redArg(v___x_2806_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
return v___x_2807_;
}
else
{
lean_object* v_val_2808_; lean_object* v_fst_2809_; size_t v___x_2810_; size_t v___x_2811_; uint8_t v___x_2812_; 
v_val_2808_ = lean_ctor_get(v___x_2803_, 0);
lean_inc(v_val_2808_);
lean_dec_ref_known(v___x_2803_, 1);
v_fst_2809_ = lean_ctor_get(v_val_2808_, 0);
lean_inc(v_fst_2809_);
lean_dec(v_val_2808_);
v___x_2810_ = lean_ptr_addr(v_head_2774_);
v___x_2811_ = lean_ptr_addr(v_fst_2809_);
lean_dec(v_fst_2809_);
v___x_2812_ = lean_usize_dec_eq(v___x_2810_, v___x_2811_);
if (v___x_2812_ == 0)
{
lean_object* v___x_2813_; lean_object* v___x_2814_; 
v___x_2813_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__6, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__6_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___closed__6);
v___x_2814_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_2813_, v___y_2762_, v___y_2763_, v___y_2764_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_, v___y_2769_, v___y_2770_, v___y_2771_);
v___y_2777_ = v___x_2814_;
goto v___jp_2776_;
}
else
{
v_as_x27_2760_ = v_tail_2775_;
v_b_2761_ = v___x_2797_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2823_; 
v_a_2816_ = lean_ctor_get(v___x_2798_, 0);
v_isSharedCheck_2823_ = !lean_is_exclusive(v___x_2798_);
if (v_isSharedCheck_2823_ == 0)
{
v___x_2818_ = v___x_2798_;
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_a_2816_);
lean_dec(v___x_2798_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2823_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v___x_2821_; 
if (v_isShared_2819_ == 0)
{
v___x_2821_ = v___x_2818_;
goto v_reusejp_2820_;
}
else
{
lean_object* v_reuseFailAlloc_2822_; 
v_reuseFailAlloc_2822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2822_, 0, v_a_2816_);
v___x_2821_ = v_reuseFailAlloc_2822_;
goto v_reusejp_2820_;
}
v_reusejp_2820_:
{
return v___x_2821_;
}
}
}
v___jp_2776_:
{
if (lean_obj_tag(v___y_2777_) == 0)
{
lean_object* v_a_2778_; lean_object* v___x_2780_; uint8_t v_isShared_2781_; uint8_t v_isSharedCheck_2788_; 
v_a_2778_ = lean_ctor_get(v___y_2777_, 0);
v_isSharedCheck_2788_ = !lean_is_exclusive(v___y_2777_);
if (v_isSharedCheck_2788_ == 0)
{
v___x_2780_ = v___y_2777_;
v_isShared_2781_ = v_isSharedCheck_2788_;
goto v_resetjp_2779_;
}
else
{
lean_inc(v_a_2778_);
lean_dec(v___y_2777_);
v___x_2780_ = lean_box(0);
v_isShared_2781_ = v_isSharedCheck_2788_;
goto v_resetjp_2779_;
}
v_resetjp_2779_:
{
if (lean_obj_tag(v_a_2778_) == 0)
{
lean_object* v_a_2782_; lean_object* v___x_2784_; 
v_a_2782_ = lean_ctor_get(v_a_2778_, 0);
lean_inc(v_a_2782_);
lean_dec_ref_known(v_a_2778_, 1);
if (v_isShared_2781_ == 0)
{
lean_ctor_set(v___x_2780_, 0, v_a_2782_);
v___x_2784_ = v___x_2780_;
goto v_reusejp_2783_;
}
else
{
lean_object* v_reuseFailAlloc_2785_; 
v_reuseFailAlloc_2785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2785_, 0, v_a_2782_);
v___x_2784_ = v_reuseFailAlloc_2785_;
goto v_reusejp_2783_;
}
v_reusejp_2783_:
{
return v___x_2784_;
}
}
else
{
lean_object* v_a_2786_; 
lean_del_object(v___x_2780_);
v_a_2786_ = lean_ctor_get(v_a_2778_, 0);
lean_inc(v_a_2786_);
lean_dec_ref_known(v_a_2778_, 1);
v_as_x27_2760_ = v_tail_2775_;
v_b_2761_ = v_a_2786_;
goto _start;
}
}
}
else
{
lean_object* v_a_2789_; lean_object* v___x_2791_; uint8_t v_isShared_2792_; uint8_t v_isSharedCheck_2796_; 
v_a_2789_ = lean_ctor_get(v___y_2777_, 0);
v_isSharedCheck_2796_ = !lean_is_exclusive(v___y_2777_);
if (v_isSharedCheck_2796_ == 0)
{
v___x_2791_ = v___y_2777_;
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
else
{
lean_inc(v_a_2789_);
lean_dec(v___y_2777_);
v___x_2791_ = lean_box(0);
v_isShared_2792_ = v_isSharedCheck_2796_;
goto v_resetjp_2790_;
}
v_resetjp_2790_:
{
lean_object* v___x_2794_; 
if (v_isShared_2792_ == 0)
{
v___x_2794_ = v___x_2791_;
goto v_reusejp_2793_;
}
else
{
lean_object* v_reuseFailAlloc_2795_; 
v_reuseFailAlloc_2795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2795_, 0, v_a_2789_);
v___x_2794_ = v_reuseFailAlloc_2795_;
goto v_reusejp_2793_;
}
v_reusejp_2793_:
{
return v___x_2794_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg___boxed(lean_object* v___x_2824_, lean_object* v___x_2825_, lean_object* v_as_x27_2826_, lean_object* v_b_2827_, lean_object* v___y_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_, lean_object* v___y_2833_, lean_object* v___y_2834_, lean_object* v___y_2835_, lean_object* v___y_2836_, lean_object* v___y_2837_, lean_object* v___y_2838_){
_start:
{
lean_object* v_res_2839_; 
v_res_2839_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg(v___x_2824_, v___x_2825_, v_as_x27_2826_, v_b_2827_, v___y_2828_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_, v___y_2833_, v___y_2834_, v___y_2835_, v___y_2836_, v___y_2837_);
lean_dec(v___y_2837_);
lean_dec_ref(v___y_2836_);
lean_dec(v___y_2835_);
lean_dec_ref(v___y_2834_);
lean_dec(v___y_2833_);
lean_dec_ref(v___y_2832_);
lean_dec(v___y_2831_);
lean_dec_ref(v___y_2830_);
lean_dec(v___y_2829_);
lean_dec(v___y_2828_);
lean_dec(v_as_x27_2826_);
lean_dec_ref(v___x_2825_);
lean_dec_ref(v___x_2824_);
return v_res_2839_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__1(lean_object* v_a_2840_, lean_object* v_a_2841_){
_start:
{
if (lean_obj_tag(v_a_2840_) == 0)
{
lean_object* v___x_2842_; 
v___x_2842_ = l_List_reverse___redArg(v_a_2841_);
return v___x_2842_;
}
else
{
lean_object* v_head_2843_; lean_object* v_tail_2844_; lean_object* v___x_2846_; uint8_t v_isShared_2847_; uint8_t v_isSharedCheck_2853_; 
v_head_2843_ = lean_ctor_get(v_a_2840_, 0);
v_tail_2844_ = lean_ctor_get(v_a_2840_, 1);
v_isSharedCheck_2853_ = !lean_is_exclusive(v_a_2840_);
if (v_isSharedCheck_2853_ == 0)
{
v___x_2846_ = v_a_2840_;
v_isShared_2847_ = v_isSharedCheck_2853_;
goto v_resetjp_2845_;
}
else
{
lean_inc(v_tail_2844_);
lean_inc(v_head_2843_);
lean_dec(v_a_2840_);
v___x_2846_ = lean_box(0);
v_isShared_2847_ = v_isSharedCheck_2853_;
goto v_resetjp_2845_;
}
v_resetjp_2845_:
{
lean_object* v_fst_2848_; lean_object* v___x_2850_; 
v_fst_2848_ = lean_ctor_get(v_head_2843_, 0);
lean_inc(v_fst_2848_);
lean_dec(v_head_2843_);
if (v_isShared_2847_ == 0)
{
lean_ctor_set(v___x_2846_, 1, v_a_2841_);
lean_ctor_set(v___x_2846_, 0, v_fst_2848_);
v___x_2850_ = v___x_2846_;
goto v_reusejp_2849_;
}
else
{
lean_object* v_reuseFailAlloc_2852_; 
v_reuseFailAlloc_2852_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2852_, 0, v_fst_2848_);
lean_ctor_set(v_reuseFailAlloc_2852_, 1, v_a_2841_);
v___x_2850_ = v_reuseFailAlloc_2852_;
goto v_reusejp_2849_;
}
v_reusejp_2849_:
{
v_a_2840_ = v_tail_2844_;
v_a_2841_ = v___x_2850_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(lean_object* v_f_2854_, lean_object* v_keys_2855_, lean_object* v_vals_2856_, lean_object* v_i_2857_, lean_object* v_acc_2858_){
_start:
{
lean_object* v___x_2859_; uint8_t v___x_2860_; 
v___x_2859_ = lean_array_get_size(v_keys_2855_);
v___x_2860_ = lean_nat_dec_lt(v_i_2857_, v___x_2859_);
if (v___x_2860_ == 0)
{
lean_dec(v_i_2857_);
lean_dec(v_f_2854_);
return v_acc_2858_;
}
else
{
lean_object* v_k_2861_; lean_object* v_v_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v_k_2861_ = lean_array_fget_borrowed(v_keys_2855_, v_i_2857_);
v_v_2862_ = lean_array_fget_borrowed(v_vals_2856_, v_i_2857_);
lean_inc(v_f_2854_);
lean_inc(v_v_2862_);
lean_inc(v_k_2861_);
v___x_2863_ = lean_apply_3(v_f_2854_, v_acc_2858_, v_k_2861_, v_v_2862_);
v___x_2864_ = lean_unsigned_to_nat(1u);
v___x_2865_ = lean_nat_add(v_i_2857_, v___x_2864_);
lean_dec(v_i_2857_);
v_i_2857_ = v___x_2865_;
v_acc_2858_ = v___x_2863_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg___boxed(lean_object* v_f_2867_, lean_object* v_keys_2868_, lean_object* v_vals_2869_, lean_object* v_i_2870_, lean_object* v_acc_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(v_f_2867_, v_keys_2868_, v_vals_2869_, v_i_2870_, v_acc_2871_);
lean_dec_ref(v_vals_2869_);
lean_dec_ref(v_keys_2868_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___redArg(lean_object* v_f_2873_, lean_object* v_as_2874_, size_t v_i_2875_, size_t v_stop_2876_, lean_object* v_b_2877_){
_start:
{
lean_object* v___y_2879_; uint8_t v___x_2883_; 
v___x_2883_ = lean_usize_dec_eq(v_i_2875_, v_stop_2876_);
if (v___x_2883_ == 0)
{
lean_object* v___x_2884_; 
v___x_2884_ = lean_array_uget_borrowed(v_as_2874_, v_i_2875_);
switch(lean_obj_tag(v___x_2884_))
{
case 0:
{
lean_object* v_key_2885_; lean_object* v_val_2886_; lean_object* v___x_2887_; 
v_key_2885_ = lean_ctor_get(v___x_2884_, 0);
v_val_2886_ = lean_ctor_get(v___x_2884_, 1);
lean_inc(v_f_2873_);
lean_inc(v_val_2886_);
lean_inc(v_key_2885_);
v___x_2887_ = lean_apply_3(v_f_2873_, v_b_2877_, v_key_2885_, v_val_2886_);
v___y_2879_ = v___x_2887_;
goto v___jp_2878_;
}
case 1:
{
lean_object* v_node_2888_; lean_object* v___x_2889_; 
v_node_2888_ = lean_ctor_get(v___x_2884_, 0);
lean_inc(v_f_2873_);
v___x_2889_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_2873_, v_node_2888_, v_b_2877_);
v___y_2879_ = v___x_2889_;
goto v___jp_2878_;
}
default: 
{
v___y_2879_ = v_b_2877_;
goto v___jp_2878_;
}
}
}
else
{
lean_dec(v_f_2873_);
return v_b_2877_;
}
v___jp_2878_:
{
size_t v___x_2880_; size_t v___x_2881_; 
v___x_2880_ = ((size_t)1ULL);
v___x_2881_ = lean_usize_add(v_i_2875_, v___x_2880_);
v_i_2875_ = v___x_2881_;
v_b_2877_ = v___y_2879_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(lean_object* v_f_2890_, lean_object* v_x_2891_, lean_object* v_x_2892_){
_start:
{
if (lean_obj_tag(v_x_2891_) == 0)
{
lean_object* v_es_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; uint8_t v___x_2896_; 
v_es_2893_ = lean_ctor_get(v_x_2891_, 0);
v___x_2894_ = lean_unsigned_to_nat(0u);
v___x_2895_ = lean_array_get_size(v_es_2893_);
v___x_2896_ = lean_nat_dec_lt(v___x_2894_, v___x_2895_);
if (v___x_2896_ == 0)
{
lean_dec(v_f_2890_);
return v_x_2892_;
}
else
{
size_t v___x_2897_; size_t v___x_2898_; lean_object* v___x_2899_; 
v___x_2897_ = ((size_t)0ULL);
v___x_2898_ = lean_usize_of_nat(v___x_2895_);
v___x_2899_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___redArg(v_f_2890_, v_es_2893_, v___x_2897_, v___x_2898_, v_x_2892_);
return v___x_2899_;
}
}
else
{
lean_object* v_ks_2900_; lean_object* v_vs_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; 
v_ks_2900_ = lean_ctor_get(v_x_2891_, 0);
v_vs_2901_ = lean_ctor_get(v_x_2891_, 1);
v___x_2902_ = lean_unsigned_to_nat(0u);
v___x_2903_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(v_f_2890_, v_ks_2900_, v_vs_2901_, v___x_2902_, v_x_2892_);
return v___x_2903_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_f_2904_, lean_object* v_x_2905_, lean_object* v_x_2906_){
_start:
{
lean_object* v_res_2907_; 
v_res_2907_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_2904_, v_x_2905_, v_x_2906_);
lean_dec_ref(v_x_2905_);
return v_res_2907_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___redArg___boxed(lean_object* v_f_2908_, lean_object* v_as_2909_, lean_object* v_i_2910_, lean_object* v_stop_2911_, lean_object* v_b_2912_){
_start:
{
size_t v_i_boxed_2913_; size_t v_stop_boxed_2914_; lean_object* v_res_2915_; 
v_i_boxed_2913_ = lean_unbox_usize(v_i_2910_);
lean_dec(v_i_2910_);
v_stop_boxed_2914_ = lean_unbox_usize(v_stop_2911_);
lean_dec(v_stop_2911_);
v_res_2915_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___redArg(v_f_2908_, v_as_2909_, v_i_boxed_2913_, v_stop_boxed_2914_, v_b_2912_);
lean_dec_ref(v_as_2909_);
return v_res_2915_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v_f_2916_, lean_object* v_x1_2917_, lean_object* v_x2_2918_, lean_object* v_x3_2919_){
_start:
{
lean_object* v___x_2920_; 
v___x_2920_ = lean_apply_3(v_f_2916_, v_x1_2917_, v_x2_2918_, v_x3_2919_);
return v___x_2920_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg(lean_object* v___x_2921_, lean_object* v_map_2922_, lean_object* v_f_2923_, lean_object* v_init_2924_){
_start:
{
lean_object* v___f_2925_; lean_object* v___x_2926_; 
v___f_2925_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_2925_, 0, v_f_2923_);
v___x_2926_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v___f_2925_, v_map_2922_, v_init_2924_);
return v___x_2926_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v___x_2927_, lean_object* v_map_2928_, lean_object* v_f_2929_, lean_object* v_init_2930_){
_start:
{
lean_object* v_res_2931_; 
v_res_2931_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg(v___x_2927_, v_map_2928_, v_f_2929_, v_init_2930_);
lean_dec_ref(v_map_2928_);
lean_dec_ref(v___x_2927_);
return v_res_2931_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___lam__0(lean_object* v_ps_2932_, lean_object* v_k_2933_, lean_object* v_v_2934_){
_start:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; 
v___x_2935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2935_, 0, v_k_2933_);
lean_ctor_set(v___x_2935_, 1, v_v_2934_);
v___x_2936_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2936_, 0, v___x_2935_);
lean_ctor_set(v___x_2936_, 1, v_ps_2932_);
return v___x_2936_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg(lean_object* v___x_2938_, lean_object* v_m_2939_){
_start:
{
lean_object* v___f_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; 
v___f_2940_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___closed__0));
v___x_2941_ = lean_box(0);
v___x_2942_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg(v___x_2938_, v_m_2939_, v___f_2940_, v___x_2941_);
return v___x_2942_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___boxed(lean_object* v___x_2943_, lean_object* v_m_2944_){
_start:
{
lean_object* v_res_2945_; 
v_res_2945_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg(v___x_2943_, v_m_2944_);
lean_dec_ref(v_m_2944_);
lean_dec_ref(v___x_2943_);
return v_res_2945_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0(lean_object* v___x_2946_, lean_object* v_s_2947_){
_start:
{
lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; 
v___x_2948_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg(v___x_2946_, v_s_2947_);
v___x_2949_ = lean_box(0);
v___x_2950_ = l_List_mapTR_loop___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__1(v___x_2948_, v___x_2949_);
return v___x_2950_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0___boxed(lean_object* v___x_2951_, lean_object* v_s_2952_){
_start:
{
lean_object* v_res_2953_; 
v_res_2953_ = l_Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0(v___x_2951_, v_s_2952_);
lean_dec_ref(v_s_2952_);
lean_dec_ref(v___x_2951_);
return v_res_2953_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable(lean_object* v_a_2954_, lean_object* v_a_2955_, lean_object* v_a_2956_, lean_object* v_a_2957_, lean_object* v_a_2958_, lean_object* v_a_2959_, lean_object* v_a_2960_, lean_object* v_a_2961_, lean_object* v_a_2962_, lean_object* v_a_2963_){
_start:
{
lean_object* v___x_2965_; lean_object* v_toGoalState_2966_; lean_object* v_enodeMap_2967_; lean_object* v_congrTable_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; 
v___x_2965_ = lean_st_ref_get(v_a_2954_);
v_toGoalState_2966_ = lean_ctor_get(v___x_2965_, 0);
lean_inc_ref(v_toGoalState_2966_);
lean_dec(v___x_2965_);
v_enodeMap_2967_ = lean_ctor_get(v_toGoalState_2966_, 1);
lean_inc_ref(v_enodeMap_2967_);
v_congrTable_2968_ = lean_ctor_get(v_toGoalState_2966_, 5);
lean_inc_ref(v_congrTable_2968_);
lean_dec_ref(v_toGoalState_2966_);
v___x_2969_ = l_Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0(v_enodeMap_2967_, v_congrTable_2968_);
v___x_2970_ = lean_box(0);
v___x_2971_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg(v_enodeMap_2967_, v_congrTable_2968_, v___x_2969_, v___x_2970_, v_a_2954_, v_a_2955_, v_a_2956_, v_a_2957_, v_a_2958_, v_a_2959_, v_a_2960_, v_a_2961_, v_a_2962_, v_a_2963_);
lean_dec(v___x_2969_);
lean_dec_ref(v_congrTable_2968_);
lean_dec_ref(v_enodeMap_2967_);
if (lean_obj_tag(v___x_2971_) == 0)
{
lean_object* v___x_2973_; uint8_t v_isShared_2974_; uint8_t v_isSharedCheck_2978_; 
v_isSharedCheck_2978_ = !lean_is_exclusive(v___x_2971_);
if (v_isSharedCheck_2978_ == 0)
{
lean_object* v_unused_2979_; 
v_unused_2979_ = lean_ctor_get(v___x_2971_, 0);
lean_dec(v_unused_2979_);
v___x_2973_ = v___x_2971_;
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
else
{
lean_dec(v___x_2971_);
v___x_2973_ = lean_box(0);
v_isShared_2974_ = v_isSharedCheck_2978_;
goto v_resetjp_2972_;
}
v_resetjp_2972_:
{
lean_object* v___x_2976_; 
if (v_isShared_2974_ == 0)
{
lean_ctor_set(v___x_2973_, 0, v___x_2970_);
v___x_2976_ = v___x_2973_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2977_; 
v_reuseFailAlloc_2977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2977_, 0, v___x_2970_);
v___x_2976_ = v_reuseFailAlloc_2977_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
return v___x_2976_;
}
}
}
else
{
return v___x_2971_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable___boxed(lean_object* v_a_2980_, lean_object* v_a_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_){
_start:
{
lean_object* v_res_2991_; 
v_res_2991_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable(v_a_2980_, v_a_2981_, v_a_2982_, v_a_2983_, v_a_2984_, v_a_2985_, v_a_2986_, v_a_2987_, v_a_2988_, v_a_2989_);
lean_dec(v_a_2989_);
lean_dec_ref(v_a_2988_);
lean_dec(v_a_2987_);
lean_dec_ref(v_a_2986_);
lean_dec(v_a_2985_);
lean_dec_ref(v_a_2984_);
lean_dec(v_a_2983_);
lean_dec_ref(v_a_2982_);
lean_dec(v_a_2981_);
lean_dec(v_a_2980_);
return v_res_2991_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1(lean_object* v___x_2992_, lean_object* v___x_2993_, lean_object* v_as_2994_, lean_object* v_as_x27_2995_, lean_object* v_b_2996_, lean_object* v_a_2997_, lean_object* v___y_2998_, lean_object* v___y_2999_, lean_object* v___y_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_, lean_object* v___y_3006_, lean_object* v___y_3007_){
_start:
{
lean_object* v___x_3009_; 
v___x_3009_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___redArg(v___x_2992_, v___x_2993_, v_as_x27_2995_, v_b_2996_, v___y_2998_, v___y_2999_, v___y_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_, v___y_3006_, v___y_3007_);
return v___x_3009_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1___boxed(lean_object** _args){
lean_object* v___x_3010_ = _args[0];
lean_object* v___x_3011_ = _args[1];
lean_object* v_as_3012_ = _args[2];
lean_object* v_as_x27_3013_ = _args[3];
lean_object* v_b_3014_ = _args[4];
lean_object* v_a_3015_ = _args[5];
lean_object* v___y_3016_ = _args[6];
lean_object* v___y_3017_ = _args[7];
lean_object* v___y_3018_ = _args[8];
lean_object* v___y_3019_ = _args[9];
lean_object* v___y_3020_ = _args[10];
lean_object* v___y_3021_ = _args[11];
lean_object* v___y_3022_ = _args[12];
lean_object* v___y_3023_ = _args[13];
lean_object* v___y_3024_ = _args[14];
lean_object* v___y_3025_ = _args[15];
lean_object* v___y_3026_ = _args[16];
_start:
{
lean_object* v_res_3027_; 
v_res_3027_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__1(v___x_3010_, v___x_3011_, v_as_3012_, v_as_x27_3013_, v_b_3014_, v_a_3015_, v___y_3016_, v___y_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_, v___y_3022_, v___y_3023_, v___y_3024_, v___y_3025_);
lean_dec(v___y_3025_);
lean_dec_ref(v___y_3024_);
lean_dec(v___y_3023_);
lean_dec_ref(v___y_3022_);
lean_dec(v___y_3021_);
lean_dec_ref(v___y_3020_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
lean_dec(v___y_3017_);
lean_dec(v___y_3016_);
lean_dec(v_as_x27_3013_);
lean_dec(v_as_3012_);
lean_dec_ref(v___x_3011_);
lean_dec_ref(v___x_3010_);
return v_res_3027_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0(lean_object* v___x_3028_, lean_object* v_00_u03b2_3029_, lean_object* v_m_3030_){
_start:
{
lean_object* v___x_3031_; 
v___x_3031_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg(v___x_3028_, v_m_3030_);
return v___x_3031_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___boxed(lean_object* v___x_3032_, lean_object* v_00_u03b2_3033_, lean_object* v_m_3034_){
_start:
{
lean_object* v_res_3035_; 
v_res_3035_ = l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0(v___x_3032_, v_00_u03b2_3033_, v_m_3034_);
lean_dec_ref(v_m_3034_);
lean_dec_ref(v___x_3032_);
return v_res_3035_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1(lean_object* v___x_3036_, lean_object* v_00_u03c3_3037_, lean_object* v_00_u03b2_3038_, lean_object* v_map_3039_, lean_object* v_f_3040_, lean_object* v_init_3041_){
_start:
{
lean_object* v___x_3042_; 
v___x_3042_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg(v___x_3036_, v_map_3039_, v_f_3040_, v_init_3041_);
return v___x_3042_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___boxed(lean_object* v___x_3043_, lean_object* v_00_u03c3_3044_, lean_object* v_00_u03b2_3045_, lean_object* v_map_3046_, lean_object* v_f_3047_, lean_object* v_init_3048_){
_start:
{
lean_object* v_res_3049_; 
v_res_3049_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1(v___x_3043_, v_00_u03c3_3044_, v_00_u03b2_3045_, v_map_3046_, v_f_3047_, v_init_3048_);
lean_dec_ref(v_map_3046_);
lean_dec_ref(v___x_3043_);
return v_res_3049_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3___redArg(lean_object* v_map_3050_, lean_object* v_f_3051_, lean_object* v_init_3052_){
_start:
{
lean_object* v___x_3053_; 
v___x_3053_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3051_, v_map_3050_, v_init_3052_);
return v___x_3053_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3___redArg___boxed(lean_object* v_map_3054_, lean_object* v_f_3055_, lean_object* v_init_3056_){
_start:
{
lean_object* v_res_3057_; 
v_res_3057_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3___redArg(v_map_3054_, v_f_3055_, v_init_3056_);
lean_dec_ref(v_map_3054_);
return v_res_3057_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3(lean_object* v___x_3058_, lean_object* v_00_u03c3_3059_, lean_object* v_00_u03b2_3060_, lean_object* v_map_3061_, lean_object* v_f_3062_, lean_object* v_init_3063_){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3062_, v_map_3061_, v_init_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3___boxed(lean_object* v___x_3065_, lean_object* v_00_u03c3_3066_, lean_object* v_00_u03b2_3067_, lean_object* v_map_3068_, lean_object* v_f_3069_, lean_object* v_init_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3(v___x_3065_, v_00_u03c3_3066_, v_00_u03b2_3067_, v_map_3068_, v_f_3069_, v_init_3070_);
lean_dec_ref(v_map_3068_);
lean_dec_ref(v___x_3065_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5(lean_object* v_00_u03c3_3072_, lean_object* v_00_u03b1_3073_, lean_object* v_00_u03b2_3074_, lean_object* v_f_3075_, lean_object* v_x_3076_, lean_object* v_x_3077_){
_start:
{
lean_object* v___x_3078_; 
v___x_3078_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3075_, v_x_3076_, v_x_3077_);
return v___x_3078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03c3_3079_, lean_object* v_00_u03b1_3080_, lean_object* v_00_u03b2_3081_, lean_object* v_f_3082_, lean_object* v_x_3083_, lean_object* v_x_3084_){
_start:
{
lean_object* v_res_3085_; 
v_res_3085_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5(v_00_u03c3_3079_, v_00_u03b1_3080_, v_00_u03b2_3081_, v_f_3082_, v_x_3083_, v_x_3084_);
lean_dec_ref(v_x_3083_);
return v_res_3085_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6(lean_object* v_00_u03b1_3086_, lean_object* v_00_u03b2_3087_, lean_object* v_00_u03c3_3088_, lean_object* v_f_3089_, lean_object* v_as_3090_, size_t v_i_3091_, size_t v_stop_3092_, lean_object* v_b_3093_){
_start:
{
lean_object* v___x_3094_; 
v___x_3094_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___redArg(v_f_3089_, v_as_3090_, v_i_3091_, v_stop_3092_, v_b_3093_);
return v___x_3094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6___boxed(lean_object* v_00_u03b1_3095_, lean_object* v_00_u03b2_3096_, lean_object* v_00_u03c3_3097_, lean_object* v_f_3098_, lean_object* v_as_3099_, lean_object* v_i_3100_, lean_object* v_stop_3101_, lean_object* v_b_3102_){
_start:
{
size_t v_i_boxed_3103_; size_t v_stop_boxed_3104_; lean_object* v_res_3105_; 
v_i_boxed_3103_ = lean_unbox_usize(v_i_3100_);
lean_dec(v_i_3100_);
v_stop_boxed_3104_ = lean_unbox_usize(v_stop_3101_);
lean_dec(v_stop_3101_);
v_res_3105_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__6(v_00_u03b1_3095_, v_00_u03b2_3096_, v_00_u03c3_3097_, v_f_3098_, v_as_3099_, v_i_boxed_3103_, v_stop_boxed_3104_, v_b_3102_);
lean_dec_ref(v_as_3099_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7(lean_object* v_00_u03c3_3106_, lean_object* v_00_u03b1_3107_, lean_object* v_00_u03b2_3108_, lean_object* v_f_3109_, lean_object* v_keys_3110_, lean_object* v_vals_3111_, lean_object* v_heq_3112_, lean_object* v_i_3113_, lean_object* v_acc_3114_){
_start:
{
lean_object* v___x_3115_; 
v___x_3115_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___redArg(v_f_3109_, v_keys_3110_, v_vals_3111_, v_i_3113_, v_acc_3114_);
return v___x_3115_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7___boxed(lean_object* v_00_u03c3_3116_, lean_object* v_00_u03b1_3117_, lean_object* v_00_u03b2_3118_, lean_object* v_f_3119_, lean_object* v_keys_3120_, lean_object* v_vals_3121_, lean_object* v_heq_3122_, lean_object* v_i_3123_, lean_object* v_acc_3124_){
_start:
{
lean_object* v_res_3125_; 
v_res_3125_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___at___00Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5_spec__7(v_00_u03c3_3116_, v_00_u03b1_3117_, v_00_u03b2_3118_, v_f_3119_, v_keys_3120_, v_vals_3121_, v_heq_3122_, v_i_3123_, v_acc_3124_);
lean_dec_ref(v_vals_3121_);
lean_dec_ref(v_keys_3120_);
return v_res_3125_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__2(void){
_start:
{
lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3128_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__1));
v___x_3129_ = lean_unsigned_to_nat(6u);
v___x_3130_ = lean_unsigned_to_nat(172u);
v___x_3131_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__0));
v___x_3132_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_3133_ = l_mkPanicMessageWithDecl(v___x_3132_, v___x_3131_, v___x_3130_, v___x_3129_, v___x_3128_);
return v___x_3133_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__4(void){
_start:
{
lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; 
v___x_3135_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__3));
v___x_3136_ = lean_unsigned_to_nat(6u);
v___x_3137_ = lean_unsigned_to_nat(174u);
v___x_3138_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__0));
v___x_3139_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_3140_ = l_mkPanicMessageWithDecl(v___x_3139_, v___x_3138_, v___x_3137_, v___x_3136_, v___x_3135_);
return v___x_3140_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg(lean_object* v___x_3141_, lean_object* v_as_x27_3142_, lean_object* v_b_3143_, lean_object* v___y_3144_, lean_object* v___y_3145_, lean_object* v___y_3146_, lean_object* v___y_3147_, lean_object* v___y_3148_, lean_object* v___y_3149_, lean_object* v___y_3150_, lean_object* v___y_3151_, lean_object* v___y_3152_, lean_object* v___y_3153_){
_start:
{
if (lean_obj_tag(v_as_x27_3142_) == 0)
{
lean_object* v___x_3155_; 
v___x_3155_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3155_, 0, v_b_3143_);
return v___x_3155_;
}
else
{
lean_object* v_head_3156_; lean_object* v_tail_3157_; lean_object* v___y_3159_; uint8_t v___x_3179_; 
v_head_3156_ = lean_ctor_get(v_as_x27_3142_, 0);
v_tail_3157_ = lean_ctor_get(v_as_x27_3142_, 1);
v___x_3179_ = l_Lean_Meta_Grind_isCond(v_head_3156_);
if (v___x_3179_ == 0)
{
lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3180_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__2, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__2_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__2);
v___x_3181_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_3180_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_);
v___y_3159_ = v___x_3181_;
goto v___jp_3158_;
}
else
{
lean_object* v___x_3182_; lean_object* v___x_3183_; 
v___x_3182_ = lean_box(0);
lean_inc(v_head_3156_);
v___x_3183_ = l_Lean_Meta_Grind_condCondition(v_head_3156_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_);
if (lean_obj_tag(v___x_3183_) == 0)
{
lean_object* v_a_3184_; lean_object* v___x_3185_; 
v_a_3184_ = lean_ctor_get(v___x_3183_, 0);
lean_inc(v_a_3184_);
lean_dec_ref_known(v___x_3183_, 1);
v___x_3185_ = l_Lean_Meta_Sym_shareCommon(v_a_3184_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_);
if (lean_obj_tag(v___x_3185_) == 0)
{
lean_object* v_a_3186_; lean_object* v___x_3187_; lean_object* v___x_3188_; 
v_a_3186_ = lean_ctor_get(v___x_3185_, 0);
lean_inc(v_a_3186_);
lean_dec_ref_known(v___x_3185_, 1);
v___x_3187_ = lean_st_ref_get(v___y_3144_);
v___x_3188_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_3187_, v_a_3186_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_);
lean_dec(v___x_3187_);
if (lean_obj_tag(v___x_3188_) == 0)
{
lean_object* v_a_3189_; size_t v___x_3190_; size_t v___x_3191_; uint8_t v___x_3192_; 
v_a_3189_ = lean_ctor_get(v___x_3188_, 0);
lean_inc(v_a_3189_);
lean_dec_ref_known(v___x_3188_, 1);
v___x_3190_ = lean_ptr_addr(v_a_3189_);
lean_dec(v_a_3189_);
v___x_3191_ = lean_ptr_addr(v___x_3141_);
v___x_3192_ = lean_usize_dec_eq(v___x_3190_, v___x_3191_);
if (v___x_3192_ == 0)
{
lean_object* v___x_3193_; lean_object* v___x_3194_; 
v___x_3193_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__4, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__4_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__4);
v___x_3194_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_3193_, v___y_3144_, v___y_3145_, v___y_3146_, v___y_3147_, v___y_3148_, v___y_3149_, v___y_3150_, v___y_3151_, v___y_3152_, v___y_3153_);
v___y_3159_ = v___x_3194_;
goto v___jp_3158_;
}
else
{
v_as_x27_3142_ = v_tail_3157_;
v_b_3143_ = v___x_3182_;
goto _start;
}
}
else
{
lean_object* v_a_3196_; lean_object* v___x_3198_; uint8_t v_isShared_3199_; uint8_t v_isSharedCheck_3203_; 
v_a_3196_ = lean_ctor_get(v___x_3188_, 0);
v_isSharedCheck_3203_ = !lean_is_exclusive(v___x_3188_);
if (v_isSharedCheck_3203_ == 0)
{
v___x_3198_ = v___x_3188_;
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
else
{
lean_inc(v_a_3196_);
lean_dec(v___x_3188_);
v___x_3198_ = lean_box(0);
v_isShared_3199_ = v_isSharedCheck_3203_;
goto v_resetjp_3197_;
}
v_resetjp_3197_:
{
lean_object* v___x_3201_; 
if (v_isShared_3199_ == 0)
{
v___x_3201_ = v___x_3198_;
goto v_reusejp_3200_;
}
else
{
lean_object* v_reuseFailAlloc_3202_; 
v_reuseFailAlloc_3202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3202_, 0, v_a_3196_);
v___x_3201_ = v_reuseFailAlloc_3202_;
goto v_reusejp_3200_;
}
v_reusejp_3200_:
{
return v___x_3201_;
}
}
}
}
else
{
lean_object* v_a_3204_; lean_object* v___x_3206_; uint8_t v_isShared_3207_; uint8_t v_isSharedCheck_3211_; 
v_a_3204_ = lean_ctor_get(v___x_3185_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v___x_3185_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3206_ = v___x_3185_;
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
else
{
lean_inc(v_a_3204_);
lean_dec(v___x_3185_);
v___x_3206_ = lean_box(0);
v_isShared_3207_ = v_isSharedCheck_3211_;
goto v_resetjp_3205_;
}
v_resetjp_3205_:
{
lean_object* v___x_3209_; 
if (v_isShared_3207_ == 0)
{
v___x_3209_ = v___x_3206_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_a_3204_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
}
else
{
lean_object* v_a_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3219_; 
v_a_3212_ = lean_ctor_get(v___x_3183_, 0);
v_isSharedCheck_3219_ = !lean_is_exclusive(v___x_3183_);
if (v_isSharedCheck_3219_ == 0)
{
v___x_3214_ = v___x_3183_;
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_a_3212_);
lean_dec(v___x_3183_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3219_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v___x_3217_; 
if (v_isShared_3215_ == 0)
{
v___x_3217_ = v___x_3214_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_a_3212_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
return v___x_3217_;
}
}
}
}
v___jp_3158_:
{
if (lean_obj_tag(v___y_3159_) == 0)
{
lean_object* v_a_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3170_; 
v_a_3160_ = lean_ctor_get(v___y_3159_, 0);
v_isSharedCheck_3170_ = !lean_is_exclusive(v___y_3159_);
if (v_isSharedCheck_3170_ == 0)
{
v___x_3162_ = v___y_3159_;
v_isShared_3163_ = v_isSharedCheck_3170_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_a_3160_);
lean_dec(v___y_3159_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3170_;
goto v_resetjp_3161_;
}
v_resetjp_3161_:
{
if (lean_obj_tag(v_a_3160_) == 0)
{
lean_object* v_a_3164_; lean_object* v___x_3166_; 
v_a_3164_ = lean_ctor_get(v_a_3160_, 0);
lean_inc(v_a_3164_);
lean_dec_ref_known(v_a_3160_, 1);
if (v_isShared_3163_ == 0)
{
lean_ctor_set(v___x_3162_, 0, v_a_3164_);
v___x_3166_ = v___x_3162_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3164_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
else
{
lean_object* v_a_3168_; 
lean_del_object(v___x_3162_);
v_a_3168_ = lean_ctor_get(v_a_3160_, 0);
lean_inc(v_a_3168_);
lean_dec_ref_known(v_a_3160_, 1);
v_as_x27_3142_ = v_tail_3157_;
v_b_3143_ = v_a_3168_;
goto _start;
}
}
}
else
{
lean_object* v_a_3171_; lean_object* v___x_3173_; uint8_t v_isShared_3174_; uint8_t v_isSharedCheck_3178_; 
v_a_3171_ = lean_ctor_get(v___y_3159_, 0);
v_isSharedCheck_3178_ = !lean_is_exclusive(v___y_3159_);
if (v_isSharedCheck_3178_ == 0)
{
v___x_3173_ = v___y_3159_;
v_isShared_3174_ = v_isSharedCheck_3178_;
goto v_resetjp_3172_;
}
else
{
lean_inc(v_a_3171_);
lean_dec(v___y_3159_);
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
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___boxed(lean_object* v___x_3220_, lean_object* v_as_x27_3221_, lean_object* v_b_3222_, lean_object* v___y_3223_, lean_object* v___y_3224_, lean_object* v___y_3225_, lean_object* v___y_3226_, lean_object* v___y_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_, lean_object* v___y_3232_, lean_object* v___y_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg(v___x_3220_, v_as_x27_3221_, v_b_3222_, v___y_3223_, v___y_3224_, v___y_3225_, v___y_3226_, v___y_3227_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_, v___y_3232_);
lean_dec(v___y_3232_);
lean_dec_ref(v___y_3231_);
lean_dec(v___y_3230_);
lean_dec_ref(v___y_3229_);
lean_dec(v___y_3228_);
lean_dec_ref(v___y_3227_);
lean_dec(v___y_3226_);
lean_dec_ref(v___y_3225_);
lean_dec(v___y_3224_);
lean_dec(v___y_3223_);
lean_dec(v_as_x27_3221_);
lean_dec_ref(v___x_3220_);
return v_res_3234_;
}
}
static lean_object* _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3236_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__0));
v___x_3237_ = lean_unsigned_to_nat(4u);
v___x_3238_ = lean_unsigned_to_nat(170u);
v___x_3239_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg___closed__0));
v___x_3240_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_3241_ = l_mkPanicMessageWithDecl(v___x_3240_, v___x_3239_, v___x_3238_, v___x_3237_, v___x_3236_);
return v___x_3241_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg(lean_object* v_as_x27_3242_, lean_object* v_b_3243_, lean_object* v___y_3244_, lean_object* v___y_3245_, lean_object* v___y_3246_, lean_object* v___y_3247_, lean_object* v___y_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_, lean_object* v___y_3253_){
_start:
{
if (lean_obj_tag(v_as_x27_3242_) == 0)
{
lean_object* v___x_3255_; 
v___x_3255_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3255_, 0, v_b_3243_);
return v___x_3255_;
}
else
{
lean_object* v_head_3256_; lean_object* v_tail_3257_; lean_object* v_fst_3258_; lean_object* v_snd_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; 
v_head_3256_ = lean_ctor_get(v_as_x27_3242_, 0);
v_tail_3257_ = lean_ctor_get(v_as_x27_3242_, 1);
v_fst_3258_ = lean_ctor_get(v_head_3256_, 0);
v_snd_3259_ = lean_ctor_get(v_head_3256_, 1);
v___x_3260_ = lean_box(0);
v___x_3261_ = lean_st_ref_get(v___y_3244_);
lean_inc(v_fst_3258_);
v___x_3262_ = l_Lean_Meta_Grind_Goal_getRoot(v___x_3261_, v_fst_3258_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
lean_dec(v___x_3261_);
if (lean_obj_tag(v___x_3262_) == 0)
{
lean_object* v_a_3263_; size_t v___x_3264_; size_t v___x_3265_; uint8_t v___x_3266_; 
v_a_3263_ = lean_ctor_get(v___x_3262_, 0);
lean_inc(v_a_3263_);
lean_dec_ref_known(v___x_3262_, 1);
v___x_3264_ = lean_ptr_addr(v_a_3263_);
lean_dec(v_a_3263_);
v___x_3265_ = lean_ptr_addr(v_fst_3258_);
v___x_3266_ = lean_usize_dec_eq(v___x_3264_, v___x_3265_);
if (v___x_3266_ == 0)
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3267_ = lean_obj_once(&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__1, &l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__1_once, _init_l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___closed__1);
v___x_3268_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_3267_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
if (lean_obj_tag(v___x_3268_) == 0)
{
lean_object* v_a_3269_; lean_object* v___x_3271_; uint8_t v_isShared_3272_; uint8_t v_isSharedCheck_3279_; 
v_a_3269_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3279_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3279_ == 0)
{
v___x_3271_ = v___x_3268_;
v_isShared_3272_ = v_isSharedCheck_3279_;
goto v_resetjp_3270_;
}
else
{
lean_inc(v_a_3269_);
lean_dec(v___x_3268_);
v___x_3271_ = lean_box(0);
v_isShared_3272_ = v_isSharedCheck_3279_;
goto v_resetjp_3270_;
}
v_resetjp_3270_:
{
if (lean_obj_tag(v_a_3269_) == 0)
{
lean_object* v_a_3273_; lean_object* v___x_3275_; 
v_a_3273_ = lean_ctor_get(v_a_3269_, 0);
lean_inc(v_a_3273_);
lean_dec_ref_known(v_a_3269_, 1);
if (v_isShared_3272_ == 0)
{
lean_ctor_set(v___x_3271_, 0, v_a_3273_);
v___x_3275_ = v___x_3271_;
goto v_reusejp_3274_;
}
else
{
lean_object* v_reuseFailAlloc_3276_; 
v_reuseFailAlloc_3276_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3276_, 0, v_a_3273_);
v___x_3275_ = v_reuseFailAlloc_3276_;
goto v_reusejp_3274_;
}
v_reusejp_3274_:
{
return v___x_3275_;
}
}
else
{
lean_object* v_a_3277_; 
lean_del_object(v___x_3271_);
v_a_3277_ = lean_ctor_get(v_a_3269_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v_a_3269_, 1);
v_as_x27_3242_ = v_tail_3257_;
v_b_3243_ = v_a_3277_;
goto _start;
}
}
}
else
{
lean_object* v_a_3280_; lean_object* v___x_3282_; uint8_t v_isShared_3283_; uint8_t v_isSharedCheck_3287_; 
v_a_3280_ = lean_ctor_get(v___x_3268_, 0);
v_isSharedCheck_3287_ = !lean_is_exclusive(v___x_3268_);
if (v_isSharedCheck_3287_ == 0)
{
v___x_3282_ = v___x_3268_;
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
else
{
lean_inc(v_a_3280_);
lean_dec(v___x_3268_);
v___x_3282_ = lean_box(0);
v_isShared_3283_ = v_isSharedCheck_3287_;
goto v_resetjp_3281_;
}
v_resetjp_3281_:
{
lean_object* v___x_3285_; 
if (v_isShared_3283_ == 0)
{
v___x_3285_ = v___x_3282_;
goto v_reusejp_3284_;
}
else
{
lean_object* v_reuseFailAlloc_3286_; 
v_reuseFailAlloc_3286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3286_, 0, v_a_3280_);
v___x_3285_ = v_reuseFailAlloc_3286_;
goto v_reusejp_3284_;
}
v_reusejp_3284_:
{
return v___x_3285_;
}
}
}
}
else
{
lean_object* v___x_3288_; lean_object* v___x_3289_; 
v___x_3288_ = l_Lean_Meta_Grind_ParentSet_elems(v_snd_3259_);
v___x_3289_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg(v_fst_3258_, v___x_3288_, v___x_3260_, v___y_3244_, v___y_3245_, v___y_3246_, v___y_3247_, v___y_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, v___y_3253_);
lean_dec(v___x_3288_);
if (lean_obj_tag(v___x_3289_) == 0)
{
lean_dec_ref_known(v___x_3289_, 1);
v_as_x27_3242_ = v_tail_3257_;
v_b_3243_ = v___x_3260_;
goto _start;
}
else
{
return v___x_3289_;
}
}
}
else
{
lean_object* v_a_3291_; lean_object* v___x_3293_; uint8_t v_isShared_3294_; uint8_t v_isSharedCheck_3298_; 
v_a_3291_ = lean_ctor_get(v___x_3262_, 0);
v_isSharedCheck_3298_ = !lean_is_exclusive(v___x_3262_);
if (v_isSharedCheck_3298_ == 0)
{
v___x_3293_ = v___x_3262_;
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
else
{
lean_inc(v_a_3291_);
lean_dec(v___x_3262_);
v___x_3293_ = lean_box(0);
v_isShared_3294_ = v_isSharedCheck_3298_;
goto v_resetjp_3292_;
}
v_resetjp_3292_:
{
lean_object* v___x_3296_; 
if (v_isShared_3294_ == 0)
{
v___x_3296_ = v___x_3293_;
goto v_reusejp_3295_;
}
else
{
lean_object* v_reuseFailAlloc_3297_; 
v_reuseFailAlloc_3297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3297_, 0, v_a_3291_);
v___x_3296_ = v_reuseFailAlloc_3297_;
goto v_reusejp_3295_;
}
v_reusejp_3295_:
{
return v___x_3296_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg___boxed(lean_object* v_as_x27_3299_, lean_object* v_b_3300_, lean_object* v___y_3301_, lean_object* v___y_3302_, lean_object* v___y_3303_, lean_object* v___y_3304_, lean_object* v___y_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_, lean_object* v___y_3311_){
_start:
{
lean_object* v_res_3312_; 
v_res_3312_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg(v_as_x27_3299_, v_b_3300_, v___y_3301_, v___y_3302_, v___y_3303_, v___y_3304_, v___y_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_);
lean_dec(v___y_3310_);
lean_dec_ref(v___y_3309_);
lean_dec(v___y_3308_);
lean_dec_ref(v___y_3307_);
lean_dec(v___y_3306_);
lean_dec_ref(v___y_3305_);
lean_dec(v___y_3304_);
lean_dec_ref(v___y_3303_);
lean_dec(v___y_3302_);
lean_dec(v___y_3301_);
lean_dec(v_as_x27_3299_);
return v_res_3312_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___redArg(lean_object* v_map_3313_, lean_object* v_f_3314_, lean_object* v_init_3315_){
_start:
{
lean_object* v___f_3316_; lean_object* v___x_3317_; 
v___f_3316_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3316_, 0, v_f_3314_);
v___x_3317_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v___f_3316_, v_map_3313_, v_init_3315_);
return v___x_3317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___redArg___boxed(lean_object* v_map_3318_, lean_object* v_f_3319_, lean_object* v_init_3320_){
_start:
{
lean_object* v_res_3321_; 
v_res_3321_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___redArg(v_map_3318_, v_f_3319_, v_init_3320_);
lean_dec_ref(v_map_3318_);
return v_res_3321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___redArg(lean_object* v_m_3322_){
_start:
{
lean_object* v___f_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; 
v___f_3323_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0___redArg___closed__0));
v___x_3324_ = lean_box(0);
v___x_3325_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___redArg(v_m_3322_, v___f_3323_, v___x_3324_);
return v___x_3325_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___redArg___boxed(lean_object* v_m_3326_){
_start:
{
lean_object* v_res_3327_; 
v_res_3327_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___redArg(v_m_3326_);
lean_dec_ref(v_m_3326_);
return v_res_3327_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents(lean_object* v_a_3328_, lean_object* v_a_3329_, lean_object* v_a_3330_, lean_object* v_a_3331_, lean_object* v_a_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_, lean_object* v_a_3337_){
_start:
{
lean_object* v___x_3339_; lean_object* v_toGoalState_3340_; lean_object* v_condParents_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3339_ = lean_st_ref_get(v_a_3328_);
v_toGoalState_3340_ = lean_ctor_get(v___x_3339_, 0);
lean_inc_ref(v_toGoalState_3340_);
lean_dec(v___x_3339_);
v_condParents_3341_ = lean_ctor_get(v_toGoalState_3340_, 4);
lean_inc_ref(v_condParents_3341_);
lean_dec_ref(v_toGoalState_3340_);
v___x_3342_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___redArg(v_condParents_3341_);
lean_dec_ref(v_condParents_3341_);
v___x_3343_ = lean_box(0);
v___x_3344_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg(v___x_3342_, v___x_3343_, v_a_3328_, v_a_3329_, v_a_3330_, v_a_3331_, v_a_3332_, v_a_3333_, v_a_3334_, v_a_3335_, v_a_3336_, v_a_3337_);
lean_dec(v___x_3342_);
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3351_ == 0)
{
lean_object* v_unused_3352_; 
v_unused_3352_ = lean_ctor_get(v___x_3344_, 0);
lean_dec(v_unused_3352_);
v___x_3346_ = v___x_3344_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_dec(v___x_3344_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 0, v___x_3343_);
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v___x_3343_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
else
{
return v___x_3344_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents___boxed(lean_object* v_a_3353_, lean_object* v_a_3354_, lean_object* v_a_3355_, lean_object* v_a_3356_, lean_object* v_a_3357_, lean_object* v_a_3358_, lean_object* v_a_3359_, lean_object* v_a_3360_, lean_object* v_a_3361_, lean_object* v_a_3362_, lean_object* v_a_3363_){
_start:
{
lean_object* v_res_3364_; 
v_res_3364_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents(v_a_3353_, v_a_3354_, v_a_3355_, v_a_3356_, v_a_3357_, v_a_3358_, v_a_3359_, v_a_3360_, v_a_3361_, v_a_3362_);
lean_dec(v_a_3362_);
lean_dec_ref(v_a_3361_);
lean_dec(v_a_3360_);
lean_dec_ref(v_a_3359_);
lean_dec(v_a_3358_);
lean_dec_ref(v_a_3357_);
lean_dec(v_a_3356_);
lean_dec_ref(v_a_3355_);
lean_dec(v_a_3354_);
lean_dec(v_a_3353_);
return v_res_3364_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0(lean_object* v_00_u03b2_3365_, lean_object* v_m_3366_){
_start:
{
lean_object* v___x_3367_; 
v___x_3367_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___redArg(v_m_3366_);
return v___x_3367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0___boxed(lean_object* v_00_u03b2_3368_, lean_object* v_m_3369_){
_start:
{
lean_object* v_res_3370_; 
v_res_3370_ = l_Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0(v_00_u03b2_3368_, v_m_3369_);
lean_dec_ref(v_m_3369_);
return v_res_3370_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1(lean_object* v___x_3371_, lean_object* v_as_3372_, lean_object* v_as_x27_3373_, lean_object* v_b_3374_, lean_object* v_a_3375_, lean_object* v___y_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_, lean_object* v___y_3384_, lean_object* v___y_3385_){
_start:
{
lean_object* v___x_3387_; 
v___x_3387_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___redArg(v___x_3371_, v_as_x27_3373_, v_b_3374_, v___y_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_, v___y_3383_, v___y_3384_, v___y_3385_);
return v___x_3387_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1___boxed(lean_object* v___x_3388_, lean_object* v_as_3389_, lean_object* v_as_x27_3390_, lean_object* v_b_3391_, lean_object* v_a_3392_, lean_object* v___y_3393_, lean_object* v___y_3394_, lean_object* v___y_3395_, lean_object* v___y_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_, lean_object* v___y_3401_, lean_object* v___y_3402_, lean_object* v___y_3403_){
_start:
{
lean_object* v_res_3404_; 
v_res_3404_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__1(v___x_3388_, v_as_3389_, v_as_x27_3390_, v_b_3391_, v_a_3392_, v___y_3393_, v___y_3394_, v___y_3395_, v___y_3396_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, v___y_3401_, v___y_3402_);
lean_dec(v___y_3402_);
lean_dec_ref(v___y_3401_);
lean_dec(v___y_3400_);
lean_dec_ref(v___y_3399_);
lean_dec(v___y_3398_);
lean_dec_ref(v___y_3397_);
lean_dec(v___y_3396_);
lean_dec_ref(v___y_3395_);
lean_dec(v___y_3394_);
lean_dec(v___y_3393_);
lean_dec(v_as_x27_3390_);
lean_dec(v_as_3389_);
lean_dec_ref(v___x_3388_);
return v_res_3404_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2(lean_object* v_as_3405_, lean_object* v_as_x27_3406_, lean_object* v_b_3407_, lean_object* v_a_3408_, lean_object* v___y_3409_, lean_object* v___y_3410_, lean_object* v___y_3411_, lean_object* v___y_3412_, lean_object* v___y_3413_, lean_object* v___y_3414_, lean_object* v___y_3415_, lean_object* v___y_3416_, lean_object* v___y_3417_, lean_object* v___y_3418_){
_start:
{
lean_object* v___x_3420_; 
v___x_3420_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___redArg(v_as_x27_3406_, v_b_3407_, v___y_3409_, v___y_3410_, v___y_3411_, v___y_3412_, v___y_3413_, v___y_3414_, v___y_3415_, v___y_3416_, v___y_3417_, v___y_3418_);
return v___x_3420_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2___boxed(lean_object* v_as_3421_, lean_object* v_as_x27_3422_, lean_object* v_b_3423_, lean_object* v_a_3424_, lean_object* v___y_3425_, lean_object* v___y_3426_, lean_object* v___y_3427_, lean_object* v___y_3428_, lean_object* v___y_3429_, lean_object* v___y_3430_, lean_object* v___y_3431_, lean_object* v___y_3432_, lean_object* v___y_3433_, lean_object* v___y_3434_, lean_object* v___y_3435_){
_start:
{
lean_object* v_res_3436_; 
v_res_3436_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__2(v_as_3421_, v_as_x27_3422_, v_b_3423_, v_a_3424_, v___y_3425_, v___y_3426_, v___y_3427_, v___y_3428_, v___y_3429_, v___y_3430_, v___y_3431_, v___y_3432_, v___y_3433_, v___y_3434_);
lean_dec(v___y_3434_);
lean_dec_ref(v___y_3433_);
lean_dec(v___y_3432_);
lean_dec_ref(v___y_3431_);
lean_dec(v___y_3430_);
lean_dec_ref(v___y_3429_);
lean_dec(v___y_3428_);
lean_dec_ref(v___y_3427_);
lean_dec(v___y_3426_);
lean_dec(v___y_3425_);
lean_dec(v_as_x27_3422_);
lean_dec(v_as_3421_);
return v_res_3436_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0(lean_object* v_00_u03c3_3437_, lean_object* v_00_u03b2_3438_, lean_object* v_map_3439_, lean_object* v_f_3440_, lean_object* v_init_3441_){
_start:
{
lean_object* v___x_3442_; 
v___x_3442_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___redArg(v_map_3439_, v_f_3440_, v_init_3441_);
return v___x_3442_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0___boxed(lean_object* v_00_u03c3_3443_, lean_object* v_00_u03b2_3444_, lean_object* v_map_3445_, lean_object* v_f_3446_, lean_object* v_init_3447_){
_start:
{
lean_object* v_res_3448_; 
v_res_3448_ = l_Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0(v_00_u03c3_3443_, v_00_u03b2_3444_, v_map_3445_, v_f_3446_, v_init_3447_);
lean_dec_ref(v_map_3445_);
return v_res_3448_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1___redArg(lean_object* v_map_3449_, lean_object* v_f_3450_, lean_object* v_init_3451_){
_start:
{
lean_object* v___x_3452_; 
v___x_3452_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3450_, v_map_3449_, v_init_3451_);
return v___x_3452_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_map_3453_, lean_object* v_f_3454_, lean_object* v_init_3455_){
_start:
{
lean_object* v_res_3456_; 
v_res_3456_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1___redArg(v_map_3453_, v_f_3454_, v_init_3455_);
lean_dec_ref(v_map_3453_);
return v_res_3456_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1(lean_object* v_00_u03c3_3457_, lean_object* v_00_u03b2_3458_, lean_object* v_map_3459_, lean_object* v_f_3460_, lean_object* v_init_3461_){
_start:
{
lean_object* v___x_3462_; 
v___x_3462_ = l_Lean_PersistentHashMap_foldlMAux___at___00Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00Lean_PersistentHashSet_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable_spec__0_spec__0_spec__1_spec__3_spec__5___redArg(v_f_3460_, v_map_3459_, v_init_3461_);
return v___x_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03c3_3463_, lean_object* v_00_u03b2_3464_, lean_object* v_map_3465_, lean_object* v_f_3466_, lean_object* v_init_3467_){
_start:
{
lean_object* v_res_3468_; 
v_res_3468_ = l_Lean_PersistentHashMap_foldlM___at___00Lean_PersistentHashMap_foldl___at___00Lean_PersistentHashMap_toList___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents_spec__0_spec__0_spec__1(v_00_u03c3_3463_, v_00_u03b2_3464_, v_map_3465_, v_f_3466_, v_init_3467_);
lean_dec_ref(v_map_3465_);
return v_res_3468_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_checkInvariants_spec__0(lean_object* v_opts_3469_, lean_object* v_opt_3470_){
_start:
{
lean_object* v_name_3471_; lean_object* v_defValue_3472_; lean_object* v_map_3473_; lean_object* v___x_3474_; 
v_name_3471_ = lean_ctor_get(v_opt_3470_, 0);
v_defValue_3472_ = lean_ctor_get(v_opt_3470_, 1);
v_map_3473_ = lean_ctor_get(v_opts_3469_, 0);
v___x_3474_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_3473_, v_name_3471_);
if (lean_obj_tag(v___x_3474_) == 0)
{
uint8_t v___x_3475_; 
v___x_3475_ = lean_unbox(v_defValue_3472_);
return v___x_3475_;
}
else
{
lean_object* v_val_3476_; 
v_val_3476_ = lean_ctor_get(v___x_3474_, 0);
lean_inc(v_val_3476_);
lean_dec_ref_known(v___x_3474_, 1);
if (lean_obj_tag(v_val_3476_) == 1)
{
uint8_t v_v_3477_; 
v_v_3477_ = lean_ctor_get_uint8(v_val_3476_, 0);
lean_dec_ref_known(v_val_3476_, 0);
return v_v_3477_;
}
else
{
uint8_t v___x_3478_; 
lean_dec(v_val_3476_);
v___x_3478_ = lean_unbox(v_defValue_3472_);
return v___x_3478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_checkInvariants_spec__0___boxed(lean_object* v_opts_3479_, lean_object* v_opt_3480_){
_start:
{
uint8_t v_res_3481_; lean_object* v_r_3482_; 
v_res_3481_ = l_Lean_Option_get___at___00Lean_Meta_Grind_checkInvariants_spec__0(v_opts_3479_, v_opt_3480_);
lean_dec_ref(v_opt_3480_);
lean_dec_ref(v_opts_3479_);
v_r_3482_ = lean_box(v_res_3481_);
return v_r_3482_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2(void){
_start:
{
lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; 
v___x_3485_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__1));
v___x_3486_ = lean_unsigned_to_nat(8u);
v___x_3487_ = lean_unsigned_to_nat(187u);
v___x_3488_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__0));
v___x_3489_ = ((lean_object*)(l___private_Init_While_0__repeatM_erased___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc_spec__3___redArg___lam__0___closed__0));
v___x_3490_ = l_mkPanicMessageWithDecl(v___x_3489_, v___x_3488_, v___x_3487_, v___x_3486_, v___x_3485_);
return v___x_3490_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5(lean_object* v_as_3491_, size_t v_sz_3492_, size_t v_i_3493_, lean_object* v_b_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_, lean_object* v___y_3498_, lean_object* v___y_3499_, lean_object* v___y_3500_, lean_object* v___y_3501_, lean_object* v___y_3502_, lean_object* v___y_3503_, lean_object* v___y_3504_){
_start:
{
uint8_t v___x_3506_; 
v___x_3506_ = lean_usize_dec_lt(v_i_3493_, v_sz_3492_);
if (v___x_3506_ == 0)
{
lean_object* v___x_3507_; 
v___x_3507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3507_, 0, v_b_3494_);
return v___x_3507_;
}
else
{
lean_object* v_snd_3508_; lean_object* v___x_3510_; uint8_t v_isShared_3511_; uint8_t v_isSharedCheck_3605_; 
v_snd_3508_ = lean_ctor_get(v_b_3494_, 1);
v_isSharedCheck_3605_ = !lean_is_exclusive(v_b_3494_);
if (v_isSharedCheck_3605_ == 0)
{
lean_object* v_unused_3606_; 
v_unused_3606_ = lean_ctor_get(v_b_3494_, 0);
lean_dec(v_unused_3606_);
v___x_3510_ = v_b_3494_;
v_isShared_3511_ = v_isSharedCheck_3605_;
goto v_resetjp_3509_;
}
else
{
lean_inc(v_snd_3508_);
lean_dec(v_b_3494_);
v___x_3510_ = lean_box(0);
v_isShared_3511_ = v_isSharedCheck_3605_;
goto v_resetjp_3509_;
}
v_resetjp_3509_:
{
lean_object* v___x_3512_; lean_object* v_a_3514_; lean_object* v___x_3521_; lean_object* v_a_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; 
v___x_3512_ = lean_box(0);
v___x_3521_ = lean_box(0);
v_a_3522_ = lean_array_uget_borrowed(v_as_3491_, v_i_3493_);
v___x_3523_ = lean_st_ref_get(v___y_3495_);
lean_inc(v_a_3522_);
v___x_3524_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3523_, v_a_3522_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_);
lean_dec(v___x_3523_);
if (lean_obj_tag(v___x_3524_) == 0)
{
lean_object* v_a_3525_; lean_object* v___y_3527_; lean_object* v___y_3528_; lean_object* v___y_3529_; lean_object* v___y_3530_; lean_object* v___y_3531_; lean_object* v___y_3532_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v_self_3547_; uint8_t v_interpreted_3548_; lean_object* v___x_3549_; 
v_a_3525_ = lean_ctor_get(v___x_3524_, 0);
lean_inc(v_a_3525_);
lean_dec_ref_known(v___x_3524_, 1);
v_self_3547_ = lean_ctor_get(v_a_3525_, 0);
v_interpreted_3548_ = lean_ctor_get_uint8(v_a_3525_, sizeof(void*)*12 + 1);
lean_inc_ref(v_self_3547_);
v___x_3549_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents(v_self_3547_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_dec_ref_known(v___x_3549_, 1);
if (v_interpreted_3548_ == 0)
{
lean_dec(v_snd_3508_);
v___y_3527_ = v___y_3495_;
v___y_3528_ = v___y_3496_;
v___y_3529_ = v___y_3497_;
v___y_3530_ = v___y_3498_;
v___y_3531_ = v___y_3499_;
v___y_3532_ = v___y_3500_;
v___y_3533_ = v___y_3501_;
v___y_3534_ = v___y_3502_;
v___y_3535_ = v___y_3503_;
v___y_3536_ = v___y_3504_;
goto v___jp_3526_;
}
else
{
lean_object* v___x_3550_; 
lean_inc_ref(v_self_3547_);
v___x_3550_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_self_3547_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_);
if (lean_obj_tag(v___x_3550_) == 0)
{
lean_object* v_a_3551_; 
v_a_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3550_, 1);
if (lean_obj_tag(v_a_3551_) == 0)
{
lean_dec(v_snd_3508_);
v___y_3527_ = v___y_3495_;
v___y_3528_ = v___y_3496_;
v___y_3529_ = v___y_3497_;
v___y_3530_ = v___y_3498_;
v___y_3531_ = v___y_3499_;
v___y_3532_ = v___y_3500_;
v___y_3533_ = v___y_3501_;
v___y_3534_ = v___y_3502_;
v___y_3535_ = v___y_3503_;
v___y_3536_ = v___y_3504_;
goto v___jp_3526_;
}
else
{
lean_object* v___x_3553_; uint8_t v_isShared_3554_; uint8_t v_isSharedCheck_3579_; 
lean_dec(v_a_3525_);
v_isSharedCheck_3579_ = !lean_is_exclusive(v_a_3551_);
if (v_isSharedCheck_3579_ == 0)
{
lean_object* v_unused_3580_; 
v_unused_3580_ = lean_ctor_get(v_a_3551_, 0);
lean_dec(v_unused_3580_);
v___x_3553_ = v_a_3551_;
v_isShared_3554_ = v_isSharedCheck_3579_;
goto v_resetjp_3552_;
}
else
{
lean_dec(v_a_3551_);
v___x_3553_ = lean_box(0);
v_isShared_3554_ = v_isSharedCheck_3579_;
goto v_resetjp_3552_;
}
v_resetjp_3552_:
{
lean_object* v___x_3555_; lean_object* v___x_3556_; 
v___x_3555_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2);
v___x_3556_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_3555_, v___y_3495_, v___y_3496_, v___y_3497_, v___y_3498_, v___y_3499_, v___y_3500_, v___y_3501_, v___y_3502_, v___y_3503_, v___y_3504_);
if (lean_obj_tag(v___x_3556_) == 0)
{
lean_object* v_a_3557_; lean_object* v___x_3559_; uint8_t v_isShared_3560_; uint8_t v_isSharedCheck_3570_; 
v_a_3557_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3570_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3570_ == 0)
{
v___x_3559_ = v___x_3556_;
v_isShared_3560_ = v_isSharedCheck_3570_;
goto v_resetjp_3558_;
}
else
{
lean_inc(v_a_3557_);
lean_dec(v___x_3556_);
v___x_3559_ = lean_box(0);
v_isShared_3560_ = v_isSharedCheck_3570_;
goto v_resetjp_3558_;
}
v_resetjp_3558_:
{
if (lean_obj_tag(v_a_3557_) == 0)
{
lean_object* v_a_3561_; lean_object* v___x_3563_; 
lean_del_object(v___x_3510_);
v_a_3561_ = lean_ctor_get(v_a_3557_, 0);
lean_inc(v_a_3561_);
lean_dec_ref_known(v_a_3557_, 1);
if (v_isShared_3554_ == 0)
{
lean_ctor_set(v___x_3553_, 0, v_a_3561_);
v___x_3563_ = v___x_3553_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3568_; 
v_reuseFailAlloc_3568_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3568_, 0, v_a_3561_);
v___x_3563_ = v_reuseFailAlloc_3568_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
lean_object* v___x_3564_; lean_object* v___x_3566_; 
v___x_3564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3563_);
lean_ctor_set(v___x_3564_, 1, v_snd_3508_);
if (v_isShared_3560_ == 0)
{
lean_ctor_set(v___x_3559_, 0, v___x_3564_);
v___x_3566_ = v___x_3559_;
goto v_reusejp_3565_;
}
else
{
lean_object* v_reuseFailAlloc_3567_; 
v_reuseFailAlloc_3567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3567_, 0, v___x_3564_);
v___x_3566_ = v_reuseFailAlloc_3567_;
goto v_reusejp_3565_;
}
v_reusejp_3565_:
{
return v___x_3566_;
}
}
}
else
{
lean_object* v_a_3569_; 
lean_del_object(v___x_3559_);
lean_del_object(v___x_3553_);
lean_dec(v_snd_3508_);
v_a_3569_ = lean_ctor_get(v_a_3557_, 0);
lean_inc(v_a_3569_);
lean_dec_ref_known(v_a_3557_, 1);
v_a_3514_ = v_a_3569_;
goto v___jp_3513_;
}
}
}
else
{
lean_object* v_a_3571_; lean_object* v___x_3573_; uint8_t v_isShared_3574_; uint8_t v_isSharedCheck_3578_; 
lean_del_object(v___x_3553_);
lean_del_object(v___x_3510_);
lean_dec(v_snd_3508_);
v_a_3571_ = lean_ctor_get(v___x_3556_, 0);
v_isSharedCheck_3578_ = !lean_is_exclusive(v___x_3556_);
if (v_isSharedCheck_3578_ == 0)
{
v___x_3573_ = v___x_3556_;
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
else
{
lean_inc(v_a_3571_);
lean_dec(v___x_3556_);
v___x_3573_ = lean_box(0);
v_isShared_3574_ = v_isSharedCheck_3578_;
goto v_resetjp_3572_;
}
v_resetjp_3572_:
{
lean_object* v___x_3576_; 
if (v_isShared_3574_ == 0)
{
v___x_3576_ = v___x_3573_;
goto v_reusejp_3575_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v_a_3571_);
v___x_3576_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3575_;
}
v_reusejp_3575_:
{
return v___x_3576_;
}
}
}
}
}
}
else
{
lean_object* v_a_3581_; lean_object* v___x_3583_; uint8_t v_isShared_3584_; uint8_t v_isSharedCheck_3588_; 
lean_dec(v_a_3525_);
lean_del_object(v___x_3510_);
lean_dec(v_snd_3508_);
v_a_3581_ = lean_ctor_get(v___x_3550_, 0);
v_isSharedCheck_3588_ = !lean_is_exclusive(v___x_3550_);
if (v_isSharedCheck_3588_ == 0)
{
v___x_3583_ = v___x_3550_;
v_isShared_3584_ = v_isSharedCheck_3588_;
goto v_resetjp_3582_;
}
else
{
lean_inc(v_a_3581_);
lean_dec(v___x_3550_);
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
}
else
{
lean_object* v_a_3589_; lean_object* v___x_3591_; uint8_t v_isShared_3592_; uint8_t v_isSharedCheck_3596_; 
lean_dec(v_a_3525_);
lean_del_object(v___x_3510_);
lean_dec(v_snd_3508_);
v_a_3589_ = lean_ctor_get(v___x_3549_, 0);
v_isSharedCheck_3596_ = !lean_is_exclusive(v___x_3549_);
if (v_isSharedCheck_3596_ == 0)
{
v___x_3591_ = v___x_3549_;
v_isShared_3592_ = v_isSharedCheck_3596_;
goto v_resetjp_3590_;
}
else
{
lean_inc(v_a_3589_);
lean_dec(v___x_3549_);
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
v___jp_3526_:
{
uint8_t v___x_3537_; 
v___x_3537_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_3525_);
if (v___x_3537_ == 0)
{
lean_dec(v_a_3525_);
v_a_3514_ = v___x_3521_;
goto v___jp_3513_;
}
else
{
lean_object* v___x_3538_; 
v___x_3538_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc(v_a_3525_, v___y_3527_, v___y_3528_, v___y_3529_, v___y_3530_, v___y_3531_, v___y_3532_, v___y_3533_, v___y_3534_, v___y_3535_, v___y_3536_);
if (lean_obj_tag(v___x_3538_) == 0)
{
lean_dec_ref_known(v___x_3538_, 1);
v_a_3514_ = v___x_3521_;
goto v___jp_3513_;
}
else
{
lean_object* v_a_3539_; lean_object* v___x_3541_; uint8_t v_isShared_3542_; uint8_t v_isSharedCheck_3546_; 
lean_del_object(v___x_3510_);
v_a_3539_ = lean_ctor_get(v___x_3538_, 0);
v_isSharedCheck_3546_ = !lean_is_exclusive(v___x_3538_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3541_ = v___x_3538_;
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
else
{
lean_inc(v_a_3539_);
lean_dec(v___x_3538_);
v___x_3541_ = lean_box(0);
v_isShared_3542_ = v_isSharedCheck_3546_;
goto v_resetjp_3540_;
}
v_resetjp_3540_:
{
lean_object* v___x_3544_; 
if (v_isShared_3542_ == 0)
{
v___x_3544_ = v___x_3541_;
goto v_reusejp_3543_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v_a_3539_);
v___x_3544_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3543_;
}
v_reusejp_3543_:
{
return v___x_3544_;
}
}
}
}
}
}
else
{
lean_object* v_a_3597_; lean_object* v___x_3599_; uint8_t v_isShared_3600_; uint8_t v_isSharedCheck_3604_; 
lean_del_object(v___x_3510_);
lean_dec(v_snd_3508_);
v_a_3597_ = lean_ctor_get(v___x_3524_, 0);
v_isSharedCheck_3604_ = !lean_is_exclusive(v___x_3524_);
if (v_isSharedCheck_3604_ == 0)
{
v___x_3599_ = v___x_3524_;
v_isShared_3600_ = v_isSharedCheck_3604_;
goto v_resetjp_3598_;
}
else
{
lean_inc(v_a_3597_);
lean_dec(v___x_3524_);
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
v___jp_3513_:
{
lean_object* v___x_3516_; 
if (v_isShared_3511_ == 0)
{
lean_ctor_set(v___x_3510_, 1, v_a_3514_);
lean_ctor_set(v___x_3510_, 0, v___x_3512_);
v___x_3516_ = v___x_3510_;
goto v_reusejp_3515_;
}
else
{
lean_object* v_reuseFailAlloc_3520_; 
v_reuseFailAlloc_3520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3520_, 0, v___x_3512_);
lean_ctor_set(v_reuseFailAlloc_3520_, 1, v_a_3514_);
v___x_3516_ = v_reuseFailAlloc_3520_;
goto v_reusejp_3515_;
}
v_reusejp_3515_:
{
size_t v___x_3517_; size_t v___x_3518_; 
v___x_3517_ = ((size_t)1ULL);
v___x_3518_ = lean_usize_add(v_i_3493_, v___x_3517_);
v_i_3493_ = v___x_3518_;
v_b_3494_ = v___x_3516_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___boxed(lean_object* v_as_3607_, lean_object* v_sz_3608_, lean_object* v_i_3609_, lean_object* v_b_3610_, lean_object* v___y_3611_, lean_object* v___y_3612_, lean_object* v___y_3613_, lean_object* v___y_3614_, lean_object* v___y_3615_, lean_object* v___y_3616_, lean_object* v___y_3617_, lean_object* v___y_3618_, lean_object* v___y_3619_, lean_object* v___y_3620_, lean_object* v___y_3621_){
_start:
{
size_t v_sz_boxed_3622_; size_t v_i_boxed_3623_; lean_object* v_res_3624_; 
v_sz_boxed_3622_ = lean_unbox_usize(v_sz_3608_);
lean_dec(v_sz_3608_);
v_i_boxed_3623_ = lean_unbox_usize(v_i_3609_);
lean_dec(v_i_3609_);
v_res_3624_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5(v_as_3607_, v_sz_boxed_3622_, v_i_boxed_3623_, v_b_3610_, v___y_3611_, v___y_3612_, v___y_3613_, v___y_3614_, v___y_3615_, v___y_3616_, v___y_3617_, v___y_3618_, v___y_3619_, v___y_3620_);
lean_dec(v___y_3620_);
lean_dec_ref(v___y_3619_);
lean_dec(v___y_3618_);
lean_dec_ref(v___y_3617_);
lean_dec(v___y_3616_);
lean_dec_ref(v___y_3615_);
lean_dec(v___y_3614_);
lean_dec_ref(v___y_3613_);
lean_dec(v___y_3612_);
lean_dec(v___y_3611_);
lean_dec_ref(v_as_3607_);
return v_res_3624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2(lean_object* v_as_3625_, size_t v_sz_3626_, size_t v_i_3627_, lean_object* v_b_3628_, lean_object* v___y_3629_, lean_object* v___y_3630_, lean_object* v___y_3631_, lean_object* v___y_3632_, lean_object* v___y_3633_, lean_object* v___y_3634_, lean_object* v___y_3635_, lean_object* v___y_3636_, lean_object* v___y_3637_, lean_object* v___y_3638_){
_start:
{
uint8_t v___x_3640_; 
v___x_3640_ = lean_usize_dec_lt(v_i_3627_, v_sz_3626_);
if (v___x_3640_ == 0)
{
lean_object* v___x_3641_; 
v___x_3641_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3641_, 0, v_b_3628_);
return v___x_3641_;
}
else
{
lean_object* v_snd_3642_; lean_object* v___x_3644_; uint8_t v_isShared_3645_; uint8_t v_isSharedCheck_3739_; 
v_snd_3642_ = lean_ctor_get(v_b_3628_, 1);
v_isSharedCheck_3739_ = !lean_is_exclusive(v_b_3628_);
if (v_isSharedCheck_3739_ == 0)
{
lean_object* v_unused_3740_; 
v_unused_3740_ = lean_ctor_get(v_b_3628_, 0);
lean_dec(v_unused_3740_);
v___x_3644_ = v_b_3628_;
v_isShared_3645_ = v_isSharedCheck_3739_;
goto v_resetjp_3643_;
}
else
{
lean_inc(v_snd_3642_);
lean_dec(v_b_3628_);
v___x_3644_ = lean_box(0);
v_isShared_3645_ = v_isSharedCheck_3739_;
goto v_resetjp_3643_;
}
v_resetjp_3643_:
{
lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v_a_3649_; lean_object* v_a_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3646_ = lean_box(0);
v___x_3647_ = lean_box(0);
v_a_3656_ = lean_array_uget_borrowed(v_as_3625_, v_i_3627_);
v___x_3657_ = lean_st_ref_get(v___y_3629_);
lean_inc(v_a_3656_);
v___x_3658_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3657_, v_a_3656_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
lean_dec(v___x_3657_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v_a_3659_; lean_object* v___y_3661_; lean_object* v___y_3662_; lean_object* v___y_3663_; lean_object* v___y_3664_; lean_object* v___y_3665_; lean_object* v___y_3666_; lean_object* v___y_3667_; lean_object* v___y_3668_; lean_object* v___y_3669_; lean_object* v___y_3670_; lean_object* v_self_3681_; uint8_t v_interpreted_3682_; lean_object* v___x_3683_; 
v_a_3659_ = lean_ctor_get(v___x_3658_, 0);
lean_inc(v_a_3659_);
lean_dec_ref_known(v___x_3658_, 1);
v_self_3681_ = lean_ctor_get(v_a_3659_, 0);
v_interpreted_3682_ = lean_ctor_get_uint8(v_a_3659_, sizeof(void*)*12 + 1);
lean_inc_ref(v_self_3681_);
v___x_3683_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents(v_self_3681_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
if (lean_obj_tag(v___x_3683_) == 0)
{
lean_dec_ref_known(v___x_3683_, 1);
if (v_interpreted_3682_ == 0)
{
lean_dec(v_snd_3642_);
v___y_3661_ = v___y_3629_;
v___y_3662_ = v___y_3630_;
v___y_3663_ = v___y_3631_;
v___y_3664_ = v___y_3632_;
v___y_3665_ = v___y_3633_;
v___y_3666_ = v___y_3634_;
v___y_3667_ = v___y_3635_;
v___y_3668_ = v___y_3636_;
v___y_3669_ = v___y_3637_;
v___y_3670_ = v___y_3638_;
goto v___jp_3660_;
}
else
{
lean_object* v___x_3684_; 
lean_inc_ref(v_self_3681_);
v___x_3684_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_self_3681_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
if (lean_obj_tag(v___x_3684_) == 0)
{
lean_object* v_a_3685_; 
v_a_3685_ = lean_ctor_get(v___x_3684_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v___x_3684_, 1);
if (lean_obj_tag(v_a_3685_) == 0)
{
lean_dec(v_snd_3642_);
v___y_3661_ = v___y_3629_;
v___y_3662_ = v___y_3630_;
v___y_3663_ = v___y_3631_;
v___y_3664_ = v___y_3632_;
v___y_3665_ = v___y_3633_;
v___y_3666_ = v___y_3634_;
v___y_3667_ = v___y_3635_;
v___y_3668_ = v___y_3636_;
v___y_3669_ = v___y_3637_;
v___y_3670_ = v___y_3638_;
goto v___jp_3660_;
}
else
{
lean_object* v___x_3687_; uint8_t v_isShared_3688_; uint8_t v_isSharedCheck_3713_; 
lean_dec(v_a_3659_);
v_isSharedCheck_3713_ = !lean_is_exclusive(v_a_3685_);
if (v_isSharedCheck_3713_ == 0)
{
lean_object* v_unused_3714_; 
v_unused_3714_ = lean_ctor_get(v_a_3685_, 0);
lean_dec(v_unused_3714_);
v___x_3687_ = v_a_3685_;
v_isShared_3688_ = v_isSharedCheck_3713_;
goto v_resetjp_3686_;
}
else
{
lean_dec(v_a_3685_);
v___x_3687_ = lean_box(0);
v_isShared_3688_ = v_isSharedCheck_3713_;
goto v_resetjp_3686_;
}
v_resetjp_3686_:
{
lean_object* v___x_3689_; lean_object* v___x_3690_; 
v___x_3689_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2);
v___x_3690_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_3689_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
if (lean_obj_tag(v___x_3690_) == 0)
{
lean_object* v_a_3691_; lean_object* v___x_3693_; uint8_t v_isShared_3694_; uint8_t v_isSharedCheck_3704_; 
v_a_3691_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3704_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3704_ == 0)
{
v___x_3693_ = v___x_3690_;
v_isShared_3694_ = v_isSharedCheck_3704_;
goto v_resetjp_3692_;
}
else
{
lean_inc(v_a_3691_);
lean_dec(v___x_3690_);
v___x_3693_ = lean_box(0);
v_isShared_3694_ = v_isSharedCheck_3704_;
goto v_resetjp_3692_;
}
v_resetjp_3692_:
{
if (lean_obj_tag(v_a_3691_) == 0)
{
lean_object* v_a_3695_; lean_object* v___x_3697_; 
lean_del_object(v___x_3644_);
v_a_3695_ = lean_ctor_get(v_a_3691_, 0);
lean_inc(v_a_3695_);
lean_dec_ref_known(v_a_3691_, 1);
if (v_isShared_3688_ == 0)
{
lean_ctor_set(v___x_3687_, 0, v_a_3695_);
v___x_3697_ = v___x_3687_;
goto v_reusejp_3696_;
}
else
{
lean_object* v_reuseFailAlloc_3702_; 
v_reuseFailAlloc_3702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3702_, 0, v_a_3695_);
v___x_3697_ = v_reuseFailAlloc_3702_;
goto v_reusejp_3696_;
}
v_reusejp_3696_:
{
lean_object* v___x_3698_; lean_object* v___x_3700_; 
v___x_3698_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3698_, 0, v___x_3697_);
lean_ctor_set(v___x_3698_, 1, v_snd_3642_);
if (v_isShared_3694_ == 0)
{
lean_ctor_set(v___x_3693_, 0, v___x_3698_);
v___x_3700_ = v___x_3693_;
goto v_reusejp_3699_;
}
else
{
lean_object* v_reuseFailAlloc_3701_; 
v_reuseFailAlloc_3701_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3701_, 0, v___x_3698_);
v___x_3700_ = v_reuseFailAlloc_3701_;
goto v_reusejp_3699_;
}
v_reusejp_3699_:
{
return v___x_3700_;
}
}
}
else
{
lean_object* v_a_3703_; 
lean_del_object(v___x_3693_);
lean_del_object(v___x_3687_);
lean_dec(v_snd_3642_);
v_a_3703_ = lean_ctor_get(v_a_3691_, 0);
lean_inc(v_a_3703_);
lean_dec_ref_known(v_a_3691_, 1);
v_a_3649_ = v_a_3703_;
goto v___jp_3648_;
}
}
}
else
{
lean_object* v_a_3705_; lean_object* v___x_3707_; uint8_t v_isShared_3708_; uint8_t v_isSharedCheck_3712_; 
lean_del_object(v___x_3687_);
lean_del_object(v___x_3644_);
lean_dec(v_snd_3642_);
v_a_3705_ = lean_ctor_get(v___x_3690_, 0);
v_isSharedCheck_3712_ = !lean_is_exclusive(v___x_3690_);
if (v_isSharedCheck_3712_ == 0)
{
v___x_3707_ = v___x_3690_;
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
else
{
lean_inc(v_a_3705_);
lean_dec(v___x_3690_);
v___x_3707_ = lean_box(0);
v_isShared_3708_ = v_isSharedCheck_3712_;
goto v_resetjp_3706_;
}
v_resetjp_3706_:
{
lean_object* v___x_3710_; 
if (v_isShared_3708_ == 0)
{
v___x_3710_ = v___x_3707_;
goto v_reusejp_3709_;
}
else
{
lean_object* v_reuseFailAlloc_3711_; 
v_reuseFailAlloc_3711_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3711_, 0, v_a_3705_);
v___x_3710_ = v_reuseFailAlloc_3711_;
goto v_reusejp_3709_;
}
v_reusejp_3709_:
{
return v___x_3710_;
}
}
}
}
}
}
else
{
lean_object* v_a_3715_; lean_object* v___x_3717_; uint8_t v_isShared_3718_; uint8_t v_isSharedCheck_3722_; 
lean_dec(v_a_3659_);
lean_del_object(v___x_3644_);
lean_dec(v_snd_3642_);
v_a_3715_ = lean_ctor_get(v___x_3684_, 0);
v_isSharedCheck_3722_ = !lean_is_exclusive(v___x_3684_);
if (v_isSharedCheck_3722_ == 0)
{
v___x_3717_ = v___x_3684_;
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
else
{
lean_inc(v_a_3715_);
lean_dec(v___x_3684_);
v___x_3717_ = lean_box(0);
v_isShared_3718_ = v_isSharedCheck_3722_;
goto v_resetjp_3716_;
}
v_resetjp_3716_:
{
lean_object* v___x_3720_; 
if (v_isShared_3718_ == 0)
{
v___x_3720_ = v___x_3717_;
goto v_reusejp_3719_;
}
else
{
lean_object* v_reuseFailAlloc_3721_; 
v_reuseFailAlloc_3721_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3721_, 0, v_a_3715_);
v___x_3720_ = v_reuseFailAlloc_3721_;
goto v_reusejp_3719_;
}
v_reusejp_3719_:
{
return v___x_3720_;
}
}
}
}
}
else
{
lean_object* v_a_3723_; lean_object* v___x_3725_; uint8_t v_isShared_3726_; uint8_t v_isSharedCheck_3730_; 
lean_dec(v_a_3659_);
lean_del_object(v___x_3644_);
lean_dec(v_snd_3642_);
v_a_3723_ = lean_ctor_get(v___x_3683_, 0);
v_isSharedCheck_3730_ = !lean_is_exclusive(v___x_3683_);
if (v_isSharedCheck_3730_ == 0)
{
v___x_3725_ = v___x_3683_;
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
else
{
lean_inc(v_a_3723_);
lean_dec(v___x_3683_);
v___x_3725_ = lean_box(0);
v_isShared_3726_ = v_isSharedCheck_3730_;
goto v_resetjp_3724_;
}
v_resetjp_3724_:
{
lean_object* v___x_3728_; 
if (v_isShared_3726_ == 0)
{
v___x_3728_ = v___x_3725_;
goto v_reusejp_3727_;
}
else
{
lean_object* v_reuseFailAlloc_3729_; 
v_reuseFailAlloc_3729_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3729_, 0, v_a_3723_);
v___x_3728_ = v_reuseFailAlloc_3729_;
goto v_reusejp_3727_;
}
v_reusejp_3727_:
{
return v___x_3728_;
}
}
}
v___jp_3660_:
{
uint8_t v___x_3671_; 
v___x_3671_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_3659_);
if (v___x_3671_ == 0)
{
lean_dec(v_a_3659_);
v_a_3649_ = v___x_3646_;
goto v___jp_3648_;
}
else
{
lean_object* v___x_3672_; 
v___x_3672_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc(v_a_3659_, v___y_3661_, v___y_3662_, v___y_3663_, v___y_3664_, v___y_3665_, v___y_3666_, v___y_3667_, v___y_3668_, v___y_3669_, v___y_3670_);
if (lean_obj_tag(v___x_3672_) == 0)
{
lean_dec_ref_known(v___x_3672_, 1);
v_a_3649_ = v___x_3646_;
goto v___jp_3648_;
}
else
{
lean_object* v_a_3673_; lean_object* v___x_3675_; uint8_t v_isShared_3676_; uint8_t v_isSharedCheck_3680_; 
lean_del_object(v___x_3644_);
v_a_3673_ = lean_ctor_get(v___x_3672_, 0);
v_isSharedCheck_3680_ = !lean_is_exclusive(v___x_3672_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3675_ = v___x_3672_;
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
else
{
lean_inc(v_a_3673_);
lean_dec(v___x_3672_);
v___x_3675_ = lean_box(0);
v_isShared_3676_ = v_isSharedCheck_3680_;
goto v_resetjp_3674_;
}
v_resetjp_3674_:
{
lean_object* v___x_3678_; 
if (v_isShared_3676_ == 0)
{
v___x_3678_ = v___x_3675_;
goto v_reusejp_3677_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v_a_3673_);
v___x_3678_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3677_;
}
v_reusejp_3677_:
{
return v___x_3678_;
}
}
}
}
}
}
else
{
lean_object* v_a_3731_; lean_object* v___x_3733_; uint8_t v_isShared_3734_; uint8_t v_isSharedCheck_3738_; 
lean_del_object(v___x_3644_);
lean_dec(v_snd_3642_);
v_a_3731_ = lean_ctor_get(v___x_3658_, 0);
v_isSharedCheck_3738_ = !lean_is_exclusive(v___x_3658_);
if (v_isSharedCheck_3738_ == 0)
{
v___x_3733_ = v___x_3658_;
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
else
{
lean_inc(v_a_3731_);
lean_dec(v___x_3658_);
v___x_3733_ = lean_box(0);
v_isShared_3734_ = v_isSharedCheck_3738_;
goto v_resetjp_3732_;
}
v_resetjp_3732_:
{
lean_object* v___x_3736_; 
if (v_isShared_3734_ == 0)
{
v___x_3736_ = v___x_3733_;
goto v_reusejp_3735_;
}
else
{
lean_object* v_reuseFailAlloc_3737_; 
v_reuseFailAlloc_3737_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3737_, 0, v_a_3731_);
v___x_3736_ = v_reuseFailAlloc_3737_;
goto v_reusejp_3735_;
}
v_reusejp_3735_:
{
return v___x_3736_;
}
}
}
v___jp_3648_:
{
lean_object* v___x_3651_; 
if (v_isShared_3645_ == 0)
{
lean_ctor_set(v___x_3644_, 1, v_a_3649_);
lean_ctor_set(v___x_3644_, 0, v___x_3647_);
v___x_3651_ = v___x_3644_;
goto v_reusejp_3650_;
}
else
{
lean_object* v_reuseFailAlloc_3655_; 
v_reuseFailAlloc_3655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3655_, 0, v___x_3647_);
lean_ctor_set(v_reuseFailAlloc_3655_, 1, v_a_3649_);
v___x_3651_ = v_reuseFailAlloc_3655_;
goto v_reusejp_3650_;
}
v_reusejp_3650_:
{
size_t v___x_3652_; size_t v___x_3653_; lean_object* v___x_3654_; 
v___x_3652_ = ((size_t)1ULL);
v___x_3653_ = lean_usize_add(v_i_3627_, v___x_3652_);
v___x_3654_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5(v_as_3625_, v_sz_3626_, v___x_3653_, v___x_3651_, v___y_3629_, v___y_3630_, v___y_3631_, v___y_3632_, v___y_3633_, v___y_3634_, v___y_3635_, v___y_3636_, v___y_3637_, v___y_3638_);
return v___x_3654_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2___boxed(lean_object* v_as_3741_, lean_object* v_sz_3742_, lean_object* v_i_3743_, lean_object* v_b_3744_, lean_object* v___y_3745_, lean_object* v___y_3746_, lean_object* v___y_3747_, lean_object* v___y_3748_, lean_object* v___y_3749_, lean_object* v___y_3750_, lean_object* v___y_3751_, lean_object* v___y_3752_, lean_object* v___y_3753_, lean_object* v___y_3754_, lean_object* v___y_3755_){
_start:
{
size_t v_sz_boxed_3756_; size_t v_i_boxed_3757_; lean_object* v_res_3758_; 
v_sz_boxed_3756_ = lean_unbox_usize(v_sz_3742_);
lean_dec(v_sz_3742_);
v_i_boxed_3757_ = lean_unbox_usize(v_i_3743_);
lean_dec(v_i_3743_);
v_res_3758_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2(v_as_3741_, v_sz_boxed_3756_, v_i_boxed_3757_, v_b_3744_, v___y_3745_, v___y_3746_, v___y_3747_, v___y_3748_, v___y_3749_, v___y_3750_, v___y_3751_, v___y_3752_, v___y_3753_, v___y_3754_);
lean_dec(v___y_3754_);
lean_dec_ref(v___y_3753_);
lean_dec(v___y_3752_);
lean_dec_ref(v___y_3751_);
lean_dec(v___y_3750_);
lean_dec_ref(v___y_3749_);
lean_dec(v___y_3748_);
lean_dec_ref(v___y_3747_);
lean_dec(v___y_3746_);
lean_dec(v___y_3745_);
lean_dec_ref(v_as_3741_);
return v_res_3758_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3_spec__4(lean_object* v_as_3759_, size_t v_sz_3760_, size_t v_i_3761_, lean_object* v_b_3762_, lean_object* v___y_3763_, lean_object* v___y_3764_, lean_object* v___y_3765_, lean_object* v___y_3766_, lean_object* v___y_3767_, lean_object* v___y_3768_, lean_object* v___y_3769_, lean_object* v___y_3770_, lean_object* v___y_3771_, lean_object* v___y_3772_){
_start:
{
uint8_t v___x_3774_; 
v___x_3774_ = lean_usize_dec_lt(v_i_3761_, v_sz_3760_);
if (v___x_3774_ == 0)
{
lean_object* v___x_3775_; 
v___x_3775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3775_, 0, v_b_3762_);
return v___x_3775_;
}
else
{
lean_object* v_snd_3776_; lean_object* v___x_3778_; uint8_t v_isShared_3779_; uint8_t v_isSharedCheck_3872_; 
v_snd_3776_ = lean_ctor_get(v_b_3762_, 1);
v_isSharedCheck_3872_ = !lean_is_exclusive(v_b_3762_);
if (v_isSharedCheck_3872_ == 0)
{
lean_object* v_unused_3873_; 
v_unused_3873_ = lean_ctor_get(v_b_3762_, 0);
lean_dec(v_unused_3873_);
v___x_3778_ = v_b_3762_;
v_isShared_3779_ = v_isSharedCheck_3872_;
goto v_resetjp_3777_;
}
else
{
lean_inc(v_snd_3776_);
lean_dec(v_b_3762_);
v___x_3778_ = lean_box(0);
v_isShared_3779_ = v_isSharedCheck_3872_;
goto v_resetjp_3777_;
}
v_resetjp_3777_:
{
lean_object* v___x_3780_; lean_object* v_a_3782_; lean_object* v___x_3789_; lean_object* v_a_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; 
v___x_3780_ = lean_box(0);
v___x_3789_ = lean_box(0);
v_a_3790_ = lean_array_uget_borrowed(v_as_3759_, v_i_3761_);
v___x_3791_ = lean_st_ref_get(v___y_3763_);
lean_inc(v_a_3790_);
v___x_3792_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3791_, v_a_3790_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
lean_dec(v___x_3791_);
if (lean_obj_tag(v___x_3792_) == 0)
{
lean_object* v_a_3793_; lean_object* v___y_3795_; lean_object* v___y_3796_; lean_object* v___y_3797_; lean_object* v___y_3798_; lean_object* v___y_3799_; lean_object* v___y_3800_; lean_object* v___y_3801_; lean_object* v___y_3802_; lean_object* v___y_3803_; lean_object* v___y_3804_; lean_object* v_self_3815_; uint8_t v_interpreted_3816_; lean_object* v___x_3817_; 
v_a_3793_ = lean_ctor_get(v___x_3792_, 0);
lean_inc(v_a_3793_);
lean_dec_ref_known(v___x_3792_, 1);
v_self_3815_ = lean_ctor_get(v_a_3793_, 0);
v_interpreted_3816_ = lean_ctor_get_uint8(v_a_3793_, sizeof(void*)*12 + 1);
lean_inc_ref(v_self_3815_);
v___x_3817_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents(v_self_3815_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
if (lean_obj_tag(v___x_3817_) == 0)
{
lean_dec_ref_known(v___x_3817_, 1);
if (v_interpreted_3816_ == 0)
{
lean_dec(v_snd_3776_);
v___y_3795_ = v___y_3763_;
v___y_3796_ = v___y_3764_;
v___y_3797_ = v___y_3765_;
v___y_3798_ = v___y_3766_;
v___y_3799_ = v___y_3767_;
v___y_3800_ = v___y_3768_;
v___y_3801_ = v___y_3769_;
v___y_3802_ = v___y_3770_;
v___y_3803_ = v___y_3771_;
v___y_3804_ = v___y_3772_;
goto v___jp_3794_;
}
else
{
lean_object* v___x_3818_; 
lean_inc_ref(v_self_3815_);
v___x_3818_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_self_3815_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
if (lean_obj_tag(v___x_3818_) == 0)
{
lean_object* v_a_3819_; 
v_a_3819_ = lean_ctor_get(v___x_3818_, 0);
lean_inc(v_a_3819_);
lean_dec_ref_known(v___x_3818_, 1);
if (lean_obj_tag(v_a_3819_) == 0)
{
lean_dec(v_snd_3776_);
v___y_3795_ = v___y_3763_;
v___y_3796_ = v___y_3764_;
v___y_3797_ = v___y_3765_;
v___y_3798_ = v___y_3766_;
v___y_3799_ = v___y_3767_;
v___y_3800_ = v___y_3768_;
v___y_3801_ = v___y_3769_;
v___y_3802_ = v___y_3770_;
v___y_3803_ = v___y_3771_;
v___y_3804_ = v___y_3772_;
goto v___jp_3794_;
}
else
{
lean_object* v___x_3821_; uint8_t v_isShared_3822_; uint8_t v_isSharedCheck_3846_; 
lean_dec(v_a_3793_);
v_isSharedCheck_3846_ = !lean_is_exclusive(v_a_3819_);
if (v_isSharedCheck_3846_ == 0)
{
lean_object* v_unused_3847_; 
v_unused_3847_ = lean_ctor_get(v_a_3819_, 0);
lean_dec(v_unused_3847_);
v___x_3821_ = v_a_3819_;
v_isShared_3822_ = v_isSharedCheck_3846_;
goto v_resetjp_3820_;
}
else
{
lean_dec(v_a_3819_);
v___x_3821_ = lean_box(0);
v_isShared_3822_ = v_isSharedCheck_3846_;
goto v_resetjp_3820_;
}
v_resetjp_3820_:
{
lean_object* v___x_3823_; lean_object* v___x_3824_; 
v___x_3823_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2);
v___x_3824_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_3823_, v___y_3763_, v___y_3764_, v___y_3765_, v___y_3766_, v___y_3767_, v___y_3768_, v___y_3769_, v___y_3770_, v___y_3771_, v___y_3772_);
if (lean_obj_tag(v___x_3824_) == 0)
{
lean_object* v_a_3825_; lean_object* v___x_3827_; uint8_t v_isShared_3828_; uint8_t v_isSharedCheck_3837_; 
v_a_3825_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3837_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3837_ == 0)
{
v___x_3827_ = v___x_3824_;
v_isShared_3828_ = v_isSharedCheck_3837_;
goto v_resetjp_3826_;
}
else
{
lean_inc(v_a_3825_);
lean_dec(v___x_3824_);
v___x_3827_ = lean_box(0);
v_isShared_3828_ = v_isSharedCheck_3837_;
goto v_resetjp_3826_;
}
v_resetjp_3826_:
{
if (lean_obj_tag(v_a_3825_) == 0)
{
lean_object* v___x_3830_; 
lean_del_object(v___x_3778_);
if (v_isShared_3822_ == 0)
{
lean_ctor_set(v___x_3821_, 0, v_a_3825_);
v___x_3830_ = v___x_3821_;
goto v_reusejp_3829_;
}
else
{
lean_object* v_reuseFailAlloc_3835_; 
v_reuseFailAlloc_3835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3835_, 0, v_a_3825_);
v___x_3830_ = v_reuseFailAlloc_3835_;
goto v_reusejp_3829_;
}
v_reusejp_3829_:
{
lean_object* v___x_3831_; lean_object* v___x_3833_; 
v___x_3831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3831_, 0, v___x_3830_);
lean_ctor_set(v___x_3831_, 1, v_snd_3776_);
if (v_isShared_3828_ == 0)
{
lean_ctor_set(v___x_3827_, 0, v___x_3831_);
v___x_3833_ = v___x_3827_;
goto v_reusejp_3832_;
}
else
{
lean_object* v_reuseFailAlloc_3834_; 
v_reuseFailAlloc_3834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3834_, 0, v___x_3831_);
v___x_3833_ = v_reuseFailAlloc_3834_;
goto v_reusejp_3832_;
}
v_reusejp_3832_:
{
return v___x_3833_;
}
}
}
else
{
lean_object* v_a_3836_; 
lean_del_object(v___x_3827_);
lean_del_object(v___x_3821_);
lean_dec(v_snd_3776_);
v_a_3836_ = lean_ctor_get(v_a_3825_, 0);
lean_inc(v_a_3836_);
lean_dec_ref_known(v_a_3825_, 1);
v_a_3782_ = v_a_3836_;
goto v___jp_3781_;
}
}
}
else
{
lean_object* v_a_3838_; lean_object* v___x_3840_; uint8_t v_isShared_3841_; uint8_t v_isSharedCheck_3845_; 
lean_del_object(v___x_3821_);
lean_del_object(v___x_3778_);
lean_dec(v_snd_3776_);
v_a_3838_ = lean_ctor_get(v___x_3824_, 0);
v_isSharedCheck_3845_ = !lean_is_exclusive(v___x_3824_);
if (v_isSharedCheck_3845_ == 0)
{
v___x_3840_ = v___x_3824_;
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
else
{
lean_inc(v_a_3838_);
lean_dec(v___x_3824_);
v___x_3840_ = lean_box(0);
v_isShared_3841_ = v_isSharedCheck_3845_;
goto v_resetjp_3839_;
}
v_resetjp_3839_:
{
lean_object* v___x_3843_; 
if (v_isShared_3841_ == 0)
{
v___x_3843_ = v___x_3840_;
goto v_reusejp_3842_;
}
else
{
lean_object* v_reuseFailAlloc_3844_; 
v_reuseFailAlloc_3844_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3844_, 0, v_a_3838_);
v___x_3843_ = v_reuseFailAlloc_3844_;
goto v_reusejp_3842_;
}
v_reusejp_3842_:
{
return v___x_3843_;
}
}
}
}
}
}
else
{
lean_object* v_a_3848_; lean_object* v___x_3850_; uint8_t v_isShared_3851_; uint8_t v_isSharedCheck_3855_; 
lean_dec(v_a_3793_);
lean_del_object(v___x_3778_);
lean_dec(v_snd_3776_);
v_a_3848_ = lean_ctor_get(v___x_3818_, 0);
v_isSharedCheck_3855_ = !lean_is_exclusive(v___x_3818_);
if (v_isSharedCheck_3855_ == 0)
{
v___x_3850_ = v___x_3818_;
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
else
{
lean_inc(v_a_3848_);
lean_dec(v___x_3818_);
v___x_3850_ = lean_box(0);
v_isShared_3851_ = v_isSharedCheck_3855_;
goto v_resetjp_3849_;
}
v_resetjp_3849_:
{
lean_object* v___x_3853_; 
if (v_isShared_3851_ == 0)
{
v___x_3853_ = v___x_3850_;
goto v_reusejp_3852_;
}
else
{
lean_object* v_reuseFailAlloc_3854_; 
v_reuseFailAlloc_3854_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3854_, 0, v_a_3848_);
v___x_3853_ = v_reuseFailAlloc_3854_;
goto v_reusejp_3852_;
}
v_reusejp_3852_:
{
return v___x_3853_;
}
}
}
}
}
else
{
lean_object* v_a_3856_; lean_object* v___x_3858_; uint8_t v_isShared_3859_; uint8_t v_isSharedCheck_3863_; 
lean_dec(v_a_3793_);
lean_del_object(v___x_3778_);
lean_dec(v_snd_3776_);
v_a_3856_ = lean_ctor_get(v___x_3817_, 0);
v_isSharedCheck_3863_ = !lean_is_exclusive(v___x_3817_);
if (v_isSharedCheck_3863_ == 0)
{
v___x_3858_ = v___x_3817_;
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
else
{
lean_inc(v_a_3856_);
lean_dec(v___x_3817_);
v___x_3858_ = lean_box(0);
v_isShared_3859_ = v_isSharedCheck_3863_;
goto v_resetjp_3857_;
}
v_resetjp_3857_:
{
lean_object* v___x_3861_; 
if (v_isShared_3859_ == 0)
{
v___x_3861_ = v___x_3858_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3862_; 
v_reuseFailAlloc_3862_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3862_, 0, v_a_3856_);
v___x_3861_ = v_reuseFailAlloc_3862_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
return v___x_3861_;
}
}
}
v___jp_3794_:
{
uint8_t v___x_3805_; 
v___x_3805_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_3793_);
if (v___x_3805_ == 0)
{
lean_dec(v_a_3793_);
v_a_3782_ = v___x_3789_;
goto v___jp_3781_;
}
else
{
lean_object* v___x_3806_; 
v___x_3806_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc(v_a_3793_, v___y_3795_, v___y_3796_, v___y_3797_, v___y_3798_, v___y_3799_, v___y_3800_, v___y_3801_, v___y_3802_, v___y_3803_, v___y_3804_);
if (lean_obj_tag(v___x_3806_) == 0)
{
lean_dec_ref_known(v___x_3806_, 1);
v_a_3782_ = v___x_3789_;
goto v___jp_3781_;
}
else
{
lean_object* v_a_3807_; lean_object* v___x_3809_; uint8_t v_isShared_3810_; uint8_t v_isSharedCheck_3814_; 
lean_del_object(v___x_3778_);
v_a_3807_ = lean_ctor_get(v___x_3806_, 0);
v_isSharedCheck_3814_ = !lean_is_exclusive(v___x_3806_);
if (v_isSharedCheck_3814_ == 0)
{
v___x_3809_ = v___x_3806_;
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
else
{
lean_inc(v_a_3807_);
lean_dec(v___x_3806_);
v___x_3809_ = lean_box(0);
v_isShared_3810_ = v_isSharedCheck_3814_;
goto v_resetjp_3808_;
}
v_resetjp_3808_:
{
lean_object* v___x_3812_; 
if (v_isShared_3810_ == 0)
{
v___x_3812_ = v___x_3809_;
goto v_reusejp_3811_;
}
else
{
lean_object* v_reuseFailAlloc_3813_; 
v_reuseFailAlloc_3813_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3813_, 0, v_a_3807_);
v___x_3812_ = v_reuseFailAlloc_3813_;
goto v_reusejp_3811_;
}
v_reusejp_3811_:
{
return v___x_3812_;
}
}
}
}
}
}
else
{
lean_object* v_a_3864_; lean_object* v___x_3866_; uint8_t v_isShared_3867_; uint8_t v_isSharedCheck_3871_; 
lean_del_object(v___x_3778_);
lean_dec(v_snd_3776_);
v_a_3864_ = lean_ctor_get(v___x_3792_, 0);
v_isSharedCheck_3871_ = !lean_is_exclusive(v___x_3792_);
if (v_isSharedCheck_3871_ == 0)
{
v___x_3866_ = v___x_3792_;
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
else
{
lean_inc(v_a_3864_);
lean_dec(v___x_3792_);
v___x_3866_ = lean_box(0);
v_isShared_3867_ = v_isSharedCheck_3871_;
goto v_resetjp_3865_;
}
v_resetjp_3865_:
{
lean_object* v___x_3869_; 
if (v_isShared_3867_ == 0)
{
v___x_3869_ = v___x_3866_;
goto v_reusejp_3868_;
}
else
{
lean_object* v_reuseFailAlloc_3870_; 
v_reuseFailAlloc_3870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3870_, 0, v_a_3864_);
v___x_3869_ = v_reuseFailAlloc_3870_;
goto v_reusejp_3868_;
}
v_reusejp_3868_:
{
return v___x_3869_;
}
}
}
v___jp_3781_:
{
lean_object* v___x_3784_; 
if (v_isShared_3779_ == 0)
{
lean_ctor_set(v___x_3778_, 1, v_a_3782_);
lean_ctor_set(v___x_3778_, 0, v___x_3780_);
v___x_3784_ = v___x_3778_;
goto v_reusejp_3783_;
}
else
{
lean_object* v_reuseFailAlloc_3788_; 
v_reuseFailAlloc_3788_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3788_, 0, v___x_3780_);
lean_ctor_set(v_reuseFailAlloc_3788_, 1, v_a_3782_);
v___x_3784_ = v_reuseFailAlloc_3788_;
goto v_reusejp_3783_;
}
v_reusejp_3783_:
{
size_t v___x_3785_; size_t v___x_3786_; 
v___x_3785_ = ((size_t)1ULL);
v___x_3786_ = lean_usize_add(v_i_3761_, v___x_3785_);
v_i_3761_ = v___x_3786_;
v_b_3762_ = v___x_3784_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3_spec__4___boxed(lean_object* v_as_3874_, lean_object* v_sz_3875_, lean_object* v_i_3876_, lean_object* v_b_3877_, lean_object* v___y_3878_, lean_object* v___y_3879_, lean_object* v___y_3880_, lean_object* v___y_3881_, lean_object* v___y_3882_, lean_object* v___y_3883_, lean_object* v___y_3884_, lean_object* v___y_3885_, lean_object* v___y_3886_, lean_object* v___y_3887_, lean_object* v___y_3888_){
_start:
{
size_t v_sz_boxed_3889_; size_t v_i_boxed_3890_; lean_object* v_res_3891_; 
v_sz_boxed_3889_ = lean_unbox_usize(v_sz_3875_);
lean_dec(v_sz_3875_);
v_i_boxed_3890_ = lean_unbox_usize(v_i_3876_);
lean_dec(v_i_3876_);
v_res_3891_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3_spec__4(v_as_3874_, v_sz_boxed_3889_, v_i_boxed_3890_, v_b_3877_, v___y_3878_, v___y_3879_, v___y_3880_, v___y_3881_, v___y_3882_, v___y_3883_, v___y_3884_, v___y_3885_, v___y_3886_, v___y_3887_);
lean_dec(v___y_3887_);
lean_dec_ref(v___y_3886_);
lean_dec(v___y_3885_);
lean_dec_ref(v___y_3884_);
lean_dec(v___y_3883_);
lean_dec_ref(v___y_3882_);
lean_dec(v___y_3881_);
lean_dec_ref(v___y_3880_);
lean_dec(v___y_3879_);
lean_dec(v___y_3878_);
lean_dec_ref(v_as_3874_);
return v_res_3891_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3(lean_object* v_as_3892_, size_t v_sz_3893_, size_t v_i_3894_, lean_object* v_b_3895_, lean_object* v___y_3896_, lean_object* v___y_3897_, lean_object* v___y_3898_, lean_object* v___y_3899_, lean_object* v___y_3900_, lean_object* v___y_3901_, lean_object* v___y_3902_, lean_object* v___y_3903_, lean_object* v___y_3904_, lean_object* v___y_3905_){
_start:
{
uint8_t v___x_3907_; 
v___x_3907_ = lean_usize_dec_lt(v_i_3894_, v_sz_3893_);
if (v___x_3907_ == 0)
{
lean_object* v___x_3908_; 
v___x_3908_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3908_, 0, v_b_3895_);
return v___x_3908_;
}
else
{
lean_object* v_snd_3909_; lean_object* v___x_3911_; uint8_t v_isShared_3912_; uint8_t v_isSharedCheck_4005_; 
v_snd_3909_ = lean_ctor_get(v_b_3895_, 1);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_b_3895_);
if (v_isSharedCheck_4005_ == 0)
{
lean_object* v_unused_4006_; 
v_unused_4006_ = lean_ctor_get(v_b_3895_, 0);
lean_dec(v_unused_4006_);
v___x_3911_ = v_b_3895_;
v_isShared_3912_ = v_isSharedCheck_4005_;
goto v_resetjp_3910_;
}
else
{
lean_inc(v_snd_3909_);
lean_dec(v_b_3895_);
v___x_3911_ = lean_box(0);
v_isShared_3912_ = v_isSharedCheck_4005_;
goto v_resetjp_3910_;
}
v_resetjp_3910_:
{
lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v_a_3916_; lean_object* v_a_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; 
v___x_3913_ = lean_box(0);
v___x_3914_ = lean_box(0);
v_a_3923_ = lean_array_uget_borrowed(v_as_3892_, v_i_3894_);
v___x_3924_ = lean_st_ref_get(v___y_3896_);
lean_inc(v_a_3923_);
v___x_3925_ = l_Lean_Meta_Grind_Goal_getENode(v___x_3924_, v_a_3923_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
lean_dec(v___x_3924_);
if (lean_obj_tag(v___x_3925_) == 0)
{
lean_object* v_a_3926_; lean_object* v___y_3928_; lean_object* v___y_3929_; lean_object* v___y_3930_; lean_object* v___y_3931_; lean_object* v___y_3932_; lean_object* v___y_3933_; lean_object* v___y_3934_; lean_object* v___y_3935_; lean_object* v___y_3936_; lean_object* v___y_3937_; lean_object* v_self_3948_; uint8_t v_interpreted_3949_; lean_object* v___x_3950_; 
v_a_3926_ = lean_ctor_get(v___x_3925_, 0);
lean_inc(v_a_3926_);
lean_dec_ref_known(v___x_3925_, 1);
v_self_3948_ = lean_ctor_get(v_a_3926_, 0);
v_interpreted_3949_ = lean_ctor_get_uint8(v_a_3926_, sizeof(void*)*12 + 1);
lean_inc_ref(v_self_3948_);
v___x_3950_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents(v_self_3948_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
if (lean_obj_tag(v___x_3950_) == 0)
{
lean_dec_ref_known(v___x_3950_, 1);
if (v_interpreted_3949_ == 0)
{
lean_dec(v_snd_3909_);
v___y_3928_ = v___y_3896_;
v___y_3929_ = v___y_3897_;
v___y_3930_ = v___y_3898_;
v___y_3931_ = v___y_3899_;
v___y_3932_ = v___y_3900_;
v___y_3933_ = v___y_3901_;
v___y_3934_ = v___y_3902_;
v___y_3935_ = v___y_3903_;
v___y_3936_ = v___y_3904_;
v___y_3937_ = v___y_3905_;
goto v___jp_3927_;
}
else
{
lean_object* v___x_3951_; 
lean_inc_ref(v_self_3948_);
v___x_3951_ = l_Lean_Meta_Sym_Canon_normNumLit_x3f(v_self_3948_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
if (lean_obj_tag(v___x_3951_) == 0)
{
lean_object* v_a_3952_; 
v_a_3952_ = lean_ctor_get(v___x_3951_, 0);
lean_inc(v_a_3952_);
lean_dec_ref_known(v___x_3951_, 1);
if (lean_obj_tag(v_a_3952_) == 0)
{
lean_dec(v_snd_3909_);
v___y_3928_ = v___y_3896_;
v___y_3929_ = v___y_3897_;
v___y_3930_ = v___y_3898_;
v___y_3931_ = v___y_3899_;
v___y_3932_ = v___y_3900_;
v___y_3933_ = v___y_3901_;
v___y_3934_ = v___y_3902_;
v___y_3935_ = v___y_3903_;
v___y_3936_ = v___y_3904_;
v___y_3937_ = v___y_3905_;
goto v___jp_3927_;
}
else
{
lean_object* v___x_3954_; uint8_t v_isShared_3955_; uint8_t v_isSharedCheck_3979_; 
lean_dec(v_a_3926_);
v_isSharedCheck_3979_ = !lean_is_exclusive(v_a_3952_);
if (v_isSharedCheck_3979_ == 0)
{
lean_object* v_unused_3980_; 
v_unused_3980_ = lean_ctor_get(v_a_3952_, 0);
lean_dec(v_unused_3980_);
v___x_3954_ = v_a_3952_;
v_isShared_3955_ = v_isSharedCheck_3979_;
goto v_resetjp_3953_;
}
else
{
lean_dec(v_a_3952_);
v___x_3954_ = lean_box(0);
v_isShared_3955_ = v_isSharedCheck_3979_;
goto v_resetjp_3953_;
}
v_resetjp_3953_:
{
lean_object* v___x_3956_; lean_object* v___x_3957_; 
v___x_3956_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2_spec__5___closed__2);
v___x_3957_ = l_panic___at___00__private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkParents_spec__0(v___x_3956_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
if (lean_obj_tag(v___x_3957_) == 0)
{
lean_object* v_a_3958_; lean_object* v___x_3960_; uint8_t v_isShared_3961_; uint8_t v_isSharedCheck_3970_; 
v_a_3958_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3970_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3970_ == 0)
{
v___x_3960_ = v___x_3957_;
v_isShared_3961_ = v_isSharedCheck_3970_;
goto v_resetjp_3959_;
}
else
{
lean_inc(v_a_3958_);
lean_dec(v___x_3957_);
v___x_3960_ = lean_box(0);
v_isShared_3961_ = v_isSharedCheck_3970_;
goto v_resetjp_3959_;
}
v_resetjp_3959_:
{
if (lean_obj_tag(v_a_3958_) == 0)
{
lean_object* v___x_3963_; 
lean_del_object(v___x_3911_);
if (v_isShared_3955_ == 0)
{
lean_ctor_set(v___x_3954_, 0, v_a_3958_);
v___x_3963_ = v___x_3954_;
goto v_reusejp_3962_;
}
else
{
lean_object* v_reuseFailAlloc_3968_; 
v_reuseFailAlloc_3968_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3968_, 0, v_a_3958_);
v___x_3963_ = v_reuseFailAlloc_3968_;
goto v_reusejp_3962_;
}
v_reusejp_3962_:
{
lean_object* v___x_3964_; lean_object* v___x_3966_; 
v___x_3964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3963_);
lean_ctor_set(v___x_3964_, 1, v_snd_3909_);
if (v_isShared_3961_ == 0)
{
lean_ctor_set(v___x_3960_, 0, v___x_3964_);
v___x_3966_ = v___x_3960_;
goto v_reusejp_3965_;
}
else
{
lean_object* v_reuseFailAlloc_3967_; 
v_reuseFailAlloc_3967_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3967_, 0, v___x_3964_);
v___x_3966_ = v_reuseFailAlloc_3967_;
goto v_reusejp_3965_;
}
v_reusejp_3965_:
{
return v___x_3966_;
}
}
}
else
{
lean_object* v_a_3969_; 
lean_del_object(v___x_3960_);
lean_del_object(v___x_3954_);
lean_dec(v_snd_3909_);
v_a_3969_ = lean_ctor_get(v_a_3958_, 0);
lean_inc(v_a_3969_);
lean_dec_ref_known(v_a_3958_, 1);
v_a_3916_ = v_a_3969_;
goto v___jp_3915_;
}
}
}
else
{
lean_object* v_a_3971_; lean_object* v___x_3973_; uint8_t v_isShared_3974_; uint8_t v_isSharedCheck_3978_; 
lean_del_object(v___x_3954_);
lean_del_object(v___x_3911_);
lean_dec(v_snd_3909_);
v_a_3971_ = lean_ctor_get(v___x_3957_, 0);
v_isSharedCheck_3978_ = !lean_is_exclusive(v___x_3957_);
if (v_isSharedCheck_3978_ == 0)
{
v___x_3973_ = v___x_3957_;
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
else
{
lean_inc(v_a_3971_);
lean_dec(v___x_3957_);
v___x_3973_ = lean_box(0);
v_isShared_3974_ = v_isSharedCheck_3978_;
goto v_resetjp_3972_;
}
v_resetjp_3972_:
{
lean_object* v___x_3976_; 
if (v_isShared_3974_ == 0)
{
v___x_3976_ = v___x_3973_;
goto v_reusejp_3975_;
}
else
{
lean_object* v_reuseFailAlloc_3977_; 
v_reuseFailAlloc_3977_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3977_, 0, v_a_3971_);
v___x_3976_ = v_reuseFailAlloc_3977_;
goto v_reusejp_3975_;
}
v_reusejp_3975_:
{
return v___x_3976_;
}
}
}
}
}
}
else
{
lean_object* v_a_3981_; lean_object* v___x_3983_; uint8_t v_isShared_3984_; uint8_t v_isSharedCheck_3988_; 
lean_dec(v_a_3926_);
lean_del_object(v___x_3911_);
lean_dec(v_snd_3909_);
v_a_3981_ = lean_ctor_get(v___x_3951_, 0);
v_isSharedCheck_3988_ = !lean_is_exclusive(v___x_3951_);
if (v_isSharedCheck_3988_ == 0)
{
v___x_3983_ = v___x_3951_;
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
else
{
lean_inc(v_a_3981_);
lean_dec(v___x_3951_);
v___x_3983_ = lean_box(0);
v_isShared_3984_ = v_isSharedCheck_3988_;
goto v_resetjp_3982_;
}
v_resetjp_3982_:
{
lean_object* v___x_3986_; 
if (v_isShared_3984_ == 0)
{
v___x_3986_ = v___x_3983_;
goto v_reusejp_3985_;
}
else
{
lean_object* v_reuseFailAlloc_3987_; 
v_reuseFailAlloc_3987_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3987_, 0, v_a_3981_);
v___x_3986_ = v_reuseFailAlloc_3987_;
goto v_reusejp_3985_;
}
v_reusejp_3985_:
{
return v___x_3986_;
}
}
}
}
}
else
{
lean_object* v_a_3989_; lean_object* v___x_3991_; uint8_t v_isShared_3992_; uint8_t v_isSharedCheck_3996_; 
lean_dec(v_a_3926_);
lean_del_object(v___x_3911_);
lean_dec(v_snd_3909_);
v_a_3989_ = lean_ctor_get(v___x_3950_, 0);
v_isSharedCheck_3996_ = !lean_is_exclusive(v___x_3950_);
if (v_isSharedCheck_3996_ == 0)
{
v___x_3991_ = v___x_3950_;
v_isShared_3992_ = v_isSharedCheck_3996_;
goto v_resetjp_3990_;
}
else
{
lean_inc(v_a_3989_);
lean_dec(v___x_3950_);
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
v___jp_3927_:
{
uint8_t v___x_3938_; 
v___x_3938_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_3926_);
if (v___x_3938_ == 0)
{
lean_dec(v_a_3926_);
v_a_3916_ = v___x_3913_;
goto v___jp_3915_;
}
else
{
lean_object* v___x_3939_; 
v___x_3939_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkEqc(v_a_3926_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_, v___y_3932_, v___y_3933_, v___y_3934_, v___y_3935_, v___y_3936_, v___y_3937_);
if (lean_obj_tag(v___x_3939_) == 0)
{
lean_dec_ref_known(v___x_3939_, 1);
v_a_3916_ = v___x_3913_;
goto v___jp_3915_;
}
else
{
lean_object* v_a_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3947_; 
lean_del_object(v___x_3911_);
v_a_3940_ = lean_ctor_get(v___x_3939_, 0);
v_isSharedCheck_3947_ = !lean_is_exclusive(v___x_3939_);
if (v_isSharedCheck_3947_ == 0)
{
v___x_3942_ = v___x_3939_;
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_a_3940_);
lean_dec(v___x_3939_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3947_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___x_3945_; 
if (v_isShared_3943_ == 0)
{
v___x_3945_ = v___x_3942_;
goto v_reusejp_3944_;
}
else
{
lean_object* v_reuseFailAlloc_3946_; 
v_reuseFailAlloc_3946_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3946_, 0, v_a_3940_);
v___x_3945_ = v_reuseFailAlloc_3946_;
goto v_reusejp_3944_;
}
v_reusejp_3944_:
{
return v___x_3945_;
}
}
}
}
}
}
else
{
lean_object* v_a_3997_; lean_object* v___x_3999_; uint8_t v_isShared_4000_; uint8_t v_isSharedCheck_4004_; 
lean_del_object(v___x_3911_);
lean_dec(v_snd_3909_);
v_a_3997_ = lean_ctor_get(v___x_3925_, 0);
v_isSharedCheck_4004_ = !lean_is_exclusive(v___x_3925_);
if (v_isSharedCheck_4004_ == 0)
{
v___x_3999_ = v___x_3925_;
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
else
{
lean_inc(v_a_3997_);
lean_dec(v___x_3925_);
v___x_3999_ = lean_box(0);
v_isShared_4000_ = v_isSharedCheck_4004_;
goto v_resetjp_3998_;
}
v_resetjp_3998_:
{
lean_object* v___x_4002_; 
if (v_isShared_4000_ == 0)
{
v___x_4002_ = v___x_3999_;
goto v_reusejp_4001_;
}
else
{
lean_object* v_reuseFailAlloc_4003_; 
v_reuseFailAlloc_4003_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4003_, 0, v_a_3997_);
v___x_4002_ = v_reuseFailAlloc_4003_;
goto v_reusejp_4001_;
}
v_reusejp_4001_:
{
return v___x_4002_;
}
}
}
v___jp_3915_:
{
lean_object* v___x_3918_; 
if (v_isShared_3912_ == 0)
{
lean_ctor_set(v___x_3911_, 1, v_a_3916_);
lean_ctor_set(v___x_3911_, 0, v___x_3914_);
v___x_3918_ = v___x_3911_;
goto v_reusejp_3917_;
}
else
{
lean_object* v_reuseFailAlloc_3922_; 
v_reuseFailAlloc_3922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3922_, 0, v___x_3914_);
lean_ctor_set(v_reuseFailAlloc_3922_, 1, v_a_3916_);
v___x_3918_ = v_reuseFailAlloc_3922_;
goto v_reusejp_3917_;
}
v_reusejp_3917_:
{
size_t v___x_3919_; size_t v___x_3920_; lean_object* v___x_3921_; 
v___x_3919_ = ((size_t)1ULL);
v___x_3920_ = lean_usize_add(v_i_3894_, v___x_3919_);
v___x_3921_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3_spec__4(v_as_3892_, v_sz_3893_, v___x_3920_, v___x_3918_, v___y_3896_, v___y_3897_, v___y_3898_, v___y_3899_, v___y_3900_, v___y_3901_, v___y_3902_, v___y_3903_, v___y_3904_, v___y_3905_);
return v___x_3921_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3___boxed(lean_object* v_as_4007_, lean_object* v_sz_4008_, lean_object* v_i_4009_, lean_object* v_b_4010_, lean_object* v___y_4011_, lean_object* v___y_4012_, lean_object* v___y_4013_, lean_object* v___y_4014_, lean_object* v___y_4015_, lean_object* v___y_4016_, lean_object* v___y_4017_, lean_object* v___y_4018_, lean_object* v___y_4019_, lean_object* v___y_4020_, lean_object* v___y_4021_){
_start:
{
size_t v_sz_boxed_4022_; size_t v_i_boxed_4023_; lean_object* v_res_4024_; 
v_sz_boxed_4022_ = lean_unbox_usize(v_sz_4008_);
lean_dec(v_sz_4008_);
v_i_boxed_4023_ = lean_unbox_usize(v_i_4009_);
lean_dec(v_i_4009_);
v_res_4024_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3(v_as_4007_, v_sz_boxed_4022_, v_i_boxed_4023_, v_b_4010_, v___y_4011_, v___y_4012_, v___y_4013_, v___y_4014_, v___y_4015_, v___y_4016_, v___y_4017_, v___y_4018_, v___y_4019_, v___y_4020_);
lean_dec(v___y_4020_);
lean_dec_ref(v___y_4019_);
lean_dec(v___y_4018_);
lean_dec_ref(v___y_4017_);
lean_dec(v___y_4016_);
lean_dec_ref(v___y_4015_);
lean_dec(v___y_4014_);
lean_dec_ref(v___y_4013_);
lean_dec(v___y_4012_);
lean_dec(v___y_4011_);
lean_dec_ref(v_as_4007_);
return v_res_4024_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1(lean_object* v_init_4025_, lean_object* v_n_4026_, lean_object* v_b_4027_, lean_object* v___y_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_, lean_object* v___y_4034_, lean_object* v___y_4035_, lean_object* v___y_4036_, lean_object* v___y_4037_){
_start:
{
if (lean_obj_tag(v_n_4026_) == 0)
{
lean_object* v_cs_4039_; lean_object* v___x_4040_; lean_object* v___x_4041_; size_t v_sz_4042_; size_t v___x_4043_; lean_object* v___x_4044_; 
v_cs_4039_ = lean_ctor_get(v_n_4026_, 0);
v___x_4040_ = lean_box(0);
v___x_4041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4041_, 0, v___x_4040_);
lean_ctor_set(v___x_4041_, 1, v_b_4027_);
v_sz_4042_ = lean_array_size(v_cs_4039_);
v___x_4043_ = ((size_t)0ULL);
v___x_4044_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__2(v_init_4025_, v_cs_4039_, v_sz_4042_, v___x_4043_, v___x_4041_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_);
if (lean_obj_tag(v___x_4044_) == 0)
{
lean_object* v_a_4045_; lean_object* v___x_4047_; uint8_t v_isShared_4048_; uint8_t v_isSharedCheck_4059_; 
v_a_4045_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4059_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4059_ == 0)
{
v___x_4047_ = v___x_4044_;
v_isShared_4048_ = v_isSharedCheck_4059_;
goto v_resetjp_4046_;
}
else
{
lean_inc(v_a_4045_);
lean_dec(v___x_4044_);
v___x_4047_ = lean_box(0);
v_isShared_4048_ = v_isSharedCheck_4059_;
goto v_resetjp_4046_;
}
v_resetjp_4046_:
{
lean_object* v_fst_4049_; 
v_fst_4049_ = lean_ctor_get(v_a_4045_, 0);
if (lean_obj_tag(v_fst_4049_) == 0)
{
lean_object* v_snd_4050_; lean_object* v___x_4051_; lean_object* v___x_4053_; 
v_snd_4050_ = lean_ctor_get(v_a_4045_, 1);
lean_inc(v_snd_4050_);
lean_dec(v_a_4045_);
v___x_4051_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4051_, 0, v_snd_4050_);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 0, v___x_4051_);
v___x_4053_ = v___x_4047_;
goto v_reusejp_4052_;
}
else
{
lean_object* v_reuseFailAlloc_4054_; 
v_reuseFailAlloc_4054_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4054_, 0, v___x_4051_);
v___x_4053_ = v_reuseFailAlloc_4054_;
goto v_reusejp_4052_;
}
v_reusejp_4052_:
{
return v___x_4053_;
}
}
else
{
lean_object* v_val_4055_; lean_object* v___x_4057_; 
lean_inc_ref(v_fst_4049_);
lean_dec(v_a_4045_);
v_val_4055_ = lean_ctor_get(v_fst_4049_, 0);
lean_inc(v_val_4055_);
lean_dec_ref_known(v_fst_4049_, 1);
if (v_isShared_4048_ == 0)
{
lean_ctor_set(v___x_4047_, 0, v_val_4055_);
v___x_4057_ = v___x_4047_;
goto v_reusejp_4056_;
}
else
{
lean_object* v_reuseFailAlloc_4058_; 
v_reuseFailAlloc_4058_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4058_, 0, v_val_4055_);
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
else
{
lean_object* v_a_4060_; lean_object* v___x_4062_; uint8_t v_isShared_4063_; uint8_t v_isSharedCheck_4067_; 
v_a_4060_ = lean_ctor_get(v___x_4044_, 0);
v_isSharedCheck_4067_ = !lean_is_exclusive(v___x_4044_);
if (v_isSharedCheck_4067_ == 0)
{
v___x_4062_ = v___x_4044_;
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
else
{
lean_inc(v_a_4060_);
lean_dec(v___x_4044_);
v___x_4062_ = lean_box(0);
v_isShared_4063_ = v_isSharedCheck_4067_;
goto v_resetjp_4061_;
}
v_resetjp_4061_:
{
lean_object* v___x_4065_; 
if (v_isShared_4063_ == 0)
{
v___x_4065_ = v___x_4062_;
goto v_reusejp_4064_;
}
else
{
lean_object* v_reuseFailAlloc_4066_; 
v_reuseFailAlloc_4066_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4066_, 0, v_a_4060_);
v___x_4065_ = v_reuseFailAlloc_4066_;
goto v_reusejp_4064_;
}
v_reusejp_4064_:
{
return v___x_4065_;
}
}
}
}
else
{
lean_object* v_vs_4068_; lean_object* v___x_4069_; lean_object* v___x_4070_; size_t v_sz_4071_; size_t v___x_4072_; lean_object* v___x_4073_; 
v_vs_4068_ = lean_ctor_get(v_n_4026_, 0);
v___x_4069_ = lean_box(0);
v___x_4070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4070_, 0, v___x_4069_);
lean_ctor_set(v___x_4070_, 1, v_b_4027_);
v_sz_4071_ = lean_array_size(v_vs_4068_);
v___x_4072_ = ((size_t)0ULL);
v___x_4073_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__3(v_vs_4068_, v_sz_4071_, v___x_4072_, v___x_4070_, v___y_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_, v___y_4033_, v___y_4034_, v___y_4035_, v___y_4036_, v___y_4037_);
if (lean_obj_tag(v___x_4073_) == 0)
{
lean_object* v_a_4074_; lean_object* v___x_4076_; uint8_t v_isShared_4077_; uint8_t v_isSharedCheck_4088_; 
v_a_4074_ = lean_ctor_get(v___x_4073_, 0);
v_isSharedCheck_4088_ = !lean_is_exclusive(v___x_4073_);
if (v_isSharedCheck_4088_ == 0)
{
v___x_4076_ = v___x_4073_;
v_isShared_4077_ = v_isSharedCheck_4088_;
goto v_resetjp_4075_;
}
else
{
lean_inc(v_a_4074_);
lean_dec(v___x_4073_);
v___x_4076_ = lean_box(0);
v_isShared_4077_ = v_isSharedCheck_4088_;
goto v_resetjp_4075_;
}
v_resetjp_4075_:
{
lean_object* v_fst_4078_; 
v_fst_4078_ = lean_ctor_get(v_a_4074_, 0);
if (lean_obj_tag(v_fst_4078_) == 0)
{
lean_object* v_snd_4079_; lean_object* v___x_4080_; lean_object* v___x_4082_; 
v_snd_4079_ = lean_ctor_get(v_a_4074_, 1);
lean_inc(v_snd_4079_);
lean_dec(v_a_4074_);
v___x_4080_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4080_, 0, v_snd_4079_);
if (v_isShared_4077_ == 0)
{
lean_ctor_set(v___x_4076_, 0, v___x_4080_);
v___x_4082_ = v___x_4076_;
goto v_reusejp_4081_;
}
else
{
lean_object* v_reuseFailAlloc_4083_; 
v_reuseFailAlloc_4083_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4083_, 0, v___x_4080_);
v___x_4082_ = v_reuseFailAlloc_4083_;
goto v_reusejp_4081_;
}
v_reusejp_4081_:
{
return v___x_4082_;
}
}
else
{
lean_object* v_val_4084_; lean_object* v___x_4086_; 
lean_inc_ref(v_fst_4078_);
lean_dec(v_a_4074_);
v_val_4084_ = lean_ctor_get(v_fst_4078_, 0);
lean_inc(v_val_4084_);
lean_dec_ref_known(v_fst_4078_, 1);
if (v_isShared_4077_ == 0)
{
lean_ctor_set(v___x_4076_, 0, v_val_4084_);
v___x_4086_ = v___x_4076_;
goto v_reusejp_4085_;
}
else
{
lean_object* v_reuseFailAlloc_4087_; 
v_reuseFailAlloc_4087_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4087_, 0, v_val_4084_);
v___x_4086_ = v_reuseFailAlloc_4087_;
goto v_reusejp_4085_;
}
v_reusejp_4085_:
{
return v___x_4086_;
}
}
}
}
else
{
lean_object* v_a_4089_; lean_object* v___x_4091_; uint8_t v_isShared_4092_; uint8_t v_isSharedCheck_4096_; 
v_a_4089_ = lean_ctor_get(v___x_4073_, 0);
v_isSharedCheck_4096_ = !lean_is_exclusive(v___x_4073_);
if (v_isSharedCheck_4096_ == 0)
{
v___x_4091_ = v___x_4073_;
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
else
{
lean_inc(v_a_4089_);
lean_dec(v___x_4073_);
v___x_4091_ = lean_box(0);
v_isShared_4092_ = v_isSharedCheck_4096_;
goto v_resetjp_4090_;
}
v_resetjp_4090_:
{
lean_object* v___x_4094_; 
if (v_isShared_4092_ == 0)
{
v___x_4094_ = v___x_4091_;
goto v_reusejp_4093_;
}
else
{
lean_object* v_reuseFailAlloc_4095_; 
v_reuseFailAlloc_4095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4095_, 0, v_a_4089_);
v___x_4094_ = v_reuseFailAlloc_4095_;
goto v_reusejp_4093_;
}
v_reusejp_4093_:
{
return v___x_4094_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__2(lean_object* v_init_4097_, lean_object* v_as_4098_, size_t v_sz_4099_, size_t v_i_4100_, lean_object* v_b_4101_, lean_object* v___y_4102_, lean_object* v___y_4103_, lean_object* v___y_4104_, lean_object* v___y_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_, lean_object* v___y_4111_){
_start:
{
uint8_t v___x_4113_; 
v___x_4113_ = lean_usize_dec_lt(v_i_4100_, v_sz_4099_);
if (v___x_4113_ == 0)
{
lean_object* v___x_4114_; 
v___x_4114_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4114_, 0, v_b_4101_);
return v___x_4114_;
}
else
{
lean_object* v_snd_4115_; lean_object* v___x_4117_; uint8_t v_isShared_4118_; uint8_t v_isSharedCheck_4149_; 
v_snd_4115_ = lean_ctor_get(v_b_4101_, 1);
v_isSharedCheck_4149_ = !lean_is_exclusive(v_b_4101_);
if (v_isSharedCheck_4149_ == 0)
{
lean_object* v_unused_4150_; 
v_unused_4150_ = lean_ctor_get(v_b_4101_, 0);
lean_dec(v_unused_4150_);
v___x_4117_ = v_b_4101_;
v_isShared_4118_ = v_isSharedCheck_4149_;
goto v_resetjp_4116_;
}
else
{
lean_inc(v_snd_4115_);
lean_dec(v_b_4101_);
v___x_4117_ = lean_box(0);
v_isShared_4118_ = v_isSharedCheck_4149_;
goto v_resetjp_4116_;
}
v_resetjp_4116_:
{
lean_object* v___x_4119_; lean_object* v_a_4120_; lean_object* v___x_4121_; 
v___x_4119_ = lean_box(0);
v_a_4120_ = lean_array_uget_borrowed(v_as_4098_, v_i_4100_);
lean_inc(v_snd_4115_);
v___x_4121_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1(v_init_4097_, v_a_4120_, v_snd_4115_, v___y_4102_, v___y_4103_, v___y_4104_, v___y_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_, v___y_4110_, v___y_4111_);
if (lean_obj_tag(v___x_4121_) == 0)
{
lean_object* v_a_4122_; lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4140_; 
v_a_4122_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4140_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4140_ == 0)
{
v___x_4124_ = v___x_4121_;
v_isShared_4125_ = v_isSharedCheck_4140_;
goto v_resetjp_4123_;
}
else
{
lean_inc(v_a_4122_);
lean_dec(v___x_4121_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4140_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
if (lean_obj_tag(v_a_4122_) == 0)
{
lean_object* v___x_4126_; lean_object* v___x_4128_; 
v___x_4126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4126_, 0, v_a_4122_);
if (v_isShared_4118_ == 0)
{
lean_ctor_set(v___x_4117_, 0, v___x_4126_);
v___x_4128_ = v___x_4117_;
goto v_reusejp_4127_;
}
else
{
lean_object* v_reuseFailAlloc_4132_; 
v_reuseFailAlloc_4132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4132_, 0, v___x_4126_);
lean_ctor_set(v_reuseFailAlloc_4132_, 1, v_snd_4115_);
v___x_4128_ = v_reuseFailAlloc_4132_;
goto v_reusejp_4127_;
}
v_reusejp_4127_:
{
lean_object* v___x_4130_; 
if (v_isShared_4125_ == 0)
{
lean_ctor_set(v___x_4124_, 0, v___x_4128_);
v___x_4130_ = v___x_4124_;
goto v_reusejp_4129_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v___x_4128_);
v___x_4130_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4129_;
}
v_reusejp_4129_:
{
return v___x_4130_;
}
}
}
else
{
lean_object* v_a_4133_; lean_object* v___x_4135_; 
lean_del_object(v___x_4124_);
lean_dec(v_snd_4115_);
v_a_4133_ = lean_ctor_get(v_a_4122_, 0);
lean_inc(v_a_4133_);
lean_dec_ref_known(v_a_4122_, 1);
if (v_isShared_4118_ == 0)
{
lean_ctor_set(v___x_4117_, 1, v_a_4133_);
lean_ctor_set(v___x_4117_, 0, v___x_4119_);
v___x_4135_ = v___x_4117_;
goto v_reusejp_4134_;
}
else
{
lean_object* v_reuseFailAlloc_4139_; 
v_reuseFailAlloc_4139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4139_, 0, v___x_4119_);
lean_ctor_set(v_reuseFailAlloc_4139_, 1, v_a_4133_);
v___x_4135_ = v_reuseFailAlloc_4139_;
goto v_reusejp_4134_;
}
v_reusejp_4134_:
{
size_t v___x_4136_; size_t v___x_4137_; 
v___x_4136_ = ((size_t)1ULL);
v___x_4137_ = lean_usize_add(v_i_4100_, v___x_4136_);
v_i_4100_ = v___x_4137_;
v_b_4101_ = v___x_4135_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_4141_; lean_object* v___x_4143_; uint8_t v_isShared_4144_; uint8_t v_isSharedCheck_4148_; 
lean_del_object(v___x_4117_);
lean_dec(v_snd_4115_);
v_a_4141_ = lean_ctor_get(v___x_4121_, 0);
v_isSharedCheck_4148_ = !lean_is_exclusive(v___x_4121_);
if (v_isSharedCheck_4148_ == 0)
{
v___x_4143_ = v___x_4121_;
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
else
{
lean_inc(v_a_4141_);
lean_dec(v___x_4121_);
v___x_4143_ = lean_box(0);
v_isShared_4144_ = v_isSharedCheck_4148_;
goto v_resetjp_4142_;
}
v_resetjp_4142_:
{
lean_object* v___x_4146_; 
if (v_isShared_4144_ == 0)
{
v___x_4146_ = v___x_4143_;
goto v_reusejp_4145_;
}
else
{
lean_object* v_reuseFailAlloc_4147_; 
v_reuseFailAlloc_4147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4147_, 0, v_a_4141_);
v___x_4146_ = v_reuseFailAlloc_4147_;
goto v_reusejp_4145_;
}
v_reusejp_4145_:
{
return v___x_4146_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__2___boxed(lean_object* v_init_4151_, lean_object* v_as_4152_, lean_object* v_sz_4153_, lean_object* v_i_4154_, lean_object* v_b_4155_, lean_object* v___y_4156_, lean_object* v___y_4157_, lean_object* v___y_4158_, lean_object* v___y_4159_, lean_object* v___y_4160_, lean_object* v___y_4161_, lean_object* v___y_4162_, lean_object* v___y_4163_, lean_object* v___y_4164_, lean_object* v___y_4165_, lean_object* v___y_4166_){
_start:
{
size_t v_sz_boxed_4167_; size_t v_i_boxed_4168_; lean_object* v_res_4169_; 
v_sz_boxed_4167_ = lean_unbox_usize(v_sz_4153_);
lean_dec(v_sz_4153_);
v_i_boxed_4168_ = lean_unbox_usize(v_i_4154_);
lean_dec(v_i_4154_);
v_res_4169_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1_spec__2(v_init_4151_, v_as_4152_, v_sz_boxed_4167_, v_i_boxed_4168_, v_b_4155_, v___y_4156_, v___y_4157_, v___y_4158_, v___y_4159_, v___y_4160_, v___y_4161_, v___y_4162_, v___y_4163_, v___y_4164_, v___y_4165_);
lean_dec(v___y_4165_);
lean_dec_ref(v___y_4164_);
lean_dec(v___y_4163_);
lean_dec_ref(v___y_4162_);
lean_dec(v___y_4161_);
lean_dec_ref(v___y_4160_);
lean_dec(v___y_4159_);
lean_dec_ref(v___y_4158_);
lean_dec(v___y_4157_);
lean_dec(v___y_4156_);
lean_dec_ref(v_as_4152_);
return v_res_4169_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1___boxed(lean_object* v_init_4170_, lean_object* v_n_4171_, lean_object* v_b_4172_, lean_object* v___y_4173_, lean_object* v___y_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_, lean_object* v___y_4179_, lean_object* v___y_4180_, lean_object* v___y_4181_, lean_object* v___y_4182_, lean_object* v___y_4183_){
_start:
{
lean_object* v_res_4184_; 
v_res_4184_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1(v_init_4170_, v_n_4171_, v_b_4172_, v___y_4173_, v___y_4174_, v___y_4175_, v___y_4176_, v___y_4177_, v___y_4178_, v___y_4179_, v___y_4180_, v___y_4181_, v___y_4182_);
lean_dec(v___y_4182_);
lean_dec_ref(v___y_4181_);
lean_dec(v___y_4180_);
lean_dec_ref(v___y_4179_);
lean_dec(v___y_4178_);
lean_dec_ref(v___y_4177_);
lean_dec(v___y_4176_);
lean_dec_ref(v___y_4175_);
lean_dec(v___y_4174_);
lean_dec(v___y_4173_);
lean_dec_ref(v_n_4171_);
return v_res_4184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1(lean_object* v_t_4185_, lean_object* v_init_4186_, lean_object* v___y_4187_, lean_object* v___y_4188_, lean_object* v___y_4189_, lean_object* v___y_4190_, lean_object* v___y_4191_, lean_object* v___y_4192_, lean_object* v___y_4193_, lean_object* v___y_4194_, lean_object* v___y_4195_, lean_object* v___y_4196_){
_start:
{
lean_object* v_root_4198_; lean_object* v_tail_4199_; lean_object* v___x_4200_; 
v_root_4198_ = lean_ctor_get(v_t_4185_, 0);
v_tail_4199_ = lean_ctor_get(v_t_4185_, 1);
v___x_4200_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__1(v_init_4186_, v_root_4198_, v_init_4186_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_);
if (lean_obj_tag(v___x_4200_) == 0)
{
lean_object* v_a_4201_; lean_object* v___x_4203_; uint8_t v_isShared_4204_; uint8_t v_isSharedCheck_4237_; 
v_a_4201_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4237_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4237_ == 0)
{
v___x_4203_ = v___x_4200_;
v_isShared_4204_ = v_isSharedCheck_4237_;
goto v_resetjp_4202_;
}
else
{
lean_inc(v_a_4201_);
lean_dec(v___x_4200_);
v___x_4203_ = lean_box(0);
v_isShared_4204_ = v_isSharedCheck_4237_;
goto v_resetjp_4202_;
}
v_resetjp_4202_:
{
if (lean_obj_tag(v_a_4201_) == 0)
{
lean_object* v_a_4205_; lean_object* v___x_4207_; 
v_a_4205_ = lean_ctor_get(v_a_4201_, 0);
lean_inc(v_a_4205_);
lean_dec_ref_known(v_a_4201_, 1);
if (v_isShared_4204_ == 0)
{
lean_ctor_set(v___x_4203_, 0, v_a_4205_);
v___x_4207_ = v___x_4203_;
goto v_reusejp_4206_;
}
else
{
lean_object* v_reuseFailAlloc_4208_; 
v_reuseFailAlloc_4208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4208_, 0, v_a_4205_);
v___x_4207_ = v_reuseFailAlloc_4208_;
goto v_reusejp_4206_;
}
v_reusejp_4206_:
{
return v___x_4207_;
}
}
else
{
lean_object* v_a_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; size_t v_sz_4212_; size_t v___x_4213_; lean_object* v___x_4214_; 
lean_del_object(v___x_4203_);
v_a_4209_ = lean_ctor_get(v_a_4201_, 0);
lean_inc(v_a_4209_);
lean_dec_ref_known(v_a_4201_, 1);
v___x_4210_ = lean_box(0);
v___x_4211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4211_, 0, v___x_4210_);
lean_ctor_set(v___x_4211_, 1, v_a_4209_);
v_sz_4212_ = lean_array_size(v_tail_4199_);
v___x_4213_ = ((size_t)0ULL);
v___x_4214_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1_spec__2(v_tail_4199_, v_sz_4212_, v___x_4213_, v___x_4211_, v___y_4187_, v___y_4188_, v___y_4189_, v___y_4190_, v___y_4191_, v___y_4192_, v___y_4193_, v___y_4194_, v___y_4195_, v___y_4196_);
if (lean_obj_tag(v___x_4214_) == 0)
{
lean_object* v_a_4215_; lean_object* v___x_4217_; uint8_t v_isShared_4218_; uint8_t v_isSharedCheck_4228_; 
v_a_4215_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4228_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4228_ == 0)
{
v___x_4217_ = v___x_4214_;
v_isShared_4218_ = v_isSharedCheck_4228_;
goto v_resetjp_4216_;
}
else
{
lean_inc(v_a_4215_);
lean_dec(v___x_4214_);
v___x_4217_ = lean_box(0);
v_isShared_4218_ = v_isSharedCheck_4228_;
goto v_resetjp_4216_;
}
v_resetjp_4216_:
{
lean_object* v_fst_4219_; 
v_fst_4219_ = lean_ctor_get(v_a_4215_, 0);
if (lean_obj_tag(v_fst_4219_) == 0)
{
lean_object* v_snd_4220_; lean_object* v___x_4222_; 
v_snd_4220_ = lean_ctor_get(v_a_4215_, 1);
lean_inc(v_snd_4220_);
lean_dec(v_a_4215_);
if (v_isShared_4218_ == 0)
{
lean_ctor_set(v___x_4217_, 0, v_snd_4220_);
v___x_4222_ = v___x_4217_;
goto v_reusejp_4221_;
}
else
{
lean_object* v_reuseFailAlloc_4223_; 
v_reuseFailAlloc_4223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4223_, 0, v_snd_4220_);
v___x_4222_ = v_reuseFailAlloc_4223_;
goto v_reusejp_4221_;
}
v_reusejp_4221_:
{
return v___x_4222_;
}
}
else
{
lean_object* v_val_4224_; lean_object* v___x_4226_; 
lean_inc_ref(v_fst_4219_);
lean_dec(v_a_4215_);
v_val_4224_ = lean_ctor_get(v_fst_4219_, 0);
lean_inc(v_val_4224_);
lean_dec_ref_known(v_fst_4219_, 1);
if (v_isShared_4218_ == 0)
{
lean_ctor_set(v___x_4217_, 0, v_val_4224_);
v___x_4226_ = v___x_4217_;
goto v_reusejp_4225_;
}
else
{
lean_object* v_reuseFailAlloc_4227_; 
v_reuseFailAlloc_4227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4227_, 0, v_val_4224_);
v___x_4226_ = v_reuseFailAlloc_4227_;
goto v_reusejp_4225_;
}
v_reusejp_4225_:
{
return v___x_4226_;
}
}
}
}
else
{
lean_object* v_a_4229_; lean_object* v___x_4231_; uint8_t v_isShared_4232_; uint8_t v_isSharedCheck_4236_; 
v_a_4229_ = lean_ctor_get(v___x_4214_, 0);
v_isSharedCheck_4236_ = !lean_is_exclusive(v___x_4214_);
if (v_isSharedCheck_4236_ == 0)
{
v___x_4231_ = v___x_4214_;
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
else
{
lean_inc(v_a_4229_);
lean_dec(v___x_4214_);
v___x_4231_ = lean_box(0);
v_isShared_4232_ = v_isSharedCheck_4236_;
goto v_resetjp_4230_;
}
v_resetjp_4230_:
{
lean_object* v___x_4234_; 
if (v_isShared_4232_ == 0)
{
v___x_4234_ = v___x_4231_;
goto v_reusejp_4233_;
}
else
{
lean_object* v_reuseFailAlloc_4235_; 
v_reuseFailAlloc_4235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4235_, 0, v_a_4229_);
v___x_4234_ = v_reuseFailAlloc_4235_;
goto v_reusejp_4233_;
}
v_reusejp_4233_:
{
return v___x_4234_;
}
}
}
}
}
}
else
{
lean_object* v_a_4238_; lean_object* v___x_4240_; uint8_t v_isShared_4241_; uint8_t v_isSharedCheck_4245_; 
v_a_4238_ = lean_ctor_get(v___x_4200_, 0);
v_isSharedCheck_4245_ = !lean_is_exclusive(v___x_4200_);
if (v_isSharedCheck_4245_ == 0)
{
v___x_4240_ = v___x_4200_;
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
else
{
lean_inc(v_a_4238_);
lean_dec(v___x_4200_);
v___x_4240_ = lean_box(0);
v_isShared_4241_ = v_isSharedCheck_4245_;
goto v_resetjp_4239_;
}
v_resetjp_4239_:
{
lean_object* v___x_4243_; 
if (v_isShared_4241_ == 0)
{
v___x_4243_ = v___x_4240_;
goto v_reusejp_4242_;
}
else
{
lean_object* v_reuseFailAlloc_4244_; 
v_reuseFailAlloc_4244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4244_, 0, v_a_4238_);
v___x_4243_ = v_reuseFailAlloc_4244_;
goto v_reusejp_4242_;
}
v_reusejp_4242_:
{
return v___x_4243_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1___boxed(lean_object* v_t_4246_, lean_object* v_init_4247_, lean_object* v___y_4248_, lean_object* v___y_4249_, lean_object* v___y_4250_, lean_object* v___y_4251_, lean_object* v___y_4252_, lean_object* v___y_4253_, lean_object* v___y_4254_, lean_object* v___y_4255_, lean_object* v___y_4256_, lean_object* v___y_4257_, lean_object* v___y_4258_){
_start:
{
lean_object* v_res_4259_; 
v_res_4259_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1(v_t_4246_, v_init_4247_, v___y_4248_, v___y_4249_, v___y_4250_, v___y_4251_, v___y_4252_, v___y_4253_, v___y_4254_, v___y_4255_, v___y_4256_, v___y_4257_);
lean_dec(v___y_4257_);
lean_dec_ref(v___y_4256_);
lean_dec(v___y_4255_);
lean_dec_ref(v___y_4254_);
lean_dec(v___y_4253_);
lean_dec_ref(v___y_4252_);
lean_dec(v___y_4251_);
lean_dec_ref(v___y_4250_);
lean_dec(v___y_4249_);
lean_dec(v___y_4248_);
lean_dec_ref(v_t_4246_);
return v_res_4259_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkInvariants(uint8_t v_expensive_4260_, lean_object* v_a_4261_, lean_object* v_a_4262_, lean_object* v_a_4263_, lean_object* v_a_4264_, lean_object* v_a_4265_, lean_object* v_a_4266_, lean_object* v_a_4267_, lean_object* v_a_4268_, lean_object* v_a_4269_, lean_object* v_a_4270_){
_start:
{
lean_object* v___y_4276_; lean_object* v___y_4277_; lean_object* v___y_4278_; lean_object* v___y_4279_; lean_object* v___y_4280_; lean_object* v___y_4281_; lean_object* v___y_4282_; lean_object* v___y_4283_; lean_object* v___y_4284_; lean_object* v___y_4285_; lean_object* v___y_4291_; lean_object* v___y_4292_; lean_object* v___y_4293_; lean_object* v___y_4294_; lean_object* v___y_4295_; lean_object* v___y_4296_; lean_object* v___y_4297_; lean_object* v___y_4298_; lean_object* v___y_4299_; lean_object* v___y_4300_; uint8_t v_debug_4302_; 
v_debug_4302_ = lean_ctor_get_uint8(v_a_4263_, sizeof(void*)*12 + 3);
if (v_debug_4302_ == 0)
{
v___y_4276_ = v_a_4261_;
v___y_4277_ = v_a_4262_;
v___y_4278_ = v_a_4263_;
v___y_4279_ = v_a_4264_;
v___y_4280_ = v_a_4265_;
v___y_4281_ = v_a_4266_;
v___y_4282_ = v_a_4267_;
v___y_4283_ = v_a_4268_;
v___y_4284_ = v_a_4269_;
v___y_4285_ = v_a_4270_;
goto v___jp_4275_;
}
else
{
lean_object* v___x_4303_; 
v___x_4303_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCongrTable(v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_, v_a_4270_);
if (lean_obj_tag(v___x_4303_) == 0)
{
lean_object* v___x_4304_; 
lean_dec_ref_known(v___x_4303_, 1);
v___x_4304_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkCondParents(v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_, v_a_4270_);
if (lean_obj_tag(v___x_4304_) == 0)
{
lean_object* v___x_4305_; 
lean_dec_ref_known(v___x_4304_, 1);
v___x_4305_ = l_Lean_Meta_Grind_getExprs___redArg(v_a_4261_);
if (lean_obj_tag(v___x_4305_) == 0)
{
lean_object* v_a_4306_; lean_object* v___x_4307_; lean_object* v___x_4308_; 
v_a_4306_ = lean_ctor_get(v___x_4305_, 0);
lean_inc(v_a_4306_);
lean_dec_ref_known(v___x_4305_, 1);
v___x_4307_ = lean_box(0);
v___x_4308_ = l_Lean_PersistentArray_forIn___at___00Lean_Meta_Grind_checkInvariants_spec__1(v_a_4306_, v___x_4307_, v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_, v_a_4270_);
lean_dec(v_a_4306_);
if (lean_obj_tag(v___x_4308_) == 0)
{
lean_dec_ref_known(v___x_4308_, 1);
if (v_expensive_4260_ == 0)
{
v___y_4291_ = v_a_4261_;
v___y_4292_ = v_a_4262_;
v___y_4293_ = v_a_4263_;
v___y_4294_ = v_a_4264_;
v___y_4295_ = v_a_4265_;
v___y_4296_ = v_a_4266_;
v___y_4297_ = v_a_4267_;
v___y_4298_ = v_a_4268_;
v___y_4299_ = v_a_4269_;
v___y_4300_ = v_a_4270_;
goto v___jp_4290_;
}
else
{
lean_object* v___x_4309_; 
v___x_4309_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkPtrEqImpliesStructEq(v_a_4261_, v_a_4262_, v_a_4263_, v_a_4264_, v_a_4265_, v_a_4266_, v_a_4267_, v_a_4268_, v_a_4269_, v_a_4270_);
if (lean_obj_tag(v___x_4309_) == 0)
{
lean_dec_ref_known(v___x_4309_, 1);
v___y_4291_ = v_a_4261_;
v___y_4292_ = v_a_4262_;
v___y_4293_ = v_a_4263_;
v___y_4294_ = v_a_4264_;
v___y_4295_ = v_a_4265_;
v___y_4296_ = v_a_4266_;
v___y_4297_ = v_a_4267_;
v___y_4298_ = v_a_4268_;
v___y_4299_ = v_a_4269_;
v___y_4300_ = v_a_4270_;
goto v___jp_4290_;
}
else
{
return v___x_4309_;
}
}
}
else
{
return v___x_4308_;
}
}
else
{
lean_object* v_a_4310_; lean_object* v___x_4312_; uint8_t v_isShared_4313_; uint8_t v_isSharedCheck_4317_; 
v_a_4310_ = lean_ctor_get(v___x_4305_, 0);
v_isSharedCheck_4317_ = !lean_is_exclusive(v___x_4305_);
if (v_isSharedCheck_4317_ == 0)
{
v___x_4312_ = v___x_4305_;
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
else
{
lean_inc(v_a_4310_);
lean_dec(v___x_4305_);
v___x_4312_ = lean_box(0);
v_isShared_4313_ = v_isSharedCheck_4317_;
goto v_resetjp_4311_;
}
v_resetjp_4311_:
{
lean_object* v___x_4315_; 
if (v_isShared_4313_ == 0)
{
v___x_4315_ = v___x_4312_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4316_; 
v_reuseFailAlloc_4316_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4316_, 0, v_a_4310_);
v___x_4315_ = v_reuseFailAlloc_4316_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
return v___x_4315_;
}
}
}
}
else
{
return v___x_4304_;
}
}
else
{
return v___x_4303_;
}
}
v___jp_4272_:
{
lean_object* v___x_4273_; lean_object* v___x_4274_; 
v___x_4273_ = lean_box(0);
v___x_4274_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4274_, 0, v___x_4273_);
return v___x_4274_;
}
v___jp_4275_:
{
if (v_expensive_4260_ == 0)
{
goto v___jp_4272_;
}
else
{
lean_object* v___x_4286_; lean_object* v___x_4287_; uint8_t v___x_4288_; 
v___x_4286_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v___y_4284_);
v___x_4287_ = l_Lean_Meta_Grind_grind_debug_proofs;
v___x_4288_ = l_Lean_Option_get___at___00Lean_Meta_Grind_checkInvariants_spec__0(v___x_4286_, v___x_4287_);
lean_dec_ref(v___x_4286_);
if (v___x_4288_ == 0)
{
goto v___jp_4272_;
}
else
{
lean_object* v___x_4289_; 
v___x_4289_ = l___private_Lean_Meta_Tactic_Grind_Inv_0__Lean_Meta_Grind_checkProofs(v___y_4276_, v___y_4277_, v___y_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_, v___y_4283_, v___y_4284_, v___y_4285_);
return v___x_4289_;
}
}
}
v___jp_4290_:
{
lean_object* v___x_4301_; 
v___x_4301_ = l_Lean_Meta_Grind_Solvers_checkInvariants(v___y_4291_, v___y_4292_, v___y_4293_, v___y_4294_, v___y_4295_, v___y_4296_, v___y_4297_, v___y_4298_, v___y_4299_, v___y_4300_);
if (lean_obj_tag(v___x_4301_) == 0)
{
lean_dec_ref_known(v___x_4301_, 1);
v___y_4276_ = v___y_4291_;
v___y_4277_ = v___y_4292_;
v___y_4278_ = v___y_4293_;
v___y_4279_ = v___y_4294_;
v___y_4280_ = v___y_4295_;
v___y_4281_ = v___y_4296_;
v___y_4282_ = v___y_4297_;
v___y_4283_ = v___y_4298_;
v___y_4284_ = v___y_4299_;
v___y_4285_ = v___y_4300_;
goto v___jp_4275_;
}
else
{
return v___x_4301_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_checkInvariants___boxed(lean_object* v_expensive_4318_, lean_object* v_a_4319_, lean_object* v_a_4320_, lean_object* v_a_4321_, lean_object* v_a_4322_, lean_object* v_a_4323_, lean_object* v_a_4324_, lean_object* v_a_4325_, lean_object* v_a_4326_, lean_object* v_a_4327_, lean_object* v_a_4328_, lean_object* v_a_4329_){
_start:
{
uint8_t v_expensive_boxed_4330_; lean_object* v_res_4331_; 
v_expensive_boxed_4330_ = lean_unbox(v_expensive_4318_);
v_res_4331_ = l_Lean_Meta_Grind_checkInvariants(v_expensive_boxed_4330_, v_a_4319_, v_a_4320_, v_a_4321_, v_a_4322_, v_a_4323_, v_a_4324_, v_a_4325_, v_a_4326_, v_a_4327_, v_a_4328_);
lean_dec(v_a_4328_);
lean_dec_ref(v_a_4327_);
lean_dec(v_a_4326_);
lean_dec_ref(v_a_4325_);
lean_dec(v_a_4324_);
lean_dec_ref(v_a_4323_);
lean_dec(v_a_4322_);
lean_dec_ref(v_a_4321_);
lean_dec(v_a_4320_);
lean_dec(v_a_4319_);
return v_res_4331_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___lam__0(lean_object* v_x_4332_, lean_object* v___y_4333_, lean_object* v___y_4334_, lean_object* v___y_4335_, lean_object* v___y_4336_, lean_object* v___y_4337_, lean_object* v___y_4338_, lean_object* v___y_4339_, lean_object* v___y_4340_, lean_object* v___y_4341_){
_start:
{
lean_object* v___x_4343_; 
lean_inc(v___y_4337_);
lean_inc_ref(v___y_4336_);
lean_inc(v___y_4335_);
lean_inc_ref(v___y_4334_);
lean_inc(v___y_4333_);
v___x_4343_ = lean_apply_10(v_x_4332_, v___y_4333_, v___y_4334_, v___y_4335_, v___y_4336_, v___y_4337_, v___y_4338_, v___y_4339_, v___y_4340_, v___y_4341_, lean_box(0));
return v___x_4343_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___lam__0___boxed(lean_object* v_x_4344_, lean_object* v___y_4345_, lean_object* v___y_4346_, lean_object* v___y_4347_, lean_object* v___y_4348_, lean_object* v___y_4349_, lean_object* v___y_4350_, lean_object* v___y_4351_, lean_object* v___y_4352_, lean_object* v___y_4353_, lean_object* v___y_4354_){
_start:
{
lean_object* v_res_4355_; 
v_res_4355_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___lam__0(v_x_4344_, v___y_4345_, v___y_4346_, v___y_4347_, v___y_4348_, v___y_4349_, v___y_4350_, v___y_4351_, v___y_4352_, v___y_4353_);
lean_dec(v___y_4349_);
lean_dec_ref(v___y_4348_);
lean_dec(v___y_4347_);
lean_dec_ref(v___y_4346_);
lean_dec(v___y_4345_);
return v_res_4355_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg(lean_object* v_mvarId_4356_, lean_object* v_x_4357_, lean_object* v___y_4358_, lean_object* v___y_4359_, lean_object* v___y_4360_, lean_object* v___y_4361_, lean_object* v___y_4362_, lean_object* v___y_4363_, lean_object* v___y_4364_, lean_object* v___y_4365_, lean_object* v___y_4366_){
_start:
{
lean_object* v___f_4368_; lean_object* v___x_4369_; 
lean_inc(v___y_4362_);
lean_inc_ref(v___y_4361_);
lean_inc(v___y_4360_);
lean_inc_ref(v___y_4359_);
lean_inc(v___y_4358_);
v___f_4368_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_4368_, 0, v_x_4357_);
lean_closure_set(v___f_4368_, 1, v___y_4358_);
lean_closure_set(v___f_4368_, 2, v___y_4359_);
lean_closure_set(v___f_4368_, 3, v___y_4360_);
lean_closure_set(v___f_4368_, 4, v___y_4361_);
lean_closure_set(v___f_4368_, 5, v___y_4362_);
v___x_4369_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_4356_, v___f_4368_, v___y_4363_, v___y_4364_, v___y_4365_, v___y_4366_);
if (lean_obj_tag(v___x_4369_) == 0)
{
return v___x_4369_;
}
else
{
lean_object* v_a_4370_; lean_object* v___x_4372_; uint8_t v_isShared_4373_; uint8_t v_isSharedCheck_4377_; 
v_a_4370_ = lean_ctor_get(v___x_4369_, 0);
v_isSharedCheck_4377_ = !lean_is_exclusive(v___x_4369_);
if (v_isSharedCheck_4377_ == 0)
{
v___x_4372_ = v___x_4369_;
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
else
{
lean_inc(v_a_4370_);
lean_dec(v___x_4369_);
v___x_4372_ = lean_box(0);
v_isShared_4373_ = v_isSharedCheck_4377_;
goto v_resetjp_4371_;
}
v_resetjp_4371_:
{
lean_object* v___x_4375_; 
if (v_isShared_4373_ == 0)
{
v___x_4375_ = v___x_4372_;
goto v_reusejp_4374_;
}
else
{
lean_object* v_reuseFailAlloc_4376_; 
v_reuseFailAlloc_4376_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4376_, 0, v_a_4370_);
v___x_4375_ = v_reuseFailAlloc_4376_;
goto v_reusejp_4374_;
}
v_reusejp_4374_:
{
return v___x_4375_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg___boxed(lean_object* v_mvarId_4378_, lean_object* v_x_4379_, lean_object* v___y_4380_, lean_object* v___y_4381_, lean_object* v___y_4382_, lean_object* v___y_4383_, lean_object* v___y_4384_, lean_object* v___y_4385_, lean_object* v___y_4386_, lean_object* v___y_4387_, lean_object* v___y_4388_, lean_object* v___y_4389_){
_start:
{
lean_object* v_res_4390_; 
v_res_4390_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg(v_mvarId_4378_, v_x_4379_, v___y_4380_, v___y_4381_, v___y_4382_, v___y_4383_, v___y_4384_, v___y_4385_, v___y_4386_, v___y_4387_, v___y_4388_);
lean_dec(v___y_4388_);
lean_dec_ref(v___y_4387_);
lean_dec(v___y_4386_);
lean_dec_ref(v___y_4385_);
lean_dec(v___y_4384_);
lean_dec_ref(v___y_4383_);
lean_dec(v___y_4382_);
lean_dec_ref(v___y_4381_);
lean_dec(v___y_4380_);
return v_res_4390_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0(lean_object* v_00_u03b1_4391_, lean_object* v_mvarId_4392_, lean_object* v_x_4393_, lean_object* v___y_4394_, lean_object* v___y_4395_, lean_object* v___y_4396_, lean_object* v___y_4397_, lean_object* v___y_4398_, lean_object* v___y_4399_, lean_object* v___y_4400_, lean_object* v___y_4401_, lean_object* v___y_4402_){
_start:
{
lean_object* v___x_4404_; 
v___x_4404_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg(v_mvarId_4392_, v_x_4393_, v___y_4394_, v___y_4395_, v___y_4396_, v___y_4397_, v___y_4398_, v___y_4399_, v___y_4400_, v___y_4401_, v___y_4402_);
return v___x_4404_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___boxed(lean_object* v_00_u03b1_4405_, lean_object* v_mvarId_4406_, lean_object* v_x_4407_, lean_object* v___y_4408_, lean_object* v___y_4409_, lean_object* v___y_4410_, lean_object* v___y_4411_, lean_object* v___y_4412_, lean_object* v___y_4413_, lean_object* v___y_4414_, lean_object* v___y_4415_, lean_object* v___y_4416_, lean_object* v___y_4417_){
_start:
{
lean_object* v_res_4418_; 
v_res_4418_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0(v_00_u03b1_4405_, v_mvarId_4406_, v_x_4407_, v___y_4408_, v___y_4409_, v___y_4410_, v___y_4411_, v___y_4412_, v___y_4413_, v___y_4414_, v___y_4415_, v___y_4416_);
lean_dec(v___y_4416_);
lean_dec_ref(v___y_4415_);
lean_dec(v___y_4414_);
lean_dec_ref(v___y_4413_);
lean_dec(v___y_4412_);
lean_dec_ref(v___y_4411_);
lean_dec(v___y_4410_);
lean_dec_ref(v___y_4409_);
lean_dec(v___y_4408_);
return v_res_4418_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants___lam__0(lean_object* v_goal_4419_, uint8_t v_expensive_4420_, lean_object* v___y_4421_, lean_object* v___y_4422_, lean_object* v___y_4423_, lean_object* v___y_4424_, lean_object* v___y_4425_, lean_object* v___y_4426_, lean_object* v___y_4427_, lean_object* v___y_4428_, lean_object* v___y_4429_){
_start:
{
lean_object* v___x_4431_; lean_object* v___x_4432_; 
v___x_4431_ = lean_st_mk_ref(v_goal_4419_);
v___x_4432_ = l_Lean_Meta_Grind_checkInvariants(v_expensive_4420_, v___x_4431_, v___y_4421_, v___y_4422_, v___y_4423_, v___y_4424_, v___y_4425_, v___y_4426_, v___y_4427_, v___y_4428_, v___y_4429_);
if (lean_obj_tag(v___x_4432_) == 0)
{
lean_object* v___x_4434_; uint8_t v_isShared_4435_; uint8_t v_isSharedCheck_4441_; 
v_isSharedCheck_4441_ = !lean_is_exclusive(v___x_4432_);
if (v_isSharedCheck_4441_ == 0)
{
lean_object* v_unused_4442_; 
v_unused_4442_ = lean_ctor_get(v___x_4432_, 0);
lean_dec(v_unused_4442_);
v___x_4434_ = v___x_4432_;
v_isShared_4435_ = v_isSharedCheck_4441_;
goto v_resetjp_4433_;
}
else
{
lean_dec(v___x_4432_);
v___x_4434_ = lean_box(0);
v_isShared_4435_ = v_isSharedCheck_4441_;
goto v_resetjp_4433_;
}
v_resetjp_4433_:
{
lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4439_; 
v___x_4436_ = lean_st_ref_get(v___x_4431_);
v___x_4437_ = lean_st_ref_get(v___x_4431_);
lean_dec(v___x_4431_);
lean_dec(v___x_4437_);
if (v_isShared_4435_ == 0)
{
lean_ctor_set(v___x_4434_, 0, v___x_4436_);
v___x_4439_ = v___x_4434_;
goto v_reusejp_4438_;
}
else
{
lean_object* v_reuseFailAlloc_4440_; 
v_reuseFailAlloc_4440_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4440_, 0, v___x_4436_);
v___x_4439_ = v_reuseFailAlloc_4440_;
goto v_reusejp_4438_;
}
v_reusejp_4438_:
{
return v___x_4439_;
}
}
}
else
{
lean_object* v_a_4443_; lean_object* v___x_4445_; uint8_t v_isShared_4446_; uint8_t v_isSharedCheck_4450_; 
lean_dec(v___x_4431_);
v_a_4443_ = lean_ctor_get(v___x_4432_, 0);
v_isSharedCheck_4450_ = !lean_is_exclusive(v___x_4432_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4445_ = v___x_4432_;
v_isShared_4446_ = v_isSharedCheck_4450_;
goto v_resetjp_4444_;
}
else
{
lean_inc(v_a_4443_);
lean_dec(v___x_4432_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants___lam__0___boxed(lean_object* v_goal_4451_, lean_object* v_expensive_4452_, lean_object* v___y_4453_, lean_object* v___y_4454_, lean_object* v___y_4455_, lean_object* v___y_4456_, lean_object* v___y_4457_, lean_object* v___y_4458_, lean_object* v___y_4459_, lean_object* v___y_4460_, lean_object* v___y_4461_, lean_object* v___y_4462_){
_start:
{
uint8_t v_expensive_boxed_4463_; lean_object* v_res_4464_; 
v_expensive_boxed_4463_ = lean_unbox(v_expensive_4452_);
v_res_4464_ = l_Lean_Meta_Grind_Goal_checkInvariants___lam__0(v_goal_4451_, v_expensive_boxed_4463_, v___y_4453_, v___y_4454_, v___y_4455_, v___y_4456_, v___y_4457_, v___y_4458_, v___y_4459_, v___y_4460_, v___y_4461_);
lean_dec(v___y_4461_);
lean_dec_ref(v___y_4460_);
lean_dec(v___y_4459_);
lean_dec_ref(v___y_4458_);
lean_dec(v___y_4457_);
lean_dec_ref(v___y_4456_);
lean_dec(v___y_4455_);
lean_dec_ref(v___y_4454_);
lean_dec(v___y_4453_);
return v_res_4464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants(lean_object* v_goal_4465_, uint8_t v_expensive_4466_, lean_object* v_a_4467_, lean_object* v_a_4468_, lean_object* v_a_4469_, lean_object* v_a_4470_, lean_object* v_a_4471_, lean_object* v_a_4472_, lean_object* v_a_4473_, lean_object* v_a_4474_, lean_object* v_a_4475_){
_start:
{
lean_object* v_mvarId_4477_; lean_object* v___x_4478_; lean_object* v___f_4479_; lean_object* v___x_4480_; lean_object* v___x_4481_; 
v_mvarId_4477_ = lean_ctor_get(v_goal_4465_, 1);
lean_inc(v_mvarId_4477_);
v___x_4478_ = lean_box(v_expensive_4466_);
v___f_4479_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_Goal_checkInvariants___lam__0___boxed), 12, 2);
lean_closure_set(v___f_4479_, 0, v_goal_4465_);
lean_closure_set(v___f_4479_, 1, v___x_4478_);
v___x_4480_ = lean_box(0);
v___x_4481_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Grind_Goal_checkInvariants_spec__0___redArg(v_mvarId_4477_, v___f_4479_, v_a_4467_, v_a_4468_, v_a_4469_, v_a_4470_, v_a_4471_, v_a_4472_, v_a_4473_, v_a_4474_, v_a_4475_);
if (lean_obj_tag(v___x_4481_) == 0)
{
lean_object* v___x_4483_; uint8_t v_isShared_4484_; uint8_t v_isSharedCheck_4488_; 
v_isSharedCheck_4488_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4488_ == 0)
{
lean_object* v_unused_4489_; 
v_unused_4489_ = lean_ctor_get(v___x_4481_, 0);
lean_dec(v_unused_4489_);
v___x_4483_ = v___x_4481_;
v_isShared_4484_ = v_isSharedCheck_4488_;
goto v_resetjp_4482_;
}
else
{
lean_dec(v___x_4481_);
v___x_4483_ = lean_box(0);
v_isShared_4484_ = v_isSharedCheck_4488_;
goto v_resetjp_4482_;
}
v_resetjp_4482_:
{
lean_object* v___x_4486_; 
if (v_isShared_4484_ == 0)
{
lean_ctor_set(v___x_4483_, 0, v___x_4480_);
v___x_4486_ = v___x_4483_;
goto v_reusejp_4485_;
}
else
{
lean_object* v_reuseFailAlloc_4487_; 
v_reuseFailAlloc_4487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4487_, 0, v___x_4480_);
v___x_4486_ = v_reuseFailAlloc_4487_;
goto v_reusejp_4485_;
}
v_reusejp_4485_:
{
return v___x_4486_;
}
}
}
else
{
lean_object* v_a_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4497_; 
v_a_4490_ = lean_ctor_get(v___x_4481_, 0);
v_isSharedCheck_4497_ = !lean_is_exclusive(v___x_4481_);
if (v_isSharedCheck_4497_ == 0)
{
v___x_4492_ = v___x_4481_;
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_a_4490_);
lean_dec(v___x_4481_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4497_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4495_; 
if (v_isShared_4493_ == 0)
{
v___x_4495_ = v___x_4492_;
goto v_reusejp_4494_;
}
else
{
lean_object* v_reuseFailAlloc_4496_; 
v_reuseFailAlloc_4496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4496_, 0, v_a_4490_);
v___x_4495_ = v_reuseFailAlloc_4496_;
goto v_reusejp_4494_;
}
v_reusejp_4494_:
{
return v___x_4495_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Goal_checkInvariants___boxed(lean_object* v_goal_4498_, lean_object* v_expensive_4499_, lean_object* v_a_4500_, lean_object* v_a_4501_, lean_object* v_a_4502_, lean_object* v_a_4503_, lean_object* v_a_4504_, lean_object* v_a_4505_, lean_object* v_a_4506_, lean_object* v_a_4507_, lean_object* v_a_4508_, lean_object* v_a_4509_){
_start:
{
uint8_t v_expensive_boxed_4510_; lean_object* v_res_4511_; 
v_expensive_boxed_4510_ = lean_unbox(v_expensive_4499_);
v_res_4511_ = l_Lean_Meta_Grind_Goal_checkInvariants(v_goal_4498_, v_expensive_boxed_4510_, v_a_4500_, v_a_4501_, v_a_4502_, v_a_4503_, v_a_4504_, v_a_4505_, v_a_4506_, v_a_4507_, v_a_4508_);
lean_dec(v_a_4508_);
lean_dec_ref(v_a_4507_);
lean_dec(v_a_4506_);
lean_dec_ref(v_a_4505_);
lean_dec(v_a_4504_);
lean_dec_ref(v_a_4503_);
lean_dec(v_a_4502_);
lean_dec_ref(v_a_4501_);
lean_dec(v_a_4500_);
return v_res_4511_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Sym_Canon(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Decidable(uint8_t builtin);
lean_object* initialize_Lean_Meta_Sym_Canon(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Inv(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Decidable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Sym_Canon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Inv(builtin);
}
#ifdef __cplusplus
}
#endif
