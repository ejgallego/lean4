// Lean compiler output
// Module: Lean.Meta.Tactic.Cases
// Imports: public import Lean.Meta.Tactic.Induction public import Lean.Meta.Tactic.Acyclic public import Lean.Meta.Tactic.UnifyEq import Lean.Meta.Constructions.SparseCasesOn import Lean.Meta.Constructions.CtorIdx import Init.Omega
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
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_toExpr(lean_object*);
lean_object* l_Lean_LocalDecl_userName(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_extract___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_Meta_mkFreshExprMVarAt(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
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
lean_object* l_Lean_Meta_introNCore(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_of_nat(lean_object*);
uint8_t l_Lean_Expr_hasFVar(lean_object*);
lean_object* l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_LocalDecl_fvarId(lean_object*);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isFVar(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkNot(lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* l_Lean_MVarId_induction(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_erase(lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_insert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkCasesOnName(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* l_Lean_mkCtorIdxName(lean_object*);
lean_object* l_Lean_Meta_mkSparseCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_FVarSubst_get(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_clear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_acyclic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_unifyEq_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_maxRecDepthErrorMessage;
lean_object* l_Lean_Meta_FVarSubst_apply(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwNestedTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_Meta_saturate(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_exactlyOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
uint8_t l_Lean_Expr_isEq(lean_object*);
uint8_t l_Lean_Expr_isHEq(lean_object*);
lean_object* l_Lean_Meta_ensureAtMostOne(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "Failed to compile pattern matching: Expected an inductive type, but found"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_getInductiveUniverseAndParams___closed__0;
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "refl"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(180, 202, 227, 45, 204, 223, 127, 41)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__4_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__2_value),LEAN_SCALAR_PTR_LITERAL(72, 6, 107, 181, 0, 125, 21, 187)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_withNewEqs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_withNewEqs___redArg___closed__0 = (const lean_object*)&l_Lean_Meta_withNewEqs___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Invalid number of targets: "};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0_value;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1;
static const lean_string_object l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = " targets provided, but motive only takes "};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2_value;
static lean_once_cell_t l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_generalizeTargetsEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizeTargets"};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___closed__0 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___closed__0_value;
static const lean_ctor_object l_Lean_Meta_generalizeTargetsEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_generalizeTargetsEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(75, 33, 44, 197, 230, 161, 237, 93)}};
static const lean_object* l_Lean_Meta_generalizeTargetsEq___closed__1 = (const lean_object*)&l_Lean_Meta_generalizeTargetsEq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(243, 101, 181, 186, 114, 114, 131, 189)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "generalizeIndices"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(254, 199, 71, 14, 111, 8, 96, 84)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1_value;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "inductive type expected"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__2_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "ill-formed inductive datatype"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__6_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9;
static const lean_string_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "indexed inductive type expected"};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_value;
static const lean_ctor_object l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__10_value)}};
static const lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11_value;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12;
static lean_once_cell_t l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "casesOn"};
static const lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(lean_object*, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "runtime"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_value;
static const lean_string_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "maxRecDepth"};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_value;
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 128, 123, 132, 117, 90, 116, 101)}};
static const lean_ctor_object l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value_aux_0),((lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(88, 230, 219, 180, 63, 89, 202, 3)}};
static const lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2 = (const lean_object*)&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2_value;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4;
static lean_once_cell_t l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Cases_unifyEqs_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_acyclic___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___closed__0 = (const lean_object*)&l_Lean_Meta_Cases_unifyEqs_x3f___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "casesAuxOn"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(33, 160, 116, 144, 209, 153, 27, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "hasNotBit"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(117, 117, 142, 139, 222, 16, 37, 88)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "not applicable to the given hypothesis"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Cases_cases___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__0_value)}};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__2;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__3;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Meta"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__4 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__4_value;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__5 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__5_value;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__6 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Cases_cases___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__6_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__7 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__7_value;
static const lean_string_object l_Lean_Meta_Cases_cases___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "after generalizeIndices\n"};
static const lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__8 = (const lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_Meta_Cases_cases___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Cases_cases___lam__0___closed__9;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Cases_cases___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l_Lean_Meta_Cases_cases___closed__0 = (const lean_object*)&l_Lean_Meta_Cases_cases___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Cases_cases___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Cases_cases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(220, 93, 203, 178, 149, 199, 118, 190)}};
static const lean_object* l_Lean_Meta_Cases_cases___closed__1 = (const lean_object*)&l_Lean_Meta_Cases_cases___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_cases(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_cases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0_value;
static const lean_array_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_MVarId_casesRec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_MVarId_casesRec___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_casesRec___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_casesAnd___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l_Lean_MVarId_casesAnd___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_casesAnd___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_casesAnd___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_casesAnd___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l_Lean_MVarId_casesAnd___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_casesAnd___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MVarId_casesAnd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_casesAnd___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_casesAnd___closed__0 = (const lean_object*)&l_Lean_MVarId_casesAnd___closed__0_value;
static const lean_string_object l_Lean_MVarId_casesAnd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "unexpected number of goals"};
static const lean_object* l_Lean_MVarId_casesAnd___closed__1 = (const lean_object*)&l_Lean_MVarId_casesAnd___closed__1_value;
static const lean_ctor_object l_Lean_MVarId_casesAnd___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_casesAnd___closed__1_value)}};
static const lean_object* l_Lean_MVarId_casesAnd___closed__2 = (const lean_object*)&l_Lean_MVarId_casesAnd___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_casesAnd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_casesAnd___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_MVarId_substEqs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_MVarId_substEqs___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_MVarId_substEqs___closed__0 = (const lean_object*)&l_Lean_MVarId_substEqs___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "isTrue"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(125, 82, 240, 34, 69, 121, 64, 234)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__1_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "isFalse"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(113, 70, 3, 12, 31, 103, 230, 247)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__3_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Classical"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__4_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "byCases"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__5 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__5_value;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(40, 236, 220, 79, 38, 141, 161, 150)}};
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__6_value_aux_0),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(240, 75, 32, 165, 126, 243, 120, 233)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_MVarId_byCases___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___lam__0___closed__7;
static const lean_ctor_object l_Lean_MVarId_byCases___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(223, 107, 197, 37, 106, 239, 120, 82)}};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__8 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__8_value;
static const lean_string_object l_Lean_MVarId_byCases___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Goal is not a proposition"};
static const lean_object* l_Lean_MVarId_byCases___lam__0___closed__9 = (const lean_object*)&l_Lean_MVarId_byCases___lam__0___closed__9_value;
static lean_once_cell_t l_Lean_MVarId_byCases___lam__0___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___lam__0___closed__10;
static lean_once_cell_t l_Lean_MVarId_byCases___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_byCases___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_byCasesDec___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dite"};
static const lean_object* l_Lean_MVarId_byCasesDec___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_byCasesDec___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_byCasesDec___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_byCasesDec___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(137, 166, 197, 161, 68, 218, 116, 116)}};
static const lean_object* l_Lean_MVarId_byCasesDec___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_byCasesDec___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(211, 174, 49, 251, 64, 24, 251, 1)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(194, 95, 140, 15, 16, 100, 236, 219)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value_aux_1),((lean_object*)&l_Lean_Meta_Cases_cases___closed__0_value),LEAN_SCALAR_PTR_LITERAL(57, 31, 136, 203, 40, 113, 66, 100)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__1_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__2_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__4_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(30, 196, 118, 96, 111, 225, 34, 188)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__5_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(195, 68, 87, 56, 63, 220, 109, 253)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Cases"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__6_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(116, 214, 45, 31, 61, 84, 55, 148)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__8_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(245, 246, 165, 222, 15, 227, 90, 185)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__9_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(96, 16, 241, 169, 223, 219, 97, 222)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__10_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(76, 206, 219, 186, 41, 249, 249, 75)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__11_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__12_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(57, 5, 31, 238, 60, 141, 136, 2)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__13_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__14_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(244, 20, 148, 166, 205, 51, 90, 243)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__15_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__3_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(245, 111, 199, 196, 219, 75, 33, 173)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__16_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__4_value),LEAN_SCALAR_PTR_LITERAL(189, 169, 211, 84, 174, 39, 78, 59)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__17_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Meta_Cases_cases___lam__0___closed__5_value),LEAN_SCALAR_PTR_LITERAL(228, 131, 106, 227, 136, 21, 5, 171)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__18_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__7_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(63, 103, 47, 118, 16, 248, 186, 58)}};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2____boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; uint8_t v___x_9_; lean_object* v_env_10_; lean_object* v___x_11_; lean_object* v_toCold_12_; lean_object* v_mctx_13_; lean_object* v_lctx_14_; lean_object* v_options_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = 0;
v_env_10_ = l_Lean_Environment_setRecordingDeps(v_env_8_, v___x_9_);
v___x_11_ = lean_st_ref_get(v___y_3_);
v_toCold_12_ = lean_ctor_get(v___y_4_, 0);
v_mctx_13_ = lean_ctor_get(v___x_11_, 0);
lean_inc_ref(v_mctx_13_);
lean_dec(v___x_11_);
v_lctx_14_ = lean_ctor_get(v___y_2_, 2);
v_options_15_ = lean_ctor_get(v_toCold_12_, 2);
lean_inc_ref(v_options_15_);
lean_inc_ref(v_lctx_14_);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v_env_10_);
lean_ctor_set(v___x_16_, 1, v_mctx_13_);
lean_ctor_set(v___x_16_, 2, v_lctx_14_);
lean_ctor_set(v___x_16_, 3, v_options_15_);
v___x_17_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v_msgData_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_32_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_32_);
lean_ctor_set(v___x_38_, 1, v_a_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1(void){
_start:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__0));
v___x_52_ = l_Lean_stringToMessageData(v___x_51_);
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(lean_object* v_type_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; 
v___x_59_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___closed__1);
v___x_60_ = l_Lean_indentExpr(v_type_53_);
v___x_61_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_59_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
v___x_62_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_61_, v_a_54_, v_a_55_, v_a_56_, v_a_57_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg___boxed(lean_object* v_type_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
lean_object* v_res_69_; 
v_res_69_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_type_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_);
lean_dec(v_a_67_);
lean_dec_ref(v_a_66_);
lean_dec(v_a_65_);
lean_dec_ref(v_a_64_);
return v_res_69_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(lean_object* v_00_u03b1_70_, lean_object* v_type_71_, lean_object* v_a_72_, lean_object* v_a_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_type_71_, v_a_72_, v_a_73_, v_a_74_, v_a_75_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___boxed(lean_object* v_00_u03b1_78_, lean_object* v_type_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_, lean_object* v_a_84_){
_start:
{
lean_object* v_res_85_; 
v_res_85_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected(v_00_u03b1_78_, v_type_79_, v_a_80_, v_a_81_, v_a_82_, v_a_83_);
lean_dec(v_a_83_);
lean_dec_ref(v_a_82_);
lean_dec(v_a_81_);
lean_dec_ref(v_a_80_);
return v_res_85_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(lean_object* v_00_u03b1_86_, lean_object* v_msg_87_, lean_object* v___y_88_, lean_object* v___y_89_, lean_object* v___y_90_, lean_object* v___y_91_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v_msg_87_, v___y_88_, v___y_89_, v___y_90_, v___y_91_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___boxed(lean_object* v_00_u03b1_94_, lean_object* v_msg_95_, lean_object* v___y_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_){
_start:
{
lean_object* v_res_101_; 
v_res_101_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0(v_00_u03b1_94_, v_msg_95_, v___y_96_, v___y_97_, v___y_98_, v___y_99_);
lean_dec(v___y_99_);
lean_dec_ref(v___y_98_);
lean_dec(v___y_97_);
lean_dec_ref(v___y_96_);
return v_res_101_;
}
}
static lean_object* _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0(void){
_start:
{
lean_object* v___x_102_; lean_object* v_dummy_103_; 
v___x_102_ = lean_box(0);
v_dummy_103_ = l_Lean_Expr_sort___override(v___x_102_);
return v_dummy_103_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams(lean_object* v_type_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___x_110_; 
v___x_110_ = l_Lean_Meta_whnfD(v_type_104_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_140_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_140_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_140_ == 0)
{
v___x_113_ = v___x_110_;
v_isShared_114_ = v_isSharedCheck_140_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_a_111_);
lean_dec(v___x_110_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_140_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
lean_object* v___x_115_; 
v___x_115_ = l_Lean_Expr_getAppFn(v_a_111_);
if (lean_obj_tag(v___x_115_) == 4)
{
lean_object* v_declName_116_; lean_object* v_us_117_; lean_object* v___x_118_; lean_object* v_env_119_; uint8_t v___x_120_; lean_object* v___x_121_; 
v_declName_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_declName_116_);
v_us_117_ = lean_ctor_get(v___x_115_, 1);
lean_inc(v_us_117_);
lean_dec_ref_known(v___x_115_, 2);
v___x_118_ = lean_st_ref_get(v_a_108_);
v_env_119_ = lean_ctor_get(v___x_118_, 0);
lean_inc_ref(v_env_119_);
lean_dec(v___x_118_);
v___x_120_ = 0;
v___x_121_ = l_Lean_Environment_find_x3f(v_env_119_, v_declName_116_, v___x_120_);
if (lean_obj_tag(v___x_121_) == 0)
{
lean_object* v___x_122_; 
lean_dec(v_us_117_);
lean_del_object(v___x_113_);
v___x_122_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_111_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_122_;
}
else
{
lean_object* v_val_123_; 
v_val_123_ = lean_ctor_get(v___x_121_, 0);
lean_inc(v_val_123_);
lean_dec_ref_known(v___x_121_, 1);
if (lean_obj_tag(v_val_123_) == 5)
{
lean_object* v_val_124_; lean_object* v_numParams_125_; lean_object* v_nargs_126_; lean_object* v_dummy_127_; lean_object* v___x_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_136_; 
v_val_124_ = lean_ctor_get(v_val_123_, 0);
lean_inc_ref(v_val_124_);
lean_dec_ref_known(v_val_123_, 1);
v_numParams_125_ = lean_ctor_get(v_val_124_, 1);
lean_inc(v_numParams_125_);
lean_dec_ref(v_val_124_);
v_nargs_126_ = l_Lean_Expr_getAppNumArgs(v_a_111_);
v_dummy_127_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__0, &l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0);
lean_inc(v_nargs_126_);
v___x_128_ = lean_mk_array(v_nargs_126_, v_dummy_127_);
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = lean_nat_sub(v_nargs_126_, v___x_129_);
lean_dec(v_nargs_126_);
v___x_131_ = l___private_Lean_Expr_0__Lean_Expr_getAppArgsAux(v_a_111_, v___x_128_, v___x_130_);
v___x_132_ = lean_unsigned_to_nat(0u);
v___x_133_ = l_Array_extract___redArg(v___x_131_, v___x_132_, v_numParams_125_);
lean_dec_ref(v___x_131_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v_us_117_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_134_);
v___x_136_ = v___x_113_;
goto v_reusejp_135_;
}
else
{
lean_object* v_reuseFailAlloc_137_; 
v_reuseFailAlloc_137_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_137_, 0, v___x_134_);
v___x_136_ = v_reuseFailAlloc_137_;
goto v_reusejp_135_;
}
v_reusejp_135_:
{
return v___x_136_;
}
}
else
{
lean_object* v___x_138_; 
lean_dec(v_val_123_);
lean_dec(v_us_117_);
lean_del_object(v___x_113_);
v___x_138_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_111_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_138_;
}
}
}
else
{
lean_object* v___x_139_; 
lean_dec_ref(v___x_115_);
lean_del_object(v___x_113_);
v___x_139_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected___redArg(v_a_111_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
return v___x_139_;
}
}
}
else
{
lean_object* v_a_141_; lean_object* v___x_143_; uint8_t v_isShared_144_; uint8_t v_isSharedCheck_148_; 
v_a_141_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_148_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_148_ == 0)
{
v___x_143_ = v___x_110_;
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
else
{
lean_inc(v_a_141_);
lean_dec(v___x_110_);
v___x_143_ = lean_box(0);
v_isShared_144_ = v_isSharedCheck_148_;
goto v_resetjp_142_;
}
v_resetjp_142_:
{
lean_object* v___x_146_; 
if (v_isShared_144_ == 0)
{
v___x_146_ = v___x_143_;
goto v_reusejp_145_;
}
else
{
lean_object* v_reuseFailAlloc_147_; 
v_reuseFailAlloc_147_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_147_, 0, v_a_141_);
v___x_146_ = v_reuseFailAlloc_147_;
goto v_reusejp_145_;
}
v_reusejp_145_:
{
return v___x_146_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getInductiveUniverseAndParams___boxed(lean_object* v_type_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Meta_getInductiveUniverseAndParams(v_type_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(lean_object* v_lhs_169_, lean_object* v_rhs_170_, lean_object* v_a_171_, lean_object* v_a_172_, lean_object* v_a_173_, lean_object* v_a_174_){
_start:
{
lean_object* v___x_176_; 
lean_inc(v_a_174_);
lean_inc_ref(v_a_173_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc_ref(v_lhs_169_);
v___x_176_ = lean_infer_type(v_lhs_169_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_176_) == 0)
{
lean_object* v_a_177_; lean_object* v___x_178_; 
v_a_177_ = lean_ctor_get(v___x_176_, 0);
lean_inc(v_a_177_);
lean_dec_ref_known(v___x_176_, 1);
lean_inc(v_a_174_);
lean_inc_ref(v_a_173_);
lean_inc(v_a_172_);
lean_inc_ref(v_a_171_);
lean_inc_ref(v_rhs_170_);
v___x_178_ = lean_infer_type(v_rhs_170_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v_a_179_; lean_object* v___x_180_; 
v_a_179_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_179_);
lean_dec_ref_known(v___x_178_, 1);
lean_inc(v_a_177_);
v___x_180_ = l_Lean_Meta_getLevel(v_a_177_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_180_) == 0)
{
lean_object* v_a_181_; lean_object* v___x_182_; 
v_a_181_ = lean_ctor_get(v___x_180_, 0);
lean_inc(v_a_181_);
lean_dec_ref_known(v___x_180_, 1);
lean_inc(v_a_179_);
lean_inc(v_a_177_);
v___x_182_ = l_Lean_Meta_isExprDefEq(v_a_177_, v_a_179_, v_a_171_, v_a_172_, v_a_173_, v_a_174_);
if (lean_obj_tag(v___x_182_) == 0)
{
lean_object* v_a_183_; lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_212_; 
v_a_183_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_212_ == 0)
{
v___x_185_ = v___x_182_;
v_isShared_186_ = v_isSharedCheck_212_;
goto v_resetjp_184_;
}
else
{
lean_inc(v_a_183_);
lean_dec(v___x_182_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_212_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
uint8_t v___x_187_; 
v___x_187_ = lean_unbox(v_a_183_);
lean_dec(v_a_183_);
if (v___x_187_ == 0)
{
lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_195_; lean_object* v___x_196_; lean_object* v___x_198_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1));
v___x_189_ = lean_box(0);
v___x_190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_190_, 0, v_a_181_);
lean_ctor_set(v___x_190_, 1, v___x_189_);
lean_inc_ref(v___x_190_);
v___x_191_ = l_Lean_mkConst(v___x_188_, v___x_190_);
lean_inc_ref(v_lhs_169_);
lean_inc(v_a_177_);
v___x_192_ = l_Lean_mkApp4(v___x_191_, v_a_177_, v_lhs_169_, v_a_179_, v_rhs_170_);
v___x_193_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__3));
v___x_194_ = l_Lean_mkConst(v___x_193_, v___x_190_);
v___x_195_ = l_Lean_mkAppB(v___x_194_, v_a_177_, v_lhs_169_);
v___x_196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_196_, 0, v___x_192_);
lean_ctor_set(v___x_196_, 1, v___x_195_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_196_);
v___x_198_ = v___x_185_;
goto v_reusejp_197_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___x_196_);
v___x_198_ = v_reuseFailAlloc_199_;
goto v_reusejp_197_;
}
v_reusejp_197_:
{
return v___x_198_;
}
}
else
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_210_; 
lean_dec(v_a_179_);
v___x_200_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5));
v___x_201_ = lean_box(0);
v___x_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_202_, 0, v_a_181_);
lean_ctor_set(v___x_202_, 1, v___x_201_);
lean_inc_ref(v___x_202_);
v___x_203_ = l_Lean_mkConst(v___x_200_, v___x_202_);
lean_inc_ref(v_lhs_169_);
lean_inc(v_a_177_);
v___x_204_ = l_Lean_mkApp3(v___x_203_, v_a_177_, v_lhs_169_, v_rhs_170_);
v___x_205_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__6));
v___x_206_ = l_Lean_mkConst(v___x_205_, v___x_202_);
v___x_207_ = l_Lean_mkAppB(v___x_206_, v_a_177_, v_lhs_169_);
v___x_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_208_, 0, v___x_204_);
lean_ctor_set(v___x_208_, 1, v___x_207_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_208_);
v___x_210_ = v___x_185_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v___x_208_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
lean_dec(v_a_181_);
lean_dec(v_a_179_);
lean_dec(v_a_177_);
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_213_ = lean_ctor_get(v___x_182_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_182_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_182_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_182_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
else
{
lean_object* v_a_221_; lean_object* v___x_223_; uint8_t v_isShared_224_; uint8_t v_isSharedCheck_228_; 
lean_dec(v_a_179_);
lean_dec(v_a_177_);
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_221_ = lean_ctor_get(v___x_180_, 0);
v_isSharedCheck_228_ = !lean_is_exclusive(v___x_180_);
if (v_isSharedCheck_228_ == 0)
{
v___x_223_ = v___x_180_;
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
else
{
lean_inc(v_a_221_);
lean_dec(v___x_180_);
v___x_223_ = lean_box(0);
v_isShared_224_ = v_isSharedCheck_228_;
goto v_resetjp_222_;
}
v_resetjp_222_:
{
lean_object* v___x_226_; 
if (v_isShared_224_ == 0)
{
v___x_226_ = v___x_223_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_227_; 
v_reuseFailAlloc_227_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_227_, 0, v_a_221_);
v___x_226_ = v_reuseFailAlloc_227_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
return v___x_226_;
}
}
}
}
else
{
lean_object* v_a_229_; lean_object* v___x_231_; uint8_t v_isShared_232_; uint8_t v_isSharedCheck_236_; 
lean_dec(v_a_177_);
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_229_ = lean_ctor_get(v___x_178_, 0);
v_isSharedCheck_236_ = !lean_is_exclusive(v___x_178_);
if (v_isSharedCheck_236_ == 0)
{
v___x_231_ = v___x_178_;
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
else
{
lean_inc(v_a_229_);
lean_dec(v___x_178_);
v___x_231_ = lean_box(0);
v_isShared_232_ = v_isSharedCheck_236_;
goto v_resetjp_230_;
}
v_resetjp_230_:
{
lean_object* v___x_234_; 
if (v_isShared_232_ == 0)
{
v___x_234_ = v___x_231_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v_a_229_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
}
}
else
{
lean_object* v_a_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_244_; 
lean_dec_ref(v_rhs_170_);
lean_dec_ref(v_lhs_169_);
v_a_237_ = lean_ctor_get(v___x_176_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_176_);
if (v_isSharedCheck_244_ == 0)
{
v___x_239_ = v___x_176_;
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_a_237_);
lean_dec(v___x_176_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_244_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___x_242_; 
if (v_isShared_240_ == 0)
{
v___x_242_ = v___x_239_;
goto v_reusejp_241_;
}
else
{
lean_object* v_reuseFailAlloc_243_; 
v_reuseFailAlloc_243_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_243_, 0, v_a_237_);
v___x_242_ = v_reuseFailAlloc_243_;
goto v_reusejp_241_;
}
v_reusejp_241_:
{
return v___x_242_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___boxed(lean_object* v_lhs_245_, lean_object* v_rhs_246_, lean_object* v_a_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v_lhs_245_, v_rhs_246_, v_a_247_, v_a_248_, v_a_249_, v_a_250_);
lean_dec(v_a_250_);
lean_dec_ref(v_a_249_);
lean_dec(v_a_248_);
lean_dec_ref(v_a_247_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(lean_object* v_k_253_, lean_object* v_b_254_, lean_object* v___y_255_, lean_object* v___y_256_, lean_object* v___y_257_, lean_object* v___y_258_){
_start:
{
lean_object* v___x_260_; 
lean_inc(v___y_258_);
lean_inc_ref(v___y_257_);
lean_inc(v___y_256_);
lean_inc_ref(v___y_255_);
v___x_260_ = lean_apply_6(v_k_253_, v_b_254_, v___y_255_, v___y_256_, v___y_257_, v___y_258_, lean_box(0));
return v___x_260_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_k_261_, lean_object* v_b_262_, lean_object* v___y_263_, lean_object* v___y_264_, lean_object* v___y_265_, lean_object* v___y_266_, lean_object* v___y_267_){
_start:
{
lean_object* v_res_268_; 
v_res_268_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0(v_k_261_, v_b_262_, v___y_263_, v___y_264_, v___y_265_, v___y_266_);
lean_dec(v___y_266_);
lean_dec_ref(v___y_265_);
lean_dec(v___y_264_);
lean_dec_ref(v___y_263_);
return v_res_268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(lean_object* v_name_269_, uint8_t v_bi_270_, lean_object* v_type_271_, lean_object* v_k_272_, uint8_t v_kind_273_, lean_object* v___y_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
lean_object* v___f_279_; lean_object* v___x_280_; 
v___f_279_ = lean_alloc_closure((void*)(l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_279_, 0, v_k_272_);
v___x_280_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalDeclImp(lean_box(0), v_name_269_, v_bi_270_, v_type_271_, v___f_279_, v_kind_273_, v___y_274_, v___y_275_, v___y_276_, v___y_277_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_288_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_288_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_288_ == 0)
{
v___x_283_ = v___x_280_;
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_288_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_286_; 
if (v_isShared_284_ == 0)
{
v___x_286_ = v___x_283_;
goto v_reusejp_285_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v_a_281_);
v___x_286_ = v_reuseFailAlloc_287_;
goto v_reusejp_285_;
}
v_reusejp_285_:
{
return v___x_286_;
}
}
}
else
{
lean_object* v_a_289_; lean_object* v___x_291_; uint8_t v_isShared_292_; uint8_t v_isSharedCheck_296_; 
v_a_289_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_296_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_296_ == 0)
{
v___x_291_ = v___x_280_;
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
else
{
lean_inc(v_a_289_);
lean_dec(v___x_280_);
v___x_291_ = lean_box(0);
v_isShared_292_ = v_isSharedCheck_296_;
goto v_resetjp_290_;
}
v_resetjp_290_:
{
lean_object* v___x_294_; 
if (v_isShared_292_ == 0)
{
v___x_294_ = v___x_291_;
goto v_reusejp_293_;
}
else
{
lean_object* v_reuseFailAlloc_295_; 
v_reuseFailAlloc_295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_295_, 0, v_a_289_);
v___x_294_ = v_reuseFailAlloc_295_;
goto v_reusejp_293_;
}
v_reusejp_293_:
{
return v___x_294_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg___boxed(lean_object* v_name_297_, lean_object* v_bi_298_, lean_object* v_type_299_, lean_object* v_k_300_, lean_object* v_kind_301_, lean_object* v___y_302_, lean_object* v___y_303_, lean_object* v___y_304_, lean_object* v___y_305_, lean_object* v___y_306_){
_start:
{
uint8_t v_bi_boxed_307_; uint8_t v_kind_boxed_308_; lean_object* v_res_309_; 
v_bi_boxed_307_ = lean_unbox(v_bi_298_);
v_kind_boxed_308_ = lean_unbox(v_kind_301_);
v_res_309_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_297_, v_bi_boxed_307_, v_type_299_, v_k_300_, v_kind_boxed_308_, v___y_302_, v___y_303_, v___y_304_, v___y_305_);
lean_dec(v___y_305_);
lean_dec_ref(v___y_304_);
lean_dec(v___y_303_);
lean_dec_ref(v___y_302_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(lean_object* v_name_310_, lean_object* v_type_311_, lean_object* v_k_312_, lean_object* v___y_313_, lean_object* v___y_314_, lean_object* v___y_315_, lean_object* v___y_316_){
_start:
{
uint8_t v___x_318_; uint8_t v___x_319_; lean_object* v___x_320_; 
v___x_318_ = 0;
v___x_319_ = 0;
v___x_320_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_310_, v___x_318_, v_type_311_, v_k_312_, v___x_319_, v___y_313_, v___y_314_, v___y_315_, v___y_316_);
return v___x_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg___boxed(lean_object* v_name_321_, lean_object* v_type_322_, lean_object* v_k_323_, lean_object* v___y_324_, lean_object* v___y_325_, lean_object* v___y_326_, lean_object* v___y_327_, lean_object* v___y_328_){
_start:
{
lean_object* v_res_329_; 
v_res_329_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_name_321_, v_type_322_, v_k_323_, v___y_324_, v___y_325_, v___y_326_, v___y_327_);
lean_dec(v___y_327_);
lean_dec_ref(v___y_326_);
lean_dec(v___y_325_);
lean_dec_ref(v___y_324_);
return v_res_329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed(lean_object* v_i_330_, lean_object* v_newEqs_331_, lean_object* v_newRefls_332_, lean_object* v_snd_333_, lean_object* v_targets_334_, lean_object* v_targetsNew_335_, lean_object* v_k_336_, lean_object* v_newEq_337_, lean_object* v___y_338_, lean_object* v___y_339_, lean_object* v___y_340_, lean_object* v___y_341_, lean_object* v___y_342_){
_start:
{
lean_object* v_res_343_; 
v_res_343_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(v_i_330_, v_newEqs_331_, v_newRefls_332_, v_snd_333_, v_targets_334_, v_targetsNew_335_, v_k_336_, v_newEq_337_, v___y_338_, v___y_339_, v___y_340_, v___y_341_);
lean_dec(v___y_341_);
lean_dec_ref(v___y_340_);
lean_dec(v___y_339_);
lean_dec_ref(v___y_338_);
lean_dec(v_i_330_);
return v_res_343_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(lean_object* v_targets_347_, lean_object* v_targetsNew_348_, lean_object* v_k_349_, lean_object* v_i_350_, lean_object* v_newEqs_351_, lean_object* v_newRefls_352_, lean_object* v_a_353_, lean_object* v_a_354_, lean_object* v_a_355_, lean_object* v_a_356_){
_start:
{
lean_object* v___x_358_; uint8_t v___x_359_; 
v___x_358_ = lean_array_get_size(v_targets_347_);
v___x_359_ = lean_nat_dec_lt(v_i_350_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_360_; 
lean_dec(v_i_350_);
lean_dec_ref(v_targetsNew_348_);
lean_dec_ref(v_targets_347_);
lean_inc(v_a_356_);
lean_inc_ref(v_a_355_);
lean_inc(v_a_354_);
lean_inc_ref(v_a_353_);
v___x_360_ = lean_apply_7(v_k_349_, v_newEqs_351_, v_newRefls_352_, v_a_353_, v_a_354_, v_a_355_, v_a_356_, lean_box(0));
return v___x_360_;
}
else
{
lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_361_ = l_Lean_instInhabitedExpr;
v___x_362_ = lean_array_get_borrowed(v___x_361_, v_targets_347_, v_i_350_);
v___x_363_ = lean_array_get_borrowed(v___x_361_, v_targetsNew_348_, v_i_350_);
lean_inc(v___x_363_);
lean_inc(v___x_362_);
v___x_364_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v___x_362_, v___x_363_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
if (lean_obj_tag(v___x_364_) == 0)
{
lean_object* v_a_365_; lean_object* v_fst_366_; lean_object* v_snd_367_; lean_object* v___f_368_; lean_object* v___x_369_; lean_object* v___x_370_; 
v_a_365_ = lean_ctor_get(v___x_364_, 0);
lean_inc(v_a_365_);
lean_dec_ref_known(v___x_364_, 1);
v_fst_366_ = lean_ctor_get(v_a_365_, 0);
lean_inc(v_fst_366_);
v_snd_367_ = lean_ctor_get(v_a_365_, 1);
lean_inc(v_snd_367_);
lean_dec(v_a_365_);
v___f_368_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_368_, 0, v_i_350_);
lean_closure_set(v___f_368_, 1, v_newEqs_351_);
lean_closure_set(v___f_368_, 2, v_newRefls_352_);
lean_closure_set(v___f_368_, 3, v_snd_367_);
lean_closure_set(v___f_368_, 4, v_targets_347_);
lean_closure_set(v___f_368_, 5, v_targetsNew_348_);
lean_closure_set(v___f_368_, 6, v_k_349_);
v___x_369_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1));
v___x_370_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v___x_369_, v_fst_366_, v___f_368_, v_a_353_, v_a_354_, v_a_355_, v_a_356_);
return v___x_370_;
}
else
{
lean_object* v_a_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_378_; 
lean_dec_ref(v_newRefls_352_);
lean_dec_ref(v_newEqs_351_);
lean_dec(v_i_350_);
lean_dec_ref(v_k_349_);
lean_dec_ref(v_targetsNew_348_);
lean_dec_ref(v_targets_347_);
v_a_371_ = lean_ctor_get(v___x_364_, 0);
v_isSharedCheck_378_ = !lean_is_exclusive(v___x_364_);
if (v_isSharedCheck_378_ == 0)
{
v___x_373_ = v___x_364_;
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_a_371_);
lean_dec(v___x_364_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_378_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_376_; 
if (v_isShared_374_ == 0)
{
v___x_376_ = v___x_373_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v_a_371_);
v___x_376_ = v_reuseFailAlloc_377_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
return v___x_376_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___lam__0(lean_object* v_i_379_, lean_object* v_newEqs_380_, lean_object* v_newRefls_381_, lean_object* v_snd_382_, lean_object* v_targets_383_, lean_object* v_targetsNew_384_, lean_object* v_k_385_, lean_object* v_newEq_386_, lean_object* v___y_387_, lean_object* v___y_388_, lean_object* v___y_389_, lean_object* v___y_390_){
_start:
{
lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; 
v___x_392_ = lean_unsigned_to_nat(1u);
v___x_393_ = lean_nat_add(v_i_379_, v___x_392_);
v___x_394_ = lean_array_push(v_newEqs_380_, v_newEq_386_);
v___x_395_ = lean_array_push(v_newRefls_381_, v_snd_382_);
v___x_396_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_383_, v_targetsNew_384_, v_k_385_, v___x_393_, v___x_394_, v___x_395_, v___y_387_, v___y_388_, v___y_389_, v___y_390_);
return v___x_396_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___boxed(lean_object* v_targets_397_, lean_object* v_targetsNew_398_, lean_object* v_k_399_, lean_object* v_i_400_, lean_object* v_newEqs_401_, lean_object* v_newRefls_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_, lean_object* v_a_407_){
_start:
{
lean_object* v_res_408_; 
v_res_408_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_397_, v_targetsNew_398_, v_k_399_, v_i_400_, v_newEqs_401_, v_newRefls_402_, v_a_403_, v_a_404_, v_a_405_, v_a_406_);
lean_dec(v_a_406_);
lean_dec_ref(v_a_405_);
lean_dec(v_a_404_);
lean_dec_ref(v_a_403_);
return v_res_408_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(lean_object* v_00_u03b1_409_, lean_object* v_targets_410_, lean_object* v_targetsNew_411_, lean_object* v_k_412_, lean_object* v_i_413_, lean_object* v_newEqs_414_, lean_object* v_newRefls_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_){
_start:
{
lean_object* v___x_421_; 
v___x_421_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_410_, v_targetsNew_411_, v_k_412_, v_i_413_, v_newEqs_414_, v_newRefls_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
return v___x_421_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___boxed(lean_object* v_00_u03b1_422_, lean_object* v_targets_423_, lean_object* v_targetsNew_424_, lean_object* v_k_425_, lean_object* v_i_426_, lean_object* v_newEqs_427_, lean_object* v_newRefls_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop(v_00_u03b1_422_, v_targets_423_, v_targetsNew_424_, v_k_425_, v_i_426_, v_newEqs_427_, v_newRefls_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(lean_object* v_00_u03b1_435_, lean_object* v_name_436_, uint8_t v_bi_437_, lean_object* v_type_438_, lean_object* v_k_439_, uint8_t v_kind_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_){
_start:
{
lean_object* v___x_446_; 
v___x_446_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___redArg(v_name_436_, v_bi_437_, v_type_438_, v_k_439_, v_kind_440_, v___y_441_, v___y_442_, v___y_443_, v___y_444_);
return v___x_446_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0___boxed(lean_object* v_00_u03b1_447_, lean_object* v_name_448_, lean_object* v_bi_449_, lean_object* v_type_450_, lean_object* v_k_451_, lean_object* v_kind_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_){
_start:
{
uint8_t v_bi_boxed_458_; uint8_t v_kind_boxed_459_; lean_object* v_res_460_; 
v_bi_boxed_458_ = lean_unbox(v_bi_449_);
v_kind_boxed_459_ = lean_unbox(v_kind_452_);
v_res_460_ = l_Lean_Meta_withLocalDecl___at___00Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0_spec__0(v_00_u03b1_447_, v_name_448_, v_bi_boxed_458_, v_type_450_, v_k_451_, v_kind_boxed_459_, v___y_453_, v___y_454_, v___y_455_, v___y_456_);
lean_dec(v___y_456_);
lean_dec_ref(v___y_455_);
lean_dec(v___y_454_);
lean_dec_ref(v___y_453_);
return v_res_460_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(lean_object* v_00_u03b1_461_, lean_object* v_name_462_, lean_object* v_type_463_, lean_object* v_k_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_name_462_, v_type_463_, v_k_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___boxed(lean_object* v_00_u03b1_471_, lean_object* v_name_472_, lean_object* v_type_473_, lean_object* v_k_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_, lean_object* v___y_479_){
_start:
{
lean_object* v_res_480_; 
v_res_480_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0(v_00_u03b1_471_, v_name_472_, v_type_473_, v_k_474_, v___y_475_, v___y_476_, v___y_477_, v___y_478_);
lean_dec(v___y_478_);
lean_dec_ref(v___y_477_);
lean_dec(v___y_476_);
lean_dec_ref(v___y_475_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg(lean_object* v_targets_483_, lean_object* v_targetsNew_484_, lean_object* v_k_485_, lean_object* v_a_486_, lean_object* v_a_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_491_ = lean_unsigned_to_nat(0u);
v___x_492_ = ((lean_object*)(l_Lean_Meta_withNewEqs___redArg___closed__0));
v___x_493_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg(v_targets_483_, v_targetsNew_484_, v_k_485_, v___x_491_, v___x_492_, v___x_492_, v_a_486_, v_a_487_, v_a_488_, v_a_489_);
return v___x_493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___redArg___boxed(lean_object* v_targets_494_, lean_object* v_targetsNew_495_, lean_object* v_k_496_, lean_object* v_a_497_, lean_object* v_a_498_, lean_object* v_a_499_, lean_object* v_a_500_, lean_object* v_a_501_){
_start:
{
lean_object* v_res_502_; 
v_res_502_ = l_Lean_Meta_withNewEqs___redArg(v_targets_494_, v_targetsNew_495_, v_k_496_, v_a_497_, v_a_498_, v_a_499_, v_a_500_);
lean_dec(v_a_500_);
lean_dec_ref(v_a_499_);
lean_dec(v_a_498_);
lean_dec_ref(v_a_497_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs(lean_object* v_00_u03b1_503_, lean_object* v_targets_504_, lean_object* v_targetsNew_505_, lean_object* v_k_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_Meta_withNewEqs___redArg(v_targets_504_, v_targetsNew_505_, v_k_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withNewEqs___boxed(lean_object* v_00_u03b1_513_, lean_object* v_targets_514_, lean_object* v_targetsNew_515_, lean_object* v_k_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = l_Lean_Meta_withNewEqs(v_00_u03b1_513_, v_targets_514_, v_targetsNew_515_, v_k_516_, v_a_517_, v_a_518_, v_a_519_, v_a_520_);
lean_dec(v_a_520_);
lean_dec_ref(v_a_519_);
lean_dec(v_a_518_);
lean_dec_ref(v_a_517_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(lean_object* v_k_523_, lean_object* v_b_524_, lean_object* v_c_525_, lean_object* v___y_526_, lean_object* v___y_527_, lean_object* v___y_528_, lean_object* v___y_529_){
_start:
{
lean_object* v___x_531_; 
lean_inc(v___y_529_);
lean_inc_ref(v___y_528_);
lean_inc(v___y_527_);
lean_inc_ref(v___y_526_);
v___x_531_ = lean_apply_7(v_k_523_, v_b_524_, v_c_525_, v___y_526_, v___y_527_, v___y_528_, v___y_529_, lean_box(0));
return v___x_531_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed(lean_object* v_k_532_, lean_object* v_b_533_, lean_object* v_c_534_, lean_object* v___y_535_, lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v___y_538_, lean_object* v___y_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0(v_k_532_, v_b_533_, v_c_534_, v___y_535_, v___y_536_, v___y_537_, v___y_538_);
lean_dec(v___y_538_);
lean_dec_ref(v___y_537_);
lean_dec(v___y_536_);
lean_dec_ref(v___y_535_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(lean_object* v_type_541_, lean_object* v_k_542_, uint8_t v_cleanupAnnotations_543_, uint8_t v_whnfType_544_, lean_object* v___y_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_){
_start:
{
lean_object* v___f_550_; lean_object* v___x_551_; 
v___f_550_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_550_, 0, v_k_542_);
v___x_551_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_541_, v___f_550_, v_cleanupAnnotations_543_, v_whnfType_544_, v___y_545_, v___y_546_, v___y_547_, v___y_548_);
if (lean_obj_tag(v___x_551_) == 0)
{
lean_object* v_a_552_; lean_object* v___x_554_; uint8_t v_isShared_555_; uint8_t v_isSharedCheck_559_; 
v_a_552_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_559_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_559_ == 0)
{
v___x_554_ = v___x_551_;
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
else
{
lean_inc(v_a_552_);
lean_dec(v___x_551_);
v___x_554_ = lean_box(0);
v_isShared_555_ = v_isSharedCheck_559_;
goto v_resetjp_553_;
}
v_resetjp_553_:
{
lean_object* v___x_557_; 
if (v_isShared_555_ == 0)
{
v___x_557_ = v___x_554_;
goto v_reusejp_556_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_a_552_);
v___x_557_ = v_reuseFailAlloc_558_;
goto v_reusejp_556_;
}
v_reusejp_556_:
{
return v___x_557_;
}
}
}
else
{
lean_object* v_a_560_; lean_object* v___x_562_; uint8_t v_isShared_563_; uint8_t v_isSharedCheck_567_; 
v_a_560_ = lean_ctor_get(v___x_551_, 0);
v_isSharedCheck_567_ = !lean_is_exclusive(v___x_551_);
if (v_isSharedCheck_567_ == 0)
{
v___x_562_ = v___x_551_;
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
else
{
lean_inc(v_a_560_);
lean_dec(v___x_551_);
v___x_562_ = lean_box(0);
v_isShared_563_ = v_isSharedCheck_567_;
goto v_resetjp_561_;
}
v_resetjp_561_:
{
lean_object* v___x_565_; 
if (v_isShared_563_ == 0)
{
v___x_565_ = v___x_562_;
goto v_reusejp_564_;
}
else
{
lean_object* v_reuseFailAlloc_566_; 
v_reuseFailAlloc_566_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_566_, 0, v_a_560_);
v___x_565_ = v_reuseFailAlloc_566_;
goto v_reusejp_564_;
}
v_reusejp_564_:
{
return v___x_565_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg___boxed(lean_object* v_type_568_, lean_object* v_k_569_, lean_object* v_cleanupAnnotations_570_, lean_object* v_whnfType_571_, lean_object* v___y_572_, lean_object* v___y_573_, lean_object* v___y_574_, lean_object* v___y_575_, lean_object* v___y_576_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_577_; uint8_t v_whnfType_boxed_578_; lean_object* v_res_579_; 
v_cleanupAnnotations_boxed_577_ = lean_unbox(v_cleanupAnnotations_570_);
v_whnfType_boxed_578_ = lean_unbox(v_whnfType_571_);
v_res_579_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_type_568_, v_k_569_, v_cleanupAnnotations_boxed_577_, v_whnfType_boxed_578_, v___y_572_, v___y_573_, v___y_574_, v___y_575_);
lean_dec(v___y_575_);
lean_dec_ref(v___y_574_);
lean_dec(v___y_573_);
lean_dec_ref(v___y_572_);
return v_res_579_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(lean_object* v_00_u03b1_580_, lean_object* v_type_581_, lean_object* v_k_582_, uint8_t v_cleanupAnnotations_583_, uint8_t v_whnfType_584_, lean_object* v___y_585_, lean_object* v___y_586_, lean_object* v___y_587_, lean_object* v___y_588_){
_start:
{
lean_object* v___x_590_; 
v___x_590_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_type_581_, v_k_582_, v_cleanupAnnotations_583_, v_whnfType_584_, v___y_585_, v___y_586_, v___y_587_, v___y_588_);
return v___x_590_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___boxed(lean_object* v_00_u03b1_591_, lean_object* v_type_592_, lean_object* v_k_593_, lean_object* v_cleanupAnnotations_594_, lean_object* v_whnfType_595_, lean_object* v___y_596_, lean_object* v___y_597_, lean_object* v___y_598_, lean_object* v___y_599_, lean_object* v___y_600_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_601_; uint8_t v_whnfType_boxed_602_; lean_object* v_res_603_; 
v_cleanupAnnotations_boxed_601_ = lean_unbox(v_cleanupAnnotations_594_);
v_whnfType_boxed_602_ = lean_unbox(v_whnfType_595_);
v_res_603_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0(v_00_u03b1_591_, v_type_592_, v_k_593_, v_cleanupAnnotations_boxed_601_, v_whnfType_boxed_602_, v___y_596_, v___y_597_, v___y_598_, v___y_599_);
lean_dec(v___y_599_);
lean_dec_ref(v___y_598_);
lean_dec(v___y_597_);
lean_dec_ref(v___y_596_);
return v_res_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(lean_object* v_mvarId_604_, lean_object* v_x_605_, lean_object* v___y_606_, lean_object* v___y_607_, lean_object* v___y_608_, lean_object* v___y_609_){
_start:
{
lean_object* v___x_611_; 
v___x_611_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_604_, v_x_605_, v___y_606_, v___y_607_, v___y_608_, v___y_609_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_object* v_a_612_; lean_object* v___x_614_; uint8_t v_isShared_615_; uint8_t v_isSharedCheck_619_; 
v_a_612_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_619_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_619_ == 0)
{
v___x_614_ = v___x_611_;
v_isShared_615_ = v_isSharedCheck_619_;
goto v_resetjp_613_;
}
else
{
lean_inc(v_a_612_);
lean_dec(v___x_611_);
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
v_reuseFailAlloc_618_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_620_; lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_627_; 
v_a_620_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_627_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_627_ == 0)
{
v___x_622_ = v___x_611_;
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
else
{
lean_inc(v_a_620_);
lean_dec(v___x_611_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_627_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
lean_object* v___x_625_; 
if (v_isShared_623_ == 0)
{
v___x_625_ = v___x_622_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_a_620_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg___boxed(lean_object* v_mvarId_628_, lean_object* v_x_629_, lean_object* v___y_630_, lean_object* v___y_631_, lean_object* v___y_632_, lean_object* v___y_633_, lean_object* v___y_634_){
_start:
{
lean_object* v_res_635_; 
v_res_635_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_628_, v_x_629_, v___y_630_, v___y_631_, v___y_632_, v___y_633_);
lean_dec(v___y_633_);
lean_dec_ref(v___y_632_);
lean_dec(v___y_631_);
lean_dec_ref(v___y_630_);
return v_res_635_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(lean_object* v_00_u03b1_636_, lean_object* v_mvarId_637_, lean_object* v_x_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_){
_start:
{
lean_object* v___x_644_; 
v___x_644_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_637_, v_x_638_, v___y_639_, v___y_640_, v___y_641_, v___y_642_);
return v___x_644_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___boxed(lean_object* v_00_u03b1_645_, lean_object* v_mvarId_646_, lean_object* v_x_647_, lean_object* v___y_648_, lean_object* v___y_649_, lean_object* v___y_650_, lean_object* v___y_651_, lean_object* v___y_652_){
_start:
{
lean_object* v_res_653_; 
v_res_653_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2(v_00_u03b1_645_, v_mvarId_646_, v_x_647_, v___y_648_, v___y_649_, v___y_650_, v___y_651_);
lean_dec(v___y_651_);
lean_dec_ref(v___y_650_);
lean_dec(v___y_649_);
lean_dec_ref(v___y_648_);
return v_res_653_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0(lean_object* v_mvarId_654_, lean_object* v___x_655_, lean_object* v_eqs_656_, lean_object* v_eqRefls_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_, lean_object* v___y_661_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l_Lean_MVarId_getType(v_mvarId_654_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_663_) == 0)
{
lean_object* v_a_664_; uint8_t v___x_665_; uint8_t v___x_666_; uint8_t v___x_667_; lean_object* v___x_668_; 
v_a_664_ = lean_ctor_get(v___x_663_, 0);
lean_inc(v_a_664_);
lean_dec_ref_known(v___x_663_, 1);
v___x_665_ = 0;
v___x_666_ = 1;
v___x_667_ = 1;
v___x_668_ = l_Lean_Meta_mkForallFVars(v_eqs_656_, v_a_664_, v___x_665_, v___x_666_, v___x_666_, v___x_667_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_668_) == 0)
{
lean_object* v_a_669_; lean_object* v___x_670_; 
v_a_669_ = lean_ctor_get(v___x_668_, 0);
lean_inc(v_a_669_);
lean_dec_ref_known(v___x_668_, 1);
v___x_670_ = l_Lean_Meta_mkForallFVars(v___x_655_, v_a_669_, v___x_665_, v___x_666_, v___x_666_, v___x_667_, v___y_658_, v___y_659_, v___y_660_, v___y_661_);
if (lean_obj_tag(v___x_670_) == 0)
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_679_; 
v_a_671_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_679_ == 0)
{
v___x_673_ = v___x_670_;
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_670_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_679_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_675_; lean_object* v___x_677_; 
v___x_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_675_, 0, v_a_671_);
lean_ctor_set(v___x_675_, 1, v_eqRefls_657_);
if (v_isShared_674_ == 0)
{
lean_ctor_set(v___x_673_, 0, v___x_675_);
v___x_677_ = v___x_673_;
goto v_reusejp_676_;
}
else
{
lean_object* v_reuseFailAlloc_678_; 
v_reuseFailAlloc_678_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_678_, 0, v___x_675_);
v___x_677_ = v_reuseFailAlloc_678_;
goto v_reusejp_676_;
}
v_reusejp_676_:
{
return v___x_677_;
}
}
}
else
{
lean_object* v_a_680_; lean_object* v___x_682_; uint8_t v_isShared_683_; uint8_t v_isSharedCheck_687_; 
lean_dec_ref(v_eqRefls_657_);
v_a_680_ = lean_ctor_get(v___x_670_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v___x_670_);
if (v_isSharedCheck_687_ == 0)
{
v___x_682_ = v___x_670_;
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
else
{
lean_inc(v_a_680_);
lean_dec(v___x_670_);
v___x_682_ = lean_box(0);
v_isShared_683_ = v_isSharedCheck_687_;
goto v_resetjp_681_;
}
v_resetjp_681_:
{
lean_object* v___x_685_; 
if (v_isShared_683_ == 0)
{
v___x_685_ = v___x_682_;
goto v_reusejp_684_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v_a_680_);
v___x_685_ = v_reuseFailAlloc_686_;
goto v_reusejp_684_;
}
v_reusejp_684_:
{
return v___x_685_;
}
}
}
}
else
{
lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_695_; 
lean_dec_ref(v_eqRefls_657_);
v_a_688_ = lean_ctor_get(v___x_668_, 0);
v_isSharedCheck_695_ = !lean_is_exclusive(v___x_668_);
if (v_isSharedCheck_695_ == 0)
{
v___x_690_ = v___x_668_;
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_dec(v___x_668_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_695_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v___x_693_; 
if (v_isShared_691_ == 0)
{
v___x_693_ = v___x_690_;
goto v_reusejp_692_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_a_688_);
v___x_693_ = v_reuseFailAlloc_694_;
goto v_reusejp_692_;
}
v_reusejp_692_:
{
return v___x_693_;
}
}
}
}
else
{
lean_object* v_a_696_; lean_object* v___x_698_; uint8_t v_isShared_699_; uint8_t v_isSharedCheck_703_; 
lean_dec_ref(v_eqRefls_657_);
v_a_696_ = lean_ctor_get(v___x_663_, 0);
v_isSharedCheck_703_ = !lean_is_exclusive(v___x_663_);
if (v_isSharedCheck_703_ == 0)
{
v___x_698_ = v___x_663_;
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
else
{
lean_inc(v_a_696_);
lean_dec(v___x_663_);
v___x_698_ = lean_box(0);
v_isShared_699_ = v_isSharedCheck_703_;
goto v_resetjp_697_;
}
v_resetjp_697_:
{
lean_object* v___x_701_; 
if (v_isShared_699_ == 0)
{
v___x_701_ = v___x_698_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_a_696_);
v___x_701_ = v_reuseFailAlloc_702_;
goto v_reusejp_700_;
}
v_reusejp_700_:
{
return v___x_701_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__0___boxed(lean_object* v_mvarId_704_, lean_object* v___x_705_, lean_object* v_eqs_706_, lean_object* v_eqRefls_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_, lean_object* v___y_712_){
_start:
{
lean_object* v_res_713_; 
v_res_713_ = l_Lean_Meta_generalizeTargetsEq___lam__0(v_mvarId_704_, v___x_705_, v_eqs_706_, v_eqRefls_707_, v___y_708_, v___y_709_, v___y_710_, v___y_711_);
lean_dec(v___y_711_);
lean_dec_ref(v___y_710_);
lean_dec(v___y_709_);
lean_dec_ref(v___y_708_);
lean_dec_ref(v_eqs_706_);
lean_dec_ref(v___x_705_);
return v_res_713_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1(void){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = ((lean_object*)(l_Lean_Meta_generalizeTargetsEq___lam__1___closed__0));
v___x_716_ = l_Lean_stringToMessageData(v___x_715_);
return v___x_716_;
}
}
static lean_object* _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3(void){
_start:
{
lean_object* v___x_718_; lean_object* v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lean_Meta_generalizeTargetsEq___lam__1___closed__2));
v___x_719_ = l_Lean_stringToMessageData(v___x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1(lean_object* v_targets_720_, lean_object* v_mvarId_721_, lean_object* v_targetsNew_722_, lean_object* v_x_723_, lean_object* v___y_724_, lean_object* v___y_725_, lean_object* v___y_726_, lean_object* v___y_727_){
_start:
{
lean_object* v___x_736_; lean_object* v___x_737_; uint8_t v___x_738_; 
v___x_736_ = lean_array_get_size(v_targets_720_);
v___x_737_ = lean_array_get_size(v_targetsNew_722_);
v___x_738_ = lean_nat_dec_le(v___x_736_, v___x_737_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
lean_dec_ref(v_targetsNew_722_);
lean_dec(v_mvarId_721_);
lean_dec_ref(v_targets_720_);
v___x_739_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__1);
v___x_740_ = l_Nat_reprFast(v___x_736_);
v___x_741_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_741_, 0, v___x_740_);
v___x_742_ = l_Lean_MessageData_ofFormat(v___x_741_);
v___x_743_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_743_, 0, v___x_739_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v___x_744_ = lean_obj_once(&l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3, &l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3_once, _init_l_Lean_Meta_generalizeTargetsEq___lam__1___closed__3);
v___x_745_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_745_, 0, v___x_743_);
lean_ctor_set(v___x_745_, 1, v___x_744_);
v___x_746_ = l_Nat_reprFast(v___x_737_);
v___x_747_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_747_, 0, v___x_746_);
v___x_748_ = l_Lean_MessageData_ofFormat(v___x_747_);
v___x_749_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_749_, 0, v___x_745_);
lean_ctor_set(v___x_749_, 1, v___x_748_);
v___x_750_ = l_Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0___redArg(v___x_749_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
v_a_751_ = lean_ctor_get(v___x_750_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_750_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_750_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_750_);
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
else
{
goto v___jp_729_;
}
v___jp_729_:
{
lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___f_734_; lean_object* v___x_735_; 
v___x_730_ = lean_array_get_size(v_targets_720_);
v___x_731_ = lean_unsigned_to_nat(0u);
v___x_732_ = l_Array_toSubarray___redArg(v_targetsNew_722_, v___x_731_, v___x_730_);
v___x_733_ = l_Subarray_copy___redArg(v___x_732_);
lean_inc_ref(v___x_733_);
v___f_734_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__0___boxed), 9, 2);
lean_closure_set(v___f_734_, 0, v_mvarId_721_);
lean_closure_set(v___f_734_, 1, v___x_733_);
v___x_735_ = l_Lean_Meta_withNewEqs___redArg(v_targets_720_, v___x_733_, v___f_734_, v___y_724_, v___y_725_, v___y_726_, v___y_727_);
return v___x_735_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__1___boxed(lean_object* v_targets_759_, lean_object* v_mvarId_760_, lean_object* v_targetsNew_761_, lean_object* v_x_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = l_Lean_Meta_generalizeTargetsEq___lam__1(v_targets_759_, v_mvarId_760_, v_targetsNew_761_, v_x_762_, v___y_763_, v___y_764_, v___y_765_, v___y_766_);
lean_dec(v___y_766_);
lean_dec_ref(v___y_765_);
lean_dec(v___y_764_);
lean_dec_ref(v___y_763_);
lean_dec_ref(v_x_762_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_769_, lean_object* v_x_770_, lean_object* v_x_771_, lean_object* v_x_772_){
_start:
{
lean_object* v_ks_773_; lean_object* v_vs_774_; lean_object* v___x_776_; uint8_t v_isShared_777_; uint8_t v_isSharedCheck_798_; 
v_ks_773_ = lean_ctor_get(v_x_769_, 0);
v_vs_774_ = lean_ctor_get(v_x_769_, 1);
v_isSharedCheck_798_ = !lean_is_exclusive(v_x_769_);
if (v_isSharedCheck_798_ == 0)
{
v___x_776_ = v_x_769_;
v_isShared_777_ = v_isSharedCheck_798_;
goto v_resetjp_775_;
}
else
{
lean_inc(v_vs_774_);
lean_inc(v_ks_773_);
lean_dec(v_x_769_);
v___x_776_ = lean_box(0);
v_isShared_777_ = v_isSharedCheck_798_;
goto v_resetjp_775_;
}
v_resetjp_775_:
{
lean_object* v___x_778_; uint8_t v___x_779_; 
v___x_778_ = lean_array_get_size(v_ks_773_);
v___x_779_ = lean_nat_dec_lt(v_x_770_, v___x_778_);
if (v___x_779_ == 0)
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_783_; 
lean_dec(v_x_770_);
v___x_780_ = lean_array_push(v_ks_773_, v_x_771_);
v___x_781_ = lean_array_push(v_vs_774_, v_x_772_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_781_);
lean_ctor_set(v___x_776_, 0, v___x_780_);
v___x_783_ = v___x_776_;
goto v_reusejp_782_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___x_780_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v___x_781_);
v___x_783_ = v_reuseFailAlloc_784_;
goto v_reusejp_782_;
}
v_reusejp_782_:
{
return v___x_783_;
}
}
else
{
lean_object* v_k_x27_785_; uint8_t v___x_786_; 
v_k_x27_785_ = lean_array_fget_borrowed(v_ks_773_, v_x_770_);
v___x_786_ = l_Lean_instBEqMVarId_beq(v_x_771_, v_k_x27_785_);
if (v___x_786_ == 0)
{
lean_object* v___x_788_; 
if (v_isShared_777_ == 0)
{
v___x_788_ = v___x_776_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_ks_773_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_vs_774_);
v___x_788_ = v_reuseFailAlloc_792_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
lean_object* v___x_789_; lean_object* v___x_790_; 
v___x_789_ = lean_unsigned_to_nat(1u);
v___x_790_ = lean_nat_add(v_x_770_, v___x_789_);
lean_dec(v_x_770_);
v_x_769_ = v___x_788_;
v_x_770_ = v___x_790_;
goto _start;
}
}
else
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_796_; 
v___x_793_ = lean_array_fset(v_ks_773_, v_x_770_, v_x_771_);
v___x_794_ = lean_array_fset(v_vs_774_, v_x_770_, v_x_772_);
lean_dec(v_x_770_);
if (v_isShared_777_ == 0)
{
lean_ctor_set(v___x_776_, 1, v___x_794_);
lean_ctor_set(v___x_776_, 0, v___x_793_);
v___x_796_ = v___x_776_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v___x_793_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v___x_794_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_799_, lean_object* v_k_800_, lean_object* v_v_801_){
_start:
{
lean_object* v___x_802_; lean_object* v___x_803_; 
v___x_802_ = lean_unsigned_to_nat(0u);
v___x_803_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_799_, v___x_802_, v_k_800_, v_v_801_);
return v___x_803_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_804_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(lean_object* v_x_805_, size_t v_x_806_, size_t v_x_807_, lean_object* v_x_808_, lean_object* v_x_809_){
_start:
{
if (lean_obj_tag(v_x_805_) == 0)
{
lean_object* v_es_810_; size_t v___x_811_; size_t v___x_812_; lean_object* v_j_813_; lean_object* v___x_814_; uint8_t v___x_815_; 
v_es_810_ = lean_ctor_get(v_x_805_, 0);
v___x_811_ = ((size_t)31ULL);
v___x_812_ = lean_usize_land(v_x_806_, v___x_811_);
v_j_813_ = lean_usize_to_nat(v___x_812_);
v___x_814_ = lean_array_get_size(v_es_810_);
v___x_815_ = lean_nat_dec_lt(v_j_813_, v___x_814_);
if (v___x_815_ == 0)
{
lean_dec(v_j_813_);
lean_dec(v_x_809_);
lean_dec(v_x_808_);
return v_x_805_;
}
else
{
lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_854_; 
lean_inc_ref(v_es_810_);
v_isSharedCheck_854_ = !lean_is_exclusive(v_x_805_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; 
v_unused_855_ = lean_ctor_get(v_x_805_, 0);
lean_dec(v_unused_855_);
v___x_817_ = v_x_805_;
v_isShared_818_ = v_isSharedCheck_854_;
goto v_resetjp_816_;
}
else
{
lean_dec(v_x_805_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_854_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v_v_819_; lean_object* v___x_820_; lean_object* v_xs_x27_821_; lean_object* v___y_823_; 
v_v_819_ = lean_array_fget(v_es_810_, v_j_813_);
v___x_820_ = lean_box(0);
v_xs_x27_821_ = lean_array_fset(v_es_810_, v_j_813_, v___x_820_);
switch(lean_obj_tag(v_v_819_))
{
case 0:
{
lean_object* v_key_828_; lean_object* v_val_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_839_; 
v_key_828_ = lean_ctor_get(v_v_819_, 0);
v_val_829_ = lean_ctor_get(v_v_819_, 1);
v_isSharedCheck_839_ = !lean_is_exclusive(v_v_819_);
if (v_isSharedCheck_839_ == 0)
{
v___x_831_ = v_v_819_;
v_isShared_832_ = v_isSharedCheck_839_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_val_829_);
lean_inc(v_key_828_);
lean_dec(v_v_819_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_839_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
uint8_t v___x_833_; 
v___x_833_ = l_Lean_instBEqMVarId_beq(v_x_808_, v_key_828_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; lean_object* v___x_835_; 
lean_del_object(v___x_831_);
v___x_834_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_828_, v_val_829_, v_x_808_, v_x_809_);
v___x_835_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_835_, 0, v___x_834_);
v___y_823_ = v___x_835_;
goto v___jp_822_;
}
else
{
lean_object* v___x_837_; 
lean_dec(v_val_829_);
lean_dec(v_key_828_);
if (v_isShared_832_ == 0)
{
lean_ctor_set(v___x_831_, 1, v_x_809_);
lean_ctor_set(v___x_831_, 0, v_x_808_);
v___x_837_ = v___x_831_;
goto v_reusejp_836_;
}
else
{
lean_object* v_reuseFailAlloc_838_; 
v_reuseFailAlloc_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_838_, 0, v_x_808_);
lean_ctor_set(v_reuseFailAlloc_838_, 1, v_x_809_);
v___x_837_ = v_reuseFailAlloc_838_;
goto v_reusejp_836_;
}
v_reusejp_836_:
{
v___y_823_ = v___x_837_;
goto v___jp_822_;
}
}
}
}
case 1:
{
lean_object* v_node_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_852_; 
v_node_840_ = lean_ctor_get(v_v_819_, 0);
v_isSharedCheck_852_ = !lean_is_exclusive(v_v_819_);
if (v_isSharedCheck_852_ == 0)
{
v___x_842_ = v_v_819_;
v_isShared_843_ = v_isSharedCheck_852_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_node_840_);
lean_dec(v_v_819_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_852_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
size_t v___x_844_; size_t v___x_845_; size_t v___x_846_; size_t v___x_847_; lean_object* v___x_848_; lean_object* v___x_850_; 
v___x_844_ = ((size_t)5ULL);
v___x_845_ = lean_usize_shift_right(v_x_806_, v___x_844_);
v___x_846_ = ((size_t)1ULL);
v___x_847_ = lean_usize_add(v_x_807_, v___x_846_);
v___x_848_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_node_840_, v___x_845_, v___x_847_, v_x_808_, v_x_809_);
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 0, v___x_848_);
v___x_850_ = v___x_842_;
goto v_reusejp_849_;
}
else
{
lean_object* v_reuseFailAlloc_851_; 
v_reuseFailAlloc_851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_851_, 0, v___x_848_);
v___x_850_ = v_reuseFailAlloc_851_;
goto v_reusejp_849_;
}
v_reusejp_849_:
{
v___y_823_ = v___x_850_;
goto v___jp_822_;
}
}
}
default: 
{
lean_object* v___x_853_; 
v___x_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_853_, 0, v_x_808_);
lean_ctor_set(v___x_853_, 1, v_x_809_);
v___y_823_ = v___x_853_;
goto v___jp_822_;
}
}
v___jp_822_:
{
lean_object* v___x_824_; lean_object* v___x_826_; 
v___x_824_ = lean_array_fset(v_xs_x27_821_, v_j_813_, v___y_823_);
lean_dec(v_j_813_);
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 0, v___x_824_);
v___x_826_ = v___x_817_;
goto v_reusejp_825_;
}
else
{
lean_object* v_reuseFailAlloc_827_; 
v_reuseFailAlloc_827_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_827_, 0, v___x_824_);
v___x_826_ = v_reuseFailAlloc_827_;
goto v_reusejp_825_;
}
v_reusejp_825_:
{
return v___x_826_;
}
}
}
}
}
else
{
lean_object* v_ks_856_; lean_object* v_vs_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_875_; 
v_ks_856_ = lean_ctor_get(v_x_805_, 0);
v_vs_857_ = lean_ctor_get(v_x_805_, 1);
v_isSharedCheck_875_ = !lean_is_exclusive(v_x_805_);
if (v_isSharedCheck_875_ == 0)
{
v___x_859_ = v_x_805_;
v_isShared_860_ = v_isSharedCheck_875_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_vs_857_);
lean_inc(v_ks_856_);
lean_dec(v_x_805_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_875_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_862_; 
if (v_isShared_860_ == 0)
{
v___x_862_ = v___x_859_;
goto v_reusejp_861_;
}
else
{
lean_object* v_reuseFailAlloc_874_; 
v_reuseFailAlloc_874_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_874_, 0, v_ks_856_);
lean_ctor_set(v_reuseFailAlloc_874_, 1, v_vs_857_);
v___x_862_ = v_reuseFailAlloc_874_;
goto v_reusejp_861_;
}
v_reusejp_861_:
{
lean_object* v_newNode_863_; size_t v___x_864_; uint8_t v___x_865_; 
v_newNode_863_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(v___x_862_, v_x_808_, v_x_809_);
v___x_864_ = ((size_t)7ULL);
v___x_865_ = lean_usize_dec_le(v___x_864_, v_x_807_);
if (v___x_865_ == 0)
{
lean_object* v___x_866_; lean_object* v___x_867_; uint8_t v___x_868_; 
v___x_866_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_863_);
v___x_867_ = lean_unsigned_to_nat(4u);
v___x_868_ = lean_nat_dec_lt(v___x_866_, v___x_867_);
lean_dec(v___x_866_);
if (v___x_868_ == 0)
{
lean_object* v_ks_869_; lean_object* v_vs_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; 
v_ks_869_ = lean_ctor_get(v_newNode_863_, 0);
lean_inc_ref(v_ks_869_);
v_vs_870_ = lean_ctor_get(v_newNode_863_, 1);
lean_inc_ref(v_vs_870_);
lean_dec_ref(v_newNode_863_);
v___x_871_ = lean_unsigned_to_nat(0u);
v___x_872_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_873_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_x_807_, v_ks_869_, v_vs_870_, v___x_871_, v___x_872_);
lean_dec_ref(v_vs_870_);
lean_dec_ref(v_ks_869_);
return v___x_873_;
}
else
{
return v_newNode_863_;
}
}
else
{
return v_newNode_863_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_876_, lean_object* v_keys_877_, lean_object* v_vals_878_, lean_object* v_i_879_, lean_object* v_entries_880_){
_start:
{
lean_object* v___x_881_; uint8_t v___x_882_; 
v___x_881_ = lean_array_get_size(v_keys_877_);
v___x_882_ = lean_nat_dec_lt(v_i_879_, v___x_881_);
if (v___x_882_ == 0)
{
lean_dec(v_i_879_);
return v_entries_880_;
}
else
{
lean_object* v_k_883_; lean_object* v_v_884_; uint64_t v___x_885_; size_t v_h_886_; size_t v___x_887_; lean_object* v___x_888_; size_t v___x_889_; size_t v___x_890_; size_t v___x_891_; size_t v_h_892_; lean_object* v___x_893_; lean_object* v___x_894_; 
v_k_883_ = lean_array_fget_borrowed(v_keys_877_, v_i_879_);
v_v_884_ = lean_array_fget_borrowed(v_vals_878_, v_i_879_);
v___x_885_ = l_Lean_instHashableMVarId_hash(v_k_883_);
v_h_886_ = lean_uint64_to_usize(v___x_885_);
v___x_887_ = ((size_t)5ULL);
v___x_888_ = lean_unsigned_to_nat(1u);
v___x_889_ = ((size_t)1ULL);
v___x_890_ = lean_usize_sub(v_depth_876_, v___x_889_);
v___x_891_ = lean_usize_mul(v___x_887_, v___x_890_);
v_h_892_ = lean_usize_shift_right(v_h_886_, v___x_891_);
v___x_893_ = lean_nat_add(v_i_879_, v___x_888_);
lean_dec(v_i_879_);
lean_inc(v_v_884_);
lean_inc(v_k_883_);
v___x_894_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_entries_880_, v_h_892_, v_depth_876_, v_k_883_, v_v_884_);
v_i_879_ = v___x_893_;
v_entries_880_ = v___x_894_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_896_, lean_object* v_keys_897_, lean_object* v_vals_898_, lean_object* v_i_899_, lean_object* v_entries_900_){
_start:
{
size_t v_depth_boxed_901_; lean_object* v_res_902_; 
v_depth_boxed_901_ = lean_unbox_usize(v_depth_896_);
lean_dec(v_depth_896_);
v_res_902_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_901_, v_keys_897_, v_vals_898_, v_i_899_, v_entries_900_);
lean_dec_ref(v_vals_898_);
lean_dec_ref(v_keys_897_);
return v_res_902_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_903_, lean_object* v_x_904_, lean_object* v_x_905_, lean_object* v_x_906_, lean_object* v_x_907_){
_start:
{
size_t v_x_2626__boxed_908_; size_t v_x_2627__boxed_909_; lean_object* v_res_910_; 
v_x_2626__boxed_908_ = lean_unbox_usize(v_x_904_);
lean_dec(v_x_904_);
v_x_2627__boxed_909_ = lean_unbox_usize(v_x_905_);
lean_dec(v_x_905_);
v_res_910_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_903_, v_x_2626__boxed_908_, v_x_2627__boxed_909_, v_x_906_, v_x_907_);
return v_res_910_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(lean_object* v_x_911_, lean_object* v_x_912_, lean_object* v_x_913_){
_start:
{
uint64_t v___x_914_; size_t v___x_915_; size_t v___x_916_; lean_object* v___x_917_; 
v___x_914_ = l_Lean_instHashableMVarId_hash(v_x_912_);
v___x_915_ = lean_uint64_to_usize(v___x_914_);
v___x_916_ = ((size_t)1ULL);
v___x_917_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_911_, v___x_915_, v___x_916_, v_x_912_, v_x_913_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(lean_object* v_mvarId_918_, lean_object* v_val_919_, lean_object* v___y_920_){
_start:
{
lean_object* v___x_922_; lean_object* v_mctx_923_; lean_object* v_cache_924_; lean_object* v_zetaDeltaFVarIds_925_; lean_object* v_postponed_926_; lean_object* v_diag_927_; lean_object* v___x_929_; uint8_t v_isShared_930_; uint8_t v_isSharedCheck_956_; 
v___x_922_ = lean_st_ref_take(v___y_920_);
v_mctx_923_ = lean_ctor_get(v___x_922_, 0);
v_cache_924_ = lean_ctor_get(v___x_922_, 1);
v_zetaDeltaFVarIds_925_ = lean_ctor_get(v___x_922_, 2);
v_postponed_926_ = lean_ctor_get(v___x_922_, 3);
v_diag_927_ = lean_ctor_get(v___x_922_, 4);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_922_);
if (v_isSharedCheck_956_ == 0)
{
v___x_929_ = v___x_922_;
v_isShared_930_ = v_isSharedCheck_956_;
goto v_resetjp_928_;
}
else
{
lean_inc(v_diag_927_);
lean_inc(v_postponed_926_);
lean_inc(v_zetaDeltaFVarIds_925_);
lean_inc(v_cache_924_);
lean_inc(v_mctx_923_);
lean_dec(v___x_922_);
v___x_929_ = lean_box(0);
v_isShared_930_ = v_isSharedCheck_956_;
goto v_resetjp_928_;
}
v_resetjp_928_:
{
lean_object* v_depth_931_; lean_object* v_levelAssignDepth_932_; lean_object* v_lmvarCounter_933_; lean_object* v_mvarCounter_934_; lean_object* v_lDecls_935_; lean_object* v_decls_936_; lean_object* v_userNames_937_; lean_object* v_lAssignment_938_; lean_object* v_eAssignment_939_; lean_object* v_dAssignment_940_; lean_object* v_instanceTypedMVars_941_; lean_object* v___x_943_; uint8_t v_isShared_944_; uint8_t v_isSharedCheck_955_; 
v_depth_931_ = lean_ctor_get(v_mctx_923_, 0);
v_levelAssignDepth_932_ = lean_ctor_get(v_mctx_923_, 1);
v_lmvarCounter_933_ = lean_ctor_get(v_mctx_923_, 2);
v_mvarCounter_934_ = lean_ctor_get(v_mctx_923_, 3);
v_lDecls_935_ = lean_ctor_get(v_mctx_923_, 4);
v_decls_936_ = lean_ctor_get(v_mctx_923_, 5);
v_userNames_937_ = lean_ctor_get(v_mctx_923_, 6);
v_lAssignment_938_ = lean_ctor_get(v_mctx_923_, 7);
v_eAssignment_939_ = lean_ctor_get(v_mctx_923_, 8);
v_dAssignment_940_ = lean_ctor_get(v_mctx_923_, 9);
v_instanceTypedMVars_941_ = lean_ctor_get(v_mctx_923_, 10);
v_isSharedCheck_955_ = !lean_is_exclusive(v_mctx_923_);
if (v_isSharedCheck_955_ == 0)
{
v___x_943_ = v_mctx_923_;
v_isShared_944_ = v_isSharedCheck_955_;
goto v_resetjp_942_;
}
else
{
lean_inc(v_instanceTypedMVars_941_);
lean_inc(v_dAssignment_940_);
lean_inc(v_eAssignment_939_);
lean_inc(v_lAssignment_938_);
lean_inc(v_userNames_937_);
lean_inc(v_decls_936_);
lean_inc(v_lDecls_935_);
lean_inc(v_mvarCounter_934_);
lean_inc(v_lmvarCounter_933_);
lean_inc(v_levelAssignDepth_932_);
lean_inc(v_depth_931_);
lean_dec(v_mctx_923_);
v___x_943_ = lean_box(0);
v_isShared_944_ = v_isSharedCheck_955_;
goto v_resetjp_942_;
}
v_resetjp_942_:
{
lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_948_; 
v___x_945_ = lean_box(0);
v___x_946_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(v_eAssignment_939_, v_mvarId_918_, v_val_919_);
if (v_isShared_944_ == 0)
{
lean_ctor_set(v___x_943_, 8, v___x_946_);
v___x_948_ = v___x_943_;
goto v_reusejp_947_;
}
else
{
lean_object* v_reuseFailAlloc_954_; 
v_reuseFailAlloc_954_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_954_, 0, v_depth_931_);
lean_ctor_set(v_reuseFailAlloc_954_, 1, v_levelAssignDepth_932_);
lean_ctor_set(v_reuseFailAlloc_954_, 2, v_lmvarCounter_933_);
lean_ctor_set(v_reuseFailAlloc_954_, 3, v_mvarCounter_934_);
lean_ctor_set(v_reuseFailAlloc_954_, 4, v_lDecls_935_);
lean_ctor_set(v_reuseFailAlloc_954_, 5, v_decls_936_);
lean_ctor_set(v_reuseFailAlloc_954_, 6, v_userNames_937_);
lean_ctor_set(v_reuseFailAlloc_954_, 7, v_lAssignment_938_);
lean_ctor_set(v_reuseFailAlloc_954_, 8, v___x_946_);
lean_ctor_set(v_reuseFailAlloc_954_, 9, v_dAssignment_940_);
lean_ctor_set(v_reuseFailAlloc_954_, 10, v_instanceTypedMVars_941_);
v___x_948_ = v_reuseFailAlloc_954_;
goto v_reusejp_947_;
}
v_reusejp_947_:
{
lean_object* v___x_950_; 
if (v_isShared_930_ == 0)
{
lean_ctor_set(v___x_929_, 0, v___x_948_);
v___x_950_ = v___x_929_;
goto v_reusejp_949_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v___x_948_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_cache_924_);
lean_ctor_set(v_reuseFailAlloc_953_, 2, v_zetaDeltaFVarIds_925_);
lean_ctor_set(v_reuseFailAlloc_953_, 3, v_postponed_926_);
lean_ctor_set(v_reuseFailAlloc_953_, 4, v_diag_927_);
v___x_950_ = v_reuseFailAlloc_953_;
goto v_reusejp_949_;
}
v_reusejp_949_:
{
lean_object* v___x_951_; lean_object* v___x_952_; 
v___x_951_ = lean_st_ref_put(v___y_920_, v___x_950_);
v___x_952_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_952_, 0, v___x_945_);
return v___x_952_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg___boxed(lean_object* v_mvarId_957_, lean_object* v_val_958_, lean_object* v___y_959_, lean_object* v___y_960_){
_start:
{
lean_object* v_res_961_; 
v_res_961_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_957_, v_val_958_, v___y_959_);
lean_dec(v___y_959_);
return v_res_961_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2(lean_object* v_mvarId_962_, lean_object* v___x_963_, lean_object* v_motiveType_964_, lean_object* v___f_965_, lean_object* v_targets_966_, lean_object* v___y_967_, lean_object* v___y_968_, lean_object* v___y_969_, lean_object* v___y_970_){
_start:
{
lean_object* v___x_972_; 
lean_inc(v_mvarId_962_);
v___x_972_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_962_, v___x_963_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_972_) == 0)
{
uint8_t v___x_973_; lean_object* v___x_974_; 
lean_dec_ref_known(v___x_972_, 1);
v___x_973_ = 0;
v___x_974_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_motiveType_964_, v___f_965_, v___x_973_, v___x_973_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_974_) == 0)
{
lean_object* v_a_975_; lean_object* v_fst_976_; lean_object* v_snd_977_; lean_object* v___x_978_; 
v_a_975_ = lean_ctor_get(v___x_974_, 0);
lean_inc(v_a_975_);
lean_dec_ref_known(v___x_974_, 1);
v_fst_976_ = lean_ctor_get(v_a_975_, 0);
lean_inc(v_fst_976_);
v_snd_977_ = lean_ctor_get(v_a_975_, 1);
lean_inc(v_snd_977_);
lean_dec(v_a_975_);
lean_inc(v_mvarId_962_);
v___x_978_ = l_Lean_MVarId_getTag(v_mvarId_962_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v_a_979_; lean_object* v___x_980_; 
v_a_979_ = lean_ctor_get(v___x_978_, 0);
lean_inc(v_a_979_);
lean_dec_ref_known(v___x_978_, 1);
v___x_980_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_fst_976_, v_a_979_, v___y_967_, v___y_968_, v___y_969_, v___y_970_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v_a_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_986_; uint8_t v_isShared_987_; uint8_t v_isSharedCheck_992_; 
v_a_981_ = lean_ctor_get(v___x_980_, 0);
lean_inc_n(v_a_981_, 2);
lean_dec_ref_known(v___x_980_, 1);
v___x_982_ = l_Lean_mkAppN(v_a_981_, v_targets_966_);
v___x_983_ = l_Lean_mkAppN(v___x_982_, v_snd_977_);
lean_dec(v_snd_977_);
v___x_984_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_962_, v___x_983_, v___y_968_);
v_isSharedCheck_992_ = !lean_is_exclusive(v___x_984_);
if (v_isSharedCheck_992_ == 0)
{
lean_object* v_unused_993_; 
v_unused_993_ = lean_ctor_get(v___x_984_, 0);
lean_dec(v_unused_993_);
v___x_986_ = v___x_984_;
v_isShared_987_ = v_isSharedCheck_992_;
goto v_resetjp_985_;
}
else
{
lean_dec(v___x_984_);
v___x_986_ = lean_box(0);
v_isShared_987_ = v_isSharedCheck_992_;
goto v_resetjp_985_;
}
v_resetjp_985_:
{
lean_object* v___x_988_; lean_object* v___x_990_; 
v___x_988_ = l_Lean_Expr_mvarId_x21(v_a_981_);
lean_dec(v_a_981_);
if (v_isShared_987_ == 0)
{
lean_ctor_set(v___x_986_, 0, v___x_988_);
v___x_990_ = v___x_986_;
goto v_reusejp_989_;
}
else
{
lean_object* v_reuseFailAlloc_991_; 
v_reuseFailAlloc_991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_991_, 0, v___x_988_);
v___x_990_ = v_reuseFailAlloc_991_;
goto v_reusejp_989_;
}
v_reusejp_989_:
{
return v___x_990_;
}
}
}
else
{
lean_object* v_a_994_; lean_object* v___x_996_; uint8_t v_isShared_997_; uint8_t v_isSharedCheck_1001_; 
lean_dec(v_snd_977_);
lean_dec(v_mvarId_962_);
v_a_994_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_996_ = v___x_980_;
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
else
{
lean_inc(v_a_994_);
lean_dec(v___x_980_);
v___x_996_ = lean_box(0);
v_isShared_997_ = v_isSharedCheck_1001_;
goto v_resetjp_995_;
}
v_resetjp_995_:
{
lean_object* v___x_999_; 
if (v_isShared_997_ == 0)
{
v___x_999_ = v___x_996_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v_a_994_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
lean_dec(v_snd_977_);
lean_dec(v_fst_976_);
lean_dec(v_mvarId_962_);
v_a_1002_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_978_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_978_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_mvarId_962_);
v_a_1010_ = lean_ctor_get(v___x_974_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_974_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_974_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_974_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
lean_dec_ref(v___f_965_);
lean_dec_ref(v_motiveType_964_);
lean_dec(v_mvarId_962_);
v_a_1018_ = lean_ctor_get(v___x_972_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_972_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_972_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_972_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___lam__2___boxed(lean_object* v_mvarId_1026_, lean_object* v___x_1027_, lean_object* v_motiveType_1028_, lean_object* v___f_1029_, lean_object* v_targets_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v_res_1036_; 
v_res_1036_ = l_Lean_Meta_generalizeTargetsEq___lam__2(v_mvarId_1026_, v___x_1027_, v_motiveType_1028_, v___f_1029_, v_targets_1030_, v___y_1031_, v___y_1032_, v___y_1033_, v___y_1034_);
lean_dec(v___y_1034_);
lean_dec_ref(v___y_1033_);
lean_dec(v___y_1032_);
lean_dec_ref(v___y_1031_);
lean_dec_ref(v_targets_1030_);
return v_res_1036_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq(lean_object* v_mvarId_1040_, lean_object* v_motiveType_1041_, lean_object* v_targets_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_, lean_object* v_a_1045_, lean_object* v_a_1046_){
_start:
{
lean_object* v___f_1048_; lean_object* v___x_1049_; lean_object* v___f_1050_; lean_object* v___x_1051_; 
lean_inc_n(v_mvarId_1040_, 2);
lean_inc_ref(v_targets_1042_);
v___f_1048_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__1___boxed), 9, 2);
lean_closure_set(v___f_1048_, 0, v_targets_1042_);
lean_closure_set(v___f_1048_, 1, v_mvarId_1040_);
v___x_1049_ = ((lean_object*)(l_Lean_Meta_generalizeTargetsEq___closed__1));
v___f_1050_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeTargetsEq___lam__2___boxed), 10, 5);
lean_closure_set(v___f_1050_, 0, v_mvarId_1040_);
lean_closure_set(v___f_1050_, 1, v___x_1049_);
lean_closure_set(v___f_1050_, 2, v_motiveType_1041_);
lean_closure_set(v___f_1050_, 3, v___f_1048_);
lean_closure_set(v___f_1050_, 4, v_targets_1042_);
v___x_1051_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1040_, v___f_1050_, v_a_1043_, v_a_1044_, v_a_1045_, v_a_1046_);
return v___x_1051_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeTargetsEq___boxed(lean_object* v_mvarId_1052_, lean_object* v_motiveType_1053_, lean_object* v_targets_1054_, lean_object* v_a_1055_, lean_object* v_a_1056_, lean_object* v_a_1057_, lean_object* v_a_1058_, lean_object* v_a_1059_){
_start:
{
lean_object* v_res_1060_; 
v_res_1060_ = l_Lean_Meta_generalizeTargetsEq(v_mvarId_1052_, v_motiveType_1053_, v_targets_1054_, v_a_1055_, v_a_1056_, v_a_1057_, v_a_1058_);
lean_dec(v_a_1058_);
lean_dec_ref(v_a_1057_);
lean_dec(v_a_1056_);
lean_dec_ref(v_a_1055_);
return v_res_1060_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(lean_object* v_mvarId_1061_, lean_object* v_val_1062_, lean_object* v___y_1063_, lean_object* v___y_1064_, lean_object* v___y_1065_, lean_object* v___y_1066_){
_start:
{
lean_object* v___x_1068_; 
v___x_1068_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_1061_, v_val_1062_, v___y_1064_);
return v___x_1068_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___boxed(lean_object* v_mvarId_1069_, lean_object* v_val_1070_, lean_object* v___y_1071_, lean_object* v___y_1072_, lean_object* v___y_1073_, lean_object* v___y_1074_, lean_object* v___y_1075_){
_start:
{
lean_object* v_res_1076_; 
v_res_1076_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1(v_mvarId_1069_, v_val_1070_, v___y_1071_, v___y_1072_, v___y_1073_, v___y_1074_);
lean_dec(v___y_1074_);
lean_dec_ref(v___y_1073_);
lean_dec(v___y_1072_);
lean_dec_ref(v___y_1071_);
return v_res_1076_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1(lean_object* v_00_u03b2_1077_, lean_object* v_x_1078_, lean_object* v_x_1079_, lean_object* v_x_1080_){
_start:
{
lean_object* v___x_1081_; 
v___x_1081_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1___redArg(v_x_1078_, v_x_1079_, v_x_1080_);
return v___x_1081_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_1082_, lean_object* v_x_1083_, size_t v_x_1084_, size_t v_x_1085_, lean_object* v_x_1086_, lean_object* v_x_1087_){
_start:
{
lean_object* v___x_1088_; 
v___x_1088_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___redArg(v_x_1083_, v_x_1084_, v_x_1085_, v_x_1086_, v_x_1087_);
return v___x_1088_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_1089_, lean_object* v_x_1090_, lean_object* v_x_1091_, lean_object* v_x_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_){
_start:
{
size_t v_x_3013__boxed_1095_; size_t v_x_3014__boxed_1096_; lean_object* v_res_1097_; 
v_x_3013__boxed_1095_ = lean_unbox_usize(v_x_1091_);
lean_dec(v_x_1091_);
v_x_3014__boxed_1096_ = lean_unbox_usize(v_x_1092_);
lean_dec(v_x_1092_);
v_res_1097_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3(v_00_u03b2_1089_, v_x_1090_, v_x_3013__boxed_1095_, v_x_3014__boxed_1096_, v_x_1093_, v_x_1094_);
return v_res_1097_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_1098_, lean_object* v_n_1099_, lean_object* v_k_1100_, lean_object* v_v_1101_){
_start:
{
lean_object* v___x_1102_; 
v___x_1102_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4___redArg(v_n_1099_, v_k_1100_, v_v_1101_);
return v___x_1102_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_1103_, size_t v_depth_1104_, lean_object* v_keys_1105_, lean_object* v_vals_1106_, lean_object* v_heq_1107_, lean_object* v_i_1108_, lean_object* v_entries_1109_){
_start:
{
lean_object* v___x_1110_; 
v___x_1110_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_1104_, v_keys_1105_, v_vals_1106_, v_i_1108_, v_entries_1109_);
return v___x_1110_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_1111_, lean_object* v_depth_1112_, lean_object* v_keys_1113_, lean_object* v_vals_1114_, lean_object* v_heq_1115_, lean_object* v_i_1116_, lean_object* v_entries_1117_){
_start:
{
size_t v_depth_boxed_1118_; lean_object* v_res_1119_; 
v_depth_boxed_1118_ = lean_unbox_usize(v_depth_1112_);
lean_dec(v_depth_1112_);
v_res_1119_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_1111_, v_depth_boxed_1118_, v_keys_1113_, v_vals_1114_, v_heq_1115_, v_i_1116_, v_entries_1117_);
lean_dec_ref(v_vals_1114_);
lean_dec_ref(v_keys_1113_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_1120_, lean_object* v_x_1121_, lean_object* v_x_1122_, lean_object* v_x_1123_, lean_object* v_x_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_1121_, v_x_1122_, v_x_1123_, v_x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(lean_object* v_newEqs_1126_, lean_object* v_mvarId_1127_, uint8_t v___x_1128_, lean_object* v_h_x27_1129_, lean_object* v_newIndices_1130_, lean_object* v___x_1131_, lean_object* v___x_1132_, lean_object* v___x_1133_, lean_object* v___x_1134_, lean_object* v_e_1135_, lean_object* v___x_1136_, lean_object* v_newEq_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_){
_start:
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_array_push(v_newEqs_1126_, v_newEq_1137_);
lean_inc(v_mvarId_1127_);
v___x_1144_ = l_Lean_MVarId_getType(v_mvarId_1127_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1144_) == 0)
{
lean_object* v_a_1145_; lean_object* v___x_1146_; 
v_a_1145_ = lean_ctor_get(v___x_1144_, 0);
lean_inc(v_a_1145_);
lean_dec_ref_known(v___x_1144_, 1);
lean_inc(v_mvarId_1127_);
v___x_1146_ = l_Lean_MVarId_getTag(v_mvarId_1127_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1146_) == 0)
{
lean_object* v_a_1147_; uint8_t v___x_1148_; uint8_t v___x_1149_; lean_object* v___x_1150_; 
v_a_1147_ = lean_ctor_get(v___x_1146_, 0);
lean_inc(v_a_1147_);
lean_dec_ref_known(v___x_1146_, 1);
v___x_1148_ = 1;
v___x_1149_ = 1;
v___x_1150_ = l_Lean_Meta_mkForallFVars(v___x_1143_, v_a_1145_, v___x_1128_, v___x_1148_, v___x_1148_, v___x_1149_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1150_) == 0)
{
lean_object* v_a_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v_a_1151_ = lean_ctor_get(v___x_1150_, 0);
lean_inc(v_a_1151_);
lean_dec_ref_known(v___x_1150_, 1);
v___x_1152_ = lean_unsigned_to_nat(1u);
v___x_1153_ = lean_mk_empty_array_with_capacity(v___x_1152_);
v___x_1154_ = lean_array_push(v___x_1153_, v_h_x27_1129_);
v___x_1155_ = l_Lean_Meta_mkForallFVars(v___x_1154_, v_a_1151_, v___x_1128_, v___x_1148_, v___x_1148_, v___x_1149_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
lean_dec_ref(v___x_1154_);
if (lean_obj_tag(v___x_1155_) == 0)
{
lean_object* v_a_1156_; lean_object* v___x_1157_; 
v_a_1156_ = lean_ctor_get(v___x_1155_, 0);
lean_inc(v_a_1156_);
lean_dec_ref_known(v___x_1155_, 1);
v___x_1157_ = l_Lean_Meta_mkForallFVars(v_newIndices_1130_, v_a_1156_, v___x_1128_, v___x_1148_, v___x_1148_, v___x_1149_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1157_) == 0)
{
lean_object* v_a_1158_; uint8_t v___x_1159_; lean_object* v___x_1160_; 
v_a_1158_ = lean_ctor_get(v___x_1157_, 0);
lean_inc(v_a_1158_);
lean_dec_ref_known(v___x_1157_, 1);
v___x_1159_ = 2;
v___x_1160_ = l_Lean_Meta_mkFreshExprMVarAt(v___x_1131_, v___x_1132_, v_a_1158_, v___x_1159_, v_a_1147_, v___x_1133_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1160_) == 0)
{
lean_object* v_a_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; 
v_a_1161_ = lean_ctor_get(v___x_1160_, 0);
lean_inc_n(v_a_1161_, 2);
lean_dec_ref_known(v___x_1160_, 1);
v___x_1162_ = l_Lean_mkAppN(v_a_1161_, v___x_1134_);
v___x_1163_ = l_Lean_Expr_app___override(v___x_1162_, v_e_1135_);
v___x_1164_ = l_Lean_mkAppN(v___x_1163_, v___x_1136_);
v___x_1165_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_1127_, v___x_1164_, v___y_1139_);
lean_dec_ref(v___x_1165_);
v___x_1166_ = l_Lean_Expr_mvarId_x21(v_a_1161_);
lean_dec(v_a_1161_);
v___x_1167_ = lean_array_get_size(v_newIndices_1130_);
v___x_1168_ = lean_box(0);
v___x_1169_ = l_Lean_Meta_introNCore(v___x_1166_, v___x_1167_, v___x_1168_, v___x_1128_, v___x_1148_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; lean_object* v_fst_1171_; lean_object* v_snd_1172_; lean_object* v___x_1173_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 0);
lean_inc(v_a_1170_);
lean_dec_ref_known(v___x_1169_, 1);
v_fst_1171_ = lean_ctor_get(v_a_1170_, 0);
lean_inc(v_fst_1171_);
v_snd_1172_ = lean_ctor_get(v_a_1170_, 1);
lean_inc(v_snd_1172_);
lean_dec(v_a_1170_);
v___x_1173_ = l_Lean_Meta_intro1Core(v_snd_1172_, v___x_1148_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_);
if (lean_obj_tag(v___x_1173_) == 0)
{
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1185_; 
v_a_1174_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1185_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1185_ == 0)
{
v___x_1176_ = v___x_1173_;
v_isShared_1177_ = v_isSharedCheck_1185_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1173_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1185_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
lean_object* v_fst_1178_; lean_object* v_snd_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1183_; 
v_fst_1178_ = lean_ctor_get(v_a_1174_, 0);
lean_inc(v_fst_1178_);
v_snd_1179_ = lean_ctor_get(v_a_1174_, 1);
lean_inc(v_snd_1179_);
lean_dec(v_a_1174_);
v___x_1180_ = lean_array_get_size(v___x_1143_);
lean_dec_ref(v___x_1143_);
v___x_1181_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1181_, 0, v_snd_1179_);
lean_ctor_set(v___x_1181_, 1, v_fst_1171_);
lean_ctor_set(v___x_1181_, 2, v_fst_1178_);
lean_ctor_set(v___x_1181_, 3, v___x_1180_);
if (v_isShared_1177_ == 0)
{
lean_ctor_set(v___x_1176_, 0, v___x_1181_);
v___x_1183_ = v___x_1176_;
goto v_reusejp_1182_;
}
else
{
lean_object* v_reuseFailAlloc_1184_; 
v_reuseFailAlloc_1184_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1184_, 0, v___x_1181_);
v___x_1183_ = v_reuseFailAlloc_1184_;
goto v_reusejp_1182_;
}
v_reusejp_1182_:
{
return v___x_1183_;
}
}
}
else
{
lean_object* v_a_1186_; lean_object* v___x_1188_; uint8_t v_isShared_1189_; uint8_t v_isSharedCheck_1193_; 
lean_dec(v_fst_1171_);
lean_dec_ref(v___x_1143_);
v_a_1186_ = lean_ctor_get(v___x_1173_, 0);
v_isSharedCheck_1193_ = !lean_is_exclusive(v___x_1173_);
if (v_isSharedCheck_1193_ == 0)
{
v___x_1188_ = v___x_1173_;
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
else
{
lean_inc(v_a_1186_);
lean_dec(v___x_1173_);
v___x_1188_ = lean_box(0);
v_isShared_1189_ = v_isSharedCheck_1193_;
goto v_resetjp_1187_;
}
v_resetjp_1187_:
{
lean_object* v___x_1191_; 
if (v_isShared_1189_ == 0)
{
v___x_1191_ = v___x_1188_;
goto v_reusejp_1190_;
}
else
{
lean_object* v_reuseFailAlloc_1192_; 
v_reuseFailAlloc_1192_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1192_, 0, v_a_1186_);
v___x_1191_ = v_reuseFailAlloc_1192_;
goto v_reusejp_1190_;
}
v_reusejp_1190_:
{
return v___x_1191_;
}
}
}
}
else
{
lean_object* v_a_1194_; lean_object* v___x_1196_; uint8_t v_isShared_1197_; uint8_t v_isSharedCheck_1201_; 
lean_dec_ref(v___x_1143_);
v_a_1194_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1201_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1201_ == 0)
{
v___x_1196_ = v___x_1169_;
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
else
{
lean_inc(v_a_1194_);
lean_dec(v___x_1169_);
v___x_1196_ = lean_box(0);
v_isShared_1197_ = v_isSharedCheck_1201_;
goto v_resetjp_1195_;
}
v_resetjp_1195_:
{
lean_object* v___x_1199_; 
if (v_isShared_1197_ == 0)
{
v___x_1199_ = v___x_1196_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1194_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
}
else
{
lean_object* v_a_1202_; lean_object* v___x_1204_; uint8_t v_isShared_1205_; uint8_t v_isSharedCheck_1209_; 
lean_dec_ref(v___x_1143_);
lean_dec_ref(v_e_1135_);
lean_dec(v_mvarId_1127_);
v_a_1202_ = lean_ctor_get(v___x_1160_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v___x_1160_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1204_ = v___x_1160_;
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
else
{
lean_inc(v_a_1202_);
lean_dec(v___x_1160_);
v___x_1204_ = lean_box(0);
v_isShared_1205_ = v_isSharedCheck_1209_;
goto v_resetjp_1203_;
}
v_resetjp_1203_:
{
lean_object* v___x_1207_; 
if (v_isShared_1205_ == 0)
{
v___x_1207_ = v___x_1204_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v_a_1202_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
return v___x_1207_;
}
}
}
}
else
{
lean_object* v_a_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1217_; 
lean_dec(v_a_1147_);
lean_dec_ref(v___x_1143_);
lean_dec_ref(v_e_1135_);
lean_dec(v___x_1133_);
lean_dec_ref(v___x_1132_);
lean_dec_ref(v___x_1131_);
lean_dec(v_mvarId_1127_);
v_a_1210_ = lean_ctor_get(v___x_1157_, 0);
v_isSharedCheck_1217_ = !lean_is_exclusive(v___x_1157_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1212_ = v___x_1157_;
v_isShared_1213_ = v_isSharedCheck_1217_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_a_1210_);
lean_dec(v___x_1157_);
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
else
{
lean_object* v_a_1218_; lean_object* v___x_1220_; uint8_t v_isShared_1221_; uint8_t v_isSharedCheck_1225_; 
lean_dec(v_a_1147_);
lean_dec_ref(v___x_1143_);
lean_dec_ref(v_e_1135_);
lean_dec(v___x_1133_);
lean_dec_ref(v___x_1132_);
lean_dec_ref(v___x_1131_);
lean_dec(v_mvarId_1127_);
v_a_1218_ = lean_ctor_get(v___x_1155_, 0);
v_isSharedCheck_1225_ = !lean_is_exclusive(v___x_1155_);
if (v_isSharedCheck_1225_ == 0)
{
v___x_1220_ = v___x_1155_;
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
else
{
lean_inc(v_a_1218_);
lean_dec(v___x_1155_);
v___x_1220_ = lean_box(0);
v_isShared_1221_ = v_isSharedCheck_1225_;
goto v_resetjp_1219_;
}
v_resetjp_1219_:
{
lean_object* v___x_1223_; 
if (v_isShared_1221_ == 0)
{
v___x_1223_ = v___x_1220_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1224_; 
v_reuseFailAlloc_1224_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1224_, 0, v_a_1218_);
v___x_1223_ = v_reuseFailAlloc_1224_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
return v___x_1223_;
}
}
}
}
else
{
lean_object* v_a_1226_; lean_object* v___x_1228_; uint8_t v_isShared_1229_; uint8_t v_isSharedCheck_1233_; 
lean_dec(v_a_1147_);
lean_dec_ref(v___x_1143_);
lean_dec_ref(v_e_1135_);
lean_dec(v___x_1133_);
lean_dec_ref(v___x_1132_);
lean_dec_ref(v___x_1131_);
lean_dec_ref(v_h_x27_1129_);
lean_dec(v_mvarId_1127_);
v_a_1226_ = lean_ctor_get(v___x_1150_, 0);
v_isSharedCheck_1233_ = !lean_is_exclusive(v___x_1150_);
if (v_isSharedCheck_1233_ == 0)
{
v___x_1228_ = v___x_1150_;
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
else
{
lean_inc(v_a_1226_);
lean_dec(v___x_1150_);
v___x_1228_ = lean_box(0);
v_isShared_1229_ = v_isSharedCheck_1233_;
goto v_resetjp_1227_;
}
v_resetjp_1227_:
{
lean_object* v___x_1231_; 
if (v_isShared_1229_ == 0)
{
v___x_1231_ = v___x_1228_;
goto v_reusejp_1230_;
}
else
{
lean_object* v_reuseFailAlloc_1232_; 
v_reuseFailAlloc_1232_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1232_, 0, v_a_1226_);
v___x_1231_ = v_reuseFailAlloc_1232_;
goto v_reusejp_1230_;
}
v_reusejp_1230_:
{
return v___x_1231_;
}
}
}
}
else
{
lean_object* v_a_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1241_; 
lean_dec(v_a_1145_);
lean_dec_ref(v___x_1143_);
lean_dec_ref(v_e_1135_);
lean_dec(v___x_1133_);
lean_dec_ref(v___x_1132_);
lean_dec_ref(v___x_1131_);
lean_dec_ref(v_h_x27_1129_);
lean_dec(v_mvarId_1127_);
v_a_1234_ = lean_ctor_get(v___x_1146_, 0);
v_isSharedCheck_1241_ = !lean_is_exclusive(v___x_1146_);
if (v_isSharedCheck_1241_ == 0)
{
v___x_1236_ = v___x_1146_;
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_a_1234_);
lean_dec(v___x_1146_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1241_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1239_; 
if (v_isShared_1237_ == 0)
{
v___x_1239_ = v___x_1236_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_a_1234_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
}
}
else
{
lean_object* v_a_1242_; lean_object* v___x_1244_; uint8_t v_isShared_1245_; uint8_t v_isSharedCheck_1249_; 
lean_dec_ref(v___x_1143_);
lean_dec_ref(v_e_1135_);
lean_dec(v___x_1133_);
lean_dec_ref(v___x_1132_);
lean_dec_ref(v___x_1131_);
lean_dec_ref(v_h_x27_1129_);
lean_dec(v_mvarId_1127_);
v_a_1242_ = lean_ctor_get(v___x_1144_, 0);
v_isSharedCheck_1249_ = !lean_is_exclusive(v___x_1144_);
if (v_isSharedCheck_1249_ == 0)
{
v___x_1244_ = v___x_1144_;
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
else
{
lean_inc(v_a_1242_);
lean_dec(v___x_1144_);
v___x_1244_ = lean_box(0);
v_isShared_1245_ = v_isSharedCheck_1249_;
goto v_resetjp_1243_;
}
v_resetjp_1243_:
{
lean_object* v___x_1247_; 
if (v_isShared_1245_ == 0)
{
v___x_1247_ = v___x_1244_;
goto v_reusejp_1246_;
}
else
{
lean_object* v_reuseFailAlloc_1248_; 
v_reuseFailAlloc_1248_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1248_, 0, v_a_1242_);
v___x_1247_ = v_reuseFailAlloc_1248_;
goto v_reusejp_1246_;
}
v_reusejp_1246_:
{
return v___x_1247_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed(lean_object** _args){
lean_object* v_newEqs_1250_ = _args[0];
lean_object* v_mvarId_1251_ = _args[1];
lean_object* v___x_1252_ = _args[2];
lean_object* v_h_x27_1253_ = _args[3];
lean_object* v_newIndices_1254_ = _args[4];
lean_object* v___x_1255_ = _args[5];
lean_object* v___x_1256_ = _args[6];
lean_object* v___x_1257_ = _args[7];
lean_object* v___x_1258_ = _args[8];
lean_object* v_e_1259_ = _args[9];
lean_object* v___x_1260_ = _args[10];
lean_object* v_newEq_1261_ = _args[11];
lean_object* v___y_1262_ = _args[12];
lean_object* v___y_1263_ = _args[13];
lean_object* v___y_1264_ = _args[14];
lean_object* v___y_1265_ = _args[15];
lean_object* v___y_1266_ = _args[16];
_start:
{
uint8_t v___x_6385__boxed_1267_; lean_object* v_res_1268_; 
v___x_6385__boxed_1267_ = lean_unbox(v___x_1252_);
v_res_1268_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0(v_newEqs_1250_, v_mvarId_1251_, v___x_6385__boxed_1267_, v_h_x27_1253_, v_newIndices_1254_, v___x_1255_, v___x_1256_, v___x_1257_, v___x_1258_, v_e_1259_, v___x_1260_, v_newEq_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
lean_dec(v___y_1265_);
lean_dec_ref(v___y_1264_);
lean_dec(v___y_1263_);
lean_dec_ref(v___y_1262_);
lean_dec_ref(v___x_1260_);
lean_dec_ref(v___x_1258_);
lean_dec_ref(v_newIndices_1254_);
return v_res_1268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(lean_object* v_e_1269_, lean_object* v_h_x27_1270_, lean_object* v_mvarId_1271_, uint8_t v___x_1272_, lean_object* v_newIndices_1273_, lean_object* v___x_1274_, lean_object* v___x_1275_, lean_object* v___x_1276_, lean_object* v___x_1277_, lean_object* v_newEqs_1278_, lean_object* v_newRefls_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v___x_1285_; 
lean_inc_ref(v_h_x27_1270_);
lean_inc_ref(v_e_1269_);
v___x_1285_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof(v_e_1269_, v_h_x27_1270_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v_fst_1287_; lean_object* v_snd_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; lean_object* v___f_1291_; lean_object* v___x_1292_; lean_object* v___x_1293_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
lean_inc(v_a_1286_);
lean_dec_ref_known(v___x_1285_, 1);
v_fst_1287_ = lean_ctor_get(v_a_1286_, 0);
lean_inc(v_fst_1287_);
v_snd_1288_ = lean_ctor_get(v_a_1286_, 1);
lean_inc(v_snd_1288_);
lean_dec(v_a_1286_);
v___x_1289_ = lean_array_push(v_newRefls_1279_, v_snd_1288_);
v___x_1290_ = lean_box(v___x_1272_);
v___f_1291_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__0___boxed), 17, 11);
lean_closure_set(v___f_1291_, 0, v_newEqs_1278_);
lean_closure_set(v___f_1291_, 1, v_mvarId_1271_);
lean_closure_set(v___f_1291_, 2, v___x_1290_);
lean_closure_set(v___f_1291_, 3, v_h_x27_1270_);
lean_closure_set(v___f_1291_, 4, v_newIndices_1273_);
lean_closure_set(v___f_1291_, 5, v___x_1274_);
lean_closure_set(v___f_1291_, 6, v___x_1275_);
lean_closure_set(v___f_1291_, 7, v___x_1276_);
lean_closure_set(v___f_1291_, 8, v___x_1277_);
lean_closure_set(v___f_1291_, 9, v_e_1269_);
lean_closure_set(v___f_1291_, 10, v___x_1289_);
v___x_1292_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop___redArg___closed__1));
v___x_1293_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v___x_1292_, v_fst_1287_, v___f_1291_, v___y_1280_, v___y_1281_, v___y_1282_, v___y_1283_);
return v___x_1293_;
}
else
{
lean_object* v_a_1294_; lean_object* v___x_1296_; uint8_t v_isShared_1297_; uint8_t v_isSharedCheck_1301_; 
lean_dec_ref(v_newRefls_1279_);
lean_dec_ref(v_newEqs_1278_);
lean_dec_ref(v___x_1277_);
lean_dec(v___x_1276_);
lean_dec_ref(v___x_1275_);
lean_dec_ref(v___x_1274_);
lean_dec_ref(v_newIndices_1273_);
lean_dec(v_mvarId_1271_);
lean_dec_ref(v_h_x27_1270_);
lean_dec_ref(v_e_1269_);
v_a_1294_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1301_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1301_ == 0)
{
v___x_1296_ = v___x_1285_;
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
else
{
lean_inc(v_a_1294_);
lean_dec(v___x_1285_);
v___x_1296_ = lean_box(0);
v_isShared_1297_ = v_isSharedCheck_1301_;
goto v_resetjp_1295_;
}
v_resetjp_1295_:
{
lean_object* v___x_1299_; 
if (v_isShared_1297_ == 0)
{
v___x_1299_ = v___x_1296_;
goto v_reusejp_1298_;
}
else
{
lean_object* v_reuseFailAlloc_1300_; 
v_reuseFailAlloc_1300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1300_, 0, v_a_1294_);
v___x_1299_ = v_reuseFailAlloc_1300_;
goto v_reusejp_1298_;
}
v_reusejp_1298_:
{
return v___x_1299_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed(lean_object* v_e_1302_, lean_object* v_h_x27_1303_, lean_object* v_mvarId_1304_, lean_object* v___x_1305_, lean_object* v_newIndices_1306_, lean_object* v___x_1307_, lean_object* v___x_1308_, lean_object* v___x_1309_, lean_object* v___x_1310_, lean_object* v_newEqs_1311_, lean_object* v_newRefls_1312_, lean_object* v___y_1313_, lean_object* v___y_1314_, lean_object* v___y_1315_, lean_object* v___y_1316_, lean_object* v___y_1317_){
_start:
{
uint8_t v___x_6637__boxed_1318_; lean_object* v_res_1319_; 
v___x_6637__boxed_1318_ = lean_unbox(v___x_1305_);
v_res_1319_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1(v_e_1302_, v_h_x27_1303_, v_mvarId_1304_, v___x_6637__boxed_1318_, v_newIndices_1306_, v___x_1307_, v___x_1308_, v___x_1309_, v___x_1310_, v_newEqs_1311_, v_newRefls_1312_, v___y_1313_, v___y_1314_, v___y_1315_, v___y_1316_);
lean_dec(v___y_1316_);
lean_dec_ref(v___y_1315_);
lean_dec(v___y_1314_);
lean_dec_ref(v___y_1313_);
return v_res_1319_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(lean_object* v_e_1320_, lean_object* v_mvarId_1321_, uint8_t v___x_1322_, lean_object* v_newIndices_1323_, lean_object* v___x_1324_, lean_object* v___x_1325_, lean_object* v___x_1326_, lean_object* v___x_1327_, lean_object* v_h_x27_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_){
_start:
{
lean_object* v___x_1334_; lean_object* v___f_1335_; lean_object* v___x_1336_; 
v___x_1334_ = lean_box(v___x_1322_);
lean_inc_ref(v___x_1327_);
lean_inc_ref(v_newIndices_1323_);
v___f_1335_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__1___boxed), 16, 9);
lean_closure_set(v___f_1335_, 0, v_e_1320_);
lean_closure_set(v___f_1335_, 1, v_h_x27_1328_);
lean_closure_set(v___f_1335_, 2, v_mvarId_1321_);
lean_closure_set(v___f_1335_, 3, v___x_1334_);
lean_closure_set(v___f_1335_, 4, v_newIndices_1323_);
lean_closure_set(v___f_1335_, 5, v___x_1324_);
lean_closure_set(v___f_1335_, 6, v___x_1325_);
lean_closure_set(v___f_1335_, 7, v___x_1326_);
lean_closure_set(v___f_1335_, 8, v___x_1327_);
v___x_1336_ = l_Lean_Meta_withNewEqs___redArg(v___x_1327_, v_newIndices_1323_, v___f_1335_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_);
return v___x_1336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed(lean_object* v_e_1337_, lean_object* v_mvarId_1338_, lean_object* v___x_1339_, lean_object* v_newIndices_1340_, lean_object* v___x_1341_, lean_object* v___x_1342_, lean_object* v___x_1343_, lean_object* v___x_1344_, lean_object* v_h_x27_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_){
_start:
{
uint8_t v___x_6702__boxed_1351_; lean_object* v_res_1352_; 
v___x_6702__boxed_1351_ = lean_unbox(v___x_1339_);
v_res_1352_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2(v_e_1337_, v_mvarId_1338_, v___x_6702__boxed_1351_, v_newIndices_1340_, v___x_1341_, v___x_1342_, v___x_1343_, v___x_1344_, v_h_x27_1345_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_);
lean_dec(v___y_1349_);
lean_dec_ref(v___y_1348_);
lean_dec(v___y_1347_);
lean_dec_ref(v___y_1346_);
return v_res_1352_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(lean_object* v_e_1356_, lean_object* v_mvarId_1357_, uint8_t v___x_1358_, lean_object* v___x_1359_, lean_object* v___x_1360_, lean_object* v___x_1361_, lean_object* v___x_1362_, lean_object* v___x_1363_, lean_object* v_varName_x3f_1364_, lean_object* v_newIndices_1365_, lean_object* v_x_1366_, lean_object* v___y_1367_, lean_object* v___y_1368_, lean_object* v___y_1369_, lean_object* v___y_1370_){
_start:
{
lean_object* v___x_1372_; lean_object* v___f_1373_; lean_object* v___x_1374_; 
v___x_1372_ = lean_box(v___x_1358_);
lean_inc_ref(v_newIndices_1365_);
v___f_1373_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__2___boxed), 14, 8);
lean_closure_set(v___f_1373_, 0, v_e_1356_);
lean_closure_set(v___f_1373_, 1, v_mvarId_1357_);
lean_closure_set(v___f_1373_, 2, v___x_1372_);
lean_closure_set(v___f_1373_, 3, v_newIndices_1365_);
lean_closure_set(v___f_1373_, 4, v___x_1359_);
lean_closure_set(v___f_1373_, 5, v___x_1360_);
lean_closure_set(v___f_1373_, 6, v___x_1361_);
lean_closure_set(v___f_1373_, 7, v___x_1362_);
v___x_1374_ = l_Lean_mkAppN(v___x_1363_, v_newIndices_1365_);
lean_dec_ref(v_newIndices_1365_);
if (lean_obj_tag(v_varName_x3f_1364_) == 1)
{
lean_object* v_val_1375_; lean_object* v___x_1376_; 
v_val_1375_ = lean_ctor_get(v_varName_x3f_1364_, 0);
lean_inc(v_val_1375_);
lean_dec_ref_known(v_varName_x3f_1364_, 1);
v___x_1376_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_val_1375_, v___x_1374_, v___f_1373_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
return v___x_1376_;
}
else
{
lean_object* v___x_1377_; lean_object* v___x_1378_; 
lean_dec(v_varName_x3f_1364_);
v___x_1377_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___closed__1));
v___x_1378_ = l_Lean_Core_mkFreshUserName(v___x_1377_, v___y_1369_, v___y_1370_);
if (lean_obj_tag(v___x_1378_) == 0)
{
lean_object* v_a_1379_; lean_object* v___x_1380_; 
v_a_1379_ = lean_ctor_get(v___x_1378_, 0);
lean_inc(v_a_1379_);
lean_dec_ref_known(v___x_1378_, 1);
v___x_1380_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_a_1379_, v___x_1374_, v___f_1373_, v___y_1367_, v___y_1368_, v___y_1369_, v___y_1370_);
return v___x_1380_;
}
else
{
lean_object* v_a_1381_; lean_object* v___x_1383_; uint8_t v_isShared_1384_; uint8_t v_isSharedCheck_1388_; 
lean_dec_ref(v___x_1374_);
lean_dec_ref(v___f_1373_);
v_a_1381_ = lean_ctor_get(v___x_1378_, 0);
v_isSharedCheck_1388_ = !lean_is_exclusive(v___x_1378_);
if (v_isSharedCheck_1388_ == 0)
{
v___x_1383_ = v___x_1378_;
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
else
{
lean_inc(v_a_1381_);
lean_dec(v___x_1378_);
v___x_1383_ = lean_box(0);
v_isShared_1384_ = v_isSharedCheck_1388_;
goto v_resetjp_1382_;
}
v_resetjp_1382_:
{
lean_object* v___x_1386_; 
if (v_isShared_1384_ == 0)
{
v___x_1386_ = v___x_1383_;
goto v_reusejp_1385_;
}
else
{
lean_object* v_reuseFailAlloc_1387_; 
v_reuseFailAlloc_1387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1387_, 0, v_a_1381_);
v___x_1386_ = v_reuseFailAlloc_1387_;
goto v_reusejp_1385_;
}
v_reusejp_1385_:
{
return v___x_1386_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed(lean_object* v_e_1389_, lean_object* v_mvarId_1390_, lean_object* v___x_1391_, lean_object* v___x_1392_, lean_object* v___x_1393_, lean_object* v___x_1394_, lean_object* v___x_1395_, lean_object* v___x_1396_, lean_object* v_varName_x3f_1397_, lean_object* v_newIndices_1398_, lean_object* v_x_1399_, lean_object* v___y_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
uint8_t v___x_6744__boxed_1405_; lean_object* v_res_1406_; 
v___x_6744__boxed_1405_ = lean_unbox(v___x_1391_);
v_res_1406_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3(v_e_1389_, v_mvarId_1390_, v___x_6744__boxed_1405_, v___x_1392_, v___x_1393_, v___x_1394_, v___x_1395_, v___x_1396_, v_varName_x3f_1397_, v_newIndices_1398_, v_x_1399_, v___y_1400_, v___y_1401_, v___y_1402_, v___y_1403_);
lean_dec(v___y_1403_);
lean_dec_ref(v___y_1402_);
lean_dec(v___y_1401_);
lean_dec_ref(v___y_1400_);
lean_dec_ref(v_x_1399_);
return v_res_1406_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4(void){
_start:
{
lean_object* v___x_1413_; lean_object* v___x_1414_; 
v___x_1413_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__3));
v___x_1414_ = l_Lean_MessageData_ofFormat(v___x_1413_);
return v___x_1414_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5(void){
_start:
{
lean_object* v___x_1415_; lean_object* v___x_1416_; 
v___x_1415_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__4);
v___x_1416_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1415_);
return v___x_1416_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1420_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__7));
v___x_1421_ = l_Lean_MessageData_ofFormat(v___x_1420_);
return v___x_1421_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9(void){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; 
v___x_1422_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__8);
v___x_1423_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1423_, 0, v___x_1422_);
return v___x_1423_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12(void){
_start:
{
lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1427_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__11));
v___x_1428_ = l_Lean_MessageData_ofFormat(v___x_1427_);
return v___x_1428_;
}
}
static lean_object* _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__12);
v___x_1430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1430_, 0, v___x_1429_);
return v___x_1430_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(lean_object* v_mvarId_1431_, lean_object* v_e_1432_, lean_object* v___x_1433_, lean_object* v___x_1434_, lean_object* v_varName_x3f_1435_, lean_object* v_x_1436_, lean_object* v_x_1437_, lean_object* v_x_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
if (lean_obj_tag(v_x_1436_) == 5)
{
lean_object* v_fn_1444_; lean_object* v_arg_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v_fn_1444_ = lean_ctor_get(v_x_1436_, 0);
lean_inc_ref(v_fn_1444_);
v_arg_1445_ = lean_ctor_get(v_x_1436_, 1);
lean_inc_ref(v_arg_1445_);
lean_dec_ref_known(v_x_1436_, 2);
v___x_1446_ = lean_array_set(v_x_1437_, v_x_1438_, v_arg_1445_);
v___x_1447_ = lean_unsigned_to_nat(1u);
v___x_1448_ = lean_nat_sub(v_x_1438_, v___x_1447_);
lean_dec(v_x_1438_);
v_x_1436_ = v_fn_1444_;
v_x_1437_ = v___x_1446_;
v_x_1438_ = v___x_1448_;
goto _start;
}
else
{
lean_object* v___x_1450_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1454_; lean_object* v___y_1455_; 
lean_dec(v_x_1438_);
v___x_1450_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1));
if (lean_obj_tag(v_x_1436_) == 4)
{
lean_object* v_declName_1458_; lean_object* v___x_1459_; lean_object* v_env_1460_; uint8_t v___x_1461_; lean_object* v___x_1462_; 
v_declName_1458_ = lean_ctor_get(v_x_1436_, 0);
v___x_1459_ = lean_st_ref_get(v___y_1442_);
v_env_1460_ = lean_ctor_get(v___x_1459_, 0);
lean_inc_ref(v_env_1460_);
lean_dec(v___x_1459_);
v___x_1461_ = 0;
lean_inc(v_declName_1458_);
v___x_1462_ = l_Lean_Environment_find_x3f(v_env_1460_, v_declName_1458_, v___x_1461_);
if (lean_obj_tag(v___x_1462_) == 0)
{
lean_dec_ref_known(v_x_1436_, 2);
lean_dec_ref(v_x_1437_);
lean_dec(v_varName_x3f_1435_);
lean_dec_ref(v___x_1434_);
lean_dec_ref(v___x_1433_);
lean_dec_ref(v_e_1432_);
v___y_1452_ = v___y_1439_;
v___y_1453_ = v___y_1440_;
v___y_1454_ = v___y_1441_;
v___y_1455_ = v___y_1442_;
goto v___jp_1451_;
}
else
{
lean_object* v_val_1463_; 
v_val_1463_ = lean_ctor_get(v___x_1462_, 0);
lean_inc(v_val_1463_);
lean_dec_ref_known(v___x_1462_, 1);
if (lean_obj_tag(v_val_1463_) == 5)
{
lean_object* v_val_1464_; lean_object* v_numParams_1465_; lean_object* v_numIndices_1466_; lean_object* v___y_1468_; lean_object* v___y_1469_; lean_object* v___y_1470_; lean_object* v___y_1471_; lean_object* v___y_1492_; lean_object* v___y_1493_; lean_object* v___y_1494_; lean_object* v___y_1495_; lean_object* v___x_1509_; uint8_t v___x_1510_; 
v_val_1464_ = lean_ctor_get(v_val_1463_, 0);
lean_inc_ref(v_val_1464_);
lean_dec_ref_known(v_val_1463_, 1);
v_numParams_1465_ = lean_ctor_get(v_val_1464_, 1);
lean_inc(v_numParams_1465_);
v_numIndices_1466_ = lean_ctor_get(v_val_1464_, 2);
lean_inc(v_numIndices_1466_);
lean_dec_ref(v_val_1464_);
v___x_1509_ = lean_unsigned_to_nat(0u);
v___x_1510_ = lean_nat_dec_lt(v___x_1509_, v_numIndices_1466_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; lean_object* v___x_1512_; 
v___x_1511_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__13);
lean_inc(v_mvarId_1431_);
v___x_1512_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1450_, v_mvarId_1431_, v___x_1511_, v___y_1439_, v___y_1440_, v___y_1441_, v___y_1442_);
if (lean_obj_tag(v___x_1512_) == 0)
{
lean_dec_ref_known(v___x_1512_, 1);
v___y_1492_ = v___y_1439_;
v___y_1493_ = v___y_1440_;
v___y_1494_ = v___y_1441_;
v___y_1495_ = v___y_1442_;
goto v___jp_1491_;
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
lean_dec(v_numIndices_1466_);
lean_dec(v_numParams_1465_);
lean_dec_ref_known(v_x_1436_, 2);
lean_dec_ref(v_x_1437_);
lean_dec(v_varName_x3f_1435_);
lean_dec_ref(v___x_1434_);
lean_dec_ref(v___x_1433_);
lean_dec_ref(v_e_1432_);
lean_dec(v_mvarId_1431_);
v_a_1513_ = lean_ctor_get(v___x_1512_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1512_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1512_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1512_);
v___x_1515_ = lean_box(0);
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
v_resetjp_1514_:
{
lean_object* v___x_1518_; 
if (v_isShared_1516_ == 0)
{
v___x_1518_ = v___x_1515_;
goto v_reusejp_1517_;
}
else
{
lean_object* v_reuseFailAlloc_1519_; 
v_reuseFailAlloc_1519_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1519_, 0, v_a_1513_);
v___x_1518_ = v_reuseFailAlloc_1519_;
goto v_reusejp_1517_;
}
v_reusejp_1517_:
{
return v___x_1518_;
}
}
}
}
else
{
v___y_1492_ = v___y_1439_;
v___y_1493_ = v___y_1440_;
v___y_1494_ = v___y_1441_;
v___y_1495_ = v___y_1442_;
goto v___jp_1491_;
}
v___jp_1467_:
{
lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___f_1479_; lean_object* v___x_1480_; 
v___x_1472_ = lean_array_get_size(v_x_1437_);
v___x_1473_ = lean_nat_sub(v___x_1472_, v_numIndices_1466_);
lean_dec(v_numIndices_1466_);
v___x_1474_ = l_Array_extract___redArg(v_x_1437_, v___x_1473_, v___x_1472_);
v___x_1475_ = lean_unsigned_to_nat(0u);
v___x_1476_ = l_Array_extract___redArg(v_x_1437_, v___x_1475_, v_numParams_1465_);
lean_dec_ref(v_x_1437_);
v___x_1477_ = l_Lean_mkAppN(v_x_1436_, v___x_1476_);
lean_dec_ref(v___x_1476_);
v___x_1478_ = lean_box(v___x_1461_);
lean_inc_ref(v___x_1477_);
v___f_1479_ = lean_alloc_closure((void*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___lam__3___boxed), 16, 9);
lean_closure_set(v___f_1479_, 0, v_e_1432_);
lean_closure_set(v___f_1479_, 1, v_mvarId_1431_);
lean_closure_set(v___f_1479_, 2, v___x_1478_);
lean_closure_set(v___f_1479_, 3, v___x_1433_);
lean_closure_set(v___f_1479_, 4, v___x_1434_);
lean_closure_set(v___f_1479_, 5, v___x_1475_);
lean_closure_set(v___f_1479_, 6, v___x_1474_);
lean_closure_set(v___f_1479_, 7, v___x_1477_);
lean_closure_set(v___f_1479_, 8, v_varName_x3f_1435_);
lean_inc(v___y_1471_);
lean_inc_ref(v___y_1470_);
lean_inc(v___y_1469_);
lean_inc_ref(v___y_1468_);
v___x_1480_ = lean_infer_type(v___x_1477_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
if (lean_obj_tag(v___x_1480_) == 0)
{
lean_object* v_a_1481_; lean_object* v___x_1482_; 
v_a_1481_ = lean_ctor_get(v___x_1480_, 0);
lean_inc(v_a_1481_);
lean_dec_ref_known(v___x_1480_, 1);
v___x_1482_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_generalizeTargetsEq_spec__0___redArg(v_a_1481_, v___f_1479_, v___x_1461_, v___x_1461_, v___y_1468_, v___y_1469_, v___y_1470_, v___y_1471_);
return v___x_1482_;
}
else
{
lean_object* v_a_1483_; lean_object* v___x_1485_; uint8_t v_isShared_1486_; uint8_t v_isSharedCheck_1490_; 
lean_dec_ref(v___f_1479_);
v_a_1483_ = lean_ctor_get(v___x_1480_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1480_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1485_ = v___x_1480_;
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
else
{
lean_inc(v_a_1483_);
lean_dec(v___x_1480_);
v___x_1485_ = lean_box(0);
v_isShared_1486_ = v_isSharedCheck_1490_;
goto v_resetjp_1484_;
}
v_resetjp_1484_:
{
lean_object* v___x_1488_; 
if (v_isShared_1486_ == 0)
{
v___x_1488_ = v___x_1485_;
goto v_reusejp_1487_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v_a_1483_);
v___x_1488_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1487_;
}
v_reusejp_1487_:
{
return v___x_1488_;
}
}
}
}
v___jp_1491_:
{
lean_object* v___x_1496_; lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1496_ = lean_array_get_size(v_x_1437_);
v___x_1497_ = lean_nat_add(v_numIndices_1466_, v_numParams_1465_);
v___x_1498_ = lean_nat_dec_eq(v___x_1496_, v___x_1497_);
lean_dec(v___x_1497_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; lean_object* v___x_1500_; 
v___x_1499_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__9);
lean_inc(v_mvarId_1431_);
v___x_1500_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1450_, v_mvarId_1431_, v___x_1499_, v___y_1492_, v___y_1493_, v___y_1494_, v___y_1495_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_dec_ref_known(v___x_1500_, 1);
v___y_1468_ = v___y_1492_;
v___y_1469_ = v___y_1493_;
v___y_1470_ = v___y_1494_;
v___y_1471_ = v___y_1495_;
goto v___jp_1467_;
}
else
{
lean_object* v_a_1501_; lean_object* v___x_1503_; uint8_t v_isShared_1504_; uint8_t v_isSharedCheck_1508_; 
lean_dec(v_numIndices_1466_);
lean_dec(v_numParams_1465_);
lean_dec_ref_known(v_x_1436_, 2);
lean_dec_ref(v_x_1437_);
lean_dec(v_varName_x3f_1435_);
lean_dec_ref(v___x_1434_);
lean_dec_ref(v___x_1433_);
lean_dec_ref(v_e_1432_);
lean_dec(v_mvarId_1431_);
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1508_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1508_ == 0)
{
v___x_1503_ = v___x_1500_;
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
else
{
lean_inc(v_a_1501_);
lean_dec(v___x_1500_);
v___x_1503_ = lean_box(0);
v_isShared_1504_ = v_isSharedCheck_1508_;
goto v_resetjp_1502_;
}
v_resetjp_1502_:
{
lean_object* v___x_1506_; 
if (v_isShared_1504_ == 0)
{
v___x_1506_ = v___x_1503_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v_a_1501_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
}
}
else
{
v___y_1468_ = v___y_1492_;
v___y_1469_ = v___y_1493_;
v___y_1470_ = v___y_1494_;
v___y_1471_ = v___y_1495_;
goto v___jp_1467_;
}
}
}
else
{
lean_dec(v_val_1463_);
lean_dec_ref_known(v_x_1436_, 2);
lean_dec_ref(v_x_1437_);
lean_dec(v_varName_x3f_1435_);
lean_dec_ref(v___x_1434_);
lean_dec_ref(v___x_1433_);
lean_dec_ref(v_e_1432_);
v___y_1452_ = v___y_1439_;
v___y_1453_ = v___y_1440_;
v___y_1454_ = v___y_1441_;
v___y_1455_ = v___y_1442_;
goto v___jp_1451_;
}
}
}
else
{
lean_dec_ref(v_x_1437_);
lean_dec_ref(v_x_1436_);
lean_dec(v_varName_x3f_1435_);
lean_dec_ref(v___x_1434_);
lean_dec_ref(v___x_1433_);
lean_dec_ref(v_e_1432_);
v___y_1452_ = v___y_1439_;
v___y_1453_ = v___y_1440_;
v___y_1454_ = v___y_1441_;
v___y_1455_ = v___y_1442_;
goto v___jp_1451_;
}
v___jp_1451_:
{
lean_object* v___x_1456_; lean_object* v___x_1457_; 
v___x_1456_ = lean_obj_once(&l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5, &l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5_once, _init_l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__5);
v___x_1457_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1450_, v_mvarId_1431_, v___x_1456_, v___y_1452_, v___y_1453_, v___y_1454_, v___y_1455_);
return v___x_1457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___boxed(lean_object* v_mvarId_1521_, lean_object* v_e_1522_, lean_object* v___x_1523_, lean_object* v___x_1524_, lean_object* v_varName_x3f_1525_, lean_object* v_x_1526_, lean_object* v_x_1527_, lean_object* v_x_1528_, lean_object* v___y_1529_, lean_object* v___y_1530_, lean_object* v___y_1531_, lean_object* v___y_1532_, lean_object* v___y_1533_){
_start:
{
lean_object* v_res_1534_; 
v_res_1534_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(v_mvarId_1521_, v_e_1522_, v___x_1523_, v___x_1524_, v_varName_x3f_1525_, v_x_1526_, v_x_1527_, v_x_1528_, v___y_1529_, v___y_1530_, v___y_1531_, v___y_1532_);
lean_dec(v___y_1532_);
lean_dec_ref(v___y_1531_);
lean_dec(v___y_1530_);
lean_dec_ref(v___y_1529_);
return v_res_1534_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0(lean_object* v_mvarId_1535_, lean_object* v_e_1536_, lean_object* v_varName_x3f_1537_, lean_object* v___y_1538_, lean_object* v___y_1539_, lean_object* v___y_1540_, lean_object* v___y_1541_){
_start:
{
lean_object* v_lctx_1543_; lean_object* v_localInstances_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; 
v_lctx_1543_ = lean_ctor_get(v___y_1538_, 2);
lean_inc_ref(v_lctx_1543_);
v_localInstances_1544_ = lean_ctor_get(v___y_1538_, 3);
lean_inc_ref(v_localInstances_1544_);
v___x_1545_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0___closed__1));
lean_inc(v_mvarId_1535_);
v___x_1546_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1535_, v___x_1545_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
if (lean_obj_tag(v___x_1546_) == 0)
{
lean_object* v___x_1547_; 
lean_dec_ref_known(v___x_1546_, 1);
lean_inc(v___y_1541_);
lean_inc_ref(v___y_1540_);
lean_inc(v___y_1539_);
lean_inc_ref(v___y_1538_);
lean_inc_ref(v_e_1536_);
v___x_1547_ = lean_infer_type(v_e_1536_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
if (lean_obj_tag(v___x_1547_) == 0)
{
lean_object* v_a_1548_; lean_object* v___x_1549_; 
v_a_1548_ = lean_ctor_get(v___x_1547_, 0);
lean_inc(v_a_1548_);
lean_dec_ref_known(v___x_1547_, 1);
v___x_1549_ = l_Lean_Meta_whnfD(v_a_1548_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; lean_object* v_dummy_1551_; lean_object* v_nargs_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___x_1549_, 1);
v_dummy_1551_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__0, &l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0);
v_nargs_1552_ = l_Lean_Expr_getAppNumArgs(v_a_1550_);
lean_inc(v_nargs_1552_);
v___x_1553_ = lean_mk_array(v_nargs_1552_, v_dummy_1551_);
v___x_1554_ = lean_unsigned_to_nat(1u);
v___x_1555_ = lean_nat_sub(v_nargs_1552_, v___x_1554_);
lean_dec(v_nargs_1552_);
v___x_1556_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_generalizeIndices_x27_spec__0(v_mvarId_1535_, v_e_1536_, v_lctx_1543_, v_localInstances_1544_, v_varName_x3f_1537_, v_a_1550_, v___x_1553_, v___x_1555_, v___y_1538_, v___y_1539_, v___y_1540_, v___y_1541_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
return v___x_1556_;
}
else
{
lean_object* v_a_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1564_; 
lean_dec_ref(v_localInstances_1544_);
lean_dec_ref(v_lctx_1543_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v_varName_x3f_1537_);
lean_dec_ref(v_e_1536_);
lean_dec(v_mvarId_1535_);
v_a_1557_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1564_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1564_ == 0)
{
v___x_1559_ = v___x_1549_;
v_isShared_1560_ = v_isSharedCheck_1564_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_a_1557_);
lean_dec(v___x_1549_);
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
else
{
lean_object* v_a_1565_; lean_object* v___x_1567_; uint8_t v_isShared_1568_; uint8_t v_isSharedCheck_1572_; 
lean_dec_ref(v_localInstances_1544_);
lean_dec_ref(v_lctx_1543_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v_varName_x3f_1537_);
lean_dec_ref(v_e_1536_);
lean_dec(v_mvarId_1535_);
v_a_1565_ = lean_ctor_get(v___x_1547_, 0);
v_isSharedCheck_1572_ = !lean_is_exclusive(v___x_1547_);
if (v_isSharedCheck_1572_ == 0)
{
v___x_1567_ = v___x_1547_;
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
else
{
lean_inc(v_a_1565_);
lean_dec(v___x_1547_);
v___x_1567_ = lean_box(0);
v_isShared_1568_ = v_isSharedCheck_1572_;
goto v_resetjp_1566_;
}
v_resetjp_1566_:
{
lean_object* v___x_1570_; 
if (v_isShared_1568_ == 0)
{
v___x_1570_ = v___x_1567_;
goto v_reusejp_1569_;
}
else
{
lean_object* v_reuseFailAlloc_1571_; 
v_reuseFailAlloc_1571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1571_, 0, v_a_1565_);
v___x_1570_ = v_reuseFailAlloc_1571_;
goto v_reusejp_1569_;
}
v_reusejp_1569_:
{
return v___x_1570_;
}
}
}
}
else
{
lean_object* v_a_1573_; lean_object* v___x_1575_; uint8_t v_isShared_1576_; uint8_t v_isSharedCheck_1580_; 
lean_dec_ref(v_localInstances_1544_);
lean_dec_ref(v_lctx_1543_);
lean_dec(v___y_1541_);
lean_dec_ref(v___y_1540_);
lean_dec(v___y_1539_);
lean_dec_ref(v___y_1538_);
lean_dec(v_varName_x3f_1537_);
lean_dec_ref(v_e_1536_);
lean_dec(v_mvarId_1535_);
v_a_1573_ = lean_ctor_get(v___x_1546_, 0);
v_isSharedCheck_1580_ = !lean_is_exclusive(v___x_1546_);
if (v_isSharedCheck_1580_ == 0)
{
v___x_1575_ = v___x_1546_;
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
else
{
lean_inc(v_a_1573_);
lean_dec(v___x_1546_);
v___x_1575_ = lean_box(0);
v_isShared_1576_ = v_isSharedCheck_1580_;
goto v_resetjp_1574_;
}
v_resetjp_1574_:
{
lean_object* v___x_1578_; 
if (v_isShared_1576_ == 0)
{
v___x_1578_ = v___x_1575_;
goto v_reusejp_1577_;
}
else
{
lean_object* v_reuseFailAlloc_1579_; 
v_reuseFailAlloc_1579_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1579_, 0, v_a_1573_);
v___x_1578_ = v_reuseFailAlloc_1579_;
goto v_reusejp_1577_;
}
v_reusejp_1577_:
{
return v___x_1578_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___lam__0___boxed(lean_object* v_mvarId_1581_, lean_object* v_e_1582_, lean_object* v_varName_x3f_1583_, lean_object* v___y_1584_, lean_object* v___y_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_){
_start:
{
lean_object* v_res_1589_; 
v_res_1589_ = l_Lean_Meta_generalizeIndices_x27___lam__0(v_mvarId_1581_, v_e_1582_, v_varName_x3f_1583_, v___y_1584_, v___y_1585_, v___y_1586_, v___y_1587_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27(lean_object* v_mvarId_1590_, lean_object* v_e_1591_, lean_object* v_varName_x3f_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_, lean_object* v_a_1595_, lean_object* v_a_1596_){
_start:
{
lean_object* v___f_1598_; lean_object* v___x_1599_; 
lean_inc(v_mvarId_1590_);
v___f_1598_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeIndices_x27___lam__0___boxed), 8, 3);
lean_closure_set(v___f_1598_, 0, v_mvarId_1590_);
lean_closure_set(v___f_1598_, 1, v_e_1591_);
lean_closure_set(v___f_1598_, 2, v_varName_x3f_1592_);
v___x_1599_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1590_, v___f_1598_, v_a_1593_, v_a_1594_, v_a_1595_, v_a_1596_);
return v___x_1599_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices_x27___boxed(lean_object* v_mvarId_1600_, lean_object* v_e_1601_, lean_object* v_varName_x3f_1602_, lean_object* v_a_1603_, lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v_a_1606_, lean_object* v_a_1607_){
_start:
{
lean_object* v_res_1608_; 
v_res_1608_ = l_Lean_Meta_generalizeIndices_x27(v_mvarId_1600_, v_e_1601_, v_varName_x3f_1602_, v_a_1603_, v_a_1604_, v_a_1605_, v_a_1606_);
lean_dec(v_a_1606_);
lean_dec_ref(v_a_1605_);
lean_dec(v_a_1604_);
lean_dec_ref(v_a_1603_);
return v_res_1608_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0(lean_object* v_fvarId_1609_, lean_object* v_mvarId_1610_, lean_object* v___y_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_){
_start:
{
lean_object* v___x_1616_; 
v___x_1616_ = l_Lean_FVarId_getDecl___redArg(v_fvarId_1609_, v___y_1611_, v___y_1613_, v___y_1614_);
if (lean_obj_tag(v___x_1616_) == 0)
{
lean_object* v_a_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; 
v_a_1617_ = lean_ctor_get(v___x_1616_, 0);
lean_inc_n(v_a_1617_, 2);
lean_dec_ref_known(v___x_1616_, 1);
v___x_1618_ = l_Lean_LocalDecl_toExpr(v_a_1617_);
v___x_1619_ = l_Lean_LocalDecl_userName(v_a_1617_);
lean_dec(v_a_1617_);
v___x_1620_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
v___x_1621_ = l_Lean_Meta_generalizeIndices_x27(v_mvarId_1610_, v___x_1618_, v___x_1620_, v___y_1611_, v___y_1612_, v___y_1613_, v___y_1614_);
return v___x_1621_;
}
else
{
lean_object* v_a_1622_; lean_object* v___x_1624_; uint8_t v_isShared_1625_; uint8_t v_isSharedCheck_1629_; 
lean_dec(v_mvarId_1610_);
v_a_1622_ = lean_ctor_get(v___x_1616_, 0);
v_isSharedCheck_1629_ = !lean_is_exclusive(v___x_1616_);
if (v_isSharedCheck_1629_ == 0)
{
v___x_1624_ = v___x_1616_;
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
else
{
lean_inc(v_a_1622_);
lean_dec(v___x_1616_);
v___x_1624_ = lean_box(0);
v_isShared_1625_ = v_isSharedCheck_1629_;
goto v_resetjp_1623_;
}
v_resetjp_1623_:
{
lean_object* v___x_1627_; 
if (v_isShared_1625_ == 0)
{
v___x_1627_ = v___x_1624_;
goto v_reusejp_1626_;
}
else
{
lean_object* v_reuseFailAlloc_1628_; 
v_reuseFailAlloc_1628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1628_, 0, v_a_1622_);
v___x_1627_ = v_reuseFailAlloc_1628_;
goto v_reusejp_1626_;
}
v_reusejp_1626_:
{
return v___x_1627_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___lam__0___boxed(lean_object* v_fvarId_1630_, lean_object* v_mvarId_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_){
_start:
{
lean_object* v_res_1637_; 
v_res_1637_ = l_Lean_Meta_generalizeIndices___lam__0(v_fvarId_1630_, v_mvarId_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_);
lean_dec(v___y_1635_);
lean_dec_ref(v___y_1634_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices(lean_object* v_mvarId_1638_, lean_object* v_fvarId_1639_, lean_object* v_a_1640_, lean_object* v_a_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_){
_start:
{
lean_object* v___f_1645_; lean_object* v___x_1646_; 
lean_inc(v_mvarId_1638_);
v___f_1645_ = lean_alloc_closure((void*)(l_Lean_Meta_generalizeIndices___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1645_, 0, v_fvarId_1639_);
lean_closure_set(v___f_1645_, 1, v_mvarId_1638_);
v___x_1646_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_1638_, v___f_1645_, v_a_1640_, v_a_1641_, v_a_1642_, v_a_1643_);
return v___x_1646_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_generalizeIndices___boxed(lean_object* v_mvarId_1647_, lean_object* v_fvarId_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_, lean_object* v_a_1651_, lean_object* v_a_1652_, lean_object* v_a_1653_){
_start:
{
lean_object* v_res_1654_; 
v_res_1654_ = l_Lean_Meta_generalizeIndices(v_mvarId_1647_, v_fvarId_1648_, v_a_1649_, v_a_1650_, v_a_1651_, v_a_1652_);
lean_dec(v_a_1652_);
lean_dec_ref(v_a_1651_);
lean_dec(v_a_1650_);
lean_dec_ref(v_a_1649_);
return v_res_1654_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(lean_object* v___x_1656_, lean_object* v_a_1657_, lean_object* v_x_1658_, lean_object* v_x_1659_, lean_object* v_x_1660_, lean_object* v___y_1661_){
_start:
{
if (lean_obj_tag(v_x_1658_) == 5)
{
lean_object* v_fn_1669_; lean_object* v_arg_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; 
v_fn_1669_ = lean_ctor_get(v_x_1658_, 0);
lean_inc_ref(v_fn_1669_);
v_arg_1670_ = lean_ctor_get(v_x_1658_, 1);
lean_inc_ref(v_arg_1670_);
lean_dec_ref_known(v_x_1658_, 2);
v___x_1671_ = lean_array_set(v_x_1659_, v_x_1660_, v_arg_1670_);
v___x_1672_ = lean_unsigned_to_nat(1u);
v___x_1673_ = lean_nat_sub(v_x_1660_, v___x_1672_);
lean_dec(v_x_1660_);
v_x_1658_ = v_fn_1669_;
v_x_1659_ = v___x_1671_;
v_x_1660_ = v___x_1673_;
goto _start;
}
else
{
lean_dec(v_x_1660_);
if (lean_obj_tag(v_x_1658_) == 4)
{
lean_object* v_declName_1675_; uint8_t v___x_1676_; lean_object* v___x_1677_; lean_object* v_env_1678_; lean_object* v___x_1679_; 
v_declName_1675_ = lean_ctor_get(v_x_1658_, 0);
v___x_1676_ = 0;
v___x_1677_ = lean_st_ref_get(v___y_1661_);
v_env_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc_ref(v_env_1678_);
lean_dec(v___x_1677_);
lean_inc(v_declName_1675_);
v___x_1679_ = l_Lean_Environment_find_x3f(v_env_1678_, v_declName_1675_, v___x_1676_);
if (lean_obj_tag(v___x_1679_) == 0)
{
lean_dec_ref_known(v_x_1658_, 2);
lean_dec_ref(v_x_1659_);
lean_dec_ref(v_a_1657_);
lean_dec_ref(v___x_1656_);
goto v___jp_1663_;
}
else
{
lean_object* v_val_1680_; lean_object* v___x_1682_; uint8_t v_isShared_1683_; uint8_t v_isSharedCheck_1710_; 
v_val_1680_ = lean_ctor_get(v___x_1679_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1679_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1682_ = v___x_1679_;
v_isShared_1683_ = v_isSharedCheck_1710_;
goto v_resetjp_1681_;
}
else
{
lean_inc(v_val_1680_);
lean_dec(v___x_1679_);
v___x_1682_ = lean_box(0);
v_isShared_1683_ = v_isSharedCheck_1710_;
goto v_resetjp_1681_;
}
v_resetjp_1681_:
{
if (lean_obj_tag(v_val_1680_) == 5)
{
lean_object* v_val_1684_; lean_object* v___x_1686_; uint8_t v_isShared_1687_; uint8_t v_isSharedCheck_1709_; 
v_val_1684_ = lean_ctor_get(v_val_1680_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v_val_1680_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1686_ = v_val_1680_;
v_isShared_1687_ = v_isSharedCheck_1709_;
goto v_resetjp_1685_;
}
else
{
lean_inc(v_val_1684_);
lean_dec(v_val_1680_);
v___x_1686_ = lean_box(0);
v_isShared_1687_ = v_isSharedCheck_1709_;
goto v_resetjp_1685_;
}
v_resetjp_1685_:
{
lean_object* v_toConstantVal_1688_; lean_object* v_numParams_1689_; lean_object* v_numIndices_1690_; lean_object* v_ctors_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; uint8_t v___x_1694_; 
v_toConstantVal_1688_ = lean_ctor_get(v_val_1684_, 0);
v_numParams_1689_ = lean_ctor_get(v_val_1684_, 1);
v_numIndices_1690_ = lean_ctor_get(v_val_1684_, 2);
v_ctors_1691_ = lean_ctor_get(v_val_1684_, 4);
v___x_1692_ = lean_array_get_size(v_x_1659_);
v___x_1693_ = lean_nat_add(v_numIndices_1690_, v_numParams_1689_);
v___x_1694_ = lean_nat_dec_eq(v___x_1692_, v___x_1693_);
lean_dec(v___x_1693_);
if (v___x_1694_ == 0)
{
lean_del_object(v___x_1686_);
lean_dec_ref(v_val_1684_);
lean_del_object(v___x_1682_);
lean_dec_ref_known(v_x_1658_, 2);
lean_dec_ref(v_x_1659_);
lean_dec_ref(v_a_1657_);
lean_dec_ref(v___x_1656_);
goto v___jp_1666_;
}
else
{
lean_object* v_name_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; uint8_t v___x_1698_; 
v_name_1695_ = lean_ctor_get(v_toConstantVal_1688_, 0);
v___x_1696_ = ((lean_object*)(l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___closed__0));
lean_inc(v_name_1695_);
v___x_1697_ = l_Lean_Name_str___override(v_name_1695_, v___x_1696_);
v___x_1698_ = l_Lean_Environment_contains(v___x_1656_, v___x_1697_, v___x_1694_);
if (v___x_1698_ == 0)
{
lean_del_object(v___x_1686_);
lean_dec_ref(v_val_1684_);
lean_del_object(v___x_1682_);
lean_dec_ref_known(v_x_1658_, 2);
lean_dec_ref(v_x_1659_);
lean_dec_ref(v_a_1657_);
goto v___jp_1666_;
}
else
{
lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1704_; 
v___x_1699_ = l_List_lengthTR___redArg(v_ctors_1691_);
v___x_1700_ = lean_nat_sub(v___x_1692_, v_numIndices_1690_);
v___x_1701_ = l_Array_extract___redArg(v_x_1659_, v___x_1700_, v___x_1692_);
v___x_1702_ = lean_alloc_ctor(0, 6, 0);
lean_ctor_set(v___x_1702_, 0, v_val_1684_);
lean_ctor_set(v___x_1702_, 1, v___x_1699_);
lean_ctor_set(v___x_1702_, 2, v_a_1657_);
lean_ctor_set(v___x_1702_, 3, v_x_1658_);
lean_ctor_set(v___x_1702_, 4, v_x_1659_);
lean_ctor_set(v___x_1702_, 5, v___x_1701_);
if (v_isShared_1683_ == 0)
{
lean_ctor_set(v___x_1682_, 0, v___x_1702_);
v___x_1704_ = v___x_1682_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v___x_1702_);
v___x_1704_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1706_; 
if (v_isShared_1687_ == 0)
{
lean_ctor_set_tag(v___x_1686_, 0);
lean_ctor_set(v___x_1686_, 0, v___x_1704_);
v___x_1706_ = v___x_1686_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_1682_);
lean_dec(v_val_1680_);
lean_dec_ref_known(v_x_1658_, 2);
lean_dec_ref(v_x_1659_);
lean_dec_ref(v_a_1657_);
lean_dec_ref(v___x_1656_);
goto v___jp_1663_;
}
}
}
}
else
{
lean_dec_ref(v_x_1659_);
lean_dec_ref(v_x_1658_);
lean_dec_ref(v_a_1657_);
lean_dec_ref(v___x_1656_);
goto v___jp_1663_;
}
}
v___jp_1663_:
{
lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1664_ = lean_box(0);
v___x_1665_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
return v___x_1665_;
}
v___jp_1666_:
{
lean_object* v___x_1667_; lean_object* v___x_1668_; 
v___x_1667_ = lean_box(0);
v___x_1668_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1668_, 0, v___x_1667_);
return v___x_1668_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg___boxed(lean_object* v___x_1711_, lean_object* v_a_1712_, lean_object* v_x_1713_, lean_object* v_x_1714_, lean_object* v_x_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
lean_object* v_res_1718_; 
v_res_1718_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v___x_1711_, v_a_1712_, v_x_1713_, v_x_1714_, v_x_1715_, v___y_1716_);
lean_dec(v___y_1716_);
return v_res_1718_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(lean_object* v_majorFVarId_1719_, lean_object* v_a_1720_, lean_object* v_a_1721_, lean_object* v_a_1722_, lean_object* v_a_1723_){
_start:
{
lean_object* v___x_1725_; lean_object* v_env_1729_; lean_object* v___x_1730_; uint8_t v___x_1731_; uint8_t v___x_1732_; 
v___x_1725_ = lean_st_ref_get(v_a_1723_);
v_env_1729_ = lean_ctor_get(v___x_1725_, 0);
lean_inc_ref_n(v_env_1729_, 2);
lean_dec(v___x_1725_);
v___x_1730_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__5));
v___x_1731_ = 1;
v___x_1732_ = l_Lean_Environment_contains(v_env_1729_, v___x_1730_, v___x_1731_);
if (v___x_1732_ == 0)
{
lean_dec_ref(v_env_1729_);
lean_dec(v_majorFVarId_1719_);
goto v___jp_1726_;
}
else
{
lean_object* v___x_1733_; uint8_t v___x_1734_; 
v___x_1733_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkEqAndProof___closed__1));
lean_inc_ref(v_env_1729_);
v___x_1734_ = l_Lean_Environment_contains(v_env_1729_, v___x_1733_, v___x_1732_);
if (v___x_1734_ == 0)
{
lean_dec_ref(v_env_1729_);
lean_dec(v_majorFVarId_1719_);
goto v___jp_1726_;
}
else
{
lean_object* v___x_1735_; 
v___x_1735_ = l_Lean_FVarId_getDecl___redArg(v_majorFVarId_1719_, v_a_1720_, v_a_1722_, v_a_1723_);
if (lean_obj_tag(v___x_1735_) == 0)
{
lean_object* v_a_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; 
v_a_1736_ = lean_ctor_get(v___x_1735_, 0);
lean_inc(v_a_1736_);
lean_dec_ref_known(v___x_1735_, 1);
v___x_1737_ = l_Lean_LocalDecl_type(v_a_1736_);
lean_inc(v_a_1723_);
lean_inc_ref(v_a_1722_);
lean_inc(v_a_1721_);
lean_inc_ref(v_a_1720_);
v___x_1738_ = lean_whnf(v___x_1737_, v_a_1720_, v_a_1721_, v_a_1722_, v_a_1723_);
if (lean_obj_tag(v___x_1738_) == 0)
{
lean_object* v_a_1739_; lean_object* v_dummy_1740_; lean_object* v_nargs_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v_a_1739_ = lean_ctor_get(v___x_1738_, 0);
lean_inc(v_a_1739_);
lean_dec_ref_known(v___x_1738_, 1);
v_dummy_1740_ = lean_obj_once(&l_Lean_Meta_getInductiveUniverseAndParams___closed__0, &l_Lean_Meta_getInductiveUniverseAndParams___closed__0_once, _init_l_Lean_Meta_getInductiveUniverseAndParams___closed__0);
v_nargs_1741_ = l_Lean_Expr_getAppNumArgs(v_a_1739_);
lean_inc(v_nargs_1741_);
v___x_1742_ = lean_mk_array(v_nargs_1741_, v_dummy_1740_);
v___x_1743_ = lean_unsigned_to_nat(1u);
v___x_1744_ = lean_nat_sub(v_nargs_1741_, v___x_1743_);
lean_dec(v_nargs_1741_);
v___x_1745_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v_env_1729_, v_a_1736_, v_a_1739_, v___x_1742_, v___x_1744_, v_a_1723_);
return v___x_1745_;
}
else
{
lean_object* v_a_1746_; lean_object* v___x_1748_; uint8_t v_isShared_1749_; uint8_t v_isSharedCheck_1753_; 
lean_dec(v_a_1736_);
lean_dec_ref(v_env_1729_);
v_a_1746_ = lean_ctor_get(v___x_1738_, 0);
v_isSharedCheck_1753_ = !lean_is_exclusive(v___x_1738_);
if (v_isSharedCheck_1753_ == 0)
{
v___x_1748_ = v___x_1738_;
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
else
{
lean_inc(v_a_1746_);
lean_dec(v___x_1738_);
v___x_1748_ = lean_box(0);
v_isShared_1749_ = v_isSharedCheck_1753_;
goto v_resetjp_1747_;
}
v_resetjp_1747_:
{
lean_object* v___x_1751_; 
if (v_isShared_1749_ == 0)
{
v___x_1751_ = v___x_1748_;
goto v_reusejp_1750_;
}
else
{
lean_object* v_reuseFailAlloc_1752_; 
v_reuseFailAlloc_1752_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1752_, 0, v_a_1746_);
v___x_1751_ = v_reuseFailAlloc_1752_;
goto v_reusejp_1750_;
}
v_reusejp_1750_:
{
return v___x_1751_;
}
}
}
}
else
{
lean_object* v_a_1754_; lean_object* v___x_1756_; uint8_t v_isShared_1757_; uint8_t v_isSharedCheck_1761_; 
lean_dec_ref(v_env_1729_);
v_a_1754_ = lean_ctor_get(v___x_1735_, 0);
v_isSharedCheck_1761_ = !lean_is_exclusive(v___x_1735_);
if (v_isSharedCheck_1761_ == 0)
{
v___x_1756_ = v___x_1735_;
v_isShared_1757_ = v_isSharedCheck_1761_;
goto v_resetjp_1755_;
}
else
{
lean_inc(v_a_1754_);
lean_dec(v___x_1735_);
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
v___jp_1726_:
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = lean_box(0);
v___x_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
return v___x_1728_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f___boxed(lean_object* v_majorFVarId_1762_, lean_object* v_a_1763_, lean_object* v_a_1764_, lean_object* v_a_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v_res_1768_; 
v_res_1768_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(v_majorFVarId_1762_, v_a_1763_, v_a_1764_, v_a_1765_, v_a_1766_);
lean_dec(v_a_1766_);
lean_dec_ref(v_a_1765_);
lean_dec(v_a_1764_);
lean_dec_ref(v_a_1763_);
return v_res_1768_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(lean_object* v___x_1769_, lean_object* v_a_1770_, lean_object* v_x_1771_, lean_object* v_x_1772_, lean_object* v_x_1773_, lean_object* v___y_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_){
_start:
{
lean_object* v___x_1779_; 
v___x_1779_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___redArg(v___x_1769_, v_a_1770_, v_x_1771_, v_x_1772_, v_x_1773_, v___y_1777_);
return v___x_1779_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0___boxed(lean_object* v___x_1780_, lean_object* v_a_1781_, lean_object* v_x_1782_, lean_object* v_x_1783_, lean_object* v_x_1784_, lean_object* v___y_1785_, lean_object* v___y_1786_, lean_object* v___y_1787_, lean_object* v___y_1788_, lean_object* v___y_1789_){
_start:
{
lean_object* v_res_1790_; 
v_res_1790_ = l_Lean_Expr_withAppAux___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f_spec__0(v___x_1780_, v_a_1781_, v_x_1782_, v_x_1783_, v_x_1784_, v___y_1785_, v___y_1786_, v___y_1787_, v___y_1788_);
lean_dec(v___y_1788_);
lean_dec_ref(v___y_1787_);
lean_dec(v___y_1786_);
lean_dec_ref(v___y_1785_);
return v_res_1790_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(lean_object* v___x_1791_, lean_object* v_i_1792_, lean_object* v_n_1793_, lean_object* v_i_1794_){
_start:
{
lean_object* v_zero_1795_; uint8_t v_isZero_1796_; 
v_zero_1795_ = lean_unsigned_to_nat(0u);
v_isZero_1796_ = lean_nat_dec_eq(v_i_1794_, v_zero_1795_);
if (v_isZero_1796_ == 1)
{
uint8_t v___x_1797_; 
lean_dec(v_i_1794_);
v___x_1797_ = 0;
return v___x_1797_;
}
else
{
lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; uint8_t v___x_1801_; 
v___x_1798_ = lean_nat_sub(v_n_1793_, v_i_1794_);
v___x_1799_ = lean_array_fget_borrowed(v___x_1791_, v_i_1792_);
v___x_1800_ = lean_array_fget_borrowed(v___x_1791_, v___x_1798_);
lean_dec(v___x_1798_);
v___x_1801_ = lean_expr_eqv(v___x_1799_, v___x_1800_);
if (v___x_1801_ == 0)
{
lean_object* v_one_1802_; lean_object* v_n_1803_; 
v_one_1802_ = lean_unsigned_to_nat(1u);
v_n_1803_ = lean_nat_sub(v_i_1794_, v_one_1802_);
lean_dec(v_i_1794_);
v_i_1794_ = v_n_1803_;
goto _start;
}
else
{
lean_dec(v_i_1794_);
return v___x_1801_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg___boxed(lean_object* v___x_1805_, lean_object* v_i_1806_, lean_object* v_n_1807_, lean_object* v_i_1808_){
_start:
{
uint8_t v_res_1809_; lean_object* v_r_1810_; 
v_res_1809_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_1805_, v_i_1806_, v_n_1807_, v_i_1808_);
lean_dec(v_n_1807_);
lean_dec(v_i_1806_);
lean_dec_ref(v___x_1805_);
v_r_1810_ = lean_box(v_res_1809_);
return v_r_1810_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(lean_object* v___x_1811_, lean_object* v_n_1812_, lean_object* v_i_1813_){
_start:
{
lean_object* v_zero_1814_; uint8_t v_isZero_1815_; 
v_zero_1814_ = lean_unsigned_to_nat(0u);
v_isZero_1815_ = lean_nat_dec_eq(v_i_1813_, v_zero_1814_);
if (v_isZero_1815_ == 1)
{
uint8_t v___x_1816_; 
lean_dec(v_i_1813_);
v___x_1816_ = 0;
return v___x_1816_;
}
else
{
lean_object* v___x_1817_; uint8_t v___x_1818_; 
v___x_1817_ = lean_nat_sub(v_n_1812_, v_i_1813_);
lean_inc(v___x_1817_);
v___x_1818_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_1811_, v___x_1817_, v___x_1817_, v___x_1817_);
lean_dec(v___x_1817_);
if (v___x_1818_ == 0)
{
lean_object* v_one_1819_; lean_object* v_n_1820_; 
v_one_1819_ = lean_unsigned_to_nat(1u);
v_n_1820_ = lean_nat_sub(v_i_1813_, v_one_1819_);
lean_dec(v_i_1813_);
v_i_1813_ = v_n_1820_;
goto _start;
}
else
{
lean_dec(v_i_1813_);
return v___x_1818_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg___boxed(lean_object* v___x_1822_, lean_object* v_n_1823_, lean_object* v_i_1824_){
_start:
{
uint8_t v_res_1825_; lean_object* v_r_1826_; 
v_res_1825_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v___x_1822_, v_n_1823_, v_i_1824_);
lean_dec(v_n_1823_);
lean_dec_ref(v___x_1822_);
v_r_1826_ = lean_box(v_res_1825_);
return v_r_1826_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(lean_object* v___x_1827_, lean_object* v_as_1828_, size_t v_i_1829_, size_t v_stop_1830_){
_start:
{
uint8_t v___x_1831_; 
v___x_1831_ = lean_usize_dec_eq(v_i_1829_, v_stop_1830_);
if (v___x_1831_ == 0)
{
lean_object* v___x_1832_; uint8_t v___x_1833_; 
v___x_1832_ = lean_array_uget_borrowed(v_as_1828_, v_i_1829_);
v___x_1833_ = l_Lean_Expr_isFVar(v___x_1832_);
if (v___x_1833_ == 0)
{
uint8_t v___x_1834_; 
v___x_1834_ = 1;
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; uint8_t v___x_1836_; 
v___x_1835_ = lean_unsigned_to_nat(0u);
v___x_1836_ = lean_nat_dec_eq(v___x_1827_, v___x_1835_);
if (v___x_1836_ == 0)
{
size_t v___x_1837_; size_t v___x_1838_; 
v___x_1837_ = ((size_t)1ULL);
v___x_1838_ = lean_usize_add(v_i_1829_, v___x_1837_);
v_i_1829_ = v___x_1838_;
goto _start;
}
else
{
return v___x_1836_;
}
}
}
else
{
uint8_t v___x_1840_; 
v___x_1840_ = 0;
return v___x_1840_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5___boxed(lean_object* v___x_1841_, lean_object* v_as_1842_, lean_object* v_i_1843_, lean_object* v_stop_1844_){
_start:
{
size_t v_i_boxed_1845_; size_t v_stop_boxed_1846_; uint8_t v_res_1847_; lean_object* v_r_1848_; 
v_i_boxed_1845_ = lean_unbox_usize(v_i_1843_);
lean_dec(v_i_1843_);
v_stop_boxed_1846_ = lean_unbox_usize(v_stop_1844_);
lean_dec(v_stop_1844_);
v_res_1847_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(v___x_1841_, v_as_1842_, v_i_boxed_1845_, v_stop_boxed_1846_);
lean_dec_ref(v_as_1842_);
lean_dec(v___x_1841_);
v_r_1848_ = lean_box(v_res_1847_);
return v_r_1848_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(uint8_t v___y_1849_, lean_object* v_x_1850_){
_start:
{
return v___y_1849_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed(lean_object* v___y_1851_, lean_object* v_x_1852_){
_start:
{
uint8_t v___y_8128__boxed_1853_; uint8_t v_res_1854_; lean_object* v_r_1855_; 
v___y_8128__boxed_1853_ = lean_unbox(v___y_1851_);
v_res_1854_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1(v___y_8128__boxed_1853_, v_x_1852_);
lean_dec(v_x_1852_);
v_r_1855_ = lean_box(v_res_1854_);
return v_r_1855_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(lean_object* v___x_1856_, lean_object* v_as_1857_, size_t v_i_1858_, size_t v_stop_1859_){
_start:
{
uint8_t v___x_1860_; 
v___x_1860_ = lean_usize_dec_eq(v_i_1858_, v_stop_1859_);
if (v___x_1860_ == 0)
{
lean_object* v___x_1861_; lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1861_ = lean_array_uget_borrowed(v_as_1857_, v_i_1858_);
v___x_1862_ = l_Lean_Expr_fvarId_x21(v___x_1861_);
v___x_1863_ = l_Lean_instBEqFVarId_beq(v___x_1856_, v___x_1862_);
lean_dec(v___x_1862_);
if (v___x_1863_ == 0)
{
size_t v___x_1864_; size_t v___x_1865_; 
v___x_1864_ = ((size_t)1ULL);
v___x_1865_ = lean_usize_add(v_i_1858_, v___x_1864_);
v_i_1858_ = v___x_1865_;
goto _start;
}
else
{
return v___x_1863_;
}
}
else
{
uint8_t v___x_1867_; 
v___x_1867_ = 0;
return v___x_1867_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3___boxed(lean_object* v___x_1868_, lean_object* v_as_1869_, lean_object* v_i_1870_, lean_object* v_stop_1871_){
_start:
{
size_t v_i_boxed_1872_; size_t v_stop_boxed_1873_; uint8_t v_res_1874_; lean_object* v_r_1875_; 
v_i_boxed_1872_ = lean_unbox_usize(v_i_1870_);
lean_dec(v_i_1870_);
v_stop_boxed_1873_ = lean_unbox_usize(v_stop_1871_);
lean_dec(v_stop_1871_);
v_res_1874_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(v___x_1868_, v_as_1869_, v_i_boxed_1872_, v_stop_boxed_1873_);
lean_dec_ref(v_as_1869_);
lean_dec(v___x_1868_);
v_r_1875_ = lean_box(v_res_1874_);
return v_r_1875_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(lean_object* v_fvarId_1876_, uint8_t v___y_1877_, lean_object* v_as_1878_, size_t v_i_1879_, size_t v_stop_1880_){
_start:
{
uint8_t v___x_1881_; 
v___x_1881_ = lean_usize_dec_eq(v_i_1879_, v_stop_1880_);
if (v___x_1881_ == 0)
{
lean_object* v___x_1882_; lean_object* v___x_1883_; uint8_t v___x_1884_; 
v___x_1882_ = lean_array_uget_borrowed(v_as_1878_, v_i_1879_);
v___x_1883_ = l_Lean_Expr_fvarId_x21(v___x_1882_);
v___x_1884_ = l_Lean_instBEqFVarId_beq(v___x_1883_, v_fvarId_1876_);
lean_dec(v___x_1883_);
if (v___x_1884_ == 0)
{
if (v___y_1877_ == 0)
{
size_t v___x_1885_; size_t v___x_1886_; 
v___x_1885_ = ((size_t)1ULL);
v___x_1886_ = lean_usize_add(v_i_1879_, v___x_1885_);
v_i_1879_ = v___x_1886_;
goto _start;
}
else
{
return v___y_1877_;
}
}
else
{
return v___x_1884_;
}
}
else
{
uint8_t v___x_1888_; 
v___x_1888_ = 0;
return v___x_1888_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2___boxed(lean_object* v_fvarId_1889_, lean_object* v___y_1890_, lean_object* v_as_1891_, lean_object* v_i_1892_, lean_object* v_stop_1893_){
_start:
{
uint8_t v___y_8153__boxed_1894_; size_t v_i_boxed_1895_; size_t v_stop_boxed_1896_; uint8_t v_res_1897_; lean_object* v_r_1898_; 
v___y_8153__boxed_1894_ = lean_unbox(v___y_1890_);
v_i_boxed_1895_ = lean_unbox_usize(v_i_1892_);
lean_dec(v_i_1892_);
v_stop_boxed_1896_ = lean_unbox_usize(v_stop_1893_);
lean_dec(v_stop_1893_);
v_res_1897_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(v_fvarId_1889_, v___y_8153__boxed_1894_, v_as_1891_, v_i_boxed_1895_, v_stop_boxed_1896_);
lean_dec_ref(v_as_1891_);
lean_dec(v_fvarId_1889_);
v_r_1898_ = lean_box(v_res_1897_);
return v_r_1898_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(lean_object* v___x_1899_, lean_object* v___x_1900_, uint8_t v___y_1901_, lean_object* v_majorTypeIndices_1902_, lean_object* v_fvarId_1903_){
_start:
{
uint8_t v___x_1904_; 
v___x_1904_ = lean_nat_dec_lt(v___x_1899_, v___x_1900_);
if (v___x_1904_ == 0)
{
uint8_t v___x_1905_; 
v___x_1905_ = 1;
return v___x_1905_;
}
else
{
if (v___x_1904_ == 0)
{
return v___x_1904_;
}
else
{
size_t v___x_1906_; size_t v___x_1907_; uint8_t v___x_1908_; 
v___x_1906_ = ((size_t)0ULL);
v___x_1907_ = lean_usize_of_nat(v___x_1900_);
v___x_1908_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__2(v_fvarId_1903_, v___y_1901_, v_majorTypeIndices_1902_, v___x_1906_, v___x_1907_);
if (v___x_1908_ == 0)
{
return v___x_1904_;
}
else
{
return v___y_1901_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed(lean_object* v___x_1909_, lean_object* v___x_1910_, lean_object* v___y_1911_, lean_object* v_majorTypeIndices_1912_, lean_object* v_fvarId_1913_){
_start:
{
uint8_t v___y_8174__boxed_1914_; uint8_t v_res_1915_; lean_object* v_r_1916_; 
v___y_8174__boxed_1914_ = lean_unbox(v___y_1911_);
v_res_1915_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0(v___x_1909_, v___x_1910_, v___y_8174__boxed_1914_, v_majorTypeIndices_1912_, v_fvarId_1913_);
lean_dec(v_fvarId_1913_);
lean_dec_ref(v_majorTypeIndices_1912_);
lean_dec(v___x_1910_);
lean_dec(v___x_1909_);
v_r_1916_ = lean_box(v_res_1915_);
return v_r_1916_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0(void){
_start:
{
lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; 
v___x_1917_ = lean_box(0);
v___x_1918_ = lean_unsigned_to_nat(16u);
v___x_1919_ = lean_mk_array(v___x_1918_, v___x_1917_);
return v___x_1919_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; 
v___x_1920_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__0);
v___x_1921_ = lean_unsigned_to_nat(0u);
v___x_1922_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1922_, 0, v___x_1921_);
lean_ctor_set(v___x_1922_, 1, v___x_1920_);
return v___x_1922_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(uint8_t v___x_1923_, lean_object* v_ctx_1924_, lean_object* v_as_1925_, size_t v_i_1926_, size_t v_stop_1927_, lean_object* v___y_1928_){
_start:
{
lean_object* v___y_1931_; uint8_t v_a_1932_; uint8_t v_a_1937_; uint8_t v_fst_1944_; lean_object* v_mctx_1945_; lean_object* v___y_1961_; uint8_t v_fst_1967_; lean_object* v_snd_1968_; lean_object* v___y_1985_; lean_object* v___y_1990_; lean_object* v___y_1991_; lean_object* v___y_1992_; lean_object* v_snd_1993_; lean_object* v___y_1999_; lean_object* v___y_2000_; lean_object* v___y_2001_; lean_object* v___y_2002_; uint8_t v_fst_2009_; lean_object* v_mctx_2010_; lean_object* v___y_2026_; uint8_t v___x_2031_; 
v___x_2031_ = lean_usize_dec_eq(v_i_1926_, v_stop_1927_);
if (v___x_2031_ == 0)
{
lean_object* v___x_2032_; 
v___x_2032_ = lean_array_uget(v_as_1925_, v_i_1926_);
if (lean_obj_tag(v___x_2032_) == 0)
{
lean_object* v___x_2033_; lean_object* v___x_2034_; 
v___x_2033_ = lean_box(v___x_1923_);
v___x_2034_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2034_, 0, v___x_2033_);
v___y_1931_ = v___x_2034_;
v_a_1932_ = v___x_1923_;
goto v___jp_1930_;
}
else
{
lean_object* v_val_2035_; lean_object* v___x_2037_; uint8_t v_isShared_2038_; uint8_t v_isSharedCheck_2093_; 
v_val_2035_ = lean_ctor_get(v___x_2032_, 0);
v_isSharedCheck_2093_ = !lean_is_exclusive(v___x_2032_);
if (v_isSharedCheck_2093_ == 0)
{
v___x_2037_ = v___x_2032_;
v_isShared_2038_ = v_isSharedCheck_2093_;
goto v_resetjp_2036_;
}
else
{
lean_inc(v_val_2035_);
lean_dec(v___x_2032_);
v___x_2037_ = lean_box(0);
v_isShared_2038_ = v_isSharedCheck_2093_;
goto v_resetjp_2036_;
}
v_resetjp_2036_:
{
lean_object* v_majorDecl_2039_; lean_object* v_majorTypeIndices_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; uint8_t v___x_2043_; 
v_majorDecl_2039_ = lean_ctor_get(v_ctx_1924_, 2);
v_majorTypeIndices_2040_ = lean_ctor_get(v_ctx_1924_, 5);
v___x_2041_ = l_Lean_LocalDecl_fvarId(v_val_2035_);
v___x_2042_ = l_Lean_LocalDecl_fvarId(v_majorDecl_2039_);
v___x_2043_ = l_Lean_instBEqFVarId_beq(v___x_2041_, v___x_2042_);
lean_dec(v___x_2042_);
if (v___x_2043_ == 0)
{
lean_object* v___x_2044_; lean_object* v___x_2045_; uint8_t v___y_2047_; uint8_t v___x_2081_; 
v___x_2044_ = lean_unsigned_to_nat(0u);
v___x_2045_ = lean_array_get_size(v_majorTypeIndices_2040_);
v___x_2081_ = lean_nat_dec_lt(v___x_2044_, v___x_2045_);
if (v___x_2081_ == 0)
{
lean_dec(v___x_2041_);
lean_del_object(v___x_2037_);
v___y_2047_ = v___x_2081_;
goto v___jp_2046_;
}
else
{
if (v___x_2081_ == 0)
{
lean_dec(v___x_2041_);
lean_del_object(v___x_2037_);
v___y_2047_ = v___x_2081_;
goto v___jp_2046_;
}
else
{
size_t v___x_2082_; size_t v___x_2083_; uint8_t v___x_2084_; 
v___x_2082_ = ((size_t)0ULL);
v___x_2083_ = lean_usize_of_nat(v___x_2045_);
v___x_2084_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__3(v___x_2041_, v_majorTypeIndices_2040_, v___x_2082_, v___x_2083_);
lean_dec(v___x_2041_);
if (v___x_2084_ == 0)
{
lean_del_object(v___x_2037_);
v___y_2047_ = v___x_2084_;
goto v___jp_2046_;
}
else
{
lean_object* v___x_2085_; lean_object* v___x_2087_; 
lean_dec(v_val_2035_);
v___x_2085_ = lean_box(v___x_1923_);
if (v_isShared_2038_ == 0)
{
lean_ctor_set_tag(v___x_2037_, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2085_);
v___x_2087_ = v___x_2037_;
goto v_reusejp_2086_;
}
else
{
lean_object* v_reuseFailAlloc_2088_; 
v_reuseFailAlloc_2088_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2088_, 0, v___x_2085_);
v___x_2087_ = v_reuseFailAlloc_2088_;
goto v_reusejp_2086_;
}
v_reusejp_2086_:
{
v___y_1931_ = v___x_2087_;
v_a_1932_ = v___x_1923_;
goto v___jp_1930_;
}
}
}
}
v___jp_2046_:
{
lean_object* v___x_2048_; lean_object* v___f_2049_; lean_object* v___x_2050_; lean_object* v___f_2051_; 
v___x_2048_ = lean_box(v___y_2047_);
lean_inc_ref(v_majorTypeIndices_2040_);
v___f_2049_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2049_, 0, v___x_2044_);
lean_closure_set(v___f_2049_, 1, v___x_2045_);
lean_closure_set(v___f_2049_, 2, v___x_2048_);
lean_closure_set(v___f_2049_, 3, v_majorTypeIndices_2040_);
v___x_2050_ = lean_box(v___y_2047_);
v___f_2051_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___lam__1___boxed), 2, 1);
lean_closure_set(v___f_2051_, 0, v___x_2050_);
if (lean_obj_tag(v_val_2035_) == 0)
{
lean_object* v_type_2052_; lean_object* v___x_2053_; lean_object* v_mctx_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; uint8_t v___x_2057_; 
v_type_2052_ = lean_ctor_get(v_val_2035_, 3);
lean_inc_ref(v_type_2052_);
lean_dec_ref_known(v_val_2035_, 4);
v___x_2053_ = lean_st_ref_get(v___y_1928_);
v_mctx_2054_ = lean_ctor_get(v___x_2053_, 0);
lean_inc_ref_n(v_mctx_2054_, 2);
lean_dec(v___x_2053_);
v___x_2055_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2056_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2056_, 0, v___x_2055_);
lean_ctor_set(v___x_2056_, 1, v_mctx_2054_);
v___x_2057_ = l_Lean_Expr_hasFVar(v_type_2052_);
if (v___x_2057_ == 0)
{
uint8_t v___x_2058_; 
v___x_2058_ = l_Lean_Expr_hasMVar(v_type_2052_);
if (v___x_2058_ == 0)
{
lean_dec_ref_known(v___x_2056_, 2);
lean_dec_ref(v_type_2052_);
lean_dec_ref(v___f_2051_);
lean_dec_ref(v___f_2049_);
v_fst_2009_ = v___x_2058_;
v_mctx_2010_ = v_mctx_2054_;
goto v___jp_2008_;
}
else
{
lean_object* v___x_2059_; 
lean_dec_ref(v_mctx_2054_);
v___x_2059_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2049_, v___f_2051_, v_type_2052_, v___x_2056_);
v___y_2026_ = v___x_2059_;
goto v___jp_2025_;
}
}
else
{
lean_object* v___x_2060_; 
lean_dec_ref(v_mctx_2054_);
v___x_2060_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2049_, v___f_2051_, v_type_2052_, v___x_2056_);
v___y_2026_ = v___x_2060_;
goto v___jp_2025_;
}
}
else
{
uint8_t v_nondep_2061_; 
v_nondep_2061_ = lean_ctor_get_uint8(v_val_2035_, sizeof(void*)*5);
if (v_nondep_2061_ == 0)
{
lean_object* v_type_2062_; lean_object* v_value_2063_; lean_object* v___x_2064_; lean_object* v_mctx_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; uint8_t v___x_2068_; 
v_type_2062_ = lean_ctor_get(v_val_2035_, 3);
lean_inc_ref(v_type_2062_);
v_value_2063_ = lean_ctor_get(v_val_2035_, 4);
lean_inc_ref(v_value_2063_);
lean_dec_ref_known(v_val_2035_, 5);
v___x_2064_ = lean_st_ref_get(v___y_1928_);
v_mctx_2065_ = lean_ctor_get(v___x_2064_, 0);
lean_inc_ref(v_mctx_2065_);
lean_dec(v___x_2064_);
v___x_2066_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2067_, 0, v___x_2066_);
lean_ctor_set(v___x_2067_, 1, v_mctx_2065_);
v___x_2068_ = l_Lean_Expr_hasFVar(v_type_2062_);
if (v___x_2068_ == 0)
{
uint8_t v___x_2069_; 
v___x_2069_ = l_Lean_Expr_hasMVar(v_type_2062_);
if (v___x_2069_ == 0)
{
lean_dec_ref(v_type_2062_);
v___y_1990_ = v___f_2051_;
v___y_1991_ = v___f_2049_;
v___y_1992_ = v_value_2063_;
v_snd_1993_ = v___x_2067_;
goto v___jp_1989_;
}
else
{
lean_object* v___x_2070_; 
lean_inc_ref(v___f_2051_);
lean_inc_ref(v___f_2049_);
v___x_2070_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2049_, v___f_2051_, v_type_2062_, v___x_2067_);
v___y_1999_ = v___f_2051_;
v___y_2000_ = v___f_2049_;
v___y_2001_ = v_value_2063_;
v___y_2002_ = v___x_2070_;
goto v___jp_1998_;
}
}
else
{
lean_object* v___x_2071_; 
lean_inc_ref(v___f_2051_);
lean_inc_ref(v___f_2049_);
v___x_2071_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2049_, v___f_2051_, v_type_2062_, v___x_2067_);
v___y_1999_ = v___f_2051_;
v___y_2000_ = v___f_2049_;
v___y_2001_ = v_value_2063_;
v___y_2002_ = v___x_2071_;
goto v___jp_1998_;
}
}
else
{
lean_object* v_type_2072_; lean_object* v___x_2073_; lean_object* v_mctx_2074_; lean_object* v___x_2075_; lean_object* v___x_2076_; uint8_t v___x_2077_; 
v_type_2072_ = lean_ctor_get(v_val_2035_, 3);
lean_inc_ref(v_type_2072_);
lean_dec_ref_known(v_val_2035_, 5);
v___x_2073_ = lean_st_ref_get(v___y_1928_);
v_mctx_2074_ = lean_ctor_get(v___x_2073_, 0);
lean_inc_ref_n(v_mctx_2074_, 2);
lean_dec(v___x_2073_);
v___x_2075_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1, &l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___closed__1);
v___x_2076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2076_, 0, v___x_2075_);
lean_ctor_set(v___x_2076_, 1, v_mctx_2074_);
v___x_2077_ = l_Lean_Expr_hasFVar(v_type_2072_);
if (v___x_2077_ == 0)
{
uint8_t v___x_2078_; 
v___x_2078_ = l_Lean_Expr_hasMVar(v_type_2072_);
if (v___x_2078_ == 0)
{
lean_dec_ref_known(v___x_2076_, 2);
lean_dec_ref(v_type_2072_);
lean_dec_ref(v___f_2051_);
lean_dec_ref(v___f_2049_);
v_fst_1944_ = v___x_2078_;
v_mctx_1945_ = v_mctx_2074_;
goto v___jp_1943_;
}
else
{
lean_object* v___x_2079_; 
lean_dec_ref(v_mctx_2074_);
v___x_2079_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2049_, v___f_2051_, v_type_2072_, v___x_2076_);
v___y_1961_ = v___x_2079_;
goto v___jp_1960_;
}
}
else
{
lean_object* v___x_2080_; 
lean_dec_ref(v_mctx_2074_);
v___x_2080_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___f_2049_, v___f_2051_, v_type_2072_, v___x_2076_);
v___y_1961_ = v___x_2080_;
goto v___jp_1960_;
}
}
}
}
}
else
{
lean_object* v___x_2089_; lean_object* v___x_2091_; 
lean_dec(v___x_2041_);
lean_dec(v_val_2035_);
v___x_2089_ = lean_box(v___x_1923_);
if (v_isShared_2038_ == 0)
{
lean_ctor_set_tag(v___x_2037_, 0);
lean_ctor_set(v___x_2037_, 0, v___x_2089_);
v___x_2091_ = v___x_2037_;
goto v_reusejp_2090_;
}
else
{
lean_object* v_reuseFailAlloc_2092_; 
v_reuseFailAlloc_2092_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2092_, 0, v___x_2089_);
v___x_2091_ = v_reuseFailAlloc_2092_;
goto v_reusejp_2090_;
}
v_reusejp_2090_:
{
v___y_1931_ = v___x_2091_;
v_a_1932_ = v___x_1923_;
goto v___jp_1930_;
}
}
}
}
}
else
{
uint8_t v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; 
lean_dec_ref(v_ctx_1924_);
v___x_2094_ = 0;
v___x_2095_ = lean_box(v___x_2094_);
v___x_2096_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2095_);
return v___x_2096_;
}
v___jp_1930_:
{
if (v_a_1932_ == 0)
{
size_t v___x_1933_; size_t v___x_1934_; 
lean_dec_ref(v___y_1931_);
v___x_1933_ = ((size_t)1ULL);
v___x_1934_ = lean_usize_add(v_i_1926_, v___x_1933_);
v_i_1926_ = v___x_1934_;
goto _start;
}
else
{
lean_dec_ref(v_ctx_1924_);
return v___y_1931_;
}
}
v___jp_1936_:
{
if (v_a_1937_ == 0)
{
uint8_t v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; 
lean_dec_ref(v_ctx_1924_);
v___x_1938_ = 1;
v___x_1939_ = lean_box(v___x_1938_);
v___x_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1940_, 0, v___x_1939_);
return v___x_1940_;
}
else
{
lean_object* v___x_1941_; lean_object* v___x_1942_; 
v___x_1941_ = lean_box(v___x_1923_);
v___x_1942_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1941_);
v___y_1931_ = v___x_1942_;
v_a_1932_ = v___x_1923_;
goto v___jp_1930_;
}
}
v___jp_1943_:
{
lean_object* v___x_1946_; lean_object* v_cache_1947_; lean_object* v_zetaDeltaFVarIds_1948_; lean_object* v_postponed_1949_; lean_object* v_diag_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1958_; 
v___x_1946_ = lean_st_ref_take(v___y_1928_);
v_cache_1947_ = lean_ctor_get(v___x_1946_, 1);
v_zetaDeltaFVarIds_1948_ = lean_ctor_get(v___x_1946_, 2);
v_postponed_1949_ = lean_ctor_get(v___x_1946_, 3);
v_diag_1950_ = lean_ctor_get(v___x_1946_, 4);
v_isSharedCheck_1958_ = !lean_is_exclusive(v___x_1946_);
if (v_isSharedCheck_1958_ == 0)
{
lean_object* v_unused_1959_; 
v_unused_1959_ = lean_ctor_get(v___x_1946_, 0);
lean_dec(v_unused_1959_);
v___x_1952_ = v___x_1946_;
v_isShared_1953_ = v_isSharedCheck_1958_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_diag_1950_);
lean_inc(v_postponed_1949_);
lean_inc(v_zetaDeltaFVarIds_1948_);
lean_inc(v_cache_1947_);
lean_dec(v___x_1946_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1958_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v___x_1955_; 
if (v_isShared_1953_ == 0)
{
lean_ctor_set(v___x_1952_, 0, v_mctx_1945_);
v___x_1955_ = v___x_1952_;
goto v_reusejp_1954_;
}
else
{
lean_object* v_reuseFailAlloc_1957_; 
v_reuseFailAlloc_1957_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1957_, 0, v_mctx_1945_);
lean_ctor_set(v_reuseFailAlloc_1957_, 1, v_cache_1947_);
lean_ctor_set(v_reuseFailAlloc_1957_, 2, v_zetaDeltaFVarIds_1948_);
lean_ctor_set(v_reuseFailAlloc_1957_, 3, v_postponed_1949_);
lean_ctor_set(v_reuseFailAlloc_1957_, 4, v_diag_1950_);
v___x_1955_ = v_reuseFailAlloc_1957_;
goto v_reusejp_1954_;
}
v_reusejp_1954_:
{
lean_object* v___x_1956_; 
v___x_1956_ = lean_st_ref_put(v___y_1928_, v___x_1955_);
v_a_1937_ = v_fst_1944_;
goto v___jp_1936_;
}
}
}
v___jp_1960_:
{
lean_object* v_snd_1962_; lean_object* v_fst_1963_; lean_object* v_mctx_1964_; uint8_t v___x_1965_; 
v_snd_1962_ = lean_ctor_get(v___y_1961_, 1);
lean_inc(v_snd_1962_);
v_fst_1963_ = lean_ctor_get(v___y_1961_, 0);
lean_inc(v_fst_1963_);
lean_dec_ref(v___y_1961_);
v_mctx_1964_ = lean_ctor_get(v_snd_1962_, 1);
lean_inc_ref(v_mctx_1964_);
lean_dec(v_snd_1962_);
v___x_1965_ = lean_unbox(v_fst_1963_);
lean_dec(v_fst_1963_);
v_fst_1944_ = v___x_1965_;
v_mctx_1945_ = v_mctx_1964_;
goto v___jp_1943_;
}
v___jp_1966_:
{
lean_object* v_mctx_1969_; lean_object* v___x_1970_; lean_object* v_cache_1971_; lean_object* v_zetaDeltaFVarIds_1972_; lean_object* v_postponed_1973_; lean_object* v_diag_1974_; lean_object* v___x_1976_; uint8_t v_isShared_1977_; uint8_t v_isSharedCheck_1982_; 
v_mctx_1969_ = lean_ctor_get(v_snd_1968_, 1);
lean_inc_ref(v_mctx_1969_);
lean_dec_ref(v_snd_1968_);
v___x_1970_ = lean_st_ref_take(v___y_1928_);
v_cache_1971_ = lean_ctor_get(v___x_1970_, 1);
v_zetaDeltaFVarIds_1972_ = lean_ctor_get(v___x_1970_, 2);
v_postponed_1973_ = lean_ctor_get(v___x_1970_, 3);
v_diag_1974_ = lean_ctor_get(v___x_1970_, 4);
v_isSharedCheck_1982_ = !lean_is_exclusive(v___x_1970_);
if (v_isSharedCheck_1982_ == 0)
{
lean_object* v_unused_1983_; 
v_unused_1983_ = lean_ctor_get(v___x_1970_, 0);
lean_dec(v_unused_1983_);
v___x_1976_ = v___x_1970_;
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
else
{
lean_inc(v_diag_1974_);
lean_inc(v_postponed_1973_);
lean_inc(v_zetaDeltaFVarIds_1972_);
lean_inc(v_cache_1971_);
lean_dec(v___x_1970_);
v___x_1976_ = lean_box(0);
v_isShared_1977_ = v_isSharedCheck_1982_;
goto v_resetjp_1975_;
}
v_resetjp_1975_:
{
lean_object* v___x_1979_; 
if (v_isShared_1977_ == 0)
{
lean_ctor_set(v___x_1976_, 0, v_mctx_1969_);
v___x_1979_ = v___x_1976_;
goto v_reusejp_1978_;
}
else
{
lean_object* v_reuseFailAlloc_1981_; 
v_reuseFailAlloc_1981_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1981_, 0, v_mctx_1969_);
lean_ctor_set(v_reuseFailAlloc_1981_, 1, v_cache_1971_);
lean_ctor_set(v_reuseFailAlloc_1981_, 2, v_zetaDeltaFVarIds_1972_);
lean_ctor_set(v_reuseFailAlloc_1981_, 3, v_postponed_1973_);
lean_ctor_set(v_reuseFailAlloc_1981_, 4, v_diag_1974_);
v___x_1979_ = v_reuseFailAlloc_1981_;
goto v_reusejp_1978_;
}
v_reusejp_1978_:
{
lean_object* v___x_1980_; 
v___x_1980_ = lean_st_ref_put(v___y_1928_, v___x_1979_);
v_a_1937_ = v_fst_1967_;
goto v___jp_1936_;
}
}
}
v___jp_1984_:
{
lean_object* v_fst_1986_; lean_object* v_snd_1987_; uint8_t v___x_1988_; 
v_fst_1986_ = lean_ctor_get(v___y_1985_, 0);
lean_inc(v_fst_1986_);
v_snd_1987_ = lean_ctor_get(v___y_1985_, 1);
lean_inc(v_snd_1987_);
lean_dec_ref(v___y_1985_);
v___x_1988_ = lean_unbox(v_fst_1986_);
lean_dec(v_fst_1986_);
v_fst_1967_ = v___x_1988_;
v_snd_1968_ = v_snd_1987_;
goto v___jp_1966_;
}
v___jp_1989_:
{
uint8_t v___x_1994_; 
v___x_1994_ = l_Lean_Expr_hasFVar(v___y_1992_);
if (v___x_1994_ == 0)
{
uint8_t v___x_1995_; 
v___x_1995_ = l_Lean_Expr_hasMVar(v___y_1992_);
if (v___x_1995_ == 0)
{
lean_dec_ref(v___y_1992_);
lean_dec_ref(v___y_1991_);
lean_dec_ref(v___y_1990_);
v_fst_1967_ = v___x_1995_;
v_snd_1968_ = v_snd_1993_;
goto v___jp_1966_;
}
else
{
lean_object* v___x_1996_; 
v___x_1996_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___y_1991_, v___y_1990_, v___y_1992_, v_snd_1993_);
v___y_1985_ = v___x_1996_;
goto v___jp_1984_;
}
}
else
{
lean_object* v___x_1997_; 
v___x_1997_ = l___private_Lean_MetavarContext_0__Lean_DependsOn_dep_visit(v___y_1991_, v___y_1990_, v___y_1992_, v_snd_1993_);
v___y_1985_ = v___x_1997_;
goto v___jp_1984_;
}
}
v___jp_1998_:
{
lean_object* v_fst_2003_; uint8_t v___x_2004_; 
v_fst_2003_ = lean_ctor_get(v___y_2002_, 0);
v___x_2004_ = lean_unbox(v_fst_2003_);
if (v___x_2004_ == 0)
{
lean_object* v_snd_2005_; 
v_snd_2005_ = lean_ctor_get(v___y_2002_, 1);
lean_inc(v_snd_2005_);
lean_dec_ref(v___y_2002_);
v___y_1990_ = v___y_1999_;
v___y_1991_ = v___y_2000_;
v___y_1992_ = v___y_2001_;
v_snd_1993_ = v_snd_2005_;
goto v___jp_1989_;
}
else
{
lean_object* v_snd_2006_; uint8_t v___x_2007_; 
lean_inc(v_fst_2003_);
lean_dec_ref(v___y_2001_);
lean_dec_ref(v___y_2000_);
lean_dec_ref(v___y_1999_);
v_snd_2006_ = lean_ctor_get(v___y_2002_, 1);
lean_inc(v_snd_2006_);
lean_dec_ref(v___y_2002_);
v___x_2007_ = lean_unbox(v_fst_2003_);
lean_dec(v_fst_2003_);
v_fst_1967_ = v___x_2007_;
v_snd_1968_ = v_snd_2006_;
goto v___jp_1966_;
}
}
v___jp_2008_:
{
lean_object* v___x_2011_; lean_object* v_cache_2012_; lean_object* v_zetaDeltaFVarIds_2013_; lean_object* v_postponed_2014_; lean_object* v_diag_2015_; lean_object* v___x_2017_; uint8_t v_isShared_2018_; uint8_t v_isSharedCheck_2023_; 
v___x_2011_ = lean_st_ref_take(v___y_1928_);
v_cache_2012_ = lean_ctor_get(v___x_2011_, 1);
v_zetaDeltaFVarIds_2013_ = lean_ctor_get(v___x_2011_, 2);
v_postponed_2014_ = lean_ctor_get(v___x_2011_, 3);
v_diag_2015_ = lean_ctor_get(v___x_2011_, 4);
v_isSharedCheck_2023_ = !lean_is_exclusive(v___x_2011_);
if (v_isSharedCheck_2023_ == 0)
{
lean_object* v_unused_2024_; 
v_unused_2024_ = lean_ctor_get(v___x_2011_, 0);
lean_dec(v_unused_2024_);
v___x_2017_ = v___x_2011_;
v_isShared_2018_ = v_isSharedCheck_2023_;
goto v_resetjp_2016_;
}
else
{
lean_inc(v_diag_2015_);
lean_inc(v_postponed_2014_);
lean_inc(v_zetaDeltaFVarIds_2013_);
lean_inc(v_cache_2012_);
lean_dec(v___x_2011_);
v___x_2017_ = lean_box(0);
v_isShared_2018_ = v_isSharedCheck_2023_;
goto v_resetjp_2016_;
}
v_resetjp_2016_:
{
lean_object* v___x_2020_; 
if (v_isShared_2018_ == 0)
{
lean_ctor_set(v___x_2017_, 0, v_mctx_2010_);
v___x_2020_ = v___x_2017_;
goto v_reusejp_2019_;
}
else
{
lean_object* v_reuseFailAlloc_2022_; 
v_reuseFailAlloc_2022_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2022_, 0, v_mctx_2010_);
lean_ctor_set(v_reuseFailAlloc_2022_, 1, v_cache_2012_);
lean_ctor_set(v_reuseFailAlloc_2022_, 2, v_zetaDeltaFVarIds_2013_);
lean_ctor_set(v_reuseFailAlloc_2022_, 3, v_postponed_2014_);
lean_ctor_set(v_reuseFailAlloc_2022_, 4, v_diag_2015_);
v___x_2020_ = v_reuseFailAlloc_2022_;
goto v_reusejp_2019_;
}
v_reusejp_2019_:
{
lean_object* v___x_2021_; 
v___x_2021_ = lean_st_ref_put(v___y_1928_, v___x_2020_);
v_a_1937_ = v_fst_2009_;
goto v___jp_1936_;
}
}
}
v___jp_2025_:
{
lean_object* v_snd_2027_; lean_object* v_fst_2028_; lean_object* v_mctx_2029_; uint8_t v___x_2030_; 
v_snd_2027_ = lean_ctor_get(v___y_2026_, 1);
lean_inc(v_snd_2027_);
v_fst_2028_ = lean_ctor_get(v___y_2026_, 0);
lean_inc(v_fst_2028_);
lean_dec_ref(v___y_2026_);
v_mctx_2029_ = lean_ctor_get(v_snd_2027_, 1);
lean_inc_ref(v_mctx_2029_);
lean_dec(v_snd_2027_);
v___x_2030_ = lean_unbox(v_fst_2028_);
lean_dec(v_fst_2028_);
v_fst_2009_ = v___x_2030_;
v_mctx_2010_ = v_mctx_2029_;
goto v___jp_2008_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg___boxed(lean_object* v___x_2097_, lean_object* v_ctx_2098_, lean_object* v_as_2099_, lean_object* v_i_2100_, lean_object* v_stop_2101_, lean_object* v___y_2102_, lean_object* v___y_2103_){
_start:
{
uint8_t v___x_8215__boxed_2104_; size_t v_i_boxed_2105_; size_t v_stop_boxed_2106_; lean_object* v_res_2107_; 
v___x_8215__boxed_2104_ = lean_unbox(v___x_2097_);
v_i_boxed_2105_ = lean_unbox_usize(v_i_2100_);
lean_dec(v_i_2100_);
v_stop_boxed_2106_ = lean_unbox_usize(v_stop_2101_);
lean_dec(v_stop_2101_);
v_res_2107_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_8215__boxed_2104_, v_ctx_2098_, v_as_2099_, v_i_boxed_2105_, v_stop_boxed_2106_, v___y_2102_);
lean_dec(v___y_2102_);
lean_dec_ref(v_as_2099_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(uint8_t v___x_2108_, lean_object* v_ctx_2109_, lean_object* v_x_2110_, lean_object* v___y_2111_, lean_object* v___y_2112_, lean_object* v___y_2113_, lean_object* v___y_2114_){
_start:
{
if (lean_obj_tag(v_x_2110_) == 0)
{
lean_object* v_cs_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2130_; 
v_cs_2116_ = lean_ctor_get(v_x_2110_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_x_2110_);
if (v_isSharedCheck_2130_ == 0)
{
v___x_2118_ = v_x_2110_;
v_isShared_2119_ = v_isSharedCheck_2130_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_cs_2116_);
lean_dec(v_x_2110_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2130_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2120_; lean_object* v___x_2121_; uint8_t v___x_2122_; 
v___x_2120_ = lean_unsigned_to_nat(0u);
v___x_2121_ = lean_array_get_size(v_cs_2116_);
v___x_2122_ = lean_nat_dec_lt(v___x_2120_, v___x_2121_);
if (v___x_2122_ == 0)
{
lean_object* v___x_2123_; lean_object* v___x_2125_; 
lean_dec_ref(v_cs_2116_);
lean_dec_ref(v_ctx_2109_);
v___x_2123_ = lean_box(v___x_2122_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 0, v___x_2123_);
v___x_2125_ = v___x_2118_;
goto v_reusejp_2124_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2123_);
v___x_2125_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2124_;
}
v_reusejp_2124_:
{
return v___x_2125_;
}
}
else
{
size_t v___x_2127_; size_t v___x_2128_; lean_object* v___x_2129_; 
lean_del_object(v___x_2118_);
v___x_2127_ = ((size_t)0ULL);
v___x_2128_ = lean_usize_of_nat(v___x_2121_);
v___x_2129_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(v___x_2108_, v_ctx_2109_, v_cs_2116_, v___x_2127_, v___x_2128_, v___y_2111_, v___y_2112_, v___y_2113_, v___y_2114_);
lean_dec_ref(v_cs_2116_);
return v___x_2129_;
}
}
}
else
{
lean_object* v_vs_2131_; lean_object* v___x_2133_; uint8_t v_isShared_2134_; uint8_t v_isSharedCheck_2145_; 
v_vs_2131_ = lean_ctor_get(v_x_2110_, 0);
v_isSharedCheck_2145_ = !lean_is_exclusive(v_x_2110_);
if (v_isSharedCheck_2145_ == 0)
{
v___x_2133_ = v_x_2110_;
v_isShared_2134_ = v_isSharedCheck_2145_;
goto v_resetjp_2132_;
}
else
{
lean_inc(v_vs_2131_);
lean_dec(v_x_2110_);
v___x_2133_ = lean_box(0);
v_isShared_2134_ = v_isSharedCheck_2145_;
goto v_resetjp_2132_;
}
v_resetjp_2132_:
{
lean_object* v___x_2135_; lean_object* v___x_2136_; uint8_t v___x_2137_; 
v___x_2135_ = lean_unsigned_to_nat(0u);
v___x_2136_ = lean_array_get_size(v_vs_2131_);
v___x_2137_ = lean_nat_dec_lt(v___x_2135_, v___x_2136_);
if (v___x_2137_ == 0)
{
lean_object* v___x_2138_; lean_object* v___x_2140_; 
lean_dec_ref(v_vs_2131_);
lean_dec_ref(v_ctx_2109_);
v___x_2138_ = lean_box(v___x_2137_);
if (v_isShared_2134_ == 0)
{
lean_ctor_set_tag(v___x_2133_, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2138_);
v___x_2140_ = v___x_2133_;
goto v_reusejp_2139_;
}
else
{
lean_object* v_reuseFailAlloc_2141_; 
v_reuseFailAlloc_2141_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2141_, 0, v___x_2138_);
v___x_2140_ = v_reuseFailAlloc_2141_;
goto v_reusejp_2139_;
}
v_reusejp_2139_:
{
return v___x_2140_;
}
}
else
{
size_t v___x_2142_; size_t v___x_2143_; lean_object* v___x_2144_; 
lean_del_object(v___x_2133_);
v___x_2142_ = ((size_t)0ULL);
v___x_2143_ = lean_usize_of_nat(v___x_2136_);
v___x_2144_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2108_, v_ctx_2109_, v_vs_2131_, v___x_2142_, v___x_2143_, v___y_2112_);
lean_dec_ref(v_vs_2131_);
return v___x_2144_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(uint8_t v___x_2146_, lean_object* v_ctx_2147_, lean_object* v_as_2148_, size_t v_i_2149_, size_t v_stop_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_){
_start:
{
uint8_t v___x_2156_; 
v___x_2156_ = lean_usize_dec_eq(v_i_2149_, v_stop_2150_);
if (v___x_2156_ == 0)
{
lean_object* v___x_2157_; lean_object* v___x_2158_; 
v___x_2157_ = lean_array_uget_borrowed(v_as_2148_, v_i_2149_);
lean_inc(v___x_2157_);
lean_inc_ref(v_ctx_2147_);
v___x_2158_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_2146_, v_ctx_2147_, v___x_2157_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
if (lean_obj_tag(v___x_2158_) == 0)
{
lean_object* v_a_2159_; uint8_t v___x_2160_; 
v_a_2159_ = lean_ctor_get(v___x_2158_, 0);
v___x_2160_ = lean_unbox(v_a_2159_);
if (v___x_2160_ == 0)
{
size_t v___x_2161_; size_t v___x_2162_; 
lean_dec_ref_known(v___x_2158_, 1);
v___x_2161_ = ((size_t)1ULL);
v___x_2162_ = lean_usize_add(v_i_2149_, v___x_2161_);
v_i_2149_ = v___x_2162_;
goto _start;
}
else
{
lean_dec_ref(v_ctx_2147_);
return v___x_2158_;
}
}
else
{
lean_dec_ref(v_ctx_2147_);
return v___x_2158_;
}
}
else
{
uint8_t v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; 
lean_dec_ref(v_ctx_2147_);
v___x_2164_ = 0;
v___x_2165_ = lean_box(v___x_2164_);
v___x_2166_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2165_);
return v___x_2166_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5___boxed(lean_object* v___x_2167_, lean_object* v_ctx_2168_, lean_object* v_as_2169_, lean_object* v_i_2170_, lean_object* v_stop_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_, lean_object* v___y_2174_, lean_object* v___y_2175_, lean_object* v___y_2176_){
_start:
{
uint8_t v___x_8538__boxed_2177_; size_t v_i_boxed_2178_; size_t v_stop_boxed_2179_; lean_object* v_res_2180_; 
v___x_8538__boxed_2177_ = lean_unbox(v___x_2167_);
v_i_boxed_2178_ = lean_unbox_usize(v_i_2170_);
lean_dec(v_i_2170_);
v_stop_boxed_2179_ = lean_unbox_usize(v_stop_2171_);
lean_dec(v_stop_2171_);
v_res_2180_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4_spec__5(v___x_8538__boxed_2177_, v_ctx_2168_, v_as_2169_, v_i_boxed_2178_, v_stop_boxed_2179_, v___y_2172_, v___y_2173_, v___y_2174_, v___y_2175_);
lean_dec(v___y_2175_);
lean_dec_ref(v___y_2174_);
lean_dec(v___y_2173_);
lean_dec_ref(v___y_2172_);
lean_dec_ref(v_as_2169_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4___boxed(lean_object* v___x_2181_, lean_object* v_ctx_2182_, lean_object* v_x_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_, lean_object* v___y_2188_){
_start:
{
uint8_t v___x_8554__boxed_2189_; lean_object* v_res_2190_; 
v___x_8554__boxed_2189_ = lean_unbox(v___x_2181_);
v_res_2190_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_8554__boxed_2189_, v_ctx_2182_, v_x_2183_, v___y_2184_, v___y_2185_, v___y_2186_, v___y_2187_);
lean_dec(v___y_2187_);
lean_dec_ref(v___y_2186_);
lean_dec(v___y_2185_);
lean_dec_ref(v___y_2184_);
return v_res_2190_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(uint8_t v___x_2191_, lean_object* v_ctx_2192_, lean_object* v_t_2193_, lean_object* v___y_2194_, lean_object* v___y_2195_, lean_object* v___y_2196_, lean_object* v___y_2197_){
_start:
{
lean_object* v_root_2199_; lean_object* v_tail_2200_; lean_object* v___x_2201_; 
v_root_2199_ = lean_ctor_get(v_t_2193_, 0);
lean_inc_ref(v_root_2199_);
v_tail_2200_ = lean_ctor_get(v_t_2193_, 1);
lean_inc_ref(v_tail_2200_);
lean_dec_ref(v_t_2193_);
lean_inc_ref(v_ctx_2192_);
v___x_2201_ = l_Lean_PersistentArray_anyMAux___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__4(v___x_2191_, v_ctx_2192_, v_root_2199_, v___y_2194_, v___y_2195_, v___y_2196_, v___y_2197_);
if (lean_obj_tag(v___x_2201_) == 0)
{
lean_object* v_a_2202_; uint8_t v___x_2203_; 
v_a_2202_ = lean_ctor_get(v___x_2201_, 0);
v___x_2203_ = lean_unbox(v_a_2202_);
if (v___x_2203_ == 0)
{
lean_object* v___x_2205_; uint8_t v_isShared_2206_; uint8_t v_isSharedCheck_2217_; 
v_isSharedCheck_2217_ = !lean_is_exclusive(v___x_2201_);
if (v_isSharedCheck_2217_ == 0)
{
lean_object* v_unused_2218_; 
v_unused_2218_ = lean_ctor_get(v___x_2201_, 0);
lean_dec(v_unused_2218_);
v___x_2205_ = v___x_2201_;
v_isShared_2206_ = v_isSharedCheck_2217_;
goto v_resetjp_2204_;
}
else
{
lean_dec(v___x_2201_);
v___x_2205_ = lean_box(0);
v_isShared_2206_ = v_isSharedCheck_2217_;
goto v_resetjp_2204_;
}
v_resetjp_2204_:
{
lean_object* v___x_2207_; lean_object* v___x_2208_; uint8_t v___x_2209_; 
v___x_2207_ = lean_unsigned_to_nat(0u);
v___x_2208_ = lean_array_get_size(v_tail_2200_);
v___x_2209_ = lean_nat_dec_lt(v___x_2207_, v___x_2208_);
if (v___x_2209_ == 0)
{
lean_object* v___x_2210_; lean_object* v___x_2212_; 
lean_dec_ref(v_tail_2200_);
lean_dec_ref(v_ctx_2192_);
v___x_2210_ = lean_box(v___x_2209_);
if (v_isShared_2206_ == 0)
{
lean_ctor_set(v___x_2205_, 0, v___x_2210_);
v___x_2212_ = v___x_2205_;
goto v_reusejp_2211_;
}
else
{
lean_object* v_reuseFailAlloc_2213_; 
v_reuseFailAlloc_2213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2213_, 0, v___x_2210_);
v___x_2212_ = v_reuseFailAlloc_2213_;
goto v_reusejp_2211_;
}
v_reusejp_2211_:
{
return v___x_2212_;
}
}
else
{
size_t v___x_2214_; size_t v___x_2215_; lean_object* v___x_2216_; 
lean_del_object(v___x_2205_);
v___x_2214_ = ((size_t)0ULL);
v___x_2215_ = lean_usize_of_nat(v___x_2208_);
v___x_2216_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2191_, v_ctx_2192_, v_tail_2200_, v___x_2214_, v___x_2215_, v___y_2195_);
lean_dec_ref(v_tail_2200_);
return v___x_2216_;
}
}
}
else
{
lean_dec_ref(v_tail_2200_);
lean_dec_ref(v_ctx_2192_);
return v___x_2201_;
}
}
else
{
lean_dec_ref(v_tail_2200_);
lean_dec_ref(v_ctx_2192_);
return v___x_2201_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4___boxed(lean_object* v___x_2219_, lean_object* v_ctx_2220_, lean_object* v_t_2221_, lean_object* v___y_2222_, lean_object* v___y_2223_, lean_object* v___y_2224_, lean_object* v___y_2225_, lean_object* v___y_2226_){
_start:
{
uint8_t v___x_8660__boxed_2227_; lean_object* v_res_2228_; 
v___x_8660__boxed_2227_ = lean_unbox(v___x_2219_);
v_res_2228_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(v___x_8660__boxed_2227_, v_ctx_2220_, v_t_2221_, v___y_2222_, v___y_2223_, v___y_2224_, v___y_2225_);
lean_dec(v___y_2225_);
lean_dec_ref(v___y_2224_);
lean_dec(v___y_2223_);
lean_dec_ref(v___y_2222_);
return v_res_2228_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(lean_object* v_ctx_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_, lean_object* v_a_2233_){
_start:
{
lean_object* v_majorTypeIndices_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; uint8_t v___x_2238_; 
v_majorTypeIndices_2235_ = lean_ctor_get(v_ctx_2229_, 5);
v___x_2236_ = lean_array_get_size(v_majorTypeIndices_2235_);
v___x_2237_ = lean_unsigned_to_nat(0u);
v___x_2238_ = lean_nat_dec_eq(v___x_2236_, v___x_2237_);
if (v___x_2238_ == 0)
{
uint8_t v___x_2261_; 
v___x_2261_ = lean_nat_dec_lt(v___x_2237_, v___x_2236_);
if (v___x_2261_ == 0)
{
goto v___jp_2239_;
}
else
{
if (v___x_2261_ == 0)
{
goto v___jp_2239_;
}
else
{
size_t v___x_2262_; size_t v___x_2263_; uint8_t v___x_2264_; 
v___x_2262_ = ((size_t)0ULL);
v___x_2263_ = lean_usize_of_nat(v___x_2236_);
v___x_2264_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__5(v___x_2236_, v_majorTypeIndices_2235_, v___x_2262_, v___x_2263_);
if (v___x_2264_ == 0)
{
goto v___jp_2239_;
}
else
{
lean_object* v___x_2265_; lean_object* v___x_2266_; 
lean_dec_ref(v_ctx_2229_);
v___x_2265_ = lean_box(v___x_2238_);
v___x_2266_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2266_, 0, v___x_2265_);
return v___x_2266_;
}
}
}
}
else
{
lean_object* v___x_2267_; lean_object* v___x_2268_; 
lean_dec_ref(v_ctx_2229_);
v___x_2267_ = lean_box(v___x_2238_);
v___x_2268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2268_, 0, v___x_2267_);
return v___x_2268_;
}
v___jp_2239_:
{
uint8_t v___x_2240_; 
v___x_2240_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v_majorTypeIndices_2235_, v___x_2236_, v___x_2236_);
if (v___x_2240_ == 0)
{
lean_object* v_lctx_2241_; lean_object* v_decls_2242_; lean_object* v___x_2243_; 
v_lctx_2241_ = lean_ctor_get(v_a_2230_, 2);
v_decls_2242_ = lean_ctor_get(v_lctx_2241_, 1);
lean_inc_ref(v_decls_2242_);
v___x_2243_ = l_Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4(v___x_2240_, v_ctx_2229_, v_decls_2242_, v_a_2230_, v_a_2231_, v_a_2232_, v_a_2233_);
if (lean_obj_tag(v___x_2243_) == 0)
{
lean_object* v_a_2244_; lean_object* v___x_2246_; uint8_t v_isShared_2247_; uint8_t v_isSharedCheck_2258_; 
v_a_2244_ = lean_ctor_get(v___x_2243_, 0);
v_isSharedCheck_2258_ = !lean_is_exclusive(v___x_2243_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2246_ = v___x_2243_;
v_isShared_2247_ = v_isSharedCheck_2258_;
goto v_resetjp_2245_;
}
else
{
lean_inc(v_a_2244_);
lean_dec(v___x_2243_);
v___x_2246_ = lean_box(0);
v_isShared_2247_ = v_isSharedCheck_2258_;
goto v_resetjp_2245_;
}
v_resetjp_2245_:
{
uint8_t v___x_2248_; 
v___x_2248_ = lean_unbox(v_a_2244_);
lean_dec(v_a_2244_);
if (v___x_2248_ == 0)
{
uint8_t v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2252_; 
v___x_2249_ = 1;
v___x_2250_ = lean_box(v___x_2249_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 0, v___x_2250_);
v___x_2252_ = v___x_2246_;
goto v_reusejp_2251_;
}
else
{
lean_object* v_reuseFailAlloc_2253_; 
v_reuseFailAlloc_2253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2253_, 0, v___x_2250_);
v___x_2252_ = v_reuseFailAlloc_2253_;
goto v_reusejp_2251_;
}
v_reusejp_2251_:
{
return v___x_2252_;
}
}
else
{
lean_object* v___x_2254_; lean_object* v___x_2256_; 
v___x_2254_ = lean_box(v___x_2240_);
if (v_isShared_2247_ == 0)
{
lean_ctor_set(v___x_2246_, 0, v___x_2254_);
v___x_2256_ = v___x_2246_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v___x_2254_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
return v___x_2256_;
}
}
}
}
else
{
return v___x_2243_;
}
}
else
{
lean_object* v___x_2259_; lean_object* v___x_2260_; 
lean_dec_ref(v_ctx_2229_);
v___x_2259_ = lean_box(v___x_2238_);
v___x_2260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2260_, 0, v___x_2259_);
return v___x_2260_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices___boxed(lean_object* v_ctx_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_){
_start:
{
lean_object* v_res_2275_; 
v_res_2275_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(v_ctx_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_);
lean_dec(v_a_2273_);
lean_dec_ref(v_a_2272_);
lean_dec(v_a_2271_);
lean_dec_ref(v_a_2270_);
return v_res_2275_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(lean_object* v___x_2276_, lean_object* v_i_2277_, lean_object* v_n_2278_, lean_object* v_i_2279_, lean_object* v_a_2280_){
_start:
{
uint8_t v___x_2281_; 
v___x_2281_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___redArg(v___x_2276_, v_i_2277_, v_n_2278_, v_i_2279_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0___boxed(lean_object* v___x_2282_, lean_object* v_i_2283_, lean_object* v_n_2284_, lean_object* v_i_2285_, lean_object* v_a_2286_){
_start:
{
uint8_t v_res_2287_; lean_object* v_r_2288_; 
v_res_2287_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__0(v___x_2282_, v_i_2283_, v_n_2284_, v_i_2285_, v_a_2286_);
lean_dec(v_n_2284_);
lean_dec(v_i_2283_);
lean_dec_ref(v___x_2282_);
v_r_2288_ = lean_box(v_res_2287_);
return v_r_2288_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(lean_object* v___x_2289_, lean_object* v_n_2290_, lean_object* v_i_2291_, lean_object* v_a_2292_){
_start:
{
uint8_t v___x_2293_; 
v___x_2293_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___redArg(v___x_2289_, v_n_2290_, v_i_2291_);
return v___x_2293_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1___boxed(lean_object* v___x_2294_, lean_object* v_n_2295_, lean_object* v_i_2296_, lean_object* v_a_2297_){
_start:
{
uint8_t v_res_2298_; lean_object* v_r_2299_; 
v_res_2298_ = l___private_Init_Data_Nat_Fold_0__Nat_anyTR_loop___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__1(v___x_2294_, v_n_2295_, v_i_2296_, v_a_2297_);
lean_dec(v_n_2295_);
lean_dec_ref(v___x_2294_);
v_r_2299_ = lean_box(v_res_2298_);
return v_r_2299_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(uint8_t v___x_2300_, lean_object* v_ctx_2301_, lean_object* v_as_2302_, size_t v_i_2303_, size_t v_stop_2304_, lean_object* v___y_2305_, lean_object* v___y_2306_, lean_object* v___y_2307_, lean_object* v___y_2308_){
_start:
{
lean_object* v___x_2310_; 
v___x_2310_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___redArg(v___x_2300_, v_ctx_2301_, v_as_2302_, v_i_2303_, v_stop_2304_, v___y_2306_);
return v___x_2310_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5___boxed(lean_object* v___x_2311_, lean_object* v_ctx_2312_, lean_object* v_as_2313_, lean_object* v_i_2314_, lean_object* v_stop_2315_, lean_object* v___y_2316_, lean_object* v___y_2317_, lean_object* v___y_2318_, lean_object* v___y_2319_, lean_object* v___y_2320_){
_start:
{
uint8_t v___x_8797__boxed_2321_; size_t v_i_boxed_2322_; size_t v_stop_boxed_2323_; lean_object* v_res_2324_; 
v___x_8797__boxed_2321_ = lean_unbox(v___x_2311_);
v_i_boxed_2322_ = lean_unbox_usize(v_i_2314_);
lean_dec(v_i_2314_);
v_stop_boxed_2323_ = lean_unbox_usize(v_stop_2315_);
lean_dec(v_stop_2315_);
v_res_2324_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentArray_anyM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices_spec__4_spec__5(v___x_8797__boxed_2321_, v_ctx_2312_, v_as_2313_, v_i_boxed_2322_, v_stop_boxed_2323_, v___y_2316_, v___y_2317_, v___y_2318_, v___y_2319_);
lean_dec(v___y_2319_);
lean_dec_ref(v___y_2318_);
lean_dec(v___y_2317_);
lean_dec_ref(v___y_2316_);
lean_dec_ref(v_as_2313_);
return v_res_2324_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(lean_object* v_as_2325_, size_t v_i_2326_, size_t v_stop_2327_, lean_object* v_b_2328_, lean_object* v___y_2329_, lean_object* v___y_2330_, lean_object* v___y_2331_, lean_object* v___y_2332_){
_start:
{
lean_object* v_a_2335_; uint8_t v___x_2339_; 
v___x_2339_ = lean_usize_dec_eq(v_i_2326_, v_stop_2327_);
if (v___x_2339_ == 0)
{
lean_object* v_toInductionSubgoal_2340_; lean_object* v_ctorName_2341_; lean_object* v_mvarId_2342_; lean_object* v_fields_2343_; lean_object* v_subst_2344_; lean_object* v___x_2346_; uint8_t v_isShared_2347_; uint8_t v_isSharedCheck_2395_; 
v_toInductionSubgoal_2340_ = lean_ctor_get(v_b_2328_, 0);
lean_inc_ref(v_toInductionSubgoal_2340_);
v_ctorName_2341_ = lean_ctor_get(v_b_2328_, 1);
v_mvarId_2342_ = lean_ctor_get(v_toInductionSubgoal_2340_, 0);
v_fields_2343_ = lean_ctor_get(v_toInductionSubgoal_2340_, 1);
v_subst_2344_ = lean_ctor_get(v_toInductionSubgoal_2340_, 2);
v_isSharedCheck_2395_ = !lean_is_exclusive(v_toInductionSubgoal_2340_);
if (v_isSharedCheck_2395_ == 0)
{
v___x_2346_ = v_toInductionSubgoal_2340_;
v_isShared_2347_ = v_isSharedCheck_2395_;
goto v_resetjp_2345_;
}
else
{
lean_inc(v_subst_2344_);
lean_inc(v_fields_2343_);
lean_inc(v_mvarId_2342_);
lean_dec(v_toInductionSubgoal_2340_);
v___x_2346_ = lean_box(0);
v_isShared_2347_ = v_isSharedCheck_2395_;
goto v_resetjp_2345_;
}
v_resetjp_2345_:
{
lean_object* v___x_2348_; lean_object* v___x_2349_; 
v___x_2348_ = lean_array_uget_borrowed(v_as_2325_, v_i_2326_);
lean_inc(v___x_2348_);
v___x_2349_ = l_Lean_Meta_FVarSubst_get(v_subst_2344_, v___x_2348_);
if (lean_obj_tag(v___x_2349_) == 1)
{
lean_object* v_fvarId_2350_; lean_object* v___x_2351_; 
v_fvarId_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_fvarId_2350_);
lean_dec_ref_known(v___x_2349_, 1);
v___x_2351_ = l_Lean_Meta_saveState___redArg(v___y_2330_, v___y_2332_);
if (lean_obj_tag(v___x_2351_) == 0)
{
lean_object* v_a_2352_; lean_object* v___x_2353_; 
v_a_2352_ = lean_ctor_get(v___x_2351_, 0);
lean_inc(v_a_2352_);
lean_dec_ref_known(v___x_2351_, 1);
v___x_2353_ = l_Lean_MVarId_clear(v_mvarId_2342_, v_fvarId_2350_, v___y_2329_, v___y_2330_, v___y_2331_, v___y_2332_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v___x_2355_; uint8_t v_isShared_2356_; uint8_t v_isSharedCheck_2365_; 
lean_inc(v_ctorName_2341_);
lean_dec(v_a_2352_);
v_isSharedCheck_2365_ = !lean_is_exclusive(v_b_2328_);
if (v_isSharedCheck_2365_ == 0)
{
lean_object* v_unused_2366_; lean_object* v_unused_2367_; 
v_unused_2366_ = lean_ctor_get(v_b_2328_, 1);
lean_dec(v_unused_2366_);
v_unused_2367_ = lean_ctor_get(v_b_2328_, 0);
lean_dec(v_unused_2367_);
v___x_2355_ = v_b_2328_;
v_isShared_2356_ = v_isSharedCheck_2365_;
goto v_resetjp_2354_;
}
else
{
lean_dec(v_b_2328_);
v___x_2355_ = lean_box(0);
v_isShared_2356_ = v_isSharedCheck_2365_;
goto v_resetjp_2354_;
}
v_resetjp_2354_:
{
lean_object* v_a_2357_; lean_object* v___x_2358_; lean_object* v___x_2360_; 
v_a_2357_ = lean_ctor_get(v___x_2353_, 0);
lean_inc(v_a_2357_);
lean_dec_ref_known(v___x_2353_, 1);
v___x_2358_ = l_Lean_Meta_FVarSubst_erase(v_subst_2344_, v___x_2348_);
if (v_isShared_2347_ == 0)
{
lean_ctor_set(v___x_2346_, 2, v___x_2358_);
lean_ctor_set(v___x_2346_, 0, v_a_2357_);
v___x_2360_ = v___x_2346_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2364_; 
v_reuseFailAlloc_2364_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2364_, 0, v_a_2357_);
lean_ctor_set(v_reuseFailAlloc_2364_, 1, v_fields_2343_);
lean_ctor_set(v_reuseFailAlloc_2364_, 2, v___x_2358_);
v___x_2360_ = v_reuseFailAlloc_2364_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
lean_object* v___x_2362_; 
if (v_isShared_2356_ == 0)
{
lean_ctor_set(v___x_2355_, 0, v___x_2360_);
v___x_2362_ = v___x_2355_;
goto v_reusejp_2361_;
}
else
{
lean_object* v_reuseFailAlloc_2363_; 
v_reuseFailAlloc_2363_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2363_, 0, v___x_2360_);
lean_ctor_set(v_reuseFailAlloc_2363_, 1, v_ctorName_2341_);
v___x_2362_ = v_reuseFailAlloc_2363_;
goto v_reusejp_2361_;
}
v_reusejp_2361_:
{
v_a_2335_ = v___x_2362_;
goto v___jp_2334_;
}
}
}
}
else
{
lean_object* v_a_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2386_; 
lean_del_object(v___x_2346_);
lean_dec(v_subst_2344_);
lean_dec_ref(v_fields_2343_);
v_a_2368_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2386_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2386_ == 0)
{
v___x_2370_ = v___x_2353_;
v_isShared_2371_ = v_isSharedCheck_2386_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_a_2368_);
lean_dec(v___x_2353_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2386_;
goto v_resetjp_2369_;
}
v_resetjp_2369_:
{
lean_object* v___x_2373_; 
lean_inc(v_a_2368_);
if (v_isShared_2371_ == 0)
{
v___x_2373_ = v___x_2370_;
goto v_reusejp_2372_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v_a_2368_);
v___x_2373_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2372_;
}
v_reusejp_2372_:
{
uint8_t v___x_2374_; 
v___x_2374_ = l_Lean_Exception_isInterrupt(v_a_2368_);
if (v___x_2374_ == 0)
{
uint8_t v___x_2375_; 
v___x_2375_ = l_Lean_Exception_isRuntime(v_a_2368_);
if (v___x_2375_ == 0)
{
lean_object* v___x_2376_; 
lean_dec_ref(v___x_2373_);
v___x_2376_ = l_Lean_Meta_SavedState_restore___redArg(v_a_2352_, v___y_2330_, v___y_2332_);
if (lean_obj_tag(v___x_2376_) == 0)
{
lean_dec_ref_known(v___x_2376_, 1);
v_a_2335_ = v_b_2328_;
goto v___jp_2334_;
}
else
{
lean_object* v_a_2377_; lean_object* v___x_2379_; uint8_t v_isShared_2380_; uint8_t v_isSharedCheck_2384_; 
lean_dec_ref(v_b_2328_);
v_a_2377_ = lean_ctor_get(v___x_2376_, 0);
v_isSharedCheck_2384_ = !lean_is_exclusive(v___x_2376_);
if (v_isSharedCheck_2384_ == 0)
{
v___x_2379_ = v___x_2376_;
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
else
{
lean_inc(v_a_2377_);
lean_dec(v___x_2376_);
v___x_2379_ = lean_box(0);
v_isShared_2380_ = v_isSharedCheck_2384_;
goto v_resetjp_2378_;
}
v_resetjp_2378_:
{
lean_object* v___x_2382_; 
if (v_isShared_2380_ == 0)
{
v___x_2382_ = v___x_2379_;
goto v_reusejp_2381_;
}
else
{
lean_object* v_reuseFailAlloc_2383_; 
v_reuseFailAlloc_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2383_, 0, v_a_2377_);
v___x_2382_ = v_reuseFailAlloc_2383_;
goto v_reusejp_2381_;
}
v_reusejp_2381_:
{
return v___x_2382_;
}
}
}
}
else
{
lean_dec(v_a_2352_);
lean_dec_ref(v_b_2328_);
return v___x_2373_;
}
}
else
{
lean_dec(v_a_2368_);
lean_dec(v_a_2352_);
lean_dec_ref(v_b_2328_);
return v___x_2373_;
}
}
}
}
}
else
{
lean_object* v_a_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2394_; 
lean_dec(v_fvarId_2350_);
lean_del_object(v___x_2346_);
lean_dec(v_subst_2344_);
lean_dec_ref(v_fields_2343_);
lean_dec(v_mvarId_2342_);
lean_dec_ref(v_b_2328_);
v_a_2387_ = lean_ctor_get(v___x_2351_, 0);
v_isSharedCheck_2394_ = !lean_is_exclusive(v___x_2351_);
if (v_isSharedCheck_2394_ == 0)
{
v___x_2389_ = v___x_2351_;
v_isShared_2390_ = v_isSharedCheck_2394_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_a_2387_);
lean_dec(v___x_2351_);
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
lean_dec_ref(v___x_2349_);
lean_del_object(v___x_2346_);
lean_dec(v_subst_2344_);
lean_dec_ref(v_fields_2343_);
lean_dec(v_mvarId_2342_);
v_a_2335_ = v_b_2328_;
goto v___jp_2334_;
}
}
}
else
{
lean_object* v___x_2396_; 
v___x_2396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2396_, 0, v_b_2328_);
return v___x_2396_;
}
v___jp_2334_:
{
size_t v___x_2336_; size_t v___x_2337_; 
v___x_2336_ = ((size_t)1ULL);
v___x_2337_ = lean_usize_add(v_i_2326_, v___x_2336_);
v_i_2326_ = v___x_2337_;
v_b_2328_ = v_a_2335_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0___boxed(lean_object* v_as_2397_, lean_object* v_i_2398_, lean_object* v_stop_2399_, lean_object* v_b_2400_, lean_object* v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_){
_start:
{
size_t v_i_boxed_2406_; size_t v_stop_boxed_2407_; lean_object* v_res_2408_; 
v_i_boxed_2406_ = lean_unbox_usize(v_i_2398_);
lean_dec(v_i_2398_);
v_stop_boxed_2407_ = lean_unbox_usize(v_stop_2399_);
lean_dec(v_stop_2399_);
v_res_2408_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_as_2397_, v_i_boxed_2406_, v_stop_boxed_2407_, v_b_2400_, v___y_2401_, v___y_2402_, v___y_2403_, v___y_2404_);
lean_dec(v___y_2404_);
lean_dec_ref(v___y_2403_);
lean_dec(v___y_2402_);
lean_dec_ref(v___y_2401_);
lean_dec_ref(v_as_2397_);
return v_res_2408_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(lean_object* v_indicesFVarIds_2409_, size_t v_sz_2410_, size_t v_i_2411_, lean_object* v_bs_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_){
_start:
{
uint8_t v___x_2418_; 
v___x_2418_ = lean_usize_dec_lt(v_i_2411_, v_sz_2410_);
if (v___x_2418_ == 0)
{
lean_object* v___x_2419_; 
v___x_2419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2419_, 0, v_bs_2412_);
return v___x_2419_;
}
else
{
lean_object* v_v_2420_; lean_object* v___x_2421_; lean_object* v_bs_x27_2422_; lean_object* v_a_2424_; lean_object* v___x_2429_; uint8_t v___x_2430_; 
v_v_2420_ = lean_array_uget(v_bs_2412_, v_i_2411_);
v___x_2421_ = lean_unsigned_to_nat(0u);
v_bs_x27_2422_ = lean_array_uset(v_bs_2412_, v_i_2411_, v___x_2421_);
v___x_2429_ = lean_array_get_size(v_indicesFVarIds_2409_);
v___x_2430_ = lean_nat_dec_lt(v___x_2421_, v___x_2429_);
if (v___x_2430_ == 0)
{
v_a_2424_ = v_v_2420_;
goto v___jp_2423_;
}
else
{
size_t v___x_2431_; size_t v___x_2432_; lean_object* v___x_2433_; 
v___x_2431_ = ((size_t)0ULL);
v___x_2432_ = lean_usize_of_nat(v___x_2429_);
v___x_2433_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__0(v_indicesFVarIds_2409_, v___x_2431_, v___x_2432_, v_v_2420_, v___y_2413_, v___y_2414_, v___y_2415_, v___y_2416_);
if (lean_obj_tag(v___x_2433_) == 0)
{
lean_object* v_a_2434_; 
v_a_2434_ = lean_ctor_get(v___x_2433_, 0);
lean_inc(v_a_2434_);
lean_dec_ref_known(v___x_2433_, 1);
v_a_2424_ = v_a_2434_;
goto v___jp_2423_;
}
else
{
lean_object* v_a_2435_; lean_object* v___x_2437_; uint8_t v_isShared_2438_; uint8_t v_isSharedCheck_2442_; 
lean_dec_ref(v_bs_x27_2422_);
v_a_2435_ = lean_ctor_get(v___x_2433_, 0);
v_isSharedCheck_2442_ = !lean_is_exclusive(v___x_2433_);
if (v_isSharedCheck_2442_ == 0)
{
v___x_2437_ = v___x_2433_;
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
else
{
lean_inc(v_a_2435_);
lean_dec(v___x_2433_);
v___x_2437_ = lean_box(0);
v_isShared_2438_ = v_isSharedCheck_2442_;
goto v_resetjp_2436_;
}
v_resetjp_2436_:
{
lean_object* v___x_2440_; 
if (v_isShared_2438_ == 0)
{
v___x_2440_ = v___x_2437_;
goto v_reusejp_2439_;
}
else
{
lean_object* v_reuseFailAlloc_2441_; 
v_reuseFailAlloc_2441_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2441_, 0, v_a_2435_);
v___x_2440_ = v_reuseFailAlloc_2441_;
goto v_reusejp_2439_;
}
v_reusejp_2439_:
{
return v___x_2440_;
}
}
}
}
v___jp_2423_:
{
size_t v___x_2425_; size_t v___x_2426_; lean_object* v___x_2427_; 
v___x_2425_ = ((size_t)1ULL);
v___x_2426_ = lean_usize_add(v_i_2411_, v___x_2425_);
v___x_2427_ = lean_array_uset(v_bs_x27_2422_, v_i_2411_, v_a_2424_);
v_i_2411_ = v___x_2426_;
v_bs_2412_ = v___x_2427_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1___boxed(lean_object* v_indicesFVarIds_2443_, lean_object* v_sz_2444_, lean_object* v_i_2445_, lean_object* v_bs_2446_, lean_object* v___y_2447_, lean_object* v___y_2448_, lean_object* v___y_2449_, lean_object* v___y_2450_, lean_object* v___y_2451_){
_start:
{
size_t v_sz_boxed_2452_; size_t v_i_boxed_2453_; lean_object* v_res_2454_; 
v_sz_boxed_2452_ = lean_unbox_usize(v_sz_2444_);
lean_dec(v_sz_2444_);
v_i_boxed_2453_ = lean_unbox_usize(v_i_2445_);
lean_dec(v_i_2445_);
v_res_2454_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(v_indicesFVarIds_2443_, v_sz_boxed_2452_, v_i_boxed_2453_, v_bs_2446_, v___y_2447_, v___y_2448_, v___y_2449_, v___y_2450_);
lean_dec(v___y_2450_);
lean_dec_ref(v___y_2449_);
lean_dec(v___y_2448_);
lean_dec_ref(v___y_2447_);
lean_dec_ref(v_indicesFVarIds_2443_);
return v_res_2454_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(lean_object* v_s_u2081_2455_, lean_object* v_s_u2082_2456_, lean_object* v_a_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_){
_start:
{
lean_object* v_indicesFVarIds_2462_; size_t v_sz_2463_; size_t v___x_2464_; lean_object* v___x_2465_; 
v_indicesFVarIds_2462_ = lean_ctor_get(v_s_u2081_2455_, 1);
v_sz_2463_ = lean_array_size(v_s_u2082_2456_);
v___x_2464_ = ((size_t)0ULL);
v___x_2465_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices_spec__1(v_indicesFVarIds_2462_, v_sz_2463_, v___x_2464_, v_s_u2082_2456_, v_a_2457_, v_a_2458_, v_a_2459_, v_a_2460_);
return v___x_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices___boxed(lean_object* v_s_u2081_2466_, lean_object* v_s_u2082_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_){
_start:
{
lean_object* v_res_2473_; 
v_res_2473_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(v_s_u2081_2466_, v_s_u2082_2467_, v_a_2468_, v_a_2469_, v_a_2470_, v_a_2471_);
lean_dec(v_a_2471_);
lean_dec_ref(v_a_2470_);
lean_dec(v_a_2469_);
lean_dec_ref(v_a_2468_);
lean_dec_ref(v_s_u2081_2466_);
return v_res_2473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(lean_object* v_ctorNames_2474_, lean_object* v_us_2475_, lean_object* v_params_2476_, lean_object* v_majorFVarId_2477_, size_t v_sz_2478_, size_t v_i_2479_, lean_object* v_bs_2480_){
_start:
{
uint8_t v___x_2481_; 
v___x_2481_ = lean_usize_dec_lt(v_i_2479_, v_sz_2478_);
if (v___x_2481_ == 0)
{
lean_dec(v_majorFVarId_2477_);
lean_dec(v_us_2475_);
return v_bs_2480_;
}
else
{
lean_object* v_v_2482_; lean_object* v___x_2483_; lean_object* v_bs_x27_2484_; lean_object* v___y_2486_; lean_object* v___x_2491_; lean_object* v___x_2492_; uint8_t v___x_2493_; 
v_v_2482_ = lean_array_uget(v_bs_2480_, v_i_2479_);
v___x_2483_ = lean_unsigned_to_nat(0u);
v_bs_x27_2484_ = lean_array_uset(v_bs_2480_, v_i_2479_, v___x_2483_);
v___x_2491_ = lean_usize_to_nat(v_i_2479_);
v___x_2492_ = lean_array_get_size(v_ctorNames_2474_);
v___x_2493_ = lean_nat_dec_lt(v___x_2491_, v___x_2492_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; lean_object* v___x_2495_; 
lean_dec(v___x_2491_);
v___x_2494_ = lean_box(0);
v___x_2495_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2495_, 0, v_v_2482_);
lean_ctor_set(v___x_2495_, 1, v___x_2494_);
v___y_2486_ = v___x_2495_;
goto v___jp_2485_;
}
else
{
lean_object* v_mvarId_2496_; lean_object* v_fields_2497_; lean_object* v_subst_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2513_; 
v_mvarId_2496_ = lean_ctor_get(v_v_2482_, 0);
v_fields_2497_ = lean_ctor_get(v_v_2482_, 1);
v_subst_2498_ = lean_ctor_get(v_v_2482_, 2);
v_isSharedCheck_2513_ = !lean_is_exclusive(v_v_2482_);
if (v_isSharedCheck_2513_ == 0)
{
v___x_2500_ = v_v_2482_;
v_isShared_2501_ = v_isSharedCheck_2513_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_subst_2498_);
lean_inc(v_fields_2497_);
lean_inc(v_mvarId_2496_);
lean_dec(v_v_2482_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2513_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v_ctorName_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v_ctorApp_2505_; lean_object* v___x_2506_; lean_object* v_subst_2507_; lean_object* v___x_2509_; 
v_ctorName_2502_ = lean_array_fget_borrowed(v_ctorNames_2474_, v___x_2491_);
lean_dec(v___x_2491_);
lean_inc(v_us_2475_);
lean_inc(v_ctorName_2502_);
v___x_2503_ = l_Lean_mkConst(v_ctorName_2502_, v_us_2475_);
v___x_2504_ = l_Lean_mkAppN(v___x_2503_, v_params_2476_);
v_ctorApp_2505_ = l_Lean_mkAppN(v___x_2504_, v_fields_2497_);
v___x_2506_ = l_Lean_Meta_FVarSubst_erase(v_subst_2498_, v_majorFVarId_2477_);
lean_inc(v_majorFVarId_2477_);
v_subst_2507_ = l_Lean_Meta_FVarSubst_insert(v___x_2506_, v_majorFVarId_2477_, v_ctorApp_2505_);
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 2, v_subst_2507_);
v___x_2509_ = v___x_2500_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2512_; 
v_reuseFailAlloc_2512_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2512_, 0, v_mvarId_2496_);
lean_ctor_set(v_reuseFailAlloc_2512_, 1, v_fields_2497_);
lean_ctor_set(v_reuseFailAlloc_2512_, 2, v_subst_2507_);
v___x_2509_ = v_reuseFailAlloc_2512_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
lean_object* v___x_2510_; lean_object* v___x_2511_; 
lean_inc(v_ctorName_2502_);
v___x_2510_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2510_, 0, v_ctorName_2502_);
v___x_2511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2511_, 0, v___x_2509_);
lean_ctor_set(v___x_2511_, 1, v___x_2510_);
v___y_2486_ = v___x_2511_;
goto v___jp_2485_;
}
}
}
v___jp_2485_:
{
size_t v___x_2487_; size_t v___x_2488_; lean_object* v___x_2489_; 
v___x_2487_ = ((size_t)1ULL);
v___x_2488_ = lean_usize_add(v_i_2479_, v___x_2487_);
v___x_2489_ = lean_array_uset(v_bs_x27_2484_, v_i_2479_, v___y_2486_);
v_i_2479_ = v___x_2488_;
v_bs_2480_ = v___x_2489_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg___boxed(lean_object* v_ctorNames_2514_, lean_object* v_us_2515_, lean_object* v_params_2516_, lean_object* v_majorFVarId_2517_, lean_object* v_sz_2518_, lean_object* v_i_2519_, lean_object* v_bs_2520_){
_start:
{
size_t v_sz_boxed_2521_; size_t v_i_boxed_2522_; lean_object* v_res_2523_; 
v_sz_boxed_2521_ = lean_unbox_usize(v_sz_2518_);
lean_dec(v_sz_2518_);
v_i_boxed_2522_ = lean_unbox_usize(v_i_2519_);
lean_dec(v_i_2519_);
v_res_2523_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2514_, v_us_2515_, v_params_2516_, v_majorFVarId_2517_, v_sz_boxed_2521_, v_i_boxed_2522_, v_bs_2520_);
lean_dec_ref(v_params_2516_);
lean_dec_ref(v_ctorNames_2514_);
return v_res_2523_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(lean_object* v_s_2524_, lean_object* v_ctorNames_2525_, lean_object* v_majorFVarId_2526_, lean_object* v_us_2527_, lean_object* v_params_2528_){
_start:
{
size_t v_sz_2529_; size_t v___x_2530_; lean_object* v___x_2531_; 
v_sz_2529_ = lean_array_size(v_s_2524_);
v___x_2530_ = ((size_t)0ULL);
v___x_2531_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2525_, v_us_2527_, v_params_2528_, v_majorFVarId_2526_, v_sz_2529_, v___x_2530_, v_s_2524_);
return v___x_2531_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals___boxed(lean_object* v_s_2532_, lean_object* v_ctorNames_2533_, lean_object* v_majorFVarId_2534_, lean_object* v_us_2535_, lean_object* v_params_2536_){
_start:
{
lean_object* v_res_2537_; 
v_res_2537_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_s_2532_, v_ctorNames_2533_, v_majorFVarId_2534_, v_us_2535_, v_params_2536_);
lean_dec_ref(v_params_2536_);
lean_dec_ref(v_ctorNames_2533_);
return v_res_2537_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(lean_object* v_ctorNames_2538_, lean_object* v_us_2539_, lean_object* v_params_2540_, lean_object* v_majorFVarId_2541_, lean_object* v_as_2542_, size_t v_sz_2543_, size_t v_i_2544_, lean_object* v_bs_2545_){
_start:
{
lean_object* v___x_2546_; 
v___x_2546_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___redArg(v_ctorNames_2538_, v_us_2539_, v_params_2540_, v_majorFVarId_2541_, v_sz_2543_, v_i_2544_, v_bs_2545_);
return v___x_2546_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0___boxed(lean_object* v_ctorNames_2547_, lean_object* v_us_2548_, lean_object* v_params_2549_, lean_object* v_majorFVarId_2550_, lean_object* v_as_2551_, lean_object* v_sz_2552_, lean_object* v_i_2553_, lean_object* v_bs_2554_){
_start:
{
size_t v_sz_boxed_2555_; size_t v_i_boxed_2556_; lean_object* v_res_2557_; 
v_sz_boxed_2555_ = lean_unbox_usize(v_sz_2552_);
lean_dec(v_sz_2552_);
v_i_boxed_2556_ = lean_unbox_usize(v_i_2553_);
lean_dec(v_i_2553_);
v_res_2557_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals_spec__0(v_ctorNames_2547_, v_us_2548_, v_params_2549_, v_majorFVarId_2550_, v_as_2551_, v_sz_boxed_2555_, v_i_boxed_2556_, v_bs_2554_);
lean_dec_ref(v_as_2551_);
lean_dec_ref(v_params_2549_);
lean_dec_ref(v_ctorNames_2547_);
return v_res_2557_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3(void){
_start:
{
lean_object* v___x_2563_; lean_object* v___x_2564_; 
v___x_2563_ = l_Lean_maxRecDepthErrorMessage;
v___x_2564_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2563_);
return v___x_2564_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4(void){
_start:
{
lean_object* v___x_2565_; lean_object* v___x_2566_; 
v___x_2565_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__3);
v___x_2566_ = l_Lean_MessageData_ofFormat(v___x_2565_);
return v___x_2566_;
}
}
static lean_object* _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5(void){
_start:
{
lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; 
v___x_2567_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__4);
v___x_2568_ = ((lean_object*)(l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__2));
v___x_2569_ = lean_alloc_ctor(8, 2, 0);
lean_ctor_set(v___x_2569_, 0, v___x_2568_);
lean_ctor_set(v___x_2569_, 1, v___x_2567_);
return v___x_2569_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(lean_object* v_ref_2570_){
_start:
{
lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; 
v___x_2572_ = lean_obj_once(&l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5, &l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5_once, _init_l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___closed__5);
v___x_2573_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2573_, 0, v_ref_2570_);
lean_ctor_set(v___x_2573_, 1, v___x_2572_);
v___x_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
return v___x_2574_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg___boxed(lean_object* v_ref_2575_, lean_object* v___y_2576_){
_start:
{
lean_object* v_res_2577_; 
v_res_2577_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2575_);
return v_res_2577_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(lean_object* v_00_u03b1_2578_, lean_object* v_ref_2579_, lean_object* v___y_2580_, lean_object* v___y_2581_, lean_object* v___y_2582_, lean_object* v___y_2583_){
_start:
{
lean_object* v___x_2585_; 
v___x_2585_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2579_);
return v___x_2585_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___boxed(lean_object* v_00_u03b1_2586_, lean_object* v_ref_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_, lean_object* v___y_2590_, lean_object* v___y_2591_, lean_object* v___y_2592_){
_start:
{
lean_object* v_res_2593_; 
v_res_2593_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0(v_00_u03b1_2586_, v_ref_2587_, v___y_2588_, v___y_2589_, v___y_2590_, v___y_2591_);
lean_dec(v___y_2591_);
lean_dec_ref(v___y_2590_);
lean_dec(v___y_2589_);
lean_dec_ref(v___y_2588_);
return v_res_2593_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f(lean_object* v_numEqs_2595_, lean_object* v_mvarId_2596_, lean_object* v_subst_2597_, lean_object* v_caseName_x3f_2598_, lean_object* v_a_2599_, lean_object* v_a_2600_, lean_object* v_a_2601_, lean_object* v_a_2602_){
_start:
{
lean_object* v_toCold_2604_; lean_object* v_currRecDepth_2605_; lean_object* v_ref_2606_; uint16_t v_optionFlags_2607_; uint8_t v_suppressElabErrors_2608_; uint8_t v_checkDeprecated_2609_; uint8_t v_isRecordingDeps_2610_; lean_object* v_maxRecDepth_2611_; lean_object* v___x_2612_; uint8_t v___x_2613_; uint8_t v___x_2659_; 
v_toCold_2604_ = lean_ctor_get(v_a_2601_, 0);
lean_inc_ref(v_toCold_2604_);
v_currRecDepth_2605_ = lean_ctor_get(v_a_2601_, 1);
lean_inc(v_currRecDepth_2605_);
v_ref_2606_ = lean_ctor_get(v_a_2601_, 2);
lean_inc(v_ref_2606_);
v_optionFlags_2607_ = lean_ctor_get_uint16(v_a_2601_, sizeof(void*)*3);
v_suppressElabErrors_2608_ = lean_ctor_get_uint8(v_a_2601_, sizeof(void*)*3 + 2);
v_checkDeprecated_2609_ = lean_ctor_get_uint8(v_a_2601_, sizeof(void*)*3 + 3);
v_isRecordingDeps_2610_ = lean_ctor_get_uint8(v_a_2601_, sizeof(void*)*3 + 4);
lean_dec_ref(v_a_2601_);
v_maxRecDepth_2611_ = lean_ctor_get(v_toCold_2604_, 3);
v___x_2612_ = lean_unsigned_to_nat(0u);
v___x_2613_ = lean_nat_dec_eq(v_numEqs_2595_, v___x_2612_);
v___x_2659_ = lean_nat_dec_eq(v_maxRecDepth_2611_, v___x_2612_);
if (v___x_2659_ == 0)
{
uint8_t v___x_2660_; 
v___x_2660_ = lean_nat_dec_eq(v_currRecDepth_2605_, v_maxRecDepth_2611_);
if (v___x_2660_ == 0)
{
goto v___jp_2614_;
}
else
{
lean_object* v___x_2661_; 
lean_dec(v_currRecDepth_2605_);
lean_dec_ref(v_toCold_2604_);
lean_dec(v_caseName_x3f_2598_);
lean_dec(v_subst_2597_);
lean_dec(v_mvarId_2596_);
lean_dec(v_numEqs_2595_);
v___x_2661_ = l_Lean_throwMaxRecDepthAt___at___00Lean_Meta_Cases_unifyEqs_x3f_spec__0___redArg(v_ref_2606_);
return v___x_2661_;
}
}
else
{
goto v___jp_2614_;
}
v___jp_2614_:
{
if (v___x_2613_ == 0)
{
lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2615_ = lean_unsigned_to_nat(1u);
v___x_2616_ = lean_nat_add(v_currRecDepth_2605_, v___x_2615_);
lean_dec(v_currRecDepth_2605_);
v___x_2617_ = lean_alloc_ctor(0, 3, 5);
lean_ctor_set(v___x_2617_, 0, v_toCold_2604_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
lean_ctor_set(v___x_2617_, 2, v_ref_2606_);
lean_ctor_set_uint16(v___x_2617_, sizeof(void*)*3, v_optionFlags_2607_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*3 + 2, v_suppressElabErrors_2608_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*3 + 3, v_checkDeprecated_2609_);
lean_ctor_set_uint8(v___x_2617_, sizeof(void*)*3 + 4, v_isRecordingDeps_2610_);
v___x_2618_ = l_Lean_Meta_intro1Core(v_mvarId_2596_, v___x_2613_, v_a_2599_, v_a_2600_, v___x_2617_, v_a_2602_);
if (lean_obj_tag(v___x_2618_) == 0)
{
lean_object* v_a_2619_; lean_object* v_fst_2620_; lean_object* v_snd_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; 
v_a_2619_ = lean_ctor_get(v___x_2618_, 0);
lean_inc(v_a_2619_);
lean_dec_ref_known(v___x_2618_, 1);
v_fst_2620_ = lean_ctor_get(v_a_2619_, 0);
lean_inc(v_fst_2620_);
v_snd_2621_ = lean_ctor_get(v_a_2619_, 1);
lean_inc(v_snd_2621_);
lean_dec(v_a_2619_);
v___x_2622_ = ((lean_object*)(l_Lean_Meta_Cases_unifyEqs_x3f___closed__0));
lean_inc(v_caseName_x3f_2598_);
v___x_2623_ = l_Lean_Meta_unifyEq_x3f(v_snd_2621_, v_fst_2620_, v_subst_2597_, v___x_2622_, v_caseName_x3f_2598_, v_a_2599_, v_a_2600_, v___x_2617_, v_a_2602_);
if (lean_obj_tag(v___x_2623_) == 0)
{
lean_object* v_a_2624_; lean_object* v___x_2626_; uint8_t v_isShared_2627_; uint8_t v_isSharedCheck_2639_; 
v_a_2624_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2639_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2639_ == 0)
{
v___x_2626_ = v___x_2623_;
v_isShared_2627_ = v_isSharedCheck_2639_;
goto v_resetjp_2625_;
}
else
{
lean_inc(v_a_2624_);
lean_dec(v___x_2623_);
v___x_2626_ = lean_box(0);
v_isShared_2627_ = v_isSharedCheck_2639_;
goto v_resetjp_2625_;
}
v_resetjp_2625_:
{
if (lean_obj_tag(v_a_2624_) == 1)
{
lean_object* v_val_2628_; lean_object* v_mvarId_2629_; lean_object* v_subst_2630_; lean_object* v_numNewEqs_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
lean_del_object(v___x_2626_);
v_val_2628_ = lean_ctor_get(v_a_2624_, 0);
lean_inc(v_val_2628_);
lean_dec_ref_known(v_a_2624_, 1);
v_mvarId_2629_ = lean_ctor_get(v_val_2628_, 0);
lean_inc(v_mvarId_2629_);
v_subst_2630_ = lean_ctor_get(v_val_2628_, 1);
lean_inc(v_subst_2630_);
v_numNewEqs_2631_ = lean_ctor_get(v_val_2628_, 2);
lean_inc(v_numNewEqs_2631_);
lean_dec(v_val_2628_);
v___x_2632_ = lean_nat_sub(v_numEqs_2595_, v___x_2615_);
lean_dec(v_numEqs_2595_);
v___x_2633_ = lean_nat_add(v___x_2632_, v_numNewEqs_2631_);
lean_dec(v_numNewEqs_2631_);
lean_dec(v___x_2632_);
v_numEqs_2595_ = v___x_2633_;
v_mvarId_2596_ = v_mvarId_2629_;
v_subst_2597_ = v_subst_2630_;
v_a_2601_ = v___x_2617_;
goto _start;
}
else
{
lean_object* v___x_2635_; lean_object* v___x_2637_; 
lean_dec(v_a_2624_);
lean_dec_ref_known(v___x_2617_, 3);
lean_dec(v_caseName_x3f_2598_);
lean_dec(v_numEqs_2595_);
v___x_2635_ = lean_box(0);
if (v_isShared_2627_ == 0)
{
lean_ctor_set(v___x_2626_, 0, v___x_2635_);
v___x_2637_ = v___x_2626_;
goto v_reusejp_2636_;
}
else
{
lean_object* v_reuseFailAlloc_2638_; 
v_reuseFailAlloc_2638_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2638_, 0, v___x_2635_);
v___x_2637_ = v_reuseFailAlloc_2638_;
goto v_reusejp_2636_;
}
v_reusejp_2636_:
{
return v___x_2637_;
}
}
}
}
else
{
lean_object* v_a_2640_; lean_object* v___x_2642_; uint8_t v_isShared_2643_; uint8_t v_isSharedCheck_2647_; 
lean_dec_ref_known(v___x_2617_, 3);
lean_dec(v_caseName_x3f_2598_);
lean_dec(v_numEqs_2595_);
v_a_2640_ = lean_ctor_get(v___x_2623_, 0);
v_isSharedCheck_2647_ = !lean_is_exclusive(v___x_2623_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2642_ = v___x_2623_;
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
else
{
lean_inc(v_a_2640_);
lean_dec(v___x_2623_);
v___x_2642_ = lean_box(0);
v_isShared_2643_ = v_isSharedCheck_2647_;
goto v_resetjp_2641_;
}
v_resetjp_2641_:
{
lean_object* v___x_2645_; 
if (v_isShared_2643_ == 0)
{
v___x_2645_ = v___x_2642_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_a_2640_);
v___x_2645_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
return v___x_2645_;
}
}
}
}
else
{
lean_object* v_a_2648_; lean_object* v___x_2650_; uint8_t v_isShared_2651_; uint8_t v_isSharedCheck_2655_; 
lean_dec_ref_known(v___x_2617_, 3);
lean_dec(v_caseName_x3f_2598_);
lean_dec(v_subst_2597_);
lean_dec(v_numEqs_2595_);
v_a_2648_ = lean_ctor_get(v___x_2618_, 0);
v_isSharedCheck_2655_ = !lean_is_exclusive(v___x_2618_);
if (v_isSharedCheck_2655_ == 0)
{
v___x_2650_ = v___x_2618_;
v_isShared_2651_ = v_isSharedCheck_2655_;
goto v_resetjp_2649_;
}
else
{
lean_inc(v_a_2648_);
lean_dec(v___x_2618_);
v___x_2650_ = lean_box(0);
v_isShared_2651_ = v_isSharedCheck_2655_;
goto v_resetjp_2649_;
}
v_resetjp_2649_:
{
lean_object* v___x_2653_; 
if (v_isShared_2651_ == 0)
{
v___x_2653_ = v___x_2650_;
goto v_reusejp_2652_;
}
else
{
lean_object* v_reuseFailAlloc_2654_; 
v_reuseFailAlloc_2654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2654_, 0, v_a_2648_);
v___x_2653_ = v_reuseFailAlloc_2654_;
goto v_reusejp_2652_;
}
v_reusejp_2652_:
{
return v___x_2653_;
}
}
}
}
else
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; 
lean_dec(v_ref_2606_);
lean_dec(v_currRecDepth_2605_);
lean_dec_ref(v_toCold_2604_);
lean_dec(v_caseName_x3f_2598_);
lean_dec(v_numEqs_2595_);
v___x_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2656_, 0, v_mvarId_2596_);
lean_ctor_set(v___x_2656_, 1, v_subst_2597_);
v___x_2657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2656_);
v___x_2658_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2658_, 0, v___x_2657_);
return v___x_2658_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_unifyEqs_x3f___boxed(lean_object* v_numEqs_2662_, lean_object* v_mvarId_2663_, lean_object* v_subst_2664_, lean_object* v_caseName_x3f_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_, lean_object* v_a_2670_){
_start:
{
lean_object* v_res_2671_; 
v_res_2671_ = l_Lean_Meta_Cases_unifyEqs_x3f(v_numEqs_2662_, v_mvarId_2663_, v_subst_2664_, v_caseName_x3f_2665_, v_a_2666_, v_a_2667_, v_a_2668_, v_a_2669_);
lean_dec(v_a_2669_);
lean_dec(v_a_2667_);
lean_dec_ref(v_a_2666_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(lean_object* v_snd_2672_, size_t v_sz_2673_, size_t v_i_2674_, lean_object* v_bs_2675_){
_start:
{
uint8_t v___x_2676_; 
v___x_2676_ = lean_usize_dec_lt(v_i_2674_, v_sz_2673_);
if (v___x_2676_ == 0)
{
lean_dec(v_snd_2672_);
return v_bs_2675_;
}
else
{
lean_object* v_v_2677_; lean_object* v___x_2678_; lean_object* v_bs_x27_2679_; lean_object* v___x_2680_; size_t v___x_2681_; size_t v___x_2682_; lean_object* v___x_2683_; 
v_v_2677_ = lean_array_uget(v_bs_2675_, v_i_2674_);
v___x_2678_ = lean_unsigned_to_nat(0u);
v_bs_x27_2679_ = lean_array_uset(v_bs_2675_, v_i_2674_, v___x_2678_);
lean_inc(v_snd_2672_);
v___x_2680_ = l_Lean_Meta_FVarSubst_apply(v_snd_2672_, v_v_2677_);
lean_dec(v_v_2677_);
v___x_2681_ = ((size_t)1ULL);
v___x_2682_ = lean_usize_add(v_i_2674_, v___x_2681_);
v___x_2683_ = lean_array_uset(v_bs_x27_2679_, v_i_2674_, v___x_2680_);
v_i_2674_ = v___x_2682_;
v_bs_2675_ = v___x_2683_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0___boxed(lean_object* v_snd_2685_, lean_object* v_sz_2686_, lean_object* v_i_2687_, lean_object* v_bs_2688_){
_start:
{
size_t v_sz_boxed_2689_; size_t v_i_boxed_2690_; lean_object* v_res_2691_; 
v_sz_boxed_2689_ = lean_unbox_usize(v_sz_2686_);
lean_dec(v_sz_2686_);
v_i_boxed_2690_ = lean_unbox_usize(v_i_2687_);
lean_dec(v_i_2687_);
v_res_2691_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(v_snd_2685_, v_sz_boxed_2689_, v_i_boxed_2690_, v_bs_2688_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(lean_object* v_numEqs_2692_, lean_object* v_as_2693_, size_t v_i_2694_, size_t v_stop_2695_, lean_object* v_b_2696_, lean_object* v___y_2697_, lean_object* v___y_2698_, lean_object* v___y_2699_, lean_object* v___y_2700_){
_start:
{
lean_object* v_a_2703_; uint8_t v___x_2707_; 
v___x_2707_ = lean_usize_dec_eq(v_i_2694_, v_stop_2695_);
if (v___x_2707_ == 0)
{
lean_object* v___x_2708_; lean_object* v_toInductionSubgoal_2709_; lean_object* v_ctorName_2710_; lean_object* v___x_2712_; uint8_t v_isShared_2713_; uint8_t v_isSharedCheck_2744_; 
v___x_2708_ = lean_array_uget(v_as_2693_, v_i_2694_);
v_toInductionSubgoal_2709_ = lean_ctor_get(v___x_2708_, 0);
v_ctorName_2710_ = lean_ctor_get(v___x_2708_, 1);
v_isSharedCheck_2744_ = !lean_is_exclusive(v___x_2708_);
if (v_isSharedCheck_2744_ == 0)
{
v___x_2712_ = v___x_2708_;
v_isShared_2713_ = v_isSharedCheck_2744_;
goto v_resetjp_2711_;
}
else
{
lean_inc(v_ctorName_2710_);
lean_inc(v_toInductionSubgoal_2709_);
lean_dec(v___x_2708_);
v___x_2712_ = lean_box(0);
v_isShared_2713_ = v_isSharedCheck_2744_;
goto v_resetjp_2711_;
}
v_resetjp_2711_:
{
lean_object* v_mvarId_2714_; lean_object* v_fields_2715_; lean_object* v_subst_2716_; lean_object* v___x_2718_; uint8_t v_isShared_2719_; uint8_t v_isSharedCheck_2743_; 
v_mvarId_2714_ = lean_ctor_get(v_toInductionSubgoal_2709_, 0);
v_fields_2715_ = lean_ctor_get(v_toInductionSubgoal_2709_, 1);
v_subst_2716_ = lean_ctor_get(v_toInductionSubgoal_2709_, 2);
v_isSharedCheck_2743_ = !lean_is_exclusive(v_toInductionSubgoal_2709_);
if (v_isSharedCheck_2743_ == 0)
{
v___x_2718_ = v_toInductionSubgoal_2709_;
v_isShared_2719_ = v_isSharedCheck_2743_;
goto v_resetjp_2717_;
}
else
{
lean_inc(v_subst_2716_);
lean_inc(v_fields_2715_);
lean_inc(v_mvarId_2714_);
lean_dec(v_toInductionSubgoal_2709_);
v___x_2718_ = lean_box(0);
v_isShared_2719_ = v_isSharedCheck_2743_;
goto v_resetjp_2717_;
}
v_resetjp_2717_:
{
lean_object* v___x_2720_; 
lean_inc_ref(v___y_2699_);
lean_inc(v_ctorName_2710_);
lean_inc(v_numEqs_2692_);
v___x_2720_ = l_Lean_Meta_Cases_unifyEqs_x3f(v_numEqs_2692_, v_mvarId_2714_, v_subst_2716_, v_ctorName_2710_, v___y_2697_, v___y_2698_, v___y_2699_, v___y_2700_);
if (lean_obj_tag(v___x_2720_) == 0)
{
lean_object* v_a_2721_; 
v_a_2721_ = lean_ctor_get(v___x_2720_, 0);
lean_inc(v_a_2721_);
lean_dec_ref_known(v___x_2720_, 1);
if (lean_obj_tag(v_a_2721_) == 0)
{
lean_del_object(v___x_2718_);
lean_dec_ref(v_fields_2715_);
lean_del_object(v___x_2712_);
lean_dec(v_ctorName_2710_);
v_a_2703_ = v_b_2696_;
goto v___jp_2702_;
}
else
{
lean_object* v_val_2722_; lean_object* v_fst_2723_; lean_object* v_snd_2724_; size_t v_sz_2725_; size_t v___x_2726_; lean_object* v___x_2727_; lean_object* v___x_2729_; 
v_val_2722_ = lean_ctor_get(v_a_2721_, 0);
lean_inc(v_val_2722_);
lean_dec_ref_known(v_a_2721_, 1);
v_fst_2723_ = lean_ctor_get(v_val_2722_, 0);
lean_inc(v_fst_2723_);
v_snd_2724_ = lean_ctor_get(v_val_2722_, 1);
lean_inc_n(v_snd_2724_, 2);
lean_dec(v_val_2722_);
v_sz_2725_ = lean_array_size(v_fields_2715_);
v___x_2726_ = ((size_t)0ULL);
v___x_2727_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__0(v_snd_2724_, v_sz_2725_, v___x_2726_, v_fields_2715_);
if (v_isShared_2719_ == 0)
{
lean_ctor_set(v___x_2718_, 2, v_snd_2724_);
lean_ctor_set(v___x_2718_, 1, v___x_2727_);
lean_ctor_set(v___x_2718_, 0, v_fst_2723_);
v___x_2729_ = v___x_2718_;
goto v_reusejp_2728_;
}
else
{
lean_object* v_reuseFailAlloc_2734_; 
v_reuseFailAlloc_2734_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2734_, 0, v_fst_2723_);
lean_ctor_set(v_reuseFailAlloc_2734_, 1, v___x_2727_);
lean_ctor_set(v_reuseFailAlloc_2734_, 2, v_snd_2724_);
v___x_2729_ = v_reuseFailAlloc_2734_;
goto v_reusejp_2728_;
}
v_reusejp_2728_:
{
lean_object* v___x_2731_; 
if (v_isShared_2713_ == 0)
{
lean_ctor_set(v___x_2712_, 0, v___x_2729_);
v___x_2731_ = v___x_2712_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2733_; 
v_reuseFailAlloc_2733_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2733_, 0, v___x_2729_);
lean_ctor_set(v_reuseFailAlloc_2733_, 1, v_ctorName_2710_);
v___x_2731_ = v_reuseFailAlloc_2733_;
goto v_reusejp_2730_;
}
v_reusejp_2730_:
{
lean_object* v___x_2732_; 
v___x_2732_ = lean_array_push(v_b_2696_, v___x_2731_);
v_a_2703_ = v___x_2732_;
goto v___jp_2702_;
}
}
}
}
else
{
lean_object* v_a_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2742_; 
lean_del_object(v___x_2718_);
lean_dec_ref(v_fields_2715_);
lean_del_object(v___x_2712_);
lean_dec(v_ctorName_2710_);
lean_dec_ref(v_b_2696_);
lean_dec(v_numEqs_2692_);
v_a_2735_ = lean_ctor_get(v___x_2720_, 0);
v_isSharedCheck_2742_ = !lean_is_exclusive(v___x_2720_);
if (v_isSharedCheck_2742_ == 0)
{
v___x_2737_ = v___x_2720_;
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_a_2735_);
lean_dec(v___x_2720_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2742_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v___x_2740_; 
if (v_isShared_2738_ == 0)
{
v___x_2740_ = v___x_2737_;
goto v_reusejp_2739_;
}
else
{
lean_object* v_reuseFailAlloc_2741_; 
v_reuseFailAlloc_2741_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2741_, 0, v_a_2735_);
v___x_2740_ = v_reuseFailAlloc_2741_;
goto v_reusejp_2739_;
}
v_reusejp_2739_:
{
return v___x_2740_;
}
}
}
}
}
}
else
{
lean_object* v___x_2745_; 
lean_dec(v_numEqs_2692_);
v___x_2745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2745_, 0, v_b_2696_);
return v___x_2745_;
}
v___jp_2702_:
{
size_t v___x_2704_; size_t v___x_2705_; 
v___x_2704_ = ((size_t)1ULL);
v___x_2705_ = lean_usize_add(v_i_2694_, v___x_2704_);
v_i_2694_ = v___x_2705_;
v_b_2696_ = v_a_2703_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1___boxed(lean_object* v_numEqs_2746_, lean_object* v_as_2747_, lean_object* v_i_2748_, lean_object* v_stop_2749_, lean_object* v_b_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_, lean_object* v___y_2753_, lean_object* v___y_2754_, lean_object* v___y_2755_){
_start:
{
size_t v_i_boxed_2756_; size_t v_stop_boxed_2757_; lean_object* v_res_2758_; 
v_i_boxed_2756_ = lean_unbox_usize(v_i_2748_);
lean_dec(v_i_2748_);
v_stop_boxed_2757_ = lean_unbox_usize(v_stop_2749_);
lean_dec(v_stop_2749_);
v_res_2758_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2746_, v_as_2747_, v_i_boxed_2756_, v_stop_boxed_2757_, v_b_2750_, v___y_2751_, v___y_2752_, v___y_2753_, v___y_2754_);
lean_dec(v___y_2754_);
lean_dec_ref(v___y_2753_);
lean_dec(v___y_2752_);
lean_dec_ref(v___y_2751_);
lean_dec_ref(v_as_2747_);
return v_res_2758_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(lean_object* v_numEqs_2761_, lean_object* v_as_2762_, lean_object* v_start_2763_, lean_object* v_stop_2764_, lean_object* v___y_2765_, lean_object* v___y_2766_, lean_object* v___y_2767_, lean_object* v___y_2768_){
_start:
{
lean_object* v___x_2770_; uint8_t v___x_2771_; 
v___x_2770_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___closed__0));
v___x_2771_ = lean_nat_dec_lt(v_start_2763_, v_stop_2764_);
if (v___x_2771_ == 0)
{
lean_object* v___x_2772_; 
lean_dec(v_numEqs_2761_);
v___x_2772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2772_, 0, v___x_2770_);
return v___x_2772_;
}
else
{
lean_object* v___x_2773_; uint8_t v___x_2774_; 
v___x_2773_ = lean_array_get_size(v_as_2762_);
v___x_2774_ = lean_nat_dec_le(v_stop_2764_, v___x_2773_);
if (v___x_2774_ == 0)
{
uint8_t v___x_2775_; 
v___x_2775_ = lean_nat_dec_lt(v_start_2763_, v___x_2773_);
if (v___x_2775_ == 0)
{
lean_object* v___x_2776_; 
lean_dec(v_numEqs_2761_);
v___x_2776_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2776_, 0, v___x_2770_);
return v___x_2776_;
}
else
{
size_t v___x_2777_; size_t v___x_2778_; lean_object* v___x_2779_; 
v___x_2777_ = lean_usize_of_nat(v_start_2763_);
v___x_2778_ = lean_usize_of_nat(v___x_2773_);
v___x_2779_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2761_, v_as_2762_, v___x_2777_, v___x_2778_, v___x_2770_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
return v___x_2779_;
}
}
else
{
size_t v___x_2780_; size_t v___x_2781_; lean_object* v___x_2782_; 
v___x_2780_ = lean_usize_of_nat(v_start_2763_);
v___x_2781_ = lean_usize_of_nat(v_stop_2764_);
v___x_2782_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1_spec__1(v_numEqs_2761_, v_as_2762_, v___x_2780_, v___x_2781_, v___x_2770_, v___y_2765_, v___y_2766_, v___y_2767_, v___y_2768_);
return v___x_2782_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1___boxed(lean_object* v_numEqs_2783_, lean_object* v_as_2784_, lean_object* v_start_2785_, lean_object* v_stop_2786_, lean_object* v___y_2787_, lean_object* v___y_2788_, lean_object* v___y_2789_, lean_object* v___y_2790_, lean_object* v___y_2791_){
_start:
{
lean_object* v_res_2792_; 
v_res_2792_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(v_numEqs_2783_, v_as_2784_, v_start_2785_, v_stop_2786_, v___y_2787_, v___y_2788_, v___y_2789_, v___y_2790_);
lean_dec(v___y_2790_);
lean_dec_ref(v___y_2789_);
lean_dec(v___y_2788_);
lean_dec_ref(v___y_2787_);
lean_dec(v_stop_2786_);
lean_dec(v_start_2785_);
lean_dec_ref(v_as_2784_);
return v_res_2792_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(lean_object* v_numEqs_2793_, lean_object* v_subgoals_2794_, lean_object* v_a_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_, lean_object* v_a_2798_){
_start:
{
lean_object* v___x_2800_; lean_object* v___x_2801_; lean_object* v___x_2802_; 
v___x_2800_ = lean_unsigned_to_nat(0u);
v___x_2801_ = lean_array_get_size(v_subgoals_2794_);
v___x_2802_ = l_Array_filterMapM___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs_spec__1(v_numEqs_2793_, v_subgoals_2794_, v___x_2800_, v___x_2801_, v_a_2795_, v_a_2796_, v_a_2797_, v_a_2798_);
return v___x_2802_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs___boxed(lean_object* v_numEqs_2803_, lean_object* v_subgoals_2804_, lean_object* v_a_2805_, lean_object* v_a_2806_, lean_object* v_a_2807_, lean_object* v_a_2808_, lean_object* v_a_2809_){
_start:
{
lean_object* v_res_2810_; 
v_res_2810_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(v_numEqs_2803_, v_subgoals_2804_, v_a_2805_, v_a_2806_, v_a_2807_, v_a_2808_);
lean_dec(v_a_2808_);
lean_dec_ref(v_a_2807_);
lean_dec(v_a_2806_);
lean_dec_ref(v_a_2805_);
lean_dec_ref(v_subgoals_2804_);
return v_res_2810_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(lean_object* v___x_2822_, lean_object* v_ctx_2823_, lean_object* v_mvarId_2824_, lean_object* v_majorFVarId_2825_, lean_object* v_givenNames_2826_, uint8_t v_useNatCasesAuxOn_2827_, lean_object* v_interestingCtors_x3f_2828_, lean_object* v___y_2829_, lean_object* v___y_2830_, lean_object* v___y_2831_, lean_object* v___y_2832_){
_start:
{
lean_object* v___x_2834_; 
lean_inc(v___y_2832_);
lean_inc_ref(v___y_2831_);
lean_inc(v___y_2830_);
lean_inc_ref(v___y_2829_);
v___x_2834_ = lean_infer_type(v___x_2822_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2834_) == 0)
{
lean_object* v_a_2835_; lean_object* v___x_2836_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
lean_inc(v_a_2835_);
lean_dec_ref_known(v___x_2834_, 1);
v___x_2836_ = l_Lean_Meta_getInductiveUniverseAndParams(v_a_2835_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2836_) == 0)
{
lean_object* v_a_2837_; lean_object* v_fst_2838_; lean_object* v_snd_2839_; lean_object* v___y_2841_; lean_object* v___y_2842_; lean_object* v___y_2843_; lean_object* v___y_2844_; lean_object* v___y_2845_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2871_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; 
v_a_2837_ = lean_ctor_get(v___x_2836_, 0);
lean_inc(v_a_2837_);
lean_dec_ref_known(v___x_2836_, 1);
v_fst_2838_ = lean_ctor_get(v_a_2837_, 0);
lean_inc(v_fst_2838_);
v_snd_2839_ = lean_ctor_get(v_a_2837_, 1);
lean_inc(v_snd_2839_);
lean_dec(v_a_2837_);
if (lean_obj_tag(v_interestingCtors_x3f_2828_) == 1)
{
lean_object* v_val_2890_; lean_object* v___x_2891_; lean_object* v_env_2892_; lean_object* v___x_2893_; uint8_t v___x_2894_; uint8_t v___x_2895_; lean_object* v___x_2896_; 
v_val_2890_ = lean_ctor_get(v_interestingCtors_x3f_2828_, 0);
lean_inc(v_val_2890_);
lean_dec_ref_known(v_interestingCtors_x3f_2828_, 1);
v___x_2891_ = lean_st_ref_get(v___y_2832_);
v_env_2892_ = lean_ctor_get(v___x_2891_, 0);
lean_inc_ref(v_env_2892_);
lean_dec(v___x_2891_);
v___x_2893_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__5));
v___x_2894_ = 1;
v___x_2895_ = l_Lean_Environment_contains(v_env_2892_, v___x_2893_, v___x_2894_);
v___x_2896_ = lean_st_ref_get(v___y_2832_);
if (v___x_2895_ == 0)
{
lean_dec(v___x_2896_);
lean_dec(v_val_2890_);
v___y_2877_ = v___y_2829_;
v___y_2878_ = v___y_2830_;
v___y_2879_ = v___y_2831_;
v___y_2880_ = v___y_2832_;
goto v___jp_2876_;
}
else
{
lean_object* v_inductiveVal_2897_; lean_object* v_toConstantVal_2898_; lean_object* v_ctors_2899_; lean_object* v_name_2900_; lean_object* v_env_2901_; lean_object* v___x_2902_; uint8_t v___x_2903_; 
v_inductiveVal_2897_ = lean_ctor_get(v_ctx_2823_, 0);
v_toConstantVal_2898_ = lean_ctor_get(v_inductiveVal_2897_, 0);
v_ctors_2899_ = lean_ctor_get(v_inductiveVal_2897_, 4);
v_name_2900_ = lean_ctor_get(v_toConstantVal_2898_, 0);
v_env_2901_ = lean_ctor_get(v___x_2896_, 0);
lean_inc_ref(v_env_2901_);
lean_dec(v___x_2896_);
lean_inc(v_name_2900_);
v___x_2902_ = l_Lean_mkCtorIdxName(v_name_2900_);
v___x_2903_ = l_Lean_Environment_contains(v_env_2901_, v___x_2902_, v___x_2894_);
if (v___x_2903_ == 0)
{
lean_dec(v_val_2890_);
v___y_2877_ = v___y_2829_;
v___y_2878_ = v___y_2830_;
v___y_2879_ = v___y_2831_;
v___y_2880_ = v___y_2832_;
goto v___jp_2876_;
}
else
{
lean_object* v___x_2904_; lean_object* v___x_2905_; uint8_t v___x_2906_; 
v___x_2904_ = lean_array_get_size(v_val_2890_);
v___x_2905_ = lean_unsigned_to_nat(0u);
v___x_2906_ = lean_nat_dec_eq(v___x_2904_, v___x_2905_);
if (v___x_2906_ == 0)
{
lean_object* v___x_2907_; uint8_t v___x_2908_; 
v___x_2907_ = l_List_lengthTR___redArg(v_ctors_2899_);
v___x_2908_ = lean_nat_dec_lt(v___x_2904_, v___x_2907_);
lean_dec(v___x_2907_);
if (v___x_2908_ == 0)
{
lean_dec(v_val_2890_);
v___y_2877_ = v___y_2829_;
v___y_2878_ = v___y_2830_;
v___y_2879_ = v___y_2831_;
v___y_2880_ = v___y_2832_;
goto v___jp_2876_;
}
else
{
lean_object* v___x_2909_; 
lean_inc(v_name_2900_);
lean_dec_ref(v_ctx_2823_);
lean_inc(v_val_2890_);
v___x_2909_ = l_Lean_Meta_mkSparseCasesOn(v_name_2900_, v_val_2890_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
if (lean_obj_tag(v___x_2909_) == 0)
{
lean_object* v_a_2910_; lean_object* v___x_2911_; 
v_a_2910_ = lean_ctor_get(v___x_2909_, 0);
lean_inc(v_a_2910_);
lean_dec_ref_known(v___x_2909_, 1);
lean_inc(v_majorFVarId_2825_);
v___x_2911_ = l_Lean_MVarId_induction(v_mvarId_2824_, v_majorFVarId_2825_, v_a_2910_, v_givenNames_2826_, v___y_2829_, v___y_2830_, v___y_2831_, v___y_2832_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
if (lean_obj_tag(v___x_2911_) == 0)
{
lean_object* v_a_2912_; lean_object* v___x_2914_; uint8_t v_isShared_2915_; uint8_t v_isSharedCheck_2920_; 
v_a_2912_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2920_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2920_ == 0)
{
v___x_2914_ = v___x_2911_;
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
else
{
lean_inc(v_a_2912_);
lean_dec(v___x_2911_);
v___x_2914_ = lean_box(0);
v_isShared_2915_ = v_isSharedCheck_2920_;
goto v_resetjp_2913_;
}
v_resetjp_2913_:
{
lean_object* v___x_2916_; lean_object* v___x_2918_; 
v___x_2916_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_a_2912_, v_val_2890_, v_majorFVarId_2825_, v_fst_2838_, v_snd_2839_);
lean_dec(v_snd_2839_);
lean_dec(v_val_2890_);
if (v_isShared_2915_ == 0)
{
lean_ctor_set(v___x_2914_, 0, v___x_2916_);
v___x_2918_ = v___x_2914_;
goto v_reusejp_2917_;
}
else
{
lean_object* v_reuseFailAlloc_2919_; 
v_reuseFailAlloc_2919_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2919_, 0, v___x_2916_);
v___x_2918_ = v_reuseFailAlloc_2919_;
goto v_reusejp_2917_;
}
v_reusejp_2917_:
{
return v___x_2918_;
}
}
}
else
{
lean_object* v_a_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec(v_val_2890_);
lean_dec(v_snd_2839_);
lean_dec(v_fst_2838_);
lean_dec(v_majorFVarId_2825_);
v_a_2921_ = lean_ctor_get(v___x_2911_, 0);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2911_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2911_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_a_2921_);
lean_dec(v___x_2911_);
v___x_2923_ = lean_box(0);
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
v_resetjp_2922_:
{
lean_object* v___x_2926_; 
if (v_isShared_2924_ == 0)
{
v___x_2926_ = v___x_2923_;
goto v_reusejp_2925_;
}
else
{
lean_object* v_reuseFailAlloc_2927_; 
v_reuseFailAlloc_2927_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_a_2921_);
v___x_2926_ = v_reuseFailAlloc_2927_;
goto v_reusejp_2925_;
}
v_reusejp_2925_:
{
return v___x_2926_;
}
}
}
}
else
{
lean_object* v_a_2929_; lean_object* v___x_2931_; uint8_t v_isShared_2932_; uint8_t v_isSharedCheck_2936_; 
lean_dec(v_val_2890_);
lean_dec(v_snd_2839_);
lean_dec(v_fst_2838_);
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec_ref(v_givenNames_2826_);
lean_dec(v_majorFVarId_2825_);
lean_dec(v_mvarId_2824_);
v_a_2929_ = lean_ctor_get(v___x_2909_, 0);
v_isSharedCheck_2936_ = !lean_is_exclusive(v___x_2909_);
if (v_isSharedCheck_2936_ == 0)
{
v___x_2931_ = v___x_2909_;
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
else
{
lean_inc(v_a_2929_);
lean_dec(v___x_2909_);
v___x_2931_ = lean_box(0);
v_isShared_2932_ = v_isSharedCheck_2936_;
goto v_resetjp_2930_;
}
v_resetjp_2930_:
{
lean_object* v___x_2934_; 
if (v_isShared_2932_ == 0)
{
v___x_2934_ = v___x_2931_;
goto v_reusejp_2933_;
}
else
{
lean_object* v_reuseFailAlloc_2935_; 
v_reuseFailAlloc_2935_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2935_, 0, v_a_2929_);
v___x_2934_ = v_reuseFailAlloc_2935_;
goto v_reusejp_2933_;
}
v_reusejp_2933_:
{
return v___x_2934_;
}
}
}
}
}
else
{
lean_dec(v_val_2890_);
v___y_2877_ = v___y_2829_;
v___y_2878_ = v___y_2830_;
v___y_2879_ = v___y_2831_;
v___y_2880_ = v___y_2832_;
goto v___jp_2876_;
}
}
}
}
else
{
lean_dec(v_interestingCtors_x3f_2828_);
v___y_2877_ = v___y_2829_;
v___y_2878_ = v___y_2830_;
v___y_2879_ = v___y_2831_;
v___y_2880_ = v___y_2832_;
goto v___jp_2876_;
}
v___jp_2840_:
{
lean_object* v_inductiveVal_2846_; lean_object* v_ctors_2847_; lean_object* v___x_2848_; lean_object* v___x_2849_; 
v_inductiveVal_2846_ = lean_ctor_get(v_ctx_2823_, 0);
lean_inc_ref(v_inductiveVal_2846_);
lean_dec_ref(v_ctx_2823_);
v_ctors_2847_ = lean_ctor_get(v_inductiveVal_2846_, 4);
lean_inc(v_ctors_2847_);
lean_dec_ref(v_inductiveVal_2846_);
v___x_2848_ = lean_array_mk(v_ctors_2847_);
lean_inc(v_majorFVarId_2825_);
v___x_2849_ = l_Lean_MVarId_induction(v_mvarId_2824_, v_majorFVarId_2825_, v___y_2845_, v_givenNames_2826_, v___y_2842_, v___y_2844_, v___y_2841_, v___y_2843_);
lean_dec(v___y_2843_);
lean_dec_ref(v___y_2841_);
lean_dec(v___y_2844_);
lean_dec_ref(v___y_2842_);
if (lean_obj_tag(v___x_2849_) == 0)
{
lean_object* v_a_2850_; lean_object* v___x_2852_; uint8_t v_isShared_2853_; uint8_t v_isSharedCheck_2858_; 
v_a_2850_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2852_ = v___x_2849_;
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
else
{
lean_inc(v_a_2850_);
lean_dec(v___x_2849_);
v___x_2852_ = lean_box(0);
v_isShared_2853_ = v_isSharedCheck_2858_;
goto v_resetjp_2851_;
}
v_resetjp_2851_:
{
lean_object* v___x_2854_; lean_object* v___x_2856_; 
v___x_2854_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_toCasesSubgoals(v_a_2850_, v___x_2848_, v_majorFVarId_2825_, v_fst_2838_, v_snd_2839_);
lean_dec(v_snd_2839_);
lean_dec_ref(v___x_2848_);
if (v_isShared_2853_ == 0)
{
lean_ctor_set(v___x_2852_, 0, v___x_2854_);
v___x_2856_ = v___x_2852_;
goto v_reusejp_2855_;
}
else
{
lean_object* v_reuseFailAlloc_2857_; 
v_reuseFailAlloc_2857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2857_, 0, v___x_2854_);
v___x_2856_ = v_reuseFailAlloc_2857_;
goto v_reusejp_2855_;
}
v_reusejp_2855_:
{
return v___x_2856_;
}
}
}
else
{
lean_object* v_a_2859_; lean_object* v___x_2861_; uint8_t v_isShared_2862_; uint8_t v_isSharedCheck_2866_; 
lean_dec_ref(v___x_2848_);
lean_dec(v_snd_2839_);
lean_dec(v_fst_2838_);
lean_dec(v_majorFVarId_2825_);
v_a_2859_ = lean_ctor_get(v___x_2849_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2849_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2849_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2849_);
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
v___jp_2867_:
{
lean_object* v_inductiveVal_2872_; lean_object* v_toConstantVal_2873_; lean_object* v_name_2874_; lean_object* v___x_2875_; 
v_inductiveVal_2872_ = lean_ctor_get(v_ctx_2823_, 0);
v_toConstantVal_2873_ = lean_ctor_get(v_inductiveVal_2872_, 0);
v_name_2874_ = lean_ctor_get(v_toConstantVal_2873_, 0);
lean_inc(v_name_2874_);
v___x_2875_ = l_Lean_mkCasesOnName(v_name_2874_);
v___y_2841_ = v___y_2869_;
v___y_2842_ = v___y_2868_;
v___y_2843_ = v___y_2871_;
v___y_2844_ = v___y_2870_;
v___y_2845_ = v___x_2875_;
goto v___jp_2840_;
}
v___jp_2876_:
{
lean_object* v___x_2881_; 
v___x_2881_ = lean_st_ref_get(v___y_2880_);
if (v_useNatCasesAuxOn_2827_ == 0)
{
lean_dec(v___x_2881_);
v___y_2868_ = v___y_2877_;
v___y_2869_ = v___y_2879_;
v___y_2870_ = v___y_2878_;
v___y_2871_ = v___y_2880_;
goto v___jp_2867_;
}
else
{
lean_object* v_inductiveVal_2882_; lean_object* v_toConstantVal_2883_; lean_object* v_env_2884_; lean_object* v_name_2885_; lean_object* v___x_2886_; uint8_t v___x_2887_; 
v_inductiveVal_2882_ = lean_ctor_get(v_ctx_2823_, 0);
v_toConstantVal_2883_ = lean_ctor_get(v_inductiveVal_2882_, 0);
v_env_2884_ = lean_ctor_get(v___x_2881_, 0);
lean_inc_ref(v_env_2884_);
lean_dec(v___x_2881_);
v_name_2885_ = lean_ctor_get(v_toConstantVal_2883_, 0);
v___x_2886_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__1));
v___x_2887_ = lean_name_eq(v_name_2885_, v___x_2886_);
if (v___x_2887_ == 0)
{
lean_dec_ref(v_env_2884_);
v___y_2868_ = v___y_2877_;
v___y_2869_ = v___y_2879_;
v___y_2870_ = v___y_2878_;
v___y_2871_ = v___y_2880_;
goto v___jp_2867_;
}
else
{
lean_object* v___x_2888_; uint8_t v___x_2889_; 
v___x_2888_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___closed__3));
v___x_2889_ = l_Lean_Environment_contains(v_env_2884_, v___x_2888_, v___x_2887_);
if (v___x_2889_ == 0)
{
v___y_2868_ = v___y_2877_;
v___y_2869_ = v___y_2879_;
v___y_2870_ = v___y_2878_;
v___y_2871_ = v___y_2880_;
goto v___jp_2867_;
}
else
{
v___y_2841_ = v___y_2879_;
v___y_2842_ = v___y_2877_;
v___y_2843_ = v___y_2880_;
v___y_2844_ = v___y_2878_;
v___y_2845_ = v___x_2888_;
goto v___jp_2840_;
}
}
}
}
}
else
{
lean_object* v_a_2937_; lean_object* v___x_2939_; uint8_t v_isShared_2940_; uint8_t v_isSharedCheck_2944_; 
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v_interestingCtors_x3f_2828_);
lean_dec_ref(v_givenNames_2826_);
lean_dec(v_majorFVarId_2825_);
lean_dec(v_mvarId_2824_);
lean_dec_ref(v_ctx_2823_);
v_a_2937_ = lean_ctor_get(v___x_2836_, 0);
v_isSharedCheck_2944_ = !lean_is_exclusive(v___x_2836_);
if (v_isSharedCheck_2944_ == 0)
{
v___x_2939_ = v___x_2836_;
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
else
{
lean_inc(v_a_2937_);
lean_dec(v___x_2836_);
v___x_2939_ = lean_box(0);
v_isShared_2940_ = v_isSharedCheck_2944_;
goto v_resetjp_2938_;
}
v_resetjp_2938_:
{
lean_object* v___x_2942_; 
if (v_isShared_2940_ == 0)
{
v___x_2942_ = v___x_2939_;
goto v_reusejp_2941_;
}
else
{
lean_object* v_reuseFailAlloc_2943_; 
v_reuseFailAlloc_2943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2943_, 0, v_a_2937_);
v___x_2942_ = v_reuseFailAlloc_2943_;
goto v_reusejp_2941_;
}
v_reusejp_2941_:
{
return v___x_2942_;
}
}
}
}
else
{
lean_object* v_a_2945_; lean_object* v___x_2947_; uint8_t v_isShared_2948_; uint8_t v_isSharedCheck_2952_; 
lean_dec(v___y_2832_);
lean_dec_ref(v___y_2831_);
lean_dec(v___y_2830_);
lean_dec_ref(v___y_2829_);
lean_dec(v_interestingCtors_x3f_2828_);
lean_dec_ref(v_givenNames_2826_);
lean_dec(v_majorFVarId_2825_);
lean_dec(v_mvarId_2824_);
lean_dec_ref(v_ctx_2823_);
v_a_2945_ = lean_ctor_get(v___x_2834_, 0);
v_isSharedCheck_2952_ = !lean_is_exclusive(v___x_2834_);
if (v_isSharedCheck_2952_ == 0)
{
v___x_2947_ = v___x_2834_;
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
else
{
lean_inc(v_a_2945_);
lean_dec(v___x_2834_);
v___x_2947_ = lean_box(0);
v_isShared_2948_ = v_isSharedCheck_2952_;
goto v_resetjp_2946_;
}
v_resetjp_2946_:
{
lean_object* v___x_2950_; 
if (v_isShared_2948_ == 0)
{
v___x_2950_ = v___x_2947_;
goto v_reusejp_2949_;
}
else
{
lean_object* v_reuseFailAlloc_2951_; 
v_reuseFailAlloc_2951_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2951_, 0, v_a_2945_);
v___x_2950_ = v_reuseFailAlloc_2951_;
goto v_reusejp_2949_;
}
v_reusejp_2949_:
{
return v___x_2950_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed(lean_object* v___x_2953_, lean_object* v_ctx_2954_, lean_object* v_mvarId_2955_, lean_object* v_majorFVarId_2956_, lean_object* v_givenNames_2957_, lean_object* v_useNatCasesAuxOn_2958_, lean_object* v_interestingCtors_x3f_2959_, lean_object* v___y_2960_, lean_object* v___y_2961_, lean_object* v___y_2962_, lean_object* v___y_2963_, lean_object* v___y_2964_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_2965_; lean_object* v_res_2966_; 
v_useNatCasesAuxOn_boxed_2965_ = lean_unbox(v_useNatCasesAuxOn_2958_);
v_res_2966_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0(v___x_2953_, v_ctx_2954_, v_mvarId_2955_, v_majorFVarId_2956_, v_givenNames_2957_, v_useNatCasesAuxOn_boxed_2965_, v_interestingCtors_x3f_2959_, v___y_2960_, v___y_2961_, v___y_2962_, v___y_2963_);
return v_res_2966_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(lean_object* v_mvarId_2967_, lean_object* v_majorFVarId_2968_, lean_object* v_givenNames_2969_, lean_object* v_ctx_2970_, uint8_t v_useNatCasesAuxOn_2971_, lean_object* v_interestingCtors_x3f_2972_, lean_object* v_a_2973_, lean_object* v_a_2974_, lean_object* v_a_2975_, lean_object* v_a_2976_){
_start:
{
lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___f_2980_; lean_object* v___x_2981_; 
lean_inc(v_majorFVarId_2968_);
v___x_2978_ = l_Lean_mkFVar(v_majorFVarId_2968_);
v___x_2979_ = lean_box(v_useNatCasesAuxOn_2971_);
lean_inc(v_mvarId_2967_);
v___f_2980_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___lam__0___boxed), 12, 7);
lean_closure_set(v___f_2980_, 0, v___x_2978_);
lean_closure_set(v___f_2980_, 1, v_ctx_2970_);
lean_closure_set(v___f_2980_, 2, v_mvarId_2967_);
lean_closure_set(v___f_2980_, 3, v_majorFVarId_2968_);
lean_closure_set(v___f_2980_, 4, v_givenNames_2969_);
lean_closure_set(v___f_2980_, 5, v___x_2979_);
lean_closure_set(v___f_2980_, 6, v_interestingCtors_x3f_2972_);
v___x_2981_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_2967_, v___f_2980_, v_a_2973_, v_a_2974_, v_a_2975_, v_a_2976_);
return v___x_2981_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn___boxed(lean_object* v_mvarId_2982_, lean_object* v_majorFVarId_2983_, lean_object* v_givenNames_2984_, lean_object* v_ctx_2985_, lean_object* v_useNatCasesAuxOn_2986_, lean_object* v_interestingCtors_x3f_2987_, lean_object* v_a_2988_, lean_object* v_a_2989_, lean_object* v_a_2990_, lean_object* v_a_2991_, lean_object* v_a_2992_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_2993_; lean_object* v_res_2994_; 
v_useNatCasesAuxOn_boxed_2993_ = lean_unbox(v_useNatCasesAuxOn_2986_);
v_res_2994_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_2982_, v_majorFVarId_2983_, v_givenNames_2984_, v_ctx_2985_, v_useNatCasesAuxOn_boxed_2993_, v_interestingCtors_x3f_2987_, v_a_2988_, v_a_2989_, v_a_2990_, v_a_2991_);
lean_dec(v_a_2991_);
lean_dec_ref(v_a_2990_);
lean_dec(v_a_2989_);
lean_dec_ref(v_a_2988_);
return v_res_2994_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2995_; double v___x_2996_; 
v___x_2995_ = lean_unsigned_to_nat(0u);
v___x_2996_ = lean_float_of_nat(v___x_2995_);
return v___x_2996_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(lean_object* v_cls_3000_, lean_object* v_msg_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v_ref_3007_; lean_object* v___x_3008_; lean_object* v_a_3009_; lean_object* v___x_3011_; uint8_t v_isShared_3012_; uint8_t v_isSharedCheck_3054_; 
v_ref_3007_ = lean_ctor_get(v___y_3004_, 2);
v___x_3008_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_throwInductiveTypeExpected_spec__0_spec__0(v_msg_3001_, v___y_3002_, v___y_3003_, v___y_3004_, v___y_3005_);
v_a_3009_ = lean_ctor_get(v___x_3008_, 0);
v_isSharedCheck_3054_ = !lean_is_exclusive(v___x_3008_);
if (v_isSharedCheck_3054_ == 0)
{
v___x_3011_ = v___x_3008_;
v_isShared_3012_ = v_isSharedCheck_3054_;
goto v_resetjp_3010_;
}
else
{
lean_inc(v_a_3009_);
lean_dec(v___x_3008_);
v___x_3011_ = lean_box(0);
v_isShared_3012_ = v_isSharedCheck_3054_;
goto v_resetjp_3010_;
}
v_resetjp_3010_:
{
lean_object* v___x_3013_; lean_object* v_traceState_3014_; lean_object* v_env_3015_; lean_object* v_nextMacroScope_3016_; lean_object* v_ngen_3017_; lean_object* v_auxDeclNGen_3018_; lean_object* v_cache_3019_; lean_object* v_recordedDeps_3020_; lean_object* v_messages_3021_; lean_object* v_infoState_3022_; lean_object* v_snapshotTasks_3023_; lean_object* v___x_3025_; uint8_t v_isShared_3026_; uint8_t v_isSharedCheck_3053_; 
v___x_3013_ = lean_st_ref_take(v___y_3005_);
v_traceState_3014_ = lean_ctor_get(v___x_3013_, 4);
v_env_3015_ = lean_ctor_get(v___x_3013_, 0);
v_nextMacroScope_3016_ = lean_ctor_get(v___x_3013_, 1);
v_ngen_3017_ = lean_ctor_get(v___x_3013_, 2);
v_auxDeclNGen_3018_ = lean_ctor_get(v___x_3013_, 3);
v_cache_3019_ = lean_ctor_get(v___x_3013_, 5);
v_recordedDeps_3020_ = lean_ctor_get(v___x_3013_, 6);
v_messages_3021_ = lean_ctor_get(v___x_3013_, 7);
v_infoState_3022_ = lean_ctor_get(v___x_3013_, 8);
v_snapshotTasks_3023_ = lean_ctor_get(v___x_3013_, 9);
v_isSharedCheck_3053_ = !lean_is_exclusive(v___x_3013_);
if (v_isSharedCheck_3053_ == 0)
{
v___x_3025_ = v___x_3013_;
v_isShared_3026_ = v_isSharedCheck_3053_;
goto v_resetjp_3024_;
}
else
{
lean_inc(v_snapshotTasks_3023_);
lean_inc(v_infoState_3022_);
lean_inc(v_messages_3021_);
lean_inc(v_recordedDeps_3020_);
lean_inc(v_cache_3019_);
lean_inc(v_traceState_3014_);
lean_inc(v_auxDeclNGen_3018_);
lean_inc(v_ngen_3017_);
lean_inc(v_nextMacroScope_3016_);
lean_inc(v_env_3015_);
lean_dec(v___x_3013_);
v___x_3025_ = lean_box(0);
v_isShared_3026_ = v_isSharedCheck_3053_;
goto v_resetjp_3024_;
}
v_resetjp_3024_:
{
uint64_t v_tid_3027_; lean_object* v_traces_3028_; lean_object* v___x_3030_; uint8_t v_isShared_3031_; uint8_t v_isSharedCheck_3052_; 
v_tid_3027_ = lean_ctor_get_uint64(v_traceState_3014_, sizeof(void*)*1);
v_traces_3028_ = lean_ctor_get(v_traceState_3014_, 0);
v_isSharedCheck_3052_ = !lean_is_exclusive(v_traceState_3014_);
if (v_isSharedCheck_3052_ == 0)
{
v___x_3030_ = v_traceState_3014_;
v_isShared_3031_ = v_isSharedCheck_3052_;
goto v_resetjp_3029_;
}
else
{
lean_inc(v_traces_3028_);
lean_dec(v_traceState_3014_);
v___x_3030_ = lean_box(0);
v_isShared_3031_ = v_isSharedCheck_3052_;
goto v_resetjp_3029_;
}
v_resetjp_3029_:
{
lean_object* v___x_3032_; lean_object* v___x_3033_; double v___x_3034_; uint8_t v___x_3035_; lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3043_; 
v___x_3032_ = lean_box(0);
v___x_3033_ = lean_box(0);
v___x_3034_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__0);
v___x_3035_ = 0;
v___x_3036_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__1));
v___x_3037_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_3037_, 0, v_cls_3000_);
lean_ctor_set(v___x_3037_, 1, v___x_3033_);
lean_ctor_set(v___x_3037_, 2, v___x_3036_);
lean_ctor_set_float(v___x_3037_, sizeof(void*)*3, v___x_3034_);
lean_ctor_set_float(v___x_3037_, sizeof(void*)*3 + 8, v___x_3034_);
lean_ctor_set_uint8(v___x_3037_, sizeof(void*)*3 + 16, v___x_3035_);
v___x_3038_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___closed__2));
v___x_3039_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3037_);
lean_ctor_set(v___x_3039_, 1, v_a_3009_);
lean_ctor_set(v___x_3039_, 2, v___x_3038_);
lean_inc(v_ref_3007_);
v___x_3040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3040_, 0, v_ref_3007_);
lean_ctor_set(v___x_3040_, 1, v___x_3039_);
v___x_3041_ = l_Lean_PersistentArray_push___redArg(v_traces_3028_, v___x_3040_);
if (v_isShared_3031_ == 0)
{
lean_ctor_set(v___x_3030_, 0, v___x_3041_);
v___x_3043_ = v___x_3030_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3051_; 
v_reuseFailAlloc_3051_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_3051_, 0, v___x_3041_);
lean_ctor_set_uint64(v_reuseFailAlloc_3051_, sizeof(void*)*1, v_tid_3027_);
v___x_3043_ = v_reuseFailAlloc_3051_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
lean_object* v___x_3045_; 
if (v_isShared_3026_ == 0)
{
lean_ctor_set(v___x_3025_, 4, v___x_3043_);
v___x_3045_ = v___x_3025_;
goto v_reusejp_3044_;
}
else
{
lean_object* v_reuseFailAlloc_3050_; 
v_reuseFailAlloc_3050_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_3050_, 0, v_env_3015_);
lean_ctor_set(v_reuseFailAlloc_3050_, 1, v_nextMacroScope_3016_);
lean_ctor_set(v_reuseFailAlloc_3050_, 2, v_ngen_3017_);
lean_ctor_set(v_reuseFailAlloc_3050_, 3, v_auxDeclNGen_3018_);
lean_ctor_set(v_reuseFailAlloc_3050_, 4, v___x_3043_);
lean_ctor_set(v_reuseFailAlloc_3050_, 5, v_cache_3019_);
lean_ctor_set(v_reuseFailAlloc_3050_, 6, v_recordedDeps_3020_);
lean_ctor_set(v_reuseFailAlloc_3050_, 7, v_messages_3021_);
lean_ctor_set(v_reuseFailAlloc_3050_, 8, v_infoState_3022_);
lean_ctor_set(v_reuseFailAlloc_3050_, 9, v_snapshotTasks_3023_);
v___x_3045_ = v_reuseFailAlloc_3050_;
goto v_reusejp_3044_;
}
v_reusejp_3044_:
{
lean_object* v___x_3046_; lean_object* v___x_3048_; 
v___x_3046_ = lean_st_ref_put(v___y_3005_, v___x_3045_);
if (v_isShared_3012_ == 0)
{
lean_ctor_set(v___x_3011_, 0, v___x_3032_);
v___x_3048_ = v___x_3011_;
goto v_reusejp_3047_;
}
else
{
lean_object* v_reuseFailAlloc_3049_; 
v_reuseFailAlloc_3049_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3049_, 0, v___x_3032_);
v___x_3048_ = v_reuseFailAlloc_3049_;
goto v_reusejp_3047_;
}
v_reusejp_3047_:
{
return v___x_3048_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0___boxed(lean_object* v_cls_3055_, lean_object* v_msg_3056_, lean_object* v___y_3057_, lean_object* v___y_3058_, lean_object* v___y_3059_, lean_object* v___y_3060_, lean_object* v___y_3061_){
_start:
{
lean_object* v_res_3062_; 
v_res_3062_ = l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(v_cls_3055_, v_msg_3056_, v___y_3057_, v___y_3058_, v___y_3059_, v___y_3060_);
lean_dec(v___y_3060_);
lean_dec_ref(v___y_3059_);
lean_dec(v___y_3058_);
lean_dec_ref(v___y_3057_);
return v_res_3062_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3066_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__1));
v___x_3067_ = l_Lean_MessageData_ofFormat(v___x_3066_);
return v___x_3067_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__3(void){
_start:
{
lean_object* v___x_3068_; lean_object* v___x_3069_; 
v___x_3068_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__2, &l_Lean_Meta_Cases_cases___lam__0___closed__2_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__2);
v___x_3069_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3068_);
return v___x_3069_;
}
}
static lean_object* _init_l_Lean_Meta_Cases_cases___lam__0___closed__9(void){
_start:
{
lean_object* v___x_3076_; lean_object* v___x_3077_; 
v___x_3076_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__8));
v___x_3077_ = l_Lean_stringToMessageData(v___x_3076_);
return v___x_3077_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0(lean_object* v_mvarId_3078_, lean_object* v___x_3079_, lean_object* v_majorFVarId_3080_, lean_object* v_givenNames_3081_, lean_object* v_interestingCtors_x3f_3082_, lean_object* v___x_3083_, uint8_t v_useNatCasesAuxOn_3084_, lean_object* v___y_3085_, lean_object* v___y_3086_, lean_object* v___y_3087_, lean_object* v___y_3088_){
_start:
{
lean_object* v___x_3090_; 
lean_inc(v___x_3079_);
lean_inc(v_mvarId_3078_);
v___x_3090_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3078_, v___x_3079_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
if (lean_obj_tag(v___x_3090_) == 0)
{
lean_object* v___x_3091_; 
lean_dec_ref_known(v___x_3090_, 1);
lean_inc(v_majorFVarId_3080_);
v___x_3091_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_mkCasesContext_x3f(v_majorFVarId_3080_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
if (lean_obj_tag(v___x_3091_) == 0)
{
lean_object* v_a_3092_; 
v_a_3092_ = lean_ctor_get(v___x_3091_, 0);
lean_inc(v_a_3092_);
lean_dec_ref_known(v___x_3091_, 1);
if (lean_obj_tag(v_a_3092_) == 0)
{
lean_object* v___x_3093_; lean_object* v___x_3094_; 
lean_dec_ref(v___x_3083_);
lean_dec(v_interestingCtors_x3f_3082_);
lean_dec_ref(v_givenNames_3081_);
lean_dec(v_majorFVarId_3080_);
v___x_3093_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__3, &l_Lean_Meta_Cases_cases___lam__0___closed__3_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__3);
v___x_3094_ = l_Lean_Meta_throwTacticEx___redArg(v___x_3079_, v_mvarId_3078_, v___x_3093_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
return v___x_3094_;
}
else
{
lean_object* v_val_3095_; lean_object* v___x_3097_; uint8_t v_isShared_3098_; uint8_t v_isSharedCheck_3160_; 
lean_dec(v___x_3079_);
v_val_3095_ = lean_ctor_get(v_a_3092_, 0);
v_isSharedCheck_3160_ = !lean_is_exclusive(v_a_3092_);
if (v_isSharedCheck_3160_ == 0)
{
v___x_3097_ = v_a_3092_;
v_isShared_3098_ = v_isSharedCheck_3160_;
goto v_resetjp_3096_;
}
else
{
lean_inc(v_val_3095_);
lean_dec(v_a_3092_);
v___x_3097_ = lean_box(0);
v_isShared_3098_ = v_isSharedCheck_3160_;
goto v_resetjp_3096_;
}
v_resetjp_3096_:
{
lean_object* v___x_3099_; 
lean_inc(v_val_3095_);
v___x_3099_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_hasIndepIndices(v_val_3095_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
if (lean_obj_tag(v___x_3099_) == 0)
{
lean_object* v_a_3100_; uint8_t v___x_3101_; 
v_a_3100_ = lean_ctor_get(v___x_3099_, 0);
lean_inc(v_a_3100_);
lean_dec_ref_known(v___x_3099_, 1);
v___x_3101_ = lean_unbox(v_a_3100_);
if (v___x_3101_ == 0)
{
lean_object* v___x_3102_; 
v___x_3102_ = l_Lean_Meta_generalizeIndices(v_mvarId_3078_, v_majorFVarId_3080_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
if (lean_obj_tag(v___x_3102_) == 0)
{
lean_object* v_a_3103_; lean_object* v___y_3105_; lean_object* v___y_3106_; lean_object* v___y_3107_; lean_object* v___y_3108_; lean_object* v_toCold_3118_; lean_object* v_options_3119_; uint8_t v_hasTrace_3120_; 
v_a_3103_ = lean_ctor_get(v___x_3102_, 0);
lean_inc(v_a_3103_);
lean_dec_ref_known(v___x_3102_, 1);
v_toCold_3118_ = lean_ctor_get(v___y_3087_, 0);
v_options_3119_ = lean_ctor_get(v_toCold_3118_, 2);
v_hasTrace_3120_ = lean_ctor_get_uint8(v_options_3119_, sizeof(void*)*1);
if (v_hasTrace_3120_ == 0)
{
lean_del_object(v___x_3097_);
lean_dec_ref(v___x_3083_);
v___y_3105_ = v___y_3085_;
v___y_3106_ = v___y_3086_;
v___y_3107_ = v___y_3087_;
v___y_3108_ = v___y_3088_;
goto v___jp_3104_;
}
else
{
lean_object* v_inheritedTraceOptions_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; uint8_t v___x_3127_; 
v_inheritedTraceOptions_3121_ = lean_ctor_get(v_toCold_3118_, 11);
v___x_3122_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__4));
v___x_3123_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__5));
v___x_3124_ = l_Lean_Name_mkStr3(v___x_3122_, v___x_3123_, v___x_3083_);
v___x_3125_ = ((lean_object*)(l_Lean_Meta_Cases_cases___lam__0___closed__7));
lean_inc(v___x_3124_);
v___x_3126_ = l_Lean_Name_append(v___x_3125_, v___x_3124_);
v___x_3127_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3121_, v_options_3119_, v___x_3126_);
lean_dec(v___x_3126_);
if (v___x_3127_ == 0)
{
lean_dec(v___x_3124_);
lean_del_object(v___x_3097_);
v___y_3105_ = v___y_3085_;
v___y_3106_ = v___y_3086_;
v___y_3107_ = v___y_3087_;
v___y_3108_ = v___y_3088_;
goto v___jp_3104_;
}
else
{
lean_object* v_mvarId_3128_; lean_object* v___x_3129_; lean_object* v___x_3131_; 
v_mvarId_3128_ = lean_ctor_get(v_a_3103_, 0);
v___x_3129_ = lean_obj_once(&l_Lean_Meta_Cases_cases___lam__0___closed__9, &l_Lean_Meta_Cases_cases___lam__0___closed__9_once, _init_l_Lean_Meta_Cases_cases___lam__0___closed__9);
lean_inc(v_mvarId_3128_);
if (v_isShared_3098_ == 0)
{
lean_ctor_set(v___x_3097_, 0, v_mvarId_3128_);
v___x_3131_ = v___x_3097_;
goto v_reusejp_3130_;
}
else
{
lean_object* v_reuseFailAlloc_3142_; 
v_reuseFailAlloc_3142_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3142_, 0, v_mvarId_3128_);
v___x_3131_ = v_reuseFailAlloc_3142_;
goto v_reusejp_3130_;
}
v_reusejp_3130_:
{
lean_object* v___x_3132_; lean_object* v___x_3133_; 
v___x_3132_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3129_);
lean_ctor_set(v___x_3132_, 1, v___x_3131_);
v___x_3133_ = l_Lean_addTrace___at___00Lean_Meta_Cases_cases_spec__0(v___x_3124_, v___x_3132_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
if (lean_obj_tag(v___x_3133_) == 0)
{
lean_dec_ref_known(v___x_3133_, 1);
v___y_3105_ = v___y_3085_;
v___y_3106_ = v___y_3086_;
v___y_3107_ = v___y_3087_;
v___y_3108_ = v___y_3088_;
goto v___jp_3104_;
}
else
{
lean_object* v_a_3134_; lean_object* v___x_3136_; uint8_t v_isShared_3137_; uint8_t v_isSharedCheck_3141_; 
lean_dec(v_a_3103_);
lean_dec(v_a_3100_);
lean_dec(v_val_3095_);
lean_dec(v_interestingCtors_x3f_3082_);
lean_dec_ref(v_givenNames_3081_);
v_a_3134_ = lean_ctor_get(v___x_3133_, 0);
v_isSharedCheck_3141_ = !lean_is_exclusive(v___x_3133_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3136_ = v___x_3133_;
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
else
{
lean_inc(v_a_3134_);
lean_dec(v___x_3133_);
v___x_3136_ = lean_box(0);
v_isShared_3137_ = v_isSharedCheck_3141_;
goto v_resetjp_3135_;
}
v_resetjp_3135_:
{
lean_object* v___x_3139_; 
if (v_isShared_3137_ == 0)
{
v___x_3139_ = v___x_3136_;
goto v_reusejp_3138_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v_a_3134_);
v___x_3139_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3138_;
}
v_reusejp_3138_:
{
return v___x_3139_;
}
}
}
}
}
}
v___jp_3104_:
{
lean_object* v_mvarId_3109_; lean_object* v_fvarId_3110_; lean_object* v_numEqs_3111_; uint8_t v___x_3112_; lean_object* v___x_3113_; 
v_mvarId_3109_ = lean_ctor_get(v_a_3103_, 0);
v_fvarId_3110_ = lean_ctor_get(v_a_3103_, 2);
v_numEqs_3111_ = lean_ctor_get(v_a_3103_, 3);
lean_inc(v_numEqs_3111_);
v___x_3112_ = lean_unbox(v_a_3100_);
lean_dec(v_a_3100_);
lean_inc(v_fvarId_3110_);
lean_inc(v_mvarId_3109_);
v___x_3113_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3109_, v_fvarId_3110_, v_givenNames_3081_, v_val_3095_, v___x_3112_, v_interestingCtors_x3f_3082_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_);
if (lean_obj_tag(v___x_3113_) == 0)
{
lean_object* v_a_3114_; lean_object* v___x_3115_; 
v_a_3114_ = lean_ctor_get(v___x_3113_, 0);
lean_inc(v_a_3114_);
lean_dec_ref_known(v___x_3113_, 1);
v___x_3115_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_elimAuxIndices(v_a_3103_, v_a_3114_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_);
lean_dec(v_a_3103_);
if (lean_obj_tag(v___x_3115_) == 0)
{
lean_object* v_a_3116_; lean_object* v___x_3117_; 
v_a_3116_ = lean_ctor_get(v___x_3115_, 0);
lean_inc(v_a_3116_);
lean_dec_ref_known(v___x_3115_, 1);
v___x_3117_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_unifyCasesEqs(v_numEqs_3111_, v_a_3116_, v___y_3105_, v___y_3106_, v___y_3107_, v___y_3108_);
lean_dec(v_a_3116_);
return v___x_3117_;
}
else
{
lean_dec(v_numEqs_3111_);
return v___x_3115_;
}
}
else
{
lean_dec(v_numEqs_3111_);
lean_dec(v_a_3103_);
return v___x_3113_;
}
}
}
else
{
lean_object* v_a_3143_; lean_object* v___x_3145_; uint8_t v_isShared_3146_; uint8_t v_isSharedCheck_3150_; 
lean_dec(v_a_3100_);
lean_del_object(v___x_3097_);
lean_dec(v_val_3095_);
lean_dec_ref(v___x_3083_);
lean_dec(v_interestingCtors_x3f_3082_);
lean_dec_ref(v_givenNames_3081_);
v_a_3143_ = lean_ctor_get(v___x_3102_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3102_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3145_ = v___x_3102_;
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
else
{
lean_inc(v_a_3143_);
lean_dec(v___x_3102_);
v___x_3145_ = lean_box(0);
v_isShared_3146_ = v_isSharedCheck_3150_;
goto v_resetjp_3144_;
}
v_resetjp_3144_:
{
lean_object* v___x_3148_; 
if (v_isShared_3146_ == 0)
{
v___x_3148_ = v___x_3145_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_a_3143_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
}
}
else
{
lean_object* v___x_3151_; 
lean_dec(v_a_3100_);
lean_del_object(v___x_3097_);
lean_dec_ref(v___x_3083_);
v___x_3151_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_Cases_inductionCasesOn(v_mvarId_3078_, v_majorFVarId_3080_, v_givenNames_3081_, v_val_3095_, v_useNatCasesAuxOn_3084_, v_interestingCtors_x3f_3082_, v___y_3085_, v___y_3086_, v___y_3087_, v___y_3088_);
return v___x_3151_;
}
}
else
{
lean_object* v_a_3152_; lean_object* v___x_3154_; uint8_t v_isShared_3155_; uint8_t v_isSharedCheck_3159_; 
lean_del_object(v___x_3097_);
lean_dec(v_val_3095_);
lean_dec_ref(v___x_3083_);
lean_dec(v_interestingCtors_x3f_3082_);
lean_dec_ref(v_givenNames_3081_);
lean_dec(v_majorFVarId_3080_);
lean_dec(v_mvarId_3078_);
v_a_3152_ = lean_ctor_get(v___x_3099_, 0);
v_isSharedCheck_3159_ = !lean_is_exclusive(v___x_3099_);
if (v_isSharedCheck_3159_ == 0)
{
v___x_3154_ = v___x_3099_;
v_isShared_3155_ = v_isSharedCheck_3159_;
goto v_resetjp_3153_;
}
else
{
lean_inc(v_a_3152_);
lean_dec(v___x_3099_);
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
else
{
lean_object* v_a_3161_; lean_object* v___x_3163_; uint8_t v_isShared_3164_; uint8_t v_isSharedCheck_3168_; 
lean_dec_ref(v___x_3083_);
lean_dec(v_interestingCtors_x3f_3082_);
lean_dec_ref(v_givenNames_3081_);
lean_dec(v_majorFVarId_3080_);
lean_dec(v___x_3079_);
lean_dec(v_mvarId_3078_);
v_a_3161_ = lean_ctor_get(v___x_3091_, 0);
v_isSharedCheck_3168_ = !lean_is_exclusive(v___x_3091_);
if (v_isSharedCheck_3168_ == 0)
{
v___x_3163_ = v___x_3091_;
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
else
{
lean_inc(v_a_3161_);
lean_dec(v___x_3091_);
v___x_3163_ = lean_box(0);
v_isShared_3164_ = v_isSharedCheck_3168_;
goto v_resetjp_3162_;
}
v_resetjp_3162_:
{
lean_object* v___x_3166_; 
if (v_isShared_3164_ == 0)
{
v___x_3166_ = v___x_3163_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3167_; 
v_reuseFailAlloc_3167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3167_, 0, v_a_3161_);
v___x_3166_ = v_reuseFailAlloc_3167_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
return v___x_3166_;
}
}
}
}
else
{
lean_object* v_a_3169_; lean_object* v___x_3171_; uint8_t v_isShared_3172_; uint8_t v_isSharedCheck_3176_; 
lean_dec_ref(v___x_3083_);
lean_dec(v_interestingCtors_x3f_3082_);
lean_dec_ref(v_givenNames_3081_);
lean_dec(v_majorFVarId_3080_);
lean_dec(v___x_3079_);
lean_dec(v_mvarId_3078_);
v_a_3169_ = lean_ctor_get(v___x_3090_, 0);
v_isSharedCheck_3176_ = !lean_is_exclusive(v___x_3090_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3171_ = v___x_3090_;
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
else
{
lean_inc(v_a_3169_);
lean_dec(v___x_3090_);
v___x_3171_ = lean_box(0);
v_isShared_3172_ = v_isSharedCheck_3176_;
goto v_resetjp_3170_;
}
v_resetjp_3170_:
{
lean_object* v___x_3174_; 
if (v_isShared_3172_ == 0)
{
v___x_3174_ = v___x_3171_;
goto v_reusejp_3173_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v_a_3169_);
v___x_3174_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3173_;
}
v_reusejp_3173_:
{
return v___x_3174_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___lam__0___boxed(lean_object* v_mvarId_3177_, lean_object* v___x_3178_, lean_object* v_majorFVarId_3179_, lean_object* v_givenNames_3180_, lean_object* v_interestingCtors_x3f_3181_, lean_object* v___x_3182_, lean_object* v_useNatCasesAuxOn_3183_, lean_object* v___y_3184_, lean_object* v___y_3185_, lean_object* v___y_3186_, lean_object* v___y_3187_, lean_object* v___y_3188_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3189_; lean_object* v_res_3190_; 
v_useNatCasesAuxOn_boxed_3189_ = lean_unbox(v_useNatCasesAuxOn_3183_);
v_res_3190_ = l_Lean_Meta_Cases_cases___lam__0(v_mvarId_3177_, v___x_3178_, v_majorFVarId_3179_, v_givenNames_3180_, v_interestingCtors_x3f_3181_, v___x_3182_, v_useNatCasesAuxOn_boxed_3189_, v___y_3184_, v___y_3185_, v___y_3186_, v___y_3187_);
lean_dec(v___y_3187_);
lean_dec_ref(v___y_3186_);
lean_dec(v___y_3185_);
lean_dec_ref(v___y_3184_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases(lean_object* v_mvarId_3194_, lean_object* v_majorFVarId_3195_, lean_object* v_givenNames_3196_, uint8_t v_useNatCasesAuxOn_3197_, lean_object* v_interestingCtors_x3f_3198_, lean_object* v_a_3199_, lean_object* v_a_3200_, lean_object* v_a_3201_, lean_object* v_a_3202_){
_start:
{
lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___f_3207_; lean_object* v___x_3208_; 
v___x_3204_ = ((lean_object*)(l_Lean_Meta_Cases_cases___closed__0));
v___x_3205_ = ((lean_object*)(l_Lean_Meta_Cases_cases___closed__1));
v___x_3206_ = lean_box(v_useNatCasesAuxOn_3197_);
lean_inc(v_mvarId_3194_);
v___f_3207_ = lean_alloc_closure((void*)(l_Lean_Meta_Cases_cases___lam__0___boxed), 12, 7);
lean_closure_set(v___f_3207_, 0, v_mvarId_3194_);
lean_closure_set(v___f_3207_, 1, v___x_3205_);
lean_closure_set(v___f_3207_, 2, v_majorFVarId_3195_);
lean_closure_set(v___f_3207_, 3, v_givenNames_3196_);
lean_closure_set(v___f_3207_, 4, v_interestingCtors_x3f_3198_);
lean_closure_set(v___f_3207_, 5, v___x_3204_);
lean_closure_set(v___f_3207_, 6, v___x_3206_);
v___x_3208_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_3194_, v___f_3207_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_);
if (lean_obj_tag(v___x_3208_) == 0)
{
return v___x_3208_;
}
else
{
lean_object* v_a_3209_; uint8_t v___x_3210_; 
v_a_3209_ = lean_ctor_get(v___x_3208_, 0);
v___x_3210_ = l_Lean_Exception_isInterrupt(v_a_3209_);
if (v___x_3210_ == 0)
{
uint8_t v___x_3211_; 
lean_inc(v_a_3209_);
v___x_3211_ = l_Lean_Exception_isRuntime(v_a_3209_);
if (v___x_3211_ == 0)
{
lean_object* v___x_3212_; 
lean_inc(v_a_3209_);
lean_dec_ref_known(v___x_3208_, 1);
v___x_3212_ = l_Lean_Meta_throwNestedTacticEx___redArg(v___x_3205_, v_a_3209_, v_a_3199_, v_a_3200_, v_a_3201_, v_a_3202_);
return v___x_3212_;
}
else
{
return v___x_3208_;
}
}
else
{
return v___x_3208_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Cases_cases___boxed(lean_object* v_mvarId_3213_, lean_object* v_majorFVarId_3214_, lean_object* v_givenNames_3215_, lean_object* v_useNatCasesAuxOn_3216_, lean_object* v_interestingCtors_x3f_3217_, lean_object* v_a_3218_, lean_object* v_a_3219_, lean_object* v_a_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3223_; lean_object* v_res_3224_; 
v_useNatCasesAuxOn_boxed_3223_ = lean_unbox(v_useNatCasesAuxOn_3216_);
v_res_3224_ = l_Lean_Meta_Cases_cases(v_mvarId_3213_, v_majorFVarId_3214_, v_givenNames_3215_, v_useNatCasesAuxOn_boxed_3223_, v_interestingCtors_x3f_3217_, v_a_3218_, v_a_3219_, v_a_3220_, v_a_3221_);
lean_dec(v_a_3221_);
lean_dec_ref(v_a_3220_);
lean_dec(v_a_3219_);
lean_dec_ref(v_a_3218_);
return v_res_3224_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_cases(lean_object* v_mvarId_3225_, lean_object* v_majorFVarId_3226_, lean_object* v_givenNames_3227_, uint8_t v_useNatCasesAuxOn_3228_, lean_object* v_interestingCtors_x3f_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_, lean_object* v_a_3232_, lean_object* v_a_3233_){
_start:
{
lean_object* v___x_3235_; 
v___x_3235_ = l_Lean_Meta_Cases_cases(v_mvarId_3225_, v_majorFVarId_3226_, v_givenNames_3227_, v_useNatCasesAuxOn_3228_, v_interestingCtors_x3f_3229_, v_a_3230_, v_a_3231_, v_a_3232_, v_a_3233_);
return v___x_3235_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_cases___boxed(lean_object* v_mvarId_3236_, lean_object* v_majorFVarId_3237_, lean_object* v_givenNames_3238_, lean_object* v_useNatCasesAuxOn_3239_, lean_object* v_interestingCtors_x3f_3240_, lean_object* v_a_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_, lean_object* v_a_3244_, lean_object* v_a_3245_){
_start:
{
uint8_t v_useNatCasesAuxOn_boxed_3246_; lean_object* v_res_3247_; 
v_useNatCasesAuxOn_boxed_3246_ = lean_unbox(v_useNatCasesAuxOn_3239_);
v_res_3247_ = l_Lean_MVarId_cases(v_mvarId_3236_, v_majorFVarId_3237_, v_givenNames_3238_, v_useNatCasesAuxOn_boxed_3246_, v_interestingCtors_x3f_3240_, v_a_3241_, v_a_3242_, v_a_3243_, v_a_3244_);
lean_dec(v_a_3244_);
lean_dec_ref(v_a_3243_);
lean_dec(v_a_3242_);
lean_dec_ref(v_a_3241_);
return v_res_3247_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(lean_object* v_x_3248_, lean_object* v___y_3249_, lean_object* v___y_3250_, lean_object* v___y_3251_, lean_object* v___y_3252_){
_start:
{
lean_object* v___x_3254_; 
v___x_3254_ = l_Lean_Meta_saveState___redArg(v___y_3250_, v___y_3252_);
if (lean_obj_tag(v___x_3254_) == 0)
{
lean_object* v_a_3255_; lean_object* v___x_3256_; 
v_a_3255_ = lean_ctor_get(v___x_3254_, 0);
lean_inc(v_a_3255_);
lean_dec_ref_known(v___x_3254_, 1);
lean_inc(v___y_3252_);
lean_inc_ref(v___y_3251_);
lean_inc(v___y_3250_);
lean_inc_ref(v___y_3249_);
v___x_3256_ = lean_apply_5(v_x_3248_, v___y_3249_, v___y_3250_, v___y_3251_, v___y_3252_, lean_box(0));
if (lean_obj_tag(v___x_3256_) == 0)
{
lean_object* v_a_3257_; lean_object* v___x_3259_; uint8_t v_isShared_3260_; uint8_t v_isSharedCheck_3265_; 
lean_dec(v_a_3255_);
v_a_3257_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3259_ = v___x_3256_;
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
else
{
lean_inc(v_a_3257_);
lean_dec(v___x_3256_);
v___x_3259_ = lean_box(0);
v_isShared_3260_ = v_isSharedCheck_3265_;
goto v_resetjp_3258_;
}
v_resetjp_3258_:
{
lean_object* v___x_3261_; lean_object* v___x_3263_; 
v___x_3261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3261_, 0, v_a_3257_);
if (v_isShared_3260_ == 0)
{
lean_ctor_set(v___x_3259_, 0, v___x_3261_);
v___x_3263_ = v___x_3259_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v___x_3261_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
else
{
lean_object* v_a_3266_; lean_object* v___x_3268_; uint8_t v_isShared_3269_; uint8_t v_isSharedCheck_3296_; 
v_a_3266_ = lean_ctor_get(v___x_3256_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3256_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3268_ = v___x_3256_;
v_isShared_3269_ = v_isSharedCheck_3296_;
goto v_resetjp_3267_;
}
else
{
lean_inc(v_a_3266_);
lean_dec(v___x_3256_);
v___x_3268_ = lean_box(0);
v_isShared_3269_ = v_isSharedCheck_3296_;
goto v_resetjp_3267_;
}
v_resetjp_3267_:
{
uint8_t v___x_3270_; 
v___x_3270_ = l_Lean_Exception_isInterrupt(v_a_3266_);
if (v___x_3270_ == 0)
{
uint8_t v___x_3271_; 
lean_inc(v_a_3266_);
v___x_3271_ = l_Lean_Exception_isRuntime(v_a_3266_);
if (v___x_3271_ == 0)
{
lean_object* v___x_3272_; 
lean_del_object(v___x_3268_);
lean_dec(v_a_3266_);
v___x_3272_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3255_, v___y_3250_, v___y_3252_);
if (lean_obj_tag(v___x_3272_) == 0)
{
lean_object* v___x_3274_; uint8_t v_isShared_3275_; uint8_t v_isSharedCheck_3280_; 
v_isSharedCheck_3280_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3280_ == 0)
{
lean_object* v_unused_3281_; 
v_unused_3281_ = lean_ctor_get(v___x_3272_, 0);
lean_dec(v_unused_3281_);
v___x_3274_ = v___x_3272_;
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
else
{
lean_dec(v___x_3272_);
v___x_3274_ = lean_box(0);
v_isShared_3275_ = v_isSharedCheck_3280_;
goto v_resetjp_3273_;
}
v_resetjp_3273_:
{
lean_object* v___x_3276_; lean_object* v___x_3278_; 
v___x_3276_ = lean_box(0);
if (v_isShared_3275_ == 0)
{
lean_ctor_set(v___x_3274_, 0, v___x_3276_);
v___x_3278_ = v___x_3274_;
goto v_reusejp_3277_;
}
else
{
lean_object* v_reuseFailAlloc_3279_; 
v_reuseFailAlloc_3279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3279_, 0, v___x_3276_);
v___x_3278_ = v_reuseFailAlloc_3279_;
goto v_reusejp_3277_;
}
v_reusejp_3277_:
{
return v___x_3278_;
}
}
}
else
{
lean_object* v_a_3282_; lean_object* v___x_3284_; uint8_t v_isShared_3285_; uint8_t v_isSharedCheck_3289_; 
v_a_3282_ = lean_ctor_get(v___x_3272_, 0);
v_isSharedCheck_3289_ = !lean_is_exclusive(v___x_3272_);
if (v_isSharedCheck_3289_ == 0)
{
v___x_3284_ = v___x_3272_;
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
else
{
lean_inc(v_a_3282_);
lean_dec(v___x_3272_);
v___x_3284_ = lean_box(0);
v_isShared_3285_ = v_isSharedCheck_3289_;
goto v_resetjp_3283_;
}
v_resetjp_3283_:
{
lean_object* v___x_3287_; 
if (v_isShared_3285_ == 0)
{
v___x_3287_ = v___x_3284_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3288_; 
v_reuseFailAlloc_3288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3288_, 0, v_a_3282_);
v___x_3287_ = v_reuseFailAlloc_3288_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
return v___x_3287_;
}
}
}
}
else
{
lean_object* v___x_3291_; 
lean_dec(v_a_3255_);
if (v_isShared_3269_ == 0)
{
v___x_3291_ = v___x_3268_;
goto v_reusejp_3290_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_a_3266_);
v___x_3291_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3290_;
}
v_reusejp_3290_:
{
return v___x_3291_;
}
}
}
else
{
lean_object* v___x_3294_; 
lean_dec(v_a_3255_);
if (v_isShared_3269_ == 0)
{
v___x_3294_ = v___x_3268_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3266_);
v___x_3294_ = v_reuseFailAlloc_3295_;
goto v_reusejp_3293_;
}
v_reusejp_3293_:
{
return v___x_3294_;
}
}
}
}
}
else
{
lean_object* v_a_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3304_; 
lean_dec_ref(v_x_3248_);
v_a_3297_ = lean_ctor_get(v___x_3254_, 0);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___x_3254_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3299_ = v___x_3254_;
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___x_3254_);
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
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg___boxed(lean_object* v_x_3305_, lean_object* v___y_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v_res_3311_; 
v_res_3311_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v_x_3305_, v___y_3306_, v___y_3307_, v___y_3308_, v___y_3309_);
lean_dec(v___y_3309_);
lean_dec_ref(v___y_3308_);
lean_dec(v___y_3307_);
lean_dec_ref(v___y_3306_);
return v_res_3311_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(lean_object* v_00_u03b1_3312_, lean_object* v_x_3313_, lean_object* v___y_3314_, lean_object* v___y_3315_, lean_object* v___y_3316_, lean_object* v___y_3317_){
_start:
{
lean_object* v___x_3319_; 
v___x_3319_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v_x_3313_, v___y_3314_, v___y_3315_, v___y_3316_, v___y_3317_);
return v___x_3319_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___boxed(lean_object* v_00_u03b1_3320_, lean_object* v_x_3321_, lean_object* v___y_3322_, lean_object* v___y_3323_, lean_object* v___y_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_){
_start:
{
lean_object* v_res_3327_; 
v_res_3327_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1(v_00_u03b1_3320_, v_x_3321_, v___y_3322_, v___y_3323_, v___y_3324_, v___y_3325_);
lean_dec(v___y_3325_);
lean_dec_ref(v___y_3324_);
lean_dec(v___y_3323_);
lean_dec_ref(v___y_3322_);
return v_res_3327_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(lean_object* v_a_3328_, lean_object* v_a_3329_){
_start:
{
if (lean_obj_tag(v_a_3328_) == 0)
{
lean_object* v___x_3330_; 
v___x_3330_ = l_List_reverse___redArg(v_a_3329_);
return v___x_3330_;
}
else
{
lean_object* v_head_3331_; lean_object* v_toInductionSubgoal_3332_; lean_object* v_tail_3333_; lean_object* v___x_3335_; uint8_t v_isShared_3336_; uint8_t v_isSharedCheck_3342_; 
v_head_3331_ = lean_ctor_get(v_a_3328_, 0);
v_toInductionSubgoal_3332_ = lean_ctor_get(v_head_3331_, 0);
lean_inc_ref(v_toInductionSubgoal_3332_);
v_tail_3333_ = lean_ctor_get(v_a_3328_, 1);
v_isSharedCheck_3342_ = !lean_is_exclusive(v_a_3328_);
if (v_isSharedCheck_3342_ == 0)
{
lean_object* v_unused_3343_; 
v_unused_3343_ = lean_ctor_get(v_a_3328_, 0);
lean_dec(v_unused_3343_);
v___x_3335_ = v_a_3328_;
v_isShared_3336_ = v_isSharedCheck_3342_;
goto v_resetjp_3334_;
}
else
{
lean_inc(v_tail_3333_);
lean_dec(v_a_3328_);
v___x_3335_ = lean_box(0);
v_isShared_3336_ = v_isSharedCheck_3342_;
goto v_resetjp_3334_;
}
v_resetjp_3334_:
{
lean_object* v_mvarId_3337_; lean_object* v___x_3339_; 
v_mvarId_3337_ = lean_ctor_get(v_toInductionSubgoal_3332_, 0);
lean_inc(v_mvarId_3337_);
lean_dec_ref(v_toInductionSubgoal_3332_);
if (v_isShared_3336_ == 0)
{
lean_ctor_set(v___x_3335_, 1, v_a_3329_);
lean_ctor_set(v___x_3335_, 0, v_mvarId_3337_);
v___x_3339_ = v___x_3335_;
goto v_reusejp_3338_;
}
else
{
lean_object* v_reuseFailAlloc_3341_; 
v_reuseFailAlloc_3341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3341_, 0, v_mvarId_3337_);
lean_ctor_set(v_reuseFailAlloc_3341_, 1, v_a_3329_);
v___x_3339_ = v_reuseFailAlloc_3341_;
goto v_reusejp_3338_;
}
v_reusejp_3338_:
{
v_a_3328_ = v_tail_3333_;
v_a_3329_ = v___x_3339_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(lean_object* v_mvarId_3344_, lean_object* v___x_3345_, lean_object* v___x_3346_, uint8_t v___x_3347_, lean_object* v___x_3348_, lean_object* v___y_3349_, lean_object* v___y_3350_, lean_object* v___y_3351_, lean_object* v___y_3352_){
_start:
{
lean_object* v___x_3354_; 
v___x_3354_ = l_Lean_Meta_Cases_cases(v_mvarId_3344_, v___x_3345_, v___x_3346_, v___x_3347_, v___x_3348_, v___y_3349_, v___y_3350_, v___y_3351_, v___y_3352_);
if (lean_obj_tag(v___x_3354_) == 0)
{
lean_object* v_a_3355_; lean_object* v___x_3357_; uint8_t v_isShared_3358_; uint8_t v_isSharedCheck_3365_; 
v_a_3355_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3365_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3365_ == 0)
{
v___x_3357_ = v___x_3354_;
v_isShared_3358_ = v_isSharedCheck_3365_;
goto v_resetjp_3356_;
}
else
{
lean_inc(v_a_3355_);
lean_dec(v___x_3354_);
v___x_3357_ = lean_box(0);
v_isShared_3358_ = v_isSharedCheck_3365_;
goto v_resetjp_3356_;
}
v_resetjp_3356_:
{
lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3363_; 
v___x_3359_ = lean_array_to_list(v_a_3355_);
v___x_3360_ = lean_box(0);
v___x_3361_ = l_List_mapTR_loop___at___00Lean_MVarId_casesRec_spec__0(v___x_3359_, v___x_3360_);
if (v_isShared_3358_ == 0)
{
lean_ctor_set(v___x_3357_, 0, v___x_3361_);
v___x_3363_ = v___x_3357_;
goto v_reusejp_3362_;
}
else
{
lean_object* v_reuseFailAlloc_3364_; 
v_reuseFailAlloc_3364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3364_, 0, v___x_3361_);
v___x_3363_ = v_reuseFailAlloc_3364_;
goto v_reusejp_3362_;
}
v_reusejp_3362_:
{
return v___x_3363_;
}
}
}
else
{
lean_object* v_a_3366_; lean_object* v___x_3368_; uint8_t v_isShared_3369_; uint8_t v_isSharedCheck_3373_; 
v_a_3366_ = lean_ctor_get(v___x_3354_, 0);
v_isSharedCheck_3373_ = !lean_is_exclusive(v___x_3354_);
if (v_isSharedCheck_3373_ == 0)
{
v___x_3368_ = v___x_3354_;
v_isShared_3369_ = v_isSharedCheck_3373_;
goto v_resetjp_3367_;
}
else
{
lean_inc(v_a_3366_);
lean_dec(v___x_3354_);
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
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed(lean_object* v_mvarId_3374_, lean_object* v___x_3375_, lean_object* v___x_3376_, lean_object* v___x_3377_, lean_object* v___x_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_, lean_object* v___y_3383_){
_start:
{
uint8_t v___x_6375__boxed_3384_; lean_object* v_res_3385_; 
v___x_6375__boxed_3384_ = lean_unbox(v___x_3377_);
v_res_3385_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0(v_mvarId_3374_, v___x_3375_, v___x_3376_, v___x_6375__boxed_3384_, v___x_3378_, v___y_3379_, v___y_3380_, v___y_3381_, v___y_3382_);
lean_dec(v___y_3382_);
lean_dec_ref(v___y_3381_);
lean_dec(v___y_3380_);
lean_dec_ref(v___y_3379_);
return v_res_3385_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(lean_object* v_p_3391_, lean_object* v_mvarId_3392_, lean_object* v_as_3393_, size_t v_sz_3394_, size_t v_i_3395_, lean_object* v_b_3396_, lean_object* v___y_3397_, lean_object* v___y_3398_, lean_object* v___y_3399_, lean_object* v___y_3400_){
_start:
{
uint8_t v___x_3402_; 
v___x_3402_ = lean_usize_dec_lt(v_i_3395_, v_sz_3394_);
if (v___x_3402_ == 0)
{
lean_object* v___x_3403_; 
lean_dec(v_mvarId_3392_);
lean_dec_ref(v_p_3391_);
v___x_3403_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3403_, 0, v_b_3396_);
return v___x_3403_;
}
else
{
lean_object* v_snd_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3472_; 
v_snd_3404_ = lean_ctor_get(v_b_3396_, 1);
v_isSharedCheck_3472_ = !lean_is_exclusive(v_b_3396_);
if (v_isSharedCheck_3472_ == 0)
{
lean_object* v_unused_3473_; 
v_unused_3473_ = lean_ctor_get(v_b_3396_, 0);
lean_dec(v_unused_3473_);
v___x_3406_ = v_b_3396_;
v_isShared_3407_ = v_isSharedCheck_3472_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_snd_3404_);
lean_dec(v_b_3396_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3472_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v___x_3408_; lean_object* v_a_3410_; lean_object* v_a_3417_; 
v___x_3408_ = lean_box(0);
v_a_3417_ = lean_array_uget(v_as_3393_, v_i_3395_);
if (lean_obj_tag(v_a_3417_) == 0)
{
v_a_3410_ = v_snd_3404_;
goto v___jp_3409_;
}
else
{
lean_object* v_val_3418_; lean_object* v___x_3420_; uint8_t v_isShared_3421_; uint8_t v_isSharedCheck_3471_; 
v_val_3418_ = lean_ctor_get(v_a_3417_, 0);
v_isSharedCheck_3471_ = !lean_is_exclusive(v_a_3417_);
if (v_isSharedCheck_3471_ == 0)
{
v___x_3420_ = v_a_3417_;
v_isShared_3421_ = v_isSharedCheck_3471_;
goto v_resetjp_3419_;
}
else
{
lean_inc(v_val_3418_);
lean_dec(v_a_3417_);
v___x_3420_ = lean_box(0);
v_isShared_3421_ = v_isSharedCheck_3471_;
goto v_resetjp_3419_;
}
v_resetjp_3419_:
{
lean_object* v___x_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; 
v___x_3422_ = lean_box(0);
v___x_3423_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0));
lean_inc_ref(v_p_3391_);
lean_inc(v___y_3400_);
lean_inc_ref(v___y_3399_);
lean_inc(v___y_3398_);
lean_inc_ref(v___y_3397_);
lean_inc(v_val_3418_);
v___x_3424_ = lean_apply_6(v_p_3391_, v_val_3418_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_, lean_box(0));
if (lean_obj_tag(v___x_3424_) == 0)
{
lean_object* v_a_3425_; uint8_t v___x_3426_; 
v_a_3425_ = lean_ctor_get(v___x_3424_, 0);
lean_inc(v_a_3425_);
lean_dec_ref_known(v___x_3424_, 1);
v___x_3426_ = lean_unbox(v_a_3425_);
lean_dec(v_a_3425_);
if (v___x_3426_ == 0)
{
lean_del_object(v___x_3420_);
lean_dec(v_val_3418_);
lean_dec(v_snd_3404_);
v_a_3410_ = v___x_3423_;
goto v___jp_3409_;
}
else
{
lean_object* v___x_3427_; lean_object* v___x_3428_; uint8_t v___x_3429_; lean_object* v___x_3430_; lean_object* v___f_3431_; lean_object* v___x_3432_; 
v___x_3427_ = l_Lean_LocalDecl_fvarId(v_val_3418_);
lean_dec(v_val_3418_);
v___x_3428_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3429_ = 0;
v___x_3430_ = lean_box(v___x_3429_);
lean_inc(v_mvarId_3392_);
v___f_3431_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3431_, 0, v_mvarId_3392_);
lean_closure_set(v___f_3431_, 1, v___x_3427_);
lean_closure_set(v___f_3431_, 2, v___x_3428_);
lean_closure_set(v___f_3431_, 3, v___x_3430_);
lean_closure_set(v___f_3431_, 4, v___x_3408_);
v___x_3432_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3431_, v___y_3397_, v___y_3398_, v___y_3399_, v___y_3400_);
if (lean_obj_tag(v___x_3432_) == 0)
{
lean_object* v_a_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3454_; 
v_a_3433_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3435_ = v___x_3432_;
v_isShared_3436_ = v_isSharedCheck_3454_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_a_3433_);
lean_dec(v___x_3432_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3454_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
if (lean_obj_tag(v_a_3433_) == 0)
{
lean_del_object(v___x_3435_);
lean_del_object(v___x_3420_);
lean_dec(v_snd_3404_);
v_a_3410_ = v___x_3423_;
goto v___jp_3409_;
}
else
{
lean_object* v___x_3438_; 
lean_del_object(v___x_3406_);
lean_dec(v_mvarId_3392_);
lean_dec_ref(v_p_3391_);
lean_inc_ref(v_a_3433_);
if (v_isShared_3421_ == 0)
{
lean_ctor_set(v___x_3420_, 0, v_a_3433_);
v___x_3438_ = v___x_3420_;
goto v_reusejp_3437_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_a_3433_);
v___x_3438_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3437_;
}
v_reusejp_3437_:
{
lean_object* v___x_3440_; uint8_t v_isShared_3441_; uint8_t v_isSharedCheck_3451_; 
v_isSharedCheck_3451_ = !lean_is_exclusive(v_a_3433_);
if (v_isSharedCheck_3451_ == 0)
{
lean_object* v_unused_3452_; 
v_unused_3452_ = lean_ctor_get(v_a_3433_, 0);
lean_dec(v_unused_3452_);
v___x_3440_ = v_a_3433_;
v_isShared_3441_ = v_isSharedCheck_3451_;
goto v_resetjp_3439_;
}
else
{
lean_dec(v_a_3433_);
v___x_3440_ = lean_box(0);
v_isShared_3441_ = v_isSharedCheck_3451_;
goto v_resetjp_3439_;
}
v_resetjp_3439_:
{
lean_object* v___x_3442_; lean_object* v___x_3444_; 
v___x_3442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3442_, 0, v___x_3438_);
lean_ctor_set(v___x_3442_, 1, v___x_3422_);
if (v_isShared_3441_ == 0)
{
lean_ctor_set_tag(v___x_3440_, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3442_);
v___x_3444_ = v___x_3440_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3450_; 
v_reuseFailAlloc_3450_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3450_, 0, v___x_3442_);
v___x_3444_ = v_reuseFailAlloc_3450_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3448_; 
v___x_3445_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
v___x_3446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3446_, 0, v___x_3445_);
lean_ctor_set(v___x_3446_, 1, v_snd_3404_);
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 0, v___x_3446_);
v___x_3448_ = v___x_3435_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3446_);
v___x_3448_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
return v___x_3448_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3462_; 
lean_del_object(v___x_3420_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_mvarId_3392_);
lean_dec_ref(v_p_3391_);
v_a_3455_ = lean_ctor_get(v___x_3432_, 0);
v_isSharedCheck_3462_ = !lean_is_exclusive(v___x_3432_);
if (v_isSharedCheck_3462_ == 0)
{
v___x_3457_ = v___x_3432_;
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_a_3455_);
lean_dec(v___x_3432_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3462_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3460_; 
if (v_isShared_3458_ == 0)
{
v___x_3460_ = v___x_3457_;
goto v_reusejp_3459_;
}
else
{
lean_object* v_reuseFailAlloc_3461_; 
v_reuseFailAlloc_3461_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3461_, 0, v_a_3455_);
v___x_3460_ = v_reuseFailAlloc_3461_;
goto v_reusejp_3459_;
}
v_reusejp_3459_:
{
return v___x_3460_;
}
}
}
}
}
else
{
lean_object* v_a_3463_; lean_object* v___x_3465_; uint8_t v_isShared_3466_; uint8_t v_isSharedCheck_3470_; 
lean_del_object(v___x_3420_);
lean_dec(v_val_3418_);
lean_del_object(v___x_3406_);
lean_dec(v_snd_3404_);
lean_dec(v_mvarId_3392_);
lean_dec_ref(v_p_3391_);
v_a_3463_ = lean_ctor_get(v___x_3424_, 0);
v_isSharedCheck_3470_ = !lean_is_exclusive(v___x_3424_);
if (v_isSharedCheck_3470_ == 0)
{
v___x_3465_ = v___x_3424_;
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
else
{
lean_inc(v_a_3463_);
lean_dec(v___x_3424_);
v___x_3465_ = lean_box(0);
v_isShared_3466_ = v_isSharedCheck_3470_;
goto v_resetjp_3464_;
}
v_resetjp_3464_:
{
lean_object* v___x_3468_; 
if (v_isShared_3466_ == 0)
{
v___x_3468_ = v___x_3465_;
goto v_reusejp_3467_;
}
else
{
lean_object* v_reuseFailAlloc_3469_; 
v_reuseFailAlloc_3469_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3469_, 0, v_a_3463_);
v___x_3468_ = v_reuseFailAlloc_3469_;
goto v_reusejp_3467_;
}
v_reusejp_3467_:
{
return v___x_3468_;
}
}
}
}
}
v___jp_3409_:
{
lean_object* v___x_3412_; 
if (v_isShared_3407_ == 0)
{
lean_ctor_set(v___x_3406_, 1, v_a_3410_);
lean_ctor_set(v___x_3406_, 0, v___x_3408_);
v___x_3412_ = v___x_3406_;
goto v_reusejp_3411_;
}
else
{
lean_object* v_reuseFailAlloc_3416_; 
v_reuseFailAlloc_3416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3416_, 0, v___x_3408_);
lean_ctor_set(v_reuseFailAlloc_3416_, 1, v_a_3410_);
v___x_3412_ = v_reuseFailAlloc_3416_;
goto v_reusejp_3411_;
}
v_reusejp_3411_:
{
size_t v___x_3413_; size_t v___x_3414_; 
v___x_3413_ = ((size_t)1ULL);
v___x_3414_ = lean_usize_add(v_i_3395_, v___x_3413_);
v_i_3395_ = v___x_3414_;
v_b_3396_ = v___x_3412_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___boxed(lean_object* v_p_3474_, lean_object* v_mvarId_3475_, lean_object* v_as_3476_, lean_object* v_sz_3477_, lean_object* v_i_3478_, lean_object* v_b_3479_, lean_object* v___y_3480_, lean_object* v___y_3481_, lean_object* v___y_3482_, lean_object* v___y_3483_, lean_object* v___y_3484_){
_start:
{
size_t v_sz_boxed_3485_; size_t v_i_boxed_3486_; lean_object* v_res_3487_; 
v_sz_boxed_3485_ = lean_unbox_usize(v_sz_3477_);
lean_dec(v_sz_3477_);
v_i_boxed_3486_ = lean_unbox_usize(v_i_3478_);
lean_dec(v_i_3478_);
v_res_3487_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(v_p_3474_, v_mvarId_3475_, v_as_3476_, v_sz_boxed_3485_, v_i_boxed_3486_, v_b_3479_, v___y_3480_, v___y_3481_, v___y_3482_, v___y_3483_);
lean_dec(v___y_3483_);
lean_dec_ref(v___y_3482_);
lean_dec(v___y_3481_);
lean_dec_ref(v___y_3480_);
lean_dec_ref(v_as_3476_);
return v_res_3487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(lean_object* v_p_3488_, lean_object* v_mvarId_3489_, lean_object* v_as_3490_, size_t v_sz_3491_, size_t v_i_3492_, lean_object* v_b_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_){
_start:
{
uint8_t v___x_3499_; 
v___x_3499_ = lean_usize_dec_lt(v_i_3492_, v_sz_3491_);
if (v___x_3499_ == 0)
{
lean_object* v___x_3500_; 
lean_dec(v_mvarId_3489_);
lean_dec_ref(v_p_3488_);
v___x_3500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3500_, 0, v_b_3493_);
return v___x_3500_;
}
else
{
lean_object* v_snd_3501_; lean_object* v___x_3503_; uint8_t v_isShared_3504_; uint8_t v_isSharedCheck_3569_; 
v_snd_3501_ = lean_ctor_get(v_b_3493_, 1);
v_isSharedCheck_3569_ = !lean_is_exclusive(v_b_3493_);
if (v_isSharedCheck_3569_ == 0)
{
lean_object* v_unused_3570_; 
v_unused_3570_ = lean_ctor_get(v_b_3493_, 0);
lean_dec(v_unused_3570_);
v___x_3503_ = v_b_3493_;
v_isShared_3504_ = v_isSharedCheck_3569_;
goto v_resetjp_3502_;
}
else
{
lean_inc(v_snd_3501_);
lean_dec(v_b_3493_);
v___x_3503_ = lean_box(0);
v_isShared_3504_ = v_isSharedCheck_3569_;
goto v_resetjp_3502_;
}
v_resetjp_3502_:
{
lean_object* v___x_3505_; lean_object* v_a_3507_; lean_object* v_a_3514_; 
v___x_3505_ = lean_box(0);
v_a_3514_ = lean_array_uget(v_as_3490_, v_i_3492_);
if (lean_obj_tag(v_a_3514_) == 0)
{
v_a_3507_ = v_snd_3501_;
goto v___jp_3506_;
}
else
{
lean_object* v_val_3515_; lean_object* v___x_3517_; uint8_t v_isShared_3518_; uint8_t v_isSharedCheck_3568_; 
v_val_3515_ = lean_ctor_get(v_a_3514_, 0);
v_isSharedCheck_3568_ = !lean_is_exclusive(v_a_3514_);
if (v_isSharedCheck_3568_ == 0)
{
v___x_3517_ = v_a_3514_;
v_isShared_3518_ = v_isSharedCheck_3568_;
goto v_resetjp_3516_;
}
else
{
lean_inc(v_val_3515_);
lean_dec(v_a_3514_);
v___x_3517_ = lean_box(0);
v_isShared_3518_ = v_isSharedCheck_3568_;
goto v_resetjp_3516_;
}
v_resetjp_3516_:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; 
v___x_3519_ = lean_box(0);
v___x_3520_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__0));
lean_inc_ref(v_p_3488_);
lean_inc(v___y_3497_);
lean_inc_ref(v___y_3496_);
lean_inc(v___y_3495_);
lean_inc_ref(v___y_3494_);
lean_inc(v_val_3515_);
v___x_3521_ = lean_apply_6(v_p_3488_, v_val_3515_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_, lean_box(0));
if (lean_obj_tag(v___x_3521_) == 0)
{
lean_object* v_a_3522_; uint8_t v___x_3523_; 
v_a_3522_ = lean_ctor_get(v___x_3521_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3521_, 1);
v___x_3523_ = lean_unbox(v_a_3522_);
lean_dec(v_a_3522_);
if (v___x_3523_ == 0)
{
lean_del_object(v___x_3517_);
lean_dec(v_val_3515_);
lean_dec(v_snd_3501_);
v_a_3507_ = v___x_3520_;
goto v___jp_3506_;
}
else
{
lean_object* v___x_3524_; lean_object* v___x_3525_; uint8_t v___x_3526_; lean_object* v___x_3527_; lean_object* v___f_3528_; lean_object* v___x_3529_; 
v___x_3524_ = l_Lean_LocalDecl_fvarId(v_val_3515_);
lean_dec(v_val_3515_);
v___x_3525_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3526_ = 0;
v___x_3527_ = lean_box(v___x_3526_);
lean_inc(v_mvarId_3489_);
v___f_3528_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3528_, 0, v_mvarId_3489_);
lean_closure_set(v___f_3528_, 1, v___x_3524_);
lean_closure_set(v___f_3528_, 2, v___x_3525_);
lean_closure_set(v___f_3528_, 3, v___x_3527_);
lean_closure_set(v___f_3528_, 4, v___x_3505_);
v___x_3529_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3528_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v_a_3530_; lean_object* v___x_3532_; uint8_t v_isShared_3533_; uint8_t v_isSharedCheck_3551_; 
v_a_3530_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3551_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3551_ == 0)
{
v___x_3532_ = v___x_3529_;
v_isShared_3533_ = v_isSharedCheck_3551_;
goto v_resetjp_3531_;
}
else
{
lean_inc(v_a_3530_);
lean_dec(v___x_3529_);
v___x_3532_ = lean_box(0);
v_isShared_3533_ = v_isSharedCheck_3551_;
goto v_resetjp_3531_;
}
v_resetjp_3531_:
{
if (lean_obj_tag(v_a_3530_) == 0)
{
lean_del_object(v___x_3532_);
lean_del_object(v___x_3517_);
lean_dec(v_snd_3501_);
v_a_3507_ = v___x_3520_;
goto v___jp_3506_;
}
else
{
lean_object* v___x_3535_; 
lean_del_object(v___x_3503_);
lean_dec(v_mvarId_3489_);
lean_dec_ref(v_p_3488_);
lean_inc_ref(v_a_3530_);
if (v_isShared_3518_ == 0)
{
lean_ctor_set(v___x_3517_, 0, v_a_3530_);
v___x_3535_ = v___x_3517_;
goto v_reusejp_3534_;
}
else
{
lean_object* v_reuseFailAlloc_3550_; 
v_reuseFailAlloc_3550_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3550_, 0, v_a_3530_);
v___x_3535_ = v_reuseFailAlloc_3550_;
goto v_reusejp_3534_;
}
v_reusejp_3534_:
{
lean_object* v___x_3537_; uint8_t v_isShared_3538_; uint8_t v_isSharedCheck_3548_; 
v_isSharedCheck_3548_ = !lean_is_exclusive(v_a_3530_);
if (v_isSharedCheck_3548_ == 0)
{
lean_object* v_unused_3549_; 
v_unused_3549_ = lean_ctor_get(v_a_3530_, 0);
lean_dec(v_unused_3549_);
v___x_3537_ = v_a_3530_;
v_isShared_3538_ = v_isSharedCheck_3548_;
goto v_resetjp_3536_;
}
else
{
lean_dec(v_a_3530_);
v___x_3537_ = lean_box(0);
v_isShared_3538_ = v_isSharedCheck_3548_;
goto v_resetjp_3536_;
}
v_resetjp_3536_:
{
lean_object* v___x_3539_; lean_object* v___x_3541_; 
v___x_3539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3539_, 0, v___x_3535_);
lean_ctor_set(v___x_3539_, 1, v___x_3519_);
if (v_isShared_3538_ == 0)
{
lean_ctor_set_tag(v___x_3537_, 0);
lean_ctor_set(v___x_3537_, 0, v___x_3539_);
v___x_3541_ = v___x_3537_;
goto v_reusejp_3540_;
}
else
{
lean_object* v_reuseFailAlloc_3547_; 
v_reuseFailAlloc_3547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3547_, 0, v___x_3539_);
v___x_3541_ = v_reuseFailAlloc_3547_;
goto v_reusejp_3540_;
}
v_reusejp_3540_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3545_; 
v___x_3542_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3542_, 0, v___x_3541_);
v___x_3543_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3543_, 0, v___x_3542_);
lean_ctor_set(v___x_3543_, 1, v_snd_3501_);
if (v_isShared_3533_ == 0)
{
lean_ctor_set(v___x_3532_, 0, v___x_3543_);
v___x_3545_ = v___x_3532_;
goto v_reusejp_3544_;
}
else
{
lean_object* v_reuseFailAlloc_3546_; 
v_reuseFailAlloc_3546_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3546_, 0, v___x_3543_);
v___x_3545_ = v_reuseFailAlloc_3546_;
goto v_reusejp_3544_;
}
v_reusejp_3544_:
{
return v___x_3545_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3552_; lean_object* v___x_3554_; uint8_t v_isShared_3555_; uint8_t v_isSharedCheck_3559_; 
lean_del_object(v___x_3517_);
lean_del_object(v___x_3503_);
lean_dec(v_snd_3501_);
lean_dec(v_mvarId_3489_);
lean_dec_ref(v_p_3488_);
v_a_3552_ = lean_ctor_get(v___x_3529_, 0);
v_isSharedCheck_3559_ = !lean_is_exclusive(v___x_3529_);
if (v_isSharedCheck_3559_ == 0)
{
v___x_3554_ = v___x_3529_;
v_isShared_3555_ = v_isSharedCheck_3559_;
goto v_resetjp_3553_;
}
else
{
lean_inc(v_a_3552_);
lean_dec(v___x_3529_);
v___x_3554_ = lean_box(0);
v_isShared_3555_ = v_isSharedCheck_3559_;
goto v_resetjp_3553_;
}
v_resetjp_3553_:
{
lean_object* v___x_3557_; 
if (v_isShared_3555_ == 0)
{
v___x_3557_ = v___x_3554_;
goto v_reusejp_3556_;
}
else
{
lean_object* v_reuseFailAlloc_3558_; 
v_reuseFailAlloc_3558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3558_, 0, v_a_3552_);
v___x_3557_ = v_reuseFailAlloc_3558_;
goto v_reusejp_3556_;
}
v_reusejp_3556_:
{
return v___x_3557_;
}
}
}
}
}
else
{
lean_object* v_a_3560_; lean_object* v___x_3562_; uint8_t v_isShared_3563_; uint8_t v_isSharedCheck_3567_; 
lean_del_object(v___x_3517_);
lean_dec(v_val_3515_);
lean_del_object(v___x_3503_);
lean_dec(v_snd_3501_);
lean_dec(v_mvarId_3489_);
lean_dec_ref(v_p_3488_);
v_a_3560_ = lean_ctor_get(v___x_3521_, 0);
v_isSharedCheck_3567_ = !lean_is_exclusive(v___x_3521_);
if (v_isSharedCheck_3567_ == 0)
{
v___x_3562_ = v___x_3521_;
v_isShared_3563_ = v_isSharedCheck_3567_;
goto v_resetjp_3561_;
}
else
{
lean_inc(v_a_3560_);
lean_dec(v___x_3521_);
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
}
v___jp_3506_:
{
lean_object* v___x_3509_; 
if (v_isShared_3504_ == 0)
{
lean_ctor_set(v___x_3503_, 1, v_a_3507_);
lean_ctor_set(v___x_3503_, 0, v___x_3505_);
v___x_3509_ = v___x_3503_;
goto v_reusejp_3508_;
}
else
{
lean_object* v_reuseFailAlloc_3513_; 
v_reuseFailAlloc_3513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3513_, 0, v___x_3505_);
lean_ctor_set(v_reuseFailAlloc_3513_, 1, v_a_3507_);
v___x_3509_ = v_reuseFailAlloc_3513_;
goto v_reusejp_3508_;
}
v_reusejp_3508_:
{
size_t v___x_3510_; size_t v___x_3511_; lean_object* v___x_3512_; 
v___x_3510_ = ((size_t)1ULL);
v___x_3511_ = lean_usize_add(v_i_3492_, v___x_3510_);
v___x_3512_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5(v_p_3488_, v_mvarId_3489_, v_as_3490_, v_sz_3491_, v___x_3511_, v___x_3509_, v___y_3494_, v___y_3495_, v___y_3496_, v___y_3497_);
return v___x_3512_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4___boxed(lean_object* v_p_3571_, lean_object* v_mvarId_3572_, lean_object* v_as_3573_, lean_object* v_sz_3574_, lean_object* v_i_3575_, lean_object* v_b_3576_, lean_object* v___y_3577_, lean_object* v___y_3578_, lean_object* v___y_3579_, lean_object* v___y_3580_, lean_object* v___y_3581_){
_start:
{
size_t v_sz_boxed_3582_; size_t v_i_boxed_3583_; lean_object* v_res_3584_; 
v_sz_boxed_3582_ = lean_unbox_usize(v_sz_3574_);
lean_dec(v_sz_3574_);
v_i_boxed_3583_ = lean_unbox_usize(v_i_3575_);
lean_dec(v_i_3575_);
v_res_3584_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(v_p_3571_, v_mvarId_3572_, v_as_3573_, v_sz_boxed_3582_, v_i_boxed_3583_, v_b_3576_, v___y_3577_, v___y_3578_, v___y_3579_, v___y_3580_);
lean_dec(v___y_3580_);
lean_dec_ref(v___y_3579_);
lean_dec(v___y_3578_);
lean_dec_ref(v___y_3577_);
lean_dec_ref(v_as_3573_);
return v_res_3584_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(lean_object* v_init_3585_, lean_object* v_p_3586_, lean_object* v_mvarId_3587_, lean_object* v_n_3588_, lean_object* v_b_3589_, lean_object* v___y_3590_, lean_object* v___y_3591_, lean_object* v___y_3592_, lean_object* v___y_3593_){
_start:
{
if (lean_obj_tag(v_n_3588_) == 0)
{
lean_object* v_cs_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; size_t v_sz_3598_; size_t v___x_3599_; lean_object* v___x_3600_; 
v_cs_3595_ = lean_ctor_get(v_n_3588_, 0);
v___x_3596_ = lean_box(0);
v___x_3597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3597_, 0, v___x_3596_);
lean_ctor_set(v___x_3597_, 1, v_b_3589_);
v_sz_3598_ = lean_array_size(v_cs_3595_);
v___x_3599_ = ((size_t)0ULL);
v___x_3600_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(v_init_3585_, v_p_3586_, v_mvarId_3587_, v_cs_3595_, v_sz_3598_, v___x_3599_, v___x_3597_, v___y_3590_, v___y_3591_, v___y_3592_, v___y_3593_);
if (lean_obj_tag(v___x_3600_) == 0)
{
lean_object* v_a_3601_; lean_object* v___x_3603_; uint8_t v_isShared_3604_; uint8_t v_isSharedCheck_3615_; 
v_a_3601_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3615_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3615_ == 0)
{
v___x_3603_ = v___x_3600_;
v_isShared_3604_ = v_isSharedCheck_3615_;
goto v_resetjp_3602_;
}
else
{
lean_inc(v_a_3601_);
lean_dec(v___x_3600_);
v___x_3603_ = lean_box(0);
v_isShared_3604_ = v_isSharedCheck_3615_;
goto v_resetjp_3602_;
}
v_resetjp_3602_:
{
lean_object* v_fst_3605_; 
v_fst_3605_ = lean_ctor_get(v_a_3601_, 0);
if (lean_obj_tag(v_fst_3605_) == 0)
{
lean_object* v_snd_3606_; lean_object* v___x_3607_; lean_object* v___x_3609_; 
v_snd_3606_ = lean_ctor_get(v_a_3601_, 1);
lean_inc(v_snd_3606_);
lean_dec(v_a_3601_);
v___x_3607_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3607_, 0, v_snd_3606_);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 0, v___x_3607_);
v___x_3609_ = v___x_3603_;
goto v_reusejp_3608_;
}
else
{
lean_object* v_reuseFailAlloc_3610_; 
v_reuseFailAlloc_3610_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3610_, 0, v___x_3607_);
v___x_3609_ = v_reuseFailAlloc_3610_;
goto v_reusejp_3608_;
}
v_reusejp_3608_:
{
return v___x_3609_;
}
}
else
{
lean_object* v_val_3611_; lean_object* v___x_3613_; 
lean_inc_ref(v_fst_3605_);
lean_dec(v_a_3601_);
v_val_3611_ = lean_ctor_get(v_fst_3605_, 0);
lean_inc(v_val_3611_);
lean_dec_ref_known(v_fst_3605_, 1);
if (v_isShared_3604_ == 0)
{
lean_ctor_set(v___x_3603_, 0, v_val_3611_);
v___x_3613_ = v___x_3603_;
goto v_reusejp_3612_;
}
else
{
lean_object* v_reuseFailAlloc_3614_; 
v_reuseFailAlloc_3614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3614_, 0, v_val_3611_);
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
else
{
lean_object* v_a_3616_; lean_object* v___x_3618_; uint8_t v_isShared_3619_; uint8_t v_isSharedCheck_3623_; 
v_a_3616_ = lean_ctor_get(v___x_3600_, 0);
v_isSharedCheck_3623_ = !lean_is_exclusive(v___x_3600_);
if (v_isSharedCheck_3623_ == 0)
{
v___x_3618_ = v___x_3600_;
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
else
{
lean_inc(v_a_3616_);
lean_dec(v___x_3600_);
v___x_3618_ = lean_box(0);
v_isShared_3619_ = v_isSharedCheck_3623_;
goto v_resetjp_3617_;
}
v_resetjp_3617_:
{
lean_object* v___x_3621_; 
if (v_isShared_3619_ == 0)
{
v___x_3621_ = v___x_3618_;
goto v_reusejp_3620_;
}
else
{
lean_object* v_reuseFailAlloc_3622_; 
v_reuseFailAlloc_3622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3622_, 0, v_a_3616_);
v___x_3621_ = v_reuseFailAlloc_3622_;
goto v_reusejp_3620_;
}
v_reusejp_3620_:
{
return v___x_3621_;
}
}
}
}
else
{
lean_object* v_vs_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; size_t v_sz_3627_; size_t v___x_3628_; lean_object* v___x_3629_; 
v_vs_3624_ = lean_ctor_get(v_n_3588_, 0);
v___x_3625_ = lean_box(0);
v___x_3626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3625_);
lean_ctor_set(v___x_3626_, 1, v_b_3589_);
v_sz_3627_ = lean_array_size(v_vs_3624_);
v___x_3628_ = ((size_t)0ULL);
v___x_3629_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4(v_p_3586_, v_mvarId_3587_, v_vs_3624_, v_sz_3627_, v___x_3628_, v___x_3626_, v___y_3590_, v___y_3591_, v___y_3592_, v___y_3593_);
if (lean_obj_tag(v___x_3629_) == 0)
{
lean_object* v_a_3630_; lean_object* v___x_3632_; uint8_t v_isShared_3633_; uint8_t v_isSharedCheck_3644_; 
v_a_3630_ = lean_ctor_get(v___x_3629_, 0);
v_isSharedCheck_3644_ = !lean_is_exclusive(v___x_3629_);
if (v_isSharedCheck_3644_ == 0)
{
v___x_3632_ = v___x_3629_;
v_isShared_3633_ = v_isSharedCheck_3644_;
goto v_resetjp_3631_;
}
else
{
lean_inc(v_a_3630_);
lean_dec(v___x_3629_);
v___x_3632_ = lean_box(0);
v_isShared_3633_ = v_isSharedCheck_3644_;
goto v_resetjp_3631_;
}
v_resetjp_3631_:
{
lean_object* v_fst_3634_; 
v_fst_3634_ = lean_ctor_get(v_a_3630_, 0);
if (lean_obj_tag(v_fst_3634_) == 0)
{
lean_object* v_snd_3635_; lean_object* v___x_3636_; lean_object* v___x_3638_; 
v_snd_3635_ = lean_ctor_get(v_a_3630_, 1);
lean_inc(v_snd_3635_);
lean_dec(v_a_3630_);
v___x_3636_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3636_, 0, v_snd_3635_);
if (v_isShared_3633_ == 0)
{
lean_ctor_set(v___x_3632_, 0, v___x_3636_);
v___x_3638_ = v___x_3632_;
goto v_reusejp_3637_;
}
else
{
lean_object* v_reuseFailAlloc_3639_; 
v_reuseFailAlloc_3639_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3639_, 0, v___x_3636_);
v___x_3638_ = v_reuseFailAlloc_3639_;
goto v_reusejp_3637_;
}
v_reusejp_3637_:
{
return v___x_3638_;
}
}
else
{
lean_object* v_val_3640_; lean_object* v___x_3642_; 
lean_inc_ref(v_fst_3634_);
lean_dec(v_a_3630_);
v_val_3640_ = lean_ctor_get(v_fst_3634_, 0);
lean_inc(v_val_3640_);
lean_dec_ref_known(v_fst_3634_, 1);
if (v_isShared_3633_ == 0)
{
lean_ctor_set(v___x_3632_, 0, v_val_3640_);
v___x_3642_ = v___x_3632_;
goto v_reusejp_3641_;
}
else
{
lean_object* v_reuseFailAlloc_3643_; 
v_reuseFailAlloc_3643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3643_, 0, v_val_3640_);
v___x_3642_ = v_reuseFailAlloc_3643_;
goto v_reusejp_3641_;
}
v_reusejp_3641_:
{
return v___x_3642_;
}
}
}
}
else
{
lean_object* v_a_3645_; lean_object* v___x_3647_; uint8_t v_isShared_3648_; uint8_t v_isSharedCheck_3652_; 
v_a_3645_ = lean_ctor_get(v___x_3629_, 0);
v_isSharedCheck_3652_ = !lean_is_exclusive(v___x_3629_);
if (v_isSharedCheck_3652_ == 0)
{
v___x_3647_ = v___x_3629_;
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
else
{
lean_inc(v_a_3645_);
lean_dec(v___x_3629_);
v___x_3647_ = lean_box(0);
v_isShared_3648_ = v_isSharedCheck_3652_;
goto v_resetjp_3646_;
}
v_resetjp_3646_:
{
lean_object* v___x_3650_; 
if (v_isShared_3648_ == 0)
{
v___x_3650_ = v___x_3647_;
goto v_reusejp_3649_;
}
else
{
lean_object* v_reuseFailAlloc_3651_; 
v_reuseFailAlloc_3651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3651_, 0, v_a_3645_);
v___x_3650_ = v_reuseFailAlloc_3651_;
goto v_reusejp_3649_;
}
v_reusejp_3649_:
{
return v___x_3650_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(lean_object* v_init_3653_, lean_object* v_p_3654_, lean_object* v_mvarId_3655_, lean_object* v_as_3656_, size_t v_sz_3657_, size_t v_i_3658_, lean_object* v_b_3659_, lean_object* v___y_3660_, lean_object* v___y_3661_, lean_object* v___y_3662_, lean_object* v___y_3663_){
_start:
{
uint8_t v___x_3665_; 
v___x_3665_ = lean_usize_dec_lt(v_i_3658_, v_sz_3657_);
if (v___x_3665_ == 0)
{
lean_object* v___x_3666_; 
lean_dec(v_mvarId_3655_);
lean_dec_ref(v_p_3654_);
v___x_3666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3666_, 0, v_b_3659_);
return v___x_3666_;
}
else
{
lean_object* v_snd_3667_; lean_object* v___x_3669_; uint8_t v_isShared_3670_; uint8_t v_isSharedCheck_3701_; 
v_snd_3667_ = lean_ctor_get(v_b_3659_, 1);
v_isSharedCheck_3701_ = !lean_is_exclusive(v_b_3659_);
if (v_isSharedCheck_3701_ == 0)
{
lean_object* v_unused_3702_; 
v_unused_3702_ = lean_ctor_get(v_b_3659_, 0);
lean_dec(v_unused_3702_);
v___x_3669_ = v_b_3659_;
v_isShared_3670_ = v_isSharedCheck_3701_;
goto v_resetjp_3668_;
}
else
{
lean_inc(v_snd_3667_);
lean_dec(v_b_3659_);
v___x_3669_ = lean_box(0);
v_isShared_3670_ = v_isSharedCheck_3701_;
goto v_resetjp_3668_;
}
v_resetjp_3668_:
{
lean_object* v___x_3671_; lean_object* v_a_3672_; lean_object* v___x_3673_; 
v___x_3671_ = lean_box(0);
v_a_3672_ = lean_array_uget_borrowed(v_as_3656_, v_i_3658_);
lean_inc(v_snd_3667_);
lean_inc(v_mvarId_3655_);
lean_inc_ref(v_p_3654_);
v___x_3673_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3653_, v_p_3654_, v_mvarId_3655_, v_a_3672_, v_snd_3667_, v___y_3660_, v___y_3661_, v___y_3662_, v___y_3663_);
if (lean_obj_tag(v___x_3673_) == 0)
{
lean_object* v_a_3674_; lean_object* v___x_3676_; uint8_t v_isShared_3677_; uint8_t v_isSharedCheck_3692_; 
v_a_3674_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3692_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3692_ == 0)
{
v___x_3676_ = v___x_3673_;
v_isShared_3677_ = v_isSharedCheck_3692_;
goto v_resetjp_3675_;
}
else
{
lean_inc(v_a_3674_);
lean_dec(v___x_3673_);
v___x_3676_ = lean_box(0);
v_isShared_3677_ = v_isSharedCheck_3692_;
goto v_resetjp_3675_;
}
v_resetjp_3675_:
{
if (lean_obj_tag(v_a_3674_) == 0)
{
lean_object* v___x_3678_; lean_object* v___x_3680_; 
lean_dec(v_mvarId_3655_);
lean_dec_ref(v_p_3654_);
v___x_3678_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3678_, 0, v_a_3674_);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 0, v___x_3678_);
v___x_3680_ = v___x_3669_;
goto v_reusejp_3679_;
}
else
{
lean_object* v_reuseFailAlloc_3684_; 
v_reuseFailAlloc_3684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3684_, 0, v___x_3678_);
lean_ctor_set(v_reuseFailAlloc_3684_, 1, v_snd_3667_);
v___x_3680_ = v_reuseFailAlloc_3684_;
goto v_reusejp_3679_;
}
v_reusejp_3679_:
{
lean_object* v___x_3682_; 
if (v_isShared_3677_ == 0)
{
lean_ctor_set(v___x_3676_, 0, v___x_3680_);
v___x_3682_ = v___x_3676_;
goto v_reusejp_3681_;
}
else
{
lean_object* v_reuseFailAlloc_3683_; 
v_reuseFailAlloc_3683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3683_, 0, v___x_3680_);
v___x_3682_ = v_reuseFailAlloc_3683_;
goto v_reusejp_3681_;
}
v_reusejp_3681_:
{
return v___x_3682_;
}
}
}
else
{
lean_object* v_a_3685_; lean_object* v___x_3687_; 
lean_del_object(v___x_3676_);
lean_dec(v_snd_3667_);
v_a_3685_ = lean_ctor_get(v_a_3674_, 0);
lean_inc(v_a_3685_);
lean_dec_ref_known(v_a_3674_, 1);
if (v_isShared_3670_ == 0)
{
lean_ctor_set(v___x_3669_, 1, v_a_3685_);
lean_ctor_set(v___x_3669_, 0, v___x_3671_);
v___x_3687_ = v___x_3669_;
goto v_reusejp_3686_;
}
else
{
lean_object* v_reuseFailAlloc_3691_; 
v_reuseFailAlloc_3691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3691_, 0, v___x_3671_);
lean_ctor_set(v_reuseFailAlloc_3691_, 1, v_a_3685_);
v___x_3687_ = v_reuseFailAlloc_3691_;
goto v_reusejp_3686_;
}
v_reusejp_3686_:
{
size_t v___x_3688_; size_t v___x_3689_; 
v___x_3688_ = ((size_t)1ULL);
v___x_3689_ = lean_usize_add(v_i_3658_, v___x_3688_);
v_i_3658_ = v___x_3689_;
v_b_3659_ = v___x_3687_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_3693_; lean_object* v___x_3695_; uint8_t v_isShared_3696_; uint8_t v_isSharedCheck_3700_; 
lean_del_object(v___x_3669_);
lean_dec(v_snd_3667_);
lean_dec(v_mvarId_3655_);
lean_dec_ref(v_p_3654_);
v_a_3693_ = lean_ctor_get(v___x_3673_, 0);
v_isSharedCheck_3700_ = !lean_is_exclusive(v___x_3673_);
if (v_isSharedCheck_3700_ == 0)
{
v___x_3695_ = v___x_3673_;
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
else
{
lean_inc(v_a_3693_);
lean_dec(v___x_3673_);
v___x_3695_ = lean_box(0);
v_isShared_3696_ = v_isSharedCheck_3700_;
goto v_resetjp_3694_;
}
v_resetjp_3694_:
{
lean_object* v___x_3698_; 
if (v_isShared_3696_ == 0)
{
v___x_3698_ = v___x_3695_;
goto v_reusejp_3697_;
}
else
{
lean_object* v_reuseFailAlloc_3699_; 
v_reuseFailAlloc_3699_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3699_, 0, v_a_3693_);
v___x_3698_ = v_reuseFailAlloc_3699_;
goto v_reusejp_3697_;
}
v_reusejp_3697_:
{
return v___x_3698_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3___boxed(lean_object* v_init_3703_, lean_object* v_p_3704_, lean_object* v_mvarId_3705_, lean_object* v_as_3706_, lean_object* v_sz_3707_, lean_object* v_i_3708_, lean_object* v_b_3709_, lean_object* v___y_3710_, lean_object* v___y_3711_, lean_object* v___y_3712_, lean_object* v___y_3713_, lean_object* v___y_3714_){
_start:
{
size_t v_sz_boxed_3715_; size_t v_i_boxed_3716_; lean_object* v_res_3717_; 
v_sz_boxed_3715_ = lean_unbox_usize(v_sz_3707_);
lean_dec(v_sz_3707_);
v_i_boxed_3716_ = lean_unbox_usize(v_i_3708_);
lean_dec(v_i_3708_);
v_res_3717_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__3(v_init_3703_, v_p_3704_, v_mvarId_3705_, v_as_3706_, v_sz_boxed_3715_, v_i_boxed_3716_, v_b_3709_, v___y_3710_, v___y_3711_, v___y_3712_, v___y_3713_);
lean_dec(v___y_3713_);
lean_dec_ref(v___y_3712_);
lean_dec(v___y_3711_);
lean_dec_ref(v___y_3710_);
lean_dec_ref(v_as_3706_);
lean_dec_ref(v_init_3703_);
return v_res_3717_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2___boxed(lean_object* v_init_3718_, lean_object* v_p_3719_, lean_object* v_mvarId_3720_, lean_object* v_n_3721_, lean_object* v_b_3722_, lean_object* v___y_3723_, lean_object* v___y_3724_, lean_object* v___y_3725_, lean_object* v___y_3726_, lean_object* v___y_3727_){
_start:
{
lean_object* v_res_3728_; 
v_res_3728_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3718_, v_p_3719_, v_mvarId_3720_, v_n_3721_, v_b_3722_, v___y_3723_, v___y_3724_, v___y_3725_, v___y_3726_);
lean_dec(v___y_3726_);
lean_dec_ref(v___y_3725_);
lean_dec(v___y_3724_);
lean_dec_ref(v___y_3723_);
lean_dec_ref(v_n_3721_);
lean_dec_ref(v_init_3718_);
return v_res_3728_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(lean_object* v_p_3732_, lean_object* v_mvarId_3733_, lean_object* v_as_3734_, size_t v_sz_3735_, size_t v_i_3736_, lean_object* v_b_3737_, lean_object* v___y_3738_, lean_object* v___y_3739_, lean_object* v___y_3740_, lean_object* v___y_3741_){
_start:
{
uint8_t v___x_3743_; 
v___x_3743_ = lean_usize_dec_lt(v_i_3736_, v_sz_3735_);
if (v___x_3743_ == 0)
{
lean_object* v___x_3744_; 
lean_dec(v_mvarId_3733_);
lean_dec_ref(v_p_3732_);
v___x_3744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3744_, 0, v_b_3737_);
return v___x_3744_;
}
else
{
lean_object* v_snd_3745_; lean_object* v___x_3747_; uint8_t v_isShared_3748_; uint8_t v_isSharedCheck_3812_; 
v_snd_3745_ = lean_ctor_get(v_b_3737_, 1);
v_isSharedCheck_3812_ = !lean_is_exclusive(v_b_3737_);
if (v_isSharedCheck_3812_ == 0)
{
lean_object* v_unused_3813_; 
v_unused_3813_ = lean_ctor_get(v_b_3737_, 0);
lean_dec(v_unused_3813_);
v___x_3747_ = v_b_3737_;
v_isShared_3748_ = v_isSharedCheck_3812_;
goto v_resetjp_3746_;
}
else
{
lean_inc(v_snd_3745_);
lean_dec(v_b_3737_);
v___x_3747_ = lean_box(0);
v_isShared_3748_ = v_isSharedCheck_3812_;
goto v_resetjp_3746_;
}
v_resetjp_3746_:
{
lean_object* v___x_3749_; lean_object* v_a_3751_; lean_object* v_a_3758_; 
v___x_3749_ = lean_box(0);
v_a_3758_ = lean_array_uget(v_as_3734_, v_i_3736_);
if (lean_obj_tag(v_a_3758_) == 0)
{
v_a_3751_ = v_snd_3745_;
goto v___jp_3750_;
}
else
{
lean_object* v_val_3759_; lean_object* v___x_3761_; uint8_t v_isShared_3762_; uint8_t v_isSharedCheck_3811_; 
v_val_3759_ = lean_ctor_get(v_a_3758_, 0);
v_isSharedCheck_3811_ = !lean_is_exclusive(v_a_3758_);
if (v_isSharedCheck_3811_ == 0)
{
v___x_3761_ = v_a_3758_;
v_isShared_3762_ = v_isSharedCheck_3811_;
goto v_resetjp_3760_;
}
else
{
lean_inc(v_val_3759_);
lean_dec(v_a_3758_);
v___x_3761_ = lean_box(0);
v_isShared_3762_ = v_isSharedCheck_3811_;
goto v_resetjp_3760_;
}
v_resetjp_3760_:
{
lean_object* v___x_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; 
v___x_3763_ = lean_box(0);
v___x_3764_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0));
lean_inc_ref(v_p_3732_);
lean_inc(v___y_3741_);
lean_inc_ref(v___y_3740_);
lean_inc(v___y_3739_);
lean_inc_ref(v___y_3738_);
lean_inc(v_val_3759_);
v___x_3765_ = lean_apply_6(v_p_3732_, v_val_3759_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_, lean_box(0));
if (lean_obj_tag(v___x_3765_) == 0)
{
lean_object* v_a_3766_; uint8_t v___x_3767_; 
v_a_3766_ = lean_ctor_get(v___x_3765_, 0);
lean_inc(v_a_3766_);
lean_dec_ref_known(v___x_3765_, 1);
v___x_3767_ = lean_unbox(v_a_3766_);
lean_dec(v_a_3766_);
if (v___x_3767_ == 0)
{
lean_del_object(v___x_3761_);
lean_dec(v_val_3759_);
lean_dec(v_snd_3745_);
v_a_3751_ = v___x_3764_;
goto v___jp_3750_;
}
else
{
lean_object* v___x_3768_; lean_object* v___x_3769_; uint8_t v___x_3770_; lean_object* v___x_3771_; lean_object* v___f_3772_; lean_object* v___x_3773_; 
v___x_3768_ = l_Lean_LocalDecl_fvarId(v_val_3759_);
lean_dec(v_val_3759_);
v___x_3769_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3770_ = 0;
v___x_3771_ = lean_box(v___x_3770_);
lean_inc(v_mvarId_3733_);
v___f_3772_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3772_, 0, v_mvarId_3733_);
lean_closure_set(v___f_3772_, 1, v___x_3768_);
lean_closure_set(v___f_3772_, 2, v___x_3769_);
lean_closure_set(v___f_3772_, 3, v___x_3771_);
lean_closure_set(v___f_3772_, 4, v___x_3749_);
v___x_3773_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3772_, v___y_3738_, v___y_3739_, v___y_3740_, v___y_3741_);
if (lean_obj_tag(v___x_3773_) == 0)
{
lean_object* v_a_3774_; lean_object* v___x_3776_; uint8_t v_isShared_3777_; uint8_t v_isSharedCheck_3794_; 
v_a_3774_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3794_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3794_ == 0)
{
v___x_3776_ = v___x_3773_;
v_isShared_3777_ = v_isSharedCheck_3794_;
goto v_resetjp_3775_;
}
else
{
lean_inc(v_a_3774_);
lean_dec(v___x_3773_);
v___x_3776_ = lean_box(0);
v_isShared_3777_ = v_isSharedCheck_3794_;
goto v_resetjp_3775_;
}
v_resetjp_3775_:
{
if (lean_obj_tag(v_a_3774_) == 0)
{
lean_del_object(v___x_3776_);
lean_del_object(v___x_3761_);
lean_dec(v_snd_3745_);
v_a_3751_ = v___x_3764_;
goto v___jp_3750_;
}
else
{
lean_object* v___x_3779_; 
lean_del_object(v___x_3747_);
lean_dec(v_mvarId_3733_);
lean_dec_ref(v_p_3732_);
lean_inc_ref(v_a_3774_);
if (v_isShared_3762_ == 0)
{
lean_ctor_set(v___x_3761_, 0, v_a_3774_);
v___x_3779_ = v___x_3761_;
goto v_reusejp_3778_;
}
else
{
lean_object* v_reuseFailAlloc_3793_; 
v_reuseFailAlloc_3793_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3793_, 0, v_a_3774_);
v___x_3779_ = v_reuseFailAlloc_3793_;
goto v_reusejp_3778_;
}
v_reusejp_3778_:
{
lean_object* v___x_3781_; uint8_t v_isShared_3782_; uint8_t v_isSharedCheck_3791_; 
v_isSharedCheck_3791_ = !lean_is_exclusive(v_a_3774_);
if (v_isSharedCheck_3791_ == 0)
{
lean_object* v_unused_3792_; 
v_unused_3792_ = lean_ctor_get(v_a_3774_, 0);
lean_dec(v_unused_3792_);
v___x_3781_ = v_a_3774_;
v_isShared_3782_ = v_isSharedCheck_3791_;
goto v_resetjp_3780_;
}
else
{
lean_dec(v_a_3774_);
v___x_3781_ = lean_box(0);
v_isShared_3782_ = v_isSharedCheck_3791_;
goto v_resetjp_3780_;
}
v_resetjp_3780_:
{
lean_object* v___x_3783_; lean_object* v___x_3785_; 
v___x_3783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3779_);
lean_ctor_set(v___x_3783_, 1, v___x_3763_);
if (v_isShared_3782_ == 0)
{
lean_ctor_set(v___x_3781_, 0, v___x_3783_);
v___x_3785_ = v___x_3781_;
goto v_reusejp_3784_;
}
else
{
lean_object* v_reuseFailAlloc_3790_; 
v_reuseFailAlloc_3790_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3790_, 0, v___x_3783_);
v___x_3785_ = v_reuseFailAlloc_3790_;
goto v_reusejp_3784_;
}
v_reusejp_3784_:
{
lean_object* v___x_3786_; lean_object* v___x_3788_; 
v___x_3786_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___x_3785_);
lean_ctor_set(v___x_3786_, 1, v_snd_3745_);
if (v_isShared_3777_ == 0)
{
lean_ctor_set(v___x_3776_, 0, v___x_3786_);
v___x_3788_ = v___x_3776_;
goto v_reusejp_3787_;
}
else
{
lean_object* v_reuseFailAlloc_3789_; 
v_reuseFailAlloc_3789_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3789_, 0, v___x_3786_);
v___x_3788_ = v_reuseFailAlloc_3789_;
goto v_reusejp_3787_;
}
v_reusejp_3787_:
{
return v___x_3788_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3795_; lean_object* v___x_3797_; uint8_t v_isShared_3798_; uint8_t v_isSharedCheck_3802_; 
lean_del_object(v___x_3761_);
lean_del_object(v___x_3747_);
lean_dec(v_snd_3745_);
lean_dec(v_mvarId_3733_);
lean_dec_ref(v_p_3732_);
v_a_3795_ = lean_ctor_get(v___x_3773_, 0);
v_isSharedCheck_3802_ = !lean_is_exclusive(v___x_3773_);
if (v_isSharedCheck_3802_ == 0)
{
v___x_3797_ = v___x_3773_;
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
else
{
lean_inc(v_a_3795_);
lean_dec(v___x_3773_);
v___x_3797_ = lean_box(0);
v_isShared_3798_ = v_isSharedCheck_3802_;
goto v_resetjp_3796_;
}
v_resetjp_3796_:
{
lean_object* v___x_3800_; 
if (v_isShared_3798_ == 0)
{
v___x_3800_ = v___x_3797_;
goto v_reusejp_3799_;
}
else
{
lean_object* v_reuseFailAlloc_3801_; 
v_reuseFailAlloc_3801_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3801_, 0, v_a_3795_);
v___x_3800_ = v_reuseFailAlloc_3801_;
goto v_reusejp_3799_;
}
v_reusejp_3799_:
{
return v___x_3800_;
}
}
}
}
}
else
{
lean_object* v_a_3803_; lean_object* v___x_3805_; uint8_t v_isShared_3806_; uint8_t v_isSharedCheck_3810_; 
lean_del_object(v___x_3761_);
lean_dec(v_val_3759_);
lean_del_object(v___x_3747_);
lean_dec(v_snd_3745_);
lean_dec(v_mvarId_3733_);
lean_dec_ref(v_p_3732_);
v_a_3803_ = lean_ctor_get(v___x_3765_, 0);
v_isSharedCheck_3810_ = !lean_is_exclusive(v___x_3765_);
if (v_isSharedCheck_3810_ == 0)
{
v___x_3805_ = v___x_3765_;
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
else
{
lean_inc(v_a_3803_);
lean_dec(v___x_3765_);
v___x_3805_ = lean_box(0);
v_isShared_3806_ = v_isSharedCheck_3810_;
goto v_resetjp_3804_;
}
v_resetjp_3804_:
{
lean_object* v___x_3808_; 
if (v_isShared_3806_ == 0)
{
v___x_3808_ = v___x_3805_;
goto v_reusejp_3807_;
}
else
{
lean_object* v_reuseFailAlloc_3809_; 
v_reuseFailAlloc_3809_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3809_, 0, v_a_3803_);
v___x_3808_ = v_reuseFailAlloc_3809_;
goto v_reusejp_3807_;
}
v_reusejp_3807_:
{
return v___x_3808_;
}
}
}
}
}
v___jp_3750_:
{
lean_object* v___x_3753_; 
if (v_isShared_3748_ == 0)
{
lean_ctor_set(v___x_3747_, 1, v_a_3751_);
lean_ctor_set(v___x_3747_, 0, v___x_3749_);
v___x_3753_ = v___x_3747_;
goto v_reusejp_3752_;
}
else
{
lean_object* v_reuseFailAlloc_3757_; 
v_reuseFailAlloc_3757_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3757_, 0, v___x_3749_);
lean_ctor_set(v_reuseFailAlloc_3757_, 1, v_a_3751_);
v___x_3753_ = v_reuseFailAlloc_3757_;
goto v_reusejp_3752_;
}
v_reusejp_3752_:
{
size_t v___x_3754_; size_t v___x_3755_; 
v___x_3754_ = ((size_t)1ULL);
v___x_3755_ = lean_usize_add(v_i_3736_, v___x_3754_);
v_i_3736_ = v___x_3755_;
v_b_3737_ = v___x_3753_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___boxed(lean_object* v_p_3814_, lean_object* v_mvarId_3815_, lean_object* v_as_3816_, lean_object* v_sz_3817_, lean_object* v_i_3818_, lean_object* v_b_3819_, lean_object* v___y_3820_, lean_object* v___y_3821_, lean_object* v___y_3822_, lean_object* v___y_3823_, lean_object* v___y_3824_){
_start:
{
size_t v_sz_boxed_3825_; size_t v_i_boxed_3826_; lean_object* v_res_3827_; 
v_sz_boxed_3825_ = lean_unbox_usize(v_sz_3817_);
lean_dec(v_sz_3817_);
v_i_boxed_3826_ = lean_unbox_usize(v_i_3818_);
lean_dec(v_i_3818_);
v_res_3827_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(v_p_3814_, v_mvarId_3815_, v_as_3816_, v_sz_boxed_3825_, v_i_boxed_3826_, v_b_3819_, v___y_3820_, v___y_3821_, v___y_3822_, v___y_3823_);
lean_dec(v___y_3823_);
lean_dec_ref(v___y_3822_);
lean_dec(v___y_3821_);
lean_dec_ref(v___y_3820_);
lean_dec_ref(v_as_3816_);
return v_res_3827_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(lean_object* v_p_3828_, lean_object* v_mvarId_3829_, lean_object* v_as_3830_, size_t v_sz_3831_, size_t v_i_3832_, lean_object* v_b_3833_, lean_object* v___y_3834_, lean_object* v___y_3835_, lean_object* v___y_3836_, lean_object* v___y_3837_){
_start:
{
uint8_t v___x_3839_; 
v___x_3839_ = lean_usize_dec_lt(v_i_3832_, v_sz_3831_);
if (v___x_3839_ == 0)
{
lean_object* v___x_3840_; 
lean_dec(v_mvarId_3829_);
lean_dec_ref(v_p_3828_);
v___x_3840_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3840_, 0, v_b_3833_);
return v___x_3840_;
}
else
{
lean_object* v_snd_3841_; lean_object* v___x_3843_; uint8_t v_isShared_3844_; uint8_t v_isSharedCheck_3908_; 
v_snd_3841_ = lean_ctor_get(v_b_3833_, 1);
v_isSharedCheck_3908_ = !lean_is_exclusive(v_b_3833_);
if (v_isSharedCheck_3908_ == 0)
{
lean_object* v_unused_3909_; 
v_unused_3909_ = lean_ctor_get(v_b_3833_, 0);
lean_dec(v_unused_3909_);
v___x_3843_ = v_b_3833_;
v_isShared_3844_ = v_isSharedCheck_3908_;
goto v_resetjp_3842_;
}
else
{
lean_inc(v_snd_3841_);
lean_dec(v_b_3833_);
v___x_3843_ = lean_box(0);
v_isShared_3844_ = v_isSharedCheck_3908_;
goto v_resetjp_3842_;
}
v_resetjp_3842_:
{
lean_object* v___x_3845_; lean_object* v_a_3847_; lean_object* v_a_3854_; 
v___x_3845_ = lean_box(0);
v_a_3854_ = lean_array_uget(v_as_3830_, v_i_3832_);
if (lean_obj_tag(v_a_3854_) == 0)
{
v_a_3847_ = v_snd_3841_;
goto v___jp_3846_;
}
else
{
lean_object* v_val_3855_; lean_object* v___x_3857_; uint8_t v_isShared_3858_; uint8_t v_isSharedCheck_3907_; 
v_val_3855_ = lean_ctor_get(v_a_3854_, 0);
v_isSharedCheck_3907_ = !lean_is_exclusive(v_a_3854_);
if (v_isSharedCheck_3907_ == 0)
{
v___x_3857_ = v_a_3854_;
v_isShared_3858_ = v_isSharedCheck_3907_;
goto v_resetjp_3856_;
}
else
{
lean_inc(v_val_3855_);
lean_dec(v_a_3854_);
v___x_3857_ = lean_box(0);
v_isShared_3858_ = v_isSharedCheck_3907_;
goto v_resetjp_3856_;
}
v_resetjp_3856_:
{
lean_object* v___x_3859_; lean_object* v___x_3860_; lean_object* v___x_3861_; 
v___x_3859_ = lean_box(0);
v___x_3860_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6___closed__0));
lean_inc_ref(v_p_3828_);
lean_inc(v___y_3837_);
lean_inc_ref(v___y_3836_);
lean_inc(v___y_3835_);
lean_inc_ref(v___y_3834_);
lean_inc(v_val_3855_);
v___x_3861_ = lean_apply_6(v_p_3828_, v_val_3855_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_, lean_box(0));
if (lean_obj_tag(v___x_3861_) == 0)
{
lean_object* v_a_3862_; uint8_t v___x_3863_; 
v_a_3862_ = lean_ctor_get(v___x_3861_, 0);
lean_inc(v_a_3862_);
lean_dec_ref_known(v___x_3861_, 1);
v___x_3863_ = lean_unbox(v_a_3862_);
lean_dec(v_a_3862_);
if (v___x_3863_ == 0)
{
lean_del_object(v___x_3857_);
lean_dec(v_val_3855_);
lean_dec(v_snd_3841_);
v_a_3847_ = v___x_3860_;
goto v___jp_3846_;
}
else
{
lean_object* v___x_3864_; lean_object* v___x_3865_; uint8_t v___x_3866_; lean_object* v___x_3867_; lean_object* v___f_3868_; lean_object* v___x_3869_; 
v___x_3864_ = l_Lean_LocalDecl_fvarId(v_val_3855_);
lean_dec(v_val_3855_);
v___x_3865_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2_spec__4_spec__5___closed__1));
v___x_3866_ = 0;
v___x_3867_ = lean_box(v___x_3866_);
lean_inc(v_mvarId_3829_);
v___f_3868_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___lam__0___boxed), 10, 5);
lean_closure_set(v___f_3868_, 0, v_mvarId_3829_);
lean_closure_set(v___f_3868_, 1, v___x_3864_);
lean_closure_set(v___f_3868_, 2, v___x_3865_);
lean_closure_set(v___f_3868_, 3, v___x_3867_);
lean_closure_set(v___f_3868_, 4, v___x_3845_);
v___x_3869_ = l_Lean_observing_x3f___at___00Lean_MVarId_casesRec_spec__1___redArg(v___f_3868_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_);
if (lean_obj_tag(v___x_3869_) == 0)
{
lean_object* v_a_3870_; lean_object* v___x_3872_; uint8_t v_isShared_3873_; uint8_t v_isSharedCheck_3890_; 
v_a_3870_ = lean_ctor_get(v___x_3869_, 0);
v_isSharedCheck_3890_ = !lean_is_exclusive(v___x_3869_);
if (v_isSharedCheck_3890_ == 0)
{
v___x_3872_ = v___x_3869_;
v_isShared_3873_ = v_isSharedCheck_3890_;
goto v_resetjp_3871_;
}
else
{
lean_inc(v_a_3870_);
lean_dec(v___x_3869_);
v___x_3872_ = lean_box(0);
v_isShared_3873_ = v_isSharedCheck_3890_;
goto v_resetjp_3871_;
}
v_resetjp_3871_:
{
if (lean_obj_tag(v_a_3870_) == 0)
{
lean_del_object(v___x_3872_);
lean_del_object(v___x_3857_);
lean_dec(v_snd_3841_);
v_a_3847_ = v___x_3860_;
goto v___jp_3846_;
}
else
{
lean_object* v___x_3875_; 
lean_del_object(v___x_3843_);
lean_dec(v_mvarId_3829_);
lean_dec_ref(v_p_3828_);
lean_inc_ref(v_a_3870_);
if (v_isShared_3858_ == 0)
{
lean_ctor_set(v___x_3857_, 0, v_a_3870_);
v___x_3875_ = v___x_3857_;
goto v_reusejp_3874_;
}
else
{
lean_object* v_reuseFailAlloc_3889_; 
v_reuseFailAlloc_3889_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3889_, 0, v_a_3870_);
v___x_3875_ = v_reuseFailAlloc_3889_;
goto v_reusejp_3874_;
}
v_reusejp_3874_:
{
lean_object* v___x_3877_; uint8_t v_isShared_3878_; uint8_t v_isSharedCheck_3887_; 
v_isSharedCheck_3887_ = !lean_is_exclusive(v_a_3870_);
if (v_isSharedCheck_3887_ == 0)
{
lean_object* v_unused_3888_; 
v_unused_3888_ = lean_ctor_get(v_a_3870_, 0);
lean_dec(v_unused_3888_);
v___x_3877_ = v_a_3870_;
v_isShared_3878_ = v_isSharedCheck_3887_;
goto v_resetjp_3876_;
}
else
{
lean_dec(v_a_3870_);
v___x_3877_ = lean_box(0);
v_isShared_3878_ = v_isSharedCheck_3887_;
goto v_resetjp_3876_;
}
v_resetjp_3876_:
{
lean_object* v___x_3879_; lean_object* v___x_3881_; 
v___x_3879_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3879_, 0, v___x_3875_);
lean_ctor_set(v___x_3879_, 1, v___x_3859_);
if (v_isShared_3878_ == 0)
{
lean_ctor_set(v___x_3877_, 0, v___x_3879_);
v___x_3881_ = v___x_3877_;
goto v_reusejp_3880_;
}
else
{
lean_object* v_reuseFailAlloc_3886_; 
v_reuseFailAlloc_3886_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3886_, 0, v___x_3879_);
v___x_3881_ = v_reuseFailAlloc_3886_;
goto v_reusejp_3880_;
}
v_reusejp_3880_:
{
lean_object* v___x_3882_; lean_object* v___x_3884_; 
v___x_3882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3882_, 0, v___x_3881_);
lean_ctor_set(v___x_3882_, 1, v_snd_3841_);
if (v_isShared_3873_ == 0)
{
lean_ctor_set(v___x_3872_, 0, v___x_3882_);
v___x_3884_ = v___x_3872_;
goto v_reusejp_3883_;
}
else
{
lean_object* v_reuseFailAlloc_3885_; 
v_reuseFailAlloc_3885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3885_, 0, v___x_3882_);
v___x_3884_ = v_reuseFailAlloc_3885_;
goto v_reusejp_3883_;
}
v_reusejp_3883_:
{
return v___x_3884_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3891_; lean_object* v___x_3893_; uint8_t v_isShared_3894_; uint8_t v_isSharedCheck_3898_; 
lean_del_object(v___x_3857_);
lean_del_object(v___x_3843_);
lean_dec(v_snd_3841_);
lean_dec(v_mvarId_3829_);
lean_dec_ref(v_p_3828_);
v_a_3891_ = lean_ctor_get(v___x_3869_, 0);
v_isSharedCheck_3898_ = !lean_is_exclusive(v___x_3869_);
if (v_isSharedCheck_3898_ == 0)
{
v___x_3893_ = v___x_3869_;
v_isShared_3894_ = v_isSharedCheck_3898_;
goto v_resetjp_3892_;
}
else
{
lean_inc(v_a_3891_);
lean_dec(v___x_3869_);
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
else
{
lean_object* v_a_3899_; lean_object* v___x_3901_; uint8_t v_isShared_3902_; uint8_t v_isSharedCheck_3906_; 
lean_del_object(v___x_3857_);
lean_dec(v_val_3855_);
lean_del_object(v___x_3843_);
lean_dec(v_snd_3841_);
lean_dec(v_mvarId_3829_);
lean_dec_ref(v_p_3828_);
v_a_3899_ = lean_ctor_get(v___x_3861_, 0);
v_isSharedCheck_3906_ = !lean_is_exclusive(v___x_3861_);
if (v_isSharedCheck_3906_ == 0)
{
v___x_3901_ = v___x_3861_;
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
else
{
lean_inc(v_a_3899_);
lean_dec(v___x_3861_);
v___x_3901_ = lean_box(0);
v_isShared_3902_ = v_isSharedCheck_3906_;
goto v_resetjp_3900_;
}
v_resetjp_3900_:
{
lean_object* v___x_3904_; 
if (v_isShared_3902_ == 0)
{
v___x_3904_ = v___x_3901_;
goto v_reusejp_3903_;
}
else
{
lean_object* v_reuseFailAlloc_3905_; 
v_reuseFailAlloc_3905_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3905_, 0, v_a_3899_);
v___x_3904_ = v_reuseFailAlloc_3905_;
goto v_reusejp_3903_;
}
v_reusejp_3903_:
{
return v___x_3904_;
}
}
}
}
}
v___jp_3846_:
{
lean_object* v___x_3849_; 
if (v_isShared_3844_ == 0)
{
lean_ctor_set(v___x_3843_, 1, v_a_3847_);
lean_ctor_set(v___x_3843_, 0, v___x_3845_);
v___x_3849_ = v___x_3843_;
goto v_reusejp_3848_;
}
else
{
lean_object* v_reuseFailAlloc_3853_; 
v_reuseFailAlloc_3853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3853_, 0, v___x_3845_);
lean_ctor_set(v_reuseFailAlloc_3853_, 1, v_a_3847_);
v___x_3849_ = v_reuseFailAlloc_3853_;
goto v_reusejp_3848_;
}
v_reusejp_3848_:
{
size_t v___x_3850_; size_t v___x_3851_; lean_object* v___x_3852_; 
v___x_3850_ = ((size_t)1ULL);
v___x_3851_ = lean_usize_add(v_i_3832_, v___x_3850_);
v___x_3852_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3_spec__6(v_p_3828_, v_mvarId_3829_, v_as_3830_, v_sz_3831_, v___x_3851_, v___x_3849_, v___y_3834_, v___y_3835_, v___y_3836_, v___y_3837_);
return v___x_3852_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3___boxed(lean_object* v_p_3910_, lean_object* v_mvarId_3911_, lean_object* v_as_3912_, lean_object* v_sz_3913_, lean_object* v_i_3914_, lean_object* v_b_3915_, lean_object* v___y_3916_, lean_object* v___y_3917_, lean_object* v___y_3918_, lean_object* v___y_3919_, lean_object* v___y_3920_){
_start:
{
size_t v_sz_boxed_3921_; size_t v_i_boxed_3922_; lean_object* v_res_3923_; 
v_sz_boxed_3921_ = lean_unbox_usize(v_sz_3913_);
lean_dec(v_sz_3913_);
v_i_boxed_3922_ = lean_unbox_usize(v_i_3914_);
lean_dec(v_i_3914_);
v_res_3923_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(v_p_3910_, v_mvarId_3911_, v_as_3912_, v_sz_boxed_3921_, v_i_boxed_3922_, v_b_3915_, v___y_3916_, v___y_3917_, v___y_3918_, v___y_3919_);
lean_dec(v___y_3919_);
lean_dec_ref(v___y_3918_);
lean_dec(v___y_3917_);
lean_dec_ref(v___y_3916_);
lean_dec_ref(v_as_3912_);
return v_res_3923_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(lean_object* v_p_3924_, lean_object* v_mvarId_3925_, lean_object* v_t_3926_, lean_object* v_init_3927_, lean_object* v___y_3928_, lean_object* v___y_3929_, lean_object* v___y_3930_, lean_object* v___y_3931_){
_start:
{
lean_object* v_root_3933_; lean_object* v_tail_3934_; lean_object* v___x_3935_; 
v_root_3933_ = lean_ctor_get(v_t_3926_, 0);
v_tail_3934_ = lean_ctor_get(v_t_3926_, 1);
lean_inc(v_mvarId_3925_);
lean_inc_ref(v_p_3924_);
lean_inc_ref(v_init_3927_);
v___x_3935_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__2(v_init_3927_, v_p_3924_, v_mvarId_3925_, v_root_3933_, v_init_3927_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
lean_dec_ref(v_init_3927_);
if (lean_obj_tag(v___x_3935_) == 0)
{
lean_object* v_a_3936_; lean_object* v___x_3938_; uint8_t v_isShared_3939_; uint8_t v_isSharedCheck_3972_; 
v_a_3936_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_3972_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3972_ == 0)
{
v___x_3938_ = v___x_3935_;
v_isShared_3939_ = v_isSharedCheck_3972_;
goto v_resetjp_3937_;
}
else
{
lean_inc(v_a_3936_);
lean_dec(v___x_3935_);
v___x_3938_ = lean_box(0);
v_isShared_3939_ = v_isSharedCheck_3972_;
goto v_resetjp_3937_;
}
v_resetjp_3937_:
{
if (lean_obj_tag(v_a_3936_) == 0)
{
lean_object* v_a_3940_; lean_object* v___x_3942_; 
lean_dec(v_mvarId_3925_);
lean_dec_ref(v_p_3924_);
v_a_3940_ = lean_ctor_get(v_a_3936_, 0);
lean_inc(v_a_3940_);
lean_dec_ref_known(v_a_3936_, 1);
if (v_isShared_3939_ == 0)
{
lean_ctor_set(v___x_3938_, 0, v_a_3940_);
v___x_3942_ = v___x_3938_;
goto v_reusejp_3941_;
}
else
{
lean_object* v_reuseFailAlloc_3943_; 
v_reuseFailAlloc_3943_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3943_, 0, v_a_3940_);
v___x_3942_ = v_reuseFailAlloc_3943_;
goto v_reusejp_3941_;
}
v_reusejp_3941_:
{
return v___x_3942_;
}
}
else
{
lean_object* v_a_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; size_t v_sz_3947_; size_t v___x_3948_; lean_object* v___x_3949_; 
lean_del_object(v___x_3938_);
v_a_3944_ = lean_ctor_get(v_a_3936_, 0);
lean_inc(v_a_3944_);
lean_dec_ref_known(v_a_3936_, 1);
v___x_3945_ = lean_box(0);
v___x_3946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3946_, 0, v___x_3945_);
lean_ctor_set(v___x_3946_, 1, v_a_3944_);
v_sz_3947_ = lean_array_size(v_tail_3934_);
v___x_3948_ = ((size_t)0ULL);
v___x_3949_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2_spec__3(v_p_3924_, v_mvarId_3925_, v_tail_3934_, v_sz_3947_, v___x_3948_, v___x_3946_, v___y_3928_, v___y_3929_, v___y_3930_, v___y_3931_);
if (lean_obj_tag(v___x_3949_) == 0)
{
lean_object* v_a_3950_; lean_object* v___x_3952_; uint8_t v_isShared_3953_; uint8_t v_isSharedCheck_3963_; 
v_a_3950_ = lean_ctor_get(v___x_3949_, 0);
v_isSharedCheck_3963_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_3963_ == 0)
{
v___x_3952_ = v___x_3949_;
v_isShared_3953_ = v_isSharedCheck_3963_;
goto v_resetjp_3951_;
}
else
{
lean_inc(v_a_3950_);
lean_dec(v___x_3949_);
v___x_3952_ = lean_box(0);
v_isShared_3953_ = v_isSharedCheck_3963_;
goto v_resetjp_3951_;
}
v_resetjp_3951_:
{
lean_object* v_fst_3954_; 
v_fst_3954_ = lean_ctor_get(v_a_3950_, 0);
if (lean_obj_tag(v_fst_3954_) == 0)
{
lean_object* v_snd_3955_; lean_object* v___x_3957_; 
v_snd_3955_ = lean_ctor_get(v_a_3950_, 1);
lean_inc(v_snd_3955_);
lean_dec(v_a_3950_);
if (v_isShared_3953_ == 0)
{
lean_ctor_set(v___x_3952_, 0, v_snd_3955_);
v___x_3957_ = v___x_3952_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3958_; 
v_reuseFailAlloc_3958_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3958_, 0, v_snd_3955_);
v___x_3957_ = v_reuseFailAlloc_3958_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
return v___x_3957_;
}
}
else
{
lean_object* v_val_3959_; lean_object* v___x_3961_; 
lean_inc_ref(v_fst_3954_);
lean_dec(v_a_3950_);
v_val_3959_ = lean_ctor_get(v_fst_3954_, 0);
lean_inc(v_val_3959_);
lean_dec_ref_known(v_fst_3954_, 1);
if (v_isShared_3953_ == 0)
{
lean_ctor_set(v___x_3952_, 0, v_val_3959_);
v___x_3961_ = v___x_3952_;
goto v_reusejp_3960_;
}
else
{
lean_object* v_reuseFailAlloc_3962_; 
v_reuseFailAlloc_3962_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3962_, 0, v_val_3959_);
v___x_3961_ = v_reuseFailAlloc_3962_;
goto v_reusejp_3960_;
}
v_reusejp_3960_:
{
return v___x_3961_;
}
}
}
}
else
{
lean_object* v_a_3964_; lean_object* v___x_3966_; uint8_t v_isShared_3967_; uint8_t v_isSharedCheck_3971_; 
v_a_3964_ = lean_ctor_get(v___x_3949_, 0);
v_isSharedCheck_3971_ = !lean_is_exclusive(v___x_3949_);
if (v_isSharedCheck_3971_ == 0)
{
v___x_3966_ = v___x_3949_;
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
else
{
lean_inc(v_a_3964_);
lean_dec(v___x_3949_);
v___x_3966_ = lean_box(0);
v_isShared_3967_ = v_isSharedCheck_3971_;
goto v_resetjp_3965_;
}
v_resetjp_3965_:
{
lean_object* v___x_3969_; 
if (v_isShared_3967_ == 0)
{
v___x_3969_ = v___x_3966_;
goto v_reusejp_3968_;
}
else
{
lean_object* v_reuseFailAlloc_3970_; 
v_reuseFailAlloc_3970_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3970_, 0, v_a_3964_);
v___x_3969_ = v_reuseFailAlloc_3970_;
goto v_reusejp_3968_;
}
v_reusejp_3968_:
{
return v___x_3969_;
}
}
}
}
}
}
else
{
lean_object* v_a_3973_; lean_object* v___x_3975_; uint8_t v_isShared_3976_; uint8_t v_isSharedCheck_3980_; 
lean_dec(v_mvarId_3925_);
lean_dec_ref(v_p_3924_);
v_a_3973_ = lean_ctor_get(v___x_3935_, 0);
v_isSharedCheck_3980_ = !lean_is_exclusive(v___x_3935_);
if (v_isSharedCheck_3980_ == 0)
{
v___x_3975_ = v___x_3935_;
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
else
{
lean_inc(v_a_3973_);
lean_dec(v___x_3935_);
v___x_3975_ = lean_box(0);
v_isShared_3976_ = v_isSharedCheck_3980_;
goto v_resetjp_3974_;
}
v_resetjp_3974_:
{
lean_object* v___x_3978_; 
if (v_isShared_3976_ == 0)
{
v___x_3978_ = v___x_3975_;
goto v_reusejp_3977_;
}
else
{
lean_object* v_reuseFailAlloc_3979_; 
v_reuseFailAlloc_3979_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3979_, 0, v_a_3973_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2___boxed(lean_object* v_p_3981_, lean_object* v_mvarId_3982_, lean_object* v_t_3983_, lean_object* v_init_3984_, lean_object* v___y_3985_, lean_object* v___y_3986_, lean_object* v___y_3987_, lean_object* v___y_3988_, lean_object* v___y_3989_){
_start:
{
lean_object* v_res_3990_; 
v_res_3990_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(v_p_3981_, v_mvarId_3982_, v_t_3983_, v_init_3984_, v___y_3985_, v___y_3986_, v___y_3987_, v___y_3988_);
lean_dec(v___y_3988_);
lean_dec_ref(v___y_3987_);
lean_dec(v___y_3986_);
lean_dec_ref(v___y_3985_);
lean_dec_ref(v_t_3983_);
return v_res_3990_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0(lean_object* v_p_3994_, lean_object* v_mvarId_3995_, lean_object* v___y_3996_, lean_object* v___y_3997_, lean_object* v___y_3998_, lean_object* v___y_3999_){
_start:
{
lean_object* v_lctx_4001_; lean_object* v_decls_4002_; lean_object* v___x_4003_; lean_object* v___x_4004_; lean_object* v___x_4005_; 
v_lctx_4001_ = lean_ctor_get(v___y_3996_, 2);
v_decls_4002_ = lean_ctor_get(v_lctx_4001_, 1);
v___x_4003_ = lean_box(0);
v___x_4004_ = ((lean_object*)(l_Lean_MVarId_casesRec___lam__0___closed__0));
v___x_4005_ = l_Lean_PersistentArray_forIn___at___00Lean_MVarId_casesRec_spec__2(v_p_3994_, v_mvarId_3995_, v_decls_4002_, v___x_4004_, v___y_3996_, v___y_3997_, v___y_3998_, v___y_3999_);
if (lean_obj_tag(v___x_4005_) == 0)
{
lean_object* v_a_4006_; lean_object* v___x_4008_; uint8_t v_isShared_4009_; uint8_t v_isSharedCheck_4018_; 
v_a_4006_ = lean_ctor_get(v___x_4005_, 0);
v_isSharedCheck_4018_ = !lean_is_exclusive(v___x_4005_);
if (v_isSharedCheck_4018_ == 0)
{
v___x_4008_ = v___x_4005_;
v_isShared_4009_ = v_isSharedCheck_4018_;
goto v_resetjp_4007_;
}
else
{
lean_inc(v_a_4006_);
lean_dec(v___x_4005_);
v___x_4008_ = lean_box(0);
v_isShared_4009_ = v_isSharedCheck_4018_;
goto v_resetjp_4007_;
}
v_resetjp_4007_:
{
lean_object* v_fst_4010_; 
v_fst_4010_ = lean_ctor_get(v_a_4006_, 0);
lean_inc(v_fst_4010_);
lean_dec(v_a_4006_);
if (lean_obj_tag(v_fst_4010_) == 0)
{
lean_object* v___x_4012_; 
if (v_isShared_4009_ == 0)
{
lean_ctor_set(v___x_4008_, 0, v___x_4003_);
v___x_4012_ = v___x_4008_;
goto v_reusejp_4011_;
}
else
{
lean_object* v_reuseFailAlloc_4013_; 
v_reuseFailAlloc_4013_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4013_, 0, v___x_4003_);
v___x_4012_ = v_reuseFailAlloc_4013_;
goto v_reusejp_4011_;
}
v_reusejp_4011_:
{
return v___x_4012_;
}
}
else
{
lean_object* v_val_4014_; lean_object* v___x_4016_; 
v_val_4014_ = lean_ctor_get(v_fst_4010_, 0);
lean_inc(v_val_4014_);
lean_dec_ref_known(v_fst_4010_, 1);
if (v_isShared_4009_ == 0)
{
lean_ctor_set(v___x_4008_, 0, v_val_4014_);
v___x_4016_ = v___x_4008_;
goto v_reusejp_4015_;
}
else
{
lean_object* v_reuseFailAlloc_4017_; 
v_reuseFailAlloc_4017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4017_, 0, v_val_4014_);
v___x_4016_ = v_reuseFailAlloc_4017_;
goto v_reusejp_4015_;
}
v_reusejp_4015_:
{
return v___x_4016_;
}
}
}
}
else
{
lean_object* v_a_4019_; lean_object* v___x_4021_; uint8_t v_isShared_4022_; uint8_t v_isSharedCheck_4026_; 
v_a_4019_ = lean_ctor_get(v___x_4005_, 0);
v_isSharedCheck_4026_ = !lean_is_exclusive(v___x_4005_);
if (v_isSharedCheck_4026_ == 0)
{
v___x_4021_ = v___x_4005_;
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
else
{
lean_inc(v_a_4019_);
lean_dec(v___x_4005_);
v___x_4021_ = lean_box(0);
v_isShared_4022_ = v_isSharedCheck_4026_;
goto v_resetjp_4020_;
}
v_resetjp_4020_:
{
lean_object* v___x_4024_; 
if (v_isShared_4022_ == 0)
{
v___x_4024_ = v___x_4021_;
goto v_reusejp_4023_;
}
else
{
lean_object* v_reuseFailAlloc_4025_; 
v_reuseFailAlloc_4025_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4025_, 0, v_a_4019_);
v___x_4024_ = v_reuseFailAlloc_4025_;
goto v_reusejp_4023_;
}
v_reusejp_4023_:
{
return v___x_4024_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__0___boxed(lean_object* v_p_4027_, lean_object* v_mvarId_4028_, lean_object* v___y_4029_, lean_object* v___y_4030_, lean_object* v___y_4031_, lean_object* v___y_4032_, lean_object* v___y_4033_){
_start:
{
lean_object* v_res_4034_; 
v_res_4034_ = l_Lean_MVarId_casesRec___lam__0(v_p_4027_, v_mvarId_4028_, v___y_4029_, v___y_4030_, v___y_4031_, v___y_4032_);
lean_dec(v___y_4032_);
lean_dec_ref(v___y_4031_);
lean_dec(v___y_4030_);
lean_dec_ref(v___y_4029_);
return v_res_4034_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1(lean_object* v_p_4035_, lean_object* v_mvarId_4036_, lean_object* v___y_4037_, lean_object* v___y_4038_, lean_object* v___y_4039_, lean_object* v___y_4040_){
_start:
{
lean_object* v___f_4042_; lean_object* v___x_4043_; 
lean_inc(v_mvarId_4036_);
v___f_4042_ = lean_alloc_closure((void*)(l_Lean_MVarId_casesRec___lam__0___boxed), 7, 2);
lean_closure_set(v___f_4042_, 0, v_p_4035_);
lean_closure_set(v___f_4042_, 1, v_mvarId_4036_);
v___x_4043_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_4036_, v___f_4042_, v___y_4037_, v___y_4038_, v___y_4039_, v___y_4040_);
return v___x_4043_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___lam__1___boxed(lean_object* v_p_4044_, lean_object* v_mvarId_4045_, lean_object* v___y_4046_, lean_object* v___y_4047_, lean_object* v___y_4048_, lean_object* v___y_4049_, lean_object* v___y_4050_){
_start:
{
lean_object* v_res_4051_; 
v_res_4051_ = l_Lean_MVarId_casesRec___lam__1(v_p_4044_, v_mvarId_4045_, v___y_4046_, v___y_4047_, v___y_4048_, v___y_4049_);
lean_dec(v___y_4049_);
lean_dec_ref(v___y_4048_);
lean_dec(v___y_4047_);
lean_dec_ref(v___y_4046_);
return v_res_4051_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec(lean_object* v_mvarId_4052_, lean_object* v_p_4053_, lean_object* v_a_4054_, lean_object* v_a_4055_, lean_object* v_a_4056_, lean_object* v_a_4057_){
_start:
{
lean_object* v___f_4059_; lean_object* v___x_4060_; 
v___f_4059_ = lean_alloc_closure((void*)(l_Lean_MVarId_casesRec___lam__1___boxed), 7, 1);
lean_closure_set(v___f_4059_, 0, v_p_4053_);
v___x_4060_ = l_Lean_Meta_saturate(v_mvarId_4052_, v___f_4059_, v_a_4054_, v_a_4055_, v_a_4056_, v_a_4057_);
return v___x_4060_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesRec___boxed(lean_object* v_mvarId_4061_, lean_object* v_p_4062_, lean_object* v_a_4063_, lean_object* v_a_4064_, lean_object* v_a_4065_, lean_object* v_a_4066_, lean_object* v_a_4067_){
_start:
{
lean_object* v_res_4068_; 
v_res_4068_ = l_Lean_MVarId_casesRec(v_mvarId_4061_, v_p_4062_, v_a_4063_, v_a_4064_, v_a_4065_, v_a_4066_);
lean_dec(v_a_4066_);
lean_dec_ref(v_a_4065_);
lean_dec(v_a_4064_);
lean_dec_ref(v_a_4063_);
return v_res_4068_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(lean_object* v_e_4069_, lean_object* v___y_4070_){
_start:
{
uint8_t v___x_4072_; 
v___x_4072_ = l_Lean_Expr_hasMVar(v_e_4069_);
if (v___x_4072_ == 0)
{
lean_object* v___x_4073_; 
v___x_4073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4073_, 0, v_e_4069_);
return v___x_4073_;
}
else
{
lean_object* v___x_4074_; lean_object* v_mctx_4075_; lean_object* v___x_4076_; lean_object* v_fst_4077_; lean_object* v_snd_4078_; lean_object* v___x_4079_; lean_object* v_cache_4080_; lean_object* v_zetaDeltaFVarIds_4081_; lean_object* v_postponed_4082_; lean_object* v_diag_4083_; lean_object* v___x_4085_; uint8_t v_isShared_4086_; uint8_t v_isSharedCheck_4092_; 
v___x_4074_ = lean_st_ref_get(v___y_4070_);
v_mctx_4075_ = lean_ctor_get(v___x_4074_, 0);
lean_inc_ref(v_mctx_4075_);
lean_dec(v___x_4074_);
v___x_4076_ = l_Lean_instantiateMVarsCore(v_mctx_4075_, v_e_4069_);
v_fst_4077_ = lean_ctor_get(v___x_4076_, 0);
lean_inc(v_fst_4077_);
v_snd_4078_ = lean_ctor_get(v___x_4076_, 1);
lean_inc(v_snd_4078_);
lean_dec_ref(v___x_4076_);
v___x_4079_ = lean_st_ref_take(v___y_4070_);
v_cache_4080_ = lean_ctor_get(v___x_4079_, 1);
v_zetaDeltaFVarIds_4081_ = lean_ctor_get(v___x_4079_, 2);
v_postponed_4082_ = lean_ctor_get(v___x_4079_, 3);
v_diag_4083_ = lean_ctor_get(v___x_4079_, 4);
v_isSharedCheck_4092_ = !lean_is_exclusive(v___x_4079_);
if (v_isSharedCheck_4092_ == 0)
{
lean_object* v_unused_4093_; 
v_unused_4093_ = lean_ctor_get(v___x_4079_, 0);
lean_dec(v_unused_4093_);
v___x_4085_ = v___x_4079_;
v_isShared_4086_ = v_isSharedCheck_4092_;
goto v_resetjp_4084_;
}
else
{
lean_inc(v_diag_4083_);
lean_inc(v_postponed_4082_);
lean_inc(v_zetaDeltaFVarIds_4081_);
lean_inc(v_cache_4080_);
lean_dec(v___x_4079_);
v___x_4085_ = lean_box(0);
v_isShared_4086_ = v_isSharedCheck_4092_;
goto v_resetjp_4084_;
}
v_resetjp_4084_:
{
lean_object* v___x_4088_; 
if (v_isShared_4086_ == 0)
{
lean_ctor_set(v___x_4085_, 0, v_snd_4078_);
v___x_4088_ = v___x_4085_;
goto v_reusejp_4087_;
}
else
{
lean_object* v_reuseFailAlloc_4091_; 
v_reuseFailAlloc_4091_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_4091_, 0, v_snd_4078_);
lean_ctor_set(v_reuseFailAlloc_4091_, 1, v_cache_4080_);
lean_ctor_set(v_reuseFailAlloc_4091_, 2, v_zetaDeltaFVarIds_4081_);
lean_ctor_set(v_reuseFailAlloc_4091_, 3, v_postponed_4082_);
lean_ctor_set(v_reuseFailAlloc_4091_, 4, v_diag_4083_);
v___x_4088_ = v_reuseFailAlloc_4091_;
goto v_reusejp_4087_;
}
v_reusejp_4087_:
{
lean_object* v___x_4089_; lean_object* v___x_4090_; 
v___x_4089_ = lean_st_ref_put(v___y_4070_, v___x_4088_);
v___x_4090_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_4090_, 0, v_fst_4077_);
return v___x_4090_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg___boxed(lean_object* v_e_4094_, lean_object* v___y_4095_, lean_object* v___y_4096_){
_start:
{
lean_object* v_res_4097_; 
v_res_4097_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v_e_4094_, v___y_4095_);
lean_dec(v___y_4095_);
return v_res_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(lean_object* v_e_4098_, lean_object* v___y_4099_, lean_object* v___y_4100_, lean_object* v___y_4101_, lean_object* v___y_4102_){
_start:
{
lean_object* v___x_4104_; 
v___x_4104_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v_e_4098_, v___y_4100_);
return v___x_4104_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___boxed(lean_object* v_e_4105_, lean_object* v___y_4106_, lean_object* v___y_4107_, lean_object* v___y_4108_, lean_object* v___y_4109_, lean_object* v___y_4110_){
_start:
{
lean_object* v_res_4111_; 
v_res_4111_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0(v_e_4105_, v___y_4106_, v___y_4107_, v___y_4108_, v___y_4109_);
lean_dec(v___y_4109_);
lean_dec_ref(v___y_4108_);
lean_dec(v___y_4107_);
lean_dec_ref(v___y_4106_);
return v_res_4111_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0(lean_object* v_localDecl_4115_, lean_object* v___y_4116_, lean_object* v___y_4117_, lean_object* v___y_4118_, lean_object* v___y_4119_){
_start:
{
lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v_a_4123_; lean_object* v___x_4125_; uint8_t v_isShared_4126_; uint8_t v_isSharedCheck_4134_; 
v___x_4121_ = l_Lean_LocalDecl_type(v_localDecl_4115_);
v___x_4122_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v___x_4121_, v___y_4117_);
v_a_4123_ = lean_ctor_get(v___x_4122_, 0);
v_isSharedCheck_4134_ = !lean_is_exclusive(v___x_4122_);
if (v_isSharedCheck_4134_ == 0)
{
v___x_4125_ = v___x_4122_;
v_isShared_4126_ = v_isSharedCheck_4134_;
goto v_resetjp_4124_;
}
else
{
lean_inc(v_a_4123_);
lean_dec(v___x_4122_);
v___x_4125_ = lean_box(0);
v_isShared_4126_ = v_isSharedCheck_4134_;
goto v_resetjp_4124_;
}
v_resetjp_4124_:
{
lean_object* v___x_4127_; lean_object* v___x_4128_; uint8_t v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4132_; 
v___x_4127_ = ((lean_object*)(l_Lean_MVarId_casesAnd___lam__0___closed__1));
v___x_4128_ = lean_unsigned_to_nat(2u);
v___x_4129_ = l_Lean_Expr_isAppOfArity(v_a_4123_, v___x_4127_, v___x_4128_);
lean_dec(v_a_4123_);
v___x_4130_ = lean_box(v___x_4129_);
if (v_isShared_4126_ == 0)
{
lean_ctor_set(v___x_4125_, 0, v___x_4130_);
v___x_4132_ = v___x_4125_;
goto v_reusejp_4131_;
}
else
{
lean_object* v_reuseFailAlloc_4133_; 
v_reuseFailAlloc_4133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4133_, 0, v___x_4130_);
v___x_4132_ = v_reuseFailAlloc_4133_;
goto v_reusejp_4131_;
}
v_reusejp_4131_:
{
return v___x_4132_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___lam__0___boxed(lean_object* v_localDecl_4135_, lean_object* v___y_4136_, lean_object* v___y_4137_, lean_object* v___y_4138_, lean_object* v___y_4139_, lean_object* v___y_4140_){
_start:
{
lean_object* v_res_4141_; 
v_res_4141_ = l_Lean_MVarId_casesAnd___lam__0(v_localDecl_4135_, v___y_4136_, v___y_4137_, v___y_4138_, v___y_4139_);
lean_dec(v___y_4139_);
lean_dec_ref(v___y_4138_);
lean_dec(v___y_4137_);
lean_dec_ref(v___y_4136_);
lean_dec_ref(v_localDecl_4135_);
return v_res_4141_;
}
}
static lean_object* _init_l_Lean_MVarId_casesAnd___closed__3(void){
_start:
{
lean_object* v___x_4146_; lean_object* v___x_4147_; 
v___x_4146_ = ((lean_object*)(l_Lean_MVarId_casesAnd___closed__2));
v___x_4147_ = l_Lean_MessageData_ofFormat(v___x_4146_);
return v___x_4147_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd(lean_object* v_mvarId_4148_, lean_object* v_a_4149_, lean_object* v_a_4150_, lean_object* v_a_4151_, lean_object* v_a_4152_){
_start:
{
lean_object* v___f_4154_; lean_object* v___x_4155_; 
v___f_4154_ = ((lean_object*)(l_Lean_MVarId_casesAnd___closed__0));
v___x_4155_ = l_Lean_MVarId_casesRec(v_mvarId_4148_, v___f_4154_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_);
if (lean_obj_tag(v___x_4155_) == 0)
{
lean_object* v_a_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; 
v_a_4156_ = lean_ctor_get(v___x_4155_, 0);
lean_inc(v_a_4156_);
lean_dec_ref_known(v___x_4155_, 1);
v___x_4157_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__3, &l_Lean_MVarId_casesAnd___closed__3_once, _init_l_Lean_MVarId_casesAnd___closed__3);
v___x_4158_ = l_Lean_Meta_exactlyOne(v_a_4156_, v___x_4157_, v_a_4149_, v_a_4150_, v_a_4151_, v_a_4152_);
lean_dec(v_a_4156_);
return v___x_4158_;
}
else
{
lean_object* v_a_4159_; lean_object* v___x_4161_; uint8_t v_isShared_4162_; uint8_t v_isSharedCheck_4166_; 
v_a_4159_ = lean_ctor_get(v___x_4155_, 0);
v_isSharedCheck_4166_ = !lean_is_exclusive(v___x_4155_);
if (v_isSharedCheck_4166_ == 0)
{
v___x_4161_ = v___x_4155_;
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
else
{
lean_inc(v_a_4159_);
lean_dec(v___x_4155_);
v___x_4161_ = lean_box(0);
v_isShared_4162_ = v_isSharedCheck_4166_;
goto v_resetjp_4160_;
}
v_resetjp_4160_:
{
lean_object* v___x_4164_; 
if (v_isShared_4162_ == 0)
{
v___x_4164_ = v___x_4161_;
goto v_reusejp_4163_;
}
else
{
lean_object* v_reuseFailAlloc_4165_; 
v_reuseFailAlloc_4165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4165_, 0, v_a_4159_);
v___x_4164_ = v_reuseFailAlloc_4165_;
goto v_reusejp_4163_;
}
v_reusejp_4163_:
{
return v___x_4164_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_casesAnd___boxed(lean_object* v_mvarId_4167_, lean_object* v_a_4168_, lean_object* v_a_4169_, lean_object* v_a_4170_, lean_object* v_a_4171_, lean_object* v_a_4172_){
_start:
{
lean_object* v_res_4173_; 
v_res_4173_ = l_Lean_MVarId_casesAnd(v_mvarId_4167_, v_a_4168_, v_a_4169_, v_a_4170_, v_a_4171_);
lean_dec(v_a_4171_);
lean_dec_ref(v_a_4170_);
lean_dec(v_a_4169_);
lean_dec_ref(v_a_4168_);
return v_res_4173_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0(lean_object* v_localDecl_4174_, lean_object* v___y_4175_, lean_object* v___y_4176_, lean_object* v___y_4177_, lean_object* v___y_4178_){
_start:
{
lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v_a_4182_; lean_object* v___x_4184_; uint8_t v_isShared_4185_; uint8_t v_isSharedCheck_4196_; 
v___x_4180_ = l_Lean_LocalDecl_type(v_localDecl_4174_);
v___x_4181_ = l_Lean_instantiateMVars___at___00Lean_MVarId_casesAnd_spec__0___redArg(v___x_4180_, v___y_4176_);
v_a_4182_ = lean_ctor_get(v___x_4181_, 0);
v_isSharedCheck_4196_ = !lean_is_exclusive(v___x_4181_);
if (v_isSharedCheck_4196_ == 0)
{
v___x_4184_ = v___x_4181_;
v_isShared_4185_ = v_isSharedCheck_4196_;
goto v_resetjp_4183_;
}
else
{
lean_inc(v_a_4182_);
lean_dec(v___x_4181_);
v___x_4184_ = lean_box(0);
v_isShared_4185_ = v_isSharedCheck_4196_;
goto v_resetjp_4183_;
}
v_resetjp_4183_:
{
uint8_t v___x_4186_; 
v___x_4186_ = l_Lean_Expr_isEq(v_a_4182_);
if (v___x_4186_ == 0)
{
uint8_t v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4190_; 
v___x_4187_ = l_Lean_Expr_isHEq(v_a_4182_);
lean_dec(v_a_4182_);
v___x_4188_ = lean_box(v___x_4187_);
if (v_isShared_4185_ == 0)
{
lean_ctor_set(v___x_4184_, 0, v___x_4188_);
v___x_4190_ = v___x_4184_;
goto v_reusejp_4189_;
}
else
{
lean_object* v_reuseFailAlloc_4191_; 
v_reuseFailAlloc_4191_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4191_, 0, v___x_4188_);
v___x_4190_ = v_reuseFailAlloc_4191_;
goto v_reusejp_4189_;
}
v_reusejp_4189_:
{
return v___x_4190_;
}
}
else
{
lean_object* v___x_4192_; lean_object* v___x_4194_; 
lean_dec(v_a_4182_);
v___x_4192_ = lean_box(v___x_4186_);
if (v_isShared_4185_ == 0)
{
lean_ctor_set(v___x_4184_, 0, v___x_4192_);
v___x_4194_ = v___x_4184_;
goto v_reusejp_4193_;
}
else
{
lean_object* v_reuseFailAlloc_4195_; 
v_reuseFailAlloc_4195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4195_, 0, v___x_4192_);
v___x_4194_ = v_reuseFailAlloc_4195_;
goto v_reusejp_4193_;
}
v_reusejp_4193_:
{
return v___x_4194_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___lam__0___boxed(lean_object* v_localDecl_4197_, lean_object* v___y_4198_, lean_object* v___y_4199_, lean_object* v___y_4200_, lean_object* v___y_4201_, lean_object* v___y_4202_){
_start:
{
lean_object* v_res_4203_; 
v_res_4203_ = l_Lean_MVarId_substEqs___lam__0(v_localDecl_4197_, v___y_4198_, v___y_4199_, v___y_4200_, v___y_4201_);
lean_dec(v___y_4201_);
lean_dec_ref(v___y_4200_);
lean_dec(v___y_4199_);
lean_dec_ref(v___y_4198_);
lean_dec_ref(v_localDecl_4197_);
return v_res_4203_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs(lean_object* v_mvarId_4205_, lean_object* v_a_4206_, lean_object* v_a_4207_, lean_object* v_a_4208_, lean_object* v_a_4209_){
_start:
{
lean_object* v___f_4211_; lean_object* v___x_4212_; 
v___f_4211_ = ((lean_object*)(l_Lean_MVarId_substEqs___closed__0));
v___x_4212_ = l_Lean_MVarId_casesRec(v_mvarId_4205_, v___f_4211_, v_a_4206_, v_a_4207_, v_a_4208_, v_a_4209_);
if (lean_obj_tag(v___x_4212_) == 0)
{
lean_object* v_a_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; 
v_a_4213_ = lean_ctor_get(v___x_4212_, 0);
lean_inc(v_a_4213_);
lean_dec_ref_known(v___x_4212_, 1);
v___x_4214_ = lean_obj_once(&l_Lean_MVarId_casesAnd___closed__3, &l_Lean_MVarId_casesAnd___closed__3_once, _init_l_Lean_MVarId_casesAnd___closed__3);
v___x_4215_ = l_Lean_Meta_ensureAtMostOne(v_a_4213_, v___x_4214_, v_a_4206_, v_a_4207_, v_a_4208_, v_a_4209_);
lean_dec(v_a_4213_);
return v___x_4215_;
}
else
{
lean_object* v_a_4216_; lean_object* v___x_4218_; uint8_t v_isShared_4219_; uint8_t v_isSharedCheck_4223_; 
v_a_4216_ = lean_ctor_get(v___x_4212_, 0);
v_isSharedCheck_4223_ = !lean_is_exclusive(v___x_4212_);
if (v_isSharedCheck_4223_ == 0)
{
v___x_4218_ = v___x_4212_;
v_isShared_4219_ = v_isSharedCheck_4223_;
goto v_resetjp_4217_;
}
else
{
lean_inc(v_a_4216_);
lean_dec(v___x_4212_);
v___x_4218_ = lean_box(0);
v_isShared_4219_ = v_isSharedCheck_4223_;
goto v_resetjp_4217_;
}
v_resetjp_4217_:
{
lean_object* v___x_4221_; 
if (v_isShared_4219_ == 0)
{
v___x_4221_ = v___x_4218_;
goto v_reusejp_4220_;
}
else
{
lean_object* v_reuseFailAlloc_4222_; 
v_reuseFailAlloc_4222_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4222_, 0, v_a_4216_);
v___x_4221_ = v_reuseFailAlloc_4222_;
goto v_reusejp_4220_;
}
v_reusejp_4220_:
{
return v___x_4221_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_substEqs___boxed(lean_object* v_mvarId_4224_, lean_object* v_a_4225_, lean_object* v_a_4226_, lean_object* v_a_4227_, lean_object* v_a_4228_, lean_object* v_a_4229_){
_start:
{
lean_object* v_res_4230_; 
v_res_4230_ = l_Lean_MVarId_substEqs(v_mvarId_4224_, v_a_4225_, v_a_4226_, v_a_4227_, v_a_4228_);
lean_dec(v_a_4228_);
lean_dec_ref(v_a_4227_);
lean_dec(v_a_4226_);
lean_dec_ref(v_a_4225_);
return v_res_4230_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0(lean_object* v_goalType_4231_, lean_object* v_tag_4232_, lean_object* v_hyp_4233_, lean_object* v___y_4234_, lean_object* v___y_4235_, lean_object* v___y_4236_, lean_object* v___y_4237_){
_start:
{
lean_object* v___x_4239_; 
v___x_4239_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_goalType_4231_, v_tag_4232_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_);
if (lean_obj_tag(v___x_4239_) == 0)
{
lean_object* v_a_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; lean_object* v___x_4243_; uint8_t v___x_4244_; uint8_t v___x_4245_; uint8_t v___x_4246_; lean_object* v___x_4247_; 
v_a_4240_ = lean_ctor_get(v___x_4239_, 0);
lean_inc_n(v_a_4240_, 2);
lean_dec_ref_known(v___x_4239_, 1);
v___x_4241_ = lean_unsigned_to_nat(1u);
v___x_4242_ = lean_mk_empty_array_with_capacity(v___x_4241_);
lean_inc_ref(v_hyp_4233_);
v___x_4243_ = lean_array_push(v___x_4242_, v_hyp_4233_);
v___x_4244_ = 0;
v___x_4245_ = 1;
v___x_4246_ = 1;
v___x_4247_ = l_Lean_Meta_mkLambdaFVars(v___x_4243_, v_a_4240_, v___x_4244_, v___x_4245_, v___x_4244_, v___x_4245_, v___x_4246_, v___y_4234_, v___y_4235_, v___y_4236_, v___y_4237_);
lean_dec_ref(v___x_4243_);
if (lean_obj_tag(v___x_4247_) == 0)
{
lean_object* v_a_4248_; lean_object* v___x_4250_; uint8_t v_isShared_4251_; uint8_t v_isSharedCheck_4259_; 
v_a_4248_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4259_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4259_ == 0)
{
v___x_4250_ = v___x_4247_;
v_isShared_4251_ = v_isSharedCheck_4259_;
goto v_resetjp_4249_;
}
else
{
lean_inc(v_a_4248_);
lean_dec(v___x_4247_);
v___x_4250_ = lean_box(0);
v_isShared_4251_ = v_isSharedCheck_4259_;
goto v_resetjp_4249_;
}
v_resetjp_4249_:
{
lean_object* v___x_4252_; lean_object* v___x_4253_; lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4257_; 
v___x_4252_ = l_Lean_Expr_mvarId_x21(v_a_4240_);
lean_dec(v_a_4240_);
v___x_4253_ = l_Lean_Expr_fvarId_x21(v_hyp_4233_);
lean_dec_ref(v_hyp_4233_);
v___x_4254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4254_, 0, v___x_4252_);
lean_ctor_set(v___x_4254_, 1, v___x_4253_);
v___x_4255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4255_, 0, v_a_4248_);
lean_ctor_set(v___x_4255_, 1, v___x_4254_);
if (v_isShared_4251_ == 0)
{
lean_ctor_set(v___x_4250_, 0, v___x_4255_);
v___x_4257_ = v___x_4250_;
goto v_reusejp_4256_;
}
else
{
lean_object* v_reuseFailAlloc_4258_; 
v_reuseFailAlloc_4258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4258_, 0, v___x_4255_);
v___x_4257_ = v_reuseFailAlloc_4258_;
goto v_reusejp_4256_;
}
v_reusejp_4256_:
{
return v___x_4257_;
}
}
}
else
{
lean_object* v_a_4260_; lean_object* v___x_4262_; uint8_t v_isShared_4263_; uint8_t v_isSharedCheck_4267_; 
lean_dec(v_a_4240_);
lean_dec_ref(v_hyp_4233_);
v_a_4260_ = lean_ctor_get(v___x_4247_, 0);
v_isSharedCheck_4267_ = !lean_is_exclusive(v___x_4247_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4262_ = v___x_4247_;
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
else
{
lean_inc(v_a_4260_);
lean_dec(v___x_4247_);
v___x_4262_ = lean_box(0);
v_isShared_4263_ = v_isSharedCheck_4267_;
goto v_resetjp_4261_;
}
v_resetjp_4261_:
{
lean_object* v___x_4265_; 
if (v_isShared_4263_ == 0)
{
v___x_4265_ = v___x_4262_;
goto v_reusejp_4264_;
}
else
{
lean_object* v_reuseFailAlloc_4266_; 
v_reuseFailAlloc_4266_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4266_, 0, v_a_4260_);
v___x_4265_ = v_reuseFailAlloc_4266_;
goto v_reusejp_4264_;
}
v_reusejp_4264_:
{
return v___x_4265_;
}
}
}
}
else
{
lean_object* v_a_4268_; lean_object* v___x_4270_; uint8_t v_isShared_4271_; uint8_t v_isSharedCheck_4275_; 
lean_dec_ref(v_hyp_4233_);
v_a_4268_ = lean_ctor_get(v___x_4239_, 0);
v_isSharedCheck_4275_ = !lean_is_exclusive(v___x_4239_);
if (v_isSharedCheck_4275_ == 0)
{
v___x_4270_ = v___x_4239_;
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
else
{
lean_inc(v_a_4268_);
lean_dec(v___x_4239_);
v___x_4270_ = lean_box(0);
v_isShared_4271_ = v_isSharedCheck_4275_;
goto v_resetjp_4269_;
}
v_resetjp_4269_:
{
lean_object* v___x_4273_; 
if (v_isShared_4271_ == 0)
{
v___x_4273_ = v___x_4270_;
goto v_reusejp_4272_;
}
else
{
lean_object* v_reuseFailAlloc_4274_; 
v_reuseFailAlloc_4274_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4274_, 0, v_a_4268_);
v___x_4273_ = v_reuseFailAlloc_4274_;
goto v_reusejp_4272_;
}
v_reusejp_4272_:
{
return v___x_4273_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0___boxed(lean_object* v_goalType_4276_, lean_object* v_tag_4277_, lean_object* v_hyp_4278_, lean_object* v___y_4279_, lean_object* v___y_4280_, lean_object* v___y_4281_, lean_object* v___y_4282_, lean_object* v___y_4283_){
_start:
{
lean_object* v_res_4284_; 
v_res_4284_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0(v_goalType_4276_, v_tag_4277_, v_hyp_4278_, v___y_4279_, v___y_4280_, v___y_4281_, v___y_4282_);
lean_dec(v___y_4282_);
lean_dec_ref(v___y_4281_);
lean_dec(v___y_4280_);
lean_dec_ref(v___y_4279_);
return v_res_4284_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(lean_object* v_p_4285_, lean_object* v_hName_4286_, lean_object* v_goalType_4287_, lean_object* v_tag_4288_, lean_object* v_a_4289_, lean_object* v_a_4290_, lean_object* v_a_4291_, lean_object* v_a_4292_){
_start:
{
lean_object* v___f_4294_; lean_object* v___x_4295_; 
v___f_4294_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___lam__0___boxed), 8, 2);
lean_closure_set(v___f_4294_, 0, v_goalType_4287_);
lean_closure_set(v___f_4294_, 1, v_tag_4288_);
v___x_4295_ = l_Lean_Meta_withLocalDeclD___at___00__private_Lean_Meta_Tactic_Cases_0__Lean_Meta_withNewEqs_loop_spec__0___redArg(v_hName_4286_, v_p_4285_, v___f_4294_, v_a_4289_, v_a_4290_, v_a_4291_, v_a_4292_);
return v___x_4295_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal___boxed(lean_object* v_p_4296_, lean_object* v_hName_4297_, lean_object* v_goalType_4298_, lean_object* v_tag_4299_, lean_object* v_a_4300_, lean_object* v_a_4301_, lean_object* v_a_4302_, lean_object* v_a_4303_, lean_object* v_a_4304_){
_start:
{
lean_object* v_res_4305_; 
v_res_4305_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v_p_4296_, v_hName_4297_, v_goalType_4298_, v_tag_4299_, v_a_4300_, v_a_4301_, v_a_4302_, v_a_4303_);
lean_dec(v_a_4303_);
lean_dec_ref(v_a_4302_);
lean_dec(v_a_4301_);
lean_dec_ref(v_a_4300_);
return v_res_4305_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___lam__0___closed__7(void){
_start:
{
lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4319_; 
v___x_4317_ = lean_box(0);
v___x_4318_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__6));
v___x_4319_ = l_Lean_Expr_const___override(v___x_4318_, v___x_4317_);
return v___x_4319_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___lam__0___closed__10(void){
_start:
{
lean_object* v___x_4323_; lean_object* v___x_4324_; 
v___x_4323_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__9));
v___x_4324_ = l_Lean_stringToMessageData(v___x_4323_);
return v___x_4324_;
}
}
static lean_object* _init_l_Lean_MVarId_byCases___lam__0___closed__11(void){
_start:
{
lean_object* v___x_4325_; lean_object* v___x_4326_; 
v___x_4325_ = lean_obj_once(&l_Lean_MVarId_byCases___lam__0___closed__10, &l_Lean_MVarId_byCases___lam__0___closed__10_once, _init_l_Lean_MVarId_byCases___lam__0___closed__10);
v___x_4326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_4326_, 0, v___x_4325_);
return v___x_4326_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0(lean_object* v_mvarId_4327_, lean_object* v_p_4328_, lean_object* v_hName_4329_, lean_object* v___y_4330_, lean_object* v___y_4331_, lean_object* v___y_4332_, lean_object* v___y_4333_){
_start:
{
lean_object* v___x_4335_; 
lean_inc(v_mvarId_4327_);
v___x_4335_ = l_Lean_MVarId_getType(v_mvarId_4327_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
if (lean_obj_tag(v___x_4335_) == 0)
{
lean_object* v_a_4336_; lean_object* v___x_4337_; 
v_a_4336_ = lean_ctor_get(v___x_4335_, 0);
lean_inc(v_a_4336_);
lean_dec_ref_known(v___x_4335_, 1);
lean_inc(v_mvarId_4327_);
v___x_4337_ = l_Lean_MVarId_getTag(v_mvarId_4327_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
if (lean_obj_tag(v___x_4337_) == 0)
{
lean_object* v_a_4338_; lean_object* v___y_4340_; lean_object* v___y_4341_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___x_4391_; 
v_a_4338_ = lean_ctor_get(v___x_4337_, 0);
lean_inc(v_a_4338_);
lean_dec_ref_known(v___x_4337_, 1);
lean_inc(v_a_4336_);
v___x_4391_ = l_Lean_Meta_isProp(v_a_4336_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
if (lean_obj_tag(v___x_4391_) == 0)
{
lean_object* v_a_4392_; uint8_t v___x_4393_; 
v_a_4392_ = lean_ctor_get(v___x_4391_, 0);
lean_inc(v_a_4392_);
lean_dec_ref_known(v___x_4391_, 1);
v___x_4393_ = lean_unbox(v_a_4392_);
lean_dec(v_a_4392_);
if (v___x_4393_ == 0)
{
lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; 
v___x_4394_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__8));
v___x_4395_ = lean_obj_once(&l_Lean_MVarId_byCases___lam__0___closed__11, &l_Lean_MVarId_byCases___lam__0___closed__11_once, _init_l_Lean_MVarId_byCases___lam__0___closed__11);
lean_inc(v_mvarId_4327_);
v___x_4396_ = l_Lean_Meta_throwTacticEx___redArg(v___x_4394_, v_mvarId_4327_, v___x_4395_, v___y_4330_, v___y_4331_, v___y_4332_, v___y_4333_);
if (lean_obj_tag(v___x_4396_) == 0)
{
lean_dec_ref_known(v___x_4396_, 1);
v___y_4340_ = v___y_4330_;
v___y_4341_ = v___y_4331_;
v___y_4342_ = v___y_4332_;
v___y_4343_ = v___y_4333_;
goto v___jp_4339_;
}
else
{
lean_object* v_a_4397_; lean_object* v___x_4399_; uint8_t v_isShared_4400_; uint8_t v_isSharedCheck_4404_; 
lean_dec(v_a_4338_);
lean_dec(v_a_4336_);
lean_dec(v_hName_4329_);
lean_dec_ref(v_p_4328_);
lean_dec(v_mvarId_4327_);
v_a_4397_ = lean_ctor_get(v___x_4396_, 0);
v_isSharedCheck_4404_ = !lean_is_exclusive(v___x_4396_);
if (v_isSharedCheck_4404_ == 0)
{
v___x_4399_ = v___x_4396_;
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
else
{
lean_inc(v_a_4397_);
lean_dec(v___x_4396_);
v___x_4399_ = lean_box(0);
v_isShared_4400_ = v_isSharedCheck_4404_;
goto v_resetjp_4398_;
}
v_resetjp_4398_:
{
lean_object* v___x_4402_; 
if (v_isShared_4400_ == 0)
{
v___x_4402_ = v___x_4399_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4403_; 
v_reuseFailAlloc_4403_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4403_, 0, v_a_4397_);
v___x_4402_ = v_reuseFailAlloc_4403_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
return v___x_4402_;
}
}
}
}
else
{
v___y_4340_ = v___y_4330_;
v___y_4341_ = v___y_4331_;
v___y_4342_ = v___y_4332_;
v___y_4343_ = v___y_4333_;
goto v___jp_4339_;
}
}
else
{
lean_object* v_a_4405_; lean_object* v___x_4407_; uint8_t v_isShared_4408_; uint8_t v_isSharedCheck_4412_; 
lean_dec(v_a_4338_);
lean_dec(v_a_4336_);
lean_dec(v_hName_4329_);
lean_dec_ref(v_p_4328_);
lean_dec(v_mvarId_4327_);
v_a_4405_ = lean_ctor_get(v___x_4391_, 0);
v_isSharedCheck_4412_ = !lean_is_exclusive(v___x_4391_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4407_ = v___x_4391_;
v_isShared_4408_ = v_isSharedCheck_4412_;
goto v_resetjp_4406_;
}
else
{
lean_inc(v_a_4405_);
lean_dec(v___x_4391_);
v___x_4407_ = lean_box(0);
v_isShared_4408_ = v_isSharedCheck_4412_;
goto v_resetjp_4406_;
}
v_resetjp_4406_:
{
lean_object* v___x_4410_; 
if (v_isShared_4408_ == 0)
{
v___x_4410_ = v___x_4407_;
goto v_reusejp_4409_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v_a_4405_);
v___x_4410_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4409_;
}
v_reusejp_4409_:
{
return v___x_4410_;
}
}
}
v___jp_4339_:
{
lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; 
v___x_4344_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__1));
lean_inc(v_a_4338_);
v___x_4345_ = l_Lean_Name_append(v_a_4338_, v___x_4344_);
lean_inc(v_a_4336_);
lean_inc(v_hName_4329_);
lean_inc_ref(v_p_4328_);
v___x_4346_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v_p_4328_, v_hName_4329_, v_a_4336_, v___x_4345_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_);
if (lean_obj_tag(v___x_4346_) == 0)
{
lean_object* v_a_4347_; lean_object* v_fst_4348_; lean_object* v_snd_4349_; lean_object* v___x_4350_; lean_object* v___x_4351_; lean_object* v___x_4352_; lean_object* v___x_4353_; 
v_a_4347_ = lean_ctor_get(v___x_4346_, 0);
lean_inc(v_a_4347_);
lean_dec_ref_known(v___x_4346_, 1);
v_fst_4348_ = lean_ctor_get(v_a_4347_, 0);
lean_inc(v_fst_4348_);
v_snd_4349_ = lean_ctor_get(v_a_4347_, 1);
lean_inc(v_snd_4349_);
lean_dec(v_a_4347_);
lean_inc_ref(v_p_4328_);
v___x_4350_ = l_Lean_mkNot(v_p_4328_);
v___x_4351_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__3));
v___x_4352_ = l_Lean_Name_append(v_a_4338_, v___x_4351_);
lean_inc(v_a_4336_);
v___x_4353_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v___x_4350_, v_hName_4329_, v_a_4336_, v___x_4352_, v___y_4340_, v___y_4341_, v___y_4342_, v___y_4343_);
if (lean_obj_tag(v___x_4353_) == 0)
{
lean_object* v_a_4354_; lean_object* v_fst_4355_; lean_object* v_snd_4356_; lean_object* v___x_4358_; uint8_t v_isShared_4359_; uint8_t v_isSharedCheck_4374_; 
v_a_4354_ = lean_ctor_get(v___x_4353_, 0);
lean_inc(v_a_4354_);
lean_dec_ref_known(v___x_4353_, 1);
v_fst_4355_ = lean_ctor_get(v_a_4354_, 0);
v_snd_4356_ = lean_ctor_get(v_a_4354_, 1);
v_isSharedCheck_4374_ = !lean_is_exclusive(v_a_4354_);
if (v_isSharedCheck_4374_ == 0)
{
v___x_4358_ = v_a_4354_;
v_isShared_4359_ = v_isSharedCheck_4374_;
goto v_resetjp_4357_;
}
else
{
lean_inc(v_snd_4356_);
lean_inc(v_fst_4355_);
lean_dec(v_a_4354_);
v___x_4358_ = lean_box(0);
v_isShared_4359_ = v_isSharedCheck_4374_;
goto v_resetjp_4357_;
}
v_resetjp_4357_:
{
lean_object* v___x_4360_; lean_object* v___x_4361_; lean_object* v___x_4362_; lean_object* v___x_4364_; uint8_t v_isShared_4365_; uint8_t v_isSharedCheck_4372_; 
v___x_4360_ = lean_obj_once(&l_Lean_MVarId_byCases___lam__0___closed__7, &l_Lean_MVarId_byCases___lam__0___closed__7_once, _init_l_Lean_MVarId_byCases___lam__0___closed__7);
v___x_4361_ = l_Lean_mkApp4(v___x_4360_, v_p_4328_, v_a_4336_, v_fst_4348_, v_fst_4355_);
v___x_4362_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_4327_, v___x_4361_, v___y_4341_);
v_isSharedCheck_4372_ = !lean_is_exclusive(v___x_4362_);
if (v_isSharedCheck_4372_ == 0)
{
lean_object* v_unused_4373_; 
v_unused_4373_ = lean_ctor_get(v___x_4362_, 0);
lean_dec(v_unused_4373_);
v___x_4364_ = v___x_4362_;
v_isShared_4365_ = v_isSharedCheck_4372_;
goto v_resetjp_4363_;
}
else
{
lean_dec(v___x_4362_);
v___x_4364_ = lean_box(0);
v_isShared_4365_ = v_isSharedCheck_4372_;
goto v_resetjp_4363_;
}
v_resetjp_4363_:
{
lean_object* v___x_4367_; 
if (v_isShared_4359_ == 0)
{
lean_ctor_set(v___x_4358_, 0, v_snd_4349_);
v___x_4367_ = v___x_4358_;
goto v_reusejp_4366_;
}
else
{
lean_object* v_reuseFailAlloc_4371_; 
v_reuseFailAlloc_4371_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4371_, 0, v_snd_4349_);
lean_ctor_set(v_reuseFailAlloc_4371_, 1, v_snd_4356_);
v___x_4367_ = v_reuseFailAlloc_4371_;
goto v_reusejp_4366_;
}
v_reusejp_4366_:
{
lean_object* v___x_4369_; 
if (v_isShared_4365_ == 0)
{
lean_ctor_set(v___x_4364_, 0, v___x_4367_);
v___x_4369_ = v___x_4364_;
goto v_reusejp_4368_;
}
else
{
lean_object* v_reuseFailAlloc_4370_; 
v_reuseFailAlloc_4370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4370_, 0, v___x_4367_);
v___x_4369_ = v_reuseFailAlloc_4370_;
goto v_reusejp_4368_;
}
v_reusejp_4368_:
{
return v___x_4369_;
}
}
}
}
}
else
{
lean_object* v_a_4375_; lean_object* v___x_4377_; uint8_t v_isShared_4378_; uint8_t v_isSharedCheck_4382_; 
lean_dec(v_snd_4349_);
lean_dec(v_fst_4348_);
lean_dec(v_a_4336_);
lean_dec_ref(v_p_4328_);
lean_dec(v_mvarId_4327_);
v_a_4375_ = lean_ctor_get(v___x_4353_, 0);
v_isSharedCheck_4382_ = !lean_is_exclusive(v___x_4353_);
if (v_isSharedCheck_4382_ == 0)
{
v___x_4377_ = v___x_4353_;
v_isShared_4378_ = v_isSharedCheck_4382_;
goto v_resetjp_4376_;
}
else
{
lean_inc(v_a_4375_);
lean_dec(v___x_4353_);
v___x_4377_ = lean_box(0);
v_isShared_4378_ = v_isSharedCheck_4382_;
goto v_resetjp_4376_;
}
v_resetjp_4376_:
{
lean_object* v___x_4380_; 
if (v_isShared_4378_ == 0)
{
v___x_4380_ = v___x_4377_;
goto v_reusejp_4379_;
}
else
{
lean_object* v_reuseFailAlloc_4381_; 
v_reuseFailAlloc_4381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4381_, 0, v_a_4375_);
v___x_4380_ = v_reuseFailAlloc_4381_;
goto v_reusejp_4379_;
}
v_reusejp_4379_:
{
return v___x_4380_;
}
}
}
}
else
{
lean_object* v_a_4383_; lean_object* v___x_4385_; uint8_t v_isShared_4386_; uint8_t v_isSharedCheck_4390_; 
lean_dec(v_a_4338_);
lean_dec(v_a_4336_);
lean_dec(v_hName_4329_);
lean_dec_ref(v_p_4328_);
lean_dec(v_mvarId_4327_);
v_a_4383_ = lean_ctor_get(v___x_4346_, 0);
v_isSharedCheck_4390_ = !lean_is_exclusive(v___x_4346_);
if (v_isSharedCheck_4390_ == 0)
{
v___x_4385_ = v___x_4346_;
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
else
{
lean_inc(v_a_4383_);
lean_dec(v___x_4346_);
v___x_4385_ = lean_box(0);
v_isShared_4386_ = v_isSharedCheck_4390_;
goto v_resetjp_4384_;
}
v_resetjp_4384_:
{
lean_object* v___x_4388_; 
if (v_isShared_4386_ == 0)
{
v___x_4388_ = v___x_4385_;
goto v_reusejp_4387_;
}
else
{
lean_object* v_reuseFailAlloc_4389_; 
v_reuseFailAlloc_4389_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4389_, 0, v_a_4383_);
v___x_4388_ = v_reuseFailAlloc_4389_;
goto v_reusejp_4387_;
}
v_reusejp_4387_:
{
return v___x_4388_;
}
}
}
}
}
else
{
lean_object* v_a_4413_; lean_object* v___x_4415_; uint8_t v_isShared_4416_; uint8_t v_isSharedCheck_4420_; 
lean_dec(v_a_4336_);
lean_dec(v_hName_4329_);
lean_dec_ref(v_p_4328_);
lean_dec(v_mvarId_4327_);
v_a_4413_ = lean_ctor_get(v___x_4337_, 0);
v_isSharedCheck_4420_ = !lean_is_exclusive(v___x_4337_);
if (v_isSharedCheck_4420_ == 0)
{
v___x_4415_ = v___x_4337_;
v_isShared_4416_ = v_isSharedCheck_4420_;
goto v_resetjp_4414_;
}
else
{
lean_inc(v_a_4413_);
lean_dec(v___x_4337_);
v___x_4415_ = lean_box(0);
v_isShared_4416_ = v_isSharedCheck_4420_;
goto v_resetjp_4414_;
}
v_resetjp_4414_:
{
lean_object* v___x_4418_; 
if (v_isShared_4416_ == 0)
{
v___x_4418_ = v___x_4415_;
goto v_reusejp_4417_;
}
else
{
lean_object* v_reuseFailAlloc_4419_; 
v_reuseFailAlloc_4419_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4419_, 0, v_a_4413_);
v___x_4418_ = v_reuseFailAlloc_4419_;
goto v_reusejp_4417_;
}
v_reusejp_4417_:
{
return v___x_4418_;
}
}
}
}
else
{
lean_object* v_a_4421_; lean_object* v___x_4423_; uint8_t v_isShared_4424_; uint8_t v_isSharedCheck_4428_; 
lean_dec(v_hName_4329_);
lean_dec_ref(v_p_4328_);
lean_dec(v_mvarId_4327_);
v_a_4421_ = lean_ctor_get(v___x_4335_, 0);
v_isSharedCheck_4428_ = !lean_is_exclusive(v___x_4335_);
if (v_isSharedCheck_4428_ == 0)
{
v___x_4423_ = v___x_4335_;
v_isShared_4424_ = v_isSharedCheck_4428_;
goto v_resetjp_4422_;
}
else
{
lean_inc(v_a_4421_);
lean_dec(v___x_4335_);
v___x_4423_ = lean_box(0);
v_isShared_4424_ = v_isSharedCheck_4428_;
goto v_resetjp_4422_;
}
v_resetjp_4422_:
{
lean_object* v___x_4426_; 
if (v_isShared_4424_ == 0)
{
v___x_4426_ = v___x_4423_;
goto v_reusejp_4425_;
}
else
{
lean_object* v_reuseFailAlloc_4427_; 
v_reuseFailAlloc_4427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4427_, 0, v_a_4421_);
v___x_4426_ = v_reuseFailAlloc_4427_;
goto v_reusejp_4425_;
}
v_reusejp_4425_:
{
return v___x_4426_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___lam__0___boxed(lean_object* v_mvarId_4429_, lean_object* v_p_4430_, lean_object* v_hName_4431_, lean_object* v___y_4432_, lean_object* v___y_4433_, lean_object* v___y_4434_, lean_object* v___y_4435_, lean_object* v___y_4436_){
_start:
{
lean_object* v_res_4437_; 
v_res_4437_ = l_Lean_MVarId_byCases___lam__0(v_mvarId_4429_, v_p_4430_, v_hName_4431_, v___y_4432_, v___y_4433_, v___y_4434_, v___y_4435_);
lean_dec(v___y_4435_);
lean_dec_ref(v___y_4434_);
lean_dec(v___y_4433_);
lean_dec_ref(v___y_4432_);
return v_res_4437_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases(lean_object* v_mvarId_4438_, lean_object* v_p_4439_, lean_object* v_hName_4440_, lean_object* v_a_4441_, lean_object* v_a_4442_, lean_object* v_a_4443_, lean_object* v_a_4444_){
_start:
{
lean_object* v___f_4446_; lean_object* v___x_4447_; 
lean_inc(v_mvarId_4438_);
v___f_4446_ = lean_alloc_closure((void*)(l_Lean_MVarId_byCases___lam__0___boxed), 8, 3);
lean_closure_set(v___f_4446_, 0, v_mvarId_4438_);
lean_closure_set(v___f_4446_, 1, v_p_4439_);
lean_closure_set(v___f_4446_, 2, v_hName_4440_);
v___x_4447_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_4438_, v___f_4446_, v_a_4441_, v_a_4442_, v_a_4443_, v_a_4444_);
return v___x_4447_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCases___boxed(lean_object* v_mvarId_4448_, lean_object* v_p_4449_, lean_object* v_hName_4450_, lean_object* v_a_4451_, lean_object* v_a_4452_, lean_object* v_a_4453_, lean_object* v_a_4454_, lean_object* v_a_4455_){
_start:
{
lean_object* v_res_4456_; 
v_res_4456_ = l_Lean_MVarId_byCases(v_mvarId_4448_, v_p_4449_, v_hName_4450_, v_a_4451_, v_a_4452_, v_a_4453_, v_a_4454_);
lean_dec(v_a_4454_);
lean_dec_ref(v_a_4453_);
lean_dec(v_a_4452_);
lean_dec_ref(v_a_4451_);
return v_res_4456_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0(lean_object* v_mvarId_4460_, lean_object* v_p_4461_, lean_object* v_hName_4462_, lean_object* v_dec_4463_, lean_object* v___y_4464_, lean_object* v___y_4465_, lean_object* v___y_4466_, lean_object* v___y_4467_){
_start:
{
lean_object* v___x_4469_; 
lean_inc(v_mvarId_4460_);
v___x_4469_ = l_Lean_MVarId_getType(v_mvarId_4460_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4469_) == 0)
{
lean_object* v_a_4470_; lean_object* v___x_4471_; 
v_a_4470_ = lean_ctor_get(v___x_4469_, 0);
lean_inc(v_a_4470_);
lean_dec_ref_known(v___x_4469_, 1);
lean_inc(v_mvarId_4460_);
v___x_4471_ = l_Lean_MVarId_getTag(v_mvarId_4460_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4471_) == 0)
{
lean_object* v_a_4472_; lean_object* v___x_4473_; 
v_a_4472_ = lean_ctor_get(v___x_4471_, 0);
lean_inc(v_a_4472_);
lean_dec_ref_known(v___x_4471_, 1);
lean_inc(v_a_4470_);
v___x_4473_ = l_Lean_Meta_getLevel(v_a_4470_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4473_) == 0)
{
lean_object* v_a_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; 
v_a_4474_ = lean_ctor_get(v___x_4473_, 0);
lean_inc(v_a_4474_);
lean_dec_ref_known(v___x_4473_, 1);
v___x_4475_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__1));
lean_inc(v_a_4472_);
v___x_4476_ = l_Lean_Name_append(v_a_4472_, v___x_4475_);
lean_inc(v_a_4470_);
lean_inc(v_hName_4462_);
lean_inc_ref(v_p_4461_);
v___x_4477_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v_p_4461_, v_hName_4462_, v_a_4470_, v___x_4476_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4477_) == 0)
{
lean_object* v_a_4478_; lean_object* v_fst_4479_; lean_object* v_snd_4480_; lean_object* v___x_4482_; uint8_t v_isShared_4483_; uint8_t v_isSharedCheck_4522_; 
v_a_4478_ = lean_ctor_get(v___x_4477_, 0);
lean_inc(v_a_4478_);
lean_dec_ref_known(v___x_4477_, 1);
v_fst_4479_ = lean_ctor_get(v_a_4478_, 0);
v_snd_4480_ = lean_ctor_get(v_a_4478_, 1);
v_isSharedCheck_4522_ = !lean_is_exclusive(v_a_4478_);
if (v_isSharedCheck_4522_ == 0)
{
v___x_4482_ = v_a_4478_;
v_isShared_4483_ = v_isSharedCheck_4522_;
goto v_resetjp_4481_;
}
else
{
lean_inc(v_snd_4480_);
lean_inc(v_fst_4479_);
lean_dec(v_a_4478_);
v___x_4482_ = lean_box(0);
v_isShared_4483_ = v_isSharedCheck_4522_;
goto v_resetjp_4481_;
}
v_resetjp_4481_:
{
lean_object* v___x_4484_; lean_object* v___x_4485_; lean_object* v___x_4486_; lean_object* v___x_4487_; 
lean_inc_ref(v_p_4461_);
v___x_4484_ = l_Lean_mkNot(v_p_4461_);
v___x_4485_ = ((lean_object*)(l_Lean_MVarId_byCases___lam__0___closed__3));
v___x_4486_ = l_Lean_Name_append(v_a_4472_, v___x_4485_);
lean_inc(v_a_4470_);
v___x_4487_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_mkByCasesSubgoal(v___x_4484_, v_hName_4462_, v_a_4470_, v___x_4486_, v___y_4464_, v___y_4465_, v___y_4466_, v___y_4467_);
if (lean_obj_tag(v___x_4487_) == 0)
{
lean_object* v_a_4488_; lean_object* v_fst_4489_; lean_object* v_snd_4490_; lean_object* v___x_4492_; uint8_t v_isShared_4493_; uint8_t v_isSharedCheck_4513_; 
v_a_4488_ = lean_ctor_get(v___x_4487_, 0);
lean_inc(v_a_4488_);
lean_dec_ref_known(v___x_4487_, 1);
v_fst_4489_ = lean_ctor_get(v_a_4488_, 0);
v_snd_4490_ = lean_ctor_get(v_a_4488_, 1);
v_isSharedCheck_4513_ = !lean_is_exclusive(v_a_4488_);
if (v_isSharedCheck_4513_ == 0)
{
v___x_4492_ = v_a_4488_;
v_isShared_4493_ = v_isSharedCheck_4513_;
goto v_resetjp_4491_;
}
else
{
lean_inc(v_snd_4490_);
lean_inc(v_fst_4489_);
lean_dec(v_a_4488_);
v___x_4492_ = lean_box(0);
v_isShared_4493_ = v_isSharedCheck_4513_;
goto v_resetjp_4491_;
}
v_resetjp_4491_:
{
lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4497_; 
v___x_4494_ = ((lean_object*)(l_Lean_MVarId_byCasesDec___lam__0___closed__1));
v___x_4495_ = lean_box(0);
if (v_isShared_4483_ == 0)
{
lean_ctor_set_tag(v___x_4482_, 1);
lean_ctor_set(v___x_4482_, 1, v___x_4495_);
lean_ctor_set(v___x_4482_, 0, v_a_4474_);
v___x_4497_ = v___x_4482_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4512_; 
v_reuseFailAlloc_4512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4512_, 0, v_a_4474_);
lean_ctor_set(v_reuseFailAlloc_4512_, 1, v___x_4495_);
v___x_4497_ = v_reuseFailAlloc_4512_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4502_; uint8_t v_isShared_4503_; uint8_t v_isSharedCheck_4510_; 
v___x_4498_ = l_Lean_Expr_const___override(v___x_4494_, v___x_4497_);
v___x_4499_ = l_Lean_mkApp5(v___x_4498_, v_a_4470_, v_p_4461_, v_dec_4463_, v_fst_4479_, v_fst_4489_);
v___x_4500_ = l_Lean_MVarId_assign___at___00Lean_Meta_generalizeTargetsEq_spec__1___redArg(v_mvarId_4460_, v___x_4499_, v___y_4465_);
v_isSharedCheck_4510_ = !lean_is_exclusive(v___x_4500_);
if (v_isSharedCheck_4510_ == 0)
{
lean_object* v_unused_4511_; 
v_unused_4511_ = lean_ctor_get(v___x_4500_, 0);
lean_dec(v_unused_4511_);
v___x_4502_ = v___x_4500_;
v_isShared_4503_ = v_isSharedCheck_4510_;
goto v_resetjp_4501_;
}
else
{
lean_dec(v___x_4500_);
v___x_4502_ = lean_box(0);
v_isShared_4503_ = v_isSharedCheck_4510_;
goto v_resetjp_4501_;
}
v_resetjp_4501_:
{
lean_object* v___x_4505_; 
if (v_isShared_4493_ == 0)
{
lean_ctor_set(v___x_4492_, 0, v_snd_4480_);
v___x_4505_ = v___x_4492_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4509_; 
v_reuseFailAlloc_4509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4509_, 0, v_snd_4480_);
lean_ctor_set(v_reuseFailAlloc_4509_, 1, v_snd_4490_);
v___x_4505_ = v_reuseFailAlloc_4509_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
lean_object* v___x_4507_; 
if (v_isShared_4503_ == 0)
{
lean_ctor_set(v___x_4502_, 0, v___x_4505_);
v___x_4507_ = v___x_4502_;
goto v_reusejp_4506_;
}
else
{
lean_object* v_reuseFailAlloc_4508_; 
v_reuseFailAlloc_4508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4508_, 0, v___x_4505_);
v___x_4507_ = v_reuseFailAlloc_4508_;
goto v_reusejp_4506_;
}
v_reusejp_4506_:
{
return v___x_4507_;
}
}
}
}
}
}
else
{
lean_object* v_a_4514_; lean_object* v___x_4516_; uint8_t v_isShared_4517_; uint8_t v_isSharedCheck_4521_; 
lean_del_object(v___x_4482_);
lean_dec(v_snd_4480_);
lean_dec(v_fst_4479_);
lean_dec(v_a_4474_);
lean_dec(v_a_4470_);
lean_dec_ref(v_dec_4463_);
lean_dec_ref(v_p_4461_);
lean_dec(v_mvarId_4460_);
v_a_4514_ = lean_ctor_get(v___x_4487_, 0);
v_isSharedCheck_4521_ = !lean_is_exclusive(v___x_4487_);
if (v_isSharedCheck_4521_ == 0)
{
v___x_4516_ = v___x_4487_;
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
else
{
lean_inc(v_a_4514_);
lean_dec(v___x_4487_);
v___x_4516_ = lean_box(0);
v_isShared_4517_ = v_isSharedCheck_4521_;
goto v_resetjp_4515_;
}
v_resetjp_4515_:
{
lean_object* v___x_4519_; 
if (v_isShared_4517_ == 0)
{
v___x_4519_ = v___x_4516_;
goto v_reusejp_4518_;
}
else
{
lean_object* v_reuseFailAlloc_4520_; 
v_reuseFailAlloc_4520_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4520_, 0, v_a_4514_);
v___x_4519_ = v_reuseFailAlloc_4520_;
goto v_reusejp_4518_;
}
v_reusejp_4518_:
{
return v___x_4519_;
}
}
}
}
}
else
{
lean_object* v_a_4523_; lean_object* v___x_4525_; uint8_t v_isShared_4526_; uint8_t v_isSharedCheck_4530_; 
lean_dec(v_a_4474_);
lean_dec(v_a_4472_);
lean_dec(v_a_4470_);
lean_dec_ref(v_dec_4463_);
lean_dec(v_hName_4462_);
lean_dec_ref(v_p_4461_);
lean_dec(v_mvarId_4460_);
v_a_4523_ = lean_ctor_get(v___x_4477_, 0);
v_isSharedCheck_4530_ = !lean_is_exclusive(v___x_4477_);
if (v_isSharedCheck_4530_ == 0)
{
v___x_4525_ = v___x_4477_;
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
else
{
lean_inc(v_a_4523_);
lean_dec(v___x_4477_);
v___x_4525_ = lean_box(0);
v_isShared_4526_ = v_isSharedCheck_4530_;
goto v_resetjp_4524_;
}
v_resetjp_4524_:
{
lean_object* v___x_4528_; 
if (v_isShared_4526_ == 0)
{
v___x_4528_ = v___x_4525_;
goto v_reusejp_4527_;
}
else
{
lean_object* v_reuseFailAlloc_4529_; 
v_reuseFailAlloc_4529_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4529_, 0, v_a_4523_);
v___x_4528_ = v_reuseFailAlloc_4529_;
goto v_reusejp_4527_;
}
v_reusejp_4527_:
{
return v___x_4528_;
}
}
}
}
else
{
lean_object* v_a_4531_; lean_object* v___x_4533_; uint8_t v_isShared_4534_; uint8_t v_isSharedCheck_4538_; 
lean_dec(v_a_4472_);
lean_dec(v_a_4470_);
lean_dec_ref(v_dec_4463_);
lean_dec(v_hName_4462_);
lean_dec_ref(v_p_4461_);
lean_dec(v_mvarId_4460_);
v_a_4531_ = lean_ctor_get(v___x_4473_, 0);
v_isSharedCheck_4538_ = !lean_is_exclusive(v___x_4473_);
if (v_isSharedCheck_4538_ == 0)
{
v___x_4533_ = v___x_4473_;
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
else
{
lean_inc(v_a_4531_);
lean_dec(v___x_4473_);
v___x_4533_ = lean_box(0);
v_isShared_4534_ = v_isSharedCheck_4538_;
goto v_resetjp_4532_;
}
v_resetjp_4532_:
{
lean_object* v___x_4536_; 
if (v_isShared_4534_ == 0)
{
v___x_4536_ = v___x_4533_;
goto v_reusejp_4535_;
}
else
{
lean_object* v_reuseFailAlloc_4537_; 
v_reuseFailAlloc_4537_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4537_, 0, v_a_4531_);
v___x_4536_ = v_reuseFailAlloc_4537_;
goto v_reusejp_4535_;
}
v_reusejp_4535_:
{
return v___x_4536_;
}
}
}
}
else
{
lean_object* v_a_4539_; lean_object* v___x_4541_; uint8_t v_isShared_4542_; uint8_t v_isSharedCheck_4546_; 
lean_dec(v_a_4470_);
lean_dec_ref(v_dec_4463_);
lean_dec(v_hName_4462_);
lean_dec_ref(v_p_4461_);
lean_dec(v_mvarId_4460_);
v_a_4539_ = lean_ctor_get(v___x_4471_, 0);
v_isSharedCheck_4546_ = !lean_is_exclusive(v___x_4471_);
if (v_isSharedCheck_4546_ == 0)
{
v___x_4541_ = v___x_4471_;
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
else
{
lean_inc(v_a_4539_);
lean_dec(v___x_4471_);
v___x_4541_ = lean_box(0);
v_isShared_4542_ = v_isSharedCheck_4546_;
goto v_resetjp_4540_;
}
v_resetjp_4540_:
{
lean_object* v___x_4544_; 
if (v_isShared_4542_ == 0)
{
v___x_4544_ = v___x_4541_;
goto v_reusejp_4543_;
}
else
{
lean_object* v_reuseFailAlloc_4545_; 
v_reuseFailAlloc_4545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4545_, 0, v_a_4539_);
v___x_4544_ = v_reuseFailAlloc_4545_;
goto v_reusejp_4543_;
}
v_reusejp_4543_:
{
return v___x_4544_;
}
}
}
}
else
{
lean_object* v_a_4547_; lean_object* v___x_4549_; uint8_t v_isShared_4550_; uint8_t v_isSharedCheck_4554_; 
lean_dec_ref(v_dec_4463_);
lean_dec(v_hName_4462_);
lean_dec_ref(v_p_4461_);
lean_dec(v_mvarId_4460_);
v_a_4547_ = lean_ctor_get(v___x_4469_, 0);
v_isSharedCheck_4554_ = !lean_is_exclusive(v___x_4469_);
if (v_isSharedCheck_4554_ == 0)
{
v___x_4549_ = v___x_4469_;
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
else
{
lean_inc(v_a_4547_);
lean_dec(v___x_4469_);
v___x_4549_ = lean_box(0);
v_isShared_4550_ = v_isSharedCheck_4554_;
goto v_resetjp_4548_;
}
v_resetjp_4548_:
{
lean_object* v___x_4552_; 
if (v_isShared_4550_ == 0)
{
v___x_4552_ = v___x_4549_;
goto v_reusejp_4551_;
}
else
{
lean_object* v_reuseFailAlloc_4553_; 
v_reuseFailAlloc_4553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4553_, 0, v_a_4547_);
v___x_4552_ = v_reuseFailAlloc_4553_;
goto v_reusejp_4551_;
}
v_reusejp_4551_:
{
return v___x_4552_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___lam__0___boxed(lean_object* v_mvarId_4555_, lean_object* v_p_4556_, lean_object* v_hName_4557_, lean_object* v_dec_4558_, lean_object* v___y_4559_, lean_object* v___y_4560_, lean_object* v___y_4561_, lean_object* v___y_4562_, lean_object* v___y_4563_){
_start:
{
lean_object* v_res_4564_; 
v_res_4564_ = l_Lean_MVarId_byCasesDec___lam__0(v_mvarId_4555_, v_p_4556_, v_hName_4557_, v_dec_4558_, v___y_4559_, v___y_4560_, v___y_4561_, v___y_4562_);
lean_dec(v___y_4562_);
lean_dec_ref(v___y_4561_);
lean_dec(v___y_4560_);
lean_dec_ref(v___y_4559_);
return v_res_4564_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec(lean_object* v_mvarId_4565_, lean_object* v_p_4566_, lean_object* v_dec_4567_, lean_object* v_hName_4568_, lean_object* v_a_4569_, lean_object* v_a_4570_, lean_object* v_a_4571_, lean_object* v_a_4572_){
_start:
{
lean_object* v___f_4574_; lean_object* v___x_4575_; 
lean_inc(v_mvarId_4565_);
v___f_4574_ = lean_alloc_closure((void*)(l_Lean_MVarId_byCasesDec___lam__0___boxed), 9, 4);
lean_closure_set(v___f_4574_, 0, v_mvarId_4565_);
lean_closure_set(v___f_4574_, 1, v_p_4566_);
lean_closure_set(v___f_4574_, 2, v_hName_4568_);
lean_closure_set(v___f_4574_, 3, v_dec_4567_);
v___x_4575_ = l_Lean_MVarId_withContext___at___00Lean_Meta_generalizeTargetsEq_spec__2___redArg(v_mvarId_4565_, v___f_4574_, v_a_4569_, v_a_4570_, v_a_4571_, v_a_4572_);
return v___x_4575_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_byCasesDec___boxed(lean_object* v_mvarId_4576_, lean_object* v_p_4577_, lean_object* v_dec_4578_, lean_object* v_hName_4579_, lean_object* v_a_4580_, lean_object* v_a_4581_, lean_object* v_a_4582_, lean_object* v_a_4583_, lean_object* v_a_4584_){
_start:
{
lean_object* v_res_4585_; 
v_res_4585_ = l_Lean_MVarId_byCasesDec(v_mvarId_4576_, v_p_4577_, v_dec_4578_, v_hName_4579_, v_a_4580_, v_a_4581_, v_a_4582_, v_a_4583_);
lean_dec(v_a_4583_);
lean_dec_ref(v_a_4582_);
lean_dec(v_a_4581_);
lean_dec_ref(v_a_4580_);
return v_res_4585_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4637_; lean_object* v___x_4638_; lean_object* v___x_4639_; 
v___x_4637_ = lean_unsigned_to_nat(4241171151u);
v___x_4638_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__19_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4639_ = l_Lean_Name_num___override(v___x_4638_, v___x_4637_);
return v___x_4639_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4641_; lean_object* v___x_4642_; lean_object* v___x_4643_; 
v___x_4641_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__21_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4642_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__20_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4643_ = l_Lean_Name_str___override(v___x_4642_, v___x_4641_);
return v___x_4643_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4645_; lean_object* v___x_4646_; lean_object* v___x_4647_; 
v___x_4645_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__23_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4646_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__22_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4647_ = l_Lean_Name_str___override(v___x_4646_, v___x_4645_);
return v___x_4647_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_4648_; lean_object* v___x_4649_; lean_object* v___x_4650_; 
v___x_4648_ = lean_unsigned_to_nat(2u);
v___x_4649_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__24_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4650_ = l_Lean_Name_num___override(v___x_4649_, v___x_4648_);
return v___x_4650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_4652_; uint8_t v___x_4653_; lean_object* v___x_4654_; lean_object* v___x_4655_; 
v___x_4652_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__0_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_));
v___x_4653_ = 0;
v___x_4654_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_, &l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2__once, _init_l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn___closed__25_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_);
v___x_4655_ = l_Lean_registerTraceClass(v___x_4652_, v___x_4653_, v___x_4654_);
return v___x_4655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2____boxed(lean_object* v_a_4656_){
_start:
{
lean_object* v_res_4657_; 
v_res_4657_ = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_();
return v_res_4657_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Induction(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Acyclic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Acyclic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Meta_Tactic_Cases_0__Lean_Meta_initFn_00___x40_Lean_Meta_Tactic_Cases_4241171151____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Induction(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Acyclic(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_UnifyEq(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_SparseCasesOn(uint8_t builtin);
lean_object* initialize_Lean_Meta_Constructions_CtorIdx(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Cases(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Induction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Acyclic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_UnifyEq(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_SparseCasesOn(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Constructions_CtorIdx(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Cases(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Cases(builtin);
}
#ifdef __cplusplus
}
#endif
