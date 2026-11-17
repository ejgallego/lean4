// Lean compiler output
// Module: Lean.Meta.Sym.Apply
// Imports: public import Lean.Meta.Sym.Pattern import Lean.Util.CollectFVars import Init.Data.Range.Polymorphic.Iterators
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
lean_object* l_Lean_MVarId_getDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_Pattern_unify_x3f(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_instantiateLevelParams(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
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
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_mvarId_x21(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_mkFVar(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
uint8_t l_Lean_Expr_containsFVar(lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_expr_instantiate_rev_range(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_mkPatternFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_CollectFVars_State_ofFVarSet(lean_object*, lean_object*);
lean_object* lean_expr_instantiate_rev(lean_object*, lean_object*);
lean_object* l_Lean_collectFVars(lean_object*, lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_mkLevelParam(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_indentExpr(lean_object*);
lean_object* l_Lean_Meta_Sym_mkPatternFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_sym_pre"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(219, 124, 57, 118, 127, 154, 73, 9)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1;
static const lean_ctor_object l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_value),((lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___impl(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___impl___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "rule is not applicable to goal"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1;
static const lean_string_object l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rule:"};
static const lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2_value;
static lean_once_cell_t l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(size_t v_sz_1_, size_t v_i_2_, lean_object* v_bs_3_){
_start:
{
uint8_t v___x_4_; 
v___x_4_ = lean_usize_dec_lt(v_i_2_, v_sz_1_);
if (v___x_4_ == 0)
{
return v_bs_3_;
}
else
{
lean_object* v_v_5_; uint8_t v_isInstance_6_; lean_object* v___x_7_; lean_object* v_bs_x27_8_; size_t v___x_9_; size_t v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v_v_5_ = lean_array_uget_borrowed(v_bs_3_, v_i_2_);
v_isInstance_6_ = lean_ctor_get_uint8(v_v_5_, 1);
v___x_7_ = lean_unsigned_to_nat(0u);
v_bs_x27_8_ = lean_array_uset(v_bs_3_, v_i_2_, v___x_7_);
v___x_9_ = ((size_t)1ULL);
v___x_10_ = lean_usize_add(v_i_2_, v___x_9_);
v___x_11_ = lean_box(v_isInstance_6_);
v___x_12_ = lean_array_uset(v_bs_x27_8_, v_i_2_, v___x_11_);
v_i_2_ = v___x_10_;
v_bs_3_ = v___x_12_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5___boxed(lean_object* v_sz_14_, lean_object* v_i_15_, lean_object* v_bs_16_){
_start:
{
size_t v_sz_boxed_17_; size_t v_i_boxed_18_; lean_object* v_res_19_; 
v_sz_boxed_17_ = lean_unbox_usize(v_sz_14_);
lean_dec(v_sz_14_);
v_i_boxed_18_ = lean_unbox_usize(v_i_15_);
lean_dec(v_i_15_);
v_res_19_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(v_sz_boxed_17_, v_i_boxed_18_, v_bs_16_);
return v_res_19_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(lean_object* v_as_23_, size_t v_sz_24_, size_t v_i_25_, lean_object* v_b_26_){
_start:
{
lean_object* v_a_28_; uint8_t v___x_32_; 
v___x_32_ = lean_usize_dec_lt(v_i_25_, v_sz_24_);
if (v___x_32_ == 0)
{
return v_b_26_;
}
else
{
lean_object* v_a_33_; 
v_a_33_ = lean_array_uget_borrowed(v_as_23_, v_i_25_);
if (lean_obj_tag(v_a_33_) == 2)
{
lean_object* v_pre_34_; lean_object* v_i_35_; lean_object* v_auxPrefix_36_; uint8_t v___x_37_; 
v_pre_34_ = lean_ctor_get(v_a_33_, 0);
v_i_35_ = lean_ctor_get(v_a_33_, 1);
v_auxPrefix_36_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1));
v___x_37_ = lean_name_eq(v_pre_34_, v_auxPrefix_36_);
if (v___x_37_ == 0)
{
v_a_28_ = v_b_26_;
goto v___jp_27_;
}
else
{
lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_38_ = lean_box(v___x_37_);
v___x_39_ = lean_array_set(v_b_26_, v_i_35_, v___x_38_);
v_a_28_ = v___x_39_;
goto v___jp_27_;
}
}
else
{
v_a_28_ = v_b_26_;
goto v___jp_27_;
}
}
v___jp_27_:
{
size_t v___x_29_; size_t v___x_30_; 
v___x_29_ = ((size_t)1ULL);
v___x_30_ = lean_usize_add(v_i_25_, v___x_29_);
v_i_25_ = v___x_30_;
v_b_26_ = v_a_28_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___boxed(lean_object* v_as_40_, lean_object* v_sz_41_, lean_object* v_i_42_, lean_object* v_b_43_){
_start:
{
size_t v_sz_boxed_44_; size_t v_i_boxed_45_; lean_object* v_res_46_; 
v_sz_boxed_44_ = lean_unbox_usize(v_sz_41_);
lean_dec(v_sz_41_);
v_i_boxed_45_ = lean_unbox_usize(v_i_42_);
lean_dec(v_i_42_);
v_res_46_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(v_as_40_, v_sz_boxed_44_, v_i_boxed_45_, v_b_43_);
lean_dec_ref(v_as_40_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(lean_object* v_auxVars_47_, size_t v_sz_48_, size_t v_i_49_, lean_object* v_bs_50_){
_start:
{
uint8_t v___x_51_; 
v___x_51_ = lean_usize_dec_lt(v_i_49_, v_sz_48_);
if (v___x_51_ == 0)
{
return v_bs_50_;
}
else
{
lean_object* v_v_52_; lean_object* v___x_53_; lean_object* v_bs_x27_54_; lean_object* v___x_55_; lean_object* v___x_56_; size_t v___x_57_; size_t v___x_58_; lean_object* v___x_59_; 
v_v_52_ = lean_array_uget(v_bs_50_, v_i_49_);
v___x_53_ = lean_unsigned_to_nat(0u);
v_bs_x27_54_ = lean_array_uset(v_bs_50_, v_i_49_, v___x_53_);
v___x_55_ = lean_usize_to_nat(v_i_49_);
v___x_56_ = lean_expr_instantiate_rev_range(v_v_52_, v___x_53_, v___x_55_, v_auxVars_47_);
lean_dec(v___x_55_);
lean_dec(v_v_52_);
v___x_57_ = ((size_t)1ULL);
v___x_58_ = lean_usize_add(v_i_49_, v___x_57_);
v___x_59_ = lean_array_uset(v_bs_x27_54_, v_i_49_, v___x_56_);
v_i_49_ = v___x_58_;
v_bs_50_ = v___x_59_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg___boxed(lean_object* v_auxVars_61_, lean_object* v_sz_62_, lean_object* v_i_63_, lean_object* v_bs_64_){
_start:
{
size_t v_sz_boxed_65_; size_t v_i_boxed_66_; lean_object* v_res_67_; 
v_sz_boxed_65_ = lean_unbox_usize(v_sz_62_);
lean_dec(v_sz_62_);
v_i_boxed_66_ = lean_unbox_usize(v_i_63_);
lean_dec(v_i_63_);
v_res_67_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_61_, v_sz_boxed_65_, v_i_boxed_66_, v_bs_64_);
lean_dec_ref(v_auxVars_61_);
return v_res_67_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(lean_object* v_upperBound_68_, lean_object* v___x_69_, lean_object* v___x_70_, lean_object* v___x_71_, lean_object* v_a_72_, uint8_t v_b_73_){
_start:
{
uint8_t v_a_75_; uint8_t v___x_79_; 
v___x_79_ = lean_nat_dec_lt(v_a_72_, v_upperBound_68_);
if (v___x_79_ == 0)
{
lean_dec(v_a_72_);
return v_b_73_;
}
else
{
uint8_t v___x_80_; lean_object* v___x_81_; lean_object* v___x_82_; uint8_t v___x_83_; 
v___x_80_ = 0;
v___x_81_ = lean_box(v___x_80_);
v___x_82_ = lean_array_get(v___x_81_, v___x_69_, v_a_72_);
lean_dec(v___x_81_);
v___x_83_ = lean_unbox(v___x_82_);
lean_dec(v___x_82_);
if (v___x_83_ == 0)
{
lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_84_ = l_Lean_instInhabitedExpr;
v___x_85_ = lean_array_get_borrowed(v___x_84_, v___x_70_, v_a_72_);
v___x_86_ = l_Lean_Expr_fvarId_x21(v___x_71_);
v___x_87_ = l_Lean_Expr_containsFVar(v___x_85_, v___x_86_);
lean_dec(v___x_86_);
if (v___x_87_ == 0)
{
v_a_75_ = v_b_73_;
goto v___jp_74_;
}
else
{
lean_dec(v_a_72_);
return v___x_87_;
}
}
else
{
v_a_75_ = v_b_73_;
goto v___jp_74_;
}
}
v___jp_74_:
{
lean_object* v___x_76_; lean_object* v___x_77_; 
v___x_76_ = lean_unsigned_to_nat(1u);
v___x_77_ = lean_nat_add(v_a_72_, v___x_76_);
lean_dec(v_a_72_);
v_a_72_ = v___x_77_;
v_b_73_ = v_a_75_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg___boxed(lean_object* v_upperBound_88_, lean_object* v___x_89_, lean_object* v___x_90_, lean_object* v___x_91_, lean_object* v_a_92_, lean_object* v_b_93_){
_start:
{
uint8_t v_b_boxed_94_; uint8_t v_res_95_; lean_object* v_r_96_; 
v_b_boxed_94_ = lean_unbox(v_b_93_);
v_res_95_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_upperBound_88_, v___x_89_, v___x_90_, v___x_91_, v_a_92_, v_b_boxed_94_);
lean_dec_ref(v___x_91_);
lean_dec_ref(v___x_90_);
lean_dec_ref(v___x_89_);
lean_dec(v_upperBound_88_);
v_r_96_ = lean_box(v_res_95_);
return v_r_96_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(lean_object* v_upperBound_97_, lean_object* v___x_98_, lean_object* v_numArgs_99_, lean_object* v_auxVars_100_, lean_object* v___x_101_, lean_object* v_a_102_, lean_object* v_b_103_){
_start:
{
lean_object* v_a_105_; uint8_t v___x_109_; 
v___x_109_ = lean_nat_dec_lt(v_a_102_, v_upperBound_97_);
if (v___x_109_ == 0)
{
lean_dec(v_a_102_);
return v_b_103_;
}
else
{
lean_object* v_fst_110_; lean_object* v_snd_111_; lean_object* v___x_113_; uint8_t v_isShared_114_; uint8_t v_isSharedCheck_136_; 
v_fst_110_ = lean_ctor_get(v_b_103_, 0);
v_snd_111_ = lean_ctor_get(v_b_103_, 1);
v_isSharedCheck_136_ = !lean_is_exclusive(v_b_103_);
if (v_isSharedCheck_136_ == 0)
{
v___x_113_ = v_b_103_;
v_isShared_114_ = v_isSharedCheck_136_;
goto v_resetjp_112_;
}
else
{
lean_inc(v_snd_111_);
lean_inc(v_fst_110_);
lean_dec(v_b_103_);
v___x_113_ = lean_box(0);
v_isShared_114_ = v_isSharedCheck_136_;
goto v_resetjp_112_;
}
v_resetjp_112_:
{
uint8_t v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; uint8_t v___x_118_; 
v___x_115_ = 0;
v___x_116_ = lean_box(v___x_115_);
v___x_117_ = lean_array_get(v___x_116_, v___x_98_, v_a_102_);
lean_dec(v___x_116_);
v___x_118_ = lean_unbox(v___x_117_);
if (v___x_118_ == 0)
{
lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; uint8_t v___x_123_; uint8_t v___x_124_; 
v___x_119_ = l_Lean_instInhabitedExpr;
v___x_120_ = lean_unsigned_to_nat(1u);
v___x_121_ = lean_nat_add(v_a_102_, v___x_120_);
v___x_122_ = lean_array_get_borrowed(v___x_119_, v_auxVars_100_, v_a_102_);
v___x_123_ = lean_unbox(v___x_117_);
lean_dec(v___x_117_);
v___x_124_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_numArgs_99_, v___x_98_, v___x_101_, v___x_122_, v___x_121_, v___x_123_);
if (v___x_124_ == 0)
{
lean_object* v___x_125_; lean_object* v___x_127_; 
lean_inc(v_a_102_);
v___x_125_ = lean_array_push(v_snd_111_, v_a_102_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 1, v___x_125_);
v___x_127_ = v___x_113_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_fst_110_);
lean_ctor_set(v_reuseFailAlloc_128_, 1, v___x_125_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
v_a_105_ = v___x_127_;
goto v___jp_104_;
}
}
else
{
lean_object* v___x_129_; lean_object* v___x_131_; 
lean_inc(v_a_102_);
v___x_129_ = lean_array_push(v_fst_110_, v_a_102_);
if (v_isShared_114_ == 0)
{
lean_ctor_set(v___x_113_, 0, v___x_129_);
v___x_131_ = v___x_113_;
goto v_reusejp_130_;
}
else
{
lean_object* v_reuseFailAlloc_132_; 
v_reuseFailAlloc_132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_132_, 0, v___x_129_);
lean_ctor_set(v_reuseFailAlloc_132_, 1, v_snd_111_);
v___x_131_ = v_reuseFailAlloc_132_;
goto v_reusejp_130_;
}
v_reusejp_130_:
{
v_a_105_ = v___x_131_;
goto v___jp_104_;
}
}
}
else
{
lean_object* v___x_134_; 
lean_dec(v___x_117_);
if (v_isShared_114_ == 0)
{
v___x_134_ = v___x_113_;
goto v_reusejp_133_;
}
else
{
lean_object* v_reuseFailAlloc_135_; 
v_reuseFailAlloc_135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_135_, 0, v_fst_110_);
lean_ctor_set(v_reuseFailAlloc_135_, 1, v_snd_111_);
v___x_134_ = v_reuseFailAlloc_135_;
goto v_reusejp_133_;
}
v_reusejp_133_:
{
v_a_105_ = v___x_134_;
goto v___jp_104_;
}
}
}
}
v___jp_104_:
{
lean_object* v___x_106_; lean_object* v___x_107_; 
v___x_106_ = lean_unsigned_to_nat(1u);
v___x_107_ = lean_nat_add(v_a_102_, v___x_106_);
lean_dec(v_a_102_);
v_a_102_ = v___x_107_;
v_b_103_ = v_a_105_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg___boxed(lean_object* v_upperBound_137_, lean_object* v___x_138_, lean_object* v_numArgs_139_, lean_object* v_auxVars_140_, lean_object* v___x_141_, lean_object* v_a_142_, lean_object* v_b_143_){
_start:
{
lean_object* v_res_144_; 
v_res_144_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_upperBound_137_, v___x_138_, v_numArgs_139_, v_auxVars_140_, v___x_141_, v_a_142_, v_b_143_);
lean_dec_ref(v___x_141_);
lean_dec_ref(v_auxVars_140_);
lean_dec(v_numArgs_139_);
lean_dec_ref(v___x_138_);
lean_dec(v_upperBound_137_);
return v_res_144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(size_t v_sz_145_, size_t v_i_146_, lean_object* v_bs_147_){
_start:
{
uint8_t v___x_148_; 
v___x_148_ = lean_usize_dec_lt(v_i_146_, v_sz_145_);
if (v___x_148_ == 0)
{
return v_bs_147_;
}
else
{
lean_object* v_auxPrefix_149_; lean_object* v___x_150_; lean_object* v_bs_x27_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; size_t v___x_155_; size_t v___x_156_; lean_object* v___x_157_; 
v_auxPrefix_149_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1___closed__1));
v___x_150_ = lean_unsigned_to_nat(0u);
v_bs_x27_151_ = lean_array_uset(v_bs_147_, v_i_146_, v___x_150_);
v___x_152_ = lean_usize_to_nat(v_i_146_);
v___x_153_ = l_Lean_Name_num___override(v_auxPrefix_149_, v___x_152_);
v___x_154_ = l_Lean_mkFVar(v___x_153_);
v___x_155_ = ((size_t)1ULL);
v___x_156_ = lean_usize_add(v_i_146_, v___x_155_);
v___x_157_ = lean_array_uset(v_bs_x27_151_, v_i_146_, v___x_154_);
v_i_146_ = v___x_156_;
v_bs_147_ = v___x_157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg___boxed(lean_object* v_sz_159_, lean_object* v_i_160_, lean_object* v_bs_161_){
_start:
{
size_t v_sz_boxed_162_; size_t v_i_boxed_163_; lean_object* v_res_164_; 
v_sz_boxed_162_ = lean_unbox_usize(v_sz_159_);
lean_dec(v_sz_159_);
v_i_boxed_163_ = lean_unbox_usize(v_i_160_);
lean_dec(v_i_160_);
v_res_164_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_sz_boxed_162_, v_i_boxed_163_, v_bs_161_);
return v_res_164_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1(void){
_start:
{
lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; 
v___x_167_ = ((lean_object*)(l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__0));
v___x_168_ = lean_box(1);
v___x_169_ = l_Lean_CollectFVars_State_ofFVarSet(v___x_168_, v___x_167_);
return v___x_169_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(lean_object* v_pattern_172_){
_start:
{
lean_object* v_varTypes_173_; lean_object* v_varInfos_x3f_174_; lean_object* v_pattern_175_; lean_object* v_numArgs_176_; lean_object* v___y_178_; 
v_varTypes_173_ = lean_ctor_get(v_pattern_172_, 1);
lean_inc_ref(v_varTypes_173_);
v_varInfos_x3f_174_ = lean_ctor_get(v_pattern_172_, 2);
lean_inc(v_varInfos_x3f_174_);
v_pattern_175_ = lean_ctor_get(v_pattern_172_, 3);
lean_inc_ref(v_pattern_175_);
lean_dec_ref(v_pattern_172_);
v_numArgs_176_ = lean_array_get_size(v_varTypes_173_);
if (lean_obj_tag(v_varInfos_x3f_174_) == 1)
{
lean_object* v_val_196_; size_t v_sz_197_; size_t v___x_198_; lean_object* v___x_199_; 
v_val_196_ = lean_ctor_get(v_varInfos_x3f_174_, 0);
lean_inc(v_val_196_);
lean_dec_ref_known(v_varInfos_x3f_174_, 1);
v_sz_197_ = lean_array_size(v_val_196_);
v___x_198_ = ((size_t)0ULL);
v___x_199_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__5(v_sz_197_, v___x_198_, v_val_196_);
v___y_178_ = v___x_199_;
goto v___jp_177_;
}
else
{
uint8_t v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
lean_dec(v_varInfos_x3f_174_);
v___x_200_ = 0;
v___x_201_ = lean_box(v___x_200_);
v___x_202_ = lean_mk_array(v_numArgs_176_, v___x_201_);
v___y_178_ = v___x_202_;
goto v___jp_177_;
}
v___jp_177_:
{
size_t v_sz_179_; size_t v___x_180_; lean_object* v_auxVars_181_; lean_object* v___x_182_; lean_object* v___x_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v_fvarIds_186_; size_t v_sz_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v_fst_192_; lean_object* v_snd_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_sz_179_ = lean_array_size(v_varTypes_173_);
v___x_180_ = ((size_t)0ULL);
lean_inc_ref(v_varTypes_173_);
v_auxVars_181_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_sz_179_, v___x_180_, v_varTypes_173_);
v___x_182_ = lean_unsigned_to_nat(0u);
v___x_183_ = lean_obj_once(&l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1, &l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1_once, _init_l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__1);
v___x_184_ = lean_expr_instantiate_rev(v_pattern_175_, v_auxVars_181_);
lean_dec_ref(v_pattern_175_);
v___x_185_ = l_Lean_collectFVars(v___x_183_, v___x_184_);
v_fvarIds_186_ = lean_ctor_get(v___x_185_, 2);
lean_inc_ref(v_fvarIds_186_);
lean_dec_ref(v___x_185_);
v_sz_187_ = lean_array_size(v_fvarIds_186_);
v___x_188_ = ((lean_object*)(l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos___closed__2));
v___x_189_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__1(v_fvarIds_186_, v_sz_187_, v___x_180_, v___y_178_);
lean_dec_ref(v_fvarIds_186_);
v___x_190_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_181_, v_sz_179_, v___x_180_, v_varTypes_173_);
v___x_191_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_numArgs_176_, v___x_189_, v_numArgs_176_, v_auxVars_181_, v___x_190_, v___x_182_, v___x_188_);
lean_dec_ref(v___x_190_);
lean_dec_ref(v_auxVars_181_);
lean_dec_ref(v___x_189_);
v_fst_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_fst_192_);
v_snd_193_ = lean_ctor_get(v___x_191_, 1);
lean_inc(v_snd_193_);
lean_dec_ref(v___x_191_);
v___x_194_ = l_Array_append___redArg(v_snd_193_, v_fst_192_);
lean_dec(v_fst_192_);
v___x_195_ = lean_array_to_list(v___x_194_);
return v___x_195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(lean_object* v_as_203_, size_t v_sz_204_, size_t v_i_205_, lean_object* v_bs_206_){
_start:
{
lean_object* v___x_207_; 
v___x_207_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___redArg(v_sz_204_, v_i_205_, v_bs_206_);
return v___x_207_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0___boxed(lean_object* v_as_208_, lean_object* v_sz_209_, lean_object* v_i_210_, lean_object* v_bs_211_){
_start:
{
size_t v_sz_boxed_212_; size_t v_i_boxed_213_; lean_object* v_res_214_; 
v_sz_boxed_212_ = lean_unbox_usize(v_sz_209_);
lean_dec(v_sz_209_);
v_i_boxed_213_ = lean_unbox_usize(v_i_210_);
lean_dec(v_i_210_);
v_res_214_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__0(v_as_208_, v_sz_boxed_212_, v_i_boxed_213_, v_bs_211_);
lean_dec_ref(v_as_208_);
return v_res_214_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(lean_object* v_auxVars_215_, lean_object* v_as_216_, size_t v_sz_217_, size_t v_i_218_, lean_object* v_bs_219_){
_start:
{
lean_object* v___x_220_; 
v___x_220_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___redArg(v_auxVars_215_, v_sz_217_, v_i_218_, v_bs_219_);
return v___x_220_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2___boxed(lean_object* v_auxVars_221_, lean_object* v_as_222_, lean_object* v_sz_223_, lean_object* v_i_224_, lean_object* v_bs_225_){
_start:
{
size_t v_sz_boxed_226_; size_t v_i_boxed_227_; lean_object* v_res_228_; 
v_sz_boxed_226_ = lean_unbox_usize(v_sz_223_);
lean_dec(v_sz_223_);
v_i_boxed_227_ = lean_unbox_usize(v_i_224_);
lean_dec(v_i_224_);
v_res_228_ = l___private_Init_Data_Array_Basic_0__Array_mapFinIdxMUnsafe_map___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__2(v_auxVars_221_, v_as_222_, v_sz_boxed_226_, v_i_boxed_227_, v_bs_225_);
lean_dec_ref(v_as_222_);
lean_dec_ref(v_auxVars_221_);
return v_res_228_;
}
}
LEAN_EXPORT uint8_t l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(lean_object* v_upperBound_229_, lean_object* v___x_230_, lean_object* v___x_231_, lean_object* v___x_232_, lean_object* v_inst_233_, lean_object* v_R_234_, lean_object* v_a_235_, uint8_t v_b_236_, lean_object* v_c_237_){
_start:
{
uint8_t v___x_238_; 
v___x_238_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___redArg(v_upperBound_229_, v___x_230_, v___x_231_, v___x_232_, v_a_235_, v_b_236_);
return v___x_238_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3___boxed(lean_object* v_upperBound_239_, lean_object* v___x_240_, lean_object* v___x_241_, lean_object* v___x_242_, lean_object* v_inst_243_, lean_object* v_R_244_, lean_object* v_a_245_, lean_object* v_b_246_, lean_object* v_c_247_){
_start:
{
uint8_t v_b_boxed_248_; uint8_t v_res_249_; lean_object* v_r_250_; 
v_b_boxed_248_ = lean_unbox(v_b_246_);
v_res_249_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__3(v_upperBound_239_, v___x_240_, v___x_241_, v___x_242_, v_inst_243_, v_R_244_, v_a_245_, v_b_boxed_248_, v_c_247_);
lean_dec_ref(v___x_242_);
lean_dec_ref(v___x_241_);
lean_dec_ref(v___x_240_);
lean_dec(v_upperBound_239_);
v_r_250_ = lean_box(v_res_249_);
return v_r_250_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(lean_object* v_upperBound_251_, lean_object* v___x_252_, lean_object* v_numArgs_253_, lean_object* v_auxVars_254_, lean_object* v___x_255_, lean_object* v_inst_256_, lean_object* v_R_257_, lean_object* v_a_258_, lean_object* v_b_259_, lean_object* v_c_260_){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___redArg(v_upperBound_251_, v___x_252_, v_numArgs_253_, v_auxVars_254_, v___x_255_, v_a_258_, v_b_259_);
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4___boxed(lean_object* v_upperBound_262_, lean_object* v___x_263_, lean_object* v_numArgs_264_, lean_object* v_auxVars_265_, lean_object* v___x_266_, lean_object* v_inst_267_, lean_object* v_R_268_, lean_object* v_a_269_, lean_object* v_b_270_, lean_object* v_c_271_){
_start:
{
lean_object* v_res_272_; 
v_res_272_ = l_WellFounded_opaqueFix_u2083___at___00__private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos_spec__4(v_upperBound_262_, v___x_263_, v_numArgs_264_, v_auxVars_265_, v___x_266_, v_inst_267_, v_R_268_, v_a_269_, v_b_270_, v_c_271_);
lean_dec_ref(v___x_266_);
lean_dec_ref(v_auxVars_265_);
lean_dec(v_numArgs_264_);
lean_dec_ref(v___x_263_);
lean_dec(v_upperBound_262_);
return v_res_272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl(lean_object* v_declName_273_, lean_object* v_num_x3f_274_, lean_object* v_a_275_, lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_){
_start:
{
lean_object* v___x_280_; 
lean_inc(v_declName_273_);
v___x_280_ = l_Lean_Meta_Sym_mkPatternFromDecl(v_declName_273_, v_num_x3f_274_, v_a_275_, v_a_276_, v_a_277_, v_a_278_);
if (lean_obj_tag(v___x_280_) == 0)
{
lean_object* v_a_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_292_; 
v_a_281_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_292_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_292_ == 0)
{
v___x_283_ = v___x_280_;
v_isShared_284_ = v_isSharedCheck_292_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_a_281_);
lean_dec(v___x_280_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_292_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_290_; 
lean_inc(v_a_281_);
v___x_285_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(v_a_281_);
v___x_286_ = lean_box(0);
v___x_287_ = l_Lean_mkConst(v_declName_273_, v___x_286_);
v___x_288_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_288_, 0, v___x_287_);
lean_ctor_set(v___x_288_, 1, v_a_281_);
lean_ctor_set(v___x_288_, 2, v___x_285_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 0, v___x_288_);
v___x_290_ = v___x_283_;
goto v_reusejp_289_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v___x_288_);
v___x_290_ = v_reuseFailAlloc_291_;
goto v_reusejp_289_;
}
v_reusejp_289_:
{
return v___x_290_;
}
}
}
else
{
lean_object* v_a_293_; lean_object* v___x_295_; uint8_t v_isShared_296_; uint8_t v_isSharedCheck_300_; 
lean_dec(v_declName_273_);
v_a_293_ = lean_ctor_get(v___x_280_, 0);
v_isSharedCheck_300_ = !lean_is_exclusive(v___x_280_);
if (v_isSharedCheck_300_ == 0)
{
v___x_295_ = v___x_280_;
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
else
{
lean_inc(v_a_293_);
lean_dec(v___x_280_);
v___x_295_ = lean_box(0);
v_isShared_296_ = v_isSharedCheck_300_;
goto v_resetjp_294_;
}
v_resetjp_294_:
{
lean_object* v___x_298_; 
if (v_isShared_296_ == 0)
{
v___x_298_ = v___x_295_;
goto v_reusejp_297_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v_a_293_);
v___x_298_ = v_reuseFailAlloc_299_;
goto v_reusejp_297_;
}
v_reusejp_297_:
{
return v___x_298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromDecl___boxed(lean_object* v_declName_301_, lean_object* v_num_x3f_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l_Lean_Meta_Sym_mkBackwardRuleFromDecl(v_declName_301_, v_num_x3f_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(lean_object* v_a_309_, lean_object* v_a_310_){
_start:
{
if (lean_obj_tag(v_a_309_) == 0)
{
lean_object* v___x_311_; 
v___x_311_ = l_List_reverse___redArg(v_a_310_);
return v___x_311_;
}
else
{
lean_object* v_head_312_; lean_object* v_tail_313_; lean_object* v___x_315_; uint8_t v_isShared_316_; uint8_t v_isSharedCheck_322_; 
v_head_312_ = lean_ctor_get(v_a_309_, 0);
v_tail_313_ = lean_ctor_get(v_a_309_, 1);
v_isSharedCheck_322_ = !lean_is_exclusive(v_a_309_);
if (v_isSharedCheck_322_ == 0)
{
v___x_315_ = v_a_309_;
v_isShared_316_ = v_isSharedCheck_322_;
goto v_resetjp_314_;
}
else
{
lean_inc(v_tail_313_);
lean_inc(v_head_312_);
lean_dec(v_a_309_);
v___x_315_ = lean_box(0);
v_isShared_316_ = v_isSharedCheck_322_;
goto v_resetjp_314_;
}
v_resetjp_314_:
{
lean_object* v___x_317_; lean_object* v___x_319_; 
v___x_317_ = l_Lean_mkLevelParam(v_head_312_);
if (v_isShared_316_ == 0)
{
lean_ctor_set(v___x_315_, 1, v_a_310_);
lean_ctor_set(v___x_315_, 0, v___x_317_);
v___x_319_ = v___x_315_;
goto v_reusejp_318_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v___x_317_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_a_310_);
v___x_319_ = v_reuseFailAlloc_321_;
goto v_reusejp_318_;
}
v_reusejp_318_:
{
v_a_309_ = v_tail_313_;
v_a_310_ = v___x_319_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr(lean_object* v_e_323_, lean_object* v_levelParams_324_, lean_object* v_num_x3f_325_, lean_object* v_a_326_, lean_object* v_a_327_, lean_object* v_a_328_, lean_object* v_a_329_){
_start:
{
lean_object* v___x_331_; 
lean_inc_ref(v_e_323_);
v___x_331_ = l_Lean_Meta_Sym_mkPatternFromExpr(v_e_323_, v_levelParams_324_, v_num_x3f_325_, v_a_326_, v_a_327_, v_a_328_, v_a_329_);
if (lean_obj_tag(v___x_331_) == 0)
{
lean_object* v_a_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_345_; 
v_a_332_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_345_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_345_ == 0)
{
v___x_334_ = v___x_331_;
v_isShared_335_ = v_isSharedCheck_345_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_a_332_);
lean_dec(v___x_331_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_345_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v_levelParams_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v___x_343_; 
v_levelParams_336_ = lean_ctor_get(v_a_332_, 0);
lean_inc(v_a_332_);
v___x_337_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkResultPos(v_a_332_);
v___x_338_ = lean_box(0);
lean_inc(v_levelParams_336_);
v___x_339_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_mkBackwardRuleFromExpr_spec__0(v_levelParams_336_, v___x_338_);
v___x_340_ = l_Lean_Expr_instantiateLevelParams(v_e_323_, v_levelParams_324_, v___x_339_);
lean_dec(v___x_339_);
lean_dec_ref(v_e_323_);
v___x_341_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v_a_332_);
lean_ctor_set(v___x_341_, 2, v___x_337_);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 0, v___x_341_);
v___x_343_ = v___x_334_;
goto v_reusejp_342_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_341_);
v___x_343_ = v_reuseFailAlloc_344_;
goto v_reusejp_342_;
}
v_reusejp_342_:
{
return v___x_343_;
}
}
}
else
{
lean_object* v_a_346_; lean_object* v___x_348_; uint8_t v_isShared_349_; uint8_t v_isSharedCheck_353_; 
lean_dec_ref(v_e_323_);
v_a_346_ = lean_ctor_get(v___x_331_, 0);
v_isSharedCheck_353_ = !lean_is_exclusive(v___x_331_);
if (v_isSharedCheck_353_ == 0)
{
v___x_348_ = v___x_331_;
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
else
{
lean_inc(v_a_346_);
lean_dec(v___x_331_);
v___x_348_ = lean_box(0);
v_isShared_349_ = v_isSharedCheck_353_;
goto v_resetjp_347_;
}
v_resetjp_347_:
{
lean_object* v___x_351_; 
if (v_isShared_349_ == 0)
{
v___x_351_ = v___x_348_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_352_; 
v_reuseFailAlloc_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_352_, 0, v_a_346_);
v___x_351_ = v_reuseFailAlloc_352_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
return v___x_351_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_mkBackwardRuleFromExpr___boxed(lean_object* v_e_354_, lean_object* v_levelParams_355_, lean_object* v_num_x3f_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Meta_Sym_mkBackwardRuleFromExpr(v_e_354_, v_levelParams_355_, v_num_x3f_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
lean_dec(v_a_360_);
lean_dec_ref(v_a_359_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_levelParams_355_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(lean_object* v_expr_363_, lean_object* v_pattern_364_, lean_object* v_result_365_){
_start:
{
if (lean_obj_tag(v_expr_363_) == 4)
{
lean_object* v_us_372_; 
v_us_372_ = lean_ctor_get(v_expr_363_, 1);
if (lean_obj_tag(v_us_372_) == 0)
{
lean_object* v_declName_373_; lean_object* v_us_374_; lean_object* v_args_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v_declName_373_ = lean_ctor_get(v_expr_363_, 0);
lean_inc(v_declName_373_);
lean_dec_ref_known(v_expr_363_, 2);
v_us_374_ = lean_ctor_get(v_result_365_, 0);
lean_inc(v_us_374_);
v_args_375_ = lean_ctor_get(v_result_365_, 1);
lean_inc_ref(v_args_375_);
lean_dec_ref(v_result_365_);
v___x_376_ = l_Lean_mkConst(v_declName_373_, v_us_374_);
v___x_377_ = l_Lean_mkAppN(v___x_376_, v_args_375_);
lean_dec_ref(v_args_375_);
return v___x_377_;
}
else
{
goto v___jp_366_;
}
}
else
{
goto v___jp_366_;
}
v___jp_366_:
{
lean_object* v_levelParams_367_; lean_object* v_us_368_; lean_object* v_args_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v_levelParams_367_ = lean_ctor_get(v_pattern_364_, 0);
v_us_368_ = lean_ctor_get(v_result_365_, 0);
lean_inc(v_us_368_);
v_args_369_ = lean_ctor_get(v_result_365_, 1);
lean_inc_ref(v_args_369_);
lean_dec_ref(v_result_365_);
v___x_370_ = l_Lean_Expr_instantiateLevelParams(v_expr_363_, v_levelParams_367_, v_us_368_);
lean_dec(v_us_368_);
lean_dec_ref(v_expr_363_);
v___x_371_ = l_Lean_mkAppN(v___x_370_, v_args_369_);
lean_dec_ref(v_args_369_);
return v___x_371_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue___boxed(lean_object* v_expr_378_, lean_object* v_pattern_379_, lean_object* v_result_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(v_expr_378_, v_pattern_379_, v_result_380_);
lean_dec_ref(v_pattern_379_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___impl(lean_object* v_x_382_){
_start:
{
lean_object* v___x_383_; 
v___x_383_ = lean_obj_tag_nat(v_x_382_);
return v___x_383_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorIdx___impl___boxed(lean_object* v_x_384_){
_start:
{
lean_object* v_res_385_; 
v_res_385_ = l_Lean_Meta_Sym_ApplyResult_ctorIdx___impl(v_x_384_);
lean_dec(v_x_384_);
return v_res_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(lean_object* v_t_386_, lean_object* v_k_387_){
_start:
{
if (lean_obj_tag(v_t_386_) == 0)
{
return v_k_387_;
}
else
{
lean_object* v_mvarIds_388_; lean_object* v___x_389_; 
v_mvarIds_388_ = lean_ctor_get(v_t_386_, 0);
lean_inc(v_mvarIds_388_);
lean_dec_ref_known(v_t_386_, 1);
v___x_389_ = lean_apply_1(v_k_387_, v_mvarIds_388_);
return v___x_389_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim(lean_object* v_motive_390_, lean_object* v_ctorIdx_391_, lean_object* v_t_392_, lean_object* v_h_393_, lean_object* v_k_394_){
_start:
{
lean_object* v___x_395_; 
v___x_395_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_392_, v_k_394_);
return v___x_395_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_ctorElim___boxed(lean_object* v_motive_396_, lean_object* v_ctorIdx_397_, lean_object* v_t_398_, lean_object* v_h_399_, lean_object* v_k_400_){
_start:
{
lean_object* v_res_401_; 
v_res_401_ = l_Lean_Meta_Sym_ApplyResult_ctorElim(v_motive_396_, v_ctorIdx_397_, v_t_398_, v_h_399_, v_k_400_);
lean_dec(v_ctorIdx_397_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim___redArg(lean_object* v_t_402_, lean_object* v_failed_403_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_402_, v_failed_403_);
return v___x_404_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_failed_elim(lean_object* v_motive_405_, lean_object* v_t_406_, lean_object* v_h_407_, lean_object* v_failed_408_){
_start:
{
lean_object* v___x_409_; 
v___x_409_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_406_, v_failed_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim___redArg(lean_object* v_t_410_, lean_object* v_goals_411_){
_start:
{
lean_object* v___x_412_; 
v___x_412_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_410_, v_goals_411_);
return v___x_412_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_ApplyResult_goals_elim(lean_object* v_motive_413_, lean_object* v_t_414_, lean_object* v_h_415_, lean_object* v_goals_416_){
_start:
{
lean_object* v___x_417_; 
v___x_417_ = l_Lean_Meta_Sym_ApplyResult_ctorElim___redArg(v_t_414_, v_goals_416_);
return v___x_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(lean_object* v_x_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_, lean_object* v___y_423_, lean_object* v___y_424_){
_start:
{
lean_object* v___x_426_; 
lean_inc(v___y_420_);
lean_inc_ref(v___y_419_);
v___x_426_ = lean_apply_7(v_x_418_, v___y_419_, v___y_420_, v___y_421_, v___y_422_, v___y_423_, v___y_424_, lean_box(0));
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed(lean_object* v_x_427_, lean_object* v___y_428_, lean_object* v___y_429_, lean_object* v___y_430_, lean_object* v___y_431_, lean_object* v___y_432_, lean_object* v___y_433_, lean_object* v___y_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0(v_x_427_, v___y_428_, v___y_429_, v___y_430_, v___y_431_, v___y_432_, v___y_433_);
lean_dec(v___y_429_);
lean_dec_ref(v___y_428_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(lean_object* v_mvarId_436_, lean_object* v_x_437_, lean_object* v___y_438_, lean_object* v___y_439_, lean_object* v___y_440_, lean_object* v___y_441_, lean_object* v___y_442_, lean_object* v___y_443_){
_start:
{
lean_object* v___f_445_; lean_object* v___x_446_; 
lean_inc(v___y_439_);
lean_inc_ref(v___y_438_);
v___f_445_ = lean_alloc_closure((void*)(l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_445_, 0, v_x_437_);
lean_closure_set(v___f_445_, 1, v___y_438_);
lean_closure_set(v___f_445_, 2, v___y_439_);
v___x_446_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withMVarContextImp(lean_box(0), v_mvarId_436_, v___f_445_, v___y_440_, v___y_441_, v___y_442_, v___y_443_);
if (lean_obj_tag(v___x_446_) == 0)
{
return v___x_446_;
}
else
{
lean_object* v_a_447_; lean_object* v___x_449_; uint8_t v_isShared_450_; uint8_t v_isSharedCheck_454_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
v_isSharedCheck_454_ = !lean_is_exclusive(v___x_446_);
if (v_isSharedCheck_454_ == 0)
{
v___x_449_ = v___x_446_;
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
else
{
lean_inc(v_a_447_);
lean_dec(v___x_446_);
v___x_449_ = lean_box(0);
v_isShared_450_ = v_isSharedCheck_454_;
goto v_resetjp_448_;
}
v_resetjp_448_:
{
lean_object* v___x_452_; 
if (v_isShared_450_ == 0)
{
v___x_452_ = v___x_449_;
goto v_reusejp_451_;
}
else
{
lean_object* v_reuseFailAlloc_453_; 
v_reuseFailAlloc_453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_453_, 0, v_a_447_);
v___x_452_ = v_reuseFailAlloc_453_;
goto v_reusejp_451_;
}
v_reusejp_451_:
{
return v___x_452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg___boxed(lean_object* v_mvarId_455_, lean_object* v_x_456_, lean_object* v___y_457_, lean_object* v___y_458_, lean_object* v___y_459_, lean_object* v___y_460_, lean_object* v___y_461_, lean_object* v___y_462_, lean_object* v___y_463_){
_start:
{
lean_object* v_res_464_; 
v_res_464_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_455_, v_x_456_, v___y_457_, v___y_458_, v___y_459_, v___y_460_, v___y_461_, v___y_462_);
lean_dec(v___y_462_);
lean_dec_ref(v___y_461_);
lean_dec(v___y_460_);
lean_dec_ref(v___y_459_);
lean_dec(v___y_458_);
lean_dec_ref(v___y_457_);
return v_res_464_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(lean_object* v_00_u03b1_465_, lean_object* v_mvarId_466_, lean_object* v_x_467_, lean_object* v___y_468_, lean_object* v___y_469_, lean_object* v___y_470_, lean_object* v___y_471_, lean_object* v___y_472_, lean_object* v___y_473_){
_start:
{
lean_object* v___x_475_; 
v___x_475_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_466_, v_x_467_, v___y_468_, v___y_469_, v___y_470_, v___y_471_, v___y_472_, v___y_473_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___boxed(lean_object* v_00_u03b1_476_, lean_object* v_mvarId_477_, lean_object* v_x_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_){
_start:
{
lean_object* v_res_486_; 
v_res_486_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2(v_00_u03b1_476_, v_mvarId_477_, v_x_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_, v___y_483_, v___y_484_);
lean_dec(v___y_484_);
lean_dec_ref(v___y_483_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
return v_res_486_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(lean_object* v_val_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
if (lean_obj_tag(v_a_488_) == 0)
{
lean_object* v___x_490_; 
v___x_490_ = l_List_reverse___redArg(v_a_489_);
return v___x_490_;
}
else
{
lean_object* v_head_491_; lean_object* v_tail_492_; lean_object* v___x_494_; uint8_t v_isShared_495_; uint8_t v_isSharedCheck_504_; 
v_head_491_ = lean_ctor_get(v_a_488_, 0);
v_tail_492_ = lean_ctor_get(v_a_488_, 1);
v_isSharedCheck_504_ = !lean_is_exclusive(v_a_488_);
if (v_isSharedCheck_504_ == 0)
{
v___x_494_ = v_a_488_;
v_isShared_495_ = v_isSharedCheck_504_;
goto v_resetjp_493_;
}
else
{
lean_inc(v_tail_492_);
lean_inc(v_head_491_);
lean_dec(v_a_488_);
v___x_494_ = lean_box(0);
v_isShared_495_ = v_isSharedCheck_504_;
goto v_resetjp_493_;
}
v_resetjp_493_:
{
lean_object* v_args_496_; lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_501_; 
v_args_496_ = lean_ctor_get(v_val_487_, 1);
v___x_497_ = l_Lean_instInhabitedExpr;
v___x_498_ = lean_array_get_borrowed(v___x_497_, v_args_496_, v_head_491_);
lean_dec(v_head_491_);
v___x_499_ = l_Lean_Expr_mvarId_x21(v___x_498_);
if (v_isShared_495_ == 0)
{
lean_ctor_set(v___x_494_, 1, v_a_489_);
lean_ctor_set(v___x_494_, 0, v___x_499_);
v___x_501_ = v___x_494_;
goto v_reusejp_500_;
}
else
{
lean_object* v_reuseFailAlloc_503_; 
v_reuseFailAlloc_503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_503_, 0, v___x_499_);
lean_ctor_set(v_reuseFailAlloc_503_, 1, v_a_489_);
v___x_501_ = v_reuseFailAlloc_503_;
goto v_reusejp_500_;
}
v_reusejp_500_:
{
v_a_488_ = v_tail_492_;
v_a_489_ = v___x_501_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1___boxed(lean_object* v_val_505_, lean_object* v_a_506_, lean_object* v_a_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(v_val_505_, v_a_506_, v_a_507_);
lean_dec_ref(v_val_505_);
return v_res_508_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(lean_object* v_x_509_, lean_object* v_x_510_, lean_object* v_x_511_, lean_object* v_x_512_){
_start:
{
lean_object* v_ks_513_; lean_object* v_vs_514_; lean_object* v___x_516_; uint8_t v_isShared_517_; uint8_t v_isSharedCheck_538_; 
v_ks_513_ = lean_ctor_get(v_x_509_, 0);
v_vs_514_ = lean_ctor_get(v_x_509_, 1);
v_isSharedCheck_538_ = !lean_is_exclusive(v_x_509_);
if (v_isSharedCheck_538_ == 0)
{
v___x_516_ = v_x_509_;
v_isShared_517_ = v_isSharedCheck_538_;
goto v_resetjp_515_;
}
else
{
lean_inc(v_vs_514_);
lean_inc(v_ks_513_);
lean_dec(v_x_509_);
v___x_516_ = lean_box(0);
v_isShared_517_ = v_isSharedCheck_538_;
goto v_resetjp_515_;
}
v_resetjp_515_:
{
lean_object* v___x_518_; uint8_t v___x_519_; 
v___x_518_ = lean_array_get_size(v_ks_513_);
v___x_519_ = lean_nat_dec_lt(v_x_510_, v___x_518_);
if (v___x_519_ == 0)
{
lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_523_; 
lean_dec(v_x_510_);
v___x_520_ = lean_array_push(v_ks_513_, v_x_511_);
v___x_521_ = lean_array_push(v_vs_514_, v_x_512_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_521_);
lean_ctor_set(v___x_516_, 0, v___x_520_);
v___x_523_ = v___x_516_;
goto v_reusejp_522_;
}
else
{
lean_object* v_reuseFailAlloc_524_; 
v_reuseFailAlloc_524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_524_, 0, v___x_520_);
lean_ctor_set(v_reuseFailAlloc_524_, 1, v___x_521_);
v___x_523_ = v_reuseFailAlloc_524_;
goto v_reusejp_522_;
}
v_reusejp_522_:
{
return v___x_523_;
}
}
else
{
lean_object* v_k_x27_525_; uint8_t v___x_526_; 
v_k_x27_525_ = lean_array_fget_borrowed(v_ks_513_, v_x_510_);
v___x_526_ = l_Lean_instBEqMVarId_beq(v_x_511_, v_k_x27_525_);
if (v___x_526_ == 0)
{
lean_object* v___x_528_; 
if (v_isShared_517_ == 0)
{
v___x_528_ = v___x_516_;
goto v_reusejp_527_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v_ks_513_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_vs_514_);
v___x_528_ = v_reuseFailAlloc_532_;
goto v_reusejp_527_;
}
v_reusejp_527_:
{
lean_object* v___x_529_; lean_object* v___x_530_; 
v___x_529_ = lean_unsigned_to_nat(1u);
v___x_530_ = lean_nat_add(v_x_510_, v___x_529_);
lean_dec(v_x_510_);
v_x_509_ = v___x_528_;
v_x_510_ = v___x_530_;
goto _start;
}
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_536_; 
v___x_533_ = lean_array_fset(v_ks_513_, v_x_510_, v_x_511_);
v___x_534_ = lean_array_fset(v_vs_514_, v_x_510_, v_x_512_);
lean_dec(v_x_510_);
if (v_isShared_517_ == 0)
{
lean_ctor_set(v___x_516_, 1, v___x_534_);
lean_ctor_set(v___x_516_, 0, v___x_533_);
v___x_536_ = v___x_516_;
goto v_reusejp_535_;
}
else
{
lean_object* v_reuseFailAlloc_537_; 
v_reuseFailAlloc_537_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_537_, 0, v___x_533_);
lean_ctor_set(v_reuseFailAlloc_537_, 1, v___x_534_);
v___x_536_ = v_reuseFailAlloc_537_;
goto v_reusejp_535_;
}
v_reusejp_535_:
{
return v___x_536_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(lean_object* v_n_539_, lean_object* v_k_540_, lean_object* v_v_541_){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; 
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_n_539_, v___x_542_, v_k_540_, v_v_541_);
return v___x_543_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_544_; 
v___x_544_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_544_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(lean_object* v_x_545_, size_t v_x_546_, size_t v_x_547_, lean_object* v_x_548_, lean_object* v_x_549_){
_start:
{
if (lean_obj_tag(v_x_545_) == 0)
{
lean_object* v_es_550_; size_t v___x_551_; size_t v___x_552_; lean_object* v_j_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_es_550_ = lean_ctor_get(v_x_545_, 0);
v___x_551_ = ((size_t)31ULL);
v___x_552_ = lean_usize_land(v_x_546_, v___x_551_);
v_j_553_ = lean_usize_to_nat(v___x_552_);
v___x_554_ = lean_array_get_size(v_es_550_);
v___x_555_ = lean_nat_dec_lt(v_j_553_, v___x_554_);
if (v___x_555_ == 0)
{
lean_dec(v_j_553_);
lean_dec(v_x_549_);
lean_dec(v_x_548_);
return v_x_545_;
}
else
{
lean_object* v___x_557_; uint8_t v_isShared_558_; uint8_t v_isSharedCheck_594_; 
lean_inc_ref(v_es_550_);
v_isSharedCheck_594_ = !lean_is_exclusive(v_x_545_);
if (v_isSharedCheck_594_ == 0)
{
lean_object* v_unused_595_; 
v_unused_595_ = lean_ctor_get(v_x_545_, 0);
lean_dec(v_unused_595_);
v___x_557_ = v_x_545_;
v_isShared_558_ = v_isSharedCheck_594_;
goto v_resetjp_556_;
}
else
{
lean_dec(v_x_545_);
v___x_557_ = lean_box(0);
v_isShared_558_ = v_isSharedCheck_594_;
goto v_resetjp_556_;
}
v_resetjp_556_:
{
lean_object* v_v_559_; lean_object* v___x_560_; lean_object* v_xs_x27_561_; lean_object* v___y_563_; 
v_v_559_ = lean_array_fget(v_es_550_, v_j_553_);
v___x_560_ = lean_box(0);
v_xs_x27_561_ = lean_array_fset(v_es_550_, v_j_553_, v___x_560_);
switch(lean_obj_tag(v_v_559_))
{
case 0:
{
lean_object* v_key_568_; lean_object* v_val_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_579_; 
v_key_568_ = lean_ctor_get(v_v_559_, 0);
v_val_569_ = lean_ctor_get(v_v_559_, 1);
v_isSharedCheck_579_ = !lean_is_exclusive(v_v_559_);
if (v_isSharedCheck_579_ == 0)
{
v___x_571_ = v_v_559_;
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_val_569_);
lean_inc(v_key_568_);
lean_dec(v_v_559_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_579_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; 
v___x_573_ = l_Lean_instBEqMVarId_beq(v_x_548_, v_key_568_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_575_; 
lean_del_object(v___x_571_);
v___x_574_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_568_, v_val_569_, v_x_548_, v_x_549_);
v___x_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_575_, 0, v___x_574_);
v___y_563_ = v___x_575_;
goto v___jp_562_;
}
else
{
lean_object* v___x_577_; 
lean_dec(v_val_569_);
lean_dec(v_key_568_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 1, v_x_549_);
lean_ctor_set(v___x_571_, 0, v_x_548_);
v___x_577_ = v___x_571_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_x_548_);
lean_ctor_set(v_reuseFailAlloc_578_, 1, v_x_549_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
v___y_563_ = v___x_577_;
goto v___jp_562_;
}
}
}
}
case 1:
{
lean_object* v_node_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_592_; 
v_node_580_ = lean_ctor_get(v_v_559_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v_v_559_);
if (v_isSharedCheck_592_ == 0)
{
v___x_582_ = v_v_559_;
v_isShared_583_ = v_isSharedCheck_592_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_node_580_);
lean_dec(v_v_559_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_592_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
size_t v___x_584_; size_t v___x_585_; size_t v___x_586_; size_t v___x_587_; lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_584_ = ((size_t)5ULL);
v___x_585_ = lean_usize_shift_right(v_x_546_, v___x_584_);
v___x_586_ = ((size_t)1ULL);
v___x_587_ = lean_usize_add(v_x_547_, v___x_586_);
v___x_588_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_node_580_, v___x_585_, v___x_587_, v_x_548_, v_x_549_);
if (v_isShared_583_ == 0)
{
lean_ctor_set(v___x_582_, 0, v___x_588_);
v___x_590_ = v___x_582_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
v___y_563_ = v___x_590_;
goto v___jp_562_;
}
}
}
default: 
{
lean_object* v___x_593_; 
v___x_593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_593_, 0, v_x_548_);
lean_ctor_set(v___x_593_, 1, v_x_549_);
v___y_563_ = v___x_593_;
goto v___jp_562_;
}
}
v___jp_562_:
{
lean_object* v___x_564_; lean_object* v___x_566_; 
v___x_564_ = lean_array_fset(v_xs_x27_561_, v_j_553_, v___y_563_);
lean_dec(v_j_553_);
if (v_isShared_558_ == 0)
{
lean_ctor_set(v___x_557_, 0, v___x_564_);
v___x_566_ = v___x_557_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v___x_564_);
v___x_566_ = v_reuseFailAlloc_567_;
goto v_reusejp_565_;
}
v_reusejp_565_:
{
return v___x_566_;
}
}
}
}
}
else
{
lean_object* v_ks_596_; lean_object* v_vs_597_; lean_object* v___x_599_; uint8_t v_isShared_600_; uint8_t v_isSharedCheck_615_; 
v_ks_596_ = lean_ctor_get(v_x_545_, 0);
v_vs_597_ = lean_ctor_get(v_x_545_, 1);
v_isSharedCheck_615_ = !lean_is_exclusive(v_x_545_);
if (v_isSharedCheck_615_ == 0)
{
v___x_599_ = v_x_545_;
v_isShared_600_ = v_isSharedCheck_615_;
goto v_resetjp_598_;
}
else
{
lean_inc(v_vs_597_);
lean_inc(v_ks_596_);
lean_dec(v_x_545_);
v___x_599_ = lean_box(0);
v_isShared_600_ = v_isSharedCheck_615_;
goto v_resetjp_598_;
}
v_resetjp_598_:
{
lean_object* v___x_602_; 
if (v_isShared_600_ == 0)
{
v___x_602_ = v___x_599_;
goto v_reusejp_601_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v_ks_596_);
lean_ctor_set(v_reuseFailAlloc_614_, 1, v_vs_597_);
v___x_602_ = v_reuseFailAlloc_614_;
goto v_reusejp_601_;
}
v_reusejp_601_:
{
lean_object* v_newNode_603_; size_t v___x_604_; uint8_t v___x_605_; 
v_newNode_603_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(v___x_602_, v_x_548_, v_x_549_);
v___x_604_ = ((size_t)7ULL);
v___x_605_ = lean_usize_dec_le(v___x_604_, v_x_547_);
if (v___x_605_ == 0)
{
lean_object* v___x_606_; lean_object* v___x_607_; uint8_t v___x_608_; 
v___x_606_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_603_);
v___x_607_ = lean_unsigned_to_nat(4u);
v___x_608_ = lean_nat_dec_lt(v___x_606_, v___x_607_);
lean_dec(v___x_606_);
if (v___x_608_ == 0)
{
lean_object* v_ks_609_; lean_object* v_vs_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; 
v_ks_609_ = lean_ctor_get(v_newNode_603_, 0);
lean_inc_ref(v_ks_609_);
v_vs_610_ = lean_ctor_get(v_newNode_603_, 1);
lean_inc_ref(v_vs_610_);
lean_dec_ref(v_newNode_603_);
v___x_611_ = lean_unsigned_to_nat(0u);
v___x_612_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___closed__0);
v___x_613_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_x_547_, v_ks_609_, v_vs_610_, v___x_611_, v___x_612_);
lean_dec_ref(v_vs_610_);
lean_dec_ref(v_ks_609_);
return v___x_613_;
}
else
{
return v_newNode_603_;
}
}
else
{
return v_newNode_603_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(size_t v_depth_616_, lean_object* v_keys_617_, lean_object* v_vals_618_, lean_object* v_i_619_, lean_object* v_entries_620_){
_start:
{
lean_object* v___x_621_; uint8_t v___x_622_; 
v___x_621_ = lean_array_get_size(v_keys_617_);
v___x_622_ = lean_nat_dec_lt(v_i_619_, v___x_621_);
if (v___x_622_ == 0)
{
lean_dec(v_i_619_);
return v_entries_620_;
}
else
{
lean_object* v_k_623_; lean_object* v_v_624_; uint64_t v___x_625_; size_t v_h_626_; size_t v___x_627_; lean_object* v___x_628_; size_t v___x_629_; size_t v___x_630_; size_t v___x_631_; size_t v_h_632_; lean_object* v___x_633_; lean_object* v___x_634_; 
v_k_623_ = lean_array_fget_borrowed(v_keys_617_, v_i_619_);
v_v_624_ = lean_array_fget_borrowed(v_vals_618_, v_i_619_);
v___x_625_ = l_Lean_instHashableMVarId_hash(v_k_623_);
v_h_626_ = lean_uint64_to_usize(v___x_625_);
v___x_627_ = ((size_t)5ULL);
v___x_628_ = lean_unsigned_to_nat(1u);
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_sub(v_depth_616_, v___x_629_);
v___x_631_ = lean_usize_mul(v___x_627_, v___x_630_);
v_h_632_ = lean_usize_shift_right(v_h_626_, v___x_631_);
v___x_633_ = lean_nat_add(v_i_619_, v___x_628_);
lean_dec(v_i_619_);
lean_inc(v_v_624_);
lean_inc(v_k_623_);
v___x_634_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_entries_620_, v_h_632_, v_depth_616_, v_k_623_, v_v_624_);
v_i_619_ = v___x_633_;
v_entries_620_ = v___x_634_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg___boxed(lean_object* v_depth_636_, lean_object* v_keys_637_, lean_object* v_vals_638_, lean_object* v_i_639_, lean_object* v_entries_640_){
_start:
{
size_t v_depth_boxed_641_; lean_object* v_res_642_; 
v_depth_boxed_641_ = lean_unbox_usize(v_depth_636_);
lean_dec(v_depth_636_);
v_res_642_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_boxed_641_, v_keys_637_, v_vals_638_, v_i_639_, v_entries_640_);
lean_dec_ref(v_vals_638_);
lean_dec_ref(v_keys_637_);
return v_res_642_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_x_643_, lean_object* v_x_644_, lean_object* v_x_645_, lean_object* v_x_646_, lean_object* v_x_647_){
_start:
{
size_t v_x_3144__boxed_648_; size_t v_x_3145__boxed_649_; lean_object* v_res_650_; 
v_x_3144__boxed_648_ = lean_unbox_usize(v_x_644_);
lean_dec(v_x_644_);
v_x_3145__boxed_649_ = lean_unbox_usize(v_x_645_);
lean_dec(v_x_645_);
v_res_650_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_643_, v_x_3144__boxed_648_, v_x_3145__boxed_649_, v_x_646_, v_x_647_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(lean_object* v_x_651_, lean_object* v_x_652_, lean_object* v_x_653_){
_start:
{
uint64_t v___x_654_; size_t v___x_655_; size_t v___x_656_; lean_object* v___x_657_; 
v___x_654_ = l_Lean_instHashableMVarId_hash(v_x_652_);
v___x_655_ = lean_uint64_to_usize(v___x_654_);
v___x_656_ = ((size_t)1ULL);
v___x_657_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_651_, v___x_655_, v___x_656_, v_x_652_, v_x_653_);
return v___x_657_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(lean_object* v_mvarId_658_, lean_object* v_val_659_, lean_object* v___y_660_){
_start:
{
lean_object* v___x_662_; lean_object* v_mctx_663_; lean_object* v_cache_664_; lean_object* v_zetaDeltaFVarIds_665_; lean_object* v_postponed_666_; lean_object* v_diag_667_; lean_object* v___x_669_; uint8_t v_isShared_670_; uint8_t v_isSharedCheck_696_; 
v___x_662_ = lean_st_ref_take(v___y_660_);
v_mctx_663_ = lean_ctor_get(v___x_662_, 0);
v_cache_664_ = lean_ctor_get(v___x_662_, 1);
v_zetaDeltaFVarIds_665_ = lean_ctor_get(v___x_662_, 2);
v_postponed_666_ = lean_ctor_get(v___x_662_, 3);
v_diag_667_ = lean_ctor_get(v___x_662_, 4);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_662_);
if (v_isSharedCheck_696_ == 0)
{
v___x_669_ = v___x_662_;
v_isShared_670_ = v_isSharedCheck_696_;
goto v_resetjp_668_;
}
else
{
lean_inc(v_diag_667_);
lean_inc(v_postponed_666_);
lean_inc(v_zetaDeltaFVarIds_665_);
lean_inc(v_cache_664_);
lean_inc(v_mctx_663_);
lean_dec(v___x_662_);
v___x_669_ = lean_box(0);
v_isShared_670_ = v_isSharedCheck_696_;
goto v_resetjp_668_;
}
v_resetjp_668_:
{
lean_object* v_depth_671_; lean_object* v_levelAssignDepth_672_; lean_object* v_lmvarCounter_673_; lean_object* v_mvarCounter_674_; lean_object* v_lDecls_675_; lean_object* v_decls_676_; lean_object* v_userNames_677_; lean_object* v_lAssignment_678_; lean_object* v_eAssignment_679_; lean_object* v_dAssignment_680_; lean_object* v_instanceTypedMVars_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_695_; 
v_depth_671_ = lean_ctor_get(v_mctx_663_, 0);
v_levelAssignDepth_672_ = lean_ctor_get(v_mctx_663_, 1);
v_lmvarCounter_673_ = lean_ctor_get(v_mctx_663_, 2);
v_mvarCounter_674_ = lean_ctor_get(v_mctx_663_, 3);
v_lDecls_675_ = lean_ctor_get(v_mctx_663_, 4);
v_decls_676_ = lean_ctor_get(v_mctx_663_, 5);
v_userNames_677_ = lean_ctor_get(v_mctx_663_, 6);
v_lAssignment_678_ = lean_ctor_get(v_mctx_663_, 7);
v_eAssignment_679_ = lean_ctor_get(v_mctx_663_, 8);
v_dAssignment_680_ = lean_ctor_get(v_mctx_663_, 9);
v_instanceTypedMVars_681_ = lean_ctor_get(v_mctx_663_, 10);
v_isSharedCheck_695_ = !lean_is_exclusive(v_mctx_663_);
if (v_isSharedCheck_695_ == 0)
{
v___x_683_ = v_mctx_663_;
v_isShared_684_ = v_isSharedCheck_695_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_instanceTypedMVars_681_);
lean_inc(v_dAssignment_680_);
lean_inc(v_eAssignment_679_);
lean_inc(v_lAssignment_678_);
lean_inc(v_userNames_677_);
lean_inc(v_decls_676_);
lean_inc(v_lDecls_675_);
lean_inc(v_mvarCounter_674_);
lean_inc(v_lmvarCounter_673_);
lean_inc(v_levelAssignDepth_672_);
lean_inc(v_depth_671_);
lean_dec(v_mctx_663_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_695_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_688_; 
v___x_685_ = lean_box(0);
v___x_686_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(v_eAssignment_679_, v_mvarId_658_, v_val_659_);
if (v_isShared_684_ == 0)
{
lean_ctor_set(v___x_683_, 8, v___x_686_);
v___x_688_ = v___x_683_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_694_; 
v_reuseFailAlloc_694_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_694_, 0, v_depth_671_);
lean_ctor_set(v_reuseFailAlloc_694_, 1, v_levelAssignDepth_672_);
lean_ctor_set(v_reuseFailAlloc_694_, 2, v_lmvarCounter_673_);
lean_ctor_set(v_reuseFailAlloc_694_, 3, v_mvarCounter_674_);
lean_ctor_set(v_reuseFailAlloc_694_, 4, v_lDecls_675_);
lean_ctor_set(v_reuseFailAlloc_694_, 5, v_decls_676_);
lean_ctor_set(v_reuseFailAlloc_694_, 6, v_userNames_677_);
lean_ctor_set(v_reuseFailAlloc_694_, 7, v_lAssignment_678_);
lean_ctor_set(v_reuseFailAlloc_694_, 8, v___x_686_);
lean_ctor_set(v_reuseFailAlloc_694_, 9, v_dAssignment_680_);
lean_ctor_set(v_reuseFailAlloc_694_, 10, v_instanceTypedMVars_681_);
v___x_688_ = v_reuseFailAlloc_694_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_690_; 
if (v_isShared_670_ == 0)
{
lean_ctor_set(v___x_669_, 0, v___x_688_);
v___x_690_ = v___x_669_;
goto v_reusejp_689_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v___x_688_);
lean_ctor_set(v_reuseFailAlloc_693_, 1, v_cache_664_);
lean_ctor_set(v_reuseFailAlloc_693_, 2, v_zetaDeltaFVarIds_665_);
lean_ctor_set(v_reuseFailAlloc_693_, 3, v_postponed_666_);
lean_ctor_set(v_reuseFailAlloc_693_, 4, v_diag_667_);
v___x_690_ = v_reuseFailAlloc_693_;
goto v_reusejp_689_;
}
v_reusejp_689_:
{
lean_object* v___x_691_; lean_object* v___x_692_; 
v___x_691_ = lean_st_ref_put(v___y_660_, v___x_690_);
v___x_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_692_, 0, v___x_685_);
return v___x_692_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg___boxed(lean_object* v_mvarId_697_, lean_object* v_val_698_, lean_object* v___y_699_, lean_object* v___y_700_){
_start:
{
lean_object* v_res_701_; 
v_res_701_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_697_, v_val_698_, v___y_699_);
lean_dec(v___y_699_);
return v_res_701_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0(lean_object* v_mvarId_702_, lean_object* v_rule_703_, lean_object* v___y_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_){
_start:
{
lean_object* v___x_711_; 
lean_inc(v_mvarId_702_);
v___x_711_ = l_Lean_MVarId_getDecl(v_mvarId_702_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_object* v_a_712_; lean_object* v_expr_713_; lean_object* v_pattern_714_; lean_object* v_resultPos_715_; lean_object* v_type_716_; uint8_t v___x_717_; lean_object* v___x_718_; 
v_a_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_a_712_);
lean_dec_ref_known(v___x_711_, 1);
v_expr_713_ = lean_ctor_get(v_rule_703_, 0);
lean_inc_ref(v_expr_713_);
v_pattern_714_ = lean_ctor_get(v_rule_703_, 1);
lean_inc_ref_n(v_pattern_714_, 2);
v_resultPos_715_ = lean_ctor_get(v_rule_703_, 2);
lean_inc(v_resultPos_715_);
lean_dec_ref(v_rule_703_);
v_type_716_ = lean_ctor_get(v_a_712_, 2);
lean_inc_ref(v_type_716_);
lean_dec(v_a_712_);
v___x_717_ = 1;
v___x_718_ = l_Lean_Meta_Sym_Pattern_unify_x3f(v_pattern_714_, v_type_716_, v___x_717_, v___y_704_, v___y_705_, v___y_706_, v___y_707_, v___y_708_, v___y_709_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v_a_719_; lean_object* v___x_721_; uint8_t v_isShared_722_; uint8_t v_isSharedCheck_755_; 
v_a_719_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_755_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_755_ == 0)
{
v___x_721_ = v___x_718_;
v_isShared_722_ = v_isSharedCheck_755_;
goto v_resetjp_720_;
}
else
{
lean_inc(v_a_719_);
lean_dec(v___x_718_);
v___x_721_ = lean_box(0);
v_isShared_722_ = v_isSharedCheck_755_;
goto v_resetjp_720_;
}
v_resetjp_720_:
{
if (lean_obj_tag(v_a_719_) == 1)
{
lean_object* v_val_723_; lean_object* v___x_725_; uint8_t v_isShared_726_; uint8_t v_isSharedCheck_750_; 
v_val_723_ = lean_ctor_get(v_a_719_, 0);
v_isSharedCheck_750_ = !lean_is_exclusive(v_a_719_);
if (v_isSharedCheck_750_ == 0)
{
v___x_725_ = v_a_719_;
v_isShared_726_ = v_isSharedCheck_750_;
goto v_resetjp_724_;
}
else
{
lean_inc(v_val_723_);
lean_dec(v_a_719_);
v___x_725_ = lean_box(0);
v_isShared_726_ = v_isSharedCheck_750_;
goto v_resetjp_724_;
}
v_resetjp_724_:
{
lean_object* v_unresolvedInsts_727_; lean_object* v___x_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_unresolvedInsts_727_ = lean_ctor_get(v_val_723_, 2);
v___x_728_ = lean_array_get_size(v_unresolvedInsts_727_);
v___x_729_ = lean_unsigned_to_nat(0u);
v___x_730_ = lean_nat_dec_eq(v___x_728_, v___x_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; lean_object* v___x_733_; 
lean_del_object(v___x_725_);
lean_dec(v_val_723_);
lean_dec(v_resultPos_715_);
lean_dec_ref(v_pattern_714_);
lean_dec_ref(v_expr_713_);
lean_dec(v_mvarId_702_);
v___x_731_ = lean_box(0);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_731_);
v___x_733_ = v___x_721_;
goto v_reusejp_732_;
}
else
{
lean_object* v_reuseFailAlloc_734_; 
v_reuseFailAlloc_734_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_734_, 0, v___x_731_);
v___x_733_ = v_reuseFailAlloc_734_;
goto v_reusejp_732_;
}
v_reusejp_732_:
{
return v___x_733_;
}
}
else
{
lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v___x_738_; uint8_t v_isShared_739_; uint8_t v_isSharedCheck_748_; 
lean_del_object(v___x_721_);
lean_inc(v_val_723_);
v___x_735_ = l___private_Lean_Meta_Sym_Apply_0__Lean_Meta_Sym_mkValue(v_expr_713_, v_pattern_714_, v_val_723_);
lean_dec_ref(v_pattern_714_);
v___x_736_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_702_, v___x_735_, v___y_707_);
v_isSharedCheck_748_ = !lean_is_exclusive(v___x_736_);
if (v_isSharedCheck_748_ == 0)
{
lean_object* v_unused_749_; 
v_unused_749_ = lean_ctor_get(v___x_736_, 0);
lean_dec(v_unused_749_);
v___x_738_ = v___x_736_;
v_isShared_739_ = v_isSharedCheck_748_;
goto v_resetjp_737_;
}
else
{
lean_dec(v___x_736_);
v___x_738_ = lean_box(0);
v_isShared_739_ = v_isSharedCheck_748_;
goto v_resetjp_737_;
}
v_resetjp_737_:
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_743_; 
v___x_740_ = lean_box(0);
v___x_741_ = l_List_mapTR_loop___at___00Lean_Meta_Sym_BackwardRule_apply_spec__1(v_val_723_, v_resultPos_715_, v___x_740_);
lean_dec(v_val_723_);
if (v_isShared_726_ == 0)
{
lean_ctor_set(v___x_725_, 0, v___x_741_);
v___x_743_ = v___x_725_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_747_; 
v_reuseFailAlloc_747_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_747_, 0, v___x_741_);
v___x_743_ = v_reuseFailAlloc_747_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
lean_object* v___x_745_; 
if (v_isShared_739_ == 0)
{
lean_ctor_set(v___x_738_, 0, v___x_743_);
v___x_745_ = v___x_738_;
goto v_reusejp_744_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v___x_743_);
v___x_745_ = v_reuseFailAlloc_746_;
goto v_reusejp_744_;
}
v_reusejp_744_:
{
return v___x_745_;
}
}
}
}
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_753_; 
lean_dec(v_a_719_);
lean_dec(v_resultPos_715_);
lean_dec_ref(v_pattern_714_);
lean_dec_ref(v_expr_713_);
lean_dec(v_mvarId_702_);
v___x_751_ = lean_box(0);
if (v_isShared_722_ == 0)
{
lean_ctor_set(v___x_721_, 0, v___x_751_);
v___x_753_ = v___x_721_;
goto v_reusejp_752_;
}
else
{
lean_object* v_reuseFailAlloc_754_; 
v_reuseFailAlloc_754_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_754_, 0, v___x_751_);
v___x_753_ = v_reuseFailAlloc_754_;
goto v_reusejp_752_;
}
v_reusejp_752_:
{
return v___x_753_;
}
}
}
}
else
{
lean_object* v_a_756_; lean_object* v___x_758_; uint8_t v_isShared_759_; uint8_t v_isSharedCheck_763_; 
lean_dec(v_resultPos_715_);
lean_dec_ref(v_pattern_714_);
lean_dec_ref(v_expr_713_);
lean_dec(v_mvarId_702_);
v_a_756_ = lean_ctor_get(v___x_718_, 0);
v_isSharedCheck_763_ = !lean_is_exclusive(v___x_718_);
if (v_isSharedCheck_763_ == 0)
{
v___x_758_ = v___x_718_;
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
else
{
lean_inc(v_a_756_);
lean_dec(v___x_718_);
v___x_758_ = lean_box(0);
v_isShared_759_ = v_isSharedCheck_763_;
goto v_resetjp_757_;
}
v_resetjp_757_:
{
lean_object* v___x_761_; 
if (v_isShared_759_ == 0)
{
v___x_761_ = v___x_758_;
goto v_reusejp_760_;
}
else
{
lean_object* v_reuseFailAlloc_762_; 
v_reuseFailAlloc_762_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_762_, 0, v_a_756_);
v___x_761_ = v_reuseFailAlloc_762_;
goto v_reusejp_760_;
}
v_reusejp_760_:
{
return v___x_761_;
}
}
}
}
else
{
lean_object* v_a_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_771_; 
lean_dec_ref(v_rule_703_);
lean_dec(v_mvarId_702_);
v_a_764_ = lean_ctor_get(v___x_711_, 0);
v_isSharedCheck_771_ = !lean_is_exclusive(v___x_711_);
if (v_isSharedCheck_771_ == 0)
{
v___x_766_ = v___x_711_;
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_a_764_);
lean_dec(v___x_711_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_771_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_769_; 
if (v_isShared_767_ == 0)
{
v___x_769_ = v___x_766_;
goto v_reusejp_768_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_a_764_);
v___x_769_ = v_reuseFailAlloc_770_;
goto v_reusejp_768_;
}
v_reusejp_768_:
{
return v___x_769_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed(lean_object* v_mvarId_772_, lean_object* v_rule_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_){
_start:
{
lean_object* v_res_781_; 
v_res_781_ = l_Lean_Meta_Sym_BackwardRule_apply___lam__0(v_mvarId_772_, v_rule_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_);
lean_dec(v___y_779_);
lean_dec_ref(v___y_778_);
lean_dec(v___y_777_);
lean_dec_ref(v___y_776_);
lean_dec(v___y_775_);
lean_dec_ref(v___y_774_);
return v_res_781_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply(lean_object* v_mvarId_782_, lean_object* v_rule_783_, lean_object* v_a_784_, lean_object* v_a_785_, lean_object* v_a_786_, lean_object* v_a_787_, lean_object* v_a_788_, lean_object* v_a_789_){
_start:
{
lean_object* v___f_791_; lean_object* v___x_792_; 
lean_inc(v_mvarId_782_);
v___f_791_ = lean_alloc_closure((void*)(l_Lean_Meta_Sym_BackwardRule_apply___lam__0___boxed), 9, 2);
lean_closure_set(v___f_791_, 0, v_mvarId_782_);
lean_closure_set(v___f_791_, 1, v_rule_783_);
v___x_792_ = l_Lean_MVarId_withContext___at___00Lean_Meta_Sym_BackwardRule_apply_spec__2___redArg(v_mvarId_782_, v___f_791_, v_a_784_, v_a_785_, v_a_786_, v_a_787_, v_a_788_, v_a_789_);
return v___x_792_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply___boxed(lean_object* v_mvarId_793_, lean_object* v_rule_794_, lean_object* v_a_795_, lean_object* v_a_796_, lean_object* v_a_797_, lean_object* v_a_798_, lean_object* v_a_799_, lean_object* v_a_800_, lean_object* v_a_801_){
_start:
{
lean_object* v_res_802_; 
v_res_802_ = l_Lean_Meta_Sym_BackwardRule_apply(v_mvarId_793_, v_rule_794_, v_a_795_, v_a_796_, v_a_797_, v_a_798_, v_a_799_, v_a_800_);
lean_dec(v_a_800_);
lean_dec_ref(v_a_799_);
lean_dec(v_a_798_);
lean_dec_ref(v_a_797_);
lean_dec(v_a_796_);
lean_dec_ref(v_a_795_);
return v_res_802_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(lean_object* v_mvarId_803_, lean_object* v_val_804_, lean_object* v___y_805_, lean_object* v___y_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_, lean_object* v___y_810_){
_start:
{
lean_object* v___x_812_; 
v___x_812_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___redArg(v_mvarId_803_, v_val_804_, v___y_808_);
return v___x_812_;
}
}
LEAN_EXPORT lean_object* l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0___boxed(lean_object* v_mvarId_813_, lean_object* v_val_814_, lean_object* v___y_815_, lean_object* v___y_816_, lean_object* v___y_817_, lean_object* v___y_818_, lean_object* v___y_819_, lean_object* v___y_820_, lean_object* v___y_821_){
_start:
{
lean_object* v_res_822_; 
v_res_822_ = l_Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0(v_mvarId_813_, v_val_814_, v___y_815_, v___y_816_, v___y_817_, v___y_818_, v___y_819_, v___y_820_);
lean_dec(v___y_820_);
lean_dec_ref(v___y_819_);
lean_dec(v___y_818_);
lean_dec_ref(v___y_817_);
lean_dec(v___y_816_);
lean_dec_ref(v___y_815_);
return v_res_822_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0(lean_object* v_00_u03b2_823_, lean_object* v_x_824_, lean_object* v_x_825_, lean_object* v_x_826_){
_start:
{
lean_object* v___x_827_; 
v___x_827_ = l_Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0___redArg(v_x_824_, v_x_825_, v_x_826_);
return v___x_827_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(lean_object* v_00_u03b2_828_, lean_object* v_x_829_, size_t v_x_830_, size_t v_x_831_, lean_object* v_x_832_, lean_object* v_x_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___redArg(v_x_829_, v_x_830_, v_x_831_, v_x_832_, v_x_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b2_835_, lean_object* v_x_836_, lean_object* v_x_837_, lean_object* v_x_838_, lean_object* v_x_839_, lean_object* v_x_840_){
_start:
{
size_t v_x_3527__boxed_841_; size_t v_x_3528__boxed_842_; lean_object* v_res_843_; 
v_x_3527__boxed_841_ = lean_unbox_usize(v_x_837_);
lean_dec(v_x_837_);
v_x_3528__boxed_842_ = lean_unbox_usize(v_x_838_);
lean_dec(v_x_838_);
v_res_843_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2(v_00_u03b2_835_, v_x_836_, v_x_3527__boxed_841_, v_x_3528__boxed_842_, v_x_839_, v_x_840_);
return v_res_843_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4(lean_object* v_00_u03b2_844_, lean_object* v_n_845_, lean_object* v_k_846_, lean_object* v_v_847_){
_start:
{
lean_object* v___x_848_; 
v___x_848_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4___redArg(v_n_845_, v_k_846_, v_v_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(lean_object* v_00_u03b2_849_, size_t v_depth_850_, lean_object* v_keys_851_, lean_object* v_vals_852_, lean_object* v_heq_853_, lean_object* v_i_854_, lean_object* v_entries_855_){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___redArg(v_depth_850_, v_keys_851_, v_vals_852_, v_i_854_, v_entries_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5___boxed(lean_object* v_00_u03b2_857_, lean_object* v_depth_858_, lean_object* v_keys_859_, lean_object* v_vals_860_, lean_object* v_heq_861_, lean_object* v_i_862_, lean_object* v_entries_863_){
_start:
{
size_t v_depth_boxed_864_; lean_object* v_res_865_; 
v_depth_boxed_864_ = lean_unbox_usize(v_depth_858_);
lean_dec(v_depth_858_);
v_res_865_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__5(v_00_u03b2_857_, v_depth_boxed_864_, v_keys_859_, v_vals_860_, v_heq_861_, v_i_862_, v_entries_863_);
lean_dec_ref(v_vals_860_);
lean_dec_ref(v_keys_859_);
return v_res_865_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_866_, lean_object* v_x_867_, lean_object* v_x_868_, lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_MVarId_assign___at___00Lean_Meta_Sym_BackwardRule_apply_spec__0_spec__0_spec__2_spec__4_spec__5___redArg(v_x_867_, v_x_868_, v_x_869_, v_x_870_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(lean_object* v_msgData_872_, lean_object* v___y_873_, lean_object* v___y_874_, lean_object* v___y_875_, lean_object* v___y_876_){
_start:
{
lean_object* v___x_878_; lean_object* v_env_879_; uint8_t v___x_880_; lean_object* v_env_881_; lean_object* v___x_882_; lean_object* v_toCold_883_; lean_object* v_mctx_884_; lean_object* v_lctx_885_; lean_object* v_options_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; 
v___x_878_ = lean_st_ref_get(v___y_876_);
v_env_879_ = lean_ctor_get(v___x_878_, 0);
lean_inc_ref(v_env_879_);
lean_dec(v___x_878_);
v___x_880_ = 0;
v_env_881_ = l_Lean_Environment_setRecordingDeps(v_env_879_, v___x_880_);
v___x_882_ = lean_st_ref_get(v___y_874_);
v_toCold_883_ = lean_ctor_get(v___y_875_, 0);
v_mctx_884_ = lean_ctor_get(v___x_882_, 0);
lean_inc_ref(v_mctx_884_);
lean_dec(v___x_882_);
v_lctx_885_ = lean_ctor_get(v___y_873_, 2);
v_options_886_ = lean_ctor_get(v_toCold_883_, 2);
lean_inc_ref(v_options_886_);
lean_inc_ref(v_lctx_885_);
v___x_887_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_887_, 0, v_env_881_);
lean_ctor_set(v___x_887_, 1, v_mctx_884_);
lean_ctor_set(v___x_887_, 2, v_lctx_885_);
lean_ctor_set(v___x_887_, 3, v_options_886_);
v___x_888_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_888_, 0, v___x_887_);
lean_ctor_set(v___x_888_, 1, v_msgData_872_);
v___x_889_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0___boxed(lean_object* v_msgData_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_){
_start:
{
lean_object* v_res_896_; 
v_res_896_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(v_msgData_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_);
lean_dec(v___y_894_);
lean_dec_ref(v___y_893_);
lean_dec(v___y_892_);
lean_dec_ref(v___y_891_);
return v_res_896_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(lean_object* v_msg_897_, lean_object* v___y_898_, lean_object* v___y_899_, lean_object* v___y_900_, lean_object* v___y_901_){
_start:
{
lean_object* v_ref_903_; lean_object* v___x_904_; lean_object* v_a_905_; lean_object* v___x_907_; uint8_t v_isShared_908_; uint8_t v_isSharedCheck_913_; 
v_ref_903_ = lean_ctor_get(v___y_900_, 2);
v___x_904_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0_spec__0(v_msg_897_, v___y_898_, v___y_899_, v___y_900_, v___y_901_);
v_a_905_ = lean_ctor_get(v___x_904_, 0);
v_isSharedCheck_913_ = !lean_is_exclusive(v___x_904_);
if (v_isSharedCheck_913_ == 0)
{
v___x_907_ = v___x_904_;
v_isShared_908_ = v_isSharedCheck_913_;
goto v_resetjp_906_;
}
else
{
lean_inc(v_a_905_);
lean_dec(v___x_904_);
v___x_907_ = lean_box(0);
v_isShared_908_ = v_isSharedCheck_913_;
goto v_resetjp_906_;
}
v_resetjp_906_:
{
lean_object* v___x_909_; lean_object* v___x_911_; 
lean_inc(v_ref_903_);
v___x_909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_909_, 0, v_ref_903_);
lean_ctor_set(v___x_909_, 1, v_a_905_);
if (v_isShared_908_ == 0)
{
lean_ctor_set_tag(v___x_907_, 1);
lean_ctor_set(v___x_907_, 0, v___x_909_);
v___x_911_ = v___x_907_;
goto v_reusejp_910_;
}
else
{
lean_object* v_reuseFailAlloc_912_; 
v_reuseFailAlloc_912_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_912_, 0, v___x_909_);
v___x_911_ = v_reuseFailAlloc_912_;
goto v_reusejp_910_;
}
v_reusejp_910_:
{
return v___x_911_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg___boxed(lean_object* v_msg_914_, lean_object* v___y_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v_msg_914_, v___y_915_, v___y_916_, v___y_917_, v___y_918_);
lean_dec(v___y_918_);
lean_dec_ref(v___y_917_);
lean_dec(v___y_916_);
lean_dec_ref(v___y_915_);
return v_res_920_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1(void){
_start:
{
lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_922_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__0));
v___x_923_ = l_Lean_stringToMessageData(v___x_922_);
return v___x_923_;
}
}
static lean_object* _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3(void){
_start:
{
lean_object* v___x_925_; lean_object* v___x_926_; 
v___x_925_ = ((lean_object*)(l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__2));
v___x_926_ = l_Lean_stringToMessageData(v___x_925_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27(lean_object* v_mvarId_927_, lean_object* v_rule_928_, lean_object* v_a_929_, lean_object* v_a_930_, lean_object* v_a_931_, lean_object* v_a_932_, lean_object* v_a_933_, lean_object* v_a_934_){
_start:
{
lean_object* v___x_936_; 
lean_inc_ref(v_rule_928_);
lean_inc(v_mvarId_927_);
v___x_936_ = l_Lean_Meta_Sym_BackwardRule_apply(v_mvarId_927_, v_rule_928_, v_a_929_, v_a_930_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
if (lean_obj_tag(v___x_936_) == 0)
{
lean_object* v_a_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_954_; 
v_a_937_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_954_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_954_ == 0)
{
v___x_939_ = v___x_936_;
v_isShared_940_ = v_isSharedCheck_954_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_a_937_);
lean_dec(v___x_936_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_954_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
if (lean_obj_tag(v_a_937_) == 1)
{
lean_object* v_mvarIds_941_; lean_object* v___x_943_; 
lean_dec_ref(v_rule_928_);
lean_dec(v_mvarId_927_);
v_mvarIds_941_ = lean_ctor_get(v_a_937_, 0);
lean_inc(v_mvarIds_941_);
lean_dec_ref_known(v_a_937_, 1);
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 0, v_mvarIds_941_);
v___x_943_ = v___x_939_;
goto v_reusejp_942_;
}
else
{
lean_object* v_reuseFailAlloc_944_; 
v_reuseFailAlloc_944_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_944_, 0, v_mvarIds_941_);
v___x_943_ = v_reuseFailAlloc_944_;
goto v_reusejp_942_;
}
v_reusejp_942_:
{
return v___x_943_;
}
}
else
{
lean_object* v_expr_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
lean_del_object(v___x_939_);
lean_dec(v_a_937_);
v_expr_945_ = lean_ctor_get(v_rule_928_, 0);
lean_inc_ref(v_expr_945_);
lean_dec_ref(v_rule_928_);
v___x_946_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__1);
v___x_947_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_947_, 0, v_mvarId_927_);
v___x_948_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_948_, 0, v___x_946_);
lean_ctor_set(v___x_948_, 1, v___x_947_);
v___x_949_ = lean_obj_once(&l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3, &l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3_once, _init_l_Lean_Meta_Sym_BackwardRule_apply_x27___closed__3);
v___x_950_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_950_, 0, v___x_948_);
lean_ctor_set(v___x_950_, 1, v___x_949_);
v___x_951_ = l_Lean_indentExpr(v_expr_945_);
v___x_952_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_952_, 0, v___x_950_);
lean_ctor_set(v___x_952_, 1, v___x_951_);
v___x_953_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v___x_952_, v_a_931_, v_a_932_, v_a_933_, v_a_934_);
return v___x_953_;
}
}
}
else
{
lean_object* v_a_955_; lean_object* v___x_957_; uint8_t v_isShared_958_; uint8_t v_isSharedCheck_962_; 
lean_dec_ref(v_rule_928_);
lean_dec(v_mvarId_927_);
v_a_955_ = lean_ctor_get(v___x_936_, 0);
v_isSharedCheck_962_ = !lean_is_exclusive(v___x_936_);
if (v_isSharedCheck_962_ == 0)
{
v___x_957_ = v___x_936_;
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
else
{
lean_inc(v_a_955_);
lean_dec(v___x_936_);
v___x_957_ = lean_box(0);
v_isShared_958_ = v_isSharedCheck_962_;
goto v_resetjp_956_;
}
v_resetjp_956_:
{
lean_object* v___x_960_; 
if (v_isShared_958_ == 0)
{
v___x_960_ = v___x_957_;
goto v_reusejp_959_;
}
else
{
lean_object* v_reuseFailAlloc_961_; 
v_reuseFailAlloc_961_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_961_, 0, v_a_955_);
v___x_960_ = v_reuseFailAlloc_961_;
goto v_reusejp_959_;
}
v_reusejp_959_:
{
return v___x_960_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_BackwardRule_apply_x27___boxed(lean_object* v_mvarId_963_, lean_object* v_rule_964_, lean_object* v_a_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_){
_start:
{
lean_object* v_res_972_; 
v_res_972_ = l_Lean_Meta_Sym_BackwardRule_apply_x27(v_mvarId_963_, v_rule_964_, v_a_965_, v_a_966_, v_a_967_, v_a_968_, v_a_969_, v_a_970_);
lean_dec(v_a_970_);
lean_dec_ref(v_a_969_);
lean_dec(v_a_968_);
lean_dec_ref(v_a_967_);
lean_dec(v_a_966_);
lean_dec_ref(v_a_965_);
return v_res_972_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(lean_object* v_00_u03b1_973_, lean_object* v_msg_974_, lean_object* v___y_975_, lean_object* v___y_976_, lean_object* v___y_977_, lean_object* v___y_978_, lean_object* v___y_979_, lean_object* v___y_980_){
_start:
{
lean_object* v___x_982_; 
v___x_982_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___redArg(v_msg_974_, v___y_977_, v___y_978_, v___y_979_, v___y_980_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0___boxed(lean_object* v_00_u03b1_983_, lean_object* v_msg_984_, lean_object* v___y_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_throwError___at___00Lean_Meta_Sym_BackwardRule_apply_x27_spec__0(v_00_u03b1_983_, v_msg_984_, v___y_985_, v___y_986_, v___y_987_, v___y_988_, v___y_989_, v___y_990_);
lean_dec(v___y_990_);
lean_dec_ref(v___y_989_);
lean_dec(v___y_988_);
lean_dec_ref(v___y_987_);
lean_dec(v___y_986_);
lean_dec_ref(v___y_985_);
return v_res_992_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* runtime_initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_Pattern(uint8_t builtin);
lean_object* initialize_Lean_Util_CollectFVars(uint8_t builtin);
lean_object* initialize_Init_Data_Range_Polymorphic_Iterators(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Apply(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_Pattern(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Util_CollectFVars(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Range_Polymorphic_Iterators(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Apply(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Apply(builtin);
}
#ifdef __cplusplus
}
#endif
