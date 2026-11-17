// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.LawfulEqCmp
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Util import Lean.Meta.Tactic.Grind.SynthInstance
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
size_t lean_ptr_addr(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_whnf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasLooseBVars(lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_isExprDefEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getLevel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_decLevel_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkConst(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Sym_synthInstanceMeta_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
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
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getBinOp(lean_object*);
lean_object* l_Lean_Meta_Sym_getOrderingEqExpr___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_isEqv___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
lean_object* l_Lean_Expr_appArg_x21(lean_object*);
lean_object* lean_grind_mk_eq_proof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_pushEqCore___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Std"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__0_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "LawfulEqCmp"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__1_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__2_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 91, 188, 155, 197, 176, 186, 149)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__2_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Ordering"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__3_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__3_value),LEAN_SCALAR_PTR_LITERAL(226, 44, 125, 228, 251, 150, 72, 72)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__4_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "eq_of_compare"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__5_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(48, 144, 193, 124, 159, 137, 91, 218)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6_value_aux_0),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__1_value),LEAN_SCALAR_PTR_LITERAL(48, 91, 188, 155, 197, 176, 186, 149)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6_value_aux_1),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__5_value),LEAN_SCALAR_PTR_LITERAL(195, 195, 43, 68, 20, 25, 179, 199)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateLawfulEqCmp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateLawfulEqCmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f(lean_object* v_op_14_, lean_object* v_a_15_, lean_object* v_a_16_, lean_object* v_a_17_, lean_object* v_a_18_){
_start:
{
lean_object* v___x_23_; lean_object* v_env_24_; lean_object* v___x_25_; uint8_t v___x_26_; uint8_t v___x_27_; 
v___x_23_ = lean_st_ref_get(v_a_18_);
v_env_24_ = lean_ctor_get(v___x_23_, 0);
lean_inc_ref(v_env_24_);
lean_dec(v___x_23_);
v___x_25_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__2));
v___x_26_ = 1;
v___x_27_ = l_Lean_Environment_contains(v_env_24_, v___x_25_, v___x_26_);
if (v___x_27_ == 0)
{
lean_object* v___x_28_; lean_object* v___x_29_; 
lean_dec_ref(v_op_14_);
v___x_28_ = lean_box(0);
v___x_29_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_29_, 0, v___x_28_);
return v___x_29_;
}
else
{
lean_object* v___x_30_; 
lean_inc(v_a_18_);
lean_inc_ref(v_a_17_);
lean_inc(v_a_16_);
lean_inc_ref(v_a_15_);
lean_inc_ref(v_op_14_);
v___x_30_ = lean_infer_type(v_op_14_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_30_) == 0)
{
lean_object* v_a_31_; lean_object* v___x_32_; 
v_a_31_ = lean_ctor_get(v___x_30_, 0);
lean_inc(v_a_31_);
lean_dec_ref_known(v___x_30_, 1);
lean_inc(v_a_18_);
lean_inc_ref(v_a_17_);
lean_inc(v_a_16_);
lean_inc_ref(v_a_15_);
v___x_32_ = lean_whnf(v_a_31_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_32_) == 0)
{
lean_object* v_a_33_; lean_object* v___x_35_; uint8_t v_isShared_36_; uint8_t v_isSharedCheck_134_; 
v_a_33_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_134_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_134_ == 0)
{
v___x_35_ = v___x_32_;
v_isShared_36_ = v_isSharedCheck_134_;
goto v_resetjp_34_;
}
else
{
lean_inc(v_a_33_);
lean_dec(v___x_32_);
v___x_35_ = lean_box(0);
v_isShared_36_ = v_isSharedCheck_134_;
goto v_resetjp_34_;
}
v_resetjp_34_:
{
if (lean_obj_tag(v_a_33_) == 7)
{
lean_object* v_binderType_37_; lean_object* v_body_38_; uint8_t v___x_39_; 
lean_del_object(v___x_35_);
v_binderType_37_ = lean_ctor_get(v_a_33_, 1);
lean_inc_ref(v_binderType_37_);
v_body_38_ = lean_ctor_get(v_a_33_, 2);
lean_inc_ref(v_body_38_);
lean_dec_ref_known(v_a_33_, 3);
v___x_39_ = l_Lean_Expr_hasLooseBVars(v_body_38_);
if (v___x_39_ == 0)
{
lean_object* v___x_40_; 
lean_inc(v_a_18_);
lean_inc_ref(v_a_17_);
lean_inc(v_a_16_);
lean_inc_ref(v_a_15_);
v___x_40_ = lean_whnf(v_body_38_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_40_) == 0)
{
lean_object* v_a_41_; lean_object* v___x_43_; uint8_t v_isShared_44_; uint8_t v_isSharedCheck_121_; 
v_a_41_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_121_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_121_ == 0)
{
v___x_43_ = v___x_40_;
v_isShared_44_ = v_isSharedCheck_121_;
goto v_resetjp_42_;
}
else
{
lean_inc(v_a_41_);
lean_dec(v___x_40_);
v___x_43_ = lean_box(0);
v_isShared_44_ = v_isSharedCheck_121_;
goto v_resetjp_42_;
}
v_resetjp_42_:
{
if (lean_obj_tag(v_a_41_) == 7)
{
lean_object* v_binderType_45_; lean_object* v_body_46_; lean_object* v___x_47_; uint8_t v___x_48_; 
lean_del_object(v___x_43_);
v_binderType_45_ = lean_ctor_get(v_a_41_, 1);
lean_inc_ref(v_binderType_45_);
v_body_46_ = lean_ctor_get(v_a_41_, 2);
lean_inc_ref(v_body_46_);
lean_dec_ref_known(v_a_41_, 3);
v___x_47_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__4));
v___x_48_ = l_Lean_Expr_isConstOf(v_body_46_, v___x_47_);
lean_dec_ref(v_body_46_);
if (v___x_48_ == 0)
{
lean_dec_ref(v_binderType_45_);
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
goto v___jp_20_;
}
else
{
lean_object* v___x_49_; 
lean_inc_ref(v_binderType_37_);
v___x_49_ = l_Lean_Meta_isExprDefEq(v_binderType_37_, v_binderType_45_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_49_) == 0)
{
lean_object* v_a_50_; uint8_t v___x_51_; 
v_a_50_ = lean_ctor_get(v___x_49_, 0);
lean_inc(v_a_50_);
lean_dec_ref_known(v___x_49_, 1);
v___x_51_ = lean_unbox(v_a_50_);
lean_dec(v_a_50_);
if (v___x_51_ == 0)
{
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
goto v___jp_20_;
}
else
{
lean_object* v___x_52_; 
lean_inc_ref(v_binderType_37_);
v___x_52_ = l_Lean_Meta_getLevel(v_binderType_37_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_52_) == 0)
{
lean_object* v_a_53_; lean_object* v___x_54_; 
v_a_53_ = lean_ctor_get(v___x_52_, 0);
lean_inc(v_a_53_);
lean_dec_ref_known(v___x_52_, 1);
v___x_54_ = l_Lean_Meta_decLevel_x3f(v_a_53_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_54_) == 0)
{
lean_object* v_a_55_; lean_object* v___x_57_; uint8_t v_isShared_58_; uint8_t v_isSharedCheck_92_; 
v_a_55_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_92_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_92_ == 0)
{
v___x_57_ = v___x_54_;
v_isShared_58_ = v_isSharedCheck_92_;
goto v_resetjp_56_;
}
else
{
lean_inc(v_a_55_);
lean_dec(v___x_54_);
v___x_57_ = lean_box(0);
v_isShared_58_ = v_isSharedCheck_92_;
goto v_resetjp_56_;
}
v_resetjp_56_:
{
if (lean_obj_tag(v_a_55_) == 1)
{
lean_object* v_val_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; 
lean_del_object(v___x_57_);
v_val_59_ = lean_ctor_get(v_a_55_, 0);
lean_inc(v_val_59_);
lean_dec_ref_known(v_a_55_, 1);
v___x_60_ = lean_box(0);
v___x_61_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_61_, 0, v_val_59_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
lean_inc_ref(v___x_61_);
v___x_62_ = l_Lean_mkConst(v___x_25_, v___x_61_);
lean_inc_ref(v_op_14_);
lean_inc_ref(v_binderType_37_);
v___x_63_ = l_Lean_mkAppB(v___x_62_, v_binderType_37_, v_op_14_);
v___x_64_ = l_Lean_Meta_Sym_synthInstanceMeta_x3f(v___x_63_, v_a_15_, v_a_16_, v_a_17_, v_a_18_);
if (lean_obj_tag(v___x_64_) == 0)
{
lean_object* v_a_65_; lean_object* v___x_67_; uint8_t v_isShared_68_; uint8_t v_isSharedCheck_87_; 
v_a_65_ = lean_ctor_get(v___x_64_, 0);
v_isSharedCheck_87_ = !lean_is_exclusive(v___x_64_);
if (v_isSharedCheck_87_ == 0)
{
v___x_67_ = v___x_64_;
v_isShared_68_ = v_isSharedCheck_87_;
goto v_resetjp_66_;
}
else
{
lean_inc(v_a_65_);
lean_dec(v___x_64_);
v___x_67_ = lean_box(0);
v_isShared_68_ = v_isSharedCheck_87_;
goto v_resetjp_66_;
}
v_resetjp_66_:
{
if (lean_obj_tag(v_a_65_) == 1)
{
lean_object* v_val_69_; lean_object* v___x_71_; uint8_t v_isShared_72_; uint8_t v_isSharedCheck_82_; 
v_val_69_ = lean_ctor_get(v_a_65_, 0);
v_isSharedCheck_82_ = !lean_is_exclusive(v_a_65_);
if (v_isSharedCheck_82_ == 0)
{
v___x_71_ = v_a_65_;
v_isShared_72_ = v_isSharedCheck_82_;
goto v_resetjp_70_;
}
else
{
lean_inc(v_val_69_);
lean_dec(v_a_65_);
v___x_71_ = lean_box(0);
v_isShared_72_ = v_isSharedCheck_82_;
goto v_resetjp_70_;
}
v_resetjp_70_:
{
lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_77_; 
v___x_73_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___closed__6));
v___x_74_ = l_Lean_mkConst(v___x_73_, v___x_61_);
v___x_75_ = l_Lean_mkApp3(v___x_74_, v_binderType_37_, v_op_14_, v_val_69_);
if (v_isShared_72_ == 0)
{
lean_ctor_set(v___x_71_, 0, v___x_75_);
v___x_77_ = v___x_71_;
goto v_reusejp_76_;
}
else
{
lean_object* v_reuseFailAlloc_81_; 
v_reuseFailAlloc_81_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_81_, 0, v___x_75_);
v___x_77_ = v_reuseFailAlloc_81_;
goto v_reusejp_76_;
}
v_reusejp_76_:
{
lean_object* v___x_79_; 
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_77_);
v___x_79_ = v___x_67_;
goto v_reusejp_78_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_77_);
v___x_79_ = v_reuseFailAlloc_80_;
goto v_reusejp_78_;
}
v_reusejp_78_:
{
return v___x_79_;
}
}
}
}
else
{
lean_object* v___x_83_; lean_object* v___x_85_; 
lean_dec(v_a_65_);
lean_dec_ref_known(v___x_61_, 2);
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
v___x_83_ = lean_box(0);
if (v_isShared_68_ == 0)
{
lean_ctor_set(v___x_67_, 0, v___x_83_);
v___x_85_ = v___x_67_;
goto v_reusejp_84_;
}
else
{
lean_object* v_reuseFailAlloc_86_; 
v_reuseFailAlloc_86_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_86_, 0, v___x_83_);
v___x_85_ = v_reuseFailAlloc_86_;
goto v_reusejp_84_;
}
v_reusejp_84_:
{
return v___x_85_;
}
}
}
}
else
{
lean_dec_ref_known(v___x_61_, 2);
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
return v___x_64_;
}
}
else
{
lean_object* v___x_88_; lean_object* v___x_90_; 
lean_dec(v_a_55_);
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
v___x_88_ = lean_box(0);
if (v_isShared_58_ == 0)
{
lean_ctor_set(v___x_57_, 0, v___x_88_);
v___x_90_ = v___x_57_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_91_; 
v_reuseFailAlloc_91_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_91_, 0, v___x_88_);
v___x_90_ = v_reuseFailAlloc_91_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
return v___x_90_;
}
}
}
}
else
{
lean_object* v_a_93_; lean_object* v___x_95_; uint8_t v_isShared_96_; uint8_t v_isSharedCheck_100_; 
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
v_a_93_ = lean_ctor_get(v___x_54_, 0);
v_isSharedCheck_100_ = !lean_is_exclusive(v___x_54_);
if (v_isSharedCheck_100_ == 0)
{
v___x_95_ = v___x_54_;
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
else
{
lean_inc(v_a_93_);
lean_dec(v___x_54_);
v___x_95_ = lean_box(0);
v_isShared_96_ = v_isSharedCheck_100_;
goto v_resetjp_94_;
}
v_resetjp_94_:
{
lean_object* v___x_98_; 
if (v_isShared_96_ == 0)
{
v___x_98_ = v___x_95_;
goto v_reusejp_97_;
}
else
{
lean_object* v_reuseFailAlloc_99_; 
v_reuseFailAlloc_99_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_99_, 0, v_a_93_);
v___x_98_ = v_reuseFailAlloc_99_;
goto v_reusejp_97_;
}
v_reusejp_97_:
{
return v___x_98_;
}
}
}
}
else
{
lean_object* v_a_101_; lean_object* v___x_103_; uint8_t v_isShared_104_; uint8_t v_isSharedCheck_108_; 
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
v_a_101_ = lean_ctor_get(v___x_52_, 0);
v_isSharedCheck_108_ = !lean_is_exclusive(v___x_52_);
if (v_isSharedCheck_108_ == 0)
{
v___x_103_ = v___x_52_;
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
else
{
lean_inc(v_a_101_);
lean_dec(v___x_52_);
v___x_103_ = lean_box(0);
v_isShared_104_ = v_isSharedCheck_108_;
goto v_resetjp_102_;
}
v_resetjp_102_:
{
lean_object* v___x_106_; 
if (v_isShared_104_ == 0)
{
v___x_106_ = v___x_103_;
goto v_reusejp_105_;
}
else
{
lean_object* v_reuseFailAlloc_107_; 
v_reuseFailAlloc_107_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_107_, 0, v_a_101_);
v___x_106_ = v_reuseFailAlloc_107_;
goto v_reusejp_105_;
}
v_reusejp_105_:
{
return v___x_106_;
}
}
}
}
}
else
{
lean_object* v_a_109_; lean_object* v___x_111_; uint8_t v_isShared_112_; uint8_t v_isSharedCheck_116_; 
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
v_a_109_ = lean_ctor_get(v___x_49_, 0);
v_isSharedCheck_116_ = !lean_is_exclusive(v___x_49_);
if (v_isSharedCheck_116_ == 0)
{
v___x_111_ = v___x_49_;
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
else
{
lean_inc(v_a_109_);
lean_dec(v___x_49_);
v___x_111_ = lean_box(0);
v_isShared_112_ = v_isSharedCheck_116_;
goto v_resetjp_110_;
}
v_resetjp_110_:
{
lean_object* v___x_114_; 
if (v_isShared_112_ == 0)
{
v___x_114_ = v___x_111_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v_a_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
return v___x_114_;
}
}
}
}
}
else
{
lean_object* v___x_117_; lean_object* v___x_119_; 
lean_dec(v_a_41_);
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
v___x_117_ = lean_box(0);
if (v_isShared_44_ == 0)
{
lean_ctor_set(v___x_43_, 0, v___x_117_);
v___x_119_ = v___x_43_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v___x_117_);
v___x_119_ = v_reuseFailAlloc_120_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
return v___x_119_;
}
}
}
}
else
{
lean_object* v_a_122_; lean_object* v___x_124_; uint8_t v_isShared_125_; uint8_t v_isSharedCheck_129_; 
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
v_a_122_ = lean_ctor_get(v___x_40_, 0);
v_isSharedCheck_129_ = !lean_is_exclusive(v___x_40_);
if (v_isSharedCheck_129_ == 0)
{
v___x_124_ = v___x_40_;
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
else
{
lean_inc(v_a_122_);
lean_dec(v___x_40_);
v___x_124_ = lean_box(0);
v_isShared_125_ = v_isSharedCheck_129_;
goto v_resetjp_123_;
}
v_resetjp_123_:
{
lean_object* v___x_127_; 
if (v_isShared_125_ == 0)
{
v___x_127_ = v___x_124_;
goto v_reusejp_126_;
}
else
{
lean_object* v_reuseFailAlloc_128_; 
v_reuseFailAlloc_128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_128_, 0, v_a_122_);
v___x_127_ = v_reuseFailAlloc_128_;
goto v_reusejp_126_;
}
v_reusejp_126_:
{
return v___x_127_;
}
}
}
}
else
{
lean_dec_ref(v_body_38_);
lean_dec_ref(v_binderType_37_);
lean_dec_ref(v_op_14_);
goto v___jp_20_;
}
}
else
{
lean_object* v___x_130_; lean_object* v___x_132_; 
lean_dec(v_a_33_);
lean_dec_ref(v_op_14_);
v___x_130_ = lean_box(0);
if (v_isShared_36_ == 0)
{
lean_ctor_set(v___x_35_, 0, v___x_130_);
v___x_132_ = v___x_35_;
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
}
}
else
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_142_; 
lean_dec_ref(v_op_14_);
v_a_135_ = lean_ctor_get(v___x_32_, 0);
v_isSharedCheck_142_ = !lean_is_exclusive(v___x_32_);
if (v_isSharedCheck_142_ == 0)
{
v___x_137_ = v___x_32_;
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_32_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_142_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_140_; 
if (v_isShared_138_ == 0)
{
v___x_140_ = v___x_137_;
goto v_reusejp_139_;
}
else
{
lean_object* v_reuseFailAlloc_141_; 
v_reuseFailAlloc_141_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_141_, 0, v_a_135_);
v___x_140_ = v_reuseFailAlloc_141_;
goto v_reusejp_139_;
}
v_reusejp_139_:
{
return v___x_140_;
}
}
}
}
else
{
lean_object* v_a_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_150_; 
lean_dec_ref(v_op_14_);
v_a_143_ = lean_ctor_get(v___x_30_, 0);
v_isSharedCheck_150_ = !lean_is_exclusive(v___x_30_);
if (v_isSharedCheck_150_ == 0)
{
v___x_145_ = v___x_30_;
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_a_143_);
lean_dec(v___x_30_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_150_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_148_; 
if (v_isShared_146_ == 0)
{
v___x_148_ = v___x_145_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_149_; 
v_reuseFailAlloc_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_149_, 0, v_a_143_);
v___x_148_ = v_reuseFailAlloc_149_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
return v___x_148_;
}
}
}
}
v___jp_20_:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
v___x_21_ = lean_box(0);
v___x_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_22_, 0, v___x_21_);
return v___x_22_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f___boxed(lean_object* v_op_151_, lean_object* v_a_152_, lean_object* v_a_153_, lean_object* v_a_154_, lean_object* v_a_155_, lean_object* v_a_156_){
_start:
{
lean_object* v_res_157_; 
v_res_157_ = l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f(v_op_151_, v_a_152_, v_a_153_, v_a_154_, v_a_155_);
lean_dec(v_a_155_);
lean_dec_ref(v_a_154_);
lean_dec(v_a_153_);
lean_dec_ref(v_a_152_);
return v_res_157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_158_, lean_object* v_vals_159_, lean_object* v_i_160_, lean_object* v_k_161_){
_start:
{
lean_object* v___x_162_; uint8_t v___x_163_; 
v___x_162_ = lean_array_get_size(v_keys_158_);
v___x_163_ = lean_nat_dec_lt(v_i_160_, v___x_162_);
if (v___x_163_ == 0)
{
lean_object* v___x_164_; 
lean_dec(v_i_160_);
v___x_164_ = lean_box(0);
return v___x_164_;
}
else
{
lean_object* v_k_x27_165_; size_t v___x_166_; size_t v___x_167_; uint8_t v___x_168_; 
v_k_x27_165_ = lean_array_fget_borrowed(v_keys_158_, v_i_160_);
v___x_166_ = lean_ptr_addr(v_k_161_);
v___x_167_ = lean_ptr_addr(v_k_x27_165_);
v___x_168_ = lean_usize_dec_eq(v___x_166_, v___x_167_);
if (v___x_168_ == 0)
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_unsigned_to_nat(1u);
v___x_170_ = lean_nat_add(v_i_160_, v___x_169_);
lean_dec(v_i_160_);
v_i_160_ = v___x_170_;
goto _start;
}
else
{
lean_object* v___x_172_; lean_object* v___x_173_; 
v___x_172_ = lean_array_fget_borrowed(v_vals_159_, v_i_160_);
lean_dec(v_i_160_);
lean_inc(v___x_172_);
v___x_173_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_173_, 0, v___x_172_);
return v___x_173_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_174_, lean_object* v_vals_175_, lean_object* v_i_176_, lean_object* v_k_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_174_, v_vals_175_, v_i_176_, v_k_177_);
lean_dec_ref(v_k_177_);
lean_dec_ref(v_vals_175_);
lean_dec_ref(v_keys_174_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___redArg(lean_object* v_x_179_, size_t v_x_180_, lean_object* v_x_181_){
_start:
{
if (lean_obj_tag(v_x_179_) == 0)
{
lean_object* v_es_182_; lean_object* v___x_183_; size_t v___x_184_; size_t v___x_185_; lean_object* v_j_186_; lean_object* v___x_187_; 
v_es_182_ = lean_ctor_get(v_x_179_, 0);
v___x_183_ = lean_box(2);
v___x_184_ = ((size_t)31ULL);
v___x_185_ = lean_usize_land(v_x_180_, v___x_184_);
v_j_186_ = lean_usize_to_nat(v___x_185_);
v___x_187_ = lean_array_get_borrowed(v___x_183_, v_es_182_, v_j_186_);
lean_dec(v_j_186_);
switch(lean_obj_tag(v___x_187_))
{
case 0:
{
lean_object* v_key_188_; lean_object* v_val_189_; size_t v___x_190_; size_t v___x_191_; uint8_t v___x_192_; 
v_key_188_ = lean_ctor_get(v___x_187_, 0);
v_val_189_ = lean_ctor_get(v___x_187_, 1);
v___x_190_ = lean_ptr_addr(v_x_181_);
v___x_191_ = lean_ptr_addr(v_key_188_);
v___x_192_ = lean_usize_dec_eq(v___x_190_, v___x_191_);
if (v___x_192_ == 0)
{
lean_object* v___x_193_; 
v___x_193_ = lean_box(0);
return v___x_193_;
}
else
{
lean_object* v___x_194_; 
lean_inc(v_val_189_);
v___x_194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_194_, 0, v_val_189_);
return v___x_194_;
}
}
case 1:
{
lean_object* v_node_195_; size_t v___x_196_; size_t v___x_197_; 
v_node_195_ = lean_ctor_get(v___x_187_, 0);
v___x_196_ = ((size_t)5ULL);
v___x_197_ = lean_usize_shift_right(v_x_180_, v___x_196_);
v_x_179_ = v_node_195_;
v_x_180_ = v___x_197_;
goto _start;
}
default: 
{
lean_object* v___x_199_; 
v___x_199_ = lean_box(0);
return v___x_199_;
}
}
}
else
{
lean_object* v_ks_200_; lean_object* v_vs_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_ks_200_ = lean_ctor_get(v_x_179_, 0);
v_vs_201_ = lean_ctor_get(v_x_179_, 1);
v___x_202_ = lean_unsigned_to_nat(0u);
v___x_203_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___redArg(v_ks_200_, v_vs_201_, v___x_202_, v_x_181_);
return v___x_203_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___redArg___boxed(lean_object* v_x_204_, lean_object* v_x_205_, lean_object* v_x_206_){
_start:
{
size_t v_x_4904__boxed_207_; lean_object* v_res_208_; 
v_x_4904__boxed_207_ = lean_unbox_usize(v_x_205_);
lean_dec(v_x_205_);
v_res_208_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___redArg(v_x_204_, v_x_4904__boxed_207_, v_x_206_);
lean_dec_ref(v_x_206_);
lean_dec_ref(v_x_204_);
return v_res_208_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___redArg(lean_object* v_x_209_, lean_object* v_x_210_){
_start:
{
size_t v___x_211_; size_t v___x_212_; size_t v___x_213_; uint64_t v___x_214_; size_t v___x_215_; lean_object* v___x_216_; 
v___x_211_ = lean_ptr_addr(v_x_210_);
v___x_212_ = ((size_t)3ULL);
v___x_213_ = lean_usize_shift_right(v___x_211_, v___x_212_);
v___x_214_ = lean_usize_to_uint64(v___x_213_);
v___x_215_ = lean_uint64_to_usize(v___x_214_);
v___x_216_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___redArg(v_x_209_, v___x_215_, v_x_210_);
return v___x_216_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___redArg___boxed(lean_object* v_x_217_, lean_object* v_x_218_){
_start:
{
lean_object* v_res_219_; 
v_res_219_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___redArg(v_x_217_, v_x_218_);
lean_dec_ref(v_x_218_);
lean_dec_ref(v_x_217_);
return v_res_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_220_, lean_object* v_x_221_, lean_object* v_x_222_, lean_object* v_x_223_){
_start:
{
lean_object* v_ks_224_; lean_object* v_vs_225_; lean_object* v___x_227_; uint8_t v_isShared_228_; uint8_t v_isSharedCheck_251_; 
v_ks_224_ = lean_ctor_get(v_x_220_, 0);
v_vs_225_ = lean_ctor_get(v_x_220_, 1);
v_isSharedCheck_251_ = !lean_is_exclusive(v_x_220_);
if (v_isSharedCheck_251_ == 0)
{
v___x_227_ = v_x_220_;
v_isShared_228_ = v_isSharedCheck_251_;
goto v_resetjp_226_;
}
else
{
lean_inc(v_vs_225_);
lean_inc(v_ks_224_);
lean_dec(v_x_220_);
v___x_227_ = lean_box(0);
v_isShared_228_ = v_isSharedCheck_251_;
goto v_resetjp_226_;
}
v_resetjp_226_:
{
lean_object* v___x_229_; uint8_t v___x_230_; 
v___x_229_ = lean_array_get_size(v_ks_224_);
v___x_230_ = lean_nat_dec_lt(v_x_221_, v___x_229_);
if (v___x_230_ == 0)
{
lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_234_; 
lean_dec(v_x_221_);
v___x_231_ = lean_array_push(v_ks_224_, v_x_222_);
v___x_232_ = lean_array_push(v_vs_225_, v_x_223_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 1, v___x_232_);
lean_ctor_set(v___x_227_, 0, v___x_231_);
v___x_234_ = v___x_227_;
goto v_reusejp_233_;
}
else
{
lean_object* v_reuseFailAlloc_235_; 
v_reuseFailAlloc_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_235_, 0, v___x_231_);
lean_ctor_set(v_reuseFailAlloc_235_, 1, v___x_232_);
v___x_234_ = v_reuseFailAlloc_235_;
goto v_reusejp_233_;
}
v_reusejp_233_:
{
return v___x_234_;
}
}
else
{
lean_object* v_k_x27_236_; size_t v___x_237_; size_t v___x_238_; uint8_t v___x_239_; 
v_k_x27_236_ = lean_array_fget_borrowed(v_ks_224_, v_x_221_);
v___x_237_ = lean_ptr_addr(v_x_222_);
v___x_238_ = lean_ptr_addr(v_k_x27_236_);
v___x_239_ = lean_usize_dec_eq(v___x_237_, v___x_238_);
if (v___x_239_ == 0)
{
lean_object* v___x_241_; 
if (v_isShared_228_ == 0)
{
v___x_241_ = v___x_227_;
goto v_reusejp_240_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v_ks_224_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v_vs_225_);
v___x_241_ = v_reuseFailAlloc_245_;
goto v_reusejp_240_;
}
v_reusejp_240_:
{
lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_242_ = lean_unsigned_to_nat(1u);
v___x_243_ = lean_nat_add(v_x_221_, v___x_242_);
lean_dec(v_x_221_);
v_x_220_ = v___x_241_;
v_x_221_ = v___x_243_;
goto _start;
}
}
else
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_249_; 
v___x_246_ = lean_array_fset(v_ks_224_, v_x_221_, v_x_222_);
v___x_247_ = lean_array_fset(v_vs_225_, v_x_221_, v_x_223_);
lean_dec(v_x_221_);
if (v_isShared_228_ == 0)
{
lean_ctor_set(v___x_227_, 1, v___x_247_);
lean_ctor_set(v___x_227_, 0, v___x_246_);
v___x_249_ = v___x_227_;
goto v_reusejp_248_;
}
else
{
lean_object* v_reuseFailAlloc_250_; 
v_reuseFailAlloc_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_250_, 0, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_250_, 1, v___x_247_);
v___x_249_ = v_reuseFailAlloc_250_;
goto v_reusejp_248_;
}
v_reusejp_248_:
{
return v___x_249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4___redArg(lean_object* v_n_252_, lean_object* v_k_253_, lean_object* v_v_254_){
_start:
{
lean_object* v___x_255_; lean_object* v___x_256_; 
v___x_255_ = lean_unsigned_to_nat(0u);
v___x_256_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(v_n_252_, v___x_255_, v_k_253_, v_v_254_);
return v___x_256_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_257_; 
v___x_257_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_257_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg(lean_object* v_x_258_, size_t v_x_259_, size_t v_x_260_, lean_object* v_x_261_, lean_object* v_x_262_){
_start:
{
if (lean_obj_tag(v_x_258_) == 0)
{
lean_object* v_es_263_; size_t v___x_264_; size_t v___x_265_; lean_object* v_j_266_; lean_object* v___x_267_; uint8_t v___x_268_; 
v_es_263_ = lean_ctor_get(v_x_258_, 0);
v___x_264_ = ((size_t)31ULL);
v___x_265_ = lean_usize_land(v_x_259_, v___x_264_);
v_j_266_ = lean_usize_to_nat(v___x_265_);
v___x_267_ = lean_array_get_size(v_es_263_);
v___x_268_ = lean_nat_dec_lt(v_j_266_, v___x_267_);
if (v___x_268_ == 0)
{
lean_dec(v_j_266_);
lean_dec(v_x_262_);
lean_dec_ref(v_x_261_);
return v_x_258_;
}
else
{
lean_object* v___x_270_; uint8_t v_isShared_271_; uint8_t v_isSharedCheck_309_; 
lean_inc_ref(v_es_263_);
v_isSharedCheck_309_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_309_ == 0)
{
lean_object* v_unused_310_; 
v_unused_310_ = lean_ctor_get(v_x_258_, 0);
lean_dec(v_unused_310_);
v___x_270_ = v_x_258_;
v_isShared_271_ = v_isSharedCheck_309_;
goto v_resetjp_269_;
}
else
{
lean_dec(v_x_258_);
v___x_270_ = lean_box(0);
v_isShared_271_ = v_isSharedCheck_309_;
goto v_resetjp_269_;
}
v_resetjp_269_:
{
lean_object* v_v_272_; lean_object* v___x_273_; lean_object* v_xs_x27_274_; lean_object* v___y_276_; 
v_v_272_ = lean_array_fget(v_es_263_, v_j_266_);
v___x_273_ = lean_box(0);
v_xs_x27_274_ = lean_array_fset(v_es_263_, v_j_266_, v___x_273_);
switch(lean_obj_tag(v_v_272_))
{
case 0:
{
lean_object* v_key_281_; lean_object* v_val_282_; lean_object* v___x_284_; uint8_t v_isShared_285_; uint8_t v_isSharedCheck_294_; 
v_key_281_ = lean_ctor_get(v_v_272_, 0);
v_val_282_ = lean_ctor_get(v_v_272_, 1);
v_isSharedCheck_294_ = !lean_is_exclusive(v_v_272_);
if (v_isSharedCheck_294_ == 0)
{
v___x_284_ = v_v_272_;
v_isShared_285_ = v_isSharedCheck_294_;
goto v_resetjp_283_;
}
else
{
lean_inc(v_val_282_);
lean_inc(v_key_281_);
lean_dec(v_v_272_);
v___x_284_ = lean_box(0);
v_isShared_285_ = v_isSharedCheck_294_;
goto v_resetjp_283_;
}
v_resetjp_283_:
{
size_t v___x_286_; size_t v___x_287_; uint8_t v___x_288_; 
v___x_286_ = lean_ptr_addr(v_x_261_);
v___x_287_ = lean_ptr_addr(v_key_281_);
v___x_288_ = lean_usize_dec_eq(v___x_286_, v___x_287_);
if (v___x_288_ == 0)
{
lean_object* v___x_289_; lean_object* v___x_290_; 
lean_del_object(v___x_284_);
v___x_289_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_281_, v_val_282_, v_x_261_, v_x_262_);
v___x_290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_290_, 0, v___x_289_);
v___y_276_ = v___x_290_;
goto v___jp_275_;
}
else
{
lean_object* v___x_292_; 
lean_dec(v_val_282_);
lean_dec(v_key_281_);
if (v_isShared_285_ == 0)
{
lean_ctor_set(v___x_284_, 1, v_x_262_);
lean_ctor_set(v___x_284_, 0, v_x_261_);
v___x_292_ = v___x_284_;
goto v_reusejp_291_;
}
else
{
lean_object* v_reuseFailAlloc_293_; 
v_reuseFailAlloc_293_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_293_, 0, v_x_261_);
lean_ctor_set(v_reuseFailAlloc_293_, 1, v_x_262_);
v___x_292_ = v_reuseFailAlloc_293_;
goto v_reusejp_291_;
}
v_reusejp_291_:
{
v___y_276_ = v___x_292_;
goto v___jp_275_;
}
}
}
}
case 1:
{
lean_object* v_node_295_; lean_object* v___x_297_; uint8_t v_isShared_298_; uint8_t v_isSharedCheck_307_; 
v_node_295_ = lean_ctor_get(v_v_272_, 0);
v_isSharedCheck_307_ = !lean_is_exclusive(v_v_272_);
if (v_isSharedCheck_307_ == 0)
{
v___x_297_ = v_v_272_;
v_isShared_298_ = v_isSharedCheck_307_;
goto v_resetjp_296_;
}
else
{
lean_inc(v_node_295_);
lean_dec(v_v_272_);
v___x_297_ = lean_box(0);
v_isShared_298_ = v_isSharedCheck_307_;
goto v_resetjp_296_;
}
v_resetjp_296_:
{
size_t v___x_299_; size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; lean_object* v___x_303_; lean_object* v___x_305_; 
v___x_299_ = ((size_t)5ULL);
v___x_300_ = lean_usize_shift_right(v_x_259_, v___x_299_);
v___x_301_ = ((size_t)1ULL);
v___x_302_ = lean_usize_add(v_x_260_, v___x_301_);
v___x_303_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg(v_node_295_, v___x_300_, v___x_302_, v_x_261_, v_x_262_);
if (v_isShared_298_ == 0)
{
lean_ctor_set(v___x_297_, 0, v___x_303_);
v___x_305_ = v___x_297_;
goto v_reusejp_304_;
}
else
{
lean_object* v_reuseFailAlloc_306_; 
v_reuseFailAlloc_306_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_306_, 0, v___x_303_);
v___x_305_ = v_reuseFailAlloc_306_;
goto v_reusejp_304_;
}
v_reusejp_304_:
{
v___y_276_ = v___x_305_;
goto v___jp_275_;
}
}
}
default: 
{
lean_object* v___x_308_; 
v___x_308_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_308_, 0, v_x_261_);
lean_ctor_set(v___x_308_, 1, v_x_262_);
v___y_276_ = v___x_308_;
goto v___jp_275_;
}
}
v___jp_275_:
{
lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_277_ = lean_array_fset(v_xs_x27_274_, v_j_266_, v___y_276_);
lean_dec(v_j_266_);
if (v_isShared_271_ == 0)
{
lean_ctor_set(v___x_270_, 0, v___x_277_);
v___x_279_ = v___x_270_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v___x_277_);
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
else
{
lean_object* v_ks_311_; lean_object* v_vs_312_; lean_object* v___x_314_; uint8_t v_isShared_315_; uint8_t v_isSharedCheck_330_; 
v_ks_311_ = lean_ctor_get(v_x_258_, 0);
v_vs_312_ = lean_ctor_get(v_x_258_, 1);
v_isSharedCheck_330_ = !lean_is_exclusive(v_x_258_);
if (v_isSharedCheck_330_ == 0)
{
v___x_314_ = v_x_258_;
v_isShared_315_ = v_isSharedCheck_330_;
goto v_resetjp_313_;
}
else
{
lean_inc(v_vs_312_);
lean_inc(v_ks_311_);
lean_dec(v_x_258_);
v___x_314_ = lean_box(0);
v_isShared_315_ = v_isSharedCheck_330_;
goto v_resetjp_313_;
}
v_resetjp_313_:
{
lean_object* v___x_317_; 
if (v_isShared_315_ == 0)
{
v___x_317_ = v___x_314_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_329_; 
v_reuseFailAlloc_329_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_329_, 0, v_ks_311_);
lean_ctor_set(v_reuseFailAlloc_329_, 1, v_vs_312_);
v___x_317_ = v_reuseFailAlloc_329_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
lean_object* v_newNode_318_; size_t v___x_319_; uint8_t v___x_320_; 
v_newNode_318_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4___redArg(v___x_317_, v_x_261_, v_x_262_);
v___x_319_ = ((size_t)7ULL);
v___x_320_ = lean_usize_dec_le(v___x_319_, v_x_260_);
if (v___x_320_ == 0)
{
lean_object* v___x_321_; lean_object* v___x_322_; uint8_t v___x_323_; 
v___x_321_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_318_);
v___x_322_ = lean_unsigned_to_nat(4u);
v___x_323_ = lean_nat_dec_lt(v___x_321_, v___x_322_);
lean_dec(v___x_321_);
if (v___x_323_ == 0)
{
lean_object* v_ks_324_; lean_object* v_vs_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; 
v_ks_324_ = lean_ctor_get(v_newNode_318_, 0);
lean_inc_ref(v_ks_324_);
v_vs_325_ = lean_ctor_get(v_newNode_318_, 1);
lean_inc_ref(v_vs_325_);
lean_dec_ref(v_newNode_318_);
v___x_326_ = lean_unsigned_to_nat(0u);
v___x_327_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___closed__0);
v___x_328_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___redArg(v_x_260_, v_ks_324_, v_vs_325_, v___x_326_, v___x_327_);
lean_dec_ref(v_vs_325_);
lean_dec_ref(v_ks_324_);
return v___x_328_;
}
else
{
return v_newNode_318_;
}
}
else
{
return v_newNode_318_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___redArg(size_t v_depth_331_, lean_object* v_keys_332_, lean_object* v_vals_333_, lean_object* v_i_334_, lean_object* v_entries_335_){
_start:
{
lean_object* v___x_336_; uint8_t v___x_337_; 
v___x_336_ = lean_array_get_size(v_keys_332_);
v___x_337_ = lean_nat_dec_lt(v_i_334_, v___x_336_);
if (v___x_337_ == 0)
{
lean_dec(v_i_334_);
return v_entries_335_;
}
else
{
lean_object* v_k_338_; lean_object* v_v_339_; size_t v___x_340_; size_t v___x_341_; size_t v___x_342_; uint64_t v___x_343_; size_t v_h_344_; size_t v___x_345_; lean_object* v___x_346_; size_t v___x_347_; size_t v___x_348_; size_t v___x_349_; size_t v_h_350_; lean_object* v___x_351_; lean_object* v___x_352_; 
v_k_338_ = lean_array_fget_borrowed(v_keys_332_, v_i_334_);
v_v_339_ = lean_array_fget_borrowed(v_vals_333_, v_i_334_);
v___x_340_ = lean_ptr_addr(v_k_338_);
v___x_341_ = ((size_t)3ULL);
v___x_342_ = lean_usize_shift_right(v___x_340_, v___x_341_);
v___x_343_ = lean_usize_to_uint64(v___x_342_);
v_h_344_ = lean_uint64_to_usize(v___x_343_);
v___x_345_ = ((size_t)5ULL);
v___x_346_ = lean_unsigned_to_nat(1u);
v___x_347_ = ((size_t)1ULL);
v___x_348_ = lean_usize_sub(v_depth_331_, v___x_347_);
v___x_349_ = lean_usize_mul(v___x_345_, v___x_348_);
v_h_350_ = lean_usize_shift_right(v_h_344_, v___x_349_);
v___x_351_ = lean_nat_add(v_i_334_, v___x_346_);
lean_dec(v_i_334_);
lean_inc(v_v_339_);
lean_inc(v_k_338_);
v___x_352_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg(v_entries_335_, v_h_350_, v_depth_331_, v_k_338_, v_v_339_);
v_i_334_ = v___x_351_;
v_entries_335_ = v___x_352_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_354_, lean_object* v_keys_355_, lean_object* v_vals_356_, lean_object* v_i_357_, lean_object* v_entries_358_){
_start:
{
size_t v_depth_boxed_359_; lean_object* v_res_360_; 
v_depth_boxed_359_ = lean_unbox_usize(v_depth_354_);
lean_dec(v_depth_354_);
v_res_360_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___redArg(v_depth_boxed_359_, v_keys_355_, v_vals_356_, v_i_357_, v_entries_358_);
lean_dec_ref(v_vals_356_);
lean_dec_ref(v_keys_355_);
return v_res_360_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg___boxed(lean_object* v_x_361_, lean_object* v_x_362_, lean_object* v_x_363_, lean_object* v_x_364_, lean_object* v_x_365_){
_start:
{
size_t v_x_5056__boxed_366_; size_t v_x_5057__boxed_367_; lean_object* v_res_368_; 
v_x_5056__boxed_366_ = lean_unbox_usize(v_x_362_);
lean_dec(v_x_362_);
v_x_5057__boxed_367_ = lean_unbox_usize(v_x_363_);
lean_dec(v_x_363_);
v_res_368_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg(v_x_361_, v_x_5056__boxed_366_, v_x_5057__boxed_367_, v_x_364_, v_x_365_);
return v_res_368_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1___redArg(lean_object* v_x_369_, lean_object* v_x_370_, lean_object* v_x_371_){
_start:
{
size_t v___x_372_; size_t v___x_373_; size_t v___x_374_; uint64_t v___x_375_; size_t v___x_376_; size_t v___x_377_; lean_object* v___x_378_; 
v___x_372_ = lean_ptr_addr(v_x_370_);
v___x_373_ = ((size_t)3ULL);
v___x_374_ = lean_usize_shift_right(v___x_372_, v___x_373_);
v___x_375_ = lean_usize_to_uint64(v___x_374_);
v___x_376_ = lean_uint64_to_usize(v___x_375_);
v___x_377_ = ((size_t)1ULL);
v___x_378_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg(v_x_369_, v___x_376_, v___x_377_, v_x_370_, v_x_371_);
return v___x_378_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___redArg(lean_object* v_op_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_, lean_object* v_a_384_){
_start:
{
lean_object* v___x_386_; lean_object* v_lawfulEqCmpMap_387_; lean_object* v___x_388_; 
v___x_386_ = lean_st_ref_get(v_a_380_);
v_lawfulEqCmpMap_387_ = lean_ctor_get(v___x_386_, 8);
lean_inc_ref(v_lawfulEqCmpMap_387_);
lean_dec(v___x_386_);
v___x_388_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___redArg(v_lawfulEqCmpMap_387_, v_op_379_);
lean_dec_ref(v_lawfulEqCmpMap_387_);
if (lean_obj_tag(v___x_388_) == 1)
{
lean_object* v_val_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_396_; 
lean_dec_ref(v_op_379_);
v_val_389_ = lean_ctor_get(v___x_388_, 0);
v_isSharedCheck_396_ = !lean_is_exclusive(v___x_388_);
if (v_isSharedCheck_396_ == 0)
{
v___x_391_ = v___x_388_;
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_val_389_);
lean_dec(v___x_388_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_396_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_394_; 
if (v_isShared_392_ == 0)
{
lean_ctor_set_tag(v___x_391_, 0);
v___x_394_ = v___x_391_;
goto v_reusejp_393_;
}
else
{
lean_object* v_reuseFailAlloc_395_; 
v_reuseFailAlloc_395_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_395_, 0, v_val_389_);
v___x_394_ = v_reuseFailAlloc_395_;
goto v_reusejp_393_;
}
v_reusejp_393_:
{
return v___x_394_;
}
}
}
else
{
lean_object* v___x_397_; 
lean_dec(v___x_388_);
lean_inc_ref(v_op_379_);
v___x_397_ = l___private_Lean_Meta_Tactic_Grind_LawfulEqCmp_0__Lean_Meta_Grind_getLawfulEqCmpThm_x3f_go_x3f(v_op_379_, v_a_381_, v_a_382_, v_a_383_, v_a_384_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_431_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
v_isSharedCheck_431_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_431_ == 0)
{
v___x_400_ = v___x_397_;
v_isShared_401_ = v_isSharedCheck_431_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_397_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_431_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v_congrThms_403_; lean_object* v_simp_404_; lean_object* v_symSimp_405_; lean_object* v_symDSimp_406_; lean_object* v_lastTag_407_; lean_object* v_counters_408_; lean_object* v_splitDiags_409_; lean_object* v_ematchDiags_410_; lean_object* v_lawfulEqCmpMap_411_; lean_object* v_reflCmpMap_412_; lean_object* v_anchors_413_; lean_object* v_fvarAnchors_414_; lean_object* v_instanceMap_415_; lean_object* v_hoistedDecls_416_; lean_object* v_proofInfos_417_; lean_object* v_numBranches_418_; lean_object* v___x_420_; uint8_t v_isShared_421_; uint8_t v_isSharedCheck_430_; 
v___x_402_ = lean_st_ref_take(v_a_380_);
v_congrThms_403_ = lean_ctor_get(v___x_402_, 0);
v_simp_404_ = lean_ctor_get(v___x_402_, 1);
v_symSimp_405_ = lean_ctor_get(v___x_402_, 2);
v_symDSimp_406_ = lean_ctor_get(v___x_402_, 3);
v_lastTag_407_ = lean_ctor_get(v___x_402_, 4);
v_counters_408_ = lean_ctor_get(v___x_402_, 5);
v_splitDiags_409_ = lean_ctor_get(v___x_402_, 6);
v_ematchDiags_410_ = lean_ctor_get(v___x_402_, 7);
v_lawfulEqCmpMap_411_ = lean_ctor_get(v___x_402_, 8);
v_reflCmpMap_412_ = lean_ctor_get(v___x_402_, 9);
v_anchors_413_ = lean_ctor_get(v___x_402_, 10);
v_fvarAnchors_414_ = lean_ctor_get(v___x_402_, 11);
v_instanceMap_415_ = lean_ctor_get(v___x_402_, 12);
v_hoistedDecls_416_ = lean_ctor_get(v___x_402_, 13);
v_proofInfos_417_ = lean_ctor_get(v___x_402_, 14);
v_numBranches_418_ = lean_ctor_get(v___x_402_, 15);
v_isSharedCheck_430_ = !lean_is_exclusive(v___x_402_);
if (v_isSharedCheck_430_ == 0)
{
v___x_420_ = v___x_402_;
v_isShared_421_ = v_isSharedCheck_430_;
goto v_resetjp_419_;
}
else
{
lean_inc(v_numBranches_418_);
lean_inc(v_proofInfos_417_);
lean_inc(v_hoistedDecls_416_);
lean_inc(v_instanceMap_415_);
lean_inc(v_fvarAnchors_414_);
lean_inc(v_anchors_413_);
lean_inc(v_reflCmpMap_412_);
lean_inc(v_lawfulEqCmpMap_411_);
lean_inc(v_ematchDiags_410_);
lean_inc(v_splitDiags_409_);
lean_inc(v_counters_408_);
lean_inc(v_lastTag_407_);
lean_inc(v_symDSimp_406_);
lean_inc(v_symSimp_405_);
lean_inc(v_simp_404_);
lean_inc(v_congrThms_403_);
lean_dec(v___x_402_);
v___x_420_ = lean_box(0);
v_isShared_421_ = v_isSharedCheck_430_;
goto v_resetjp_419_;
}
v_resetjp_419_:
{
lean_object* v___x_422_; lean_object* v___x_424_; 
lean_inc(v_a_398_);
v___x_422_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1___redArg(v_lawfulEqCmpMap_411_, v_op_379_, v_a_398_);
if (v_isShared_421_ == 0)
{
lean_ctor_set(v___x_420_, 8, v___x_422_);
v___x_424_ = v___x_420_;
goto v_reusejp_423_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 16, 0);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_congrThms_403_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_simp_404_);
lean_ctor_set(v_reuseFailAlloc_429_, 2, v_symSimp_405_);
lean_ctor_set(v_reuseFailAlloc_429_, 3, v_symDSimp_406_);
lean_ctor_set(v_reuseFailAlloc_429_, 4, v_lastTag_407_);
lean_ctor_set(v_reuseFailAlloc_429_, 5, v_counters_408_);
lean_ctor_set(v_reuseFailAlloc_429_, 6, v_splitDiags_409_);
lean_ctor_set(v_reuseFailAlloc_429_, 7, v_ematchDiags_410_);
lean_ctor_set(v_reuseFailAlloc_429_, 8, v___x_422_);
lean_ctor_set(v_reuseFailAlloc_429_, 9, v_reflCmpMap_412_);
lean_ctor_set(v_reuseFailAlloc_429_, 10, v_anchors_413_);
lean_ctor_set(v_reuseFailAlloc_429_, 11, v_fvarAnchors_414_);
lean_ctor_set(v_reuseFailAlloc_429_, 12, v_instanceMap_415_);
lean_ctor_set(v_reuseFailAlloc_429_, 13, v_hoistedDecls_416_);
lean_ctor_set(v_reuseFailAlloc_429_, 14, v_proofInfos_417_);
lean_ctor_set(v_reuseFailAlloc_429_, 15, v_numBranches_418_);
v___x_424_ = v_reuseFailAlloc_429_;
goto v_reusejp_423_;
}
v_reusejp_423_:
{
lean_object* v___x_425_; lean_object* v___x_427_; 
v___x_425_ = lean_st_ref_put(v_a_380_, v___x_424_);
if (v_isShared_401_ == 0)
{
v___x_427_ = v___x_400_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_428_; 
v_reuseFailAlloc_428_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_428_, 0, v_a_398_);
v___x_427_ = v_reuseFailAlloc_428_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
return v___x_427_;
}
}
}
}
}
else
{
lean_dec_ref(v_op_379_);
return v___x_397_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___redArg___boxed(lean_object* v_op_432_, lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_){
_start:
{
lean_object* v_res_439_; 
v_res_439_ = l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___redArg(v_op_432_, v_a_433_, v_a_434_, v_a_435_, v_a_436_, v_a_437_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_436_);
lean_dec(v_a_435_);
lean_dec_ref(v_a_434_);
lean_dec(v_a_433_);
return v_res_439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f(lean_object* v_op_440_, lean_object* v_a_441_, lean_object* v_a_442_, lean_object* v_a_443_, lean_object* v_a_444_, lean_object* v_a_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, lean_object* v_a_449_){
_start:
{
lean_object* v___x_451_; 
v___x_451_ = l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___redArg(v_op_440_, v_a_443_, v_a_446_, v_a_447_, v_a_448_, v_a_449_);
return v___x_451_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___boxed(lean_object* v_op_452_, lean_object* v_a_453_, lean_object* v_a_454_, lean_object* v_a_455_, lean_object* v_a_456_, lean_object* v_a_457_, lean_object* v_a_458_, lean_object* v_a_459_, lean_object* v_a_460_, lean_object* v_a_461_, lean_object* v_a_462_){
_start:
{
lean_object* v_res_463_; 
v_res_463_ = l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f(v_op_452_, v_a_453_, v_a_454_, v_a_455_, v_a_456_, v_a_457_, v_a_458_, v_a_459_, v_a_460_, v_a_461_);
lean_dec(v_a_461_);
lean_dec_ref(v_a_460_);
lean_dec(v_a_459_);
lean_dec_ref(v_a_458_);
lean_dec(v_a_457_);
lean_dec_ref(v_a_456_);
lean_dec(v_a_455_);
lean_dec_ref(v_a_454_);
lean_dec(v_a_453_);
return v_res_463_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0(lean_object* v_00_u03b2_464_, lean_object* v_x_465_, lean_object* v_x_466_){
_start:
{
lean_object* v___x_467_; 
v___x_467_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___redArg(v_x_465_, v_x_466_);
return v___x_467_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0___boxed(lean_object* v_00_u03b2_468_, lean_object* v_x_469_, lean_object* v_x_470_){
_start:
{
lean_object* v_res_471_; 
v_res_471_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0(v_00_u03b2_468_, v_x_469_, v_x_470_);
lean_dec_ref(v_x_470_);
lean_dec_ref(v_x_469_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1(lean_object* v_00_u03b2_472_, lean_object* v_x_473_, lean_object* v_x_474_, lean_object* v_x_475_){
_start:
{
lean_object* v___x_476_; 
v___x_476_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1___redArg(v_x_473_, v_x_474_, v_x_475_);
return v___x_476_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0(lean_object* v_00_u03b2_477_, lean_object* v_x_478_, size_t v_x_479_, lean_object* v_x_480_){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___redArg(v_x_478_, v_x_479_, v_x_480_);
return v___x_481_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0___boxed(lean_object* v_00_u03b2_482_, lean_object* v_x_483_, lean_object* v_x_484_, lean_object* v_x_485_){
_start:
{
size_t v_x_5318__boxed_486_; lean_object* v_res_487_; 
v_x_5318__boxed_486_ = lean_unbox_usize(v_x_484_);
lean_dec(v_x_484_);
v_res_487_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0(v_00_u03b2_482_, v_x_483_, v_x_5318__boxed_486_, v_x_485_);
lean_dec_ref(v_x_485_);
lean_dec_ref(v_x_483_);
return v_res_487_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2(lean_object* v_00_u03b2_488_, lean_object* v_x_489_, size_t v_x_490_, size_t v_x_491_, lean_object* v_x_492_, lean_object* v_x_493_){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___redArg(v_x_489_, v_x_490_, v_x_491_, v_x_492_, v_x_493_);
return v___x_494_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2___boxed(lean_object* v_00_u03b2_495_, lean_object* v_x_496_, lean_object* v_x_497_, lean_object* v_x_498_, lean_object* v_x_499_, lean_object* v_x_500_){
_start:
{
size_t v_x_5329__boxed_501_; size_t v_x_5330__boxed_502_; lean_object* v_res_503_; 
v_x_5329__boxed_501_ = lean_unbox_usize(v_x_497_);
lean_dec(v_x_497_);
v_x_5330__boxed_502_ = lean_unbox_usize(v_x_498_);
lean_dec(v_x_498_);
v_res_503_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2(v_00_u03b2_495_, v_x_496_, v_x_5329__boxed_501_, v_x_5330__boxed_502_, v_x_499_, v_x_500_);
return v_res_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_504_, lean_object* v_keys_505_, lean_object* v_vals_506_, lean_object* v_heq_507_, lean_object* v_i_508_, lean_object* v_k_509_){
_start:
{
lean_object* v___x_510_; 
v___x_510_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___redArg(v_keys_505_, v_vals_506_, v_i_508_, v_k_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_511_, lean_object* v_keys_512_, lean_object* v_vals_513_, lean_object* v_heq_514_, lean_object* v_i_515_, lean_object* v_k_516_){
_start:
{
lean_object* v_res_517_; 
v_res_517_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__0_spec__0_spec__1(v_00_u03b2_511_, v_keys_512_, v_vals_513_, v_heq_514_, v_i_515_, v_k_516_);
lean_dec_ref(v_k_516_);
lean_dec_ref(v_vals_513_);
lean_dec_ref(v_keys_512_);
return v_res_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_518_, lean_object* v_n_519_, lean_object* v_k_520_, lean_object* v_v_521_){
_start:
{
lean_object* v___x_522_; 
v___x_522_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4___redArg(v_n_519_, v_k_520_, v_v_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_523_, size_t v_depth_524_, lean_object* v_keys_525_, lean_object* v_vals_526_, lean_object* v_heq_527_, lean_object* v_i_528_, lean_object* v_entries_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___redArg(v_depth_524_, v_keys_525_, v_vals_526_, v_i_528_, v_entries_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_531_, lean_object* v_depth_532_, lean_object* v_keys_533_, lean_object* v_vals_534_, lean_object* v_heq_535_, lean_object* v_i_536_, lean_object* v_entries_537_){
_start:
{
size_t v_depth_boxed_538_; lean_object* v_res_539_; 
v_depth_boxed_538_ = lean_unbox_usize(v_depth_532_);
lean_dec(v_depth_532_);
v_res_539_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__5(v_00_u03b2_531_, v_depth_boxed_538_, v_keys_533_, v_vals_534_, v_heq_535_, v_i_536_, v_entries_537_);
lean_dec_ref(v_vals_534_);
lean_dec_ref(v_keys_533_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_540_, lean_object* v_x_541_, lean_object* v_x_542_, lean_object* v_x_543_, lean_object* v_x_544_){
_start:
{
lean_object* v___x_545_; 
v___x_545_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_getLawfulEqCmpThm_x3f_spec__1_spec__2_spec__4_spec__5___redArg(v_x_541_, v_x_542_, v_x_543_, v_x_544_);
return v___x_545_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateLawfulEqCmp(lean_object* v_e_546_, lean_object* v_a_547_, lean_object* v_a_548_, lean_object* v_a_549_, lean_object* v_a_550_, lean_object* v_a_551_, lean_object* v_a_552_, lean_object* v_a_553_, lean_object* v_a_554_, lean_object* v_a_555_, lean_object* v_a_556_){
_start:
{
lean_object* v___x_558_; 
v___x_558_ = l_Lean_Meta_Grind_getBinOp(v_e_546_);
if (lean_obj_tag(v___x_558_) == 1)
{
lean_object* v_val_559_; lean_object* v___x_560_; 
v_val_559_ = lean_ctor_get(v___x_558_, 0);
lean_inc(v_val_559_);
lean_dec_ref_known(v___x_558_, 1);
v___x_560_ = l_Lean_Meta_Grind_getLawfulEqCmpThm_x3f___redArg(v_val_559_, v_a_550_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
if (lean_obj_tag(v___x_560_) == 0)
{
lean_object* v_a_561_; lean_object* v___x_563_; uint8_t v_isShared_564_; uint8_t v_isSharedCheck_615_; 
v_a_561_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_615_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_615_ == 0)
{
v___x_563_ = v___x_560_;
v_isShared_564_ = v_isSharedCheck_615_;
goto v_resetjp_562_;
}
else
{
lean_inc(v_a_561_);
lean_dec(v___x_560_);
v___x_563_ = lean_box(0);
v_isShared_564_ = v_isSharedCheck_615_;
goto v_resetjp_562_;
}
v_resetjp_562_:
{
if (lean_obj_tag(v_a_561_) == 1)
{
lean_object* v_val_565_; lean_object* v___x_566_; 
lean_del_object(v___x_563_);
v_val_565_ = lean_ctor_get(v_a_561_, 0);
lean_inc(v_val_565_);
lean_dec_ref_known(v_a_561_, 1);
v___x_566_ = l_Lean_Meta_Sym_getOrderingEqExpr___redArg(v_a_551_);
if (lean_obj_tag(v___x_566_) == 0)
{
lean_object* v_a_567_; lean_object* v___x_568_; 
v_a_567_ = lean_ctor_get(v___x_566_, 0);
lean_inc(v_a_567_);
lean_dec_ref_known(v___x_566_, 1);
v___x_568_ = l_Lean_Meta_Grind_isEqv___redArg(v_e_546_, v_a_567_, v_a_547_);
if (lean_obj_tag(v___x_568_) == 0)
{
lean_object* v_a_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_594_; 
v_a_569_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_594_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_594_ == 0)
{
v___x_571_ = v___x_568_;
v_isShared_572_ = v_isSharedCheck_594_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_a_569_);
lean_dec(v___x_568_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_594_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
uint8_t v___x_573_; 
v___x_573_ = lean_unbox(v_a_569_);
lean_dec(v_a_569_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; lean_object* v___x_576_; 
lean_dec(v_a_567_);
lean_dec(v_val_565_);
lean_dec_ref(v_e_546_);
v___x_574_ = lean_box(0);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_574_);
v___x_576_ = v___x_571_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v___x_574_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
else
{
lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v___x_581_; 
lean_del_object(v___x_571_);
v___x_578_ = l_Lean_Expr_appFn_x21(v_e_546_);
v___x_579_ = l_Lean_Expr_appArg_x21(v___x_578_);
lean_dec_ref(v___x_578_);
v___x_580_ = l_Lean_Expr_appArg_x21(v_e_546_);
lean_inc(v_a_556_);
lean_inc_ref(v_a_555_);
lean_inc(v_a_554_);
lean_inc_ref(v_a_553_);
lean_inc(v_a_552_);
lean_inc_ref(v_a_551_);
lean_inc(v_a_550_);
lean_inc_ref(v_a_549_);
lean_inc(v_a_548_);
lean_inc(v_a_547_);
v___x_581_ = lean_grind_mk_eq_proof(v_e_546_, v_a_567_, v_a_547_, v_a_548_, v_a_549_, v_a_550_, v_a_551_, v_a_552_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
if (lean_obj_tag(v___x_581_) == 0)
{
lean_object* v_a_582_; lean_object* v___x_583_; uint8_t v___x_584_; lean_object* v___x_585_; 
v_a_582_ = lean_ctor_get(v___x_581_, 0);
lean_inc(v_a_582_);
lean_dec_ref_known(v___x_581_, 1);
lean_inc_ref(v___x_580_);
lean_inc_ref(v___x_579_);
v___x_583_ = l_Lean_mkApp3(v_val_565_, v___x_579_, v___x_580_, v_a_582_);
v___x_584_ = 0;
v___x_585_ = l_Lean_Meta_Grind_pushEqCore___redArg(v___x_579_, v___x_580_, v___x_583_, v___x_584_, v_a_547_, v_a_549_, v_a_553_, v_a_554_, v_a_555_, v_a_556_);
return v___x_585_;
}
else
{
lean_object* v_a_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_593_; 
lean_dec_ref(v___x_580_);
lean_dec_ref(v___x_579_);
lean_dec(v_val_565_);
v_a_586_ = lean_ctor_get(v___x_581_, 0);
v_isSharedCheck_593_ = !lean_is_exclusive(v___x_581_);
if (v_isSharedCheck_593_ == 0)
{
v___x_588_ = v___x_581_;
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_a_586_);
lean_dec(v___x_581_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_593_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_591_; 
if (v_isShared_589_ == 0)
{
v___x_591_ = v___x_588_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_a_586_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
return v___x_591_;
}
}
}
}
}
}
else
{
lean_object* v_a_595_; lean_object* v___x_597_; uint8_t v_isShared_598_; uint8_t v_isSharedCheck_602_; 
lean_dec(v_a_567_);
lean_dec(v_val_565_);
lean_dec_ref(v_e_546_);
v_a_595_ = lean_ctor_get(v___x_568_, 0);
v_isSharedCheck_602_ = !lean_is_exclusive(v___x_568_);
if (v_isSharedCheck_602_ == 0)
{
v___x_597_ = v___x_568_;
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
else
{
lean_inc(v_a_595_);
lean_dec(v___x_568_);
v___x_597_ = lean_box(0);
v_isShared_598_ = v_isSharedCheck_602_;
goto v_resetjp_596_;
}
v_resetjp_596_:
{
lean_object* v___x_600_; 
if (v_isShared_598_ == 0)
{
v___x_600_ = v___x_597_;
goto v_reusejp_599_;
}
else
{
lean_object* v_reuseFailAlloc_601_; 
v_reuseFailAlloc_601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_601_, 0, v_a_595_);
v___x_600_ = v_reuseFailAlloc_601_;
goto v_reusejp_599_;
}
v_reusejp_599_:
{
return v___x_600_;
}
}
}
}
else
{
lean_object* v_a_603_; lean_object* v___x_605_; uint8_t v_isShared_606_; uint8_t v_isSharedCheck_610_; 
lean_dec(v_val_565_);
lean_dec_ref(v_e_546_);
v_a_603_ = lean_ctor_get(v___x_566_, 0);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_566_);
if (v_isSharedCheck_610_ == 0)
{
v___x_605_ = v___x_566_;
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
else
{
lean_inc(v_a_603_);
lean_dec(v___x_566_);
v___x_605_ = lean_box(0);
v_isShared_606_ = v_isSharedCheck_610_;
goto v_resetjp_604_;
}
v_resetjp_604_:
{
lean_object* v___x_608_; 
if (v_isShared_606_ == 0)
{
v___x_608_ = v___x_605_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_a_603_);
v___x_608_ = v_reuseFailAlloc_609_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
return v___x_608_;
}
}
}
}
else
{
lean_object* v___x_611_; lean_object* v___x_613_; 
lean_dec(v_a_561_);
lean_dec_ref(v_e_546_);
v___x_611_ = lean_box(0);
if (v_isShared_564_ == 0)
{
lean_ctor_set(v___x_563_, 0, v___x_611_);
v___x_613_ = v___x_563_;
goto v_reusejp_612_;
}
else
{
lean_object* v_reuseFailAlloc_614_; 
v_reuseFailAlloc_614_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_614_, 0, v___x_611_);
v___x_613_ = v_reuseFailAlloc_614_;
goto v_reusejp_612_;
}
v_reusejp_612_:
{
return v___x_613_;
}
}
}
}
else
{
lean_object* v_a_616_; lean_object* v___x_618_; uint8_t v_isShared_619_; uint8_t v_isSharedCheck_623_; 
lean_dec_ref(v_e_546_);
v_a_616_ = lean_ctor_get(v___x_560_, 0);
v_isSharedCheck_623_ = !lean_is_exclusive(v___x_560_);
if (v_isSharedCheck_623_ == 0)
{
v___x_618_ = v___x_560_;
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
else
{
lean_inc(v_a_616_);
lean_dec(v___x_560_);
v___x_618_ = lean_box(0);
v_isShared_619_ = v_isSharedCheck_623_;
goto v_resetjp_617_;
}
v_resetjp_617_:
{
lean_object* v___x_621_; 
if (v_isShared_619_ == 0)
{
v___x_621_ = v___x_618_;
goto v_reusejp_620_;
}
else
{
lean_object* v_reuseFailAlloc_622_; 
v_reuseFailAlloc_622_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_622_, 0, v_a_616_);
v___x_621_ = v_reuseFailAlloc_622_;
goto v_reusejp_620_;
}
v_reusejp_620_:
{
return v___x_621_;
}
}
}
}
else
{
lean_object* v___x_624_; lean_object* v___x_625_; 
lean_dec(v___x_558_);
lean_dec_ref(v_e_546_);
v___x_624_ = lean_box(0);
v___x_625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_625_, 0, v___x_624_);
return v___x_625_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_propagateLawfulEqCmp___boxed(lean_object* v_e_626_, lean_object* v_a_627_, lean_object* v_a_628_, lean_object* v_a_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_, lean_object* v_a_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_Lean_Meta_Grind_propagateLawfulEqCmp(v_e_626_, v_a_627_, v_a_628_, v_a_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_, v_a_636_);
lean_dec(v_a_636_);
lean_dec_ref(v_a_635_);
lean_dec(v_a_634_);
lean_dec_ref(v_a_633_);
lean_dec(v_a_632_);
lean_dec_ref(v_a_631_);
lean_dec(v_a_630_);
lean_dec_ref(v_a_629_);
lean_dec(v_a_628_);
lean_dec(v_a_627_);
return v_res_638_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_LawfulEqCmp(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_LawfulEqCmp(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_SynthInstance(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_LawfulEqCmp(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_SynthInstance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_LawfulEqCmp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_LawfulEqCmp(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_LawfulEqCmp(builtin);
}
#ifdef __cplusplus
}
#endif
