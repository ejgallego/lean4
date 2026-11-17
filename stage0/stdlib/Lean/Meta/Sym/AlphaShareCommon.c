// Lean compiler output
// Module: Lean.Meta.Sym.AlphaShareCommon
// Imports: public import Lean.Meta.Sym.ExprPtr public import Lean.Environment import Init.Grind.Util import Lean.ReducibilityAttrs import Lean.ProjFns
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
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_mix_hash(uint64_t, uint64_t);
uint64_t lean_uint64_of_nat(lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
uint8_t l_Lean_KVMap_eqv(lean_object*, lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t l_Lean_getReducibilityStatusCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_isProjectionFn(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOfArity(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_mkProj(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_lam___override(lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_instBEqBinderInfo_beq(uint8_t, uint8_t);
lean_object* l_Lean_Expr_forallE___override(lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_letE___override(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed(lean_object*);
lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__1 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "EqMatch"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__2 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__2_value),LEAN_SCALAR_PTR_LITERAL(128, 191, 100, 49, 216, 68, 143, 22)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__3 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__3_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "MatchCond"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__4 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__4_value),LEAN_SCALAR_PTR_LITERAL(109, 233, 187, 249, 156, 65, 204, 232)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__5 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__5_value;
static const lean_string_object l_Lean_Meta_Sym_isGrindGadget___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "nestedDecidable"};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__6 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Sym_isGrindGadget___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value_aux_1),((lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__6_value),LEAN_SCALAR_PTR_LITERAL(65, 76, 105, 85, 179, 183, 200, 153)}};
static const lean_object* l_Lean_Meta_Sym_isGrindGadget___closed__7 = (const lean_object*)&l_Lean_Meta_Sym_isGrindGadget___closed__7_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isGrindGadget(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isGrindGadget___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleCandidate(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleCandidate___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instHashableAlphaKey = (const lean_object*)&l_Lean_Meta_Sym_instHashableAlphaKey___closed__0_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___closed__0 = (const lean_object*)&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_Meta_Sym_instBEqAlphaKey = (const lean_object*)&l_Lean_Meta_Sym_instBEqAlphaKey___closed__0_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "__dummy__"};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__0_value),LEAN_SCALAR_PTR_LITERAL(182, 141, 137, 132, 208, 124, 31, 129)}};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instBEqExprPtr___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0_value;
static const lean_closure_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_Sym_instHashableExprPtr___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "decide"};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_ctor_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__1_value),LEAN_SCALAR_PTR_LITERAL(16, 96, 65, 173, 152, 155, 4, 222)}};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__2 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__0_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(lean_object* v_e_1_){
_start:
{
switch(lean_obj_tag(v_e_1_))
{
case 5:
{
size_t v___x_7_; size_t v___x_8_; size_t v___x_9_; uint64_t v___x_10_; 
v___x_7_ = lean_ptr_addr(v_e_1_);
v___x_8_ = ((size_t)3ULL);
v___x_9_ = lean_usize_shift_right(v___x_7_, v___x_8_);
v___x_10_ = lean_usize_to_uint64(v___x_9_);
return v___x_10_;
}
case 6:
{
goto v___jp_2_;
}
case 7:
{
goto v___jp_2_;
}
case 8:
{
size_t v___x_11_; size_t v___x_12_; size_t v___x_13_; uint64_t v___x_14_; 
v___x_11_ = lean_ptr_addr(v_e_1_);
v___x_12_ = ((size_t)3ULL);
v___x_13_ = lean_usize_shift_right(v___x_11_, v___x_12_);
v___x_14_ = lean_usize_to_uint64(v___x_13_);
return v___x_14_;
}
case 10:
{
size_t v___x_15_; size_t v___x_16_; size_t v___x_17_; uint64_t v___x_18_; 
v___x_15_ = lean_ptr_addr(v_e_1_);
v___x_16_ = ((size_t)3ULL);
v___x_17_ = lean_usize_shift_right(v___x_15_, v___x_16_);
v___x_18_ = lean_usize_to_uint64(v___x_17_);
return v___x_18_;
}
case 11:
{
size_t v___x_19_; size_t v___x_20_; size_t v___x_21_; uint64_t v___x_22_; 
v___x_19_ = lean_ptr_addr(v_e_1_);
v___x_20_ = ((size_t)3ULL);
v___x_21_ = lean_usize_shift_right(v___x_19_, v___x_20_);
v___x_22_ = lean_usize_to_uint64(v___x_21_);
return v___x_22_;
}
default: 
{
uint64_t v___x_23_; 
v___x_23_ = l_Lean_Expr_hash(v_e_1_);
return v___x_23_;
}
}
v___jp_2_:
{
size_t v___x_3_; size_t v___x_4_; size_t v___x_5_; uint64_t v___x_6_; 
v___x_3_ = lean_ptr_addr(v_e_1_);
v___x_4_ = ((size_t)3ULL);
v___x_5_ = lean_usize_shift_right(v___x_3_, v___x_4_);
v___x_6_ = lean_usize_to_uint64(v___x_5_);
return v___x_6_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild___boxed(lean_object* v_e_24_){
_start:
{
uint64_t v_res_25_; lean_object* v_r_26_; 
v_res_25_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_e_24_);
lean_dec_ref(v_e_24_);
v_r_26_ = lean_box_uint64(v_res_25_);
return v_r_26_;
}
}
LEAN_EXPORT uint64_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(lean_object* v_e_27_){
_start:
{
lean_object* v_d_29_; lean_object* v_b_30_; 
switch(lean_obj_tag(v_e_27_))
{
case 5:
{
lean_object* v_fn_34_; lean_object* v_arg_35_; uint64_t v___x_36_; uint64_t v___x_37_; uint64_t v___x_38_; 
v_fn_34_ = lean_ctor_get(v_e_27_, 0);
v_arg_35_ = lean_ctor_get(v_e_27_, 1);
v___x_36_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_fn_34_);
v___x_37_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_arg_35_);
v___x_38_ = lean_uint64_mix_hash(v___x_36_, v___x_37_);
return v___x_38_;
}
case 6:
{
lean_object* v_binderType_39_; lean_object* v_body_40_; 
v_binderType_39_ = lean_ctor_get(v_e_27_, 1);
v_body_40_ = lean_ctor_get(v_e_27_, 2);
v_d_29_ = v_binderType_39_;
v_b_30_ = v_body_40_;
goto v___jp_28_;
}
case 7:
{
lean_object* v_binderType_41_; lean_object* v_body_42_; 
v_binderType_41_ = lean_ctor_get(v_e_27_, 1);
v_body_42_ = lean_ctor_get(v_e_27_, 2);
v_d_29_ = v_binderType_41_;
v_b_30_ = v_body_42_;
goto v___jp_28_;
}
case 8:
{
lean_object* v_type_43_; lean_object* v_value_44_; lean_object* v_body_45_; uint8_t v_nondep_46_; uint64_t v___y_48_; 
v_type_43_ = lean_ctor_get(v_e_27_, 1);
v_value_44_ = lean_ctor_get(v_e_27_, 2);
v_body_45_ = lean_ctor_get(v_e_27_, 3);
v_nondep_46_ = lean_ctor_get_uint8(v_e_27_, sizeof(void*)*4 + 8);
if (v_nondep_46_ == 0)
{
uint64_t v___x_55_; 
v___x_55_ = 19ULL;
v___y_48_ = v___x_55_;
goto v___jp_47_;
}
else
{
uint64_t v___x_56_; 
v___x_56_ = 17ULL;
v___y_48_ = v___x_56_;
goto v___jp_47_;
}
v___jp_47_:
{
uint64_t v___x_49_; uint64_t v___x_50_; uint64_t v___x_51_; uint64_t v___x_52_; uint64_t v___x_53_; uint64_t v___x_54_; 
v___x_49_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_type_43_);
v___x_50_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_value_44_);
v___x_51_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_body_45_);
v___x_52_ = lean_uint64_mix_hash(v___x_50_, v___x_51_);
v___x_53_ = lean_uint64_mix_hash(v___x_49_, v___x_52_);
v___x_54_ = lean_uint64_mix_hash(v___y_48_, v___x_53_);
return v___x_54_;
}
}
case 10:
{
lean_object* v_expr_57_; uint64_t v___x_58_; uint64_t v___x_59_; uint64_t v___x_60_; 
v_expr_57_ = lean_ctor_get(v_e_27_, 1);
v___x_58_ = 13ULL;
v___x_59_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_expr_57_);
v___x_60_ = lean_uint64_mix_hash(v___x_58_, v___x_59_);
return v___x_60_;
}
case 11:
{
lean_object* v_typeName_61_; lean_object* v_idx_62_; lean_object* v_struct_63_; uint64_t v___y_65_; 
v_typeName_61_ = lean_ctor_get(v_e_27_, 0);
v_idx_62_ = lean_ctor_get(v_e_27_, 1);
v_struct_63_ = lean_ctor_get(v_e_27_, 2);
if (lean_obj_tag(v_typeName_61_) == 0)
{
uint64_t v___x_70_; 
v___x_70_ = 1723ULL;
v___y_65_ = v___x_70_;
goto v___jp_64_;
}
else
{
uint64_t v_hash_71_; 
v_hash_71_ = lean_ctor_get_uint64(v_typeName_61_, sizeof(void*)*2);
v___y_65_ = v_hash_71_;
goto v___jp_64_;
}
v___jp_64_:
{
uint64_t v___x_66_; uint64_t v___x_67_; uint64_t v___x_68_; uint64_t v___x_69_; 
v___x_66_ = lean_uint64_of_nat(v_idx_62_);
v___x_67_ = lean_uint64_mix_hash(v___y_65_, v___x_66_);
v___x_68_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_struct_63_);
v___x_69_ = lean_uint64_mix_hash(v___x_67_, v___x_68_);
return v___x_69_;
}
}
default: 
{
uint64_t v___x_72_; 
v___x_72_ = l_Lean_Expr_hash(v_e_27_);
return v___x_72_;
}
}
v___jp_28_:
{
uint64_t v___x_31_; uint64_t v___x_32_; uint64_t v___x_33_; 
v___x_31_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_d_29_);
v___x_32_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_hashChild(v_b_30_);
v___x_33_ = lean_uint64_mix_hash(v___x_31_, v___x_32_);
return v___x_33_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash___boxed(lean_object* v_e_73_){
_start:
{
uint64_t v_res_74_; lean_object* v_r_75_; 
v_res_74_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_73_);
lean_dec_ref(v_e_73_);
v_r_75_ = lean_box_uint64(v_res_74_);
return v_r_75_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(lean_object* v_e_u2081_76_, lean_object* v_e_u2082_77_){
_start:
{
switch(lean_obj_tag(v_e_u2081_76_))
{
case 5:
{
if (lean_obj_tag(v_e_u2082_77_) == 5)
{
lean_object* v_fn_78_; lean_object* v_arg_79_; lean_object* v_fn_80_; lean_object* v_arg_81_; size_t v___x_82_; size_t v___x_83_; uint8_t v___x_84_; 
v_fn_78_ = lean_ctor_get(v_e_u2081_76_, 0);
v_arg_79_ = lean_ctor_get(v_e_u2081_76_, 1);
v_fn_80_ = lean_ctor_get(v_e_u2082_77_, 0);
v_arg_81_ = lean_ctor_get(v_e_u2082_77_, 1);
v___x_82_ = lean_ptr_addr(v_fn_78_);
v___x_83_ = lean_ptr_addr(v_fn_80_);
v___x_84_ = lean_usize_dec_eq(v___x_82_, v___x_83_);
if (v___x_84_ == 0)
{
return v___x_84_;
}
else
{
size_t v___x_85_; size_t v___x_86_; uint8_t v___x_87_; 
v___x_85_ = lean_ptr_addr(v_arg_79_);
v___x_86_ = lean_ptr_addr(v_arg_81_);
v___x_87_ = lean_usize_dec_eq(v___x_85_, v___x_86_);
return v___x_87_;
}
}
else
{
uint8_t v___x_88_; 
v___x_88_ = 0;
return v___x_88_;
}
}
case 6:
{
if (lean_obj_tag(v_e_u2082_77_) == 6)
{
lean_object* v_binderType_89_; lean_object* v_body_90_; lean_object* v_binderType_91_; lean_object* v_body_92_; size_t v___x_93_; size_t v___x_94_; uint8_t v___x_95_; 
v_binderType_89_ = lean_ctor_get(v_e_u2081_76_, 1);
v_body_90_ = lean_ctor_get(v_e_u2081_76_, 2);
v_binderType_91_ = lean_ctor_get(v_e_u2082_77_, 1);
v_body_92_ = lean_ctor_get(v_e_u2082_77_, 2);
v___x_93_ = lean_ptr_addr(v_binderType_89_);
v___x_94_ = lean_ptr_addr(v_binderType_91_);
v___x_95_ = lean_usize_dec_eq(v___x_93_, v___x_94_);
if (v___x_95_ == 0)
{
return v___x_95_;
}
else
{
size_t v___x_96_; size_t v___x_97_; uint8_t v___x_98_; 
v___x_96_ = lean_ptr_addr(v_body_90_);
v___x_97_ = lean_ptr_addr(v_body_92_);
v___x_98_ = lean_usize_dec_eq(v___x_96_, v___x_97_);
return v___x_98_;
}
}
else
{
uint8_t v___x_99_; 
v___x_99_ = 0;
return v___x_99_;
}
}
case 7:
{
if (lean_obj_tag(v_e_u2082_77_) == 7)
{
lean_object* v_binderType_100_; lean_object* v_body_101_; lean_object* v_binderType_102_; lean_object* v_body_103_; size_t v___x_104_; size_t v___x_105_; uint8_t v___x_106_; 
v_binderType_100_ = lean_ctor_get(v_e_u2081_76_, 1);
v_body_101_ = lean_ctor_get(v_e_u2081_76_, 2);
v_binderType_102_ = lean_ctor_get(v_e_u2082_77_, 1);
v_body_103_ = lean_ctor_get(v_e_u2082_77_, 2);
v___x_104_ = lean_ptr_addr(v_binderType_100_);
v___x_105_ = lean_ptr_addr(v_binderType_102_);
v___x_106_ = lean_usize_dec_eq(v___x_104_, v___x_105_);
if (v___x_106_ == 0)
{
return v___x_106_;
}
else
{
size_t v___x_107_; size_t v___x_108_; uint8_t v___x_109_; 
v___x_107_ = lean_ptr_addr(v_body_101_);
v___x_108_ = lean_ptr_addr(v_body_103_);
v___x_109_ = lean_usize_dec_eq(v___x_107_, v___x_108_);
return v___x_109_;
}
}
else
{
uint8_t v___x_110_; 
v___x_110_ = 0;
return v___x_110_;
}
}
case 8:
{
if (lean_obj_tag(v_e_u2082_77_) == 8)
{
lean_object* v_type_111_; lean_object* v_value_112_; lean_object* v_body_113_; uint8_t v_nondep_114_; lean_object* v_type_115_; lean_object* v_value_116_; lean_object* v_body_117_; uint8_t v_nondep_118_; 
v_type_111_ = lean_ctor_get(v_e_u2081_76_, 1);
v_value_112_ = lean_ctor_get(v_e_u2081_76_, 2);
v_body_113_ = lean_ctor_get(v_e_u2081_76_, 3);
v_nondep_114_ = lean_ctor_get_uint8(v_e_u2081_76_, sizeof(void*)*4 + 8);
v_type_115_ = lean_ctor_get(v_e_u2082_77_, 1);
v_value_116_ = lean_ctor_get(v_e_u2082_77_, 2);
v_body_117_ = lean_ctor_get(v_e_u2082_77_, 3);
v_nondep_118_ = lean_ctor_get_uint8(v_e_u2082_77_, sizeof(void*)*4 + 8);
if (v_nondep_118_ == 0)
{
if (v_nondep_114_ == 0)
{
goto v___jp_119_;
}
else
{
return v_nondep_118_;
}
}
else
{
if (v_nondep_114_ == 0)
{
return v_nondep_114_;
}
else
{
goto v___jp_119_;
}
}
v___jp_119_:
{
size_t v___x_120_; size_t v___x_121_; uint8_t v___x_122_; 
v___x_120_ = lean_ptr_addr(v_type_111_);
v___x_121_ = lean_ptr_addr(v_type_115_);
v___x_122_ = lean_usize_dec_eq(v___x_120_, v___x_121_);
if (v___x_122_ == 0)
{
return v___x_122_;
}
else
{
size_t v___x_123_; size_t v___x_124_; uint8_t v___x_125_; 
v___x_123_ = lean_ptr_addr(v_value_112_);
v___x_124_ = lean_ptr_addr(v_value_116_);
v___x_125_ = lean_usize_dec_eq(v___x_123_, v___x_124_);
if (v___x_125_ == 0)
{
return v___x_125_;
}
else
{
size_t v___x_126_; size_t v___x_127_; uint8_t v___x_128_; 
v___x_126_ = lean_ptr_addr(v_body_113_);
v___x_127_ = lean_ptr_addr(v_body_117_);
v___x_128_ = lean_usize_dec_eq(v___x_126_, v___x_127_);
return v___x_128_;
}
}
}
}
else
{
uint8_t v___x_129_; 
v___x_129_ = 0;
return v___x_129_;
}
}
case 10:
{
if (lean_obj_tag(v_e_u2082_77_) == 10)
{
lean_object* v_data_130_; lean_object* v_expr_131_; lean_object* v_data_132_; lean_object* v_expr_133_; size_t v___x_134_; size_t v___x_135_; uint8_t v___x_136_; 
v_data_130_ = lean_ctor_get(v_e_u2081_76_, 0);
v_expr_131_ = lean_ctor_get(v_e_u2081_76_, 1);
v_data_132_ = lean_ctor_get(v_e_u2082_77_, 0);
v_expr_133_ = lean_ctor_get(v_e_u2082_77_, 1);
v___x_134_ = lean_ptr_addr(v_expr_131_);
v___x_135_ = lean_ptr_addr(v_expr_133_);
v___x_136_ = lean_usize_dec_eq(v___x_134_, v___x_135_);
if (v___x_136_ == 0)
{
return v___x_136_;
}
else
{
uint8_t v___x_137_; 
v___x_137_ = l_Lean_KVMap_eqv(v_data_130_, v_data_132_);
return v___x_137_;
}
}
else
{
uint8_t v___x_138_; 
v___x_138_ = 0;
return v___x_138_;
}
}
case 11:
{
if (lean_obj_tag(v_e_u2082_77_) == 11)
{
lean_object* v_typeName_139_; lean_object* v_idx_140_; lean_object* v_struct_141_; lean_object* v_typeName_142_; lean_object* v_idx_143_; lean_object* v_struct_144_; uint8_t v___x_145_; 
v_typeName_139_ = lean_ctor_get(v_e_u2081_76_, 0);
v_idx_140_ = lean_ctor_get(v_e_u2081_76_, 1);
v_struct_141_ = lean_ctor_get(v_e_u2081_76_, 2);
v_typeName_142_ = lean_ctor_get(v_e_u2082_77_, 0);
v_idx_143_ = lean_ctor_get(v_e_u2082_77_, 1);
v_struct_144_ = lean_ctor_get(v_e_u2082_77_, 2);
v___x_145_ = lean_name_eq(v_typeName_139_, v_typeName_142_);
if (v___x_145_ == 0)
{
return v___x_145_;
}
else
{
uint8_t v___x_146_; 
v___x_146_ = lean_nat_dec_eq(v_idx_140_, v_idx_143_);
if (v___x_146_ == 0)
{
return v___x_146_;
}
else
{
size_t v___x_147_; size_t v___x_148_; uint8_t v___x_149_; 
v___x_147_ = lean_ptr_addr(v_struct_141_);
v___x_148_ = lean_ptr_addr(v_struct_144_);
v___x_149_ = lean_usize_dec_eq(v___x_147_, v___x_148_);
return v___x_149_;
}
}
}
else
{
uint8_t v___x_150_; 
v___x_150_ = 0;
return v___x_150_;
}
}
default: 
{
uint8_t v___x_151_; 
v___x_151_ = lean_expr_eqv(v_e_u2081_76_, v_e_u2082_77_);
return v___x_151_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq___boxed(lean_object* v_e_u2081_152_, lean_object* v_e_u2082_153_){
_start:
{
uint8_t v_res_154_; lean_object* v_r_155_; 
v_res_154_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_e_u2081_152_, v_e_u2082_153_);
lean_dec_ref(v_e_u2082_153_);
lean_dec_ref(v_e_u2081_152_);
v_r_155_ = lean_box(v_res_154_);
return v_r_155_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isGrindGadget(lean_object* v_declName_173_){
_start:
{
lean_object* v___x_174_; uint8_t v___x_175_; 
v___x_174_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__3));
v___x_175_ = lean_name_eq(v_declName_173_, v___x_174_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; uint8_t v___x_177_; 
v___x_176_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__5));
v___x_177_ = lean_name_eq(v_declName_173_, v___x_176_);
if (v___x_177_ == 0)
{
lean_object* v___x_178_; uint8_t v___x_179_; 
v___x_178_ = ((lean_object*)(l_Lean_Meta_Sym_isGrindGadget___closed__7));
v___x_179_ = lean_name_eq(v_declName_173_, v___x_178_);
return v___x_179_;
}
else
{
return v___x_177_;
}
}
else
{
return v___x_175_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isGrindGadget___boxed(lean_object* v_declName_180_){
_start:
{
uint8_t v_res_181_; lean_object* v_r_182_; 
v_res_181_ = l_Lean_Meta_Sym_isGrindGadget(v_declName_180_);
lean_dec(v_declName_180_);
v_r_182_ = lean_box(v_res_181_);
return v_r_182_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_isUnfoldReducibleCandidate(lean_object* v_env_183_, lean_object* v_declName_184_){
_start:
{
uint8_t v___x_185_; 
lean_inc(v_declName_184_);
lean_inc_ref(v_env_183_);
v___x_185_ = l_Lean_getReducibilityStatusCore(v_env_183_, v_declName_184_);
if (v___x_185_ == 0)
{
uint8_t v___x_186_; 
v___x_186_ = l_Lean_Meta_Sym_isGrindGadget(v_declName_184_);
if (v___x_186_ == 0)
{
uint8_t v___x_187_; 
v___x_187_ = l_Lean_Environment_isProjectionFn(v_env_183_, v_declName_184_);
if (v___x_187_ == 0)
{
uint8_t v___x_188_; 
v___x_188_ = 1;
return v___x_188_;
}
else
{
return v___x_186_;
}
}
else
{
uint8_t v___x_189_; 
lean_dec(v_declName_184_);
lean_dec_ref(v_env_183_);
v___x_189_ = 0;
return v___x_189_;
}
}
else
{
uint8_t v___x_190_; 
lean_dec(v_declName_184_);
lean_dec_ref(v_env_183_);
v___x_190_ = 0;
return v___x_190_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_isUnfoldReducibleCandidate___boxed(lean_object* v_env_191_, lean_object* v_declName_192_){
_start:
{
uint8_t v_res_193_; lean_object* v_r_194_; 
v_res_193_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_191_, v_declName_192_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
LEAN_EXPORT uint64_t l_Lean_Meta_Sym_instHashableAlphaKey___private__1(lean_object* v_k_195_){
_start:
{
uint64_t v___x_196_; 
v___x_196_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_195_);
return v___x_196_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instHashableAlphaKey___private__1___boxed(lean_object* v_k_197_){
_start:
{
uint64_t v_res_198_; lean_object* v_r_199_; 
v_res_198_ = l_Lean_Meta_Sym_instHashableAlphaKey___private__1(v_k_197_);
lean_dec_ref(v_k_197_);
v_r_199_ = lean_box_uint64(v_res_198_);
return v_r_199_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Sym_instBEqAlphaKey___private__1(lean_object* v_k_u2081_202_, lean_object* v_k_u2082_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_u2081_202_, v_k_u2082_203_);
return v___x_204_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_instBEqAlphaKey___private__1___boxed(lean_object* v_k_u2081_205_, lean_object* v_k_u2082_206_){
_start:
{
uint8_t v_res_207_; lean_object* v_r_208_; 
v_res_207_ = l_Lean_Meta_Sym_instBEqAlphaKey___private__1(v_k_u2081_205_, v_k_u2082_206_);
lean_dec_ref(v_k_u2082_206_);
lean_dec_ref(v_k_u2081_205_);
v_r_208_ = lean_box(v_res_207_);
return v_r_208_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(lean_object* v_ctx_211_, lean_object* v_declName_212_){
_start:
{
uint8_t v_checkReducible_213_; 
v_checkReducible_213_ = lean_ctor_get_uint8(v_ctx_211_, sizeof(void*)*1);
if (v_checkReducible_213_ == 0)
{
lean_dec(v_declName_212_);
lean_dec_ref(v_ctx_211_);
return v_checkReducible_213_;
}
else
{
lean_object* v_env_214_; uint8_t v___x_215_; 
v_env_214_ = lean_ctor_get(v_ctx_211_, 0);
lean_inc_ref(v_env_214_);
lean_dec_ref(v_ctx_211_);
v___x_215_ = l_Lean_Meta_Sym_isUnfoldReducibleCandidate(v_env_214_, v_declName_212_);
return v___x_215_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible___boxed(lean_object* v_ctx_216_, lean_object* v_declName_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_ctx_216_, v_declName_217_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; 
v___x_223_ = lean_box(0);
v___x_224_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__1));
v___x_225_ = l_Lean_mkConst(v___x_224_, v___x_223_);
return v___x_225_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy(void){
_start:
{
lean_object* v___x_226_; 
v___x_226_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy___closed__2);
return v___x_226_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(lean_object* v_keys_227_, lean_object* v_i_228_, lean_object* v_k_229_, lean_object* v_k_u2080_230_){
_start:
{
lean_object* v___x_231_; uint8_t v___x_232_; 
v___x_231_ = lean_array_get_size(v_keys_227_);
v___x_232_ = lean_nat_dec_lt(v_i_228_, v___x_231_);
if (v___x_232_ == 0)
{
lean_dec(v_i_228_);
lean_inc_ref(v_k_u2080_230_);
return v_k_u2080_230_;
}
else
{
lean_object* v_k_x27_233_; uint8_t v___x_234_; 
v_k_x27_233_ = lean_array_fget_borrowed(v_keys_227_, v_i_228_);
v___x_234_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_229_, v_k_x27_233_);
if (v___x_234_ == 0)
{
lean_object* v___x_235_; lean_object* v___x_236_; 
v___x_235_ = lean_unsigned_to_nat(1u);
v___x_236_ = lean_nat_add(v_i_228_, v___x_235_);
lean_dec(v_i_228_);
v_i_228_ = v___x_236_;
goto _start;
}
else
{
lean_dec(v_i_228_);
lean_inc(v_k_x27_233_);
return v_k_x27_233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg___boxed(lean_object* v_keys_238_, lean_object* v_i_239_, lean_object* v_k_240_, lean_object* v_k_u2080_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_238_, v_i_239_, v_k_240_, v_k_u2080_241_);
lean_dec_ref(v_k_u2080_241_);
lean_dec_ref(v_k_240_);
lean_dec_ref(v_keys_238_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(lean_object* v_x_243_, size_t v_x_244_, lean_object* v_x_245_, lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
lean_object* v_es_247_; lean_object* v___x_248_; size_t v___x_249_; size_t v___x_250_; lean_object* v_j_251_; lean_object* v___x_252_; 
v_es_247_ = lean_ctor_get(v_x_243_, 0);
v___x_248_ = lean_box(2);
v___x_249_ = ((size_t)31ULL);
v___x_250_ = lean_usize_land(v_x_244_, v___x_249_);
v_j_251_ = lean_usize_to_nat(v___x_250_);
v___x_252_ = lean_array_get_borrowed(v___x_248_, v_es_247_, v_j_251_);
lean_dec(v_j_251_);
switch(lean_obj_tag(v___x_252_))
{
case 0:
{
lean_object* v_key_253_; uint8_t v___x_254_; 
v_key_253_ = lean_ctor_get(v___x_252_, 0);
v___x_254_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_245_, v_key_253_);
if (v___x_254_ == 0)
{
lean_inc_ref(v_x_246_);
return v_x_246_;
}
else
{
lean_inc(v_key_253_);
return v_key_253_;
}
}
case 1:
{
lean_object* v_node_255_; size_t v___x_256_; size_t v___x_257_; 
v_node_255_ = lean_ctor_get(v___x_252_, 0);
v___x_256_ = ((size_t)5ULL);
v___x_257_ = lean_usize_shift_right(v_x_244_, v___x_256_);
v_x_243_ = v_node_255_;
v_x_244_ = v___x_257_;
goto _start;
}
default: 
{
lean_inc_ref(v_x_246_);
return v_x_246_;
}
}
}
else
{
lean_object* v_ks_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v_ks_259_ = lean_ctor_get(v_x_243_, 0);
v___x_260_ = lean_unsigned_to_nat(0u);
v___x_261_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_ks_259_, v___x_260_, v_x_245_, v_x_246_);
return v___x_261_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg___boxed(lean_object* v_x_262_, lean_object* v_x_263_, lean_object* v_x_264_, lean_object* v_x_265_){
_start:
{
size_t v_x_2059__boxed_266_; lean_object* v_res_267_; 
v_x_2059__boxed_266_ = lean_unbox_usize(v_x_263_);
lean_dec(v_x_263_);
v_res_267_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_262_, v_x_2059__boxed_266_, v_x_264_, v_x_265_);
lean_dec_ref(v_x_265_);
lean_dec_ref(v_x_264_);
lean_dec_ref(v_x_262_);
return v_res_267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(lean_object* v_x_268_, lean_object* v_x_269_, lean_object* v_x_270_, lean_object* v_x_271_){
_start:
{
lean_object* v_ks_272_; lean_object* v_vs_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_297_; 
v_ks_272_ = lean_ctor_get(v_x_268_, 0);
v_vs_273_ = lean_ctor_get(v_x_268_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_x_268_);
if (v_isSharedCheck_297_ == 0)
{
v___x_275_ = v_x_268_;
v_isShared_276_ = v_isSharedCheck_297_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_vs_273_);
lean_inc(v_ks_272_);
lean_dec(v_x_268_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_297_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; uint8_t v___x_278_; 
v___x_277_ = lean_array_get_size(v_ks_272_);
v___x_278_ = lean_nat_dec_lt(v_x_269_, v___x_277_);
if (v___x_278_ == 0)
{
lean_object* v___x_279_; lean_object* v___x_280_; lean_object* v___x_282_; 
lean_dec(v_x_269_);
v___x_279_ = lean_array_push(v_ks_272_, v_x_270_);
v___x_280_ = lean_array_push(v_vs_273_, v_x_271_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_280_);
lean_ctor_set(v___x_275_, 0, v___x_279_);
v___x_282_ = v___x_275_;
goto v_reusejp_281_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v___x_280_);
v___x_282_ = v_reuseFailAlloc_283_;
goto v_reusejp_281_;
}
v_reusejp_281_:
{
return v___x_282_;
}
}
else
{
lean_object* v_k_x27_284_; uint8_t v___x_285_; 
v_k_x27_284_ = lean_array_fget_borrowed(v_ks_272_, v_x_269_);
v___x_285_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_270_, v_k_x27_284_);
if (v___x_285_ == 0)
{
lean_object* v___x_287_; 
if (v_isShared_276_ == 0)
{
v___x_287_ = v___x_275_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_291_; 
v_reuseFailAlloc_291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_291_, 0, v_ks_272_);
lean_ctor_set(v_reuseFailAlloc_291_, 1, v_vs_273_);
v___x_287_ = v_reuseFailAlloc_291_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_288_ = lean_unsigned_to_nat(1u);
v___x_289_ = lean_nat_add(v_x_269_, v___x_288_);
lean_dec(v_x_269_);
v_x_268_ = v___x_287_;
v_x_269_ = v___x_289_;
goto _start;
}
}
else
{
lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_295_; 
v___x_292_ = lean_array_fset(v_ks_272_, v_x_269_, v_x_270_);
v___x_293_ = lean_array_fset(v_vs_273_, v_x_269_, v_x_271_);
lean_dec(v_x_269_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v___x_293_);
lean_ctor_set(v___x_275_, 0, v___x_292_);
v___x_295_ = v___x_275_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_292_);
lean_ctor_set(v_reuseFailAlloc_296_, 1, v___x_293_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(lean_object* v_n_298_, lean_object* v_k_299_, lean_object* v_v_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; 
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_n_298_, v___x_301_, v_k_299_, v_v_300_);
return v___x_302_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0(void){
_start:
{
lean_object* v___x_303_; 
v___x_303_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(lean_object* v_x_304_, size_t v_x_305_, size_t v_x_306_, lean_object* v_x_307_, lean_object* v_x_308_){
_start:
{
if (lean_obj_tag(v_x_304_) == 0)
{
lean_object* v_es_309_; size_t v___x_310_; size_t v___x_311_; lean_object* v_j_312_; lean_object* v___x_313_; uint8_t v___x_314_; 
v_es_309_ = lean_ctor_get(v_x_304_, 0);
v___x_310_ = ((size_t)31ULL);
v___x_311_ = lean_usize_land(v_x_305_, v___x_310_);
v_j_312_ = lean_usize_to_nat(v___x_311_);
v___x_313_ = lean_array_get_size(v_es_309_);
v___x_314_ = lean_nat_dec_lt(v_j_312_, v___x_313_);
if (v___x_314_ == 0)
{
lean_dec(v_j_312_);
lean_dec(v_x_308_);
lean_dec_ref(v_x_307_);
return v_x_304_;
}
else
{
lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_353_; 
lean_inc_ref(v_es_309_);
v_isSharedCheck_353_ = !lean_is_exclusive(v_x_304_);
if (v_isSharedCheck_353_ == 0)
{
lean_object* v_unused_354_; 
v_unused_354_ = lean_ctor_get(v_x_304_, 0);
lean_dec(v_unused_354_);
v___x_316_ = v_x_304_;
v_isShared_317_ = v_isSharedCheck_353_;
goto v_resetjp_315_;
}
else
{
lean_dec(v_x_304_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_353_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v_v_318_; lean_object* v___x_319_; lean_object* v_xs_x27_320_; lean_object* v___y_322_; 
v_v_318_ = lean_array_fget(v_es_309_, v_j_312_);
v___x_319_ = lean_box(0);
v_xs_x27_320_ = lean_array_fset(v_es_309_, v_j_312_, v___x_319_);
switch(lean_obj_tag(v_v_318_))
{
case 0:
{
lean_object* v_key_327_; lean_object* v_val_328_; lean_object* v___x_330_; uint8_t v_isShared_331_; uint8_t v_isSharedCheck_338_; 
v_key_327_ = lean_ctor_get(v_v_318_, 0);
v_val_328_ = lean_ctor_get(v_v_318_, 1);
v_isSharedCheck_338_ = !lean_is_exclusive(v_v_318_);
if (v_isSharedCheck_338_ == 0)
{
v___x_330_ = v_v_318_;
v_isShared_331_ = v_isSharedCheck_338_;
goto v_resetjp_329_;
}
else
{
lean_inc(v_val_328_);
lean_inc(v_key_327_);
lean_dec(v_v_318_);
v___x_330_ = lean_box(0);
v_isShared_331_ = v_isSharedCheck_338_;
goto v_resetjp_329_;
}
v_resetjp_329_:
{
uint8_t v___x_332_; 
v___x_332_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_307_, v_key_327_);
if (v___x_332_ == 0)
{
lean_object* v___x_333_; lean_object* v___x_334_; 
lean_del_object(v___x_330_);
v___x_333_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_327_, v_val_328_, v_x_307_, v_x_308_);
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v___x_333_);
v___y_322_ = v___x_334_;
goto v___jp_321_;
}
else
{
lean_object* v___x_336_; 
lean_dec(v_val_328_);
lean_dec(v_key_327_);
if (v_isShared_331_ == 0)
{
lean_ctor_set(v___x_330_, 1, v_x_308_);
lean_ctor_set(v___x_330_, 0, v_x_307_);
v___x_336_ = v___x_330_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_337_; 
v_reuseFailAlloc_337_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_337_, 0, v_x_307_);
lean_ctor_set(v_reuseFailAlloc_337_, 1, v_x_308_);
v___x_336_ = v_reuseFailAlloc_337_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
v___y_322_ = v___x_336_;
goto v___jp_321_;
}
}
}
}
case 1:
{
lean_object* v_node_339_; lean_object* v___x_341_; uint8_t v_isShared_342_; uint8_t v_isSharedCheck_351_; 
v_node_339_ = lean_ctor_get(v_v_318_, 0);
v_isSharedCheck_351_ = !lean_is_exclusive(v_v_318_);
if (v_isSharedCheck_351_ == 0)
{
v___x_341_ = v_v_318_;
v_isShared_342_ = v_isSharedCheck_351_;
goto v_resetjp_340_;
}
else
{
lean_inc(v_node_339_);
lean_dec(v_v_318_);
v___x_341_ = lean_box(0);
v_isShared_342_ = v_isSharedCheck_351_;
goto v_resetjp_340_;
}
v_resetjp_340_:
{
size_t v___x_343_; size_t v___x_344_; size_t v___x_345_; size_t v___x_346_; lean_object* v___x_347_; lean_object* v___x_349_; 
v___x_343_ = ((size_t)5ULL);
v___x_344_ = lean_usize_shift_right(v_x_305_, v___x_343_);
v___x_345_ = ((size_t)1ULL);
v___x_346_ = lean_usize_add(v_x_306_, v___x_345_);
v___x_347_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_node_339_, v___x_344_, v___x_346_, v_x_307_, v_x_308_);
if (v_isShared_342_ == 0)
{
lean_ctor_set(v___x_341_, 0, v___x_347_);
v___x_349_ = v___x_341_;
goto v_reusejp_348_;
}
else
{
lean_object* v_reuseFailAlloc_350_; 
v_reuseFailAlloc_350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_350_, 0, v___x_347_);
v___x_349_ = v_reuseFailAlloc_350_;
goto v_reusejp_348_;
}
v_reusejp_348_:
{
v___y_322_ = v___x_349_;
goto v___jp_321_;
}
}
}
default: 
{
lean_object* v___x_352_; 
v___x_352_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_352_, 0, v_x_307_);
lean_ctor_set(v___x_352_, 1, v_x_308_);
v___y_322_ = v___x_352_;
goto v___jp_321_;
}
}
v___jp_321_:
{
lean_object* v___x_323_; lean_object* v___x_325_; 
v___x_323_ = lean_array_fset(v_xs_x27_320_, v_j_312_, v___y_322_);
lean_dec(v_j_312_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 0, v___x_323_);
v___x_325_ = v___x_316_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
}
}
}
else
{
lean_object* v_ks_355_; lean_object* v_vs_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_374_; 
v_ks_355_ = lean_ctor_get(v_x_304_, 0);
v_vs_356_ = lean_ctor_get(v_x_304_, 1);
v_isSharedCheck_374_ = !lean_is_exclusive(v_x_304_);
if (v_isSharedCheck_374_ == 0)
{
v___x_358_ = v_x_304_;
v_isShared_359_ = v_isSharedCheck_374_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_vs_356_);
lean_inc(v_ks_355_);
lean_dec(v_x_304_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_374_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_361_; 
if (v_isShared_359_ == 0)
{
v___x_361_ = v___x_358_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_373_; 
v_reuseFailAlloc_373_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_373_, 0, v_ks_355_);
lean_ctor_set(v_reuseFailAlloc_373_, 1, v_vs_356_);
v___x_361_ = v_reuseFailAlloc_373_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v_newNode_362_; size_t v___x_363_; uint8_t v___x_364_; 
v_newNode_362_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v___x_361_, v_x_307_, v_x_308_);
v___x_363_ = ((size_t)7ULL);
v___x_364_ = lean_usize_dec_le(v___x_363_, v_x_306_);
if (v___x_364_ == 0)
{
lean_object* v___x_365_; lean_object* v___x_366_; uint8_t v___x_367_; 
v___x_365_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_362_);
v___x_366_ = lean_unsigned_to_nat(4u);
v___x_367_ = lean_nat_dec_lt(v___x_365_, v___x_366_);
lean_dec(v___x_365_);
if (v___x_367_ == 0)
{
lean_object* v_ks_368_; lean_object* v_vs_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; 
v_ks_368_ = lean_ctor_get(v_newNode_362_, 0);
lean_inc_ref(v_ks_368_);
v_vs_369_ = lean_ctor_get(v_newNode_362_, 1);
lean_inc_ref(v_vs_369_);
lean_dec_ref(v_newNode_362_);
v___x_370_ = lean_unsigned_to_nat(0u);
v___x_371_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___closed__0);
v___x_372_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_x_306_, v_ks_368_, v_vs_369_, v___x_370_, v___x_371_);
lean_dec_ref(v_vs_369_);
lean_dec_ref(v_ks_368_);
return v___x_372_;
}
else
{
return v_newNode_362_;
}
}
else
{
return v_newNode_362_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(size_t v_depth_375_, lean_object* v_keys_376_, lean_object* v_vals_377_, lean_object* v_i_378_, lean_object* v_entries_379_){
_start:
{
lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_380_ = lean_array_get_size(v_keys_376_);
v___x_381_ = lean_nat_dec_lt(v_i_378_, v___x_380_);
if (v___x_381_ == 0)
{
lean_dec(v_i_378_);
return v_entries_379_;
}
else
{
lean_object* v_k_382_; lean_object* v_v_383_; uint64_t v___x_384_; size_t v_h_385_; size_t v___x_386_; lean_object* v___x_387_; size_t v___x_388_; size_t v___x_389_; size_t v___x_390_; size_t v_h_391_; lean_object* v___x_392_; lean_object* v___x_393_; 
v_k_382_ = lean_array_fget_borrowed(v_keys_376_, v_i_378_);
v_v_383_ = lean_array_fget_borrowed(v_vals_377_, v_i_378_);
v___x_384_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_k_382_);
v_h_385_ = lean_uint64_to_usize(v___x_384_);
v___x_386_ = ((size_t)5ULL);
v___x_387_ = lean_unsigned_to_nat(1u);
v___x_388_ = ((size_t)1ULL);
v___x_389_ = lean_usize_sub(v_depth_375_, v___x_388_);
v___x_390_ = lean_usize_mul(v___x_386_, v___x_389_);
v_h_391_ = lean_usize_shift_right(v_h_385_, v___x_390_);
v___x_392_ = lean_nat_add(v_i_378_, v___x_387_);
lean_dec(v_i_378_);
lean_inc(v_v_383_);
lean_inc(v_k_382_);
v___x_393_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_entries_379_, v_h_391_, v_depth_375_, v_k_382_, v_v_383_);
v_i_378_ = v___x_392_;
v_entries_379_ = v___x_393_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg___boxed(lean_object* v_depth_395_, lean_object* v_keys_396_, lean_object* v_vals_397_, lean_object* v_i_398_, lean_object* v_entries_399_){
_start:
{
size_t v_depth_boxed_400_; lean_object* v_res_401_; 
v_depth_boxed_400_ = lean_unbox_usize(v_depth_395_);
lean_dec(v_depth_395_);
v_res_401_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_boxed_400_, v_keys_396_, v_vals_397_, v_i_398_, v_entries_399_);
lean_dec_ref(v_vals_397_);
lean_dec_ref(v_keys_396_);
return v_res_401_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg___boxed(lean_object* v_x_402_, lean_object* v_x_403_, lean_object* v_x_404_, lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
size_t v_x_2177__boxed_407_; size_t v_x_2178__boxed_408_; lean_object* v_res_409_; 
v_x_2177__boxed_407_ = lean_unbox_usize(v_x_403_);
lean_dec(v_x_403_);
v_x_2178__boxed_408_ = lean_unbox_usize(v_x_404_);
lean_dec(v_x_404_);
v_res_409_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_402_, v_x_2177__boxed_407_, v_x_2178__boxed_408_, v_x_405_, v_x_406_);
return v_res_409_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(lean_object* v_x_410_, lean_object* v_x_411_, lean_object* v_x_412_){
_start:
{
uint64_t v___x_413_; size_t v___x_414_; size_t v___x_415_; lean_object* v___x_416_; 
v___x_413_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_411_);
v___x_414_ = lean_uint64_to_usize(v___x_413_);
v___x_415_ = ((size_t)1ULL);
v___x_416_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_410_, v___x_414_, v___x_415_, v_x_411_, v_x_412_);
return v___x_416_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(lean_object* v_a_417_, lean_object* v_b_418_, lean_object* v_x_419_){
_start:
{
if (lean_obj_tag(v_x_419_) == 0)
{
lean_dec(v_b_418_);
lean_dec_ref(v_a_417_);
return v_x_419_;
}
else
{
lean_object* v_key_420_; lean_object* v_value_421_; lean_object* v_tail_422_; lean_object* v___x_424_; uint8_t v_isShared_425_; uint8_t v_isSharedCheck_436_; 
v_key_420_ = lean_ctor_get(v_x_419_, 0);
v_value_421_ = lean_ctor_get(v_x_419_, 1);
v_tail_422_ = lean_ctor_get(v_x_419_, 2);
v_isSharedCheck_436_ = !lean_is_exclusive(v_x_419_);
if (v_isSharedCheck_436_ == 0)
{
v___x_424_ = v_x_419_;
v_isShared_425_ = v_isSharedCheck_436_;
goto v_resetjp_423_;
}
else
{
lean_inc(v_tail_422_);
lean_inc(v_value_421_);
lean_inc(v_key_420_);
lean_dec(v_x_419_);
v___x_424_ = lean_box(0);
v_isShared_425_ = v_isSharedCheck_436_;
goto v_resetjp_423_;
}
v_resetjp_423_:
{
size_t v___x_426_; size_t v___x_427_; uint8_t v___x_428_; 
v___x_426_ = lean_ptr_addr(v_key_420_);
v___x_427_ = lean_ptr_addr(v_a_417_);
v___x_428_ = lean_usize_dec_eq(v___x_426_, v___x_427_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; lean_object* v___x_431_; 
v___x_429_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_417_, v_b_418_, v_tail_422_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 2, v___x_429_);
v___x_431_ = v___x_424_;
goto v_reusejp_430_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_key_420_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v_value_421_);
lean_ctor_set(v_reuseFailAlloc_432_, 2, v___x_429_);
v___x_431_ = v_reuseFailAlloc_432_;
goto v_reusejp_430_;
}
v_reusejp_430_:
{
return v___x_431_;
}
}
else
{
lean_object* v___x_434_; 
lean_dec(v_value_421_);
lean_dec(v_key_420_);
if (v_isShared_425_ == 0)
{
lean_ctor_set(v___x_424_, 1, v_b_418_);
lean_ctor_set(v___x_424_, 0, v_a_417_);
v___x_434_ = v___x_424_;
goto v_reusejp_433_;
}
else
{
lean_object* v_reuseFailAlloc_435_; 
v_reuseFailAlloc_435_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_435_, 0, v_a_417_);
lean_ctor_set(v_reuseFailAlloc_435_, 1, v_b_418_);
lean_ctor_set(v_reuseFailAlloc_435_, 2, v_tail_422_);
v___x_434_ = v_reuseFailAlloc_435_;
goto v_reusejp_433_;
}
v_reusejp_433_:
{
return v___x_434_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(lean_object* v_x_437_, lean_object* v_x_438_){
_start:
{
if (lean_obj_tag(v_x_438_) == 0)
{
return v_x_437_;
}
else
{
lean_object* v_key_439_; lean_object* v_value_440_; lean_object* v_tail_441_; lean_object* v___x_443_; uint8_t v_isShared_444_; uint8_t v_isSharedCheck_467_; 
v_key_439_ = lean_ctor_get(v_x_438_, 0);
v_value_440_ = lean_ctor_get(v_x_438_, 1);
v_tail_441_ = lean_ctor_get(v_x_438_, 2);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_438_);
if (v_isSharedCheck_467_ == 0)
{
v___x_443_ = v_x_438_;
v_isShared_444_ = v_isSharedCheck_467_;
goto v_resetjp_442_;
}
else
{
lean_inc(v_tail_441_);
lean_inc(v_value_440_);
lean_inc(v_key_439_);
lean_dec(v_x_438_);
v___x_443_ = lean_box(0);
v_isShared_444_ = v_isSharedCheck_467_;
goto v_resetjp_442_;
}
v_resetjp_442_:
{
lean_object* v___x_445_; size_t v___x_446_; size_t v___x_447_; size_t v___x_448_; uint64_t v___x_449_; uint64_t v___x_450_; uint64_t v___x_451_; uint64_t v_fold_452_; uint64_t v___x_453_; uint64_t v___x_454_; uint64_t v___x_455_; size_t v___x_456_; size_t v___x_457_; size_t v___x_458_; size_t v___x_459_; size_t v___x_460_; lean_object* v___x_461_; lean_object* v___x_463_; 
v___x_445_ = lean_array_get_size(v_x_437_);
v___x_446_ = lean_ptr_addr(v_key_439_);
v___x_447_ = ((size_t)3ULL);
v___x_448_ = lean_usize_shift_right(v___x_446_, v___x_447_);
v___x_449_ = lean_usize_to_uint64(v___x_448_);
v___x_450_ = 32ULL;
v___x_451_ = lean_uint64_shift_right(v___x_449_, v___x_450_);
v_fold_452_ = lean_uint64_xor(v___x_449_, v___x_451_);
v___x_453_ = 16ULL;
v___x_454_ = lean_uint64_shift_right(v_fold_452_, v___x_453_);
v___x_455_ = lean_uint64_xor(v_fold_452_, v___x_454_);
v___x_456_ = lean_uint64_to_usize(v___x_455_);
v___x_457_ = lean_usize_of_nat(v___x_445_);
v___x_458_ = ((size_t)1ULL);
v___x_459_ = lean_usize_sub(v___x_457_, v___x_458_);
v___x_460_ = lean_usize_land(v___x_456_, v___x_459_);
v___x_461_ = lean_array_uget_borrowed(v_x_437_, v___x_460_);
lean_inc(v___x_461_);
if (v_isShared_444_ == 0)
{
lean_ctor_set(v___x_443_, 2, v___x_461_);
v___x_463_ = v___x_443_;
goto v_reusejp_462_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_key_439_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_value_440_);
lean_ctor_set(v_reuseFailAlloc_466_, 2, v___x_461_);
v___x_463_ = v_reuseFailAlloc_466_;
goto v_reusejp_462_;
}
v_reusejp_462_:
{
lean_object* v___x_464_; 
v___x_464_ = lean_array_uset(v_x_437_, v___x_460_, v___x_463_);
v_x_437_ = v___x_464_;
v_x_438_ = v_tail_441_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(lean_object* v_i_468_, lean_object* v_source_469_, lean_object* v_target_470_){
_start:
{
lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_471_ = lean_array_get_size(v_source_469_);
v___x_472_ = lean_nat_dec_lt(v_i_468_, v___x_471_);
if (v___x_472_ == 0)
{
lean_dec_ref(v_source_469_);
lean_dec(v_i_468_);
return v_target_470_;
}
else
{
lean_object* v_es_473_; lean_object* v___x_474_; lean_object* v_source_475_; lean_object* v_target_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
v_es_473_ = lean_array_fget(v_source_469_, v_i_468_);
v___x_474_ = lean_box(0);
v_source_475_ = lean_array_fset(v_source_469_, v_i_468_, v___x_474_);
v_target_476_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_target_470_, v_es_473_);
v___x_477_ = lean_unsigned_to_nat(1u);
v___x_478_ = lean_nat_add(v_i_468_, v___x_477_);
lean_dec(v_i_468_);
v_i_468_ = v___x_478_;
v_source_469_ = v_source_475_;
v_target_470_ = v_target_476_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(lean_object* v_data_480_){
_start:
{
lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v_nbuckets_483_; lean_object* v___x_484_; lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_481_ = lean_array_get_size(v_data_480_);
v___x_482_ = lean_unsigned_to_nat(2u);
v_nbuckets_483_ = lean_nat_mul(v___x_481_, v___x_482_);
v___x_484_ = lean_unsigned_to_nat(0u);
v___x_485_ = lean_box(0);
v___x_486_ = lean_mk_array(v_nbuckets_483_, v___x_485_);
v___x_487_ = lean_array_propagate_mark(v_data_480_, v___x_486_);
v___x_488_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v___x_484_, v_data_480_, v___x_487_);
return v___x_488_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(lean_object* v_a_489_, lean_object* v_x_490_){
_start:
{
if (lean_obj_tag(v_x_490_) == 0)
{
uint8_t v___x_491_; 
v___x_491_ = 0;
return v___x_491_;
}
else
{
lean_object* v_key_492_; lean_object* v_tail_493_; size_t v___x_494_; size_t v___x_495_; uint8_t v___x_496_; 
v_key_492_ = lean_ctor_get(v_x_490_, 0);
v_tail_493_ = lean_ctor_get(v_x_490_, 2);
v___x_494_ = lean_ptr_addr(v_key_492_);
v___x_495_ = lean_ptr_addr(v_a_489_);
v___x_496_ = lean_usize_dec_eq(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
v_x_490_ = v_tail_493_;
goto _start;
}
else
{
return v___x_496_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg___boxed(lean_object* v_a_498_, lean_object* v_x_499_){
_start:
{
uint8_t v_res_500_; lean_object* v_r_501_; 
v_res_500_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_498_, v_x_499_);
lean_dec(v_x_499_);
lean_dec_ref(v_a_498_);
v_r_501_ = lean_box(v_res_500_);
return v_r_501_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(lean_object* v_m_502_, lean_object* v_a_503_, lean_object* v_b_504_){
_start:
{
lean_object* v_size_505_; lean_object* v_buckets_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_552_; 
v_size_505_ = lean_ctor_get(v_m_502_, 0);
v_buckets_506_ = lean_ctor_get(v_m_502_, 1);
v_isSharedCheck_552_ = !lean_is_exclusive(v_m_502_);
if (v_isSharedCheck_552_ == 0)
{
v___x_508_ = v_m_502_;
v_isShared_509_ = v_isSharedCheck_552_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_buckets_506_);
lean_inc(v_size_505_);
lean_dec(v_m_502_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_552_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; size_t v___x_511_; size_t v___x_512_; size_t v___x_513_; uint64_t v___x_514_; uint64_t v___x_515_; uint64_t v___x_516_; uint64_t v_fold_517_; uint64_t v___x_518_; uint64_t v___x_519_; uint64_t v___x_520_; size_t v___x_521_; size_t v___x_522_; size_t v___x_523_; size_t v___x_524_; size_t v___x_525_; lean_object* v_bkt_526_; uint8_t v___x_527_; 
v___x_510_ = lean_array_get_size(v_buckets_506_);
v___x_511_ = lean_ptr_addr(v_a_503_);
v___x_512_ = ((size_t)3ULL);
v___x_513_ = lean_usize_shift_right(v___x_511_, v___x_512_);
v___x_514_ = lean_usize_to_uint64(v___x_513_);
v___x_515_ = 32ULL;
v___x_516_ = lean_uint64_shift_right(v___x_514_, v___x_515_);
v_fold_517_ = lean_uint64_xor(v___x_514_, v___x_516_);
v___x_518_ = 16ULL;
v___x_519_ = lean_uint64_shift_right(v_fold_517_, v___x_518_);
v___x_520_ = lean_uint64_xor(v_fold_517_, v___x_519_);
v___x_521_ = lean_uint64_to_usize(v___x_520_);
v___x_522_ = lean_usize_of_nat(v___x_510_);
v___x_523_ = ((size_t)1ULL);
v___x_524_ = lean_usize_sub(v___x_522_, v___x_523_);
v___x_525_ = lean_usize_land(v___x_521_, v___x_524_);
v_bkt_526_ = lean_array_uget_borrowed(v_buckets_506_, v___x_525_);
v___x_527_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_503_, v_bkt_526_);
if (v___x_527_ == 0)
{
lean_object* v___x_528_; lean_object* v_size_x27_529_; lean_object* v___x_530_; lean_object* v_buckets_x27_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v___x_528_ = lean_unsigned_to_nat(1u);
v_size_x27_529_ = lean_nat_add(v_size_505_, v___x_528_);
lean_dec(v_size_505_);
lean_inc(v_bkt_526_);
v___x_530_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_530_, 0, v_a_503_);
lean_ctor_set(v___x_530_, 1, v_b_504_);
lean_ctor_set(v___x_530_, 2, v_bkt_526_);
v_buckets_x27_531_ = lean_array_uset(v_buckets_506_, v___x_525_, v___x_530_);
v___x_532_ = lean_unsigned_to_nat(4u);
v___x_533_ = lean_nat_mul(v_size_x27_529_, v___x_532_);
v___x_534_ = lean_unsigned_to_nat(3u);
v___x_535_ = lean_nat_div(v___x_533_, v___x_534_);
lean_dec(v___x_533_);
v___x_536_ = lean_array_get_size(v_buckets_x27_531_);
v___x_537_ = lean_nat_dec_le(v___x_535_, v___x_536_);
lean_dec(v___x_535_);
if (v___x_537_ == 0)
{
lean_object* v_val_538_; lean_object* v___x_540_; 
v_val_538_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_buckets_x27_531_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v_val_538_);
lean_ctor_set(v___x_508_, 0, v_size_x27_529_);
v___x_540_ = v___x_508_;
goto v_reusejp_539_;
}
else
{
lean_object* v_reuseFailAlloc_541_; 
v_reuseFailAlloc_541_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_541_, 0, v_size_x27_529_);
lean_ctor_set(v_reuseFailAlloc_541_, 1, v_val_538_);
v___x_540_ = v_reuseFailAlloc_541_;
goto v_reusejp_539_;
}
v_reusejp_539_:
{
return v___x_540_;
}
}
else
{
lean_object* v___x_543_; 
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v_buckets_x27_531_);
lean_ctor_set(v___x_508_, 0, v_size_x27_529_);
v___x_543_ = v___x_508_;
goto v_reusejp_542_;
}
else
{
lean_object* v_reuseFailAlloc_544_; 
v_reuseFailAlloc_544_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_544_, 0, v_size_x27_529_);
lean_ctor_set(v_reuseFailAlloc_544_, 1, v_buckets_x27_531_);
v___x_543_ = v_reuseFailAlloc_544_;
goto v_reusejp_542_;
}
v_reusejp_542_:
{
return v___x_543_;
}
}
}
else
{
lean_object* v___x_545_; lean_object* v_buckets_x27_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_550_; 
lean_inc(v_bkt_526_);
v___x_545_ = lean_box(0);
v_buckets_x27_546_ = lean_array_uset(v_buckets_506_, v___x_525_, v___x_545_);
v___x_547_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_503_, v_b_504_, v_bkt_526_);
v___x_548_ = lean_array_uset(v_buckets_x27_546_, v___x_525_, v___x_547_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 1, v___x_548_);
v___x_550_ = v___x_508_;
goto v_reusejp_549_;
}
else
{
lean_object* v_reuseFailAlloc_551_; 
v_reuseFailAlloc_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_551_, 0, v_size_505_);
lean_ctor_set(v_reuseFailAlloc_551_, 1, v___x_548_);
v___x_550_ = v_reuseFailAlloc_551_;
goto v_reusejp_549_;
}
v_reusejp_549_:
{
return v___x_550_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(lean_object* v_e_553_, lean_object* v_r_554_, lean_object* v_a_555_){
_start:
{
lean_object* v_map_556_; lean_object* v_set_557_; lean_object* v___x_559_; uint8_t v_isShared_560_; uint8_t v_isSharedCheck_581_; 
v_map_556_ = lean_ctor_get(v_a_555_, 0);
v_set_557_ = lean_ctor_get(v_a_555_, 1);
v_isSharedCheck_581_ = !lean_is_exclusive(v_a_555_);
if (v_isSharedCheck_581_ == 0)
{
v___x_559_ = v_a_555_;
v_isShared_560_ = v_isSharedCheck_581_;
goto v_resetjp_558_;
}
else
{
lean_inc(v_set_557_);
lean_inc(v_map_556_);
lean_dec(v_a_555_);
v___x_559_ = lean_box(0);
v_isShared_560_ = v_isSharedCheck_581_;
goto v_resetjp_558_;
}
v_resetjp_558_:
{
lean_object* v___x_561_; uint64_t v___x_562_; size_t v___x_563_; lean_object* v___x_564_; size_t v___x_565_; size_t v___x_566_; uint8_t v___x_567_; 
v___x_561_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_562_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_r_554_);
v___x_563_ = lean_uint64_to_usize(v___x_562_);
v___x_564_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_557_, v___x_563_, v_r_554_, v___x_561_);
v___x_565_ = lean_ptr_addr(v___x_564_);
v___x_566_ = lean_ptr_addr(v___x_561_);
v___x_567_ = lean_usize_dec_eq(v___x_565_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; lean_object* v___x_570_; 
lean_dec_ref(v_r_554_);
lean_inc_ref(v___x_564_);
v___x_568_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_556_, v_e_553_, v___x_564_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 0, v___x_568_);
v___x_570_ = v___x_559_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_572_; 
v_reuseFailAlloc_572_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_572_, 0, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_572_, 1, v_set_557_);
v___x_570_ = v_reuseFailAlloc_572_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
lean_object* v___x_571_; 
v___x_571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_571_, 0, v___x_564_);
lean_ctor_set(v___x_571_, 1, v___x_570_);
return v___x_571_;
}
}
else
{
lean_object* v___x_573_; lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; lean_object* v___x_578_; 
lean_dec_ref(v___x_564_);
lean_inc_ref_n(v_r_554_, 4);
v___x_573_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_map_556_, v_e_553_, v_r_554_);
v___x_574_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v___x_573_, v_r_554_, v_r_554_);
v___x_575_ = lean_box(0);
v___x_576_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_557_, v_r_554_, v___x_575_);
if (v_isShared_560_ == 0)
{
lean_ctor_set(v___x_559_, 1, v___x_576_);
lean_ctor_set(v___x_559_, 0, v___x_574_);
v___x_578_ = v___x_559_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_574_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v___x_576_);
v___x_578_ = v_reuseFailAlloc_580_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
lean_object* v___x_579_; 
v___x_579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_579_, 0, v_r_554_);
lean_ctor_set(v___x_579_, 1, v___x_578_);
return v___x_579_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(lean_object* v_e_582_, lean_object* v_r_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v___x_586_; 
v___x_586_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_582_, v_r_583_, v_a_585_);
return v___x_586_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___boxed(lean_object* v_e_587_, lean_object* v_r_588_, lean_object* v_a_589_, lean_object* v_a_590_){
_start:
{
lean_object* v_res_591_; 
v_res_591_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save(v_e_587_, v_r_588_, v_a_589_, v_a_590_);
lean_dec_ref(v_a_589_);
return v_res_591_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(lean_object* v_00_u03b2_592_, lean_object* v_x_593_, size_t v_x_594_, lean_object* v_x_595_, lean_object* v_x_596_){
_start:
{
lean_object* v___x_597_; 
v___x_597_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_x_593_, v_x_594_, v_x_595_, v_x_596_);
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___boxed(lean_object* v_00_u03b2_598_, lean_object* v_x_599_, lean_object* v_x_600_, lean_object* v_x_601_, lean_object* v_x_602_){
_start:
{
size_t v_x_2624__boxed_603_; lean_object* v_res_604_; 
v_x_2624__boxed_603_ = lean_unbox_usize(v_x_600_);
lean_dec(v_x_600_);
v_res_604_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0(v_00_u03b2_598_, v_x_599_, v_x_2624__boxed_603_, v_x_601_, v_x_602_);
lean_dec_ref(v_x_602_);
lean_dec_ref(v_x_601_);
lean_dec_ref(v_x_599_);
return v_res_604_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1(lean_object* v_00_u03b2_605_, lean_object* v_m_606_, lean_object* v_a_607_, lean_object* v_b_608_){
_start:
{
lean_object* v___x_609_; 
v___x_609_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1___redArg(v_m_606_, v_a_607_, v_b_608_);
return v___x_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2(lean_object* v_00_u03b2_610_, lean_object* v_x_611_, lean_object* v_x_612_, lean_object* v_x_613_){
_start:
{
lean_object* v___x_614_; 
v___x_614_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_x_611_, v_x_612_, v_x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(lean_object* v_00_u03b2_615_, lean_object* v_keys_616_, lean_object* v_vals_617_, lean_object* v_heq_618_, lean_object* v_i_619_, lean_object* v_k_620_, lean_object* v_k_u2080_621_){
_start:
{
lean_object* v___x_622_; 
v___x_622_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___redArg(v_keys_616_, v_i_619_, v_k_620_, v_k_u2080_621_);
return v___x_622_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0___boxed(lean_object* v_00_u03b2_623_, lean_object* v_keys_624_, lean_object* v_vals_625_, lean_object* v_heq_626_, lean_object* v_i_627_, lean_object* v_k_628_, lean_object* v_k_u2080_629_){
_start:
{
lean_object* v_res_630_; 
v_res_630_ = l_Lean_PersistentHashMap_findKeyDAtAux___at___00Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0_spec__0(v_00_u03b2_623_, v_keys_624_, v_vals_625_, v_heq_626_, v_i_627_, v_k_628_, v_k_u2080_629_);
lean_dec_ref(v_k_u2080_629_);
lean_dec_ref(v_k_628_);
lean_dec_ref(v_vals_625_);
lean_dec_ref(v_keys_624_);
return v_res_630_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(lean_object* v_00_u03b2_631_, lean_object* v_a_632_, lean_object* v_x_633_){
_start:
{
uint8_t v___x_634_; 
v___x_634_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___redArg(v_a_632_, v_x_633_);
return v___x_634_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2___boxed(lean_object* v_00_u03b2_635_, lean_object* v_a_636_, lean_object* v_x_637_){
_start:
{
uint8_t v_res_638_; lean_object* v_r_639_; 
v_res_638_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__2(v_00_u03b2_635_, v_a_636_, v_x_637_);
lean_dec(v_x_637_);
lean_dec_ref(v_a_636_);
v_r_639_ = lean_box(v_res_638_);
return v_r_639_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3(lean_object* v_00_u03b2_640_, lean_object* v_data_641_){
_start:
{
lean_object* v___x_642_; 
v___x_642_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3___redArg(v_data_641_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4(lean_object* v_00_u03b2_643_, lean_object* v_a_644_, lean_object* v_b_645_, lean_object* v_x_646_){
_start:
{
lean_object* v___x_647_; 
v___x_647_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__4___redArg(v_a_644_, v_b_645_, v_x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(lean_object* v_00_u03b2_648_, lean_object* v_x_649_, size_t v_x_650_, size_t v_x_651_, lean_object* v_x_652_, lean_object* v_x_653_){
_start:
{
lean_object* v___x_654_; 
v___x_654_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___redArg(v_x_649_, v_x_650_, v_x_651_, v_x_652_, v_x_653_);
return v___x_654_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6___boxed(lean_object* v_00_u03b2_655_, lean_object* v_x_656_, lean_object* v_x_657_, lean_object* v_x_658_, lean_object* v_x_659_, lean_object* v_x_660_){
_start:
{
size_t v_x_2661__boxed_661_; size_t v_x_2662__boxed_662_; lean_object* v_res_663_; 
v_x_2661__boxed_661_ = lean_unbox_usize(v_x_657_);
lean_dec(v_x_657_);
v_x_2662__boxed_662_ = lean_unbox_usize(v_x_658_);
lean_dec(v_x_658_);
v_res_663_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6(v_00_u03b2_655_, v_x_656_, v_x_2661__boxed_661_, v_x_2662__boxed_662_, v_x_659_, v_x_660_);
return v_res_663_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_664_, lean_object* v_i_665_, lean_object* v_source_666_, lean_object* v_target_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4___redArg(v_i_665_, v_source_666_, v_target_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8(lean_object* v_00_u03b2_669_, lean_object* v_n_670_, lean_object* v_k_671_, lean_object* v_v_672_){
_start:
{
lean_object* v___x_673_; 
v___x_673_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8___redArg(v_n_670_, v_k_671_, v_v_672_);
return v___x_673_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(lean_object* v_00_u03b2_674_, size_t v_depth_675_, lean_object* v_keys_676_, lean_object* v_vals_677_, lean_object* v_heq_678_, lean_object* v_i_679_, lean_object* v_entries_680_){
_start:
{
lean_object* v___x_681_; 
v___x_681_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___redArg(v_depth_675_, v_keys_676_, v_vals_677_, v_i_679_, v_entries_680_);
return v___x_681_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9___boxed(lean_object* v_00_u03b2_682_, lean_object* v_depth_683_, lean_object* v_keys_684_, lean_object* v_vals_685_, lean_object* v_heq_686_, lean_object* v_i_687_, lean_object* v_entries_688_){
_start:
{
size_t v_depth_boxed_689_; lean_object* v_res_690_; 
v_depth_boxed_689_ = lean_unbox_usize(v_depth_683_);
lean_dec(v_depth_683_);
v_res_690_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__9(v_00_u03b2_682_, v_depth_boxed_689_, v_keys_684_, v_vals_685_, v_heq_686_, v_i_687_, v_entries_688_);
lean_dec_ref(v_vals_685_);
lean_dec_ref(v_keys_684_);
return v_res_690_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6(lean_object* v_00_u03b2_691_, lean_object* v_x_692_, lean_object* v_x_693_){
_start:
{
lean_object* v___x_694_; 
v___x_694_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__1_spec__3_spec__4_spec__6___redArg(v_x_692_, v_x_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10(lean_object* v_00_u03b2_695_, lean_object* v_x_696_, lean_object* v_x_697_, lean_object* v_x_698_, lean_object* v_x_699_){
_start:
{
lean_object* v___x_700_; 
v___x_700_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2_spec__6_spec__8_spec__10___redArg(v_x_696_, v_x_697_, v_x_698_, v_x_699_);
return v___x_700_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(lean_object* v_e_703_, lean_object* v_k_704_, lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
lean_object* v_map_707_; lean_object* v_set_708_; lean_object* v___f_709_; lean_object* v___f_710_; lean_object* v___x_711_; 
v_map_707_ = lean_ctor_get(v_a_706_, 0);
v_set_708_ = lean_ctor_get(v_a_706_, 1);
v___f_709_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__0));
v___f_710_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___closed__1));
lean_inc_ref(v_e_703_);
v___x_711_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v___f_709_, v___f_710_, v_map_707_, v_e_703_);
if (lean_obj_tag(v___x_711_) == 1)
{
lean_object* v_val_712_; lean_object* v___x_713_; 
lean_dec_ref(v_k_704_);
lean_dec_ref(v_e_703_);
v_val_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_val_712_);
lean_dec_ref_known(v___x_711_, 1);
v___x_713_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_713_, 0, v_val_712_);
lean_ctor_set(v___x_713_, 1, v_a_706_);
return v___x_713_;
}
else
{
lean_object* v___f_714_; lean_object* v___x_715_; uint64_t v___x_716_; size_t v___x_717_; lean_object* v___x_718_; size_t v___x_719_; size_t v___x_720_; uint8_t v___x_721_; 
lean_dec(v___x_711_);
v___f_714_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___x_715_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_716_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_703_);
v___x_717_ = lean_uint64_to_usize(v___x_716_);
lean_inc_ref(v_e_703_);
lean_inc_ref(v_set_708_);
v___x_718_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_714_, v_set_708_, v___x_717_, v_e_703_, v___x_715_);
v___x_719_ = lean_ptr_addr(v___x_718_);
v___x_720_ = lean_ptr_addr(v___x_715_);
v___x_721_ = lean_usize_dec_eq(v___x_719_, v___x_720_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_dec_ref(v_k_704_);
lean_dec_ref(v_e_703_);
v___x_722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_722_, 0, v___x_718_);
lean_ctor_set(v___x_722_, 1, v_a_706_);
return v___x_722_;
}
else
{
lean_object* v___x_723_; 
lean_dec(v___x_718_);
lean_inc_ref(v_a_705_);
v___x_723_ = lean_apply_2(v_k_704_, v_a_705_, v_a_706_);
if (lean_obj_tag(v___x_723_) == 0)
{
lean_object* v_a_724_; lean_object* v_a_725_; lean_object* v___x_726_; 
v_a_724_ = lean_ctor_get(v___x_723_, 0);
lean_inc(v_a_724_);
v_a_725_ = lean_ctor_get(v___x_723_, 1);
lean_inc(v_a_725_);
lean_dec_ref_known(v___x_723_, 2);
v___x_726_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_703_, v_a_724_, v_a_725_);
return v___x_726_;
}
else
{
lean_dec_ref(v_e_703_);
return v___x_723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit___boxed(lean_object* v_e_727_, lean_object* v_k_728_, lean_object* v_a_729_, lean_object* v_a_730_){
_start:
{
lean_object* v_res_731_; 
v_res_731_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visit(v_e_727_, v_k_728_, v_a_729_, v_a_730_);
lean_dec_ref(v_a_729_);
return v_res_731_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(lean_object* v_a_732_, lean_object* v_x_733_){
_start:
{
if (lean_obj_tag(v_x_733_) == 0)
{
lean_object* v___x_734_; 
v___x_734_ = lean_box(0);
return v___x_734_;
}
else
{
lean_object* v_key_735_; lean_object* v_value_736_; lean_object* v_tail_737_; size_t v___x_738_; size_t v___x_739_; uint8_t v___x_740_; 
v_key_735_ = lean_ctor_get(v_x_733_, 0);
v_value_736_ = lean_ctor_get(v_x_733_, 1);
v_tail_737_ = lean_ctor_get(v_x_733_, 2);
v___x_738_ = lean_ptr_addr(v_key_735_);
v___x_739_ = lean_ptr_addr(v_a_732_);
v___x_740_ = lean_usize_dec_eq(v___x_738_, v___x_739_);
if (v___x_740_ == 0)
{
v_x_733_ = v_tail_737_;
goto _start;
}
else
{
lean_object* v___x_742_; 
lean_inc(v_value_736_);
v___x_742_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_742_, 0, v_value_736_);
return v___x_742_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg___boxed(lean_object* v_a_743_, lean_object* v_x_744_){
_start:
{
lean_object* v_res_745_; 
v_res_745_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_743_, v_x_744_);
lean_dec(v_x_744_);
lean_dec_ref(v_a_743_);
return v_res_745_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(lean_object* v_m_746_, lean_object* v_a_747_){
_start:
{
lean_object* v_buckets_748_; lean_object* v___x_749_; size_t v___x_750_; size_t v___x_751_; size_t v___x_752_; uint64_t v___x_753_; uint64_t v___x_754_; uint64_t v___x_755_; uint64_t v_fold_756_; uint64_t v___x_757_; uint64_t v___x_758_; uint64_t v___x_759_; size_t v___x_760_; size_t v___x_761_; size_t v___x_762_; size_t v___x_763_; size_t v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; 
v_buckets_748_ = lean_ctor_get(v_m_746_, 1);
v___x_749_ = lean_array_get_size(v_buckets_748_);
v___x_750_ = lean_ptr_addr(v_a_747_);
v___x_751_ = ((size_t)3ULL);
v___x_752_ = lean_usize_shift_right(v___x_750_, v___x_751_);
v___x_753_ = lean_usize_to_uint64(v___x_752_);
v___x_754_ = 32ULL;
v___x_755_ = lean_uint64_shift_right(v___x_753_, v___x_754_);
v_fold_756_ = lean_uint64_xor(v___x_753_, v___x_755_);
v___x_757_ = 16ULL;
v___x_758_ = lean_uint64_shift_right(v_fold_756_, v___x_757_);
v___x_759_ = lean_uint64_xor(v_fold_756_, v___x_758_);
v___x_760_ = lean_uint64_to_usize(v___x_759_);
v___x_761_ = lean_usize_of_nat(v___x_749_);
v___x_762_ = ((size_t)1ULL);
v___x_763_ = lean_usize_sub(v___x_761_, v___x_762_);
v___x_764_ = lean_usize_land(v___x_760_, v___x_763_);
v___x_765_ = lean_array_uget_borrowed(v_buckets_748_, v___x_764_);
v___x_766_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_747_, v___x_765_);
return v___x_766_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg___boxed(lean_object* v_m_767_, lean_object* v_a_768_){
_start:
{
lean_object* v_res_769_; 
v_res_769_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_m_767_, v_a_768_);
lean_dec_ref(v_a_768_);
lean_dec_ref(v_m_767_);
return v_res_769_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_770_, lean_object* v_vals_771_, lean_object* v_i_772_, lean_object* v_k_773_){
_start:
{
lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_774_ = lean_array_get_size(v_keys_770_);
v___x_775_ = lean_nat_dec_lt(v_i_772_, v___x_774_);
if (v___x_775_ == 0)
{
lean_object* v___x_776_; 
lean_dec(v_i_772_);
v___x_776_ = lean_box(0);
return v___x_776_;
}
else
{
lean_object* v_k_x27_777_; uint8_t v___x_778_; 
v_k_x27_777_ = lean_array_fget_borrowed(v_keys_770_, v_i_772_);
v___x_778_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_k_773_, v_k_x27_777_);
if (v___x_778_ == 0)
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = lean_unsigned_to_nat(1u);
v___x_780_ = lean_nat_add(v_i_772_, v___x_779_);
lean_dec(v_i_772_);
v_i_772_ = v___x_780_;
goto _start;
}
else
{
lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; 
v___x_782_ = lean_array_fget_borrowed(v_vals_771_, v_i_772_);
lean_dec(v_i_772_);
lean_inc(v___x_782_);
lean_inc(v_k_x27_777_);
v___x_783_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_783_, 0, v_k_x27_777_);
lean_ctor_set(v___x_783_, 1, v___x_782_);
v___x_784_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_784_, 0, v___x_783_);
return v___x_784_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_785_, lean_object* v_vals_786_, lean_object* v_i_787_, lean_object* v_k_788_){
_start:
{
lean_object* v_res_789_; 
v_res_789_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_keys_785_, v_vals_786_, v_i_787_, v_k_788_);
lean_dec_ref(v_k_788_);
lean_dec_ref(v_vals_786_);
lean_dec_ref(v_keys_785_);
return v_res_789_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(lean_object* v_x_790_, size_t v_x_791_, lean_object* v_x_792_){
_start:
{
if (lean_obj_tag(v_x_790_) == 0)
{
lean_object* v_es_793_; lean_object* v___x_794_; size_t v___x_795_; size_t v___x_796_; lean_object* v_j_797_; lean_object* v___x_798_; 
v_es_793_ = lean_ctor_get(v_x_790_, 0);
v___x_794_ = lean_box(2);
v___x_795_ = ((size_t)31ULL);
v___x_796_ = lean_usize_land(v_x_791_, v___x_795_);
v_j_797_ = lean_usize_to_nat(v___x_796_);
v___x_798_ = lean_array_get_borrowed(v___x_794_, v_es_793_, v_j_797_);
lean_dec(v_j_797_);
switch(lean_obj_tag(v___x_798_))
{
case 0:
{
lean_object* v_key_799_; lean_object* v_val_800_; uint8_t v___x_801_; 
v_key_799_ = lean_ctor_get(v___x_798_, 0);
v_val_800_ = lean_ctor_get(v___x_798_, 1);
v___x_801_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaEq(v_x_792_, v_key_799_);
if (v___x_801_ == 0)
{
lean_object* v___x_802_; 
v___x_802_ = lean_box(0);
return v___x_802_;
}
else
{
lean_object* v___x_803_; lean_object* v___x_804_; 
lean_inc(v_val_800_);
lean_inc(v_key_799_);
v___x_803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_803_, 0, v_key_799_);
lean_ctor_set(v___x_803_, 1, v_val_800_);
v___x_804_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_804_, 0, v___x_803_);
return v___x_804_;
}
}
case 1:
{
lean_object* v_node_805_; size_t v___x_806_; size_t v___x_807_; 
v_node_805_ = lean_ctor_get(v___x_798_, 0);
v___x_806_ = ((size_t)5ULL);
v___x_807_ = lean_usize_shift_right(v_x_791_, v___x_806_);
v_x_790_ = v_node_805_;
v_x_791_ = v___x_807_;
goto _start;
}
default: 
{
lean_object* v___x_809_; 
v___x_809_ = lean_box(0);
return v___x_809_;
}
}
}
else
{
lean_object* v_ks_810_; lean_object* v_vs_811_; lean_object* v___x_812_; lean_object* v___x_813_; 
v_ks_810_ = lean_ctor_get(v_x_790_, 0);
v_vs_811_ = lean_ctor_get(v_x_790_, 1);
v___x_812_ = lean_unsigned_to_nat(0u);
v___x_813_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_ks_810_, v_vs_811_, v___x_812_, v_x_792_);
return v___x_813_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg___boxed(lean_object* v_x_814_, lean_object* v_x_815_, lean_object* v_x_816_){
_start:
{
size_t v_x_11523__boxed_817_; lean_object* v_res_818_; 
v_x_11523__boxed_817_ = lean_unbox_usize(v_x_815_);
lean_dec(v_x_815_);
v_res_818_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_814_, v_x_11523__boxed_817_, v_x_816_);
lean_dec_ref(v_x_816_);
lean_dec_ref(v_x_814_);
return v_res_818_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(lean_object* v_x_819_, lean_object* v_x_820_){
_start:
{
uint64_t v___x_821_; size_t v___x_822_; lean_object* v___x_823_; 
v___x_821_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_x_820_);
v___x_822_ = lean_uint64_to_usize(v___x_821_);
v___x_823_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_819_, v___x_822_, v_x_820_);
return v___x_823_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg___boxed(lean_object* v_x_824_, lean_object* v_x_825_){
_start:
{
lean_object* v_res_826_; 
v_res_826_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_x_824_, v_x_825_);
lean_dec_ref(v_x_825_);
lean_dec_ref(v_x_824_);
return v_res_826_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(lean_object* v_e_834_, lean_object* v_a_835_, lean_object* v_a_836_){
_start:
{
switch(lean_obj_tag(v_e_834_))
{
case 4:
{
lean_object* v_declName_840_; lean_object* v_map_841_; lean_object* v_set_842_; lean_object* v___x_843_; 
v_declName_840_ = lean_ctor_get(v_e_834_, 0);
v_map_841_ = lean_ctor_get(v_a_836_, 0);
v_set_842_ = lean_ctor_get(v_a_836_, 1);
v___x_843_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_set_842_, v_e_834_);
if (lean_obj_tag(v___x_843_) == 0)
{
uint8_t v___x_844_; 
lean_inc(v_declName_840_);
lean_inc_ref(v_a_835_);
v___x_844_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_a_835_, v_declName_840_);
if (v___x_844_ == 0)
{
lean_object* v___x_846_; uint8_t v_isShared_847_; uint8_t v_isSharedCheck_854_; 
lean_inc_ref(v_set_842_);
lean_inc_ref(v_map_841_);
v_isSharedCheck_854_ = !lean_is_exclusive(v_a_836_);
if (v_isSharedCheck_854_ == 0)
{
lean_object* v_unused_855_; lean_object* v_unused_856_; 
v_unused_855_ = lean_ctor_get(v_a_836_, 1);
lean_dec(v_unused_855_);
v_unused_856_ = lean_ctor_get(v_a_836_, 0);
lean_dec(v_unused_856_);
v___x_846_ = v_a_836_;
v_isShared_847_ = v_isSharedCheck_854_;
goto v_resetjp_845_;
}
else
{
lean_dec(v_a_836_);
v___x_846_ = lean_box(0);
v_isShared_847_ = v_isSharedCheck_854_;
goto v_resetjp_845_;
}
v_resetjp_845_:
{
lean_object* v___x_848_; lean_object* v___x_849_; lean_object* v___x_851_; 
v___x_848_ = lean_box(0);
lean_inc_ref(v_e_834_);
v___x_849_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_842_, v_e_834_, v___x_848_);
if (v_isShared_847_ == 0)
{
lean_ctor_set(v___x_846_, 1, v___x_849_);
v___x_851_ = v___x_846_;
goto v_reusejp_850_;
}
else
{
lean_object* v_reuseFailAlloc_853_; 
v_reuseFailAlloc_853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_853_, 0, v_map_841_);
lean_ctor_set(v_reuseFailAlloc_853_, 1, v___x_849_);
v___x_851_ = v_reuseFailAlloc_853_;
goto v_reusejp_850_;
}
v_reusejp_850_:
{
lean_object* v___x_852_; 
v___x_852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_852_, 0, v_e_834_);
lean_ctor_set(v___x_852_, 1, v___x_851_);
return v___x_852_;
}
}
}
else
{
lean_object* v___x_857_; lean_object* v___x_858_; 
lean_dec_ref_known(v_e_834_, 2);
v___x_857_ = lean_box(0);
v___x_858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_858_, 0, v___x_857_);
lean_ctor_set(v___x_858_, 1, v_a_836_);
return v___x_858_;
}
}
else
{
lean_object* v_val_859_; lean_object* v_fst_860_; lean_object* v___x_862_; uint8_t v_isShared_863_; uint8_t v_isSharedCheck_867_; 
lean_dec_ref_known(v_e_834_, 2);
v_val_859_ = lean_ctor_get(v___x_843_, 0);
lean_inc(v_val_859_);
lean_dec_ref_known(v___x_843_, 1);
v_fst_860_ = lean_ctor_get(v_val_859_, 0);
v_isSharedCheck_867_ = !lean_is_exclusive(v_val_859_);
if (v_isSharedCheck_867_ == 0)
{
lean_object* v_unused_868_; 
v_unused_868_ = lean_ctor_get(v_val_859_, 1);
lean_dec(v_unused_868_);
v___x_862_ = v_val_859_;
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
else
{
lean_inc(v_fst_860_);
lean_dec(v_val_859_);
v___x_862_ = lean_box(0);
v_isShared_863_ = v_isSharedCheck_867_;
goto v_resetjp_861_;
}
v_resetjp_861_:
{
lean_object* v___x_865_; 
if (v_isShared_863_ == 0)
{
lean_ctor_set(v___x_862_, 1, v_a_836_);
v___x_865_ = v___x_862_;
goto v_reusejp_864_;
}
else
{
lean_object* v_reuseFailAlloc_866_; 
v_reuseFailAlloc_866_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_866_, 0, v_fst_860_);
lean_ctor_set(v_reuseFailAlloc_866_, 1, v_a_836_);
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
case 5:
{
lean_object* v_fn_869_; lean_object* v_arg_870_; lean_object* v_map_871_; lean_object* v_set_872_; lean_object* v___x_873_; lean_object* v___x_874_; uint8_t v___x_875_; lean_object* v___x_876_; 
v_fn_869_ = lean_ctor_get(v_e_834_, 0);
v_arg_870_ = lean_ctor_get(v_e_834_, 1);
v_map_871_ = lean_ctor_get(v_a_836_, 0);
v_set_872_ = lean_ctor_get(v_a_836_, 1);
v___x_873_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__2));
v___x_874_ = lean_unsigned_to_nat(2u);
v___x_875_ = l_Lean_Expr_isAppOfArity(v_e_834_, v___x_873_, v___x_874_);
v___x_876_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_871_, v_e_834_);
if (lean_obj_tag(v___x_876_) == 1)
{
lean_object* v_val_877_; lean_object* v___x_878_; 
lean_dec_ref_known(v_e_834_, 2);
v_val_877_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_val_877_);
lean_dec_ref_known(v___x_876_, 1);
v___x_878_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_878_, 0, v_val_877_);
lean_ctor_set(v___x_878_, 1, v_a_836_);
return v___x_878_;
}
else
{
lean_object* v___x_879_; uint64_t v___x_880_; size_t v___x_881_; lean_object* v___x_882_; size_t v___x_883_; size_t v___x_884_; uint8_t v___x_885_; 
lean_dec(v___x_876_);
v___x_879_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_880_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_834_);
v___x_881_ = lean_uint64_to_usize(v___x_880_);
v___x_882_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_872_, v___x_881_, v_e_834_, v___x_879_);
v___x_883_ = lean_ptr_addr(v___x_882_);
v___x_884_ = lean_ptr_addr(v___x_879_);
v___x_885_ = lean_usize_dec_eq(v___x_883_, v___x_884_);
if (v___x_885_ == 0)
{
lean_object* v___x_886_; 
lean_dec_ref_known(v_e_834_, 2);
v___x_886_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_886_, 0, v___x_882_);
lean_ctor_set(v___x_886_, 1, v_a_836_);
return v___x_886_;
}
else
{
lean_dec_ref(v___x_882_);
if (v___x_875_ == 0)
{
lean_object* v___x_887_; 
lean_inc_ref(v_fn_869_);
v___x_887_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_fn_869_, v_a_835_, v_a_836_);
if (lean_obj_tag(v___x_887_) == 0)
{
lean_object* v_a_888_; lean_object* v_a_889_; lean_object* v___x_890_; 
v_a_888_ = lean_ctor_get(v___x_887_, 0);
lean_inc(v_a_888_);
v_a_889_ = lean_ctor_get(v___x_887_, 1);
lean_inc(v_a_889_);
lean_dec_ref_known(v___x_887_, 2);
lean_inc_ref(v_arg_870_);
v___x_890_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_arg_870_, v_a_835_, v_a_889_);
if (lean_obj_tag(v___x_890_) == 0)
{
lean_object* v_a_891_; lean_object* v_a_892_; size_t v___x_893_; size_t v___x_894_; uint8_t v___x_895_; 
v_a_891_ = lean_ctor_get(v___x_890_, 0);
lean_inc(v_a_891_);
v_a_892_ = lean_ctor_get(v___x_890_, 1);
lean_inc(v_a_892_);
lean_dec_ref_known(v___x_890_, 2);
v___x_893_ = lean_ptr_addr(v_fn_869_);
v___x_894_ = lean_ptr_addr(v_a_888_);
v___x_895_ = lean_usize_dec_eq(v___x_893_, v___x_894_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; lean_object* v___x_897_; 
v___x_896_ = l_Lean_Expr_app___override(v_a_888_, v_a_891_);
v___x_897_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_896_, v_a_892_);
return v___x_897_;
}
else
{
size_t v___x_898_; size_t v___x_899_; uint8_t v___x_900_; 
v___x_898_ = lean_ptr_addr(v_arg_870_);
v___x_899_ = lean_ptr_addr(v_a_891_);
v___x_900_ = lean_usize_dec_eq(v___x_898_, v___x_899_);
if (v___x_900_ == 0)
{
lean_object* v___x_901_; lean_object* v___x_902_; 
v___x_901_ = l_Lean_Expr_app___override(v_a_888_, v_a_891_);
v___x_902_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_901_, v_a_892_);
return v___x_902_;
}
else
{
lean_object* v___x_903_; 
lean_dec(v_a_891_);
lean_dec(v_a_888_);
lean_inc_ref(v_e_834_);
v___x_903_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v_e_834_, v_a_892_);
return v___x_903_;
}
}
}
else
{
lean_dec(v_a_888_);
lean_dec_ref_known(v_e_834_, 2);
return v___x_890_;
}
}
else
{
lean_dec_ref_known(v_e_834_, 2);
return v___x_887_;
}
}
else
{
lean_object* v___x_904_; 
lean_inc_ref(v_arg_870_);
v___x_904_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_arg_870_, v_a_835_, v_a_836_);
if (lean_obj_tag(v___x_904_) == 0)
{
lean_object* v_a_905_; lean_object* v_a_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; 
v_a_905_ = lean_ctor_get(v___x_904_, 0);
lean_inc(v_a_905_);
v_a_906_ = lean_ctor_get(v___x_904_, 1);
lean_inc(v_a_906_);
lean_dec_ref_known(v___x_904_, 2);
v___x_907_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__3));
v___x_908_ = lean_unsigned_to_nat(0u);
v___x_909_ = l_Lean_mkProj(v___x_907_, v___x_908_, v_a_905_);
v___x_910_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_909_, v_a_906_);
return v___x_910_;
}
else
{
lean_dec_ref_known(v_e_834_, 2);
return v___x_904_;
}
}
}
}
}
case 6:
{
lean_object* v_binderName_911_; lean_object* v_binderType_912_; lean_object* v_body_913_; uint8_t v_binderInfo_914_; lean_object* v_map_915_; lean_object* v_set_916_; lean_object* v___x_917_; 
v_binderName_911_ = lean_ctor_get(v_e_834_, 0);
v_binderType_912_ = lean_ctor_get(v_e_834_, 1);
v_body_913_ = lean_ctor_get(v_e_834_, 2);
v_binderInfo_914_ = lean_ctor_get_uint8(v_e_834_, sizeof(void*)*3 + 8);
v_map_915_ = lean_ctor_get(v_a_836_, 0);
v_set_916_ = lean_ctor_get(v_a_836_, 1);
v___x_917_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_915_, v_e_834_);
if (lean_obj_tag(v___x_917_) == 1)
{
lean_object* v_val_918_; lean_object* v___x_919_; 
lean_dec_ref_known(v_e_834_, 3);
v_val_918_ = lean_ctor_get(v___x_917_, 0);
lean_inc(v_val_918_);
lean_dec_ref_known(v___x_917_, 1);
v___x_919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_919_, 0, v_val_918_);
lean_ctor_set(v___x_919_, 1, v_a_836_);
return v___x_919_;
}
else
{
lean_object* v___x_920_; uint64_t v___x_921_; size_t v___x_922_; lean_object* v___x_923_; size_t v___x_924_; size_t v___x_925_; uint8_t v___x_926_; 
lean_dec(v___x_917_);
v___x_920_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_921_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_834_);
v___x_922_ = lean_uint64_to_usize(v___x_921_);
v___x_923_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_916_, v___x_922_, v_e_834_, v___x_920_);
v___x_924_ = lean_ptr_addr(v___x_923_);
v___x_925_ = lean_ptr_addr(v___x_920_);
v___x_926_ = lean_usize_dec_eq(v___x_924_, v___x_925_);
if (v___x_926_ == 0)
{
lean_object* v___x_927_; 
lean_dec_ref_known(v_e_834_, 3);
v___x_927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_927_, 0, v___x_923_);
lean_ctor_set(v___x_927_, 1, v_a_836_);
return v___x_927_;
}
else
{
lean_object* v___x_928_; 
lean_dec_ref(v___x_923_);
lean_inc_ref(v_binderType_912_);
v___x_928_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_912_, v_a_835_, v_a_836_);
if (lean_obj_tag(v___x_928_) == 0)
{
lean_object* v_a_929_; lean_object* v_a_930_; lean_object* v___x_931_; 
v_a_929_ = lean_ctor_get(v___x_928_, 0);
lean_inc(v_a_929_);
v_a_930_ = lean_ctor_get(v___x_928_, 1);
lean_inc(v_a_930_);
lean_dec_ref_known(v___x_928_, 2);
lean_inc_ref(v_body_913_);
v___x_931_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_913_, v_a_835_, v_a_930_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v_a_932_; lean_object* v_a_933_; size_t v___x_934_; size_t v___x_935_; uint8_t v___x_936_; 
v_a_932_ = lean_ctor_get(v___x_931_, 0);
lean_inc(v_a_932_);
v_a_933_ = lean_ctor_get(v___x_931_, 1);
lean_inc(v_a_933_);
lean_dec_ref_known(v___x_931_, 2);
v___x_934_ = lean_ptr_addr(v_binderType_912_);
v___x_935_ = lean_ptr_addr(v_a_929_);
v___x_936_ = lean_usize_dec_eq(v___x_934_, v___x_935_);
if (v___x_936_ == 0)
{
lean_object* v___x_937_; lean_object* v___x_938_; 
lean_inc(v_binderName_911_);
v___x_937_ = l_Lean_Expr_lam___override(v_binderName_911_, v_a_929_, v_a_932_, v_binderInfo_914_);
v___x_938_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_937_, v_a_933_);
return v___x_938_;
}
else
{
size_t v___x_939_; size_t v___x_940_; uint8_t v___x_941_; 
v___x_939_ = lean_ptr_addr(v_body_913_);
v___x_940_ = lean_ptr_addr(v_a_932_);
v___x_941_ = lean_usize_dec_eq(v___x_939_, v___x_940_);
if (v___x_941_ == 0)
{
lean_object* v___x_942_; lean_object* v___x_943_; 
lean_inc(v_binderName_911_);
v___x_942_ = l_Lean_Expr_lam___override(v_binderName_911_, v_a_929_, v_a_932_, v_binderInfo_914_);
v___x_943_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_942_, v_a_933_);
return v___x_943_;
}
else
{
uint8_t v___x_944_; 
v___x_944_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_914_, v_binderInfo_914_);
if (v___x_944_ == 0)
{
lean_object* v___x_945_; lean_object* v___x_946_; 
lean_inc(v_binderName_911_);
v___x_945_ = l_Lean_Expr_lam___override(v_binderName_911_, v_a_929_, v_a_932_, v_binderInfo_914_);
v___x_946_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_945_, v_a_933_);
return v___x_946_;
}
else
{
lean_object* v___x_947_; 
lean_dec(v_a_932_);
lean_dec(v_a_929_);
lean_inc_ref(v_e_834_);
v___x_947_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v_e_834_, v_a_933_);
return v___x_947_;
}
}
}
}
else
{
lean_dec(v_a_929_);
lean_dec_ref_known(v_e_834_, 3);
return v___x_931_;
}
}
else
{
lean_dec_ref_known(v_e_834_, 3);
return v___x_928_;
}
}
}
}
case 7:
{
lean_object* v_binderName_948_; lean_object* v_binderType_949_; lean_object* v_body_950_; uint8_t v_binderInfo_951_; lean_object* v_map_952_; lean_object* v_set_953_; lean_object* v___x_954_; 
v_binderName_948_ = lean_ctor_get(v_e_834_, 0);
v_binderType_949_ = lean_ctor_get(v_e_834_, 1);
v_body_950_ = lean_ctor_get(v_e_834_, 2);
v_binderInfo_951_ = lean_ctor_get_uint8(v_e_834_, sizeof(void*)*3 + 8);
v_map_952_ = lean_ctor_get(v_a_836_, 0);
v_set_953_ = lean_ctor_get(v_a_836_, 1);
v___x_954_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_952_, v_e_834_);
if (lean_obj_tag(v___x_954_) == 1)
{
lean_object* v_val_955_; lean_object* v___x_956_; 
lean_dec_ref_known(v_e_834_, 3);
v_val_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_val_955_);
lean_dec_ref_known(v___x_954_, 1);
v___x_956_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_956_, 0, v_val_955_);
lean_ctor_set(v___x_956_, 1, v_a_836_);
return v___x_956_;
}
else
{
lean_object* v___x_957_; uint64_t v___x_958_; size_t v___x_959_; lean_object* v___x_960_; size_t v___x_961_; size_t v___x_962_; uint8_t v___x_963_; 
lean_dec(v___x_954_);
v___x_957_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_958_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_834_);
v___x_959_ = lean_uint64_to_usize(v___x_958_);
v___x_960_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_953_, v___x_959_, v_e_834_, v___x_957_);
v___x_961_ = lean_ptr_addr(v___x_960_);
v___x_962_ = lean_ptr_addr(v___x_957_);
v___x_963_ = lean_usize_dec_eq(v___x_961_, v___x_962_);
if (v___x_963_ == 0)
{
lean_object* v___x_964_; 
lean_dec_ref_known(v_e_834_, 3);
v___x_964_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_964_, 0, v___x_960_);
lean_ctor_set(v___x_964_, 1, v_a_836_);
return v___x_964_;
}
else
{
lean_object* v___x_965_; 
lean_dec_ref(v___x_960_);
lean_inc_ref(v_binderType_949_);
v___x_965_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_binderType_949_, v_a_835_, v_a_836_);
if (lean_obj_tag(v___x_965_) == 0)
{
lean_object* v_a_966_; lean_object* v_a_967_; lean_object* v___x_968_; 
v_a_966_ = lean_ctor_get(v___x_965_, 0);
lean_inc(v_a_966_);
v_a_967_ = lean_ctor_get(v___x_965_, 1);
lean_inc(v_a_967_);
lean_dec_ref_known(v___x_965_, 2);
lean_inc_ref(v_body_950_);
v___x_968_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_950_, v_a_835_, v_a_967_);
if (lean_obj_tag(v___x_968_) == 0)
{
lean_object* v_a_969_; lean_object* v_a_970_; size_t v___x_971_; size_t v___x_972_; uint8_t v___x_973_; 
v_a_969_ = lean_ctor_get(v___x_968_, 0);
lean_inc(v_a_969_);
v_a_970_ = lean_ctor_get(v___x_968_, 1);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_968_, 2);
v___x_971_ = lean_ptr_addr(v_binderType_949_);
v___x_972_ = lean_ptr_addr(v_a_966_);
v___x_973_ = lean_usize_dec_eq(v___x_971_, v___x_972_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; 
lean_inc(v_binderName_948_);
v___x_974_ = l_Lean_Expr_forallE___override(v_binderName_948_, v_a_966_, v_a_969_, v_binderInfo_951_);
v___x_975_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_974_, v_a_970_);
return v___x_975_;
}
else
{
size_t v___x_976_; size_t v___x_977_; uint8_t v___x_978_; 
v___x_976_ = lean_ptr_addr(v_body_950_);
v___x_977_ = lean_ptr_addr(v_a_969_);
v___x_978_ = lean_usize_dec_eq(v___x_976_, v___x_977_);
if (v___x_978_ == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; 
lean_inc(v_binderName_948_);
v___x_979_ = l_Lean_Expr_forallE___override(v_binderName_948_, v_a_966_, v_a_969_, v_binderInfo_951_);
v___x_980_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_979_, v_a_970_);
return v___x_980_;
}
else
{
uint8_t v___x_981_; 
v___x_981_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_951_, v_binderInfo_951_);
if (v___x_981_ == 0)
{
lean_object* v___x_982_; lean_object* v___x_983_; 
lean_inc(v_binderName_948_);
v___x_982_ = l_Lean_Expr_forallE___override(v_binderName_948_, v_a_966_, v_a_969_, v_binderInfo_951_);
v___x_983_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_982_, v_a_970_);
return v___x_983_;
}
else
{
lean_object* v___x_984_; 
lean_dec(v_a_969_);
lean_dec(v_a_966_);
lean_inc_ref(v_e_834_);
v___x_984_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v_e_834_, v_a_970_);
return v___x_984_;
}
}
}
}
else
{
lean_dec(v_a_966_);
lean_dec_ref_known(v_e_834_, 3);
return v___x_968_;
}
}
else
{
lean_dec_ref_known(v_e_834_, 3);
return v___x_965_;
}
}
}
}
case 8:
{
lean_object* v_declName_985_; lean_object* v_type_986_; lean_object* v_value_987_; lean_object* v_body_988_; uint8_t v_nondep_989_; lean_object* v_map_990_; lean_object* v_set_991_; lean_object* v___x_992_; 
v_declName_985_ = lean_ctor_get(v_e_834_, 0);
v_type_986_ = lean_ctor_get(v_e_834_, 1);
v_value_987_ = lean_ctor_get(v_e_834_, 2);
v_body_988_ = lean_ctor_get(v_e_834_, 3);
v_nondep_989_ = lean_ctor_get_uint8(v_e_834_, sizeof(void*)*4 + 8);
v_map_990_ = lean_ctor_get(v_a_836_, 0);
v_set_991_ = lean_ctor_get(v_a_836_, 1);
v___x_992_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_990_, v_e_834_);
if (lean_obj_tag(v___x_992_) == 1)
{
lean_object* v_val_993_; lean_object* v___x_994_; 
lean_dec_ref_known(v_e_834_, 4);
v_val_993_ = lean_ctor_get(v___x_992_, 0);
lean_inc(v_val_993_);
lean_dec_ref_known(v___x_992_, 1);
v___x_994_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_994_, 0, v_val_993_);
lean_ctor_set(v___x_994_, 1, v_a_836_);
return v___x_994_;
}
else
{
lean_object* v___x_995_; uint64_t v___x_996_; size_t v___x_997_; lean_object* v___x_998_; size_t v___x_999_; size_t v___x_1000_; uint8_t v___x_1001_; 
lean_dec(v___x_992_);
v___x_995_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_996_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_834_);
v___x_997_ = lean_uint64_to_usize(v___x_996_);
v___x_998_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_991_, v___x_997_, v_e_834_, v___x_995_);
v___x_999_ = lean_ptr_addr(v___x_998_);
v___x_1000_ = lean_ptr_addr(v___x_995_);
v___x_1001_ = lean_usize_dec_eq(v___x_999_, v___x_1000_);
if (v___x_1001_ == 0)
{
lean_object* v___x_1002_; 
lean_dec_ref_known(v_e_834_, 4);
v___x_1002_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1002_, 0, v___x_998_);
lean_ctor_set(v___x_1002_, 1, v_a_836_);
return v___x_1002_;
}
else
{
lean_object* v___x_1003_; 
lean_dec_ref(v___x_998_);
lean_inc_ref(v_type_986_);
v___x_1003_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_type_986_, v_a_835_, v_a_836_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v_a_1004_; lean_object* v_a_1005_; lean_object* v___x_1006_; 
v_a_1004_ = lean_ctor_get(v___x_1003_, 0);
lean_inc(v_a_1004_);
v_a_1005_ = lean_ctor_get(v___x_1003_, 1);
lean_inc(v_a_1005_);
lean_dec_ref_known(v___x_1003_, 2);
lean_inc_ref(v_value_987_);
v___x_1006_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_value_987_, v_a_835_, v_a_1005_);
if (lean_obj_tag(v___x_1006_) == 0)
{
lean_object* v_a_1007_; lean_object* v_a_1008_; lean_object* v___x_1009_; 
v_a_1007_ = lean_ctor_get(v___x_1006_, 0);
lean_inc(v_a_1007_);
v_a_1008_ = lean_ctor_get(v___x_1006_, 1);
lean_inc(v_a_1008_);
lean_dec_ref_known(v___x_1006_, 2);
lean_inc_ref(v_body_988_);
v___x_1009_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_body_988_, v_a_835_, v_a_1008_);
if (lean_obj_tag(v___x_1009_) == 0)
{
lean_object* v_a_1010_; lean_object* v_a_1011_; size_t v___x_1012_; size_t v___x_1013_; uint8_t v___x_1014_; 
v_a_1010_ = lean_ctor_get(v___x_1009_, 0);
lean_inc(v_a_1010_);
v_a_1011_ = lean_ctor_get(v___x_1009_, 1);
lean_inc(v_a_1011_);
lean_dec_ref_known(v___x_1009_, 2);
v___x_1012_ = lean_ptr_addr(v_type_986_);
v___x_1013_ = lean_ptr_addr(v_a_1004_);
v___x_1014_ = lean_usize_dec_eq(v___x_1012_, v___x_1013_);
if (v___x_1014_ == 0)
{
lean_object* v___x_1015_; lean_object* v___x_1016_; 
lean_inc(v_declName_985_);
v___x_1015_ = l_Lean_Expr_letE___override(v_declName_985_, v_a_1004_, v_a_1007_, v_a_1010_, v_nondep_989_);
v___x_1016_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_1015_, v_a_1011_);
return v___x_1016_;
}
else
{
size_t v___x_1017_; size_t v___x_1018_; uint8_t v___x_1019_; 
v___x_1017_ = lean_ptr_addr(v_value_987_);
v___x_1018_ = lean_ptr_addr(v_a_1007_);
v___x_1019_ = lean_usize_dec_eq(v___x_1017_, v___x_1018_);
if (v___x_1019_ == 0)
{
lean_object* v___x_1020_; lean_object* v___x_1021_; 
lean_inc(v_declName_985_);
v___x_1020_ = l_Lean_Expr_letE___override(v_declName_985_, v_a_1004_, v_a_1007_, v_a_1010_, v_nondep_989_);
v___x_1021_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_1020_, v_a_1011_);
return v___x_1021_;
}
else
{
size_t v___x_1022_; size_t v___x_1023_; uint8_t v___x_1024_; 
v___x_1022_ = lean_ptr_addr(v_body_988_);
v___x_1023_ = lean_ptr_addr(v_a_1010_);
v___x_1024_ = lean_usize_dec_eq(v___x_1022_, v___x_1023_);
if (v___x_1024_ == 0)
{
lean_object* v___x_1025_; lean_object* v___x_1026_; 
lean_inc(v_declName_985_);
v___x_1025_ = l_Lean_Expr_letE___override(v_declName_985_, v_a_1004_, v_a_1007_, v_a_1010_, v_nondep_989_);
v___x_1026_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_1025_, v_a_1011_);
return v___x_1026_;
}
else
{
lean_object* v___x_1027_; 
lean_dec(v_a_1010_);
lean_dec(v_a_1007_);
lean_dec(v_a_1004_);
lean_inc_ref(v_e_834_);
v___x_1027_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v_e_834_, v_a_1011_);
return v___x_1027_;
}
}
}
}
else
{
lean_dec(v_a_1007_);
lean_dec(v_a_1004_);
lean_dec_ref_known(v_e_834_, 4);
return v___x_1009_;
}
}
else
{
lean_dec(v_a_1004_);
lean_dec_ref_known(v_e_834_, 4);
return v___x_1006_;
}
}
else
{
lean_dec_ref_known(v_e_834_, 4);
return v___x_1003_;
}
}
}
}
case 10:
{
lean_object* v_data_1028_; lean_object* v_expr_1029_; lean_object* v_map_1030_; lean_object* v_set_1031_; lean_object* v___x_1032_; 
v_data_1028_ = lean_ctor_get(v_e_834_, 0);
v_expr_1029_ = lean_ctor_get(v_e_834_, 1);
v_map_1030_ = lean_ctor_get(v_a_836_, 0);
v_set_1031_ = lean_ctor_get(v_a_836_, 1);
v___x_1032_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_1030_, v_e_834_);
if (lean_obj_tag(v___x_1032_) == 1)
{
lean_object* v_val_1033_; lean_object* v___x_1034_; 
lean_dec_ref_known(v_e_834_, 2);
v_val_1033_ = lean_ctor_get(v___x_1032_, 0);
lean_inc(v_val_1033_);
lean_dec_ref_known(v___x_1032_, 1);
v___x_1034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1034_, 0, v_val_1033_);
lean_ctor_set(v___x_1034_, 1, v_a_836_);
return v___x_1034_;
}
else
{
lean_object* v___x_1035_; uint64_t v___x_1036_; size_t v___x_1037_; lean_object* v___x_1038_; size_t v___x_1039_; size_t v___x_1040_; uint8_t v___x_1041_; 
lean_dec(v___x_1032_);
v___x_1035_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1036_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_834_);
v___x_1037_ = lean_uint64_to_usize(v___x_1036_);
v___x_1038_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_1031_, v___x_1037_, v_e_834_, v___x_1035_);
v___x_1039_ = lean_ptr_addr(v___x_1038_);
v___x_1040_ = lean_ptr_addr(v___x_1035_);
v___x_1041_ = lean_usize_dec_eq(v___x_1039_, v___x_1040_);
if (v___x_1041_ == 0)
{
lean_object* v___x_1042_; 
lean_dec_ref_known(v_e_834_, 2);
v___x_1042_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1038_);
lean_ctor_set(v___x_1042_, 1, v_a_836_);
return v___x_1042_;
}
else
{
lean_object* v___x_1043_; 
lean_dec_ref(v___x_1038_);
lean_inc_ref(v_expr_1029_);
v___x_1043_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_expr_1029_, v_a_835_, v_a_836_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_object* v_a_1044_; lean_object* v_a_1045_; size_t v___x_1046_; size_t v___x_1047_; uint8_t v___x_1048_; 
v_a_1044_ = lean_ctor_get(v___x_1043_, 0);
lean_inc(v_a_1044_);
v_a_1045_ = lean_ctor_get(v___x_1043_, 1);
lean_inc(v_a_1045_);
lean_dec_ref_known(v___x_1043_, 2);
v___x_1046_ = lean_ptr_addr(v_expr_1029_);
v___x_1047_ = lean_ptr_addr(v_a_1044_);
v___x_1048_ = lean_usize_dec_eq(v___x_1046_, v___x_1047_);
if (v___x_1048_ == 0)
{
lean_object* v___x_1049_; lean_object* v___x_1050_; 
lean_inc(v_data_1028_);
v___x_1049_ = l_Lean_Expr_mdata___override(v_data_1028_, v_a_1044_);
v___x_1050_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_1049_, v_a_1045_);
return v___x_1050_;
}
else
{
lean_object* v___x_1051_; 
lean_dec(v_a_1044_);
lean_inc_ref(v_e_834_);
v___x_1051_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v_e_834_, v_a_1045_);
return v___x_1051_;
}
}
else
{
lean_dec_ref_known(v_e_834_, 2);
return v___x_1043_;
}
}
}
}
case 11:
{
lean_object* v_typeName_1052_; lean_object* v_idx_1053_; lean_object* v_struct_1054_; lean_object* v_map_1065_; lean_object* v_set_1066_; lean_object* v___x_1067_; 
v_typeName_1052_ = lean_ctor_get(v_e_834_, 0);
v_idx_1053_ = lean_ctor_get(v_e_834_, 1);
v_struct_1054_ = lean_ctor_get(v_e_834_, 2);
v_map_1065_ = lean_ctor_get(v_a_836_, 0);
v_set_1066_ = lean_ctor_get(v_a_836_, 1);
v___x_1067_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_map_1065_, v_e_834_);
if (lean_obj_tag(v___x_1067_) == 1)
{
lean_object* v_val_1068_; lean_object* v___x_1069_; 
lean_dec_ref_known(v_e_834_, 3);
v_val_1068_ = lean_ctor_get(v___x_1067_, 0);
lean_inc(v_val_1068_);
lean_dec_ref_known(v___x_1067_, 1);
v___x_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1069_, 0, v_val_1068_);
lean_ctor_set(v___x_1069_, 1, v_a_836_);
return v___x_1069_;
}
else
{
lean_object* v___x_1070_; uint64_t v___x_1071_; size_t v___x_1072_; lean_object* v___x_1073_; size_t v___x_1074_; size_t v___x_1075_; uint8_t v___x_1076_; 
lean_dec(v___x_1067_);
v___x_1070_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1071_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_834_);
v___x_1072_ = lean_uint64_to_usize(v___x_1071_);
v___x_1073_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_set_1066_, v___x_1072_, v_e_834_, v___x_1070_);
v___x_1074_ = lean_ptr_addr(v___x_1073_);
v___x_1075_ = lean_ptr_addr(v___x_1070_);
v___x_1076_ = lean_usize_dec_eq(v___x_1074_, v___x_1075_);
if (v___x_1076_ == 0)
{
lean_object* v___x_1077_; 
lean_dec_ref_known(v_e_834_, 3);
v___x_1077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1077_, 0, v___x_1073_);
lean_ctor_set(v___x_1077_, 1, v_a_836_);
return v___x_1077_;
}
else
{
uint8_t v_checkProj_1078_; 
lean_dec_ref(v___x_1073_);
v_checkProj_1078_ = lean_ctor_get_uint8(v_a_835_, sizeof(void*)*1 + 1);
if (v_checkProj_1078_ == 0)
{
goto v___jp_1055_;
}
else
{
lean_object* v___x_1079_; uint8_t v___x_1080_; 
v___x_1079_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__3));
v___x_1080_ = lean_name_eq(v_typeName_1052_, v___x_1079_);
if (v___x_1080_ == 0)
{
lean_dec_ref_known(v_e_834_, 3);
goto v___jp_837_;
}
else
{
lean_object* v___x_1081_; uint8_t v___x_1082_; 
v___x_1081_ = lean_unsigned_to_nat(0u);
v___x_1082_ = lean_nat_dec_eq(v_idx_1053_, v___x_1081_);
if (v___x_1082_ == 0)
{
lean_dec_ref_known(v_e_834_, 3);
goto v___jp_837_;
}
else
{
goto v___jp_1055_;
}
}
}
}
}
v___jp_1055_:
{
lean_object* v___x_1056_; 
lean_inc_ref(v_struct_1054_);
v___x_1056_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_struct_1054_, v_a_835_, v_a_836_);
if (lean_obj_tag(v___x_1056_) == 0)
{
lean_object* v_a_1057_; lean_object* v_a_1058_; size_t v___x_1059_; size_t v___x_1060_; uint8_t v___x_1061_; 
v_a_1057_ = lean_ctor_get(v___x_1056_, 0);
lean_inc(v_a_1057_);
v_a_1058_ = lean_ctor_get(v___x_1056_, 1);
lean_inc(v_a_1058_);
lean_dec_ref_known(v___x_1056_, 2);
v___x_1059_ = lean_ptr_addr(v_struct_1054_);
v___x_1060_ = lean_ptr_addr(v_a_1057_);
v___x_1061_ = lean_usize_dec_eq(v___x_1059_, v___x_1060_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
lean_inc(v_idx_1053_);
lean_inc(v_typeName_1052_);
v___x_1062_ = l_Lean_Expr_proj___override(v_typeName_1052_, v_idx_1053_, v_a_1057_);
v___x_1063_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v___x_1062_, v_a_1058_);
return v___x_1063_;
}
else
{
lean_object* v___x_1064_; 
lean_dec(v_a_1057_);
lean_inc_ref(v_e_834_);
v___x_1064_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save___redArg(v_e_834_, v_e_834_, v_a_1058_);
return v___x_1064_;
}
}
else
{
lean_dec_ref_known(v_e_834_, 3);
return v___x_1056_;
}
}
}
default: 
{
lean_object* v_map_1083_; lean_object* v_set_1084_; lean_object* v___x_1085_; 
v_map_1083_ = lean_ctor_get(v_a_836_, 0);
v_set_1084_ = lean_ctor_get(v_a_836_, 1);
v___x_1085_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_set_1084_, v_e_834_);
if (lean_obj_tag(v___x_1085_) == 0)
{
lean_object* v___x_1087_; uint8_t v_isShared_1088_; uint8_t v_isSharedCheck_1095_; 
lean_inc_ref(v_set_1084_);
lean_inc_ref(v_map_1083_);
v_isSharedCheck_1095_ = !lean_is_exclusive(v_a_836_);
if (v_isSharedCheck_1095_ == 0)
{
lean_object* v_unused_1096_; lean_object* v_unused_1097_; 
v_unused_1096_ = lean_ctor_get(v_a_836_, 1);
lean_dec(v_unused_1096_);
v_unused_1097_ = lean_ctor_get(v_a_836_, 0);
lean_dec(v_unused_1097_);
v___x_1087_ = v_a_836_;
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
else
{
lean_dec(v_a_836_);
v___x_1087_ = lean_box(0);
v_isShared_1088_ = v_isSharedCheck_1095_;
goto v_resetjp_1086_;
}
v_resetjp_1086_:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1092_; 
v___x_1089_ = lean_box(0);
lean_inc_ref(v_e_834_);
v___x_1090_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_set_1084_, v_e_834_, v___x_1089_);
if (v_isShared_1088_ == 0)
{
lean_ctor_set(v___x_1087_, 1, v___x_1090_);
v___x_1092_ = v___x_1087_;
goto v_reusejp_1091_;
}
else
{
lean_object* v_reuseFailAlloc_1094_; 
v_reuseFailAlloc_1094_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1094_, 0, v_map_1083_);
lean_ctor_set(v_reuseFailAlloc_1094_, 1, v___x_1090_);
v___x_1092_ = v_reuseFailAlloc_1094_;
goto v_reusejp_1091_;
}
v_reusejp_1091_:
{
lean_object* v___x_1093_; 
v___x_1093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1093_, 0, v_e_834_);
lean_ctor_set(v___x_1093_, 1, v___x_1092_);
return v___x_1093_;
}
}
}
else
{
lean_object* v_val_1098_; lean_object* v_fst_1099_; lean_object* v___x_1101_; uint8_t v_isShared_1102_; uint8_t v_isSharedCheck_1106_; 
lean_dec_ref(v_e_834_);
v_val_1098_ = lean_ctor_get(v___x_1085_, 0);
lean_inc(v_val_1098_);
lean_dec_ref_known(v___x_1085_, 1);
v_fst_1099_ = lean_ctor_get(v_val_1098_, 0);
v_isSharedCheck_1106_ = !lean_is_exclusive(v_val_1098_);
if (v_isSharedCheck_1106_ == 0)
{
lean_object* v_unused_1107_; 
v_unused_1107_ = lean_ctor_get(v_val_1098_, 1);
lean_dec(v_unused_1107_);
v___x_1101_ = v_val_1098_;
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
else
{
lean_inc(v_fst_1099_);
lean_dec(v_val_1098_);
v___x_1101_ = lean_box(0);
v_isShared_1102_ = v_isSharedCheck_1106_;
goto v_resetjp_1100_;
}
v_resetjp_1100_:
{
lean_object* v___x_1104_; 
if (v_isShared_1102_ == 0)
{
lean_ctor_set(v___x_1101_, 1, v_a_836_);
v___x_1104_ = v___x_1101_;
goto v_reusejp_1103_;
}
else
{
lean_object* v_reuseFailAlloc_1105_; 
v_reuseFailAlloc_1105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1105_, 0, v_fst_1099_);
lean_ctor_set(v_reuseFailAlloc_1105_, 1, v_a_836_);
v___x_1104_ = v_reuseFailAlloc_1105_;
goto v_reusejp_1103_;
}
v_reusejp_1103_:
{
return v___x_1104_;
}
}
}
}
}
v___jp_837_:
{
lean_object* v___x_838_; lean_object* v___x_839_; 
v___x_838_ = lean_box(0);
v___x_839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_839_, 0, v___x_838_);
lean_ctor_set(v___x_839_, 1, v_a_836_);
return v___x_839_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___boxed(lean_object* v_e_1108_, lean_object* v_a_1109_, lean_object* v_a_1110_){
_start:
{
lean_object* v_res_1111_; 
v_res_1111_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_1108_, v_a_1109_, v_a_1110_);
lean_dec_ref(v_a_1109_);
return v_res_1111_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(lean_object* v_00_u03b2_1112_, lean_object* v_x_1113_, lean_object* v_x_1114_){
_start:
{
lean_object* v___x_1115_; 
v___x_1115_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___redArg(v_x_1113_, v_x_1114_);
return v___x_1115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0___boxed(lean_object* v_00_u03b2_1116_, lean_object* v_x_1117_, lean_object* v_x_1118_){
_start:
{
lean_object* v_res_1119_; 
v_res_1119_ = l_Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0(v_00_u03b2_1116_, v_x_1117_, v_x_1118_);
lean_dec_ref(v_x_1118_);
lean_dec_ref(v_x_1117_);
return v_res_1119_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(lean_object* v_00_u03b2_1120_, lean_object* v_m_1121_, lean_object* v_a_1122_){
_start:
{
lean_object* v___x_1123_; 
v___x_1123_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___redArg(v_m_1121_, v_a_1122_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1___boxed(lean_object* v_00_u03b2_1124_, lean_object* v_m_1125_, lean_object* v_a_1126_){
_start:
{
lean_object* v_res_1127_; 
v_res_1127_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1(v_00_u03b2_1124_, v_m_1125_, v_a_1126_);
lean_dec_ref(v_a_1126_);
lean_dec_ref(v_m_1125_);
return v_res_1127_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(lean_object* v_00_u03b2_1128_, lean_object* v_x_1129_, size_t v_x_1130_, lean_object* v_x_1131_){
_start:
{
lean_object* v___x_1132_; 
v___x_1132_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___redArg(v_x_1129_, v_x_1130_, v_x_1131_);
return v___x_1132_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1133_, lean_object* v_x_1134_, lean_object* v_x_1135_, lean_object* v_x_1136_){
_start:
{
size_t v_x_12155__boxed_1137_; lean_object* v_res_1138_; 
v_x_12155__boxed_1137_ = lean_unbox_usize(v_x_1135_);
lean_dec(v_x_1135_);
v_res_1138_ = l_Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0(v_00_u03b2_1133_, v_x_1134_, v_x_12155__boxed_1137_, v_x_1136_);
lean_dec_ref(v_x_1136_);
lean_dec_ref(v_x_1134_);
return v_res_1138_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(lean_object* v_00_u03b2_1139_, lean_object* v_a_1140_, lean_object* v_x_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___redArg(v_a_1140_, v_x_1141_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2___boxed(lean_object* v_00_u03b2_1143_, lean_object* v_a_1144_, lean_object* v_x_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__1_spec__2(v_00_u03b2_1143_, v_a_1144_, v_x_1145_);
lean_dec(v_x_1145_);
lean_dec_ref(v_a_1144_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1147_, lean_object* v_keys_1148_, lean_object* v_vals_1149_, lean_object* v_heq_1150_, lean_object* v_i_1151_, lean_object* v_k_1152_){
_start:
{
lean_object* v___x_1153_; 
v___x_1153_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___redArg(v_keys_1148_, v_vals_1149_, v_i_1151_, v_k_1152_);
return v___x_1153_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_1154_, lean_object* v_keys_1155_, lean_object* v_vals_1156_, lean_object* v_heq_1157_, lean_object* v_i_1158_, lean_object* v_k_1159_){
_start:
{
lean_object* v_res_1160_; 
v_res_1160_ = l_Lean_PersistentHashMap_findEntryAtAux___at___00Lean_PersistentHashMap_findEntryAux___at___00Lean_PersistentHashMap_findEntry_x3f___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go_spec__0_spec__0_spec__1(v_00_u03b2_1154_, v_keys_1155_, v_vals_1156_, v_heq_1157_, v_i_1158_, v_k_1159_);
lean_dec_ref(v_k_1159_);
lean_dec_ref(v_vals_1156_);
lean_dec_ref(v_keys_1155_);
return v_res_1160_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha(lean_object* v_e_1161_, lean_object* v_cache_1162_, lean_object* v_ctx_1163_, lean_object* v_s_1164_){
_start:
{
lean_object* v___f_1165_; lean_object* v___f_1166_; lean_object* v___x_1167_; 
v___f_1165_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___f_1166_ = ((lean_object*)(l_Lean_Meta_Sym_instHashableAlphaKey___closed__0));
lean_inc_ref(v_e_1161_);
v___x_1167_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v___f_1165_, v___f_1166_, v_s_1164_, v_e_1161_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v___x_1168_; lean_object* v___x_1169_; 
v___x_1168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1168_, 0, v_cache_1162_);
lean_ctor_set(v___x_1168_, 1, v_s_1164_);
v___x_1169_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go(v_e_1161_, v_ctx_1163_, v___x_1168_);
if (lean_obj_tag(v___x_1169_) == 0)
{
lean_object* v_a_1170_; lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1179_; 
v_a_1170_ = lean_ctor_get(v___x_1169_, 1);
v_a_1171_ = lean_ctor_get(v___x_1169_, 0);
v_isSharedCheck_1179_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1179_ == 0)
{
v___x_1173_ = v___x_1169_;
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1170_);
lean_inc(v_a_1171_);
lean_dec(v___x_1169_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1179_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v_set_1175_; lean_object* v___x_1177_; 
v_set_1175_ = lean_ctor_get(v_a_1170_, 1);
lean_inc_ref(v_set_1175_);
lean_dec(v_a_1170_);
if (v_isShared_1174_ == 0)
{
lean_ctor_set(v___x_1173_, 1, v_set_1175_);
v___x_1177_ = v___x_1173_;
goto v_reusejp_1176_;
}
else
{
lean_object* v_reuseFailAlloc_1178_; 
v_reuseFailAlloc_1178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1178_, 0, v_a_1171_);
lean_ctor_set(v_reuseFailAlloc_1178_, 1, v_set_1175_);
v___x_1177_ = v_reuseFailAlloc_1178_;
goto v_reusejp_1176_;
}
v_reusejp_1176_:
{
return v___x_1177_;
}
}
}
else
{
lean_object* v_a_1180_; lean_object* v___x_1182_; uint8_t v_isShared_1183_; uint8_t v_isSharedCheck_1189_; 
v_a_1180_ = lean_ctor_get(v___x_1169_, 1);
v_isSharedCheck_1189_ = !lean_is_exclusive(v___x_1169_);
if (v_isSharedCheck_1189_ == 0)
{
lean_object* v_unused_1190_; 
v_unused_1190_ = lean_ctor_get(v___x_1169_, 0);
lean_dec(v_unused_1190_);
v___x_1182_ = v___x_1169_;
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
else
{
lean_inc(v_a_1180_);
lean_dec(v___x_1169_);
v___x_1182_ = lean_box(0);
v_isShared_1183_ = v_isSharedCheck_1189_;
goto v_resetjp_1181_;
}
v_resetjp_1181_:
{
lean_object* v_map_1184_; lean_object* v_set_1185_; lean_object* v___x_1187_; 
v_map_1184_ = lean_ctor_get(v_a_1180_, 0);
lean_inc_ref(v_map_1184_);
v_set_1185_ = lean_ctor_get(v_a_1180_, 1);
lean_inc_ref(v_set_1185_);
lean_dec(v_a_1180_);
if (v_isShared_1183_ == 0)
{
lean_ctor_set(v___x_1182_, 1, v_set_1185_);
lean_ctor_set(v___x_1182_, 0, v_map_1184_);
v___x_1187_ = v___x_1182_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_map_1184_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v_set_1185_);
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
else
{
lean_object* v_val_1191_; lean_object* v_fst_1192_; lean_object* v___x_1194_; uint8_t v_isShared_1195_; uint8_t v_isSharedCheck_1199_; 
lean_dec_ref(v_cache_1162_);
lean_dec_ref(v_e_1161_);
v_val_1191_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_val_1191_);
lean_dec_ref_known(v___x_1167_, 1);
v_fst_1192_ = lean_ctor_get(v_val_1191_, 0);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_val_1191_);
if (v_isSharedCheck_1199_ == 0)
{
lean_object* v_unused_1200_; 
v_unused_1200_ = lean_ctor_get(v_val_1191_, 1);
lean_dec(v_unused_1200_);
v___x_1194_ = v_val_1191_;
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
else
{
lean_inc(v_fst_1192_);
lean_dec(v_val_1191_);
v___x_1194_ = lean_box(0);
v_isShared_1195_ = v_isSharedCheck_1199_;
goto v_resetjp_1193_;
}
v_resetjp_1193_:
{
lean_object* v___x_1197_; 
if (v_isShared_1195_ == 0)
{
lean_ctor_set(v___x_1194_, 1, v_s_1164_);
v___x_1197_ = v___x_1194_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_fst_1192_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_s_1164_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlpha___boxed(lean_object* v_e_1201_, lean_object* v_cache_1202_, lean_object* v_ctx_1203_, lean_object* v_s_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = l_Lean_Meta_Sym_shareCommonAlpha(v_e_1201_, v_cache_1202_, v_ctx_1203_, v_s_1204_);
lean_dec_ref(v_ctx_1203_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(lean_object* v_e_1206_, lean_object* v_a_1207_){
_start:
{
lean_object* v___x_1208_; uint64_t v___x_1209_; size_t v___x_1210_; lean_object* v___x_1211_; size_t v___x_1212_; size_t v___x_1213_; uint8_t v___x_1214_; 
v___x_1208_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1209_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1206_);
v___x_1210_ = lean_uint64_to_usize(v___x_1209_);
v___x_1211_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1207_, v___x_1210_, v_e_1206_, v___x_1208_);
v___x_1212_ = lean_ptr_addr(v___x_1211_);
v___x_1213_ = lean_ptr_addr(v___x_1208_);
v___x_1214_ = lean_usize_dec_eq(v___x_1212_, v___x_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; 
lean_dec_ref(v_e_1206_);
v___x_1215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1211_);
lean_ctor_set(v___x_1215_, 1, v_a_1207_);
return v___x_1215_;
}
else
{
lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; 
lean_dec_ref(v___x_1211_);
v___x_1216_ = lean_box(0);
lean_inc_ref(v_e_1206_);
v___x_1217_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_a_1207_, v_e_1206_, v___x_1216_);
v___x_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1218_, 0, v_e_1206_);
lean_ctor_set(v___x_1218_, 1, v___x_1217_);
return v___x_1218_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(lean_object* v_e_1219_, lean_object* v_a_1220_, lean_object* v_a_1221_){
_start:
{
lean_object* v___x_1222_; 
v___x_1222_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1219_, v_a_1221_);
return v___x_1222_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___boxed(lean_object* v_e_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_){
_start:
{
lean_object* v_res_1226_; 
v_res_1226_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc(v_e_1223_, v_a_1224_, v_a_1225_);
lean_dec_ref(v_a_1224_);
return v_res_1226_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(lean_object* v_e_1227_, lean_object* v_k_1228_, lean_object* v_a_1229_, lean_object* v_a_1230_){
_start:
{
lean_object* v___f_1231_; lean_object* v___x_1232_; uint64_t v___x_1233_; size_t v___x_1234_; lean_object* v___x_1235_; size_t v___x_1236_; size_t v___x_1237_; uint8_t v___x_1238_; 
v___f_1231_ = ((lean_object*)(l_Lean_Meta_Sym_instBEqAlphaKey___closed__0));
v___x_1232_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1233_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1227_);
v___x_1234_ = lean_uint64_to_usize(v___x_1233_);
lean_inc_ref(v_a_1230_);
v___x_1235_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v___f_1231_, v_a_1230_, v___x_1234_, v_e_1227_, v___x_1232_);
v___x_1236_ = lean_ptr_addr(v___x_1235_);
v___x_1237_ = lean_ptr_addr(v___x_1232_);
v___x_1238_ = lean_usize_dec_eq(v___x_1236_, v___x_1237_);
if (v___x_1238_ == 0)
{
lean_object* v___x_1239_; 
lean_dec_ref(v_k_1228_);
v___x_1239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1239_, 0, v___x_1235_);
lean_ctor_set(v___x_1239_, 1, v_a_1230_);
return v___x_1239_;
}
else
{
lean_object* v___x_1240_; 
lean_dec(v___x_1235_);
lean_inc_ref(v_a_1229_);
v___x_1240_ = lean_apply_2(v_k_1228_, v_a_1229_, v_a_1230_);
if (lean_obj_tag(v___x_1240_) == 0)
{
lean_object* v_a_1241_; lean_object* v_a_1242_; lean_object* v___x_1243_; 
v_a_1241_ = lean_ctor_get(v___x_1240_, 0);
lean_inc(v_a_1241_);
v_a_1242_ = lean_ctor_get(v___x_1240_, 1);
lean_inc(v_a_1242_);
lean_dec_ref_known(v___x_1240_, 2);
v___x_1243_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_a_1241_, v_a_1242_);
return v___x_1243_;
}
else
{
return v___x_1240_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc___boxed(lean_object* v_e_1244_, lean_object* v_k_1245_, lean_object* v_a_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v_res_1248_; 
v_res_1248_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_visitInc(v_e_1244_, v_k_1245_, v_a_1246_, v_a_1247_);
lean_dec_ref(v_a_1246_);
return v_res_1248_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0(void){
_start:
{
lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1249_ = lean_box(0);
v___x_1250_ = lean_unsigned_to_nat(16u);
v___x_1251_ = lean_mk_array(v___x_1250_, v___x_1249_);
return v___x_1251_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1(void){
_start:
{
lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; 
v___x_1252_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__0);
v___x_1253_ = lean_unsigned_to_nat(0u);
v___x_1254_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1254_, 0, v___x_1253_);
lean_ctor_set(v___x_1254_, 1, v___x_1252_);
return v___x_1254_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(lean_object* v_e_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_){
_start:
{
switch(lean_obj_tag(v_e_1255_))
{
case 4:
{
lean_object* v_declName_1261_; lean_object* v___x_1262_; uint64_t v___x_1263_; size_t v___x_1264_; lean_object* v___x_1265_; size_t v___x_1266_; size_t v___x_1267_; uint8_t v___x_1268_; 
v_declName_1261_ = lean_ctor_get(v_e_1255_, 0);
v___x_1262_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1263_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1255_);
v___x_1264_ = lean_uint64_to_usize(v___x_1263_);
v___x_1265_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1257_, v___x_1264_, v_e_1255_, v___x_1262_);
v___x_1266_ = lean_ptr_addr(v___x_1265_);
v___x_1267_ = lean_ptr_addr(v___x_1262_);
v___x_1268_ = lean_usize_dec_eq(v___x_1266_, v___x_1267_);
if (v___x_1268_ == 0)
{
lean_object* v___x_1269_; 
lean_dec_ref_known(v_e_1255_, 2);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v___x_1265_);
lean_ctor_set(v___x_1269_, 1, v_a_1257_);
return v___x_1269_;
}
else
{
uint8_t v___x_1270_; 
lean_dec_ref(v___x_1265_);
lean_inc(v_declName_1261_);
lean_inc_ref(v_a_1256_);
v___x_1270_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_isReducible(v_a_1256_, v_declName_1261_);
if (v___x_1270_ == 0)
{
lean_object* v___x_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v___x_1271_ = lean_box(0);
lean_inc_ref(v_e_1255_);
v___x_1272_ = l_Lean_PersistentHashMap_insert___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__2___redArg(v_a_1257_, v_e_1255_, v___x_1271_);
v___x_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1273_, 0, v_e_1255_);
lean_ctor_set(v___x_1273_, 1, v___x_1272_);
return v___x_1273_;
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1275_; 
lean_dec_ref_known(v_e_1255_, 2);
v___x_1274_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1);
v___x_1275_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1275_, 0, v___x_1274_);
lean_ctor_set(v___x_1275_, 1, v_a_1257_);
return v___x_1275_;
}
}
}
case 5:
{
lean_object* v_fn_1276_; lean_object* v_arg_1277_; lean_object* v___x_1278_; uint64_t v___x_1279_; size_t v___x_1280_; lean_object* v___x_1281_; size_t v___x_1282_; size_t v___x_1283_; uint8_t v___x_1284_; 
v_fn_1276_ = lean_ctor_get(v_e_1255_, 0);
v_arg_1277_ = lean_ctor_get(v_e_1255_, 1);
v___x_1278_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1279_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1255_);
v___x_1280_ = lean_uint64_to_usize(v___x_1279_);
v___x_1281_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1257_, v___x_1280_, v_e_1255_, v___x_1278_);
v___x_1282_ = lean_ptr_addr(v___x_1281_);
v___x_1283_ = lean_ptr_addr(v___x_1278_);
v___x_1284_ = lean_usize_dec_eq(v___x_1282_, v___x_1283_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; 
lean_dec_ref_known(v_e_1255_, 2);
v___x_1285_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1285_, 0, v___x_1281_);
lean_ctor_set(v___x_1285_, 1, v_a_1257_);
return v___x_1285_;
}
else
{
lean_object* v___x_1286_; lean_object* v___x_1287_; uint8_t v___x_1288_; 
lean_dec_ref(v___x_1281_);
v___x_1286_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__2));
v___x_1287_ = lean_unsigned_to_nat(2u);
v___x_1288_ = l_Lean_Expr_isAppOfArity(v_e_1255_, v___x_1286_, v___x_1287_);
if (v___x_1288_ == 0)
{
lean_object* v___x_1289_; 
lean_inc_ref(v_fn_1276_);
v___x_1289_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_fn_1276_, v_a_1256_, v_a_1257_);
if (lean_obj_tag(v___x_1289_) == 0)
{
lean_object* v_a_1290_; lean_object* v_a_1291_; lean_object* v___x_1292_; 
v_a_1290_ = lean_ctor_get(v___x_1289_, 0);
lean_inc(v_a_1290_);
v_a_1291_ = lean_ctor_get(v___x_1289_, 1);
lean_inc(v_a_1291_);
lean_dec_ref_known(v___x_1289_, 2);
lean_inc_ref(v_arg_1277_);
v___x_1292_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_arg_1277_, v_a_1256_, v_a_1291_);
if (lean_obj_tag(v___x_1292_) == 0)
{
lean_object* v_a_1293_; lean_object* v_a_1294_; size_t v___x_1295_; size_t v___x_1296_; uint8_t v___x_1297_; 
v_a_1293_ = lean_ctor_get(v___x_1292_, 0);
lean_inc(v_a_1293_);
v_a_1294_ = lean_ctor_get(v___x_1292_, 1);
lean_inc(v_a_1294_);
lean_dec_ref_known(v___x_1292_, 2);
v___x_1295_ = lean_ptr_addr(v_fn_1276_);
v___x_1296_ = lean_ptr_addr(v_a_1290_);
v___x_1297_ = lean_usize_dec_eq(v___x_1295_, v___x_1296_);
if (v___x_1297_ == 0)
{
lean_object* v___x_1298_; lean_object* v___x_1299_; 
lean_dec_ref_known(v_e_1255_, 2);
v___x_1298_ = l_Lean_Expr_app___override(v_a_1290_, v_a_1293_);
v___x_1299_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1298_, v_a_1294_);
return v___x_1299_;
}
else
{
size_t v___x_1300_; size_t v___x_1301_; uint8_t v___x_1302_; 
v___x_1300_ = lean_ptr_addr(v_arg_1277_);
v___x_1301_ = lean_ptr_addr(v_a_1293_);
v___x_1302_ = lean_usize_dec_eq(v___x_1300_, v___x_1301_);
if (v___x_1302_ == 0)
{
lean_object* v___x_1303_; lean_object* v___x_1304_; 
lean_dec_ref_known(v_e_1255_, 2);
v___x_1303_ = l_Lean_Expr_app___override(v_a_1290_, v_a_1293_);
v___x_1304_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1303_, v_a_1294_);
return v___x_1304_;
}
else
{
lean_object* v___x_1305_; 
lean_dec(v_a_1293_);
lean_dec(v_a_1290_);
v___x_1305_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1255_, v_a_1294_);
return v___x_1305_;
}
}
}
else
{
lean_dec(v_a_1290_);
lean_dec_ref_known(v_e_1255_, 2);
return v___x_1292_;
}
}
else
{
lean_dec_ref_known(v_e_1255_, 2);
return v___x_1289_;
}
}
else
{
lean_object* v___x_1306_; 
lean_inc_ref(v_arg_1277_);
lean_dec_ref_known(v_e_1255_, 2);
v___x_1306_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_arg_1277_, v_a_1256_, v_a_1257_);
if (lean_obj_tag(v___x_1306_) == 0)
{
lean_object* v_a_1307_; lean_object* v_a_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; 
v_a_1307_ = lean_ctor_get(v___x_1306_, 0);
lean_inc(v_a_1307_);
v_a_1308_ = lean_ctor_get(v___x_1306_, 1);
lean_inc(v_a_1308_);
lean_dec_ref_known(v___x_1306_, 2);
v___x_1309_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__3));
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = l_Lean_mkProj(v___x_1309_, v___x_1310_, v_a_1307_);
v___x_1312_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1311_, v_a_1308_);
return v___x_1312_;
}
else
{
return v___x_1306_;
}
}
}
}
case 6:
{
lean_object* v_binderName_1313_; lean_object* v_binderType_1314_; lean_object* v_body_1315_; uint8_t v_binderInfo_1316_; lean_object* v___x_1317_; uint64_t v___x_1318_; size_t v___x_1319_; lean_object* v___x_1320_; size_t v___x_1321_; size_t v___x_1322_; uint8_t v___x_1323_; 
v_binderName_1313_ = lean_ctor_get(v_e_1255_, 0);
v_binderType_1314_ = lean_ctor_get(v_e_1255_, 1);
v_body_1315_ = lean_ctor_get(v_e_1255_, 2);
v_binderInfo_1316_ = lean_ctor_get_uint8(v_e_1255_, sizeof(void*)*3 + 8);
v___x_1317_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1318_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1255_);
v___x_1319_ = lean_uint64_to_usize(v___x_1318_);
v___x_1320_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1257_, v___x_1319_, v_e_1255_, v___x_1317_);
v___x_1321_ = lean_ptr_addr(v___x_1320_);
v___x_1322_ = lean_ptr_addr(v___x_1317_);
v___x_1323_ = lean_usize_dec_eq(v___x_1321_, v___x_1322_);
if (v___x_1323_ == 0)
{
lean_object* v___x_1324_; 
lean_dec_ref_known(v_e_1255_, 3);
v___x_1324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1324_, 0, v___x_1320_);
lean_ctor_set(v___x_1324_, 1, v_a_1257_);
return v___x_1324_;
}
else
{
lean_object* v___x_1325_; 
lean_dec_ref(v___x_1320_);
lean_inc_ref(v_binderType_1314_);
v___x_1325_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1314_, v_a_1256_, v_a_1257_);
if (lean_obj_tag(v___x_1325_) == 0)
{
lean_object* v_a_1326_; lean_object* v_a_1327_; lean_object* v___x_1328_; 
v_a_1326_ = lean_ctor_get(v___x_1325_, 0);
lean_inc(v_a_1326_);
v_a_1327_ = lean_ctor_get(v___x_1325_, 1);
lean_inc(v_a_1327_);
lean_dec_ref_known(v___x_1325_, 2);
lean_inc_ref(v_body_1315_);
v___x_1328_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1315_, v_a_1256_, v_a_1327_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_object* v_a_1329_; lean_object* v_a_1330_; size_t v___x_1331_; size_t v___x_1332_; uint8_t v___x_1333_; 
v_a_1329_ = lean_ctor_get(v___x_1328_, 0);
lean_inc(v_a_1329_);
v_a_1330_ = lean_ctor_get(v___x_1328_, 1);
lean_inc(v_a_1330_);
lean_dec_ref_known(v___x_1328_, 2);
v___x_1331_ = lean_ptr_addr(v_binderType_1314_);
v___x_1332_ = lean_ptr_addr(v_a_1326_);
v___x_1333_ = lean_usize_dec_eq(v___x_1331_, v___x_1332_);
if (v___x_1333_ == 0)
{
lean_object* v___x_1334_; lean_object* v___x_1335_; 
lean_inc(v_binderName_1313_);
lean_dec_ref_known(v_e_1255_, 3);
v___x_1334_ = l_Lean_Expr_lam___override(v_binderName_1313_, v_a_1326_, v_a_1329_, v_binderInfo_1316_);
v___x_1335_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1334_, v_a_1330_);
return v___x_1335_;
}
else
{
size_t v___x_1336_; size_t v___x_1337_; uint8_t v___x_1338_; 
v___x_1336_ = lean_ptr_addr(v_body_1315_);
v___x_1337_ = lean_ptr_addr(v_a_1329_);
v___x_1338_ = lean_usize_dec_eq(v___x_1336_, v___x_1337_);
if (v___x_1338_ == 0)
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
lean_inc(v_binderName_1313_);
lean_dec_ref_known(v_e_1255_, 3);
v___x_1339_ = l_Lean_Expr_lam___override(v_binderName_1313_, v_a_1326_, v_a_1329_, v_binderInfo_1316_);
v___x_1340_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1339_, v_a_1330_);
return v___x_1340_;
}
else
{
uint8_t v___x_1341_; 
v___x_1341_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1316_, v_binderInfo_1316_);
if (v___x_1341_ == 0)
{
lean_object* v___x_1342_; lean_object* v___x_1343_; 
lean_inc(v_binderName_1313_);
lean_dec_ref_known(v_e_1255_, 3);
v___x_1342_ = l_Lean_Expr_lam___override(v_binderName_1313_, v_a_1326_, v_a_1329_, v_binderInfo_1316_);
v___x_1343_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1342_, v_a_1330_);
return v___x_1343_;
}
else
{
lean_object* v___x_1344_; 
lean_dec(v_a_1329_);
lean_dec(v_a_1326_);
v___x_1344_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1255_, v_a_1330_);
return v___x_1344_;
}
}
}
}
else
{
lean_dec(v_a_1326_);
lean_dec_ref_known(v_e_1255_, 3);
return v___x_1328_;
}
}
else
{
lean_dec_ref_known(v_e_1255_, 3);
return v___x_1325_;
}
}
}
case 7:
{
lean_object* v_binderName_1345_; lean_object* v_binderType_1346_; lean_object* v_body_1347_; uint8_t v_binderInfo_1348_; lean_object* v___x_1349_; uint64_t v___x_1350_; size_t v___x_1351_; lean_object* v___x_1352_; size_t v___x_1353_; size_t v___x_1354_; uint8_t v___x_1355_; 
v_binderName_1345_ = lean_ctor_get(v_e_1255_, 0);
v_binderType_1346_ = lean_ctor_get(v_e_1255_, 1);
v_body_1347_ = lean_ctor_get(v_e_1255_, 2);
v_binderInfo_1348_ = lean_ctor_get_uint8(v_e_1255_, sizeof(void*)*3 + 8);
v___x_1349_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1350_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1255_);
v___x_1351_ = lean_uint64_to_usize(v___x_1350_);
v___x_1352_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1257_, v___x_1351_, v_e_1255_, v___x_1349_);
v___x_1353_ = lean_ptr_addr(v___x_1352_);
v___x_1354_ = lean_ptr_addr(v___x_1349_);
v___x_1355_ = lean_usize_dec_eq(v___x_1353_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_dec_ref_known(v_e_1255_, 3);
v___x_1356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1356_, 0, v___x_1352_);
lean_ctor_set(v___x_1356_, 1, v_a_1257_);
return v___x_1356_;
}
else
{
lean_object* v___x_1357_; 
lean_dec_ref(v___x_1352_);
lean_inc_ref(v_binderType_1346_);
v___x_1357_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_binderType_1346_, v_a_1256_, v_a_1257_);
if (lean_obj_tag(v___x_1357_) == 0)
{
lean_object* v_a_1358_; lean_object* v_a_1359_; lean_object* v___x_1360_; 
v_a_1358_ = lean_ctor_get(v___x_1357_, 0);
lean_inc(v_a_1358_);
v_a_1359_ = lean_ctor_get(v___x_1357_, 1);
lean_inc(v_a_1359_);
lean_dec_ref_known(v___x_1357_, 2);
lean_inc_ref(v_body_1347_);
v___x_1360_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1347_, v_a_1256_, v_a_1359_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v_a_1361_; lean_object* v_a_1362_; size_t v___x_1363_; size_t v___x_1364_; uint8_t v___x_1365_; 
v_a_1361_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_a_1361_);
v_a_1362_ = lean_ctor_get(v___x_1360_, 1);
lean_inc(v_a_1362_);
lean_dec_ref_known(v___x_1360_, 2);
v___x_1363_ = lean_ptr_addr(v_binderType_1346_);
v___x_1364_ = lean_ptr_addr(v_a_1358_);
v___x_1365_ = lean_usize_dec_eq(v___x_1363_, v___x_1364_);
if (v___x_1365_ == 0)
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
lean_inc(v_binderName_1345_);
lean_dec_ref_known(v_e_1255_, 3);
v___x_1366_ = l_Lean_Expr_forallE___override(v_binderName_1345_, v_a_1358_, v_a_1361_, v_binderInfo_1348_);
v___x_1367_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1366_, v_a_1362_);
return v___x_1367_;
}
else
{
size_t v___x_1368_; size_t v___x_1369_; uint8_t v___x_1370_; 
v___x_1368_ = lean_ptr_addr(v_body_1347_);
v___x_1369_ = lean_ptr_addr(v_a_1361_);
v___x_1370_ = lean_usize_dec_eq(v___x_1368_, v___x_1369_);
if (v___x_1370_ == 0)
{
lean_object* v___x_1371_; lean_object* v___x_1372_; 
lean_inc(v_binderName_1345_);
lean_dec_ref_known(v_e_1255_, 3);
v___x_1371_ = l_Lean_Expr_forallE___override(v_binderName_1345_, v_a_1358_, v_a_1361_, v_binderInfo_1348_);
v___x_1372_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1371_, v_a_1362_);
return v___x_1372_;
}
else
{
uint8_t v___x_1373_; 
v___x_1373_ = l_Lean_instBEqBinderInfo_beq(v_binderInfo_1348_, v_binderInfo_1348_);
if (v___x_1373_ == 0)
{
lean_object* v___x_1374_; lean_object* v___x_1375_; 
lean_inc(v_binderName_1345_);
lean_dec_ref_known(v_e_1255_, 3);
v___x_1374_ = l_Lean_Expr_forallE___override(v_binderName_1345_, v_a_1358_, v_a_1361_, v_binderInfo_1348_);
v___x_1375_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1374_, v_a_1362_);
return v___x_1375_;
}
else
{
lean_object* v___x_1376_; 
lean_dec(v_a_1361_);
lean_dec(v_a_1358_);
v___x_1376_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1255_, v_a_1362_);
return v___x_1376_;
}
}
}
}
else
{
lean_dec(v_a_1358_);
lean_dec_ref_known(v_e_1255_, 3);
return v___x_1360_;
}
}
else
{
lean_dec_ref_known(v_e_1255_, 3);
return v___x_1357_;
}
}
}
case 8:
{
lean_object* v_declName_1377_; lean_object* v_type_1378_; lean_object* v_value_1379_; lean_object* v_body_1380_; uint8_t v_nondep_1381_; lean_object* v___x_1382_; uint64_t v___x_1383_; size_t v___x_1384_; lean_object* v___x_1385_; size_t v___x_1386_; size_t v___x_1387_; uint8_t v___x_1388_; 
v_declName_1377_ = lean_ctor_get(v_e_1255_, 0);
v_type_1378_ = lean_ctor_get(v_e_1255_, 1);
v_value_1379_ = lean_ctor_get(v_e_1255_, 2);
v_body_1380_ = lean_ctor_get(v_e_1255_, 3);
v_nondep_1381_ = lean_ctor_get_uint8(v_e_1255_, sizeof(void*)*4 + 8);
v___x_1382_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1383_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1255_);
v___x_1384_ = lean_uint64_to_usize(v___x_1383_);
v___x_1385_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1257_, v___x_1384_, v_e_1255_, v___x_1382_);
v___x_1386_ = lean_ptr_addr(v___x_1385_);
v___x_1387_ = lean_ptr_addr(v___x_1382_);
v___x_1388_ = lean_usize_dec_eq(v___x_1386_, v___x_1387_);
if (v___x_1388_ == 0)
{
lean_object* v___x_1389_; 
lean_dec_ref_known(v_e_1255_, 4);
v___x_1389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1389_, 0, v___x_1385_);
lean_ctor_set(v___x_1389_, 1, v_a_1257_);
return v___x_1389_;
}
else
{
lean_object* v___x_1390_; 
lean_dec_ref(v___x_1385_);
lean_inc_ref(v_type_1378_);
v___x_1390_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_type_1378_, v_a_1256_, v_a_1257_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_object* v_a_1391_; lean_object* v_a_1392_; lean_object* v___x_1393_; 
v_a_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_a_1391_);
v_a_1392_ = lean_ctor_get(v___x_1390_, 1);
lean_inc(v_a_1392_);
lean_dec_ref_known(v___x_1390_, 2);
lean_inc_ref(v_value_1379_);
v___x_1393_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_value_1379_, v_a_1256_, v_a_1392_);
if (lean_obj_tag(v___x_1393_) == 0)
{
lean_object* v_a_1394_; lean_object* v_a_1395_; lean_object* v___x_1396_; 
v_a_1394_ = lean_ctor_get(v___x_1393_, 0);
lean_inc(v_a_1394_);
v_a_1395_ = lean_ctor_get(v___x_1393_, 1);
lean_inc(v_a_1395_);
lean_dec_ref_known(v___x_1393_, 2);
lean_inc_ref(v_body_1380_);
v___x_1396_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_body_1380_, v_a_1256_, v_a_1395_);
if (lean_obj_tag(v___x_1396_) == 0)
{
lean_object* v_a_1397_; lean_object* v_a_1398_; size_t v___x_1399_; size_t v___x_1400_; uint8_t v___x_1401_; 
v_a_1397_ = lean_ctor_get(v___x_1396_, 0);
lean_inc(v_a_1397_);
v_a_1398_ = lean_ctor_get(v___x_1396_, 1);
lean_inc(v_a_1398_);
lean_dec_ref_known(v___x_1396_, 2);
v___x_1399_ = lean_ptr_addr(v_type_1378_);
v___x_1400_ = lean_ptr_addr(v_a_1391_);
v___x_1401_ = lean_usize_dec_eq(v___x_1399_, v___x_1400_);
if (v___x_1401_ == 0)
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
lean_inc(v_declName_1377_);
lean_dec_ref_known(v_e_1255_, 4);
v___x_1402_ = l_Lean_Expr_letE___override(v_declName_1377_, v_a_1391_, v_a_1394_, v_a_1397_, v_nondep_1381_);
v___x_1403_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1402_, v_a_1398_);
return v___x_1403_;
}
else
{
size_t v___x_1404_; size_t v___x_1405_; uint8_t v___x_1406_; 
v___x_1404_ = lean_ptr_addr(v_value_1379_);
v___x_1405_ = lean_ptr_addr(v_a_1394_);
v___x_1406_ = lean_usize_dec_eq(v___x_1404_, v___x_1405_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; lean_object* v___x_1408_; 
lean_inc(v_declName_1377_);
lean_dec_ref_known(v_e_1255_, 4);
v___x_1407_ = l_Lean_Expr_letE___override(v_declName_1377_, v_a_1391_, v_a_1394_, v_a_1397_, v_nondep_1381_);
v___x_1408_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1407_, v_a_1398_);
return v___x_1408_;
}
else
{
size_t v___x_1409_; size_t v___x_1410_; uint8_t v___x_1411_; 
v___x_1409_ = lean_ptr_addr(v_body_1380_);
v___x_1410_ = lean_ptr_addr(v_a_1397_);
v___x_1411_ = lean_usize_dec_eq(v___x_1409_, v___x_1410_);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
lean_inc(v_declName_1377_);
lean_dec_ref_known(v_e_1255_, 4);
v___x_1412_ = l_Lean_Expr_letE___override(v_declName_1377_, v_a_1391_, v_a_1394_, v_a_1397_, v_nondep_1381_);
v___x_1413_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1412_, v_a_1398_);
return v___x_1413_;
}
else
{
lean_object* v___x_1414_; 
lean_dec(v_a_1397_);
lean_dec(v_a_1394_);
lean_dec(v_a_1391_);
v___x_1414_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1255_, v_a_1398_);
return v___x_1414_;
}
}
}
}
else
{
lean_dec(v_a_1394_);
lean_dec(v_a_1391_);
lean_dec_ref_known(v_e_1255_, 4);
return v___x_1396_;
}
}
else
{
lean_dec(v_a_1391_);
lean_dec_ref_known(v_e_1255_, 4);
return v___x_1393_;
}
}
else
{
lean_dec_ref_known(v_e_1255_, 4);
return v___x_1390_;
}
}
}
case 10:
{
lean_object* v_data_1415_; lean_object* v_expr_1416_; lean_object* v___x_1417_; uint64_t v___x_1418_; size_t v___x_1419_; lean_object* v___x_1420_; size_t v___x_1421_; size_t v___x_1422_; uint8_t v___x_1423_; 
v_data_1415_ = lean_ctor_get(v_e_1255_, 0);
v_expr_1416_ = lean_ctor_get(v_e_1255_, 1);
v___x_1417_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1418_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1255_);
v___x_1419_ = lean_uint64_to_usize(v___x_1418_);
v___x_1420_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1257_, v___x_1419_, v_e_1255_, v___x_1417_);
v___x_1421_ = lean_ptr_addr(v___x_1420_);
v___x_1422_ = lean_ptr_addr(v___x_1417_);
v___x_1423_ = lean_usize_dec_eq(v___x_1421_, v___x_1422_);
if (v___x_1423_ == 0)
{
lean_object* v___x_1424_; 
lean_dec_ref_known(v_e_1255_, 2);
v___x_1424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1424_, 0, v___x_1420_);
lean_ctor_set(v___x_1424_, 1, v_a_1257_);
return v___x_1424_;
}
else
{
lean_object* v___x_1425_; 
lean_dec_ref(v___x_1420_);
lean_inc_ref(v_expr_1416_);
v___x_1425_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_expr_1416_, v_a_1256_, v_a_1257_);
if (lean_obj_tag(v___x_1425_) == 0)
{
lean_object* v_a_1426_; lean_object* v_a_1427_; size_t v___x_1428_; size_t v___x_1429_; uint8_t v___x_1430_; 
v_a_1426_ = lean_ctor_get(v___x_1425_, 0);
lean_inc(v_a_1426_);
v_a_1427_ = lean_ctor_get(v___x_1425_, 1);
lean_inc(v_a_1427_);
lean_dec_ref_known(v___x_1425_, 2);
v___x_1428_ = lean_ptr_addr(v_expr_1416_);
v___x_1429_ = lean_ptr_addr(v_a_1426_);
v___x_1430_ = lean_usize_dec_eq(v___x_1428_, v___x_1429_);
if (v___x_1430_ == 0)
{
lean_object* v___x_1431_; lean_object* v___x_1432_; 
lean_inc(v_data_1415_);
lean_dec_ref_known(v_e_1255_, 2);
v___x_1431_ = l_Lean_Expr_mdata___override(v_data_1415_, v_a_1426_);
v___x_1432_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1431_, v_a_1427_);
return v___x_1432_;
}
else
{
lean_object* v___x_1433_; 
lean_dec(v_a_1426_);
v___x_1433_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1255_, v_a_1427_);
return v___x_1433_;
}
}
else
{
lean_dec_ref_known(v_e_1255_, 2);
return v___x_1425_;
}
}
}
case 11:
{
lean_object* v_typeName_1434_; lean_object* v_idx_1435_; lean_object* v_struct_1436_; lean_object* v___x_1447_; uint64_t v___x_1448_; size_t v___x_1449_; lean_object* v___x_1450_; size_t v___x_1451_; size_t v___x_1452_; uint8_t v___x_1453_; 
v_typeName_1434_ = lean_ctor_get(v_e_1255_, 0);
v_idx_1435_ = lean_ctor_get(v_e_1255_, 1);
v_struct_1436_ = lean_ctor_get(v_e_1255_, 2);
v___x_1447_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy;
v___x_1448_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_alphaHash(v_e_1255_);
v___x_1449_ = lean_uint64_to_usize(v___x_1448_);
v___x_1450_ = l_Lean_PersistentHashMap_findKeyDAux___at___00__private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_save_spec__0___redArg(v_a_1257_, v___x_1449_, v_e_1255_, v___x_1447_);
v___x_1451_ = lean_ptr_addr(v___x_1450_);
v___x_1452_ = lean_ptr_addr(v___x_1447_);
v___x_1453_ = lean_usize_dec_eq(v___x_1451_, v___x_1452_);
if (v___x_1453_ == 0)
{
lean_object* v___x_1454_; 
lean_dec_ref_known(v_e_1255_, 3);
v___x_1454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1454_, 0, v___x_1450_);
lean_ctor_set(v___x_1454_, 1, v_a_1257_);
return v___x_1454_;
}
else
{
uint8_t v_checkProj_1455_; 
lean_dec_ref(v___x_1450_);
v_checkProj_1455_ = lean_ctor_get_uint8(v_a_1256_, sizeof(void*)*1 + 1);
if (v_checkProj_1455_ == 0)
{
goto v___jp_1437_;
}
else
{
lean_object* v___x_1456_; uint8_t v___x_1457_; 
v___x_1456_ = ((lean_object*)(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_go___closed__3));
v___x_1457_ = lean_name_eq(v_typeName_1434_, v___x_1456_);
if (v___x_1457_ == 0)
{
lean_dec_ref_known(v_e_1255_, 3);
goto v___jp_1258_;
}
else
{
lean_object* v___x_1458_; uint8_t v___x_1459_; 
v___x_1458_ = lean_unsigned_to_nat(0u);
v___x_1459_ = lean_nat_dec_eq(v_idx_1435_, v___x_1458_);
if (v___x_1459_ == 0)
{
lean_dec_ref_known(v_e_1255_, 3);
goto v___jp_1258_;
}
else
{
goto v___jp_1437_;
}
}
}
}
v___jp_1437_:
{
lean_object* v___x_1438_; 
lean_inc_ref(v_struct_1436_);
v___x_1438_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_struct_1436_, v_a_1256_, v_a_1257_);
if (lean_obj_tag(v___x_1438_) == 0)
{
lean_object* v_a_1439_; lean_object* v_a_1440_; size_t v___x_1441_; size_t v___x_1442_; uint8_t v___x_1443_; 
v_a_1439_ = lean_ctor_get(v___x_1438_, 0);
lean_inc(v_a_1439_);
v_a_1440_ = lean_ctor_get(v___x_1438_, 1);
lean_inc(v_a_1440_);
lean_dec_ref_known(v___x_1438_, 2);
v___x_1441_ = lean_ptr_addr(v_struct_1436_);
v___x_1442_ = lean_ptr_addr(v_a_1439_);
v___x_1443_ = lean_usize_dec_eq(v___x_1441_, v___x_1442_);
if (v___x_1443_ == 0)
{
lean_object* v___x_1444_; lean_object* v___x_1445_; 
lean_inc(v_idx_1435_);
lean_inc(v_typeName_1434_);
lean_dec_ref_known(v_e_1255_, 3);
v___x_1444_ = l_Lean_Expr_proj___override(v_typeName_1434_, v_idx_1435_, v_a_1439_);
v___x_1445_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v___x_1444_, v_a_1440_);
return v___x_1445_;
}
else
{
lean_object* v___x_1446_; 
lean_dec(v_a_1439_);
v___x_1446_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1255_, v_a_1440_);
return v___x_1446_;
}
}
else
{
lean_dec_ref_known(v_e_1255_, 3);
return v___x_1438_;
}
}
}
default: 
{
lean_object* v___x_1460_; 
v___x_1460_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_saveInc___redArg(v_e_1255_, v_a_1257_);
return v___x_1460_;
}
}
v___jp_1258_:
{
lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1259_ = lean_obj_once(&l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1, &l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1_once, _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___closed__1);
v___x_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
lean_ctor_set(v___x_1260_, 1, v_a_1257_);
return v___x_1260_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go___boxed(lean_object* v_e_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_1461_, v_a_1462_, v_a_1463_);
lean_dec_ref(v_a_1462_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc(lean_object* v_e_1465_, lean_object* v_a_1466_, lean_object* v_a_1467_){
_start:
{
lean_object* v___x_1468_; 
v___x_1468_ = l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_shareCommonAlphaInc_go(v_e_1465_, v_a_1466_, v_a_1467_);
return v___x_1468_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_shareCommonAlphaInc___boxed(lean_object* v_e_1469_, lean_object* v_a_1470_, lean_object* v_a_1471_){
_start:
{
lean_object* v_res_1472_; 
v_res_1472_ = l_Lean_Meta_Sym_shareCommonAlphaInc(v_e_1469_, v_a_1470_, v_a_1471_);
lean_dec_ref(v_a_1470_);
return v_res_1472_;
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* runtime_initialize_Lean_Environment(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* runtime_initialize_Lean_ProjFns(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy = _init_l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy();
lean_mark_persistent(l___private_Lean_Meta_Sym_AlphaShareCommon_0__Lean_Meta_Sym_dummy);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_ExprPtr(uint8_t builtin);
lean_object* initialize_Lean_Environment(uint8_t builtin);
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_ReducibilityAttrs(uint8_t builtin);
lean_object* initialize_Lean_ProjFns(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_AlphaShareCommon(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_ExprPtr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Environment(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ReducibilityAttrs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_ProjFns(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_AlphaShareCommon(builtin);
}
#ifdef __cplusplus
}
#endif
