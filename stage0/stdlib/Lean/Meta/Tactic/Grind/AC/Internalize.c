// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.AC.Internalize
// Imports: public import Lean.Meta.Tactic.Grind.AC.Util import Lean.Meta.Tactic.Grind.AC.DenoteExpr
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
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFn_x21(lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_Grind_AC_ACM_getStruct(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_AC_addTermOpId___redArg(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Meta_Grind_AC_acExt;
lean_object* l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_getConfig___redArg(lean_object*);
lean_object* l_Lean_Meta_Grind_AC_getOpId_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_AC_isOp_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_AC_mkVar(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_AC_modifyStruct___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_AC_internalize___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_AC_internalize___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ac"};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_AC_internalize___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "internalize"};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_AC_internalize___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__0_value),LEAN_SCALAR_PTR_LITERAL(223, 115, 241, 203, 181, 236, 81, 221)}};
static const lean_ctor_object l_Lean_Meta_Grind_AC_internalize___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__1_value),LEAN_SCALAR_PTR_LITERAL(9, 156, 240, 157, 146, 53, 54, 12)}};
static const lean_ctor_object l_Lean_Meta_Grind_AC_internalize___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 182, 35, 4, 116, 197, 166, 64)}};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_AC_internalize___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__4_value;
static const lean_ctor_object l_Lean_Meta_Grind_AC_internalize___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__4_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__5_value;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__6;
static const lean_string_object l_Lean_Meta_Grind_AC_internalize___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__7_value;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__8;
static const lean_string_object l_Lean_Meta_Grind_AC_internalize___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "] "};
static const lean_object* l_Lean_Meta_Grind_AC_internalize___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_AC_internalize___closed__9_value;
static lean_once_cell_t l_Lean_Meta_Grind_AC_internalize___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_AC_internalize___closed__10;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(lean_object* v_parent_x3f_1_, lean_object* v_op_2_){
_start:
{
if (lean_obj_tag(v_parent_x3f_1_) == 1)
{
lean_object* v_val_8_; lean_object* v___x_10_; uint8_t v_isShared_11_; uint8_t v_isSharedCheck_23_; 
v_val_8_ = lean_ctor_get(v_parent_x3f_1_, 0);
v_isSharedCheck_23_ = !lean_is_exclusive(v_parent_x3f_1_);
if (v_isSharedCheck_23_ == 0)
{
v___x_10_ = v_parent_x3f_1_;
v_isShared_11_ = v_isSharedCheck_23_;
goto v_resetjp_9_;
}
else
{
lean_inc(v_val_8_);
lean_dec(v_parent_x3f_1_);
v___x_10_ = lean_box(0);
v_isShared_11_ = v_isSharedCheck_23_;
goto v_resetjp_9_;
}
v_resetjp_9_:
{
uint8_t v___x_12_; 
v___x_12_ = l_Lean_Expr_isApp(v_val_8_);
if (v___x_12_ == 0)
{
lean_del_object(v___x_10_);
lean_dec(v_val_8_);
goto v___jp_4_;
}
else
{
lean_object* v___x_13_; uint8_t v___x_14_; 
v___x_13_ = l_Lean_Expr_appFn_x21(v_val_8_);
lean_dec(v_val_8_);
v___x_14_ = l_Lean_Expr_isApp(v___x_13_);
if (v___x_14_ == 0)
{
lean_dec_ref(v___x_13_);
lean_del_object(v___x_10_);
goto v___jp_4_;
}
else
{
lean_object* v___x_15_; size_t v___x_16_; size_t v___x_17_; uint8_t v___x_18_; lean_object* v___x_19_; lean_object* v___x_21_; 
v___x_15_ = l_Lean_Expr_appFn_x21(v___x_13_);
lean_dec_ref(v___x_13_);
v___x_16_ = lean_ptr_addr(v___x_15_);
lean_dec_ref(v___x_15_);
v___x_17_ = lean_ptr_addr(v_op_2_);
v___x_18_ = lean_usize_dec_eq(v___x_16_, v___x_17_);
v___x_19_ = lean_box(v___x_18_);
if (v_isShared_11_ == 0)
{
lean_ctor_set_tag(v___x_10_, 0);
lean_ctor_set(v___x_10_, 0, v___x_19_);
v___x_21_ = v___x_10_;
goto v_reusejp_20_;
}
else
{
lean_object* v_reuseFailAlloc_22_; 
v_reuseFailAlloc_22_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_22_, 0, v___x_19_);
v___x_21_ = v_reuseFailAlloc_22_;
goto v_reusejp_20_;
}
v_reusejp_20_:
{
return v___x_21_;
}
}
}
}
}
else
{
uint8_t v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec(v_parent_x3f_1_);
v___x_24_ = 0;
v___x_25_ = lean_box(v___x_24_);
v___x_26_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_26_, 0, v___x_25_);
return v___x_26_;
}
v___jp_4_:
{
uint8_t v___x_5_; lean_object* v___x_6_; lean_object* v___x_7_; 
v___x_5_ = 0;
v___x_6_ = lean_box(v___x_5_);
v___x_7_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_7_, 0, v___x_6_);
return v___x_7_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg___boxed(lean_object* v_parent_x3f_27_, lean_object* v_op_28_, lean_object* v_a_29_){
_start:
{
lean_object* v_res_30_; 
v_res_30_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(v_parent_x3f_27_, v_op_28_);
lean_dec_ref(v_op_28_);
return v_res_30_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp(lean_object* v_parent_x3f_31_, lean_object* v_op_32_, lean_object* v_a_33_, lean_object* v_a_34_, lean_object* v_a_35_, lean_object* v_a_36_, lean_object* v_a_37_, lean_object* v_a_38_, lean_object* v_a_39_, lean_object* v_a_40_, lean_object* v_a_41_, lean_object* v_a_42_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(v_parent_x3f_31_, v_op_32_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___boxed(lean_object* v_parent_x3f_45_, lean_object* v_op_46_, lean_object* v_a_47_, lean_object* v_a_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_, lean_object* v_a_53_, lean_object* v_a_54_, lean_object* v_a_55_, lean_object* v_a_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp(v_parent_x3f_45_, v_op_46_, v_a_47_, v_a_48_, v_a_49_, v_a_50_, v_a_51_, v_a_52_, v_a_53_, v_a_54_, v_a_55_, v_a_56_);
lean_dec(v_a_56_);
lean_dec_ref(v_a_55_);
lean_dec(v_a_54_);
lean_dec_ref(v_a_53_);
lean_dec(v_a_52_);
lean_dec_ref(v_a_51_);
lean_dec(v_a_50_);
lean_dec_ref(v_a_49_);
lean_dec(v_a_48_);
lean_dec(v_a_47_);
lean_dec_ref(v_op_46_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify(lean_object* v_e_59_, lean_object* v_a_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_, lean_object* v_a_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_Meta_Grind_AC_isOp_x3f(v_e_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
if (lean_obj_tag(v___x_72_) == 0)
{
lean_object* v_a_73_; 
v_a_73_ = lean_ctor_get(v___x_72_, 0);
lean_inc(v_a_73_);
lean_dec_ref_known(v___x_72_, 1);
if (lean_obj_tag(v_a_73_) == 1)
{
lean_object* v_val_74_; lean_object* v_fst_75_; lean_object* v_snd_76_; lean_object* v___x_78_; uint8_t v_isShared_79_; uint8_t v_isSharedCheck_94_; 
lean_dec_ref(v_e_59_);
v_val_74_ = lean_ctor_get(v_a_73_, 0);
lean_inc(v_val_74_);
lean_dec_ref_known(v_a_73_, 1);
v_fst_75_ = lean_ctor_get(v_val_74_, 0);
v_snd_76_ = lean_ctor_get(v_val_74_, 1);
v_isSharedCheck_94_ = !lean_is_exclusive(v_val_74_);
if (v_isSharedCheck_94_ == 0)
{
v___x_78_ = v_val_74_;
v_isShared_79_ = v_isSharedCheck_94_;
goto v_resetjp_77_;
}
else
{
lean_inc(v_snd_76_);
lean_inc(v_fst_75_);
lean_dec(v_val_74_);
v___x_78_ = lean_box(0);
v_isShared_79_ = v_isSharedCheck_94_;
goto v_resetjp_77_;
}
v_resetjp_77_:
{
lean_object* v___x_80_; 
v___x_80_ = l_Lean_Meta_Grind_AC_reify(v_fst_75_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
if (lean_obj_tag(v___x_80_) == 0)
{
lean_object* v_a_81_; lean_object* v___x_82_; 
v_a_81_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_81_);
lean_dec_ref_known(v___x_80_, 1);
v___x_82_ = l_Lean_Meta_Grind_AC_reify(v_snd_76_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_85_; uint8_t v_isShared_86_; uint8_t v_isSharedCheck_93_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
v_isSharedCheck_93_ = !lean_is_exclusive(v___x_82_);
if (v_isSharedCheck_93_ == 0)
{
v___x_85_ = v___x_82_;
v_isShared_86_ = v_isSharedCheck_93_;
goto v_resetjp_84_;
}
else
{
lean_inc(v_a_83_);
lean_dec(v___x_82_);
v___x_85_ = lean_box(0);
v_isShared_86_ = v_isSharedCheck_93_;
goto v_resetjp_84_;
}
v_resetjp_84_:
{
lean_object* v___x_88_; 
if (v_isShared_79_ == 0)
{
lean_ctor_set_tag(v___x_78_, 1);
lean_ctor_set(v___x_78_, 1, v_a_83_);
lean_ctor_set(v___x_78_, 0, v_a_81_);
v___x_88_ = v___x_78_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v_a_81_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_a_83_);
v___x_88_ = v_reuseFailAlloc_92_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
lean_object* v___x_90_; 
if (v_isShared_86_ == 0)
{
lean_ctor_set(v___x_85_, 0, v___x_88_);
v___x_90_ = v___x_85_;
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
lean_dec(v_a_81_);
lean_del_object(v___x_78_);
return v___x_82_;
}
}
else
{
lean_del_object(v___x_78_);
lean_dec(v_snd_76_);
return v___x_80_;
}
}
}
else
{
lean_object* v___x_95_; 
lean_dec(v_a_73_);
v___x_95_ = l_Lean_Meta_Grind_AC_mkVar(v_e_59_, v_a_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_, v_a_65_, v_a_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
if (lean_obj_tag(v___x_95_) == 0)
{
lean_object* v_a_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_104_; 
v_a_96_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_104_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_104_ == 0)
{
v___x_98_ = v___x_95_;
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_a_96_);
lean_dec(v___x_95_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_104_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_102_; 
v___x_100_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_100_, 0, v_a_96_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 0, v___x_100_);
v___x_102_ = v___x_98_;
goto v_reusejp_101_;
}
else
{
lean_object* v_reuseFailAlloc_103_; 
v_reuseFailAlloc_103_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_103_, 0, v___x_100_);
v___x_102_ = v_reuseFailAlloc_103_;
goto v_reusejp_101_;
}
v_reusejp_101_:
{
return v___x_102_;
}
}
}
else
{
lean_object* v_a_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_112_; 
v_a_105_ = lean_ctor_get(v___x_95_, 0);
v_isSharedCheck_112_ = !lean_is_exclusive(v___x_95_);
if (v_isSharedCheck_112_ == 0)
{
v___x_107_ = v___x_95_;
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_a_105_);
lean_dec(v___x_95_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_112_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_110_; 
if (v_isShared_108_ == 0)
{
v___x_110_ = v___x_107_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_a_105_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
}
else
{
lean_object* v_a_113_; lean_object* v___x_115_; uint8_t v_isShared_116_; uint8_t v_isSharedCheck_120_; 
lean_dec_ref(v_e_59_);
v_a_113_ = lean_ctor_get(v___x_72_, 0);
v_isSharedCheck_120_ = !lean_is_exclusive(v___x_72_);
if (v_isSharedCheck_120_ == 0)
{
v___x_115_ = v___x_72_;
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
else
{
lean_inc(v_a_113_);
lean_dec(v___x_72_);
v___x_115_ = lean_box(0);
v_isShared_116_ = v_isSharedCheck_120_;
goto v_resetjp_114_;
}
v_resetjp_114_:
{
lean_object* v___x_118_; 
if (v_isShared_116_ == 0)
{
v___x_118_ = v___x_115_;
goto v_reusejp_117_;
}
else
{
lean_object* v_reuseFailAlloc_119_; 
v_reuseFailAlloc_119_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_119_, 0, v_a_113_);
v___x_118_ = v_reuseFailAlloc_119_;
goto v_reusejp_117_;
}
v_reusejp_117_:
{
return v___x_118_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_reify___boxed(lean_object* v_e_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_, lean_object* v_a_125_, lean_object* v_a_126_, lean_object* v_a_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_, lean_object* v_a_131_, lean_object* v_a_132_, lean_object* v_a_133_){
_start:
{
lean_object* v_res_134_; 
v_res_134_ = l_Lean_Meta_Grind_AC_reify(v_e_121_, v_a_122_, v_a_123_, v_a_124_, v_a_125_, v_a_126_, v_a_127_, v_a_128_, v_a_129_, v_a_130_, v_a_131_, v_a_132_);
lean_dec(v_a_132_);
lean_dec_ref(v_a_131_);
lean_dec(v_a_130_);
lean_dec_ref(v_a_129_);
lean_dec(v_a_128_);
lean_dec_ref(v_a_127_);
lean_dec(v_a_126_);
lean_dec_ref(v_a_125_);
lean_dec(v_a_124_);
lean_dec(v_a_123_);
lean_dec(v_a_122_);
return v_res_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(lean_object* v_x_135_, lean_object* v_x_136_, lean_object* v_x_137_, lean_object* v_x_138_){
_start:
{
lean_object* v_ks_139_; lean_object* v_vs_140_; lean_object* v___x_142_; uint8_t v_isShared_143_; uint8_t v_isSharedCheck_166_; 
v_ks_139_ = lean_ctor_get(v_x_135_, 0);
v_vs_140_ = lean_ctor_get(v_x_135_, 1);
v_isSharedCheck_166_ = !lean_is_exclusive(v_x_135_);
if (v_isSharedCheck_166_ == 0)
{
v___x_142_ = v_x_135_;
v_isShared_143_ = v_isSharedCheck_166_;
goto v_resetjp_141_;
}
else
{
lean_inc(v_vs_140_);
lean_inc(v_ks_139_);
lean_dec(v_x_135_);
v___x_142_ = lean_box(0);
v_isShared_143_ = v_isSharedCheck_166_;
goto v_resetjp_141_;
}
v_resetjp_141_:
{
lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_144_ = lean_array_get_size(v_ks_139_);
v___x_145_ = lean_nat_dec_lt(v_x_136_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_149_; 
lean_dec(v_x_136_);
v___x_146_ = lean_array_push(v_ks_139_, v_x_137_);
v___x_147_ = lean_array_push(v_vs_140_, v_x_138_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 1, v___x_147_);
lean_ctor_set(v___x_142_, 0, v___x_146_);
v___x_149_ = v___x_142_;
goto v_reusejp_148_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_146_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v___x_147_);
v___x_149_ = v_reuseFailAlloc_150_;
goto v_reusejp_148_;
}
v_reusejp_148_:
{
return v___x_149_;
}
}
else
{
lean_object* v_k_x27_151_; size_t v___x_152_; size_t v___x_153_; uint8_t v___x_154_; 
v_k_x27_151_ = lean_array_fget_borrowed(v_ks_139_, v_x_136_);
v___x_152_ = lean_ptr_addr(v_x_137_);
v___x_153_ = lean_ptr_addr(v_k_x27_151_);
v___x_154_ = lean_usize_dec_eq(v___x_152_, v___x_153_);
if (v___x_154_ == 0)
{
lean_object* v___x_156_; 
if (v_isShared_143_ == 0)
{
v___x_156_ = v___x_142_;
goto v_reusejp_155_;
}
else
{
lean_object* v_reuseFailAlloc_160_; 
v_reuseFailAlloc_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_160_, 0, v_ks_139_);
lean_ctor_set(v_reuseFailAlloc_160_, 1, v_vs_140_);
v___x_156_ = v_reuseFailAlloc_160_;
goto v_reusejp_155_;
}
v_reusejp_155_:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(1u);
v___x_158_ = lean_nat_add(v_x_136_, v___x_157_);
lean_dec(v_x_136_);
v_x_135_ = v___x_156_;
v_x_136_ = v___x_158_;
goto _start;
}
}
else
{
lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_164_; 
v___x_161_ = lean_array_fset(v_ks_139_, v_x_136_, v_x_137_);
v___x_162_ = lean_array_fset(v_vs_140_, v_x_136_, v_x_138_);
lean_dec(v_x_136_);
if (v_isShared_143_ == 0)
{
lean_ctor_set(v___x_142_, 1, v___x_162_);
lean_ctor_set(v___x_142_, 0, v___x_161_);
v___x_164_ = v___x_142_;
goto v_reusejp_163_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_161_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___x_162_);
v___x_164_ = v_reuseFailAlloc_165_;
goto v_reusejp_163_;
}
v_reusejp_163_:
{
return v___x_164_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(lean_object* v_n_167_, lean_object* v_k_168_, lean_object* v_v_169_){
_start:
{
lean_object* v___x_170_; lean_object* v___x_171_; 
v___x_170_ = lean_unsigned_to_nat(0u);
v___x_171_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(v_n_167_, v___x_170_, v_k_168_, v_v_169_);
return v___x_171_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_172_; 
v___x_172_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(lean_object* v_x_173_, size_t v_x_174_, size_t v_x_175_, lean_object* v_x_176_, lean_object* v_x_177_){
_start:
{
if (lean_obj_tag(v_x_173_) == 0)
{
lean_object* v_es_178_; size_t v___x_179_; size_t v___x_180_; lean_object* v_j_181_; lean_object* v___x_182_; uint8_t v___x_183_; 
v_es_178_ = lean_ctor_get(v_x_173_, 0);
v___x_179_ = ((size_t)31ULL);
v___x_180_ = lean_usize_land(v_x_174_, v___x_179_);
v_j_181_ = lean_usize_to_nat(v___x_180_);
v___x_182_ = lean_array_get_size(v_es_178_);
v___x_183_ = lean_nat_dec_lt(v_j_181_, v___x_182_);
if (v___x_183_ == 0)
{
lean_dec(v_j_181_);
lean_dec(v_x_177_);
lean_dec_ref(v_x_176_);
return v_x_173_;
}
else
{
lean_object* v___x_185_; uint8_t v_isShared_186_; uint8_t v_isSharedCheck_224_; 
lean_inc_ref(v_es_178_);
v_isSharedCheck_224_ = !lean_is_exclusive(v_x_173_);
if (v_isSharedCheck_224_ == 0)
{
lean_object* v_unused_225_; 
v_unused_225_ = lean_ctor_get(v_x_173_, 0);
lean_dec(v_unused_225_);
v___x_185_ = v_x_173_;
v_isShared_186_ = v_isSharedCheck_224_;
goto v_resetjp_184_;
}
else
{
lean_dec(v_x_173_);
v___x_185_ = lean_box(0);
v_isShared_186_ = v_isSharedCheck_224_;
goto v_resetjp_184_;
}
v_resetjp_184_:
{
lean_object* v_v_187_; lean_object* v___x_188_; lean_object* v_xs_x27_189_; lean_object* v___y_191_; 
v_v_187_ = lean_array_fget(v_es_178_, v_j_181_);
v___x_188_ = lean_box(0);
v_xs_x27_189_ = lean_array_fset(v_es_178_, v_j_181_, v___x_188_);
switch(lean_obj_tag(v_v_187_))
{
case 0:
{
lean_object* v_key_196_; lean_object* v_val_197_; lean_object* v___x_199_; uint8_t v_isShared_200_; uint8_t v_isSharedCheck_209_; 
v_key_196_ = lean_ctor_get(v_v_187_, 0);
v_val_197_ = lean_ctor_get(v_v_187_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v_v_187_);
if (v_isSharedCheck_209_ == 0)
{
v___x_199_ = v_v_187_;
v_isShared_200_ = v_isSharedCheck_209_;
goto v_resetjp_198_;
}
else
{
lean_inc(v_val_197_);
lean_inc(v_key_196_);
lean_dec(v_v_187_);
v___x_199_ = lean_box(0);
v_isShared_200_ = v_isSharedCheck_209_;
goto v_resetjp_198_;
}
v_resetjp_198_:
{
size_t v___x_201_; size_t v___x_202_; uint8_t v___x_203_; 
v___x_201_ = lean_ptr_addr(v_x_176_);
v___x_202_ = lean_ptr_addr(v_key_196_);
v___x_203_ = lean_usize_dec_eq(v___x_201_, v___x_202_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; lean_object* v___x_205_; 
lean_del_object(v___x_199_);
v___x_204_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_196_, v_val_197_, v_x_176_, v_x_177_);
v___x_205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
v___y_191_ = v___x_205_;
goto v___jp_190_;
}
else
{
lean_object* v___x_207_; 
lean_dec(v_val_197_);
lean_dec(v_key_196_);
if (v_isShared_200_ == 0)
{
lean_ctor_set(v___x_199_, 1, v_x_177_);
lean_ctor_set(v___x_199_, 0, v_x_176_);
v___x_207_ = v___x_199_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_x_176_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_x_177_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
v___y_191_ = v___x_207_;
goto v___jp_190_;
}
}
}
}
case 1:
{
lean_object* v_node_210_; lean_object* v___x_212_; uint8_t v_isShared_213_; uint8_t v_isSharedCheck_222_; 
v_node_210_ = lean_ctor_get(v_v_187_, 0);
v_isSharedCheck_222_ = !lean_is_exclusive(v_v_187_);
if (v_isSharedCheck_222_ == 0)
{
v___x_212_ = v_v_187_;
v_isShared_213_ = v_isSharedCheck_222_;
goto v_resetjp_211_;
}
else
{
lean_inc(v_node_210_);
lean_dec(v_v_187_);
v___x_212_ = lean_box(0);
v_isShared_213_ = v_isSharedCheck_222_;
goto v_resetjp_211_;
}
v_resetjp_211_:
{
size_t v___x_214_; size_t v___x_215_; size_t v___x_216_; size_t v___x_217_; lean_object* v___x_218_; lean_object* v___x_220_; 
v___x_214_ = ((size_t)5ULL);
v___x_215_ = lean_usize_shift_right(v_x_174_, v___x_214_);
v___x_216_ = ((size_t)1ULL);
v___x_217_ = lean_usize_add(v_x_175_, v___x_216_);
v___x_218_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_node_210_, v___x_215_, v___x_217_, v_x_176_, v_x_177_);
if (v_isShared_213_ == 0)
{
lean_ctor_set(v___x_212_, 0, v___x_218_);
v___x_220_ = v___x_212_;
goto v_reusejp_219_;
}
else
{
lean_object* v_reuseFailAlloc_221_; 
v_reuseFailAlloc_221_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_221_, 0, v___x_218_);
v___x_220_ = v_reuseFailAlloc_221_;
goto v_reusejp_219_;
}
v_reusejp_219_:
{
v___y_191_ = v___x_220_;
goto v___jp_190_;
}
}
}
default: 
{
lean_object* v___x_223_; 
v___x_223_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_223_, 0, v_x_176_);
lean_ctor_set(v___x_223_, 1, v_x_177_);
v___y_191_ = v___x_223_;
goto v___jp_190_;
}
}
v___jp_190_:
{
lean_object* v___x_192_; lean_object* v___x_194_; 
v___x_192_ = lean_array_fset(v_xs_x27_189_, v_j_181_, v___y_191_);
lean_dec(v_j_181_);
if (v_isShared_186_ == 0)
{
lean_ctor_set(v___x_185_, 0, v___x_192_);
v___x_194_ = v___x_185_;
goto v_reusejp_193_;
}
else
{
lean_object* v_reuseFailAlloc_195_; 
v_reuseFailAlloc_195_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_195_, 0, v___x_192_);
v___x_194_ = v_reuseFailAlloc_195_;
goto v_reusejp_193_;
}
v_reusejp_193_:
{
return v___x_194_;
}
}
}
}
}
else
{
lean_object* v_ks_226_; lean_object* v_vs_227_; lean_object* v___x_229_; uint8_t v_isShared_230_; uint8_t v_isSharedCheck_245_; 
v_ks_226_ = lean_ctor_get(v_x_173_, 0);
v_vs_227_ = lean_ctor_get(v_x_173_, 1);
v_isSharedCheck_245_ = !lean_is_exclusive(v_x_173_);
if (v_isSharedCheck_245_ == 0)
{
v___x_229_ = v_x_173_;
v_isShared_230_ = v_isSharedCheck_245_;
goto v_resetjp_228_;
}
else
{
lean_inc(v_vs_227_);
lean_inc(v_ks_226_);
lean_dec(v_x_173_);
v___x_229_ = lean_box(0);
v_isShared_230_ = v_isSharedCheck_245_;
goto v_resetjp_228_;
}
v_resetjp_228_:
{
lean_object* v___x_232_; 
if (v_isShared_230_ == 0)
{
v___x_232_ = v___x_229_;
goto v_reusejp_231_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_ks_226_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v_vs_227_);
v___x_232_ = v_reuseFailAlloc_244_;
goto v_reusejp_231_;
}
v_reusejp_231_:
{
lean_object* v_newNode_233_; size_t v___x_234_; uint8_t v___x_235_; 
v_newNode_233_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(v___x_232_, v_x_176_, v_x_177_);
v___x_234_ = ((size_t)7ULL);
v___x_235_ = lean_usize_dec_le(v___x_234_, v_x_175_);
if (v___x_235_ == 0)
{
lean_object* v___x_236_; lean_object* v___x_237_; uint8_t v___x_238_; 
v___x_236_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_233_);
v___x_237_ = lean_unsigned_to_nat(4u);
v___x_238_ = lean_nat_dec_lt(v___x_236_, v___x_237_);
lean_dec(v___x_236_);
if (v___x_238_ == 0)
{
lean_object* v_ks_239_; lean_object* v_vs_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_ks_239_ = lean_ctor_get(v_newNode_233_, 0);
lean_inc_ref(v_ks_239_);
v_vs_240_ = lean_ctor_get(v_newNode_233_, 1);
lean_inc_ref(v_vs_240_);
lean_dec_ref(v_newNode_233_);
v___x_241_ = lean_unsigned_to_nat(0u);
v___x_242_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___closed__0);
v___x_243_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(v_x_175_, v_ks_239_, v_vs_240_, v___x_241_, v___x_242_);
lean_dec_ref(v_vs_240_);
lean_dec_ref(v_ks_239_);
return v___x_243_;
}
else
{
return v_newNode_233_;
}
}
else
{
return v_newNode_233_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(size_t v_depth_246_, lean_object* v_keys_247_, lean_object* v_vals_248_, lean_object* v_i_249_, lean_object* v_entries_250_){
_start:
{
lean_object* v___x_251_; uint8_t v___x_252_; 
v___x_251_ = lean_array_get_size(v_keys_247_);
v___x_252_ = lean_nat_dec_lt(v_i_249_, v___x_251_);
if (v___x_252_ == 0)
{
lean_dec(v_i_249_);
return v_entries_250_;
}
else
{
lean_object* v_k_253_; lean_object* v_v_254_; size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; uint64_t v___x_258_; size_t v_h_259_; size_t v___x_260_; lean_object* v___x_261_; size_t v___x_262_; size_t v___x_263_; size_t v___x_264_; size_t v_h_265_; lean_object* v___x_266_; lean_object* v___x_267_; 
v_k_253_ = lean_array_fget_borrowed(v_keys_247_, v_i_249_);
v_v_254_ = lean_array_fget_borrowed(v_vals_248_, v_i_249_);
v___x_255_ = lean_ptr_addr(v_k_253_);
v___x_256_ = ((size_t)3ULL);
v___x_257_ = lean_usize_shift_right(v___x_255_, v___x_256_);
v___x_258_ = lean_usize_to_uint64(v___x_257_);
v_h_259_ = lean_uint64_to_usize(v___x_258_);
v___x_260_ = ((size_t)5ULL);
v___x_261_ = lean_unsigned_to_nat(1u);
v___x_262_ = ((size_t)1ULL);
v___x_263_ = lean_usize_sub(v_depth_246_, v___x_262_);
v___x_264_ = lean_usize_mul(v___x_260_, v___x_263_);
v_h_265_ = lean_usize_shift_right(v_h_259_, v___x_264_);
v___x_266_ = lean_nat_add(v_i_249_, v___x_261_);
lean_dec(v_i_249_);
lean_inc(v_v_254_);
lean_inc(v_k_253_);
v___x_267_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_entries_250_, v_h_265_, v_depth_246_, v_k_253_, v_v_254_);
v_i_249_ = v___x_266_;
v_entries_250_ = v___x_267_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_269_, lean_object* v_keys_270_, lean_object* v_vals_271_, lean_object* v_i_272_, lean_object* v_entries_273_){
_start:
{
size_t v_depth_boxed_274_; lean_object* v_res_275_; 
v_depth_boxed_274_ = lean_unbox_usize(v_depth_269_);
lean_dec(v_depth_269_);
v_res_275_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(v_depth_boxed_274_, v_keys_270_, v_vals_271_, v_i_272_, v_entries_273_);
lean_dec_ref(v_vals_271_);
lean_dec_ref(v_keys_270_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg___boxed(lean_object* v_x_276_, lean_object* v_x_277_, lean_object* v_x_278_, lean_object* v_x_279_, lean_object* v_x_280_){
_start:
{
size_t v_x_43658__boxed_281_; size_t v_x_43659__boxed_282_; lean_object* v_res_283_; 
v_x_43658__boxed_281_ = lean_unbox_usize(v_x_277_);
lean_dec(v_x_277_);
v_x_43659__boxed_282_ = lean_unbox_usize(v_x_278_);
lean_dec(v_x_278_);
v_res_283_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_x_276_, v_x_43658__boxed_281_, v_x_43659__boxed_282_, v_x_279_, v_x_280_);
return v_res_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(lean_object* v_x_284_, lean_object* v_x_285_, lean_object* v_x_286_){
_start:
{
size_t v___x_287_; size_t v___x_288_; size_t v___x_289_; uint64_t v___x_290_; size_t v___x_291_; size_t v___x_292_; lean_object* v___x_293_; 
v___x_287_ = lean_ptr_addr(v_x_285_);
v___x_288_ = ((size_t)3ULL);
v___x_289_ = lean_usize_shift_right(v___x_287_, v___x_288_);
v___x_290_ = lean_usize_to_uint64(v___x_289_);
v___x_291_ = lean_uint64_to_usize(v___x_290_);
v___x_292_ = ((size_t)1ULL);
v___x_293_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_x_284_, v___x_291_, v___x_292_, v_x_285_, v_x_286_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0(lean_object* v_e_294_, lean_object* v_a_295_, uint8_t v___x_296_, lean_object* v_s_297_){
_start:
{
lean_object* v_id_298_; lean_object* v_type_299_; lean_object* v_u_300_; lean_object* v_op_301_; lean_object* v_neutral_x3f_302_; lean_object* v_assocInst_303_; lean_object* v_idempotentInst_x3f_304_; lean_object* v_commInst_x3f_305_; lean_object* v_neutralInst_x3f_306_; lean_object* v_nextId_307_; lean_object* v_vars_308_; lean_object* v_varMap_309_; lean_object* v_denote_310_; lean_object* v_denoteEntries_311_; lean_object* v_queue_312_; lean_object* v_basis_313_; lean_object* v_diseqs_314_; lean_object* v___x_316_; uint8_t v_isShared_317_; uint8_t v_isSharedCheck_324_; 
v_id_298_ = lean_ctor_get(v_s_297_, 0);
v_type_299_ = lean_ctor_get(v_s_297_, 1);
v_u_300_ = lean_ctor_get(v_s_297_, 2);
v_op_301_ = lean_ctor_get(v_s_297_, 3);
v_neutral_x3f_302_ = lean_ctor_get(v_s_297_, 4);
v_assocInst_303_ = lean_ctor_get(v_s_297_, 5);
v_idempotentInst_x3f_304_ = lean_ctor_get(v_s_297_, 6);
v_commInst_x3f_305_ = lean_ctor_get(v_s_297_, 7);
v_neutralInst_x3f_306_ = lean_ctor_get(v_s_297_, 8);
v_nextId_307_ = lean_ctor_get(v_s_297_, 9);
v_vars_308_ = lean_ctor_get(v_s_297_, 10);
v_varMap_309_ = lean_ctor_get(v_s_297_, 11);
v_denote_310_ = lean_ctor_get(v_s_297_, 12);
v_denoteEntries_311_ = lean_ctor_get(v_s_297_, 13);
v_queue_312_ = lean_ctor_get(v_s_297_, 14);
v_basis_313_ = lean_ctor_get(v_s_297_, 15);
v_diseqs_314_ = lean_ctor_get(v_s_297_, 16);
v_isSharedCheck_324_ = !lean_is_exclusive(v_s_297_);
if (v_isSharedCheck_324_ == 0)
{
v___x_316_ = v_s_297_;
v_isShared_317_ = v_isSharedCheck_324_;
goto v_resetjp_315_;
}
else
{
lean_inc(v_diseqs_314_);
lean_inc(v_basis_313_);
lean_inc(v_queue_312_);
lean_inc(v_denoteEntries_311_);
lean_inc(v_denote_310_);
lean_inc(v_varMap_309_);
lean_inc(v_vars_308_);
lean_inc(v_nextId_307_);
lean_inc(v_neutralInst_x3f_306_);
lean_inc(v_commInst_x3f_305_);
lean_inc(v_idempotentInst_x3f_304_);
lean_inc(v_assocInst_303_);
lean_inc(v_neutral_x3f_302_);
lean_inc(v_op_301_);
lean_inc(v_u_300_);
lean_inc(v_type_299_);
lean_inc(v_id_298_);
lean_dec(v_s_297_);
v___x_316_ = lean_box(0);
v_isShared_317_ = v_isSharedCheck_324_;
goto v_resetjp_315_;
}
v_resetjp_315_:
{
lean_object* v___x_318_; lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
lean_inc_ref(v_a_295_);
lean_inc_ref(v_e_294_);
v___x_318_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(v_denote_310_, v_e_294_, v_a_295_);
v___x_319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_319_, 0, v_e_294_);
lean_ctor_set(v___x_319_, 1, v_a_295_);
v___x_320_ = l_Lean_PersistentArray_push___redArg(v_denoteEntries_311_, v___x_319_);
if (v_isShared_317_ == 0)
{
lean_ctor_set(v___x_316_, 13, v___x_320_);
lean_ctor_set(v___x_316_, 12, v___x_318_);
v___x_322_ = v___x_316_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 17, 1);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_id_298_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v_type_299_);
lean_ctor_set(v_reuseFailAlloc_323_, 2, v_u_300_);
lean_ctor_set(v_reuseFailAlloc_323_, 3, v_op_301_);
lean_ctor_set(v_reuseFailAlloc_323_, 4, v_neutral_x3f_302_);
lean_ctor_set(v_reuseFailAlloc_323_, 5, v_assocInst_303_);
lean_ctor_set(v_reuseFailAlloc_323_, 6, v_idempotentInst_x3f_304_);
lean_ctor_set(v_reuseFailAlloc_323_, 7, v_commInst_x3f_305_);
lean_ctor_set(v_reuseFailAlloc_323_, 8, v_neutralInst_x3f_306_);
lean_ctor_set(v_reuseFailAlloc_323_, 9, v_nextId_307_);
lean_ctor_set(v_reuseFailAlloc_323_, 10, v_vars_308_);
lean_ctor_set(v_reuseFailAlloc_323_, 11, v_varMap_309_);
lean_ctor_set(v_reuseFailAlloc_323_, 12, v___x_318_);
lean_ctor_set(v_reuseFailAlloc_323_, 13, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_323_, 14, v_queue_312_);
lean_ctor_set(v_reuseFailAlloc_323_, 15, v_basis_313_);
lean_ctor_set(v_reuseFailAlloc_323_, 16, v_diseqs_314_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
lean_ctor_set_uint8(v___x_322_, sizeof(void*)*17, v___x_296_);
return v___x_322_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___lam__0___boxed(lean_object* v_e_325_, lean_object* v_a_326_, lean_object* v___x_327_, lean_object* v_s_328_){
_start:
{
uint8_t v___x_43837__boxed_329_; lean_object* v_res_330_; 
v___x_43837__boxed_329_ = lean_unbox(v___x_327_);
v_res_330_ = l_Lean_Meta_Grind_AC_internalize___lam__0(v_e_325_, v_a_326_, v___x_43837__boxed_329_, v_s_328_);
return v_res_330_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(lean_object* v_msgData_331_, lean_object* v___y_332_, lean_object* v___y_333_, lean_object* v___y_334_, lean_object* v___y_335_){
_start:
{
lean_object* v___x_337_; lean_object* v_env_338_; uint8_t v___x_339_; lean_object* v_env_340_; lean_object* v___x_341_; lean_object* v_toCold_342_; lean_object* v_mctx_343_; lean_object* v_lctx_344_; lean_object* v_options_345_; lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_337_ = lean_st_ref_get(v___y_335_);
v_env_338_ = lean_ctor_get(v___x_337_, 0);
lean_inc_ref(v_env_338_);
lean_dec(v___x_337_);
v___x_339_ = 0;
v_env_340_ = l_Lean_Environment_setRecordingDeps(v_env_338_, v___x_339_);
v___x_341_ = lean_st_ref_get(v___y_333_);
v_toCold_342_ = lean_ctor_get(v___y_334_, 0);
v_mctx_343_ = lean_ctor_get(v___x_341_, 0);
lean_inc_ref(v_mctx_343_);
lean_dec(v___x_341_);
v_lctx_344_ = lean_ctor_get(v___y_332_, 2);
v_options_345_ = lean_ctor_get(v_toCold_342_, 2);
lean_inc_ref(v_options_345_);
lean_inc_ref(v_lctx_344_);
v___x_346_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_346_, 0, v_env_340_);
lean_ctor_set(v___x_346_, 1, v_mctx_343_);
lean_ctor_set(v___x_346_, 2, v_lctx_344_);
lean_ctor_set(v___x_346_, 3, v_options_345_);
v___x_347_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_347_, 0, v___x_346_);
lean_ctor_set(v___x_347_, 1, v_msgData_331_);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5___boxed(lean_object* v_msgData_349_, lean_object* v___y_350_, lean_object* v___y_351_, lean_object* v___y_352_, lean_object* v___y_353_, lean_object* v___y_354_){
_start:
{
lean_object* v_res_355_; 
v_res_355_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(v_msgData_349_, v___y_350_, v___y_351_, v___y_352_, v___y_353_);
lean_dec(v___y_353_);
lean_dec_ref(v___y_352_);
lean_dec(v___y_351_);
lean_dec_ref(v___y_350_);
return v_res_355_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0(void){
_start:
{
lean_object* v___x_356_; double v___x_357_; 
v___x_356_ = lean_unsigned_to_nat(0u);
v___x_357_ = lean_float_of_nat(v___x_356_);
return v___x_357_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(lean_object* v_cls_361_, lean_object* v_msg_362_, lean_object* v___y_363_, lean_object* v___y_364_, lean_object* v___y_365_, lean_object* v___y_366_){
_start:
{
lean_object* v_ref_368_; lean_object* v___x_369_; lean_object* v_a_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_415_; 
v_ref_368_ = lean_ctor_get(v___y_365_, 2);
v___x_369_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3_spec__5(v_msg_362_, v___y_363_, v___y_364_, v___y_365_, v___y_366_);
v_a_370_ = lean_ctor_get(v___x_369_, 0);
v_isSharedCheck_415_ = !lean_is_exclusive(v___x_369_);
if (v_isSharedCheck_415_ == 0)
{
v___x_372_ = v___x_369_;
v_isShared_373_ = v_isSharedCheck_415_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_a_370_);
lean_dec(v___x_369_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_415_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v_traceState_375_; lean_object* v_env_376_; lean_object* v_nextMacroScope_377_; lean_object* v_ngen_378_; lean_object* v_auxDeclNGen_379_; lean_object* v_cache_380_; lean_object* v_recordedDeps_381_; lean_object* v_messages_382_; lean_object* v_infoState_383_; lean_object* v_snapshotTasks_384_; lean_object* v___x_386_; uint8_t v_isShared_387_; uint8_t v_isSharedCheck_414_; 
v___x_374_ = lean_st_ref_take(v___y_366_);
v_traceState_375_ = lean_ctor_get(v___x_374_, 4);
v_env_376_ = lean_ctor_get(v___x_374_, 0);
v_nextMacroScope_377_ = lean_ctor_get(v___x_374_, 1);
v_ngen_378_ = lean_ctor_get(v___x_374_, 2);
v_auxDeclNGen_379_ = lean_ctor_get(v___x_374_, 3);
v_cache_380_ = lean_ctor_get(v___x_374_, 5);
v_recordedDeps_381_ = lean_ctor_get(v___x_374_, 6);
v_messages_382_ = lean_ctor_get(v___x_374_, 7);
v_infoState_383_ = lean_ctor_get(v___x_374_, 8);
v_snapshotTasks_384_ = lean_ctor_get(v___x_374_, 9);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_374_);
if (v_isSharedCheck_414_ == 0)
{
v___x_386_ = v___x_374_;
v_isShared_387_ = v_isSharedCheck_414_;
goto v_resetjp_385_;
}
else
{
lean_inc(v_snapshotTasks_384_);
lean_inc(v_infoState_383_);
lean_inc(v_messages_382_);
lean_inc(v_recordedDeps_381_);
lean_inc(v_cache_380_);
lean_inc(v_traceState_375_);
lean_inc(v_auxDeclNGen_379_);
lean_inc(v_ngen_378_);
lean_inc(v_nextMacroScope_377_);
lean_inc(v_env_376_);
lean_dec(v___x_374_);
v___x_386_ = lean_box(0);
v_isShared_387_ = v_isSharedCheck_414_;
goto v_resetjp_385_;
}
v_resetjp_385_:
{
uint64_t v_tid_388_; lean_object* v_traces_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_413_; 
v_tid_388_ = lean_ctor_get_uint64(v_traceState_375_, sizeof(void*)*1);
v_traces_389_ = lean_ctor_get(v_traceState_375_, 0);
v_isSharedCheck_413_ = !lean_is_exclusive(v_traceState_375_);
if (v_isSharedCheck_413_ == 0)
{
v___x_391_ = v_traceState_375_;
v_isShared_392_ = v_isSharedCheck_413_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_traces_389_);
lean_dec(v_traceState_375_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_413_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; double v___x_395_; uint8_t v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_393_ = lean_box(0);
v___x_394_ = lean_box(0);
v___x_395_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__0);
v___x_396_ = 0;
v___x_397_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__1));
v___x_398_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_398_, 0, v_cls_361_);
lean_ctor_set(v___x_398_, 1, v___x_394_);
lean_ctor_set(v___x_398_, 2, v___x_397_);
lean_ctor_set_float(v___x_398_, sizeof(void*)*3, v___x_395_);
lean_ctor_set_float(v___x_398_, sizeof(void*)*3 + 8, v___x_395_);
lean_ctor_set_uint8(v___x_398_, sizeof(void*)*3 + 16, v___x_396_);
v___x_399_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___closed__2));
v___x_400_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_400_, 0, v___x_398_);
lean_ctor_set(v___x_400_, 1, v_a_370_);
lean_ctor_set(v___x_400_, 2, v___x_399_);
lean_inc(v_ref_368_);
v___x_401_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_401_, 0, v_ref_368_);
lean_ctor_set(v___x_401_, 1, v___x_400_);
v___x_402_ = l_Lean_PersistentArray_push___redArg(v_traces_389_, v___x_401_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 0, v___x_402_);
v___x_404_ = v___x_391_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_412_; 
v_reuseFailAlloc_412_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_412_, 0, v___x_402_);
lean_ctor_set_uint64(v_reuseFailAlloc_412_, sizeof(void*)*1, v_tid_388_);
v___x_404_ = v_reuseFailAlloc_412_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
lean_object* v___x_406_; 
if (v_isShared_387_ == 0)
{
lean_ctor_set(v___x_386_, 4, v___x_404_);
v___x_406_ = v___x_386_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_411_; 
v_reuseFailAlloc_411_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_411_, 0, v_env_376_);
lean_ctor_set(v_reuseFailAlloc_411_, 1, v_nextMacroScope_377_);
lean_ctor_set(v_reuseFailAlloc_411_, 2, v_ngen_378_);
lean_ctor_set(v_reuseFailAlloc_411_, 3, v_auxDeclNGen_379_);
lean_ctor_set(v_reuseFailAlloc_411_, 4, v___x_404_);
lean_ctor_set(v_reuseFailAlloc_411_, 5, v_cache_380_);
lean_ctor_set(v_reuseFailAlloc_411_, 6, v_recordedDeps_381_);
lean_ctor_set(v_reuseFailAlloc_411_, 7, v_messages_382_);
lean_ctor_set(v_reuseFailAlloc_411_, 8, v_infoState_383_);
lean_ctor_set(v_reuseFailAlloc_411_, 9, v_snapshotTasks_384_);
v___x_406_ = v_reuseFailAlloc_411_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_407_; lean_object* v___x_409_; 
v___x_407_ = lean_st_ref_put(v___y_366_, v___x_406_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_393_);
v___x_409_ = v___x_372_;
goto v_reusejp_408_;
}
else
{
lean_object* v_reuseFailAlloc_410_; 
v_reuseFailAlloc_410_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_410_, 0, v___x_393_);
v___x_409_ = v_reuseFailAlloc_410_;
goto v_reusejp_408_;
}
v_reusejp_408_:
{
return v___x_409_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg___boxed(lean_object* v_cls_416_, lean_object* v_msg_417_, lean_object* v___y_418_, lean_object* v___y_419_, lean_object* v___y_420_, lean_object* v___y_421_, lean_object* v___y_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(v_cls_416_, v_msg_417_, v___y_418_, v___y_419_, v___y_420_, v___y_421_);
lean_dec(v___y_421_);
lean_dec_ref(v___y_420_);
lean_dec(v___y_419_);
lean_dec_ref(v___y_418_);
return v_res_423_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_424_, lean_object* v_i_425_, lean_object* v_k_426_){
_start:
{
lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_427_ = lean_array_get_size(v_keys_424_);
v___x_428_ = lean_nat_dec_lt(v_i_425_, v___x_427_);
if (v___x_428_ == 0)
{
lean_dec(v_i_425_);
return v___x_428_;
}
else
{
lean_object* v_k_x27_429_; size_t v___x_430_; size_t v___x_431_; uint8_t v___x_432_; 
v_k_x27_429_ = lean_array_fget_borrowed(v_keys_424_, v_i_425_);
v___x_430_ = lean_ptr_addr(v_k_426_);
v___x_431_ = lean_ptr_addr(v_k_x27_429_);
v___x_432_ = lean_usize_dec_eq(v___x_430_, v___x_431_);
if (v___x_432_ == 0)
{
lean_object* v___x_433_; lean_object* v___x_434_; 
v___x_433_ = lean_unsigned_to_nat(1u);
v___x_434_ = lean_nat_add(v_i_425_, v___x_433_);
lean_dec(v_i_425_);
v_i_425_ = v___x_434_;
goto _start;
}
else
{
lean_dec(v_i_425_);
return v___x_428_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_436_, lean_object* v_i_437_, lean_object* v_k_438_){
_start:
{
uint8_t v_res_439_; lean_object* v_r_440_; 
v_res_439_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(v_keys_436_, v_i_437_, v_k_438_);
lean_dec_ref(v_k_438_);
lean_dec_ref(v_keys_436_);
v_r_440_ = lean_box(v_res_439_);
return v_r_440_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(lean_object* v_x_441_, size_t v_x_442_, lean_object* v_x_443_){
_start:
{
if (lean_obj_tag(v_x_441_) == 0)
{
lean_object* v_es_444_; lean_object* v___x_445_; size_t v___x_446_; size_t v___x_447_; lean_object* v_j_448_; lean_object* v___x_449_; 
v_es_444_ = lean_ctor_get(v_x_441_, 0);
v___x_445_ = lean_box(2);
v___x_446_ = ((size_t)31ULL);
v___x_447_ = lean_usize_land(v_x_442_, v___x_446_);
v_j_448_ = lean_usize_to_nat(v___x_447_);
v___x_449_ = lean_array_get_borrowed(v___x_445_, v_es_444_, v_j_448_);
lean_dec(v_j_448_);
switch(lean_obj_tag(v___x_449_))
{
case 0:
{
lean_object* v_key_450_; size_t v___x_451_; size_t v___x_452_; uint8_t v___x_453_; 
v_key_450_ = lean_ctor_get(v___x_449_, 0);
v___x_451_ = lean_ptr_addr(v_x_443_);
v___x_452_ = lean_ptr_addr(v_key_450_);
v___x_453_ = lean_usize_dec_eq(v___x_451_, v___x_452_);
return v___x_453_;
}
case 1:
{
lean_object* v_node_454_; size_t v___x_455_; size_t v___x_456_; 
v_node_454_ = lean_ctor_get(v___x_449_, 0);
v___x_455_ = ((size_t)5ULL);
v___x_456_ = lean_usize_shift_right(v_x_442_, v___x_455_);
v_x_441_ = v_node_454_;
v_x_442_ = v___x_456_;
goto _start;
}
default: 
{
uint8_t v___x_458_; 
v___x_458_ = 0;
return v___x_458_;
}
}
}
else
{
lean_object* v_ks_459_; lean_object* v___x_460_; uint8_t v___x_461_; 
v_ks_459_ = lean_ctor_get(v_x_441_, 0);
v___x_460_ = lean_unsigned_to_nat(0u);
v___x_461_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(v_ks_459_, v___x_460_, v_x_443_);
return v___x_461_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg___boxed(lean_object* v_x_462_, lean_object* v_x_463_, lean_object* v_x_464_){
_start:
{
size_t v_x_44007__boxed_465_; uint8_t v_res_466_; lean_object* v_r_467_; 
v_x_44007__boxed_465_ = lean_unbox_usize(v_x_463_);
lean_dec(v_x_463_);
v_res_466_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(v_x_462_, v_x_44007__boxed_465_, v_x_464_);
lean_dec_ref(v_x_464_);
lean_dec_ref(v_x_462_);
v_r_467_ = lean_box(v_res_466_);
return v_r_467_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(lean_object* v_x_468_, lean_object* v_x_469_){
_start:
{
size_t v___x_470_; size_t v___x_471_; size_t v___x_472_; uint64_t v___x_473_; size_t v___x_474_; uint8_t v___x_475_; 
v___x_470_ = lean_ptr_addr(v_x_469_);
v___x_471_ = ((size_t)3ULL);
v___x_472_ = lean_usize_shift_right(v___x_470_, v___x_471_);
v___x_473_ = lean_usize_to_uint64(v___x_472_);
v___x_474_ = lean_uint64_to_usize(v___x_473_);
v___x_475_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(v_x_468_, v___x_474_, v_x_469_);
return v___x_475_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg___boxed(lean_object* v_x_476_, lean_object* v_x_477_){
_start:
{
uint8_t v_res_478_; lean_object* v_r_479_; 
v_res_478_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(v_x_476_, v_x_477_);
lean_dec_ref(v_x_477_);
lean_dec_ref(v_x_476_);
v_r_479_ = lean_box(v_res_478_);
return v_r_479_;
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(lean_object* v_e_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_, lean_object* v___y_488_, lean_object* v___y_489_, lean_object* v___y_490_, lean_object* v___y_491_){
_start:
{
if (lean_obj_tag(v_e_480_) == 0)
{
lean_object* v_x_493_; lean_object* v___x_494_; lean_object* v___x_495_; 
v_x_493_ = lean_ctor_get(v_e_480_, 0);
v___x_494_ = l_Lean_instInhabitedExpr;
v___x_495_ = l_Lean_Meta_Grind_AC_ACM_getStruct(v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
if (lean_obj_tag(v___x_495_) == 0)
{
lean_object* v_a_496_; lean_object* v___x_498_; uint8_t v_isShared_499_; uint8_t v_isSharedCheck_511_; 
v_a_496_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_511_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_511_ == 0)
{
v___x_498_ = v___x_495_;
v_isShared_499_ = v_isSharedCheck_511_;
goto v_resetjp_497_;
}
else
{
lean_inc(v_a_496_);
lean_dec(v___x_495_);
v___x_498_ = lean_box(0);
v_isShared_499_ = v_isSharedCheck_511_;
goto v_resetjp_497_;
}
v_resetjp_497_:
{
lean_object* v_vars_500_; lean_object* v_size_501_; uint8_t v___x_502_; 
v_vars_500_ = lean_ctor_get(v_a_496_, 10);
lean_inc_ref(v_vars_500_);
lean_dec(v_a_496_);
v_size_501_ = lean_ctor_get(v_vars_500_, 2);
v___x_502_ = lean_nat_dec_lt(v_x_493_, v_size_501_);
if (v___x_502_ == 0)
{
lean_object* v___x_503_; lean_object* v___x_505_; 
lean_dec_ref(v_vars_500_);
v___x_503_ = l_outOfBounds___redArg(v___x_494_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_503_);
v___x_505_ = v___x_498_;
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
else
{
lean_object* v___x_507_; lean_object* v___x_509_; 
v___x_507_ = l_Lean_PersistentArray_get_x21___redArg(v___x_494_, v_vars_500_, v_x_493_);
lean_dec_ref(v_vars_500_);
if (v_isShared_499_ == 0)
{
lean_ctor_set(v___x_498_, 0, v___x_507_);
v___x_509_ = v___x_498_;
goto v_reusejp_508_;
}
else
{
lean_object* v_reuseFailAlloc_510_; 
v_reuseFailAlloc_510_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_510_, 0, v___x_507_);
v___x_509_ = v_reuseFailAlloc_510_;
goto v_reusejp_508_;
}
v_reusejp_508_:
{
return v___x_509_;
}
}
}
}
else
{
lean_object* v_a_512_; lean_object* v___x_514_; uint8_t v_isShared_515_; uint8_t v_isSharedCheck_519_; 
v_a_512_ = lean_ctor_get(v___x_495_, 0);
v_isSharedCheck_519_ = !lean_is_exclusive(v___x_495_);
if (v_isSharedCheck_519_ == 0)
{
v___x_514_ = v___x_495_;
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
else
{
lean_inc(v_a_512_);
lean_dec(v___x_495_);
v___x_514_ = lean_box(0);
v_isShared_515_ = v_isSharedCheck_519_;
goto v_resetjp_513_;
}
v_resetjp_513_:
{
lean_object* v___x_517_; 
if (v_isShared_515_ == 0)
{
v___x_517_ = v___x_514_;
goto v_reusejp_516_;
}
else
{
lean_object* v_reuseFailAlloc_518_; 
v_reuseFailAlloc_518_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_518_, 0, v_a_512_);
v___x_517_ = v_reuseFailAlloc_518_;
goto v_reusejp_516_;
}
v_reusejp_516_:
{
return v___x_517_;
}
}
}
}
else
{
lean_object* v_lhs_520_; lean_object* v_rhs_521_; lean_object* v___x_522_; 
v_lhs_520_ = lean_ctor_get(v_e_480_, 0);
v_rhs_521_ = lean_ctor_get(v_e_480_, 1);
v___x_522_ = l_Lean_Meta_Grind_AC_ACM_getStruct(v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
if (lean_obj_tag(v___x_522_) == 0)
{
lean_object* v_a_523_; lean_object* v___x_524_; 
v_a_523_ = lean_ctor_get(v___x_522_, 0);
lean_inc(v_a_523_);
lean_dec_ref_known(v___x_522_, 1);
v___x_524_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_lhs_520_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
if (lean_obj_tag(v___x_524_) == 0)
{
lean_object* v_a_525_; lean_object* v___x_526_; 
v_a_525_ = lean_ctor_get(v___x_524_, 0);
lean_inc(v_a_525_);
lean_dec_ref_known(v___x_524_, 1);
v___x_526_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_rhs_521_, v___y_481_, v___y_482_, v___y_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_, v___y_488_, v___y_489_, v___y_490_, v___y_491_);
if (lean_obj_tag(v___x_526_) == 0)
{
lean_object* v_a_527_; lean_object* v___x_529_; uint8_t v_isShared_530_; uint8_t v_isSharedCheck_536_; 
v_a_527_ = lean_ctor_get(v___x_526_, 0);
v_isSharedCheck_536_ = !lean_is_exclusive(v___x_526_);
if (v_isSharedCheck_536_ == 0)
{
v___x_529_ = v___x_526_;
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
else
{
lean_inc(v_a_527_);
lean_dec(v___x_526_);
v___x_529_ = lean_box(0);
v_isShared_530_ = v_isSharedCheck_536_;
goto v_resetjp_528_;
}
v_resetjp_528_:
{
lean_object* v_op_531_; lean_object* v___x_532_; lean_object* v___x_534_; 
v_op_531_ = lean_ctor_get(v_a_523_, 3);
lean_inc_ref(v_op_531_);
lean_dec(v_a_523_);
v___x_532_ = l_Lean_mkAppB(v_op_531_, v_a_525_, v_a_527_);
if (v_isShared_530_ == 0)
{
lean_ctor_set(v___x_529_, 0, v___x_532_);
v___x_534_ = v___x_529_;
goto v_reusejp_533_;
}
else
{
lean_object* v_reuseFailAlloc_535_; 
v_reuseFailAlloc_535_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_535_, 0, v___x_532_);
v___x_534_ = v_reuseFailAlloc_535_;
goto v_reusejp_533_;
}
v_reusejp_533_:
{
return v___x_534_;
}
}
}
else
{
lean_dec(v_a_525_);
lean_dec(v_a_523_);
return v___x_526_;
}
}
else
{
lean_dec(v_a_523_);
return v___x_524_;
}
}
else
{
lean_object* v_a_537_; lean_object* v___x_539_; uint8_t v_isShared_540_; uint8_t v_isSharedCheck_544_; 
v_a_537_ = lean_ctor_get(v___x_522_, 0);
v_isSharedCheck_544_ = !lean_is_exclusive(v___x_522_);
if (v_isSharedCheck_544_ == 0)
{
v___x_539_ = v___x_522_;
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
else
{
lean_inc(v_a_537_);
lean_dec(v___x_522_);
v___x_539_ = lean_box(0);
v_isShared_540_ = v_isSharedCheck_544_;
goto v_resetjp_538_;
}
v_resetjp_538_:
{
lean_object* v___x_542_; 
if (v_isShared_540_ == 0)
{
v___x_542_ = v___x_539_;
goto v_reusejp_541_;
}
else
{
lean_object* v_reuseFailAlloc_543_; 
v_reuseFailAlloc_543_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_543_, 0, v_a_537_);
v___x_542_ = v_reuseFailAlloc_543_;
goto v_reusejp_541_;
}
v_reusejp_541_:
{
return v___x_542_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2___boxed(lean_object* v_e_545_, lean_object* v___y_546_, lean_object* v___y_547_, lean_object* v___y_548_, lean_object* v___y_549_, lean_object* v___y_550_, lean_object* v___y_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_){
_start:
{
lean_object* v_res_558_; 
v_res_558_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_e_545_, v___y_546_, v___y_547_, v___y_548_, v___y_549_, v___y_550_, v___y_551_, v___y_552_, v___y_553_, v___y_554_, v___y_555_, v___y_556_);
lean_dec(v___y_556_);
lean_dec_ref(v___y_555_);
lean_dec(v___y_554_);
lean_dec_ref(v___y_553_);
lean_dec(v___y_552_);
lean_dec_ref(v___y_551_);
lean_dec(v___y_550_);
lean_dec_ref(v___y_549_);
lean_dec(v___y_548_);
lean_dec(v___y_547_);
lean_dec(v___y_546_);
lean_dec_ref(v_e_545_);
return v_res_558_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__6(void){
_start:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_569_ = ((lean_object*)(l_Lean_Meta_Grind_AC_internalize___closed__3));
v___x_570_ = ((lean_object*)(l_Lean_Meta_Grind_AC_internalize___closed__5));
v___x_571_ = l_Lean_Name_append(v___x_570_, v___x_569_);
return v___x_571_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__8(void){
_start:
{
lean_object* v___x_573_; lean_object* v___x_574_; 
v___x_573_ = ((lean_object*)(l_Lean_Meta_Grind_AC_internalize___closed__7));
v___x_574_ = l_Lean_stringToMessageData(v___x_573_);
return v___x_574_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_AC_internalize___closed__10(void){
_start:
{
lean_object* v___x_576_; lean_object* v___x_577_; 
v___x_576_ = ((lean_object*)(l_Lean_Meta_Grind_AC_internalize___closed__9));
v___x_577_ = l_Lean_stringToMessageData(v___x_576_);
return v___x_577_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize(lean_object* v_e_578_, lean_object* v_parent_x3f_579_, lean_object* v_a_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_){
_start:
{
lean_object* v___y_592_; lean_object* v___y_593_; lean_object* v___y_594_; lean_object* v___y_595_; lean_object* v___y_596_; lean_object* v___y_597_; lean_object* v___y_598_; lean_object* v___y_599_; lean_object* v___y_600_; lean_object* v___y_601_; lean_object* v___y_602_; lean_object* v___x_606_; 
v___x_606_ = l_Lean_Meta_Grind_getConfig___redArg(v_a_582_);
if (lean_obj_tag(v___x_606_) == 0)
{
lean_object* v_a_607_; lean_object* v___x_609_; uint8_t v_isShared_610_; uint8_t v_isSharedCheck_720_; 
v_a_607_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_720_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_720_ == 0)
{
v___x_609_ = v___x_606_;
v_isShared_610_ = v_isSharedCheck_720_;
goto v_resetjp_608_;
}
else
{
lean_inc(v_a_607_);
lean_dec(v___x_606_);
v___x_609_ = lean_box(0);
v_isShared_610_ = v_isSharedCheck_720_;
goto v_resetjp_608_;
}
v_resetjp_608_:
{
uint8_t v_ac_616_; 
v_ac_616_ = lean_ctor_get_uint8(v_a_607_, sizeof(void*)*18 + 26);
lean_dec(v_a_607_);
if (v_ac_616_ == 0)
{
lean_object* v___x_617_; lean_object* v___x_618_; 
lean_del_object(v___x_609_);
lean_dec(v_parent_x3f_579_);
lean_dec_ref(v_e_578_);
v___x_617_ = lean_box(0);
v___x_618_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_618_, 0, v___x_617_);
return v___x_618_;
}
else
{
uint8_t v___x_619_; 
v___x_619_ = l_Lean_Expr_isApp(v_e_578_);
if (v___x_619_ == 0)
{
lean_dec(v_parent_x3f_579_);
lean_dec_ref(v_e_578_);
goto v___jp_611_;
}
else
{
lean_object* v___x_620_; uint8_t v___x_621_; 
v___x_620_ = l_Lean_Expr_appFn_x21(v_e_578_);
v___x_621_ = l_Lean_Expr_isApp(v___x_620_);
if (v___x_621_ == 0)
{
lean_dec_ref(v___x_620_);
lean_dec(v_parent_x3f_579_);
lean_dec_ref(v_e_578_);
goto v___jp_611_;
}
else
{
lean_object* v___x_622_; lean_object* v___x_623_; 
lean_del_object(v___x_609_);
v___x_622_ = l_Lean_Expr_appFn_x21(v___x_620_);
lean_dec_ref(v___x_620_);
lean_inc_ref(v___x_622_);
v___x_623_ = l_Lean_Meta_Grind_AC_getOpId_x3f(v___x_622_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
if (lean_obj_tag(v___x_623_) == 0)
{
lean_object* v_a_624_; lean_object* v___x_626_; uint8_t v_isShared_627_; uint8_t v_isSharedCheck_711_; 
v_a_624_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_711_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_711_ == 0)
{
v___x_626_ = v___x_623_;
v_isShared_627_ = v_isSharedCheck_711_;
goto v_resetjp_625_;
}
else
{
lean_inc(v_a_624_);
lean_dec(v___x_623_);
v___x_626_ = lean_box(0);
v_isShared_627_ = v_isSharedCheck_711_;
goto v_resetjp_625_;
}
v_resetjp_625_:
{
if (lean_obj_tag(v_a_624_) == 1)
{
lean_object* v_val_628_; lean_object* v___x_629_; lean_object* v_a_630_; lean_object* v___x_632_; uint8_t v_isShared_633_; uint8_t v_isSharedCheck_706_; 
lean_del_object(v___x_626_);
v_val_628_ = lean_ctor_get(v_a_624_, 0);
lean_inc(v_val_628_);
lean_dec_ref_known(v_a_624_, 1);
v___x_629_ = l___private_Lean_Meta_Tactic_Grind_AC_Internalize_0__Lean_Meta_Grind_AC_isParentSameOpApp___redArg(v_parent_x3f_579_, v___x_622_);
lean_dec_ref(v___x_622_);
v_a_630_ = lean_ctor_get(v___x_629_, 0);
v_isSharedCheck_706_ = !lean_is_exclusive(v___x_629_);
if (v_isSharedCheck_706_ == 0)
{
v___x_632_ = v___x_629_;
v_isShared_633_ = v_isSharedCheck_706_;
goto v_resetjp_631_;
}
else
{
lean_inc(v_a_630_);
lean_dec(v___x_629_);
v___x_632_ = lean_box(0);
v_isShared_633_ = v_isSharedCheck_706_;
goto v_resetjp_631_;
}
v_resetjp_631_:
{
uint8_t v___x_634_; 
v___x_634_ = lean_unbox(v_a_630_);
lean_dec(v_a_630_);
if (v___x_634_ == 0)
{
lean_object* v___x_635_; 
lean_del_object(v___x_632_);
v___x_635_ = l_Lean_Meta_Grind_AC_ACM_getStruct(v_val_628_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
if (lean_obj_tag(v___x_635_) == 0)
{
lean_object* v_a_636_; lean_object* v___x_638_; uint8_t v_isShared_639_; uint8_t v_isSharedCheck_693_; 
v_a_636_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_693_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_693_ == 0)
{
v___x_638_ = v___x_635_;
v_isShared_639_ = v_isSharedCheck_693_;
goto v_resetjp_637_;
}
else
{
lean_inc(v_a_636_);
lean_dec(v___x_635_);
v___x_638_ = lean_box(0);
v_isShared_639_ = v_isSharedCheck_693_;
goto v_resetjp_637_;
}
v_resetjp_637_:
{
lean_object* v_denote_640_; uint8_t v___x_641_; 
v_denote_640_ = lean_ctor_get(v_a_636_, 12);
lean_inc_ref(v_denote_640_);
lean_dec(v_a_636_);
v___x_641_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(v_denote_640_, v_e_578_);
lean_dec_ref(v_denote_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; 
lean_del_object(v___x_638_);
lean_inc_ref(v_e_578_);
v___x_642_ = l_Lean_Meta_Grind_AC_reify(v_e_578_, v_val_628_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
if (lean_obj_tag(v___x_642_) == 0)
{
lean_object* v_a_643_; lean_object* v___x_644_; lean_object* v___f_645_; lean_object* v___x_646_; 
v_a_643_ = lean_ctor_get(v___x_642_, 0);
lean_inc_n(v_a_643_, 2);
lean_dec_ref_known(v___x_642_, 1);
v___x_644_ = lean_box(v___x_621_);
lean_inc_ref(v_e_578_);
v___f_645_ = lean_alloc_closure((void*)(l_Lean_Meta_Grind_AC_internalize___lam__0___boxed), 4, 3);
lean_closure_set(v___f_645_, 0, v_e_578_);
lean_closure_set(v___f_645_, 1, v_a_643_);
lean_closure_set(v___f_645_, 2, v___x_644_);
v___x_646_ = l_Lean_Meta_Grind_AC_modifyStruct___redArg(v___f_645_, v_val_628_, v_a_580_);
if (lean_obj_tag(v___x_646_) == 0)
{
lean_object* v___x_648_; uint8_t v_isShared_649_; uint8_t v_isSharedCheck_679_; 
v_isSharedCheck_679_ = !lean_is_exclusive(v___x_646_);
if (v_isSharedCheck_679_ == 0)
{
lean_object* v_unused_680_; 
v_unused_680_ = lean_ctor_get(v___x_646_, 0);
lean_dec(v_unused_680_);
v___x_648_ = v___x_646_;
v_isShared_649_ = v_isSharedCheck_679_;
goto v_resetjp_647_;
}
else
{
lean_dec(v___x_646_);
v___x_648_ = lean_box(0);
v_isShared_649_ = v_isSharedCheck_679_;
goto v_resetjp_647_;
}
v_resetjp_647_:
{
lean_object* v_toCold_650_; lean_object* v_options_651_; uint8_t v_hasTrace_652_; 
v_toCold_650_ = lean_ctor_get(v_a_588_, 0);
v_options_651_ = lean_ctor_get(v_toCold_650_, 2);
v_hasTrace_652_ = lean_ctor_get_uint8(v_options_651_, sizeof(void*)*1);
if (v_hasTrace_652_ == 0)
{
lean_del_object(v___x_648_);
lean_dec(v_a_643_);
v___y_592_ = v_val_628_;
v___y_593_ = v_a_580_;
v___y_594_ = v_a_581_;
v___y_595_ = v_a_582_;
v___y_596_ = v_a_583_;
v___y_597_ = v_a_584_;
v___y_598_ = v_a_585_;
v___y_599_ = v_a_586_;
v___y_600_ = v_a_587_;
v___y_601_ = v_a_588_;
v___y_602_ = v_a_589_;
goto v___jp_591_;
}
else
{
lean_object* v_inheritedTraceOptions_653_; lean_object* v___x_654_; lean_object* v___x_655_; uint8_t v___x_656_; 
v_inheritedTraceOptions_653_ = lean_ctor_get(v_toCold_650_, 11);
v___x_654_ = ((lean_object*)(l_Lean_Meta_Grind_AC_internalize___closed__3));
v___x_655_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__6, &l_Lean_Meta_Grind_AC_internalize___closed__6_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__6);
v___x_656_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_653_, v_options_651_, v___x_655_);
if (v___x_656_ == 0)
{
lean_del_object(v___x_648_);
lean_dec(v_a_643_);
v___y_592_ = v_val_628_;
v___y_593_ = v_a_580_;
v___y_594_ = v_a_581_;
v___y_595_ = v_a_582_;
v___y_596_ = v_a_583_;
v___y_597_ = v_a_584_;
v___y_598_ = v_a_585_;
v___y_599_ = v_a_586_;
v___y_600_ = v_a_587_;
v___y_601_ = v_a_588_;
v___y_602_ = v_a_589_;
goto v___jp_591_;
}
else
{
lean_object* v___x_657_; 
v___x_657_ = l_Lean_Grind_AC_Expr_denoteExpr___at___00Lean_Meta_Grind_AC_internalize_spec__2(v_a_643_, v_val_628_, v_a_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_, v_a_585_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
lean_dec(v_a_643_);
if (lean_obj_tag(v___x_657_) == 0)
{
lean_object* v_a_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_662_; 
v_a_658_ = lean_ctor_get(v___x_657_, 0);
lean_inc(v_a_658_);
lean_dec_ref_known(v___x_657_, 1);
v___x_659_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__8, &l_Lean_Meta_Grind_AC_internalize___closed__8_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__8);
lean_inc(v_val_628_);
v___x_660_ = l_Nat_reprFast(v_val_628_);
if (v_isShared_649_ == 0)
{
lean_ctor_set_tag(v___x_648_, 3);
lean_ctor_set(v___x_648_, 0, v___x_660_);
v___x_662_ = v___x_648_;
goto v_reusejp_661_;
}
else
{
lean_object* v_reuseFailAlloc_670_; 
v_reuseFailAlloc_670_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_670_, 0, v___x_660_);
v___x_662_ = v_reuseFailAlloc_670_;
goto v_reusejp_661_;
}
v_reusejp_661_:
{
lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v___x_666_; lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; 
v___x_663_ = l_Lean_MessageData_ofFormat(v___x_662_);
v___x_664_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_664_, 0, v___x_659_);
lean_ctor_set(v___x_664_, 1, v___x_663_);
v___x_665_ = lean_obj_once(&l_Lean_Meta_Grind_AC_internalize___closed__10, &l_Lean_Meta_Grind_AC_internalize___closed__10_once, _init_l_Lean_Meta_Grind_AC_internalize___closed__10);
v___x_666_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_666_, 0, v___x_664_);
lean_ctor_set(v___x_666_, 1, v___x_665_);
v___x_667_ = l_Lean_MessageData_ofExpr(v_a_658_);
v___x_668_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_668_, 0, v___x_666_);
lean_ctor_set(v___x_668_, 1, v___x_667_);
v___x_669_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(v___x_654_, v___x_668_, v_a_586_, v_a_587_, v_a_588_, v_a_589_);
if (lean_obj_tag(v___x_669_) == 0)
{
lean_dec_ref_known(v___x_669_, 1);
v___y_592_ = v_val_628_;
v___y_593_ = v_a_580_;
v___y_594_ = v_a_581_;
v___y_595_ = v_a_582_;
v___y_596_ = v_a_583_;
v___y_597_ = v_a_584_;
v___y_598_ = v_a_585_;
v___y_599_ = v_a_586_;
v___y_600_ = v_a_587_;
v___y_601_ = v_a_588_;
v___y_602_ = v_a_589_;
goto v___jp_591_;
}
else
{
lean_dec(v_val_628_);
lean_dec_ref(v_e_578_);
return v___x_669_;
}
}
}
else
{
lean_object* v_a_671_; lean_object* v___x_673_; uint8_t v_isShared_674_; uint8_t v_isSharedCheck_678_; 
lean_del_object(v___x_648_);
lean_dec(v_val_628_);
lean_dec_ref(v_e_578_);
v_a_671_ = lean_ctor_get(v___x_657_, 0);
v_isSharedCheck_678_ = !lean_is_exclusive(v___x_657_);
if (v_isSharedCheck_678_ == 0)
{
v___x_673_ = v___x_657_;
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
else
{
lean_inc(v_a_671_);
lean_dec(v___x_657_);
v___x_673_ = lean_box(0);
v_isShared_674_ = v_isSharedCheck_678_;
goto v_resetjp_672_;
}
v_resetjp_672_:
{
lean_object* v___x_676_; 
if (v_isShared_674_ == 0)
{
v___x_676_ = v___x_673_;
goto v_reusejp_675_;
}
else
{
lean_object* v_reuseFailAlloc_677_; 
v_reuseFailAlloc_677_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_677_, 0, v_a_671_);
v___x_676_ = v_reuseFailAlloc_677_;
goto v_reusejp_675_;
}
v_reusejp_675_:
{
return v___x_676_;
}
}
}
}
}
}
}
else
{
lean_dec(v_a_643_);
lean_dec(v_val_628_);
lean_dec_ref(v_e_578_);
return v___x_646_;
}
}
else
{
lean_object* v_a_681_; lean_object* v___x_683_; uint8_t v_isShared_684_; uint8_t v_isSharedCheck_688_; 
lean_dec(v_val_628_);
lean_dec_ref(v_e_578_);
v_a_681_ = lean_ctor_get(v___x_642_, 0);
v_isSharedCheck_688_ = !lean_is_exclusive(v___x_642_);
if (v_isSharedCheck_688_ == 0)
{
v___x_683_ = v___x_642_;
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
else
{
lean_inc(v_a_681_);
lean_dec(v___x_642_);
v___x_683_ = lean_box(0);
v_isShared_684_ = v_isSharedCheck_688_;
goto v_resetjp_682_;
}
v_resetjp_682_:
{
lean_object* v___x_686_; 
if (v_isShared_684_ == 0)
{
v___x_686_ = v___x_683_;
goto v_reusejp_685_;
}
else
{
lean_object* v_reuseFailAlloc_687_; 
v_reuseFailAlloc_687_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_687_, 0, v_a_681_);
v___x_686_ = v_reuseFailAlloc_687_;
goto v_reusejp_685_;
}
v_reusejp_685_:
{
return v___x_686_;
}
}
}
}
else
{
lean_object* v___x_689_; lean_object* v___x_691_; 
lean_dec(v_val_628_);
lean_dec_ref(v_e_578_);
v___x_689_ = lean_box(0);
if (v_isShared_639_ == 0)
{
lean_ctor_set(v___x_638_, 0, v___x_689_);
v___x_691_ = v___x_638_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
lean_dec(v_val_628_);
lean_dec_ref(v_e_578_);
v_a_694_ = lean_ctor_get(v___x_635_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_635_);
if (v_isSharedCheck_701_ == 0)
{
v___x_696_ = v___x_635_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_635_);
v___x_696_ = lean_box(0);
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
v_resetjp_695_:
{
lean_object* v___x_699_; 
if (v_isShared_697_ == 0)
{
v___x_699_ = v___x_696_;
goto v_reusejp_698_;
}
else
{
lean_object* v_reuseFailAlloc_700_; 
v_reuseFailAlloc_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_700_, 0, v_a_694_);
v___x_699_ = v_reuseFailAlloc_700_;
goto v_reusejp_698_;
}
v_reusejp_698_:
{
return v___x_699_;
}
}
}
}
else
{
lean_object* v___x_702_; lean_object* v___x_704_; 
lean_dec(v_val_628_);
lean_dec_ref(v_e_578_);
v___x_702_ = lean_box(0);
if (v_isShared_633_ == 0)
{
lean_ctor_set(v___x_632_, 0, v___x_702_);
v___x_704_ = v___x_632_;
goto v_reusejp_703_;
}
else
{
lean_object* v_reuseFailAlloc_705_; 
v_reuseFailAlloc_705_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_705_, 0, v___x_702_);
v___x_704_ = v_reuseFailAlloc_705_;
goto v_reusejp_703_;
}
v_reusejp_703_:
{
return v___x_704_;
}
}
}
}
else
{
lean_object* v___x_707_; lean_object* v___x_709_; 
lean_dec(v_a_624_);
lean_dec_ref(v___x_622_);
lean_dec(v_parent_x3f_579_);
lean_dec_ref(v_e_578_);
v___x_707_ = lean_box(0);
if (v_isShared_627_ == 0)
{
lean_ctor_set(v___x_626_, 0, v___x_707_);
v___x_709_ = v___x_626_;
goto v_reusejp_708_;
}
else
{
lean_object* v_reuseFailAlloc_710_; 
v_reuseFailAlloc_710_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_710_, 0, v___x_707_);
v___x_709_ = v_reuseFailAlloc_710_;
goto v_reusejp_708_;
}
v_reusejp_708_:
{
return v___x_709_;
}
}
}
}
else
{
lean_object* v_a_712_; lean_object* v___x_714_; uint8_t v_isShared_715_; uint8_t v_isSharedCheck_719_; 
lean_dec_ref(v___x_622_);
lean_dec(v_parent_x3f_579_);
lean_dec_ref(v_e_578_);
v_a_712_ = lean_ctor_get(v___x_623_, 0);
v_isSharedCheck_719_ = !lean_is_exclusive(v___x_623_);
if (v_isSharedCheck_719_ == 0)
{
v___x_714_ = v___x_623_;
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
else
{
lean_inc(v_a_712_);
lean_dec(v___x_623_);
v___x_714_ = lean_box(0);
v_isShared_715_ = v_isSharedCheck_719_;
goto v_resetjp_713_;
}
v_resetjp_713_:
{
lean_object* v___x_717_; 
if (v_isShared_715_ == 0)
{
v___x_717_ = v___x_714_;
goto v_reusejp_716_;
}
else
{
lean_object* v_reuseFailAlloc_718_; 
v_reuseFailAlloc_718_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_718_, 0, v_a_712_);
v___x_717_ = v_reuseFailAlloc_718_;
goto v_reusejp_716_;
}
v_reusejp_716_:
{
return v___x_717_;
}
}
}
}
}
}
v___jp_611_:
{
lean_object* v___x_612_; lean_object* v___x_614_; 
v___x_612_ = lean_box(0);
if (v_isShared_610_ == 0)
{
lean_ctor_set(v___x_609_, 0, v___x_612_);
v___x_614_ = v___x_609_;
goto v_reusejp_613_;
}
else
{
lean_object* v_reuseFailAlloc_615_; 
v_reuseFailAlloc_615_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_615_, 0, v___x_612_);
v___x_614_ = v_reuseFailAlloc_615_;
goto v_reusejp_613_;
}
v_reusejp_613_:
{
return v___x_614_;
}
}
}
}
else
{
lean_object* v_a_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_728_; 
lean_dec(v_parent_x3f_579_);
lean_dec_ref(v_e_578_);
v_a_721_ = lean_ctor_get(v___x_606_, 0);
v_isSharedCheck_728_ = !lean_is_exclusive(v___x_606_);
if (v_isSharedCheck_728_ == 0)
{
v___x_723_ = v___x_606_;
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_a_721_);
lean_dec(v___x_606_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_728_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_726_; 
if (v_isShared_724_ == 0)
{
v___x_726_ = v___x_723_;
goto v_reusejp_725_;
}
else
{
lean_object* v_reuseFailAlloc_727_; 
v_reuseFailAlloc_727_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_727_, 0, v_a_721_);
v___x_726_ = v_reuseFailAlloc_727_;
goto v_reusejp_725_;
}
v_reusejp_725_:
{
return v___x_726_;
}
}
}
v___jp_591_:
{
lean_object* v___x_603_; 
lean_inc_ref(v_e_578_);
v___x_603_ = l_Lean_Meta_Grind_AC_addTermOpId___redArg(v_e_578_, v___y_592_, v___y_593_);
lean_dec(v___y_592_);
if (lean_obj_tag(v___x_603_) == 0)
{
lean_object* v___x_604_; lean_object* v___x_605_; 
lean_dec_ref_known(v___x_603_, 1);
v___x_604_ = l_Lean_Meta_Grind_AC_acExt;
v___x_605_ = l_Lean_Meta_Grind_SolverExtension_markTerm___redArg(v___x_604_, v_e_578_, v___y_593_, v___y_594_, v___y_595_, v___y_596_, v___y_597_, v___y_598_, v___y_599_, v___y_600_, v___y_601_, v___y_602_);
return v___x_605_;
}
else
{
lean_dec_ref(v_e_578_);
return v___x_603_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_AC_internalize___boxed(lean_object* v_e_729_, lean_object* v_parent_x3f_730_, lean_object* v_a_731_, lean_object* v_a_732_, lean_object* v_a_733_, lean_object* v_a_734_, lean_object* v_a_735_, lean_object* v_a_736_, lean_object* v_a_737_, lean_object* v_a_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_){
_start:
{
lean_object* v_res_742_; 
v_res_742_ = l_Lean_Meta_Grind_AC_internalize(v_e_729_, v_parent_x3f_730_, v_a_731_, v_a_732_, v_a_733_, v_a_734_, v_a_735_, v_a_736_, v_a_737_, v_a_738_, v_a_739_, v_a_740_);
lean_dec(v_a_740_);
lean_dec_ref(v_a_739_);
lean_dec(v_a_738_);
lean_dec_ref(v_a_737_);
lean_dec(v_a_736_);
lean_dec_ref(v_a_735_);
lean_dec(v_a_734_);
lean_dec_ref(v_a_733_);
lean_dec(v_a_732_);
lean_dec(v_a_731_);
return v_res_742_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0(lean_object* v_00_u03b2_743_, lean_object* v_x_744_, lean_object* v_x_745_){
_start:
{
uint8_t v___x_746_; 
v___x_746_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___redArg(v_x_744_, v_x_745_);
return v___x_746_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0___boxed(lean_object* v_00_u03b2_747_, lean_object* v_x_748_, lean_object* v_x_749_){
_start:
{
uint8_t v_res_750_; lean_object* v_r_751_; 
v_res_750_ = l_Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0(v_00_u03b2_747_, v_x_748_, v_x_749_);
lean_dec_ref(v_x_749_);
lean_dec_ref(v_x_748_);
v_r_751_ = lean_box(v_res_750_);
return v_r_751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1(lean_object* v_00_u03b2_752_, lean_object* v_x_753_, lean_object* v_x_754_, lean_object* v_x_755_){
_start:
{
lean_object* v___x_756_; 
v___x_756_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1___redArg(v_x_753_, v_x_754_, v_x_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3(lean_object* v_cls_757_, lean_object* v_msg_758_, lean_object* v___y_759_, lean_object* v___y_760_, lean_object* v___y_761_, lean_object* v___y_762_, lean_object* v___y_763_, lean_object* v___y_764_, lean_object* v___y_765_, lean_object* v___y_766_, lean_object* v___y_767_, lean_object* v___y_768_, lean_object* v___y_769_){
_start:
{
lean_object* v___x_771_; 
v___x_771_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___redArg(v_cls_757_, v_msg_758_, v___y_766_, v___y_767_, v___y_768_, v___y_769_);
return v___x_771_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3___boxed(lean_object* v_cls_772_, lean_object* v_msg_773_, lean_object* v___y_774_, lean_object* v___y_775_, lean_object* v___y_776_, lean_object* v___y_777_, lean_object* v___y_778_, lean_object* v___y_779_, lean_object* v___y_780_, lean_object* v___y_781_, lean_object* v___y_782_, lean_object* v___y_783_, lean_object* v___y_784_, lean_object* v___y_785_){
_start:
{
lean_object* v_res_786_; 
v_res_786_ = l_Lean_addTrace___at___00Lean_Meta_Grind_AC_internalize_spec__3(v_cls_772_, v_msg_773_, v___y_774_, v___y_775_, v___y_776_, v___y_777_, v___y_778_, v___y_779_, v___y_780_, v___y_781_, v___y_782_, v___y_783_, v___y_784_);
lean_dec(v___y_784_);
lean_dec_ref(v___y_783_);
lean_dec(v___y_782_);
lean_dec_ref(v___y_781_);
lean_dec(v___y_780_);
lean_dec_ref(v___y_779_);
lean_dec(v___y_778_);
lean_dec_ref(v___y_777_);
lean_dec(v___y_776_);
lean_dec(v___y_775_);
lean_dec(v___y_774_);
return v_res_786_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0(lean_object* v_00_u03b2_787_, lean_object* v_x_788_, size_t v_x_789_, lean_object* v_x_790_){
_start:
{
uint8_t v___x_791_; 
v___x_791_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___redArg(v_x_788_, v_x_789_, v_x_790_);
return v___x_791_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0___boxed(lean_object* v_00_u03b2_792_, lean_object* v_x_793_, lean_object* v_x_794_, lean_object* v_x_795_){
_start:
{
size_t v_x_44590__boxed_796_; uint8_t v_res_797_; lean_object* v_r_798_; 
v_x_44590__boxed_796_ = lean_unbox_usize(v_x_794_);
lean_dec(v_x_794_);
v_res_797_ = l_Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0(v_00_u03b2_792_, v_x_793_, v_x_44590__boxed_796_, v_x_795_);
lean_dec_ref(v_x_795_);
lean_dec_ref(v_x_793_);
v_r_798_ = lean_box(v_res_797_);
return v_r_798_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2(lean_object* v_00_u03b2_799_, lean_object* v_x_800_, size_t v_x_801_, size_t v_x_802_, lean_object* v_x_803_, lean_object* v_x_804_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___redArg(v_x_800_, v_x_801_, v_x_802_, v_x_803_, v_x_804_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2___boxed(lean_object* v_00_u03b2_806_, lean_object* v_x_807_, lean_object* v_x_808_, lean_object* v_x_809_, lean_object* v_x_810_, lean_object* v_x_811_){
_start:
{
size_t v_x_44601__boxed_812_; size_t v_x_44602__boxed_813_; lean_object* v_res_814_; 
v_x_44601__boxed_812_ = lean_unbox_usize(v_x_808_);
lean_dec(v_x_808_);
v_x_44602__boxed_813_ = lean_unbox_usize(v_x_809_);
lean_dec(v_x_809_);
v_res_814_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2(v_00_u03b2_806_, v_x_807_, v_x_44601__boxed_812_, v_x_44602__boxed_813_, v_x_810_, v_x_811_);
return v_res_814_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_815_, lean_object* v_keys_816_, lean_object* v_vals_817_, lean_object* v_heq_818_, lean_object* v_i_819_, lean_object* v_k_820_){
_start:
{
uint8_t v___x_821_; 
v___x_821_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___redArg(v_keys_816_, v_i_819_, v_k_820_);
return v___x_821_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_822_, lean_object* v_keys_823_, lean_object* v_vals_824_, lean_object* v_heq_825_, lean_object* v_i_826_, lean_object* v_k_827_){
_start:
{
uint8_t v_res_828_; lean_object* v_r_829_; 
v_res_828_ = l_Lean_PersistentHashMap_containsAtAux___at___00Lean_PersistentHashMap_containsAux___at___00Lean_PersistentHashMap_contains___at___00Lean_Meta_Grind_AC_internalize_spec__0_spec__0_spec__1(v_00_u03b2_822_, v_keys_823_, v_vals_824_, v_heq_825_, v_i_826_, v_k_827_);
lean_dec_ref(v_k_827_);
lean_dec_ref(v_vals_824_);
lean_dec_ref(v_keys_823_);
v_r_829_ = lean_box(v_res_828_);
return v_r_829_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_830_, lean_object* v_n_831_, lean_object* v_k_832_, lean_object* v_v_833_){
_start:
{
lean_object* v___x_834_; 
v___x_834_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4___redArg(v_n_831_, v_k_832_, v_v_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_835_, size_t v_depth_836_, lean_object* v_keys_837_, lean_object* v_vals_838_, lean_object* v_heq_839_, lean_object* v_i_840_, lean_object* v_entries_841_){
_start:
{
lean_object* v___x_842_; 
v___x_842_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___redArg(v_depth_836_, v_keys_837_, v_vals_838_, v_i_840_, v_entries_841_);
return v___x_842_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_843_, lean_object* v_depth_844_, lean_object* v_keys_845_, lean_object* v_vals_846_, lean_object* v_heq_847_, lean_object* v_i_848_, lean_object* v_entries_849_){
_start:
{
size_t v_depth_boxed_850_; lean_object* v_res_851_; 
v_depth_boxed_850_ = lean_unbox_usize(v_depth_844_);
lean_dec(v_depth_844_);
v_res_851_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__5(v_00_u03b2_843_, v_depth_boxed_850_, v_keys_845_, v_vals_846_, v_heq_847_, v_i_848_, v_entries_849_);
lean_dec_ref(v_vals_846_);
lean_dec_ref(v_keys_845_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8(lean_object* v_00_u03b2_852_, lean_object* v_x_853_, lean_object* v_x_854_, lean_object* v_x_855_, lean_object* v_x_856_){
_start:
{
lean_object* v___x_857_; 
v___x_857_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Grind_AC_internalize_spec__1_spec__2_spec__4_spec__8___redArg(v_x_853_, v_x_854_, v_x_855_, v_x_856_);
return v___x_857_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_AC_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_AC_Internalize(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_AC_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_AC_DenoteExpr(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_AC_Internalize(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_AC_Internalize(builtin);
}
#ifdef __cplusplus
}
#endif
