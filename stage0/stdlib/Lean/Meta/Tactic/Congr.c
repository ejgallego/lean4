// Lean compiler output
// Module: Lean.Meta.Tactic.Congr
// Imports: public import Lean.Meta.CongrTheorems public import Lean.Meta.AppBuilder public import Lean.Meta.Tactic.Assert public import Lean.Meta.Tactic.Refl public import Lean.Meta.Tactic.Assumption
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
lean_object* l_Lean_Meta_saveState___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Exception_isInterrupt(lean_object*);
uint8_t l_Lean_Exception_isRuntime(lean_object*);
lean_object* l_Lean_Meta_SavedState_restore___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkConstWithFreshMVarLevels(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofConstName(lean_object*, uint8_t);
lean_object* l_Lean_MVarId_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasMVar(lean_object*);
lean_object* l_Lean_instantiateMVarsCore(lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_whnfR(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getTag(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkApp5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_checkNotAssigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_eqOfHEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_getType_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_getAppFn(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* l_Lean_Meta_mkHCongrWithArity(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_mkFreshUserName(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_intro1Core(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MVarId_tryClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimp_x3f(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Meta_throwTacticEx___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Context_config(lean_object*);
uint8_t l_Lean_Meta_instBEqTransparencyMode_beq(uint8_t, uint8_t);
lean_object* l_Lean_MVarId_heqOfEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_refl(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_hrefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MVarId_assumptionCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_Meta_ConfigWithKey_setTransparency(uint8_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_to_list(lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congrPre(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congrPre___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_decisionCongr___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_Lean_MVarId_decisionCongr___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_decisionCongr___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_Lean_MVarId_decisionCongr___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__1_value;
static const lean_string_object l_Lean_MVarId_decisionCongr___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_MVarId_decisionCongr___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__2_value;
static const lean_string_object l_Lean_MVarId_decisionCongr___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "decide_congr"};
static const lean_object* l_Lean_MVarId_decisionCongr___lam__0___closed__3 = (const lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__3_value;
static const lean_ctor_object l_Lean_MVarId_decisionCongr___lam__0___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l_Lean_MVarId_decisionCongr___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__4_value_aux_0),((lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__3_value),LEAN_SCALAR_PTR_LITERAL(61, 229, 9, 191, 122, 61, 70, 94)}};
static const lean_object* l_Lean_MVarId_decisionCongr___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__4_value;
static const lean_ctor_object l_Lean_MVarId_decisionCongr___lam__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_MVarId_decisionCongr___lam__0___closed__5 = (const lean_object*)&l_Lean_MVarId_decisionCongr___lam__0___closed__5_value;
static lean_once_cell_t l_Lean_MVarId_decisionCongr___lam__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_decisionCongr___lam__0___closed__6;
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "h_congr_thm"};
static const lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(65, 191, 7, 90, 105, 148, 138, 216)}};
static const lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_congr_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "congr"};
static const lean_object* l_Lean_MVarId_congr_x3f___closed__0 = (const lean_object*)&l_Lean_MVarId_congr_x3f___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_congr_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_congr_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(56, 82, 209, 127, 228, 246, 91, 162)}};
static const lean_object* l_Lean_MVarId_congr_x3f___closed__1 = (const lean_object*)&l_Lean_MVarId_congr_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_hcongr_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "HEq"};
static const lean_object* l_Lean_MVarId_hcongr_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_hcongr_x3f___lam__0___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_hcongr_x3f___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_hcongr_x3f___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(67, 180, 169, 191, 74, 196, 152, 188)}};
static const lean_object* l_Lean_MVarId_hcongr_x3f___lam__0___closed__1 = (const lean_object*)&l_Lean_MVarId_hcongr_x3f___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_congrImplies_x3f___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 61, .m_capacity = 61, .m_length = 60, .m_data = "Internal error: Expected at least two goals after applying `"};
static const lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0___closed__0 = (const lean_object*)&l_Lean_MVarId_congrImplies_x3f___lam__0___closed__0_value;
static lean_once_cell_t l_Lean_MVarId_congrImplies_x3f___lam__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0___closed__1;
static const lean_string_object l_Lean_MVarId_congrImplies_x3f___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "`, but unexpectedly found fewer"};
static const lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0___closed__2 = (const lean_object*)&l_Lean_MVarId_congrImplies_x3f___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_MVarId_congrImplies_x3f___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0___closed__3;
static const lean_ctor_object l_Lean_MVarId_congrImplies_x3f___lam__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 1, 0, 1, 0, 0, 0, 0)}};
static const lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0___closed__4 = (const lean_object*)&l_Lean_MVarId_congrImplies_x3f___lam__0___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_congrImplies_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "implies_congr"};
static const lean_object* l_Lean_MVarId_congrImplies_x3f___closed__0 = (const lean_object*)&l_Lean_MVarId_congrImplies_x3f___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_congrImplies_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_MVarId_congrImplies_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(141, 71, 54, 187, 9, 73, 178, 153)}};
static const lean_object* l_Lean_MVarId_congrImplies_x3f___closed__1 = (const lean_object*)&l_Lean_MVarId_congrImplies_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_MVarId_congrCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Failed to apply congruence"};
static const lean_object* l_Lean_MVarId_congrCore___closed__0 = (const lean_object*)&l_Lean_MVarId_congrCore___closed__0_value;
static const lean_ctor_object l_Lean_MVarId_congrCore___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l_Lean_MVarId_congrCore___closed__0_value)}};
static const lean_object* l_Lean_MVarId_congrCore___closed__1 = (const lean_object*)&l_Lean_MVarId_congrCore___closed__1_value;
static lean_once_cell_t l_Lean_MVarId_congrCore___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_congrCore___closed__2;
static lean_once_cell_t l_Lean_MVarId_congrCore___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_MVarId_congrCore___closed__3;
LEAN_EXPORT lean_object* l_Lean_MVarId_congrCore(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congrCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_post(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_post___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go_spec__0(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_MVarId_congrN___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_MVarId_congrN___closed__0 = (const lean_object*)&l_Lean_MVarId_congrN___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_MVarId_congrN(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congrN___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_congrPre(lean_object* v_mvarId_1_, lean_object* v_a_2_, lean_object* v_a_3_, lean_object* v_a_4_, lean_object* v_a_5_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = l_Lean_MVarId_heqOfEq(v_mvarId_1_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_7_) == 0)
{
lean_object* v_a_8_; uint8_t v___x_9_; lean_object* v___x_10_; 
v_a_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_n(v_a_8_, 2);
lean_dec_ref_known(v___x_7_, 1);
v___x_9_ = 1;
v___x_10_ = l_Lean_MVarId_refl(v_a_8_, v___x_9_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_10_) == 0)
{
lean_object* v___x_12_; uint8_t v_isShared_13_; uint8_t v_isSharedCheck_18_; 
lean_dec(v_a_8_);
v_isSharedCheck_18_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_18_ == 0)
{
lean_object* v_unused_19_; 
v_unused_19_ = lean_ctor_get(v___x_10_, 0);
lean_dec(v_unused_19_);
v___x_12_ = v___x_10_;
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
else
{
lean_dec(v___x_10_);
v___x_12_ = lean_box(0);
v_isShared_13_ = v_isSharedCheck_18_;
goto v_resetjp_11_;
}
v_resetjp_11_:
{
lean_object* v___x_14_; lean_object* v___x_16_; 
v___x_14_ = lean_box(0);
if (v_isShared_13_ == 0)
{
lean_ctor_set(v___x_12_, 0, v___x_14_);
v___x_16_ = v___x_12_;
goto v_reusejp_15_;
}
else
{
lean_object* v_reuseFailAlloc_17_; 
v_reuseFailAlloc_17_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_17_, 0, v___x_14_);
v___x_16_ = v_reuseFailAlloc_17_;
goto v_reusejp_15_;
}
v_reusejp_15_:
{
return v___x_16_;
}
}
}
else
{
lean_object* v_a_20_; lean_object* v___x_22_; uint8_t v_isShared_23_; uint8_t v_isSharedCheck_78_; 
v_a_20_ = lean_ctor_get(v___x_10_, 0);
v_isSharedCheck_78_ = !lean_is_exclusive(v___x_10_);
if (v_isSharedCheck_78_ == 0)
{
v___x_22_ = v___x_10_;
v_isShared_23_ = v_isSharedCheck_78_;
goto v_resetjp_21_;
}
else
{
lean_inc(v_a_20_);
lean_dec(v___x_10_);
v___x_22_ = lean_box(0);
v_isShared_23_ = v_isSharedCheck_78_;
goto v_resetjp_21_;
}
v_resetjp_21_:
{
uint8_t v___x_24_; 
v___x_24_ = l_Lean_Exception_isInterrupt(v_a_20_);
if (v___x_24_ == 0)
{
uint8_t v___x_25_; 
lean_inc(v_a_20_);
v___x_25_ = l_Lean_Exception_isRuntime(v_a_20_);
if (v___x_25_ == 0)
{
lean_object* v___x_26_; 
lean_del_object(v___x_22_);
lean_dec(v_a_20_);
lean_inc(v_a_8_);
v___x_26_ = l_Lean_MVarId_hrefl(v_a_8_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_26_) == 0)
{
lean_object* v___x_28_; uint8_t v_isShared_29_; uint8_t v_isSharedCheck_34_; 
lean_dec(v_a_8_);
v_isSharedCheck_34_ = !lean_is_exclusive(v___x_26_);
if (v_isSharedCheck_34_ == 0)
{
lean_object* v_unused_35_; 
v_unused_35_ = lean_ctor_get(v___x_26_, 0);
lean_dec(v_unused_35_);
v___x_28_ = v___x_26_;
v_isShared_29_ = v_isSharedCheck_34_;
goto v_resetjp_27_;
}
else
{
lean_dec(v___x_26_);
v___x_28_ = lean_box(0);
v_isShared_29_ = v_isSharedCheck_34_;
goto v_resetjp_27_;
}
v_resetjp_27_:
{
lean_object* v___x_30_; lean_object* v___x_32_; 
v___x_30_ = lean_box(0);
if (v_isShared_29_ == 0)
{
lean_ctor_set(v___x_28_, 0, v___x_30_);
v___x_32_ = v___x_28_;
goto v_reusejp_31_;
}
else
{
lean_object* v_reuseFailAlloc_33_; 
v_reuseFailAlloc_33_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_33_, 0, v___x_30_);
v___x_32_ = v_reuseFailAlloc_33_;
goto v_reusejp_31_;
}
v_reusejp_31_:
{
return v___x_32_;
}
}
}
else
{
lean_object* v_a_36_; lean_object* v___x_38_; uint8_t v_isShared_39_; uint8_t v_isSharedCheck_71_; 
v_a_36_ = lean_ctor_get(v___x_26_, 0);
v_isSharedCheck_71_ = !lean_is_exclusive(v___x_26_);
if (v_isSharedCheck_71_ == 0)
{
v___x_38_ = v___x_26_;
v_isShared_39_ = v_isSharedCheck_71_;
goto v_resetjp_37_;
}
else
{
lean_inc(v_a_36_);
lean_dec(v___x_26_);
v___x_38_ = lean_box(0);
v_isShared_39_ = v_isSharedCheck_71_;
goto v_resetjp_37_;
}
v_resetjp_37_:
{
uint8_t v___x_40_; 
v___x_40_ = l_Lean_Exception_isInterrupt(v_a_36_);
if (v___x_40_ == 0)
{
uint8_t v___x_41_; 
lean_inc(v_a_36_);
v___x_41_ = l_Lean_Exception_isRuntime(v_a_36_);
if (v___x_41_ == 0)
{
lean_object* v___x_42_; 
lean_del_object(v___x_38_);
lean_dec(v_a_36_);
lean_inc(v_a_8_);
v___x_42_ = l_Lean_MVarId_assumptionCore(v_a_8_, v_a_2_, v_a_3_, v_a_4_, v_a_5_);
if (lean_obj_tag(v___x_42_) == 0)
{
lean_object* v_a_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_56_; 
v_a_43_ = lean_ctor_get(v___x_42_, 0);
v_isSharedCheck_56_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_56_ == 0)
{
v___x_45_ = v___x_42_;
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_a_43_);
lean_dec(v___x_42_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_56_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
uint8_t v___x_47_; 
v___x_47_ = lean_unbox(v_a_43_);
lean_dec(v_a_43_);
if (v___x_47_ == 0)
{
lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_48_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_48_, 0, v_a_8_);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 0, v___x_48_);
v___x_50_ = v___x_45_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_51_; 
v_reuseFailAlloc_51_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_51_, 0, v___x_48_);
v___x_50_ = v_reuseFailAlloc_51_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
return v___x_50_;
}
}
else
{
lean_object* v___x_52_; lean_object* v___x_54_; 
lean_dec(v_a_8_);
v___x_52_ = lean_box(0);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 0, v___x_52_);
v___x_54_ = v___x_45_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_55_; 
v_reuseFailAlloc_55_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_55_, 0, v___x_52_);
v___x_54_ = v_reuseFailAlloc_55_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
return v___x_54_;
}
}
}
}
else
{
lean_object* v_a_57_; lean_object* v___x_59_; uint8_t v_isShared_60_; uint8_t v_isSharedCheck_64_; 
lean_dec(v_a_8_);
v_a_57_ = lean_ctor_get(v___x_42_, 0);
v_isSharedCheck_64_ = !lean_is_exclusive(v___x_42_);
if (v_isSharedCheck_64_ == 0)
{
v___x_59_ = v___x_42_;
v_isShared_60_ = v_isSharedCheck_64_;
goto v_resetjp_58_;
}
else
{
lean_inc(v_a_57_);
lean_dec(v___x_42_);
v___x_59_ = lean_box(0);
v_isShared_60_ = v_isSharedCheck_64_;
goto v_resetjp_58_;
}
v_resetjp_58_:
{
lean_object* v___x_62_; 
if (v_isShared_60_ == 0)
{
v___x_62_ = v___x_59_;
goto v_reusejp_61_;
}
else
{
lean_object* v_reuseFailAlloc_63_; 
v_reuseFailAlloc_63_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_63_, 0, v_a_57_);
v___x_62_ = v_reuseFailAlloc_63_;
goto v_reusejp_61_;
}
v_reusejp_61_:
{
return v___x_62_;
}
}
}
}
else
{
lean_object* v___x_66_; 
lean_dec(v_a_8_);
if (v_isShared_39_ == 0)
{
v___x_66_ = v___x_38_;
goto v_reusejp_65_;
}
else
{
lean_object* v_reuseFailAlloc_67_; 
v_reuseFailAlloc_67_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_67_, 0, v_a_36_);
v___x_66_ = v_reuseFailAlloc_67_;
goto v_reusejp_65_;
}
v_reusejp_65_:
{
return v___x_66_;
}
}
}
else
{
lean_object* v___x_69_; 
lean_dec(v_a_8_);
if (v_isShared_39_ == 0)
{
v___x_69_ = v___x_38_;
goto v_reusejp_68_;
}
else
{
lean_object* v_reuseFailAlloc_70_; 
v_reuseFailAlloc_70_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_70_, 0, v_a_36_);
v___x_69_ = v_reuseFailAlloc_70_;
goto v_reusejp_68_;
}
v_reusejp_68_:
{
return v___x_69_;
}
}
}
}
}
else
{
lean_object* v___x_73_; 
lean_dec(v_a_8_);
if (v_isShared_23_ == 0)
{
v___x_73_ = v___x_22_;
goto v_reusejp_72_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v_a_20_);
v___x_73_ = v_reuseFailAlloc_74_;
goto v_reusejp_72_;
}
v_reusejp_72_:
{
return v___x_73_;
}
}
}
else
{
lean_object* v___x_76_; 
lean_dec(v_a_8_);
if (v_isShared_23_ == 0)
{
v___x_76_ = v___x_22_;
goto v_reusejp_75_;
}
else
{
lean_object* v_reuseFailAlloc_77_; 
v_reuseFailAlloc_77_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_77_, 0, v_a_20_);
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
else
{
lean_object* v_a_79_; lean_object* v___x_81_; uint8_t v_isShared_82_; uint8_t v_isSharedCheck_86_; 
v_a_79_ = lean_ctor_get(v___x_7_, 0);
v_isSharedCheck_86_ = !lean_is_exclusive(v___x_7_);
if (v_isSharedCheck_86_ == 0)
{
v___x_81_ = v___x_7_;
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
else
{
lean_inc(v_a_79_);
lean_dec(v___x_7_);
v___x_81_ = lean_box(0);
v_isShared_82_ = v_isSharedCheck_86_;
goto v_resetjp_80_;
}
v_resetjp_80_:
{
lean_object* v___x_84_; 
if (v_isShared_82_ == 0)
{
v___x_84_ = v___x_81_;
goto v_reusejp_83_;
}
else
{
lean_object* v_reuseFailAlloc_85_; 
v_reuseFailAlloc_85_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_85_, 0, v_a_79_);
v___x_84_ = v_reuseFailAlloc_85_;
goto v_reusejp_83_;
}
v_reusejp_83_:
{
return v___x_84_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrPre___boxed(lean_object* v_mvarId_87_, lean_object* v_a_88_, lean_object* v_a_89_, lean_object* v_a_90_, lean_object* v_a_91_, lean_object* v_a_92_){
_start:
{
lean_object* v_res_93_; 
v_res_93_ = l_Lean_MVarId_congrPre(v_mvarId_87_, v_a_88_, v_a_89_, v_a_90_, v_a_91_);
lean_dec(v_a_91_);
lean_dec_ref(v_a_90_);
lean_dec(v_a_89_);
lean_dec_ref(v_a_88_);
return v_res_93_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___redArg(lean_object* v_e_94_, lean_object* v___y_95_){
_start:
{
uint8_t v___x_97_; 
v___x_97_ = l_Lean_Expr_hasMVar(v_e_94_);
if (v___x_97_ == 0)
{
lean_object* v___x_98_; 
v___x_98_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_98_, 0, v_e_94_);
return v___x_98_;
}
else
{
lean_object* v___x_99_; lean_object* v_mctx_100_; lean_object* v___x_101_; lean_object* v_fst_102_; lean_object* v_snd_103_; lean_object* v___x_104_; lean_object* v_cache_105_; lean_object* v_zetaDeltaFVarIds_106_; lean_object* v_postponed_107_; lean_object* v_diag_108_; lean_object* v___x_110_; uint8_t v_isShared_111_; uint8_t v_isSharedCheck_117_; 
v___x_99_ = lean_st_ref_get(v___y_95_);
v_mctx_100_ = lean_ctor_get(v___x_99_, 0);
lean_inc_ref(v_mctx_100_);
lean_dec(v___x_99_);
v___x_101_ = l_Lean_instantiateMVarsCore(v_mctx_100_, v_e_94_);
v_fst_102_ = lean_ctor_get(v___x_101_, 0);
lean_inc(v_fst_102_);
v_snd_103_ = lean_ctor_get(v___x_101_, 1);
lean_inc(v_snd_103_);
lean_dec_ref(v___x_101_);
v___x_104_ = lean_st_ref_take(v___y_95_);
v_cache_105_ = lean_ctor_get(v___x_104_, 1);
v_zetaDeltaFVarIds_106_ = lean_ctor_get(v___x_104_, 2);
v_postponed_107_ = lean_ctor_get(v___x_104_, 3);
v_diag_108_ = lean_ctor_get(v___x_104_, 4);
v_isSharedCheck_117_ = !lean_is_exclusive(v___x_104_);
if (v_isSharedCheck_117_ == 0)
{
lean_object* v_unused_118_; 
v_unused_118_ = lean_ctor_get(v___x_104_, 0);
lean_dec(v_unused_118_);
v___x_110_ = v___x_104_;
v_isShared_111_ = v_isSharedCheck_117_;
goto v_resetjp_109_;
}
else
{
lean_inc(v_diag_108_);
lean_inc(v_postponed_107_);
lean_inc(v_zetaDeltaFVarIds_106_);
lean_inc(v_cache_105_);
lean_dec(v___x_104_);
v___x_110_ = lean_box(0);
v_isShared_111_ = v_isSharedCheck_117_;
goto v_resetjp_109_;
}
v_resetjp_109_:
{
lean_object* v___x_113_; 
if (v_isShared_111_ == 0)
{
lean_ctor_set(v___x_110_, 0, v_snd_103_);
v___x_113_ = v___x_110_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_snd_103_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v_cache_105_);
lean_ctor_set(v_reuseFailAlloc_116_, 2, v_zetaDeltaFVarIds_106_);
lean_ctor_set(v_reuseFailAlloc_116_, 3, v_postponed_107_);
lean_ctor_set(v_reuseFailAlloc_116_, 4, v_diag_108_);
v___x_113_ = v_reuseFailAlloc_116_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; 
v___x_114_ = lean_st_ref_put(v___y_95_, v___x_113_);
v___x_115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_115_, 0, v_fst_102_);
return v___x_115_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___redArg___boxed(lean_object* v_e_119_, lean_object* v___y_120_, lean_object* v___y_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___redArg(v_e_119_, v___y_120_);
lean_dec(v___y_120_);
return v_res_122_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0(lean_object* v_e_123_, lean_object* v___y_124_, lean_object* v___y_125_, lean_object* v___y_126_, lean_object* v___y_127_){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___redArg(v_e_123_, v___y_125_);
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___boxed(lean_object* v_e_130_, lean_object* v___y_131_, lean_object* v___y_132_, lean_object* v___y_133_, lean_object* v___y_134_, lean_object* v___y_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0(v_e_130_, v___y_131_, v___y_132_, v___y_133_, v___y_134_);
lean_dec(v___y_134_);
lean_dec_ref(v___y_133_);
lean_dec(v___y_132_);
lean_dec_ref(v___y_131_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg(lean_object* v_mvarId_137_, lean_object* v_x_138_, lean_object* v___y_139_, lean_object* v___y_140_, lean_object* v___y_141_, lean_object* v___y_142_){
_start:
{
lean_object* v___x_144_; 
v___x_144_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_137_, v_x_138_, v___y_139_, v___y_140_, v___y_141_, v___y_142_);
if (lean_obj_tag(v___x_144_) == 0)
{
lean_object* v_a_145_; lean_object* v___x_147_; uint8_t v_isShared_148_; uint8_t v_isSharedCheck_152_; 
v_a_145_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_152_ == 0)
{
v___x_147_ = v___x_144_;
v_isShared_148_ = v_isSharedCheck_152_;
goto v_resetjp_146_;
}
else
{
lean_inc(v_a_145_);
lean_dec(v___x_144_);
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
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 1, 0);
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
else
{
lean_object* v_a_153_; lean_object* v___x_155_; uint8_t v_isShared_156_; uint8_t v_isSharedCheck_160_; 
v_a_153_ = lean_ctor_get(v___x_144_, 0);
v_isSharedCheck_160_ = !lean_is_exclusive(v___x_144_);
if (v_isSharedCheck_160_ == 0)
{
v___x_155_ = v___x_144_;
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
else
{
lean_inc(v_a_153_);
lean_dec(v___x_144_);
v___x_155_ = lean_box(0);
v_isShared_156_ = v_isSharedCheck_160_;
goto v_resetjp_154_;
}
v_resetjp_154_:
{
lean_object* v___x_158_; 
if (v_isShared_156_ == 0)
{
v___x_158_ = v___x_155_;
goto v_reusejp_157_;
}
else
{
lean_object* v_reuseFailAlloc_159_; 
v_reuseFailAlloc_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_159_, 0, v_a_153_);
v___x_158_ = v_reuseFailAlloc_159_;
goto v_reusejp_157_;
}
v_reusejp_157_:
{
return v___x_158_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg___boxed(lean_object* v_mvarId_161_, lean_object* v_x_162_, lean_object* v___y_163_, lean_object* v___y_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_){
_start:
{
lean_object* v_res_168_; 
v_res_168_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg(v_mvarId_161_, v_x_162_, v___y_163_, v___y_164_, v___y_165_, v___y_166_);
lean_dec(v___y_166_);
lean_dec_ref(v___y_165_);
lean_dec(v___y_164_);
lean_dec_ref(v___y_163_);
return v_res_168_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2(lean_object* v_00_u03b1_169_, lean_object* v_mvarId_170_, lean_object* v_x_171_, lean_object* v___y_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v___x_177_; 
v___x_177_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg(v_mvarId_170_, v_x_171_, v___y_172_, v___y_173_, v___y_174_, v___y_175_);
return v___x_177_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___boxed(lean_object* v_00_u03b1_178_, lean_object* v_mvarId_179_, lean_object* v_x_180_, lean_object* v___y_181_, lean_object* v___y_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_){
_start:
{
lean_object* v_res_186_; 
v_res_186_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2(v_00_u03b1_178_, v_mvarId_179_, v_x_180_, v___y_181_, v___y_182_, v___y_183_, v___y_184_);
lean_dec(v___y_184_);
lean_dec_ref(v___y_183_);
lean_dec(v___y_182_);
lean_dec_ref(v___y_181_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(lean_object* v_x_187_, lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
lean_object* v_ks_191_; lean_object* v_vs_192_; lean_object* v___x_194_; uint8_t v_isShared_195_; uint8_t v_isSharedCheck_216_; 
v_ks_191_ = lean_ctor_get(v_x_187_, 0);
v_vs_192_ = lean_ctor_get(v_x_187_, 1);
v_isSharedCheck_216_ = !lean_is_exclusive(v_x_187_);
if (v_isSharedCheck_216_ == 0)
{
v___x_194_ = v_x_187_;
v_isShared_195_ = v_isSharedCheck_216_;
goto v_resetjp_193_;
}
else
{
lean_inc(v_vs_192_);
lean_inc(v_ks_191_);
lean_dec(v_x_187_);
v___x_194_ = lean_box(0);
v_isShared_195_ = v_isSharedCheck_216_;
goto v_resetjp_193_;
}
v_resetjp_193_:
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = lean_array_get_size(v_ks_191_);
v___x_197_ = lean_nat_dec_lt(v_x_188_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_201_; 
lean_dec(v_x_188_);
v___x_198_ = lean_array_push(v_ks_191_, v_x_189_);
v___x_199_ = lean_array_push(v_vs_192_, v_x_190_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 1, v___x_199_);
lean_ctor_set(v___x_194_, 0, v___x_198_);
v___x_201_ = v___x_194_;
goto v_reusejp_200_;
}
else
{
lean_object* v_reuseFailAlloc_202_; 
v_reuseFailAlloc_202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_202_, 0, v___x_198_);
lean_ctor_set(v_reuseFailAlloc_202_, 1, v___x_199_);
v___x_201_ = v_reuseFailAlloc_202_;
goto v_reusejp_200_;
}
v_reusejp_200_:
{
return v___x_201_;
}
}
else
{
lean_object* v_k_x27_203_; uint8_t v___x_204_; 
v_k_x27_203_ = lean_array_fget_borrowed(v_ks_191_, v_x_188_);
v___x_204_ = l_Lean_instBEqMVarId_beq(v_x_189_, v_k_x27_203_);
if (v___x_204_ == 0)
{
lean_object* v___x_206_; 
if (v_isShared_195_ == 0)
{
v___x_206_ = v___x_194_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_210_; 
v_reuseFailAlloc_210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_210_, 0, v_ks_191_);
lean_ctor_set(v_reuseFailAlloc_210_, 1, v_vs_192_);
v___x_206_ = v_reuseFailAlloc_210_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; lean_object* v___x_208_; 
v___x_207_ = lean_unsigned_to_nat(1u);
v___x_208_ = lean_nat_add(v_x_188_, v___x_207_);
lean_dec(v_x_188_);
v_x_187_ = v___x_206_;
v_x_188_ = v___x_208_;
goto _start;
}
}
else
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_214_; 
v___x_211_ = lean_array_fset(v_ks_191_, v_x_188_, v_x_189_);
v___x_212_ = lean_array_fset(v_vs_192_, v_x_188_, v_x_190_);
lean_dec(v_x_188_);
if (v_isShared_195_ == 0)
{
lean_ctor_set(v___x_194_, 1, v___x_212_);
lean_ctor_set(v___x_194_, 0, v___x_211_);
v___x_214_ = v___x_194_;
goto v_reusejp_213_;
}
else
{
lean_object* v_reuseFailAlloc_215_; 
v_reuseFailAlloc_215_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_215_, 0, v___x_211_);
lean_ctor_set(v_reuseFailAlloc_215_, 1, v___x_212_);
v___x_214_ = v_reuseFailAlloc_215_;
goto v_reusejp_213_;
}
v_reusejp_213_:
{
return v___x_214_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4___redArg(lean_object* v_n_217_, lean_object* v_k_218_, lean_object* v_v_219_){
_start:
{
lean_object* v___x_220_; lean_object* v___x_221_; 
v___x_220_ = lean_unsigned_to_nat(0u);
v___x_221_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_n_217_, v___x_220_, v_k_218_, v_v_219_);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg(lean_object* v_x_223_, size_t v_x_224_, size_t v_x_225_, lean_object* v_x_226_, lean_object* v_x_227_){
_start:
{
if (lean_obj_tag(v_x_223_) == 0)
{
lean_object* v_es_228_; size_t v___x_229_; size_t v___x_230_; lean_object* v_j_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v_es_228_ = lean_ctor_get(v_x_223_, 0);
v___x_229_ = ((size_t)31ULL);
v___x_230_ = lean_usize_land(v_x_224_, v___x_229_);
v_j_231_ = lean_usize_to_nat(v___x_230_);
v___x_232_ = lean_array_get_size(v_es_228_);
v___x_233_ = lean_nat_dec_lt(v_j_231_, v___x_232_);
if (v___x_233_ == 0)
{
lean_dec(v_j_231_);
lean_dec(v_x_227_);
lean_dec(v_x_226_);
return v_x_223_;
}
else
{
lean_object* v___x_235_; uint8_t v_isShared_236_; uint8_t v_isSharedCheck_272_; 
lean_inc_ref(v_es_228_);
v_isSharedCheck_272_ = !lean_is_exclusive(v_x_223_);
if (v_isSharedCheck_272_ == 0)
{
lean_object* v_unused_273_; 
v_unused_273_ = lean_ctor_get(v_x_223_, 0);
lean_dec(v_unused_273_);
v___x_235_ = v_x_223_;
v_isShared_236_ = v_isSharedCheck_272_;
goto v_resetjp_234_;
}
else
{
lean_dec(v_x_223_);
v___x_235_ = lean_box(0);
v_isShared_236_ = v_isSharedCheck_272_;
goto v_resetjp_234_;
}
v_resetjp_234_:
{
lean_object* v_v_237_; lean_object* v___x_238_; lean_object* v_xs_x27_239_; lean_object* v___y_241_; 
v_v_237_ = lean_array_fget(v_es_228_, v_j_231_);
v___x_238_ = lean_box(0);
v_xs_x27_239_ = lean_array_fset(v_es_228_, v_j_231_, v___x_238_);
switch(lean_obj_tag(v_v_237_))
{
case 0:
{
lean_object* v_key_246_; lean_object* v_val_247_; lean_object* v___x_249_; uint8_t v_isShared_250_; uint8_t v_isSharedCheck_257_; 
v_key_246_ = lean_ctor_get(v_v_237_, 0);
v_val_247_ = lean_ctor_get(v_v_237_, 1);
v_isSharedCheck_257_ = !lean_is_exclusive(v_v_237_);
if (v_isSharedCheck_257_ == 0)
{
v___x_249_ = v_v_237_;
v_isShared_250_ = v_isSharedCheck_257_;
goto v_resetjp_248_;
}
else
{
lean_inc(v_val_247_);
lean_inc(v_key_246_);
lean_dec(v_v_237_);
v___x_249_ = lean_box(0);
v_isShared_250_ = v_isSharedCheck_257_;
goto v_resetjp_248_;
}
v_resetjp_248_:
{
uint8_t v___x_251_; 
v___x_251_ = l_Lean_instBEqMVarId_beq(v_x_226_, v_key_246_);
if (v___x_251_ == 0)
{
lean_object* v___x_252_; lean_object* v___x_253_; 
lean_del_object(v___x_249_);
v___x_252_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_246_, v_val_247_, v_x_226_, v_x_227_);
v___x_253_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_253_, 0, v___x_252_);
v___y_241_ = v___x_253_;
goto v___jp_240_;
}
else
{
lean_object* v___x_255_; 
lean_dec(v_val_247_);
lean_dec(v_key_246_);
if (v_isShared_250_ == 0)
{
lean_ctor_set(v___x_249_, 1, v_x_227_);
lean_ctor_set(v___x_249_, 0, v_x_226_);
v___x_255_ = v___x_249_;
goto v_reusejp_254_;
}
else
{
lean_object* v_reuseFailAlloc_256_; 
v_reuseFailAlloc_256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_256_, 0, v_x_226_);
lean_ctor_set(v_reuseFailAlloc_256_, 1, v_x_227_);
v___x_255_ = v_reuseFailAlloc_256_;
goto v_reusejp_254_;
}
v_reusejp_254_:
{
v___y_241_ = v___x_255_;
goto v___jp_240_;
}
}
}
}
case 1:
{
lean_object* v_node_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_270_; 
v_node_258_ = lean_ctor_get(v_v_237_, 0);
v_isSharedCheck_270_ = !lean_is_exclusive(v_v_237_);
if (v_isSharedCheck_270_ == 0)
{
v___x_260_ = v_v_237_;
v_isShared_261_ = v_isSharedCheck_270_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_node_258_);
lean_dec(v_v_237_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_270_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; size_t v___x_265_; lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_262_ = ((size_t)5ULL);
v___x_263_ = lean_usize_shift_right(v_x_224_, v___x_262_);
v___x_264_ = ((size_t)1ULL);
v___x_265_ = lean_usize_add(v_x_225_, v___x_264_);
v___x_266_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg(v_node_258_, v___x_263_, v___x_265_, v_x_226_, v_x_227_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 0, v___x_266_);
v___x_268_ = v___x_260_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_269_; 
v_reuseFailAlloc_269_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_269_, 0, v___x_266_);
v___x_268_ = v_reuseFailAlloc_269_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
v___y_241_ = v___x_268_;
goto v___jp_240_;
}
}
}
default: 
{
lean_object* v___x_271_; 
v___x_271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_271_, 0, v_x_226_);
lean_ctor_set(v___x_271_, 1, v_x_227_);
v___y_241_ = v___x_271_;
goto v___jp_240_;
}
}
v___jp_240_:
{
lean_object* v___x_242_; lean_object* v___x_244_; 
v___x_242_ = lean_array_fset(v_xs_x27_239_, v_j_231_, v___y_241_);
lean_dec(v_j_231_);
if (v_isShared_236_ == 0)
{
lean_ctor_set(v___x_235_, 0, v___x_242_);
v___x_244_ = v___x_235_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_242_);
v___x_244_ = v_reuseFailAlloc_245_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
return v___x_244_;
}
}
}
}
}
else
{
lean_object* v_ks_274_; lean_object* v_vs_275_; lean_object* v___x_277_; uint8_t v_isShared_278_; uint8_t v_isSharedCheck_293_; 
v_ks_274_ = lean_ctor_get(v_x_223_, 0);
v_vs_275_ = lean_ctor_get(v_x_223_, 1);
v_isSharedCheck_293_ = !lean_is_exclusive(v_x_223_);
if (v_isSharedCheck_293_ == 0)
{
v___x_277_ = v_x_223_;
v_isShared_278_ = v_isSharedCheck_293_;
goto v_resetjp_276_;
}
else
{
lean_inc(v_vs_275_);
lean_inc(v_ks_274_);
lean_dec(v_x_223_);
v___x_277_ = lean_box(0);
v_isShared_278_ = v_isSharedCheck_293_;
goto v_resetjp_276_;
}
v_resetjp_276_:
{
lean_object* v___x_280_; 
if (v_isShared_278_ == 0)
{
v___x_280_ = v___x_277_;
goto v_reusejp_279_;
}
else
{
lean_object* v_reuseFailAlloc_292_; 
v_reuseFailAlloc_292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_292_, 0, v_ks_274_);
lean_ctor_set(v_reuseFailAlloc_292_, 1, v_vs_275_);
v___x_280_ = v_reuseFailAlloc_292_;
goto v_reusejp_279_;
}
v_reusejp_279_:
{
lean_object* v_newNode_281_; size_t v___x_282_; uint8_t v___x_283_; 
v_newNode_281_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4___redArg(v___x_280_, v_x_226_, v_x_227_);
v___x_282_ = ((size_t)7ULL);
v___x_283_ = lean_usize_dec_le(v___x_282_, v_x_225_);
if (v___x_283_ == 0)
{
lean_object* v___x_284_; lean_object* v___x_285_; uint8_t v___x_286_; 
v___x_284_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_281_);
v___x_285_ = lean_unsigned_to_nat(4u);
v___x_286_ = lean_nat_dec_lt(v___x_284_, v___x_285_);
lean_dec(v___x_284_);
if (v___x_286_ == 0)
{
lean_object* v_ks_287_; lean_object* v_vs_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; 
v_ks_287_ = lean_ctor_get(v_newNode_281_, 0);
lean_inc_ref(v_ks_287_);
v_vs_288_ = lean_ctor_get(v_newNode_281_, 1);
lean_inc_ref(v_vs_288_);
lean_dec_ref(v_newNode_281_);
v___x_289_ = lean_unsigned_to_nat(0u);
v___x_290_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___closed__0);
v___x_291_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___redArg(v_x_225_, v_ks_287_, v_vs_288_, v___x_289_, v___x_290_);
lean_dec_ref(v_vs_288_);
lean_dec_ref(v_ks_287_);
return v___x_291_;
}
else
{
return v_newNode_281_;
}
}
else
{
return v_newNode_281_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___redArg(size_t v_depth_294_, lean_object* v_keys_295_, lean_object* v_vals_296_, lean_object* v_i_297_, lean_object* v_entries_298_){
_start:
{
lean_object* v___x_299_; uint8_t v___x_300_; 
v___x_299_ = lean_array_get_size(v_keys_295_);
v___x_300_ = lean_nat_dec_lt(v_i_297_, v___x_299_);
if (v___x_300_ == 0)
{
lean_dec(v_i_297_);
return v_entries_298_;
}
else
{
lean_object* v_k_301_; lean_object* v_v_302_; uint64_t v___x_303_; size_t v_h_304_; size_t v___x_305_; lean_object* v___x_306_; size_t v___x_307_; size_t v___x_308_; size_t v___x_309_; size_t v_h_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v_k_301_ = lean_array_fget_borrowed(v_keys_295_, v_i_297_);
v_v_302_ = lean_array_fget_borrowed(v_vals_296_, v_i_297_);
v___x_303_ = l_Lean_instHashableMVarId_hash(v_k_301_);
v_h_304_ = lean_uint64_to_usize(v___x_303_);
v___x_305_ = ((size_t)5ULL);
v___x_306_ = lean_unsigned_to_nat(1u);
v___x_307_ = ((size_t)1ULL);
v___x_308_ = lean_usize_sub(v_depth_294_, v___x_307_);
v___x_309_ = lean_usize_mul(v___x_305_, v___x_308_);
v_h_310_ = lean_usize_shift_right(v_h_304_, v___x_309_);
v___x_311_ = lean_nat_add(v_i_297_, v___x_306_);
lean_dec(v_i_297_);
lean_inc(v_v_302_);
lean_inc(v_k_301_);
v___x_312_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg(v_entries_298_, v_h_310_, v_depth_294_, v_k_301_, v_v_302_);
v_i_297_ = v___x_311_;
v_entries_298_ = v___x_312_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___redArg___boxed(lean_object* v_depth_314_, lean_object* v_keys_315_, lean_object* v_vals_316_, lean_object* v_i_317_, lean_object* v_entries_318_){
_start:
{
size_t v_depth_boxed_319_; lean_object* v_res_320_; 
v_depth_boxed_319_ = lean_unbox_usize(v_depth_314_);
lean_dec(v_depth_314_);
v_res_320_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_boxed_319_, v_keys_315_, v_vals_316_, v_i_317_, v_entries_318_);
lean_dec_ref(v_vals_316_);
lean_dec_ref(v_keys_315_);
return v_res_320_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg___boxed(lean_object* v_x_321_, lean_object* v_x_322_, lean_object* v_x_323_, lean_object* v_x_324_, lean_object* v_x_325_){
_start:
{
size_t v_x_5021__boxed_326_; size_t v_x_5022__boxed_327_; lean_object* v_res_328_; 
v_x_5021__boxed_326_ = lean_unbox_usize(v_x_322_);
lean_dec(v_x_322_);
v_x_5022__boxed_327_ = lean_unbox_usize(v_x_323_);
lean_dec(v_x_323_);
v_res_328_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg(v_x_321_, v_x_5021__boxed_326_, v_x_5022__boxed_327_, v_x_324_, v_x_325_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1___redArg(lean_object* v_x_329_, lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
uint64_t v___x_332_; size_t v___x_333_; size_t v___x_334_; lean_object* v___x_335_; 
v___x_332_ = l_Lean_instHashableMVarId_hash(v_x_330_);
v___x_333_ = lean_uint64_to_usize(v___x_332_);
v___x_334_ = ((size_t)1ULL);
v___x_335_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg(v_x_329_, v___x_333_, v___x_334_, v_x_330_, v_x_331_);
return v___x_335_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___redArg(lean_object* v_mvarId_336_, lean_object* v_val_337_, lean_object* v___y_338_){
_start:
{
lean_object* v___x_340_; lean_object* v_mctx_341_; lean_object* v_cache_342_; lean_object* v_zetaDeltaFVarIds_343_; lean_object* v_postponed_344_; lean_object* v_diag_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_374_; 
v___x_340_ = lean_st_ref_take(v___y_338_);
v_mctx_341_ = lean_ctor_get(v___x_340_, 0);
v_cache_342_ = lean_ctor_get(v___x_340_, 1);
v_zetaDeltaFVarIds_343_ = lean_ctor_get(v___x_340_, 2);
v_postponed_344_ = lean_ctor_get(v___x_340_, 3);
v_diag_345_ = lean_ctor_get(v___x_340_, 4);
v_isSharedCheck_374_ = !lean_is_exclusive(v___x_340_);
if (v_isSharedCheck_374_ == 0)
{
v___x_347_ = v___x_340_;
v_isShared_348_ = v_isSharedCheck_374_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_diag_345_);
lean_inc(v_postponed_344_);
lean_inc(v_zetaDeltaFVarIds_343_);
lean_inc(v_cache_342_);
lean_inc(v_mctx_341_);
lean_dec(v___x_340_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_374_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v_depth_349_; lean_object* v_levelAssignDepth_350_; lean_object* v_lmvarCounter_351_; lean_object* v_mvarCounter_352_; lean_object* v_lDecls_353_; lean_object* v_decls_354_; lean_object* v_userNames_355_; lean_object* v_lAssignment_356_; lean_object* v_eAssignment_357_; lean_object* v_dAssignment_358_; lean_object* v_instanceTypedMVars_359_; lean_object* v___x_361_; uint8_t v_isShared_362_; uint8_t v_isSharedCheck_373_; 
v_depth_349_ = lean_ctor_get(v_mctx_341_, 0);
v_levelAssignDepth_350_ = lean_ctor_get(v_mctx_341_, 1);
v_lmvarCounter_351_ = lean_ctor_get(v_mctx_341_, 2);
v_mvarCounter_352_ = lean_ctor_get(v_mctx_341_, 3);
v_lDecls_353_ = lean_ctor_get(v_mctx_341_, 4);
v_decls_354_ = lean_ctor_get(v_mctx_341_, 5);
v_userNames_355_ = lean_ctor_get(v_mctx_341_, 6);
v_lAssignment_356_ = lean_ctor_get(v_mctx_341_, 7);
v_eAssignment_357_ = lean_ctor_get(v_mctx_341_, 8);
v_dAssignment_358_ = lean_ctor_get(v_mctx_341_, 9);
v_instanceTypedMVars_359_ = lean_ctor_get(v_mctx_341_, 10);
v_isSharedCheck_373_ = !lean_is_exclusive(v_mctx_341_);
if (v_isSharedCheck_373_ == 0)
{
v___x_361_ = v_mctx_341_;
v_isShared_362_ = v_isSharedCheck_373_;
goto v_resetjp_360_;
}
else
{
lean_inc(v_instanceTypedMVars_359_);
lean_inc(v_dAssignment_358_);
lean_inc(v_eAssignment_357_);
lean_inc(v_lAssignment_356_);
lean_inc(v_userNames_355_);
lean_inc(v_decls_354_);
lean_inc(v_lDecls_353_);
lean_inc(v_mvarCounter_352_);
lean_inc(v_lmvarCounter_351_);
lean_inc(v_levelAssignDepth_350_);
lean_inc(v_depth_349_);
lean_dec(v_mctx_341_);
v___x_361_ = lean_box(0);
v_isShared_362_ = v_isSharedCheck_373_;
goto v_resetjp_360_;
}
v_resetjp_360_:
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_363_ = lean_box(0);
v___x_364_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1___redArg(v_eAssignment_357_, v_mvarId_336_, v_val_337_);
if (v_isShared_362_ == 0)
{
lean_ctor_set(v___x_361_, 8, v___x_364_);
v___x_366_ = v___x_361_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v_depth_349_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v_levelAssignDepth_350_);
lean_ctor_set(v_reuseFailAlloc_372_, 2, v_lmvarCounter_351_);
lean_ctor_set(v_reuseFailAlloc_372_, 3, v_mvarCounter_352_);
lean_ctor_set(v_reuseFailAlloc_372_, 4, v_lDecls_353_);
lean_ctor_set(v_reuseFailAlloc_372_, 5, v_decls_354_);
lean_ctor_set(v_reuseFailAlloc_372_, 6, v_userNames_355_);
lean_ctor_set(v_reuseFailAlloc_372_, 7, v_lAssignment_356_);
lean_ctor_set(v_reuseFailAlloc_372_, 8, v___x_364_);
lean_ctor_set(v_reuseFailAlloc_372_, 9, v_dAssignment_358_);
lean_ctor_set(v_reuseFailAlloc_372_, 10, v_instanceTypedMVars_359_);
v___x_366_ = v_reuseFailAlloc_372_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
lean_object* v___x_368_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 0, v___x_366_);
v___x_368_ = v___x_347_;
goto v_reusejp_367_;
}
else
{
lean_object* v_reuseFailAlloc_371_; 
v_reuseFailAlloc_371_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_371_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_371_, 1, v_cache_342_);
lean_ctor_set(v_reuseFailAlloc_371_, 2, v_zetaDeltaFVarIds_343_);
lean_ctor_set(v_reuseFailAlloc_371_, 3, v_postponed_344_);
lean_ctor_set(v_reuseFailAlloc_371_, 4, v_diag_345_);
v___x_368_ = v_reuseFailAlloc_371_;
goto v_reusejp_367_;
}
v_reusejp_367_:
{
lean_object* v___x_369_; lean_object* v___x_370_; 
v___x_369_ = lean_st_ref_put(v___y_338_, v___x_368_);
v___x_370_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_370_, 0, v___x_363_);
return v___x_370_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___redArg___boxed(lean_object* v_mvarId_375_, lean_object* v_val_376_, lean_object* v___y_377_, lean_object* v___y_378_){
_start:
{
lean_object* v_res_379_; 
v_res_379_ = l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___redArg(v_mvarId_375_, v_val_376_, v___y_377_);
lean_dec(v___y_377_);
return v_res_379_;
}
}
static lean_object* _init_l_Lean_MVarId_decisionCongr___lam__0___closed__6(void){
_start:
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; 
v___x_390_ = lean_box(0);
v___x_391_ = ((lean_object*)(l_Lean_MVarId_decisionCongr___lam__0___closed__4));
v___x_392_ = l_Lean_mkConst(v___x_391_, v___x_390_);
return v___x_392_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr___lam__0(lean_object* v_mvarId_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_, lean_object* v___y_397_){
_start:
{
lean_object* v___x_399_; 
lean_inc(v_mvarId_393_);
v___x_399_ = l_Lean_MVarId_getType(v_mvarId_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v_a_400_; lean_object* v___x_401_; lean_object* v_a_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_583_; 
v_a_400_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_a_400_);
lean_dec_ref_known(v___x_399_, 1);
v___x_401_ = l_Lean_instantiateMVars___at___00Lean_MVarId_decisionCongr_spec__0___redArg(v_a_400_, v___y_395_);
v_a_402_ = lean_ctor_get(v___x_401_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_401_);
if (v_isSharedCheck_583_ == 0)
{
v___x_404_ = v___x_401_;
v_isShared_405_ = v_isSharedCheck_583_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_a_402_);
lean_dec(v___x_401_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_583_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v___x_406_; lean_object* v___x_407_; uint8_t v___x_408_; 
v___x_406_ = l_Lean_Expr_cleanupAnnotations(v_a_402_);
lean_dec(v_a_402_);
v___x_407_ = l_Lean_Expr_cleanupAnnotations(v___x_406_);
lean_dec_ref(v___x_406_);
v___x_408_ = l_Lean_Expr_isApp(v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_410_; 
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_410_ = v___x_404_;
goto v_reusejp_409_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_mvarId_393_);
v___x_410_ = v_reuseFailAlloc_411_;
goto v_reusejp_409_;
}
v_reusejp_409_:
{
return v___x_410_;
}
}
else
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = l_Lean_Expr_appFnCleanup___redArg(v___x_407_);
v___x_413_ = l_Lean_Expr_isApp(v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_415_; 
lean_dec_ref(v___x_412_);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_415_ = v___x_404_;
goto v_reusejp_414_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v_mvarId_393_);
v___x_415_ = v_reuseFailAlloc_416_;
goto v_reusejp_414_;
}
v_reusejp_414_:
{
return v___x_415_;
}
}
else
{
lean_object* v___x_417_; uint8_t v___x_418_; 
v___x_417_ = l_Lean_Expr_appFnCleanup___redArg(v___x_412_);
v___x_418_ = l_Lean_Expr_isApp(v___x_417_);
if (v___x_418_ == 0)
{
lean_object* v___x_420_; 
lean_dec_ref(v___x_417_);
lean_dec_ref(v___x_412_);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_420_ = v___x_404_;
goto v_reusejp_419_;
}
else
{
lean_object* v_reuseFailAlloc_421_; 
v_reuseFailAlloc_421_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_421_, 0, v_mvarId_393_);
v___x_420_ = v_reuseFailAlloc_421_;
goto v_reusejp_419_;
}
v_reusejp_419_:
{
return v___x_420_;
}
}
else
{
lean_object* v___x_422_; lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_422_ = l_Lean_Expr_appFnCleanup___redArg(v___x_417_);
lean_dec_ref(v___x_417_);
v___x_423_ = ((lean_object*)(l_Lean_MVarId_decisionCongr___lam__0___closed__1));
v___x_424_ = l_Lean_Expr_isConstOf(v___x_422_, v___x_423_);
lean_dec_ref(v___x_422_);
if (v___x_424_ == 0)
{
lean_object* v___x_426_; 
lean_dec_ref(v___x_412_);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_426_ = v___x_404_;
goto v_reusejp_425_;
}
else
{
lean_object* v_reuseFailAlloc_427_; 
v_reuseFailAlloc_427_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_427_, 0, v_mvarId_393_);
v___x_426_ = v_reuseFailAlloc_427_;
goto v_reusejp_425_;
}
v_reusejp_425_:
{
return v___x_426_;
}
}
else
{
lean_object* v_arg_428_; lean_object* v___x_429_; 
v_arg_428_ = lean_ctor_get(v___x_412_, 1);
lean_inc_ref(v_arg_428_);
lean_dec_ref(v___x_412_);
v___x_429_ = l_Lean_Expr_cleanupAnnotations(v_arg_428_);
lean_dec_ref(v_arg_428_);
if (lean_obj_tag(v___x_429_) == 11)
{
lean_object* v_typeName_430_; 
v_typeName_430_ = lean_ctor_get(v___x_429_, 0);
lean_inc(v_typeName_430_);
if (lean_obj_tag(v_typeName_430_) == 1)
{
lean_object* v_pre_431_; 
v_pre_431_ = lean_ctor_get(v_typeName_430_, 0);
if (lean_obj_tag(v_pre_431_) == 0)
{
lean_object* v_idx_432_; lean_object* v_struct_433_; lean_object* v_str_434_; lean_object* v___x_435_; uint8_t v___x_436_; 
v_idx_432_ = lean_ctor_get(v___x_429_, 1);
lean_inc(v_idx_432_);
v_struct_433_ = lean_ctor_get(v___x_429_, 2);
lean_inc_ref(v_struct_433_);
lean_dec_ref_known(v___x_429_, 3);
v_str_434_ = lean_ctor_get(v_typeName_430_, 1);
lean_inc_ref(v_str_434_);
lean_dec_ref_known(v_typeName_430_, 2);
v___x_435_ = ((lean_object*)(l_Lean_MVarId_decisionCongr___lam__0___closed__2));
v___x_436_ = lean_string_dec_eq(v_str_434_, v___x_435_);
lean_dec_ref(v_str_434_);
if (v___x_436_ == 0)
{
lean_object* v___x_438_; 
lean_dec_ref(v_struct_433_);
lean_dec(v_idx_432_);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_438_ = v___x_404_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_439_; 
v_reuseFailAlloc_439_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_439_, 0, v_mvarId_393_);
v___x_438_ = v_reuseFailAlloc_439_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
return v___x_438_;
}
}
else
{
lean_object* v___x_440_; uint8_t v___x_441_; 
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_nat_dec_eq(v_idx_432_, v___x_440_);
lean_dec(v_idx_432_);
if (v___x_441_ == 0)
{
lean_object* v___x_443_; 
lean_dec_ref(v_struct_433_);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_443_ = v___x_404_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_444_; 
v_reuseFailAlloc_444_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_444_, 0, v_mvarId_393_);
v___x_443_ = v_reuseFailAlloc_444_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
return v___x_443_;
}
}
else
{
lean_object* v_arg_445_; lean_object* v___x_446_; 
v_arg_445_ = lean_ctor_get(v___x_407_, 1);
lean_inc_ref(v_arg_445_);
lean_dec_ref(v___x_407_);
v___x_446_ = l_Lean_Expr_cleanupAnnotations(v_arg_445_);
lean_dec_ref(v_arg_445_);
if (lean_obj_tag(v___x_446_) == 11)
{
lean_object* v_typeName_447_; 
v_typeName_447_ = lean_ctor_get(v___x_446_, 0);
lean_inc(v_typeName_447_);
if (lean_obj_tag(v_typeName_447_) == 1)
{
lean_object* v_pre_448_; 
v_pre_448_ = lean_ctor_get(v_typeName_447_, 0);
if (lean_obj_tag(v_pre_448_) == 0)
{
lean_object* v_idx_449_; lean_object* v_struct_450_; lean_object* v_str_451_; uint8_t v___x_452_; 
v_idx_449_ = lean_ctor_get(v___x_446_, 1);
lean_inc(v_idx_449_);
v_struct_450_ = lean_ctor_get(v___x_446_, 2);
lean_inc_ref(v_struct_450_);
lean_dec_ref_known(v___x_446_, 3);
v_str_451_ = lean_ctor_get(v_typeName_447_, 1);
lean_inc_ref(v_str_451_);
lean_dec_ref_known(v_typeName_447_, 2);
v___x_452_ = lean_string_dec_eq(v_str_451_, v___x_435_);
lean_dec_ref(v_str_451_);
if (v___x_452_ == 0)
{
lean_object* v___x_454_; 
lean_dec_ref(v_struct_450_);
lean_dec(v_idx_449_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_454_ = v___x_404_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_455_; 
v_reuseFailAlloc_455_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_455_, 0, v_mvarId_393_);
v___x_454_ = v_reuseFailAlloc_455_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
return v___x_454_;
}
}
else
{
uint8_t v___x_456_; 
v___x_456_ = lean_nat_dec_eq(v_idx_449_, v___x_440_);
lean_dec(v_idx_449_);
if (v___x_456_ == 0)
{
lean_object* v___x_458_; 
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_458_ = v___x_404_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_459_; 
v_reuseFailAlloc_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_459_, 0, v_mvarId_393_);
v___x_458_ = v_reuseFailAlloc_459_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
return v___x_458_;
}
}
else
{
lean_object* v___x_460_; lean_object* v_env_461_; lean_object* v___x_462_; uint8_t v___x_463_; 
v___x_460_ = lean_st_ref_get(v___y_397_);
v_env_461_ = lean_ctor_get(v___x_460_, 0);
lean_inc_ref(v_env_461_);
lean_dec(v___x_460_);
v___x_462_ = ((lean_object*)(l_Lean_MVarId_decisionCongr___lam__0___closed__4));
v___x_463_ = l_Lean_Environment_contains(v_env_461_, v___x_462_, v___x_424_);
if (v___x_463_ == 0)
{
lean_object* v___x_465_; 
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_465_ = v___x_404_;
goto v_reusejp_464_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_mvarId_393_);
v___x_465_ = v_reuseFailAlloc_466_;
goto v_reusejp_464_;
}
v_reusejp_464_:
{
return v___x_465_;
}
}
else
{
lean_object* v___x_467_; 
lean_del_object(v___x_404_);
lean_inc(v___y_397_);
lean_inc_ref(v___y_396_);
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
lean_inc_ref(v_struct_433_);
v___x_467_ = lean_infer_type(v_struct_433_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_467_) == 0)
{
lean_object* v_a_468_; lean_object* v___x_469_; 
v_a_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_a_468_);
lean_dec_ref_known(v___x_467_, 1);
v___x_469_ = l_Lean_Meta_whnfR(v_a_468_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v_a_470_; lean_object* v___x_471_; 
v_a_470_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_470_);
lean_dec_ref_known(v___x_469_, 1);
lean_inc(v___y_397_);
lean_inc_ref(v___y_396_);
lean_inc(v___y_395_);
lean_inc_ref(v___y_394_);
lean_inc_ref(v_struct_450_);
v___x_471_ = lean_infer_type(v_struct_450_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_471_) == 0)
{
lean_object* v_a_472_; lean_object* v___x_473_; 
v_a_472_ = lean_ctor_get(v___x_471_, 0);
lean_inc(v_a_472_);
lean_dec_ref_known(v___x_471_, 1);
v___x_473_ = l_Lean_Meta_whnfR(v_a_472_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_473_) == 0)
{
lean_object* v_a_474_; lean_object* v___x_476_; uint8_t v_isShared_477_; uint8_t v_isSharedCheck_532_; 
v_a_474_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_532_ == 0)
{
v___x_476_ = v___x_473_;
v_isShared_477_ = v_isSharedCheck_532_;
goto v_resetjp_475_;
}
else
{
lean_inc(v_a_474_);
lean_dec(v___x_473_);
v___x_476_ = lean_box(0);
v_isShared_477_ = v_isSharedCheck_532_;
goto v_resetjp_475_;
}
v_resetjp_475_:
{
lean_object* v___x_478_; lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_478_ = ((lean_object*)(l_Lean_MVarId_decisionCongr___lam__0___closed__5));
v___x_479_ = lean_unsigned_to_nat(1u);
v___x_480_ = l_Lean_Expr_isAppOfArity(v_a_470_, v___x_478_, v___x_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_482_; 
lean_dec(v_a_474_);
lean_dec(v_a_470_);
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v_mvarId_393_);
v___x_482_ = v___x_476_;
goto v_reusejp_481_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v_mvarId_393_);
v___x_482_ = v_reuseFailAlloc_483_;
goto v_reusejp_481_;
}
v_reusejp_481_:
{
return v___x_482_;
}
}
else
{
uint8_t v___x_484_; 
v___x_484_ = l_Lean_Expr_isAppOfArity(v_a_474_, v___x_478_, v___x_479_);
if (v___x_484_ == 0)
{
lean_object* v___x_486_; 
lean_dec(v_a_474_);
lean_dec(v_a_470_);
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_477_ == 0)
{
lean_ctor_set(v___x_476_, 0, v_mvarId_393_);
v___x_486_ = v___x_476_;
goto v_reusejp_485_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_mvarId_393_);
v___x_486_ = v_reuseFailAlloc_487_;
goto v_reusejp_485_;
}
v_reusejp_485_:
{
return v___x_486_;
}
}
else
{
lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; 
lean_del_object(v___x_476_);
v___x_488_ = l_Lean_Expr_appArg_x21(v_a_470_);
lean_dec(v_a_470_);
v___x_489_ = l_Lean_Expr_appArg_x21(v_a_474_);
lean_dec(v_a_474_);
lean_inc_ref(v___x_489_);
lean_inc_ref(v___x_488_);
v___x_490_ = l_Lean_Meta_mkEq(v___x_488_, v___x_489_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_490_) == 0)
{
lean_object* v_a_491_; lean_object* v___x_492_; 
v_a_491_ = lean_ctor_get(v___x_490_, 0);
lean_inc(v_a_491_);
lean_dec_ref_known(v___x_490_, 1);
lean_inc(v_mvarId_393_);
v___x_492_ = l_Lean_MVarId_getTag(v_mvarId_393_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
if (lean_obj_tag(v___x_492_) == 0)
{
lean_object* v_a_493_; lean_object* v___x_494_; 
v_a_493_ = lean_ctor_get(v___x_492_, 0);
lean_inc(v_a_493_);
lean_dec_ref_known(v___x_492_, 1);
v___x_494_ = l_Lean_Meta_mkFreshExprSyntheticOpaqueMVar(v_a_491_, v_a_493_, v___y_394_, v___y_395_, v___y_396_, v___y_397_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec_ref(v___y_394_);
if (lean_obj_tag(v___x_494_) == 0)
{
lean_object* v_a_495_; lean_object* v___x_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; uint8_t v_isShared_501_; uint8_t v_isSharedCheck_506_; 
v_a_495_ = lean_ctor_get(v___x_494_, 0);
lean_inc_n(v_a_495_, 2);
lean_dec_ref_known(v___x_494_, 1);
v___x_496_ = lean_obj_once(&l_Lean_MVarId_decisionCongr___lam__0___closed__6, &l_Lean_MVarId_decisionCongr___lam__0___closed__6_once, _init_l_Lean_MVarId_decisionCongr___lam__0___closed__6);
v___x_497_ = l_Lean_mkApp5(v___x_496_, v___x_488_, v___x_489_, v_a_495_, v_struct_433_, v_struct_450_);
v___x_498_ = l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___redArg(v_mvarId_393_, v___x_497_, v___y_395_);
lean_dec(v___y_395_);
v_isSharedCheck_506_ = !lean_is_exclusive(v___x_498_);
if (v_isSharedCheck_506_ == 0)
{
lean_object* v_unused_507_; 
v_unused_507_ = lean_ctor_get(v___x_498_, 0);
lean_dec(v_unused_507_);
v___x_500_ = v___x_498_;
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
else
{
lean_dec(v___x_498_);
v___x_500_ = lean_box(0);
v_isShared_501_ = v_isSharedCheck_506_;
goto v_resetjp_499_;
}
v_resetjp_499_:
{
lean_object* v___x_502_; lean_object* v___x_504_; 
v___x_502_ = l_Lean_Expr_mvarId_x21(v_a_495_);
lean_dec(v_a_495_);
if (v_isShared_501_ == 0)
{
lean_ctor_set(v___x_500_, 0, v___x_502_);
v___x_504_ = v___x_500_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_505_; 
v_reuseFailAlloc_505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_505_, 0, v___x_502_);
v___x_504_ = v_reuseFailAlloc_505_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
return v___x_504_;
}
}
}
else
{
lean_object* v_a_508_; lean_object* v___x_510_; uint8_t v_isShared_511_; uint8_t v_isSharedCheck_515_; 
lean_dec_ref(v___x_489_);
lean_dec_ref(v___x_488_);
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_395_);
lean_dec(v_mvarId_393_);
v_a_508_ = lean_ctor_get(v___x_494_, 0);
v_isSharedCheck_515_ = !lean_is_exclusive(v___x_494_);
if (v_isSharedCheck_515_ == 0)
{
v___x_510_ = v___x_494_;
v_isShared_511_ = v_isSharedCheck_515_;
goto v_resetjp_509_;
}
else
{
lean_inc(v_a_508_);
lean_dec(v___x_494_);
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
else
{
lean_object* v_a_516_; lean_object* v___x_518_; uint8_t v_isShared_519_; uint8_t v_isSharedCheck_523_; 
lean_dec(v_a_491_);
lean_dec_ref(v___x_489_);
lean_dec_ref(v___x_488_);
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_mvarId_393_);
v_a_516_ = lean_ctor_get(v___x_492_, 0);
v_isSharedCheck_523_ = !lean_is_exclusive(v___x_492_);
if (v_isSharedCheck_523_ == 0)
{
v___x_518_ = v___x_492_;
v_isShared_519_ = v_isSharedCheck_523_;
goto v_resetjp_517_;
}
else
{
lean_inc(v_a_516_);
lean_dec(v___x_492_);
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
else
{
lean_object* v_a_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_531_; 
lean_dec_ref(v___x_489_);
lean_dec_ref(v___x_488_);
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_mvarId_393_);
v_a_524_ = lean_ctor_get(v___x_490_, 0);
v_isSharedCheck_531_ = !lean_is_exclusive(v___x_490_);
if (v_isSharedCheck_531_ == 0)
{
v___x_526_ = v___x_490_;
v_isShared_527_ = v_isSharedCheck_531_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_a_524_);
lean_dec(v___x_490_);
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
}
else
{
lean_object* v_a_533_; lean_object* v___x_535_; uint8_t v_isShared_536_; uint8_t v_isSharedCheck_540_; 
lean_dec(v_a_470_);
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_mvarId_393_);
v_a_533_ = lean_ctor_get(v___x_473_, 0);
v_isSharedCheck_540_ = !lean_is_exclusive(v___x_473_);
if (v_isSharedCheck_540_ == 0)
{
v___x_535_ = v___x_473_;
v_isShared_536_ = v_isSharedCheck_540_;
goto v_resetjp_534_;
}
else
{
lean_inc(v_a_533_);
lean_dec(v___x_473_);
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
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec(v_a_470_);
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_mvarId_393_);
v_a_541_ = lean_ctor_get(v___x_471_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_471_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_471_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_mvarId_393_);
v_a_549_ = lean_ctor_get(v___x_469_, 0);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_469_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_469_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_dec(v___x_469_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
lean_object* v_a_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_564_; 
lean_dec_ref(v_struct_450_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_mvarId_393_);
v_a_557_ = lean_ctor_get(v___x_467_, 0);
v_isSharedCheck_564_ = !lean_is_exclusive(v___x_467_);
if (v_isSharedCheck_564_ == 0)
{
v___x_559_ = v___x_467_;
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_a_557_);
lean_dec(v___x_467_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_564_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_562_; 
if (v_isShared_560_ == 0)
{
v___x_562_ = v___x_559_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v_a_557_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
return v___x_562_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_566_; 
lean_dec_ref_known(v_typeName_447_, 2);
lean_dec_ref_known(v___x_446_, 3);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_566_ = v___x_404_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_mvarId_393_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
else
{
lean_object* v___x_569_; 
lean_dec(v_typeName_447_);
lean_dec_ref_known(v___x_446_, 3);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_569_ = v___x_404_;
goto v_reusejp_568_;
}
else
{
lean_object* v_reuseFailAlloc_570_; 
v_reuseFailAlloc_570_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_570_, 0, v_mvarId_393_);
v___x_569_ = v_reuseFailAlloc_570_;
goto v_reusejp_568_;
}
v_reusejp_568_:
{
return v___x_569_;
}
}
}
else
{
lean_object* v___x_572_; 
lean_dec_ref(v___x_446_);
lean_dec_ref(v_struct_433_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_572_ = v___x_404_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_573_; 
v_reuseFailAlloc_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_573_, 0, v_mvarId_393_);
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
else
{
lean_object* v___x_575_; 
lean_dec_ref_known(v_typeName_430_, 2);
lean_dec_ref_known(v___x_429_, 3);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_575_ = v___x_404_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v_mvarId_393_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
return v___x_575_;
}
}
}
else
{
lean_object* v___x_578_; 
lean_dec(v_typeName_430_);
lean_dec_ref_known(v___x_429_, 3);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_578_ = v___x_404_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_579_; 
v_reuseFailAlloc_579_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_579_, 0, v_mvarId_393_);
v___x_578_ = v_reuseFailAlloc_579_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
return v___x_578_;
}
}
}
else
{
lean_object* v___x_581_; 
lean_dec_ref(v___x_429_);
lean_dec_ref(v___x_407_);
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 0, v_mvarId_393_);
v___x_581_ = v___x_404_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_mvarId_393_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
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
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_591_; 
lean_dec(v___y_397_);
lean_dec_ref(v___y_396_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v_mvarId_393_);
v_a_584_ = lean_ctor_get(v___x_399_, 0);
v_isSharedCheck_591_ = !lean_is_exclusive(v___x_399_);
if (v_isSharedCheck_591_ == 0)
{
v___x_586_ = v___x_399_;
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_399_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_591_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_589_; 
if (v_isShared_587_ == 0)
{
v___x_589_ = v___x_586_;
goto v_reusejp_588_;
}
else
{
lean_object* v_reuseFailAlloc_590_; 
v_reuseFailAlloc_590_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_590_, 0, v_a_584_);
v___x_589_ = v_reuseFailAlloc_590_;
goto v_reusejp_588_;
}
v_reusejp_588_:
{
return v___x_589_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr___lam__0___boxed(lean_object* v_mvarId_592_, lean_object* v___y_593_, lean_object* v___y_594_, lean_object* v___y_595_, lean_object* v___y_596_, lean_object* v___y_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = l_Lean_MVarId_decisionCongr___lam__0(v_mvarId_592_, v___y_593_, v___y_594_, v___y_595_, v___y_596_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr(lean_object* v_mvarId_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, lean_object* v_a_603_){
_start:
{
lean_object* v___f_605_; lean_object* v___x_606_; 
lean_inc(v_mvarId_599_);
v___f_605_ = lean_alloc_closure((void*)(l_Lean_MVarId_decisionCongr___lam__0___boxed), 6, 1);
lean_closure_set(v___f_605_, 0, v_mvarId_599_);
v___x_606_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg(v_mvarId_599_, v___f_605_, v_a_600_, v_a_601_, v_a_602_, v_a_603_);
return v___x_606_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_decisionCongr___boxed(lean_object* v_mvarId_607_, lean_object* v_a_608_, lean_object* v_a_609_, lean_object* v_a_610_, lean_object* v_a_611_, lean_object* v_a_612_){
_start:
{
lean_object* v_res_613_; 
v_res_613_ = l_Lean_MVarId_decisionCongr(v_mvarId_607_, v_a_608_, v_a_609_, v_a_610_, v_a_611_);
lean_dec(v_a_611_);
lean_dec_ref(v_a_610_);
lean_dec(v_a_609_);
lean_dec_ref(v_a_608_);
return v_res_613_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1(lean_object* v_mvarId_614_, lean_object* v_val_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
lean_object* v___x_621_; 
v___x_621_ = l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___redArg(v_mvarId_614_, v_val_615_, v___y_617_);
return v___x_621_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1___boxed(lean_object* v_mvarId_622_, lean_object* v_val_623_, lean_object* v___y_624_, lean_object* v___y_625_, lean_object* v___y_626_, lean_object* v___y_627_, lean_object* v___y_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = l_Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1(v_mvarId_622_, v_val_623_, v___y_624_, v___y_625_, v___y_626_, v___y_627_);
lean_dec(v___y_627_);
lean_dec_ref(v___y_626_);
lean_dec(v___y_625_);
lean_dec_ref(v___y_624_);
return v_res_629_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1(lean_object* v_00_u03b2_630_, lean_object* v_x_631_, lean_object* v_x_632_, lean_object* v_x_633_){
_start:
{
lean_object* v___x_634_; 
v___x_634_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1___redArg(v_x_631_, v_x_632_, v_x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3(lean_object* v_00_u03b2_635_, lean_object* v_x_636_, size_t v_x_637_, size_t v_x_638_, lean_object* v_x_639_, lean_object* v_x_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___redArg(v_x_636_, v_x_637_, v_x_638_, v_x_639_, v_x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3___boxed(lean_object* v_00_u03b2_642_, lean_object* v_x_643_, lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
size_t v_x_5706__boxed_648_; size_t v_x_5707__boxed_649_; lean_object* v_res_650_; 
v_x_5706__boxed_648_ = lean_unbox_usize(v_x_644_);
lean_dec(v_x_644_);
v_x_5707__boxed_649_ = lean_unbox_usize(v_x_645_);
lean_dec(v_x_645_);
v_res_650_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3(v_00_u03b2_642_, v_x_643_, v_x_5706__boxed_648_, v_x_5707__boxed_649_, v_x_646_, v_x_647_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_651_, lean_object* v_n_652_, lean_object* v_k_653_, lean_object* v_v_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4___redArg(v_n_652_, v_k_653_, v_v_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5(lean_object* v_00_u03b2_656_, size_t v_depth_657_, lean_object* v_keys_658_, lean_object* v_vals_659_, lean_object* v_heq_660_, lean_object* v_i_661_, lean_object* v_entries_662_){
_start:
{
lean_object* v___x_663_; 
v___x_663_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___redArg(v_depth_657_, v_keys_658_, v_vals_659_, v_i_661_, v_entries_662_);
return v___x_663_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5___boxed(lean_object* v_00_u03b2_664_, lean_object* v_depth_665_, lean_object* v_keys_666_, lean_object* v_vals_667_, lean_object* v_heq_668_, lean_object* v_i_669_, lean_object* v_entries_670_){
_start:
{
size_t v_depth_boxed_671_; lean_object* v_res_672_; 
v_depth_boxed_671_ = lean_unbox_usize(v_depth_665_);
lean_dec(v_depth_665_);
v_res_672_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__5(v_00_u03b2_664_, v_depth_boxed_671_, v_keys_666_, v_vals_667_, v_heq_668_, v_i_669_, v_entries_670_);
lean_dec_ref(v_vals_667_);
lean_dec_ref(v_keys_666_);
return v_res_672_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4_spec__5(lean_object* v_00_u03b2_673_, lean_object* v_x_674_, lean_object* v_x_675_, lean_object* v_x_676_, lean_object* v_x_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_MVarId_decisionCongr_spec__1_spec__1_spec__3_spec__4_spec__5___redArg(v_x_674_, v_x_675_, v_x_676_, v_x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f_spec__0(lean_object* v_fst_679_, lean_object* v_x_680_, lean_object* v_x_681_, lean_object* v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_){
_start:
{
if (lean_obj_tag(v_x_680_) == 0)
{
lean_object* v___x_687_; lean_object* v___x_688_; 
lean_dec(v_fst_679_);
v___x_687_ = l_List_reverse___redArg(v_x_681_);
v___x_688_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_688_, 0, v___x_687_);
return v___x_688_;
}
else
{
lean_object* v_head_689_; lean_object* v_tail_690_; lean_object* v___x_692_; uint8_t v_isShared_693_; uint8_t v_isSharedCheck_708_; 
v_head_689_ = lean_ctor_get(v_x_680_, 0);
v_tail_690_ = lean_ctor_get(v_x_680_, 1);
v_isSharedCheck_708_ = !lean_is_exclusive(v_x_680_);
if (v_isSharedCheck_708_ == 0)
{
v___x_692_ = v_x_680_;
v_isShared_693_ = v_isSharedCheck_708_;
goto v_resetjp_691_;
}
else
{
lean_inc(v_tail_690_);
lean_inc(v_head_689_);
lean_dec(v_x_680_);
v___x_692_ = lean_box(0);
v_isShared_693_ = v_isSharedCheck_708_;
goto v_resetjp_691_;
}
v_resetjp_691_:
{
lean_object* v___x_694_; 
lean_inc(v_fst_679_);
v___x_694_ = l_Lean_MVarId_tryClear(v_head_689_, v_fst_679_, v___y_682_, v___y_683_, v___y_684_, v___y_685_);
if (lean_obj_tag(v___x_694_) == 0)
{
lean_object* v_a_695_; lean_object* v___x_697_; 
v_a_695_ = lean_ctor_get(v___x_694_, 0);
lean_inc(v_a_695_);
lean_dec_ref_known(v___x_694_, 1);
if (v_isShared_693_ == 0)
{
lean_ctor_set(v___x_692_, 1, v_x_681_);
lean_ctor_set(v___x_692_, 0, v_a_695_);
v___x_697_ = v___x_692_;
goto v_reusejp_696_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_a_695_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_x_681_);
v___x_697_ = v_reuseFailAlloc_699_;
goto v_reusejp_696_;
}
v_reusejp_696_:
{
v_x_680_ = v_tail_690_;
v_x_681_ = v___x_697_;
goto _start;
}
}
else
{
lean_object* v_a_700_; lean_object* v___x_702_; uint8_t v_isShared_703_; uint8_t v_isSharedCheck_707_; 
lean_del_object(v___x_692_);
lean_dec(v_tail_690_);
lean_dec(v_x_681_);
lean_dec(v_fst_679_);
v_a_700_ = lean_ctor_get(v___x_694_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v___x_694_);
if (v_isSharedCheck_707_ == 0)
{
v___x_702_ = v___x_694_;
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
else
{
lean_inc(v_a_700_);
lean_dec(v___x_694_);
v___x_702_ = lean_box(0);
v_isShared_703_ = v_isSharedCheck_707_;
goto v_resetjp_701_;
}
v_resetjp_701_:
{
lean_object* v___x_705_; 
if (v_isShared_703_ == 0)
{
v___x_705_ = v___x_702_;
goto v_reusejp_704_;
}
else
{
lean_object* v_reuseFailAlloc_706_; 
v_reuseFailAlloc_706_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_706_, 0, v_a_700_);
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
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f_spec__0___boxed(lean_object* v_fst_709_, lean_object* v_x_710_, lean_object* v_x_711_, lean_object* v___y_712_, lean_object* v___y_713_, lean_object* v___y_714_, lean_object* v___y_715_, lean_object* v___y_716_){
_start:
{
lean_object* v_res_717_; 
v_res_717_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f_spec__0(v_fst_709_, v_x_710_, v_x_711_, v___y_712_, v___y_713_, v___y_714_, v___y_715_);
lean_dec(v___y_715_);
lean_dec_ref(v___y_714_);
lean_dec(v___y_713_);
lean_dec_ref(v___y_712_);
return v_res_717_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f(lean_object* v_mvarId_725_, lean_object* v_congrThm_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_){
_start:
{
lean_object* v___x_732_; lean_object* v___x_733_; 
v___x_732_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__1));
v___x_733_ = l_Lean_Core_mkFreshUserName(v___x_732_, v_a_729_, v_a_730_);
if (lean_obj_tag(v___x_733_) == 0)
{
lean_object* v_a_734_; lean_object* v_type_735_; lean_object* v_proof_736_; lean_object* v___x_737_; 
v_a_734_ = lean_ctor_get(v___x_733_, 0);
lean_inc(v_a_734_);
lean_dec_ref_known(v___x_733_, 1);
v_type_735_ = lean_ctor_get(v_congrThm_726_, 0);
lean_inc_ref(v_type_735_);
v_proof_736_ = lean_ctor_get(v_congrThm_726_, 1);
lean_inc_ref(v_proof_736_);
lean_dec_ref(v_congrThm_726_);
v___x_737_ = l_Lean_MVarId_assert(v_mvarId_725_, v_a_734_, v_type_735_, v_proof_736_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v_a_738_; uint8_t v___x_739_; lean_object* v___x_740_; 
v_a_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_a_738_);
lean_dec_ref_known(v___x_737_, 1);
v___x_739_ = 1;
v___x_740_ = l_Lean_Meta_intro1Core(v_a_738_, v___x_739_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
if (lean_obj_tag(v___x_740_) == 0)
{
lean_object* v_a_741_; lean_object* v_fst_742_; lean_object* v_snd_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; 
v_a_741_ = lean_ctor_get(v___x_740_, 0);
lean_inc(v_a_741_);
lean_dec_ref_known(v___x_740_, 1);
v_fst_742_ = lean_ctor_get(v_a_741_, 0);
lean_inc_n(v_fst_742_, 2);
v_snd_743_ = lean_ctor_get(v_a_741_, 1);
lean_inc(v_snd_743_);
lean_dec(v_a_741_);
v___x_744_ = l_Lean_mkFVar(v_fst_742_);
v___x_745_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___closed__2));
v___x_746_ = lean_box(0);
v___x_747_ = l_Lean_MVarId_apply(v_snd_743_, v___x_744_, v___x_745_, v___x_746_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
if (lean_obj_tag(v___x_747_) == 0)
{
lean_object* v_a_748_; lean_object* v___x_749_; lean_object* v___x_750_; 
v_a_748_ = lean_ctor_get(v___x_747_, 0);
lean_inc(v_a_748_);
lean_dec_ref_known(v___x_747_, 1);
v___x_749_ = lean_box(0);
v___x_750_ = l_List_mapM_loop___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f_spec__0(v_fst_742_, v_a_748_, v___x_749_, v_a_727_, v_a_728_, v_a_729_, v_a_730_);
return v___x_750_;
}
else
{
lean_dec(v_fst_742_);
return v___x_747_;
}
}
else
{
lean_object* v_a_751_; lean_object* v___x_753_; uint8_t v_isShared_754_; uint8_t v_isSharedCheck_758_; 
v_a_751_ = lean_ctor_get(v___x_740_, 0);
v_isSharedCheck_758_ = !lean_is_exclusive(v___x_740_);
if (v_isSharedCheck_758_ == 0)
{
v___x_753_ = v___x_740_;
v_isShared_754_ = v_isSharedCheck_758_;
goto v_resetjp_752_;
}
else
{
lean_inc(v_a_751_);
lean_dec(v___x_740_);
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
}
else
{
lean_object* v_a_759_; lean_object* v___x_761_; uint8_t v_isShared_762_; uint8_t v_isSharedCheck_766_; 
v_a_759_ = lean_ctor_get(v___x_737_, 0);
v_isSharedCheck_766_ = !lean_is_exclusive(v___x_737_);
if (v_isSharedCheck_766_ == 0)
{
v___x_761_ = v___x_737_;
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
else
{
lean_inc(v_a_759_);
lean_dec(v___x_737_);
v___x_761_ = lean_box(0);
v_isShared_762_ = v_isSharedCheck_766_;
goto v_resetjp_760_;
}
v_resetjp_760_:
{
lean_object* v___x_764_; 
if (v_isShared_762_ == 0)
{
v___x_764_ = v___x_761_;
goto v_reusejp_763_;
}
else
{
lean_object* v_reuseFailAlloc_765_; 
v_reuseFailAlloc_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_765_, 0, v_a_759_);
v___x_764_ = v_reuseFailAlloc_765_;
goto v_reusejp_763_;
}
v_reusejp_763_:
{
return v___x_764_;
}
}
}
}
else
{
lean_object* v_a_767_; lean_object* v___x_769_; uint8_t v_isShared_770_; uint8_t v_isSharedCheck_774_; 
lean_dec_ref(v_congrThm_726_);
lean_dec(v_mvarId_725_);
v_a_767_ = lean_ctor_get(v___x_733_, 0);
v_isSharedCheck_774_ = !lean_is_exclusive(v___x_733_);
if (v_isSharedCheck_774_ == 0)
{
v___x_769_ = v___x_733_;
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
else
{
lean_inc(v_a_767_);
lean_dec(v___x_733_);
v___x_769_ = lean_box(0);
v_isShared_770_ = v_isSharedCheck_774_;
goto v_resetjp_768_;
}
v_resetjp_768_:
{
lean_object* v___x_772_; 
if (v_isShared_770_ == 0)
{
v___x_772_ = v___x_769_;
goto v_reusejp_771_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_a_767_);
v___x_772_ = v_reuseFailAlloc_773_;
goto v_reusejp_771_;
}
v_reusejp_771_:
{
return v___x_772_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f___boxed(lean_object* v_mvarId_775_, lean_object* v_congrThm_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_, lean_object* v_a_781_){
_start:
{
lean_object* v_res_782_; 
v_res_782_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f(v_mvarId_775_, v_congrThm_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
lean_dec(v_a_780_);
lean_dec_ref(v_a_779_);
lean_dec(v_a_778_);
lean_dec_ref(v_a_777_);
return v_res_782_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f___lam__0(lean_object* v_mvarId_783_, lean_object* v___x_784_, lean_object* v___y_785_, lean_object* v___y_786_, lean_object* v___y_787_, lean_object* v___y_788_){
_start:
{
lean_object* v___x_790_; 
lean_inc(v_mvarId_783_);
v___x_790_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_783_, v___x_784_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; 
lean_dec_ref_known(v___x_790_, 1);
lean_inc(v_mvarId_783_);
v___x_791_ = l_Lean_MVarId_getType_x27(v_mvarId_783_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v_a_792_; lean_object* v___x_794_; uint8_t v_isShared_795_; uint8_t v_isSharedCheck_858_; 
v_a_792_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_858_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_858_ == 0)
{
v___x_794_ = v___x_791_;
v_isShared_795_ = v_isSharedCheck_858_;
goto v_resetjp_793_;
}
else
{
lean_inc(v_a_792_);
lean_dec(v___x_791_);
v___x_794_ = lean_box(0);
v_isShared_795_ = v_isSharedCheck_858_;
goto v_resetjp_793_;
}
v_resetjp_793_:
{
lean_object* v___x_796_; lean_object* v___x_797_; uint8_t v___x_798_; 
v___x_796_ = ((lean_object*)(l_Lean_MVarId_decisionCongr___lam__0___closed__1));
v___x_797_ = lean_unsigned_to_nat(3u);
v___x_798_ = l_Lean_Expr_isAppOfArity(v_a_792_, v___x_796_, v___x_797_);
if (v___x_798_ == 0)
{
lean_object* v___x_799_; lean_object* v___x_801_; 
lean_dec(v_a_792_);
lean_dec(v_mvarId_783_);
v___x_799_ = lean_box(0);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_799_);
v___x_801_ = v___x_794_;
goto v_reusejp_800_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v___x_799_);
v___x_801_ = v_reuseFailAlloc_802_;
goto v_reusejp_800_;
}
v_reusejp_800_:
{
return v___x_801_;
}
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v___x_803_ = l_Lean_Expr_appFn_x21(v_a_792_);
lean_dec(v_a_792_);
v___x_804_ = l_Lean_Expr_appArg_x21(v___x_803_);
lean_dec_ref(v___x_803_);
v___x_805_ = l_Lean_Expr_cleanupAnnotations(v___x_804_);
lean_dec_ref(v___x_804_);
v___x_806_ = l_Lean_Expr_isApp(v___x_805_);
if (v___x_806_ == 0)
{
lean_object* v___x_807_; lean_object* v___x_809_; 
lean_dec_ref(v___x_805_);
lean_dec(v_mvarId_783_);
v___x_807_ = lean_box(0);
if (v_isShared_795_ == 0)
{
lean_ctor_set(v___x_794_, 0, v___x_807_);
v___x_809_ = v___x_794_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_807_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
else
{
lean_object* v___x_811_; uint8_t v___x_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; 
lean_del_object(v___x_794_);
v___x_811_ = l_Lean_Expr_getAppFn(v___x_805_);
v___x_812_ = 0;
v___x_813_ = l_Lean_Expr_getAppNumArgs(v___x_805_);
lean_dec_ref(v___x_805_);
v___x_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_814_, 0, v___x_813_);
v___x_815_ = l_Lean_Meta_mkCongrSimp_x3f(v___x_811_, v___x_812_, v___x_814_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
if (lean_obj_tag(v___x_815_) == 0)
{
lean_object* v_a_816_; lean_object* v___x_818_; uint8_t v_isShared_819_; uint8_t v_isSharedCheck_849_; 
v_a_816_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_849_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_849_ == 0)
{
v___x_818_ = v___x_815_;
v_isShared_819_ = v_isSharedCheck_849_;
goto v_resetjp_817_;
}
else
{
lean_inc(v_a_816_);
lean_dec(v___x_815_);
v___x_818_ = lean_box(0);
v_isShared_819_ = v_isSharedCheck_849_;
goto v_resetjp_817_;
}
v_resetjp_817_:
{
if (lean_obj_tag(v_a_816_) == 1)
{
lean_object* v_val_820_; lean_object* v___x_822_; uint8_t v_isShared_823_; uint8_t v_isSharedCheck_844_; 
lean_del_object(v___x_818_);
v_val_820_ = lean_ctor_get(v_a_816_, 0);
v_isSharedCheck_844_ = !lean_is_exclusive(v_a_816_);
if (v_isSharedCheck_844_ == 0)
{
v___x_822_ = v_a_816_;
v_isShared_823_ = v_isSharedCheck_844_;
goto v_resetjp_821_;
}
else
{
lean_inc(v_val_820_);
lean_dec(v_a_816_);
v___x_822_ = lean_box(0);
v_isShared_823_ = v_isSharedCheck_844_;
goto v_resetjp_821_;
}
v_resetjp_821_:
{
lean_object* v___x_824_; 
v___x_824_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f(v_mvarId_783_, v_val_820_, v___y_785_, v___y_786_, v___y_787_, v___y_788_);
if (lean_obj_tag(v___x_824_) == 0)
{
lean_object* v_a_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_835_; 
v_a_825_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_835_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_835_ == 0)
{
v___x_827_ = v___x_824_;
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_a_825_);
lean_dec(v___x_824_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_835_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
if (v_isShared_823_ == 0)
{
lean_ctor_set(v___x_822_, 0, v_a_825_);
v___x_830_ = v___x_822_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_a_825_);
v___x_830_ = v_reuseFailAlloc_834_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_object* v___x_832_; 
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 0, v___x_830_);
v___x_832_ = v___x_827_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_833_; 
v_reuseFailAlloc_833_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_833_, 0, v___x_830_);
v___x_832_ = v_reuseFailAlloc_833_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
return v___x_832_;
}
}
}
}
else
{
lean_object* v_a_836_; lean_object* v___x_838_; uint8_t v_isShared_839_; uint8_t v_isSharedCheck_843_; 
lean_del_object(v___x_822_);
v_a_836_ = lean_ctor_get(v___x_824_, 0);
v_isSharedCheck_843_ = !lean_is_exclusive(v___x_824_);
if (v_isSharedCheck_843_ == 0)
{
v___x_838_ = v___x_824_;
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
else
{
lean_inc(v_a_836_);
lean_dec(v___x_824_);
v___x_838_ = lean_box(0);
v_isShared_839_ = v_isSharedCheck_843_;
goto v_resetjp_837_;
}
v_resetjp_837_:
{
lean_object* v___x_841_; 
if (v_isShared_839_ == 0)
{
v___x_841_ = v___x_838_;
goto v_reusejp_840_;
}
else
{
lean_object* v_reuseFailAlloc_842_; 
v_reuseFailAlloc_842_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_842_, 0, v_a_836_);
v___x_841_ = v_reuseFailAlloc_842_;
goto v_reusejp_840_;
}
v_reusejp_840_:
{
return v___x_841_;
}
}
}
}
}
else
{
lean_object* v___x_845_; lean_object* v___x_847_; 
lean_dec(v_a_816_);
lean_dec(v_mvarId_783_);
v___x_845_ = lean_box(0);
if (v_isShared_819_ == 0)
{
lean_ctor_set(v___x_818_, 0, v___x_845_);
v___x_847_ = v___x_818_;
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
}
else
{
lean_object* v_a_850_; lean_object* v___x_852_; uint8_t v_isShared_853_; uint8_t v_isSharedCheck_857_; 
lean_dec(v_mvarId_783_);
v_a_850_ = lean_ctor_get(v___x_815_, 0);
v_isSharedCheck_857_ = !lean_is_exclusive(v___x_815_);
if (v_isSharedCheck_857_ == 0)
{
v___x_852_ = v___x_815_;
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
else
{
lean_inc(v_a_850_);
lean_dec(v___x_815_);
v___x_852_ = lean_box(0);
v_isShared_853_ = v_isSharedCheck_857_;
goto v_resetjp_851_;
}
v_resetjp_851_:
{
lean_object* v___x_855_; 
if (v_isShared_853_ == 0)
{
v___x_855_ = v___x_852_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_856_; 
v_reuseFailAlloc_856_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_856_, 0, v_a_850_);
v___x_855_ = v_reuseFailAlloc_856_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
return v___x_855_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_859_; lean_object* v___x_861_; uint8_t v_isShared_862_; uint8_t v_isSharedCheck_866_; 
lean_dec(v_mvarId_783_);
v_a_859_ = lean_ctor_get(v___x_791_, 0);
v_isSharedCheck_866_ = !lean_is_exclusive(v___x_791_);
if (v_isSharedCheck_866_ == 0)
{
v___x_861_ = v___x_791_;
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
else
{
lean_inc(v_a_859_);
lean_dec(v___x_791_);
v___x_861_ = lean_box(0);
v_isShared_862_ = v_isSharedCheck_866_;
goto v_resetjp_860_;
}
v_resetjp_860_:
{
lean_object* v___x_864_; 
if (v_isShared_862_ == 0)
{
v___x_864_ = v___x_861_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_865_; 
v_reuseFailAlloc_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_865_, 0, v_a_859_);
v___x_864_ = v_reuseFailAlloc_865_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
return v___x_864_;
}
}
}
}
else
{
lean_object* v_a_867_; lean_object* v___x_869_; uint8_t v_isShared_870_; uint8_t v_isSharedCheck_874_; 
lean_dec(v_mvarId_783_);
v_a_867_ = lean_ctor_get(v___x_790_, 0);
v_isSharedCheck_874_ = !lean_is_exclusive(v___x_790_);
if (v_isSharedCheck_874_ == 0)
{
v___x_869_ = v___x_790_;
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
else
{
lean_inc(v_a_867_);
lean_dec(v___x_790_);
v___x_869_ = lean_box(0);
v_isShared_870_ = v_isSharedCheck_874_;
goto v_resetjp_868_;
}
v_resetjp_868_:
{
lean_object* v___x_872_; 
if (v_isShared_870_ == 0)
{
v___x_872_ = v___x_869_;
goto v_reusejp_871_;
}
else
{
lean_object* v_reuseFailAlloc_873_; 
v_reuseFailAlloc_873_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_873_, 0, v_a_867_);
v___x_872_ = v_reuseFailAlloc_873_;
goto v_reusejp_871_;
}
v_reusejp_871_:
{
return v___x_872_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f___lam__0___boxed(lean_object* v_mvarId_875_, lean_object* v___x_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_, lean_object* v___y_881_){
_start:
{
lean_object* v_res_882_; 
v_res_882_ = l_Lean_MVarId_congr_x3f___lam__0(v_mvarId_875_, v___x_876_, v___y_877_, v___y_878_, v___y_879_, v___y_880_);
lean_dec(v___y_880_);
lean_dec_ref(v___y_879_);
lean_dec(v___y_878_);
lean_dec_ref(v___y_877_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___redArg(lean_object* v_x_x3f_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_, lean_object* v___y_887_){
_start:
{
lean_object* v___x_889_; 
v___x_889_ = l_Lean_Meta_saveState___redArg(v___y_885_, v___y_887_);
if (lean_obj_tag(v___x_889_) == 0)
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_934_; 
v_a_890_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_934_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_934_ == 0)
{
v___x_892_ = v___x_889_;
v_isShared_893_ = v_isSharedCheck_934_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_889_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_934_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v_a_895_; lean_object* v___x_921_; 
lean_inc(v___y_887_);
lean_inc_ref(v___y_886_);
lean_inc(v___y_885_);
lean_inc_ref(v___y_884_);
v___x_921_ = lean_apply_5(v_x_x3f_883_, v___y_884_, v___y_885_, v___y_886_, v___y_887_, lean_box(0));
if (lean_obj_tag(v___x_921_) == 0)
{
lean_object* v_a_922_; 
v_a_922_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_922_);
if (lean_obj_tag(v_a_922_) == 0)
{
lean_object* v___x_923_; 
lean_dec_ref_known(v___x_921_, 1);
lean_inc(v_a_890_);
v___x_923_ = l_Lean_Meta_SavedState_restore___redArg(v_a_890_, v___y_885_, v___y_887_);
if (lean_obj_tag(v___x_923_) == 0)
{
lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_930_; 
lean_del_object(v___x_892_);
lean_dec(v_a_890_);
v_isSharedCheck_930_ = !lean_is_exclusive(v___x_923_);
if (v_isSharedCheck_930_ == 0)
{
lean_object* v_unused_931_; 
v_unused_931_ = lean_ctor_get(v___x_923_, 0);
lean_dec(v_unused_931_);
v___x_925_ = v___x_923_;
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
else
{
lean_dec(v___x_923_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_930_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_928_; 
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 0, v_a_922_);
v___x_928_ = v___x_925_;
goto v_reusejp_927_;
}
else
{
lean_object* v_reuseFailAlloc_929_; 
v_reuseFailAlloc_929_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_929_, 0, v_a_922_);
v___x_928_ = v_reuseFailAlloc_929_;
goto v_reusejp_927_;
}
v_reusejp_927_:
{
return v___x_928_;
}
}
}
else
{
lean_object* v_a_932_; 
v_a_932_ = lean_ctor_get(v___x_923_, 0);
lean_inc(v_a_932_);
lean_dec_ref_known(v___x_923_, 1);
v_a_895_ = v_a_932_;
goto v___jp_894_;
}
}
else
{
lean_dec_ref_known(v_a_922_, 1);
lean_del_object(v___x_892_);
lean_dec(v_a_890_);
return v___x_921_;
}
}
else
{
lean_object* v_a_933_; 
v_a_933_ = lean_ctor_get(v___x_921_, 0);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_921_, 1);
v_a_895_ = v_a_933_;
goto v___jp_894_;
}
v___jp_894_:
{
uint8_t v___x_896_; 
v___x_896_ = l_Lean_Exception_isInterrupt(v_a_895_);
if (v___x_896_ == 0)
{
uint8_t v___x_897_; 
lean_inc_ref(v_a_895_);
v___x_897_ = l_Lean_Exception_isRuntime(v_a_895_);
if (v___x_897_ == 0)
{
lean_object* v___x_898_; 
lean_del_object(v___x_892_);
v___x_898_ = l_Lean_Meta_SavedState_restore___redArg(v_a_890_, v___y_885_, v___y_887_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_905_ == 0)
{
lean_object* v_unused_906_; 
v_unused_906_ = lean_ctor_get(v___x_898_, 0);
lean_dec(v_unused_906_);
v___x_900_ = v___x_898_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_dec(v___x_898_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
lean_ctor_set_tag(v___x_900_, 1);
lean_ctor_set(v___x_900_, 0, v_a_895_);
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_895_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
else
{
lean_object* v_a_907_; lean_object* v___x_909_; uint8_t v_isShared_910_; uint8_t v_isSharedCheck_914_; 
lean_dec_ref(v_a_895_);
v_a_907_ = lean_ctor_get(v___x_898_, 0);
v_isSharedCheck_914_ = !lean_is_exclusive(v___x_898_);
if (v_isSharedCheck_914_ == 0)
{
v___x_909_ = v___x_898_;
v_isShared_910_ = v_isSharedCheck_914_;
goto v_resetjp_908_;
}
else
{
lean_inc(v_a_907_);
lean_dec(v___x_898_);
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
else
{
lean_object* v___x_916_; 
lean_dec(v_a_890_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 1);
lean_ctor_set(v___x_892_, 0, v_a_895_);
v___x_916_ = v___x_892_;
goto v_reusejp_915_;
}
else
{
lean_object* v_reuseFailAlloc_917_; 
v_reuseFailAlloc_917_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_917_, 0, v_a_895_);
v___x_916_ = v_reuseFailAlloc_917_;
goto v_reusejp_915_;
}
v_reusejp_915_:
{
return v___x_916_;
}
}
}
else
{
lean_object* v___x_919_; 
lean_dec(v_a_890_);
if (v_isShared_893_ == 0)
{
lean_ctor_set_tag(v___x_892_, 1);
lean_ctor_set(v___x_892_, 0, v_a_895_);
v___x_919_ = v___x_892_;
goto v_reusejp_918_;
}
else
{
lean_object* v_reuseFailAlloc_920_; 
v_reuseFailAlloc_920_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_920_, 0, v_a_895_);
v___x_919_ = v_reuseFailAlloc_920_;
goto v_reusejp_918_;
}
v_reusejp_918_:
{
return v___x_919_;
}
}
}
}
}
else
{
lean_object* v_a_935_; lean_object* v___x_937_; uint8_t v_isShared_938_; uint8_t v_isSharedCheck_942_; 
lean_dec_ref(v_x_x3f_883_);
v_a_935_ = lean_ctor_get(v___x_889_, 0);
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_889_);
if (v_isSharedCheck_942_ == 0)
{
v___x_937_ = v___x_889_;
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
else
{
lean_inc(v_a_935_);
lean_dec(v___x_889_);
v___x_937_ = lean_box(0);
v_isShared_938_ = v_isSharedCheck_942_;
goto v_resetjp_936_;
}
v_resetjp_936_:
{
lean_object* v___x_940_; 
if (v_isShared_938_ == 0)
{
v___x_940_ = v___x_937_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v_a_935_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_x3f_943_, lean_object* v___y_944_, lean_object* v___y_945_, lean_object* v___y_946_, lean_object* v___y_947_, lean_object* v___y_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___redArg(v_x_x3f_943_, v___y_944_, v___y_945_, v___y_946_, v___y_947_);
lean_dec(v___y_947_);
lean_dec_ref(v___y_946_);
lean_dec(v___y_945_);
lean_dec_ref(v___y_944_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___redArg(lean_object* v_x_x3f_950_, lean_object* v___y_951_, lean_object* v___y_952_, lean_object* v___y_953_, lean_object* v___y_954_){
_start:
{
lean_object* v___x_956_; 
v___x_956_ = l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___redArg(v_x_x3f_950_, v___y_951_, v___y_952_, v___y_953_, v___y_954_);
if (lean_obj_tag(v___x_956_) == 0)
{
return v___x_956_;
}
else
{
lean_object* v_a_957_; uint8_t v___x_958_; 
v_a_957_ = lean_ctor_get(v___x_956_, 0);
v___x_958_ = l_Lean_Exception_isInterrupt(v_a_957_);
if (v___x_958_ == 0)
{
uint8_t v___x_959_; 
lean_inc(v_a_957_);
v___x_959_ = l_Lean_Exception_isRuntime(v_a_957_);
if (v___x_959_ == 0)
{
lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_967_; 
v_isSharedCheck_967_ = !lean_is_exclusive(v___x_956_);
if (v_isSharedCheck_967_ == 0)
{
lean_object* v_unused_968_; 
v_unused_968_ = lean_ctor_get(v___x_956_, 0);
lean_dec(v_unused_968_);
v___x_961_ = v___x_956_;
v_isShared_962_ = v_isSharedCheck_967_;
goto v_resetjp_960_;
}
else
{
lean_dec(v___x_956_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_967_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_963_; lean_object* v___x_965_; 
v___x_963_ = lean_box(0);
if (v_isShared_962_ == 0)
{
lean_ctor_set_tag(v___x_961_, 0);
lean_ctor_set(v___x_961_, 0, v___x_963_);
v___x_965_ = v___x_961_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_966_; 
v_reuseFailAlloc_966_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_966_, 0, v___x_963_);
v___x_965_ = v_reuseFailAlloc_966_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
return v___x_965_;
}
}
}
else
{
return v___x_956_;
}
}
else
{
return v___x_956_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___redArg___boxed(lean_object* v_x_x3f_969_, lean_object* v___y_970_, lean_object* v___y_971_, lean_object* v___y_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v_res_975_; 
v_res_975_ = l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___redArg(v_x_x3f_969_, v___y_970_, v___y_971_, v___y_972_, v___y_973_);
lean_dec(v___y_973_);
lean_dec_ref(v___y_972_);
lean_dec(v___y_971_);
lean_dec_ref(v___y_970_);
return v_res_975_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0(lean_object* v_00_u03b1_976_, lean_object* v_x_x3f_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_, lean_object* v___y_981_){
_start:
{
lean_object* v___x_983_; 
v___x_983_ = l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___redArg(v_x_x3f_977_, v___y_978_, v___y_979_, v___y_980_, v___y_981_);
return v___x_983_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___boxed(lean_object* v_00_u03b1_984_, lean_object* v_x_x3f_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_){
_start:
{
lean_object* v_res_991_; 
v_res_991_ = l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0(v_00_u03b1_984_, v_x_x3f_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_);
lean_dec(v___y_989_);
lean_dec_ref(v___y_988_);
lean_dec(v___y_987_);
lean_dec_ref(v___y_986_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f(lean_object* v_mvarId_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v___f_1002_; lean_object* v___x_1003_; lean_object* v___x_1004_; 
v___x_1001_ = ((lean_object*)(l_Lean_MVarId_congr_x3f___closed__1));
lean_inc(v_mvarId_995_);
v___f_1002_ = lean_alloc_closure((void*)(l_Lean_MVarId_congr_x3f___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1002_, 0, v_mvarId_995_);
lean_closure_set(v___f_1002_, 1, v___x_1001_);
v___x_1003_ = lean_alloc_closure((void*)(l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___boxed), 7, 2);
lean_closure_set(v___x_1003_, 0, lean_box(0));
lean_closure_set(v___x_1003_, 1, v___f_1002_);
v___x_1004_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg(v_mvarId_995_, v___x_1003_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
return v___x_1004_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congr_x3f___boxed(lean_object* v_mvarId_1005_, lean_object* v_a_1006_, lean_object* v_a_1007_, lean_object* v_a_1008_, lean_object* v_a_1009_, lean_object* v_a_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_MVarId_congr_x3f(v_mvarId_1005_, v_a_1006_, v_a_1007_, v_a_1008_, v_a_1009_);
lean_dec(v_a_1009_);
lean_dec_ref(v_a_1008_);
lean_dec(v_a_1007_);
lean_dec_ref(v_a_1006_);
return v_res_1011_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0(lean_object* v_00_u03b1_1012_, lean_object* v_x_x3f_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_, lean_object* v___y_1016_, lean_object* v___y_1017_){
_start:
{
lean_object* v___x_1019_; 
v___x_1019_ = l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___redArg(v_x_x3f_1013_, v___y_1014_, v___y_1015_, v___y_1016_, v___y_1017_);
return v___x_1019_;
}
}
LEAN_EXPORT lean_object* l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1020_, lean_object* v_x_x3f_1021_, lean_object* v___y_1022_, lean_object* v___y_1023_, lean_object* v___y_1024_, lean_object* v___y_1025_, lean_object* v___y_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Lean_commitWhenSome_x3f___at___00Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0_spec__0(v_00_u03b1_1020_, v_x_x3f_1021_, v___y_1022_, v___y_1023_, v___y_1024_, v___y_1025_);
lean_dec(v___y_1025_);
lean_dec_ref(v___y_1024_);
lean_dec(v___y_1023_);
lean_dec_ref(v___y_1022_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__0(lean_object* v_a_1031_, lean_object* v___y_1032_, lean_object* v___y_1033_, lean_object* v___y_1034_, lean_object* v___y_1035_){
_start:
{
lean_object* v___x_1037_; 
lean_inc(v_a_1031_);
v___x_1037_ = l_Lean_MVarId_getType_x27(v_a_1031_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
if (lean_obj_tag(v___x_1037_) == 0)
{
lean_object* v_a_1038_; lean_object* v___x_1040_; uint8_t v_isShared_1041_; uint8_t v_isSharedCheck_1088_; 
v_a_1038_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1088_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1088_ == 0)
{
v___x_1040_ = v___x_1037_;
v_isShared_1041_ = v_isSharedCheck_1088_;
goto v_resetjp_1039_;
}
else
{
lean_inc(v_a_1038_);
lean_dec(v___x_1037_);
v___x_1040_ = lean_box(0);
v_isShared_1041_ = v_isSharedCheck_1088_;
goto v_resetjp_1039_;
}
v_resetjp_1039_:
{
lean_object* v___x_1042_; lean_object* v___x_1043_; uint8_t v___x_1044_; 
v___x_1042_ = ((lean_object*)(l_Lean_MVarId_hcongr_x3f___lam__0___closed__1));
v___x_1043_ = lean_unsigned_to_nat(4u);
v___x_1044_ = l_Lean_Expr_isAppOfArity(v_a_1038_, v___x_1042_, v___x_1043_);
if (v___x_1044_ == 0)
{
lean_object* v___x_1045_; lean_object* v___x_1047_; 
lean_dec(v_a_1038_);
lean_dec(v_a_1031_);
v___x_1045_ = lean_box(0);
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v___x_1045_);
v___x_1047_ = v___x_1040_;
goto v_reusejp_1046_;
}
else
{
lean_object* v_reuseFailAlloc_1048_; 
v_reuseFailAlloc_1048_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1048_, 0, v___x_1045_);
v___x_1047_ = v_reuseFailAlloc_1048_;
goto v_reusejp_1046_;
}
v_reusejp_1046_:
{
return v___x_1047_;
}
}
else
{
lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; uint8_t v___x_1053_; 
v___x_1049_ = l_Lean_Expr_appFn_x21(v_a_1038_);
lean_dec(v_a_1038_);
v___x_1050_ = l_Lean_Expr_appFn_x21(v___x_1049_);
lean_dec_ref(v___x_1049_);
v___x_1051_ = l_Lean_Expr_appArg_x21(v___x_1050_);
lean_dec_ref(v___x_1050_);
v___x_1052_ = l_Lean_Expr_cleanupAnnotations(v___x_1051_);
lean_dec_ref(v___x_1051_);
v___x_1053_ = l_Lean_Expr_isApp(v___x_1052_);
if (v___x_1053_ == 0)
{
lean_object* v___x_1054_; lean_object* v___x_1056_; 
lean_dec_ref(v___x_1052_);
lean_dec(v_a_1031_);
v___x_1054_ = lean_box(0);
if (v_isShared_1041_ == 0)
{
lean_ctor_set(v___x_1040_, 0, v___x_1054_);
v___x_1056_ = v___x_1040_;
goto v_reusejp_1055_;
}
else
{
lean_object* v_reuseFailAlloc_1057_; 
v_reuseFailAlloc_1057_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1057_, 0, v___x_1054_);
v___x_1056_ = v_reuseFailAlloc_1057_;
goto v_reusejp_1055_;
}
v_reusejp_1055_:
{
return v___x_1056_;
}
}
else
{
lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_del_object(v___x_1040_);
v___x_1058_ = l_Lean_Expr_getAppFn(v___x_1052_);
v___x_1059_ = l_Lean_Expr_getAppNumArgs(v___x_1052_);
lean_dec_ref(v___x_1052_);
v___x_1060_ = l_Lean_Meta_mkHCongrWithArity(v___x_1058_, v___x_1059_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1062_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
lean_inc(v_a_1061_);
lean_dec_ref_known(v___x_1060_, 1);
v___x_1062_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_applyCongrThm_x3f(v_a_1031_, v_a_1061_, v___y_1032_, v___y_1033_, v___y_1034_, v___y_1035_);
if (lean_obj_tag(v___x_1062_) == 0)
{
lean_object* v_a_1063_; lean_object* v___x_1065_; uint8_t v_isShared_1066_; uint8_t v_isSharedCheck_1071_; 
v_a_1063_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1071_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1071_ == 0)
{
v___x_1065_ = v___x_1062_;
v_isShared_1066_ = v_isSharedCheck_1071_;
goto v_resetjp_1064_;
}
else
{
lean_inc(v_a_1063_);
lean_dec(v___x_1062_);
v___x_1065_ = lean_box(0);
v_isShared_1066_ = v_isSharedCheck_1071_;
goto v_resetjp_1064_;
}
v_resetjp_1064_:
{
lean_object* v___x_1067_; lean_object* v___x_1069_; 
v___x_1067_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1067_, 0, v_a_1063_);
if (v_isShared_1066_ == 0)
{
lean_ctor_set(v___x_1065_, 0, v___x_1067_);
v___x_1069_ = v___x_1065_;
goto v_reusejp_1068_;
}
else
{
lean_object* v_reuseFailAlloc_1070_; 
v_reuseFailAlloc_1070_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1070_, 0, v___x_1067_);
v___x_1069_ = v_reuseFailAlloc_1070_;
goto v_reusejp_1068_;
}
v_reusejp_1068_:
{
return v___x_1069_;
}
}
}
else
{
lean_object* v_a_1072_; lean_object* v___x_1074_; uint8_t v_isShared_1075_; uint8_t v_isSharedCheck_1079_; 
v_a_1072_ = lean_ctor_get(v___x_1062_, 0);
v_isSharedCheck_1079_ = !lean_is_exclusive(v___x_1062_);
if (v_isSharedCheck_1079_ == 0)
{
v___x_1074_ = v___x_1062_;
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
else
{
lean_inc(v_a_1072_);
lean_dec(v___x_1062_);
v___x_1074_ = lean_box(0);
v_isShared_1075_ = v_isSharedCheck_1079_;
goto v_resetjp_1073_;
}
v_resetjp_1073_:
{
lean_object* v___x_1077_; 
if (v_isShared_1075_ == 0)
{
v___x_1077_ = v___x_1074_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_a_1072_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
return v___x_1077_;
}
}
}
}
else
{
lean_object* v_a_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1087_; 
lean_dec(v_a_1031_);
v_a_1080_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1087_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1087_ == 0)
{
v___x_1082_ = v___x_1060_;
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_a_1080_);
lean_dec(v___x_1060_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1087_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v___x_1085_; 
if (v_isShared_1083_ == 0)
{
v___x_1085_ = v___x_1082_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1086_; 
v_reuseFailAlloc_1086_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1086_, 0, v_a_1080_);
v___x_1085_ = v_reuseFailAlloc_1086_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
return v___x_1085_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_1089_; lean_object* v___x_1091_; uint8_t v_isShared_1092_; uint8_t v_isSharedCheck_1096_; 
lean_dec(v_a_1031_);
v_a_1089_ = lean_ctor_get(v___x_1037_, 0);
v_isSharedCheck_1096_ = !lean_is_exclusive(v___x_1037_);
if (v_isSharedCheck_1096_ == 0)
{
v___x_1091_ = v___x_1037_;
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
else
{
lean_inc(v_a_1089_);
lean_dec(v___x_1037_);
v___x_1091_ = lean_box(0);
v_isShared_1092_ = v_isSharedCheck_1096_;
goto v_resetjp_1090_;
}
v_resetjp_1090_:
{
lean_object* v___x_1094_; 
if (v_isShared_1092_ == 0)
{
v___x_1094_ = v___x_1091_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1095_; 
v_reuseFailAlloc_1095_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1095_, 0, v_a_1089_);
v___x_1094_ = v_reuseFailAlloc_1095_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
return v___x_1094_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__0___boxed(lean_object* v_a_1097_, lean_object* v___y_1098_, lean_object* v___y_1099_, lean_object* v___y_1100_, lean_object* v___y_1101_, lean_object* v___y_1102_){
_start:
{
lean_object* v_res_1103_; 
v_res_1103_ = l_Lean_MVarId_hcongr_x3f___lam__0(v_a_1097_, v___y_1098_, v___y_1099_, v___y_1100_, v___y_1101_);
lean_dec(v___y_1101_);
lean_dec_ref(v___y_1100_);
lean_dec(v___y_1099_);
lean_dec_ref(v___y_1098_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__1(lean_object* v_mvarId_1104_, lean_object* v___x_1105_, lean_object* v___y_1106_, lean_object* v___y_1107_, lean_object* v___y_1108_, lean_object* v___y_1109_){
_start:
{
lean_object* v___x_1111_; 
lean_inc(v_mvarId_1104_);
v___x_1111_ = l_Lean_MVarId_checkNotAssigned(v_mvarId_1104_, v___x_1105_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v___x_1112_; 
lean_dec_ref_known(v___x_1111_, 1);
v___x_1112_ = l_Lean_MVarId_eqOfHEq(v_mvarId_1104_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
if (lean_obj_tag(v___x_1112_) == 0)
{
lean_object* v_a_1113_; lean_object* v___f_1114_; lean_object* v___x_1115_; 
v_a_1113_ = lean_ctor_get(v___x_1112_, 0);
lean_inc_n(v_a_1113_, 2);
lean_dec_ref_known(v___x_1112_, 1);
v___f_1114_ = lean_alloc_closure((void*)(l_Lean_MVarId_hcongr_x3f___lam__0___boxed), 6, 1);
lean_closure_set(v___f_1114_, 0, v_a_1113_);
v___x_1115_ = l_Lean_MVarId_withContext___at___00Lean_MVarId_decisionCongr_spec__2___redArg(v_a_1113_, v___f_1114_, v___y_1106_, v___y_1107_, v___y_1108_, v___y_1109_);
return v___x_1115_;
}
else
{
lean_object* v_a_1116_; lean_object* v___x_1118_; uint8_t v_isShared_1119_; uint8_t v_isSharedCheck_1123_; 
v_a_1116_ = lean_ctor_get(v___x_1112_, 0);
v_isSharedCheck_1123_ = !lean_is_exclusive(v___x_1112_);
if (v_isSharedCheck_1123_ == 0)
{
v___x_1118_ = v___x_1112_;
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
else
{
lean_inc(v_a_1116_);
lean_dec(v___x_1112_);
v___x_1118_ = lean_box(0);
v_isShared_1119_ = v_isSharedCheck_1123_;
goto v_resetjp_1117_;
}
v_resetjp_1117_:
{
lean_object* v___x_1121_; 
if (v_isShared_1119_ == 0)
{
v___x_1121_ = v___x_1118_;
goto v_reusejp_1120_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v_a_1116_);
v___x_1121_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1120_;
}
v_reusejp_1120_:
{
return v___x_1121_;
}
}
}
}
else
{
lean_object* v_a_1124_; lean_object* v___x_1126_; uint8_t v_isShared_1127_; uint8_t v_isSharedCheck_1131_; 
lean_dec(v_mvarId_1104_);
v_a_1124_ = lean_ctor_get(v___x_1111_, 0);
v_isSharedCheck_1131_ = !lean_is_exclusive(v___x_1111_);
if (v_isSharedCheck_1131_ == 0)
{
v___x_1126_ = v___x_1111_;
v_isShared_1127_ = v_isSharedCheck_1131_;
goto v_resetjp_1125_;
}
else
{
lean_inc(v_a_1124_);
lean_dec(v___x_1111_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___lam__1___boxed(lean_object* v_mvarId_1132_, lean_object* v___x_1133_, lean_object* v___y_1134_, lean_object* v___y_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = l_Lean_MVarId_hcongr_x3f___lam__1(v_mvarId_1132_, v___x_1133_, v___y_1134_, v___y_1135_, v___y_1136_, v___y_1137_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec(v___y_1135_);
lean_dec_ref(v___y_1134_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f(lean_object* v_mvarId_1140_, lean_object* v_a_1141_, lean_object* v_a_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_){
_start:
{
lean_object* v___x_1146_; lean_object* v___f_1147_; lean_object* v___x_1148_; 
v___x_1146_ = ((lean_object*)(l_Lean_MVarId_congr_x3f___closed__1));
v___f_1147_ = lean_alloc_closure((void*)(l_Lean_MVarId_hcongr_x3f___lam__1___boxed), 7, 2);
lean_closure_set(v___f_1147_, 0, v_mvarId_1140_);
lean_closure_set(v___f_1147_, 1, v___x_1146_);
v___x_1148_ = l_Lean_commitWhenSomeNoEx_x3f___at___00Lean_MVarId_congr_x3f_spec__0___redArg(v___f_1147_, v_a_1141_, v_a_1142_, v_a_1143_, v_a_1144_);
return v___x_1148_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_hcongr_x3f___boxed(lean_object* v_mvarId_1149_, lean_object* v_a_1150_, lean_object* v_a_1151_, lean_object* v_a_1152_, lean_object* v_a_1153_, lean_object* v_a_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l_Lean_MVarId_hcongr_x3f(v_mvarId_1149_, v_a_1150_, v_a_1151_, v_a_1152_, v_a_1153_);
lean_dec(v_a_1153_);
lean_dec_ref(v_a_1152_);
lean_dec(v_a_1151_);
lean_dec_ref(v_a_1150_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg(lean_object* v_x_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v___x_1162_; 
v___x_1162_ = l_Lean_Meta_saveState___redArg(v___y_1158_, v___y_1160_);
if (lean_obj_tag(v___x_1162_) == 0)
{
lean_object* v_a_1163_; lean_object* v___x_1164_; 
v_a_1163_ = lean_ctor_get(v___x_1162_, 0);
lean_inc(v_a_1163_);
lean_dec_ref_known(v___x_1162_, 1);
lean_inc(v___y_1160_);
lean_inc_ref(v___y_1159_);
lean_inc(v___y_1158_);
lean_inc_ref(v___y_1157_);
v___x_1164_ = lean_apply_5(v_x_1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, lean_box(0));
if (lean_obj_tag(v___x_1164_) == 0)
{
lean_object* v_a_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1173_; 
lean_dec(v_a_1163_);
v_a_1165_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1173_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1173_ == 0)
{
v___x_1167_ = v___x_1164_;
v_isShared_1168_ = v_isSharedCheck_1173_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_a_1165_);
lean_dec(v___x_1164_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1173_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v___x_1169_; lean_object* v___x_1171_; 
v___x_1169_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1169_, 0, v_a_1165_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set(v___x_1167_, 0, v___x_1169_);
v___x_1171_ = v___x_1167_;
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
lean_object* v_a_1174_; lean_object* v___x_1176_; uint8_t v_isShared_1177_; uint8_t v_isSharedCheck_1204_; 
v_a_1174_ = lean_ctor_get(v___x_1164_, 0);
v_isSharedCheck_1204_ = !lean_is_exclusive(v___x_1164_);
if (v_isSharedCheck_1204_ == 0)
{
v___x_1176_ = v___x_1164_;
v_isShared_1177_ = v_isSharedCheck_1204_;
goto v_resetjp_1175_;
}
else
{
lean_inc(v_a_1174_);
lean_dec(v___x_1164_);
v___x_1176_ = lean_box(0);
v_isShared_1177_ = v_isSharedCheck_1204_;
goto v_resetjp_1175_;
}
v_resetjp_1175_:
{
uint8_t v___x_1178_; 
v___x_1178_ = l_Lean_Exception_isInterrupt(v_a_1174_);
if (v___x_1178_ == 0)
{
uint8_t v___x_1179_; 
lean_inc(v_a_1174_);
v___x_1179_ = l_Lean_Exception_isRuntime(v_a_1174_);
if (v___x_1179_ == 0)
{
lean_object* v___x_1180_; 
lean_del_object(v___x_1176_);
lean_dec(v_a_1174_);
v___x_1180_ = l_Lean_Meta_SavedState_restore___redArg(v_a_1163_, v___y_1158_, v___y_1160_);
if (lean_obj_tag(v___x_1180_) == 0)
{
lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1188_; 
v_isSharedCheck_1188_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1188_ == 0)
{
lean_object* v_unused_1189_; 
v_unused_1189_ = lean_ctor_get(v___x_1180_, 0);
lean_dec(v_unused_1189_);
v___x_1182_ = v___x_1180_;
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
else
{
lean_dec(v___x_1180_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1188_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v___x_1184_; lean_object* v___x_1186_; 
v___x_1184_ = lean_box(0);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 0, v___x_1184_);
v___x_1186_ = v___x_1182_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1187_; 
v_reuseFailAlloc_1187_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1187_, 0, v___x_1184_);
v___x_1186_ = v_reuseFailAlloc_1187_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
return v___x_1186_;
}
}
}
else
{
lean_object* v_a_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1197_; 
v_a_1190_ = lean_ctor_get(v___x_1180_, 0);
v_isSharedCheck_1197_ = !lean_is_exclusive(v___x_1180_);
if (v_isSharedCheck_1197_ == 0)
{
v___x_1192_ = v___x_1180_;
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_a_1190_);
lean_dec(v___x_1180_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1197_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
lean_object* v___x_1195_; 
if (v_isShared_1193_ == 0)
{
v___x_1195_ = v___x_1192_;
goto v_reusejp_1194_;
}
else
{
lean_object* v_reuseFailAlloc_1196_; 
v_reuseFailAlloc_1196_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1196_, 0, v_a_1190_);
v___x_1195_ = v_reuseFailAlloc_1196_;
goto v_reusejp_1194_;
}
v_reusejp_1194_:
{
return v___x_1195_;
}
}
}
}
else
{
lean_object* v___x_1199_; 
lean_dec(v_a_1163_);
if (v_isShared_1177_ == 0)
{
v___x_1199_ = v___x_1176_;
goto v_reusejp_1198_;
}
else
{
lean_object* v_reuseFailAlloc_1200_; 
v_reuseFailAlloc_1200_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1200_, 0, v_a_1174_);
v___x_1199_ = v_reuseFailAlloc_1200_;
goto v_reusejp_1198_;
}
v_reusejp_1198_:
{
return v___x_1199_;
}
}
}
else
{
lean_object* v___x_1202_; 
lean_dec(v_a_1163_);
if (v_isShared_1177_ == 0)
{
v___x_1202_ = v___x_1176_;
goto v_reusejp_1201_;
}
else
{
lean_object* v_reuseFailAlloc_1203_; 
v_reuseFailAlloc_1203_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1203_, 0, v_a_1174_);
v___x_1202_ = v_reuseFailAlloc_1203_;
goto v_reusejp_1201_;
}
v_reusejp_1201_:
{
return v___x_1202_;
}
}
}
}
}
else
{
lean_object* v_a_1205_; lean_object* v___x_1207_; uint8_t v_isShared_1208_; uint8_t v_isSharedCheck_1212_; 
lean_dec_ref(v_x_1156_);
v_a_1205_ = lean_ctor_get(v___x_1162_, 0);
v_isSharedCheck_1212_ = !lean_is_exclusive(v___x_1162_);
if (v_isSharedCheck_1212_ == 0)
{
v___x_1207_ = v___x_1162_;
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
else
{
lean_inc(v_a_1205_);
lean_dec(v___x_1162_);
v___x_1207_ = lean_box(0);
v_isShared_1208_ = v_isSharedCheck_1212_;
goto v_resetjp_1206_;
}
v_resetjp_1206_:
{
lean_object* v___x_1210_; 
if (v_isShared_1208_ == 0)
{
v___x_1210_ = v___x_1207_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v_a_1205_);
v___x_1210_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
return v___x_1210_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg___boxed(lean_object* v_x_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg(v_x_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_);
lean_dec(v___y_1217_);
lean_dec_ref(v___y_1216_);
lean_dec(v___y_1215_);
lean_dec_ref(v___y_1214_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1(lean_object* v_00_u03b1_1220_, lean_object* v_x_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_){
_start:
{
lean_object* v___x_1227_; 
v___x_1227_ = l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg(v_x_1221_, v___y_1222_, v___y_1223_, v___y_1224_, v___y_1225_);
return v___x_1227_;
}
}
LEAN_EXPORT lean_object* l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___boxed(lean_object* v_00_u03b1_1228_, lean_object* v_x_1229_, lean_object* v___y_1230_, lean_object* v___y_1231_, lean_object* v___y_1232_, lean_object* v___y_1233_, lean_object* v___y_1234_){
_start:
{
lean_object* v_res_1235_; 
v_res_1235_ = l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1(v_00_u03b1_1228_, v_x_1229_, v___y_1230_, v___y_1231_, v___y_1232_, v___y_1233_);
lean_dec(v___y_1233_);
lean_dec_ref(v___y_1232_);
lean_dec(v___y_1231_);
lean_dec_ref(v___y_1230_);
return v_res_1235_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0_spec__0(lean_object* v_msgData_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_){
_start:
{
lean_object* v___x_1242_; lean_object* v_env_1243_; uint8_t v___x_1244_; lean_object* v_env_1245_; lean_object* v___x_1246_; lean_object* v_toCold_1247_; lean_object* v_mctx_1248_; lean_object* v_lctx_1249_; lean_object* v_options_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; 
v___x_1242_ = lean_st_ref_get(v___y_1240_);
v_env_1243_ = lean_ctor_get(v___x_1242_, 0);
lean_inc_ref(v_env_1243_);
lean_dec(v___x_1242_);
v___x_1244_ = 0;
v_env_1245_ = l_Lean_Environment_setRecordingDeps(v_env_1243_, v___x_1244_);
v___x_1246_ = lean_st_ref_get(v___y_1238_);
v_toCold_1247_ = lean_ctor_get(v___y_1239_, 0);
v_mctx_1248_ = lean_ctor_get(v___x_1246_, 0);
lean_inc_ref(v_mctx_1248_);
lean_dec(v___x_1246_);
v_lctx_1249_ = lean_ctor_get(v___y_1237_, 2);
v_options_1250_ = lean_ctor_get(v_toCold_1247_, 2);
lean_inc_ref(v_options_1250_);
lean_inc_ref(v_lctx_1249_);
v___x_1251_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1251_, 0, v_env_1245_);
lean_ctor_set(v___x_1251_, 1, v_mctx_1248_);
lean_ctor_set(v___x_1251_, 2, v_lctx_1249_);
lean_ctor_set(v___x_1251_, 3, v_options_1250_);
v___x_1252_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1252_, 0, v___x_1251_);
lean_ctor_set(v___x_1252_, 1, v_msgData_1236_);
v___x_1253_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1253_, 0, v___x_1252_);
return v___x_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0_spec__0___boxed(lean_object* v_msgData_1254_, lean_object* v___y_1255_, lean_object* v___y_1256_, lean_object* v___y_1257_, lean_object* v___y_1258_, lean_object* v___y_1259_){
_start:
{
lean_object* v_res_1260_; 
v_res_1260_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0_spec__0(v_msgData_1254_, v___y_1255_, v___y_1256_, v___y_1257_, v___y_1258_);
lean_dec(v___y_1258_);
lean_dec_ref(v___y_1257_);
lean_dec(v___y_1256_);
lean_dec_ref(v___y_1255_);
return v_res_1260_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___redArg(lean_object* v_msg_1261_, lean_object* v___y_1262_, lean_object* v___y_1263_, lean_object* v___y_1264_, lean_object* v___y_1265_){
_start:
{
lean_object* v_ref_1267_; lean_object* v___x_1268_; lean_object* v_a_1269_; lean_object* v___x_1271_; uint8_t v_isShared_1272_; uint8_t v_isSharedCheck_1277_; 
v_ref_1267_ = lean_ctor_get(v___y_1264_, 2);
v___x_1268_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0_spec__0(v_msg_1261_, v___y_1262_, v___y_1263_, v___y_1264_, v___y_1265_);
v_a_1269_ = lean_ctor_get(v___x_1268_, 0);
v_isSharedCheck_1277_ = !lean_is_exclusive(v___x_1268_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1271_ = v___x_1268_;
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
else
{
lean_inc(v_a_1269_);
lean_dec(v___x_1268_);
v___x_1271_ = lean_box(0);
v_isShared_1272_ = v_isSharedCheck_1277_;
goto v_resetjp_1270_;
}
v_resetjp_1270_:
{
lean_object* v___x_1273_; lean_object* v___x_1275_; 
lean_inc(v_ref_1267_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v_ref_1267_);
lean_ctor_set(v___x_1273_, 1, v_a_1269_);
if (v_isShared_1272_ == 0)
{
lean_ctor_set_tag(v___x_1271_, 1);
lean_ctor_set(v___x_1271_, 0, v___x_1273_);
v___x_1275_ = v___x_1271_;
goto v_reusejp_1274_;
}
else
{
lean_object* v_reuseFailAlloc_1276_; 
v_reuseFailAlloc_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1276_, 0, v___x_1273_);
v___x_1275_ = v_reuseFailAlloc_1276_;
goto v_reusejp_1274_;
}
v_reusejp_1274_:
{
return v___x_1275_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___redArg___boxed(lean_object* v_msg_1278_, lean_object* v___y_1279_, lean_object* v___y_1280_, lean_object* v___y_1281_, lean_object* v___y_1282_, lean_object* v___y_1283_){
_start:
{
lean_object* v_res_1284_; 
v_res_1284_ = l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___redArg(v_msg_1278_, v___y_1279_, v___y_1280_, v___y_1281_, v___y_1282_);
lean_dec(v___y_1282_);
lean_dec_ref(v___y_1281_);
lean_dec(v___y_1280_);
lean_dec_ref(v___y_1279_);
return v_res_1284_;
}
}
static lean_object* _init_l_Lean_MVarId_congrImplies_x3f___lam__0___closed__1(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1286_ = ((lean_object*)(l_Lean_MVarId_congrImplies_x3f___lam__0___closed__0));
v___x_1287_ = l_Lean_stringToMessageData(v___x_1286_);
return v___x_1287_;
}
}
static lean_object* _init_l_Lean_MVarId_congrImplies_x3f___lam__0___closed__3(void){
_start:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = ((lean_object*)(l_Lean_MVarId_congrImplies_x3f___lam__0___closed__2));
v___x_1290_ = l_Lean_stringToMessageData(v___x_1289_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0(lean_object* v___x_1295_, lean_object* v_mvarId_1296_, lean_object* v___y_1297_, lean_object* v___y_1298_, lean_object* v___y_1299_, lean_object* v___y_1300_){
_start:
{
lean_object* v___x_1302_; 
lean_inc(v___x_1295_);
v___x_1302_ = l_Lean_Meta_mkConstWithFreshMVarLevels(v___x_1295_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
if (lean_obj_tag(v___x_1302_) == 0)
{
lean_object* v_a_1303_; uint8_t v___x_1304_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v_a_1303_ = lean_ctor_get(v___x_1302_, 0);
lean_inc(v_a_1303_);
lean_dec_ref_known(v___x_1302_, 1);
v___x_1304_ = 0;
v___x_1316_ = ((lean_object*)(l_Lean_MVarId_congrImplies_x3f___lam__0___closed__4));
v___x_1317_ = lean_box(0);
v___x_1318_ = l_Lean_MVarId_apply(v_mvarId_1296_, v_a_1303_, v___x_1316_, v___x_1317_, v___y_1297_, v___y_1298_, v___y_1299_, v___y_1300_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1321_; uint8_t v_isShared_1322_; uint8_t v_isSharedCheck_1346_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1346_ == 0)
{
v___x_1321_ = v___x_1318_;
v_isShared_1322_ = v_isSharedCheck_1346_;
goto v_resetjp_1320_;
}
else
{
lean_inc(v_a_1319_);
lean_dec(v___x_1318_);
v___x_1321_ = lean_box(0);
v_isShared_1322_ = v_isSharedCheck_1346_;
goto v_resetjp_1320_;
}
v_resetjp_1320_:
{
if (lean_obj_tag(v_a_1319_) == 1)
{
lean_object* v_tail_1323_; 
v_tail_1323_ = lean_ctor_get(v_a_1319_, 1);
lean_inc(v_tail_1323_);
if (lean_obj_tag(v_tail_1323_) == 1)
{
lean_object* v_head_1324_; lean_object* v___x_1326_; uint8_t v_isShared_1327_; uint8_t v_isSharedCheck_1344_; 
lean_dec(v___x_1295_);
v_head_1324_ = lean_ctor_get(v_a_1319_, 0);
v_isSharedCheck_1344_ = !lean_is_exclusive(v_a_1319_);
if (v_isSharedCheck_1344_ == 0)
{
lean_object* v_unused_1345_; 
v_unused_1345_ = lean_ctor_get(v_a_1319_, 1);
lean_dec(v_unused_1345_);
v___x_1326_ = v_a_1319_;
v_isShared_1327_ = v_isSharedCheck_1344_;
goto v_resetjp_1325_;
}
else
{
lean_inc(v_head_1324_);
lean_dec(v_a_1319_);
v___x_1326_ = lean_box(0);
v_isShared_1327_ = v_isSharedCheck_1344_;
goto v_resetjp_1325_;
}
v_resetjp_1325_:
{
lean_object* v_head_1328_; lean_object* v___x_1330_; uint8_t v_isShared_1331_; uint8_t v_isSharedCheck_1342_; 
v_head_1328_ = lean_ctor_get(v_tail_1323_, 0);
v_isSharedCheck_1342_ = !lean_is_exclusive(v_tail_1323_);
if (v_isSharedCheck_1342_ == 0)
{
lean_object* v_unused_1343_; 
v_unused_1343_ = lean_ctor_get(v_tail_1323_, 1);
lean_dec(v_unused_1343_);
v___x_1330_ = v_tail_1323_;
v_isShared_1331_ = v_isSharedCheck_1342_;
goto v_resetjp_1329_;
}
else
{
lean_inc(v_head_1328_);
lean_dec(v_tail_1323_);
v___x_1330_ = lean_box(0);
v_isShared_1331_ = v_isSharedCheck_1342_;
goto v_resetjp_1329_;
}
v_resetjp_1329_:
{
lean_object* v___x_1332_; lean_object* v___x_1334_; 
v___x_1332_ = lean_box(0);
if (v_isShared_1331_ == 0)
{
lean_ctor_set(v___x_1330_, 1, v___x_1332_);
v___x_1334_ = v___x_1330_;
goto v_reusejp_1333_;
}
else
{
lean_object* v_reuseFailAlloc_1341_; 
v_reuseFailAlloc_1341_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1341_, 0, v_head_1328_);
lean_ctor_set(v_reuseFailAlloc_1341_, 1, v___x_1332_);
v___x_1334_ = v_reuseFailAlloc_1341_;
goto v_reusejp_1333_;
}
v_reusejp_1333_:
{
lean_object* v___x_1336_; 
if (v_isShared_1327_ == 0)
{
lean_ctor_set(v___x_1326_, 1, v___x_1334_);
v___x_1336_ = v___x_1326_;
goto v_reusejp_1335_;
}
else
{
lean_object* v_reuseFailAlloc_1340_; 
v_reuseFailAlloc_1340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1340_, 0, v_head_1324_);
lean_ctor_set(v_reuseFailAlloc_1340_, 1, v___x_1334_);
v___x_1336_ = v_reuseFailAlloc_1340_;
goto v_reusejp_1335_;
}
v_reusejp_1335_:
{
lean_object* v___x_1338_; 
if (v_isShared_1322_ == 0)
{
lean_ctor_set(v___x_1321_, 0, v___x_1336_);
v___x_1338_ = v___x_1321_;
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
}
}
}
}
else
{
lean_dec(v_tail_1323_);
lean_dec_ref_known(v_a_1319_, 2);
lean_del_object(v___x_1321_);
v___y_1306_ = v___y_1297_;
v___y_1307_ = v___y_1298_;
v___y_1308_ = v___y_1299_;
v___y_1309_ = v___y_1300_;
goto v___jp_1305_;
}
}
else
{
lean_del_object(v___x_1321_);
lean_dec(v_a_1319_);
v___y_1306_ = v___y_1297_;
v___y_1307_ = v___y_1298_;
v___y_1308_ = v___y_1299_;
v___y_1309_ = v___y_1300_;
goto v___jp_1305_;
}
}
}
else
{
lean_dec(v___x_1295_);
return v___x_1318_;
}
v___jp_1305_:
{
lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1315_; 
v___x_1310_ = lean_obj_once(&l_Lean_MVarId_congrImplies_x3f___lam__0___closed__1, &l_Lean_MVarId_congrImplies_x3f___lam__0___closed__1_once, _init_l_Lean_MVarId_congrImplies_x3f___lam__0___closed__1);
v___x_1311_ = l_Lean_MessageData_ofConstName(v___x_1295_, v___x_1304_);
v___x_1312_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1312_, 0, v___x_1310_);
lean_ctor_set(v___x_1312_, 1, v___x_1311_);
v___x_1313_ = lean_obj_once(&l_Lean_MVarId_congrImplies_x3f___lam__0___closed__3, &l_Lean_MVarId_congrImplies_x3f___lam__0___closed__3_once, _init_l_Lean_MVarId_congrImplies_x3f___lam__0___closed__3);
v___x_1314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1312_);
lean_ctor_set(v___x_1314_, 1, v___x_1313_);
v___x_1315_ = l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___redArg(v___x_1314_, v___y_1306_, v___y_1307_, v___y_1308_, v___y_1309_);
return v___x_1315_;
}
}
else
{
lean_object* v_a_1347_; lean_object* v___x_1349_; uint8_t v_isShared_1350_; uint8_t v_isSharedCheck_1354_; 
lean_dec(v_mvarId_1296_);
lean_dec(v___x_1295_);
v_a_1347_ = lean_ctor_get(v___x_1302_, 0);
v_isSharedCheck_1354_ = !lean_is_exclusive(v___x_1302_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1349_ = v___x_1302_;
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
else
{
lean_inc(v_a_1347_);
lean_dec(v___x_1302_);
v___x_1349_ = lean_box(0);
v_isShared_1350_ = v_isSharedCheck_1354_;
goto v_resetjp_1348_;
}
v_resetjp_1348_:
{
lean_object* v___x_1352_; 
if (v_isShared_1350_ == 0)
{
v___x_1352_ = v___x_1349_;
goto v_reusejp_1351_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v_a_1347_);
v___x_1352_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1351_;
}
v_reusejp_1351_:
{
return v___x_1352_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f___lam__0___boxed(lean_object* v___x_1355_, lean_object* v_mvarId_1356_, lean_object* v___y_1357_, lean_object* v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_){
_start:
{
lean_object* v_res_1362_; 
v_res_1362_ = l_Lean_MVarId_congrImplies_x3f___lam__0(v___x_1355_, v_mvarId_1356_, v___y_1357_, v___y_1358_, v___y_1359_, v___y_1360_);
lean_dec(v___y_1360_);
lean_dec_ref(v___y_1359_);
lean_dec(v___y_1358_);
lean_dec_ref(v___y_1357_);
return v_res_1362_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f(lean_object* v_mvarId_1366_, lean_object* v_a_1367_, lean_object* v_a_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
lean_object* v___x_1372_; lean_object* v___f_1373_; lean_object* v___x_1374_; 
v___x_1372_ = ((lean_object*)(l_Lean_MVarId_congrImplies_x3f___closed__1));
v___f_1373_ = lean_alloc_closure((void*)(l_Lean_MVarId_congrImplies_x3f___lam__0___boxed), 7, 2);
lean_closure_set(v___f_1373_, 0, v___x_1372_);
lean_closure_set(v___f_1373_, 1, v_mvarId_1366_);
v___x_1374_ = l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg(v___f_1373_, v_a_1367_, v_a_1368_, v_a_1369_, v_a_1370_);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrImplies_x3f___boxed(lean_object* v_mvarId_1375_, lean_object* v_a_1376_, lean_object* v_a_1377_, lean_object* v_a_1378_, lean_object* v_a_1379_, lean_object* v_a_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Lean_MVarId_congrImplies_x3f(v_mvarId_1375_, v_a_1376_, v_a_1377_, v_a_1378_, v_a_1379_);
lean_dec(v_a_1379_);
lean_dec_ref(v_a_1378_);
lean_dec(v_a_1377_);
lean_dec_ref(v_a_1376_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0(lean_object* v_00_u03b1_1382_, lean_object* v_msg_1383_, lean_object* v___y_1384_, lean_object* v___y_1385_, lean_object* v___y_1386_, lean_object* v___y_1387_){
_start:
{
lean_object* v___x_1389_; 
v___x_1389_ = l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___redArg(v_msg_1383_, v___y_1384_, v___y_1385_, v___y_1386_, v___y_1387_);
return v___x_1389_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0___boxed(lean_object* v_00_u03b1_1390_, lean_object* v_msg_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lean_throwError___at___00Lean_MVarId_congrImplies_x3f_spec__0(v_00_u03b1_1390_, v_msg_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
return v_res_1397_;
}
}
static lean_object* _init_l_Lean_MVarId_congrCore___closed__2(void){
_start:
{
lean_object* v___x_1401_; lean_object* v___x_1402_; 
v___x_1401_ = ((lean_object*)(l_Lean_MVarId_congrCore___closed__1));
v___x_1402_ = l_Lean_MessageData_ofFormat(v___x_1401_);
return v___x_1402_;
}
}
static lean_object* _init_l_Lean_MVarId_congrCore___closed__3(void){
_start:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1403_ = lean_obj_once(&l_Lean_MVarId_congrCore___closed__2, &l_Lean_MVarId_congrCore___closed__2_once, _init_l_Lean_MVarId_congrCore___closed__2);
v___x_1404_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1403_);
return v___x_1404_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrCore(lean_object* v_mvarId_1405_, lean_object* v_a_1406_, lean_object* v_a_1407_, lean_object* v_a_1408_, lean_object* v_a_1409_){
_start:
{
lean_object* v___x_1411_; 
lean_inc(v_mvarId_1405_);
v___x_1411_ = l_Lean_MVarId_congr_x3f(v_mvarId_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_);
if (lean_obj_tag(v___x_1411_) == 0)
{
lean_object* v_a_1412_; lean_object* v___x_1414_; uint8_t v_isShared_1415_; uint8_t v_isSharedCheck_1459_; 
v_a_1412_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1459_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1414_ = v___x_1411_;
v_isShared_1415_ = v_isSharedCheck_1459_;
goto v_resetjp_1413_;
}
else
{
lean_inc(v_a_1412_);
lean_dec(v___x_1411_);
v___x_1414_ = lean_box(0);
v_isShared_1415_ = v_isSharedCheck_1459_;
goto v_resetjp_1413_;
}
v_resetjp_1413_:
{
if (lean_obj_tag(v_a_1412_) == 1)
{
lean_object* v_val_1416_; lean_object* v___x_1418_; 
lean_dec(v_mvarId_1405_);
v_val_1416_ = lean_ctor_get(v_a_1412_, 0);
lean_inc(v_val_1416_);
lean_dec_ref_known(v_a_1412_, 1);
if (v_isShared_1415_ == 0)
{
lean_ctor_set(v___x_1414_, 0, v_val_1416_);
v___x_1418_ = v___x_1414_;
goto v_reusejp_1417_;
}
else
{
lean_object* v_reuseFailAlloc_1419_; 
v_reuseFailAlloc_1419_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1419_, 0, v_val_1416_);
v___x_1418_ = v_reuseFailAlloc_1419_;
goto v_reusejp_1417_;
}
v_reusejp_1417_:
{
return v___x_1418_;
}
}
else
{
lean_object* v___x_1420_; 
lean_del_object(v___x_1414_);
lean_dec(v_a_1412_);
lean_inc(v_mvarId_1405_);
v___x_1420_ = l_Lean_MVarId_hcongr_x3f(v_mvarId_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_);
if (lean_obj_tag(v___x_1420_) == 0)
{
lean_object* v_a_1421_; lean_object* v___x_1423_; uint8_t v_isShared_1424_; uint8_t v_isSharedCheck_1450_; 
v_a_1421_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1450_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1450_ == 0)
{
v___x_1423_ = v___x_1420_;
v_isShared_1424_ = v_isSharedCheck_1450_;
goto v_resetjp_1422_;
}
else
{
lean_inc(v_a_1421_);
lean_dec(v___x_1420_);
v___x_1423_ = lean_box(0);
v_isShared_1424_ = v_isSharedCheck_1450_;
goto v_resetjp_1422_;
}
v_resetjp_1422_:
{
if (lean_obj_tag(v_a_1421_) == 1)
{
lean_object* v_val_1425_; lean_object* v___x_1427_; 
lean_dec(v_mvarId_1405_);
v_val_1425_ = lean_ctor_get(v_a_1421_, 0);
lean_inc(v_val_1425_);
lean_dec_ref_known(v_a_1421_, 1);
if (v_isShared_1424_ == 0)
{
lean_ctor_set(v___x_1423_, 0, v_val_1425_);
v___x_1427_ = v___x_1423_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v_val_1425_);
v___x_1427_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
return v___x_1427_;
}
}
else
{
lean_object* v___x_1429_; 
lean_del_object(v___x_1423_);
lean_dec(v_a_1421_);
lean_inc(v_mvarId_1405_);
v___x_1429_ = l_Lean_MVarId_congrImplies_x3f(v_mvarId_1405_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_);
if (lean_obj_tag(v___x_1429_) == 0)
{
lean_object* v_a_1430_; lean_object* v___x_1432_; uint8_t v_isShared_1433_; uint8_t v_isSharedCheck_1441_; 
v_a_1430_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1441_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1441_ == 0)
{
v___x_1432_ = v___x_1429_;
v_isShared_1433_ = v_isSharedCheck_1441_;
goto v_resetjp_1431_;
}
else
{
lean_inc(v_a_1430_);
lean_dec(v___x_1429_);
v___x_1432_ = lean_box(0);
v_isShared_1433_ = v_isSharedCheck_1441_;
goto v_resetjp_1431_;
}
v_resetjp_1431_:
{
if (lean_obj_tag(v_a_1430_) == 1)
{
lean_object* v_val_1434_; lean_object* v___x_1436_; 
lean_dec(v_mvarId_1405_);
v_val_1434_ = lean_ctor_get(v_a_1430_, 0);
lean_inc(v_val_1434_);
lean_dec_ref_known(v_a_1430_, 1);
if (v_isShared_1433_ == 0)
{
lean_ctor_set(v___x_1432_, 0, v_val_1434_);
v___x_1436_ = v___x_1432_;
goto v_reusejp_1435_;
}
else
{
lean_object* v_reuseFailAlloc_1437_; 
v_reuseFailAlloc_1437_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1437_, 0, v_val_1434_);
v___x_1436_ = v_reuseFailAlloc_1437_;
goto v_reusejp_1435_;
}
v_reusejp_1435_:
{
return v___x_1436_;
}
}
else
{
lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
lean_del_object(v___x_1432_);
lean_dec(v_a_1430_);
v___x_1438_ = ((lean_object*)(l_Lean_MVarId_congr_x3f___closed__1));
v___x_1439_ = lean_obj_once(&l_Lean_MVarId_congrCore___closed__3, &l_Lean_MVarId_congrCore___closed__3_once, _init_l_Lean_MVarId_congrCore___closed__3);
v___x_1440_ = l_Lean_Meta_throwTacticEx___redArg(v___x_1438_, v_mvarId_1405_, v___x_1439_, v_a_1406_, v_a_1407_, v_a_1408_, v_a_1409_);
return v___x_1440_;
}
}
}
else
{
lean_object* v_a_1442_; lean_object* v___x_1444_; uint8_t v_isShared_1445_; uint8_t v_isSharedCheck_1449_; 
lean_dec(v_mvarId_1405_);
v_a_1442_ = lean_ctor_get(v___x_1429_, 0);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1429_);
if (v_isSharedCheck_1449_ == 0)
{
v___x_1444_ = v___x_1429_;
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
else
{
lean_inc(v_a_1442_);
lean_dec(v___x_1429_);
v___x_1444_ = lean_box(0);
v_isShared_1445_ = v_isSharedCheck_1449_;
goto v_resetjp_1443_;
}
v_resetjp_1443_:
{
lean_object* v___x_1447_; 
if (v_isShared_1445_ == 0)
{
v___x_1447_ = v___x_1444_;
goto v_reusejp_1446_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v_a_1442_);
v___x_1447_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1446_;
}
v_reusejp_1446_:
{
return v___x_1447_;
}
}
}
}
}
}
else
{
lean_object* v_a_1451_; lean_object* v___x_1453_; uint8_t v_isShared_1454_; uint8_t v_isSharedCheck_1458_; 
lean_dec(v_mvarId_1405_);
v_a_1451_ = lean_ctor_get(v___x_1420_, 0);
v_isSharedCheck_1458_ = !lean_is_exclusive(v___x_1420_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1453_ = v___x_1420_;
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
else
{
lean_inc(v_a_1451_);
lean_dec(v___x_1420_);
v___x_1453_ = lean_box(0);
v_isShared_1454_ = v_isSharedCheck_1458_;
goto v_resetjp_1452_;
}
v_resetjp_1452_:
{
lean_object* v___x_1456_; 
if (v_isShared_1454_ == 0)
{
v___x_1456_ = v___x_1453_;
goto v_reusejp_1455_;
}
else
{
lean_object* v_reuseFailAlloc_1457_; 
v_reuseFailAlloc_1457_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1457_, 0, v_a_1451_);
v___x_1456_ = v_reuseFailAlloc_1457_;
goto v_reusejp_1455_;
}
v_reusejp_1455_:
{
return v___x_1456_;
}
}
}
}
}
}
else
{
lean_object* v_a_1460_; lean_object* v___x_1462_; uint8_t v_isShared_1463_; uint8_t v_isSharedCheck_1467_; 
lean_dec(v_mvarId_1405_);
v_a_1460_ = lean_ctor_get(v___x_1411_, 0);
v_isSharedCheck_1467_ = !lean_is_exclusive(v___x_1411_);
if (v_isSharedCheck_1467_ == 0)
{
v___x_1462_ = v___x_1411_;
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
else
{
lean_inc(v_a_1460_);
lean_dec(v___x_1411_);
v___x_1462_ = lean_box(0);
v_isShared_1463_ = v_isSharedCheck_1467_;
goto v_resetjp_1461_;
}
v_resetjp_1461_:
{
lean_object* v___x_1465_; 
if (v_isShared_1463_ == 0)
{
v___x_1465_ = v___x_1462_;
goto v_reusejp_1464_;
}
else
{
lean_object* v_reuseFailAlloc_1466_; 
v_reuseFailAlloc_1466_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1466_, 0, v_a_1460_);
v___x_1465_ = v_reuseFailAlloc_1466_;
goto v_reusejp_1464_;
}
v_reusejp_1464_:
{
return v___x_1465_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrCore___boxed(lean_object* v_mvarId_1468_, lean_object* v_a_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_, lean_object* v_a_1472_, lean_object* v_a_1473_){
_start:
{
lean_object* v_res_1474_; 
v_res_1474_ = l_Lean_MVarId_congrCore(v_mvarId_1468_, v_a_1469_, v_a_1470_, v_a_1471_, v_a_1472_);
lean_dec(v_a_1472_);
lean_dec_ref(v_a_1471_);
lean_dec(v_a_1470_);
lean_dec_ref(v_a_1469_);
return v_res_1474_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_post(uint8_t v_closePost_1475_, lean_object* v_mvarId_1476_, lean_object* v_a_1477_, lean_object* v_a_1478_, lean_object* v_a_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l_Lean_Meta_Context_config(v_a_1478_);
if (v_closePost_1475_ == 0)
{
lean_dec_ref(v___x_1489_);
goto v___jp_1483_;
}
else
{
uint8_t v_transparency_1490_; uint8_t v___x_1491_; uint8_t v___x_1492_; 
v_transparency_1490_ = lean_ctor_get_uint8(v___x_1489_, 9);
lean_dec_ref(v___x_1489_);
v___x_1491_ = 2;
v___x_1492_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1490_, v___x_1491_);
if (v___x_1492_ == 0)
{
uint8_t v___x_1493_; uint8_t v___x_1494_; 
v___x_1493_ = 4;
v___x_1494_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1490_, v___x_1493_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; 
v___x_1495_ = l_Lean_MVarId_congrPre(v_mvarId_1476_, v_a_1478_, v_a_1479_, v_a_1480_, v_a_1481_);
if (lean_obj_tag(v___x_1495_) == 0)
{
lean_object* v_a_1496_; lean_object* v___x_1498_; uint8_t v_isShared_1499_; uint8_t v_isSharedCheck_1512_; 
v_a_1496_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1512_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1512_ == 0)
{
v___x_1498_ = v___x_1495_;
v_isShared_1499_ = v_isSharedCheck_1512_;
goto v_resetjp_1497_;
}
else
{
lean_inc(v_a_1496_);
lean_dec(v___x_1495_);
v___x_1498_ = lean_box(0);
v_isShared_1499_ = v_isSharedCheck_1512_;
goto v_resetjp_1497_;
}
v_resetjp_1497_:
{
if (lean_obj_tag(v_a_1496_) == 1)
{
lean_object* v_val_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1506_; 
v_val_1500_ = lean_ctor_get(v_a_1496_, 0);
lean_inc(v_val_1500_);
lean_dec_ref_known(v_a_1496_, 1);
v___x_1501_ = lean_st_ref_take(v_a_1477_);
v___x_1502_ = lean_box(0);
v___x_1503_ = lean_array_push(v___x_1501_, v_val_1500_);
v___x_1504_ = lean_st_ref_put(v_a_1477_, v___x_1503_);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1502_);
v___x_1506_ = v___x_1498_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1507_; 
v_reuseFailAlloc_1507_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1507_, 0, v___x_1502_);
v___x_1506_ = v_reuseFailAlloc_1507_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
return v___x_1506_;
}
}
else
{
lean_object* v___x_1508_; lean_object* v___x_1510_; 
lean_dec(v_a_1496_);
v___x_1508_ = lean_box(0);
if (v_isShared_1499_ == 0)
{
lean_ctor_set(v___x_1498_, 0, v___x_1508_);
v___x_1510_ = v___x_1498_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1508_);
v___x_1510_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
return v___x_1510_;
}
}
}
}
else
{
lean_object* v_a_1513_; lean_object* v___x_1515_; uint8_t v_isShared_1516_; uint8_t v_isSharedCheck_1520_; 
v_a_1513_ = lean_ctor_get(v___x_1495_, 0);
v_isSharedCheck_1520_ = !lean_is_exclusive(v___x_1495_);
if (v_isSharedCheck_1520_ == 0)
{
v___x_1515_ = v___x_1495_;
v_isShared_1516_ = v_isSharedCheck_1520_;
goto v_resetjp_1514_;
}
else
{
lean_inc(v_a_1513_);
lean_dec(v___x_1495_);
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
goto v___jp_1483_;
}
}
else
{
goto v___jp_1483_;
}
}
v___jp_1483_:
{
lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1484_ = lean_st_ref_take(v_a_1477_);
v___x_1485_ = lean_box(0);
v___x_1486_ = lean_array_push(v___x_1484_, v_mvarId_1476_);
v___x_1487_ = lean_st_ref_put(v_a_1477_, v___x_1486_);
v___x_1488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1488_, 0, v___x_1485_);
return v___x_1488_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_post___boxed(lean_object* v_closePost_1521_, lean_object* v_mvarId_1522_, lean_object* v_a_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_){
_start:
{
uint8_t v_closePost_boxed_1529_; lean_object* v_res_1530_; 
v_closePost_boxed_1529_ = lean_unbox(v_closePost_1521_);
v_res_1530_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_post(v_closePost_boxed_1529_, v_mvarId_1522_, v_a_1523_, v_a_1524_, v_a_1525_, v_a_1526_, v_a_1527_);
lean_dec(v_a_1527_);
lean_dec_ref(v_a_1526_);
lean_dec(v_a_1525_);
lean_dec_ref(v_a_1524_);
lean_dec(v_a_1523_);
return v_res_1530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go(uint8_t v_closePre_1531_, uint8_t v_closePost_1532_, lean_object* v_n_1533_, lean_object* v_mvarId_1534_, lean_object* v_a_1535_, lean_object* v_a_1536_, lean_object* v_a_1537_, lean_object* v_a_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_val_1542_; lean_object* v___y_1563_; lean_object* v___x_1582_; 
v___x_1582_ = l_Lean_MVarId_decisionCongr(v_mvarId_1534_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
if (lean_obj_tag(v___x_1582_) == 0)
{
if (v_closePre_1531_ == 0)
{
lean_object* v_a_1583_; 
v_a_1583_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1583_);
lean_dec_ref_known(v___x_1582_, 1);
v_val_1542_ = v_a_1583_;
goto v___jp_1541_;
}
else
{
lean_object* v_a_1584_; lean_object* v___x_1585_; uint8_t v_transparency_1586_; uint8_t v___x_1587_; uint8_t v___x_1588_; 
v_a_1584_ = lean_ctor_get(v___x_1582_, 0);
lean_inc(v_a_1584_);
lean_dec_ref_known(v___x_1582_, 1);
v___x_1585_ = l_Lean_Meta_Context_config(v_a_1536_);
v_transparency_1586_ = lean_ctor_get_uint8(v___x_1585_, 9);
lean_dec_ref(v___x_1585_);
v___x_1587_ = 2;
v___x_1588_ = l_Lean_Meta_instBEqTransparencyMode_beq(v_transparency_1586_, v___x_1587_);
if (v___x_1588_ == 0)
{
lean_object* v_keyedConfig_1589_; uint8_t v_trackZetaDelta_1590_; lean_object* v_zetaDeltaSet_1591_; lean_object* v_lctx_1592_; lean_object* v_localInstances_1593_; lean_object* v_defEqCtx_x3f_1594_; lean_object* v_synthPendingDepth_1595_; lean_object* v_customCanUnfoldPredicate_x3f_1596_; uint8_t v_univApprox_1597_; uint8_t v_inTypeClassResolution_1598_; uint8_t v_cacheInferType_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; 
v_keyedConfig_1589_ = lean_ctor_get(v_a_1536_, 0);
v_trackZetaDelta_1590_ = lean_ctor_get_uint8(v_a_1536_, sizeof(void*)*7);
v_zetaDeltaSet_1591_ = lean_ctor_get(v_a_1536_, 1);
v_lctx_1592_ = lean_ctor_get(v_a_1536_, 2);
v_localInstances_1593_ = lean_ctor_get(v_a_1536_, 3);
v_defEqCtx_x3f_1594_ = lean_ctor_get(v_a_1536_, 4);
v_synthPendingDepth_1595_ = lean_ctor_get(v_a_1536_, 5);
v_customCanUnfoldPredicate_x3f_1596_ = lean_ctor_get(v_a_1536_, 6);
v_univApprox_1597_ = lean_ctor_get_uint8(v_a_1536_, sizeof(void*)*7 + 1);
v_inTypeClassResolution_1598_ = lean_ctor_get_uint8(v_a_1536_, sizeof(void*)*7 + 2);
v_cacheInferType_1599_ = lean_ctor_get_uint8(v_a_1536_, sizeof(void*)*7 + 3);
lean_inc_ref(v_keyedConfig_1589_);
v___x_1600_ = l_Lean_Meta_ConfigWithKey_setTransparency(v___x_1587_, v_keyedConfig_1589_);
lean_inc(v_customCanUnfoldPredicate_x3f_1596_);
lean_inc(v_synthPendingDepth_1595_);
lean_inc(v_defEqCtx_x3f_1594_);
lean_inc_ref(v_localInstances_1593_);
lean_inc_ref(v_lctx_1592_);
lean_inc(v_zetaDeltaSet_1591_);
v___x_1601_ = lean_alloc_ctor(0, 7, 4);
lean_ctor_set(v___x_1601_, 0, v___x_1600_);
lean_ctor_set(v___x_1601_, 1, v_zetaDeltaSet_1591_);
lean_ctor_set(v___x_1601_, 2, v_lctx_1592_);
lean_ctor_set(v___x_1601_, 3, v_localInstances_1593_);
lean_ctor_set(v___x_1601_, 4, v_defEqCtx_x3f_1594_);
lean_ctor_set(v___x_1601_, 5, v_synthPendingDepth_1595_);
lean_ctor_set(v___x_1601_, 6, v_customCanUnfoldPredicate_x3f_1596_);
lean_ctor_set_uint8(v___x_1601_, sizeof(void*)*7, v_trackZetaDelta_1590_);
lean_ctor_set_uint8(v___x_1601_, sizeof(void*)*7 + 1, v_univApprox_1597_);
lean_ctor_set_uint8(v___x_1601_, sizeof(void*)*7 + 2, v_inTypeClassResolution_1598_);
lean_ctor_set_uint8(v___x_1601_, sizeof(void*)*7 + 3, v_cacheInferType_1599_);
v___x_1602_ = l_Lean_MVarId_congrPre(v_a_1584_, v___x_1601_, v_a_1537_, v_a_1538_, v_a_1539_);
lean_dec_ref_known(v___x_1601_, 7);
v___y_1563_ = v___x_1602_;
goto v___jp_1562_;
}
else
{
lean_object* v___x_1603_; 
v___x_1603_ = l_Lean_MVarId_congrPre(v_a_1584_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
v___y_1563_ = v___x_1603_;
goto v___jp_1562_;
}
}
}
else
{
lean_object* v_a_1604_; lean_object* v___x_1606_; uint8_t v_isShared_1607_; uint8_t v_isSharedCheck_1611_; 
v_a_1604_ = lean_ctor_get(v___x_1582_, 0);
v_isSharedCheck_1611_ = !lean_is_exclusive(v___x_1582_);
if (v_isSharedCheck_1611_ == 0)
{
v___x_1606_ = v___x_1582_;
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
else
{
lean_inc(v_a_1604_);
lean_dec(v___x_1582_);
v___x_1606_ = lean_box(0);
v_isShared_1607_ = v_isSharedCheck_1611_;
goto v_resetjp_1605_;
}
v_resetjp_1605_:
{
lean_object* v___x_1609_; 
if (v_isShared_1607_ == 0)
{
v___x_1609_ = v___x_1606_;
goto v_reusejp_1608_;
}
else
{
lean_object* v_reuseFailAlloc_1610_; 
v_reuseFailAlloc_1610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1610_, 0, v_a_1604_);
v___x_1609_ = v_reuseFailAlloc_1610_;
goto v_reusejp_1608_;
}
v_reusejp_1608_:
{
return v___x_1609_;
}
}
}
v___jp_1541_:
{
lean_object* v_zero_1543_; uint8_t v_isZero_1544_; 
v_zero_1543_ = lean_unsigned_to_nat(0u);
v_isZero_1544_ = lean_nat_dec_eq(v_n_1533_, v_zero_1543_);
if (v_isZero_1544_ == 1)
{
lean_object* v___x_1545_; 
v___x_1545_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_post(v_closePost_1532_, v_val_1542_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
return v___x_1545_;
}
else
{
lean_object* v_one_1546_; lean_object* v_n_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; 
v_one_1546_ = lean_unsigned_to_nat(1u);
v_n_1547_ = lean_nat_sub(v_n_1533_, v_one_1546_);
lean_inc(v_val_1542_);
v___x_1548_ = lean_alloc_closure((void*)(l_Lean_MVarId_congrCore___boxed), 6, 1);
lean_closure_set(v___x_1548_, 0, v_val_1542_);
v___x_1549_ = l_Lean_observing_x3f___at___00Lean_MVarId_congrImplies_x3f_spec__1___redArg(v___x_1548_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_a_1550_; 
v_a_1550_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1550_);
lean_dec_ref_known(v___x_1549_, 1);
if (lean_obj_tag(v_a_1550_) == 1)
{
lean_object* v_val_1551_; lean_object* v___x_1552_; 
lean_dec(v_val_1542_);
v_val_1551_ = lean_ctor_get(v_a_1550_, 0);
lean_inc(v_val_1551_);
lean_dec_ref_known(v_a_1550_, 1);
v___x_1552_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go_spec__0(v_closePre_1531_, v_closePost_1532_, v_n_1547_, v_val_1551_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
lean_dec(v_n_1547_);
return v___x_1552_;
}
else
{
lean_object* v___x_1553_; 
lean_dec(v_a_1550_);
lean_dec(v_n_1547_);
v___x_1553_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_post(v_closePost_1532_, v_val_1542_, v_a_1535_, v_a_1536_, v_a_1537_, v_a_1538_, v_a_1539_);
return v___x_1553_;
}
}
else
{
lean_object* v_a_1554_; lean_object* v___x_1556_; uint8_t v_isShared_1557_; uint8_t v_isSharedCheck_1561_; 
lean_dec(v_n_1547_);
lean_dec(v_val_1542_);
v_a_1554_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1561_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1561_ == 0)
{
v___x_1556_ = v___x_1549_;
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
else
{
lean_inc(v_a_1554_);
lean_dec(v___x_1549_);
v___x_1556_ = lean_box(0);
v_isShared_1557_ = v_isSharedCheck_1561_;
goto v_resetjp_1555_;
}
v_resetjp_1555_:
{
lean_object* v___x_1559_; 
if (v_isShared_1557_ == 0)
{
v___x_1559_ = v___x_1556_;
goto v_reusejp_1558_;
}
else
{
lean_object* v_reuseFailAlloc_1560_; 
v_reuseFailAlloc_1560_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1560_, 0, v_a_1554_);
v___x_1559_ = v_reuseFailAlloc_1560_;
goto v_reusejp_1558_;
}
v_reusejp_1558_:
{
return v___x_1559_;
}
}
}
}
}
v___jp_1562_:
{
if (lean_obj_tag(v___y_1563_) == 0)
{
lean_object* v_a_1564_; lean_object* v___x_1566_; uint8_t v_isShared_1567_; uint8_t v_isSharedCheck_1573_; 
v_a_1564_ = lean_ctor_get(v___y_1563_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___y_1563_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1566_ = v___y_1563_;
v_isShared_1567_ = v_isSharedCheck_1573_;
goto v_resetjp_1565_;
}
else
{
lean_inc(v_a_1564_);
lean_dec(v___y_1563_);
v___x_1566_ = lean_box(0);
v_isShared_1567_ = v_isSharedCheck_1573_;
goto v_resetjp_1565_;
}
v_resetjp_1565_:
{
if (lean_obj_tag(v_a_1564_) == 1)
{
lean_object* v_val_1568_; 
lean_del_object(v___x_1566_);
v_val_1568_ = lean_ctor_get(v_a_1564_, 0);
lean_inc(v_val_1568_);
lean_dec_ref_known(v_a_1564_, 1);
v_val_1542_ = v_val_1568_;
goto v___jp_1541_;
}
else
{
lean_object* v___x_1569_; lean_object* v___x_1571_; 
lean_dec(v_a_1564_);
v___x_1569_ = lean_box(0);
if (v_isShared_1567_ == 0)
{
lean_ctor_set(v___x_1566_, 0, v___x_1569_);
v___x_1571_ = v___x_1566_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v___x_1569_);
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
v_a_1574_ = lean_ctor_get(v___y_1563_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___y_1563_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___y_1563_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___y_1563_);
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
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go_spec__0(uint8_t v_closePre_1612_, uint8_t v_closePost_1613_, lean_object* v_n_1614_, lean_object* v_as_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_, lean_object* v___y_1620_){
_start:
{
if (lean_obj_tag(v_as_1615_) == 0)
{
lean_object* v___x_1622_; lean_object* v___x_1623_; 
v___x_1622_ = lean_box(0);
v___x_1623_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1622_);
return v___x_1623_;
}
else
{
lean_object* v_head_1624_; lean_object* v_tail_1625_; lean_object* v___x_1626_; 
v_head_1624_ = lean_ctor_get(v_as_1615_, 0);
lean_inc(v_head_1624_);
v_tail_1625_ = lean_ctor_get(v_as_1615_, 1);
lean_inc(v_tail_1625_);
lean_dec_ref_known(v_as_1615_, 2);
v___x_1626_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go(v_closePre_1612_, v_closePost_1613_, v_n_1614_, v_head_1624_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, v___y_1620_);
if (lean_obj_tag(v___x_1626_) == 0)
{
lean_dec_ref_known(v___x_1626_, 1);
v_as_1615_ = v_tail_1625_;
goto _start;
}
else
{
lean_dec(v_tail_1625_);
return v___x_1626_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forM___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go_spec__0___boxed(lean_object* v_closePre_1628_, lean_object* v_closePost_1629_, lean_object* v_n_1630_, lean_object* v_as_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_, lean_object* v___y_1635_, lean_object* v___y_1636_, lean_object* v___y_1637_){
_start:
{
uint8_t v_closePre_boxed_1638_; uint8_t v_closePost_boxed_1639_; lean_object* v_res_1640_; 
v_closePre_boxed_1638_ = lean_unbox(v_closePre_1628_);
v_closePost_boxed_1639_ = lean_unbox(v_closePost_1629_);
v_res_1640_ = l_List_forM___at___00__private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go_spec__0(v_closePre_boxed_1638_, v_closePost_boxed_1639_, v_n_1630_, v_as_1631_, v___y_1632_, v___y_1633_, v___y_1634_, v___y_1635_, v___y_1636_);
lean_dec(v___y_1636_);
lean_dec_ref(v___y_1635_);
lean_dec(v___y_1634_);
lean_dec_ref(v___y_1633_);
lean_dec(v___y_1632_);
lean_dec(v_n_1630_);
return v_res_1640_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go___boxed(lean_object* v_closePre_1641_, lean_object* v_closePost_1642_, lean_object* v_n_1643_, lean_object* v_mvarId_1644_, lean_object* v_a_1645_, lean_object* v_a_1646_, lean_object* v_a_1647_, lean_object* v_a_1648_, lean_object* v_a_1649_, lean_object* v_a_1650_){
_start:
{
uint8_t v_closePre_boxed_1651_; uint8_t v_closePost_boxed_1652_; lean_object* v_res_1653_; 
v_closePre_boxed_1651_ = lean_unbox(v_closePre_1641_);
v_closePost_boxed_1652_ = lean_unbox(v_closePost_1642_);
v_res_1653_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go(v_closePre_boxed_1651_, v_closePost_boxed_1652_, v_n_1643_, v_mvarId_1644_, v_a_1645_, v_a_1646_, v_a_1647_, v_a_1648_, v_a_1649_);
lean_dec(v_a_1649_);
lean_dec_ref(v_a_1648_);
lean_dec(v_a_1647_);
lean_dec_ref(v_a_1646_);
lean_dec(v_a_1645_);
lean_dec(v_n_1643_);
return v_res_1653_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_congrN(lean_object* v_mvarId_1656_, lean_object* v_depth_1657_, uint8_t v_closePre_1658_, uint8_t v_closePost_1659_, lean_object* v_a_1660_, lean_object* v_a_1661_, lean_object* v_a_1662_, lean_object* v_a_1663_){
_start:
{
lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; 
v___x_1665_ = ((lean_object*)(l_Lean_MVarId_congrN___closed__0));
v___x_1666_ = lean_st_mk_ref(v___x_1665_);
v___x_1667_ = l___private_Lean_Meta_Tactic_Congr_0__Lean_MVarId_congrN_go(v_closePre_1658_, v_closePost_1659_, v_depth_1657_, v_mvarId_1656_, v___x_1666_, v_a_1660_, v_a_1661_, v_a_1662_, v_a_1663_);
if (lean_obj_tag(v___x_1667_) == 0)
{
lean_object* v___x_1669_; uint8_t v_isShared_1670_; uint8_t v_isSharedCheck_1676_; 
v_isSharedCheck_1676_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1676_ == 0)
{
lean_object* v_unused_1677_; 
v_unused_1677_ = lean_ctor_get(v___x_1667_, 0);
lean_dec(v_unused_1677_);
v___x_1669_ = v___x_1667_;
v_isShared_1670_ = v_isSharedCheck_1676_;
goto v_resetjp_1668_;
}
else
{
lean_dec(v___x_1667_);
v___x_1669_ = lean_box(0);
v_isShared_1670_ = v_isSharedCheck_1676_;
goto v_resetjp_1668_;
}
v_resetjp_1668_:
{
lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1674_; 
v___x_1671_ = lean_st_ref_get(v___x_1666_);
lean_dec(v___x_1666_);
v___x_1672_ = lean_array_to_list(v___x_1671_);
if (v_isShared_1670_ == 0)
{
lean_ctor_set(v___x_1669_, 0, v___x_1672_);
v___x_1674_ = v___x_1669_;
goto v_reusejp_1673_;
}
else
{
lean_object* v_reuseFailAlloc_1675_; 
v_reuseFailAlloc_1675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1675_, 0, v___x_1672_);
v___x_1674_ = v_reuseFailAlloc_1675_;
goto v_reusejp_1673_;
}
v_reusejp_1673_:
{
return v___x_1674_;
}
}
}
else
{
lean_object* v_a_1678_; lean_object* v___x_1680_; uint8_t v_isShared_1681_; uint8_t v_isSharedCheck_1685_; 
lean_dec(v___x_1666_);
v_a_1678_ = lean_ctor_get(v___x_1667_, 0);
v_isSharedCheck_1685_ = !lean_is_exclusive(v___x_1667_);
if (v_isSharedCheck_1685_ == 0)
{
v___x_1680_ = v___x_1667_;
v_isShared_1681_ = v_isSharedCheck_1685_;
goto v_resetjp_1679_;
}
else
{
lean_inc(v_a_1678_);
lean_dec(v___x_1667_);
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
LEAN_EXPORT lean_object* l_Lean_MVarId_congrN___boxed(lean_object* v_mvarId_1686_, lean_object* v_depth_1687_, lean_object* v_closePre_1688_, lean_object* v_closePost_1689_, lean_object* v_a_1690_, lean_object* v_a_1691_, lean_object* v_a_1692_, lean_object* v_a_1693_, lean_object* v_a_1694_){
_start:
{
uint8_t v_closePre_boxed_1695_; uint8_t v_closePost_boxed_1696_; lean_object* v_res_1697_; 
v_closePre_boxed_1695_ = lean_unbox(v_closePre_1688_);
v_closePost_boxed_1696_ = lean_unbox(v_closePost_1689_);
v_res_1697_ = l_Lean_MVarId_congrN(v_mvarId_1686_, v_depth_1687_, v_closePre_boxed_1695_, v_closePost_boxed_1696_, v_a_1690_, v_a_1691_, v_a_1692_, v_a_1693_);
lean_dec(v_a_1693_);
lean_dec_ref(v_a_1692_);
lean_dec(v_a_1691_);
lean_dec_ref(v_a_1690_);
lean_dec(v_depth_1687_);
return v_res_1697_;
}
}
lean_object* runtime_initialize_Lean_Meta_CongrTheorems(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Congr(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_CongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Congr(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_CongrTheorems(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assert(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Refl(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Assumption(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Congr(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_CongrTheorems(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assert(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Refl(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Assumption(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Congr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Congr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Congr(builtin);
}
#ifdef __cplusplus
}
#endif
