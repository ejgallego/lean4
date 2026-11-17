// Lean compiler output
// Module: Lean.Meta.Tactic.Apply
// Imports: public import Lean.Meta.Tactic.Util public import Lean.PrettyPrinter import Lean.Meta.AppBuilder import Init.Omega
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_headBetaType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isAnonymous(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint64_t l_Lean_instHashableMVarId_hash(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_instBEqMVarId_beq(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_BinderInfo_isInstImplicit(uint8_t);
lean_object* l_Lean_Meta_appendTag(lean_object*, lean_object*);
lean_object* l_Lean_MVarId_setTag___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getMVarsNoDelayed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_FindMVar_main(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint64_t l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(lean_object*);
lean_object* l_Lean_Meta_addPPExplicitToExposeDiff(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_mkUnfoldAxiomsNote(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofLazyM(lean_object*, lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_note(lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
lean_object* l_Lean_Meta_forallMetaTelescopeReducing(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEqGuarded(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_synthInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
uint8_t l_Lean_Expr_isMVar(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_isProp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_name_append_index_after(lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_forallMetaBoundedTelescope(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_beta(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_get___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_getExpectedNumArgsAux___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_getExpectedNumArgsAux___closed__0 = (const lean_object*)&l_Lean_Meta_getExpectedNumArgsAux___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "\nwith the goal"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "could not unify the "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "the term"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__6_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "type"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "conclusion"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " is"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "The full type of "};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "apply"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(171, 239, 198, 100, 229, 128, 136, 1)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "failed to assign synthesized instance"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__0_value)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__1_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyConst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* l_Lean_MVarId_applyConst___closed__0 = (const lean_object*)&l_Lean_MVarId_applyConst___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_applyConst___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyConst___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Type mismatch: target is"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__1;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "\nbut applied expression has type"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__3;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "\nafter applying "};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__4_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__5;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " arguments."};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__6_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__7;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Applied type takes fewer than "};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__8 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__8_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__9;
static const lean_string_object l_Lean_MVarId_applyN___lam__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " arguments:\n"};
static const lean_object* l_Lean_MVarId_applyN___lam__0___closed__10 = (const lean_object*)&l_Lean_MVarId_applyN___lam__0___closed__10_value;
static lean_once_cell_t l_Lean_MVarId_applyN___lam__0___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_applyN___lam__0___closed__11;
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "And"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "h"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__2_value),LEAN_SCALAR_PTR_LITERAL(176, 181, 207, 77, 197, 87, 68, 121)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "intro"};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(49, 220, 212, 156, 122, 214, 55, 135)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__4_value),LEAN_SCALAR_PTR_LITERAL(58, 46, 244, 208, 18, 71, 77, 162)}};
static const lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_splitAndCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "splitAnd"};
static const lean_object* l_Lean_MVarId_splitAndCore___closed__0 = (const lean_object*)&l_Lean_MVarId_splitAndCore___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_splitAndCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_splitAndCore___closed__0_value),LEAN_SCALAR_PTR_LITERAL(17, 13, 24, 72, 20, 48, 2, 32)}};
static const lean_object* l_Lean_MVarId_splitAndCore___closed__1 = (const lean_object*)&l_Lean_MVarId_splitAndCore___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_exfalso___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_exfalso___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_exfalso___lam__0___closed__2;
static const lean_string_object l_Lean_MVarId_exfalso___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "elim"};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_ctor_object l_Lean_MVarId_exfalso___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(51, 114, 54, 50, 40, 156, 62, 47)}};
static const lean_object* l_Lean_MVarId_exfalso___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_exfalso___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "exfalso"};
static const lean_object* l_Lean_MVarId_exfalso___closed__0 = (const lean_object*)&l_Lean_MVarId_exfalso___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_exfalso___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_exfalso___closed__0_value),LEAN_SCALAR_PTR_LITERAL(214, 71, 194, 225, 45, 41, 69, 140)}};
static const lean_object* l_Lean_MVarId_exfalso___closed__1 = (const lean_object*)&l_Lean_MVarId_exfalso___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "target is not an inductive datatype"};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_nthConstructor___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__0_value)}};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__2;
static lean_once_cell_t l_Lean_MVarId_nthConstructor___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__3;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "index "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__4_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = " out of bounds, only "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__5 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__5_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = " constructors"};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__6 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__6_value;
static const lean_string_object l_Lean_MVarId_nthConstructor___lam__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = " tactic works for inductive types with exactly "};
static const lean_object* l_Lean_MVarId_nthConstructor___lam__0___closed__7 = (const lean_object*)&l_Lean_MVarId_nthConstructor___lam__0___closed__7_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_iffOfEq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "failed"};
static const lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_iffOfEq___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___lam__0___closed__1;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_iffOfEq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "iff_of_eq"};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__0 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_iffOfEq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_iffOfEq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(186, 65, 13, 14, 191, 127, 32, 251)}};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__1 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_iffOfEq___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_iffOfEq___closed__2;
static const lean_ctor_object l_Lean_MVarId_iffOfEq___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_MVarId_iffOfEq___closed__3 = (const lean_object*)&l_Lean_MVarId_iffOfEq___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_propext___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "propext"};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_propext___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_propext___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(53, 150, 49, 30, 125, 3, 39, 172)}};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_propext___lam__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_propext___lam__0___closed__2;
static const lean_string_object l_Lean_MVarId_propext___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_propext___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_propext___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_MVarId_propext___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_propext___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1_value;
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "proof_irrel_heq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(180, 105, 248, 247, 187, 48, 190, 226)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_proofIrrelHeq___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "proofIrrelHeq"};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___closed__0 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_proofIrrelHeq___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__0_value),LEAN_SCALAR_PTR_LITERAL(47, 31, 69, 85, 58, 186, 233, 113)}};
static const lean_object* l_Lean_MVarId_proofIrrelHeq___closed__1 = (const lean_object*)&l_Lean_MVarId_proofIrrelHeq___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Subsingleton"};
static const lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(23, 130, 42, 228, 248, 162, 23, 186)}};
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value_aux_0),((lean_object*)&l_Lean_MVarId_exfalso___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(79, 85, 152, 16, 239, 41, 62, 212)}};
static const lean_object* l_Lean_MVarId_subsingletonElim___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_subsingletonElim___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "subsingletonElim"};
static const lean_object* l_Lean_MVarId_subsingletonElim___closed__0 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_subsingletonElim___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_subsingletonElim___closed__0_value),LEAN_SCALAR_PTR_LITERAL(73, 225, 81, 216, 132, 143, 62, 229)}};
static const lean_object* l_Lean_MVarId_subsingletonElim___closed__1 = (const lean_object*)&l_Lean_MVarId_subsingletonElim___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(lean_object* v_k_1_, lean_object* v_b_2_, lean_object* v_c_3_, lean_object* v___y_4_, lean_object* v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_){
_start:
{
lean_object* v___x_9_; 
lean_inc(v___y_7_);
lean_inc_ref(v___y_6_);
lean_inc(v___y_5_);
lean_inc_ref(v___y_4_);
v___x_9_ = lean_apply_7(v_k_1_, v_b_2_, v_c_3_, v___y_4_, v___y_5_, v___y_6_, v___y_7_, lean_box(0));
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed(lean_object* v_k_10_, lean_object* v_b_11_, lean_object* v_c_12_, lean_object* v___y_13_, lean_object* v___y_14_, lean_object* v___y_15_, lean_object* v___y_16_, lean_object* v___y_17_){
_start:
{
lean_object* v_res_18_; 
v_res_18_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0(v_k_10_, v_b_11_, v_c_12_, v___y_13_, v___y_14_, v___y_15_, v___y_16_);
lean_dec(v___y_16_);
lean_dec_ref(v___y_15_);
lean_dec(v___y_14_);
lean_dec_ref(v___y_13_);
return v_res_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(lean_object* v_type_19_, lean_object* v_k_20_, uint8_t v_cleanupAnnotations_21_, uint8_t v_whnfType_22_, lean_object* v___y_23_, lean_object* v___y_24_, lean_object* v___y_25_, lean_object* v___y_26_){
_start:
{
lean_object* v___f_28_; lean_object* v___x_29_; 
v___f_28_ = lean_alloc_closure((void*)(l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_28_, 0, v_k_20_);
v___x_29_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingImp(lean_box(0), v_type_19_, v___f_28_, v_cleanupAnnotations_21_, v_whnfType_22_, v___y_23_, v___y_24_, v___y_25_, v___y_26_);
if (lean_obj_tag(v___x_29_) == 0)
{
lean_object* v_a_30_; lean_object* v___x_32_; uint8_t v_isShared_33_; uint8_t v_isSharedCheck_37_; 
v_a_30_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_37_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_37_ == 0)
{
v___x_32_ = v___x_29_;
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
else
{
lean_inc(v_a_30_);
lean_dec(v___x_29_);
v___x_32_ = lean_box(0);
v_isShared_33_ = v_isSharedCheck_37_;
goto v_resetjp_31_;
}
v_resetjp_31_:
{
lean_object* v___x_35_; 
if (v_isShared_33_ == 0)
{
v___x_35_ = v___x_32_;
goto v_reusejp_34_;
}
else
{
lean_object* v_reuseFailAlloc_36_; 
v_reuseFailAlloc_36_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_36_, 0, v_a_30_);
v___x_35_ = v_reuseFailAlloc_36_;
goto v_reusejp_34_;
}
v_reusejp_34_:
{
return v___x_35_;
}
}
}
else
{
lean_object* v_a_38_; lean_object* v___x_40_; uint8_t v_isShared_41_; uint8_t v_isSharedCheck_45_; 
v_a_38_ = lean_ctor_get(v___x_29_, 0);
v_isSharedCheck_45_ = !lean_is_exclusive(v___x_29_);
if (v_isSharedCheck_45_ == 0)
{
v___x_40_ = v___x_29_;
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
else
{
lean_inc(v_a_38_);
lean_dec(v___x_29_);
v___x_40_ = lean_box(0);
v_isShared_41_ = v_isSharedCheck_45_;
goto v_resetjp_39_;
}
v_resetjp_39_:
{
lean_object* v___x_43_; 
if (v_isShared_41_ == 0)
{
v___x_43_ = v___x_40_;
goto v_reusejp_42_;
}
else
{
lean_object* v_reuseFailAlloc_44_; 
v_reuseFailAlloc_44_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_44_, 0, v_a_38_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg___boxed(lean_object* v_type_46_, lean_object* v_k_47_, lean_object* v_cleanupAnnotations_48_, lean_object* v_whnfType_49_, lean_object* v___y_50_, lean_object* v___y_51_, lean_object* v___y_52_, lean_object* v___y_53_, lean_object* v___y_54_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_55_; uint8_t v_whnfType_boxed_56_; lean_object* v_res_57_; 
v_cleanupAnnotations_boxed_55_ = lean_unbox(v_cleanupAnnotations_48_);
v_whnfType_boxed_56_ = lean_unbox(v_whnfType_49_);
v_res_57_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_46_, v_k_47_, v_cleanupAnnotations_boxed_55_, v_whnfType_boxed_56_, v___y_50_, v___y_51_, v___y_52_, v___y_53_);
lean_dec(v___y_53_);
lean_dec_ref(v___y_52_);
lean_dec(v___y_51_);
lean_dec_ref(v___y_50_);
return v_res_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(lean_object* v_00_u03b1_58_, lean_object* v_type_59_, lean_object* v_k_60_, uint8_t v_cleanupAnnotations_61_, uint8_t v_whnfType_62_, lean_object* v___y_63_, lean_object* v___y_64_, lean_object* v___y_65_, lean_object* v___y_66_){
_start:
{
lean_object* v___x_68_; 
v___x_68_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_type_59_, v_k_60_, v_cleanupAnnotations_61_, v_whnfType_62_, v___y_63_, v___y_64_, v___y_65_, v___y_66_);
return v___x_68_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___boxed(lean_object* v_00_u03b1_69_, lean_object* v_type_70_, lean_object* v_k_71_, lean_object* v_cleanupAnnotations_72_, lean_object* v_whnfType_73_, lean_object* v___y_74_, lean_object* v___y_75_, lean_object* v___y_76_, lean_object* v___y_77_, lean_object* v___y_78_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_79_; uint8_t v_whnfType_boxed_80_; lean_object* v_res_81_; 
v_cleanupAnnotations_boxed_79_ = lean_unbox(v_cleanupAnnotations_72_);
v_whnfType_boxed_80_ = lean_unbox(v_whnfType_73_);
v_res_81_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0(v_00_u03b1_69_, v_type_70_, v_k_71_, v_cleanupAnnotations_boxed_79_, v_whnfType_boxed_80_, v___y_74_, v___y_75_, v___y_76_, v___y_77_);
lean_dec(v___y_77_);
lean_dec_ref(v___y_76_);
lean_dec(v___y_75_);
lean_dec_ref(v___y_74_);
return v_res_81_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0(lean_object* v_xs_82_, lean_object* v_body_83_, lean_object* v___y_84_, lean_object* v___y_85_, lean_object* v___y_86_, lean_object* v___y_87_){
_start:
{
lean_object* v___x_89_; lean_object* v___x_90_; uint8_t v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; 
v___x_89_ = lean_array_get_size(v_xs_82_);
v___x_90_ = l_Lean_Expr_getAppFn(v_body_83_);
v___x_91_ = l_Lean_Expr_isMVar(v___x_90_);
lean_dec_ref(v___x_90_);
v___x_92_ = lean_box(v___x_91_);
v___x_93_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_89_);
lean_ctor_set(v___x_93_, 1, v___x_92_);
v___x_94_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_94_, 0, v___x_93_);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___lam__0___boxed(lean_object* v_xs_95_, lean_object* v_body_96_, lean_object* v___y_97_, lean_object* v___y_98_, lean_object* v___y_99_, lean_object* v___y_100_, lean_object* v___y_101_){
_start:
{
lean_object* v_res_102_; 
v_res_102_ = l_Lean_Meta_getExpectedNumArgsAux___lam__0(v_xs_95_, v_body_96_, v___y_97_, v___y_98_, v___y_99_, v___y_100_);
lean_dec(v___y_100_);
lean_dec_ref(v___y_99_);
lean_dec(v___y_98_);
lean_dec_ref(v___y_97_);
lean_dec_ref(v_body_96_);
lean_dec_ref(v_xs_95_);
return v_res_102_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux(lean_object* v_e_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_){
_start:
{
lean_object* v___y_111_; lean_object* v___x_128_; uint8_t v_transparency_129_; lean_object* v___f_130_; uint8_t v___x_131_; uint8_t v___x_132_; uint8_t v___x_133_; 
v___x_128_ = l_Lean_Meta_Context_config(v_a_105_);
v_transparency_129_ = lean_ctor_get_uint8(v___x_128_, 9);
lean_dec_ref(v___x_128_);
v___f_130_ = ((lean_object*)(l_Lean_Meta_getExpectedNumArgsAux___closed__0));
v___x_131_ = 0;
v___x_132_ = 1;
v___x_133_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_129_, v___x_132_);
if (v___x_133_ == 0)
{
lean_object* v_keyedConfig_134_; uint8_t v_trackZetaDelta_135_; lean_object* v_zetaDeltaSet_136_; lean_object* v_lctx_137_; lean_object* v_localInstances_138_; lean_object* v_defEqCtx_x3f_139_; lean_object* v_synthPendingDepth_140_; lean_object* v_customCanUnfoldPredicate_x3f_141_; uint8_t v_univApprox_142_; uint8_t v_inTypeClassResolution_143_; uint8_t v_cacheInferType_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; 
v_keyedConfig_134_ = lean_ctor_get(v_a_105_, 0);
v_trackZetaDelta_135_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*7);
v_zetaDeltaSet_136_ = lean_ctor_get(v_a_105_, 1);
v_lctx_137_ = lean_ctor_get(v_a_105_, 2);
v_localInstances_138_ = lean_ctor_get(v_a_105_, 3);
v_defEqCtx_x3f_139_ = lean_ctor_get(v_a_105_, 4);
v_synthPendingDepth_140_ = lean_ctor_get(v_a_105_, 5);
v_customCanUnfoldPredicate_x3f_141_ = lean_ctor_get(v_a_105_, 6);
v_univApprox_142_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_143_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*7 + 2);
v_cacheInferType_144_ = lean_ctor_get_uint8(v_a_105_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_134_);
v___x_145_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_132_, v_keyedConfig_134_);
lean_inc(v_customCanUnfoldPredicate_x3f_141_);
lean_inc(v_synthPendingDepth_140_);
lean_inc(v_defEqCtx_x3f_139_);
lean_inc_ref(v_localInstances_138_);
lean_inc_ref(v_lctx_137_);
lean_inc(v_zetaDeltaSet_136_);
v___x_146_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v_zetaDeltaSet_136_);
lean_ctor_set(v___x_146_, 2, v_lctx_137_);
lean_ctor_set(v___x_146_, 3, v_localInstances_138_);
lean_ctor_set(v___x_146_, 4, v_defEqCtx_x3f_139_);
lean_ctor_set(v___x_146_, 5, v_synthPendingDepth_140_);
lean_ctor_set(v___x_146_, 6, v_customCanUnfoldPredicate_x3f_141_);
lean_ctor_set_uint8(v___x_146_, sizeof(void*)*7, v_trackZetaDelta_135_);
lean_ctor_set_uint8(v___x_146_, sizeof(void*)*7 + 1, v_univApprox_142_);
lean_ctor_set_uint8(v___x_146_, sizeof(void*)*7 + 2, v_inTypeClassResolution_143_);
lean_ctor_set_uint8(v___x_146_, sizeof(void*)*7 + 3, v_cacheInferType_144_);
v___x_147_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_e_104_, v___f_130_, v___x_131_, v___x_131_, v___x_146_, v_a_106_, v_a_107_, v_a_108_);
lean_dec_ref_known(v___x_146_, 7);
v___y_111_ = v___x_147_;
goto v___jp_110_;
}
else
{
lean_object* v___x_148_; 
v___x_148_ = l_Lean_Meta_forallTelescopeReducing___at___00Lean_Meta_getExpectedNumArgsAux_spec__0___redArg(v_e_104_, v___f_130_, v___x_131_, v___x_131_, v_a_105_, v_a_106_, v_a_107_, v_a_108_);
v___y_111_ = v___x_148_;
goto v___jp_110_;
}
v___jp_110_:
{
if (lean_obj_tag(v___y_111_) == 0)
{
lean_object* v_a_112_; lean_object* v___x_114_; uint8_t v_isShared_115_; uint8_t v_isSharedCheck_119_; 
v_a_112_ = lean_ctor_get(v___y_111_, 0);
v_isSharedCheck_119_ = !lean_is_exclusive(v___y_111_);
if (v_isSharedCheck_119_ == 0)
{
v___x_114_ = v___y_111_;
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
else
{
lean_inc(v_a_112_);
lean_dec(v___y_111_);
v___x_114_ = lean_box(0);
v_isShared_115_ = v_isSharedCheck_119_;
goto v_resetjp_113_;
}
v_resetjp_113_:
{
lean_object* v___x_117_; 
if (v_isShared_115_ == 0)
{
v___x_117_ = v___x_114_;
goto v_reusejp_116_;
}
else
{
lean_object* v_reuseFailAlloc_118_; 
v_reuseFailAlloc_118_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_118_, 0, v_a_112_);
v___x_117_ = v_reuseFailAlloc_118_;
goto v_reusejp_116_;
}
v_reusejp_116_:
{
return v___x_117_;
}
}
}
else
{
lean_object* v_a_120_; lean_object* v___x_122_; uint8_t v_isShared_123_; uint8_t v_isSharedCheck_127_; 
v_a_120_ = lean_ctor_get(v___y_111_, 0);
v_isSharedCheck_127_ = !lean_is_exclusive(v___y_111_);
if (v_isSharedCheck_127_ == 0)
{
v___x_122_ = v___y_111_;
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
else
{
lean_inc(v_a_120_);
lean_dec(v___y_111_);
v___x_122_ = lean_box(0);
v_isShared_123_ = v_isSharedCheck_127_;
goto v_resetjp_121_;
}
v_resetjp_121_:
{
lean_object* v___x_125_; 
if (v_isShared_123_ == 0)
{
v___x_125_ = v___x_122_;
goto v_reusejp_124_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v_a_120_);
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
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgsAux___boxed(lean_object* v_e_149_, lean_object* v_a_150_, lean_object* v_a_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_149_, v_a_150_, v_a_151_, v_a_152_, v_a_153_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
lean_dec(v_a_151_);
lean_dec_ref(v_a_150_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs(lean_object* v_e_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = l_Lean_Meta_getExpectedNumArgsAux(v_e_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v_a_163_; lean_object* v___x_165_; uint8_t v_isShared_166_; uint8_t v_isSharedCheck_171_; 
v_a_163_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_171_ == 0)
{
v___x_165_ = v___x_162_;
v_isShared_166_ = v_isSharedCheck_171_;
goto v_resetjp_164_;
}
else
{
lean_inc(v_a_163_);
lean_dec(v___x_162_);
v___x_165_ = lean_box(0);
v_isShared_166_ = v_isSharedCheck_171_;
goto v_resetjp_164_;
}
v_resetjp_164_:
{
lean_object* v_fst_167_; lean_object* v___x_169_; 
v_fst_167_ = lean_ctor_get(v_a_163_, 0);
lean_inc(v_fst_167_);
lean_dec(v_a_163_);
if (v_isShared_166_ == 0)
{
lean_ctor_set(v___x_165_, 0, v_fst_167_);
v___x_169_ = v___x_165_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_fst_167_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
else
{
lean_object* v_a_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_179_; 
v_a_172_ = lean_ctor_get(v___x_162_, 0);
v_isSharedCheck_179_ = !lean_is_exclusive(v___x_162_);
if (v_isSharedCheck_179_ == 0)
{
v___x_174_ = v___x_162_;
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_a_172_);
lean_dec(v___x_162_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_179_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_177_; 
if (v_isShared_175_ == 0)
{
v___x_177_ = v___x_174_;
goto v_reusejp_176_;
}
else
{
lean_object* v_reuseFailAlloc_178_; 
v_reuseFailAlloc_178_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_178_, 0, v_a_172_);
v___x_177_ = v_reuseFailAlloc_178_;
goto v_reusejp_176_;
}
v_reusejp_176_:
{
return v___x_177_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_getExpectedNumArgs___boxed(lean_object* v_e_180_, lean_object* v_a_181_, lean_object* v_a_182_, lean_object* v_a_183_, lean_object* v_a_184_, lean_object* v_a_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_Meta_getExpectedNumArgs(v_e_180_, v_a_181_, v_a_182_, v_a_183_, v_a_184_);
lean_dec(v_a_184_);
lean_dec_ref(v_a_183_);
lean_dec(v_a_182_);
lean_dec_ref(v_a_181_);
return v_res_186_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1(void){
_start:
{
lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_188_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__0));
v___x_189_ = l_Lean_stringToMessageData(v___x_188_);
return v___x_189_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_191_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__2));
v___x_192_ = l_Lean_stringToMessageData(v___x_191_);
return v___x_192_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5(void){
_start:
{
lean_object* v___x_194_; lean_object* v___x_195_; 
v___x_194_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__4));
v___x_195_ = l_Lean_stringToMessageData(v___x_194_);
return v___x_195_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8(void){
_start:
{
lean_object* v___x_199_; lean_object* v___x_200_; 
v___x_199_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__7));
v___x_200_ = l_Lean_MessageData_ofFormat(v___x_199_);
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(lean_object* v_config_203_, lean_object* v___y_204_, lean_object* v_targetType_205_, lean_object* v___y_206_, lean_object* v_term_x3f_207_, lean_object* v_conclusionType_x3f_208_, lean_object* v___y_209_, lean_object* v___y_210_, lean_object* v___y_211_, lean_object* v___y_212_){
_start:
{
uint8_t v_trackZetaDelta_214_; lean_object* v_zetaDeltaSet_215_; lean_object* v_lctx_216_; lean_object* v_localInstances_217_; lean_object* v_defEqCtx_x3f_218_; lean_object* v_synthPendingDepth_219_; lean_object* v_customCanUnfoldPredicate_x3f_220_; uint8_t v_univApprox_221_; uint8_t v_inTypeClassResolution_222_; uint8_t v_cacheInferType_223_; lean_object* v___x_225_; uint8_t v_isShared_226_; uint8_t v_isSharedCheck_283_; 
v_trackZetaDelta_214_ = lean_ctor_get_uint8(v___y_209_, sizeof(void*)*7);
v_zetaDeltaSet_215_ = lean_ctor_get(v___y_209_, 1);
v_lctx_216_ = lean_ctor_get(v___y_209_, 2);
v_localInstances_217_ = lean_ctor_get(v___y_209_, 3);
v_defEqCtx_x3f_218_ = lean_ctor_get(v___y_209_, 4);
v_synthPendingDepth_219_ = lean_ctor_get(v___y_209_, 5);
v_customCanUnfoldPredicate_x3f_220_ = lean_ctor_get(v___y_209_, 6);
v_univApprox_221_ = lean_ctor_get_uint8(v___y_209_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_222_ = lean_ctor_get_uint8(v___y_209_, sizeof(void*)*7 + 2);
v_cacheInferType_223_ = lean_ctor_get_uint8(v___y_209_, sizeof(void*)*7 + 3);
v_isSharedCheck_283_ = !lean_is_exclusive(v___y_209_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; 
v_unused_284_ = lean_ctor_get(v___y_209_, 0);
lean_dec(v_unused_284_);
v___x_225_ = v___y_209_;
v_isShared_226_ = v_isSharedCheck_283_;
goto v_resetjp_224_;
}
else
{
lean_inc(v_customCanUnfoldPredicate_x3f_220_);
lean_inc(v_synthPendingDepth_219_);
lean_inc(v_defEqCtx_x3f_218_);
lean_inc(v_localInstances_217_);
lean_inc(v_lctx_216_);
lean_inc(v_zetaDeltaSet_215_);
lean_dec(v___y_209_);
v___x_225_ = lean_box(0);
v_isShared_226_ = v_isSharedCheck_283_;
goto v_resetjp_224_;
}
v_resetjp_224_:
{
uint64_t v___x_227_; lean_object* v___x_228_; lean_object* v___x_230_; 
v___x_227_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v_config_203_);
v___x_228_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_228_, 0, v_config_203_);
lean_ctor_set_uint64(v___x_228_, sizeof(void*)*1, v___x_227_);
if (v_isShared_226_ == 0)
{
lean_ctor_set(v___x_225_, 0, v___x_228_);
v___x_230_ = v___x_225_;
goto v_reusejp_229_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_zetaDeltaSet_215_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_lctx_216_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_localInstances_217_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_defEqCtx_x3f_218_);
lean_ctor_set(v_reuseFailAlloc_282_, 5, v_synthPendingDepth_219_);
lean_ctor_set(v_reuseFailAlloc_282_, 6, v_customCanUnfoldPredicate_x3f_220_);
lean_ctor_set_uint8(v_reuseFailAlloc_282_, sizeof(void*)*7, v_trackZetaDelta_214_);
lean_ctor_set_uint8(v_reuseFailAlloc_282_, sizeof(void*)*7 + 1, v_univApprox_221_);
lean_ctor_set_uint8(v_reuseFailAlloc_282_, sizeof(void*)*7 + 2, v_inTypeClassResolution_222_);
lean_ctor_set_uint8(v_reuseFailAlloc_282_, sizeof(void*)*7 + 3, v_cacheInferType_223_);
v___x_230_ = v_reuseFailAlloc_282_;
goto v_reusejp_229_;
}
v_reusejp_229_:
{
lean_object* v___x_231_; 
v___x_231_ = l_Lean_Meta_addPPExplicitToExposeDiff(v___y_204_, v_targetType_205_, v___x_230_, v___y_210_, v___y_211_, v___y_212_);
if (lean_obj_tag(v___x_231_) == 0)
{
lean_object* v_a_232_; lean_object* v___x_234_; uint8_t v_isShared_235_; uint8_t v_isSharedCheck_273_; 
v_a_232_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_273_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_273_ == 0)
{
v___x_234_ = v___x_231_;
v_isShared_235_ = v_isSharedCheck_273_;
goto v_resetjp_233_;
}
else
{
lean_inc(v_a_232_);
lean_dec(v___x_231_);
v___x_234_ = lean_box(0);
v_isShared_235_ = v_isSharedCheck_273_;
goto v_resetjp_233_;
}
v_resetjp_233_:
{
lean_object* v_fst_236_; lean_object* v_snd_237_; lean_object* v___x_239_; uint8_t v_isShared_240_; uint8_t v_isSharedCheck_272_; 
v_fst_236_ = lean_ctor_get(v_a_232_, 0);
v_snd_237_ = lean_ctor_get(v_a_232_, 1);
v_isSharedCheck_272_ = !lean_is_exclusive(v_a_232_);
if (v_isSharedCheck_272_ == 0)
{
v___x_239_ = v_a_232_;
v_isShared_240_ = v_isSharedCheck_272_;
goto v_resetjp_238_;
}
else
{
lean_inc(v_snd_237_);
lean_inc(v_fst_236_);
lean_dec(v_a_232_);
v___x_239_ = lean_box(0);
v_isShared_240_ = v_isSharedCheck_272_;
goto v_resetjp_238_;
}
v_resetjp_238_:
{
lean_object* v___y_242_; lean_object* v___y_243_; lean_object* v___y_244_; lean_object* v___y_260_; 
if (lean_obj_tag(v_conclusionType_x3f_208_) == 0)
{
lean_object* v___x_270_; 
v___x_270_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__9));
v___y_260_ = v___x_270_;
goto v___jp_259_;
}
else
{
lean_object* v___x_271_; 
v___x_271_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__10));
v___y_260_ = v___x_271_;
goto v___jp_259_;
}
v___jp_241_:
{
lean_object* v___x_246_; 
if (v_isShared_240_ == 0)
{
lean_ctor_set_tag(v___x_239_, 7);
lean_ctor_set(v___x_239_, 1, v___y_244_);
lean_ctor_set(v___x_239_, 0, v___y_243_);
v___x_246_ = v___x_239_;
goto v_reusejp_245_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v___y_243_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v___y_244_);
v___x_246_ = v_reuseFailAlloc_258_;
goto v_reusejp_245_;
}
v_reusejp_245_:
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_256_; 
v___x_247_ = l_Lean_indentExpr(v_fst_236_);
v___x_248_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_248_, 0, v___x_246_);
lean_ctor_set(v___x_248_, 1, v___x_247_);
v___x_249_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__1);
v___x_250_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_250_, 0, v___x_248_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = l_Lean_indentExpr(v_snd_237_);
v___x_252_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_250_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
lean_ctor_set(v___x_253_, 1, v___y_206_);
v___x_254_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_254_, 0, v___x_253_);
lean_ctor_set(v___x_254_, 1, v___y_242_);
if (v_isShared_235_ == 0)
{
lean_ctor_set(v___x_234_, 0, v___x_254_);
v___x_256_ = v___x_234_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_257_; 
v_reuseFailAlloc_257_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_257_, 0, v___x_254_);
v___x_256_ = v_reuseFailAlloc_257_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
return v___x_256_;
}
}
}
v___jp_259_:
{
lean_object* v___x_261_; 
lean_inc(v_snd_237_);
lean_inc(v_fst_236_);
v___x_261_ = l_Lean_Meta_mkUnfoldAxiomsNote(v_fst_236_, v_snd_237_, v___x_230_, v___y_210_, v___y_211_, v___y_212_);
lean_dec_ref(v___x_230_);
if (lean_obj_tag(v___x_261_) == 0)
{
lean_object* v_a_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_a_262_ = lean_ctor_get(v___x_261_, 0);
lean_inc(v_a_262_);
lean_dec_ref_known(v___x_261_, 1);
v___x_263_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__3);
lean_inc_ref(v___y_260_);
v___x_264_ = l_Lean_stringToMessageData(v___y_260_);
v___x_265_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_265_, 0, v___x_263_);
lean_ctor_set(v___x_265_, 1, v___x_264_);
v___x_266_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__5);
v___x_267_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_267_, 0, v___x_265_);
lean_ctor_set(v___x_267_, 1, v___x_266_);
if (lean_obj_tag(v_term_x3f_207_) == 0)
{
lean_object* v___x_268_; 
v___x_268_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_242_ = v_a_262_;
v___y_243_ = v___x_267_;
v___y_244_ = v___x_268_;
goto v___jp_241_;
}
else
{
lean_object* v_val_269_; 
v_val_269_ = lean_ctor_get(v_term_x3f_207_, 0);
lean_inc(v_val_269_);
lean_dec_ref_known(v_term_x3f_207_, 1);
v___y_242_ = v_a_262_;
v___y_243_ = v___x_267_;
v___y_244_ = v_val_269_;
goto v___jp_241_;
}
}
else
{
lean_del_object(v___x_239_);
lean_dec(v_snd_237_);
lean_dec(v_fst_236_);
lean_del_object(v___x_234_);
lean_dec(v_term_x3f_207_);
lean_dec_ref(v___y_206_);
return v___x_261_;
}
}
}
}
}
else
{
lean_object* v_a_274_; lean_object* v___x_276_; uint8_t v_isShared_277_; uint8_t v_isSharedCheck_281_; 
lean_dec_ref(v___x_230_);
lean_dec(v_term_x3f_207_);
lean_dec_ref(v___y_206_);
v_a_274_ = lean_ctor_get(v___x_231_, 0);
v_isSharedCheck_281_ = !lean_is_exclusive(v___x_231_);
if (v_isSharedCheck_281_ == 0)
{
v___x_276_ = v___x_231_;
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
else
{
lean_inc(v_a_274_);
lean_dec(v___x_231_);
v___x_276_ = lean_box(0);
v_isShared_277_ = v_isSharedCheck_281_;
goto v_resetjp_275_;
}
v_resetjp_275_:
{
lean_object* v___x_279_; 
if (v_isShared_277_ == 0)
{
v___x_279_ = v___x_276_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_a_274_);
v___x_279_ = v_reuseFailAlloc_280_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
return v___x_279_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed(lean_object* v_config_285_, lean_object* v___y_286_, lean_object* v_targetType_287_, lean_object* v___y_288_, lean_object* v_term_x3f_289_, lean_object* v_conclusionType_x3f_290_, lean_object* v___y_291_, lean_object* v___y_292_, lean_object* v___y_293_, lean_object* v___y_294_, lean_object* v___y_295_){
_start:
{
lean_object* v_res_296_; 
v_res_296_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0(v_config_285_, v___y_286_, v_targetType_287_, v___y_288_, v_term_x3f_289_, v_conclusionType_x3f_290_, v___y_291_, v___y_292_, v___y_293_, v___y_294_);
lean_dec(v___y_294_);
lean_dec_ref(v___y_293_);
lean_dec(v___y_292_);
lean_dec(v_conclusionType_x3f_290_);
return v_res_296_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1(void){
_start:
{
lean_object* v___x_298_; lean_object* v___x_299_; 
v___x_298_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__0));
v___x_299_ = l_Lean_stringToMessageData(v___x_298_);
return v___x_299_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__2));
v___x_302_ = l_Lean_stringToMessageData(v___x_301_);
return v___x_302_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__4));
v___x_305_ = l_Lean_stringToMessageData(v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(lean_object* v_mvarId_309_, lean_object* v_eType_310_, lean_object* v_conclusionType_x3f_311_, lean_object* v_targetType_312_, lean_object* v_term_x3f_313_, uint8_t v_approx_314_, lean_object* v_a_315_, lean_object* v_a_316_, lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
lean_object* v___y_321_; lean_object* v___y_322_; lean_object* v___y_323_; lean_object* v___y_324_; lean_object* v___y_325_; lean_object* v___y_326_; lean_object* v___y_327_; lean_object* v___y_328_; lean_object* v___y_338_; lean_object* v___y_339_; lean_object* v___y_340_; lean_object* v___y_341_; lean_object* v___y_342_; lean_object* v___y_343_; lean_object* v___y_344_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___y_354_; lean_object* v___y_355_; lean_object* v___y_356_; lean_object* v___y_357_; lean_object* v___y_358_; lean_object* v___y_359_; lean_object* v___y_360_; lean_object* v_config_366_; lean_object* v___y_367_; lean_object* v___y_368_; lean_object* v___y_369_; lean_object* v___y_370_; 
if (v_approx_314_ == 0)
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_Meta_Context_config(v_a_315_);
v_config_366_ = v___x_373_;
v___y_367_ = v_a_315_;
v___y_368_ = v_a_316_;
v___y_369_ = v_a_317_;
v___y_370_ = v_a_318_;
goto v___jp_365_;
}
else
{
lean_object* v___x_374_; uint8_t v_constApprox_375_; uint8_t v_isDefEqStuckEx_376_; uint8_t v_unificationHints_377_; uint8_t v_proofIrrelevance_378_; uint8_t v_assignSyntheticOpaque_379_; uint8_t v_offsetCnstrs_380_; uint8_t v_transparency_381_; uint8_t v_etaStruct_382_; uint8_t v_univApprox_383_; uint8_t v_iota_384_; uint8_t v_beta_385_; uint8_t v_proj_386_; uint8_t v_zeta_387_; uint8_t v_zetaDelta_388_; uint8_t v_zetaUnused_389_; uint8_t v_zetaHave_390_; uint8_t v_canUnfoldPredicateConfig_391_; lean_object* v___x_393_; uint8_t v_isShared_394_; uint8_t v_isSharedCheck_412_; 
v___x_374_ = l_Lean_Meta_Context_config(v_a_315_);
v_constApprox_375_ = lean_ctor_get_uint8(v___x_374_, 3);
v_isDefEqStuckEx_376_ = lean_ctor_get_uint8(v___x_374_, 4);
v_unificationHints_377_ = lean_ctor_get_uint8(v___x_374_, 5);
v_proofIrrelevance_378_ = lean_ctor_get_uint8(v___x_374_, 6);
v_assignSyntheticOpaque_379_ = lean_ctor_get_uint8(v___x_374_, 7);
v_offsetCnstrs_380_ = lean_ctor_get_uint8(v___x_374_, 8);
v_transparency_381_ = lean_ctor_get_uint8(v___x_374_, 9);
v_etaStruct_382_ = lean_ctor_get_uint8(v___x_374_, 10);
v_univApprox_383_ = lean_ctor_get_uint8(v___x_374_, 11);
v_iota_384_ = lean_ctor_get_uint8(v___x_374_, 12);
v_beta_385_ = lean_ctor_get_uint8(v___x_374_, 13);
v_proj_386_ = lean_ctor_get_uint8(v___x_374_, 14);
v_zeta_387_ = lean_ctor_get_uint8(v___x_374_, 15);
v_zetaDelta_388_ = lean_ctor_get_uint8(v___x_374_, 16);
v_zetaUnused_389_ = lean_ctor_get_uint8(v___x_374_, 17);
v_zetaHave_390_ = lean_ctor_get_uint8(v___x_374_, 18);
v_canUnfoldPredicateConfig_391_ = lean_ctor_get_uint8(v___x_374_, 19);
v_isSharedCheck_412_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_412_ == 0)
{
v___x_393_ = v___x_374_;
v_isShared_394_ = v_isSharedCheck_412_;
goto v_resetjp_392_;
}
else
{
lean_dec(v___x_374_);
v___x_393_ = lean_box(0);
v_isShared_394_ = v_isSharedCheck_412_;
goto v_resetjp_392_;
}
v_resetjp_392_:
{
lean_object* v___x_396_; 
if (v_isShared_394_ == 0)
{
v___x_396_ = v___x_393_;
goto v_reusejp_395_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 3, v_constApprox_375_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 4, v_isDefEqStuckEx_376_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 5, v_unificationHints_377_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 6, v_proofIrrelevance_378_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 7, v_assignSyntheticOpaque_379_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 8, v_offsetCnstrs_380_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 9, v_transparency_381_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 10, v_etaStruct_382_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 11, v_univApprox_383_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 12, v_iota_384_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 13, v_beta_385_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 14, v_proj_386_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 15, v_zeta_387_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 16, v_zetaDelta_388_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 17, v_zetaUnused_389_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 18, v_zetaHave_390_);
lean_ctor_set_uint8(v_reuseFailAlloc_411_, 19, v_canUnfoldPredicateConfig_391_);
v___x_396_ = v_reuseFailAlloc_411_;
goto v_reusejp_395_;
}
v_reusejp_395_:
{
uint8_t v_trackZetaDelta_397_; lean_object* v_zetaDeltaSet_398_; lean_object* v_lctx_399_; lean_object* v_localInstances_400_; lean_object* v_defEqCtx_x3f_401_; lean_object* v_synthPendingDepth_402_; lean_object* v_customCanUnfoldPredicate_x3f_403_; uint8_t v_univApprox_404_; uint8_t v_inTypeClassResolution_405_; uint8_t v_cacheInferType_406_; uint64_t v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; 
lean_ctor_set_uint8(v___x_396_, 0, v_approx_314_);
lean_ctor_set_uint8(v___x_396_, 1, v_approx_314_);
lean_ctor_set_uint8(v___x_396_, 2, v_approx_314_);
v_trackZetaDelta_397_ = lean_ctor_get_uint8(v_a_315_, sizeof(void*)*7);
v_zetaDeltaSet_398_ = lean_ctor_get(v_a_315_, 1);
v_lctx_399_ = lean_ctor_get(v_a_315_, 2);
v_localInstances_400_ = lean_ctor_get(v_a_315_, 3);
v_defEqCtx_x3f_401_ = lean_ctor_get(v_a_315_, 4);
v_synthPendingDepth_402_ = lean_ctor_get(v_a_315_, 5);
v_customCanUnfoldPredicate_x3f_403_ = lean_ctor_get(v_a_315_, 6);
v_univApprox_404_ = lean_ctor_get_uint8(v_a_315_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_405_ = lean_ctor_get_uint8(v_a_315_, sizeof(void*)*7 + 2);
v_cacheInferType_406_ = lean_ctor_get_uint8(v_a_315_, sizeof(void*)*7 + 3);
v___x_407_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_396_);
v___x_408_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_408_, 0, v___x_396_);
lean_ctor_set_uint64(v___x_408_, sizeof(void*)*1, v___x_407_);
lean_inc(v_customCanUnfoldPredicate_x3f_403_);
lean_inc(v_synthPendingDepth_402_);
lean_inc(v_defEqCtx_x3f_401_);
lean_inc_ref(v_localInstances_400_);
lean_inc_ref(v_lctx_399_);
lean_inc(v_zetaDeltaSet_398_);
v___x_409_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v_zetaDeltaSet_398_);
lean_ctor_set(v___x_409_, 2, v_lctx_399_);
lean_ctor_set(v___x_409_, 3, v_localInstances_400_);
lean_ctor_set(v___x_409_, 4, v_defEqCtx_x3f_401_);
lean_ctor_set(v___x_409_, 5, v_synthPendingDepth_402_);
lean_ctor_set(v___x_409_, 6, v_customCanUnfoldPredicate_x3f_403_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*7, v_trackZetaDelta_397_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*7 + 1, v_univApprox_404_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*7 + 2, v_inTypeClassResolution_405_);
lean_ctor_set_uint8(v___x_409_, sizeof(void*)*7 + 3, v_cacheInferType_406_);
v___x_410_ = l_Lean_Meta_Context_config(v___x_409_);
lean_dec_ref_known(v___x_409_, 7);
v_config_366_ = v___x_410_;
v___y_367_ = v_a_315_;
v___y_368_ = v_a_316_;
v___y_369_ = v_a_317_;
v___y_370_ = v_a_318_;
goto v___jp_365_;
}
}
}
v___jp_320_:
{
lean_object* v___f_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
lean_inc_ref(v_targetType_312_);
v___f_329_ = lean_alloc_closure((void*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___boxed), 11, 6);
lean_closure_set(v___f_329_, 0, v___y_322_);
lean_closure_set(v___f_329_, 1, v___y_321_);
lean_closure_set(v___f_329_, 2, v_targetType_312_);
lean_closure_set(v___f_329_, 3, v___y_328_);
lean_closure_set(v___f_329_, 4, v_term_x3f_313_);
lean_closure_set(v___f_329_, 5, v_conclusionType_x3f_311_);
v___x_330_ = lean_unsigned_to_nat(2u);
v___x_331_ = lean_mk_empty_array_with_capacity(v___x_330_);
v___x_332_ = lean_array_push(v___x_331_, v_eType_310_);
v___x_333_ = lean_array_push(v___x_332_, v_targetType_312_);
v___x_334_ = l_Lean_MessageData_ofLazyM(v___f_329_, v___x_333_);
v___x_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_335_, 0, v___x_334_);
lean_inc(v___y_326_);
v___x_336_ = l_Lean_Meta_throwTacticEx___redArg(v___y_326_, v_mvarId_309_, v___x_335_, v___y_327_, v___y_325_, v___y_324_, v___y_323_);
return v___x_336_;
}
v___jp_337_:
{
lean_object* v___x_347_; lean_object* v___x_348_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
lean_inc_ref(v___y_342_);
v___x_347_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_347_, 0, v___y_342_);
lean_ctor_set(v___x_347_, 1, v___y_346_);
v___x_348_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__1);
v___x_349_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_349_, 0, v___x_347_);
lean_ctor_set(v___x_349_, 1, v___x_348_);
lean_inc_ref(v_eType_310_);
v___x_350_ = l_Lean_indentExpr(v_eType_310_);
v___x_351_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_351_, 0, v___x_349_);
lean_ctor_set(v___x_351_, 1, v___x_350_);
v___x_352_ = l_Lean_MessageData_note(v___x_351_);
v___y_321_ = v___y_338_;
v___y_322_ = v___y_339_;
v___y_323_ = v___y_340_;
v___y_324_ = v___y_341_;
v___y_325_ = v___y_343_;
v___y_326_ = v___y_344_;
v___y_327_ = v___y_345_;
v___y_328_ = v___x_352_;
goto v___jp_320_;
}
v___jp_353_:
{
if (lean_obj_tag(v_conclusionType_x3f_311_) == 0)
{
lean_object* v___x_361_; 
v___x_361_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__3);
v___y_321_ = v___y_360_;
v___y_322_ = v___y_356_;
v___y_323_ = v___y_354_;
v___y_324_ = v___y_355_;
v___y_325_ = v___y_357_;
v___y_326_ = v___y_359_;
v___y_327_ = v___y_358_;
v___y_328_ = v___x_361_;
goto v___jp_320_;
}
else
{
lean_object* v___x_362_; 
v___x_362_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__5);
if (lean_obj_tag(v_term_x3f_313_) == 0)
{
lean_object* v___x_363_; 
v___x_363_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8, &l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___lam__0___closed__8);
v___y_338_ = v___y_360_;
v___y_339_ = v___y_356_;
v___y_340_ = v___y_354_;
v___y_341_ = v___y_355_;
v___y_342_ = v___x_362_;
v___y_343_ = v___y_357_;
v___y_344_ = v___y_359_;
v___y_345_ = v___y_358_;
v___y_346_ = v___x_363_;
goto v___jp_337_;
}
else
{
lean_object* v_val_364_; 
v_val_364_ = lean_ctor_get(v_term_x3f_313_, 0);
lean_inc(v_val_364_);
v___y_338_ = v___y_360_;
v___y_339_ = v___y_356_;
v___y_340_ = v___y_354_;
v___y_341_ = v___y_355_;
v___y_342_ = v___x_362_;
v___y_343_ = v___y_357_;
v___y_344_ = v___y_359_;
v___y_345_ = v___y_358_;
v___y_346_ = v_val_364_;
goto v___jp_337_;
}
}
}
v___jp_365_:
{
lean_object* v___x_371_; 
v___x_371_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7));
if (lean_obj_tag(v_conclusionType_x3f_311_) == 0)
{
lean_inc_ref(v_eType_310_);
v___y_354_ = v___y_370_;
v___y_355_ = v___y_369_;
v___y_356_ = v_config_366_;
v___y_357_ = v___y_368_;
v___y_358_ = v___y_367_;
v___y_359_ = v___x_371_;
v___y_360_ = v_eType_310_;
goto v___jp_353_;
}
else
{
lean_object* v_val_372_; 
v_val_372_ = lean_ctor_get(v_conclusionType_x3f_311_, 0);
lean_inc(v_val_372_);
v___y_354_ = v___y_370_;
v___y_355_ = v___y_369_;
v___y_356_ = v_config_366_;
v___y_357_ = v___y_368_;
v___y_358_ = v___y_367_;
v___y_359_ = v___x_371_;
v___y_360_ = v_val_372_;
goto v___jp_353_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___boxed(lean_object* v_mvarId_413_, lean_object* v_eType_414_, lean_object* v_conclusionType_x3f_415_, lean_object* v_targetType_416_, lean_object* v_term_x3f_417_, lean_object* v_approx_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_, lean_object* v_a_423_){
_start:
{
uint8_t v_approx_boxed_424_; lean_object* v_res_425_; 
v_approx_boxed_424_ = lean_unbox(v_approx_418_);
v_res_425_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_413_, v_eType_414_, v_conclusionType_x3f_415_, v_targetType_416_, v_term_x3f_417_, v_approx_boxed_424_, v_a_419_, v_a_420_, v_a_421_, v_a_422_);
lean_dec(v_a_422_);
lean_dec_ref(v_a_421_);
lean_dec(v_a_420_);
lean_dec_ref(v_a_419_);
return v_res_425_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(lean_object* v_00_u03b1_426_, lean_object* v_mvarId_427_, lean_object* v_eType_428_, lean_object* v_conclusionType_x3f_429_, lean_object* v_targetType_430_, lean_object* v_term_x3f_431_, uint8_t v_approx_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
lean_object* v___x_438_; 
v___x_438_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_427_, v_eType_428_, v_conclusionType_x3f_429_, v_targetType_430_, v_term_x3f_431_, v_approx_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_);
return v___x_438_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___boxed(lean_object* v_00_u03b1_439_, lean_object* v_mvarId_440_, lean_object* v_eType_441_, lean_object* v_conclusionType_x3f_442_, lean_object* v_targetType_443_, lean_object* v_term_x3f_444_, lean_object* v_approx_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_, lean_object* v_a_450_){
_start:
{
uint8_t v_approx_boxed_451_; lean_object* v_res_452_; 
v_approx_boxed_451_ = lean_unbox(v_approx_445_);
v_res_452_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError(v_00_u03b1_439_, v_mvarId_440_, v_eType_441_, v_conclusionType_x3f_442_, v_targetType_443_, v_term_x3f_444_, v_approx_boxed_451_, v_a_446_, v_a_447_, v_a_448_, v_a_449_);
lean_dec(v_a_449_);
lean_dec_ref(v_a_448_);
lean_dec(v_a_447_);
lean_dec_ref(v_a_446_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(lean_object* v_a_453_, lean_object* v_snd_454_, lean_object* v_fst_455_, lean_object* v_____r_456_, uint8_t v_progressAfterEx_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_463_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_463_, 0, v_a_453_);
v___x_464_ = lean_box(v_progressAfterEx_457_);
v___x_465_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_snd_454_);
v___x_466_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_466_, 0, v_fst_455_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_467_, 0, v___x_463_);
lean_ctor_set(v___x_467_, 1, v___x_466_);
v___x_468_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
return v___x_468_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0___boxed(lean_object* v_a_469_, lean_object* v_snd_470_, lean_object* v_fst_471_, lean_object* v_____r_472_, lean_object* v_progressAfterEx_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
uint8_t v_progressAfterEx_boxed_479_; lean_object* v_res_480_; 
v_progressAfterEx_boxed_479_ = lean_unbox(v_progressAfterEx_473_);
v_res_480_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_469_, v_snd_470_, v_fst_471_, v_____r_472_, v_progressAfterEx_boxed_479_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
return v_res_480_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2(void){
_start:
{
lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_484_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__1));
v___x_485_ = l_Lean_MessageData_ofFormat(v___x_484_);
return v___x_485_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; 
v___x_486_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__2);
v___x_487_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_487_, 0, v___x_486_);
return v___x_487_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(uint8_t v_allowSynthFailures_488_, lean_object* v_tacticName_489_, lean_object* v_mvarId_490_, lean_object* v_as_491_, size_t v_sz_492_, size_t v_i_493_, lean_object* v_b_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_, lean_object* v___y_498_){
_start:
{
lean_object* v_a_501_; lean_object* v_fst_506_; lean_object* v_fst_507_; lean_object* v_snd_508_; lean_object* v___y_512_; lean_object* v___y_513_; lean_object* v___y_514_; uint8_t v___x_517_; 
v___x_517_ = lean_usize_dec_lt(v_i_493_, v_sz_492_);
if (v___x_517_ == 0)
{
lean_object* v___x_518_; 
lean_dec(v_mvarId_490_);
lean_dec(v_tacticName_489_);
v___x_518_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_518_, 0, v_b_494_);
return v___x_518_;
}
else
{
lean_object* v_snd_519_; lean_object* v_fst_520_; lean_object* v_fst_521_; lean_object* v_snd_522_; lean_object* v_a_523_; lean_object* v_a_525_; lean_object* v___y_533_; lean_object* v___x_582_; 
v_snd_519_ = lean_ctor_get(v_b_494_, 1);
lean_inc(v_snd_519_);
v_fst_520_ = lean_ctor_get(v_b_494_, 0);
lean_inc(v_fst_520_);
lean_dec_ref(v_b_494_);
v_fst_521_ = lean_ctor_get(v_snd_519_, 0);
lean_inc(v_fst_521_);
v_snd_522_ = lean_ctor_get(v_snd_519_, 1);
lean_inc(v_snd_522_);
lean_dec(v_snd_519_);
v_a_523_ = lean_array_uget_borrowed(v_as_491_, v_i_493_);
lean_inc(v___y_498_);
lean_inc_ref(v___y_497_);
lean_inc(v___y_496_);
lean_inc_ref(v___y_495_);
lean_inc(v_a_523_);
v___x_582_ = lean_infer_type(v_a_523_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_582_) == 0)
{
lean_object* v_a_583_; lean_object* v___x_584_; lean_object* v___x_585_; 
v_a_583_ = lean_ctor_get(v___x_582_, 0);
lean_inc(v_a_583_);
lean_dec_ref_known(v___x_582_, 1);
v___x_584_ = lean_box(0);
v___x_585_ = l_Lean_Meta_synthInstance(v_a_583_, v___x_584_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_587_; lean_object* v___x_588_; uint8_t v___x_589_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = lean_array_get_size(v_snd_522_);
v___x_588_ = lean_unsigned_to_nat(0u);
v___x_589_ = lean_nat_dec_eq(v___x_587_, v___x_588_);
if (v___x_589_ == 0)
{
lean_object* v___x_590_; lean_object* v___x_591_; 
v___x_590_ = lean_box(0);
lean_inc(v_snd_522_);
v___x_591_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_586_, v_snd_522_, v_fst_520_, v___x_590_, v___x_517_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
v___y_533_ = v___x_591_;
goto v___jp_532_;
}
else
{
lean_object* v___x_592_; uint8_t v___x_593_; lean_object* v___x_594_; 
v___x_592_ = lean_box(0);
v___x_593_ = lean_unbox(v_fst_521_);
lean_inc(v_snd_522_);
v___x_594_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___lam__0(v_a_586_, v_snd_522_, v_fst_520_, v___x_592_, v___x_593_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
v___y_533_ = v___x_594_;
goto v___jp_532_;
}
}
else
{
lean_object* v_a_595_; 
lean_dec(v_fst_520_);
v_a_595_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_595_);
lean_dec_ref_known(v___x_585_, 1);
v_a_525_ = v_a_595_;
goto v___jp_524_;
}
}
else
{
lean_object* v_a_596_; lean_object* v___x_598_; uint8_t v_isShared_599_; uint8_t v_isSharedCheck_603_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
lean_dec(v_fst_520_);
lean_dec(v_mvarId_490_);
lean_dec(v_tacticName_489_);
v_a_596_ = lean_ctor_get(v___x_582_, 0);
v_isSharedCheck_603_ = !lean_is_exclusive(v___x_582_);
if (v_isSharedCheck_603_ == 0)
{
v___x_598_ = v___x_582_;
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
else
{
lean_inc(v_a_596_);
lean_dec(v___x_582_);
v___x_598_ = lean_box(0);
v_isShared_599_ = v_isSharedCheck_603_;
goto v_resetjp_597_;
}
v_resetjp_597_:
{
lean_object* v___x_601_; 
if (v_isShared_599_ == 0)
{
v___x_601_ = v___x_598_;
goto v_reusejp_600_;
}
else
{
lean_object* v_reuseFailAlloc_602_; 
v_reuseFailAlloc_602_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_602_, 0, v_a_596_);
v___x_601_ = v_reuseFailAlloc_602_;
goto v_reusejp_600_;
}
v_reusejp_600_:
{
return v___x_601_;
}
}
}
v___jp_524_:
{
uint8_t v___x_526_; 
v___x_526_ = l_Lean_Exception_isInterrupt(v_a_525_);
if (v___x_526_ == 0)
{
uint8_t v___x_527_; 
lean_inc_ref(v_a_525_);
v___x_527_ = l_Lean_Exception_isRuntime(v_a_525_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v___x_529_; 
v___x_528_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_528_, 0, v_a_525_);
lean_inc(v_a_523_);
v___x_529_ = lean_array_push(v_snd_522_, v_a_523_);
v_fst_506_ = v___x_528_;
v_fst_507_ = v_fst_521_;
v_snd_508_ = v___x_529_;
goto v___jp_505_;
}
else
{
lean_object* v___x_530_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
lean_dec(v_mvarId_490_);
lean_dec(v_tacticName_489_);
v___x_530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_530_, 0, v_a_525_);
return v___x_530_;
}
}
else
{
lean_object* v___x_531_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
lean_dec(v_mvarId_490_);
lean_dec(v_tacticName_489_);
v___x_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_531_, 0, v_a_525_);
return v___x_531_;
}
}
v___jp_532_:
{
if (lean_obj_tag(v___y_533_) == 0)
{
lean_object* v_a_534_; lean_object* v_snd_535_; lean_object* v_snd_536_; lean_object* v_fst_537_; 
lean_dec(v_snd_522_);
lean_dec(v_fst_521_);
v_a_534_ = lean_ctor_get(v___y_533_, 0);
lean_inc(v_a_534_);
lean_dec_ref_known(v___y_533_, 1);
v_snd_535_ = lean_ctor_get(v_a_534_, 1);
lean_inc(v_snd_535_);
v_snd_536_ = lean_ctor_get(v_snd_535_, 1);
lean_inc(v_snd_536_);
v_fst_537_ = lean_ctor_get(v_a_534_, 0);
lean_inc(v_fst_537_);
lean_dec(v_a_534_);
if (lean_obj_tag(v_fst_537_) == 1)
{
lean_object* v_fst_538_; lean_object* v___x_540_; uint8_t v_isShared_541_; uint8_t v_isSharedCheck_576_; 
v_fst_538_ = lean_ctor_get(v_snd_535_, 0);
v_isSharedCheck_576_ = !lean_is_exclusive(v_snd_535_);
if (v_isSharedCheck_576_ == 0)
{
lean_object* v_unused_577_; 
v_unused_577_ = lean_ctor_get(v_snd_535_, 1);
lean_dec(v_unused_577_);
v___x_540_ = v_snd_535_;
v_isShared_541_ = v_isSharedCheck_576_;
goto v_resetjp_539_;
}
else
{
lean_inc(v_fst_538_);
lean_dec(v_snd_535_);
v___x_540_ = lean_box(0);
v_isShared_541_ = v_isSharedCheck_576_;
goto v_resetjp_539_;
}
v_resetjp_539_:
{
lean_object* v_fst_542_; lean_object* v_snd_543_; lean_object* v___x_545_; uint8_t v_isShared_546_; uint8_t v_isSharedCheck_575_; 
v_fst_542_ = lean_ctor_get(v_snd_536_, 0);
v_snd_543_ = lean_ctor_get(v_snd_536_, 1);
v_isSharedCheck_575_ = !lean_is_exclusive(v_snd_536_);
if (v_isSharedCheck_575_ == 0)
{
v___x_545_ = v_snd_536_;
v_isShared_546_ = v_isSharedCheck_575_;
goto v_resetjp_544_;
}
else
{
lean_inc(v_snd_543_);
lean_inc(v_fst_542_);
lean_dec(v_snd_536_);
v___x_545_ = lean_box(0);
v_isShared_546_ = v_isSharedCheck_575_;
goto v_resetjp_544_;
}
v_resetjp_544_:
{
lean_object* v_val_547_; lean_object* v___x_548_; 
v_val_547_ = lean_ctor_get(v_fst_537_, 0);
lean_inc(v_val_547_);
lean_dec_ref_known(v_fst_537_, 1);
lean_inc(v_a_523_);
v___x_548_ = l_Lean_Meta_isExprDefEq(v_a_523_, v_val_547_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_548_) == 0)
{
lean_object* v_a_549_; uint8_t v___x_550_; 
v_a_549_ = lean_ctor_get(v___x_548_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_548_, 1);
v___x_550_ = lean_unbox(v_a_549_);
lean_dec(v_a_549_);
if (v___x_550_ == 0)
{
if (v_allowSynthFailures_488_ == 0)
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___closed__3);
lean_inc(v_mvarId_490_);
lean_inc(v_tacticName_489_);
v___x_552_ = l_Lean_Meta_throwTacticEx___redArg(v_tacticName_489_, v_mvarId_490_, v___x_551_, v___y_495_, v___y_496_, v___y_497_, v___y_498_);
if (lean_obj_tag(v___x_552_) == 0)
{
lean_object* v___x_554_; 
lean_dec_ref_known(v___x_552_, 1);
if (v_isShared_546_ == 0)
{
v___x_554_ = v___x_545_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_558_; 
v_reuseFailAlloc_558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_558_, 0, v_fst_542_);
lean_ctor_set(v_reuseFailAlloc_558_, 1, v_snd_543_);
v___x_554_ = v_reuseFailAlloc_558_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
lean_object* v___x_556_; 
if (v_isShared_541_ == 0)
{
lean_ctor_set(v___x_540_, 1, v___x_554_);
v___x_556_ = v___x_540_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_fst_538_);
lean_ctor_set(v_reuseFailAlloc_557_, 1, v___x_554_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
v_a_501_ = v___x_556_;
goto v___jp_500_;
}
}
}
else
{
lean_object* v_a_559_; lean_object* v___x_561_; uint8_t v_isShared_562_; uint8_t v_isSharedCheck_566_; 
lean_del_object(v___x_545_);
lean_dec(v_snd_543_);
lean_dec(v_fst_542_);
lean_del_object(v___x_540_);
lean_dec(v_fst_538_);
lean_dec(v_mvarId_490_);
lean_dec(v_tacticName_489_);
v_a_559_ = lean_ctor_get(v___x_552_, 0);
v_isSharedCheck_566_ = !lean_is_exclusive(v___x_552_);
if (v_isSharedCheck_566_ == 0)
{
v___x_561_ = v___x_552_;
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
else
{
lean_inc(v_a_559_);
lean_dec(v___x_552_);
v___x_561_ = lean_box(0);
v_isShared_562_ = v_isSharedCheck_566_;
goto v_resetjp_560_;
}
v_resetjp_560_:
{
lean_object* v___x_564_; 
if (v_isShared_562_ == 0)
{
v___x_564_ = v___x_561_;
goto v_reusejp_563_;
}
else
{
lean_object* v_reuseFailAlloc_565_; 
v_reuseFailAlloc_565_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_565_, 0, v_a_559_);
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
else
{
lean_del_object(v___x_545_);
lean_del_object(v___x_540_);
v___y_512_ = v_snd_543_;
v___y_513_ = v_fst_538_;
v___y_514_ = v_fst_542_;
goto v___jp_511_;
}
}
else
{
lean_del_object(v___x_545_);
lean_del_object(v___x_540_);
v___y_512_ = v_snd_543_;
v___y_513_ = v_fst_538_;
v___y_514_ = v_fst_542_;
goto v___jp_511_;
}
}
else
{
lean_object* v_a_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_574_; 
lean_del_object(v___x_545_);
lean_dec(v_snd_543_);
lean_dec(v_fst_542_);
lean_del_object(v___x_540_);
lean_dec(v_fst_538_);
lean_dec(v_mvarId_490_);
lean_dec(v_tacticName_489_);
v_a_567_ = lean_ctor_get(v___x_548_, 0);
v_isSharedCheck_574_ = !lean_is_exclusive(v___x_548_);
if (v_isSharedCheck_574_ == 0)
{
v___x_569_ = v___x_548_;
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_a_567_);
lean_dec(v___x_548_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_574_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v___x_572_; 
if (v_isShared_570_ == 0)
{
v___x_572_ = v___x_569_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_a_567_);
v___x_572_ = v_reuseFailAlloc_573_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
return v___x_572_;
}
}
}
}
}
}
else
{
lean_object* v_fst_578_; lean_object* v_fst_579_; lean_object* v_snd_580_; 
lean_dec(v_fst_537_);
v_fst_578_ = lean_ctor_get(v_snd_535_, 0);
lean_inc(v_fst_578_);
lean_dec(v_snd_535_);
v_fst_579_ = lean_ctor_get(v_snd_536_, 0);
lean_inc(v_fst_579_);
v_snd_580_ = lean_ctor_get(v_snd_536_, 1);
lean_inc(v_snd_580_);
lean_dec(v_snd_536_);
v_fst_506_ = v_fst_578_;
v_fst_507_ = v_fst_579_;
v_snd_508_ = v_snd_580_;
goto v___jp_505_;
}
}
else
{
lean_object* v_a_581_; 
v_a_581_ = lean_ctor_get(v___y_533_, 0);
lean_inc(v_a_581_);
lean_dec_ref_known(v___y_533_, 1);
v_a_525_ = v_a_581_;
goto v___jp_524_;
}
}
}
v___jp_500_:
{
size_t v___x_502_; size_t v___x_503_; 
v___x_502_ = ((size_t)1ULL);
v___x_503_ = lean_usize_add(v_i_493_, v___x_502_);
v_i_493_ = v___x_503_;
v_b_494_ = v_a_501_;
goto _start;
}
v___jp_505_:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_509_, 0, v_fst_507_);
lean_ctor_set(v___x_509_, 1, v_snd_508_);
v___x_510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_510_, 0, v_fst_506_);
lean_ctor_set(v___x_510_, 1, v___x_509_);
v_a_501_ = v___x_510_;
goto v___jp_500_;
}
v___jp_511_:
{
lean_object* v___x_515_; lean_object* v___x_516_; 
v___x_515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_515_, 0, v___y_514_);
lean_ctor_set(v___x_515_, 1, v___y_512_);
v___x_516_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_516_, 0, v___y_513_);
lean_ctor_set(v___x_516_, 1, v___x_515_);
v_a_501_ = v___x_516_;
goto v___jp_500_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0___boxed(lean_object* v_allowSynthFailures_604_, lean_object* v_tacticName_605_, lean_object* v_mvarId_606_, lean_object* v_as_607_, lean_object* v_sz_608_, lean_object* v_i_609_, lean_object* v_b_610_, lean_object* v___y_611_, lean_object* v___y_612_, lean_object* v___y_613_, lean_object* v___y_614_, lean_object* v___y_615_){
_start:
{
uint8_t v_allowSynthFailures_boxed_616_; size_t v_sz_boxed_617_; size_t v_i_boxed_618_; lean_object* v_res_619_; 
v_allowSynthFailures_boxed_616_ = lean_unbox(v_allowSynthFailures_604_);
v_sz_boxed_617_ = lean_unbox_usize(v_sz_608_);
lean_dec(v_sz_608_);
v_i_boxed_618_ = lean_unbox_usize(v_i_609_);
lean_dec(v_i_609_);
v_res_619_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_boxed_616_, v_tacticName_605_, v_mvarId_606_, v_as_607_, v_sz_boxed_617_, v_i_boxed_618_, v_b_610_, v___y_611_, v___y_612_, v___y_613_, v___y_614_);
lean_dec(v___y_614_);
lean_dec_ref(v___y_613_);
lean_dec(v___y_612_);
lean_dec_ref(v___y_611_);
lean_dec_ref(v_as_607_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(lean_object* v_tacticName_629_, lean_object* v_mvarId_630_, uint8_t v_allowSynthFailures_631_, lean_object* v_mvars_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_postponed_638_; lean_object* v___x_639_; size_t v_sz_640_; size_t v___x_641_; lean_object* v___x_642_; 
v_postponed_638_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_639_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__2));
v_sz_640_ = lean_array_size(v_mvars_632_);
v___x_641_ = ((size_t)0ULL);
v___x_642_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step_spec__0(v_allowSynthFailures_631_, v_tacticName_629_, v_mvarId_630_, v_mvars_632_, v_sz_640_, v___x_641_, v___x_639_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_645_; uint8_t v_isShared_646_; uint8_t v_isSharedCheck_665_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_665_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_665_ == 0)
{
v___x_645_ = v___x_642_;
v_isShared_646_ = v_isSharedCheck_665_;
goto v_resetjp_644_;
}
else
{
lean_inc(v_a_643_);
lean_dec(v___x_642_);
v___x_645_ = lean_box(0);
v_isShared_646_ = v_isSharedCheck_665_;
goto v_resetjp_644_;
}
v_resetjp_644_:
{
lean_object* v_fst_647_; 
v_fst_647_ = lean_ctor_get(v_a_643_, 0);
lean_inc(v_fst_647_);
if (lean_obj_tag(v_fst_647_) == 1)
{
lean_object* v_snd_648_; lean_object* v_fst_649_; uint8_t v___x_650_; 
v_snd_648_ = lean_ctor_get(v_a_643_, 1);
lean_inc(v_snd_648_);
lean_dec(v_a_643_);
v_fst_649_ = lean_ctor_get(v_snd_648_, 0);
v___x_650_ = lean_unbox(v_fst_649_);
if (v___x_650_ == 0)
{
lean_dec(v_snd_648_);
if (v_allowSynthFailures_631_ == 0)
{
lean_object* v_val_651_; lean_object* v___x_653_; 
v_val_651_ = lean_ctor_get(v_fst_647_, 0);
lean_inc(v_val_651_);
lean_dec_ref_known(v_fst_647_, 1);
if (v_isShared_646_ == 0)
{
lean_ctor_set_tag(v___x_645_, 1);
lean_ctor_set(v___x_645_, 0, v_val_651_);
v___x_653_ = v___x_645_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_val_651_);
v___x_653_ = v_reuseFailAlloc_654_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
return v___x_653_;
}
}
else
{
lean_object* v___x_656_; 
lean_dec_ref_known(v_fst_647_, 1);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v_postponed_638_);
v___x_656_ = v___x_645_;
goto v_reusejp_655_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v_postponed_638_);
v___x_656_ = v_reuseFailAlloc_657_;
goto v_reusejp_655_;
}
v_reusejp_655_:
{
return v___x_656_;
}
}
}
else
{
lean_object* v_snd_658_; lean_object* v___x_660_; 
lean_dec_ref_known(v_fst_647_, 1);
v_snd_658_ = lean_ctor_get(v_snd_648_, 1);
lean_inc(v_snd_658_);
lean_dec(v_snd_648_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v_snd_658_);
v___x_660_ = v___x_645_;
goto v_reusejp_659_;
}
else
{
lean_object* v_reuseFailAlloc_661_; 
v_reuseFailAlloc_661_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_661_, 0, v_snd_658_);
v___x_660_ = v_reuseFailAlloc_661_;
goto v_reusejp_659_;
}
v_reusejp_659_:
{
return v___x_660_;
}
}
}
else
{
lean_object* v___x_663_; 
lean_dec(v_fst_647_);
lean_dec(v_a_643_);
if (v_isShared_646_ == 0)
{
lean_ctor_set(v___x_645_, 0, v_postponed_638_);
v___x_663_ = v___x_645_;
goto v_reusejp_662_;
}
else
{
lean_object* v_reuseFailAlloc_664_; 
v_reuseFailAlloc_664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_664_, 0, v_postponed_638_);
v___x_663_ = v_reuseFailAlloc_664_;
goto v_reusejp_662_;
}
v_reusejp_662_:
{
return v___x_663_;
}
}
}
}
else
{
lean_object* v_a_666_; lean_object* v___x_668_; uint8_t v_isShared_669_; uint8_t v_isSharedCheck_673_; 
v_a_666_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_673_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_673_ == 0)
{
v___x_668_ = v___x_642_;
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
else
{
lean_inc(v_a_666_);
lean_dec(v___x_642_);
v___x_668_ = lean_box(0);
v_isShared_669_ = v_isSharedCheck_673_;
goto v_resetjp_667_;
}
v_resetjp_667_:
{
lean_object* v___x_671_; 
if (v_isShared_669_ == 0)
{
v___x_671_ = v___x_668_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_672_; 
v_reuseFailAlloc_672_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_672_, 0, v_a_666_);
v___x_671_ = v_reuseFailAlloc_672_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
return v___x_671_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___boxed(lean_object* v_tacticName_674_, lean_object* v_mvarId_675_, lean_object* v_allowSynthFailures_676_, lean_object* v_mvars_677_, lean_object* v_a_678_, lean_object* v_a_679_, lean_object* v_a_680_, lean_object* v_a_681_, lean_object* v_a_682_){
_start:
{
uint8_t v_allowSynthFailures_boxed_683_; lean_object* v_res_684_; 
v_allowSynthFailures_boxed_683_ = lean_unbox(v_allowSynthFailures_676_);
v_res_684_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_674_, v_mvarId_675_, v_allowSynthFailures_boxed_683_, v_mvars_677_, v_a_678_, v_a_679_, v_a_680_, v_a_681_);
lean_dec(v_a_681_);
lean_dec_ref(v_a_680_);
lean_dec(v_a_679_);
lean_dec_ref(v_a_678_);
lean_dec_ref(v_mvars_677_);
return v_res_684_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(lean_object* v_keys_685_, lean_object* v_i_686_, lean_object* v_k_687_){
_start:
{
lean_object* v___x_688_; uint8_t v___x_689_; 
v___x_688_ = lean_array_get_size(v_keys_685_);
v___x_689_ = lean_nat_dec_lt(v_i_686_, v___x_688_);
if (v___x_689_ == 0)
{
lean_dec(v_i_686_);
return v___x_689_;
}
else
{
lean_object* v_k_x27_690_; uint8_t v___x_691_; 
v_k_x27_690_ = lean_array_fget_borrowed(v_keys_685_, v_i_686_);
v___x_691_ = l_Lean_instBEqMVarId_beq(v_k_687_, v_k_x27_690_);
if (v___x_691_ == 0)
{
lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_692_ = lean_unsigned_to_nat(1u);
v___x_693_ = lean_nat_add(v_i_686_, v___x_692_);
lean_dec(v_i_686_);
v_i_686_ = v___x_693_;
goto _start;
}
else
{
lean_dec(v_i_686_);
return v___x_689_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg___boxed(lean_object* v_keys_695_, lean_object* v_i_696_, lean_object* v_k_697_){
_start:
{
uint8_t v_res_698_; lean_object* v_r_699_; 
v_res_698_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_695_, v_i_696_, v_k_697_);
lean_dec(v_k_697_);
lean_dec_ref(v_keys_695_);
v_r_699_ = lean_box(v_res_698_);
return v_r_699_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(lean_object* v_x_700_, size_t v_x_701_, lean_object* v_x_702_){
_start:
{
if (lean_obj_tag(v_x_700_) == 0)
{
lean_object* v_es_703_; lean_object* v___x_704_; size_t v___x_705_; size_t v___x_706_; lean_object* v_j_707_; lean_object* v___x_708_; 
v_es_703_ = lean_ctor_get(v_x_700_, 0);
v___x_704_ = lean_box(2);
v___x_705_ = ((size_t)31ULL);
v___x_706_ = lean_usize_land(v_x_701_, v___x_705_);
v_j_707_ = lean_usize_to_nat(v___x_706_);
v___x_708_ = lean_array_get_borrowed(v___x_704_, v_es_703_, v_j_707_);
lean_dec(v_j_707_);
switch(lean_obj_tag(v___x_708_))
{
case 0:
{
lean_object* v_key_709_; uint8_t v___x_710_; 
v_key_709_ = lean_ctor_get(v___x_708_, 0);
v___x_710_ = l_Lean_instBEqMVarId_beq(v_x_702_, v_key_709_);
return v___x_710_;
}
case 1:
{
lean_object* v_node_711_; size_t v___x_712_; size_t v___x_713_; 
v_node_711_ = lean_ctor_get(v___x_708_, 0);
v___x_712_ = ((size_t)5ULL);
v___x_713_ = lean_usize_shift_right(v_x_701_, v___x_712_);
v_x_700_ = v_node_711_;
v_x_701_ = v___x_713_;
goto _start;
}
default: 
{
uint8_t v___x_715_; 
v___x_715_ = 0;
return v___x_715_;
}
}
}
else
{
lean_object* v_ks_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
v_ks_716_ = lean_ctor_get(v_x_700_, 0);
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_ks_716_, v___x_717_, v_x_702_);
return v___x_718_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_x_719_, lean_object* v_x_720_, lean_object* v_x_721_){
_start:
{
size_t v_x_2998__boxed_722_; uint8_t v_res_723_; lean_object* v_r_724_; 
v_x_2998__boxed_722_ = lean_unbox_usize(v_x_720_);
lean_dec(v_x_720_);
v_res_723_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_719_, v_x_2998__boxed_722_, v_x_721_);
lean_dec(v_x_721_);
lean_dec_ref(v_x_719_);
v_r_724_ = lean_box(v_res_723_);
return v_r_724_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(lean_object* v_x_725_, lean_object* v_x_726_){
_start:
{
uint64_t v___x_727_; size_t v___x_728_; uint8_t v___x_729_; 
v___x_727_ = l_Lean_instHashableMVarId_hash(v_x_726_);
v___x_728_ = lean_uint64_to_usize(v___x_727_);
v___x_729_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_725_, v___x_728_, v_x_726_);
return v___x_729_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg___boxed(lean_object* v_x_730_, lean_object* v_x_731_){
_start:
{
uint8_t v_res_732_; lean_object* v_r_733_; 
v_res_732_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_730_, v_x_731_);
lean_dec(v_x_731_);
lean_dec_ref(v_x_730_);
v_r_733_ = lean_box(v_res_732_);
return v_r_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(lean_object* v_mvarId_734_, lean_object* v___y_735_){
_start:
{
lean_object* v___x_737_; lean_object* v_mctx_738_; lean_object* v_eAssignment_739_; uint8_t v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; 
v___x_737_ = lean_st_ref_get(v___y_735_);
v_mctx_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc_ref(v_mctx_738_);
lean_dec(v___x_737_);
v_eAssignment_739_ = lean_ctor_get(v_mctx_738_, 8);
lean_inc_ref(v_eAssignment_739_);
lean_dec_ref(v_mctx_738_);
v___x_740_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_eAssignment_739_, v_mvarId_734_);
lean_dec_ref(v_eAssignment_739_);
v___x_741_ = lean_box(v___x_740_);
v___x_742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_742_, 0, v___x_741_);
return v___x_742_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg___boxed(lean_object* v_mvarId_743_, lean_object* v___y_744_, lean_object* v___y_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_743_, v___y_744_);
lean_dec(v___y_744_);
lean_dec(v_mvarId_743_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(uint8_t v_synthAssignedInstances_747_, lean_object* v_as_748_, size_t v_sz_749_, size_t v_i_750_, lean_object* v_b_751_, lean_object* v___y_752_, lean_object* v___y_753_, lean_object* v___y_754_, lean_object* v___y_755_){
_start:
{
lean_object* v_a_758_; uint8_t v___x_762_; 
v___x_762_ = lean_usize_dec_lt(v_i_750_, v_sz_749_);
if (v___x_762_ == 0)
{
lean_object* v___x_763_; 
v___x_763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_763_, 0, v_b_751_);
return v___x_763_;
}
else
{
lean_object* v_snd_764_; lean_object* v_fst_765_; lean_object* v___x_767_; uint8_t v_isShared_768_; uint8_t v_isSharedCheck_814_; 
v_snd_764_ = lean_ctor_get(v_b_751_, 1);
v_fst_765_ = lean_ctor_get(v_b_751_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v_b_751_);
if (v_isSharedCheck_814_ == 0)
{
v___x_767_ = v_b_751_;
v_isShared_768_ = v_isSharedCheck_814_;
goto v_resetjp_766_;
}
else
{
lean_inc(v_snd_764_);
lean_inc(v_fst_765_);
lean_dec(v_b_751_);
v___x_767_ = lean_box(0);
v_isShared_768_ = v_isSharedCheck_814_;
goto v_resetjp_766_;
}
v_resetjp_766_:
{
lean_object* v_array_769_; lean_object* v_start_770_; lean_object* v_stop_771_; uint8_t v___x_772_; 
v_array_769_ = lean_ctor_get(v_snd_764_, 0);
v_start_770_ = lean_ctor_get(v_snd_764_, 1);
v_stop_771_ = lean_ctor_get(v_snd_764_, 2);
v___x_772_ = lean_nat_dec_lt(v_start_770_, v_stop_771_);
if (v___x_772_ == 0)
{
lean_object* v___x_774_; 
if (v_isShared_768_ == 0)
{
v___x_774_ = v___x_767_;
goto v_reusejp_773_;
}
else
{
lean_object* v_reuseFailAlloc_776_; 
v_reuseFailAlloc_776_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_776_, 0, v_fst_765_);
lean_ctor_set(v_reuseFailAlloc_776_, 1, v_snd_764_);
v___x_774_ = v_reuseFailAlloc_776_;
goto v_reusejp_773_;
}
v_reusejp_773_:
{
lean_object* v___x_775_; 
v___x_775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
return v___x_775_;
}
}
else
{
lean_object* v___x_778_; uint8_t v_isShared_779_; uint8_t v_isSharedCheck_810_; 
lean_inc(v_stop_771_);
lean_inc(v_start_770_);
lean_inc_ref(v_array_769_);
v_isSharedCheck_810_ = !lean_is_exclusive(v_snd_764_);
if (v_isSharedCheck_810_ == 0)
{
lean_object* v_unused_811_; lean_object* v_unused_812_; lean_object* v_unused_813_; 
v_unused_811_ = lean_ctor_get(v_snd_764_, 2);
lean_dec(v_unused_811_);
v_unused_812_ = lean_ctor_get(v_snd_764_, 1);
lean_dec(v_unused_812_);
v_unused_813_ = lean_ctor_get(v_snd_764_, 0);
lean_dec(v_unused_813_);
v___x_778_ = v_snd_764_;
v_isShared_779_ = v_isSharedCheck_810_;
goto v_resetjp_777_;
}
else
{
lean_dec(v_snd_764_);
v___x_778_ = lean_box(0);
v_isShared_779_ = v_isSharedCheck_810_;
goto v_resetjp_777_;
}
v_resetjp_777_:
{
lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_784_; 
v___x_780_ = lean_array_fget(v_array_769_, v_start_770_);
v___x_781_ = lean_unsigned_to_nat(1u);
v___x_782_ = lean_nat_add(v_start_770_, v___x_781_);
lean_dec(v_start_770_);
if (v_isShared_779_ == 0)
{
lean_ctor_set(v___x_778_, 1, v___x_782_);
v___x_784_ = v___x_778_;
goto v_reusejp_783_;
}
else
{
lean_object* v_reuseFailAlloc_809_; 
v_reuseFailAlloc_809_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_809_, 0, v_array_769_);
lean_ctor_set(v_reuseFailAlloc_809_, 1, v___x_782_);
lean_ctor_set(v_reuseFailAlloc_809_, 2, v_stop_771_);
v___x_784_ = v_reuseFailAlloc_809_;
goto v_reusejp_783_;
}
v_reusejp_783_:
{
uint8_t v___x_785_; uint8_t v___x_786_; 
v___x_785_ = lean_unbox(v___x_780_);
lean_dec(v___x_780_);
v___x_786_ = l_Lean_BinderInfo_isInstImplicit(v___x_785_);
if (v___x_786_ == 0)
{
lean_object* v___x_788_; 
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v___x_784_);
v___x_788_ = v___x_767_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_fst_765_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v___x_784_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
v_a_758_ = v___x_788_;
goto v___jp_757_;
}
}
else
{
lean_object* v_a_790_; lean_object* v___x_791_; lean_object* v___x_792_; 
v_a_790_ = lean_array_uget_borrowed(v_as_748_, v_i_750_);
v___x_791_ = l_Lean_Expr_mvarId_x21(v_a_790_);
v___x_792_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_791_, v___y_753_);
lean_dec(v___x_791_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_object* v_a_793_; 
v_a_793_ = lean_ctor_get(v___x_792_, 0);
lean_inc(v_a_793_);
lean_dec_ref_known(v___x_792_, 1);
if (v_synthAssignedInstances_747_ == 0)
{
uint8_t v___x_799_; 
v___x_799_ = lean_unbox(v_a_793_);
lean_dec(v_a_793_);
if (v___x_799_ == 0)
{
goto v___jp_794_;
}
else
{
lean_object* v___x_800_; 
lean_del_object(v___x_767_);
v___x_800_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_800_, 0, v_fst_765_);
lean_ctor_set(v___x_800_, 1, v___x_784_);
v_a_758_ = v___x_800_;
goto v___jp_757_;
}
}
else
{
lean_dec(v_a_793_);
goto v___jp_794_;
}
v___jp_794_:
{
lean_object* v___x_795_; lean_object* v___x_797_; 
lean_inc(v_a_790_);
v___x_795_ = lean_array_push(v_fst_765_, v_a_790_);
if (v_isShared_768_ == 0)
{
lean_ctor_set(v___x_767_, 1, v___x_784_);
lean_ctor_set(v___x_767_, 0, v___x_795_);
v___x_797_ = v___x_767_;
goto v_reusejp_796_;
}
else
{
lean_object* v_reuseFailAlloc_798_; 
v_reuseFailAlloc_798_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_798_, 0, v___x_795_);
lean_ctor_set(v_reuseFailAlloc_798_, 1, v___x_784_);
v___x_797_ = v_reuseFailAlloc_798_;
goto v_reusejp_796_;
}
v_reusejp_796_:
{
v_a_758_ = v___x_797_;
goto v___jp_757_;
}
}
}
else
{
lean_object* v_a_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_808_; 
lean_dec_ref(v___x_784_);
lean_del_object(v___x_767_);
lean_dec(v_fst_765_);
v_a_801_ = lean_ctor_get(v___x_792_, 0);
v_isSharedCheck_808_ = !lean_is_exclusive(v___x_792_);
if (v_isSharedCheck_808_ == 0)
{
v___x_803_ = v___x_792_;
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_a_801_);
lean_dec(v___x_792_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_808_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
lean_object* v___x_806_; 
if (v_isShared_804_ == 0)
{
v___x_806_ = v___x_803_;
goto v_reusejp_805_;
}
else
{
lean_object* v_reuseFailAlloc_807_; 
v_reuseFailAlloc_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_807_, 0, v_a_801_);
v___x_806_ = v_reuseFailAlloc_807_;
goto v_reusejp_805_;
}
v_reusejp_805_:
{
return v___x_806_;
}
}
}
}
}
}
}
}
}
v___jp_757_:
{
size_t v___x_759_; size_t v___x_760_; 
v___x_759_ = ((size_t)1ULL);
v___x_760_ = lean_usize_add(v_i_750_, v___x_759_);
v_i_750_ = v___x_760_;
v_b_751_ = v_a_758_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1___boxed(lean_object* v_synthAssignedInstances_815_, lean_object* v_as_816_, lean_object* v_sz_817_, lean_object* v_i_818_, lean_object* v_b_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_, lean_object* v___y_824_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_825_; size_t v_sz_boxed_826_; size_t v_i_boxed_827_; lean_object* v_res_828_; 
v_synthAssignedInstances_boxed_825_ = lean_unbox(v_synthAssignedInstances_815_);
v_sz_boxed_826_ = lean_unbox_usize(v_sz_817_);
lean_dec(v_sz_817_);
v_i_boxed_827_ = lean_unbox_usize(v_i_818_);
lean_dec(v_i_818_);
v_res_828_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_boxed_825_, v_as_816_, v_sz_boxed_826_, v_i_boxed_827_, v_b_819_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
lean_dec(v___y_823_);
lean_dec_ref(v___y_822_);
lean_dec(v___y_821_);
lean_dec_ref(v___y_820_);
lean_dec_ref(v_as_816_);
return v_res_828_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(lean_object* v_tacticName_829_, lean_object* v_mvarId_830_, uint8_t v_allowSynthFailures_831_, lean_object* v_a_832_, lean_object* v___y_833_, lean_object* v___y_834_, lean_object* v___y_835_, lean_object* v___y_836_){
_start:
{
lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_838_ = lean_array_get_size(v_a_832_);
v___x_839_ = lean_unsigned_to_nat(0u);
v___x_840_ = lean_nat_dec_eq(v___x_838_, v___x_839_);
if (v___x_840_ == 0)
{
lean_object* v___x_841_; 
lean_inc(v_mvarId_830_);
lean_inc(v_tacticName_829_);
v___x_841_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step(v_tacticName_829_, v_mvarId_830_, v_allowSynthFailures_831_, v_a_832_, v___y_833_, v___y_834_, v___y_835_, v___y_836_);
lean_dec_ref(v_a_832_);
if (lean_obj_tag(v___x_841_) == 0)
{
lean_object* v_a_842_; 
v_a_842_ = lean_ctor_get(v___x_841_, 0);
lean_inc(v_a_842_);
lean_dec_ref_known(v___x_841_, 1);
v_a_832_ = v_a_842_;
goto _start;
}
else
{
lean_dec(v_mvarId_830_);
lean_dec(v_tacticName_829_);
return v___x_841_;
}
}
else
{
lean_object* v___x_844_; 
lean_dec(v_mvarId_830_);
lean_dec(v_tacticName_829_);
v___x_844_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_844_, 0, v_a_832_);
return v___x_844_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg___boxed(lean_object* v_tacticName_845_, lean_object* v_mvarId_846_, lean_object* v_allowSynthFailures_847_, lean_object* v_a_848_, lean_object* v___y_849_, lean_object* v___y_850_, lean_object* v___y_851_, lean_object* v___y_852_, lean_object* v___y_853_){
_start:
{
uint8_t v_allowSynthFailures_boxed_854_; lean_object* v_res_855_; 
v_allowSynthFailures_boxed_854_ = lean_unbox(v_allowSynthFailures_847_);
v_res_855_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(v_tacticName_845_, v_mvarId_846_, v_allowSynthFailures_boxed_854_, v_a_848_, v___y_849_, v___y_850_, v___y_851_, v___y_852_);
lean_dec(v___y_852_);
lean_dec_ref(v___y_851_);
lean_dec(v___y_850_);
lean_dec_ref(v___y_849_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances(lean_object* v_tacticName_856_, lean_object* v_mvarId_857_, lean_object* v_mvarsNew_858_, lean_object* v_binderInfos_859_, uint8_t v_synthAssignedInstances_860_, uint8_t v_allowSynthFailures_861_, lean_object* v_a_862_, lean_object* v_a_863_, lean_object* v_a_864_, lean_object* v_a_865_){
_start:
{
lean_object* v___x_867_; lean_object* v_todo_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; size_t v_sz_872_; size_t v___x_873_; lean_object* v___x_874_; 
v___x_867_ = lean_unsigned_to_nat(0u);
v_todo_868_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_869_ = lean_array_get_size(v_binderInfos_859_);
v___x_870_ = l_Array_toSubarray___redArg(v_binderInfos_859_, v___x_867_, v___x_869_);
v___x_871_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_871_, 0, v_todo_868_);
lean_ctor_set(v___x_871_, 1, v___x_870_);
v_sz_872_ = lean_array_size(v_mvarsNew_858_);
v___x_873_ = ((size_t)0ULL);
v___x_874_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_synthAppInstances_spec__1(v_synthAssignedInstances_860_, v_mvarsNew_858_, v_sz_872_, v___x_873_, v___x_871_, v_a_862_, v_a_863_, v_a_864_, v_a_865_);
if (lean_obj_tag(v___x_874_) == 0)
{
lean_object* v_a_875_; lean_object* v_fst_876_; lean_object* v___x_877_; 
v_a_875_ = lean_ctor_get(v___x_874_, 0);
lean_inc(v_a_875_);
lean_dec_ref_known(v___x_874_, 1);
v_fst_876_ = lean_ctor_get(v_a_875_, 0);
lean_inc(v_fst_876_);
lean_dec(v_a_875_);
v___x_877_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(v_tacticName_856_, v_mvarId_857_, v_allowSynthFailures_861_, v_fst_876_, v_a_862_, v_a_863_, v_a_864_, v_a_865_);
if (lean_obj_tag(v___x_877_) == 0)
{
lean_object* v___x_879_; uint8_t v_isShared_880_; uint8_t v_isSharedCheck_885_; 
v_isSharedCheck_885_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_885_ == 0)
{
lean_object* v_unused_886_; 
v_unused_886_ = lean_ctor_get(v___x_877_, 0);
lean_dec(v_unused_886_);
v___x_879_ = v___x_877_;
v_isShared_880_ = v_isSharedCheck_885_;
goto v_resetjp_878_;
}
else
{
lean_dec(v___x_877_);
v___x_879_ = lean_box(0);
v_isShared_880_ = v_isSharedCheck_885_;
goto v_resetjp_878_;
}
v_resetjp_878_:
{
lean_object* v___x_881_; lean_object* v___x_883_; 
v___x_881_ = lean_box(0);
if (v_isShared_880_ == 0)
{
lean_ctor_set(v___x_879_, 0, v___x_881_);
v___x_883_ = v___x_879_;
goto v_reusejp_882_;
}
else
{
lean_object* v_reuseFailAlloc_884_; 
v_reuseFailAlloc_884_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_884_, 0, v___x_881_);
v___x_883_ = v_reuseFailAlloc_884_;
goto v_reusejp_882_;
}
v_reusejp_882_:
{
return v___x_883_;
}
}
}
else
{
lean_object* v_a_887_; lean_object* v___x_889_; uint8_t v_isShared_890_; uint8_t v_isSharedCheck_894_; 
v_a_887_ = lean_ctor_get(v___x_877_, 0);
v_isSharedCheck_894_ = !lean_is_exclusive(v___x_877_);
if (v_isSharedCheck_894_ == 0)
{
v___x_889_ = v___x_877_;
v_isShared_890_ = v_isSharedCheck_894_;
goto v_resetjp_888_;
}
else
{
lean_inc(v_a_887_);
lean_dec(v___x_877_);
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
else
{
lean_object* v_a_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_902_; 
lean_dec(v_mvarId_857_);
lean_dec(v_tacticName_856_);
v_a_895_ = lean_ctor_get(v___x_874_, 0);
v_isSharedCheck_902_ = !lean_is_exclusive(v___x_874_);
if (v_isSharedCheck_902_ == 0)
{
v___x_897_ = v___x_874_;
v_isShared_898_ = v_isSharedCheck_902_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_a_895_);
lean_dec(v___x_874_);
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
LEAN_EXPORT lean_object* l_Lean_Meta_synthAppInstances___boxed(lean_object* v_tacticName_903_, lean_object* v_mvarId_904_, lean_object* v_mvarsNew_905_, lean_object* v_binderInfos_906_, lean_object* v_synthAssignedInstances_907_, lean_object* v_allowSynthFailures_908_, lean_object* v_a_909_, lean_object* v_a_910_, lean_object* v_a_911_, lean_object* v_a_912_, lean_object* v_a_913_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_914_; uint8_t v_allowSynthFailures_boxed_915_; lean_object* v_res_916_; 
v_synthAssignedInstances_boxed_914_ = lean_unbox(v_synthAssignedInstances_907_);
v_allowSynthFailures_boxed_915_ = lean_unbox(v_allowSynthFailures_908_);
v_res_916_ = l_Lean_Meta_synthAppInstances(v_tacticName_903_, v_mvarId_904_, v_mvarsNew_905_, v_binderInfos_906_, v_synthAssignedInstances_boxed_914_, v_allowSynthFailures_boxed_915_, v_a_909_, v_a_910_, v_a_911_, v_a_912_);
lean_dec(v_a_912_);
lean_dec_ref(v_a_911_);
lean_dec(v_a_910_);
lean_dec_ref(v_a_909_);
lean_dec_ref(v_mvarsNew_905_);
return v_res_916_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(lean_object* v_mvarId_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_, lean_object* v___y_921_){
_start:
{
lean_object* v___x_923_; 
v___x_923_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v_mvarId_917_, v___y_919_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___boxed(lean_object* v_mvarId_924_, lean_object* v___y_925_, lean_object* v___y_926_, lean_object* v___y_927_, lean_object* v___y_928_, lean_object* v___y_929_){
_start:
{
lean_object* v_res_930_; 
v_res_930_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0(v_mvarId_924_, v___y_925_, v___y_926_, v___y_927_, v___y_928_);
lean_dec(v___y_928_);
lean_dec_ref(v___y_927_);
lean_dec(v___y_926_);
lean_dec_ref(v___y_925_);
lean_dec(v_mvarId_924_);
return v_res_930_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2(lean_object* v_tacticName_931_, lean_object* v_mvarId_932_, uint8_t v_allowSynthFailures_933_, lean_object* v_inst_934_, lean_object* v_a_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_, lean_object* v___y_939_){
_start:
{
lean_object* v___x_941_; 
v___x_941_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___redArg(v_tacticName_931_, v_mvarId_932_, v_allowSynthFailures_933_, v_a_935_, v___y_936_, v___y_937_, v___y_938_, v___y_939_);
return v___x_941_;
}
}
LEAN_EXPORT lean_object* l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2___boxed(lean_object* v_tacticName_942_, lean_object* v_mvarId_943_, lean_object* v_allowSynthFailures_944_, lean_object* v_inst_945_, lean_object* v_a_946_, lean_object* v___y_947_, lean_object* v___y_948_, lean_object* v___y_949_, lean_object* v___y_950_, lean_object* v___y_951_){
_start:
{
uint8_t v_allowSynthFailures_boxed_952_; lean_object* v_res_953_; 
v_allowSynthFailures_boxed_952_ = lean_unbox(v_allowSynthFailures_944_);
v_res_953_ = l___private_Init_While_0__repeatM_erased___at___00Lean_Meta_synthAppInstances_spec__2(v_tacticName_942_, v_mvarId_943_, v_allowSynthFailures_boxed_952_, v_inst_945_, v_a_946_, v___y_947_, v___y_948_, v___y_949_, v___y_950_);
lean_dec(v___y_950_);
lean_dec_ref(v___y_949_);
lean_dec(v___y_948_);
lean_dec_ref(v___y_947_);
return v_res_953_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(lean_object* v_00_u03b2_954_, lean_object* v_x_955_, lean_object* v_x_956_){
_start:
{
uint8_t v___x_957_; 
v___x_957_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___redArg(v_x_955_, v_x_956_);
return v___x_957_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0___boxed(lean_object* v_00_u03b2_958_, lean_object* v_x_959_, lean_object* v_x_960_){
_start:
{
uint8_t v_res_961_; lean_object* v_r_962_; 
v_res_961_ = l_Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0(v_00_u03b2_958_, v_x_959_, v_x_960_);
lean_dec(v_x_960_);
lean_dec_ref(v_x_959_);
v_r_962_ = lean_box(v_res_961_);
return v_r_962_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_963_, lean_object* v_x_964_, size_t v_x_965_, lean_object* v_x_966_){
_start:
{
uint8_t v___x_967_; 
v___x_967_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___redArg(v_x_964_, v_x_965_, v_x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_968_, lean_object* v_x_969_, lean_object* v_x_970_, lean_object* v_x_971_){
_start:
{
size_t v_x_3330__boxed_972_; uint8_t v_res_973_; lean_object* v_r_974_; 
v_x_3330__boxed_972_ = lean_unbox_usize(v_x_970_);
lean_dec(v_x_970_);
v_res_973_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1(v_00_u03b2_968_, v_x_969_, v_x_3330__boxed_972_, v_x_971_);
lean_dec(v_x_971_);
lean_dec_ref(v_x_969_);
v_r_974_ = lean_box(v_res_973_);
return v_r_974_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(lean_object* v_00_u03b2_975_, lean_object* v_keys_976_, lean_object* v_vals_977_, lean_object* v_heq_978_, lean_object* v_i_979_, lean_object* v_k_980_){
_start:
{
uint8_t v___x_981_; 
v___x_981_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___redArg(v_keys_976_, v_i_979_, v_k_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4___boxed(lean_object* v_00_u03b2_982_, lean_object* v_keys_983_, lean_object* v_vals_984_, lean_object* v_heq_985_, lean_object* v_i_986_, lean_object* v_k_987_){
_start:
{
uint8_t v_res_988_; lean_object* v_r_989_; 
v_res_988_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0_spec__0_spec__1_spec__4(v_00_u03b2_982_, v_keys_983_, v_vals_984_, v_heq_985_, v_i_986_, v_k_987_);
lean_dec(v_k_987_);
lean_dec_ref(v_vals_984_);
lean_dec_ref(v_keys_983_);
v_r_989_ = lean_box(v_res_988_);
return v_r_989_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___lam__0(lean_object* v_00___990_, lean_object* v___y_991_, lean_object* v___y_992_, lean_object* v___y_993_, lean_object* v___y_994_){
_start:
{
lean_object* v___x_996_; lean_object* v___x_997_; 
v___x_996_ = lean_box(0);
v___x_997_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_997_, 0, v___x_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___lam__0___boxed(lean_object* v_00___998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___lam__0(v_00___998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(lean_object* v_newMVars_1005_, lean_object* v_binderInfos_1006_, lean_object* v_a_1007_, lean_object* v_n_1008_, lean_object* v_i_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_){
_start:
{
lean_object* v_zero_1015_; uint8_t v_isZero_1016_; 
v_zero_1015_ = lean_unsigned_to_nat(0u);
v_isZero_1016_ = lean_nat_dec_eq(v_i_1009_, v_zero_1015_);
if (v_isZero_1016_ == 1)
{
lean_object* v___x_1017_; lean_object* v___x_1018_; 
lean_dec(v_i_1009_);
lean_dec(v_a_1007_);
v___x_1017_ = lean_box(0);
v___x_1018_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1018_, 0, v___x_1017_);
return v___x_1018_;
}
else
{
uint8_t v___x_1019_; lean_object* v_one_1020_; lean_object* v_n_1021_; lean_object* v___y_1023_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v_a_1030_; uint8_t v___x_1031_; 
v___x_1019_ = 0;
v_one_1020_ = lean_unsigned_to_nat(1u);
v_n_1021_ = lean_nat_sub(v_i_1009_, v_one_1020_);
lean_dec(v_i_1009_);
v___x_1025_ = lean_nat_sub(v_n_1008_, v_n_1021_);
v___x_1026_ = lean_nat_sub(v___x_1025_, v_one_1020_);
lean_dec(v___x_1025_);
v___x_1027_ = lean_array_fget_borrowed(v_newMVars_1005_, v___x_1026_);
v___x_1028_ = l_Lean_Expr_mvarId_x21(v___x_1027_);
v___x_1029_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_1028_, v___y_1011_);
v_a_1030_ = lean_ctor_get(v___x_1029_, 0);
lean_inc(v_a_1030_);
lean_dec_ref(v___x_1029_);
v___x_1031_ = lean_unbox(v_a_1030_);
lean_dec(v_a_1030_);
if (v___x_1031_ == 0)
{
lean_object* v___x_1032_; lean_object* v___x_1033_; uint8_t v___x_1034_; uint8_t v___x_1035_; 
v___x_1032_ = lean_box(v___x_1019_);
v___x_1033_ = lean_array_get(v___x_1032_, v_binderInfos_1006_, v___x_1026_);
lean_dec(v___x_1026_);
lean_dec(v___x_1032_);
v___x_1034_ = lean_unbox(v___x_1033_);
lean_dec(v___x_1033_);
v___x_1035_ = l_Lean_BinderInfo_isInstImplicit(v___x_1034_);
if (v___x_1035_ == 0)
{
lean_object* v___x_1036_; 
lean_inc(v___x_1028_);
v___x_1036_ = l_Lean_MVarId_getTag(v___x_1028_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
if (lean_obj_tag(v___x_1036_) == 0)
{
lean_object* v_a_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; 
v_a_1037_ = lean_ctor_get(v___x_1036_, 0);
lean_inc(v_a_1037_);
lean_dec_ref_known(v___x_1036_, 1);
lean_inc(v_a_1007_);
v___x_1038_ = l_Lean_Meta_appendTag(v_a_1007_, v_a_1037_);
lean_dec(v_a_1037_);
v___x_1039_ = l_Lean_MVarId_setTag___redArg(v___x_1028_, v___x_1038_, v___y_1011_);
v___y_1023_ = v___x_1039_;
goto v___jp_1022_;
}
else
{
lean_object* v_a_1040_; lean_object* v___x_1042_; uint8_t v_isShared_1043_; uint8_t v_isSharedCheck_1047_; 
lean_dec(v___x_1028_);
lean_dec(v_n_1021_);
lean_dec(v_a_1007_);
v_a_1040_ = lean_ctor_get(v___x_1036_, 0);
v_isSharedCheck_1047_ = !lean_is_exclusive(v___x_1036_);
if (v_isSharedCheck_1047_ == 0)
{
v___x_1042_ = v___x_1036_;
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
else
{
lean_inc(v_a_1040_);
lean_dec(v___x_1036_);
v___x_1042_ = lean_box(0);
v_isShared_1043_ = v_isSharedCheck_1047_;
goto v_resetjp_1041_;
}
v_resetjp_1041_:
{
lean_object* v___x_1045_; 
if (v_isShared_1043_ == 0)
{
v___x_1045_ = v___x_1042_;
goto v_reusejp_1044_;
}
else
{
lean_object* v_reuseFailAlloc_1046_; 
v_reuseFailAlloc_1046_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1046_, 0, v_a_1040_);
v___x_1045_ = v_reuseFailAlloc_1046_;
goto v_reusejp_1044_;
}
v_reusejp_1044_:
{
return v___x_1045_;
}
}
}
}
else
{
lean_object* v___x_1048_; lean_object* v___x_1049_; 
lean_dec(v___x_1028_);
v___x_1048_ = lean_box(0);
v___x_1049_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___lam__0(v___x_1048_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
v___y_1023_ = v___x_1049_;
goto v___jp_1022_;
}
}
else
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
lean_dec(v___x_1028_);
lean_dec(v___x_1026_);
v___x_1050_ = lean_box(0);
v___x_1051_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___lam__0(v___x_1050_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_);
v___y_1023_ = v___x_1051_;
goto v___jp_1022_;
}
v___jp_1022_:
{
if (lean_obj_tag(v___y_1023_) == 0)
{
lean_dec_ref_known(v___y_1023_, 1);
v_i_1009_ = v_n_1021_;
goto _start;
}
else
{
lean_dec(v_n_1021_);
lean_dec(v_a_1007_);
return v___y_1023_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg___boxed(lean_object* v_newMVars_1052_, lean_object* v_binderInfos_1053_, lean_object* v_a_1054_, lean_object* v_n_1055_, lean_object* v_i_1056_, lean_object* v___y_1057_, lean_object* v___y_1058_, lean_object* v___y_1059_, lean_object* v___y_1060_, lean_object* v___y_1061_){
_start:
{
lean_object* v_res_1062_; 
v_res_1062_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1052_, v_binderInfos_1053_, v_a_1054_, v_n_1055_, v_i_1056_, v___y_1057_, v___y_1058_, v___y_1059_, v___y_1060_);
lean_dec(v___y_1060_);
lean_dec_ref(v___y_1059_);
lean_dec(v___y_1058_);
lean_dec_ref(v___y_1057_);
lean_dec(v_n_1055_);
lean_dec_ref(v_binderInfos_1053_);
lean_dec_ref(v_newMVars_1052_);
return v_res_1062_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag(lean_object* v_mvarId_1063_, lean_object* v_newMVars_1064_, lean_object* v_binderInfos_1065_, lean_object* v_a_1066_, lean_object* v_a_1067_, lean_object* v_a_1068_, lean_object* v_a_1069_){
_start:
{
lean_object* v___x_1071_; lean_object* v___x_1072_; 
v___x_1071_ = l_Lean_instInhabitedExpr;
v___x_1072_ = l_Lean_MVarId_getTag(v_mvarId_1063_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_);
if (lean_obj_tag(v___x_1072_) == 0)
{
lean_object* v_a_1073_; lean_object* v___x_1075_; uint8_t v_isShared_1076_; uint8_t v_isSharedCheck_1090_; 
v_a_1073_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1090_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1075_ = v___x_1072_;
v_isShared_1076_ = v_isSharedCheck_1090_;
goto v_resetjp_1074_;
}
else
{
lean_inc(v_a_1073_);
lean_dec(v___x_1072_);
v___x_1075_ = lean_box(0);
v_isShared_1076_ = v_isSharedCheck_1090_;
goto v_resetjp_1074_;
}
v_resetjp_1074_:
{
lean_object* v___x_1077_; lean_object* v___x_1078_; uint8_t v___x_1079_; 
v___x_1077_ = lean_array_get_size(v_newMVars_1064_);
v___x_1078_ = lean_unsigned_to_nat(1u);
v___x_1079_ = lean_nat_dec_eq(v___x_1077_, v___x_1078_);
if (v___x_1079_ == 0)
{
uint8_t v___x_1080_; 
v___x_1080_ = l_Lean_Name_isAnonymous(v_a_1073_);
if (v___x_1080_ == 0)
{
lean_object* v___x_1081_; 
lean_del_object(v___x_1075_);
v___x_1081_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1064_, v_binderInfos_1065_, v_a_1073_, v___x_1077_, v___x_1077_, v_a_1066_, v_a_1067_, v_a_1068_, v_a_1069_);
return v___x_1081_;
}
else
{
lean_object* v___x_1082_; lean_object* v___x_1084_; 
lean_dec(v_a_1073_);
v___x_1082_ = lean_box(0);
if (v_isShared_1076_ == 0)
{
lean_ctor_set(v___x_1075_, 0, v___x_1082_);
v___x_1084_ = v___x_1075_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1085_; 
v_reuseFailAlloc_1085_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1085_, 0, v___x_1082_);
v___x_1084_ = v_reuseFailAlloc_1085_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
return v___x_1084_;
}
}
}
else
{
lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; 
lean_del_object(v___x_1075_);
v___x_1086_ = lean_unsigned_to_nat(0u);
v___x_1087_ = lean_array_get_borrowed(v___x_1071_, v_newMVars_1064_, v___x_1086_);
v___x_1088_ = l_Lean_Expr_mvarId_x21(v___x_1087_);
v___x_1089_ = l_Lean_MVarId_setTag___redArg(v___x_1088_, v_a_1073_, v_a_1067_);
return v___x_1089_;
}
}
}
else
{
lean_object* v_a_1091_; lean_object* v___x_1093_; uint8_t v_isShared_1094_; uint8_t v_isSharedCheck_1098_; 
v_a_1091_ = lean_ctor_get(v___x_1072_, 0);
v_isSharedCheck_1098_ = !lean_is_exclusive(v___x_1072_);
if (v_isSharedCheck_1098_ == 0)
{
v___x_1093_ = v___x_1072_;
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
else
{
lean_inc(v_a_1091_);
lean_dec(v___x_1072_);
v___x_1093_ = lean_box(0);
v_isShared_1094_ = v_isSharedCheck_1098_;
goto v_resetjp_1092_;
}
v_resetjp_1092_:
{
lean_object* v___x_1096_; 
if (v_isShared_1094_ == 0)
{
v___x_1096_ = v___x_1093_;
goto v_reusejp_1095_;
}
else
{
lean_object* v_reuseFailAlloc_1097_; 
v_reuseFailAlloc_1097_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1097_, 0, v_a_1091_);
v___x_1096_ = v_reuseFailAlloc_1097_;
goto v_reusejp_1095_;
}
v_reusejp_1095_:
{
return v___x_1096_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_appendParentTag___boxed(lean_object* v_mvarId_1099_, lean_object* v_newMVars_1100_, lean_object* v_binderInfos_1101_, lean_object* v_a_1102_, lean_object* v_a_1103_, lean_object* v_a_1104_, lean_object* v_a_1105_, lean_object* v_a_1106_){
_start:
{
lean_object* v_res_1107_; 
v_res_1107_ = l_Lean_Meta_appendParentTag(v_mvarId_1099_, v_newMVars_1100_, v_binderInfos_1101_, v_a_1102_, v_a_1103_, v_a_1104_, v_a_1105_);
lean_dec(v_a_1105_);
lean_dec_ref(v_a_1104_);
lean_dec(v_a_1103_);
lean_dec_ref(v_a_1102_);
lean_dec_ref(v_binderInfos_1101_);
lean_dec_ref(v_newMVars_1100_);
return v_res_1107_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(lean_object* v_newMVars_1108_, lean_object* v_binderInfos_1109_, lean_object* v_a_1110_, lean_object* v_n_1111_, lean_object* v_i_1112_, lean_object* v_a_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_){
_start:
{
lean_object* v___x_1119_; 
v___x_1119_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___redArg(v_newMVars_1108_, v_binderInfos_1109_, v_a_1110_, v_n_1111_, v_i_1112_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_);
return v___x_1119_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0___boxed(lean_object* v_newMVars_1120_, lean_object* v_binderInfos_1121_, lean_object* v_a_1122_, lean_object* v_n_1123_, lean_object* v_i_1124_, lean_object* v_a_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_, lean_object* v___y_1129_, lean_object* v___y_1130_){
_start:
{
lean_object* v_res_1131_; 
v_res_1131_ = l___private_Init_Data_Nat_Control_0__Nat_forM_loop___at___00Lean_Meta_appendParentTag_spec__0(v_newMVars_1120_, v_binderInfos_1121_, v_a_1122_, v_n_1123_, v_i_1124_, v_a_1125_, v___y_1126_, v___y_1127_, v___y_1128_, v___y_1129_);
lean_dec(v___y_1129_);
lean_dec_ref(v___y_1128_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec(v_n_1123_);
lean_dec_ref(v_binderInfos_1121_);
lean_dec_ref(v_newMVars_1120_);
return v_res_1131_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars(lean_object* v_tacticName_1132_, lean_object* v_mvarId_1133_, lean_object* v_newMVars_1134_, lean_object* v_binderInfos_1135_, uint8_t v_synthAssignedInstances_1136_, uint8_t v_allowSynthFailures_1137_, lean_object* v_a_1138_, lean_object* v_a_1139_, lean_object* v_a_1140_, lean_object* v_a_1141_){
_start:
{
lean_object* v___x_1143_; 
v___x_1143_ = l_Lean_Meta_synthAppInstances(v_tacticName_1132_, v_mvarId_1133_, v_newMVars_1134_, v_binderInfos_1135_, v_synthAssignedInstances_1136_, v_allowSynthFailures_1137_, v_a_1138_, v_a_1139_, v_a_1140_, v_a_1141_);
return v___x_1143_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_postprocessAppMVars___boxed(lean_object* v_tacticName_1144_, lean_object* v_mvarId_1145_, lean_object* v_newMVars_1146_, lean_object* v_binderInfos_1147_, lean_object* v_synthAssignedInstances_1148_, lean_object* v_allowSynthFailures_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_){
_start:
{
uint8_t v_synthAssignedInstances_boxed_1155_; uint8_t v_allowSynthFailures_boxed_1156_; lean_object* v_res_1157_; 
v_synthAssignedInstances_boxed_1155_ = lean_unbox(v_synthAssignedInstances_1148_);
v_allowSynthFailures_boxed_1156_ = lean_unbox(v_allowSynthFailures_1149_);
v_res_1157_ = l_Lean_Meta_postprocessAppMVars(v_tacticName_1144_, v_mvarId_1145_, v_newMVars_1146_, v_binderInfos_1147_, v_synthAssignedInstances_boxed_1155_, v_allowSynthFailures_boxed_1156_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
lean_dec_ref(v_newMVars_1146_);
return v_res_1157_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(lean_object* v_mvar_1158_, lean_object* v_mvarId_1159_){
_start:
{
lean_object* v___x_1160_; uint8_t v___x_1161_; 
v___x_1160_ = l_Lean_Expr_mvarId_x21(v_mvar_1158_);
v___x_1161_ = l_Lean_instBEqMVarId_beq(v_mvarId_1159_, v___x_1160_);
lean_dec(v___x_1160_);
return v___x_1161_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed(lean_object* v_mvar_1162_, lean_object* v_mvarId_1163_){
_start:
{
uint8_t v_res_1164_; lean_object* v_r_1165_; 
v_res_1164_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0(v_mvar_1162_, v_mvarId_1163_);
lean_dec(v_mvarId_1163_);
lean_dec_ref(v_mvar_1162_);
v_r_1165_ = lean_box(v_res_1164_);
return v_r_1165_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(lean_object* v_mvar_1166_, lean_object* v_as_1167_, size_t v_i_1168_, size_t v_stop_1169_, lean_object* v___y_1170_, lean_object* v___y_1171_, lean_object* v___y_1172_, lean_object* v___y_1173_){
_start:
{
uint8_t v___x_1179_; 
v___x_1179_ = lean_usize_dec_eq(v_i_1168_, v_stop_1169_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; uint8_t v___x_1181_; 
v___x_1180_ = lean_array_uget_borrowed(v_as_1167_, v_i_1168_);
v___x_1181_ = lean_expr_eqv(v_mvar_1166_, v___x_1180_);
if (v___x_1181_ == 0)
{
lean_object* v___f_1182_; lean_object* v___x_1183_; 
lean_inc_ref(v_mvar_1166_);
v___f_1182_ = lean_alloc_closure((void*)(l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1182_, 0, v_mvar_1166_);
lean_inc(v___y_1173_);
lean_inc_ref(v___y_1172_);
lean_inc(v___y_1171_);
lean_inc_ref(v___y_1170_);
lean_inc(v___x_1180_);
v___x_1183_ = lean_infer_type(v___x_1180_, v___y_1170_, v___y_1171_, v___y_1172_, v___y_1173_);
if (lean_obj_tag(v___x_1183_) == 0)
{
lean_object* v_a_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1195_; 
v_a_1184_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1195_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1195_ == 0)
{
v___x_1186_ = v___x_1183_;
v_isShared_1187_ = v_isSharedCheck_1195_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_a_1184_);
lean_dec(v___x_1183_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1195_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_box(0);
v___x_1189_ = l_Lean_FindMVar_main(v___f_1182_, v_a_1184_, v___x_1188_);
if (lean_obj_tag(v___x_1189_) == 0)
{
lean_del_object(v___x_1186_);
goto v___jp_1175_;
}
else
{
uint8_t v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1193_; 
lean_dec_ref_known(v___x_1189_, 1);
lean_dec_ref(v_mvar_1166_);
v___x_1190_ = 1;
v___x_1191_ = lean_box(v___x_1190_);
if (v_isShared_1187_ == 0)
{
lean_ctor_set(v___x_1186_, 0, v___x_1191_);
v___x_1193_ = v___x_1186_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v___x_1191_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
return v___x_1193_;
}
}
}
}
else
{
lean_object* v_a_1196_; lean_object* v___x_1198_; uint8_t v_isShared_1199_; uint8_t v_isSharedCheck_1203_; 
lean_dec_ref(v___f_1182_);
lean_dec_ref(v_mvar_1166_);
v_a_1196_ = lean_ctor_get(v___x_1183_, 0);
v_isSharedCheck_1203_ = !lean_is_exclusive(v___x_1183_);
if (v_isSharedCheck_1203_ == 0)
{
v___x_1198_ = v___x_1183_;
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
else
{
lean_inc(v_a_1196_);
lean_dec(v___x_1183_);
v___x_1198_ = lean_box(0);
v_isShared_1199_ = v_isSharedCheck_1203_;
goto v_resetjp_1197_;
}
v_resetjp_1197_:
{
lean_object* v___x_1201_; 
if (v_isShared_1199_ == 0)
{
v___x_1201_ = v___x_1198_;
goto v_reusejp_1200_;
}
else
{
lean_object* v_reuseFailAlloc_1202_; 
v_reuseFailAlloc_1202_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1202_, 0, v_a_1196_);
v___x_1201_ = v_reuseFailAlloc_1202_;
goto v_reusejp_1200_;
}
v_reusejp_1200_:
{
return v___x_1201_;
}
}
}
}
else
{
goto v___jp_1175_;
}
}
else
{
uint8_t v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
lean_dec_ref(v_mvar_1166_);
v___x_1204_ = 0;
v___x_1205_ = lean_box(v___x_1204_);
v___x_1206_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
return v___x_1206_;
}
v___jp_1175_:
{
size_t v___x_1176_; size_t v___x_1177_; 
v___x_1176_ = ((size_t)1ULL);
v___x_1177_ = lean_usize_add(v_i_1168_, v___x_1176_);
v_i_1168_ = v___x_1177_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0___boxed(lean_object* v_mvar_1207_, lean_object* v_as_1208_, lean_object* v_i_1209_, lean_object* v_stop_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
size_t v_i_boxed_1216_; size_t v_stop_boxed_1217_; lean_object* v_res_1218_; 
v_i_boxed_1216_ = lean_unbox_usize(v_i_1209_);
lean_dec(v_i_1209_);
v_stop_boxed_1217_ = lean_unbox_usize(v_stop_1210_);
lean_dec(v_stop_1210_);
v_res_1218_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1207_, v_as_1208_, v_i_boxed_1216_, v_stop_boxed_1217_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec_ref(v_as_1208_);
return v_res_1218_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(lean_object* v_mvar_1219_, lean_object* v_otherMVars_1220_, lean_object* v_a_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_){
_start:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; uint8_t v___x_1228_; 
v___x_1226_ = lean_unsigned_to_nat(0u);
v___x_1227_ = lean_array_get_size(v_otherMVars_1220_);
v___x_1228_ = lean_nat_dec_lt(v___x_1226_, v___x_1227_);
if (v___x_1228_ == 0)
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
lean_dec_ref(v_mvar_1219_);
v___x_1229_ = lean_box(v___x_1228_);
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
else
{
if (v___x_1228_ == 0)
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_dec_ref(v_mvar_1219_);
v___x_1231_ = lean_box(v___x_1228_);
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1231_);
return v___x_1232_;
}
else
{
size_t v___x_1233_; size_t v___x_1234_; lean_object* v___x_1235_; 
v___x_1233_ = ((size_t)0ULL);
v___x_1234_ = lean_usize_of_nat(v___x_1227_);
v___x_1235_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers_spec__0(v_mvar_1219_, v_otherMVars_1220_, v___x_1233_, v___x_1234_, v_a_1221_, v_a_1222_, v_a_1223_, v_a_1224_);
return v___x_1235_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers___boxed(lean_object* v_mvar_1236_, lean_object* v_otherMVars_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_){
_start:
{
lean_object* v_res_1243_; 
v_res_1243_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v_mvar_1236_, v_otherMVars_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_);
lean_dec(v_a_1241_);
lean_dec_ref(v_a_1240_);
lean_dec(v_a_1239_);
lean_dec_ref(v_a_1238_);
lean_dec_ref(v_otherMVars_1237_);
return v_res_1243_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(lean_object* v_mvars_1244_, lean_object* v_as_1245_, size_t v_i_1246_, size_t v_stop_1247_, lean_object* v_b_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_, lean_object* v___y_1251_, lean_object* v___y_1252_){
_start:
{
lean_object* v_a_1255_; uint8_t v___x_1259_; 
v___x_1259_ = lean_usize_dec_eq(v_i_1246_, v_stop_1247_);
if (v___x_1259_ == 0)
{
lean_object* v_fst_1260_; lean_object* v_snd_1261_; lean_object* v___x_1263_; uint8_t v_isShared_1264_; uint8_t v_isSharedCheck_1286_; 
v_fst_1260_ = lean_ctor_get(v_b_1248_, 0);
v_snd_1261_ = lean_ctor_get(v_b_1248_, 1);
v_isSharedCheck_1286_ = !lean_is_exclusive(v_b_1248_);
if (v_isSharedCheck_1286_ == 0)
{
v___x_1263_ = v_b_1248_;
v_isShared_1264_ = v_isSharedCheck_1286_;
goto v_resetjp_1262_;
}
else
{
lean_inc(v_snd_1261_);
lean_inc(v_fst_1260_);
lean_dec(v_b_1248_);
v___x_1263_ = lean_box(0);
v_isShared_1264_ = v_isSharedCheck_1286_;
goto v_resetjp_1262_;
}
v_resetjp_1262_:
{
lean_object* v___x_1265_; lean_object* v_currMVarId_1266_; lean_object* v___x_1267_; 
v___x_1265_ = lean_array_uget_borrowed(v_as_1245_, v_i_1246_);
v_currMVarId_1266_ = l_Lean_Expr_mvarId_x21(v___x_1265_);
lean_inc(v___x_1265_);
v___x_1267_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_dependsOnOthers(v___x_1265_, v_mvars_1244_, v___y_1249_, v___y_1250_, v___y_1251_, v___y_1252_);
if (lean_obj_tag(v___x_1267_) == 0)
{
lean_object* v_a_1268_; uint8_t v___x_1269_; 
v_a_1268_ = lean_ctor_get(v___x_1267_, 0);
lean_inc(v_a_1268_);
lean_dec_ref_known(v___x_1267_, 1);
v___x_1269_ = lean_unbox(v_a_1268_);
lean_dec(v_a_1268_);
if (v___x_1269_ == 0)
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
v___x_1270_ = lean_array_push(v_fst_1260_, v_currMVarId_1266_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 0, v___x_1270_);
v___x_1272_ = v___x_1263_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1270_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_snd_1261_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
v_a_1255_ = v___x_1272_;
goto v___jp_1254_;
}
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1276_; 
v___x_1274_ = lean_array_push(v_snd_1261_, v_currMVarId_1266_);
if (v_isShared_1264_ == 0)
{
lean_ctor_set(v___x_1263_, 1, v___x_1274_);
v___x_1276_ = v___x_1263_;
goto v_reusejp_1275_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v_fst_1260_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v___x_1274_);
v___x_1276_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1275_;
}
v_reusejp_1275_:
{
v_a_1255_ = v___x_1276_;
goto v___jp_1254_;
}
}
}
else
{
lean_object* v_a_1278_; lean_object* v___x_1280_; uint8_t v_isShared_1281_; uint8_t v_isSharedCheck_1285_; 
lean_dec(v_currMVarId_1266_);
lean_del_object(v___x_1263_);
lean_dec(v_snd_1261_);
lean_dec(v_fst_1260_);
v_a_1278_ = lean_ctor_get(v___x_1267_, 0);
v_isSharedCheck_1285_ = !lean_is_exclusive(v___x_1267_);
if (v_isSharedCheck_1285_ == 0)
{
v___x_1280_ = v___x_1267_;
v_isShared_1281_ = v_isSharedCheck_1285_;
goto v_resetjp_1279_;
}
else
{
lean_inc(v_a_1278_);
lean_dec(v___x_1267_);
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
lean_object* v___x_1287_; 
v___x_1287_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1287_, 0, v_b_1248_);
return v___x_1287_;
}
v___jp_1254_:
{
size_t v___x_1256_; size_t v___x_1257_; 
v___x_1256_ = ((size_t)1ULL);
v___x_1257_ = lean_usize_add(v_i_1246_, v___x_1256_);
v_i_1246_ = v___x_1257_;
v_b_1248_ = v_a_1255_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0___boxed(lean_object* v_mvars_1288_, lean_object* v_as_1289_, lean_object* v_i_1290_, lean_object* v_stop_1291_, lean_object* v_b_1292_, lean_object* v___y_1293_, lean_object* v___y_1294_, lean_object* v___y_1295_, lean_object* v___y_1296_, lean_object* v___y_1297_){
_start:
{
size_t v_i_boxed_1298_; size_t v_stop_boxed_1299_; lean_object* v_res_1300_; 
v_i_boxed_1298_ = lean_unbox_usize(v_i_1290_);
lean_dec(v_i_1290_);
v_stop_boxed_1299_ = lean_unbox_usize(v_stop_1291_);
lean_dec(v_stop_1291_);
v_res_1300_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1288_, v_as_1289_, v_i_boxed_1298_, v_stop_boxed_1299_, v_b_1292_, v___y_1293_, v___y_1294_, v___y_1295_, v___y_1296_);
lean_dec(v___y_1296_);
lean_dec_ref(v___y_1295_);
lean_dec(v___y_1294_);
lean_dec_ref(v___y_1293_);
lean_dec_ref(v_as_1289_);
lean_dec_ref(v_mvars_1288_);
return v_res_1300_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(lean_object* v_mvars_1305_, lean_object* v_a_1306_, lean_object* v_a_1307_, lean_object* v_a_1308_, lean_object* v_a_1309_){
_start:
{
lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; uint8_t v___x_1314_; 
v___x_1311_ = lean_unsigned_to_nat(0u);
v___x_1312_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__1));
v___x_1313_ = lean_array_get_size(v_mvars_1305_);
v___x_1314_ = lean_nat_dec_lt(v___x_1311_, v___x_1313_);
if (v___x_1314_ == 0)
{
lean_object* v___x_1315_; 
v___x_1315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1315_, 0, v___x_1312_);
return v___x_1315_;
}
else
{
size_t v___x_1316_; size_t v___x_1317_; lean_object* v___x_1318_; 
v___x_1316_ = ((size_t)0ULL);
v___x_1317_ = lean_usize_of_nat(v___x_1313_);
v___x_1318_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars_spec__0(v_mvars_1305_, v_mvars_1305_, v___x_1316_, v___x_1317_, v___x_1312_, v_a_1306_, v_a_1307_, v_a_1308_, v_a_1309_);
return v___x_1318_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___boxed(lean_object* v_mvars_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_, lean_object* v_a_1322_, lean_object* v_a_1323_, lean_object* v_a_1324_){
_start:
{
lean_object* v_res_1325_; 
v_res_1325_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1319_, v_a_1320_, v_a_1321_, v_a_1322_, v_a_1323_);
lean_dec(v_a_1323_);
lean_dec_ref(v_a_1322_);
lean_dec(v_a_1321_);
lean_dec_ref(v_a_1320_);
lean_dec_ref(v_mvars_1319_);
return v_res_1325_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(lean_object* v_a_1326_, lean_object* v_a_1327_){
_start:
{
if (lean_obj_tag(v_a_1326_) == 0)
{
lean_object* v___x_1328_; 
v___x_1328_ = l_List_reverse___redArg(v_a_1327_);
return v___x_1328_;
}
else
{
lean_object* v_head_1329_; lean_object* v_tail_1330_; lean_object* v___x_1332_; uint8_t v_isShared_1333_; uint8_t v_isSharedCheck_1339_; 
v_head_1329_ = lean_ctor_get(v_a_1326_, 0);
v_tail_1330_ = lean_ctor_get(v_a_1326_, 1);
v_isSharedCheck_1339_ = !lean_is_exclusive(v_a_1326_);
if (v_isSharedCheck_1339_ == 0)
{
v___x_1332_ = v_a_1326_;
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
else
{
lean_inc(v_tail_1330_);
lean_inc(v_head_1329_);
lean_dec(v_a_1326_);
v___x_1332_ = lean_box(0);
v_isShared_1333_ = v_isSharedCheck_1339_;
goto v_resetjp_1331_;
}
v_resetjp_1331_:
{
lean_object* v___x_1334_; lean_object* v___x_1336_; 
v___x_1334_ = l_Lean_Expr_mvarId_x21(v_head_1329_);
lean_dec(v_head_1329_);
if (v_isShared_1333_ == 0)
{
lean_ctor_set(v___x_1332_, 1, v_a_1327_);
lean_ctor_set(v___x_1332_, 0, v___x_1334_);
v___x_1336_ = v___x_1332_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1338_; 
v_reuseFailAlloc_1338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1338_, 0, v___x_1334_);
lean_ctor_set(v_reuseFailAlloc_1338_, 1, v_a_1327_);
v___x_1336_ = v_reuseFailAlloc_1338_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
v_a_1326_ = v_tail_1330_;
v_a_1327_ = v___x_1336_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(lean_object* v_mvars_1340_, uint8_t v_x_1341_, lean_object* v_a_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_, lean_object* v_a_1345_){
_start:
{
switch(v_x_1341_)
{
case 0:
{
lean_object* v___x_1347_; 
v___x_1347_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1340_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_);
lean_dec_ref(v_mvars_1340_);
if (lean_obj_tag(v___x_1347_) == 0)
{
lean_object* v_a_1348_; lean_object* v___x_1350_; uint8_t v_isShared_1351_; uint8_t v_isSharedCheck_1360_; 
v_a_1348_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1350_ = v___x_1347_;
v_isShared_1351_ = v_isSharedCheck_1360_;
goto v_resetjp_1349_;
}
else
{
lean_inc(v_a_1348_);
lean_dec(v___x_1347_);
v___x_1350_ = lean_box(0);
v_isShared_1351_ = v_isSharedCheck_1360_;
goto v_resetjp_1349_;
}
v_resetjp_1349_:
{
lean_object* v_fst_1352_; lean_object* v_snd_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1358_; 
v_fst_1352_ = lean_ctor_get(v_a_1348_, 0);
lean_inc(v_fst_1352_);
v_snd_1353_ = lean_ctor_get(v_a_1348_, 1);
lean_inc(v_snd_1353_);
lean_dec(v_a_1348_);
v___x_1354_ = lean_array_to_list(v_fst_1352_);
v___x_1355_ = lean_array_to_list(v_snd_1353_);
v___x_1356_ = l_List_appendTR___redArg(v___x_1354_, v___x_1355_);
if (v_isShared_1351_ == 0)
{
lean_ctor_set(v___x_1350_, 0, v___x_1356_);
v___x_1358_ = v___x_1350_;
goto v_reusejp_1357_;
}
else
{
lean_object* v_reuseFailAlloc_1359_; 
v_reuseFailAlloc_1359_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1359_, 0, v___x_1356_);
v___x_1358_ = v_reuseFailAlloc_1359_;
goto v_reusejp_1357_;
}
v_reusejp_1357_:
{
return v___x_1358_;
}
}
}
else
{
lean_object* v_a_1361_; lean_object* v___x_1363_; uint8_t v_isShared_1364_; uint8_t v_isSharedCheck_1368_; 
v_a_1361_ = lean_ctor_get(v___x_1347_, 0);
v_isSharedCheck_1368_ = !lean_is_exclusive(v___x_1347_);
if (v_isSharedCheck_1368_ == 0)
{
v___x_1363_ = v___x_1347_;
v_isShared_1364_ = v_isSharedCheck_1368_;
goto v_resetjp_1362_;
}
else
{
lean_inc(v_a_1361_);
lean_dec(v___x_1347_);
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
case 1:
{
lean_object* v___x_1369_; 
v___x_1369_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars(v_mvars_1340_, v_a_1342_, v_a_1343_, v_a_1344_, v_a_1345_);
lean_dec_ref(v_mvars_1340_);
if (lean_obj_tag(v___x_1369_) == 0)
{
lean_object* v_a_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1379_; 
v_a_1370_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1379_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1372_ = v___x_1369_;
v_isShared_1373_ = v_isSharedCheck_1379_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_a_1370_);
lean_dec(v___x_1369_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1379_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v_fst_1374_; lean_object* v___x_1375_; lean_object* v___x_1377_; 
v_fst_1374_ = lean_ctor_get(v_a_1370_, 0);
lean_inc(v_fst_1374_);
lean_dec(v_a_1370_);
v___x_1375_ = lean_array_to_list(v_fst_1374_);
if (v_isShared_1373_ == 0)
{
lean_ctor_set(v___x_1372_, 0, v___x_1375_);
v___x_1377_ = v___x_1372_;
goto v_reusejp_1376_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1375_);
v___x_1377_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1376_;
}
v_reusejp_1376_:
{
return v___x_1377_;
}
}
}
else
{
lean_object* v_a_1380_; lean_object* v___x_1382_; uint8_t v_isShared_1383_; uint8_t v_isSharedCheck_1387_; 
v_a_1380_ = lean_ctor_get(v___x_1369_, 0);
v_isSharedCheck_1387_ = !lean_is_exclusive(v___x_1369_);
if (v_isSharedCheck_1387_ == 0)
{
v___x_1382_ = v___x_1369_;
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
else
{
lean_inc(v_a_1380_);
lean_dec(v___x_1369_);
v___x_1382_ = lean_box(0);
v_isShared_1383_ = v_isSharedCheck_1387_;
goto v_resetjp_1381_;
}
v_resetjp_1381_:
{
lean_object* v___x_1385_; 
if (v_isShared_1383_ == 0)
{
v___x_1385_ = v___x_1382_;
goto v_reusejp_1384_;
}
else
{
lean_object* v_reuseFailAlloc_1386_; 
v_reuseFailAlloc_1386_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1386_, 0, v_a_1380_);
v___x_1385_ = v_reuseFailAlloc_1386_;
goto v_reusejp_1384_;
}
v_reusejp_1384_:
{
return v___x_1385_;
}
}
}
}
default: 
{
lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; 
v___x_1388_ = lean_array_to_list(v_mvars_1340_);
v___x_1389_ = lean_box(0);
v___x_1390_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals_spec__0(v___x_1388_, v___x_1389_);
v___x_1391_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1391_, 0, v___x_1390_);
return v___x_1391_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals___boxed(lean_object* v_mvars_1392_, lean_object* v_x_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_, lean_object* v_a_1397_, lean_object* v_a_1398_){
_start:
{
uint8_t v_x_731__boxed_1399_; lean_object* v_res_1400_; 
v_x_731__boxed_1399_ = lean_unbox(v_x_1393_);
v_res_1400_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_mvars_1392_, v_x_731__boxed_1399_, v_a_1394_, v_a_1395_, v_a_1396_, v_a_1397_);
lean_dec(v_a_1397_);
lean_dec_ref(v_a_1396_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
return v_res_1400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(uint8_t v_approx_1401_, lean_object* v_a_1402_, lean_object* v_b_1403_, lean_object* v_a_1404_, lean_object* v_a_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_){
_start:
{
if (v_approx_1401_ == 0)
{
lean_object* v___x_1409_; 
v___x_1409_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1402_, v_b_1403_, v_a_1404_, v_a_1405_, v_a_1406_, v_a_1407_);
return v___x_1409_;
}
else
{
lean_object* v___x_1410_; uint8_t v_constApprox_1411_; uint8_t v_isDefEqStuckEx_1412_; uint8_t v_unificationHints_1413_; uint8_t v_proofIrrelevance_1414_; uint8_t v_assignSyntheticOpaque_1415_; uint8_t v_offsetCnstrs_1416_; uint8_t v_transparency_1417_; uint8_t v_etaStruct_1418_; uint8_t v_univApprox_1419_; uint8_t v_iota_1420_; uint8_t v_beta_1421_; uint8_t v_proj_1422_; uint8_t v_zeta_1423_; uint8_t v_zetaDelta_1424_; uint8_t v_zetaUnused_1425_; uint8_t v_zetaHave_1426_; uint8_t v_canUnfoldPredicateConfig_1427_; lean_object* v___x_1429_; uint8_t v_isShared_1430_; uint8_t v_isSharedCheck_1448_; 
v___x_1410_ = l_Lean_Meta_Context_config(v_a_1404_);
v_constApprox_1411_ = lean_ctor_get_uint8(v___x_1410_, 3);
v_isDefEqStuckEx_1412_ = lean_ctor_get_uint8(v___x_1410_, 4);
v_unificationHints_1413_ = lean_ctor_get_uint8(v___x_1410_, 5);
v_proofIrrelevance_1414_ = lean_ctor_get_uint8(v___x_1410_, 6);
v_assignSyntheticOpaque_1415_ = lean_ctor_get_uint8(v___x_1410_, 7);
v_offsetCnstrs_1416_ = lean_ctor_get_uint8(v___x_1410_, 8);
v_transparency_1417_ = lean_ctor_get_uint8(v___x_1410_, 9);
v_etaStruct_1418_ = lean_ctor_get_uint8(v___x_1410_, 10);
v_univApprox_1419_ = lean_ctor_get_uint8(v___x_1410_, 11);
v_iota_1420_ = lean_ctor_get_uint8(v___x_1410_, 12);
v_beta_1421_ = lean_ctor_get_uint8(v___x_1410_, 13);
v_proj_1422_ = lean_ctor_get_uint8(v___x_1410_, 14);
v_zeta_1423_ = lean_ctor_get_uint8(v___x_1410_, 15);
v_zetaDelta_1424_ = lean_ctor_get_uint8(v___x_1410_, 16);
v_zetaUnused_1425_ = lean_ctor_get_uint8(v___x_1410_, 17);
v_zetaHave_1426_ = lean_ctor_get_uint8(v___x_1410_, 18);
v_canUnfoldPredicateConfig_1427_ = lean_ctor_get_uint8(v___x_1410_, 19);
v_isSharedCheck_1448_ = !lean_is_exclusive(v___x_1410_);
if (v_isSharedCheck_1448_ == 0)
{
v___x_1429_ = v___x_1410_;
v_isShared_1430_ = v_isSharedCheck_1448_;
goto v_resetjp_1428_;
}
else
{
lean_dec(v___x_1410_);
v___x_1429_ = lean_box(0);
v_isShared_1430_ = v_isSharedCheck_1448_;
goto v_resetjp_1428_;
}
v_resetjp_1428_:
{
lean_object* v___x_1432_; 
if (v_isShared_1430_ == 0)
{
v___x_1432_ = v___x_1429_;
goto v_reusejp_1431_;
}
else
{
lean_object* v_reuseFailAlloc_1447_; 
v_reuseFailAlloc_1447_ = lean_alloc_ctor(0, 0, 20);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 3, v_constApprox_1411_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 4, v_isDefEqStuckEx_1412_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 5, v_unificationHints_1413_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 6, v_proofIrrelevance_1414_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 7, v_assignSyntheticOpaque_1415_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 8, v_offsetCnstrs_1416_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 9, v_transparency_1417_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 10, v_etaStruct_1418_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 11, v_univApprox_1419_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 12, v_iota_1420_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 13, v_beta_1421_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 14, v_proj_1422_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 15, v_zeta_1423_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 16, v_zetaDelta_1424_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 17, v_zetaUnused_1425_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 18, v_zetaHave_1426_);
lean_ctor_set_uint8(v_reuseFailAlloc_1447_, 19, v_canUnfoldPredicateConfig_1427_);
v___x_1432_ = v_reuseFailAlloc_1447_;
goto v_reusejp_1431_;
}
v_reusejp_1431_:
{
uint8_t v_trackZetaDelta_1433_; lean_object* v_zetaDeltaSet_1434_; lean_object* v_lctx_1435_; lean_object* v_localInstances_1436_; lean_object* v_defEqCtx_x3f_1437_; lean_object* v_synthPendingDepth_1438_; lean_object* v_customCanUnfoldPredicate_x3f_1439_; uint8_t v_univApprox_1440_; uint8_t v_inTypeClassResolution_1441_; uint8_t v_cacheInferType_1442_; uint64_t v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; 
lean_ctor_set_uint8(v___x_1432_, 0, v_approx_1401_);
lean_ctor_set_uint8(v___x_1432_, 1, v_approx_1401_);
lean_ctor_set_uint8(v___x_1432_, 2, v_approx_1401_);
v_trackZetaDelta_1433_ = lean_ctor_get_uint8(v_a_1404_, sizeof(void*)*7);
v_zetaDeltaSet_1434_ = lean_ctor_get(v_a_1404_, 1);
v_lctx_1435_ = lean_ctor_get(v_a_1404_, 2);
v_localInstances_1436_ = lean_ctor_get(v_a_1404_, 3);
v_defEqCtx_x3f_1437_ = lean_ctor_get(v_a_1404_, 4);
v_synthPendingDepth_1438_ = lean_ctor_get(v_a_1404_, 5);
v_customCanUnfoldPredicate_x3f_1439_ = lean_ctor_get(v_a_1404_, 6);
v_univApprox_1440_ = lean_ctor_get_uint8(v_a_1404_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1441_ = lean_ctor_get_uint8(v_a_1404_, sizeof(void*)*7 + 2);
v_cacheInferType_1442_ = lean_ctor_get_uint8(v_a_1404_, sizeof(void*)*7 + 3);
v___x_1443_ = l___private_Lean_Meta_Basic_0__Lean_Meta_Config_toKey(v___x_1432_);
v___x_1444_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v___x_1444_, 0, v___x_1432_);
lean_ctor_set_uint64(v___x_1444_, sizeof(void*)*1, v___x_1443_);
lean_inc(v_customCanUnfoldPredicate_x3f_1439_);
lean_inc(v_synthPendingDepth_1438_);
lean_inc(v_defEqCtx_x3f_1437_);
lean_inc_ref(v_localInstances_1436_);
lean_inc_ref(v_lctx_1435_);
lean_inc(v_zetaDeltaSet_1434_);
v___x_1445_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1445_, 0, v___x_1444_);
lean_ctor_set(v___x_1445_, 1, v_zetaDeltaSet_1434_);
lean_ctor_set(v___x_1445_, 2, v_lctx_1435_);
lean_ctor_set(v___x_1445_, 3, v_localInstances_1436_);
lean_ctor_set(v___x_1445_, 4, v_defEqCtx_x3f_1437_);
lean_ctor_set(v___x_1445_, 5, v_synthPendingDepth_1438_);
lean_ctor_set(v___x_1445_, 6, v_customCanUnfoldPredicate_x3f_1439_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*7, v_trackZetaDelta_1433_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*7 + 1, v_univApprox_1440_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1441_);
lean_ctor_set_uint8(v___x_1445_, sizeof(void*)*7 + 3, v_cacheInferType_1442_);
v___x_1446_ = l_Lean_Meta_isExprDefEqGuarded(v_a_1402_, v_b_1403_, v___x_1445_, v_a_1405_, v_a_1406_, v_a_1407_);
lean_dec_ref_known(v___x_1445_, 7);
return v___x_1446_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply___boxed(lean_object* v_approx_1449_, lean_object* v_a_1450_, lean_object* v_b_1451_, lean_object* v_a_1452_, lean_object* v_a_1453_, lean_object* v_a_1454_, lean_object* v_a_1455_, lean_object* v_a_1456_){
_start:
{
uint8_t v_approx_boxed_1457_; lean_object* v_res_1458_; 
v_approx_boxed_1457_ = lean_unbox(v_approx_1449_);
v_res_1458_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_boxed_1457_, v_a_1450_, v_b_1451_, v_a_1452_, v_a_1453_, v_a_1454_, v_a_1455_);
lean_dec(v_a_1455_);
lean_dec_ref(v_a_1454_);
lean_dec(v_a_1453_);
lean_dec_ref(v_a_1452_);
return v_res_1458_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(lean_object* v_mvarId_1459_, lean_object* v_cfg_1460_, lean_object* v_term_x3f_1461_, lean_object* v_targetType_1462_, lean_object* v_eType_1463_, lean_object* v_rangeNumArgs_1464_, lean_object* v_i_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_, lean_object* v_a_1469_){
_start:
{
lean_object* v_conclusionType_x3f_1472_; lean_object* v___y_1473_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; lean_object* v_lower_1479_; lean_object* v_upper_1480_; uint8_t v___x_1481_; 
v_lower_1479_ = lean_ctor_get(v_rangeNumArgs_1464_, 0);
v_upper_1480_ = lean_ctor_get(v_rangeNumArgs_1464_, 1);
v___x_1481_ = lean_nat_dec_lt(v_i_1465_, v_upper_1480_);
if (v___x_1481_ == 0)
{
lean_object* v___x_1482_; uint8_t v___x_1483_; 
lean_dec(v_i_1465_);
v___x_1482_ = lean_unsigned_to_nat(0u);
v___x_1483_ = lean_nat_dec_eq(v_lower_1479_, v___x_1482_);
if (v___x_1483_ == 0)
{
lean_object* v___x_1484_; uint8_t v___x_1485_; lean_object* v___x_1486_; 
lean_inc(v_lower_1479_);
v___x_1484_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1484_, 0, v_lower_1479_);
v___x_1485_ = 0;
lean_inc_ref(v_eType_1463_);
v___x_1486_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1463_, v___x_1484_, v___x_1485_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_);
if (lean_obj_tag(v___x_1486_) == 0)
{
lean_object* v_a_1487_; lean_object* v_snd_1488_; lean_object* v_snd_1489_; lean_object* v___x_1490_; 
v_a_1487_ = lean_ctor_get(v___x_1486_, 0);
lean_inc(v_a_1487_);
lean_dec_ref_known(v___x_1486_, 1);
v_snd_1488_ = lean_ctor_get(v_a_1487_, 1);
lean_inc(v_snd_1488_);
lean_dec(v_a_1487_);
v_snd_1489_ = lean_ctor_get(v_snd_1488_, 1);
lean_inc(v_snd_1489_);
lean_dec(v_snd_1488_);
v___x_1490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1490_, 0, v_snd_1489_);
v_conclusionType_x3f_1472_ = v___x_1490_;
v___y_1473_ = v_a_1466_;
v___y_1474_ = v_a_1467_;
v___y_1475_ = v_a_1468_;
v___y_1476_ = v_a_1469_;
goto v___jp_1471_;
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec_ref(v_eType_1463_);
lean_dec_ref(v_targetType_1462_);
lean_dec(v_term_x3f_1461_);
lean_dec(v_mvarId_1459_);
v_a_1491_ = lean_ctor_get(v___x_1486_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1486_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1486_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1486_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
else
{
lean_object* v___x_1499_; 
v___x_1499_ = lean_box(0);
v_conclusionType_x3f_1472_ = v___x_1499_;
v___y_1473_ = v_a_1466_;
v___y_1474_ = v_a_1467_;
v___y_1475_ = v_a_1468_;
v___y_1476_ = v_a_1469_;
goto v___jp_1471_;
}
}
else
{
lean_object* v___x_1500_; 
v___x_1500_ = l_Lean_Meta_saveState___redArg(v_a_1467_, v_a_1469_);
if (lean_obj_tag(v___x_1500_) == 0)
{
lean_object* v_a_1501_; lean_object* v___x_1502_; uint8_t v___x_1503_; lean_object* v___x_1504_; 
v_a_1501_ = lean_ctor_get(v___x_1500_, 0);
lean_inc(v_a_1501_);
lean_dec_ref_known(v___x_1500_, 1);
lean_inc(v_i_1465_);
v___x_1502_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1502_, 0, v_i_1465_);
v___x_1503_ = 0;
lean_inc_ref(v_eType_1463_);
v___x_1504_ = l_Lean_Meta_forallMetaTelescopeReducing(v_eType_1463_, v___x_1502_, v___x_1503_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_);
if (lean_obj_tag(v___x_1504_) == 0)
{
lean_object* v_a_1505_; lean_object* v_snd_1506_; lean_object* v_fst_1507_; lean_object* v_fst_1508_; lean_object* v_snd_1509_; lean_object* v___x_1511_; uint8_t v_isShared_1512_; uint8_t v_isSharedCheck_1547_; 
v_a_1505_ = lean_ctor_get(v___x_1504_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v___x_1504_, 1);
v_snd_1506_ = lean_ctor_get(v_a_1505_, 1);
lean_inc(v_snd_1506_);
v_fst_1507_ = lean_ctor_get(v_a_1505_, 0);
lean_inc(v_fst_1507_);
lean_dec(v_a_1505_);
v_fst_1508_ = lean_ctor_get(v_snd_1506_, 0);
v_snd_1509_ = lean_ctor_get(v_snd_1506_, 1);
v_isSharedCheck_1547_ = !lean_is_exclusive(v_snd_1506_);
if (v_isSharedCheck_1547_ == 0)
{
v___x_1511_ = v_snd_1506_;
v_isShared_1512_ = v_isSharedCheck_1547_;
goto v_resetjp_1510_;
}
else
{
lean_inc(v_snd_1509_);
lean_inc(v_fst_1508_);
lean_dec(v_snd_1506_);
v___x_1511_ = lean_box(0);
v_isShared_1512_ = v_isSharedCheck_1547_;
goto v_resetjp_1510_;
}
v_resetjp_1510_:
{
uint8_t v_approx_1513_; lean_object* v___x_1514_; 
v_approx_1513_ = lean_ctor_get_uint8(v_cfg_1460_, 3);
lean_inc_ref(v_targetType_1462_);
v___x_1514_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_approx_1513_, v_snd_1509_, v_targetType_1462_, v_a_1466_, v_a_1467_, v_a_1468_, v_a_1469_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v_a_1515_; lean_object* v___x_1517_; uint8_t v_isShared_1518_; uint8_t v_isSharedCheck_1538_; 
v_a_1515_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1538_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1538_ == 0)
{
v___x_1517_ = v___x_1514_;
v_isShared_1518_ = v_isSharedCheck_1538_;
goto v_resetjp_1516_;
}
else
{
lean_inc(v_a_1515_);
lean_dec(v___x_1514_);
v___x_1517_ = lean_box(0);
v_isShared_1518_ = v_isSharedCheck_1538_;
goto v_resetjp_1516_;
}
v_resetjp_1516_:
{
uint8_t v___x_1519_; 
v___x_1519_ = lean_unbox(v_a_1515_);
lean_dec(v_a_1515_);
if (v___x_1519_ == 0)
{
lean_object* v___x_1520_; 
lean_del_object(v___x_1517_);
lean_del_object(v___x_1511_);
lean_dec(v_fst_1508_);
lean_dec(v_fst_1507_);
v___x_1520_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1501_, v_a_1467_, v_a_1469_);
if (lean_obj_tag(v___x_1520_) == 0)
{
lean_object* v___x_1521_; lean_object* v___x_1522_; 
lean_dec_ref_known(v___x_1520_, 1);
v___x_1521_ = lean_unsigned_to_nat(1u);
v___x_1522_ = lean_nat_add(v_i_1465_, v___x_1521_);
lean_dec(v_i_1465_);
v_i_1465_ = v___x_1522_;
goto _start;
}
else
{
lean_object* v_a_1524_; lean_object* v___x_1526_; uint8_t v_isShared_1527_; uint8_t v_isSharedCheck_1531_; 
lean_dec(v_i_1465_);
lean_dec_ref(v_eType_1463_);
lean_dec_ref(v_targetType_1462_);
lean_dec(v_term_x3f_1461_);
lean_dec(v_mvarId_1459_);
v_a_1524_ = lean_ctor_get(v___x_1520_, 0);
v_isSharedCheck_1531_ = !lean_is_exclusive(v___x_1520_);
if (v_isSharedCheck_1531_ == 0)
{
v___x_1526_ = v___x_1520_;
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
else
{
lean_inc(v_a_1524_);
lean_dec(v___x_1520_);
v___x_1526_ = lean_box(0);
v_isShared_1527_ = v_isSharedCheck_1531_;
goto v_resetjp_1525_;
}
v_resetjp_1525_:
{
lean_object* v___x_1529_; 
if (v_isShared_1527_ == 0)
{
v___x_1529_ = v___x_1526_;
goto v_reusejp_1528_;
}
else
{
lean_object* v_reuseFailAlloc_1530_; 
v_reuseFailAlloc_1530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1530_, 0, v_a_1524_);
v___x_1529_ = v_reuseFailAlloc_1530_;
goto v_reusejp_1528_;
}
v_reusejp_1528_:
{
return v___x_1529_;
}
}
}
}
else
{
lean_object* v___x_1533_; 
lean_dec(v_a_1501_);
lean_dec(v_i_1465_);
lean_dec_ref(v_eType_1463_);
lean_dec_ref(v_targetType_1462_);
lean_dec(v_term_x3f_1461_);
lean_dec(v_mvarId_1459_);
if (v_isShared_1512_ == 0)
{
lean_ctor_set(v___x_1511_, 1, v_fst_1508_);
lean_ctor_set(v___x_1511_, 0, v_fst_1507_);
v___x_1533_ = v___x_1511_;
goto v_reusejp_1532_;
}
else
{
lean_object* v_reuseFailAlloc_1537_; 
v_reuseFailAlloc_1537_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1537_, 0, v_fst_1507_);
lean_ctor_set(v_reuseFailAlloc_1537_, 1, v_fst_1508_);
v___x_1533_ = v_reuseFailAlloc_1537_;
goto v_reusejp_1532_;
}
v_reusejp_1532_:
{
lean_object* v___x_1535_; 
if (v_isShared_1518_ == 0)
{
lean_ctor_set(v___x_1517_, 0, v___x_1533_);
v___x_1535_ = v___x_1517_;
goto v_reusejp_1534_;
}
else
{
lean_object* v_reuseFailAlloc_1536_; 
v_reuseFailAlloc_1536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1536_, 0, v___x_1533_);
v___x_1535_ = v_reuseFailAlloc_1536_;
goto v_reusejp_1534_;
}
v_reusejp_1534_:
{
return v___x_1535_;
}
}
}
}
}
else
{
lean_object* v_a_1539_; lean_object* v___x_1541_; uint8_t v_isShared_1542_; uint8_t v_isSharedCheck_1546_; 
lean_del_object(v___x_1511_);
lean_dec(v_fst_1508_);
lean_dec(v_fst_1507_);
lean_dec(v_a_1501_);
lean_dec(v_i_1465_);
lean_dec_ref(v_eType_1463_);
lean_dec_ref(v_targetType_1462_);
lean_dec(v_term_x3f_1461_);
lean_dec(v_mvarId_1459_);
v_a_1539_ = lean_ctor_get(v___x_1514_, 0);
v_isSharedCheck_1546_ = !lean_is_exclusive(v___x_1514_);
if (v_isSharedCheck_1546_ == 0)
{
v___x_1541_ = v___x_1514_;
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
else
{
lean_inc(v_a_1539_);
lean_dec(v___x_1514_);
v___x_1541_ = lean_box(0);
v_isShared_1542_ = v_isSharedCheck_1546_;
goto v_resetjp_1540_;
}
v_resetjp_1540_:
{
lean_object* v___x_1544_; 
if (v_isShared_1542_ == 0)
{
v___x_1544_ = v___x_1541_;
goto v_reusejp_1543_;
}
else
{
lean_object* v_reuseFailAlloc_1545_; 
v_reuseFailAlloc_1545_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1545_, 0, v_a_1539_);
v___x_1544_ = v_reuseFailAlloc_1545_;
goto v_reusejp_1543_;
}
v_reusejp_1543_:
{
return v___x_1544_;
}
}
}
}
}
else
{
lean_object* v_a_1548_; lean_object* v___x_1550_; uint8_t v_isShared_1551_; uint8_t v_isSharedCheck_1555_; 
lean_dec(v_a_1501_);
lean_dec(v_i_1465_);
lean_dec_ref(v_eType_1463_);
lean_dec_ref(v_targetType_1462_);
lean_dec(v_term_x3f_1461_);
lean_dec(v_mvarId_1459_);
v_a_1548_ = lean_ctor_get(v___x_1504_, 0);
v_isSharedCheck_1555_ = !lean_is_exclusive(v___x_1504_);
if (v_isSharedCheck_1555_ == 0)
{
v___x_1550_ = v___x_1504_;
v_isShared_1551_ = v_isSharedCheck_1555_;
goto v_resetjp_1549_;
}
else
{
lean_inc(v_a_1548_);
lean_dec(v___x_1504_);
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
lean_dec(v_i_1465_);
lean_dec_ref(v_eType_1463_);
lean_dec_ref(v_targetType_1462_);
lean_dec(v_term_x3f_1461_);
lean_dec(v_mvarId_1459_);
v_a_1556_ = lean_ctor_get(v___x_1500_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v___x_1500_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1558_ = v___x_1500_;
v_isShared_1559_ = v_isSharedCheck_1563_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1500_);
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
v___jp_1471_:
{
uint8_t v_approx_1477_; lean_object* v___x_1478_; 
v_approx_1477_ = lean_ctor_get_uint8(v_cfg_1460_, 3);
v___x_1478_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg(v_mvarId_1459_, v_eType_1463_, v_conclusionType_x3f_1472_, v_targetType_1462_, v_term_x3f_1461_, v_approx_1477_, v___y_1473_, v___y_1474_, v___y_1475_, v___y_1476_);
return v___x_1478_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go___boxed(lean_object* v_mvarId_1564_, lean_object* v_cfg_1565_, lean_object* v_term_x3f_1566_, lean_object* v_targetType_1567_, lean_object* v_eType_1568_, lean_object* v_rangeNumArgs_1569_, lean_object* v_i_1570_, lean_object* v_a_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_, lean_object* v_a_1574_, lean_object* v_a_1575_){
_start:
{
lean_object* v_res_1576_; 
v_res_1576_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1564_, v_cfg_1565_, v_term_x3f_1566_, v_targetType_1567_, v_eType_1568_, v_rangeNumArgs_1569_, v_i_1570_, v_a_1571_, v_a_1572_, v_a_1573_, v_a_1574_);
lean_dec(v_a_1574_);
lean_dec_ref(v_a_1573_);
lean_dec(v_a_1572_);
lean_dec_ref(v_a_1571_);
lean_dec_ref(v_rangeNumArgs_1569_);
lean_dec_ref(v_cfg_1565_);
return v_res_1576_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter___redArg(lean_object* v_x_1577_, lean_object* v_h__1_1578_){
_start:
{
lean_object* v_snd_1579_; lean_object* v_fst_1580_; lean_object* v_fst_1581_; lean_object* v_snd_1582_; lean_object* v___x_1583_; 
v_snd_1579_ = lean_ctor_get(v_x_1577_, 1);
lean_inc(v_snd_1579_);
v_fst_1580_ = lean_ctor_get(v_x_1577_, 0);
lean_inc(v_fst_1580_);
lean_dec_ref(v_x_1577_);
v_fst_1581_ = lean_ctor_get(v_snd_1579_, 0);
lean_inc(v_fst_1581_);
v_snd_1582_ = lean_ctor_get(v_snd_1579_, 1);
lean_inc(v_snd_1582_);
lean_dec(v_snd_1579_);
v___x_1583_ = lean_apply_3(v_h__1_1578_, v_fst_1580_, v_fst_1581_, v_snd_1582_);
return v___x_1583_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go_match__1_splitter(lean_object* v_motive_1584_, lean_object* v_x_1585_, lean_object* v_h__1_1586_){
_start:
{
lean_object* v_snd_1587_; lean_object* v_fst_1588_; lean_object* v_fst_1589_; lean_object* v_snd_1590_; lean_object* v___x_1591_; 
v_snd_1587_ = lean_ctor_get(v_x_1585_, 1);
lean_inc(v_snd_1587_);
v_fst_1588_ = lean_ctor_get(v_x_1585_, 0);
lean_inc(v_fst_1588_);
lean_dec_ref(v_x_1585_);
v_fst_1589_ = lean_ctor_get(v_snd_1587_, 0);
lean_inc(v_fst_1589_);
v_snd_1590_ = lean_ctor_get(v_snd_1587_, 1);
lean_inc(v_snd_1590_);
lean_dec(v_snd_1587_);
v___x_1591_ = lean_apply_3(v_h__1_1586_, v_fst_1588_, v_fst_1589_, v_snd_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(lean_object* v_e_1592_, lean_object* v___y_1593_){
_start:
{
uint8_t v___x_1595_; 
v___x_1595_ = l_Lean_Expr_hasMVar(v_e_1592_);
if (v___x_1595_ == 0)
{
lean_object* v___x_1596_; 
v___x_1596_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1596_, 0, v_e_1592_);
return v___x_1596_;
}
else
{
lean_object* v___x_1597_; lean_object* v_mctx_1598_; lean_object* v___x_1599_; lean_object* v_fst_1600_; lean_object* v_snd_1601_; lean_object* v___x_1602_; lean_object* v_cache_1603_; lean_object* v_zetaDeltaFVarIds_1604_; lean_object* v_postponed_1605_; lean_object* v_diag_1606_; lean_object* v___x_1608_; uint8_t v_isShared_1609_; uint8_t v_isSharedCheck_1615_; 
v___x_1597_ = lean_st_ref_get(v___y_1593_);
v_mctx_1598_ = lean_ctor_get(v___x_1597_, 0);
lean_inc_ref(v_mctx_1598_);
lean_dec(v___x_1597_);
v___x_1599_ = l_Lean_instantiateMVarsCore(v_mctx_1598_, v_e_1592_);
v_fst_1600_ = lean_ctor_get(v___x_1599_, 0);
lean_inc(v_fst_1600_);
v_snd_1601_ = lean_ctor_get(v___x_1599_, 1);
lean_inc(v_snd_1601_);
lean_dec_ref(v___x_1599_);
v___x_1602_ = lean_st_ref_take(v___y_1593_);
v_cache_1603_ = lean_ctor_get(v___x_1602_, 1);
v_zetaDeltaFVarIds_1604_ = lean_ctor_get(v___x_1602_, 2);
v_postponed_1605_ = lean_ctor_get(v___x_1602_, 3);
v_diag_1606_ = lean_ctor_get(v___x_1602_, 4);
v_isSharedCheck_1615_ = !lean_is_exclusive(v___x_1602_);
if (v_isSharedCheck_1615_ == 0)
{
lean_object* v_unused_1616_; 
v_unused_1616_ = lean_ctor_get(v___x_1602_, 0);
lean_dec(v_unused_1616_);
v___x_1608_ = v___x_1602_;
v_isShared_1609_ = v_isSharedCheck_1615_;
goto v_resetjp_1607_;
}
else
{
lean_inc(v_diag_1606_);
lean_inc(v_postponed_1605_);
lean_inc(v_zetaDeltaFVarIds_1604_);
lean_inc(v_cache_1603_);
lean_dec(v___x_1602_);
v___x_1608_ = lean_box(0);
v_isShared_1609_ = v_isSharedCheck_1615_;
goto v_resetjp_1607_;
}
v_resetjp_1607_:
{
lean_object* v___x_1611_; 
if (v_isShared_1609_ == 0)
{
lean_ctor_set(v___x_1608_, 0, v_snd_1601_);
v___x_1611_ = v___x_1608_;
goto v_reusejp_1610_;
}
else
{
lean_object* v_reuseFailAlloc_1614_; 
v_reuseFailAlloc_1614_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1614_, 0, v_snd_1601_);
lean_ctor_set(v_reuseFailAlloc_1614_, 1, v_cache_1603_);
lean_ctor_set(v_reuseFailAlloc_1614_, 2, v_zetaDeltaFVarIds_1604_);
lean_ctor_set(v_reuseFailAlloc_1614_, 3, v_postponed_1605_);
lean_ctor_set(v_reuseFailAlloc_1614_, 4, v_diag_1606_);
v___x_1611_ = v_reuseFailAlloc_1614_;
goto v_reusejp_1610_;
}
v_reusejp_1610_:
{
lean_object* v___x_1612_; lean_object* v___x_1613_; 
v___x_1612_ = lean_st_ref_put(v___y_1593_, v___x_1611_);
v___x_1613_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1613_, 0, v_fst_1600_);
return v___x_1613_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg___boxed(lean_object* v_e_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v_res_1620_; 
v_res_1620_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1617_, v___y_1618_);
lean_dec(v___y_1618_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(lean_object* v_e_1621_, lean_object* v___y_1622_, lean_object* v___y_1623_, lean_object* v___y_1624_, lean_object* v___y_1625_){
_start:
{
lean_object* v___x_1627_; 
v___x_1627_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1621_, v___y_1623_);
return v___x_1627_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___boxed(lean_object* v_e_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_){
_start:
{
lean_object* v_res_1634_; 
v_res_1634_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0(v_e_1628_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_);
lean_dec(v___y_1632_);
lean_dec_ref(v___y_1631_);
lean_dec(v___y_1630_);
lean_dec_ref(v___y_1629_);
return v_res_1634_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(lean_object* v_mvarId_1635_, lean_object* v_x_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v___x_1642_; 
v___x_1642_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_1635_, v_x_1636_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
if (lean_obj_tag(v___x_1642_) == 0)
{
lean_object* v_a_1643_; lean_object* v___x_1645_; uint8_t v_isShared_1646_; uint8_t v_isSharedCheck_1650_; 
v_a_1643_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1650_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1650_ == 0)
{
v___x_1645_ = v___x_1642_;
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
else
{
lean_inc(v_a_1643_);
lean_dec(v___x_1642_);
v___x_1645_ = lean_box(0);
v_isShared_1646_ = v_isSharedCheck_1650_;
goto v_resetjp_1644_;
}
v_resetjp_1644_:
{
lean_object* v___x_1648_; 
if (v_isShared_1646_ == 0)
{
v___x_1648_ = v___x_1645_;
goto v_reusejp_1647_;
}
else
{
lean_object* v_reuseFailAlloc_1649_; 
v_reuseFailAlloc_1649_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1649_, 0, v_a_1643_);
v___x_1648_ = v_reuseFailAlloc_1649_;
goto v_reusejp_1647_;
}
v_reusejp_1647_:
{
return v___x_1648_;
}
}
}
else
{
lean_object* v_a_1651_; lean_object* v___x_1653_; uint8_t v_isShared_1654_; uint8_t v_isSharedCheck_1658_; 
v_a_1651_ = lean_ctor_get(v___x_1642_, 0);
v_isSharedCheck_1658_ = !lean_is_exclusive(v___x_1642_);
if (v_isSharedCheck_1658_ == 0)
{
v___x_1653_ = v___x_1642_;
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
else
{
lean_inc(v_a_1651_);
lean_dec(v___x_1642_);
v___x_1653_ = lean_box(0);
v_isShared_1654_ = v_isSharedCheck_1658_;
goto v_resetjp_1652_;
}
v_resetjp_1652_:
{
lean_object* v___x_1656_; 
if (v_isShared_1654_ == 0)
{
v___x_1656_ = v___x_1653_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1657_; 
v_reuseFailAlloc_1657_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1657_, 0, v_a_1651_);
v___x_1656_ = v_reuseFailAlloc_1657_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
return v___x_1656_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg___boxed(lean_object* v_mvarId_1659_, lean_object* v_x_1660_, lean_object* v___y_1661_, lean_object* v___y_1662_, lean_object* v___y_1663_, lean_object* v___y_1664_, lean_object* v___y_1665_){
_start:
{
lean_object* v_res_1666_; 
v_res_1666_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1659_, v_x_1660_, v___y_1661_, v___y_1662_, v___y_1663_, v___y_1664_);
lean_dec(v___y_1664_);
lean_dec_ref(v___y_1663_);
lean_dec(v___y_1662_);
lean_dec_ref(v___y_1661_);
return v_res_1666_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(lean_object* v_00_u03b1_1667_, lean_object* v_mvarId_1668_, lean_object* v_x_1669_, lean_object* v___y_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_1668_, v_x_1669_, v___y_1670_, v___y_1671_, v___y_1672_, v___y_1673_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___boxed(lean_object* v_00_u03b1_1676_, lean_object* v_mvarId_1677_, lean_object* v_x_1678_, lean_object* v___y_1679_, lean_object* v___y_1680_, lean_object* v___y_1681_, lean_object* v___y_1682_, lean_object* v___y_1683_){
_start:
{
lean_object* v_res_1684_; 
v_res_1684_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6(v_00_u03b1_1676_, v_mvarId_1677_, v_x_1678_, v___y_1679_, v___y_1680_, v___y_1681_, v___y_1682_);
lean_dec(v___y_1682_);
lean_dec_ref(v___y_1681_);
lean_dec(v___y_1680_);
lean_dec_ref(v___y_1679_);
return v_res_1684_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(lean_object* v_as_1685_, size_t v_i_1686_, size_t v_stop_1687_, lean_object* v_b_1688_, lean_object* v___y_1689_){
_start:
{
lean_object* v_a_1692_; uint8_t v___x_1696_; 
v___x_1696_ = lean_usize_dec_eq(v_i_1686_, v_stop_1687_);
if (v___x_1696_ == 0)
{
lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___x_1697_ = lean_array_uget_borrowed(v_as_1685_, v_i_1686_);
v___x_1698_ = l_Lean_Expr_mvarId_x21(v___x_1697_);
v___x_1699_ = l_Lean_MVarId_isAssigned___at___00Lean_Meta_synthAppInstances_spec__0___redArg(v___x_1698_, v___y_1689_);
lean_dec(v___x_1698_);
if (lean_obj_tag(v___x_1699_) == 0)
{
lean_object* v_a_1700_; uint8_t v___x_1701_; 
v_a_1700_ = lean_ctor_get(v___x_1699_, 0);
lean_inc(v_a_1700_);
lean_dec_ref_known(v___x_1699_, 1);
v___x_1701_ = lean_unbox(v_a_1700_);
lean_dec(v_a_1700_);
if (v___x_1701_ == 0)
{
lean_object* v___x_1702_; 
lean_inc(v___x_1697_);
v___x_1702_ = lean_array_push(v_b_1688_, v___x_1697_);
v_a_1692_ = v___x_1702_;
goto v___jp_1691_;
}
else
{
v_a_1692_ = v_b_1688_;
goto v___jp_1691_;
}
}
else
{
lean_object* v_a_1703_; lean_object* v___x_1705_; uint8_t v_isShared_1706_; uint8_t v_isSharedCheck_1710_; 
lean_dec_ref(v_b_1688_);
v_a_1703_ = lean_ctor_get(v___x_1699_, 0);
v_isSharedCheck_1710_ = !lean_is_exclusive(v___x_1699_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1705_ = v___x_1699_;
v_isShared_1706_ = v_isSharedCheck_1710_;
goto v_resetjp_1704_;
}
else
{
lean_inc(v_a_1703_);
lean_dec(v___x_1699_);
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
else
{
lean_object* v___x_1711_; 
v___x_1711_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1711_, 0, v_b_1688_);
return v___x_1711_;
}
v___jp_1691_:
{
size_t v___x_1693_; size_t v___x_1694_; 
v___x_1693_ = ((size_t)1ULL);
v___x_1694_ = lean_usize_add(v_i_1686_, v___x_1693_);
v_i_1686_ = v___x_1694_;
v_b_1688_ = v_a_1692_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg___boxed(lean_object* v_as_1712_, lean_object* v_i_1713_, lean_object* v_stop_1714_, lean_object* v_b_1715_, lean_object* v___y_1716_, lean_object* v___y_1717_){
_start:
{
size_t v_i_boxed_1718_; size_t v_stop_boxed_1719_; lean_object* v_res_1720_; 
v_i_boxed_1718_ = lean_unbox_usize(v_i_1713_);
lean_dec(v_i_1713_);
v_stop_boxed_1719_ = lean_unbox_usize(v_stop_1714_);
lean_dec(v_stop_1714_);
v_res_1720_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_1712_, v_i_boxed_1718_, v_stop_boxed_1719_, v_b_1715_, v___y_1716_);
lean_dec(v___y_1716_);
lean_dec_ref(v_as_1712_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3(lean_object* v_as_1721_, lean_object* v___y_1722_, lean_object* v___y_1723_, lean_object* v___y_1724_, lean_object* v___y_1725_){
_start:
{
if (lean_obj_tag(v_as_1721_) == 0)
{
lean_object* v___x_1727_; lean_object* v___x_1728_; 
v___x_1727_ = lean_box(0);
v___x_1728_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1728_, 0, v___x_1727_);
return v___x_1728_;
}
else
{
lean_object* v_head_1729_; lean_object* v_tail_1730_; lean_object* v___x_1731_; 
v_head_1729_ = lean_ctor_get(v_as_1721_, 0);
lean_inc(v_head_1729_);
v_tail_1730_ = lean_ctor_get(v_as_1721_, 1);
lean_inc(v_tail_1730_);
lean_dec_ref_known(v_as_1721_, 2);
v___x_1731_ = l_Lean_MVarId_headBetaType(v_head_1729_, v___y_1722_, v___y_1723_, v___y_1724_, v___y_1725_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_dec_ref_known(v___x_1731_, 1);
v_as_1721_ = v_tail_1730_;
goto _start;
}
else
{
lean_dec(v_tail_1730_);
return v___x_1731_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00Lean_MVarId_apply_spec__3___boxed(lean_object* v_as_1733_, lean_object* v___y_1734_, lean_object* v___y_1735_, lean_object* v___y_1736_, lean_object* v___y_1737_, lean_object* v___y_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v_as_1733_, v___y_1734_, v___y_1735_, v___y_1736_, v___y_1737_);
lean_dec(v___y_1737_);
lean_dec_ref(v___y_1736_);
lean_dec(v___y_1735_);
lean_dec_ref(v___y_1734_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(lean_object* v_x_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_){
_start:
{
lean_object* v_ks_1744_; lean_object* v_vs_1745_; lean_object* v___x_1747_; uint8_t v_isShared_1748_; uint8_t v_isSharedCheck_1769_; 
v_ks_1744_ = lean_ctor_get(v_x_1740_, 0);
v_vs_1745_ = lean_ctor_get(v_x_1740_, 1);
v_isSharedCheck_1769_ = !lean_is_exclusive(v_x_1740_);
if (v_isSharedCheck_1769_ == 0)
{
v___x_1747_ = v_x_1740_;
v_isShared_1748_ = v_isSharedCheck_1769_;
goto v_resetjp_1746_;
}
else
{
lean_inc(v_vs_1745_);
lean_inc(v_ks_1744_);
lean_dec(v_x_1740_);
v___x_1747_ = lean_box(0);
v_isShared_1748_ = v_isSharedCheck_1769_;
goto v_resetjp_1746_;
}
v_resetjp_1746_:
{
lean_object* v___x_1749_; uint8_t v___x_1750_; 
v___x_1749_ = lean_array_get_size(v_ks_1744_);
v___x_1750_ = lean_nat_dec_lt(v_x_1741_, v___x_1749_);
if (v___x_1750_ == 0)
{
lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1754_; 
lean_dec(v_x_1741_);
v___x_1751_ = lean_array_push(v_ks_1744_, v_x_1742_);
v___x_1752_ = lean_array_push(v_vs_1745_, v_x_1743_);
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 1, v___x_1752_);
lean_ctor_set(v___x_1747_, 0, v___x_1751_);
v___x_1754_ = v___x_1747_;
goto v_reusejp_1753_;
}
else
{
lean_object* v_reuseFailAlloc_1755_; 
v_reuseFailAlloc_1755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1755_, 0, v___x_1751_);
lean_ctor_set(v_reuseFailAlloc_1755_, 1, v___x_1752_);
v___x_1754_ = v_reuseFailAlloc_1755_;
goto v_reusejp_1753_;
}
v_reusejp_1753_:
{
return v___x_1754_;
}
}
else
{
lean_object* v_k_x27_1756_; uint8_t v___x_1757_; 
v_k_x27_1756_ = lean_array_fget_borrowed(v_ks_1744_, v_x_1741_);
v___x_1757_ = l_Lean_instBEqMVarId_beq(v_x_1742_, v_k_x27_1756_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1759_; 
if (v_isShared_1748_ == 0)
{
v___x_1759_ = v___x_1747_;
goto v_reusejp_1758_;
}
else
{
lean_object* v_reuseFailAlloc_1763_; 
v_reuseFailAlloc_1763_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1763_, 0, v_ks_1744_);
lean_ctor_set(v_reuseFailAlloc_1763_, 1, v_vs_1745_);
v___x_1759_ = v_reuseFailAlloc_1763_;
goto v_reusejp_1758_;
}
v_reusejp_1758_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; 
v___x_1760_ = lean_unsigned_to_nat(1u);
v___x_1761_ = lean_nat_add(v_x_1741_, v___x_1760_);
lean_dec(v_x_1741_);
v_x_1740_ = v___x_1759_;
v_x_1741_ = v___x_1761_;
goto _start;
}
}
else
{
lean_object* v___x_1764_; lean_object* v___x_1765_; lean_object* v___x_1767_; 
v___x_1764_ = lean_array_fset(v_ks_1744_, v_x_1741_, v_x_1742_);
v___x_1765_ = lean_array_fset(v_vs_1745_, v_x_1741_, v_x_1743_);
lean_dec(v_x_1741_);
if (v_isShared_1748_ == 0)
{
lean_ctor_set(v___x_1747_, 1, v___x_1765_);
lean_ctor_set(v___x_1747_, 0, v___x_1764_);
v___x_1767_ = v___x_1747_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1768_; 
v_reuseFailAlloc_1768_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1768_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1768_, 1, v___x_1765_);
v___x_1767_ = v_reuseFailAlloc_1768_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
return v___x_1767_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(lean_object* v_n_1770_, lean_object* v_k_1771_, lean_object* v_v_1772_){
_start:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; 
v___x_1773_ = lean_unsigned_to_nat(0u);
v___x_1774_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_n_1770_, v___x_1773_, v_k_1771_, v_v_1772_);
return v___x_1774_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(lean_object* v_x_1776_, size_t v_x_1777_, size_t v_x_1778_, lean_object* v_x_1779_, lean_object* v_x_1780_){
_start:
{
if (lean_obj_tag(v_x_1776_) == 0)
{
lean_object* v_es_1781_; size_t v___x_1782_; size_t v___x_1783_; lean_object* v_j_1784_; lean_object* v___x_1785_; uint8_t v___x_1786_; 
v_es_1781_ = lean_ctor_get(v_x_1776_, 0);
v___x_1782_ = ((size_t)31ULL);
v___x_1783_ = lean_usize_land(v_x_1777_, v___x_1782_);
v_j_1784_ = lean_usize_to_nat(v___x_1783_);
v___x_1785_ = lean_array_get_size(v_es_1781_);
v___x_1786_ = lean_nat_dec_lt(v_j_1784_, v___x_1785_);
if (v___x_1786_ == 0)
{
lean_dec(v_j_1784_);
lean_dec(v_x_1780_);
lean_dec(v_x_1779_);
return v_x_1776_;
}
else
{
lean_object* v___x_1788_; uint8_t v_isShared_1789_; uint8_t v_isSharedCheck_1825_; 
lean_inc_ref(v_es_1781_);
v_isSharedCheck_1825_ = !lean_is_exclusive(v_x_1776_);
if (v_isSharedCheck_1825_ == 0)
{
lean_object* v_unused_1826_; 
v_unused_1826_ = lean_ctor_get(v_x_1776_, 0);
lean_dec(v_unused_1826_);
v___x_1788_ = v_x_1776_;
v_isShared_1789_ = v_isSharedCheck_1825_;
goto v_resetjp_1787_;
}
else
{
lean_dec(v_x_1776_);
v___x_1788_ = lean_box(0);
v_isShared_1789_ = v_isSharedCheck_1825_;
goto v_resetjp_1787_;
}
v_resetjp_1787_:
{
lean_object* v_v_1790_; lean_object* v___x_1791_; lean_object* v_xs_x27_1792_; lean_object* v___y_1794_; 
v_v_1790_ = lean_array_fget(v_es_1781_, v_j_1784_);
v___x_1791_ = lean_box(0);
v_xs_x27_1792_ = lean_array_fset(v_es_1781_, v_j_1784_, v___x_1791_);
switch(lean_obj_tag(v_v_1790_))
{
case 0:
{
lean_object* v_key_1799_; lean_object* v_val_1800_; lean_object* v___x_1802_; uint8_t v_isShared_1803_; uint8_t v_isSharedCheck_1810_; 
v_key_1799_ = lean_ctor_get(v_v_1790_, 0);
v_val_1800_ = lean_ctor_get(v_v_1790_, 1);
v_isSharedCheck_1810_ = !lean_is_exclusive(v_v_1790_);
if (v_isSharedCheck_1810_ == 0)
{
v___x_1802_ = v_v_1790_;
v_isShared_1803_ = v_isSharedCheck_1810_;
goto v_resetjp_1801_;
}
else
{
lean_inc(v_val_1800_);
lean_inc(v_key_1799_);
lean_dec(v_v_1790_);
v___x_1802_ = lean_box(0);
v_isShared_1803_ = v_isSharedCheck_1810_;
goto v_resetjp_1801_;
}
v_resetjp_1801_:
{
uint8_t v___x_1804_; 
v___x_1804_ = l_Lean_instBEqMVarId_beq(v_x_1779_, v_key_1799_);
if (v___x_1804_ == 0)
{
lean_object* v___x_1805_; lean_object* v___x_1806_; 
lean_del_object(v___x_1802_);
v___x_1805_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1799_, v_val_1800_, v_x_1779_, v_x_1780_);
v___x_1806_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1806_, 0, v___x_1805_);
v___y_1794_ = v___x_1806_;
goto v___jp_1793_;
}
else
{
lean_object* v___x_1808_; 
lean_dec(v_val_1800_);
lean_dec(v_key_1799_);
if (v_isShared_1803_ == 0)
{
lean_ctor_set(v___x_1802_, 1, v_x_1780_);
lean_ctor_set(v___x_1802_, 0, v_x_1779_);
v___x_1808_ = v___x_1802_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1809_; 
v_reuseFailAlloc_1809_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1809_, 0, v_x_1779_);
lean_ctor_set(v_reuseFailAlloc_1809_, 1, v_x_1780_);
v___x_1808_ = v_reuseFailAlloc_1809_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
v___y_1794_ = v___x_1808_;
goto v___jp_1793_;
}
}
}
}
case 1:
{
lean_object* v_node_1811_; lean_object* v___x_1813_; uint8_t v_isShared_1814_; uint8_t v_isSharedCheck_1823_; 
v_node_1811_ = lean_ctor_get(v_v_1790_, 0);
v_isSharedCheck_1823_ = !lean_is_exclusive(v_v_1790_);
if (v_isSharedCheck_1823_ == 0)
{
v___x_1813_ = v_v_1790_;
v_isShared_1814_ = v_isSharedCheck_1823_;
goto v_resetjp_1812_;
}
else
{
lean_inc(v_node_1811_);
lean_dec(v_v_1790_);
v___x_1813_ = lean_box(0);
v_isShared_1814_ = v_isSharedCheck_1823_;
goto v_resetjp_1812_;
}
v_resetjp_1812_:
{
size_t v___x_1815_; size_t v___x_1816_; size_t v___x_1817_; size_t v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1821_; 
v___x_1815_ = ((size_t)5ULL);
v___x_1816_ = lean_usize_shift_right(v_x_1777_, v___x_1815_);
v___x_1817_ = ((size_t)1ULL);
v___x_1818_ = lean_usize_add(v_x_1778_, v___x_1817_);
v___x_1819_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_node_1811_, v___x_1816_, v___x_1818_, v_x_1779_, v_x_1780_);
if (v_isShared_1814_ == 0)
{
lean_ctor_set(v___x_1813_, 0, v___x_1819_);
v___x_1821_ = v___x_1813_;
goto v_reusejp_1820_;
}
else
{
lean_object* v_reuseFailAlloc_1822_; 
v_reuseFailAlloc_1822_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1822_, 0, v___x_1819_);
v___x_1821_ = v_reuseFailAlloc_1822_;
goto v_reusejp_1820_;
}
v_reusejp_1820_:
{
v___y_1794_ = v___x_1821_;
goto v___jp_1793_;
}
}
}
default: 
{
lean_object* v___x_1824_; 
v___x_1824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1824_, 0, v_x_1779_);
lean_ctor_set(v___x_1824_, 1, v_x_1780_);
v___y_1794_ = v___x_1824_;
goto v___jp_1793_;
}
}
v___jp_1793_:
{
lean_object* v___x_1795_; lean_object* v___x_1797_; 
v___x_1795_ = lean_array_fset(v_xs_x27_1792_, v_j_1784_, v___y_1794_);
lean_dec(v_j_1784_);
if (v_isShared_1789_ == 0)
{
lean_ctor_set(v___x_1788_, 0, v___x_1795_);
v___x_1797_ = v___x_1788_;
goto v_reusejp_1796_;
}
else
{
lean_object* v_reuseFailAlloc_1798_; 
v_reuseFailAlloc_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1798_, 0, v___x_1795_);
v___x_1797_ = v_reuseFailAlloc_1798_;
goto v_reusejp_1796_;
}
v_reusejp_1796_:
{
return v___x_1797_;
}
}
}
}
}
else
{
lean_object* v_ks_1827_; lean_object* v_vs_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1846_; 
v_ks_1827_ = lean_ctor_get(v_x_1776_, 0);
v_vs_1828_ = lean_ctor_get(v_x_1776_, 1);
v_isSharedCheck_1846_ = !lean_is_exclusive(v_x_1776_);
if (v_isSharedCheck_1846_ == 0)
{
v___x_1830_ = v_x_1776_;
v_isShared_1831_ = v_isSharedCheck_1846_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_vs_1828_);
lean_inc(v_ks_1827_);
lean_dec(v_x_1776_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1846_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1833_; 
if (v_isShared_1831_ == 0)
{
v___x_1833_ = v___x_1830_;
goto v_reusejp_1832_;
}
else
{
lean_object* v_reuseFailAlloc_1845_; 
v_reuseFailAlloc_1845_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1845_, 0, v_ks_1827_);
lean_ctor_set(v_reuseFailAlloc_1845_, 1, v_vs_1828_);
v___x_1833_ = v_reuseFailAlloc_1845_;
goto v_reusejp_1832_;
}
v_reusejp_1832_:
{
lean_object* v_newNode_1834_; size_t v___x_1835_; uint8_t v___x_1836_; 
v_newNode_1834_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v___x_1833_, v_x_1779_, v_x_1780_);
v___x_1835_ = ((size_t)7ULL);
v___x_1836_ = lean_usize_dec_le(v___x_1835_, v_x_1778_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v___x_1838_; uint8_t v___x_1839_; 
v___x_1837_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_1834_);
v___x_1838_ = lean_unsigned_to_nat(4u);
v___x_1839_ = lean_nat_dec_lt(v___x_1837_, v___x_1838_);
lean_dec(v___x_1837_);
if (v___x_1839_ == 0)
{
lean_object* v_ks_1840_; lean_object* v_vs_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v_ks_1840_ = lean_ctor_get(v_newNode_1834_, 0);
lean_inc_ref(v_ks_1840_);
v_vs_1841_ = lean_ctor_get(v_newNode_1834_, 1);
lean_inc_ref(v_vs_1841_);
lean_dec_ref(v_newNode_1834_);
v___x_1842_ = lean_unsigned_to_nat(0u);
v___x_1843_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_1844_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_x_1778_, v_ks_1840_, v_vs_1841_, v___x_1842_, v___x_1843_);
lean_dec_ref(v_vs_1841_);
lean_dec_ref(v_ks_1840_);
return v___x_1844_;
}
else
{
return v_newNode_1834_;
}
}
else
{
return v_newNode_1834_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(size_t v_depth_1847_, lean_object* v_keys_1848_, lean_object* v_vals_1849_, lean_object* v_i_1850_, lean_object* v_entries_1851_){
_start:
{
lean_object* v___x_1852_; uint8_t v___x_1853_; 
v___x_1852_ = lean_array_get_size(v_keys_1848_);
v___x_1853_ = lean_nat_dec_lt(v_i_1850_, v___x_1852_);
if (v___x_1853_ == 0)
{
lean_dec(v_i_1850_);
return v_entries_1851_;
}
else
{
lean_object* v_k_1854_; lean_object* v_v_1855_; uint64_t v___x_1856_; size_t v_h_1857_; size_t v___x_1858_; lean_object* v___x_1859_; size_t v___x_1860_; size_t v___x_1861_; size_t v___x_1862_; size_t v_h_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; 
v_k_1854_ = lean_array_fget_borrowed(v_keys_1848_, v_i_1850_);
v_v_1855_ = lean_array_fget_borrowed(v_vals_1849_, v_i_1850_);
v___x_1856_ = l_Lean_instHashableMVarId_hash(v_k_1854_);
v_h_1857_ = lean_uint64_to_usize(v___x_1856_);
v___x_1858_ = ((size_t)5ULL);
v___x_1859_ = lean_unsigned_to_nat(1u);
v___x_1860_ = ((size_t)1ULL);
v___x_1861_ = lean_usize_sub(v_depth_1847_, v___x_1860_);
v___x_1862_ = lean_usize_mul(v___x_1858_, v___x_1861_);
v_h_1863_ = lean_usize_shift_right(v_h_1857_, v___x_1862_);
v___x_1864_ = lean_nat_add(v_i_1850_, v___x_1859_);
lean_dec(v_i_1850_);
lean_inc(v_v_1855_);
lean_inc(v_k_1854_);
v___x_1865_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_entries_1851_, v_h_1863_, v_depth_1847_, v_k_1854_, v_v_1855_);
v_i_1850_ = v___x_1864_;
v_entries_1851_ = v___x_1865_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg___boxed(lean_object* v_depth_1867_, lean_object* v_keys_1868_, lean_object* v_vals_1869_, lean_object* v_i_1870_, lean_object* v_entries_1871_){
_start:
{
size_t v_depth_boxed_1872_; lean_object* v_res_1873_; 
v_depth_boxed_1872_ = lean_unbox_usize(v_depth_1867_);
lean_dec(v_depth_1867_);
v_res_1873_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_boxed_1872_, v_keys_1868_, v_vals_1869_, v_i_1870_, v_entries_1871_);
lean_dec_ref(v_vals_1869_);
lean_dec_ref(v_keys_1868_);
return v_res_1873_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_1874_, lean_object* v_x_1875_, lean_object* v_x_1876_, lean_object* v_x_1877_, lean_object* v_x_1878_){
_start:
{
size_t v_x_7070__boxed_1879_; size_t v_x_7071__boxed_1880_; lean_object* v_res_1881_; 
v_x_7070__boxed_1879_ = lean_unbox_usize(v_x_1875_);
lean_dec(v_x_1875_);
v_x_7071__boxed_1880_ = lean_unbox_usize(v_x_1876_);
lean_dec(v_x_1876_);
v_res_1881_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1874_, v_x_7070__boxed_1879_, v_x_7071__boxed_1880_, v_x_1877_, v_x_1878_);
return v_res_1881_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(lean_object* v_x_1882_, lean_object* v_x_1883_, lean_object* v_x_1884_){
_start:
{
uint64_t v___x_1885_; size_t v___x_1886_; size_t v___x_1887_; lean_object* v___x_1888_; 
v___x_1885_ = l_Lean_instHashableMVarId_hash(v_x_1883_);
v___x_1886_ = lean_uint64_to_usize(v___x_1885_);
v___x_1887_ = ((size_t)1ULL);
v___x_1888_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_1882_, v___x_1886_, v___x_1887_, v_x_1883_, v_x_1884_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(lean_object* v_mvarId_1889_, lean_object* v_val_1890_, lean_object* v___y_1891_){
_start:
{
lean_object* v___x_1893_; lean_object* v_mctx_1894_; lean_object* v_cache_1895_; lean_object* v_zetaDeltaFVarIds_1896_; lean_object* v_postponed_1897_; lean_object* v_diag_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1927_; 
v___x_1893_ = lean_st_ref_take(v___y_1891_);
v_mctx_1894_ = lean_ctor_get(v___x_1893_, 0);
v_cache_1895_ = lean_ctor_get(v___x_1893_, 1);
v_zetaDeltaFVarIds_1896_ = lean_ctor_get(v___x_1893_, 2);
v_postponed_1897_ = lean_ctor_get(v___x_1893_, 3);
v_diag_1898_ = lean_ctor_get(v___x_1893_, 4);
v_isSharedCheck_1927_ = !lean_is_exclusive(v___x_1893_);
if (v_isSharedCheck_1927_ == 0)
{
v___x_1900_ = v___x_1893_;
v_isShared_1901_ = v_isSharedCheck_1927_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_diag_1898_);
lean_inc(v_postponed_1897_);
lean_inc(v_zetaDeltaFVarIds_1896_);
lean_inc(v_cache_1895_);
lean_inc(v_mctx_1894_);
lean_dec(v___x_1893_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1927_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v_depth_1902_; lean_object* v_levelAssignDepth_1903_; lean_object* v_lmvarCounter_1904_; lean_object* v_mvarCounter_1905_; lean_object* v_lDecls_1906_; lean_object* v_decls_1907_; lean_object* v_userNames_1908_; lean_object* v_lAssignment_1909_; lean_object* v_eAssignment_1910_; lean_object* v_dAssignment_1911_; lean_object* v_instanceTypedMVars_1912_; lean_object* v___x_1914_; uint8_t v_isShared_1915_; uint8_t v_isSharedCheck_1926_; 
v_depth_1902_ = lean_ctor_get(v_mctx_1894_, 0);
v_levelAssignDepth_1903_ = lean_ctor_get(v_mctx_1894_, 1);
v_lmvarCounter_1904_ = lean_ctor_get(v_mctx_1894_, 2);
v_mvarCounter_1905_ = lean_ctor_get(v_mctx_1894_, 3);
v_lDecls_1906_ = lean_ctor_get(v_mctx_1894_, 4);
v_decls_1907_ = lean_ctor_get(v_mctx_1894_, 5);
v_userNames_1908_ = lean_ctor_get(v_mctx_1894_, 6);
v_lAssignment_1909_ = lean_ctor_get(v_mctx_1894_, 7);
v_eAssignment_1910_ = lean_ctor_get(v_mctx_1894_, 8);
v_dAssignment_1911_ = lean_ctor_get(v_mctx_1894_, 9);
v_instanceTypedMVars_1912_ = lean_ctor_get(v_mctx_1894_, 10);
v_isSharedCheck_1926_ = !lean_is_exclusive(v_mctx_1894_);
if (v_isSharedCheck_1926_ == 0)
{
v___x_1914_ = v_mctx_1894_;
v_isShared_1915_ = v_isSharedCheck_1926_;
goto v_resetjp_1913_;
}
else
{
lean_inc(v_instanceTypedMVars_1912_);
lean_inc(v_dAssignment_1911_);
lean_inc(v_eAssignment_1910_);
lean_inc(v_lAssignment_1909_);
lean_inc(v_userNames_1908_);
lean_inc(v_decls_1907_);
lean_inc(v_lDecls_1906_);
lean_inc(v_mvarCounter_1905_);
lean_inc(v_lmvarCounter_1904_);
lean_inc(v_levelAssignDepth_1903_);
lean_inc(v_depth_1902_);
lean_dec(v_mctx_1894_);
v___x_1914_ = lean_box(0);
v_isShared_1915_ = v_isSharedCheck_1926_;
goto v_resetjp_1913_;
}
v_resetjp_1913_:
{
lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1916_ = lean_box(0);
v___x_1917_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_eAssignment_1910_, v_mvarId_1889_, v_val_1890_);
if (v_isShared_1915_ == 0)
{
lean_ctor_set(v___x_1914_, 8, v___x_1917_);
v___x_1919_ = v___x_1914_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1925_; 
v_reuseFailAlloc_1925_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_1925_, 0, v_depth_1902_);
lean_ctor_set(v_reuseFailAlloc_1925_, 1, v_levelAssignDepth_1903_);
lean_ctor_set(v_reuseFailAlloc_1925_, 2, v_lmvarCounter_1904_);
lean_ctor_set(v_reuseFailAlloc_1925_, 3, v_mvarCounter_1905_);
lean_ctor_set(v_reuseFailAlloc_1925_, 4, v_lDecls_1906_);
lean_ctor_set(v_reuseFailAlloc_1925_, 5, v_decls_1907_);
lean_ctor_set(v_reuseFailAlloc_1925_, 6, v_userNames_1908_);
lean_ctor_set(v_reuseFailAlloc_1925_, 7, v_lAssignment_1909_);
lean_ctor_set(v_reuseFailAlloc_1925_, 8, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1925_, 9, v_dAssignment_1911_);
lean_ctor_set(v_reuseFailAlloc_1925_, 10, v_instanceTypedMVars_1912_);
v___x_1919_ = v_reuseFailAlloc_1925_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
lean_object* v___x_1921_; 
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 0, v___x_1919_);
v___x_1921_ = v___x_1900_;
goto v_reusejp_1920_;
}
else
{
lean_object* v_reuseFailAlloc_1924_; 
v_reuseFailAlloc_1924_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1924_, 0, v___x_1919_);
lean_ctor_set(v_reuseFailAlloc_1924_, 1, v_cache_1895_);
lean_ctor_set(v_reuseFailAlloc_1924_, 2, v_zetaDeltaFVarIds_1896_);
lean_ctor_set(v_reuseFailAlloc_1924_, 3, v_postponed_1897_);
lean_ctor_set(v_reuseFailAlloc_1924_, 4, v_diag_1898_);
v___x_1921_ = v_reuseFailAlloc_1924_;
goto v_reusejp_1920_;
}
v_reusejp_1920_:
{
lean_object* v___x_1922_; lean_object* v___x_1923_; 
v___x_1922_ = lean_st_ref_put(v___y_1891_, v___x_1921_);
v___x_1923_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1923_, 0, v___x_1916_);
return v___x_1923_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg___boxed(lean_object* v_mvarId_1928_, lean_object* v_val_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1928_, v_val_1929_, v___y_1930_);
lean_dec(v___y_1930_);
return v_res_1932_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_MVarId_apply_spec__2(lean_object* v_a_1933_, lean_object* v_x_1934_){
_start:
{
if (lean_obj_tag(v_x_1934_) == 0)
{
uint8_t v___x_1935_; 
v___x_1935_ = 0;
return v___x_1935_;
}
else
{
lean_object* v_head_1936_; lean_object* v_tail_1937_; uint8_t v___x_1938_; 
v_head_1936_ = lean_ctor_get(v_x_1934_, 0);
v_tail_1937_ = lean_ctor_get(v_x_1934_, 1);
v___x_1938_ = l_Lean_instBEqMVarId_beq(v_a_1933_, v_head_1936_);
if (v___x_1938_ == 0)
{
v_x_1934_ = v_tail_1937_;
goto _start;
}
else
{
return v___x_1938_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_MVarId_apply_spec__2___boxed(lean_object* v_a_1940_, lean_object* v_x_1941_){
_start:
{
uint8_t v_res_1942_; lean_object* v_r_1943_; 
v_res_1942_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v_a_1940_, v_x_1941_);
lean_dec(v_x_1941_);
lean_dec(v_a_1940_);
v_r_1943_ = lean_box(v_res_1942_);
return v_r_1943_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(lean_object* v_a_1944_, lean_object* v_as_1945_, size_t v_i_1946_, size_t v_stop_1947_, lean_object* v_b_1948_){
_start:
{
lean_object* v___y_1950_; uint8_t v___x_1954_; 
v___x_1954_ = lean_usize_dec_eq(v_i_1946_, v_stop_1947_);
if (v___x_1954_ == 0)
{
lean_object* v___x_1955_; uint8_t v___x_1956_; 
v___x_1955_ = lean_array_uget_borrowed(v_as_1945_, v_i_1946_);
v___x_1956_ = l_List_elem___at___00Lean_MVarId_apply_spec__2(v___x_1955_, v_a_1944_);
if (v___x_1956_ == 0)
{
lean_object* v___x_1957_; 
lean_inc(v___x_1955_);
v___x_1957_ = lean_array_push(v_b_1948_, v___x_1955_);
v___y_1950_ = v___x_1957_;
goto v___jp_1949_;
}
else
{
v___y_1950_ = v_b_1948_;
goto v___jp_1949_;
}
}
else
{
return v_b_1948_;
}
v___jp_1949_:
{
size_t v___x_1951_; size_t v___x_1952_; 
v___x_1951_ = ((size_t)1ULL);
v___x_1952_ = lean_usize_add(v_i_1946_, v___x_1951_);
v_i_1946_ = v___x_1952_;
v_b_1948_ = v___y_1950_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4___boxed(lean_object* v_a_1958_, lean_object* v_as_1959_, lean_object* v_i_1960_, lean_object* v_stop_1961_, lean_object* v_b_1962_){
_start:
{
size_t v_i_boxed_1963_; size_t v_stop_boxed_1964_; lean_object* v_res_1965_; 
v_i_boxed_1963_ = lean_unbox_usize(v_i_1960_);
lean_dec(v_i_1960_);
v_stop_boxed_1964_ = lean_unbox_usize(v_stop_1961_);
lean_dec(v_stop_1961_);
v_res_1965_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_1958_, v_as_1959_, v_i_boxed_1963_, v_stop_boxed_1964_, v_b_1962_);
lean_dec_ref(v_as_1959_);
lean_dec(v_a_1958_);
return v_res_1965_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0(lean_object* v_mvarId_1966_, lean_object* v___x_1967_, lean_object* v_e_1968_, lean_object* v_cfg_1969_, lean_object* v_term_x3f_1970_, lean_object* v___y_1971_, lean_object* v___y_1972_, lean_object* v___y_1973_, lean_object* v___y_1974_){
_start:
{
lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; lean_object* v___y_1980_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_2003_; lean_object* v___y_2004_; lean_object* v___y_2005_; lean_object* v___y_2006_; lean_object* v___y_2007_; lean_object* v___y_2008_; lean_object* v___y_2009_; uint8_t v___y_2010_; lean_object* v_a_2011_; lean_object* v___x_2039_; 
lean_inc(v___x_1967_);
lean_inc(v_mvarId_1966_);
v___x_2039_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1966_, v___x_1967_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_2039_) == 0)
{
lean_object* v___x_2040_; 
lean_dec_ref_known(v___x_2039_, 1);
lean_inc(v_mvarId_1966_);
v___x_2040_ = l_Lean_MVarId_getType(v_mvarId_1966_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_2040_) == 0)
{
lean_object* v_a_2041_; lean_object* v___x_2042_; 
v_a_2041_ = lean_ctor_get(v___x_2040_, 0);
lean_inc(v_a_2041_);
lean_dec_ref_known(v___x_2040_, 1);
lean_inc(v___y_1974_);
lean_inc_ref(v___y_1973_);
lean_inc(v___y_1972_);
lean_inc_ref(v___y_1971_);
lean_inc_ref(v_e_1968_);
v___x_2042_ = lean_infer_type(v_e_1968_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_2042_) == 0)
{
lean_object* v_a_2043_; lean_object* v_rangeNumArgs_2045_; lean_object* v_lower_2046_; lean_object* v___y_2047_; lean_object* v___y_2048_; lean_object* v___y_2049_; lean_object* v___y_2050_; lean_object* v___x_2095_; 
v_a_2043_ = lean_ctor_get(v___x_2042_, 0);
lean_inc_n(v_a_2043_, 2);
lean_dec_ref_known(v___x_2042_, 1);
v___x_2095_ = l_Lean_Meta_getExpectedNumArgsAux(v_a_2043_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_2095_) == 0)
{
lean_object* v_a_2096_; lean_object* v_snd_2097_; uint8_t v___x_2098_; 
v_a_2096_ = lean_ctor_get(v___x_2095_, 0);
lean_inc(v_a_2096_);
lean_dec_ref_known(v___x_2095_, 1);
v_snd_2097_ = lean_ctor_get(v_a_2096_, 1);
v___x_2098_ = lean_unbox(v_snd_2097_);
if (v___x_2098_ == 0)
{
lean_object* v_fst_2099_; lean_object* v___x_2101_; uint8_t v_isShared_2102_; uint8_t v_isSharedCheck_2119_; 
v_fst_2099_ = lean_ctor_get(v_a_2096_, 0);
v_isSharedCheck_2119_ = !lean_is_exclusive(v_a_2096_);
if (v_isSharedCheck_2119_ == 0)
{
lean_object* v_unused_2120_; 
v_unused_2120_ = lean_ctor_get(v_a_2096_, 1);
lean_dec(v_unused_2120_);
v___x_2101_ = v_a_2096_;
v_isShared_2102_ = v_isSharedCheck_2119_;
goto v_resetjp_2100_;
}
else
{
lean_inc(v_fst_2099_);
lean_dec(v_a_2096_);
v___x_2101_ = lean_box(0);
v_isShared_2102_ = v_isSharedCheck_2119_;
goto v_resetjp_2100_;
}
v_resetjp_2100_:
{
lean_object* v___x_2103_; 
lean_inc(v_a_2041_);
v___x_2103_ = l_Lean_Meta_getExpectedNumArgs(v_a_2041_, v___y_1971_, v___y_1972_, v___y_1973_, v___y_1974_);
if (lean_obj_tag(v___x_2103_) == 0)
{
lean_object* v_a_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v_a_2104_ = lean_ctor_get(v___x_2103_, 0);
lean_inc(v_a_2104_);
lean_dec_ref_known(v___x_2103_, 1);
v___x_2105_ = lean_nat_sub(v_fst_2099_, v_a_2104_);
lean_dec(v_a_2104_);
v___x_2106_ = lean_unsigned_to_nat(1u);
v___x_2107_ = lean_nat_add(v_fst_2099_, v___x_2106_);
lean_dec(v_fst_2099_);
lean_inc(v___x_2105_);
if (v_isShared_2102_ == 0)
{
lean_ctor_set(v___x_2101_, 1, v___x_2107_);
lean_ctor_set(v___x_2101_, 0, v___x_2105_);
v___x_2109_ = v___x_2101_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v___x_2105_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v___x_2107_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
v_rangeNumArgs_2045_ = v___x_2109_;
v_lower_2046_ = v___x_2105_;
v___y_2047_ = v___y_1971_;
v___y_2048_ = v___y_1972_;
v___y_2049_ = v___y_1973_;
v___y_2050_ = v___y_1974_;
goto v___jp_2044_;
}
}
else
{
lean_object* v_a_2111_; lean_object* v___x_2113_; uint8_t v_isShared_2114_; uint8_t v_isSharedCheck_2118_; 
lean_del_object(v___x_2101_);
lean_dec(v_fst_2099_);
lean_dec(v_a_2043_);
lean_dec(v_a_2041_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v_term_x3f_1970_);
lean_dec_ref(v_e_1968_);
lean_dec(v___x_1967_);
lean_dec(v_mvarId_1966_);
v_a_2111_ = lean_ctor_get(v___x_2103_, 0);
v_isSharedCheck_2118_ = !lean_is_exclusive(v___x_2103_);
if (v_isSharedCheck_2118_ == 0)
{
v___x_2113_ = v___x_2103_;
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
else
{
lean_inc(v_a_2111_);
lean_dec(v___x_2103_);
v___x_2113_ = lean_box(0);
v_isShared_2114_ = v_isSharedCheck_2118_;
goto v_resetjp_2112_;
}
v_resetjp_2112_:
{
lean_object* v___x_2116_; 
if (v_isShared_2114_ == 0)
{
v___x_2116_ = v___x_2113_;
goto v_reusejp_2115_;
}
else
{
lean_object* v_reuseFailAlloc_2117_; 
v_reuseFailAlloc_2117_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2117_, 0, v_a_2111_);
v___x_2116_ = v_reuseFailAlloc_2117_;
goto v_reusejp_2115_;
}
v_reusejp_2115_:
{
return v___x_2116_;
}
}
}
}
}
else
{
lean_object* v_fst_2121_; lean_object* v___x_2123_; uint8_t v_isShared_2124_; uint8_t v_isSharedCheck_2130_; 
v_fst_2121_ = lean_ctor_get(v_a_2096_, 0);
v_isSharedCheck_2130_ = !lean_is_exclusive(v_a_2096_);
if (v_isSharedCheck_2130_ == 0)
{
lean_object* v_unused_2131_; 
v_unused_2131_ = lean_ctor_get(v_a_2096_, 1);
lean_dec(v_unused_2131_);
v___x_2123_ = v_a_2096_;
v_isShared_2124_ = v_isSharedCheck_2130_;
goto v_resetjp_2122_;
}
else
{
lean_inc(v_fst_2121_);
lean_dec(v_a_2096_);
v___x_2123_ = lean_box(0);
v_isShared_2124_ = v_isSharedCheck_2130_;
goto v_resetjp_2122_;
}
v_resetjp_2122_:
{
lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2128_; 
v___x_2125_ = lean_unsigned_to_nat(1u);
v___x_2126_ = lean_nat_add(v_fst_2121_, v___x_2125_);
lean_inc(v_fst_2121_);
if (v_isShared_2124_ == 0)
{
lean_ctor_set(v___x_2123_, 1, v___x_2126_);
v___x_2128_ = v___x_2123_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v_fst_2121_);
lean_ctor_set(v_reuseFailAlloc_2129_, 1, v___x_2126_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
v_rangeNumArgs_2045_ = v___x_2128_;
v_lower_2046_ = v_fst_2121_;
v___y_2047_ = v___y_1971_;
v___y_2048_ = v___y_1972_;
v___y_2049_ = v___y_1973_;
v___y_2050_ = v___y_1974_;
goto v___jp_2044_;
}
}
}
}
else
{
lean_object* v_a_2132_; lean_object* v___x_2134_; uint8_t v_isShared_2135_; uint8_t v_isSharedCheck_2139_; 
lean_dec(v_a_2043_);
lean_dec(v_a_2041_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v_term_x3f_1970_);
lean_dec_ref(v_e_1968_);
lean_dec(v___x_1967_);
lean_dec(v_mvarId_1966_);
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
v___jp_2044_:
{
lean_object* v___x_2051_; 
lean_inc(v_mvarId_1966_);
v___x_2051_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_apply_go(v_mvarId_1966_, v_cfg_1969_, v_term_x3f_1970_, v_a_2041_, v_a_2043_, v_rangeNumArgs_2045_, v_lower_2046_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
lean_dec_ref(v_rangeNumArgs_2045_);
if (lean_obj_tag(v___x_2051_) == 0)
{
lean_object* v_a_2052_; lean_object* v_fst_2053_; lean_object* v_snd_2054_; uint8_t v_newGoals_2055_; uint8_t v_synthAssignedInstances_2056_; uint8_t v_allowSynthFailures_2057_; lean_object* v___x_2058_; 
v_a_2052_ = lean_ctor_get(v___x_2051_, 0);
lean_inc(v_a_2052_);
lean_dec_ref_known(v___x_2051_, 1);
v_fst_2053_ = lean_ctor_get(v_a_2052_, 0);
lean_inc(v_fst_2053_);
v_snd_2054_ = lean_ctor_get(v_a_2052_, 1);
lean_inc_n(v_snd_2054_, 2);
lean_dec(v_a_2052_);
v_newGoals_2055_ = lean_ctor_get_uint8(v_cfg_1969_, 0);
v_synthAssignedInstances_2056_ = lean_ctor_get_uint8(v_cfg_1969_, 1);
v_allowSynthFailures_2057_ = lean_ctor_get_uint8(v_cfg_1969_, 2);
lean_inc(v_mvarId_1966_);
v___x_2058_ = l_Lean_Meta_synthAppInstances(v___x_1967_, v_mvarId_1966_, v_fst_2053_, v_snd_2054_, v_synthAssignedInstances_2056_, v_allowSynthFailures_2057_, v___y_2047_, v___y_2048_, v___y_2049_, v___y_2050_);
if (lean_obj_tag(v___x_2058_) == 0)
{
lean_object* v___x_2059_; lean_object* v_a_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; 
lean_dec_ref_known(v___x_2058_, 1);
v___x_2059_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_e_1968_, v___y_2048_);
v_a_2060_ = lean_ctor_get(v___x_2059_, 0);
lean_inc_n(v_a_2060_, 2);
lean_dec_ref(v___x_2059_);
v___x_2061_ = l_Lean_mkAppN(v_a_2060_, v_fst_2053_);
lean_inc(v_mvarId_1966_);
v___x_2062_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_1966_, v___x_2061_, v___y_2048_);
lean_dec_ref(v___x_2062_);
v___x_2063_ = lean_unsigned_to_nat(0u);
v___x_2064_ = lean_array_get_size(v_fst_2053_);
v___x_2065_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_synthAppInstances_step___closed__0));
v___x_2066_ = lean_nat_dec_lt(v___x_2063_, v___x_2064_);
if (v___x_2066_ == 0)
{
lean_dec(v_fst_2053_);
v___y_2003_ = v___y_2050_;
v___y_2004_ = v___y_2047_;
v___y_2005_ = v___y_2049_;
v___y_2006_ = v___y_2048_;
v___y_2007_ = v_a_2060_;
v___y_2008_ = v___x_2063_;
v___y_2009_ = v_snd_2054_;
v___y_2010_ = v_newGoals_2055_;
v_a_2011_ = v___x_2065_;
goto v___jp_2002_;
}
else
{
size_t v___x_2067_; size_t v___x_2068_; lean_object* v___x_2069_; 
v___x_2067_ = ((size_t)0ULL);
v___x_2068_ = lean_usize_of_nat(v___x_2064_);
v___x_2069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_fst_2053_, v___x_2067_, v___x_2068_, v___x_2065_, v___y_2048_);
lean_dec(v_fst_2053_);
if (lean_obj_tag(v___x_2069_) == 0)
{
lean_object* v_a_2070_; 
v_a_2070_ = lean_ctor_get(v___x_2069_, 0);
lean_inc(v_a_2070_);
lean_dec_ref_known(v___x_2069_, 1);
v___y_2003_ = v___y_2050_;
v___y_2004_ = v___y_2047_;
v___y_2005_ = v___y_2049_;
v___y_2006_ = v___y_2048_;
v___y_2007_ = v_a_2060_;
v___y_2008_ = v___x_2063_;
v___y_2009_ = v_snd_2054_;
v___y_2010_ = v_newGoals_2055_;
v_a_2011_ = v_a_2070_;
goto v___jp_2002_;
}
else
{
lean_object* v_a_2071_; lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2078_; 
lean_dec(v_a_2060_);
lean_dec(v_snd_2054_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec(v_mvarId_1966_);
v_a_2071_ = lean_ctor_get(v___x_2069_, 0);
v_isSharedCheck_2078_ = !lean_is_exclusive(v___x_2069_);
if (v_isSharedCheck_2078_ == 0)
{
v___x_2073_ = v___x_2069_;
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
else
{
lean_inc(v_a_2071_);
lean_dec(v___x_2069_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2078_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2076_; 
if (v_isShared_2074_ == 0)
{
v___x_2076_ = v___x_2073_;
goto v_reusejp_2075_;
}
else
{
lean_object* v_reuseFailAlloc_2077_; 
v_reuseFailAlloc_2077_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2077_, 0, v_a_2071_);
v___x_2076_ = v_reuseFailAlloc_2077_;
goto v_reusejp_2075_;
}
v_reusejp_2075_:
{
return v___x_2076_;
}
}
}
}
}
else
{
lean_object* v_a_2079_; lean_object* v___x_2081_; uint8_t v_isShared_2082_; uint8_t v_isSharedCheck_2086_; 
lean_dec(v_snd_2054_);
lean_dec(v_fst_2053_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec_ref(v_e_1968_);
lean_dec(v_mvarId_1966_);
v_a_2079_ = lean_ctor_get(v___x_2058_, 0);
v_isSharedCheck_2086_ = !lean_is_exclusive(v___x_2058_);
if (v_isSharedCheck_2086_ == 0)
{
v___x_2081_ = v___x_2058_;
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
else
{
lean_inc(v_a_2079_);
lean_dec(v___x_2058_);
v___x_2081_ = lean_box(0);
v_isShared_2082_ = v_isSharedCheck_2086_;
goto v_resetjp_2080_;
}
v_resetjp_2080_:
{
lean_object* v___x_2084_; 
if (v_isShared_2082_ == 0)
{
v___x_2084_ = v___x_2081_;
goto v_reusejp_2083_;
}
else
{
lean_object* v_reuseFailAlloc_2085_; 
v_reuseFailAlloc_2085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2085_, 0, v_a_2079_);
v___x_2084_ = v_reuseFailAlloc_2085_;
goto v_reusejp_2083_;
}
v_reusejp_2083_:
{
return v___x_2084_;
}
}
}
}
else
{
lean_object* v_a_2087_; lean_object* v___x_2089_; uint8_t v_isShared_2090_; uint8_t v_isSharedCheck_2094_; 
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec(v___y_2048_);
lean_dec_ref(v___y_2047_);
lean_dec_ref(v_e_1968_);
lean_dec(v___x_1967_);
lean_dec(v_mvarId_1966_);
v_a_2087_ = lean_ctor_get(v___x_2051_, 0);
v_isSharedCheck_2094_ = !lean_is_exclusive(v___x_2051_);
if (v_isSharedCheck_2094_ == 0)
{
v___x_2089_ = v___x_2051_;
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
else
{
lean_inc(v_a_2087_);
lean_dec(v___x_2051_);
v___x_2089_ = lean_box(0);
v_isShared_2090_ = v_isSharedCheck_2094_;
goto v_resetjp_2088_;
}
v_resetjp_2088_:
{
lean_object* v___x_2092_; 
if (v_isShared_2090_ == 0)
{
v___x_2092_ = v___x_2089_;
goto v_reusejp_2091_;
}
else
{
lean_object* v_reuseFailAlloc_2093_; 
v_reuseFailAlloc_2093_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2093_, 0, v_a_2087_);
v___x_2092_ = v_reuseFailAlloc_2093_;
goto v_reusejp_2091_;
}
v_reusejp_2091_:
{
return v___x_2092_;
}
}
}
}
}
else
{
lean_object* v_a_2140_; lean_object* v___x_2142_; uint8_t v_isShared_2143_; uint8_t v_isSharedCheck_2147_; 
lean_dec(v_a_2041_);
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v_term_x3f_1970_);
lean_dec_ref(v_e_1968_);
lean_dec(v___x_1967_);
lean_dec(v_mvarId_1966_);
v_a_2140_ = lean_ctor_get(v___x_2042_, 0);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2042_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2142_ = v___x_2042_;
v_isShared_2143_ = v_isSharedCheck_2147_;
goto v_resetjp_2141_;
}
else
{
lean_inc(v_a_2140_);
lean_dec(v___x_2042_);
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
else
{
lean_object* v_a_2148_; lean_object* v___x_2150_; uint8_t v_isShared_2151_; uint8_t v_isSharedCheck_2155_; 
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v_term_x3f_1970_);
lean_dec_ref(v_e_1968_);
lean_dec(v___x_1967_);
lean_dec(v_mvarId_1966_);
v_a_2148_ = lean_ctor_get(v___x_2040_, 0);
v_isSharedCheck_2155_ = !lean_is_exclusive(v___x_2040_);
if (v_isSharedCheck_2155_ == 0)
{
v___x_2150_ = v___x_2040_;
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
else
{
lean_inc(v_a_2148_);
lean_dec(v___x_2040_);
v___x_2150_ = lean_box(0);
v_isShared_2151_ = v_isSharedCheck_2155_;
goto v_resetjp_2149_;
}
v_resetjp_2149_:
{
lean_object* v___x_2153_; 
if (v_isShared_2151_ == 0)
{
v___x_2153_ = v___x_2150_;
goto v_reusejp_2152_;
}
else
{
lean_object* v_reuseFailAlloc_2154_; 
v_reuseFailAlloc_2154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2154_, 0, v_a_2148_);
v___x_2153_ = v_reuseFailAlloc_2154_;
goto v_reusejp_2152_;
}
v_reusejp_2152_:
{
return v___x_2153_;
}
}
}
}
else
{
lean_object* v_a_2156_; lean_object* v___x_2158_; uint8_t v_isShared_2159_; uint8_t v_isSharedCheck_2163_; 
lean_dec(v___y_1974_);
lean_dec_ref(v___y_1973_);
lean_dec(v___y_1972_);
lean_dec_ref(v___y_1971_);
lean_dec(v_term_x3f_1970_);
lean_dec_ref(v_e_1968_);
lean_dec(v___x_1967_);
lean_dec(v_mvarId_1966_);
v_a_2156_ = lean_ctor_get(v___x_2039_, 0);
v_isSharedCheck_2163_ = !lean_is_exclusive(v___x_2039_);
if (v_isSharedCheck_2163_ == 0)
{
v___x_2158_ = v___x_2039_;
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
else
{
lean_inc(v_a_2156_);
lean_dec(v___x_2039_);
v___x_2158_ = lean_box(0);
v_isShared_2159_ = v_isSharedCheck_2163_;
goto v_resetjp_2157_;
}
v_resetjp_2157_:
{
lean_object* v___x_2161_; 
if (v_isShared_2159_ == 0)
{
v___x_2161_ = v___x_2158_;
goto v_reusejp_2160_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v_a_2156_);
v___x_2161_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2160_;
}
v_reusejp_2160_:
{
return v___x_2161_;
}
}
}
v___jp_1976_:
{
lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; 
v___x_1983_ = lean_array_to_list(v___y_1982_);
v___x_1984_ = l_List_appendTR___redArg(v___y_1977_, v___x_1983_);
lean_inc(v___x_1984_);
v___x_1985_ = l_List_forM___at___00Lean_MVarId_apply_spec__3(v___x_1984_, v___y_1979_, v___y_1981_, v___y_1980_, v___y_1978_);
lean_dec(v___y_1978_);
lean_dec_ref(v___y_1980_);
lean_dec(v___y_1981_);
lean_dec_ref(v___y_1979_);
if (lean_obj_tag(v___x_1985_) == 0)
{
lean_object* v___x_1987_; uint8_t v_isShared_1988_; uint8_t v_isSharedCheck_1992_; 
v_isSharedCheck_1992_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_1992_ == 0)
{
lean_object* v_unused_1993_; 
v_unused_1993_ = lean_ctor_get(v___x_1985_, 0);
lean_dec(v_unused_1993_);
v___x_1987_ = v___x_1985_;
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
else
{
lean_dec(v___x_1985_);
v___x_1987_ = lean_box(0);
v_isShared_1988_ = v_isSharedCheck_1992_;
goto v_resetjp_1986_;
}
v_resetjp_1986_:
{
lean_object* v___x_1990_; 
if (v_isShared_1988_ == 0)
{
lean_ctor_set(v___x_1987_, 0, v___x_1984_);
v___x_1990_ = v___x_1987_;
goto v_reusejp_1989_;
}
else
{
lean_object* v_reuseFailAlloc_1991_; 
v_reuseFailAlloc_1991_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1991_, 0, v___x_1984_);
v___x_1990_ = v_reuseFailAlloc_1991_;
goto v_reusejp_1989_;
}
v_reusejp_1989_:
{
return v___x_1990_;
}
}
}
else
{
lean_object* v_a_1994_; lean_object* v___x_1996_; uint8_t v_isShared_1997_; uint8_t v_isSharedCheck_2001_; 
lean_dec(v___x_1984_);
v_a_1994_ = lean_ctor_get(v___x_1985_, 0);
v_isSharedCheck_2001_ = !lean_is_exclusive(v___x_1985_);
if (v_isSharedCheck_2001_ == 0)
{
v___x_1996_ = v___x_1985_;
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
else
{
lean_inc(v_a_1994_);
lean_dec(v___x_1985_);
v___x_1996_ = lean_box(0);
v_isShared_1997_ = v_isSharedCheck_2001_;
goto v_resetjp_1995_;
}
v_resetjp_1995_:
{
lean_object* v___x_1999_; 
if (v_isShared_1997_ == 0)
{
v___x_1999_ = v___x_1996_;
goto v_reusejp_1998_;
}
else
{
lean_object* v_reuseFailAlloc_2000_; 
v_reuseFailAlloc_2000_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2000_, 0, v_a_1994_);
v___x_1999_ = v_reuseFailAlloc_2000_;
goto v_reusejp_1998_;
}
v_reusejp_1998_:
{
return v___x_1999_;
}
}
}
}
v___jp_2002_:
{
lean_object* v___x_2012_; 
v___x_2012_ = l_Lean_Meta_appendParentTag(v_mvarId_1966_, v_a_2011_, v___y_2009_, v___y_2004_, v___y_2006_, v___y_2005_, v___y_2003_);
lean_dec_ref(v___y_2009_);
if (lean_obj_tag(v___x_2012_) == 0)
{
lean_object* v___x_2013_; 
lean_dec_ref_known(v___x_2012_, 1);
v___x_2013_ = l_Lean_Meta_getMVarsNoDelayed(v___y_2007_, v___y_2004_, v___y_2006_, v___y_2005_, v___y_2003_);
if (lean_obj_tag(v___x_2013_) == 0)
{
lean_object* v_a_2014_; lean_object* v___x_2015_; 
v_a_2014_ = lean_ctor_get(v___x_2013_, 0);
lean_inc(v_a_2014_);
lean_dec_ref_known(v___x_2013_, 1);
v___x_2015_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_reorderGoals(v_a_2011_, v___y_2010_, v___y_2004_, v___y_2006_, v___y_2005_, v___y_2003_);
if (lean_obj_tag(v___x_2015_) == 0)
{
lean_object* v_a_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; uint8_t v___x_2019_; 
v_a_2016_ = lean_ctor_get(v___x_2015_, 0);
lean_inc(v_a_2016_);
lean_dec_ref_known(v___x_2015_, 1);
v___x_2017_ = lean_array_get_size(v_a_2014_);
v___x_2018_ = lean_mk_empty_array_with_capacity(v___y_2008_);
v___x_2019_ = lean_nat_dec_lt(v___y_2008_, v___x_2017_);
if (v___x_2019_ == 0)
{
lean_dec(v_a_2014_);
v___y_1977_ = v_a_2016_;
v___y_1978_ = v___y_2003_;
v___y_1979_ = v___y_2004_;
v___y_1980_ = v___y_2005_;
v___y_1981_ = v___y_2006_;
v___y_1982_ = v___x_2018_;
goto v___jp_1976_;
}
else
{
size_t v___x_2020_; size_t v___x_2021_; lean_object* v___x_2022_; 
v___x_2020_ = ((size_t)0ULL);
v___x_2021_ = lean_usize_of_nat(v___x_2017_);
v___x_2022_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__4(v_a_2016_, v_a_2014_, v___x_2020_, v___x_2021_, v___x_2018_);
lean_dec(v_a_2014_);
v___y_1977_ = v_a_2016_;
v___y_1978_ = v___y_2003_;
v___y_1979_ = v___y_2004_;
v___y_1980_ = v___y_2005_;
v___y_1981_ = v___y_2006_;
v___y_1982_ = v___x_2022_;
goto v___jp_1976_;
}
}
else
{
lean_dec(v_a_2014_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
return v___x_2015_;
}
}
else
{
lean_object* v_a_2023_; lean_object* v___x_2025_; uint8_t v_isShared_2026_; uint8_t v_isSharedCheck_2030_; 
lean_dec_ref(v_a_2011_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
v_a_2023_ = lean_ctor_get(v___x_2013_, 0);
v_isSharedCheck_2030_ = !lean_is_exclusive(v___x_2013_);
if (v_isSharedCheck_2030_ == 0)
{
v___x_2025_ = v___x_2013_;
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
else
{
lean_inc(v_a_2023_);
lean_dec(v___x_2013_);
v___x_2025_ = lean_box(0);
v_isShared_2026_ = v_isSharedCheck_2030_;
goto v_resetjp_2024_;
}
v_resetjp_2024_:
{
lean_object* v___x_2028_; 
if (v_isShared_2026_ == 0)
{
v___x_2028_ = v___x_2025_;
goto v_reusejp_2027_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v_a_2023_);
v___x_2028_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2027_;
}
v_reusejp_2027_:
{
return v___x_2028_;
}
}
}
}
else
{
lean_object* v_a_2031_; lean_object* v___x_2033_; uint8_t v_isShared_2034_; uint8_t v_isSharedCheck_2038_; 
lean_dec_ref(v_a_2011_);
lean_dec_ref(v___y_2007_);
lean_dec(v___y_2006_);
lean_dec_ref(v___y_2005_);
lean_dec_ref(v___y_2004_);
lean_dec(v___y_2003_);
v_a_2031_ = lean_ctor_get(v___x_2012_, 0);
v_isSharedCheck_2038_ = !lean_is_exclusive(v___x_2012_);
if (v_isSharedCheck_2038_ == 0)
{
v___x_2033_ = v___x_2012_;
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
else
{
lean_inc(v_a_2031_);
lean_dec(v___x_2012_);
v___x_2033_ = lean_box(0);
v_isShared_2034_ = v_isSharedCheck_2038_;
goto v_resetjp_2032_;
}
v_resetjp_2032_:
{
lean_object* v___x_2036_; 
if (v_isShared_2034_ == 0)
{
v___x_2036_ = v___x_2033_;
goto v_reusejp_2035_;
}
else
{
lean_object* v_reuseFailAlloc_2037_; 
v_reuseFailAlloc_2037_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2037_, 0, v_a_2031_);
v___x_2036_ = v_reuseFailAlloc_2037_;
goto v_reusejp_2035_;
}
v_reusejp_2035_:
{
return v___x_2036_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___lam__0___boxed(lean_object* v_mvarId_2164_, lean_object* v___x_2165_, lean_object* v_e_2166_, lean_object* v_cfg_2167_, lean_object* v_term_x3f_2168_, lean_object* v___y_2169_, lean_object* v___y_2170_, lean_object* v___y_2171_, lean_object* v___y_2172_, lean_object* v___y_2173_){
_start:
{
lean_object* v_res_2174_; 
v_res_2174_ = l_Lean_MVarId_apply___lam__0(v_mvarId_2164_, v___x_2165_, v_e_2166_, v_cfg_2167_, v_term_x3f_2168_, v___y_2169_, v___y_2170_, v___y_2171_, v___y_2172_);
lean_dec_ref(v_cfg_2167_);
return v_res_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply(lean_object* v_mvarId_2175_, lean_object* v_e_2176_, lean_object* v_cfg_2177_, lean_object* v_term_x3f_2178_, lean_object* v_a_2179_, lean_object* v_a_2180_, lean_object* v_a_2181_, lean_object* v_a_2182_){
_start:
{
lean_object* v___x_2184_; lean_object* v___f_2185_; lean_object* v___x_2186_; 
v___x_2184_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7));
lean_inc(v_mvarId_2175_);
v___f_2185_ = lean_alloc_closure((void*)(l_Lean_MVarId_apply___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2185_, 0, v_mvarId_2175_);
lean_closure_set(v___f_2185_, 1, v___x_2184_);
lean_closure_set(v___f_2185_, 2, v_e_2176_);
lean_closure_set(v___f_2185_, 3, v_cfg_2177_);
lean_closure_set(v___f_2185_, 4, v_term_x3f_2178_);
v___x_2186_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2175_, v___f_2185_, v_a_2179_, v_a_2180_, v_a_2181_, v_a_2182_);
return v___x_2186_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_apply___boxed(lean_object* v_mvarId_2187_, lean_object* v_e_2188_, lean_object* v_cfg_2189_, lean_object* v_term_x3f_2190_, lean_object* v_a_2191_, lean_object* v_a_2192_, lean_object* v_a_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
lean_object* v_res_2196_; 
v_res_2196_ = l_Lean_MVarId_apply(v_mvarId_2187_, v_e_2188_, v_cfg_2189_, v_term_x3f_2190_, v_a_2191_, v_a_2192_, v_a_2193_, v_a_2194_);
lean_dec(v_a_2194_);
lean_dec_ref(v_a_2193_);
lean_dec(v_a_2192_);
lean_dec_ref(v_a_2191_);
return v_res_2196_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(lean_object* v_mvarId_2197_, lean_object* v_val_2198_, lean_object* v___y_2199_, lean_object* v___y_2200_, lean_object* v___y_2201_, lean_object* v___y_2202_){
_start:
{
lean_object* v___x_2204_; 
v___x_2204_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2197_, v_val_2198_, v___y_2200_);
return v___x_2204_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___boxed(lean_object* v_mvarId_2205_, lean_object* v_val_2206_, lean_object* v___y_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v_res_2212_; 
v_res_2212_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1(v_mvarId_2205_, v_val_2206_, v___y_2207_, v___y_2208_, v___y_2209_, v___y_2210_);
lean_dec(v___y_2210_);
lean_dec_ref(v___y_2209_);
lean_dec(v___y_2208_);
lean_dec_ref(v___y_2207_);
return v_res_2212_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(lean_object* v_as_2213_, size_t v_i_2214_, size_t v_stop_2215_, lean_object* v_b_2216_, lean_object* v___y_2217_, lean_object* v___y_2218_, lean_object* v___y_2219_, lean_object* v___y_2220_){
_start:
{
lean_object* v___x_2222_; 
v___x_2222_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___redArg(v_as_2213_, v_i_2214_, v_stop_2215_, v_b_2216_, v___y_2218_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5___boxed(lean_object* v_as_2223_, lean_object* v_i_2224_, lean_object* v_stop_2225_, lean_object* v_b_2226_, lean_object* v___y_2227_, lean_object* v___y_2228_, lean_object* v___y_2229_, lean_object* v___y_2230_, lean_object* v___y_2231_){
_start:
{
size_t v_i_boxed_2232_; size_t v_stop_boxed_2233_; lean_object* v_res_2234_; 
v_i_boxed_2232_ = lean_unbox_usize(v_i_2224_);
lean_dec(v_i_2224_);
v_stop_boxed_2233_ = lean_unbox_usize(v_stop_2225_);
lean_dec(v_stop_2225_);
v_res_2234_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_MVarId_apply_spec__5(v_as_2223_, v_i_boxed_2232_, v_stop_boxed_2233_, v_b_2226_, v___y_2227_, v___y_2228_, v___y_2229_, v___y_2230_);
lean_dec(v___y_2230_);
lean_dec_ref(v___y_2229_);
lean_dec(v___y_2228_);
lean_dec_ref(v___y_2227_);
lean_dec_ref(v_as_2223_);
return v_res_2234_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1(lean_object* v_00_u03b2_2235_, lean_object* v_x_2236_, lean_object* v_x_2237_, lean_object* v_x_2238_){
_start:
{
lean_object* v___x_2239_; 
v___x_2239_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1___redArg(v_x_2236_, v_x_2237_, v_x_2238_);
return v___x_2239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_2240_, lean_object* v_x_2241_, size_t v_x_2242_, size_t v_x_2243_, lean_object* v_x_2244_, lean_object* v_x_2245_){
_start:
{
lean_object* v___x_2246_; 
v___x_2246_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___redArg(v_x_2241_, v_x_2242_, v_x_2243_, v_x_2244_, v_x_2245_);
return v___x_2246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_2247_, lean_object* v_x_2248_, lean_object* v_x_2249_, lean_object* v_x_2250_, lean_object* v_x_2251_, lean_object* v_x_2252_){
_start:
{
size_t v_x_7763__boxed_2253_; size_t v_x_7764__boxed_2254_; lean_object* v_res_2255_; 
v_x_7763__boxed_2253_ = lean_unbox_usize(v_x_2249_);
lean_dec(v_x_2249_);
v_x_7764__boxed_2254_ = lean_unbox_usize(v_x_2250_);
lean_dec(v_x_2250_);
v_res_2255_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3(v_00_u03b2_2247_, v_x_2248_, v_x_7763__boxed_2253_, v_x_7764__boxed_2254_, v_x_2251_, v_x_2252_);
return v_res_2255_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8(lean_object* v_00_u03b2_2256_, lean_object* v_n_2257_, lean_object* v_k_2258_, lean_object* v_v_2259_){
_start:
{
lean_object* v___x_2260_; 
v___x_2260_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8___redArg(v_n_2257_, v_k_2258_, v_v_2259_);
return v___x_2260_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(lean_object* v_00_u03b2_2261_, size_t v_depth_2262_, lean_object* v_keys_2263_, lean_object* v_vals_2264_, lean_object* v_heq_2265_, lean_object* v_i_2266_, lean_object* v_entries_2267_){
_start:
{
lean_object* v___x_2268_; 
v___x_2268_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___redArg(v_depth_2262_, v_keys_2263_, v_vals_2264_, v_i_2266_, v_entries_2267_);
return v___x_2268_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9___boxed(lean_object* v_00_u03b2_2269_, lean_object* v_depth_2270_, lean_object* v_keys_2271_, lean_object* v_vals_2272_, lean_object* v_heq_2273_, lean_object* v_i_2274_, lean_object* v_entries_2275_){
_start:
{
size_t v_depth_boxed_2276_; lean_object* v_res_2277_; 
v_depth_boxed_2276_ = lean_unbox_usize(v_depth_2270_);
lean_dec(v_depth_2270_);
v_res_2277_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__9(v_00_u03b2_2269_, v_depth_boxed_2276_, v_keys_2271_, v_vals_2272_, v_heq_2273_, v_i_2274_, v_entries_2275_);
lean_dec_ref(v_vals_2272_);
lean_dec_ref(v_keys_2271_);
return v_res_2277_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9(lean_object* v_00_u03b2_2278_, lean_object* v_x_2279_, lean_object* v_x_2280_, lean_object* v_x_2281_, lean_object* v_x_2282_){
_start:
{
lean_object* v___x_2283_; 
v___x_2283_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1_spec__1_spec__3_spec__8_spec__9___redArg(v_x_2279_, v_x_2280_, v_x_2281_, v_x_2282_);
return v___x_2283_;
}
}
static lean_object* _init_l_Lean_MVarId_applyConst___closed__1(void){
_start:
{
lean_object* v___x_2285_; lean_object* v___x_2286_; 
v___x_2285_ = ((lean_object*)(l_Lean_MVarId_applyConst___closed__0));
v___x_2286_ = l_Lean_stringToMessageData(v___x_2285_);
return v___x_2286_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst(lean_object* v_mvar_2287_, lean_object* v_c_2288_, lean_object* v_cfg_2289_, lean_object* v_a_2290_, lean_object* v_a_2291_, lean_object* v_a_2292_, lean_object* v_a_2293_){
_start:
{
lean_object* v___x_2295_; 
lean_inc(v_c_2288_);
v___x_2295_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v_c_2288_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_);
if (lean_obj_tag(v___x_2295_) == 0)
{
lean_object* v_a_2296_; lean_object* v___x_2297_; uint8_t v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v_a_2296_ = lean_ctor_get(v___x_2295_, 0);
lean_inc(v_a_2296_);
lean_dec_ref_known(v___x_2295_, 1);
v___x_2297_ = lean_obj_once(&l_Lean_MVarId_applyConst___closed__1, &l_Lean_MVarId_applyConst___closed__1_once, _init_l_Lean_MVarId_applyConst___closed__1);
v___x_2298_ = 0;
v___x_2299_ = l_Lean_MessageData_ofConstName(v_c_2288_, v___x_2298_);
v___x_2300_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2300_, 0, v___x_2297_);
lean_ctor_set(v___x_2300_, 1, v___x_2299_);
v___x_2301_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2301_, 0, v___x_2300_);
lean_ctor_set(v___x_2301_, 1, v___x_2297_);
v___x_2302_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2302_, 0, v___x_2301_);
v___x_2303_ = l_Lean_MVarId_apply(v_mvar_2287_, v_a_2296_, v_cfg_2289_, v___x_2302_, v_a_2290_, v_a_2291_, v_a_2292_, v_a_2293_);
return v___x_2303_;
}
else
{
lean_object* v_a_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2311_; 
lean_dec_ref(v_cfg_2289_);
lean_dec(v_c_2288_);
lean_dec(v_mvar_2287_);
v_a_2304_ = lean_ctor_get(v___x_2295_, 0);
v_isSharedCheck_2311_ = !lean_is_exclusive(v___x_2295_);
if (v_isSharedCheck_2311_ == 0)
{
v___x_2306_ = v___x_2295_;
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_a_2304_);
lean_dec(v___x_2295_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2311_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2309_; 
if (v_isShared_2307_ == 0)
{
v___x_2309_ = v___x_2306_;
goto v_reusejp_2308_;
}
else
{
lean_object* v_reuseFailAlloc_2310_; 
v_reuseFailAlloc_2310_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2310_, 0, v_a_2304_);
v___x_2309_ = v_reuseFailAlloc_2310_;
goto v_reusejp_2308_;
}
v_reusejp_2308_:
{
return v___x_2309_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyConst___boxed(lean_object* v_mvar_2312_, lean_object* v_c_2313_, lean_object* v_cfg_2314_, lean_object* v_a_2315_, lean_object* v_a_2316_, lean_object* v_a_2317_, lean_object* v_a_2318_, lean_object* v_a_2319_){
_start:
{
lean_object* v_res_2320_; 
v_res_2320_ = l_Lean_MVarId_applyConst(v_mvar_2312_, v_c_2313_, v_cfg_2314_, v_a_2315_, v_a_2316_, v_a_2317_, v_a_2318_);
lean_dec(v_a_2318_);
lean_dec_ref(v_a_2317_);
lean_dec(v_a_2316_);
lean_dec_ref(v_a_2315_);
return v_res_2320_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(lean_object* v_msgData_2321_, lean_object* v___y_2322_, lean_object* v___y_2323_, lean_object* v___y_2324_, lean_object* v___y_2325_){
_start:
{
lean_object* v___x_2327_; lean_object* v_env_2328_; uint8_t v___x_2329_; lean_object* v_env_2330_; lean_object* v___x_2331_; lean_object* v_toCold_2332_; lean_object* v_mctx_2333_; lean_object* v_lctx_2334_; lean_object* v_options_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; 
v___x_2327_ = lean_st_ref_get(v___y_2325_);
v_env_2328_ = lean_ctor_get(v___x_2327_, 0);
lean_inc_ref(v_env_2328_);
lean_dec(v___x_2327_);
v___x_2329_ = 0;
v_env_2330_ = l_Lean_Environment_setRecordingDeps(v_env_2328_, v___x_2329_);
v___x_2331_ = lean_st_ref_get(v___y_2323_);
v_toCold_2332_ = lean_ctor_get(v___y_2324_, 0);
v_mctx_2333_ = lean_ctor_get(v___x_2331_, 0);
lean_inc_ref(v_mctx_2333_);
lean_dec(v___x_2331_);
v_lctx_2334_ = lean_ctor_get(v___y_2322_, 2);
v_options_2335_ = lean_ctor_get(v_toCold_2332_, 2);
lean_inc_ref(v_options_2335_);
lean_inc_ref(v_lctx_2334_);
v___x_2336_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2336_, 0, v_env_2330_);
lean_ctor_set(v___x_2336_, 1, v_mctx_2333_);
lean_ctor_set(v___x_2336_, 2, v_lctx_2334_);
lean_ctor_set(v___x_2336_, 3, v_options_2335_);
v___x_2337_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2337_, 0, v___x_2336_);
lean_ctor_set(v___x_2337_, 1, v_msgData_2321_);
v___x_2338_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2338_, 0, v___x_2337_);
return v___x_2338_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1___boxed(lean_object* v_msgData_2339_, lean_object* v___y_2340_, lean_object* v___y_2341_, lean_object* v___y_2342_, lean_object* v___y_2343_, lean_object* v___y_2344_){
_start:
{
lean_object* v_res_2345_; 
v_res_2345_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msgData_2339_, v___y_2340_, v___y_2341_, v___y_2342_, v___y_2343_);
lean_dec(v___y_2343_);
lean_dec_ref(v___y_2342_);
lean_dec(v___y_2341_);
lean_dec_ref(v___y_2340_);
return v_res_2345_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(lean_object* v_msg_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_, lean_object* v___y_2350_){
_start:
{
lean_object* v_ref_2352_; lean_object* v___x_2353_; lean_object* v_a_2354_; lean_object* v___x_2356_; uint8_t v_isShared_2357_; uint8_t v_isSharedCheck_2362_; 
v_ref_2352_ = lean_ctor_get(v___y_2349_, 2);
v___x_2353_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_applyN_spec__1_spec__1(v_msg_2346_, v___y_2347_, v___y_2348_, v___y_2349_, v___y_2350_);
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
v_isSharedCheck_2362_ = !lean_is_exclusive(v___x_2353_);
if (v_isSharedCheck_2362_ == 0)
{
v___x_2356_ = v___x_2353_;
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
else
{
lean_inc(v_a_2354_);
lean_dec(v___x_2353_);
v___x_2356_ = lean_box(0);
v_isShared_2357_ = v_isSharedCheck_2362_;
goto v_resetjp_2355_;
}
v_resetjp_2355_:
{
lean_object* v___x_2358_; lean_object* v___x_2360_; 
lean_inc(v_ref_2352_);
v___x_2358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2358_, 0, v_ref_2352_);
lean_ctor_set(v___x_2358_, 1, v_a_2354_);
if (v_isShared_2357_ == 0)
{
lean_ctor_set_tag(v___x_2356_, 1);
lean_ctor_set(v___x_2356_, 0, v___x_2358_);
v___x_2360_ = v___x_2356_;
goto v_reusejp_2359_;
}
else
{
lean_object* v_reuseFailAlloc_2361_; 
v_reuseFailAlloc_2361_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2361_, 0, v___x_2358_);
v___x_2360_ = v_reuseFailAlloc_2361_;
goto v_reusejp_2359_;
}
v_reusejp_2359_:
{
return v___x_2360_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg___boxed(lean_object* v_msg_2363_, lean_object* v___y_2364_, lean_object* v___y_2365_, lean_object* v___y_2366_, lean_object* v___y_2367_, lean_object* v___y_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2363_, v___y_2364_, v___y_2365_, v___y_2366_, v___y_2367_);
lean_dec(v___y_2367_);
lean_dec_ref(v___y_2366_);
lean_dec(v___y_2365_);
lean_dec_ref(v___y_2364_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(size_t v_sz_2370_, size_t v_i_2371_, lean_object* v_bs_2372_){
_start:
{
uint8_t v___x_2373_; 
v___x_2373_ = lean_usize_dec_lt(v_i_2371_, v_sz_2370_);
if (v___x_2373_ == 0)
{
return v_bs_2372_;
}
else
{
lean_object* v_v_2374_; lean_object* v___x_2375_; lean_object* v_bs_x27_2376_; lean_object* v___x_2377_; size_t v___x_2378_; size_t v___x_2379_; lean_object* v___x_2380_; 
v_v_2374_ = lean_array_uget(v_bs_2372_, v_i_2371_);
v___x_2375_ = lean_unsigned_to_nat(0u);
v_bs_x27_2376_ = lean_array_uset(v_bs_2372_, v_i_2371_, v___x_2375_);
v___x_2377_ = l_Lean_Expr_mvarId_x21(v_v_2374_);
lean_dec(v_v_2374_);
v___x_2378_ = ((size_t)1ULL);
v___x_2379_ = lean_usize_add(v_i_2371_, v___x_2378_);
v___x_2380_ = lean_array_uset(v_bs_x27_2376_, v_i_2371_, v___x_2377_);
v_i_2371_ = v___x_2379_;
v_bs_2372_ = v___x_2380_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0___boxed(lean_object* v_sz_2382_, lean_object* v_i_2383_, lean_object* v_bs_2384_){
_start:
{
size_t v_sz_boxed_2385_; size_t v_i_boxed_2386_; lean_object* v_res_2387_; 
v_sz_boxed_2385_ = lean_unbox_usize(v_sz_2382_);
lean_dec(v_sz_2382_);
v_i_boxed_2386_ = lean_unbox_usize(v_i_2383_);
lean_dec(v_i_2383_);
v_res_2387_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_boxed_2385_, v_i_boxed_2386_, v_bs_2384_);
return v_res_2387_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__1(void){
_start:
{
lean_object* v___x_2389_; lean_object* v___x_2390_; 
v___x_2389_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__0));
v___x_2390_ = l_Lean_stringToMessageData(v___x_2389_);
return v___x_2390_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2392_; lean_object* v___x_2393_; 
v___x_2392_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__2));
v___x_2393_ = l_Lean_stringToMessageData(v___x_2392_);
return v___x_2393_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__5(void){
_start:
{
lean_object* v___x_2395_; lean_object* v___x_2396_; 
v___x_2395_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__4));
v___x_2396_ = l_Lean_stringToMessageData(v___x_2395_);
return v___x_2396_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__7(void){
_start:
{
lean_object* v___x_2398_; lean_object* v___x_2399_; 
v___x_2398_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__6));
v___x_2399_ = l_Lean_stringToMessageData(v___x_2398_);
return v___x_2399_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__9(void){
_start:
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
v___x_2401_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__8));
v___x_2402_ = l_Lean_stringToMessageData(v___x_2401_);
return v___x_2402_;
}
}
static lean_object* _init_l_Lean_MVarId_applyN___lam__0___closed__11(void){
_start:
{
lean_object* v___x_2404_; lean_object* v___x_2405_; 
v___x_2404_ = ((lean_object*)(l_Lean_MVarId_applyN___lam__0___closed__10));
v___x_2405_ = l_Lean_stringToMessageData(v___x_2404_);
return v___x_2405_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0(lean_object* v_mvarId_2406_, lean_object* v___x_2407_, lean_object* v_e_2408_, lean_object* v_n_2409_, uint8_t v_useApproxDefEq_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_){
_start:
{
lean_object* v___x_2416_; 
lean_inc(v_mvarId_2406_);
v___x_2416_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2406_, v___x_2407_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
if (lean_obj_tag(v___x_2416_) == 0)
{
lean_object* v___x_2417_; 
lean_dec_ref_known(v___x_2416_, 1);
lean_inc(v_mvarId_2406_);
v___x_2417_ = l_Lean_MVarId_getType(v_mvarId_2406_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
if (lean_obj_tag(v___x_2417_) == 0)
{
lean_object* v_a_2418_; lean_object* v___x_2419_; 
v_a_2418_ = lean_ctor_get(v___x_2417_, 0);
lean_inc(v_a_2418_);
lean_dec_ref_known(v___x_2417_, 1);
lean_inc(v___y_2414_);
lean_inc_ref(v___y_2413_);
lean_inc(v___y_2412_);
lean_inc_ref(v___y_2411_);
lean_inc_ref(v_e_2408_);
v___x_2419_ = lean_infer_type(v_e_2408_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
if (lean_obj_tag(v___x_2419_) == 0)
{
lean_object* v_a_2420_; uint8_t v___x_2421_; lean_object* v___x_2422_; 
v_a_2420_ = lean_ctor_get(v___x_2419_, 0);
lean_inc(v_a_2420_);
lean_dec_ref_known(v___x_2419_, 1);
v___x_2421_ = 0;
lean_inc(v_n_2409_);
v___x_2422_ = l_Lean_Meta_forallMetaBoundedTelescope(v_a_2420_, v_n_2409_, v___x_2421_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
if (lean_obj_tag(v___x_2422_) == 0)
{
lean_object* v_a_2423_; lean_object* v_fst_2424_; lean_object* v_snd_2425_; lean_object* v___x_2427_; uint8_t v_isShared_2428_; uint8_t v_isSharedCheck_2515_; 
v_a_2423_ = lean_ctor_get(v___x_2422_, 0);
lean_inc(v_a_2423_);
lean_dec_ref_known(v___x_2422_, 1);
v_fst_2424_ = lean_ctor_get(v_a_2423_, 0);
v_snd_2425_ = lean_ctor_get(v_a_2423_, 1);
v_isSharedCheck_2515_ = !lean_is_exclusive(v_a_2423_);
if (v_isSharedCheck_2515_ == 0)
{
v___x_2427_ = v_a_2423_;
v_isShared_2428_ = v_isSharedCheck_2515_;
goto v_resetjp_2426_;
}
else
{
lean_inc(v_snd_2425_);
lean_inc(v_fst_2424_);
lean_dec(v_a_2423_);
v___x_2427_ = lean_box(0);
v_isShared_2428_ = v_isSharedCheck_2515_;
goto v_resetjp_2426_;
}
v_resetjp_2426_:
{
lean_object* v___y_2430_; lean_object* v_snd_2445_; lean_object* v___x_2447_; uint8_t v_isShared_2448_; uint8_t v_isSharedCheck_2513_; 
v_snd_2445_ = lean_ctor_get(v_snd_2425_, 1);
v_isSharedCheck_2513_ = !lean_is_exclusive(v_snd_2425_);
if (v_isSharedCheck_2513_ == 0)
{
lean_object* v_unused_2514_; 
v_unused_2514_ = lean_ctor_get(v_snd_2425_, 0);
lean_dec(v_unused_2514_);
v___x_2447_ = v_snd_2425_;
v_isShared_2448_ = v_isSharedCheck_2513_;
goto v_resetjp_2446_;
}
else
{
lean_inc(v_snd_2445_);
lean_dec(v_snd_2425_);
v___x_2447_ = lean_box(0);
v_isShared_2448_ = v_isSharedCheck_2513_;
goto v_resetjp_2446_;
}
v___jp_2429_:
{
lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2434_; uint8_t v_isShared_2435_; uint8_t v_isSharedCheck_2443_; 
lean_inc(v_fst_2424_);
v___x_2431_ = l_Lean_Expr_beta(v_e_2408_, v_fst_2424_);
v___x_2432_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2406_, v___x_2431_, v___y_2430_);
lean_dec(v___y_2430_);
v_isSharedCheck_2443_ = !lean_is_exclusive(v___x_2432_);
if (v_isSharedCheck_2443_ == 0)
{
lean_object* v_unused_2444_; 
v_unused_2444_ = lean_ctor_get(v___x_2432_, 0);
lean_dec(v_unused_2444_);
v___x_2434_ = v___x_2432_;
v_isShared_2435_ = v_isSharedCheck_2443_;
goto v_resetjp_2433_;
}
else
{
lean_dec(v___x_2432_);
v___x_2434_ = lean_box(0);
v_isShared_2435_ = v_isSharedCheck_2443_;
goto v_resetjp_2433_;
}
v_resetjp_2433_:
{
size_t v_sz_2436_; size_t v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2441_; 
v_sz_2436_ = lean_array_size(v_fst_2424_);
v___x_2437_ = ((size_t)0ULL);
v___x_2438_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_MVarId_applyN_spec__0(v_sz_2436_, v___x_2437_, v_fst_2424_);
v___x_2439_ = lean_array_to_list(v___x_2438_);
if (v_isShared_2435_ == 0)
{
lean_ctor_set(v___x_2434_, 0, v___x_2439_);
v___x_2441_ = v___x_2434_;
goto v_reusejp_2440_;
}
else
{
lean_object* v_reuseFailAlloc_2442_; 
v_reuseFailAlloc_2442_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2442_, 0, v___x_2439_);
v___x_2441_ = v_reuseFailAlloc_2442_;
goto v_reusejp_2440_;
}
v_reusejp_2440_:
{
return v___x_2441_;
}
}
}
v_resetjp_2446_:
{
lean_object* v___y_2450_; lean_object* v___y_2451_; lean_object* v___y_2452_; lean_object* v___y_2453_; lean_object* v___x_2493_; uint8_t v___x_2494_; 
v___x_2493_ = lean_array_get_size(v_fst_2424_);
v___x_2494_ = lean_nat_dec_eq(v___x_2493_, v_n_2409_);
if (v___x_2494_ == 0)
{
lean_object* v___x_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; lean_object* v___x_2502_; lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v_a_2505_; lean_object* v___x_2507_; uint8_t v_isShared_2508_; uint8_t v_isSharedCheck_2512_; 
lean_del_object(v___x_2447_);
lean_del_object(v___x_2427_);
lean_dec(v_fst_2424_);
lean_dec(v_a_2418_);
lean_dec_ref(v_e_2408_);
lean_dec(v_mvarId_2406_);
v___x_2495_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__9, &l_Lean_MVarId_applyN___lam__0___closed__9_once, _init_l_Lean_MVarId_applyN___lam__0___closed__9);
v___x_2496_ = l_Nat_reprFast(v_n_2409_);
v___x_2497_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2497_, 0, v___x_2496_);
v___x_2498_ = l_Lean_MessageData_ofFormat(v___x_2497_);
v___x_2499_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2495_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__11, &l_Lean_MVarId_applyN___lam__0___closed__11_once, _init_l_Lean_MVarId_applyN___lam__0___closed__11);
v___x_2501_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2499_);
lean_ctor_set(v___x_2501_, 1, v___x_2500_);
v___x_2502_ = l_Lean_indentExpr(v_snd_2445_);
v___x_2503_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2503_, 0, v___x_2501_);
lean_ctor_set(v___x_2503_, 1, v___x_2502_);
v___x_2504_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2503_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_2414_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
v_a_2505_ = lean_ctor_get(v___x_2504_, 0);
v_isSharedCheck_2512_ = !lean_is_exclusive(v___x_2504_);
if (v_isSharedCheck_2512_ == 0)
{
v___x_2507_ = v___x_2504_;
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
else
{
lean_inc(v_a_2505_);
lean_dec(v___x_2504_);
v___x_2507_ = lean_box(0);
v_isShared_2508_ = v_isSharedCheck_2512_;
goto v_resetjp_2506_;
}
v_resetjp_2506_:
{
lean_object* v___x_2510_; 
if (v_isShared_2508_ == 0)
{
v___x_2510_ = v___x_2507_;
goto v_reusejp_2509_;
}
else
{
lean_object* v_reuseFailAlloc_2511_; 
v_reuseFailAlloc_2511_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2511_, 0, v_a_2505_);
v___x_2510_ = v_reuseFailAlloc_2511_;
goto v_reusejp_2509_;
}
v_reusejp_2509_:
{
return v___x_2510_;
}
}
}
else
{
v___y_2450_ = v___y_2411_;
v___y_2451_ = v___y_2412_;
v___y_2452_ = v___y_2413_;
v___y_2453_ = v___y_2414_;
goto v___jp_2449_;
}
v___jp_2449_:
{
lean_object* v___x_2454_; 
lean_inc(v_a_2418_);
lean_inc(v_snd_2445_);
v___x_2454_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_isDefEqApply(v_useApproxDefEq_2410_, v_snd_2445_, v_a_2418_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
if (lean_obj_tag(v___x_2454_) == 0)
{
lean_object* v_a_2455_; uint8_t v___x_2456_; 
v_a_2455_ = lean_ctor_get(v___x_2454_, 0);
lean_inc(v_a_2455_);
lean_dec_ref_known(v___x_2454_, 1);
v___x_2456_ = lean_unbox(v_a_2455_);
lean_dec(v_a_2455_);
if (v___x_2456_ == 0)
{
lean_object* v___x_2457_; lean_object* v___x_2458_; lean_object* v___x_2460_; 
lean_dec(v_fst_2424_);
lean_dec_ref(v_e_2408_);
lean_dec(v_mvarId_2406_);
v___x_2457_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__1, &l_Lean_MVarId_applyN___lam__0___closed__1_once, _init_l_Lean_MVarId_applyN___lam__0___closed__1);
v___x_2458_ = l_Lean_indentExpr(v_a_2418_);
if (v_isShared_2448_ == 0)
{
lean_ctor_set_tag(v___x_2447_, 7);
lean_ctor_set(v___x_2447_, 1, v___x_2458_);
lean_ctor_set(v___x_2447_, 0, v___x_2457_);
v___x_2460_ = v___x_2447_;
goto v_reusejp_2459_;
}
else
{
lean_object* v_reuseFailAlloc_2484_; 
v_reuseFailAlloc_2484_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2484_, 0, v___x_2457_);
lean_ctor_set(v_reuseFailAlloc_2484_, 1, v___x_2458_);
v___x_2460_ = v_reuseFailAlloc_2484_;
goto v_reusejp_2459_;
}
v_reusejp_2459_:
{
lean_object* v___x_2461_; lean_object* v___x_2463_; 
v___x_2461_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__3, &l_Lean_MVarId_applyN___lam__0___closed__3_once, _init_l_Lean_MVarId_applyN___lam__0___closed__3);
if (v_isShared_2428_ == 0)
{
lean_ctor_set_tag(v___x_2427_, 7);
lean_ctor_set(v___x_2427_, 1, v___x_2461_);
lean_ctor_set(v___x_2427_, 0, v___x_2460_);
v___x_2463_ = v___x_2427_;
goto v_reusejp_2462_;
}
else
{
lean_object* v_reuseFailAlloc_2483_; 
v_reuseFailAlloc_2483_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2483_, 0, v___x_2460_);
lean_ctor_set(v_reuseFailAlloc_2483_, 1, v___x_2461_);
v___x_2463_ = v_reuseFailAlloc_2483_;
goto v_reusejp_2462_;
}
v_reusejp_2462_:
{
lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v_a_2475_; lean_object* v___x_2477_; uint8_t v_isShared_2478_; uint8_t v_isSharedCheck_2482_; 
v___x_2464_ = l_Lean_indentExpr(v_snd_2445_);
v___x_2465_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2465_, 0, v___x_2463_);
lean_ctor_set(v___x_2465_, 1, v___x_2464_);
v___x_2466_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__5, &l_Lean_MVarId_applyN___lam__0___closed__5_once, _init_l_Lean_MVarId_applyN___lam__0___closed__5);
v___x_2467_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2467_, 0, v___x_2465_);
lean_ctor_set(v___x_2467_, 1, v___x_2466_);
v___x_2468_ = l_Nat_reprFast(v_n_2409_);
v___x_2469_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2469_, 0, v___x_2468_);
v___x_2470_ = l_Lean_MessageData_ofFormat(v___x_2469_);
v___x_2471_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2471_, 0, v___x_2467_);
lean_ctor_set(v___x_2471_, 1, v___x_2470_);
v___x_2472_ = lean_obj_once(&l_Lean_MVarId_applyN___lam__0___closed__7, &l_Lean_MVarId_applyN___lam__0___closed__7_once, _init_l_Lean_MVarId_applyN___lam__0___closed__7);
v___x_2473_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2473_, 0, v___x_2471_);
lean_ctor_set(v___x_2473_, 1, v___x_2472_);
v___x_2474_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_2473_, v___y_2450_, v___y_2451_, v___y_2452_, v___y_2453_);
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
v_a_2475_ = lean_ctor_get(v___x_2474_, 0);
v_isSharedCheck_2482_ = !lean_is_exclusive(v___x_2474_);
if (v_isSharedCheck_2482_ == 0)
{
v___x_2477_ = v___x_2474_;
v_isShared_2478_ = v_isSharedCheck_2482_;
goto v_resetjp_2476_;
}
else
{
lean_inc(v_a_2475_);
lean_dec(v___x_2474_);
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
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec_ref(v___y_2450_);
lean_del_object(v___x_2447_);
lean_dec(v_snd_2445_);
lean_del_object(v___x_2427_);
lean_dec(v_a_2418_);
lean_dec(v_n_2409_);
v___y_2430_ = v___y_2451_;
goto v___jp_2429_;
}
}
else
{
lean_object* v_a_2485_; lean_object* v___x_2487_; uint8_t v_isShared_2488_; uint8_t v_isSharedCheck_2492_; 
lean_dec(v___y_2453_);
lean_dec_ref(v___y_2452_);
lean_dec(v___y_2451_);
lean_dec_ref(v___y_2450_);
lean_del_object(v___x_2447_);
lean_dec(v_snd_2445_);
lean_del_object(v___x_2427_);
lean_dec(v_fst_2424_);
lean_dec(v_a_2418_);
lean_dec(v_n_2409_);
lean_dec_ref(v_e_2408_);
lean_dec(v_mvarId_2406_);
v_a_2485_ = lean_ctor_get(v___x_2454_, 0);
v_isSharedCheck_2492_ = !lean_is_exclusive(v___x_2454_);
if (v_isSharedCheck_2492_ == 0)
{
v___x_2487_ = v___x_2454_;
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
else
{
lean_inc(v_a_2485_);
lean_dec(v___x_2454_);
v___x_2487_ = lean_box(0);
v_isShared_2488_ = v_isSharedCheck_2492_;
goto v_resetjp_2486_;
}
v_resetjp_2486_:
{
lean_object* v___x_2490_; 
if (v_isShared_2488_ == 0)
{
v___x_2490_ = v___x_2487_;
goto v_reusejp_2489_;
}
else
{
lean_object* v_reuseFailAlloc_2491_; 
v_reuseFailAlloc_2491_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2491_, 0, v_a_2485_);
v___x_2490_ = v_reuseFailAlloc_2491_;
goto v_reusejp_2489_;
}
v_reusejp_2489_:
{
return v___x_2490_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_2516_; lean_object* v___x_2518_; uint8_t v_isShared_2519_; uint8_t v_isSharedCheck_2523_; 
lean_dec(v_a_2418_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v_n_2409_);
lean_dec_ref(v_e_2408_);
lean_dec(v_mvarId_2406_);
v_a_2516_ = lean_ctor_get(v___x_2422_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2422_);
if (v_isSharedCheck_2523_ == 0)
{
v___x_2518_ = v___x_2422_;
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
else
{
lean_inc(v_a_2516_);
lean_dec(v___x_2422_);
v___x_2518_ = lean_box(0);
v_isShared_2519_ = v_isSharedCheck_2523_;
goto v_resetjp_2517_;
}
v_resetjp_2517_:
{
lean_object* v___x_2521_; 
if (v_isShared_2519_ == 0)
{
v___x_2521_ = v___x_2518_;
goto v_reusejp_2520_;
}
else
{
lean_object* v_reuseFailAlloc_2522_; 
v_reuseFailAlloc_2522_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2522_, 0, v_a_2516_);
v___x_2521_ = v_reuseFailAlloc_2522_;
goto v_reusejp_2520_;
}
v_reusejp_2520_:
{
return v___x_2521_;
}
}
}
}
else
{
lean_object* v_a_2524_; lean_object* v___x_2526_; uint8_t v_isShared_2527_; uint8_t v_isSharedCheck_2531_; 
lean_dec(v_a_2418_);
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v_n_2409_);
lean_dec_ref(v_e_2408_);
lean_dec(v_mvarId_2406_);
v_a_2524_ = lean_ctor_get(v___x_2419_, 0);
v_isSharedCheck_2531_ = !lean_is_exclusive(v___x_2419_);
if (v_isSharedCheck_2531_ == 0)
{
v___x_2526_ = v___x_2419_;
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
else
{
lean_inc(v_a_2524_);
lean_dec(v___x_2419_);
v___x_2526_ = lean_box(0);
v_isShared_2527_ = v_isSharedCheck_2531_;
goto v_resetjp_2525_;
}
v_resetjp_2525_:
{
lean_object* v___x_2529_; 
if (v_isShared_2527_ == 0)
{
v___x_2529_ = v___x_2526_;
goto v_reusejp_2528_;
}
else
{
lean_object* v_reuseFailAlloc_2530_; 
v_reuseFailAlloc_2530_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2530_, 0, v_a_2524_);
v___x_2529_ = v_reuseFailAlloc_2530_;
goto v_reusejp_2528_;
}
v_reusejp_2528_:
{
return v___x_2529_;
}
}
}
}
else
{
lean_object* v_a_2532_; lean_object* v___x_2534_; uint8_t v_isShared_2535_; uint8_t v_isSharedCheck_2539_; 
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v_n_2409_);
lean_dec_ref(v_e_2408_);
lean_dec(v_mvarId_2406_);
v_a_2532_ = lean_ctor_get(v___x_2417_, 0);
v_isSharedCheck_2539_ = !lean_is_exclusive(v___x_2417_);
if (v_isSharedCheck_2539_ == 0)
{
v___x_2534_ = v___x_2417_;
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
else
{
lean_inc(v_a_2532_);
lean_dec(v___x_2417_);
v___x_2534_ = lean_box(0);
v_isShared_2535_ = v_isSharedCheck_2539_;
goto v_resetjp_2533_;
}
v_resetjp_2533_:
{
lean_object* v___x_2537_; 
if (v_isShared_2535_ == 0)
{
v___x_2537_ = v___x_2534_;
goto v_reusejp_2536_;
}
else
{
lean_object* v_reuseFailAlloc_2538_; 
v_reuseFailAlloc_2538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2538_, 0, v_a_2532_);
v___x_2537_ = v_reuseFailAlloc_2538_;
goto v_reusejp_2536_;
}
v_reusejp_2536_:
{
return v___x_2537_;
}
}
}
}
else
{
lean_object* v_a_2540_; lean_object* v___x_2542_; uint8_t v_isShared_2543_; uint8_t v_isSharedCheck_2547_; 
lean_dec(v___y_2414_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec_ref(v___y_2411_);
lean_dec(v_n_2409_);
lean_dec_ref(v_e_2408_);
lean_dec(v_mvarId_2406_);
v_a_2540_ = lean_ctor_get(v___x_2416_, 0);
v_isSharedCheck_2547_ = !lean_is_exclusive(v___x_2416_);
if (v_isSharedCheck_2547_ == 0)
{
v___x_2542_ = v___x_2416_;
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
else
{
lean_inc(v_a_2540_);
lean_dec(v___x_2416_);
v___x_2542_ = lean_box(0);
v_isShared_2543_ = v_isSharedCheck_2547_;
goto v_resetjp_2541_;
}
v_resetjp_2541_:
{
lean_object* v___x_2545_; 
if (v_isShared_2543_ == 0)
{
v___x_2545_ = v___x_2542_;
goto v_reusejp_2544_;
}
else
{
lean_object* v_reuseFailAlloc_2546_; 
v_reuseFailAlloc_2546_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2546_, 0, v_a_2540_);
v___x_2545_ = v_reuseFailAlloc_2546_;
goto v_reusejp_2544_;
}
v_reusejp_2544_:
{
return v___x_2545_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___lam__0___boxed(lean_object* v_mvarId_2548_, lean_object* v___x_2549_, lean_object* v_e_2550_, lean_object* v_n_2551_, lean_object* v_useApproxDefEq_2552_, lean_object* v___y_2553_, lean_object* v___y_2554_, lean_object* v___y_2555_, lean_object* v___y_2556_, lean_object* v___y_2557_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2558_; lean_object* v_res_2559_; 
v_useApproxDefEq_boxed_2558_ = lean_unbox(v_useApproxDefEq_2552_);
v_res_2559_ = l_Lean_MVarId_applyN___lam__0(v_mvarId_2548_, v___x_2549_, v_e_2550_, v_n_2551_, v_useApproxDefEq_boxed_2558_, v___y_2553_, v___y_2554_, v___y_2555_, v___y_2556_);
return v_res_2559_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN(lean_object* v_mvarId_2560_, lean_object* v_e_2561_, lean_object* v_n_2562_, uint8_t v_useApproxDefEq_2563_, lean_object* v_a_2564_, lean_object* v_a_2565_, lean_object* v_a_2566_, lean_object* v_a_2567_){
_start:
{
lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___f_2571_; lean_object* v___x_2572_; 
v___x_2569_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_throwApplyError___redArg___closed__7));
v___x_2570_ = lean_box(v_useApproxDefEq_2563_);
lean_inc(v_mvarId_2560_);
v___f_2571_ = lean_alloc_closure((void*)(l_Lean_MVarId_applyN___lam__0___boxed), 10, 5);
lean_closure_set(v___f_2571_, 0, v_mvarId_2560_);
lean_closure_set(v___f_2571_, 1, v___x_2569_);
lean_closure_set(v___f_2571_, 2, v_e_2561_);
lean_closure_set(v___f_2571_, 3, v_n_2562_);
lean_closure_set(v___f_2571_, 4, v___x_2570_);
v___x_2572_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2560_, v___f_2571_, v_a_2564_, v_a_2565_, v_a_2566_, v_a_2567_);
return v___x_2572_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_applyN___boxed(lean_object* v_mvarId_2573_, lean_object* v_e_2574_, lean_object* v_n_2575_, lean_object* v_useApproxDefEq_2576_, lean_object* v_a_2577_, lean_object* v_a_2578_, lean_object* v_a_2579_, lean_object* v_a_2580_, lean_object* v_a_2581_){
_start:
{
uint8_t v_useApproxDefEq_boxed_2582_; lean_object* v_res_2583_; 
v_useApproxDefEq_boxed_2582_ = lean_unbox(v_useApproxDefEq_2576_);
v_res_2583_ = l_Lean_MVarId_applyN(v_mvarId_2573_, v_e_2574_, v_n_2575_, v_useApproxDefEq_boxed_2582_, v_a_2577_, v_a_2578_, v_a_2579_, v_a_2580_);
lean_dec(v_a_2580_);
lean_dec_ref(v_a_2579_);
lean_dec(v_a_2578_);
lean_dec_ref(v_a_2577_);
return v_res_2583_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(lean_object* v_00_u03b1_2584_, lean_object* v_msg_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_, lean_object* v___y_2589_){
_start:
{
lean_object* v___x_2591_; 
v___x_2591_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v_msg_2585_, v___y_2586_, v___y_2587_, v___y_2588_, v___y_2589_);
return v___x_2591_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___boxed(lean_object* v_00_u03b1_2592_, lean_object* v_msg_2593_, lean_object* v___y_2594_, lean_object* v___y_2595_, lean_object* v___y_2596_, lean_object* v___y_2597_, lean_object* v___y_2598_){
_start:
{
lean_object* v_res_2599_; 
v_res_2599_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1(v_00_u03b1_2592_, v_msg_2593_, v___y_2594_, v___y_2595_, v___y_2596_, v___y_2597_);
lean_dec(v___y_2597_);
lean_dec_ref(v___y_2596_);
lean_dec(v___y_2595_);
lean_dec_ref(v___y_2594_);
return v_res_2599_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6(void){
_start:
{
lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; 
v___x_2610_ = lean_box(0);
v___x_2611_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__5));
v___x_2612_ = l_Lean_mkConst(v___x_2611_, v___x_2610_);
return v___x_2612_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(lean_object* v_tag_2613_, lean_object* v_type_2614_, lean_object* v_a_2615_, lean_object* v_a_2616_, lean_object* v_a_2617_, lean_object* v_a_2618_, lean_object* v_a_2619_){
_start:
{
lean_object* v___x_2621_; 
lean_inc(v_a_2619_);
lean_inc_ref(v_a_2618_);
lean_inc(v_a_2617_);
lean_inc_ref(v_a_2616_);
v___x_2621_ = lean_whnf(v_type_2614_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_);
if (lean_obj_tag(v___x_2621_) == 0)
{
lean_object* v_a_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint8_t v___x_2625_; 
v_a_2622_ = lean_ctor_get(v___x_2621_, 0);
lean_inc(v_a_2622_);
lean_dec_ref_known(v___x_2621_, 1);
v___x_2623_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1));
v___x_2624_ = lean_unsigned_to_nat(2u);
v___x_2625_ = l_Lean_Expr_isAppOfArity(v_a_2622_, v___x_2623_, v___x_2624_);
if (v___x_2625_ == 0)
{
lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; 
v___x_2626_ = lean_st_ref_get(v_a_2615_);
v___x_2627_ = lean_array_get_size(v___x_2626_);
lean_dec(v___x_2626_);
v___x_2628_ = lean_unsigned_to_nat(1u);
v___x_2629_ = lean_nat_add(v___x_2627_, v___x_2628_);
v___x_2630_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__3));
v___x_2631_ = lean_name_append_index_after(v___x_2630_, v___x_2629_);
v___x_2632_ = l_Lean_Name_append(v_tag_2613_, v___x_2631_);
v___x_2633_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_2622_, v___x_2632_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_);
if (lean_obj_tag(v___x_2633_) == 0)
{
lean_object* v_a_2634_; lean_object* v___x_2636_; uint8_t v_isShared_2637_; uint8_t v_isSharedCheck_2645_; 
v_a_2634_ = lean_ctor_get(v___x_2633_, 0);
v_isSharedCheck_2645_ = !lean_is_exclusive(v___x_2633_);
if (v_isSharedCheck_2645_ == 0)
{
v___x_2636_ = v___x_2633_;
v_isShared_2637_ = v_isSharedCheck_2645_;
goto v_resetjp_2635_;
}
else
{
lean_inc(v_a_2634_);
lean_dec(v___x_2633_);
v___x_2636_ = lean_box(0);
v_isShared_2637_ = v_isSharedCheck_2645_;
goto v_resetjp_2635_;
}
v_resetjp_2635_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2643_; 
v___x_2638_ = lean_st_ref_take(v_a_2615_);
v___x_2639_ = l_Lean_Expr_mvarId_x21(v_a_2634_);
v___x_2640_ = lean_array_push(v___x_2638_, v___x_2639_);
v___x_2641_ = lean_st_ref_put(v_a_2615_, v___x_2640_);
if (v_isShared_2637_ == 0)
{
v___x_2643_ = v___x_2636_;
goto v_reusejp_2642_;
}
else
{
lean_object* v_reuseFailAlloc_2644_; 
v_reuseFailAlloc_2644_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2644_, 0, v_a_2634_);
v___x_2643_ = v_reuseFailAlloc_2644_;
goto v_reusejp_2642_;
}
v_reusejp_2642_:
{
return v___x_2643_;
}
}
}
else
{
return v___x_2633_;
}
}
else
{
lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; 
v___x_2646_ = l_Lean_Expr_appFn_x21(v_a_2622_);
v___x_2647_ = l_Lean_Expr_appArg_x21(v___x_2646_);
lean_dec_ref(v___x_2646_);
v___x_2648_ = l_Lean_Expr_appArg_x21(v_a_2622_);
lean_dec(v_a_2622_);
lean_inc_ref(v___x_2647_);
lean_inc(v_tag_2613_);
v___x_2649_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2613_, v___x_2647_, v_a_2615_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_);
if (lean_obj_tag(v___x_2649_) == 0)
{
lean_object* v_a_2650_; lean_object* v___x_2651_; 
v_a_2650_ = lean_ctor_get(v___x_2649_, 0);
lean_inc(v_a_2650_);
lean_dec_ref_known(v___x_2649_, 1);
lean_inc_ref(v___x_2648_);
v___x_2651_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2613_, v___x_2648_, v_a_2615_, v_a_2616_, v_a_2617_, v_a_2618_, v_a_2619_);
if (lean_obj_tag(v___x_2651_) == 0)
{
lean_object* v_a_2652_; lean_object* v___x_2654_; uint8_t v_isShared_2655_; uint8_t v_isSharedCheck_2661_; 
v_a_2652_ = lean_ctor_get(v___x_2651_, 0);
v_isSharedCheck_2661_ = !lean_is_exclusive(v___x_2651_);
if (v_isSharedCheck_2661_ == 0)
{
v___x_2654_ = v___x_2651_;
v_isShared_2655_ = v_isSharedCheck_2661_;
goto v_resetjp_2653_;
}
else
{
lean_inc(v_a_2652_);
lean_dec(v___x_2651_);
v___x_2654_ = lean_box(0);
v_isShared_2655_ = v_isSharedCheck_2661_;
goto v_resetjp_2653_;
}
v_resetjp_2653_:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2659_; 
v___x_2656_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6, &l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6_once, _init_l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__6);
v___x_2657_ = l_Lean_mkApp4(v___x_2656_, v___x_2647_, v___x_2648_, v_a_2650_, v_a_2652_);
if (v_isShared_2655_ == 0)
{
lean_ctor_set(v___x_2654_, 0, v___x_2657_);
v___x_2659_ = v___x_2654_;
goto v_reusejp_2658_;
}
else
{
lean_object* v_reuseFailAlloc_2660_; 
v_reuseFailAlloc_2660_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2660_, 0, v___x_2657_);
v___x_2659_ = v_reuseFailAlloc_2660_;
goto v_reusejp_2658_;
}
v_reusejp_2658_:
{
return v___x_2659_;
}
}
}
else
{
lean_dec(v_a_2650_);
lean_dec_ref(v___x_2648_);
lean_dec_ref(v___x_2647_);
return v___x_2651_;
}
}
else
{
lean_dec_ref(v___x_2648_);
lean_dec_ref(v___x_2647_);
lean_dec(v_tag_2613_);
return v___x_2649_;
}
}
}
else
{
lean_dec(v_tag_2613_);
return v___x_2621_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___boxed(lean_object* v_tag_2662_, lean_object* v_type_2663_, lean_object* v_a_2664_, lean_object* v_a_2665_, lean_object* v_a_2666_, lean_object* v_a_2667_, lean_object* v_a_2668_, lean_object* v_a_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_tag_2662_, v_type_2663_, v_a_2664_, v_a_2665_, v_a_2666_, v_a_2667_, v_a_2668_);
lean_dec(v_a_2668_);
lean_dec_ref(v_a_2667_);
lean_dec(v_a_2666_);
lean_dec_ref(v_a_2665_);
lean_dec(v_a_2664_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0(lean_object* v_mvarId_2671_, lean_object* v___x_2672_, lean_object* v___y_2673_, lean_object* v___y_2674_, lean_object* v___y_2675_, lean_object* v___y_2676_){
_start:
{
lean_object* v___x_2678_; 
lean_inc(v_mvarId_2671_);
v___x_2678_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2671_, v___x_2672_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
if (lean_obj_tag(v___x_2678_) == 0)
{
lean_object* v___x_2679_; 
lean_dec_ref_known(v___x_2678_, 1);
lean_inc(v_mvarId_2671_);
v___x_2679_ = l_Lean_MVarId_getType_x27(v_mvarId_2671_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
if (lean_obj_tag(v___x_2679_) == 0)
{
lean_object* v_a_2680_; lean_object* v___x_2682_; uint8_t v_isShared_2683_; uint8_t v_isSharedCheck_2725_; 
v_a_2680_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2725_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2682_ = v___x_2679_;
v_isShared_2683_ = v_isSharedCheck_2725_;
goto v_resetjp_2681_;
}
else
{
lean_inc(v_a_2680_);
lean_dec(v___x_2679_);
v___x_2682_ = lean_box(0);
v_isShared_2683_ = v_isSharedCheck_2725_;
goto v_resetjp_2681_;
}
v_resetjp_2681_:
{
lean_object* v___x_2684_; lean_object* v___x_2685_; uint8_t v___x_2686_; 
v___x_2684_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go___closed__1));
v___x_2685_ = lean_unsigned_to_nat(2u);
v___x_2686_ = l_Lean_Expr_isAppOfArity(v_a_2680_, v___x_2684_, v___x_2685_);
if (v___x_2686_ == 0)
{
lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2690_; 
lean_dec(v_a_2680_);
v___x_2687_ = lean_box(0);
v___x_2688_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2688_, 0, v_mvarId_2671_);
lean_ctor_set(v___x_2688_, 1, v___x_2687_);
if (v_isShared_2683_ == 0)
{
lean_ctor_set(v___x_2682_, 0, v___x_2688_);
v___x_2690_ = v___x_2682_;
goto v_reusejp_2689_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___x_2688_);
v___x_2690_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2689_;
}
v_reusejp_2689_:
{
return v___x_2690_;
}
}
else
{
lean_object* v___x_2692_; 
lean_del_object(v___x_2682_);
lean_inc(v_mvarId_2671_);
v___x_2692_ = l_Lean_MVarId_getTag(v_mvarId_2671_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
if (lean_obj_tag(v___x_2692_) == 0)
{
lean_object* v_a_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; 
v_a_2693_ = lean_ctor_get(v___x_2692_, 0);
lean_inc(v_a_2693_);
lean_dec_ref_known(v___x_2692_, 1);
v___x_2694_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Apply_0__Lean_Meta_partitionDependentMVars___closed__0));
v___x_2695_ = lean_st_mk_ref(v___x_2694_);
v___x_2696_ = l___private_Lean_Meta_Tactic_Apply_0__Lean_MVarId_splitAndCore_go(v_a_2693_, v_a_2680_, v___x_2695_, v___y_2673_, v___y_2674_, v___y_2675_, v___y_2676_);
if (lean_obj_tag(v___x_2696_) == 0)
{
lean_object* v_a_2697_; lean_object* v___x_2698_; lean_object* v___x_2699_; lean_object* v___x_2701_; uint8_t v_isShared_2702_; uint8_t v_isSharedCheck_2707_; 
v_a_2697_ = lean_ctor_get(v___x_2696_, 0);
lean_inc(v_a_2697_);
lean_dec_ref_known(v___x_2696_, 1);
v___x_2698_ = lean_st_ref_get(v___x_2695_);
lean_dec(v___x_2695_);
v___x_2699_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2671_, v_a_2697_, v___y_2674_);
v_isSharedCheck_2707_ = !lean_is_exclusive(v___x_2699_);
if (v_isSharedCheck_2707_ == 0)
{
lean_object* v_unused_2708_; 
v_unused_2708_ = lean_ctor_get(v___x_2699_, 0);
lean_dec(v_unused_2708_);
v___x_2701_ = v___x_2699_;
v_isShared_2702_ = v_isSharedCheck_2707_;
goto v_resetjp_2700_;
}
else
{
lean_dec(v___x_2699_);
v___x_2701_ = lean_box(0);
v_isShared_2702_ = v_isSharedCheck_2707_;
goto v_resetjp_2700_;
}
v_resetjp_2700_:
{
lean_object* v___x_2703_; lean_object* v___x_2705_; 
v___x_2703_ = lean_array_to_list(v___x_2698_);
if (v_isShared_2702_ == 0)
{
lean_ctor_set(v___x_2701_, 0, v___x_2703_);
v___x_2705_ = v___x_2701_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2706_; 
v_reuseFailAlloc_2706_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2706_, 0, v___x_2703_);
v___x_2705_ = v_reuseFailAlloc_2706_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
return v___x_2705_;
}
}
}
else
{
lean_object* v_a_2709_; lean_object* v___x_2711_; uint8_t v_isShared_2712_; uint8_t v_isSharedCheck_2716_; 
lean_dec(v___x_2695_);
lean_dec(v_mvarId_2671_);
v_a_2709_ = lean_ctor_get(v___x_2696_, 0);
v_isSharedCheck_2716_ = !lean_is_exclusive(v___x_2696_);
if (v_isSharedCheck_2716_ == 0)
{
v___x_2711_ = v___x_2696_;
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
else
{
lean_inc(v_a_2709_);
lean_dec(v___x_2696_);
v___x_2711_ = lean_box(0);
v_isShared_2712_ = v_isSharedCheck_2716_;
goto v_resetjp_2710_;
}
v_resetjp_2710_:
{
lean_object* v___x_2714_; 
if (v_isShared_2712_ == 0)
{
v___x_2714_ = v___x_2711_;
goto v_reusejp_2713_;
}
else
{
lean_object* v_reuseFailAlloc_2715_; 
v_reuseFailAlloc_2715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2715_, 0, v_a_2709_);
v___x_2714_ = v_reuseFailAlloc_2715_;
goto v_reusejp_2713_;
}
v_reusejp_2713_:
{
return v___x_2714_;
}
}
}
}
else
{
lean_object* v_a_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2724_; 
lean_dec(v_a_2680_);
lean_dec(v_mvarId_2671_);
v_a_2717_ = lean_ctor_get(v___x_2692_, 0);
v_isSharedCheck_2724_ = !lean_is_exclusive(v___x_2692_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2719_ = v___x_2692_;
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_a_2717_);
lean_dec(v___x_2692_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2724_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2722_; 
if (v_isShared_2720_ == 0)
{
v___x_2722_ = v___x_2719_;
goto v_reusejp_2721_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v_a_2717_);
v___x_2722_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2721_;
}
v_reusejp_2721_:
{
return v___x_2722_;
}
}
}
}
}
}
else
{
lean_object* v_a_2726_; lean_object* v___x_2728_; uint8_t v_isShared_2729_; uint8_t v_isSharedCheck_2733_; 
lean_dec(v_mvarId_2671_);
v_a_2726_ = lean_ctor_get(v___x_2679_, 0);
v_isSharedCheck_2733_ = !lean_is_exclusive(v___x_2679_);
if (v_isSharedCheck_2733_ == 0)
{
v___x_2728_ = v___x_2679_;
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
else
{
lean_inc(v_a_2726_);
lean_dec(v___x_2679_);
v___x_2728_ = lean_box(0);
v_isShared_2729_ = v_isSharedCheck_2733_;
goto v_resetjp_2727_;
}
v_resetjp_2727_:
{
lean_object* v___x_2731_; 
if (v_isShared_2729_ == 0)
{
v___x_2731_ = v___x_2728_;
goto v_reusejp_2730_;
}
else
{
lean_object* v_reuseFailAlloc_2732_; 
v_reuseFailAlloc_2732_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2732_, 0, v_a_2726_);
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
else
{
lean_object* v_a_2734_; lean_object* v___x_2736_; uint8_t v_isShared_2737_; uint8_t v_isSharedCheck_2741_; 
lean_dec(v_mvarId_2671_);
v_a_2734_ = lean_ctor_get(v___x_2678_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2678_);
if (v_isSharedCheck_2741_ == 0)
{
v___x_2736_ = v___x_2678_;
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
else
{
lean_inc(v_a_2734_);
lean_dec(v___x_2678_);
v___x_2736_ = lean_box(0);
v_isShared_2737_ = v_isSharedCheck_2741_;
goto v_resetjp_2735_;
}
v_resetjp_2735_:
{
lean_object* v___x_2739_; 
if (v_isShared_2737_ == 0)
{
v___x_2739_ = v___x_2736_;
goto v_reusejp_2738_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v_a_2734_);
v___x_2739_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2738_;
}
v_reusejp_2738_:
{
return v___x_2739_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___lam__0___boxed(lean_object* v_mvarId_2742_, lean_object* v___x_2743_, lean_object* v___y_2744_, lean_object* v___y_2745_, lean_object* v___y_2746_, lean_object* v___y_2747_, lean_object* v___y_2748_){
_start:
{
lean_object* v_res_2749_; 
v_res_2749_ = l_Lean_MVarId_splitAndCore___lam__0(v_mvarId_2742_, v___x_2743_, v___y_2744_, v___y_2745_, v___y_2746_, v___y_2747_);
lean_dec(v___y_2747_);
lean_dec_ref(v___y_2746_);
lean_dec(v___y_2745_);
lean_dec_ref(v___y_2744_);
return v_res_2749_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore(lean_object* v_mvarId_2753_, lean_object* v_a_2754_, lean_object* v_a_2755_, lean_object* v_a_2756_, lean_object* v_a_2757_){
_start:
{
lean_object* v___x_2759_; lean_object* v___f_2760_; lean_object* v___x_2761_; 
v___x_2759_ = ((lean_object*)(l_Lean_MVarId_splitAndCore___closed__1));
lean_inc(v_mvarId_2753_);
v___f_2760_ = lean_alloc_closure((void*)(l_Lean_MVarId_splitAndCore___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2760_, 0, v_mvarId_2753_);
lean_closure_set(v___f_2760_, 1, v___x_2759_);
v___x_2761_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2753_, v___f_2760_, v_a_2754_, v_a_2755_, v_a_2756_, v_a_2757_);
return v___x_2761_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAndCore___boxed(lean_object* v_mvarId_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_, lean_object* v_a_2765_, lean_object* v_a_2766_, lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = l_Lean_MVarId_splitAndCore(v_mvarId_2762_, v_a_2763_, v_a_2764_, v_a_2765_, v_a_2766_);
lean_dec(v_a_2766_);
lean_dec_ref(v_a_2765_);
lean_dec(v_a_2764_);
lean_dec_ref(v_a_2763_);
return v_res_2768_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd(lean_object* v_mvarId_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_, lean_object* v_a_2772_, lean_object* v_a_2773_){
_start:
{
lean_object* v___x_2775_; 
v___x_2775_ = l_Lean_MVarId_splitAndCore(v_mvarId_2769_, v_a_2770_, v_a_2771_, v_a_2772_, v_a_2773_);
return v___x_2775_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_splitAnd___boxed(lean_object* v_mvarId_2776_, lean_object* v_a_2777_, lean_object* v_a_2778_, lean_object* v_a_2779_, lean_object* v_a_2780_, lean_object* v_a_2781_){
_start:
{
lean_object* v_res_2782_; 
v_res_2782_ = l_Lean_MVarId_splitAnd(v_mvarId_2776_, v_a_2777_, v_a_2778_, v_a_2779_, v_a_2780_);
lean_dec(v_a_2780_);
lean_dec_ref(v_a_2779_);
lean_dec(v_a_2778_);
lean_dec_ref(v_a_2777_);
return v_res_2782_;
}
}
static lean_object* _init_l_Lean_MVarId_exfalso___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2786_ = lean_box(0);
v___x_2787_ = ((lean_object*)(l_Lean_MVarId_exfalso___lam__0___closed__1));
v___x_2788_ = l_Lean_mkConst(v___x_2787_, v___x_2786_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0(lean_object* v_mvarId_2793_, lean_object* v___x_2794_, lean_object* v___y_2795_, lean_object* v___y_2796_, lean_object* v___y_2797_, lean_object* v___y_2798_){
_start:
{
lean_object* v___x_2800_; 
lean_inc(v_mvarId_2793_);
v___x_2800_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_2793_, v___x_2794_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
if (lean_obj_tag(v___x_2800_) == 0)
{
lean_object* v___x_2801_; 
lean_dec_ref_known(v___x_2800_, 1);
lean_inc(v_mvarId_2793_);
v___x_2801_ = l_Lean_MVarId_getType(v_mvarId_2793_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
if (lean_obj_tag(v___x_2801_) == 0)
{
lean_object* v_a_2802_; lean_object* v___x_2803_; lean_object* v_a_2804_; lean_object* v___x_2805_; 
v_a_2802_ = lean_ctor_get(v___x_2801_, 0);
lean_inc(v_a_2802_);
lean_dec_ref_known(v___x_2801_, 1);
v___x_2803_ = l_Lean_instantiateMVars___at___00Lean_MVarId_apply_spec__0___redArg(v_a_2802_, v___y_2796_);
v_a_2804_ = lean_ctor_get(v___x_2803_, 0);
lean_inc_n(v_a_2804_, 2);
lean_dec_ref(v___x_2803_);
v___x_2805_ = l_Lean_Meta_getLevel(v_a_2804_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
if (lean_obj_tag(v___x_2805_) == 0)
{
lean_object* v_a_2806_; lean_object* v___x_2807_; 
v_a_2806_ = lean_ctor_get(v___x_2805_, 0);
lean_inc(v_a_2806_);
lean_dec_ref_known(v___x_2805_, 1);
lean_inc(v_mvarId_2793_);
v___x_2807_ = l_Lean_MVarId_getTag(v_mvarId_2793_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
if (lean_obj_tag(v___x_2807_) == 0)
{
lean_object* v_a_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; 
v_a_2808_ = lean_ctor_get(v___x_2807_, 0);
lean_inc(v_a_2808_);
lean_dec_ref_known(v___x_2807_, 1);
v___x_2809_ = lean_box(0);
v___x_2810_ = lean_obj_once(&l_Lean_MVarId_exfalso___lam__0___closed__2, &l_Lean_MVarId_exfalso___lam__0___closed__2_once, _init_l_Lean_MVarId_exfalso___lam__0___closed__2);
v___x_2811_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v___x_2810_, v_a_2808_, v___y_2795_, v___y_2796_, v___y_2797_, v___y_2798_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v_a_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; lean_object* v___x_2819_; uint8_t v_isShared_2820_; uint8_t v_isSharedCheck_2825_; 
v_a_2812_ = lean_ctor_get(v___x_2811_, 0);
lean_inc_n(v_a_2812_, 2);
lean_dec_ref_known(v___x_2811_, 1);
v___x_2813_ = ((lean_object*)(l_Lean_MVarId_exfalso___lam__0___closed__4));
v___x_2814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2814_, 0, v_a_2806_);
lean_ctor_set(v___x_2814_, 1, v___x_2809_);
v___x_2815_ = l_Lean_mkConst(v___x_2813_, v___x_2814_);
v___x_2816_ = l_Lean_mkAppB(v___x_2815_, v_a_2804_, v_a_2812_);
v___x_2817_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_2793_, v___x_2816_, v___y_2796_);
v_isSharedCheck_2825_ = !lean_is_exclusive(v___x_2817_);
if (v_isSharedCheck_2825_ == 0)
{
lean_object* v_unused_2826_; 
v_unused_2826_ = lean_ctor_get(v___x_2817_, 0);
lean_dec(v_unused_2826_);
v___x_2819_ = v___x_2817_;
v_isShared_2820_ = v_isSharedCheck_2825_;
goto v_resetjp_2818_;
}
else
{
lean_dec(v___x_2817_);
v___x_2819_ = lean_box(0);
v_isShared_2820_ = v_isSharedCheck_2825_;
goto v_resetjp_2818_;
}
v_resetjp_2818_:
{
lean_object* v___x_2821_; lean_object* v___x_2823_; 
v___x_2821_ = l_Lean_Expr_mvarId_x21(v_a_2812_);
lean_dec(v_a_2812_);
if (v_isShared_2820_ == 0)
{
lean_ctor_set(v___x_2819_, 0, v___x_2821_);
v___x_2823_ = v___x_2819_;
goto v_reusejp_2822_;
}
else
{
lean_object* v_reuseFailAlloc_2824_; 
v_reuseFailAlloc_2824_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2824_, 0, v___x_2821_);
v___x_2823_ = v_reuseFailAlloc_2824_;
goto v_reusejp_2822_;
}
v_reusejp_2822_:
{
return v___x_2823_;
}
}
}
else
{
lean_object* v_a_2827_; lean_object* v___x_2829_; uint8_t v_isShared_2830_; uint8_t v_isSharedCheck_2834_; 
lean_dec(v_a_2806_);
lean_dec(v_a_2804_);
lean_dec(v_mvarId_2793_);
v_a_2827_ = lean_ctor_get(v___x_2811_, 0);
v_isSharedCheck_2834_ = !lean_is_exclusive(v___x_2811_);
if (v_isSharedCheck_2834_ == 0)
{
v___x_2829_ = v___x_2811_;
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
else
{
lean_inc(v_a_2827_);
lean_dec(v___x_2811_);
v___x_2829_ = lean_box(0);
v_isShared_2830_ = v_isSharedCheck_2834_;
goto v_resetjp_2828_;
}
v_resetjp_2828_:
{
lean_object* v___x_2832_; 
if (v_isShared_2830_ == 0)
{
v___x_2832_ = v___x_2829_;
goto v_reusejp_2831_;
}
else
{
lean_object* v_reuseFailAlloc_2833_; 
v_reuseFailAlloc_2833_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2833_, 0, v_a_2827_);
v___x_2832_ = v_reuseFailAlloc_2833_;
goto v_reusejp_2831_;
}
v_reusejp_2831_:
{
return v___x_2832_;
}
}
}
}
else
{
lean_object* v_a_2835_; lean_object* v___x_2837_; uint8_t v_isShared_2838_; uint8_t v_isSharedCheck_2842_; 
lean_dec(v_a_2806_);
lean_dec(v_a_2804_);
lean_dec(v_mvarId_2793_);
v_a_2835_ = lean_ctor_get(v___x_2807_, 0);
v_isSharedCheck_2842_ = !lean_is_exclusive(v___x_2807_);
if (v_isSharedCheck_2842_ == 0)
{
v___x_2837_ = v___x_2807_;
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
else
{
lean_inc(v_a_2835_);
lean_dec(v___x_2807_);
v___x_2837_ = lean_box(0);
v_isShared_2838_ = v_isSharedCheck_2842_;
goto v_resetjp_2836_;
}
v_resetjp_2836_:
{
lean_object* v___x_2840_; 
if (v_isShared_2838_ == 0)
{
v___x_2840_ = v___x_2837_;
goto v_reusejp_2839_;
}
else
{
lean_object* v_reuseFailAlloc_2841_; 
v_reuseFailAlloc_2841_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2841_, 0, v_a_2835_);
v___x_2840_ = v_reuseFailAlloc_2841_;
goto v_reusejp_2839_;
}
v_reusejp_2839_:
{
return v___x_2840_;
}
}
}
}
else
{
lean_object* v_a_2843_; lean_object* v___x_2845_; uint8_t v_isShared_2846_; uint8_t v_isSharedCheck_2850_; 
lean_dec(v_a_2804_);
lean_dec(v_mvarId_2793_);
v_a_2843_ = lean_ctor_get(v___x_2805_, 0);
v_isSharedCheck_2850_ = !lean_is_exclusive(v___x_2805_);
if (v_isSharedCheck_2850_ == 0)
{
v___x_2845_ = v___x_2805_;
v_isShared_2846_ = v_isSharedCheck_2850_;
goto v_resetjp_2844_;
}
else
{
lean_inc(v_a_2843_);
lean_dec(v___x_2805_);
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
lean_dec(v_mvarId_2793_);
v_a_2851_ = lean_ctor_get(v___x_2801_, 0);
v_isSharedCheck_2858_ = !lean_is_exclusive(v___x_2801_);
if (v_isSharedCheck_2858_ == 0)
{
v___x_2853_ = v___x_2801_;
v_isShared_2854_ = v_isSharedCheck_2858_;
goto v_resetjp_2852_;
}
else
{
lean_inc(v_a_2851_);
lean_dec(v___x_2801_);
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
lean_dec(v_mvarId_2793_);
v_a_2859_ = lean_ctor_get(v___x_2800_, 0);
v_isSharedCheck_2866_ = !lean_is_exclusive(v___x_2800_);
if (v_isSharedCheck_2866_ == 0)
{
v___x_2861_ = v___x_2800_;
v_isShared_2862_ = v_isSharedCheck_2866_;
goto v_resetjp_2860_;
}
else
{
lean_inc(v_a_2859_);
lean_dec(v___x_2800_);
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
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___lam__0___boxed(lean_object* v_mvarId_2867_, lean_object* v___x_2868_, lean_object* v___y_2869_, lean_object* v___y_2870_, lean_object* v___y_2871_, lean_object* v___y_2872_, lean_object* v___y_2873_){
_start:
{
lean_object* v_res_2874_; 
v_res_2874_ = l_Lean_MVarId_exfalso___lam__0(v_mvarId_2867_, v___x_2868_, v___y_2869_, v___y_2870_, v___y_2871_, v___y_2872_);
lean_dec(v___y_2872_);
lean_dec_ref(v___y_2871_);
lean_dec(v___y_2870_);
lean_dec_ref(v___y_2869_);
return v_res_2874_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso(lean_object* v_mvarId_2878_, lean_object* v_a_2879_, lean_object* v_a_2880_, lean_object* v_a_2881_, lean_object* v_a_2882_){
_start:
{
lean_object* v___x_2884_; lean_object* v___f_2885_; lean_object* v___x_2886_; 
v___x_2884_ = ((lean_object*)(l_Lean_MVarId_exfalso___closed__1));
lean_inc(v_mvarId_2878_);
v___f_2885_ = lean_alloc_closure((void*)(l_Lean_MVarId_exfalso___lam__0___boxed), 7, 2);
lean_closure_set(v___f_2885_, 0, v_mvarId_2878_);
lean_closure_set(v___f_2885_, 1, v___x_2884_);
v___x_2886_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_2878_, v___f_2885_, v_a_2879_, v_a_2880_, v_a_2881_, v_a_2882_);
return v___x_2886_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_exfalso___boxed(lean_object* v_mvarId_2887_, lean_object* v_a_2888_, lean_object* v_a_2889_, lean_object* v_a_2890_, lean_object* v_a_2891_, lean_object* v_a_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = l_Lean_MVarId_exfalso(v_mvarId_2887_, v_a_2888_, v_a_2889_, v_a_2890_, v_a_2891_);
lean_dec(v_a_2891_);
lean_dec_ref(v_a_2890_);
lean_dec(v_a_2889_);
lean_dec_ref(v_a_2888_);
return v_res_2893_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2(void){
_start:
{
lean_object* v___x_2897_; lean_object* v___x_2898_; 
v___x_2897_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__1));
v___x_2898_ = l_Lean_MessageData_ofFormat(v___x_2897_);
return v___x_2898_;
}
}
static lean_object* _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3(void){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; 
v___x_2899_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__2, &l_Lean_MVarId_nthConstructor___lam__0___closed__2_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__2);
v___x_2900_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2900_, 0, v___x_2899_);
return v___x_2900_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0(lean_object* v_name_2905_, lean_object* v_goal_2906_, lean_object* v_idx_2907_, lean_object* v_expected_x3f_2908_, lean_object* v___y_2909_, lean_object* v___y_2910_, lean_object* v___y_2911_, lean_object* v___y_2912_){
_start:
{
lean_object* v___x_2917_; 
lean_inc(v_name_2905_);
lean_inc(v_goal_2906_);
v___x_2917_ = l_Lean_MVarId_checkNotAssigned(v_goal_2906_, v_name_2905_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
if (lean_obj_tag(v___x_2917_) == 0)
{
lean_object* v___x_2918_; 
lean_dec_ref_known(v___x_2917_, 1);
lean_inc(v_goal_2906_);
v___x_2918_ = l_Lean_MVarId_getType_x27(v_goal_2906_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
if (lean_obj_tag(v___x_2918_) == 0)
{
lean_object* v_a_2919_; lean_object* v___x_2920_; 
v_a_2919_ = lean_ctor_get(v___x_2918_, 0);
lean_inc(v_a_2919_);
lean_dec_ref_known(v___x_2918_, 1);
v___x_2920_ = l_Lean_Expr_getAppFn(v_a_2919_);
lean_dec(v_a_2919_);
if (lean_obj_tag(v___x_2920_) == 4)
{
lean_object* v_declName_2921_; lean_object* v_us_2922_; lean_object* v___x_2923_; lean_object* v_env_2924_; uint8_t v___x_2925_; lean_object* v___x_2926_; 
v_declName_2921_ = lean_ctor_get(v___x_2920_, 0);
lean_inc(v_declName_2921_);
v_us_2922_ = lean_ctor_get(v___x_2920_, 1);
lean_inc(v_us_2922_);
lean_dec_ref_known(v___x_2920_, 2);
v___x_2923_ = lean_st_ref_get(v___y_2912_);
v_env_2924_ = lean_ctor_get(v___x_2923_, 0);
lean_inc_ref(v_env_2924_);
lean_dec(v___x_2923_);
v___x_2925_ = 0;
v___x_2926_ = l_Lean_Environment_find_x3f(v_env_2924_, v_declName_2921_, v___x_2925_);
if (lean_obj_tag(v___x_2926_) == 0)
{
lean_dec(v_us_2922_);
lean_dec(v_expected_x3f_2908_);
lean_dec(v_idx_2907_);
goto v___jp_2914_;
}
else
{
lean_object* v_val_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2997_; 
v_val_2927_ = lean_ctor_get(v___x_2926_, 0);
v_isSharedCheck_2997_ = !lean_is_exclusive(v___x_2926_);
if (v_isSharedCheck_2997_ == 0)
{
v___x_2929_ = v___x_2926_;
v_isShared_2930_ = v_isSharedCheck_2997_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_val_2927_);
lean_dec(v___x_2926_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2997_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
if (lean_obj_tag(v_val_2927_) == 5)
{
lean_object* v_val_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2996_; 
v_val_2931_ = lean_ctor_get(v_val_2927_, 0);
v_isSharedCheck_2996_ = !lean_is_exclusive(v_val_2927_);
if (v_isSharedCheck_2996_ == 0)
{
v___x_2933_ = v_val_2927_;
v_isShared_2934_ = v_isSharedCheck_2996_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_val_2931_);
lean_dec(v_val_2927_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2996_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___y_2936_; lean_object* v___y_2937_; lean_object* v___y_2938_; lean_object* v___y_2939_; 
if (lean_obj_tag(v_expected_x3f_2908_) == 1)
{
lean_object* v_val_2966_; lean_object* v___x_2968_; uint8_t v_isShared_2969_; uint8_t v_isSharedCheck_2995_; 
v_val_2966_ = lean_ctor_get(v_expected_x3f_2908_, 0);
v_isSharedCheck_2995_ = !lean_is_exclusive(v_expected_x3f_2908_);
if (v_isSharedCheck_2995_ == 0)
{
v___x_2968_ = v_expected_x3f_2908_;
v_isShared_2969_ = v_isSharedCheck_2995_;
goto v_resetjp_2967_;
}
else
{
lean_inc(v_val_2966_);
lean_dec(v_expected_x3f_2908_);
v___x_2968_ = lean_box(0);
v_isShared_2969_ = v_isSharedCheck_2995_;
goto v_resetjp_2967_;
}
v_resetjp_2967_:
{
lean_object* v_ctors_2970_; lean_object* v___x_2971_; uint8_t v___x_2972_; 
v_ctors_2970_ = lean_ctor_get(v_val_2931_, 4);
v___x_2971_ = l_List_lengthTR___redArg(v_ctors_2970_);
v___x_2972_ = lean_nat_dec_eq(v___x_2971_, v_val_2966_);
lean_dec(v___x_2971_);
if (v___x_2972_ == 0)
{
uint8_t v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2979_; lean_object* v___x_2980_; lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2984_; 
v___x_2973_ = 1;
lean_inc(v_name_2905_);
v___x_2974_ = l_Lean_Name_toStringWithToken___at___00Lean_Name_toString_spec__0(v_name_2905_, v___x_2973_);
v___x_2975_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__7));
v___x_2976_ = lean_string_append(v___x_2974_, v___x_2975_);
v___x_2977_ = l_Nat_reprFast(v_val_2966_);
v___x_2978_ = lean_string_append(v___x_2976_, v___x_2977_);
lean_dec_ref(v___x_2977_);
v___x_2979_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__6));
v___x_2980_ = lean_string_append(v___x_2978_, v___x_2979_);
v___x_2981_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2980_);
v___x_2982_ = l_Lean_MessageData_ofFormat(v___x_2981_);
if (v_isShared_2969_ == 0)
{
lean_ctor_set(v___x_2968_, 0, v___x_2982_);
v___x_2984_ = v___x_2968_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2994_; 
v_reuseFailAlloc_2994_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2994_, 0, v___x_2982_);
v___x_2984_ = v_reuseFailAlloc_2994_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
lean_object* v___x_2985_; 
lean_inc(v_goal_2906_);
lean_inc(v_name_2905_);
v___x_2985_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2905_, v_goal_2906_, v___x_2984_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
if (lean_obj_tag(v___x_2985_) == 0)
{
lean_dec_ref_known(v___x_2985_, 1);
v___y_2936_ = v___y_2909_;
v___y_2937_ = v___y_2910_;
v___y_2938_ = v___y_2911_;
v___y_2939_ = v___y_2912_;
goto v___jp_2935_;
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; uint8_t v_isShared_2989_; uint8_t v_isSharedCheck_2993_; 
lean_del_object(v___x_2933_);
lean_dec_ref(v_val_2931_);
lean_del_object(v___x_2929_);
lean_dec(v_us_2922_);
lean_dec(v_idx_2907_);
lean_dec(v_goal_2906_);
lean_dec(v_name_2905_);
v_a_2986_ = lean_ctor_get(v___x_2985_, 0);
v_isSharedCheck_2993_ = !lean_is_exclusive(v___x_2985_);
if (v_isSharedCheck_2993_ == 0)
{
v___x_2988_ = v___x_2985_;
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
else
{
lean_inc(v_a_2986_);
lean_dec(v___x_2985_);
v___x_2988_ = lean_box(0);
v_isShared_2989_ = v_isSharedCheck_2993_;
goto v_resetjp_2987_;
}
v_resetjp_2987_:
{
lean_object* v___x_2991_; 
if (v_isShared_2989_ == 0)
{
v___x_2991_ = v___x_2988_;
goto v_reusejp_2990_;
}
else
{
lean_object* v_reuseFailAlloc_2992_; 
v_reuseFailAlloc_2992_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2992_, 0, v_a_2986_);
v___x_2991_ = v_reuseFailAlloc_2992_;
goto v_reusejp_2990_;
}
v_reusejp_2990_:
{
return v___x_2991_;
}
}
}
}
}
else
{
lean_del_object(v___x_2968_);
lean_dec(v_val_2966_);
v___y_2936_ = v___y_2909_;
v___y_2937_ = v___y_2910_;
v___y_2938_ = v___y_2911_;
v___y_2939_ = v___y_2912_;
goto v___jp_2935_;
}
}
}
else
{
lean_dec(v_expected_x3f_2908_);
v___y_2936_ = v___y_2909_;
v___y_2937_ = v___y_2910_;
v___y_2938_ = v___y_2911_;
v___y_2939_ = v___y_2912_;
goto v___jp_2935_;
}
v___jp_2935_:
{
lean_object* v_ctors_2940_; lean_object* v___x_2941_; uint8_t v___x_2942_; 
v_ctors_2940_ = lean_ctor_get(v_val_2931_, 4);
lean_inc(v_ctors_2940_);
lean_dec_ref(v_val_2931_);
v___x_2941_ = l_List_lengthTR___redArg(v_ctors_2940_);
v___x_2942_ = lean_nat_dec_lt(v_idx_2907_, v___x_2941_);
if (v___x_2942_ == 0)
{
lean_object* v___x_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v___x_2947_; lean_object* v___x_2948_; lean_object* v___x_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v___x_2953_; 
lean_dec(v_ctors_2940_);
lean_dec(v_us_2922_);
v___x_2943_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__4));
v___x_2944_ = l_Nat_reprFast(v_idx_2907_);
v___x_2945_ = lean_string_append(v___x_2943_, v___x_2944_);
lean_dec_ref(v___x_2944_);
v___x_2946_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__5));
v___x_2947_ = lean_string_append(v___x_2945_, v___x_2946_);
v___x_2948_ = l_Nat_reprFast(v___x_2941_);
v___x_2949_ = lean_string_append(v___x_2947_, v___x_2948_);
lean_dec_ref(v___x_2948_);
v___x_2950_ = ((lean_object*)(l_Lean_MVarId_nthConstructor___lam__0___closed__6));
v___x_2951_ = lean_string_append(v___x_2949_, v___x_2950_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set_tag(v___x_2933_, 3);
lean_ctor_set(v___x_2933_, 0, v___x_2951_);
v___x_2953_ = v___x_2933_;
goto v_reusejp_2952_;
}
else
{
lean_object* v_reuseFailAlloc_2959_; 
v_reuseFailAlloc_2959_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2959_, 0, v___x_2951_);
v___x_2953_ = v_reuseFailAlloc_2959_;
goto v_reusejp_2952_;
}
v_reusejp_2952_:
{
lean_object* v___x_2954_; lean_object* v___x_2956_; 
v___x_2954_ = l_Lean_MessageData_ofFormat(v___x_2953_);
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 0, v___x_2954_);
v___x_2956_ = v___x_2929_;
goto v_reusejp_2955_;
}
else
{
lean_object* v_reuseFailAlloc_2958_; 
v_reuseFailAlloc_2958_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2958_, 0, v___x_2954_);
v___x_2956_ = v_reuseFailAlloc_2958_;
goto v_reusejp_2955_;
}
v_reusejp_2955_:
{
lean_object* v___x_2957_; 
v___x_2957_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2905_, v_goal_2906_, v___x_2956_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
return v___x_2957_;
}
}
}
else
{
lean_object* v___x_2960_; lean_object* v___x_2961_; uint8_t v___x_2962_; lean_object* v___x_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; 
lean_dec(v___x_2941_);
lean_del_object(v___x_2933_);
lean_del_object(v___x_2929_);
lean_dec(v_name_2905_);
v___x_2960_ = l_List_get___redArg(v_ctors_2940_, v_idx_2907_);
lean_dec(v_ctors_2940_);
v___x_2961_ = l_Lean_mkConst(v___x_2960_, v_us_2922_);
v___x_2962_ = 0;
v___x_2963_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_2963_, 0, v___x_2962_);
lean_ctor_set_uint8(v___x_2963_, 1, v___x_2942_);
lean_ctor_set_uint8(v___x_2963_, 2, v___x_2925_);
lean_ctor_set_uint8(v___x_2963_, 3, v___x_2942_);
v___x_2964_ = lean_box(0);
v___x_2965_ = l_Lean_MVarId_apply(v_goal_2906_, v___x_2961_, v___x_2963_, v___x_2964_, v___y_2936_, v___y_2937_, v___y_2938_, v___y_2939_);
return v___x_2965_;
}
}
}
}
else
{
lean_del_object(v___x_2929_);
lean_dec(v_val_2927_);
lean_dec(v_us_2922_);
lean_dec(v_expected_x3f_2908_);
lean_dec(v_idx_2907_);
goto v___jp_2914_;
}
}
}
}
else
{
lean_dec_ref(v___x_2920_);
lean_dec(v_expected_x3f_2908_);
lean_dec(v_idx_2907_);
goto v___jp_2914_;
}
}
else
{
lean_object* v_a_2998_; lean_object* v___x_3000_; uint8_t v_isShared_3001_; uint8_t v_isSharedCheck_3005_; 
lean_dec(v_expected_x3f_2908_);
lean_dec(v_idx_2907_);
lean_dec(v_goal_2906_);
lean_dec(v_name_2905_);
v_a_2998_ = lean_ctor_get(v___x_2918_, 0);
v_isSharedCheck_3005_ = !lean_is_exclusive(v___x_2918_);
if (v_isSharedCheck_3005_ == 0)
{
v___x_3000_ = v___x_2918_;
v_isShared_3001_ = v_isSharedCheck_3005_;
goto v_resetjp_2999_;
}
else
{
lean_inc(v_a_2998_);
lean_dec(v___x_2918_);
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
lean_object* v_a_3006_; lean_object* v___x_3008_; uint8_t v_isShared_3009_; uint8_t v_isSharedCheck_3013_; 
lean_dec(v_expected_x3f_2908_);
lean_dec(v_idx_2907_);
lean_dec(v_goal_2906_);
lean_dec(v_name_2905_);
v_a_3006_ = lean_ctor_get(v___x_2917_, 0);
v_isSharedCheck_3013_ = !lean_is_exclusive(v___x_2917_);
if (v_isSharedCheck_3013_ == 0)
{
v___x_3008_ = v___x_2917_;
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
else
{
lean_inc(v_a_3006_);
lean_dec(v___x_2917_);
v___x_3008_ = lean_box(0);
v_isShared_3009_ = v_isSharedCheck_3013_;
goto v_resetjp_3007_;
}
v_resetjp_3007_:
{
lean_object* v___x_3011_; 
if (v_isShared_3009_ == 0)
{
v___x_3011_ = v___x_3008_;
goto v_reusejp_3010_;
}
else
{
lean_object* v_reuseFailAlloc_3012_; 
v_reuseFailAlloc_3012_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3012_, 0, v_a_3006_);
v___x_3011_ = v_reuseFailAlloc_3012_;
goto v_reusejp_3010_;
}
v_reusejp_3010_:
{
return v___x_3011_;
}
}
}
v___jp_2914_:
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2915_ = lean_obj_once(&l_Lean_MVarId_nthConstructor___lam__0___closed__3, &l_Lean_MVarId_nthConstructor___lam__0___closed__3_once, _init_l_Lean_MVarId_nthConstructor___lam__0___closed__3);
v___x_2916_ = l_Lean_Meta_throwTacticEx___redArg(v_name_2905_, v_goal_2906_, v___x_2915_, v___y_2909_, v___y_2910_, v___y_2911_, v___y_2912_);
return v___x_2916_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___lam__0___boxed(lean_object* v_name_3014_, lean_object* v_goal_3015_, lean_object* v_idx_3016_, lean_object* v_expected_x3f_3017_, lean_object* v___y_3018_, lean_object* v___y_3019_, lean_object* v___y_3020_, lean_object* v___y_3021_, lean_object* v___y_3022_){
_start:
{
lean_object* v_res_3023_; 
v_res_3023_ = l_Lean_MVarId_nthConstructor___lam__0(v_name_3014_, v_goal_3015_, v_idx_3016_, v_expected_x3f_3017_, v___y_3018_, v___y_3019_, v___y_3020_, v___y_3021_);
lean_dec(v___y_3021_);
lean_dec_ref(v___y_3020_);
lean_dec(v___y_3019_);
lean_dec_ref(v___y_3018_);
return v_res_3023_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor(lean_object* v_name_3024_, lean_object* v_idx_3025_, lean_object* v_expected_x3f_3026_, lean_object* v_goal_3027_, lean_object* v_a_3028_, lean_object* v_a_3029_, lean_object* v_a_3030_, lean_object* v_a_3031_){
_start:
{
lean_object* v___f_3033_; lean_object* v___x_3034_; 
lean_inc(v_goal_3027_);
v___f_3033_ = lean_alloc_closure((void*)(l_Lean_MVarId_nthConstructor___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3033_, 0, v_name_3024_);
lean_closure_set(v___f_3033_, 1, v_goal_3027_);
lean_closure_set(v___f_3033_, 2, v_idx_3025_);
lean_closure_set(v___f_3033_, 3, v_expected_x3f_3026_);
v___x_3034_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_goal_3027_, v___f_3033_, v_a_3028_, v_a_3029_, v_a_3030_, v_a_3031_);
return v___x_3034_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_nthConstructor___boxed(lean_object* v_name_3035_, lean_object* v_idx_3036_, lean_object* v_expected_x3f_3037_, lean_object* v_goal_3038_, lean_object* v_a_3039_, lean_object* v_a_3040_, lean_object* v_a_3041_, lean_object* v_a_3042_, lean_object* v_a_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = l_Lean_MVarId_nthConstructor(v_name_3035_, v_idx_3036_, v_expected_x3f_3037_, v_goal_3038_, v_a_3039_, v_a_3040_, v_a_3041_, v_a_3042_);
lean_dec(v_a_3042_);
lean_dec_ref(v_a_3041_);
lean_dec(v_a_3040_);
lean_dec_ref(v_a_3039_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(lean_object* v_x_3045_, lean_object* v___y_3046_, lean_object* v___y_3047_, lean_object* v___y_3048_, lean_object* v___y_3049_){
_start:
{
lean_object* v___x_3051_; 
v___x_3051_ = l_Lean_Meta_saveState___redArg(v___y_3047_, v___y_3049_);
if (lean_obj_tag(v___x_3051_) == 0)
{
lean_object* v_a_3052_; lean_object* v___x_3053_; 
v_a_3052_ = lean_ctor_get(v___x_3051_, 0);
lean_inc(v_a_3052_);
lean_dec_ref_known(v___x_3051_, 1);
lean_inc(v___y_3049_);
lean_inc_ref(v___y_3048_);
lean_inc(v___y_3047_);
lean_inc_ref(v___y_3046_);
v___x_3053_ = lean_apply_5(v_x_3045_, v___y_3046_, v___y_3047_, v___y_3048_, v___y_3049_, lean_box(0));
if (lean_obj_tag(v___x_3053_) == 0)
{
lean_object* v_a_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3062_; 
lean_dec(v_a_3052_);
v_a_3054_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3062_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3062_ == 0)
{
v___x_3056_ = v___x_3053_;
v_isShared_3057_ = v_isSharedCheck_3062_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_a_3054_);
lean_dec(v___x_3053_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3062_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3058_; lean_object* v___x_3060_; 
v___x_3058_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3058_, 0, v_a_3054_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 0, v___x_3058_);
v___x_3060_ = v___x_3056_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3061_; 
v_reuseFailAlloc_3061_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3061_, 0, v___x_3058_);
v___x_3060_ = v_reuseFailAlloc_3061_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
return v___x_3060_;
}
}
}
else
{
lean_object* v_a_3063_; lean_object* v___x_3065_; uint8_t v_isShared_3066_; uint8_t v_isSharedCheck_3093_; 
v_a_3063_ = lean_ctor_get(v___x_3053_, 0);
v_isSharedCheck_3093_ = !lean_is_exclusive(v___x_3053_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3065_ = v___x_3053_;
v_isShared_3066_ = v_isSharedCheck_3093_;
goto v_resetjp_3064_;
}
else
{
lean_inc(v_a_3063_);
lean_dec(v___x_3053_);
v___x_3065_ = lean_box(0);
v_isShared_3066_ = v_isSharedCheck_3093_;
goto v_resetjp_3064_;
}
v_resetjp_3064_:
{
uint8_t v___x_3067_; 
v___x_3067_ = l_Lean_Exception_isInterrupt(v_a_3063_);
if (v___x_3067_ == 0)
{
uint8_t v___x_3068_; 
lean_inc(v_a_3063_);
v___x_3068_ = l_Lean_Exception_isRuntime(v_a_3063_);
if (v___x_3068_ == 0)
{
lean_object* v___x_3069_; 
lean_del_object(v___x_3065_);
lean_dec(v_a_3063_);
v___x_3069_ = l_Lean_Meta_SavedState_restore___redArg(v_a_3052_, v___y_3047_, v___y_3049_);
if (lean_obj_tag(v___x_3069_) == 0)
{
lean_object* v___x_3071_; uint8_t v_isShared_3072_; uint8_t v_isSharedCheck_3077_; 
v_isSharedCheck_3077_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3077_ == 0)
{
lean_object* v_unused_3078_; 
v_unused_3078_ = lean_ctor_get(v___x_3069_, 0);
lean_dec(v_unused_3078_);
v___x_3071_ = v___x_3069_;
v_isShared_3072_ = v_isSharedCheck_3077_;
goto v_resetjp_3070_;
}
else
{
lean_dec(v___x_3069_);
v___x_3071_ = lean_box(0);
v_isShared_3072_ = v_isSharedCheck_3077_;
goto v_resetjp_3070_;
}
v_resetjp_3070_:
{
lean_object* v___x_3073_; lean_object* v___x_3075_; 
v___x_3073_ = lean_box(0);
if (v_isShared_3072_ == 0)
{
lean_ctor_set(v___x_3071_, 0, v___x_3073_);
v___x_3075_ = v___x_3071_;
goto v_reusejp_3074_;
}
else
{
lean_object* v_reuseFailAlloc_3076_; 
v_reuseFailAlloc_3076_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3076_, 0, v___x_3073_);
v___x_3075_ = v_reuseFailAlloc_3076_;
goto v_reusejp_3074_;
}
v_reusejp_3074_:
{
return v___x_3075_;
}
}
}
else
{
lean_object* v_a_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3086_; 
v_a_3079_ = lean_ctor_get(v___x_3069_, 0);
v_isSharedCheck_3086_ = !lean_is_exclusive(v___x_3069_);
if (v_isSharedCheck_3086_ == 0)
{
v___x_3081_ = v___x_3069_;
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_a_3079_);
lean_dec(v___x_3069_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3086_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___x_3084_; 
if (v_isShared_3082_ == 0)
{
v___x_3084_ = v___x_3081_;
goto v_reusejp_3083_;
}
else
{
lean_object* v_reuseFailAlloc_3085_; 
v_reuseFailAlloc_3085_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3085_, 0, v_a_3079_);
v___x_3084_ = v_reuseFailAlloc_3085_;
goto v_reusejp_3083_;
}
v_reusejp_3083_:
{
return v___x_3084_;
}
}
}
}
else
{
lean_object* v___x_3088_; 
lean_dec(v_a_3052_);
if (v_isShared_3066_ == 0)
{
v___x_3088_ = v___x_3065_;
goto v_reusejp_3087_;
}
else
{
lean_object* v_reuseFailAlloc_3089_; 
v_reuseFailAlloc_3089_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3089_, 0, v_a_3063_);
v___x_3088_ = v_reuseFailAlloc_3089_;
goto v_reusejp_3087_;
}
v_reusejp_3087_:
{
return v___x_3088_;
}
}
}
else
{
lean_object* v___x_3091_; 
lean_dec(v_a_3052_);
if (v_isShared_3066_ == 0)
{
v___x_3091_ = v___x_3065_;
goto v_reusejp_3090_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_a_3063_);
v___x_3091_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3090_;
}
v_reusejp_3090_:
{
return v___x_3091_;
}
}
}
}
}
else
{
lean_object* v_a_3094_; lean_object* v___x_3096_; uint8_t v_isShared_3097_; uint8_t v_isSharedCheck_3101_; 
lean_dec_ref(v_x_3045_);
v_a_3094_ = lean_ctor_get(v___x_3051_, 0);
v_isSharedCheck_3101_ = !lean_is_exclusive(v___x_3051_);
if (v_isSharedCheck_3101_ == 0)
{
v___x_3096_ = v___x_3051_;
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
else
{
lean_inc(v_a_3094_);
lean_dec(v___x_3051_);
v___x_3096_ = lean_box(0);
v_isShared_3097_ = v_isSharedCheck_3101_;
goto v_resetjp_3095_;
}
v_resetjp_3095_:
{
lean_object* v___x_3099_; 
if (v_isShared_3097_ == 0)
{
v___x_3099_ = v___x_3096_;
goto v_reusejp_3098_;
}
else
{
lean_object* v_reuseFailAlloc_3100_; 
v_reuseFailAlloc_3100_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3100_, 0, v_a_3094_);
v___x_3099_ = v_reuseFailAlloc_3100_;
goto v_reusejp_3098_;
}
v_reusejp_3098_:
{
return v___x_3099_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg___boxed(lean_object* v_x_3102_, lean_object* v___y_3103_, lean_object* v___y_3104_, lean_object* v___y_3105_, lean_object* v___y_3106_, lean_object* v___y_3107_){
_start:
{
lean_object* v_res_3108_; 
v_res_3108_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3102_, v___y_3103_, v___y_3104_, v___y_3105_, v___y_3106_);
lean_dec(v___y_3106_);
lean_dec_ref(v___y_3105_);
lean_dec(v___y_3104_);
lean_dec_ref(v___y_3103_);
return v_res_3108_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(lean_object* v_00_u03b1_3109_, lean_object* v_x_3110_, lean_object* v___y_3111_, lean_object* v___y_3112_, lean_object* v___y_3113_, lean_object* v___y_3114_){
_start:
{
lean_object* v___x_3116_; 
v___x_3116_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v_x_3110_, v___y_3111_, v___y_3112_, v___y_3113_, v___y_3114_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___boxed(lean_object* v_00_u03b1_3117_, lean_object* v_x_3118_, lean_object* v___y_3119_, lean_object* v___y_3120_, lean_object* v___y_3121_, lean_object* v___y_3122_, lean_object* v___y_3123_){
_start:
{
lean_object* v_res_3124_; 
v_res_3124_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0(v_00_u03b1_3117_, v_x_3118_, v___y_3119_, v___y_3120_, v___y_3121_, v___y_3122_);
lean_dec(v___y_3122_);
lean_dec_ref(v___y_3121_);
lean_dec(v___y_3120_);
lean_dec_ref(v___y_3119_);
return v_res_3124_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1(void){
_start:
{
lean_object* v___x_3126_; lean_object* v___x_3127_; 
v___x_3126_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___lam__0___closed__0));
v___x_3127_ = l_Lean_stringToMessageData(v___x_3126_);
return v___x_3127_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0(lean_object* v_mvarId_3128_, lean_object* v___x_3129_, lean_object* v___x_3130_, lean_object* v___x_3131_, lean_object* v___y_3132_, lean_object* v___y_3133_, lean_object* v___y_3134_, lean_object* v___y_3135_){
_start:
{
lean_object* v___x_3140_; 
v___x_3140_ = l_Lean_MVarId_apply(v_mvarId_3128_, v___x_3129_, v___x_3130_, v___x_3131_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
if (lean_obj_tag(v___x_3140_) == 0)
{
lean_object* v_a_3141_; lean_object* v___x_3143_; uint8_t v_isShared_3144_; uint8_t v_isSharedCheck_3150_; 
v_a_3141_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3150_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3150_ == 0)
{
v___x_3143_ = v___x_3140_;
v_isShared_3144_ = v_isSharedCheck_3150_;
goto v_resetjp_3142_;
}
else
{
lean_inc(v_a_3141_);
lean_dec(v___x_3140_);
v___x_3143_ = lean_box(0);
v_isShared_3144_ = v_isSharedCheck_3150_;
goto v_resetjp_3142_;
}
v_resetjp_3142_:
{
if (lean_obj_tag(v_a_3141_) == 1)
{
lean_object* v_tail_3145_; 
v_tail_3145_ = lean_ctor_get(v_a_3141_, 1);
if (lean_obj_tag(v_tail_3145_) == 0)
{
lean_object* v_head_3146_; lean_object* v___x_3148_; 
v_head_3146_ = lean_ctor_get(v_a_3141_, 0);
lean_inc(v_head_3146_);
lean_dec_ref_known(v_a_3141_, 2);
if (v_isShared_3144_ == 0)
{
lean_ctor_set(v___x_3143_, 0, v_head_3146_);
v___x_3148_ = v___x_3143_;
goto v_reusejp_3147_;
}
else
{
lean_object* v_reuseFailAlloc_3149_; 
v_reuseFailAlloc_3149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3149_, 0, v_head_3146_);
v___x_3148_ = v_reuseFailAlloc_3149_;
goto v_reusejp_3147_;
}
v_reusejp_3147_:
{
return v___x_3148_;
}
}
else
{
lean_dec_ref_known(v_a_3141_, 2);
lean_del_object(v___x_3143_);
goto v___jp_3137_;
}
}
else
{
lean_del_object(v___x_3143_);
lean_dec(v_a_3141_);
goto v___jp_3137_;
}
}
}
else
{
lean_object* v_a_3151_; lean_object* v___x_3153_; uint8_t v_isShared_3154_; uint8_t v_isSharedCheck_3158_; 
v_a_3151_ = lean_ctor_get(v___x_3140_, 0);
v_isSharedCheck_3158_ = !lean_is_exclusive(v___x_3140_);
if (v_isSharedCheck_3158_ == 0)
{
v___x_3153_ = v___x_3140_;
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
else
{
lean_inc(v_a_3151_);
lean_dec(v___x_3140_);
v___x_3153_ = lean_box(0);
v_isShared_3154_ = v_isSharedCheck_3158_;
goto v_resetjp_3152_;
}
v_resetjp_3152_:
{
lean_object* v___x_3156_; 
if (v_isShared_3154_ == 0)
{
v___x_3156_ = v___x_3153_;
goto v_reusejp_3155_;
}
else
{
lean_object* v_reuseFailAlloc_3157_; 
v_reuseFailAlloc_3157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3157_, 0, v_a_3151_);
v___x_3156_ = v_reuseFailAlloc_3157_;
goto v_reusejp_3155_;
}
v_reusejp_3155_:
{
return v___x_3156_;
}
}
}
v___jp_3137_:
{
lean_object* v___x_3138_; lean_object* v___x_3139_; 
v___x_3138_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3139_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3138_, v___y_3132_, v___y_3133_, v___y_3134_, v___y_3135_);
return v___x_3139_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___lam__0___boxed(lean_object* v_mvarId_3159_, lean_object* v___x_3160_, lean_object* v___x_3161_, lean_object* v___x_3162_, lean_object* v___y_3163_, lean_object* v___y_3164_, lean_object* v___y_3165_, lean_object* v___y_3166_, lean_object* v___y_3167_){
_start:
{
lean_object* v_res_3168_; 
v_res_3168_ = l_Lean_MVarId_iffOfEq___lam__0(v_mvarId_3159_, v___x_3160_, v___x_3161_, v___x_3162_, v___y_3163_, v___y_3164_, v___y_3165_, v___y_3166_);
lean_dec(v___y_3166_);
lean_dec_ref(v___y_3165_);
lean_dec(v___y_3164_);
lean_dec_ref(v___y_3163_);
return v_res_3168_;
}
}
static lean_object* _init_l_Lean_MVarId_iffOfEq___closed__2(void){
_start:
{
lean_object* v___x_3172_; lean_object* v___x_3173_; lean_object* v___x_3174_; 
v___x_3172_ = lean_box(0);
v___x_3173_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___closed__1));
v___x_3174_ = l_Lean_mkConst(v___x_3173_, v___x_3172_);
return v___x_3174_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq(lean_object* v_mvarId_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_, lean_object* v_a_3183_){
_start:
{
lean_object* v___x_3185_; lean_object* v___x_3186_; lean_object* v___x_3187_; lean_object* v___f_3188_; lean_object* v___x_3189_; 
v___x_3185_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___closed__2, &l_Lean_MVarId_iffOfEq___closed__2_once, _init_l_Lean_MVarId_iffOfEq___closed__2);
v___x_3186_ = ((lean_object*)(l_Lean_MVarId_iffOfEq___closed__3));
v___x_3187_ = lean_box(0);
lean_inc(v_mvarId_3179_);
v___f_3188_ = lean_alloc_closure((void*)(l_Lean_MVarId_iffOfEq___lam__0___boxed), 9, 4);
lean_closure_set(v___f_3188_, 0, v_mvarId_3179_);
lean_closure_set(v___f_3188_, 1, v___x_3185_);
lean_closure_set(v___f_3188_, 2, v___x_3186_);
lean_closure_set(v___f_3188_, 3, v___x_3187_);
v___x_3189_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3188_, v_a_3180_, v_a_3181_, v_a_3182_, v_a_3183_);
if (lean_obj_tag(v___x_3189_) == 0)
{
lean_object* v_a_3190_; lean_object* v___x_3192_; uint8_t v_isShared_3193_; uint8_t v_isSharedCheck_3201_; 
v_a_3190_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3201_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3201_ == 0)
{
v___x_3192_ = v___x_3189_;
v_isShared_3193_ = v_isSharedCheck_3201_;
goto v_resetjp_3191_;
}
else
{
lean_inc(v_a_3190_);
lean_dec(v___x_3189_);
v___x_3192_ = lean_box(0);
v_isShared_3193_ = v_isSharedCheck_3201_;
goto v_resetjp_3191_;
}
v_resetjp_3191_:
{
if (lean_obj_tag(v_a_3190_) == 0)
{
lean_object* v___x_3195_; 
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v_mvarId_3179_);
v___x_3195_ = v___x_3192_;
goto v_reusejp_3194_;
}
else
{
lean_object* v_reuseFailAlloc_3196_; 
v_reuseFailAlloc_3196_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3196_, 0, v_mvarId_3179_);
v___x_3195_ = v_reuseFailAlloc_3196_;
goto v_reusejp_3194_;
}
v_reusejp_3194_:
{
return v___x_3195_;
}
}
else
{
lean_object* v_val_3197_; lean_object* v___x_3199_; 
lean_dec(v_mvarId_3179_);
v_val_3197_ = lean_ctor_get(v_a_3190_, 0);
lean_inc(v_val_3197_);
lean_dec_ref_known(v_a_3190_, 1);
if (v_isShared_3193_ == 0)
{
lean_ctor_set(v___x_3192_, 0, v_val_3197_);
v___x_3199_ = v___x_3192_;
goto v_reusejp_3198_;
}
else
{
lean_object* v_reuseFailAlloc_3200_; 
v_reuseFailAlloc_3200_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3200_, 0, v_val_3197_);
v___x_3199_ = v_reuseFailAlloc_3200_;
goto v_reusejp_3198_;
}
v_reusejp_3198_:
{
return v___x_3199_;
}
}
}
}
else
{
lean_object* v_a_3202_; lean_object* v___x_3204_; uint8_t v_isShared_3205_; uint8_t v_isSharedCheck_3209_; 
lean_dec(v_mvarId_3179_);
v_a_3202_ = lean_ctor_get(v___x_3189_, 0);
v_isSharedCheck_3209_ = !lean_is_exclusive(v___x_3189_);
if (v_isSharedCheck_3209_ == 0)
{
v___x_3204_ = v___x_3189_;
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
else
{
lean_inc(v_a_3202_);
lean_dec(v___x_3189_);
v___x_3204_ = lean_box(0);
v_isShared_3205_ = v_isSharedCheck_3209_;
goto v_resetjp_3203_;
}
v_resetjp_3203_:
{
lean_object* v___x_3207_; 
if (v_isShared_3205_ == 0)
{
v___x_3207_ = v___x_3204_;
goto v_reusejp_3206_;
}
else
{
lean_object* v_reuseFailAlloc_3208_; 
v_reuseFailAlloc_3208_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3208_, 0, v_a_3202_);
v___x_3207_ = v_reuseFailAlloc_3208_;
goto v_reusejp_3206_;
}
v_reusejp_3206_:
{
return v___x_3207_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_iffOfEq___boxed(lean_object* v_mvarId_3210_, lean_object* v_a_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_){
_start:
{
lean_object* v_res_3216_; 
v_res_3216_ = l_Lean_MVarId_iffOfEq(v_mvarId_3210_, v_a_3211_, v_a_3212_, v_a_3213_, v_a_3214_);
lean_dec(v_a_3214_);
lean_dec_ref(v_a_3213_);
lean_dec(v_a_3212_);
lean_dec_ref(v_a_3211_);
return v_res_3216_;
}
}
static lean_object* _init_l_Lean_MVarId_propext___lam__0___closed__2(void){
_start:
{
lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; 
v___x_3220_ = lean_box(0);
v___x_3221_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__1));
v___x_3222_ = l_Lean_mkConst(v___x_3221_, v___x_3220_);
return v___x_3222_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0(lean_object* v_mvarId_3226_, uint8_t v___x_3227_, lean_object* v___y_3228_, lean_object* v___y_3229_, lean_object* v___y_3230_, lean_object* v___y_3231_){
_start:
{
lean_object* v___y_3234_; lean_object* v___y_3235_; lean_object* v___y_3236_; lean_object* v___y_3237_; uint8_t v___y_3241_; lean_object* v___y_3267_; lean_object* v___x_3305_; uint8_t v_transparency_3306_; uint8_t v___x_3307_; 
v___x_3305_ = l_Lean_Meta_Context_config(v___y_3228_);
v_transparency_3306_ = lean_ctor_get_uint8(v___x_3305_, 9);
lean_dec_ref(v___x_3305_);
v___x_3307_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3306_, v___x_3227_);
if (v___x_3307_ == 0)
{
lean_object* v_keyedConfig_3308_; uint8_t v_trackZetaDelta_3309_; lean_object* v_zetaDeltaSet_3310_; lean_object* v_lctx_3311_; lean_object* v_localInstances_3312_; lean_object* v_defEqCtx_x3f_3313_; lean_object* v_synthPendingDepth_3314_; lean_object* v_customCanUnfoldPredicate_x3f_3315_; uint8_t v_univApprox_3316_; uint8_t v_inTypeClassResolution_3317_; uint8_t v_cacheInferType_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; 
v_keyedConfig_3308_ = lean_ctor_get(v___y_3228_, 0);
v_trackZetaDelta_3309_ = lean_ctor_get_uint8(v___y_3228_, sizeof(void*)*7);
v_zetaDeltaSet_3310_ = lean_ctor_get(v___y_3228_, 1);
v_lctx_3311_ = lean_ctor_get(v___y_3228_, 2);
v_localInstances_3312_ = lean_ctor_get(v___y_3228_, 3);
v_defEqCtx_x3f_3313_ = lean_ctor_get(v___y_3228_, 4);
v_synthPendingDepth_3314_ = lean_ctor_get(v___y_3228_, 5);
v_customCanUnfoldPredicate_x3f_3315_ = lean_ctor_get(v___y_3228_, 6);
v_univApprox_3316_ = lean_ctor_get_uint8(v___y_3228_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3317_ = lean_ctor_get_uint8(v___y_3228_, sizeof(void*)*7 + 2);
v_cacheInferType_3318_ = lean_ctor_get_uint8(v___y_3228_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3308_);
v___x_3319_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3227_, v_keyedConfig_3308_);
lean_inc(v_customCanUnfoldPredicate_x3f_3315_);
lean_inc(v_synthPendingDepth_3314_);
lean_inc(v_defEqCtx_x3f_3313_);
lean_inc_ref(v_localInstances_3312_);
lean_inc_ref(v_lctx_3311_);
lean_inc(v_zetaDeltaSet_3310_);
v___x_3320_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3320_, 0, v___x_3319_);
lean_ctor_set(v___x_3320_, 1, v_zetaDeltaSet_3310_);
lean_ctor_set(v___x_3320_, 2, v_lctx_3311_);
lean_ctor_set(v___x_3320_, 3, v_localInstances_3312_);
lean_ctor_set(v___x_3320_, 4, v_defEqCtx_x3f_3313_);
lean_ctor_set(v___x_3320_, 5, v_synthPendingDepth_3314_);
lean_ctor_set(v___x_3320_, 6, v_customCanUnfoldPredicate_x3f_3315_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*7, v_trackZetaDelta_3309_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*7 + 1, v_univApprox_3316_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3317_);
lean_ctor_set_uint8(v___x_3320_, sizeof(void*)*7 + 3, v_cacheInferType_3318_);
lean_inc(v_mvarId_3226_);
v___x_3321_ = l_Lean_MVarId_getType_x27(v_mvarId_3226_, v___x_3320_, v___y_3229_, v___y_3230_, v___y_3231_);
lean_dec_ref_known(v___x_3320_, 7);
v___y_3267_ = v___x_3321_;
goto v___jp_3266_;
}
else
{
lean_object* v___x_3322_; 
lean_inc(v_mvarId_3226_);
v___x_3322_ = l_Lean_MVarId_getType_x27(v_mvarId_3226_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
v___y_3267_ = v___x_3322_;
goto v___jp_3266_;
}
v___jp_3233_:
{
lean_object* v___x_3238_; lean_object* v___x_3239_; 
v___x_3238_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3239_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3238_, v___y_3234_, v___y_3235_, v___y_3236_, v___y_3237_);
lean_dec_ref(v___y_3234_);
return v___x_3239_;
}
v___jp_3240_:
{
lean_object* v___x_3242_; uint8_t v___x_3243_; uint8_t v___x_3244_; lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; 
v___x_3242_ = lean_obj_once(&l_Lean_MVarId_propext___lam__0___closed__2, &l_Lean_MVarId_propext___lam__0___closed__2_once, _init_l_Lean_MVarId_propext___lam__0___closed__2);
v___x_3243_ = 0;
v___x_3244_ = 0;
v___x_3245_ = lean_alloc_ctor(0, 0, 4);
lean_ctor_set_uint8(v___x_3245_, 0, v___x_3243_);
lean_ctor_set_uint8(v___x_3245_, 1, v___y_3241_);
lean_ctor_set_uint8(v___x_3245_, 2, v___x_3244_);
lean_ctor_set_uint8(v___x_3245_, 3, v___y_3241_);
v___x_3246_ = lean_box(0);
v___x_3247_ = l_Lean_MVarId_apply(v_mvarId_3226_, v___x_3242_, v___x_3245_, v___x_3246_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
if (lean_obj_tag(v___x_3247_) == 0)
{
lean_object* v_a_3248_; lean_object* v___x_3250_; uint8_t v_isShared_3251_; uint8_t v_isSharedCheck_3257_; 
v_a_3248_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3257_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3257_ == 0)
{
v___x_3250_ = v___x_3247_;
v_isShared_3251_ = v_isSharedCheck_3257_;
goto v_resetjp_3249_;
}
else
{
lean_inc(v_a_3248_);
lean_dec(v___x_3247_);
v___x_3250_ = lean_box(0);
v_isShared_3251_ = v_isSharedCheck_3257_;
goto v_resetjp_3249_;
}
v_resetjp_3249_:
{
if (lean_obj_tag(v_a_3248_) == 1)
{
lean_object* v_tail_3252_; 
v_tail_3252_ = lean_ctor_get(v_a_3248_, 1);
if (lean_obj_tag(v_tail_3252_) == 0)
{
lean_object* v_head_3253_; lean_object* v___x_3255_; 
lean_dec_ref(v___y_3228_);
v_head_3253_ = lean_ctor_get(v_a_3248_, 0);
lean_inc(v_head_3253_);
lean_dec_ref_known(v_a_3248_, 2);
if (v_isShared_3251_ == 0)
{
lean_ctor_set(v___x_3250_, 0, v_head_3253_);
v___x_3255_ = v___x_3250_;
goto v_reusejp_3254_;
}
else
{
lean_object* v_reuseFailAlloc_3256_; 
v_reuseFailAlloc_3256_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3256_, 0, v_head_3253_);
v___x_3255_ = v_reuseFailAlloc_3256_;
goto v_reusejp_3254_;
}
v_reusejp_3254_:
{
return v___x_3255_;
}
}
else
{
lean_dec_ref_known(v_a_3248_, 2);
lean_del_object(v___x_3250_);
v___y_3234_ = v___y_3228_;
v___y_3235_ = v___y_3229_;
v___y_3236_ = v___y_3230_;
v___y_3237_ = v___y_3231_;
goto v___jp_3233_;
}
}
else
{
lean_del_object(v___x_3250_);
lean_dec(v_a_3248_);
v___y_3234_ = v___y_3228_;
v___y_3235_ = v___y_3229_;
v___y_3236_ = v___y_3230_;
v___y_3237_ = v___y_3231_;
goto v___jp_3233_;
}
}
}
else
{
lean_object* v_a_3258_; lean_object* v___x_3260_; uint8_t v_isShared_3261_; uint8_t v_isSharedCheck_3265_; 
lean_dec_ref(v___y_3228_);
v_a_3258_ = lean_ctor_get(v___x_3247_, 0);
v_isSharedCheck_3265_ = !lean_is_exclusive(v___x_3247_);
if (v_isSharedCheck_3265_ == 0)
{
v___x_3260_ = v___x_3247_;
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
else
{
lean_inc(v_a_3258_);
lean_dec(v___x_3247_);
v___x_3260_ = lean_box(0);
v_isShared_3261_ = v_isSharedCheck_3265_;
goto v_resetjp_3259_;
}
v_resetjp_3259_:
{
lean_object* v___x_3263_; 
if (v_isShared_3261_ == 0)
{
v___x_3263_ = v___x_3260_;
goto v_reusejp_3262_;
}
else
{
lean_object* v_reuseFailAlloc_3264_; 
v_reuseFailAlloc_3264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3264_, 0, v_a_3258_);
v___x_3263_ = v_reuseFailAlloc_3264_;
goto v_reusejp_3262_;
}
v_reusejp_3262_:
{
return v___x_3263_;
}
}
}
}
v___jp_3266_:
{
if (lean_obj_tag(v___y_3267_) == 0)
{
lean_object* v_a_3268_; lean_object* v___x_3269_; lean_object* v___x_3270_; uint8_t v___x_3271_; 
v_a_3268_ = lean_ctor_get(v___y_3267_, 0);
lean_inc(v_a_3268_);
lean_dec_ref_known(v___y_3267_, 1);
v___x_3269_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__4));
v___x_3270_ = lean_unsigned_to_nat(3u);
v___x_3271_ = l_Lean_Expr_isAppOfArity(v_a_3268_, v___x_3269_, v___x_3270_);
if (v___x_3271_ == 0)
{
lean_object* v___x_3272_; lean_object* v___x_3273_; 
lean_dec(v_a_3268_);
lean_dec(v_mvarId_3226_);
v___x_3272_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3273_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3272_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
lean_dec_ref(v___y_3228_);
return v___x_3273_;
}
else
{
lean_object* v___x_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
v___x_3274_ = l_Lean_Expr_appFn_x21(v_a_3268_);
lean_dec(v_a_3268_);
v___x_3275_ = l_Lean_Expr_appArg_x21(v___x_3274_);
lean_dec_ref(v___x_3274_);
v___x_3276_ = l_Lean_Meta_isProp(v___x_3275_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
if (lean_obj_tag(v___x_3276_) == 0)
{
lean_object* v_a_3277_; uint8_t v___x_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
v___x_3278_ = lean_unbox(v_a_3277_);
lean_dec(v_a_3277_);
if (v___x_3278_ == 0)
{
lean_object* v___x_3279_; lean_object* v___x_3280_; lean_object* v_a_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3288_; 
lean_dec(v_mvarId_3226_);
v___x_3279_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3280_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3279_, v___y_3228_, v___y_3229_, v___y_3230_, v___y_3231_);
lean_dec_ref(v___y_3228_);
v_a_3281_ = lean_ctor_get(v___x_3280_, 0);
v_isSharedCheck_3288_ = !lean_is_exclusive(v___x_3280_);
if (v_isSharedCheck_3288_ == 0)
{
v___x_3283_ = v___x_3280_;
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_a_3281_);
lean_dec(v___x_3280_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3288_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___x_3286_; 
if (v_isShared_3284_ == 0)
{
v___x_3286_ = v___x_3283_;
goto v_reusejp_3285_;
}
else
{
lean_object* v_reuseFailAlloc_3287_; 
v_reuseFailAlloc_3287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3287_, 0, v_a_3281_);
v___x_3286_ = v_reuseFailAlloc_3287_;
goto v_reusejp_3285_;
}
v_reusejp_3285_:
{
return v___x_3286_;
}
}
}
else
{
v___y_3241_ = v___x_3271_;
goto v___jp_3240_;
}
}
else
{
lean_object* v_a_3289_; lean_object* v___x_3291_; uint8_t v_isShared_3292_; uint8_t v_isSharedCheck_3296_; 
lean_dec_ref(v___y_3228_);
lean_dec(v_mvarId_3226_);
v_a_3289_ = lean_ctor_get(v___x_3276_, 0);
v_isSharedCheck_3296_ = !lean_is_exclusive(v___x_3276_);
if (v_isSharedCheck_3296_ == 0)
{
v___x_3291_ = v___x_3276_;
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
else
{
lean_inc(v_a_3289_);
lean_dec(v___x_3276_);
v___x_3291_ = lean_box(0);
v_isShared_3292_ = v_isSharedCheck_3296_;
goto v_resetjp_3290_;
}
v_resetjp_3290_:
{
lean_object* v___x_3294_; 
if (v_isShared_3292_ == 0)
{
v___x_3294_ = v___x_3291_;
goto v_reusejp_3293_;
}
else
{
lean_object* v_reuseFailAlloc_3295_; 
v_reuseFailAlloc_3295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3295_, 0, v_a_3289_);
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
lean_dec_ref(v___y_3228_);
lean_dec(v_mvarId_3226_);
v_a_3297_ = lean_ctor_get(v___y_3267_, 0);
v_isSharedCheck_3304_ = !lean_is_exclusive(v___y_3267_);
if (v_isSharedCheck_3304_ == 0)
{
v___x_3299_ = v___y_3267_;
v_isShared_3300_ = v_isSharedCheck_3304_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_a_3297_);
lean_dec(v___y_3267_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___lam__0___boxed(lean_object* v_mvarId_3323_, lean_object* v___x_3324_, lean_object* v___y_3325_, lean_object* v___y_3326_, lean_object* v___y_3327_, lean_object* v___y_3328_, lean_object* v___y_3329_){
_start:
{
uint8_t v___x_2525__boxed_3330_; lean_object* v_res_3331_; 
v___x_2525__boxed_3330_ = lean_unbox(v___x_3324_);
v_res_3331_ = l_Lean_MVarId_propext___lam__0(v_mvarId_3323_, v___x_2525__boxed_3330_, v___y_3325_, v___y_3326_, v___y_3327_, v___y_3328_);
lean_dec(v___y_3328_);
lean_dec_ref(v___y_3327_);
lean_dec(v___y_3326_);
return v_res_3331_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_propext(lean_object* v_mvarId_3332_, lean_object* v_a_3333_, lean_object* v_a_3334_, lean_object* v_a_3335_, lean_object* v_a_3336_){
_start:
{
uint8_t v___x_3338_; lean_object* v___x_3339_; lean_object* v___f_3340_; lean_object* v___x_3341_; 
v___x_3338_ = 2;
v___x_3339_ = lean_box(v___x_3338_);
lean_inc(v_mvarId_3332_);
v___f_3340_ = lean_alloc_closure((void*)(l_Lean_MVarId_propext___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3340_, 0, v_mvarId_3332_);
lean_closure_set(v___f_3340_, 1, v___x_3339_);
v___x_3341_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3340_, v_a_3333_, v_a_3334_, v_a_3335_, v_a_3336_);
if (lean_obj_tag(v___x_3341_) == 0)
{
lean_object* v_a_3342_; lean_object* v___x_3344_; uint8_t v_isShared_3345_; uint8_t v_isSharedCheck_3353_; 
v_a_3342_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3353_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3353_ == 0)
{
v___x_3344_ = v___x_3341_;
v_isShared_3345_ = v_isSharedCheck_3353_;
goto v_resetjp_3343_;
}
else
{
lean_inc(v_a_3342_);
lean_dec(v___x_3341_);
v___x_3344_ = lean_box(0);
v_isShared_3345_ = v_isSharedCheck_3353_;
goto v_resetjp_3343_;
}
v_resetjp_3343_:
{
if (lean_obj_tag(v_a_3342_) == 0)
{
lean_object* v___x_3347_; 
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 0, v_mvarId_3332_);
v___x_3347_ = v___x_3344_;
goto v_reusejp_3346_;
}
else
{
lean_object* v_reuseFailAlloc_3348_; 
v_reuseFailAlloc_3348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3348_, 0, v_mvarId_3332_);
v___x_3347_ = v_reuseFailAlloc_3348_;
goto v_reusejp_3346_;
}
v_reusejp_3346_:
{
return v___x_3347_;
}
}
else
{
lean_object* v_val_3349_; lean_object* v___x_3351_; 
lean_dec(v_mvarId_3332_);
v_val_3349_ = lean_ctor_get(v_a_3342_, 0);
lean_inc(v_val_3349_);
lean_dec_ref_known(v_a_3342_, 1);
if (v_isShared_3345_ == 0)
{
lean_ctor_set(v___x_3344_, 0, v_val_3349_);
v___x_3351_ = v___x_3344_;
goto v_reusejp_3350_;
}
else
{
lean_object* v_reuseFailAlloc_3352_; 
v_reuseFailAlloc_3352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3352_, 0, v_val_3349_);
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
lean_dec(v_mvarId_3332_);
v_a_3354_ = lean_ctor_get(v___x_3341_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3341_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3356_ = v___x_3341_;
v_isShared_3357_ = v_isSharedCheck_3361_;
goto v_resetjp_3355_;
}
else
{
lean_inc(v_a_3354_);
lean_dec(v___x_3341_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_propext___boxed(lean_object* v_mvarId_3362_, lean_object* v_a_3363_, lean_object* v_a_3364_, lean_object* v_a_3365_, lean_object* v_a_3366_, lean_object* v_a_3367_){
_start:
{
lean_object* v_res_3368_; 
v_res_3368_ = l_Lean_MVarId_propext(v_mvarId_3362_, v_a_3363_, v_a_3364_, v_a_3365_, v_a_3366_);
lean_dec(v_a_3366_);
lean_dec_ref(v_a_3365_);
lean_dec(v_a_3364_);
lean_dec_ref(v_a_3363_);
return v_res_3368_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0(lean_object* v_mvarId_3375_, lean_object* v___x_3376_, lean_object* v___y_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_){
_start:
{
lean_object* v___y_3383_; lean_object* v___x_3427_; 
lean_inc(v_mvarId_3375_);
v___x_3427_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3375_, v___x_3376_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
if (lean_obj_tag(v___x_3427_) == 0)
{
lean_object* v___x_3428_; uint8_t v_transparency_3429_; uint8_t v___x_3430_; uint8_t v___x_3431_; 
lean_dec_ref_known(v___x_3427_, 1);
v___x_3428_ = l_Lean_Meta_Context_config(v___y_3377_);
v_transparency_3429_ = lean_ctor_get_uint8(v___x_3428_, 9);
lean_dec_ref(v___x_3428_);
v___x_3430_ = 2;
v___x_3431_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3429_, v___x_3430_);
if (v___x_3431_ == 0)
{
lean_object* v_keyedConfig_3432_; uint8_t v_trackZetaDelta_3433_; lean_object* v_zetaDeltaSet_3434_; lean_object* v_lctx_3435_; lean_object* v_localInstances_3436_; lean_object* v_defEqCtx_x3f_3437_; lean_object* v_synthPendingDepth_3438_; lean_object* v_customCanUnfoldPredicate_x3f_3439_; uint8_t v_univApprox_3440_; uint8_t v_inTypeClassResolution_3441_; uint8_t v_cacheInferType_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; 
v_keyedConfig_3432_ = lean_ctor_get(v___y_3377_, 0);
v_trackZetaDelta_3433_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*7);
v_zetaDeltaSet_3434_ = lean_ctor_get(v___y_3377_, 1);
v_lctx_3435_ = lean_ctor_get(v___y_3377_, 2);
v_localInstances_3436_ = lean_ctor_get(v___y_3377_, 3);
v_defEqCtx_x3f_3437_ = lean_ctor_get(v___y_3377_, 4);
v_synthPendingDepth_3438_ = lean_ctor_get(v___y_3377_, 5);
v_customCanUnfoldPredicate_x3f_3439_ = lean_ctor_get(v___y_3377_, 6);
v_univApprox_3440_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3441_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*7 + 2);
v_cacheInferType_3442_ = lean_ctor_get_uint8(v___y_3377_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3432_);
v___x_3443_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3430_, v_keyedConfig_3432_);
lean_inc(v_customCanUnfoldPredicate_x3f_3439_);
lean_inc(v_synthPendingDepth_3438_);
lean_inc(v_defEqCtx_x3f_3437_);
lean_inc_ref(v_localInstances_3436_);
lean_inc_ref(v_lctx_3435_);
lean_inc(v_zetaDeltaSet_3434_);
v___x_3444_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3444_, 0, v___x_3443_);
lean_ctor_set(v___x_3444_, 1, v_zetaDeltaSet_3434_);
lean_ctor_set(v___x_3444_, 2, v_lctx_3435_);
lean_ctor_set(v___x_3444_, 3, v_localInstances_3436_);
lean_ctor_set(v___x_3444_, 4, v_defEqCtx_x3f_3437_);
lean_ctor_set(v___x_3444_, 5, v_synthPendingDepth_3438_);
lean_ctor_set(v___x_3444_, 6, v_customCanUnfoldPredicate_x3f_3439_);
lean_ctor_set_uint8(v___x_3444_, sizeof(void*)*7, v_trackZetaDelta_3433_);
lean_ctor_set_uint8(v___x_3444_, sizeof(void*)*7 + 1, v_univApprox_3440_);
lean_ctor_set_uint8(v___x_3444_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3441_);
lean_ctor_set_uint8(v___x_3444_, sizeof(void*)*7 + 3, v_cacheInferType_3442_);
lean_inc(v_mvarId_3375_);
v___x_3445_ = l_Lean_MVarId_getType_x27(v_mvarId_3375_, v___x_3444_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec_ref_known(v___x_3444_, 7);
v___y_3383_ = v___x_3445_;
goto v___jp_3382_;
}
else
{
lean_object* v___x_3446_; 
lean_inc(v_mvarId_3375_);
v___x_3446_ = l_Lean_MVarId_getType_x27(v_mvarId_3375_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
v___y_3383_ = v___x_3446_;
goto v___jp_3382_;
}
}
else
{
lean_object* v_a_3447_; lean_object* v___x_3449_; uint8_t v_isShared_3450_; uint8_t v_isSharedCheck_3454_; 
lean_dec_ref(v___y_3377_);
lean_dec(v_mvarId_3375_);
v_a_3447_ = lean_ctor_get(v___x_3427_, 0);
v_isSharedCheck_3454_ = !lean_is_exclusive(v___x_3427_);
if (v_isSharedCheck_3454_ == 0)
{
v___x_3449_ = v___x_3427_;
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
else
{
lean_inc(v_a_3447_);
lean_dec(v___x_3427_);
v___x_3449_ = lean_box(0);
v_isShared_3450_ = v_isSharedCheck_3454_;
goto v_resetjp_3448_;
}
v_resetjp_3448_:
{
lean_object* v___x_3452_; 
if (v_isShared_3450_ == 0)
{
v___x_3452_ = v___x_3449_;
goto v_reusejp_3451_;
}
else
{
lean_object* v_reuseFailAlloc_3453_; 
v_reuseFailAlloc_3453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3453_, 0, v_a_3447_);
v___x_3452_ = v_reuseFailAlloc_3453_;
goto v_reusejp_3451_;
}
v_reusejp_3451_:
{
return v___x_3452_;
}
}
}
v___jp_3382_:
{
if (lean_obj_tag(v___y_3383_) == 0)
{
lean_object* v_a_3384_; lean_object* v___x_3385_; lean_object* v___x_3386_; uint8_t v___x_3387_; 
v_a_3384_ = lean_ctor_get(v___y_3383_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___y_3383_, 1);
v___x_3385_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___lam__0___closed__1));
v___x_3386_ = lean_unsigned_to_nat(4u);
v___x_3387_ = l_Lean_Expr_isAppOfArity(v_a_3384_, v___x_3385_, v___x_3386_);
if (v___x_3387_ == 0)
{
lean_object* v___x_3388_; lean_object* v___x_3389_; 
lean_dec(v_a_3384_);
lean_dec(v_mvarId_3375_);
v___x_3388_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3389_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3388_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec_ref(v___y_3377_);
return v___x_3389_;
}
else
{
lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3390_ = l_Lean_Expr_appFn_x21(v_a_3384_);
v___x_3391_ = l_Lean_Expr_appFn_x21(v___x_3390_);
lean_dec_ref(v___x_3390_);
v___x_3392_ = l_Lean_Expr_appArg_x21(v___x_3391_);
lean_dec_ref(v___x_3391_);
v___x_3393_ = l_Lean_Expr_appArg_x21(v_a_3384_);
lean_dec(v_a_3384_);
v___x_3394_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___lam__0___closed__3));
v___x_3395_ = lean_unsigned_to_nat(2u);
v___x_3396_ = lean_mk_empty_array_with_capacity(v___x_3395_);
v___x_3397_ = lean_array_push(v___x_3396_, v___x_3392_);
v___x_3398_ = lean_array_push(v___x_3397_, v___x_3393_);
v___x_3399_ = l_Lean_Meta_mkAppM(v___x_3394_, v___x_3398_, v___y_3377_, v___y_3378_, v___y_3379_, v___y_3380_);
lean_dec_ref(v___y_3377_);
if (lean_obj_tag(v___x_3399_) == 0)
{
lean_object* v_a_3400_; lean_object* v___x_3401_; lean_object* v___x_3403_; uint8_t v_isShared_3404_; uint8_t v_isSharedCheck_3409_; 
v_a_3400_ = lean_ctor_get(v___x_3399_, 0);
lean_inc(v_a_3400_);
lean_dec_ref_known(v___x_3399_, 1);
v___x_3401_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3375_, v_a_3400_, v___y_3378_);
v_isSharedCheck_3409_ = !lean_is_exclusive(v___x_3401_);
if (v_isSharedCheck_3409_ == 0)
{
lean_object* v_unused_3410_; 
v_unused_3410_ = lean_ctor_get(v___x_3401_, 0);
lean_dec(v_unused_3410_);
v___x_3403_ = v___x_3401_;
v_isShared_3404_ = v_isSharedCheck_3409_;
goto v_resetjp_3402_;
}
else
{
lean_dec(v___x_3401_);
v___x_3403_ = lean_box(0);
v_isShared_3404_ = v_isSharedCheck_3409_;
goto v_resetjp_3402_;
}
v_resetjp_3402_:
{
lean_object* v___x_3405_; lean_object* v___x_3407_; 
v___x_3405_ = lean_box(v___x_3387_);
if (v_isShared_3404_ == 0)
{
lean_ctor_set(v___x_3403_, 0, v___x_3405_);
v___x_3407_ = v___x_3403_;
goto v_reusejp_3406_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3405_);
v___x_3407_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3406_;
}
v_reusejp_3406_:
{
return v___x_3407_;
}
}
}
else
{
lean_object* v_a_3411_; lean_object* v___x_3413_; uint8_t v_isShared_3414_; uint8_t v_isSharedCheck_3418_; 
lean_dec(v_mvarId_3375_);
v_a_3411_ = lean_ctor_get(v___x_3399_, 0);
v_isSharedCheck_3418_ = !lean_is_exclusive(v___x_3399_);
if (v_isSharedCheck_3418_ == 0)
{
v___x_3413_ = v___x_3399_;
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
else
{
lean_inc(v_a_3411_);
lean_dec(v___x_3399_);
v___x_3413_ = lean_box(0);
v_isShared_3414_ = v_isSharedCheck_3418_;
goto v_resetjp_3412_;
}
v_resetjp_3412_:
{
lean_object* v___x_3416_; 
if (v_isShared_3414_ == 0)
{
v___x_3416_ = v___x_3413_;
goto v_reusejp_3415_;
}
else
{
lean_object* v_reuseFailAlloc_3417_; 
v_reuseFailAlloc_3417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3417_, 0, v_a_3411_);
v___x_3416_ = v_reuseFailAlloc_3417_;
goto v_reusejp_3415_;
}
v_reusejp_3415_:
{
return v___x_3416_;
}
}
}
}
}
else
{
lean_object* v_a_3419_; lean_object* v___x_3421_; uint8_t v_isShared_3422_; uint8_t v_isSharedCheck_3426_; 
lean_dec_ref(v___y_3377_);
lean_dec(v_mvarId_3375_);
v_a_3419_ = lean_ctor_get(v___y_3383_, 0);
v_isSharedCheck_3426_ = !lean_is_exclusive(v___y_3383_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3421_ = v___y_3383_;
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
else
{
lean_inc(v_a_3419_);
lean_dec(v___y_3383_);
v___x_3421_ = lean_box(0);
v_isShared_3422_ = v_isSharedCheck_3426_;
goto v_resetjp_3420_;
}
v_resetjp_3420_:
{
lean_object* v___x_3424_; 
if (v_isShared_3422_ == 0)
{
v___x_3424_ = v___x_3421_;
goto v_reusejp_3423_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v_a_3419_);
v___x_3424_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3423_;
}
v_reusejp_3423_:
{
return v___x_3424_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__0___boxed(lean_object* v_mvarId_3455_, lean_object* v___x_3456_, lean_object* v___y_3457_, lean_object* v___y_3458_, lean_object* v___y_3459_, lean_object* v___y_3460_, lean_object* v___y_3461_){
_start:
{
lean_object* v_res_3462_; 
v_res_3462_ = l_Lean_MVarId_proofIrrelHeq___lam__0(v_mvarId_3455_, v___x_3456_, v___y_3457_, v___y_3458_, v___y_3459_, v___y_3460_);
lean_dec(v___y_3460_);
lean_dec_ref(v___y_3459_);
lean_dec(v___y_3458_);
return v_res_3462_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1(lean_object* v___f_3463_, lean_object* v___y_3464_, lean_object* v___y_3465_, lean_object* v___y_3466_, lean_object* v___y_3467_){
_start:
{
lean_object* v___x_3469_; 
v___x_3469_ = l_Lean_observing_x3f___at___00Lean_MVarId_iffOfEq_spec__0___redArg(v___f_3463_, v___y_3464_, v___y_3465_, v___y_3466_, v___y_3467_);
if (lean_obj_tag(v___x_3469_) == 0)
{
lean_object* v_a_3470_; lean_object* v___x_3472_; uint8_t v_isShared_3473_; uint8_t v_isSharedCheck_3483_; 
v_a_3470_ = lean_ctor_get(v___x_3469_, 0);
v_isSharedCheck_3483_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3483_ == 0)
{
v___x_3472_ = v___x_3469_;
v_isShared_3473_ = v_isSharedCheck_3483_;
goto v_resetjp_3471_;
}
else
{
lean_inc(v_a_3470_);
lean_dec(v___x_3469_);
v___x_3472_ = lean_box(0);
v_isShared_3473_ = v_isSharedCheck_3483_;
goto v_resetjp_3471_;
}
v_resetjp_3471_:
{
if (lean_obj_tag(v_a_3470_) == 0)
{
uint8_t v___x_3474_; lean_object* v___x_3475_; lean_object* v___x_3477_; 
v___x_3474_ = 0;
v___x_3475_ = lean_box(v___x_3474_);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 0, v___x_3475_);
v___x_3477_ = v___x_3472_;
goto v_reusejp_3476_;
}
else
{
lean_object* v_reuseFailAlloc_3478_; 
v_reuseFailAlloc_3478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3478_, 0, v___x_3475_);
v___x_3477_ = v_reuseFailAlloc_3478_;
goto v_reusejp_3476_;
}
v_reusejp_3476_:
{
return v___x_3477_;
}
}
else
{
lean_object* v_val_3479_; lean_object* v___x_3481_; 
v_val_3479_ = lean_ctor_get(v_a_3470_, 0);
lean_inc(v_val_3479_);
lean_dec_ref_known(v_a_3470_, 1);
if (v_isShared_3473_ == 0)
{
lean_ctor_set(v___x_3472_, 0, v_val_3479_);
v___x_3481_ = v___x_3472_;
goto v_reusejp_3480_;
}
else
{
lean_object* v_reuseFailAlloc_3482_; 
v_reuseFailAlloc_3482_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3482_, 0, v_val_3479_);
v___x_3481_ = v_reuseFailAlloc_3482_;
goto v_reusejp_3480_;
}
v_reusejp_3480_:
{
return v___x_3481_;
}
}
}
}
else
{
lean_object* v_a_3484_; lean_object* v___x_3486_; uint8_t v_isShared_3487_; uint8_t v_isSharedCheck_3491_; 
v_a_3484_ = lean_ctor_get(v___x_3469_, 0);
v_isSharedCheck_3491_ = !lean_is_exclusive(v___x_3469_);
if (v_isSharedCheck_3491_ == 0)
{
v___x_3486_ = v___x_3469_;
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
else
{
lean_inc(v_a_3484_);
lean_dec(v___x_3469_);
v___x_3486_ = lean_box(0);
v_isShared_3487_ = v_isSharedCheck_3491_;
goto v_resetjp_3485_;
}
v_resetjp_3485_:
{
lean_object* v___x_3489_; 
if (v_isShared_3487_ == 0)
{
v___x_3489_ = v___x_3486_;
goto v_reusejp_3488_;
}
else
{
lean_object* v_reuseFailAlloc_3490_; 
v_reuseFailAlloc_3490_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3490_, 0, v_a_3484_);
v___x_3489_ = v_reuseFailAlloc_3490_;
goto v_reusejp_3488_;
}
v_reusejp_3488_:
{
return v___x_3489_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___lam__1___boxed(lean_object* v___f_3492_, lean_object* v___y_3493_, lean_object* v___y_3494_, lean_object* v___y_3495_, lean_object* v___y_3496_, lean_object* v___y_3497_){
_start:
{
lean_object* v_res_3498_; 
v_res_3498_ = l_Lean_MVarId_proofIrrelHeq___lam__1(v___f_3492_, v___y_3493_, v___y_3494_, v___y_3495_, v___y_3496_);
lean_dec(v___y_3496_);
lean_dec_ref(v___y_3495_);
lean_dec(v___y_3494_);
lean_dec_ref(v___y_3493_);
return v_res_3498_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq(lean_object* v_mvarId_3502_, lean_object* v_a_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_, lean_object* v_a_3506_){
_start:
{
lean_object* v___x_3508_; lean_object* v___f_3509_; lean_object* v___f_3510_; lean_object* v___x_3511_; 
v___x_3508_ = ((lean_object*)(l_Lean_MVarId_proofIrrelHeq___closed__1));
lean_inc(v_mvarId_3502_);
v___f_3509_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3509_, 0, v_mvarId_3502_);
lean_closure_set(v___f_3509_, 1, v___x_3508_);
v___f_3510_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3510_, 0, v___f_3509_);
v___x_3511_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3502_, v___f_3510_, v_a_3503_, v_a_3504_, v_a_3505_, v_a_3506_);
return v___x_3511_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_proofIrrelHeq___boxed(lean_object* v_mvarId_3512_, lean_object* v_a_3513_, lean_object* v_a_3514_, lean_object* v_a_3515_, lean_object* v_a_3516_, lean_object* v_a_3517_){
_start:
{
lean_object* v_res_3518_; 
v_res_3518_ = l_Lean_MVarId_proofIrrelHeq(v_mvarId_3512_, v_a_3513_, v_a_3514_, v_a_3515_, v_a_3516_);
lean_dec(v_a_3516_);
lean_dec_ref(v_a_3515_);
lean_dec(v_a_3514_);
lean_dec_ref(v_a_3513_);
return v_res_3518_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0(lean_object* v_mvarId_3523_, lean_object* v___x_3524_, lean_object* v___y_3525_, lean_object* v___y_3526_, lean_object* v___y_3527_, lean_object* v___y_3528_){
_start:
{
lean_object* v___y_3531_; lean_object* v___x_3574_; 
lean_inc(v_mvarId_3523_);
v___x_3574_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_3523_, v___x_3524_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
if (lean_obj_tag(v___x_3574_) == 0)
{
lean_object* v___x_3575_; uint8_t v_transparency_3576_; uint8_t v___x_3577_; uint8_t v___x_3578_; 
lean_dec_ref_known(v___x_3574_, 1);
v___x_3575_ = l_Lean_Meta_Context_config(v___y_3525_);
v_transparency_3576_ = lean_ctor_get_uint8(v___x_3575_, 9);
lean_dec_ref(v___x_3575_);
v___x_3577_ = 2;
v___x_3578_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_3576_, v___x_3577_);
if (v___x_3578_ == 0)
{
lean_object* v_keyedConfig_3579_; uint8_t v_trackZetaDelta_3580_; lean_object* v_zetaDeltaSet_3581_; lean_object* v_lctx_3582_; lean_object* v_localInstances_3583_; lean_object* v_defEqCtx_x3f_3584_; lean_object* v_synthPendingDepth_3585_; lean_object* v_customCanUnfoldPredicate_x3f_3586_; uint8_t v_univApprox_3587_; uint8_t v_inTypeClassResolution_3588_; uint8_t v_cacheInferType_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
v_keyedConfig_3579_ = lean_ctor_get(v___y_3525_, 0);
v_trackZetaDelta_3580_ = lean_ctor_get_uint8(v___y_3525_, sizeof(void*)*7);
v_zetaDeltaSet_3581_ = lean_ctor_get(v___y_3525_, 1);
v_lctx_3582_ = lean_ctor_get(v___y_3525_, 2);
v_localInstances_3583_ = lean_ctor_get(v___y_3525_, 3);
v_defEqCtx_x3f_3584_ = lean_ctor_get(v___y_3525_, 4);
v_synthPendingDepth_3585_ = lean_ctor_get(v___y_3525_, 5);
v_customCanUnfoldPredicate_x3f_3586_ = lean_ctor_get(v___y_3525_, 6);
v_univApprox_3587_ = lean_ctor_get_uint8(v___y_3525_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_3588_ = lean_ctor_get_uint8(v___y_3525_, sizeof(void*)*7 + 2);
v_cacheInferType_3589_ = lean_ctor_get_uint8(v___y_3525_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_3579_);
v___x_3590_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_3577_, v_keyedConfig_3579_);
lean_inc(v_customCanUnfoldPredicate_x3f_3586_);
lean_inc(v_synthPendingDepth_3585_);
lean_inc(v_defEqCtx_x3f_3584_);
lean_inc_ref(v_localInstances_3583_);
lean_inc_ref(v_lctx_3582_);
lean_inc(v_zetaDeltaSet_3581_);
v___x_3591_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_3591_, 0, v___x_3590_);
lean_ctor_set(v___x_3591_, 1, v_zetaDeltaSet_3581_);
lean_ctor_set(v___x_3591_, 2, v_lctx_3582_);
lean_ctor_set(v___x_3591_, 3, v_localInstances_3583_);
lean_ctor_set(v___x_3591_, 4, v_defEqCtx_x3f_3584_);
lean_ctor_set(v___x_3591_, 5, v_synthPendingDepth_3585_);
lean_ctor_set(v___x_3591_, 6, v_customCanUnfoldPredicate_x3f_3586_);
lean_ctor_set_uint8(v___x_3591_, sizeof(void*)*7, v_trackZetaDelta_3580_);
lean_ctor_set_uint8(v___x_3591_, sizeof(void*)*7 + 1, v_univApprox_3587_);
lean_ctor_set_uint8(v___x_3591_, sizeof(void*)*7 + 2, v_inTypeClassResolution_3588_);
lean_ctor_set_uint8(v___x_3591_, sizeof(void*)*7 + 3, v_cacheInferType_3589_);
lean_inc(v_mvarId_3523_);
v___x_3592_ = l_Lean_MVarId_getType_x27(v_mvarId_3523_, v___x_3591_, v___y_3526_, v___y_3527_, v___y_3528_);
lean_dec_ref_known(v___x_3591_, 7);
v___y_3531_ = v___x_3592_;
goto v___jp_3530_;
}
else
{
lean_object* v___x_3593_; 
lean_inc(v_mvarId_3523_);
v___x_3593_ = l_Lean_MVarId_getType_x27(v_mvarId_3523_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
v___y_3531_ = v___x_3593_;
goto v___jp_3530_;
}
}
else
{
lean_object* v_a_3594_; lean_object* v___x_3596_; uint8_t v_isShared_3597_; uint8_t v_isSharedCheck_3601_; 
lean_dec_ref(v___y_3525_);
lean_dec(v_mvarId_3523_);
v_a_3594_ = lean_ctor_get(v___x_3574_, 0);
v_isSharedCheck_3601_ = !lean_is_exclusive(v___x_3574_);
if (v_isSharedCheck_3601_ == 0)
{
v___x_3596_ = v___x_3574_;
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
else
{
lean_inc(v_a_3594_);
lean_dec(v___x_3574_);
v___x_3596_ = lean_box(0);
v_isShared_3597_ = v_isSharedCheck_3601_;
goto v_resetjp_3595_;
}
v_resetjp_3595_:
{
lean_object* v___x_3599_; 
if (v_isShared_3597_ == 0)
{
v___x_3599_ = v___x_3596_;
goto v_reusejp_3598_;
}
else
{
lean_object* v_reuseFailAlloc_3600_; 
v_reuseFailAlloc_3600_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3600_, 0, v_a_3594_);
v___x_3599_ = v_reuseFailAlloc_3600_;
goto v_reusejp_3598_;
}
v_reusejp_3598_:
{
return v___x_3599_;
}
}
}
v___jp_3530_:
{
if (lean_obj_tag(v___y_3531_) == 0)
{
lean_object* v_a_3532_; lean_object* v___x_3533_; lean_object* v___x_3534_; uint8_t v___x_3535_; 
v_a_3532_ = lean_ctor_get(v___y_3531_, 0);
lean_inc(v_a_3532_);
lean_dec_ref_known(v___y_3531_, 1);
v___x_3533_ = ((lean_object*)(l_Lean_MVarId_propext___lam__0___closed__4));
v___x_3534_ = lean_unsigned_to_nat(3u);
v___x_3535_ = l_Lean_Expr_isAppOfArity(v_a_3532_, v___x_3533_, v___x_3534_);
if (v___x_3535_ == 0)
{
lean_object* v___x_3536_; lean_object* v___x_3537_; 
lean_dec(v_a_3532_);
lean_dec(v_mvarId_3523_);
v___x_3536_ = lean_obj_once(&l_Lean_MVarId_iffOfEq___lam__0___closed__1, &l_Lean_MVarId_iffOfEq___lam__0___closed__1_once, _init_l_Lean_MVarId_iffOfEq___lam__0___closed__1);
v___x_3537_ = l_Lean_throwError___at___00Lean_MVarId_applyN_spec__1___redArg(v___x_3536_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
lean_dec_ref(v___y_3525_);
return v___x_3537_;
}
else
{
lean_object* v___x_3538_; lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3538_ = l_Lean_Expr_appFn_x21(v_a_3532_);
v___x_3539_ = l_Lean_Expr_appArg_x21(v___x_3538_);
lean_dec_ref(v___x_3538_);
v___x_3540_ = l_Lean_Expr_appArg_x21(v_a_3532_);
lean_dec(v_a_3532_);
v___x_3541_ = ((lean_object*)(l_Lean_MVarId_subsingletonElim___lam__0___closed__1));
v___x_3542_ = lean_unsigned_to_nat(2u);
v___x_3543_ = lean_mk_empty_array_with_capacity(v___x_3542_);
v___x_3544_ = lean_array_push(v___x_3543_, v___x_3539_);
v___x_3545_ = lean_array_push(v___x_3544_, v___x_3540_);
v___x_3546_ = l_Lean_Meta_mkAppM(v___x_3541_, v___x_3545_, v___y_3525_, v___y_3526_, v___y_3527_, v___y_3528_);
lean_dec_ref(v___y_3525_);
if (lean_obj_tag(v___x_3546_) == 0)
{
lean_object* v_a_3547_; lean_object* v___x_3548_; lean_object* v___x_3550_; uint8_t v_isShared_3551_; uint8_t v_isSharedCheck_3556_; 
v_a_3547_ = lean_ctor_get(v___x_3546_, 0);
lean_inc(v_a_3547_);
lean_dec_ref_known(v___x_3546_, 1);
v___x_3548_ = l_Lean_MVarId_assign___at___00Lean_MVarId_apply_spec__1___redArg(v_mvarId_3523_, v_a_3547_, v___y_3526_);
v_isSharedCheck_3556_ = !lean_is_exclusive(v___x_3548_);
if (v_isSharedCheck_3556_ == 0)
{
lean_object* v_unused_3557_; 
v_unused_3557_ = lean_ctor_get(v___x_3548_, 0);
lean_dec(v_unused_3557_);
v___x_3550_ = v___x_3548_;
v_isShared_3551_ = v_isSharedCheck_3556_;
goto v_resetjp_3549_;
}
else
{
lean_dec(v___x_3548_);
v___x_3550_ = lean_box(0);
v_isShared_3551_ = v_isSharedCheck_3556_;
goto v_resetjp_3549_;
}
v_resetjp_3549_:
{
lean_object* v___x_3552_; lean_object* v___x_3554_; 
v___x_3552_ = lean_box(v___x_3535_);
if (v_isShared_3551_ == 0)
{
lean_ctor_set(v___x_3550_, 0, v___x_3552_);
v___x_3554_ = v___x_3550_;
goto v_reusejp_3553_;
}
else
{
lean_object* v_reuseFailAlloc_3555_; 
v_reuseFailAlloc_3555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3555_, 0, v___x_3552_);
v___x_3554_ = v_reuseFailAlloc_3555_;
goto v_reusejp_3553_;
}
v_reusejp_3553_:
{
return v___x_3554_;
}
}
}
else
{
lean_object* v_a_3558_; lean_object* v___x_3560_; uint8_t v_isShared_3561_; uint8_t v_isSharedCheck_3565_; 
lean_dec(v_mvarId_3523_);
v_a_3558_ = lean_ctor_get(v___x_3546_, 0);
v_isSharedCheck_3565_ = !lean_is_exclusive(v___x_3546_);
if (v_isSharedCheck_3565_ == 0)
{
v___x_3560_ = v___x_3546_;
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
else
{
lean_inc(v_a_3558_);
lean_dec(v___x_3546_);
v___x_3560_ = lean_box(0);
v_isShared_3561_ = v_isSharedCheck_3565_;
goto v_resetjp_3559_;
}
v_resetjp_3559_:
{
lean_object* v___x_3563_; 
if (v_isShared_3561_ == 0)
{
v___x_3563_ = v___x_3560_;
goto v_reusejp_3562_;
}
else
{
lean_object* v_reuseFailAlloc_3564_; 
v_reuseFailAlloc_3564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3564_, 0, v_a_3558_);
v___x_3563_ = v_reuseFailAlloc_3564_;
goto v_reusejp_3562_;
}
v_reusejp_3562_:
{
return v___x_3563_;
}
}
}
}
}
else
{
lean_object* v_a_3566_; lean_object* v___x_3568_; uint8_t v_isShared_3569_; uint8_t v_isSharedCheck_3573_; 
lean_dec_ref(v___y_3525_);
lean_dec(v_mvarId_3523_);
v_a_3566_ = lean_ctor_get(v___y_3531_, 0);
v_isSharedCheck_3573_ = !lean_is_exclusive(v___y_3531_);
if (v_isSharedCheck_3573_ == 0)
{
v___x_3568_ = v___y_3531_;
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
else
{
lean_inc(v_a_3566_);
lean_dec(v___y_3531_);
v___x_3568_ = lean_box(0);
v_isShared_3569_ = v_isSharedCheck_3573_;
goto v_resetjp_3567_;
}
v_resetjp_3567_:
{
lean_object* v___x_3571_; 
if (v_isShared_3569_ == 0)
{
v___x_3571_ = v___x_3568_;
goto v_reusejp_3570_;
}
else
{
lean_object* v_reuseFailAlloc_3572_; 
v_reuseFailAlloc_3572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3572_, 0, v_a_3566_);
v___x_3571_ = v_reuseFailAlloc_3572_;
goto v_reusejp_3570_;
}
v_reusejp_3570_:
{
return v___x_3571_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___lam__0___boxed(lean_object* v_mvarId_3602_, lean_object* v___x_3603_, lean_object* v___y_3604_, lean_object* v___y_3605_, lean_object* v___y_3606_, lean_object* v___y_3607_, lean_object* v___y_3608_){
_start:
{
lean_object* v_res_3609_; 
v_res_3609_ = l_Lean_MVarId_subsingletonElim___lam__0(v_mvarId_3602_, v___x_3603_, v___y_3604_, v___y_3605_, v___y_3606_, v___y_3607_);
lean_dec(v___y_3607_);
lean_dec_ref(v___y_3606_);
lean_dec(v___y_3605_);
return v_res_3609_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim(lean_object* v_mvarId_3613_, lean_object* v_a_3614_, lean_object* v_a_3615_, lean_object* v_a_3616_, lean_object* v_a_3617_){
_start:
{
lean_object* v___x_3619_; lean_object* v___f_3620_; lean_object* v___f_3621_; lean_object* v___x_3622_; 
v___x_3619_ = ((lean_object*)(l_Lean_MVarId_subsingletonElim___closed__1));
lean_inc(v_mvarId_3613_);
v___f_3620_ = lean_alloc_closure((void*)(l_Lean_MVarId_subsingletonElim___lam__0___boxed), 7, 2);
lean_closure_set(v___f_3620_, 0, v_mvarId_3613_);
lean_closure_set(v___f_3620_, 1, v___x_3619_);
v___f_3621_ = lean_alloc_closure((void*)(l_Lean_MVarId_proofIrrelHeq___lam__1___boxed), 6, 1);
lean_closure_set(v___f_3621_, 0, v___f_3620_);
v___x_3622_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_apply_spec__6___redArg(v_mvarId_3613_, v___f_3621_, v_a_3614_, v_a_3615_, v_a_3616_, v_a_3617_);
return v___x_3622_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_subsingletonElim___boxed(lean_object* v_mvarId_3623_, lean_object* v_a_3624_, lean_object* v_a_3625_, lean_object* v_a_3626_, lean_object* v_a_3627_, lean_object* v_a_3628_){
_start:
{
lean_object* v_res_3629_; 
v_res_3629_ = l_Lean_MVarId_subsingletonElim(v_mvarId_3623_, v_a_3624_, v_a_3625_, v_a_3626_, v_a_3627_);
lean_dec(v_a_3627_);
lean_dec_ref(v_a_3626_);
lean_dec(v_a_3625_);
lean_dec_ref(v_a_3624_);
return v_res_3629_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Util(uint8_t builtin);
lean_object* initialize_Lean_PrettyPrinter(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Apply(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_PrettyPrinter(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Apply(builtin);
}
#ifdef __cplusplus
}
#endif
