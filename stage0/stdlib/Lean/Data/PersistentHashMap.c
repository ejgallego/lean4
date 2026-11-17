// Lean compiler output
// Module: Lean.Data.PersistentHashMap
// Imports: public import Init.Data.Array.BasicAux public import Init.Data.UInt.Basic public import Init.Control.Except public import Init.Data.Array.Basic import Init.Data.String.Defs import Init.Data.ToString.Macro import Init.Data.Array.Lemmas
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
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* lean_mk_array(lean_object*, lean_object*);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Array_mapM_x27___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Array_finIdxOf_x3f___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_eraseIdx___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0_value;
static const lean_ctor_object l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__0_value)}};
static const lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_instInhabitedNode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_instInhabitedNode___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_shift;
LEAN_EXPORT size_t l_Lean_PersistentHashMap_branching;
LEAN_EXPORT size_t l_Lean_PersistentHashMap_maxDepth;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_maxCollisions;
static lean_once_cell_t l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_instInhabited___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_instInhabited___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_mkEmptyEntries___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mul2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mul2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_div2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_div2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mod2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mod2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PersistentHashMap_find_x21___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Lean.Data.PersistentHashMap"};
static const lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_find_x21___redArg___closed__0_value;
static const lean_string_object l_Lean_PersistentHashMap_find_x21___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "Lean.PersistentHashMap.find!"};
static const lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_find_x21___redArg___closed__1_value;
static const lean_string_object l_Lean_PersistentHashMap_find_x21___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "key is not in the map"};
static const lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__2 = (const lean_object*)&l_Lean_PersistentHashMap_find_x21___redArg___closed__2_value;
static lean_once_cell_t l_Lean_PersistentHashMap_find_x21___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_find_x21___redArg___closed__3;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__0_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__1_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__2 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__2_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__3 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__3_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__4 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__4_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__5 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__5_value;
static const lean_closure_object l_Lean_PersistentHashMap_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__6 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Lean_PersistentHashMap_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__0_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__1_value)}};
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__7 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Lean_PersistentHashMap_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__7_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__2_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__3_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__4_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__5_value)}};
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__8 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Lean_PersistentHashMap_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__8_value),((lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__6_value)}};
static const lean_object* l_Lean_PersistentHashMap_foldl___redArg___closed__9 = (const lean_object*)&l_Lean_PersistentHashMap_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_forIn___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_forIn___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_forIn___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_forIn___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toList___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toList___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toList___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_toArray___redArg___lam__0, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_toArray___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___redArg___closed__0_value;
static const lean_array_object l_Lean_PersistentHashMap_toArray___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentHashMap_toArray___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_toArray___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PersistentHashMap_stats___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 0, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PersistentHashMap_stats___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_stats___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "{ nodes := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__0_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", null := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__1 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__1_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = ", collisions := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__2 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__2_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", depth := "};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__3 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__3_value;
static const lean_string_object l_Lean_PersistentHashMap_Stats_toString___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_PersistentHashMap_Stats_toString___closed__4 = (const lean_object*)&l_Lean_PersistentHashMap_Stats_toString___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Stats_toString(lean_object*);
static const lean_closure_object l_Lean_PersistentHashMap_instToStringStats___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentHashMap_Stats_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentHashMap_instToStringStats___closed__0 = (const lean_object*)&l_Lean_PersistentHashMap_instToStringStats___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PersistentHashMap_instToStringStats = (const lean_object*)&l_Lean_PersistentHashMap_instToStringStats___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_PersistentHashMap_Entry_ctorIdx___impl___redArg(v_x_3_);
lean_dec(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl(lean_object* v_00_u03b1_5_, lean_object* v_00_u03b2_6_, lean_object* v_00_u03c3_7_, lean_object* v_x_8_){
_start:
{
lean_object* v___x_9_; 
v___x_9_ = lean_obj_tag_nat(v_x_8_);
return v___x_9_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorIdx___impl___boxed(lean_object* v_00_u03b1_10_, lean_object* v_00_u03b2_11_, lean_object* v_00_u03c3_12_, lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Lean_PersistentHashMap_Entry_ctorIdx___impl(v_00_u03b1_10_, v_00_u03b2_11_, v_00_u03c3_12_, v_x_13_);
lean_dec(v_x_13_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___redArg(lean_object* v_t_15_, lean_object* v_k_16_){
_start:
{
switch(lean_obj_tag(v_t_15_))
{
case 0:
{
lean_object* v_key_17_; lean_object* v_val_18_; lean_object* v___x_19_; 
v_key_17_ = lean_ctor_get(v_t_15_, 0);
lean_inc(v_key_17_);
v_val_18_ = lean_ctor_get(v_t_15_, 1);
lean_inc(v_val_18_);
lean_dec_ref_known(v_t_15_, 2);
v___x_19_ = lean_apply_2(v_k_16_, v_key_17_, v_val_18_);
return v___x_19_;
}
case 1:
{
lean_object* v_node_20_; lean_object* v___x_21_; 
v_node_20_ = lean_ctor_get(v_t_15_, 0);
lean_inc(v_node_20_);
lean_dec_ref_known(v_t_15_, 1);
v___x_21_ = lean_apply_1(v_k_16_, v_node_20_);
return v___x_21_;
}
default: 
{
return v_k_16_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim(lean_object* v_00_u03b1_22_, lean_object* v_00_u03b2_23_, lean_object* v_00_u03c3_24_, lean_object* v_motive_25_, lean_object* v_ctorIdx_26_, lean_object* v_t_27_, lean_object* v_h_28_, lean_object* v_k_29_){
_start:
{
lean_object* v___x_30_; 
v___x_30_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_27_, v_k_29_);
return v___x_30_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ctorElim___boxed(lean_object* v_00_u03b1_31_, lean_object* v_00_u03b2_32_, lean_object* v_00_u03c3_33_, lean_object* v_motive_34_, lean_object* v_ctorIdx_35_, lean_object* v_t_36_, lean_object* v_h_37_, lean_object* v_k_38_){
_start:
{
lean_object* v_res_39_; 
v_res_39_ = l_Lean_PersistentHashMap_Entry_ctorElim(v_00_u03b1_31_, v_00_u03b2_32_, v_00_u03c3_33_, v_motive_34_, v_ctorIdx_35_, v_t_36_, v_h_37_, v_k_38_);
lean_dec(v_ctorIdx_35_);
return v_res_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim___redArg(lean_object* v_t_40_, lean_object* v_entry_41_){
_start:
{
lean_object* v___x_42_; 
v___x_42_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_40_, v_entry_41_);
return v___x_42_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_entry_elim(lean_object* v_00_u03b1_43_, lean_object* v_00_u03b2_44_, lean_object* v_00_u03c3_45_, lean_object* v_motive_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_entry_49_){
_start:
{
lean_object* v___x_50_; 
v___x_50_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_47_, v_entry_49_);
return v___x_50_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim___redArg(lean_object* v_t_51_, lean_object* v_ref_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_51_, v_ref_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_ref_elim(lean_object* v_00_u03b1_54_, lean_object* v_00_u03b2_55_, lean_object* v_00_u03c3_56_, lean_object* v_motive_57_, lean_object* v_t_58_, lean_object* v_h_59_, lean_object* v_ref_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_58_, v_ref_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim___redArg(lean_object* v_t_62_, lean_object* v_null_63_){
_start:
{
lean_object* v___x_64_; 
v___x_64_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_62_, v_null_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Entry_null_elim(lean_object* v_00_u03b1_65_, lean_object* v_00_u03b2_66_, lean_object* v_00_u03c3_67_, lean_object* v_motive_68_, lean_object* v_t_69_, lean_object* v_h_70_, lean_object* v_null_71_){
_start:
{
lean_object* v___x_72_; 
v___x_72_ = l_Lean_PersistentHashMap_Entry_ctorElim___redArg(v_t_69_, v_null_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg(){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lean_box(2);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry___redArg___boxed(lean_object* v___dummy_75_){
_start:
{
lean_object* v_res_76_; 
v_res_76_ = l_Lean_PersistentHashMap_instInhabitedEntry___redArg();
return v_res_76_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedEntry(lean_object* v_00_u03b1_77_, lean_object* v_00_u03b2_78_, lean_object* v_00_u03c3_79_){
_start:
{
lean_object* v___x_80_; 
v___x_80_ = lean_box(2);
return v___x_80_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl___redArg(lean_object* v_x_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lean_obj_tag_nat(v_x_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl___redArg___boxed(lean_object* v_x_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_PersistentHashMap_Node_ctorIdx___impl___redArg(v_x_83_);
lean_dec_ref(v_x_83_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl(lean_object* v_00_u03b1_85_, lean_object* v_00_u03b2_86_, lean_object* v_x_87_){
_start:
{
lean_object* v___x_88_; 
v___x_88_ = lean_obj_tag_nat(v_x_87_);
return v___x_88_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorIdx___impl___boxed(lean_object* v_00_u03b1_89_, lean_object* v_00_u03b2_90_, lean_object* v_x_91_){
_start:
{
lean_object* v_res_92_; 
v_res_92_ = l_Lean_PersistentHashMap_Node_ctorIdx___impl(v_00_u03b1_89_, v_00_u03b2_90_, v_x_91_);
lean_dec_ref(v_x_91_);
return v_res_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___redArg(lean_object* v_t_93_, lean_object* v_k_94_){
_start:
{
if (lean_obj_tag(v_t_93_) == 0)
{
lean_object* v_es_95_; lean_object* v___x_96_; 
v_es_95_ = lean_ctor_get(v_t_93_, 0);
lean_inc_ref(v_es_95_);
lean_dec_ref_known(v_t_93_, 1);
v___x_96_ = lean_apply_1(v_k_94_, v_es_95_);
return v___x_96_;
}
else
{
lean_object* v_ks_97_; lean_object* v_vs_98_; lean_object* v___x_99_; 
v_ks_97_ = lean_ctor_get(v_t_93_, 0);
lean_inc_ref(v_ks_97_);
v_vs_98_ = lean_ctor_get(v_t_93_, 1);
lean_inc_ref(v_vs_98_);
lean_dec_ref_known(v_t_93_, 2);
v___x_99_ = lean_apply_3(v_k_94_, v_ks_97_, v_vs_98_, lean_box(0));
return v___x_99_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim(lean_object* v_00_u03b1_100_, lean_object* v_00_u03b2_101_, lean_object* v_motive__1_102_, lean_object* v_ctorIdx_103_, lean_object* v_t_104_, lean_object* v_h_105_, lean_object* v_k_106_){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_104_, v_k_106_);
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_ctorElim___boxed(lean_object* v_00_u03b1_108_, lean_object* v_00_u03b2_109_, lean_object* v_motive__1_110_, lean_object* v_ctorIdx_111_, lean_object* v_t_112_, lean_object* v_h_113_, lean_object* v_k_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = l_Lean_PersistentHashMap_Node_ctorElim(v_00_u03b1_108_, v_00_u03b2_109_, v_motive__1_110_, v_ctorIdx_111_, v_t_112_, v_h_113_, v_k_114_);
lean_dec(v_ctorIdx_111_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim___redArg(lean_object* v_t_116_, lean_object* v_entries_117_){
_start:
{
lean_object* v___x_118_; 
v___x_118_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_116_, v_entries_117_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_entries_elim(lean_object* v_00_u03b1_119_, lean_object* v_00_u03b2_120_, lean_object* v_motive__1_121_, lean_object* v_t_122_, lean_object* v_h_123_, lean_object* v_entries_124_){
_start:
{
lean_object* v___x_125_; 
v___x_125_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_122_, v_entries_124_);
return v___x_125_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim___redArg(lean_object* v_t_126_, lean_object* v_collision_127_){
_start:
{
lean_object* v___x_128_; 
v___x_128_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_126_, v_collision_127_);
return v___x_128_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_collision_elim(lean_object* v_00_u03b1_129_, lean_object* v_00_u03b2_130_, lean_object* v_motive__1_131_, lean_object* v_t_132_, lean_object* v_h_133_, lean_object* v_collision_134_){
_start:
{
lean_object* v___x_135_; 
v___x_135_ = l_Lean_PersistentHashMap_Node_ctorElim___redArg(v_t_132_, v_collision_134_);
return v___x_135_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty___redArg(lean_object* v_x_136_){
_start:
{
if (lean_obj_tag(v_x_136_) == 0)
{
lean_object* v_es_137_; lean_object* v___x_138_; lean_object* v___x_139_; uint8_t v___x_140_; 
v_es_137_ = lean_ctor_get(v_x_136_, 0);
v___x_138_ = lean_unsigned_to_nat(0u);
v___x_139_ = lean_array_get_size(v_es_137_);
v___x_140_ = lean_nat_dec_lt(v___x_138_, v___x_139_);
if (v___x_140_ == 0)
{
uint8_t v___x_141_; 
v___x_141_ = 1;
return v___x_141_;
}
else
{
if (v___x_140_ == 0)
{
return v___x_140_;
}
else
{
size_t v___x_142_; size_t v___x_143_; uint8_t v___x_144_; 
v___x_142_ = ((size_t)0ULL);
v___x_143_ = lean_usize_of_nat(v___x_139_);
v___x_144_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(v_es_137_, v___x_142_, v___x_143_);
if (v___x_144_ == 0)
{
return v___x_140_;
}
else
{
uint8_t v___x_145_; 
v___x_145_ = 0;
return v___x_145_;
}
}
}
}
else
{
uint8_t v___x_146_; 
v___x_146_ = 0;
return v___x_146_;
}
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(lean_object* v_as_147_, size_t v_i_148_, size_t v_stop_149_){
_start:
{
uint8_t v___x_154_; 
v___x_154_ = lean_usize_dec_eq(v_i_148_, v_stop_149_);
if (v___x_154_ == 0)
{
lean_object* v___x_155_; 
v___x_155_ = lean_array_uget_borrowed(v_as_147_, v_i_148_);
switch(lean_obj_tag(v___x_155_))
{
case 0:
{
uint8_t v___x_156_; 
v___x_156_ = 1;
return v___x_156_;
}
case 1:
{
lean_object* v_node_157_; uint8_t v___x_158_; 
v_node_157_ = lean_ctor_get(v___x_155_, 0);
v___x_158_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_node_157_);
if (v___x_158_ == 0)
{
uint8_t v___x_159_; 
v___x_159_ = 1;
return v___x_159_;
}
else
{
goto v___jp_150_;
}
}
default: 
{
goto v___jp_150_;
}
}
}
else
{
uint8_t v___x_160_; 
v___x_160_ = 0;
return v___x_160_;
}
v___jp_150_:
{
size_t v___x_151_; size_t v___x_152_; 
v___x_151_ = ((size_t)1ULL);
v___x_152_ = lean_usize_add(v_i_148_, v___x_151_);
v_i_148_ = v___x_152_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg___boxed(lean_object* v_as_161_, lean_object* v_i_162_, lean_object* v_stop_163_){
_start:
{
size_t v_i_boxed_164_; size_t v_stop_boxed_165_; uint8_t v_res_166_; lean_object* v_r_167_; 
v_i_boxed_164_ = lean_unbox_usize(v_i_162_);
lean_dec(v_i_162_);
v_stop_boxed_165_ = lean_unbox_usize(v_stop_163_);
lean_dec(v_stop_163_);
v_res_166_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(v_as_161_, v_i_boxed_164_, v_stop_boxed_165_);
lean_dec_ref(v_as_161_);
v_r_167_ = lean_box(v_res_166_);
return v_r_167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___redArg___boxed(lean_object* v_x_168_){
_start:
{
uint8_t v_res_169_; lean_object* v_r_170_; 
v_res_169_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_168_);
lean_dec_ref(v_x_168_);
v_r_170_ = lean_box(v_res_169_);
return v_r_170_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_Node_isEmpty(lean_object* v_00_u03b1_171_, lean_object* v_00_u03b2_172_, lean_object* v_x_173_){
_start:
{
uint8_t v___x_174_; 
v___x_174_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_173_);
return v___x_174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Node_isEmpty___boxed(lean_object* v_00_u03b1_175_, lean_object* v_00_u03b2_176_, lean_object* v_x_177_){
_start:
{
uint8_t v_res_178_; lean_object* v_r_179_; 
v_res_178_ = l_Lean_PersistentHashMap_Node_isEmpty(v_00_u03b1_175_, v_00_u03b2_176_, v_x_177_);
lean_dec_ref(v_x_177_);
v_r_179_ = lean_box(v_res_178_);
return v_r_179_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0(lean_object* v_00_u03b1_180_, lean_object* v_00_u03b2_181_, lean_object* v_as_182_, size_t v_i_183_, size_t v_stop_184_){
_start:
{
uint8_t v___x_185_; 
v___x_185_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___redArg(v_as_182_, v_i_183_, v_stop_184_);
return v___x_185_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0___boxed(lean_object* v_00_u03b1_186_, lean_object* v_00_u03b2_187_, lean_object* v_as_188_, lean_object* v_i_189_, lean_object* v_stop_190_){
_start:
{
size_t v_i_boxed_191_; size_t v_stop_boxed_192_; uint8_t v_res_193_; lean_object* v_r_194_; 
v_i_boxed_191_ = lean_unbox_usize(v_i_189_);
lean_dec(v_i_189_);
v_stop_boxed_192_ = lean_unbox_usize(v_stop_190_);
lean_dec(v_stop_190_);
v_res_193_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_PersistentHashMap_Node_isEmpty_spec__0(v_00_u03b1_186_, v_00_u03b2_187_, v_as_188_, v_i_boxed_191_, v_stop_boxed_192_);
lean_dec_ref(v_as_188_);
v_r_194_ = lean_box(v_res_193_);
return v_r_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg(){
_start:
{
lean_object* v___x_200_; 
v___x_200_ = ((lean_object*)(l_Lean_PersistentHashMap_instInhabitedNode___redArg___closed__1));
return v___x_200_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode___redArg___boxed(lean_object* v___dummy_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = l_Lean_PersistentHashMap_instInhabitedNode___redArg();
return v_res_202_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_instInhabitedNode___closed__0(void){
_start:
{
lean_object* v___x_203_; 
v___x_203_ = l_Lean_PersistentHashMap_instInhabitedNode___redArg();
return v___x_203_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabitedNode(lean_object* v_00_u03b1_204_, lean_object* v_00_u03b2_205_){
_start:
{
lean_object* v___x_206_; 
v___x_206_ = lean_obj_once(&l_Lean_PersistentHashMap_instInhabitedNode___closed__0, &l_Lean_PersistentHashMap_instInhabitedNode___closed__0_once, _init_l_Lean_PersistentHashMap_instInhabitedNode___closed__0);
return v___x_206_;
}
}
static size_t _init_l_Lean_PersistentHashMap_shift(void){
_start:
{
size_t v___x_207_; 
v___x_207_ = ((size_t)5ULL);
return v___x_207_;
}
}
static size_t _init_l_Lean_PersistentHashMap_branching(void){
_start:
{
size_t v___x_208_; 
v___x_208_ = ((size_t)32ULL);
return v___x_208_;
}
}
static size_t _init_l_Lean_PersistentHashMap_maxDepth(void){
_start:
{
size_t v___x_209_; 
v___x_209_ = ((size_t)7ULL);
return v___x_209_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_maxCollisions(void){
_start:
{
lean_object* v___x_210_; 
v___x_210_ = lean_unsigned_to_nat(4u);
return v___x_210_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0(void){
_start:
{
lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = lean_box(2);
v___x_212_ = lean_unsigned_to_nat(32u);
v___x_213_ = lean_mk_array(v___x_212_, v___x_211_);
return v___x_213_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg(){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___closed__0);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg___boxed(lean_object* v___dummy_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v_res_217_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0(void){
_start:
{
lean_object* v___x_218_; 
v___x_218_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray(lean_object* v_00_u03b1_219_, lean_object* v_00_u03b2_220_){
_start:
{
lean_object* v___x_221_; 
v___x_221_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0);
return v___x_221_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___redArg___closed__0(void){
_start:
{
lean_object* v___x_222_; lean_object* v___x_223_; 
v___x_222_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntriesArray___closed__0);
v___x_223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_223_, 0, v___x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg(){
_start:
{
lean_object* v___x_225_; 
v___x_225_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___redArg___closed__0, &l_Lean_PersistentHashMap_empty___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___redArg___closed__0);
return v___x_225_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___redArg___boxed(lean_object* v___dummy_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_PersistentHashMap_empty___redArg();
return v_res_227_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___closed__0(void){
_start:
{
lean_object* v___x_228_; 
v___x_228_ = l_Lean_PersistentHashMap_empty___redArg();
return v___x_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty(lean_object* v_00_u03b1_229_, lean_object* v_00_u03b2_230_, lean_object* v_inst_231_, lean_object* v_inst_232_){
_start:
{
lean_object* v___x_233_; 
v___x_233_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___closed__0, &l_Lean_PersistentHashMap_empty___closed__0_once, _init_l_Lean_PersistentHashMap_empty___closed__0);
return v___x_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___boxed(lean_object* v_00_u03b1_234_, lean_object* v_00_u03b2_235_, lean_object* v_inst_236_, lean_object* v_inst_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = l_Lean_PersistentHashMap_empty(v_00_u03b1_234_, v_00_u03b2_235_, v_inst_236_, v_inst_237_);
lean_dec_ref(v_inst_237_);
lean_dec_ref(v_inst_236_);
return v_res_238_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty___redArg(lean_object* v_x_239_){
_start:
{
uint8_t v___x_240_; 
v___x_240_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_239_);
return v___x_240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___redArg___boxed(lean_object* v_x_241_){
_start:
{
uint8_t v_res_242_; lean_object* v_r_243_; 
v_res_242_ = l_Lean_PersistentHashMap_isEmpty___redArg(v_x_241_);
lean_dec_ref(v_x_241_);
v_r_243_ = lean_box(v_res_242_);
return v_r_243_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_isEmpty(lean_object* v_00_u03b1_244_, lean_object* v_00_u03b2_245_, lean_object* v_x_246_, lean_object* v_x_247_, lean_object* v_x_248_){
_start:
{
uint8_t v___x_249_; 
v___x_249_ = l_Lean_PersistentHashMap_Node_isEmpty___redArg(v_x_248_);
return v___x_249_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isEmpty___boxed(lean_object* v_00_u03b1_250_, lean_object* v_00_u03b2_251_, lean_object* v_x_252_, lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
uint8_t v_res_255_; lean_object* v_r_256_; 
v_res_255_ = l_Lean_PersistentHashMap_isEmpty(v_00_u03b1_250_, v_00_u03b2_251_, v_x_252_, v_x_253_, v_x_254_);
lean_dec_ref(v_x_254_);
lean_dec_ref(v_x_253_);
lean_dec_ref(v_x_252_);
v_r_256_ = lean_box(v_res_255_);
return v_r_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg(){
_start:
{
lean_object* v___x_258_; 
v___x_258_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___redArg___closed__0, &l_Lean_PersistentHashMap_empty___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___redArg___closed__0);
return v___x_258_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___redArg___boxed(lean_object* v___dummy_259_){
_start:
{
lean_object* v_res_260_; 
v_res_260_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v_res_260_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_instInhabited___closed__0(void){
_start:
{
lean_object* v___x_261_; 
v___x_261_ = l_Lean_PersistentHashMap_instInhabited___redArg();
return v___x_261_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited(lean_object* v_00_u03b1_262_, lean_object* v_00_u03b2_263_, lean_object* v_inst_264_, lean_object* v_inst_265_){
_start:
{
lean_object* v___x_266_; 
v___x_266_ = lean_obj_once(&l_Lean_PersistentHashMap_instInhabited___closed__0, &l_Lean_PersistentHashMap_instInhabited___closed__0_once, _init_l_Lean_PersistentHashMap_instInhabited___closed__0);
return v___x_266_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instInhabited___boxed(lean_object* v_00_u03b1_267_, lean_object* v_00_u03b2_268_, lean_object* v_inst_269_, lean_object* v_inst_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = l_Lean_PersistentHashMap_instInhabited(v_00_u03b1_267_, v_00_u03b2_268_, v_inst_269_, v_inst_270_);
lean_dec_ref(v_inst_270_);
lean_dec_ref(v_inst_269_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg(){
_start:
{
lean_object* v___x_273_; 
v___x_273_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___redArg___closed__0, &l_Lean_PersistentHashMap_empty___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___redArg___closed__0);
return v___x_273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg___boxed(lean_object* v___dummy_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v_res_275_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_mkEmptyEntries___closed__0(void){
_start:
{
lean_object* v___x_276_; 
v___x_276_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_276_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkEmptyEntries(lean_object* v_00_u03b1_277_, lean_object* v_00_u03b2_278_){
_start:
{
lean_object* v___x_279_; 
v___x_279_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntries___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntries___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntries___closed__0);
return v___x_279_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mul2Shift(size_t v_i_280_, size_t v_shift_281_){
_start:
{
size_t v___x_282_; 
v___x_282_ = lean_usize_shift_left(v_i_280_, v_shift_281_);
return v___x_282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mul2Shift___boxed(lean_object* v_i_283_, lean_object* v_shift_284_){
_start:
{
size_t v_i_boxed_285_; size_t v_shift_boxed_286_; size_t v_res_287_; lean_object* v_r_288_; 
v_i_boxed_285_ = lean_unbox_usize(v_i_283_);
lean_dec(v_i_283_);
v_shift_boxed_286_ = lean_unbox_usize(v_shift_284_);
lean_dec(v_shift_284_);
v_res_287_ = l_Lean_PersistentHashMap_mul2Shift(v_i_boxed_285_, v_shift_boxed_286_);
v_r_288_ = lean_box_usize(v_res_287_);
return v_r_288_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentHashMap_div2Shift(size_t v_i_289_, size_t v_shift_290_){
_start:
{
size_t v___x_291_; 
v___x_291_ = lean_usize_shift_right(v_i_289_, v_shift_290_);
return v___x_291_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_div2Shift___boxed(lean_object* v_i_292_, lean_object* v_shift_293_){
_start:
{
size_t v_i_boxed_294_; size_t v_shift_boxed_295_; size_t v_res_296_; lean_object* v_r_297_; 
v_i_boxed_294_ = lean_unbox_usize(v_i_292_);
lean_dec(v_i_292_);
v_shift_boxed_295_ = lean_unbox_usize(v_shift_293_);
lean_dec(v_shift_293_);
v_res_296_ = l_Lean_PersistentHashMap_div2Shift(v_i_boxed_294_, v_shift_boxed_295_);
v_r_297_ = lean_box_usize(v_res_296_);
return v_r_297_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentHashMap_mod2Shift(size_t v_i_298_, size_t v_shift_299_){
_start:
{
size_t v___x_300_; size_t v___x_301_; size_t v___x_302_; size_t v___x_303_; 
v___x_300_ = ((size_t)1ULL);
v___x_301_ = lean_usize_shift_left(v___x_300_, v_shift_299_);
v___x_302_ = lean_usize_sub(v___x_301_, v___x_300_);
v___x_303_ = lean_usize_land(v_i_298_, v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mod2Shift___boxed(lean_object* v_i_304_, lean_object* v_shift_305_){
_start:
{
size_t v_i_boxed_306_; size_t v_shift_boxed_307_; size_t v_res_308_; lean_object* v_r_309_; 
v_i_boxed_306_ = lean_unbox_usize(v_i_304_);
lean_dec(v_i_304_);
v_shift_boxed_307_ = lean_unbox_usize(v_shift_305_);
lean_dec(v_shift_305_);
v_res_308_ = l_Lean_PersistentHashMap_mod2Shift(v_i_boxed_306_, v_shift_boxed_307_);
v_r_309_ = lean_box_usize(v_res_308_);
return v_r_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(lean_object* v_inst_310_, lean_object* v_x_311_, lean_object* v_x_312_, lean_object* v_x_313_, lean_object* v_x_314_){
_start:
{
lean_object* v_ks_315_; lean_object* v_vs_316_; lean_object* v___x_318_; uint8_t v_isShared_319_; uint8_t v_isSharedCheck_341_; 
v_ks_315_ = lean_ctor_get(v_x_311_, 0);
v_vs_316_ = lean_ctor_get(v_x_311_, 1);
v_isSharedCheck_341_ = !lean_is_exclusive(v_x_311_);
if (v_isSharedCheck_341_ == 0)
{
v___x_318_ = v_x_311_;
v_isShared_319_ = v_isSharedCheck_341_;
goto v_resetjp_317_;
}
else
{
lean_inc(v_vs_316_);
lean_inc(v_ks_315_);
lean_dec(v_x_311_);
v___x_318_ = lean_box(0);
v_isShared_319_ = v_isSharedCheck_341_;
goto v_resetjp_317_;
}
v_resetjp_317_:
{
lean_object* v___x_320_; uint8_t v___x_321_; 
v___x_320_ = lean_array_get_size(v_ks_315_);
v___x_321_ = lean_nat_dec_lt(v_x_312_, v___x_320_);
if (v___x_321_ == 0)
{
lean_object* v___x_322_; lean_object* v___x_323_; lean_object* v___x_325_; 
lean_dec(v_x_312_);
lean_dec_ref(v_inst_310_);
v___x_322_ = lean_array_push(v_ks_315_, v_x_313_);
v___x_323_ = lean_array_push(v_vs_316_, v_x_314_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_323_);
lean_ctor_set(v___x_318_, 0, v___x_322_);
v___x_325_ = v___x_318_;
goto v_reusejp_324_;
}
else
{
lean_object* v_reuseFailAlloc_326_; 
v_reuseFailAlloc_326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_326_, 0, v___x_322_);
lean_ctor_set(v_reuseFailAlloc_326_, 1, v___x_323_);
v___x_325_ = v_reuseFailAlloc_326_;
goto v_reusejp_324_;
}
v_reusejp_324_:
{
return v___x_325_;
}
}
else
{
lean_object* v_k_x27_327_; lean_object* v___x_328_; uint8_t v___x_329_; 
v_k_x27_327_ = lean_array_fget_borrowed(v_ks_315_, v_x_312_);
lean_inc_ref(v_inst_310_);
lean_inc(v_k_x27_327_);
lean_inc(v_x_313_);
v___x_328_ = lean_apply_2(v_inst_310_, v_x_313_, v_k_x27_327_);
v___x_329_ = lean_unbox(v___x_328_);
if (v___x_329_ == 0)
{
lean_object* v___x_331_; 
if (v_isShared_319_ == 0)
{
v___x_331_ = v___x_318_;
goto v_reusejp_330_;
}
else
{
lean_object* v_reuseFailAlloc_335_; 
v_reuseFailAlloc_335_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_335_, 0, v_ks_315_);
lean_ctor_set(v_reuseFailAlloc_335_, 1, v_vs_316_);
v___x_331_ = v_reuseFailAlloc_335_;
goto v_reusejp_330_;
}
v_reusejp_330_:
{
lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_332_ = lean_unsigned_to_nat(1u);
v___x_333_ = lean_nat_add(v_x_312_, v___x_332_);
lean_dec(v_x_312_);
v_x_311_ = v___x_331_;
v_x_312_ = v___x_333_;
goto _start;
}
}
else
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
lean_dec_ref(v_inst_310_);
v___x_336_ = lean_array_fset(v_ks_315_, v_x_312_, v_x_313_);
v___x_337_ = lean_array_fset(v_vs_316_, v_x_312_, v_x_314_);
lean_dec(v_x_312_);
if (v_isShared_319_ == 0)
{
lean_ctor_set(v___x_318_, 1, v___x_337_);
lean_ctor_set(v___x_318_, 0, v___x_336_);
v___x_339_ = v___x_318_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_340_; 
v_reuseFailAlloc_340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_340_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_340_, 1, v___x_337_);
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
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux(lean_object* v_00_u03b1_342_, lean_object* v_00_u03b2_343_, lean_object* v_inst_344_, lean_object* v_x_345_, lean_object* v_x_346_, lean_object* v_x_347_, lean_object* v_x_348_){
_start:
{
lean_object* v___x_349_; 
v___x_349_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(v_inst_344_, v_x_345_, v_x_346_, v_x_347_, v_x_348_);
return v___x_349_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(lean_object* v_inst_350_, lean_object* v_n_351_, lean_object* v_k_352_, lean_object* v_v_353_){
_start:
{
lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_354_ = lean_unsigned_to_nat(0u);
v___x_355_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___redArg(v_inst_350_, v_n_351_, v___x_354_, v_k_352_, v_v_353_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode(lean_object* v_00_u03b1_356_, lean_object* v_00_u03b2_357_, lean_object* v_inst_358_, lean_object* v_n_359_, lean_object* v_k_360_, lean_object* v_v_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(v_inst_358_, v_n_359_, v_k_360_, v_v_361_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object* v_x_363_){
_start:
{
lean_object* v_ks_364_; lean_object* v___x_365_; 
v_ks_364_ = lean_ctor_get(v_x_363_, 0);
v___x_365_ = lean_array_get_size(v_ks_364_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg___boxed(lean_object* v_x_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_x_366_);
lean_dec_ref(v_x_366_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize(lean_object* v_00_u03b1_368_, lean_object* v_00_u03b2_369_, lean_object* v_x_370_){
_start:
{
lean_object* v___x_371_; 
v___x_371_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_x_370_);
return v___x_371_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___boxed(lean_object* v_00_u03b1_372_, lean_object* v_00_u03b2_373_, lean_object* v_x_374_){
_start:
{
lean_object* v_res_375_; 
v_res_375_ = l_Lean_PersistentHashMap_getCollisionNodeSize(v_00_u03b1_372_, v_00_u03b2_373_, v_x_374_);
lean_dec_ref(v_x_374_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object* v_k_u2081_376_, lean_object* v_v_u2081_377_, lean_object* v_k_u2082_378_, lean_object* v_v_u2082_379_){
_start:
{
lean_object* v___x_380_; lean_object* v_ks_381_; lean_object* v___x_382_; lean_object* v_ks_383_; lean_object* v___x_384_; lean_object* v_vs_385_; lean_object* v___x_386_; 
v___x_380_ = lean_unsigned_to_nat(4u);
v_ks_381_ = lean_mk_empty_array_with_capacity(v___x_380_);
lean_inc_ref(v_ks_381_);
v___x_382_ = lean_array_push(v_ks_381_, v_k_u2081_376_);
v_ks_383_ = lean_array_push(v___x_382_, v_k_u2082_378_);
v___x_384_ = lean_array_push(v_ks_381_, v_v_u2081_377_);
v_vs_385_ = lean_array_push(v___x_384_, v_v_u2082_379_);
v___x_386_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_386_, 0, v_ks_383_);
lean_ctor_set(v___x_386_, 1, v_vs_385_);
return v___x_386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mkCollisionNode(lean_object* v_00_u03b1_387_, lean_object* v_00_u03b2_388_, lean_object* v_k_u2081_389_, lean_object* v_v_u2081_390_, lean_object* v_k_u2082_391_, lean_object* v_v_u2082_392_){
_start:
{
lean_object* v___x_393_; 
v___x_393_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_k_u2081_389_, v_v_u2081_390_, v_k_u2082_391_, v_v_u2082_392_);
return v___x_393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg(lean_object* v_inst_394_, lean_object* v_inst_395_, lean_object* v_x_396_, size_t v_x_397_, size_t v_x_398_, lean_object* v_x_399_, lean_object* v_x_400_){
_start:
{
if (lean_obj_tag(v_x_396_) == 0)
{
lean_object* v_es_401_; size_t v___x_402_; size_t v___x_403_; lean_object* v_j_404_; lean_object* v___x_405_; uint8_t v___x_406_; 
v_es_401_ = lean_ctor_get(v_x_396_, 0);
v___x_402_ = ((size_t)31ULL);
v___x_403_ = lean_usize_land(v_x_397_, v___x_402_);
v_j_404_ = lean_usize_to_nat(v___x_403_);
v___x_405_ = lean_array_get_size(v_es_401_);
v___x_406_ = lean_nat_dec_lt(v_j_404_, v___x_405_);
if (v___x_406_ == 0)
{
lean_dec(v_j_404_);
lean_dec(v_x_400_);
lean_dec(v_x_399_);
lean_dec_ref(v_inst_395_);
lean_dec_ref(v_inst_394_);
return v_x_396_;
}
else
{
lean_object* v___x_408_; uint8_t v_isShared_409_; uint8_t v_isSharedCheck_446_; 
lean_inc_ref(v_es_401_);
v_isSharedCheck_446_ = !lean_is_exclusive(v_x_396_);
if (v_isSharedCheck_446_ == 0)
{
lean_object* v_unused_447_; 
v_unused_447_ = lean_ctor_get(v_x_396_, 0);
lean_dec(v_unused_447_);
v___x_408_ = v_x_396_;
v_isShared_409_ = v_isSharedCheck_446_;
goto v_resetjp_407_;
}
else
{
lean_dec(v_x_396_);
v___x_408_ = lean_box(0);
v_isShared_409_ = v_isSharedCheck_446_;
goto v_resetjp_407_;
}
v_resetjp_407_:
{
lean_object* v_v_410_; lean_object* v___x_411_; lean_object* v_xs_x27_412_; lean_object* v___y_414_; 
v_v_410_ = lean_array_fget(v_es_401_, v_j_404_);
v___x_411_ = lean_box(0);
v_xs_x27_412_ = lean_array_fset(v_es_401_, v_j_404_, v___x_411_);
switch(lean_obj_tag(v_v_410_))
{
case 0:
{
lean_object* v_key_419_; lean_object* v_val_420_; lean_object* v___x_422_; uint8_t v_isShared_423_; uint8_t v_isSharedCheck_431_; 
lean_dec_ref(v_inst_395_);
v_key_419_ = lean_ctor_get(v_v_410_, 0);
v_val_420_ = lean_ctor_get(v_v_410_, 1);
v_isSharedCheck_431_ = !lean_is_exclusive(v_v_410_);
if (v_isSharedCheck_431_ == 0)
{
v___x_422_ = v_v_410_;
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
else
{
lean_inc(v_val_420_);
lean_inc(v_key_419_);
lean_dec(v_v_410_);
v___x_422_ = lean_box(0);
v_isShared_423_ = v_isSharedCheck_431_;
goto v_resetjp_421_;
}
v_resetjp_421_:
{
lean_object* v___x_424_; uint8_t v___x_425_; 
lean_inc(v_key_419_);
lean_inc(v_x_399_);
v___x_424_ = lean_apply_2(v_inst_394_, v_x_399_, v_key_419_);
v___x_425_ = lean_unbox(v___x_424_);
if (v___x_425_ == 0)
{
lean_object* v___x_426_; lean_object* v___x_427_; 
lean_del_object(v___x_422_);
v___x_426_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_419_, v_val_420_, v_x_399_, v_x_400_);
v___x_427_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
v___y_414_ = v___x_427_;
goto v___jp_413_;
}
else
{
lean_object* v___x_429_; 
lean_dec(v_val_420_);
lean_dec(v_key_419_);
if (v_isShared_423_ == 0)
{
lean_ctor_set(v___x_422_, 1, v_x_400_);
lean_ctor_set(v___x_422_, 0, v_x_399_);
v___x_429_ = v___x_422_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_430_; 
v_reuseFailAlloc_430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_430_, 0, v_x_399_);
lean_ctor_set(v_reuseFailAlloc_430_, 1, v_x_400_);
v___x_429_ = v_reuseFailAlloc_430_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
v___y_414_ = v___x_429_;
goto v___jp_413_;
}
}
}
}
case 1:
{
lean_object* v_node_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_444_; 
v_node_432_ = lean_ctor_get(v_v_410_, 0);
v_isSharedCheck_444_ = !lean_is_exclusive(v_v_410_);
if (v_isSharedCheck_444_ == 0)
{
v___x_434_ = v_v_410_;
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_node_432_);
lean_dec(v_v_410_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
size_t v___x_436_; size_t v___x_437_; size_t v___x_438_; size_t v___x_439_; lean_object* v___x_440_; lean_object* v___x_442_; 
v___x_436_ = ((size_t)5ULL);
v___x_437_ = lean_usize_shift_right(v_x_397_, v___x_436_);
v___x_438_ = ((size_t)1ULL);
v___x_439_ = lean_usize_add(v_x_398_, v___x_438_);
v___x_440_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_394_, v_inst_395_, v_node_432_, v___x_437_, v___x_439_, v_x_399_, v_x_400_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 0, v___x_440_);
v___x_442_ = v___x_434_;
goto v_reusejp_441_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v___x_440_);
v___x_442_ = v_reuseFailAlloc_443_;
goto v_reusejp_441_;
}
v_reusejp_441_:
{
v___y_414_ = v___x_442_;
goto v___jp_413_;
}
}
}
default: 
{
lean_object* v___x_445_; 
lean_dec_ref(v_inst_395_);
lean_dec_ref(v_inst_394_);
v___x_445_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_445_, 0, v_x_399_);
lean_ctor_set(v___x_445_, 1, v_x_400_);
v___y_414_ = v___x_445_;
goto v___jp_413_;
}
}
v___jp_413_:
{
lean_object* v___x_415_; lean_object* v___x_417_; 
v___x_415_ = lean_array_fset(v_xs_x27_412_, v_j_404_, v___y_414_);
lean_dec(v_j_404_);
if (v_isShared_409_ == 0)
{
lean_ctor_set(v___x_408_, 0, v___x_415_);
v___x_417_ = v___x_408_;
goto v_reusejp_416_;
}
else
{
lean_object* v_reuseFailAlloc_418_; 
v_reuseFailAlloc_418_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_418_, 0, v___x_415_);
v___x_417_ = v_reuseFailAlloc_418_;
goto v_reusejp_416_;
}
v_reusejp_416_:
{
return v___x_417_;
}
}
}
}
}
else
{
lean_object* v_ks_448_; lean_object* v_vs_449_; lean_object* v___x_451_; uint8_t v_isShared_452_; uint8_t v_isSharedCheck_467_; 
v_ks_448_ = lean_ctor_get(v_x_396_, 0);
v_vs_449_ = lean_ctor_get(v_x_396_, 1);
v_isSharedCheck_467_ = !lean_is_exclusive(v_x_396_);
if (v_isSharedCheck_467_ == 0)
{
v___x_451_ = v_x_396_;
v_isShared_452_ = v_isSharedCheck_467_;
goto v_resetjp_450_;
}
else
{
lean_inc(v_vs_449_);
lean_inc(v_ks_448_);
lean_dec(v_x_396_);
v___x_451_ = lean_box(0);
v_isShared_452_ = v_isSharedCheck_467_;
goto v_resetjp_450_;
}
v_resetjp_450_:
{
lean_object* v___x_454_; 
if (v_isShared_452_ == 0)
{
v___x_454_ = v___x_451_;
goto v_reusejp_453_;
}
else
{
lean_object* v_reuseFailAlloc_466_; 
v_reuseFailAlloc_466_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_466_, 0, v_ks_448_);
lean_ctor_set(v_reuseFailAlloc_466_, 1, v_vs_449_);
v___x_454_ = v_reuseFailAlloc_466_;
goto v_reusejp_453_;
}
v_reusejp_453_:
{
lean_object* v_val_455_; size_t v___x_456_; uint8_t v___x_457_; 
lean_inc_ref(v_inst_394_);
v_val_455_ = l_Lean_PersistentHashMap_insertAtCollisionNode___redArg(v_inst_394_, v___x_454_, v_x_399_, v_x_400_);
v___x_456_ = ((size_t)7ULL);
v___x_457_ = lean_usize_dec_le(v___x_456_, v_x_398_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_458_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_val_455_);
v___x_459_ = lean_unsigned_to_nat(4u);
v___x_460_ = lean_nat_dec_lt(v___x_458_, v___x_459_);
lean_dec(v___x_458_);
if (v___x_460_ == 0)
{
lean_object* v_ks_461_; lean_object* v_vs_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v_ks_461_ = lean_ctor_get(v_val_455_, 0);
lean_inc_ref(v_ks_461_);
v_vs_462_ = lean_ctor_get(v_val_455_, 1);
lean_inc_ref(v_vs_462_);
lean_dec_ref(v_val_455_);
v___x_463_ = lean_unsigned_to_nat(0u);
v___x_464_ = lean_obj_once(&l_Lean_PersistentHashMap_mkEmptyEntries___closed__0, &l_Lean_PersistentHashMap_mkEmptyEntries___closed__0_once, _init_l_Lean_PersistentHashMap_mkEmptyEntries___closed__0);
v___x_465_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(v_inst_394_, v_inst_395_, v_x_398_, v_ks_461_, v_vs_462_, v___x_463_, v___x_464_);
lean_dec_ref(v_vs_462_);
lean_dec_ref(v_ks_461_);
return v___x_465_;
}
else
{
lean_dec_ref(v_inst_395_);
lean_dec_ref(v_inst_394_);
return v_val_455_;
}
}
else
{
lean_dec_ref(v_inst_395_);
lean_dec_ref(v_inst_394_);
return v_val_455_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(lean_object* v_inst_468_, lean_object* v_inst_469_, size_t v_depth_470_, lean_object* v_keys_471_, lean_object* v_vals_472_, lean_object* v_i_473_, lean_object* v_entries_474_){
_start:
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = lean_array_get_size(v_keys_471_);
v___x_476_ = lean_nat_dec_lt(v_i_473_, v___x_475_);
if (v___x_476_ == 0)
{
lean_dec(v_i_473_);
lean_dec_ref(v_inst_469_);
lean_dec_ref(v_inst_468_);
return v_entries_474_;
}
else
{
lean_object* v_k_477_; lean_object* v_v_478_; lean_object* v___x_479_; uint64_t v___x_480_; size_t v_h_481_; size_t v___x_482_; lean_object* v___x_483_; size_t v___x_484_; size_t v___x_485_; size_t v___x_486_; size_t v_h_487_; lean_object* v___x_488_; lean_object* v___x_489_; 
v_k_477_ = lean_array_fget_borrowed(v_keys_471_, v_i_473_);
v_v_478_ = lean_array_fget_borrowed(v_vals_472_, v_i_473_);
lean_inc_ref_n(v_inst_469_, 2);
lean_inc_n(v_k_477_, 2);
v___x_479_ = lean_apply_1(v_inst_469_, v_k_477_);
v___x_480_ = lean_unbox_uint64(v___x_479_);
lean_dec_ref(v___x_479_);
v_h_481_ = lean_uint64_to_usize(v___x_480_);
v___x_482_ = ((size_t)5ULL);
v___x_483_ = lean_unsigned_to_nat(1u);
v___x_484_ = ((size_t)1ULL);
v___x_485_ = lean_usize_sub(v_depth_470_, v___x_484_);
v___x_486_ = lean_usize_mul(v___x_482_, v___x_485_);
v_h_487_ = lean_usize_shift_right(v_h_481_, v___x_486_);
v___x_488_ = lean_nat_add(v_i_473_, v___x_483_);
lean_dec(v_i_473_);
lean_inc(v_v_478_);
lean_inc_ref(v_inst_468_);
v___x_489_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_468_, v_inst_469_, v_entries_474_, v_h_487_, v_depth_470_, v_k_477_, v_v_478_);
v_i_473_ = v___x_488_;
v_entries_474_ = v___x_489_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg___boxed(lean_object* v_inst_491_, lean_object* v_inst_492_, lean_object* v_depth_493_, lean_object* v_keys_494_, lean_object* v_vals_495_, lean_object* v_i_496_, lean_object* v_entries_497_){
_start:
{
size_t v_depth_boxed_498_; lean_object* v_res_499_; 
v_depth_boxed_498_ = lean_unbox_usize(v_depth_493_);
lean_dec(v_depth_493_);
v_res_499_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(v_inst_491_, v_inst_492_, v_depth_boxed_498_, v_keys_494_, v_vals_495_, v_i_496_, v_entries_497_);
lean_dec_ref(v_vals_495_);
lean_dec_ref(v_keys_494_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___redArg___boxed(lean_object* v_inst_500_, lean_object* v_inst_501_, lean_object* v_x_502_, lean_object* v_x_503_, lean_object* v_x_504_, lean_object* v_x_505_, lean_object* v_x_506_){
_start:
{
size_t v_x_412__boxed_507_; size_t v_x_413__boxed_508_; lean_object* v_res_509_; 
v_x_412__boxed_507_ = lean_unbox_usize(v_x_503_);
lean_dec(v_x_503_);
v_x_413__boxed_508_ = lean_unbox_usize(v_x_504_);
lean_dec(v_x_504_);
v_res_509_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_500_, v_inst_501_, v_x_502_, v_x_412__boxed_507_, v_x_413__boxed_508_, v_x_505_, v_x_506_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse(lean_object* v_00_u03b1_510_, lean_object* v_00_u03b2_511_, lean_object* v_inst_512_, lean_object* v_inst_513_, size_t v_depth_514_, lean_object* v_keys_515_, lean_object* v_vals_516_, lean_object* v_heq_517_, lean_object* v_i_518_, lean_object* v_entries_519_){
_start:
{
lean_object* v___x_520_; 
v___x_520_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___redArg(v_inst_512_, v_inst_513_, v_depth_514_, v_keys_515_, v_vals_516_, v_i_518_, v_entries_519_);
return v___x_520_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___boxed(lean_object* v_00_u03b1_521_, lean_object* v_00_u03b2_522_, lean_object* v_inst_523_, lean_object* v_inst_524_, lean_object* v_depth_525_, lean_object* v_keys_526_, lean_object* v_vals_527_, lean_object* v_heq_528_, lean_object* v_i_529_, lean_object* v_entries_530_){
_start:
{
size_t v_depth_boxed_531_; lean_object* v_res_532_; 
v_depth_boxed_531_ = lean_unbox_usize(v_depth_525_);
lean_dec(v_depth_525_);
v_res_532_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse(v_00_u03b1_521_, v_00_u03b2_522_, v_inst_523_, v_inst_524_, v_depth_boxed_531_, v_keys_526_, v_vals_527_, v_heq_528_, v_i_529_, v_entries_530_);
lean_dec_ref(v_vals_527_);
lean_dec_ref(v_keys_526_);
return v_res_532_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux(lean_object* v_00_u03b1_533_, lean_object* v_00_u03b2_534_, lean_object* v_inst_535_, lean_object* v_inst_536_, lean_object* v_x_537_, size_t v_x_538_, size_t v_x_539_, lean_object* v_x_540_, lean_object* v_x_541_){
_start:
{
lean_object* v___x_542_; 
v___x_542_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_535_, v_inst_536_, v_x_537_, v_x_538_, v_x_539_, v_x_540_, v_x_541_);
return v___x_542_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___boxed(lean_object* v_00_u03b1_543_, lean_object* v_00_u03b2_544_, lean_object* v_inst_545_, lean_object* v_inst_546_, lean_object* v_x_547_, lean_object* v_x_548_, lean_object* v_x_549_, lean_object* v_x_550_, lean_object* v_x_551_){
_start:
{
size_t v_x_587__boxed_552_; size_t v_x_588__boxed_553_; lean_object* v_res_554_; 
v_x_587__boxed_552_ = lean_unbox_usize(v_x_548_);
lean_dec(v_x_548_);
v_x_588__boxed_553_ = lean_unbox_usize(v_x_549_);
lean_dec(v_x_549_);
v_res_554_ = l_Lean_PersistentHashMap_insertAux(v_00_u03b1_543_, v_00_u03b2_544_, v_inst_545_, v_inst_546_, v_x_547_, v_x_587__boxed_552_, v_x_588__boxed_553_, v_x_550_, v_x_551_);
return v_res_554_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___redArg(lean_object* v_x_555_, lean_object* v_x_556_, lean_object* v_x_557_, lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
lean_object* v___x_560_; uint64_t v___x_561_; size_t v___x_562_; size_t v___x_563_; lean_object* v___x_564_; 
lean_inc_ref(v_x_556_);
lean_inc(v_x_558_);
v___x_560_ = lean_apply_1(v_x_556_, v_x_558_);
v___x_561_ = lean_unbox_uint64(v___x_560_);
lean_dec_ref(v___x_560_);
v___x_562_ = lean_uint64_to_usize(v___x_561_);
v___x_563_ = ((size_t)1ULL);
v___x_564_ = l_Lean_PersistentHashMap_insertAux___redArg(v_x_555_, v_x_556_, v_x_557_, v___x_562_, v___x_563_, v_x_558_, v_x_559_);
return v___x_564_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert(lean_object* v_00_u03b1_565_, lean_object* v_00_u03b2_566_, lean_object* v_x_567_, lean_object* v_x_568_, lean_object* v_x_569_, lean_object* v_x_570_, lean_object* v_x_571_){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = l_Lean_PersistentHashMap_insert___redArg(v_x_567_, v_x_568_, v_x_569_, v_x_570_, v_x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg(lean_object* v_inst_573_, lean_object* v_keys_574_, lean_object* v_vals_575_, lean_object* v_i_576_, lean_object* v_k_577_){
_start:
{
lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_578_ = lean_array_get_size(v_keys_574_);
v___x_579_ = lean_nat_dec_lt(v_i_576_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
lean_dec(v_k_577_);
lean_dec(v_i_576_);
lean_dec_ref(v_inst_573_);
v___x_580_ = lean_box(0);
return v___x_580_;
}
else
{
lean_object* v_k_x27_581_; lean_object* v___x_582_; uint8_t v___x_583_; 
v_k_x27_581_ = lean_array_fget_borrowed(v_keys_574_, v_i_576_);
lean_inc_ref(v_inst_573_);
lean_inc(v_k_x27_581_);
lean_inc(v_k_577_);
v___x_582_ = lean_apply_2(v_inst_573_, v_k_577_, v_k_x27_581_);
v___x_583_ = lean_unbox(v___x_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; lean_object* v___x_585_; 
v___x_584_ = lean_unsigned_to_nat(1u);
v___x_585_ = lean_nat_add(v_i_576_, v___x_584_);
lean_dec(v_i_576_);
v_i_576_ = v___x_585_;
goto _start;
}
else
{
lean_object* v___x_587_; lean_object* v___x_588_; 
lean_dec(v_k_577_);
lean_dec_ref(v_inst_573_);
v___x_587_ = lean_array_fget_borrowed(v_vals_575_, v_i_576_);
lean_dec(v_i_576_);
lean_inc(v___x_587_);
v___x_588_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_588_, 0, v___x_587_);
return v___x_588_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___redArg___boxed(lean_object* v_inst_589_, lean_object* v_keys_590_, lean_object* v_vals_591_, lean_object* v_i_592_, lean_object* v_k_593_){
_start:
{
lean_object* v_res_594_; 
v_res_594_ = l_Lean_PersistentHashMap_findAtAux___redArg(v_inst_589_, v_keys_590_, v_vals_591_, v_i_592_, v_k_593_);
lean_dec_ref(v_vals_591_);
lean_dec_ref(v_keys_590_);
return v_res_594_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux(lean_object* v_00_u03b1_595_, lean_object* v_00_u03b2_596_, lean_object* v_inst_597_, lean_object* v_keys_598_, lean_object* v_vals_599_, lean_object* v_heq_600_, lean_object* v_i_601_, lean_object* v_k_602_){
_start:
{
lean_object* v___x_603_; 
v___x_603_ = l_Lean_PersistentHashMap_findAtAux___redArg(v_inst_597_, v_keys_598_, v_vals_599_, v_i_601_, v_k_602_);
return v___x_603_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___boxed(lean_object* v_00_u03b1_604_, lean_object* v_00_u03b2_605_, lean_object* v_inst_606_, lean_object* v_keys_607_, lean_object* v_vals_608_, lean_object* v_heq_609_, lean_object* v_i_610_, lean_object* v_k_611_){
_start:
{
lean_object* v_res_612_; 
v_res_612_ = l_Lean_PersistentHashMap_findAtAux(v_00_u03b1_604_, v_00_u03b2_605_, v_inst_606_, v_keys_607_, v_vals_608_, v_heq_609_, v_i_610_, v_k_611_);
lean_dec_ref(v_vals_608_);
lean_dec_ref(v_keys_607_);
return v_res_612_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg(lean_object* v_inst_613_, lean_object* v_x_614_, size_t v_x_615_, lean_object* v_x_616_){
_start:
{
if (lean_obj_tag(v_x_614_) == 0)
{
lean_object* v_es_617_; lean_object* v___x_618_; size_t v___x_619_; size_t v___x_620_; lean_object* v_j_621_; lean_object* v___x_622_; 
v_es_617_ = lean_ctor_get(v_x_614_, 0);
lean_inc_ref(v_es_617_);
lean_dec_ref_known(v_x_614_, 1);
v___x_618_ = lean_box(2);
v___x_619_ = ((size_t)31ULL);
v___x_620_ = lean_usize_land(v_x_615_, v___x_619_);
v_j_621_ = lean_usize_to_nat(v___x_620_);
v___x_622_ = lean_array_get(v___x_618_, v_es_617_, v_j_621_);
lean_dec(v_j_621_);
lean_dec_ref(v_es_617_);
switch(lean_obj_tag(v___x_622_))
{
case 0:
{
lean_object* v_key_623_; lean_object* v_val_624_; lean_object* v___x_625_; uint8_t v___x_626_; 
v_key_623_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_key_623_);
v_val_624_ = lean_ctor_get(v___x_622_, 1);
lean_inc(v_val_624_);
lean_dec_ref_known(v___x_622_, 2);
v___x_625_ = lean_apply_2(v_inst_613_, v_x_616_, v_key_623_);
v___x_626_ = lean_unbox(v___x_625_);
if (v___x_626_ == 0)
{
lean_object* v___x_627_; 
lean_dec(v_val_624_);
v___x_627_ = lean_box(0);
return v___x_627_;
}
else
{
lean_object* v___x_628_; 
v___x_628_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_628_, 0, v_val_624_);
return v___x_628_;
}
}
case 1:
{
lean_object* v_node_629_; size_t v___x_630_; size_t v___x_631_; 
v_node_629_ = lean_ctor_get(v___x_622_, 0);
lean_inc(v_node_629_);
lean_dec_ref_known(v___x_622_, 1);
v___x_630_ = ((size_t)5ULL);
v___x_631_ = lean_usize_shift_right(v_x_615_, v___x_630_);
v_x_614_ = v_node_629_;
v_x_615_ = v___x_631_;
goto _start;
}
default: 
{
lean_object* v___x_633_; 
lean_dec(v_x_616_);
lean_dec_ref(v_inst_613_);
v___x_633_ = lean_box(0);
return v___x_633_;
}
}
}
else
{
lean_object* v_ks_634_; lean_object* v_vs_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v_ks_634_ = lean_ctor_get(v_x_614_, 0);
lean_inc_ref(v_ks_634_);
v_vs_635_ = lean_ctor_get(v_x_614_, 1);
lean_inc_ref(v_vs_635_);
lean_dec_ref_known(v_x_614_, 2);
v___x_636_ = lean_unsigned_to_nat(0u);
v___x_637_ = l_Lean_PersistentHashMap_findAtAux___redArg(v_inst_613_, v_ks_634_, v_vs_635_, v___x_636_, v_x_616_);
lean_dec_ref(v_vs_635_);
lean_dec_ref(v_ks_634_);
return v___x_637_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___redArg___boxed(lean_object* v_inst_638_, lean_object* v_x_639_, lean_object* v_x_640_, lean_object* v_x_641_){
_start:
{
size_t v_x_123__boxed_642_; lean_object* v_res_643_; 
v_x_123__boxed_642_ = lean_unbox_usize(v_x_640_);
lean_dec(v_x_640_);
v_res_643_ = l_Lean_PersistentHashMap_findAux___redArg(v_inst_638_, v_x_639_, v_x_123__boxed_642_, v_x_641_);
return v_res_643_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux(lean_object* v_00_u03b1_644_, lean_object* v_00_u03b2_645_, lean_object* v_inst_646_, lean_object* v_x_647_, size_t v_x_648_, lean_object* v_x_649_){
_start:
{
lean_object* v___x_650_; 
lean_inc_ref(v_x_647_);
v___x_650_ = l_Lean_PersistentHashMap_findAux___redArg(v_inst_646_, v_x_647_, v_x_648_, v_x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___boxed(lean_object* v_00_u03b1_651_, lean_object* v_00_u03b2_652_, lean_object* v_inst_653_, lean_object* v_x_654_, lean_object* v_x_655_, lean_object* v_x_656_){
_start:
{
size_t v_x_175__boxed_657_; lean_object* v_res_658_; 
v_x_175__boxed_657_ = lean_unbox_usize(v_x_655_);
lean_dec(v_x_655_);
v_res_658_ = l_Lean_PersistentHashMap_findAux(v_00_u03b1_651_, v_00_u03b2_652_, v_inst_653_, v_x_654_, v_x_175__boxed_657_, v_x_656_);
lean_dec_ref(v_x_654_);
return v_res_658_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg(lean_object* v_x_659_, lean_object* v_x_660_, lean_object* v_x_661_, lean_object* v_x_662_){
_start:
{
lean_object* v___x_663_; uint64_t v___x_664_; size_t v___x_665_; lean_object* v___x_666_; 
lean_inc(v_x_662_);
v___x_663_ = lean_apply_1(v_x_660_, v_x_662_);
v___x_664_ = lean_unbox_uint64(v___x_663_);
lean_dec_ref(v___x_663_);
v___x_665_ = lean_uint64_to_usize(v___x_664_);
lean_inc_ref(v_x_661_);
v___x_666_ = l_Lean_PersistentHashMap_findAux___redArg(v_x_659_, v_x_661_, v___x_665_, v_x_662_);
return v___x_666_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___redArg___boxed(lean_object* v_x_667_, lean_object* v_x_668_, lean_object* v_x_669_, lean_object* v_x_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_667_, v_x_668_, v_x_669_, v_x_670_);
lean_dec_ref(v_x_669_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f(lean_object* v_00_u03b1_672_, lean_object* v_00_u03b2_673_, lean_object* v_x_674_, lean_object* v_x_675_, lean_object* v_x_676_, lean_object* v_x_677_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_674_, v_x_675_, v_x_676_, v_x_677_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___boxed(lean_object* v_00_u03b1_679_, lean_object* v_00_u03b2_680_, lean_object* v_x_681_, lean_object* v_x_682_, lean_object* v_x_683_, lean_object* v_x_684_){
_start:
{
lean_object* v_res_685_; 
v_res_685_ = l_Lean_PersistentHashMap_find_x3f(v_00_u03b1_679_, v_00_u03b2_680_, v_x_681_, v_x_682_, v_x_683_, v_x_684_);
lean_dec_ref(v_x_683_);
return v_res_685_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0(lean_object* v_x_686_, lean_object* v_x_687_, lean_object* v_m_688_, lean_object* v_i_689_, lean_object* v_x_690_){
_start:
{
lean_object* v___x_691_; 
v___x_691_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_686_, v_x_687_, v_m_688_, v_i_689_);
return v___x_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed(lean_object* v_x_692_, lean_object* v_x_693_, lean_object* v_m_694_, lean_object* v_i_695_, lean_object* v_x_696_){
_start:
{
lean_object* v_res_697_; 
v_res_697_ = l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0(v_x_692_, v_x_693_, v_m_694_, v_i_695_, v_x_696_);
lean_dec_ref(v_m_694_);
return v_res_697_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg(lean_object* v_x_698_, lean_object* v_x_699_){
_start:
{
lean_object* v___f_700_; 
v___f_700_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_700_, 0, v_x_698_);
lean_closure_set(v___f_700_, 1, v_x_699_);
return v___f_700_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instGetElemOptionTrue(lean_object* v_00_u03b1_701_, lean_object* v_00_u03b2_702_, lean_object* v_x_703_, lean_object* v_x_704_){
_start:
{
lean_object* v___f_705_; 
v___f_705_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instGetElemOptionTrue___redArg___lam__0___boxed), 5, 2);
lean_closure_set(v___f_705_, 0, v_x_703_);
lean_closure_set(v___f_705_, 1, v_x_704_);
return v___f_705_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg(lean_object* v_x_706_, lean_object* v_x_707_, lean_object* v_m_708_, lean_object* v_a_709_, lean_object* v_b_u2080_710_){
_start:
{
lean_object* v___x_711_; 
v___x_711_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_706_, v_x_707_, v_m_708_, v_a_709_);
if (lean_obj_tag(v___x_711_) == 0)
{
lean_inc(v_b_u2080_710_);
return v_b_u2080_710_;
}
else
{
lean_object* v_val_712_; 
v_val_712_ = lean_ctor_get(v___x_711_, 0);
lean_inc(v_val_712_);
lean_dec_ref_known(v___x_711_, 1);
return v_val_712_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___redArg___boxed(lean_object* v_x_713_, lean_object* v_x_714_, lean_object* v_m_715_, lean_object* v_a_716_, lean_object* v_b_u2080_717_){
_start:
{
lean_object* v_res_718_; 
v_res_718_ = l_Lean_PersistentHashMap_findD___redArg(v_x_713_, v_x_714_, v_m_715_, v_a_716_, v_b_u2080_717_);
lean_dec(v_b_u2080_717_);
lean_dec_ref(v_m_715_);
return v_res_718_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD(lean_object* v_00_u03b1_719_, lean_object* v_00_u03b2_720_, lean_object* v_x_721_, lean_object* v_x_722_, lean_object* v_m_723_, lean_object* v_a_724_, lean_object* v_b_u2080_725_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_721_, v_x_722_, v_m_723_, v_a_724_);
if (lean_obj_tag(v___x_726_) == 0)
{
lean_inc(v_b_u2080_725_);
return v_b_u2080_725_;
}
else
{
lean_object* v_val_727_; 
v_val_727_ = lean_ctor_get(v___x_726_, 0);
lean_inc(v_val_727_);
lean_dec_ref_known(v___x_726_, 1);
return v_val_727_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findD___boxed(lean_object* v_00_u03b1_728_, lean_object* v_00_u03b2_729_, lean_object* v_x_730_, lean_object* v_x_731_, lean_object* v_m_732_, lean_object* v_a_733_, lean_object* v_b_u2080_734_){
_start:
{
lean_object* v_res_735_; 
v_res_735_ = l_Lean_PersistentHashMap_findD(v_00_u03b1_728_, v_00_u03b2_729_, v_x_730_, v_x_731_, v_m_732_, v_a_733_, v_b_u2080_734_);
lean_dec(v_b_u2080_734_);
lean_dec_ref(v_m_732_);
return v_res_735_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_find_x21___redArg___closed__3(void){
_start:
{
lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; 
v___x_739_ = ((lean_object*)(l_Lean_PersistentHashMap_find_x21___redArg___closed__2));
v___x_740_ = lean_unsigned_to_nat(14u);
v___x_741_ = lean_unsigned_to_nat(178u);
v___x_742_ = ((lean_object*)(l_Lean_PersistentHashMap_find_x21___redArg___closed__1));
v___x_743_ = ((lean_object*)(l_Lean_PersistentHashMap_find_x21___redArg___closed__0));
v___x_744_ = l_mkPanicMessageWithDecl(v___x_743_, v___x_742_, v___x_741_, v___x_740_, v___x_739_);
return v___x_744_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg(lean_object* v_x_745_, lean_object* v_x_746_, lean_object* v_inst_747_, lean_object* v_m_748_, lean_object* v_a_749_){
_start:
{
lean_object* v___x_750_; 
v___x_750_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_745_, v_x_746_, v_m_748_, v_a_749_);
if (lean_obj_tag(v___x_750_) == 0)
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_obj_once(&l_Lean_PersistentHashMap_find_x21___redArg___closed__3, &l_Lean_PersistentHashMap_find_x21___redArg___closed__3_once, _init_l_Lean_PersistentHashMap_find_x21___redArg___closed__3);
v___x_752_ = l_panic___redArg(v_inst_747_, v___x_751_);
return v___x_752_;
}
else
{
lean_object* v_val_753_; 
v_val_753_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_val_753_);
lean_dec_ref_known(v___x_750_, 1);
return v_val_753_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___redArg___boxed(lean_object* v_x_754_, lean_object* v_x_755_, lean_object* v_inst_756_, lean_object* v_m_757_, lean_object* v_a_758_){
_start:
{
lean_object* v_res_759_; 
v_res_759_ = l_Lean_PersistentHashMap_find_x21___redArg(v_x_754_, v_x_755_, v_inst_756_, v_m_757_, v_a_758_);
lean_dec_ref(v_m_757_);
lean_dec(v_inst_756_);
return v_res_759_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21(lean_object* v_00_u03b1_760_, lean_object* v_00_u03b2_761_, lean_object* v_x_762_, lean_object* v_x_763_, lean_object* v_inst_764_, lean_object* v_m_765_, lean_object* v_a_766_){
_start:
{
lean_object* v___x_767_; 
v___x_767_ = l_Lean_PersistentHashMap_find_x3f___redArg(v_x_762_, v_x_763_, v_m_765_, v_a_766_);
if (lean_obj_tag(v___x_767_) == 0)
{
lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_768_ = lean_obj_once(&l_Lean_PersistentHashMap_find_x21___redArg___closed__3, &l_Lean_PersistentHashMap_find_x21___redArg___closed__3_once, _init_l_Lean_PersistentHashMap_find_x21___redArg___closed__3);
v___x_769_ = l_panic___redArg(v_inst_764_, v___x_768_);
return v___x_769_;
}
else
{
lean_object* v_val_770_; 
v_val_770_ = lean_ctor_get(v___x_767_, 0);
lean_inc(v_val_770_);
lean_dec_ref_known(v___x_767_, 1);
return v_val_770_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x21___boxed(lean_object* v_00_u03b1_771_, lean_object* v_00_u03b2_772_, lean_object* v_x_773_, lean_object* v_x_774_, lean_object* v_inst_775_, lean_object* v_m_776_, lean_object* v_a_777_){
_start:
{
lean_object* v_res_778_; 
v_res_778_ = l_Lean_PersistentHashMap_find_x21(v_00_u03b1_771_, v_00_u03b2_772_, v_x_773_, v_x_774_, v_inst_775_, v_m_776_, v_a_777_);
lean_dec_ref(v_m_776_);
lean_dec(v_inst_775_);
return v_res_778_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg(lean_object* v_inst_779_, lean_object* v_keys_780_, lean_object* v_vals_781_, lean_object* v_i_782_, lean_object* v_k_783_){
_start:
{
lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_784_ = lean_array_get_size(v_keys_780_);
v___x_785_ = lean_nat_dec_lt(v_i_782_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_dec(v_k_783_);
lean_dec(v_i_782_);
lean_dec_ref(v_inst_779_);
v___x_786_ = lean_box(0);
return v___x_786_;
}
else
{
lean_object* v_k_x27_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v_k_x27_787_ = lean_array_fget_borrowed(v_keys_780_, v_i_782_);
lean_inc_ref(v_inst_779_);
lean_inc(v_k_x27_787_);
lean_inc(v_k_783_);
v___x_788_ = lean_apply_2(v_inst_779_, v_k_783_, v_k_x27_787_);
v___x_789_ = lean_unbox(v___x_788_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; lean_object* v___x_791_; 
v___x_790_ = lean_unsigned_to_nat(1u);
v___x_791_ = lean_nat_add(v_i_782_, v___x_790_);
lean_dec(v_i_782_);
v_i_782_ = v___x_791_;
goto _start;
}
else
{
lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; 
lean_dec(v_k_783_);
lean_dec_ref(v_inst_779_);
v___x_793_ = lean_array_fget_borrowed(v_vals_781_, v_i_782_);
lean_dec(v_i_782_);
lean_inc(v___x_793_);
lean_inc(v_k_x27_787_);
v___x_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_794_, 0, v_k_x27_787_);
lean_ctor_set(v___x_794_, 1, v___x_793_);
v___x_795_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_795_, 0, v___x_794_);
return v___x_795_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___redArg___boxed(lean_object* v_inst_796_, lean_object* v_keys_797_, lean_object* v_vals_798_, lean_object* v_i_799_, lean_object* v_k_800_){
_start:
{
lean_object* v_res_801_; 
v_res_801_ = l_Lean_PersistentHashMap_findEntryAtAux___redArg(v_inst_796_, v_keys_797_, v_vals_798_, v_i_799_, v_k_800_);
lean_dec_ref(v_vals_798_);
lean_dec_ref(v_keys_797_);
return v_res_801_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux(lean_object* v_00_u03b1_802_, lean_object* v_00_u03b2_803_, lean_object* v_inst_804_, lean_object* v_keys_805_, lean_object* v_vals_806_, lean_object* v_heq_807_, lean_object* v_i_808_, lean_object* v_k_809_){
_start:
{
lean_object* v___x_810_; 
v___x_810_ = l_Lean_PersistentHashMap_findEntryAtAux___redArg(v_inst_804_, v_keys_805_, v_vals_806_, v_i_808_, v_k_809_);
return v___x_810_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAtAux___boxed(lean_object* v_00_u03b1_811_, lean_object* v_00_u03b2_812_, lean_object* v_inst_813_, lean_object* v_keys_814_, lean_object* v_vals_815_, lean_object* v_heq_816_, lean_object* v_i_817_, lean_object* v_k_818_){
_start:
{
lean_object* v_res_819_; 
v_res_819_ = l_Lean_PersistentHashMap_findEntryAtAux(v_00_u03b1_811_, v_00_u03b2_812_, v_inst_813_, v_keys_814_, v_vals_815_, v_heq_816_, v_i_817_, v_k_818_);
lean_dec_ref(v_vals_815_);
lean_dec_ref(v_keys_814_);
return v_res_819_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg(lean_object* v_inst_820_, lean_object* v_x_821_, size_t v_x_822_, lean_object* v_x_823_){
_start:
{
if (lean_obj_tag(v_x_821_) == 0)
{
lean_object* v_es_824_; lean_object* v___x_825_; size_t v___x_826_; size_t v___x_827_; lean_object* v_j_828_; lean_object* v___x_829_; 
v_es_824_ = lean_ctor_get(v_x_821_, 0);
lean_inc_ref(v_es_824_);
lean_dec_ref_known(v_x_821_, 1);
v___x_825_ = lean_box(2);
v___x_826_ = ((size_t)31ULL);
v___x_827_ = lean_usize_land(v_x_822_, v___x_826_);
v_j_828_ = lean_usize_to_nat(v___x_827_);
v___x_829_ = lean_array_get(v___x_825_, v_es_824_, v_j_828_);
lean_dec(v_j_828_);
lean_dec_ref(v_es_824_);
switch(lean_obj_tag(v___x_829_))
{
case 0:
{
lean_object* v_key_830_; lean_object* v_val_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
v_key_830_ = lean_ctor_get(v___x_829_, 0);
lean_inc_n(v_key_830_, 2);
v_val_831_ = lean_ctor_get(v___x_829_, 1);
lean_inc(v_val_831_);
lean_dec_ref_known(v___x_829_, 2);
v___x_832_ = lean_apply_2(v_inst_820_, v_x_823_, v_key_830_);
v___x_833_ = lean_unbox(v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; 
lean_dec(v_val_831_);
lean_dec(v_key_830_);
v___x_834_ = lean_box(0);
return v___x_834_;
}
else
{
lean_object* v___x_835_; lean_object* v___x_836_; 
v___x_835_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_835_, 0, v_key_830_);
lean_ctor_set(v___x_835_, 1, v_val_831_);
v___x_836_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_836_, 0, v___x_835_);
return v___x_836_;
}
}
case 1:
{
lean_object* v_node_837_; size_t v___x_838_; size_t v___x_839_; 
v_node_837_ = lean_ctor_get(v___x_829_, 0);
lean_inc(v_node_837_);
lean_dec_ref_known(v___x_829_, 1);
v___x_838_ = ((size_t)5ULL);
v___x_839_ = lean_usize_shift_right(v_x_822_, v___x_838_);
v_x_821_ = v_node_837_;
v_x_822_ = v___x_839_;
goto _start;
}
default: 
{
lean_object* v___x_841_; 
lean_dec(v_x_823_);
lean_dec_ref(v_inst_820_);
v___x_841_ = lean_box(0);
return v___x_841_;
}
}
}
else
{
lean_object* v_ks_842_; lean_object* v_vs_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_ks_842_ = lean_ctor_get(v_x_821_, 0);
lean_inc_ref(v_ks_842_);
v_vs_843_ = lean_ctor_get(v_x_821_, 1);
lean_inc_ref(v_vs_843_);
lean_dec_ref_known(v_x_821_, 2);
v___x_844_ = lean_unsigned_to_nat(0u);
v___x_845_ = l_Lean_PersistentHashMap_findEntryAtAux___redArg(v_inst_820_, v_ks_842_, v_vs_843_, v___x_844_, v_x_823_);
lean_dec_ref(v_vs_843_);
lean_dec_ref(v_ks_842_);
return v___x_845_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___redArg___boxed(lean_object* v_inst_846_, lean_object* v_x_847_, lean_object* v_x_848_, lean_object* v_x_849_){
_start:
{
size_t v_x_131__boxed_850_; lean_object* v_res_851_; 
v_x_131__boxed_850_ = lean_unbox_usize(v_x_848_);
lean_dec(v_x_848_);
v_res_851_ = l_Lean_PersistentHashMap_findEntryAux___redArg(v_inst_846_, v_x_847_, v_x_131__boxed_850_, v_x_849_);
return v_res_851_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux(lean_object* v_00_u03b1_852_, lean_object* v_00_u03b2_853_, lean_object* v_inst_854_, lean_object* v_x_855_, size_t v_x_856_, lean_object* v_x_857_){
_start:
{
lean_object* v___x_858_; 
lean_inc_ref(v_x_855_);
v___x_858_ = l_Lean_PersistentHashMap_findEntryAux___redArg(v_inst_854_, v_x_855_, v_x_856_, v_x_857_);
return v___x_858_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntryAux___boxed(lean_object* v_00_u03b1_859_, lean_object* v_00_u03b2_860_, lean_object* v_inst_861_, lean_object* v_x_862_, lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
size_t v_x_185__boxed_865_; lean_object* v_res_866_; 
v_x_185__boxed_865_ = lean_unbox_usize(v_x_863_);
lean_dec(v_x_863_);
v_res_866_ = l_Lean_PersistentHashMap_findEntryAux(v_00_u03b1_859_, v_00_u03b2_860_, v_inst_861_, v_x_862_, v_x_185__boxed_865_, v_x_864_);
lean_dec_ref(v_x_862_);
return v_res_866_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg(lean_object* v_x_867_, lean_object* v_x_868_, lean_object* v_x_869_, lean_object* v_x_870_){
_start:
{
lean_object* v___x_871_; uint64_t v___x_872_; size_t v___x_873_; lean_object* v___x_874_; 
lean_inc(v_x_870_);
v___x_871_ = lean_apply_1(v_x_868_, v_x_870_);
v___x_872_ = lean_unbox_uint64(v___x_871_);
lean_dec_ref(v___x_871_);
v___x_873_ = lean_uint64_to_usize(v___x_872_);
lean_inc_ref(v_x_869_);
v___x_874_ = l_Lean_PersistentHashMap_findEntryAux___redArg(v_x_867_, v_x_869_, v___x_873_, v_x_870_);
return v___x_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___redArg___boxed(lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_, lean_object* v_x_878_){
_start:
{
lean_object* v_res_879_; 
v_res_879_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v_x_875_, v_x_876_, v_x_877_, v_x_878_);
lean_dec_ref(v_x_877_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f(lean_object* v_00_u03b1_880_, lean_object* v_00_u03b2_881_, lean_object* v_x_882_, lean_object* v_x_883_, lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
lean_object* v___x_886_; 
v___x_886_ = l_Lean_PersistentHashMap_findEntry_x3f___redArg(v_x_882_, v_x_883_, v_x_884_, v_x_885_);
return v___x_886_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findEntry_x3f___boxed(lean_object* v_00_u03b1_887_, lean_object* v_00_u03b2_888_, lean_object* v_x_889_, lean_object* v_x_890_, lean_object* v_x_891_, lean_object* v_x_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l_Lean_PersistentHashMap_findEntry_x3f(v_00_u03b1_887_, v_00_u03b2_888_, v_x_889_, v_x_890_, v_x_891_, v_x_892_);
lean_dec_ref(v_x_891_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg(lean_object* v_inst_894_, lean_object* v_keys_895_, lean_object* v_i_896_, lean_object* v_k_897_, lean_object* v_k_u2080_898_){
_start:
{
lean_object* v___x_899_; uint8_t v___x_900_; 
v___x_899_ = lean_array_get_size(v_keys_895_);
v___x_900_ = lean_nat_dec_lt(v_i_896_, v___x_899_);
if (v___x_900_ == 0)
{
lean_dec(v_k_897_);
lean_dec(v_i_896_);
lean_dec_ref(v_inst_894_);
lean_inc(v_k_u2080_898_);
return v_k_u2080_898_;
}
else
{
lean_object* v_k_x27_901_; lean_object* v___x_902_; uint8_t v___x_903_; 
v_k_x27_901_ = lean_array_fget_borrowed(v_keys_895_, v_i_896_);
lean_inc_ref(v_inst_894_);
lean_inc(v_k_x27_901_);
lean_inc(v_k_897_);
v___x_902_ = lean_apply_2(v_inst_894_, v_k_897_, v_k_x27_901_);
v___x_903_ = lean_unbox(v___x_902_);
if (v___x_903_ == 0)
{
lean_object* v___x_904_; lean_object* v___x_905_; 
v___x_904_ = lean_unsigned_to_nat(1u);
v___x_905_ = lean_nat_add(v_i_896_, v___x_904_);
lean_dec(v_i_896_);
v_i_896_ = v___x_905_;
goto _start;
}
else
{
lean_dec(v_k_897_);
lean_dec(v_i_896_);
lean_dec_ref(v_inst_894_);
lean_inc(v_k_x27_901_);
return v_k_x27_901_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___redArg___boxed(lean_object* v_inst_907_, lean_object* v_keys_908_, lean_object* v_i_909_, lean_object* v_k_910_, lean_object* v_k_u2080_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = l_Lean_PersistentHashMap_findKeyDAtAux___redArg(v_inst_907_, v_keys_908_, v_i_909_, v_k_910_, v_k_u2080_911_);
lean_dec(v_k_u2080_911_);
lean_dec_ref(v_keys_908_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux(lean_object* v_00_u03b1_913_, lean_object* v_00_u03b2_914_, lean_object* v_inst_915_, lean_object* v_keys_916_, lean_object* v_vals_917_, lean_object* v_heq_918_, lean_object* v_i_919_, lean_object* v_k_920_, lean_object* v_k_u2080_921_){
_start:
{
lean_object* v___x_922_; 
v___x_922_ = l_Lean_PersistentHashMap_findKeyDAtAux___redArg(v_inst_915_, v_keys_916_, v_i_919_, v_k_920_, v_k_u2080_921_);
return v___x_922_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAtAux___boxed(lean_object* v_00_u03b1_923_, lean_object* v_00_u03b2_924_, lean_object* v_inst_925_, lean_object* v_keys_926_, lean_object* v_vals_927_, lean_object* v_heq_928_, lean_object* v_i_929_, lean_object* v_k_930_, lean_object* v_k_u2080_931_){
_start:
{
lean_object* v_res_932_; 
v_res_932_ = l_Lean_PersistentHashMap_findKeyDAtAux(v_00_u03b1_923_, v_00_u03b2_924_, v_inst_925_, v_keys_926_, v_vals_927_, v_heq_928_, v_i_929_, v_k_930_, v_k_u2080_931_);
lean_dec(v_k_u2080_931_);
lean_dec_ref(v_vals_927_);
lean_dec_ref(v_keys_926_);
return v_res_932_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg(lean_object* v_inst_933_, lean_object* v_x_934_, size_t v_x_935_, lean_object* v_x_936_, lean_object* v_x_937_){
_start:
{
if (lean_obj_tag(v_x_934_) == 0)
{
lean_object* v_es_938_; lean_object* v___x_939_; size_t v___x_940_; size_t v___x_941_; lean_object* v_j_942_; lean_object* v___x_943_; 
v_es_938_ = lean_ctor_get(v_x_934_, 0);
lean_inc_ref(v_es_938_);
lean_dec_ref_known(v_x_934_, 1);
v___x_939_ = lean_box(2);
v___x_940_ = ((size_t)31ULL);
v___x_941_ = lean_usize_land(v_x_935_, v___x_940_);
v_j_942_ = lean_usize_to_nat(v___x_941_);
v___x_943_ = lean_array_get(v___x_939_, v_es_938_, v_j_942_);
lean_dec(v_j_942_);
lean_dec_ref(v_es_938_);
switch(lean_obj_tag(v___x_943_))
{
case 0:
{
lean_object* v_key_944_; lean_object* v___x_945_; uint8_t v___x_946_; 
v_key_944_ = lean_ctor_get(v___x_943_, 0);
lean_inc_n(v_key_944_, 2);
lean_dec_ref_known(v___x_943_, 2);
v___x_945_ = lean_apply_2(v_inst_933_, v_x_936_, v_key_944_);
v___x_946_ = lean_unbox(v___x_945_);
if (v___x_946_ == 0)
{
lean_dec(v_key_944_);
lean_inc(v_x_937_);
return v_x_937_;
}
else
{
return v_key_944_;
}
}
case 1:
{
lean_object* v_node_947_; size_t v___x_948_; size_t v___x_949_; 
v_node_947_ = lean_ctor_get(v___x_943_, 0);
lean_inc(v_node_947_);
lean_dec_ref_known(v___x_943_, 1);
v___x_948_ = ((size_t)5ULL);
v___x_949_ = lean_usize_shift_right(v_x_935_, v___x_948_);
v_x_934_ = v_node_947_;
v_x_935_ = v___x_949_;
goto _start;
}
default: 
{
lean_dec(v_x_936_);
lean_dec_ref(v_inst_933_);
lean_inc(v_x_937_);
return v_x_937_;
}
}
}
else
{
lean_object* v_ks_951_; lean_object* v___x_952_; lean_object* v___x_953_; 
v_ks_951_ = lean_ctor_get(v_x_934_, 0);
lean_inc_ref(v_ks_951_);
lean_dec_ref_known(v_x_934_, 2);
v___x_952_ = lean_unsigned_to_nat(0u);
v___x_953_ = l_Lean_PersistentHashMap_findKeyDAtAux___redArg(v_inst_933_, v_ks_951_, v___x_952_, v_x_936_, v_x_937_);
lean_dec_ref(v_ks_951_);
return v___x_953_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___redArg___boxed(lean_object* v_inst_954_, lean_object* v_x_955_, lean_object* v_x_956_, lean_object* v_x_957_, lean_object* v_x_958_){
_start:
{
size_t v_x_117__boxed_959_; lean_object* v_res_960_; 
v_x_117__boxed_959_ = lean_unbox_usize(v_x_956_);
lean_dec(v_x_956_);
v_res_960_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_inst_954_, v_x_955_, v_x_117__boxed_959_, v_x_957_, v_x_958_);
lean_dec(v_x_958_);
return v_res_960_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux(lean_object* v_00_u03b1_961_, lean_object* v_00_u03b2_962_, lean_object* v_inst_963_, lean_object* v_x_964_, size_t v_x_965_, lean_object* v_x_966_, lean_object* v_x_967_){
_start:
{
lean_object* v___x_968_; 
v___x_968_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_inst_963_, v_x_964_, v_x_965_, v_x_966_, v_x_967_);
return v___x_968_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyDAux___boxed(lean_object* v_00_u03b1_969_, lean_object* v_00_u03b2_970_, lean_object* v_inst_971_, lean_object* v_x_972_, lean_object* v_x_973_, lean_object* v_x_974_, lean_object* v_x_975_){
_start:
{
size_t v_x_164__boxed_976_; lean_object* v_res_977_; 
v_x_164__boxed_976_ = lean_unbox_usize(v_x_973_);
lean_dec(v_x_973_);
v_res_977_ = l_Lean_PersistentHashMap_findKeyDAux(v_00_u03b1_969_, v_00_u03b2_970_, v_inst_971_, v_x_972_, v_x_164__boxed_976_, v_x_974_, v_x_975_);
lean_dec(v_x_975_);
return v_res_977_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg(lean_object* v_x_978_, lean_object* v_x_979_, lean_object* v_m_980_, lean_object* v_a_981_, lean_object* v_a_u2080_982_){
_start:
{
lean_object* v___x_983_; uint64_t v___x_984_; size_t v___x_985_; lean_object* v___x_986_; 
lean_inc(v_a_981_);
v___x_983_ = lean_apply_1(v_x_979_, v_a_981_);
v___x_984_ = lean_unbox_uint64(v___x_983_);
lean_dec_ref(v___x_983_);
v___x_985_ = lean_uint64_to_usize(v___x_984_);
v___x_986_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_x_978_, v_m_980_, v___x_985_, v_a_981_, v_a_u2080_982_);
return v___x_986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___redArg___boxed(lean_object* v_x_987_, lean_object* v_x_988_, lean_object* v_m_989_, lean_object* v_a_990_, lean_object* v_a_u2080_991_){
_start:
{
lean_object* v_res_992_; 
v_res_992_ = l_Lean_PersistentHashMap_findKeyD___redArg(v_x_987_, v_x_988_, v_m_989_, v_a_990_, v_a_u2080_991_);
lean_dec(v_a_u2080_991_);
return v_res_992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD(lean_object* v_00_u03b1_993_, lean_object* v_00_u03b2_994_, lean_object* v_x_995_, lean_object* v_x_996_, lean_object* v_m_997_, lean_object* v_a_998_, lean_object* v_a_u2080_999_){
_start:
{
lean_object* v___x_1000_; uint64_t v___x_1001_; size_t v___x_1002_; lean_object* v___x_1003_; 
lean_inc(v_a_998_);
v___x_1000_ = lean_apply_1(v_x_996_, v_a_998_);
v___x_1001_ = lean_unbox_uint64(v___x_1000_);
lean_dec_ref(v___x_1000_);
v___x_1002_ = lean_uint64_to_usize(v___x_1001_);
v___x_1003_ = l_Lean_PersistentHashMap_findKeyDAux___redArg(v_x_995_, v_m_997_, v___x_1002_, v_a_998_, v_a_u2080_999_);
return v___x_1003_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findKeyD___boxed(lean_object* v_00_u03b1_1004_, lean_object* v_00_u03b2_1005_, lean_object* v_x_1006_, lean_object* v_x_1007_, lean_object* v_m_1008_, lean_object* v_a_1009_, lean_object* v_a_u2080_1010_){
_start:
{
lean_object* v_res_1011_; 
v_res_1011_ = l_Lean_PersistentHashMap_findKeyD(v_00_u03b1_1004_, v_00_u03b2_1005_, v_x_1006_, v_x_1007_, v_m_1008_, v_a_1009_, v_a_u2080_1010_);
lean_dec(v_a_u2080_1010_);
return v_res_1011_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux___redArg(lean_object* v_inst_1012_, lean_object* v_keys_1013_, lean_object* v_i_1014_, lean_object* v_k_1015_){
_start:
{
lean_object* v___x_1016_; uint8_t v___x_1017_; 
v___x_1016_ = lean_array_get_size(v_keys_1013_);
v___x_1017_ = lean_nat_dec_lt(v_i_1014_, v___x_1016_);
if (v___x_1017_ == 0)
{
lean_dec(v_k_1015_);
lean_dec(v_i_1014_);
lean_dec_ref(v_inst_1012_);
return v___x_1017_;
}
else
{
lean_object* v_k_x27_1018_; lean_object* v___x_1019_; uint8_t v___x_1020_; 
v_k_x27_1018_ = lean_array_fget_borrowed(v_keys_1013_, v_i_1014_);
lean_inc_ref(v_inst_1012_);
lean_inc(v_k_x27_1018_);
lean_inc(v_k_1015_);
v___x_1019_ = lean_apply_2(v_inst_1012_, v_k_1015_, v_k_x27_1018_);
v___x_1020_ = lean_unbox(v___x_1019_);
if (v___x_1020_ == 0)
{
lean_object* v___x_1021_; lean_object* v___x_1022_; 
v___x_1021_ = lean_unsigned_to_nat(1u);
v___x_1022_ = lean_nat_add(v_i_1014_, v___x_1021_);
lean_dec(v_i_1014_);
v_i_1014_ = v___x_1022_;
goto _start;
}
else
{
lean_dec(v_k_1015_);
lean_dec(v_i_1014_);
lean_dec_ref(v_inst_1012_);
return v___x_1017_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___redArg___boxed(lean_object* v_inst_1024_, lean_object* v_keys_1025_, lean_object* v_i_1026_, lean_object* v_k_1027_){
_start:
{
uint8_t v_res_1028_; lean_object* v_r_1029_; 
v_res_1028_ = l_Lean_PersistentHashMap_containsAtAux___redArg(v_inst_1024_, v_keys_1025_, v_i_1026_, v_k_1027_);
lean_dec_ref(v_keys_1025_);
v_r_1029_ = lean_box(v_res_1028_);
return v_r_1029_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAtAux(lean_object* v_00_u03b1_1030_, lean_object* v_00_u03b2_1031_, lean_object* v_inst_1032_, lean_object* v_keys_1033_, lean_object* v_vals_1034_, lean_object* v_heq_1035_, lean_object* v_i_1036_, lean_object* v_k_1037_){
_start:
{
uint8_t v___x_1038_; 
v___x_1038_ = l_Lean_PersistentHashMap_containsAtAux___redArg(v_inst_1032_, v_keys_1033_, v_i_1036_, v_k_1037_);
return v___x_1038_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAtAux___boxed(lean_object* v_00_u03b1_1039_, lean_object* v_00_u03b2_1040_, lean_object* v_inst_1041_, lean_object* v_keys_1042_, lean_object* v_vals_1043_, lean_object* v_heq_1044_, lean_object* v_i_1045_, lean_object* v_k_1046_){
_start:
{
uint8_t v_res_1047_; lean_object* v_r_1048_; 
v_res_1047_ = l_Lean_PersistentHashMap_containsAtAux(v_00_u03b1_1039_, v_00_u03b2_1040_, v_inst_1041_, v_keys_1042_, v_vals_1043_, v_heq_1044_, v_i_1045_, v_k_1046_);
lean_dec_ref(v_vals_1043_);
lean_dec_ref(v_keys_1042_);
v_r_1048_ = lean_box(v_res_1047_);
return v_r_1048_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux___redArg(lean_object* v_inst_1049_, lean_object* v_x_1050_, size_t v_x_1051_, lean_object* v_x_1052_){
_start:
{
if (lean_obj_tag(v_x_1050_) == 0)
{
lean_object* v_es_1053_; lean_object* v___x_1054_; size_t v___x_1055_; size_t v___x_1056_; lean_object* v_j_1057_; lean_object* v___x_1058_; 
v_es_1053_ = lean_ctor_get(v_x_1050_, 0);
lean_inc_ref(v_es_1053_);
lean_dec_ref_known(v_x_1050_, 1);
v___x_1054_ = lean_box(2);
v___x_1055_ = ((size_t)31ULL);
v___x_1056_ = lean_usize_land(v_x_1051_, v___x_1055_);
v_j_1057_ = lean_usize_to_nat(v___x_1056_);
v___x_1058_ = lean_array_get(v___x_1054_, v_es_1053_, v_j_1057_);
lean_dec(v_j_1057_);
lean_dec_ref(v_es_1053_);
switch(lean_obj_tag(v___x_1058_))
{
case 0:
{
lean_object* v_key_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; 
v_key_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_key_1059_);
lean_dec_ref_known(v___x_1058_, 2);
v___x_1060_ = lean_apply_2(v_inst_1049_, v_x_1052_, v_key_1059_);
v___x_1061_ = lean_unbox(v___x_1060_);
return v___x_1061_;
}
case 1:
{
lean_object* v_node_1062_; size_t v___x_1063_; size_t v___x_1064_; 
v_node_1062_ = lean_ctor_get(v___x_1058_, 0);
lean_inc(v_node_1062_);
lean_dec_ref_known(v___x_1058_, 1);
v___x_1063_ = ((size_t)5ULL);
v___x_1064_ = lean_usize_shift_right(v_x_1051_, v___x_1063_);
v_x_1050_ = v_node_1062_;
v_x_1051_ = v___x_1064_;
goto _start;
}
default: 
{
uint8_t v___x_1066_; 
lean_dec(v_x_1052_);
lean_dec_ref(v_inst_1049_);
v___x_1066_ = 0;
return v___x_1066_;
}
}
}
else
{
lean_object* v_ks_1067_; lean_object* v___x_1068_; uint8_t v___x_1069_; 
v_ks_1067_ = lean_ctor_get(v_x_1050_, 0);
lean_inc_ref(v_ks_1067_);
lean_dec_ref_known(v_x_1050_, 2);
v___x_1068_ = lean_unsigned_to_nat(0u);
v___x_1069_ = l_Lean_PersistentHashMap_containsAtAux___redArg(v_inst_1049_, v_ks_1067_, v___x_1068_, v_x_1052_);
lean_dec_ref(v_ks_1067_);
return v___x_1069_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___redArg___boxed(lean_object* v_inst_1070_, lean_object* v_x_1071_, lean_object* v_x_1072_, lean_object* v_x_1073_){
_start:
{
size_t v_x_104__boxed_1074_; uint8_t v_res_1075_; lean_object* v_r_1076_; 
v_x_104__boxed_1074_ = lean_unbox_usize(v_x_1072_);
lean_dec(v_x_1072_);
v_res_1075_ = l_Lean_PersistentHashMap_containsAux___redArg(v_inst_1070_, v_x_1071_, v_x_104__boxed_1074_, v_x_1073_);
v_r_1076_ = lean_box(v_res_1075_);
return v_r_1076_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_containsAux(lean_object* v_00_u03b1_1077_, lean_object* v_00_u03b2_1078_, lean_object* v_inst_1079_, lean_object* v_x_1080_, size_t v_x_1081_, lean_object* v_x_1082_){
_start:
{
uint8_t v___x_1083_; 
v___x_1083_ = l_Lean_PersistentHashMap_containsAux___redArg(v_inst_1079_, v_x_1080_, v_x_1081_, v_x_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_containsAux___boxed(lean_object* v_00_u03b1_1084_, lean_object* v_00_u03b2_1085_, lean_object* v_inst_1086_, lean_object* v_x_1087_, lean_object* v_x_1088_, lean_object* v_x_1089_){
_start:
{
size_t v_x_150__boxed_1090_; uint8_t v_res_1091_; lean_object* v_r_1092_; 
v_x_150__boxed_1090_ = lean_unbox_usize(v_x_1088_);
lean_dec(v_x_1088_);
v_res_1091_ = l_Lean_PersistentHashMap_containsAux(v_00_u03b1_1084_, v_00_u03b2_1085_, v_inst_1086_, v_x_1087_, v_x_150__boxed_1090_, v_x_1089_);
v_r_1092_ = lean_box(v_res_1091_);
return v_r_1092_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains___redArg(lean_object* v_inst_1093_, lean_object* v_inst_1094_, lean_object* v_x_1095_, lean_object* v_x_1096_){
_start:
{
lean_object* v___x_1097_; uint64_t v___x_1098_; size_t v___x_1099_; uint8_t v___x_1100_; 
lean_inc(v_x_1096_);
v___x_1097_ = lean_apply_1(v_inst_1094_, v_x_1096_);
v___x_1098_ = lean_unbox_uint64(v___x_1097_);
lean_dec_ref(v___x_1097_);
v___x_1099_ = lean_uint64_to_usize(v___x_1098_);
v___x_1100_ = l_Lean_PersistentHashMap_containsAux___redArg(v_inst_1093_, v_x_1095_, v___x_1099_, v_x_1096_);
return v___x_1100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___redArg___boxed(lean_object* v_inst_1101_, lean_object* v_inst_1102_, lean_object* v_x_1103_, lean_object* v_x_1104_){
_start:
{
uint8_t v_res_1105_; lean_object* v_r_1106_; 
v_res_1105_ = l_Lean_PersistentHashMap_contains___redArg(v_inst_1101_, v_inst_1102_, v_x_1103_, v_x_1104_);
v_r_1106_ = lean_box(v_res_1105_);
return v_r_1106_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentHashMap_contains(lean_object* v_00_u03b1_1107_, lean_object* v_00_u03b2_1108_, lean_object* v_inst_1109_, lean_object* v_inst_1110_, lean_object* v_x_1111_, lean_object* v_x_1112_){
_start:
{
uint8_t v___x_1113_; 
v___x_1113_ = l_Lean_PersistentHashMap_contains___redArg(v_inst_1109_, v_inst_1110_, v_x_1111_, v_x_1112_);
return v___x_1113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_contains___boxed(lean_object* v_00_u03b1_1114_, lean_object* v_00_u03b2_1115_, lean_object* v_inst_1116_, lean_object* v_inst_1117_, lean_object* v_x_1118_, lean_object* v_x_1119_){
_start:
{
uint8_t v_res_1120_; lean_object* v_r_1121_; 
v_res_1120_ = l_Lean_PersistentHashMap_contains(v_00_u03b1_1114_, v_00_u03b2_1115_, v_inst_1116_, v_inst_1117_, v_x_1118_, v_x_1119_);
v_r_1121_ = lean_box(v_res_1120_);
return v_r_1121_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg(lean_object* v_a_1122_, lean_object* v_i_1123_, lean_object* v_acc_1124_){
_start:
{
lean_object* v___x_1125_; uint8_t v___x_1126_; 
v___x_1125_ = lean_array_get_size(v_a_1122_);
v___x_1126_ = lean_nat_dec_lt(v_i_1123_, v___x_1125_);
if (v___x_1126_ == 0)
{
lean_dec(v_i_1123_);
return v_acc_1124_;
}
else
{
lean_object* v___x_1127_; 
v___x_1127_ = lean_array_fget(v_a_1122_, v_i_1123_);
switch(lean_obj_tag(v___x_1127_))
{
case 0:
{
if (lean_obj_tag(v_acc_1124_) == 0)
{
lean_object* v_key_1128_; lean_object* v_val_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1140_; 
v_key_1128_ = lean_ctor_get(v___x_1127_, 0);
v_val_1129_ = lean_ctor_get(v___x_1127_, 1);
v_isSharedCheck_1140_ = !lean_is_exclusive(v___x_1127_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1131_ = v___x_1127_;
v_isShared_1132_ = v_isSharedCheck_1140_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_val_1129_);
lean_inc(v_key_1128_);
lean_dec(v___x_1127_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1140_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1136_; 
v___x_1133_ = lean_unsigned_to_nat(1u);
v___x_1134_ = lean_nat_add(v_i_1123_, v___x_1133_);
lean_dec(v_i_1123_);
if (v_isShared_1132_ == 0)
{
v___x_1136_ = v___x_1131_;
goto v_reusejp_1135_;
}
else
{
lean_object* v_reuseFailAlloc_1139_; 
v_reuseFailAlloc_1139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1139_, 0, v_key_1128_);
lean_ctor_set(v_reuseFailAlloc_1139_, 1, v_val_1129_);
v___x_1136_ = v_reuseFailAlloc_1139_;
goto v_reusejp_1135_;
}
v_reusejp_1135_:
{
lean_object* v___x_1137_; 
v___x_1137_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1137_, 0, v___x_1136_);
v_i_1123_ = v___x_1134_;
v_acc_1124_ = v___x_1137_;
goto _start;
}
}
}
else
{
lean_object* v___x_1141_; 
lean_dec_ref_known(v_acc_1124_, 1);
lean_dec_ref_known(v___x_1127_, 2);
lean_dec(v_i_1123_);
v___x_1141_ = lean_box(0);
return v___x_1141_;
}
}
case 1:
{
lean_object* v___x_1142_; 
lean_dec_ref_known(v___x_1127_, 1);
lean_dec(v_acc_1124_);
lean_dec(v_i_1123_);
v___x_1142_ = lean_box(0);
return v___x_1142_;
}
default: 
{
lean_object* v___x_1143_; lean_object* v___x_1144_; 
v___x_1143_ = lean_unsigned_to_nat(1u);
v___x_1144_ = lean_nat_add(v_i_1123_, v___x_1143_);
lean_dec(v_i_1123_);
v_i_1123_ = v___x_1144_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___redArg___boxed(lean_object* v_a_1146_, lean_object* v_i_1147_, lean_object* v_acc_1148_){
_start:
{
lean_object* v_res_1149_; 
v_res_1149_ = l_Lean_PersistentHashMap_isUnaryEntries___redArg(v_a_1146_, v_i_1147_, v_acc_1148_);
lean_dec_ref(v_a_1146_);
return v_res_1149_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries(lean_object* v_00_u03b1_1150_, lean_object* v_00_u03b2_1151_, lean_object* v_a_1152_, lean_object* v_i_1153_, lean_object* v_acc_1154_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = l_Lean_PersistentHashMap_isUnaryEntries___redArg(v_a_1152_, v_i_1153_, v_acc_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryEntries___boxed(lean_object* v_00_u03b1_1156_, lean_object* v_00_u03b2_1157_, lean_object* v_a_1158_, lean_object* v_i_1159_, lean_object* v_acc_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_PersistentHashMap_isUnaryEntries(v_00_u03b1_1156_, v_00_u03b2_1157_, v_a_1158_, v_i_1159_, v_acc_1160_);
lean_dec_ref(v_a_1158_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode___redArg(lean_object* v_x_1162_){
_start:
{
if (lean_obj_tag(v_x_1162_) == 0)
{
lean_object* v_es_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; 
v_es_1163_ = lean_ctor_get(v_x_1162_, 0);
lean_inc_ref(v_es_1163_);
lean_dec_ref_known(v_x_1162_, 1);
v___x_1164_ = lean_unsigned_to_nat(0u);
v___x_1165_ = lean_box(0);
v___x_1166_ = l_Lean_PersistentHashMap_isUnaryEntries___redArg(v_es_1163_, v___x_1164_, v___x_1165_);
lean_dec_ref(v_es_1163_);
return v___x_1166_;
}
else
{
lean_object* v_ks_1167_; lean_object* v_vs_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1183_; 
v_ks_1167_ = lean_ctor_get(v_x_1162_, 0);
v_vs_1168_ = lean_ctor_get(v_x_1162_, 1);
v_isSharedCheck_1183_ = !lean_is_exclusive(v_x_1162_);
if (v_isSharedCheck_1183_ == 0)
{
v___x_1170_ = v_x_1162_;
v_isShared_1171_ = v_isSharedCheck_1183_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_vs_1168_);
lean_inc(v_ks_1167_);
lean_dec(v_x_1162_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1183_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v___x_1172_; lean_object* v___x_1173_; uint8_t v___x_1174_; 
v___x_1172_ = lean_unsigned_to_nat(1u);
v___x_1173_ = lean_array_get_size(v_ks_1167_);
v___x_1174_ = lean_nat_dec_eq(v___x_1172_, v___x_1173_);
if (v___x_1174_ == 0)
{
lean_object* v___x_1175_; 
lean_del_object(v___x_1170_);
lean_dec_ref(v_vs_1168_);
lean_dec_ref(v_ks_1167_);
v___x_1175_ = lean_box(0);
return v___x_1175_;
}
else
{
lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1180_; 
v___x_1176_ = lean_unsigned_to_nat(0u);
v___x_1177_ = lean_array_fget(v_ks_1167_, v___x_1176_);
lean_dec_ref(v_ks_1167_);
v___x_1178_ = lean_array_fget(v_vs_1168_, v___x_1176_);
lean_dec_ref(v_vs_1168_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set_tag(v___x_1170_, 0);
lean_ctor_set(v___x_1170_, 1, v___x_1178_);
lean_ctor_set(v___x_1170_, 0, v___x_1177_);
v___x_1180_ = v___x_1170_;
goto v_reusejp_1179_;
}
else
{
lean_object* v_reuseFailAlloc_1182_; 
v_reuseFailAlloc_1182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1182_, 0, v___x_1177_);
lean_ctor_set(v_reuseFailAlloc_1182_, 1, v___x_1178_);
v___x_1180_ = v_reuseFailAlloc_1182_;
goto v_reusejp_1179_;
}
v_reusejp_1179_:
{
lean_object* v___x_1181_; 
v___x_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
return v___x_1181_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_isUnaryNode(lean_object* v_00_u03b1_1184_, lean_object* v_00_u03b2_1185_, lean_object* v_x_1186_){
_start:
{
lean_object* v___x_1187_; 
v___x_1187_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_x_1186_);
return v___x_1187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg(lean_object* v_inst_1188_, lean_object* v_x_1189_, size_t v_x_1190_, lean_object* v_x_1191_){
_start:
{
if (lean_obj_tag(v_x_1189_) == 0)
{
lean_object* v_es_1192_; lean_object* v___x_1193_; size_t v___x_1194_; size_t v___x_1195_; lean_object* v_j_1196_; lean_object* v_entry_1197_; 
v_es_1192_ = lean_ctor_get(v_x_1189_, 0);
v___x_1193_ = lean_box(2);
v___x_1194_ = ((size_t)31ULL);
v___x_1195_ = lean_usize_land(v_x_1190_, v___x_1194_);
v_j_1196_ = lean_usize_to_nat(v___x_1195_);
v_entry_1197_ = lean_array_get(v___x_1193_, v_es_1192_, v_j_1196_);
switch(lean_obj_tag(v_entry_1197_))
{
case 0:
{
lean_object* v_key_1198_; lean_object* v___x_1199_; uint8_t v___x_1200_; 
v_key_1198_ = lean_ctor_get(v_entry_1197_, 0);
lean_inc(v_key_1198_);
lean_dec_ref_known(v_entry_1197_, 2);
v___x_1199_ = lean_apply_2(v_inst_1188_, v_x_1191_, v_key_1198_);
v___x_1200_ = lean_unbox(v___x_1199_);
if (v___x_1200_ == 0)
{
lean_dec(v_j_1196_);
return v_x_1189_;
}
else
{
lean_object* v___x_1202_; uint8_t v_isShared_1203_; uint8_t v_isSharedCheck_1208_; 
lean_inc_ref(v_es_1192_);
v_isSharedCheck_1208_ = !lean_is_exclusive(v_x_1189_);
if (v_isSharedCheck_1208_ == 0)
{
lean_object* v_unused_1209_; 
v_unused_1209_ = lean_ctor_get(v_x_1189_, 0);
lean_dec(v_unused_1209_);
v___x_1202_ = v_x_1189_;
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
else
{
lean_dec(v_x_1189_);
v___x_1202_ = lean_box(0);
v_isShared_1203_ = v_isSharedCheck_1208_;
goto v_resetjp_1201_;
}
v_resetjp_1201_:
{
lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1204_ = lean_array_set(v_es_1192_, v_j_1196_, v___x_1193_);
lean_dec(v_j_1196_);
if (v_isShared_1203_ == 0)
{
lean_ctor_set(v___x_1202_, 0, v___x_1204_);
v___x_1206_ = v___x_1202_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1207_; 
v_reuseFailAlloc_1207_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1207_, 0, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1207_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
return v___x_1206_;
}
}
}
}
case 1:
{
lean_object* v___x_1211_; uint8_t v_isShared_1212_; uint8_t v_isSharedCheck_1244_; 
lean_inc_ref(v_es_1192_);
v_isSharedCheck_1244_ = !lean_is_exclusive(v_x_1189_);
if (v_isSharedCheck_1244_ == 0)
{
lean_object* v_unused_1245_; 
v_unused_1245_ = lean_ctor_get(v_x_1189_, 0);
lean_dec(v_unused_1245_);
v___x_1211_ = v_x_1189_;
v_isShared_1212_ = v_isSharedCheck_1244_;
goto v_resetjp_1210_;
}
else
{
lean_dec(v_x_1189_);
v___x_1211_ = lean_box(0);
v_isShared_1212_ = v_isSharedCheck_1244_;
goto v_resetjp_1210_;
}
v_resetjp_1210_:
{
lean_object* v_node_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1243_; 
v_node_1213_ = lean_ctor_get(v_entry_1197_, 0);
v_isSharedCheck_1243_ = !lean_is_exclusive(v_entry_1197_);
if (v_isSharedCheck_1243_ == 0)
{
v___x_1215_ = v_entry_1197_;
v_isShared_1216_ = v_isSharedCheck_1243_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_node_1213_);
lean_dec(v_entry_1197_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1243_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
size_t v___x_1217_; lean_object* v_entries_1218_; size_t v___x_1219_; lean_object* v_newNode_1220_; lean_object* v___x_1221_; 
v___x_1217_ = ((size_t)5ULL);
v_entries_1218_ = lean_array_set(v_es_1192_, v_j_1196_, v___x_1193_);
v___x_1219_ = lean_usize_shift_right(v_x_1190_, v___x_1217_);
v_newNode_1220_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_inst_1188_, v_node_1213_, v___x_1219_, v_x_1191_);
lean_inc_ref(v_newNode_1220_);
v___x_1221_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1220_);
if (lean_obj_tag(v___x_1221_) == 0)
{
lean_object* v___x_1223_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v_newNode_1220_);
v___x_1223_ = v___x_1215_;
goto v_reusejp_1222_;
}
else
{
lean_object* v_reuseFailAlloc_1228_; 
v_reuseFailAlloc_1228_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1228_, 0, v_newNode_1220_);
v___x_1223_ = v_reuseFailAlloc_1228_;
goto v_reusejp_1222_;
}
v_reusejp_1222_:
{
lean_object* v___x_1224_; lean_object* v___x_1226_; 
v___x_1224_ = lean_array_set(v_entries_1218_, v_j_1196_, v___x_1223_);
lean_dec(v_j_1196_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1224_);
v___x_1226_ = v___x_1211_;
goto v_reusejp_1225_;
}
else
{
lean_object* v_reuseFailAlloc_1227_; 
v_reuseFailAlloc_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1227_, 0, v___x_1224_);
v___x_1226_ = v_reuseFailAlloc_1227_;
goto v_reusejp_1225_;
}
v_reusejp_1225_:
{
return v___x_1226_;
}
}
}
else
{
lean_object* v_val_1229_; lean_object* v_fst_1230_; lean_object* v_snd_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1242_; 
lean_dec_ref(v_newNode_1220_);
lean_del_object(v___x_1215_);
v_val_1229_ = lean_ctor_get(v___x_1221_, 0);
lean_inc(v_val_1229_);
lean_dec_ref_known(v___x_1221_, 1);
v_fst_1230_ = lean_ctor_get(v_val_1229_, 0);
v_snd_1231_ = lean_ctor_get(v_val_1229_, 1);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_val_1229_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1233_ = v_val_1229_;
v_isShared_1234_ = v_isSharedCheck_1242_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_snd_1231_);
lean_inc(v_fst_1230_);
lean_dec(v_val_1229_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1242_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1236_; 
if (v_isShared_1234_ == 0)
{
v___x_1236_ = v___x_1233_;
goto v_reusejp_1235_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v_fst_1230_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_snd_1231_);
v___x_1236_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1235_;
}
v_reusejp_1235_:
{
lean_object* v___x_1237_; lean_object* v___x_1239_; 
v___x_1237_ = lean_array_set(v_entries_1218_, v_j_1196_, v___x_1236_);
lean_dec(v_j_1196_);
if (v_isShared_1212_ == 0)
{
lean_ctor_set(v___x_1211_, 0, v___x_1237_);
v___x_1239_ = v___x_1211_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v___x_1237_);
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
}
}
}
default: 
{
lean_dec(v_j_1196_);
lean_dec(v_x_1191_);
lean_dec_ref(v_inst_1188_);
return v_x_1189_;
}
}
}
else
{
lean_object* v_ks_1246_; lean_object* v_vs_1247_; lean_object* v___x_1249_; uint8_t v_isShared_1250_; uint8_t v_isSharedCheck_1261_; 
v_ks_1246_ = lean_ctor_get(v_x_1189_, 0);
v_vs_1247_ = lean_ctor_get(v_x_1189_, 1);
v_isSharedCheck_1261_ = !lean_is_exclusive(v_x_1189_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1249_ = v_x_1189_;
v_isShared_1250_ = v_isSharedCheck_1261_;
goto v_resetjp_1248_;
}
else
{
lean_inc(v_vs_1247_);
lean_inc(v_ks_1246_);
lean_dec(v_x_1189_);
v___x_1249_ = lean_box(0);
v_isShared_1250_ = v_isSharedCheck_1261_;
goto v_resetjp_1248_;
}
v_resetjp_1248_:
{
lean_object* v___x_1251_; 
v___x_1251_ = l_Array_finIdxOf_x3f___redArg(v_inst_1188_, v_ks_1246_, v_x_1191_);
if (lean_obj_tag(v___x_1251_) == 0)
{
lean_object* v___x_1253_; 
if (v_isShared_1250_ == 0)
{
v___x_1253_ = v___x_1249_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_ks_1246_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_vs_1247_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
return v___x_1253_;
}
}
else
{
lean_object* v_val_1255_; lean_object* v_keys_x27_1256_; lean_object* v_vals_x27_1257_; lean_object* v___x_1259_; 
v_val_1255_ = lean_ctor_get(v___x_1251_, 0);
lean_inc_n(v_val_1255_, 2);
lean_dec_ref_known(v___x_1251_, 1);
v_keys_x27_1256_ = l_Array_eraseIdx___redArg(v_ks_1246_, v_val_1255_);
v_vals_x27_1257_ = l_Array_eraseIdx___redArg(v_vs_1247_, v_val_1255_);
if (v_isShared_1250_ == 0)
{
lean_ctor_set(v___x_1249_, 1, v_vals_x27_1257_);
lean_ctor_set(v___x_1249_, 0, v_keys_x27_1256_);
v___x_1259_ = v___x_1249_;
goto v_reusejp_1258_;
}
else
{
lean_object* v_reuseFailAlloc_1260_; 
v_reuseFailAlloc_1260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1260_, 0, v_keys_x27_1256_);
lean_ctor_set(v_reuseFailAlloc_1260_, 1, v_vals_x27_1257_);
v___x_1259_ = v_reuseFailAlloc_1260_;
goto v_reusejp_1258_;
}
v_reusejp_1258_:
{
return v___x_1259_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___redArg___boxed(lean_object* v_inst_1262_, lean_object* v_x_1263_, lean_object* v_x_1264_, lean_object* v_x_1265_){
_start:
{
size_t v_x_213__boxed_1266_; lean_object* v_res_1267_; 
v_x_213__boxed_1266_ = lean_unbox_usize(v_x_1264_);
lean_dec(v_x_1264_);
v_res_1267_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_inst_1262_, v_x_1263_, v_x_213__boxed_1266_, v_x_1265_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux(lean_object* v_00_u03b1_1268_, lean_object* v_00_u03b2_1269_, lean_object* v_inst_1270_, lean_object* v_x_1271_, size_t v_x_1272_, lean_object* v_x_1273_){
_start:
{
lean_object* v___x_1274_; 
v___x_1274_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_inst_1270_, v_x_1271_, v_x_1272_, v_x_1273_);
return v___x_1274_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_eraseAux___boxed(lean_object* v_00_u03b1_1275_, lean_object* v_00_u03b2_1276_, lean_object* v_inst_1277_, lean_object* v_x_1278_, lean_object* v_x_1279_, lean_object* v_x_1280_){
_start:
{
size_t v_x_354__boxed_1281_; lean_object* v_res_1282_; 
v_x_354__boxed_1281_ = lean_unbox_usize(v_x_1279_);
lean_dec(v_x_1279_);
v_res_1282_ = l_Lean_PersistentHashMap_eraseAux(v_00_u03b1_1275_, v_00_u03b2_1276_, v_inst_1277_, v_x_1278_, v_x_354__boxed_1281_, v_x_1280_);
return v_res_1282_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase___redArg(lean_object* v_x_1283_, lean_object* v_x_1284_, lean_object* v_x_1285_, lean_object* v_x_1286_){
_start:
{
lean_object* v___x_1287_; uint64_t v___x_1288_; size_t v_h_1289_; lean_object* v___x_1290_; 
lean_inc(v_x_1286_);
v___x_1287_ = lean_apply_1(v_x_1284_, v_x_1286_);
v___x_1288_ = lean_unbox_uint64(v___x_1287_);
lean_dec_ref(v___x_1287_);
v_h_1289_ = lean_uint64_to_usize(v___x_1288_);
v___x_1290_ = l_Lean_PersistentHashMap_eraseAux___redArg(v_x_1283_, v_x_1285_, v_h_1289_, v_x_1286_);
return v___x_1290_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_erase(lean_object* v_00_u03b1_1291_, lean_object* v_00_u03b2_1292_, lean_object* v_x_1293_, lean_object* v_x_1294_, lean_object* v_x_1295_, lean_object* v_x_1296_){
_start:
{
lean_object* v___x_1297_; 
v___x_1297_ = l_Lean_PersistentHashMap_erase___redArg(v_x_1293_, v_x_1294_, v_x_1295_, v_x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg(lean_object* v_inst_1298_, lean_object* v_inst_1299_, lean_object* v_f_1300_, lean_object* v_x_1301_, size_t v_x_1302_, size_t v_x_1303_, lean_object* v_x_1304_){
_start:
{
if (lean_obj_tag(v_x_1301_) == 0)
{
lean_object* v_es_1305_; size_t v___x_1306_; size_t v___x_1307_; lean_object* v_j_1308_; lean_object* v___x_1309_; uint8_t v___x_1310_; 
v_es_1305_ = lean_ctor_get(v_x_1301_, 0);
v___x_1306_ = ((size_t)31ULL);
v___x_1307_ = lean_usize_land(v_x_1302_, v___x_1306_);
v_j_1308_ = lean_usize_to_nat(v___x_1307_);
v___x_1309_ = lean_array_get_size(v_es_1305_);
v___x_1310_ = lean_nat_dec_lt(v_j_1308_, v___x_1309_);
if (v___x_1310_ == 0)
{
lean_dec(v_j_1308_);
lean_dec(v_x_1304_);
lean_dec_ref(v_f_1300_);
lean_dec_ref(v_inst_1299_);
lean_dec_ref(v_inst_1298_);
return v_x_1301_;
}
else
{
lean_object* v___x_1312_; uint8_t v_isShared_1313_; uint8_t v_isSharedCheck_1379_; 
lean_inc_ref(v_es_1305_);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_x_1301_);
if (v_isSharedCheck_1379_ == 0)
{
lean_object* v_unused_1380_; 
v_unused_1380_ = lean_ctor_get(v_x_1301_, 0);
lean_dec(v_unused_1380_);
v___x_1312_ = v_x_1301_;
v_isShared_1313_ = v_isSharedCheck_1379_;
goto v_resetjp_1311_;
}
else
{
lean_dec(v_x_1301_);
v___x_1312_ = lean_box(0);
v_isShared_1313_ = v_isSharedCheck_1379_;
goto v_resetjp_1311_;
}
v_resetjp_1311_:
{
lean_object* v_v_1314_; lean_object* v___x_1315_; lean_object* v_xs_x27_1316_; lean_object* v___y_1318_; 
v_v_1314_ = lean_array_fget(v_es_1305_, v_j_1308_);
v___x_1315_ = lean_box(0);
v_xs_x27_1316_ = lean_array_fset(v_es_1305_, v_j_1308_, v___x_1315_);
switch(lean_obj_tag(v_v_1314_))
{
case 0:
{
lean_object* v_key_1323_; lean_object* v_val_1324_; lean_object* v___x_1325_; uint8_t v___x_1326_; 
lean_dec_ref(v_inst_1299_);
v_key_1323_ = lean_ctor_get(v_v_1314_, 0);
v_val_1324_ = lean_ctor_get(v_v_1314_, 1);
lean_inc(v_key_1323_);
lean_inc(v_x_1304_);
v___x_1325_ = lean_apply_2(v_inst_1298_, v_x_1304_, v_key_1323_);
v___x_1326_ = lean_unbox(v___x_1325_);
if (v___x_1326_ == 0)
{
lean_object* v___x_1327_; lean_object* v___x_1328_; 
v___x_1327_ = lean_box(0);
v___x_1328_ = lean_apply_1(v_f_1300_, v___x_1327_);
if (lean_obj_tag(v___x_1328_) == 0)
{
lean_dec(v_x_1304_);
v___y_1318_ = v_v_1314_;
goto v___jp_1317_;
}
else
{
lean_object* v_val_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1337_; 
lean_inc(v_val_1324_);
lean_inc(v_key_1323_);
lean_dec_ref_known(v_v_1314_, 2);
v_val_1329_ = lean_ctor_get(v___x_1328_, 0);
v_isSharedCheck_1337_ = !lean_is_exclusive(v___x_1328_);
if (v_isSharedCheck_1337_ == 0)
{
v___x_1331_ = v___x_1328_;
v_isShared_1332_ = v_isSharedCheck_1337_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_val_1329_);
lean_dec(v___x_1328_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1337_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1333_; lean_object* v___x_1335_; 
v___x_1333_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_1323_, v_val_1324_, v_x_1304_, v_val_1329_);
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 0, v___x_1333_);
v___x_1335_ = v___x_1331_;
goto v_reusejp_1334_;
}
else
{
lean_object* v_reuseFailAlloc_1336_; 
v_reuseFailAlloc_1336_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1336_, 0, v___x_1333_);
v___x_1335_ = v_reuseFailAlloc_1336_;
goto v_reusejp_1334_;
}
v_reusejp_1334_:
{
v___y_1318_ = v___x_1335_;
goto v___jp_1317_;
}
}
}
}
else
{
lean_object* v___x_1339_; uint8_t v_isShared_1340_; uint8_t v_isSharedCheck_1348_; 
lean_inc(v_val_1324_);
v_isSharedCheck_1348_ = !lean_is_exclusive(v_v_1314_);
if (v_isSharedCheck_1348_ == 0)
{
lean_object* v_unused_1349_; lean_object* v_unused_1350_; 
v_unused_1349_ = lean_ctor_get(v_v_1314_, 1);
lean_dec(v_unused_1349_);
v_unused_1350_ = lean_ctor_get(v_v_1314_, 0);
lean_dec(v_unused_1350_);
v___x_1339_ = v_v_1314_;
v_isShared_1340_ = v_isSharedCheck_1348_;
goto v_resetjp_1338_;
}
else
{
lean_dec(v_v_1314_);
v___x_1339_ = lean_box(0);
v_isShared_1340_ = v_isSharedCheck_1348_;
goto v_resetjp_1338_;
}
v_resetjp_1338_:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; 
v___x_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1341_, 0, v_val_1324_);
v___x_1342_ = lean_apply_1(v_f_1300_, v___x_1341_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v___x_1343_; 
lean_del_object(v___x_1339_);
lean_dec(v_x_1304_);
v___x_1343_ = lean_box(2);
v___y_1318_ = v___x_1343_;
goto v___jp_1317_;
}
else
{
lean_object* v_val_1344_; lean_object* v___x_1346_; 
v_val_1344_ = lean_ctor_get(v___x_1342_, 0);
lean_inc(v_val_1344_);
lean_dec_ref_known(v___x_1342_, 1);
if (v_isShared_1340_ == 0)
{
lean_ctor_set(v___x_1339_, 1, v_val_1344_);
lean_ctor_set(v___x_1339_, 0, v_x_1304_);
v___x_1346_ = v___x_1339_;
goto v_reusejp_1345_;
}
else
{
lean_object* v_reuseFailAlloc_1347_; 
v_reuseFailAlloc_1347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1347_, 0, v_x_1304_);
lean_ctor_set(v_reuseFailAlloc_1347_, 1, v_val_1344_);
v___x_1346_ = v_reuseFailAlloc_1347_;
goto v_reusejp_1345_;
}
v_reusejp_1345_:
{
v___y_1318_ = v___x_1346_;
goto v___jp_1317_;
}
}
}
}
}
case 1:
{
lean_object* v_node_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1374_; 
v_node_1351_ = lean_ctor_get(v_v_1314_, 0);
v_isSharedCheck_1374_ = !lean_is_exclusive(v_v_1314_);
if (v_isSharedCheck_1374_ == 0)
{
v___x_1353_ = v_v_1314_;
v_isShared_1354_ = v_isSharedCheck_1374_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_node_1351_);
lean_dec(v_v_1314_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1374_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
size_t v___x_1355_; size_t v___x_1356_; size_t v___x_1357_; size_t v___x_1358_; lean_object* v_newNode_1359_; lean_object* v___x_1360_; 
v___x_1355_ = ((size_t)5ULL);
v___x_1356_ = lean_usize_shift_right(v_x_1302_, v___x_1355_);
v___x_1357_ = ((size_t)1ULL);
v___x_1358_ = lean_usize_add(v_x_1303_, v___x_1357_);
v_newNode_1359_ = l_Lean_PersistentHashMap_alterAux___redArg(v_inst_1298_, v_inst_1299_, v_f_1300_, v_node_1351_, v___x_1356_, v___x_1358_, v_x_1304_);
lean_inc_ref(v_newNode_1359_);
v___x_1360_ = l_Lean_PersistentHashMap_isUnaryNode___redArg(v_newNode_1359_);
if (lean_obj_tag(v___x_1360_) == 0)
{
lean_object* v___x_1362_; 
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 0, v_newNode_1359_);
v___x_1362_ = v___x_1353_;
goto v_reusejp_1361_;
}
else
{
lean_object* v_reuseFailAlloc_1363_; 
v_reuseFailAlloc_1363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1363_, 0, v_newNode_1359_);
v___x_1362_ = v_reuseFailAlloc_1363_;
goto v_reusejp_1361_;
}
v_reusejp_1361_:
{
v___y_1318_ = v___x_1362_;
goto v___jp_1317_;
}
}
else
{
lean_object* v_val_1364_; lean_object* v_fst_1365_; lean_object* v_snd_1366_; lean_object* v___x_1368_; uint8_t v_isShared_1369_; uint8_t v_isSharedCheck_1373_; 
lean_dec_ref(v_newNode_1359_);
lean_del_object(v___x_1353_);
v_val_1364_ = lean_ctor_get(v___x_1360_, 0);
lean_inc(v_val_1364_);
lean_dec_ref_known(v___x_1360_, 1);
v_fst_1365_ = lean_ctor_get(v_val_1364_, 0);
v_snd_1366_ = lean_ctor_get(v_val_1364_, 1);
v_isSharedCheck_1373_ = !lean_is_exclusive(v_val_1364_);
if (v_isSharedCheck_1373_ == 0)
{
v___x_1368_ = v_val_1364_;
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
else
{
lean_inc(v_snd_1366_);
lean_inc(v_fst_1365_);
lean_dec(v_val_1364_);
v___x_1368_ = lean_box(0);
v_isShared_1369_ = v_isSharedCheck_1373_;
goto v_resetjp_1367_;
}
v_resetjp_1367_:
{
lean_object* v___x_1371_; 
if (v_isShared_1369_ == 0)
{
v___x_1371_ = v___x_1368_;
goto v_reusejp_1370_;
}
else
{
lean_object* v_reuseFailAlloc_1372_; 
v_reuseFailAlloc_1372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1372_, 0, v_fst_1365_);
lean_ctor_set(v_reuseFailAlloc_1372_, 1, v_snd_1366_);
v___x_1371_ = v_reuseFailAlloc_1372_;
goto v_reusejp_1370_;
}
v_reusejp_1370_:
{
v___y_1318_ = v___x_1371_;
goto v___jp_1317_;
}
}
}
}
}
default: 
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
lean_dec_ref(v_inst_1299_);
lean_dec_ref(v_inst_1298_);
v___x_1375_ = lean_box(0);
v___x_1376_ = lean_apply_1(v_f_1300_, v___x_1375_);
if (lean_obj_tag(v___x_1376_) == 0)
{
lean_dec(v_x_1304_);
v___y_1318_ = v_v_1314_;
goto v___jp_1317_;
}
else
{
lean_object* v_val_1377_; lean_object* v___x_1378_; 
v_val_1377_ = lean_ctor_get(v___x_1376_, 0);
lean_inc(v_val_1377_);
lean_dec_ref_known(v___x_1376_, 1);
v___x_1378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1378_, 0, v_x_1304_);
lean_ctor_set(v___x_1378_, 1, v_val_1377_);
v___y_1318_ = v___x_1378_;
goto v___jp_1317_;
}
}
}
v___jp_1317_:
{
lean_object* v___x_1319_; lean_object* v___x_1321_; 
v___x_1319_ = lean_array_fset(v_xs_x27_1316_, v_j_1308_, v___y_1318_);
lean_dec(v_j_1308_);
if (v_isShared_1313_ == 0)
{
lean_ctor_set(v___x_1312_, 0, v___x_1319_);
v___x_1321_ = v___x_1312_;
goto v_reusejp_1320_;
}
else
{
lean_object* v_reuseFailAlloc_1322_; 
v_reuseFailAlloc_1322_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1322_, 0, v___x_1319_);
v___x_1321_ = v_reuseFailAlloc_1322_;
goto v_reusejp_1320_;
}
v_reusejp_1320_:
{
return v___x_1321_;
}
}
}
}
}
else
{
lean_object* v_ks_1381_; lean_object* v_vs_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1415_; 
v_ks_1381_ = lean_ctor_get(v_x_1301_, 0);
v_vs_1382_ = lean_ctor_get(v_x_1301_, 1);
v_isSharedCheck_1415_ = !lean_is_exclusive(v_x_1301_);
if (v_isSharedCheck_1415_ == 0)
{
v___x_1384_ = v_x_1301_;
v_isShared_1385_ = v_isSharedCheck_1415_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_vs_1382_);
lean_inc(v_ks_1381_);
lean_dec(v_x_1301_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1415_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v___x_1386_; 
lean_inc(v_x_1304_);
lean_inc_ref(v_inst_1298_);
v___x_1386_ = l_Array_finIdxOf_x3f___redArg(v_inst_1298_, v_ks_1381_, v_x_1304_);
if (lean_obj_tag(v___x_1386_) == 0)
{
lean_object* v___x_1388_; 
if (v_isShared_1385_ == 0)
{
v___x_1388_ = v___x_1384_;
goto v_reusejp_1387_;
}
else
{
lean_object* v_reuseFailAlloc_1393_; 
v_reuseFailAlloc_1393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1393_, 0, v_ks_1381_);
lean_ctor_set(v_reuseFailAlloc_1393_, 1, v_vs_1382_);
v___x_1388_ = v_reuseFailAlloc_1393_;
goto v_reusejp_1387_;
}
v_reusejp_1387_:
{
lean_object* v___x_1389_; lean_object* v___x_1390_; 
v___x_1389_ = lean_box(0);
v___x_1390_ = lean_apply_1(v_f_1300_, v___x_1389_);
if (lean_obj_tag(v___x_1390_) == 0)
{
lean_dec(v_x_1304_);
lean_dec_ref(v_inst_1299_);
lean_dec_ref(v_inst_1298_);
return v___x_1388_;
}
else
{
lean_object* v_val_1391_; lean_object* v___x_1392_; 
v_val_1391_ = lean_ctor_get(v___x_1390_, 0);
lean_inc(v_val_1391_);
lean_dec_ref_known(v___x_1390_, 1);
v___x_1392_ = l_Lean_PersistentHashMap_insertAux___redArg(v_inst_1298_, v_inst_1299_, v___x_1388_, v_x_1302_, v_x_1303_, v_x_1304_, v_val_1391_);
return v___x_1392_;
}
}
}
else
{
lean_object* v_val_1394_; lean_object* v___x_1396_; uint8_t v_isShared_1397_; uint8_t v_isSharedCheck_1414_; 
lean_dec_ref(v_inst_1299_);
lean_dec_ref(v_inst_1298_);
v_val_1394_ = lean_ctor_get(v___x_1386_, 0);
v_isSharedCheck_1414_ = !lean_is_exclusive(v___x_1386_);
if (v_isSharedCheck_1414_ == 0)
{
v___x_1396_ = v___x_1386_;
v_isShared_1397_ = v_isSharedCheck_1414_;
goto v_resetjp_1395_;
}
else
{
lean_inc(v_val_1394_);
lean_dec(v___x_1386_);
v___x_1396_ = lean_box(0);
v_isShared_1397_ = v_isSharedCheck_1414_;
goto v_resetjp_1395_;
}
v_resetjp_1395_:
{
lean_object* v_v_x27_1398_; lean_object* v_keys_1399_; lean_object* v_vals_1400_; lean_object* v___x_1402_; 
v_v_x27_1398_ = lean_array_fget(v_vs_1382_, v_val_1394_);
lean_inc(v_val_1394_);
v_keys_1399_ = l_Array_eraseIdx___redArg(v_ks_1381_, v_val_1394_);
v_vals_1400_ = l_Array_eraseIdx___redArg(v_vs_1382_, v_val_1394_);
if (v_isShared_1397_ == 0)
{
lean_ctor_set(v___x_1396_, 0, v_v_x27_1398_);
v___x_1402_ = v___x_1396_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1413_; 
v_reuseFailAlloc_1413_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1413_, 0, v_v_x27_1398_);
v___x_1402_ = v_reuseFailAlloc_1413_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
lean_object* v___x_1403_; 
v___x_1403_ = lean_apply_1(v_f_1300_, v___x_1402_);
if (lean_obj_tag(v___x_1403_) == 0)
{
lean_object* v___x_1405_; 
lean_dec(v_x_1304_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v_vals_1400_);
lean_ctor_set(v___x_1384_, 0, v_keys_1399_);
v___x_1405_ = v___x_1384_;
goto v_reusejp_1404_;
}
else
{
lean_object* v_reuseFailAlloc_1406_; 
v_reuseFailAlloc_1406_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1406_, 0, v_keys_1399_);
lean_ctor_set(v_reuseFailAlloc_1406_, 1, v_vals_1400_);
v___x_1405_ = v_reuseFailAlloc_1406_;
goto v_reusejp_1404_;
}
v_reusejp_1404_:
{
return v___x_1405_;
}
}
else
{
lean_object* v_val_1407_; lean_object* v_keys_1408_; lean_object* v_vals_1409_; lean_object* v___x_1411_; 
v_val_1407_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_val_1407_);
lean_dec_ref_known(v___x_1403_, 1);
v_keys_1408_ = lean_array_push(v_keys_1399_, v_x_1304_);
v_vals_1409_ = lean_array_push(v_vals_1400_, v_val_1407_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set(v___x_1384_, 1, v_vals_1409_);
lean_ctor_set(v___x_1384_, 0, v_keys_1408_);
v___x_1411_ = v___x_1384_;
goto v_reusejp_1410_;
}
else
{
lean_object* v_reuseFailAlloc_1412_; 
v_reuseFailAlloc_1412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1412_, 0, v_keys_1408_);
lean_ctor_set(v_reuseFailAlloc_1412_, 1, v_vals_1409_);
v___x_1411_ = v_reuseFailAlloc_1412_;
goto v_reusejp_1410_;
}
v_reusejp_1410_:
{
return v___x_1411_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___redArg___boxed(lean_object* v_inst_1416_, lean_object* v_inst_1417_, lean_object* v_f_1418_, lean_object* v_x_1419_, lean_object* v_x_1420_, lean_object* v_x_1421_, lean_object* v_x_1422_){
_start:
{
size_t v_x_446__boxed_1423_; size_t v_x_447__boxed_1424_; lean_object* v_res_1425_; 
v_x_446__boxed_1423_ = lean_unbox_usize(v_x_1420_);
lean_dec(v_x_1420_);
v_x_447__boxed_1424_ = lean_unbox_usize(v_x_1421_);
lean_dec(v_x_1421_);
v_res_1425_ = l_Lean_PersistentHashMap_alterAux___redArg(v_inst_1416_, v_inst_1417_, v_f_1418_, v_x_1419_, v_x_446__boxed_1423_, v_x_447__boxed_1424_, v_x_1422_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux(lean_object* v_00_u03b1_1426_, lean_object* v_00_u03b2_1427_, lean_object* v_inst_1428_, lean_object* v_inst_1429_, lean_object* v_f_1430_, lean_object* v_x_1431_, size_t v_x_1432_, size_t v_x_1433_, lean_object* v_x_1434_){
_start:
{
lean_object* v___x_1435_; 
v___x_1435_ = l_Lean_PersistentHashMap_alterAux___redArg(v_inst_1428_, v_inst_1429_, v_f_1430_, v_x_1431_, v_x_1432_, v_x_1433_, v_x_1434_);
return v___x_1435_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alterAux___boxed(lean_object* v_00_u03b1_1436_, lean_object* v_00_u03b2_1437_, lean_object* v_inst_1438_, lean_object* v_inst_1439_, lean_object* v_f_1440_, lean_object* v_x_1441_, lean_object* v_x_1442_, lean_object* v_x_1443_, lean_object* v_x_1444_){
_start:
{
size_t v_x_668__boxed_1445_; size_t v_x_669__boxed_1446_; lean_object* v_res_1447_; 
v_x_668__boxed_1445_ = lean_unbox_usize(v_x_1442_);
lean_dec(v_x_1442_);
v_x_669__boxed_1446_ = lean_unbox_usize(v_x_1443_);
lean_dec(v_x_1443_);
v_res_1447_ = l_Lean_PersistentHashMap_alterAux(v_00_u03b1_1436_, v_00_u03b2_1437_, v_inst_1438_, v_inst_1439_, v_f_1440_, v_x_1441_, v_x_668__boxed_1445_, v_x_669__boxed_1446_, v_x_1444_);
return v_res_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter___redArg(lean_object* v_x_1448_, lean_object* v_x_1449_, lean_object* v_x_1450_, lean_object* v_x_1451_, lean_object* v_x_1452_){
_start:
{
lean_object* v___x_1453_; uint64_t v___x_1454_; size_t v_h_1455_; size_t v___x_1456_; lean_object* v___x_1457_; 
lean_inc_ref(v_x_1449_);
lean_inc(v_x_1451_);
v___x_1453_ = lean_apply_1(v_x_1449_, v_x_1451_);
v___x_1454_ = lean_unbox_uint64(v___x_1453_);
lean_dec_ref(v___x_1453_);
v_h_1455_ = lean_uint64_to_usize(v___x_1454_);
v___x_1456_ = ((size_t)1ULL);
v___x_1457_ = l_Lean_PersistentHashMap_alterAux___redArg(v_x_1448_, v_x_1449_, v_x_1452_, v_x_1450_, v_h_1455_, v___x_1456_, v_x_1451_);
return v___x_1457_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_alter(lean_object* v_00_u03b1_1458_, lean_object* v_00_u03b2_1459_, lean_object* v_x_1460_, lean_object* v_x_1461_, lean_object* v_x_1462_, lean_object* v_x_1463_, lean_object* v_x_1464_){
_start:
{
lean_object* v___x_1465_; uint64_t v___x_1466_; size_t v_h_1467_; size_t v___x_1468_; lean_object* v___x_1469_; 
lean_inc_ref(v_x_1461_);
lean_inc(v_x_1463_);
v___x_1465_ = lean_apply_1(v_x_1461_, v_x_1463_);
v___x_1466_ = lean_unbox_uint64(v___x_1465_);
lean_dec_ref(v___x_1465_);
v_h_1467_ = lean_uint64_to_usize(v___x_1466_);
v___x_1468_ = ((size_t)1ULL);
v___x_1469_ = l_Lean_PersistentHashMap_alterAux___redArg(v_x_1460_, v_x_1461_, v_x_1464_, v_x_1462_, v_h_1467_, v___x_1468_, v_x_1463_);
return v___x_1469_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0___boxed(lean_object* v_i_1470_, lean_object* v_inst_1471_, lean_object* v_f_1472_, lean_object* v_keys_1473_, lean_object* v_vals_1474_, lean_object* v_____do__lift_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0(v_i_1470_, v_inst_1471_, v_f_1472_, v_keys_1473_, v_vals_1474_, v_____do__lift_1475_);
lean_dec(v_i_1470_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(lean_object* v_inst_1477_, lean_object* v_f_1478_, lean_object* v_keys_1479_, lean_object* v_vals_1480_, lean_object* v_i_1481_, lean_object* v_acc_1482_){
_start:
{
lean_object* v_toApplicative_1483_; lean_object* v_toBind_1484_; lean_object* v_toPure_1485_; lean_object* v___x_1486_; uint8_t v___x_1487_; 
v_toApplicative_1483_ = lean_ctor_get(v_inst_1477_, 0);
v_toBind_1484_ = lean_ctor_get(v_inst_1477_, 1);
lean_inc(v_toBind_1484_);
v_toPure_1485_ = lean_ctor_get(v_toApplicative_1483_, 1);
v___x_1486_ = lean_array_get_size(v_keys_1479_);
v___x_1487_ = lean_nat_dec_lt(v_i_1481_, v___x_1486_);
if (v___x_1487_ == 0)
{
lean_object* v___x_1488_; 
lean_inc(v_toPure_1485_);
lean_dec(v_toBind_1484_);
lean_dec(v_i_1481_);
lean_dec_ref(v_vals_1480_);
lean_dec_ref(v_keys_1479_);
lean_dec(v_f_1478_);
lean_dec_ref(v_inst_1477_);
v___x_1488_ = lean_apply_2(v_toPure_1485_, lean_box(0), v_acc_1482_);
return v___x_1488_;
}
else
{
lean_object* v___f_1489_; lean_object* v_k_1490_; lean_object* v_v_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
lean_inc_ref(v_vals_1480_);
lean_inc_ref(v_keys_1479_);
lean_inc(v_f_1478_);
lean_inc(v_i_1481_);
v___f_1489_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_1489_, 0, v_i_1481_);
lean_closure_set(v___f_1489_, 1, v_inst_1477_);
lean_closure_set(v___f_1489_, 2, v_f_1478_);
lean_closure_set(v___f_1489_, 3, v_keys_1479_);
lean_closure_set(v___f_1489_, 4, v_vals_1480_);
v_k_1490_ = lean_array_fget(v_keys_1479_, v_i_1481_);
lean_dec_ref(v_keys_1479_);
v_v_1491_ = lean_array_fget(v_vals_1480_, v_i_1481_);
lean_dec(v_i_1481_);
lean_dec_ref(v_vals_1480_);
v___x_1492_ = lean_apply_3(v_f_1478_, v_acc_1482_, v_k_1490_, v_v_1491_);
v___x_1493_ = lean_apply_4(v_toBind_1484_, lean_box(0), lean_box(0), v___x_1492_, v___f_1489_);
return v___x_1493_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg___lam__0(lean_object* v_i_1494_, lean_object* v_inst_1495_, lean_object* v_f_1496_, lean_object* v_keys_1497_, lean_object* v_vals_1498_, lean_object* v_____do__lift_1499_){
_start:
{
lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1500_ = lean_unsigned_to_nat(1u);
v___x_1501_ = lean_nat_add(v_i_1494_, v___x_1500_);
v___x_1502_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(v_inst_1495_, v_f_1496_, v_keys_1497_, v_vals_1498_, v___x_1501_, v_____do__lift_1499_);
return v___x_1502_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse(lean_object* v_m_1503_, lean_object* v_inst_1504_, lean_object* v_00_u03c3_1505_, lean_object* v_00_u03b1_1506_, lean_object* v_00_u03b2_1507_, lean_object* v_f_1508_, lean_object* v_keys_1509_, lean_object* v_vals_1510_, lean_object* v_heq_1511_, lean_object* v_i_1512_, lean_object* v_acc_1513_){
_start:
{
lean_object* v___x_1514_; 
v___x_1514_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(v_inst_1504_, v_f_1508_, v_keys_1509_, v_vals_1510_, v_i_1512_, v_acc_1513_);
return v___x_1514_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg(lean_object* v_inst_1515_, lean_object* v_f_1516_, lean_object* v_x_1517_, lean_object* v_x_1518_){
_start:
{
if (lean_obj_tag(v_x_1517_) == 0)
{
lean_object* v_toApplicative_1519_; lean_object* v_toPure_1520_; lean_object* v_es_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; uint8_t v___x_1524_; 
v_toApplicative_1519_ = lean_ctor_get(v_inst_1515_, 0);
v_toPure_1520_ = lean_ctor_get(v_toApplicative_1519_, 1);
v_es_1521_ = lean_ctor_get(v_x_1517_, 0);
lean_inc_ref(v_es_1521_);
lean_dec_ref_known(v_x_1517_, 1);
v___x_1522_ = lean_unsigned_to_nat(0u);
v___x_1523_ = lean_array_get_size(v_es_1521_);
v___x_1524_ = lean_nat_dec_lt(v___x_1522_, v___x_1523_);
if (v___x_1524_ == 0)
{
lean_object* v___x_1525_; 
lean_inc(v_toPure_1520_);
lean_dec_ref(v_es_1521_);
lean_dec(v_f_1516_);
lean_dec_ref(v_inst_1515_);
v___x_1525_ = lean_apply_2(v_toPure_1520_, lean_box(0), v_x_1518_);
return v___x_1525_;
}
else
{
lean_object* v___f_1526_; size_t v___x_1527_; size_t v___x_1528_; lean_object* v___x_1529_; 
lean_inc(v_toPure_1520_);
lean_inc_ref(v_inst_1515_);
v___f_1526_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldlMAux___redArg___lam__0), 5, 3);
lean_closure_set(v___f_1526_, 0, v_f_1516_);
lean_closure_set(v___f_1526_, 1, v_inst_1515_);
lean_closure_set(v___f_1526_, 2, v_toPure_1520_);
v___x_1527_ = ((size_t)0ULL);
v___x_1528_ = lean_usize_of_nat(v___x_1523_);
v___x_1529_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1515_, v___f_1526_, v_es_1521_, v___x_1527_, v___x_1528_, v_x_1518_);
return v___x_1529_;
}
}
else
{
lean_object* v_ks_1530_; lean_object* v_vs_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; 
v_ks_1530_ = lean_ctor_get(v_x_1517_, 0);
lean_inc_ref(v_ks_1530_);
v_vs_1531_ = lean_ctor_get(v_x_1517_, 1);
lean_inc_ref(v_vs_1531_);
lean_dec_ref_known(v_x_1517_, 2);
v___x_1532_ = lean_unsigned_to_nat(0u);
v___x_1533_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlMAux_traverse___redArg(v_inst_1515_, v_f_1516_, v_ks_1530_, v_vs_1531_, v___x_1532_, v_x_1518_);
return v___x_1533_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux___redArg___lam__0(lean_object* v_f_1534_, lean_object* v_inst_1535_, lean_object* v_toPure_1536_, lean_object* v_acc_1537_, lean_object* v_entry_1538_){
_start:
{
switch(lean_obj_tag(v_entry_1538_))
{
case 0:
{
lean_object* v_key_1539_; lean_object* v_val_1540_; lean_object* v___x_1541_; 
lean_dec(v_toPure_1536_);
lean_dec_ref(v_inst_1535_);
v_key_1539_ = lean_ctor_get(v_entry_1538_, 0);
lean_inc(v_key_1539_);
v_val_1540_ = lean_ctor_get(v_entry_1538_, 1);
lean_inc(v_val_1540_);
lean_dec_ref_known(v_entry_1538_, 2);
v___x_1541_ = lean_apply_3(v_f_1534_, v_acc_1537_, v_key_1539_, v_val_1540_);
return v___x_1541_;
}
case 1:
{
lean_object* v_node_1542_; lean_object* v___x_1543_; 
lean_dec(v_toPure_1536_);
v_node_1542_ = lean_ctor_get(v_entry_1538_, 0);
lean_inc(v_node_1542_);
lean_dec_ref_known(v_entry_1538_, 1);
v___x_1543_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1535_, v_f_1534_, v_node_1542_, v_acc_1537_);
return v___x_1543_;
}
default: 
{
lean_object* v___x_1544_; 
lean_dec_ref(v_inst_1535_);
lean_dec(v_f_1534_);
v___x_1544_ = lean_apply_2(v_toPure_1536_, lean_box(0), v_acc_1537_);
return v___x_1544_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlMAux(lean_object* v_m_1545_, lean_object* v_inst_1546_, lean_object* v_00_u03c3_1547_, lean_object* v_00_u03b1_1548_, lean_object* v_00_u03b2_1549_, lean_object* v_f_1550_, lean_object* v_x_1551_, lean_object* v_x_1552_){
_start:
{
lean_object* v___x_1553_; 
v___x_1553_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1546_, v_f_1550_, v_x_1551_, v_x_1552_);
return v___x_1553_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___redArg(lean_object* v_inst_1554_, lean_object* v_map_1555_, lean_object* v_f_1556_, lean_object* v_init_1557_){
_start:
{
lean_object* v___x_1558_; 
v___x_1558_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1554_, v_f_1556_, v_map_1555_, v_init_1557_);
return v___x_1558_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM(lean_object* v_m_1559_, lean_object* v_inst_1560_, lean_object* v_00_u03c3_1561_, lean_object* v_00_u03b1_1562_, lean_object* v_00_u03b2_1563_, lean_object* v_x_1564_, lean_object* v_x_1565_, lean_object* v_map_1566_, lean_object* v_f_1567_, lean_object* v_init_1568_){
_start:
{
lean_object* v___x_1569_; 
v___x_1569_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1560_, v_f_1567_, v_map_1566_, v_init_1568_);
return v___x_1569_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldlM___boxed(lean_object* v_m_1570_, lean_object* v_inst_1571_, lean_object* v_00_u03c3_1572_, lean_object* v_00_u03b1_1573_, lean_object* v_00_u03b2_1574_, lean_object* v_x_1575_, lean_object* v_x_1576_, lean_object* v_map_1577_, lean_object* v_f_1578_, lean_object* v_init_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = l_Lean_PersistentHashMap_foldlM(v_m_1570_, v_inst_1571_, v_00_u03c3_1572_, v_00_u03b1_1573_, v_00_u03b2_1574_, v_x_1575_, v_x_1576_, v_map_1577_, v_f_1578_, v_init_1579_);
lean_dec_ref(v_x_1576_);
lean_dec_ref(v_x_1575_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg___lam__0(lean_object* v_f_1581_, lean_object* v_x_1582_, lean_object* v___y_1583_, lean_object* v___y_1584_){
_start:
{
lean_object* v___x_1585_; 
v___x_1585_ = lean_apply_2(v_f_1581_, v___y_1583_, v___y_1584_);
return v___x_1585_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___redArg(lean_object* v_inst_1586_, lean_object* v_map_1587_, lean_object* v_f_1588_){
_start:
{
lean_object* v___f_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; 
v___f_1589_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1589_, 0, v_f_1588_);
v___x_1590_ = lean_box(0);
v___x_1591_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v_inst_1586_, v___f_1589_, v_map_1587_, v___x_1590_);
return v___x_1591_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM(lean_object* v_m_1592_, lean_object* v_inst_1593_, lean_object* v_00_u03b1_1594_, lean_object* v_00_u03b2_1595_, lean_object* v_x_1596_, lean_object* v_x_1597_, lean_object* v_map_1598_, lean_object* v_f_1599_){
_start:
{
lean_object* v___x_1600_; 
v___x_1600_ = l_Lean_PersistentHashMap_forM___redArg(v_inst_1593_, v_map_1598_, v_f_1599_);
return v___x_1600_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forM___boxed(lean_object* v_m_1601_, lean_object* v_inst_1602_, lean_object* v_00_u03b1_1603_, lean_object* v_00_u03b2_1604_, lean_object* v_x_1605_, lean_object* v_x_1606_, lean_object* v_map_1607_, lean_object* v_f_1608_){
_start:
{
lean_object* v_res_1609_; 
v_res_1609_ = l_Lean_PersistentHashMap_forM(v_m_1601_, v_inst_1602_, v_00_u03b1_1603_, v_00_u03b2_1604_, v_x_1605_, v_x_1606_, v_map_1607_, v_f_1608_);
lean_dec_ref(v_x_1606_);
lean_dec_ref(v_x_1605_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg___lam__0(lean_object* v_f_1610_, lean_object* v_x1_1611_, lean_object* v_x2_1612_, lean_object* v_x3_1613_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = lean_apply_3(v_f_1610_, v_x1_1611_, v_x2_1612_, v_x3_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___redArg(lean_object* v_map_1634_, lean_object* v_f_1635_, lean_object* v_init_1636_){
_start:
{
lean_object* v___f_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
v___f_1637_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_foldl___redArg___lam__0), 4, 1);
lean_closure_set(v___f_1637_, 0, v_f_1635_);
v___x_1638_ = ((lean_object*)(l_Lean_PersistentHashMap_foldl___redArg___closed__9));
v___x_1639_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v___x_1638_, v___f_1637_, v_map_1634_, v_init_1636_);
return v___x_1639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl(lean_object* v_00_u03c3_1640_, lean_object* v_00_u03b1_1641_, lean_object* v_00_u03b2_1642_, lean_object* v_x_1643_, lean_object* v_x_1644_, lean_object* v_map_1645_, lean_object* v_f_1646_, lean_object* v_init_1647_){
_start:
{
lean_object* v___x_1648_; 
v___x_1648_ = l_Lean_PersistentHashMap_foldl___redArg(v_map_1645_, v_f_1646_, v_init_1647_);
return v___x_1648_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_foldl___boxed(lean_object* v_00_u03c3_1649_, lean_object* v_00_u03b1_1650_, lean_object* v_00_u03b2_1651_, lean_object* v_x_1652_, lean_object* v_x_1653_, lean_object* v_map_1654_, lean_object* v_f_1655_, lean_object* v_init_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l_Lean_PersistentHashMap_foldl(v_00_u03c3_1649_, v_00_u03b1_1650_, v_00_u03b2_1651_, v_x_1652_, v_x_1653_, v_map_1654_, v_f_1655_, v_init_1656_);
lean_dec_ref(v_x_1653_);
lean_dec_ref(v_x_1652_);
return v_res_1657_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit___redArg(lean_object* v_x_1658_, lean_object* v_x_1659_, lean_object* v_f_1660_, lean_object* v_old_1661_, lean_object* v_acc_1662_, lean_object* v_k_1663_, lean_object* v_v_1664_){
_start:
{
uint8_t v___x_1665_; 
lean_inc(v_k_1663_);
v___x_1665_ = l_Lean_PersistentHashMap_contains___redArg(v_x_1658_, v_x_1659_, v_old_1661_, v_k_1663_);
if (v___x_1665_ == 0)
{
lean_object* v___x_1666_; 
v___x_1666_ = lean_apply_3(v_f_1660_, v_acc_1662_, v_k_1663_, v_v_1664_);
return v___x_1666_;
}
else
{
lean_dec(v_v_1664_);
lean_dec(v_k_1663_);
lean_dec(v_f_1660_);
return v_acc_1662_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit(lean_object* v_00_u03c3_1667_, lean_object* v_00_u03b1_1668_, lean_object* v_00_u03b2_1669_, lean_object* v_x_1670_, lean_object* v_x_1671_, lean_object* v_f_1672_, lean_object* v_old_1673_, lean_object* v_acc_1674_, lean_object* v_k_1675_, lean_object* v_v_1676_){
_start:
{
lean_object* v___x_1677_; 
v___x_1677_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit___redArg(v_x_1670_, v_x_1671_, v_f_1672_, v_old_1673_, v_acc_1674_, v_k_1675_, v_v_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___redArg(lean_object* v_x_1678_, lean_object* v_x_1679_, lean_object* v_f_1680_, lean_object* v_old_1681_, lean_object* v_ks_1682_, lean_object* v_vs_1683_, lean_object* v_i_1684_, lean_object* v_acc_1685_){
_start:
{
lean_object* v___x_1686_; uint8_t v___x_1687_; 
v___x_1686_ = lean_array_get_size(v_ks_1682_);
v___x_1687_ = lean_nat_dec_lt(v_i_1684_, v___x_1686_);
if (v___x_1687_ == 0)
{
lean_dec(v_i_1684_);
lean_dec_ref(v_old_1681_);
lean_dec(v_f_1680_);
lean_dec_ref(v_x_1679_);
lean_dec_ref(v_x_1678_);
return v_acc_1685_;
}
else
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; 
v___x_1688_ = lean_unsigned_to_nat(1u);
v___x_1689_ = lean_nat_add(v_i_1684_, v___x_1688_);
v___x_1690_ = lean_array_fget_borrowed(v_ks_1682_, v_i_1684_);
v___x_1691_ = lean_array_fget_borrowed(v_vs_1683_, v_i_1684_);
lean_dec(v_i_1684_);
lean_inc(v___x_1691_);
lean_inc(v___x_1690_);
lean_inc_ref(v_old_1681_);
lean_inc(v_f_1680_);
lean_inc_ref(v_x_1679_);
lean_inc_ref(v_x_1678_);
v___x_1692_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit___redArg(v_x_1678_, v_x_1679_, v_f_1680_, v_old_1681_, v_acc_1685_, v___x_1690_, v___x_1691_);
v_i_1684_ = v___x_1689_;
v_acc_1685_ = v___x_1692_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___redArg___boxed(lean_object* v_x_1694_, lean_object* v_x_1695_, lean_object* v_f_1696_, lean_object* v_old_1697_, lean_object* v_ks_1698_, lean_object* v_vs_1699_, lean_object* v_i_1700_, lean_object* v_acc_1701_){
_start:
{
lean_object* v_res_1702_; 
v_res_1702_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___redArg(v_x_1694_, v_x_1695_, v_f_1696_, v_old_1697_, v_ks_1698_, v_vs_1699_, v_i_1700_, v_acc_1701_);
lean_dec_ref(v_vs_1699_);
lean_dec_ref(v_ks_1698_);
return v_res_1702_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision(lean_object* v_00_u03c3_1703_, lean_object* v_00_u03b1_1704_, lean_object* v_00_u03b2_1705_, lean_object* v_x_1706_, lean_object* v_x_1707_, lean_object* v_f_1708_, lean_object* v_old_1709_, lean_object* v_ks_1710_, lean_object* v_vs_1711_, lean_object* v_h_1712_, lean_object* v_i_1713_, lean_object* v_acc_1714_){
_start:
{
lean_object* v___x_1715_; 
v___x_1715_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___redArg(v_x_1706_, v_x_1707_, v_f_1708_, v_old_1709_, v_ks_1710_, v_vs_1711_, v_i_1713_, v_acc_1714_);
return v___x_1715_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___boxed(lean_object* v_00_u03c3_1716_, lean_object* v_00_u03b1_1717_, lean_object* v_00_u03b2_1718_, lean_object* v_x_1719_, lean_object* v_x_1720_, lean_object* v_f_1721_, lean_object* v_old_1722_, lean_object* v_ks_1723_, lean_object* v_vs_1724_, lean_object* v_h_1725_, lean_object* v_i_1726_, lean_object* v_acc_1727_){
_start:
{
lean_object* v_res_1728_; 
v_res_1728_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision(v_00_u03c3_1716_, v_00_u03b1_1717_, v_00_u03b2_1718_, v_x_1719_, v_x_1720_, v_f_1721_, v_old_1722_, v_ks_1723_, v_vs_1724_, v_h_1725_, v_i_1726_, v_acc_1727_);
lean_dec_ref(v_vs_1724_);
lean_dec_ref(v_ks_1723_);
return v_res_1728_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg(lean_object* v_x_1729_, lean_object* v_x_1730_, lean_object* v_f_1731_, lean_object* v_old_1732_, lean_object* v_a_1733_, lean_object* v_a_1734_){
_start:
{
if (lean_obj_tag(v_a_1733_) == 0)
{
lean_object* v_es_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; 
v_es_1735_ = lean_ctor_get(v_a_1733_, 0);
lean_inc_ref(v_es_1735_);
lean_dec_ref_known(v_a_1733_, 1);
v___x_1736_ = lean_unsigned_to_nat(0u);
v___x_1737_ = lean_array_get_size(v_es_1735_);
v___x_1738_ = ((lean_object*)(l_Lean_PersistentHashMap_foldl___redArg___closed__9));
v___x_1739_ = lean_nat_dec_lt(v___x_1736_, v___x_1737_);
if (v___x_1739_ == 0)
{
lean_dec_ref(v_es_1735_);
lean_dec_ref(v_old_1732_);
lean_dec(v_f_1731_);
lean_dec_ref(v_x_1730_);
lean_dec_ref(v_x_1729_);
return v_a_1734_;
}
else
{
lean_object* v___f_1740_; size_t v___x_1741_; size_t v___x_1742_; lean_object* v___x_1743_; 
v___f_1740_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg___lam__0), 6, 4);
lean_closure_set(v___f_1740_, 0, v_x_1729_);
lean_closure_set(v___f_1740_, 1, v_x_1730_);
lean_closure_set(v___f_1740_, 2, v_f_1731_);
lean_closure_set(v___f_1740_, 3, v_old_1732_);
v___x_1741_ = ((size_t)0ULL);
v___x_1742_ = lean_usize_of_nat(v___x_1737_);
v___x_1743_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_1738_, v___f_1740_, v_es_1735_, v___x_1741_, v___x_1742_, v_a_1734_);
return v___x_1743_;
}
}
else
{
lean_object* v_ks_1744_; lean_object* v_vs_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; 
v_ks_1744_ = lean_ctor_get(v_a_1733_, 0);
lean_inc_ref(v_ks_1744_);
v_vs_1745_ = lean_ctor_get(v_a_1733_, 1);
lean_inc_ref(v_vs_1745_);
lean_dec_ref_known(v_a_1733_, 2);
v___x_1746_ = lean_unsigned_to_nat(0u);
v___x_1747_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goCollision___redArg(v_x_1729_, v_x_1730_, v_f_1731_, v_old_1732_, v_ks_1744_, v_vs_1745_, v___x_1746_, v_a_1734_);
lean_dec_ref(v_vs_1745_);
lean_dec_ref(v_ks_1744_);
return v___x_1747_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg___lam__0(lean_object* v_x_1748_, lean_object* v_x_1749_, lean_object* v_f_1750_, lean_object* v_old_1751_, lean_object* v_x1_1752_, lean_object* v_x2_1753_){
_start:
{
switch(lean_obj_tag(v_x2_1753_))
{
case 0:
{
lean_object* v_key_1754_; lean_object* v_val_1755_; lean_object* v___x_1756_; 
v_key_1754_ = lean_ctor_get(v_x2_1753_, 0);
lean_inc(v_key_1754_);
v_val_1755_ = lean_ctor_get(v_x2_1753_, 1);
lean_inc(v_val_1755_);
lean_dec_ref_known(v_x2_1753_, 2);
v___x_1756_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit___redArg(v_x_1748_, v_x_1749_, v_f_1750_, v_old_1751_, v_x1_1752_, v_key_1754_, v_val_1755_);
return v___x_1756_;
}
case 1:
{
lean_object* v_node_1757_; lean_object* v___x_1758_; 
v_node_1757_ = lean_ctor_get(v_x2_1753_, 0);
lean_inc(v_node_1757_);
lean_dec_ref_known(v_x2_1753_, 1);
v___x_1758_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg(v_x_1748_, v_x_1749_, v_f_1750_, v_old_1751_, v_node_1757_, v_x1_1752_);
return v___x_1758_;
}
default: 
{
lean_dec_ref(v_old_1751_);
lean_dec(v_f_1750_);
lean_dec_ref(v_x_1749_);
lean_dec_ref(v_x_1748_);
return v_x1_1752_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll(lean_object* v_00_u03c3_1759_, lean_object* v_00_u03b1_1760_, lean_object* v_00_u03b2_1761_, lean_object* v_x_1762_, lean_object* v_x_1763_, lean_object* v_f_1764_, lean_object* v_old_1765_, lean_object* v_a_1766_, lean_object* v_a_1767_){
_start:
{
lean_object* v___x_1768_; 
v___x_1768_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg(v_x_1762_, v_x_1763_, v_f_1764_, v_old_1765_, v_a_1766_, v_a_1767_);
return v___x_1768_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___redArg(lean_object* v_x_1769_, lean_object* v_x_1770_, lean_object* v_f_1771_, lean_object* v_old_1772_, lean_object* v_nes_1773_, lean_object* v_oes_1774_, lean_object* v_i_1775_, lean_object* v_acc_1776_){
_start:
{
lean_object* v___y_1778_; lean_object* v___x_1782_; uint8_t v___x_1783_; 
v___x_1782_ = lean_array_get_size(v_nes_1773_);
v___x_1783_ = lean_nat_dec_lt(v_i_1775_, v___x_1782_);
if (v___x_1783_ == 0)
{
lean_dec(v_i_1775_);
lean_dec_ref(v_old_1772_);
lean_dec(v_f_1771_);
lean_dec_ref(v_x_1770_);
lean_dec_ref(v_x_1769_);
return v_acc_1776_;
}
else
{
lean_object* v_ne_1784_; lean_object* v___y_1786_; lean_object* v___x_1798_; uint8_t v___x_1799_; 
v_ne_1784_ = lean_array_fget_borrowed(v_nes_1773_, v_i_1775_);
v___x_1798_ = lean_array_get_size(v_oes_1774_);
v___x_1799_ = lean_nat_dec_lt(v_i_1775_, v___x_1798_);
if (v___x_1799_ == 0)
{
lean_object* v___x_1800_; 
v___x_1800_ = lean_box(2);
v___y_1786_ = v___x_1800_;
goto v___jp_1785_;
}
else
{
lean_object* v___x_1801_; 
v___x_1801_ = lean_array_fget_borrowed(v_oes_1774_, v_i_1775_);
v___y_1786_ = v___x_1801_;
goto v___jp_1785_;
}
v___jp_1785_:
{
size_t v___x_1787_; size_t v___x_1788_; uint8_t v___x_1789_; 
v___x_1787_ = lean_ptr_addr(v_ne_1784_);
v___x_1788_ = lean_ptr_addr(v___y_1786_);
v___x_1789_ = lean_usize_dec_eq(v___x_1787_, v___x_1788_);
if (v___x_1789_ == 0)
{
switch(lean_obj_tag(v_ne_1784_))
{
case 0:
{
lean_object* v_key_1790_; lean_object* v_val_1791_; lean_object* v___x_1792_; 
v_key_1790_ = lean_ctor_get(v_ne_1784_, 0);
v_val_1791_ = lean_ctor_get(v_ne_1784_, 1);
lean_inc(v_val_1791_);
lean_inc(v_key_1790_);
lean_inc_ref(v_old_1772_);
lean_inc(v_f_1771_);
lean_inc_ref(v_x_1770_);
lean_inc_ref(v_x_1769_);
v___x_1792_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_visit___redArg(v_x_1769_, v_x_1770_, v_f_1771_, v_old_1772_, v_acc_1776_, v_key_1790_, v_val_1791_);
v___y_1778_ = v___x_1792_;
goto v___jp_1777_;
}
case 1:
{
if (lean_obj_tag(v___y_1786_) == 1)
{
lean_object* v_node_1793_; lean_object* v_node_1794_; lean_object* v___x_1795_; 
v_node_1793_ = lean_ctor_get(v_ne_1784_, 0);
v_node_1794_ = lean_ctor_get(v___y_1786_, 0);
lean_inc(v_node_1793_);
lean_inc_ref(v_old_1772_);
lean_inc(v_f_1771_);
lean_inc_ref(v_x_1770_);
lean_inc_ref(v_x_1769_);
v___x_1795_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg(v_x_1769_, v_x_1770_, v_f_1771_, v_old_1772_, v_node_1793_, v_node_1794_, v_acc_1776_);
v___y_1778_ = v___x_1795_;
goto v___jp_1777_;
}
else
{
lean_object* v_node_1796_; lean_object* v___x_1797_; 
v_node_1796_ = lean_ctor_get(v_ne_1784_, 0);
lean_inc(v_node_1796_);
lean_inc_ref(v_old_1772_);
lean_inc(v_f_1771_);
lean_inc_ref(v_x_1770_);
lean_inc_ref(v_x_1769_);
v___x_1797_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg(v_x_1769_, v_x_1770_, v_f_1771_, v_old_1772_, v_node_1796_, v_acc_1776_);
v___y_1778_ = v___x_1797_;
goto v___jp_1777_;
}
}
default: 
{
v___y_1778_ = v_acc_1776_;
goto v___jp_1777_;
}
}
}
else
{
v___y_1778_ = v_acc_1776_;
goto v___jp_1777_;
}
}
}
v___jp_1777_:
{
lean_object* v___x_1779_; lean_object* v___x_1780_; 
v___x_1779_ = lean_unsigned_to_nat(1u);
v___x_1780_ = lean_nat_add(v_i_1775_, v___x_1779_);
lean_dec(v_i_1775_);
v_i_1775_ = v___x_1780_;
v_acc_1776_ = v___y_1778_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg(lean_object* v_x_1802_, lean_object* v_x_1803_, lean_object* v_f_1804_, lean_object* v_old_1805_, lean_object* v_new_1806_, lean_object* v_old_1807_, lean_object* v_acc_1808_){
_start:
{
size_t v___x_1809_; size_t v___x_1810_; uint8_t v___x_1811_; 
v___x_1809_ = lean_ptr_addr(v_new_1806_);
v___x_1810_ = lean_ptr_addr(v_old_1807_);
v___x_1811_ = lean_usize_dec_eq(v___x_1809_, v___x_1810_);
if (v___x_1811_ == 0)
{
if (lean_obj_tag(v_new_1806_) == 0)
{
if (lean_obj_tag(v_old_1807_) == 0)
{
lean_object* v_es_1812_; lean_object* v_es_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v_es_1812_ = lean_ctor_get(v_new_1806_, 0);
lean_inc_ref(v_es_1812_);
lean_dec_ref_known(v_new_1806_, 1);
v_es_1813_ = lean_ctor_get(v_old_1807_, 0);
v___x_1814_ = lean_unsigned_to_nat(0u);
v___x_1815_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___redArg(v_x_1802_, v_x_1803_, v_f_1804_, v_old_1805_, v_es_1812_, v_es_1813_, v___x_1814_, v_acc_1808_);
lean_dec_ref(v_es_1812_);
return v___x_1815_;
}
else
{
lean_object* v___x_1816_; 
v___x_1816_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg(v_x_1802_, v_x_1803_, v_f_1804_, v_old_1805_, v_new_1806_, v_acc_1808_);
return v___x_1816_;
}
}
else
{
lean_object* v___x_1817_; 
v___x_1817_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goAll___redArg(v_x_1802_, v_x_1803_, v_f_1804_, v_old_1805_, v_new_1806_, v_acc_1808_);
return v___x_1817_;
}
}
else
{
lean_dec_ref(v_new_1806_);
lean_dec_ref(v_old_1805_);
lean_dec(v_f_1804_);
lean_dec_ref(v_x_1803_);
lean_dec_ref(v_x_1802_);
return v_acc_1808_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg___boxed(lean_object* v_x_1818_, lean_object* v_x_1819_, lean_object* v_f_1820_, lean_object* v_old_1821_, lean_object* v_new_1822_, lean_object* v_old_1823_, lean_object* v_acc_1824_){
_start:
{
lean_object* v_res_1825_; 
v_res_1825_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg(v_x_1818_, v_x_1819_, v_f_1820_, v_old_1821_, v_new_1822_, v_old_1823_, v_acc_1824_);
lean_dec_ref(v_old_1823_);
return v_res_1825_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___redArg___boxed(lean_object* v_x_1826_, lean_object* v_x_1827_, lean_object* v_f_1828_, lean_object* v_old_1829_, lean_object* v_nes_1830_, lean_object* v_oes_1831_, lean_object* v_i_1832_, lean_object* v_acc_1833_){
_start:
{
lean_object* v_res_1834_; 
v_res_1834_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___redArg(v_x_1826_, v_x_1827_, v_f_1828_, v_old_1829_, v_nes_1830_, v_oes_1831_, v_i_1832_, v_acc_1833_);
lean_dec_ref(v_oes_1831_);
lean_dec_ref(v_nes_1830_);
return v_res_1834_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries(lean_object* v_00_u03c3_1835_, lean_object* v_00_u03b1_1836_, lean_object* v_00_u03b2_1837_, lean_object* v_x_1838_, lean_object* v_x_1839_, lean_object* v_f_1840_, lean_object* v_old_1841_, lean_object* v_nes_1842_, lean_object* v_oes_1843_, lean_object* v_i_1844_, lean_object* v_acc_1845_){
_start:
{
lean_object* v___x_1846_; 
v___x_1846_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___redArg(v_x_1838_, v_x_1839_, v_f_1840_, v_old_1841_, v_nes_1842_, v_oes_1843_, v_i_1844_, v_acc_1845_);
return v___x_1846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries___boxed(lean_object* v_00_u03c3_1847_, lean_object* v_00_u03b1_1848_, lean_object* v_00_u03b2_1849_, lean_object* v_x_1850_, lean_object* v_x_1851_, lean_object* v_f_1852_, lean_object* v_old_1853_, lean_object* v_nes_1854_, lean_object* v_oes_1855_, lean_object* v_i_1856_, lean_object* v_acc_1857_){
_start:
{
lean_object* v_res_1858_; 
v_res_1858_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_goEntries(v_00_u03c3_1847_, v_00_u03b1_1848_, v_00_u03b2_1849_, v_x_1850_, v_x_1851_, v_f_1852_, v_old_1853_, v_nes_1854_, v_oes_1855_, v_i_1856_, v_acc_1857_);
lean_dec_ref(v_oes_1855_);
lean_dec_ref(v_nes_1854_);
return v_res_1858_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go(lean_object* v_00_u03c3_1859_, lean_object* v_00_u03b1_1860_, lean_object* v_00_u03b2_1861_, lean_object* v_x_1862_, lean_object* v_x_1863_, lean_object* v_f_1864_, lean_object* v_old_1865_, lean_object* v_new_1866_, lean_object* v_old_1867_, lean_object* v_acc_1868_){
_start:
{
lean_object* v___x_1869_; 
v___x_1869_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg(v_x_1862_, v_x_1863_, v_f_1864_, v_old_1865_, v_new_1866_, v_old_1867_, v_acc_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___boxed(lean_object* v_00_u03c3_1870_, lean_object* v_00_u03b1_1871_, lean_object* v_00_u03b2_1872_, lean_object* v_x_1873_, lean_object* v_x_1874_, lean_object* v_f_1875_, lean_object* v_old_1876_, lean_object* v_new_1877_, lean_object* v_old_1878_, lean_object* v_acc_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go(v_00_u03c3_1870_, v_00_u03b1_1871_, v_00_u03b2_1872_, v_x_1873_, v_x_1874_, v_f_1875_, v_old_1876_, v_new_1877_, v_old_1878_, v_acc_1879_);
lean_dec_ref(v_old_1878_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe___redArg(lean_object* v_x_1881_, lean_object* v_x_1882_, lean_object* v_f_1883_, lean_object* v_new_1884_, lean_object* v_old_1885_, lean_object* v_init_1886_){
_start:
{
lean_object* v___x_1887_; 
lean_inc_ref(v_old_1885_);
v___x_1887_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg(v_x_1881_, v_x_1882_, v_f_1883_, v_old_1885_, v_new_1884_, v_old_1885_, v_init_1886_);
lean_dec_ref(v_old_1885_);
return v___x_1887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe(lean_object* v_00_u03c3_1888_, lean_object* v_00_u03b1_1889_, lean_object* v_00_u03b2_1890_, lean_object* v_x_1891_, lean_object* v_x_1892_, lean_object* v_f_1893_, lean_object* v_new_1894_, lean_object* v_old_1895_, lean_object* v_init_1896_){
_start:
{
lean_object* v___x_1897_; 
lean_inc_ref(v_old_1895_);
v___x_1897_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_foldlNewEntriesUnsafe_go___redArg(v_x_1891_, v_x_1892_, v_f_1893_, v_old_1895_, v_new_1894_, v_old_1895_, v_init_1896_);
lean_dec_ref(v_old_1895_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__0(lean_object* v_x_1898_){
_start:
{
if (lean_obj_tag(v_x_1898_) == 0)
{
lean_object* v_a_1899_; lean_object* v___x_1901_; uint8_t v_isShared_1902_; uint8_t v_isSharedCheck_1906_; 
v_a_1899_ = lean_ctor_get(v_x_1898_, 0);
v_isSharedCheck_1906_ = !lean_is_exclusive(v_x_1898_);
if (v_isSharedCheck_1906_ == 0)
{
v___x_1901_ = v_x_1898_;
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
else
{
lean_inc(v_a_1899_);
lean_dec(v_x_1898_);
v___x_1901_ = lean_box(0);
v_isShared_1902_ = v_isSharedCheck_1906_;
goto v_resetjp_1900_;
}
v_resetjp_1900_:
{
lean_object* v___x_1904_; 
if (v_isShared_1902_ == 0)
{
v___x_1904_ = v___x_1901_;
goto v_reusejp_1903_;
}
else
{
lean_object* v_reuseFailAlloc_1905_; 
v_reuseFailAlloc_1905_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1905_, 0, v_a_1899_);
v___x_1904_ = v_reuseFailAlloc_1905_;
goto v_reusejp_1903_;
}
v_reusejp_1903_:
{
return v___x_1904_;
}
}
}
else
{
lean_object* v_a_1907_; lean_object* v___x_1909_; uint8_t v_isShared_1910_; uint8_t v_isSharedCheck_1914_; 
v_a_1907_ = lean_ctor_get(v_x_1898_, 0);
v_isSharedCheck_1914_ = !lean_is_exclusive(v_x_1898_);
if (v_isSharedCheck_1914_ == 0)
{
v___x_1909_ = v_x_1898_;
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
else
{
lean_inc(v_a_1907_);
lean_dec(v_x_1898_);
v___x_1909_ = lean_box(0);
v_isShared_1910_ = v_isSharedCheck_1914_;
goto v_resetjp_1908_;
}
v_resetjp_1908_:
{
lean_object* v___x_1912_; 
if (v_isShared_1910_ == 0)
{
v___x_1912_ = v___x_1909_;
goto v_reusejp_1911_;
}
else
{
lean_object* v_reuseFailAlloc_1913_; 
v_reuseFailAlloc_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1913_, 0, v_a_1907_);
v___x_1912_ = v_reuseFailAlloc_1913_;
goto v_reusejp_1911_;
}
v_reusejp_1911_:
{
return v___x_1912_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__1(lean_object* v_toPure_1915_, lean_object* v_result_1916_){
_start:
{
lean_object* v_a_1917_; lean_object* v___x_1918_; 
v_a_1917_ = lean_ctor_get(v_result_1916_, 0);
lean_inc(v_a_1917_);
lean_dec_ref(v_result_1916_);
v___x_1918_ = lean_apply_2(v_toPure_1915_, lean_box(0), v_a_1917_);
return v___x_1918_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___lam__2(lean_object* v_toFunctor_1919_, lean_object* v_f_1920_, lean_object* v_intoError_1921_, lean_object* v_s_1922_, lean_object* v_a_1923_, lean_object* v_b_1924_){
_start:
{
lean_object* v_map_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1934_; 
v_map_1925_ = lean_ctor_get(v_toFunctor_1919_, 0);
v_isSharedCheck_1934_ = !lean_is_exclusive(v_toFunctor_1919_);
if (v_isSharedCheck_1934_ == 0)
{
lean_object* v_unused_1935_; 
v_unused_1935_ = lean_ctor_get(v_toFunctor_1919_, 1);
lean_dec(v_unused_1935_);
v___x_1927_ = v_toFunctor_1919_;
v_isShared_1928_ = v_isSharedCheck_1934_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_map_1925_);
lean_dec(v_toFunctor_1919_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1934_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v___x_1930_; 
if (v_isShared_1928_ == 0)
{
lean_ctor_set(v___x_1927_, 1, v_b_1924_);
lean_ctor_set(v___x_1927_, 0, v_a_1923_);
v___x_1930_ = v___x_1927_;
goto v_reusejp_1929_;
}
else
{
lean_object* v_reuseFailAlloc_1933_; 
v_reuseFailAlloc_1933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1933_, 0, v_a_1923_);
lean_ctor_set(v_reuseFailAlloc_1933_, 1, v_b_1924_);
v___x_1930_ = v_reuseFailAlloc_1933_;
goto v_reusejp_1929_;
}
v_reusejp_1929_:
{
lean_object* v___x_1931_; lean_object* v___x_1932_; 
v___x_1931_ = lean_apply_2(v_f_1920_, v___x_1930_, v_s_1922_);
v___x_1932_ = lean_apply_4(v_map_1925_, lean_box(0), lean_box(0), v_intoError_1921_, v___x_1931_);
return v___x_1932_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg(lean_object* v_inst_1937_, lean_object* v_map_1938_, lean_object* v_init_1939_, lean_object* v_f_1940_){
_start:
{
lean_object* v_toApplicative_1941_; lean_object* v_toBind_1942_; lean_object* v___f_1943_; lean_object* v___f_1944_; lean_object* v___f_1945_; lean_object* v___f_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v_toFunctor_1953_; lean_object* v_toPure_1954_; lean_object* v_intoError_1955_; lean_object* v___f_1956_; lean_object* v___f_1957_; lean_object* v___x_1958_; lean_object* v___x_1959_; 
v_toApplicative_1941_ = lean_ctor_get(v_inst_1937_, 0);
lean_inc_ref(v_toApplicative_1941_);
v_toBind_1942_ = lean_ctor_get(v_inst_1937_, 1);
lean_inc(v_toBind_1942_);
lean_inc_ref_n(v_inst_1937_, 6);
v___f_1943_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_1943_, 0, v_inst_1937_);
v___f_1944_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_1944_, 0, v_inst_1937_);
v___f_1945_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_1945_, 0, v_inst_1937_);
v___f_1946_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_1946_, 0, v_inst_1937_);
v___x_1947_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_1947_, 0, lean_box(0));
lean_closure_set(v___x_1947_, 1, lean_box(0));
lean_closure_set(v___x_1947_, 2, v_inst_1937_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1947_);
lean_ctor_set(v___x_1948_, 1, v___f_1943_);
v___x_1949_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_1949_, 0, lean_box(0));
lean_closure_set(v___x_1949_, 1, lean_box(0));
lean_closure_set(v___x_1949_, 2, v_inst_1937_);
v___x_1950_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1948_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
lean_ctor_set(v___x_1950_, 2, v___f_1944_);
lean_ctor_set(v___x_1950_, 3, v___f_1945_);
lean_ctor_set(v___x_1950_, 4, v___f_1946_);
v___x_1951_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_1951_, 0, lean_box(0));
lean_closure_set(v___x_1951_, 1, lean_box(0));
lean_closure_set(v___x_1951_, 2, v_inst_1937_);
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1950_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v_toFunctor_1953_ = lean_ctor_get(v_toApplicative_1941_, 0);
lean_inc_ref(v_toFunctor_1953_);
v_toPure_1954_ = lean_ctor_get(v_toApplicative_1941_, 1);
lean_inc(v_toPure_1954_);
lean_dec_ref(v_toApplicative_1941_);
v_intoError_1955_ = ((lean_object*)(l_Lean_PersistentHashMap_forIn___redArg___closed__0));
v___f_1956_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___redArg___lam__1), 2, 1);
lean_closure_set(v___f_1956_, 0, v_toPure_1954_);
v___f_1957_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_forIn___redArg___lam__2), 6, 3);
lean_closure_set(v___f_1957_, 0, v_toFunctor_1953_);
lean_closure_set(v___f_1957_, 1, v_f_1940_);
lean_closure_set(v___f_1957_, 2, v_intoError_1955_);
lean_inc_ref(v_map_1938_);
v___x_1958_ = l_Lean_PersistentHashMap_foldlMAux___redArg(v___x_1952_, v___f_1957_, v_map_1938_, v_init_1939_);
v___x_1959_ = lean_apply_4(v_toBind_1942_, lean_box(0), lean_box(0), v___x_1958_, v___f_1956_);
return v___x_1959_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___redArg___boxed(lean_object* v_inst_1960_, lean_object* v_map_1961_, lean_object* v_init_1962_, lean_object* v_f_1963_){
_start:
{
lean_object* v_res_1964_; 
v_res_1964_ = l_Lean_PersistentHashMap_forIn___redArg(v_inst_1960_, v_map_1961_, v_init_1962_, v_f_1963_);
lean_dec_ref(v_map_1961_);
return v_res_1964_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn(lean_object* v_m_1965_, lean_object* v_00_u03c3_1966_, lean_object* v_00_u03b1_1967_, lean_object* v_00_u03b2_1968_, lean_object* v_x_1969_, lean_object* v_x_1970_, lean_object* v_inst_1971_, lean_object* v_map_1972_, lean_object* v_init_1973_, lean_object* v_f_1974_){
_start:
{
lean_object* v___x_1975_; 
v___x_1975_ = l_Lean_PersistentHashMap_forIn___redArg(v_inst_1971_, v_map_1972_, v_init_1973_, v_f_1974_);
return v___x_1975_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_forIn___boxed(lean_object* v_m_1976_, lean_object* v_00_u03c3_1977_, lean_object* v_00_u03b1_1978_, lean_object* v_00_u03b2_1979_, lean_object* v_x_1980_, lean_object* v_x_1981_, lean_object* v_inst_1982_, lean_object* v_map_1983_, lean_object* v_init_1984_, lean_object* v_f_1985_){
_start:
{
lean_object* v_res_1986_; 
v_res_1986_ = l_Lean_PersistentHashMap_forIn(v_m_1976_, v_00_u03c3_1977_, v_00_u03b1_1978_, v_00_u03b2_1979_, v_x_1980_, v_x_1981_, v_inst_1982_, v_map_1983_, v_init_1984_, v_f_1985_);
lean_dec_ref(v_map_1983_);
lean_dec_ref(v_x_1981_);
lean_dec_ref(v_x_1980_);
return v_res_1986_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0(lean_object* v_inst_1987_, lean_object* v_00_u03b2_1988_, lean_object* v___y_1989_, lean_object* v___y_1990_, lean_object* v___y_1991_){
_start:
{
lean_object* v___x_1992_; 
v___x_1992_ = l_Lean_PersistentHashMap_forIn___redArg(v_inst_1987_, v___y_1989_, v___y_1990_, v___y_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed(lean_object* v_inst_1993_, lean_object* v_00_u03b2_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
lean_object* v_res_1998_; 
v_res_1998_ = l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0(v_inst_1993_, v_00_u03b2_1994_, v___y_1995_, v___y_1996_, v___y_1997_);
lean_dec_ref(v___y_1995_);
return v_res_1998_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___redArg(lean_object* v_inst_1999_){
_start:
{
lean_object* v___f_2000_; 
v___f_2000_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_2000_, 0, v_inst_1999_);
return v___f_2000_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad(lean_object* v_m_2001_, lean_object* v_00_u03b1_2002_, lean_object* v_00_u03b2_2003_, lean_object* v_x_2004_, lean_object* v_x_2005_, lean_object* v_inst_2006_){
_start:
{
lean_object* v___f_2007_; 
v___f_2007_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_instForInProdOfMonad___redArg___lam__0___boxed), 5, 1);
lean_closure_set(v___f_2007_, 0, v_inst_2006_);
return v___f_2007_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_instForInProdOfMonad___boxed(lean_object* v_m_2008_, lean_object* v_00_u03b1_2009_, lean_object* v_00_u03b2_2010_, lean_object* v_x_2011_, lean_object* v_x_2012_, lean_object* v_inst_2013_){
_start:
{
lean_object* v_res_2014_; 
v_res_2014_ = l_Lean_PersistentHashMap_instForInProdOfMonad(v_m_2008_, v_00_u03b1_2009_, v_00_u03b2_2010_, v_x_2011_, v_x_2012_, v_inst_2013_);
lean_dec_ref(v_x_2012_);
lean_dec_ref(v_x_2011_);
return v_res_2014_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__0(lean_object* v_toPure_2015_, lean_object* v_entries_x27_2016_){
_start:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; 
v___x_2017_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2017_, 0, v_entries_x27_2016_);
v___x_2018_ = lean_apply_2(v_toPure_2015_, lean_box(0), v___x_2017_);
return v___x_2018_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__1(lean_object* v_toPure_2019_, lean_object* v_____do__lift_2020_){
_start:
{
lean_object* v___x_2021_; lean_object* v___x_2022_; 
v___x_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2021_, 0, v_____do__lift_2020_);
v___x_2022_ = lean_apply_2(v_toPure_2019_, lean_box(0), v___x_2021_);
return v___x_2022_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__2(lean_object* v_key_2023_, lean_object* v_toPure_2024_, lean_object* v_____do__lift_2025_){
_start:
{
lean_object* v___x_2026_; lean_object* v___x_2027_; 
v___x_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2026_, 0, v_key_2023_);
lean_ctor_set(v___x_2026_, 1, v_____do__lift_2025_);
v___x_2027_ = lean_apply_2(v_toPure_2024_, lean_box(0), v___x_2026_);
return v___x_2027_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__4(lean_object* v_ks_2028_, lean_object* v_toPure_2029_, lean_object* v_____x_2030_){
_start:
{
lean_object* v___x_2031_; lean_object* v___x_2032_; 
v___x_2031_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2031_, 0, v_ks_2028_);
lean_ctor_set(v___x_2031_, 1, v_____x_2030_);
v___x_2032_ = lean_apply_2(v_toPure_2029_, lean_box(0), v___x_2031_);
return v___x_2032_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg(lean_object* v_inst_2033_, lean_object* v_f_2034_, lean_object* v_n_2035_){
_start:
{
if (lean_obj_tag(v_n_2035_) == 0)
{
lean_object* v_toApplicative_2036_; lean_object* v_toBind_2037_; lean_object* v_toPure_2038_; lean_object* v_es_2039_; lean_object* v___f_2040_; lean_object* v___f_2041_; lean_object* v___f_2042_; size_t v_sz_2043_; size_t v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; 
v_toApplicative_2036_ = lean_ctor_get(v_inst_2033_, 0);
v_toBind_2037_ = lean_ctor_get(v_inst_2033_, 1);
lean_inc_n(v_toBind_2037_, 2);
v_toPure_2038_ = lean_ctor_get(v_toApplicative_2036_, 1);
v_es_2039_ = lean_ctor_get(v_n_2035_, 0);
lean_inc_ref(v_es_2039_);
lean_dec_ref_known(v_n_2035_, 1);
lean_inc_n(v_toPure_2038_, 3);
v___f_2040_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2040_, 0, v_toPure_2038_);
v___f_2041_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__1), 2, 1);
lean_closure_set(v___f_2041_, 0, v_toPure_2038_);
lean_inc_ref(v_inst_2033_);
v___f_2042_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__3), 6, 5);
lean_closure_set(v___f_2042_, 0, v_toPure_2038_);
lean_closure_set(v___f_2042_, 1, v_f_2034_);
lean_closure_set(v___f_2042_, 2, v_toBind_2037_);
lean_closure_set(v___f_2042_, 3, v_inst_2033_);
lean_closure_set(v___f_2042_, 4, v___f_2041_);
v_sz_2043_ = lean_array_size(v_es_2039_);
v___x_2044_ = ((size_t)0ULL);
v___x_2045_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2033_, v___f_2042_, v_sz_2043_, v___x_2044_, v_es_2039_);
v___x_2046_ = lean_apply_4(v_toBind_2037_, lean_box(0), lean_box(0), v___x_2045_, v___f_2040_);
return v___x_2046_;
}
else
{
lean_object* v_toApplicative_2047_; lean_object* v_toBind_2048_; lean_object* v_toPure_2049_; lean_object* v_ks_2050_; lean_object* v_vs_2051_; lean_object* v___f_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; 
v_toApplicative_2047_ = lean_ctor_get(v_inst_2033_, 0);
v_toBind_2048_ = lean_ctor_get(v_inst_2033_, 1);
lean_inc(v_toBind_2048_);
v_toPure_2049_ = lean_ctor_get(v_toApplicative_2047_, 1);
v_ks_2050_ = lean_ctor_get(v_n_2035_, 0);
lean_inc_ref(v_ks_2050_);
v_vs_2051_ = lean_ctor_get(v_n_2035_, 1);
lean_inc_ref(v_vs_2051_);
lean_dec_ref_known(v_n_2035_, 2);
lean_inc(v_toPure_2049_);
v___f_2052_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__4), 3, 2);
lean_closure_set(v___f_2052_, 0, v_ks_2050_);
lean_closure_set(v___f_2052_, 1, v_toPure_2049_);
v___x_2053_ = l_Array_mapM_x27___redArg(v_inst_2033_, v_f_2034_, v_vs_2051_);
v___x_2054_ = lean_apply_4(v_toBind_2048_, lean_box(0), lean_box(0), v___x_2053_, v___f_2052_);
return v___x_2054_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux___redArg___lam__3(lean_object* v_toPure_2055_, lean_object* v_f_2056_, lean_object* v_toBind_2057_, lean_object* v_inst_2058_, lean_object* v___f_2059_, lean_object* v_x_2060_){
_start:
{
switch(lean_obj_tag(v_x_2060_))
{
case 0:
{
lean_object* v_key_2061_; lean_object* v_val_2062_; lean_object* v___f_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; 
lean_dec(v___f_2059_);
lean_dec_ref(v_inst_2058_);
v_key_2061_ = lean_ctor_get(v_x_2060_, 0);
lean_inc(v_key_2061_);
v_val_2062_ = lean_ctor_get(v_x_2060_, 1);
lean_inc(v_val_2062_);
lean_dec_ref_known(v_x_2060_, 2);
v___f_2063_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapMAux___redArg___lam__2), 3, 2);
lean_closure_set(v___f_2063_, 0, v_key_2061_);
lean_closure_set(v___f_2063_, 1, v_toPure_2055_);
v___x_2064_ = lean_apply_1(v_f_2056_, v_val_2062_);
v___x_2065_ = lean_apply_4(v_toBind_2057_, lean_box(0), lean_box(0), v___x_2064_, v___f_2063_);
return v___x_2065_;
}
case 1:
{
lean_object* v_node_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; 
lean_dec(v_toPure_2055_);
v_node_2066_ = lean_ctor_get(v_x_2060_, 0);
lean_inc(v_node_2066_);
lean_dec_ref_known(v_x_2060_, 1);
v___x_2067_ = l_Lean_PersistentHashMap_mapMAux___redArg(v_inst_2058_, v_f_2056_, v_node_2066_);
v___x_2068_ = lean_apply_4(v_toBind_2057_, lean_box(0), lean_box(0), v___x_2067_, v___f_2059_);
return v___x_2068_;
}
default: 
{
lean_object* v___x_2069_; lean_object* v___x_2070_; 
lean_dec(v___f_2059_);
lean_dec_ref(v_inst_2058_);
lean_dec(v_toBind_2057_);
lean_dec(v_f_2056_);
v___x_2069_ = lean_box(2);
v___x_2070_ = lean_apply_2(v_toPure_2055_, lean_box(0), v___x_2069_);
return v___x_2070_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapMAux(lean_object* v_00_u03b1_2071_, lean_object* v_00_u03b2_2072_, lean_object* v_00_u03c3_2073_, lean_object* v_m_2074_, lean_object* v_inst_2075_, lean_object* v_f_2076_, lean_object* v_n_2077_){
_start:
{
lean_object* v___x_2078_; 
v___x_2078_ = l_Lean_PersistentHashMap_mapMAux___redArg(v_inst_2075_, v_f_2076_, v_n_2077_);
return v___x_2078_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg___lam__0(lean_object* v_toPure_2079_, lean_object* v_root_2080_){
_start:
{
lean_object* v___x_2081_; 
v___x_2081_ = lean_apply_2(v_toPure_2079_, lean_box(0), v_root_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___redArg(lean_object* v_inst_2082_, lean_object* v_pm_2083_, lean_object* v_f_2084_){
_start:
{
lean_object* v_toApplicative_2085_; lean_object* v_toBind_2086_; lean_object* v_toPure_2087_; lean_object* v___x_2088_; lean_object* v___f_2089_; lean_object* v___x_2090_; 
v_toApplicative_2085_ = lean_ctor_get(v_inst_2082_, 0);
v_toBind_2086_ = lean_ctor_get(v_inst_2082_, 1);
lean_inc(v_toBind_2086_);
v_toPure_2087_ = lean_ctor_get(v_toApplicative_2085_, 1);
lean_inc(v_toPure_2087_);
v___x_2088_ = l_Lean_PersistentHashMap_mapMAux___redArg(v_inst_2082_, v_f_2084_, v_pm_2083_);
v___f_2089_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_mapM___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2089_, 0, v_toPure_2087_);
v___x_2090_ = lean_apply_4(v_toBind_2086_, lean_box(0), lean_box(0), v___x_2088_, v___f_2089_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM(lean_object* v_00_u03b1_2091_, lean_object* v_00_u03b2_2092_, lean_object* v_00_u03c3_2093_, lean_object* v_m_2094_, lean_object* v_inst_2095_, lean_object* v_x_2096_, lean_object* v_x_2097_, lean_object* v_pm_2098_, lean_object* v_f_2099_){
_start:
{
lean_object* v___x_2100_; 
v___x_2100_ = l_Lean_PersistentHashMap_mapM___redArg(v_inst_2095_, v_pm_2098_, v_f_2099_);
return v___x_2100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_mapM___boxed(lean_object* v_00_u03b1_2101_, lean_object* v_00_u03b2_2102_, lean_object* v_00_u03c3_2103_, lean_object* v_m_2104_, lean_object* v_inst_2105_, lean_object* v_x_2106_, lean_object* v_x_2107_, lean_object* v_pm_2108_, lean_object* v_f_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = l_Lean_PersistentHashMap_mapM(v_00_u03b1_2101_, v_00_u03b2_2102_, v_00_u03c3_2103_, v_m_2104_, v_inst_2105_, v_x_2106_, v_x_2107_, v_pm_2108_, v_f_2109_);
lean_dec_ref(v_x_2107_);
lean_dec_ref(v_x_2106_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg___lam__0(lean_object* v_f_2111_, lean_object* v_x_2112_){
_start:
{
lean_object* v___x_2113_; 
v___x_2113_ = lean_apply_1(v_f_2111_, v_x_2112_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___redArg(lean_object* v_pm_2114_, lean_object* v_f_2115_){
_start:
{
lean_object* v___f_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; 
v___f_2116_ = lean_alloc_closure((void*)(l_Lean_PersistentHashMap_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2116_, 0, v_f_2115_);
v___x_2117_ = ((lean_object*)(l_Lean_PersistentHashMap_foldl___redArg___closed__9));
v___x_2118_ = l_Lean_PersistentHashMap_mapM___redArg(v___x_2117_, v_pm_2114_, v___f_2116_);
return v___x_2118_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map(lean_object* v_00_u03b1_2119_, lean_object* v_00_u03b2_2120_, lean_object* v_00_u03c3_2121_, lean_object* v_x_2122_, lean_object* v_x_2123_, lean_object* v_pm_2124_, lean_object* v_f_2125_){
_start:
{
lean_object* v___x_2126_; 
v___x_2126_ = l_Lean_PersistentHashMap_map___redArg(v_pm_2124_, v_f_2125_);
return v___x_2126_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_map___boxed(lean_object* v_00_u03b1_2127_, lean_object* v_00_u03b2_2128_, lean_object* v_00_u03c3_2129_, lean_object* v_x_2130_, lean_object* v_x_2131_, lean_object* v_pm_2132_, lean_object* v_f_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = l_Lean_PersistentHashMap_map(v_00_u03b1_2127_, v_00_u03b2_2128_, v_00_u03c3_2129_, v_x_2130_, v_x_2131_, v_pm_2132_, v_f_2133_);
lean_dec_ref(v_x_2131_);
lean_dec_ref(v_x_2130_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg___lam__0(lean_object* v_ps_2135_, lean_object* v_k_2136_, lean_object* v_v_2137_){
_start:
{
lean_object* v___x_2138_; lean_object* v___x_2139_; 
v___x_2138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2138_, 0, v_k_2136_);
lean_ctor_set(v___x_2138_, 1, v_v_2137_);
v___x_2139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2139_, 0, v___x_2138_);
lean_ctor_set(v___x_2139_, 1, v_ps_2135_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___redArg(lean_object* v_m_2141_){
_start:
{
lean_object* v___f_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; 
v___f_2142_ = ((lean_object*)(l_Lean_PersistentHashMap_toList___redArg___closed__0));
v___x_2143_ = lean_box(0);
v___x_2144_ = l_Lean_PersistentHashMap_foldl___redArg(v_m_2141_, v___f_2142_, v___x_2143_);
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList(lean_object* v_00_u03b1_2145_, lean_object* v_00_u03b2_2146_, lean_object* v_x_2147_, lean_object* v_x_2148_, lean_object* v_m_2149_){
_start:
{
lean_object* v___x_2150_; 
v___x_2150_ = l_Lean_PersistentHashMap_toList___redArg(v_m_2149_);
return v___x_2150_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toList___boxed(lean_object* v_00_u03b1_2151_, lean_object* v_00_u03b2_2152_, lean_object* v_x_2153_, lean_object* v_x_2154_, lean_object* v_m_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lean_PersistentHashMap_toList(v_00_u03b1_2151_, v_00_u03b2_2152_, v_x_2153_, v_x_2154_, v_m_2155_);
lean_dec_ref(v_x_2154_);
lean_dec_ref(v_x_2153_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg___lam__0(lean_object* v_ps_2157_, lean_object* v_k_2158_, lean_object* v_v_2159_){
_start:
{
lean_object* v___x_2160_; lean_object* v___x_2161_; 
v___x_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2160_, 0, v_k_2158_);
lean_ctor_set(v___x_2160_, 1, v_v_2159_);
v___x_2161_ = lean_array_push(v_ps_2157_, v___x_2160_);
return v___x_2161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___redArg(lean_object* v_m_2165_){
_start:
{
lean_object* v___f_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___f_2166_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___redArg___closed__0));
v___x_2167_ = ((lean_object*)(l_Lean_PersistentHashMap_toArray___redArg___closed__1));
v___x_2168_ = l_Lean_PersistentHashMap_foldl___redArg(v_m_2165_, v___f_2166_, v___x_2167_);
return v___x_2168_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray(lean_object* v_00_u03b1_2169_, lean_object* v_00_u03b2_2170_, lean_object* v_x_2171_, lean_object* v_x_2172_, lean_object* v_m_2173_){
_start:
{
lean_object* v___x_2174_; 
v___x_2174_ = l_Lean_PersistentHashMap_toArray___redArg(v_m_2173_);
return v___x_2174_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_toArray___boxed(lean_object* v_00_u03b1_2175_, lean_object* v_00_u03b2_2176_, lean_object* v_x_2177_, lean_object* v_x_2178_, lean_object* v_m_2179_){
_start:
{
lean_object* v_res_2180_; 
v_res_2180_ = l_Lean_PersistentHashMap_toArray(v_00_u03b1_2175_, v_00_u03b2_2176_, v_x_2177_, v_x_2178_, v_m_2179_);
lean_dec_ref(v_x_2178_);
lean_dec_ref(v_x_2177_);
return v_res_2180_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg(lean_object* v_x_2181_, lean_object* v_x_2182_, lean_object* v_x_2183_){
_start:
{
if (lean_obj_tag(v_x_2181_) == 0)
{
lean_object* v_es_2184_; lean_object* v_numNodes_2185_; lean_object* v_numNull_2186_; lean_object* v_numCollisions_2187_; lean_object* v_maxDepth_2188_; lean_object* v___x_2190_; uint8_t v_isShared_2191_; uint8_t v_isSharedCheck_2206_; 
v_es_2184_ = lean_ctor_get(v_x_2181_, 0);
v_numNodes_2185_ = lean_ctor_get(v_x_2182_, 0);
v_numNull_2186_ = lean_ctor_get(v_x_2182_, 1);
v_numCollisions_2187_ = lean_ctor_get(v_x_2182_, 2);
v_maxDepth_2188_ = lean_ctor_get(v_x_2182_, 3);
v_isSharedCheck_2206_ = !lean_is_exclusive(v_x_2182_);
if (v_isSharedCheck_2206_ == 0)
{
v___x_2190_ = v_x_2182_;
v_isShared_2191_ = v_isSharedCheck_2206_;
goto v_resetjp_2189_;
}
else
{
lean_inc(v_maxDepth_2188_);
lean_inc(v_numCollisions_2187_);
lean_inc(v_numNull_2186_);
lean_inc(v_numNodes_2185_);
lean_dec(v_x_2182_);
v___x_2190_ = lean_box(0);
v_isShared_2191_ = v_isSharedCheck_2206_;
goto v_resetjp_2189_;
}
v_resetjp_2189_:
{
lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___y_2195_; uint8_t v___x_2205_; 
v___x_2192_ = lean_unsigned_to_nat(1u);
v___x_2193_ = lean_nat_add(v_numNodes_2185_, v___x_2192_);
lean_dec(v_numNodes_2185_);
v___x_2205_ = lean_nat_dec_le(v_maxDepth_2188_, v_x_2183_);
if (v___x_2205_ == 0)
{
v___y_2195_ = v_maxDepth_2188_;
goto v___jp_2194_;
}
else
{
lean_dec(v_maxDepth_2188_);
lean_inc(v_x_2183_);
v___y_2195_ = v_x_2183_;
goto v___jp_2194_;
}
v___jp_2194_:
{
lean_object* v_stats_2197_; 
if (v_isShared_2191_ == 0)
{
lean_ctor_set(v___x_2190_, 3, v___y_2195_);
lean_ctor_set(v___x_2190_, 0, v___x_2193_);
v_stats_2197_ = v___x_2190_;
goto v_reusejp_2196_;
}
else
{
lean_object* v_reuseFailAlloc_2204_; 
v_reuseFailAlloc_2204_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2204_, 0, v___x_2193_);
lean_ctor_set(v_reuseFailAlloc_2204_, 1, v_numNull_2186_);
lean_ctor_set(v_reuseFailAlloc_2204_, 2, v_numCollisions_2187_);
lean_ctor_set(v_reuseFailAlloc_2204_, 3, v___y_2195_);
v_stats_2197_ = v_reuseFailAlloc_2204_;
goto v_reusejp_2196_;
}
v_reusejp_2196_:
{
lean_object* v___x_2198_; lean_object* v___x_2199_; uint8_t v___x_2200_; 
v___x_2198_ = lean_unsigned_to_nat(0u);
v___x_2199_ = lean_array_get_size(v_es_2184_);
v___x_2200_ = lean_nat_dec_lt(v___x_2198_, v___x_2199_);
if (v___x_2200_ == 0)
{
lean_dec(v_x_2183_);
return v_stats_2197_;
}
else
{
size_t v___x_2201_; size_t v___x_2202_; lean_object* v___x_2203_; 
v___x_2201_ = ((size_t)0ULL);
v___x_2202_ = lean_usize_of_nat(v___x_2199_);
v___x_2203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(v_x_2183_, v_es_2184_, v___x_2201_, v___x_2202_, v_stats_2197_);
lean_dec(v_x_2183_);
return v___x_2203_;
}
}
}
}
}
else
{
lean_object* v_ks_2207_; lean_object* v_numNodes_2208_; lean_object* v_numNull_2209_; lean_object* v_numCollisions_2210_; lean_object* v_maxDepth_2211_; lean_object* v___x_2213_; uint8_t v_isShared_2214_; uint8_t v_isSharedCheck_2227_; 
v_ks_2207_ = lean_ctor_get(v_x_2181_, 0);
v_numNodes_2208_ = lean_ctor_get(v_x_2182_, 0);
v_numNull_2209_ = lean_ctor_get(v_x_2182_, 1);
v_numCollisions_2210_ = lean_ctor_get(v_x_2182_, 2);
v_maxDepth_2211_ = lean_ctor_get(v_x_2182_, 3);
v_isSharedCheck_2227_ = !lean_is_exclusive(v_x_2182_);
if (v_isSharedCheck_2227_ == 0)
{
v___x_2213_ = v_x_2182_;
v_isShared_2214_ = v_isSharedCheck_2227_;
goto v_resetjp_2212_;
}
else
{
lean_inc(v_maxDepth_2211_);
lean_inc(v_numCollisions_2210_);
lean_inc(v_numNull_2209_);
lean_inc(v_numNodes_2208_);
lean_dec(v_x_2182_);
v___x_2213_ = lean_box(0);
v_isShared_2214_ = v_isSharedCheck_2227_;
goto v_resetjp_2212_;
}
v_resetjp_2212_:
{
lean_object* v___x_2215_; lean_object* v___x_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; uint8_t v___x_2220_; 
v___x_2215_ = lean_unsigned_to_nat(1u);
v___x_2216_ = lean_nat_add(v_numNodes_2208_, v___x_2215_);
lean_dec(v_numNodes_2208_);
v___x_2217_ = lean_array_get_size(v_ks_2207_);
v___x_2218_ = lean_nat_add(v_numCollisions_2210_, v___x_2217_);
lean_dec(v_numCollisions_2210_);
v___x_2219_ = lean_nat_sub(v___x_2218_, v___x_2215_);
lean_dec(v___x_2218_);
v___x_2220_ = lean_nat_dec_le(v_maxDepth_2211_, v_x_2183_);
if (v___x_2220_ == 0)
{
lean_object* v___x_2222_; 
lean_dec(v_x_2183_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 2, v___x_2219_);
lean_ctor_set(v___x_2213_, 0, v___x_2216_);
v___x_2222_ = v___x_2213_;
goto v_reusejp_2221_;
}
else
{
lean_object* v_reuseFailAlloc_2223_; 
v_reuseFailAlloc_2223_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2223_, 0, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2223_, 1, v_numNull_2209_);
lean_ctor_set(v_reuseFailAlloc_2223_, 2, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2223_, 3, v_maxDepth_2211_);
v___x_2222_ = v_reuseFailAlloc_2223_;
goto v_reusejp_2221_;
}
v_reusejp_2221_:
{
return v___x_2222_;
}
}
else
{
lean_object* v___x_2225_; 
lean_dec(v_maxDepth_2211_);
if (v_isShared_2214_ == 0)
{
lean_ctor_set(v___x_2213_, 3, v_x_2183_);
lean_ctor_set(v___x_2213_, 2, v___x_2219_);
lean_ctor_set(v___x_2213_, 0, v___x_2216_);
v___x_2225_ = v___x_2213_;
goto v_reusejp_2224_;
}
else
{
lean_object* v_reuseFailAlloc_2226_; 
v_reuseFailAlloc_2226_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2226_, 0, v___x_2216_);
lean_ctor_set(v_reuseFailAlloc_2226_, 1, v_numNull_2209_);
lean_ctor_set(v_reuseFailAlloc_2226_, 2, v___x_2219_);
lean_ctor_set(v_reuseFailAlloc_2226_, 3, v_x_2183_);
v___x_2225_ = v_reuseFailAlloc_2226_;
goto v_reusejp_2224_;
}
v_reusejp_2224_:
{
return v___x_2225_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(lean_object* v_x_2228_, lean_object* v_as_2229_, size_t v_i_2230_, size_t v_stop_2231_, lean_object* v_b_2232_){
_start:
{
lean_object* v___y_2234_; uint8_t v___x_2238_; 
v___x_2238_ = lean_usize_dec_eq(v_i_2230_, v_stop_2231_);
if (v___x_2238_ == 0)
{
lean_object* v___x_2239_; lean_object* v___x_2240_; 
v___x_2239_ = lean_unsigned_to_nat(1u);
v___x_2240_ = lean_array_uget_borrowed(v_as_2229_, v_i_2230_);
switch(lean_obj_tag(v___x_2240_))
{
case 0:
{
v___y_2234_ = v_b_2232_;
goto v___jp_2233_;
}
case 1:
{
lean_object* v_node_2241_; lean_object* v___x_2242_; lean_object* v___x_2243_; 
v_node_2241_ = lean_ctor_get(v___x_2240_, 0);
v___x_2242_ = lean_nat_add(v_x_2228_, v___x_2239_);
v___x_2243_ = l_Lean_PersistentHashMap_collectStats___redArg(v_node_2241_, v_b_2232_, v___x_2242_);
v___y_2234_ = v___x_2243_;
goto v___jp_2233_;
}
default: 
{
lean_object* v_numNodes_2244_; lean_object* v_numNull_2245_; lean_object* v_numCollisions_2246_; lean_object* v_maxDepth_2247_; lean_object* v___x_2249_; uint8_t v_isShared_2250_; uint8_t v_isSharedCheck_2255_; 
v_numNodes_2244_ = lean_ctor_get(v_b_2232_, 0);
v_numNull_2245_ = lean_ctor_get(v_b_2232_, 1);
v_numCollisions_2246_ = lean_ctor_get(v_b_2232_, 2);
v_maxDepth_2247_ = lean_ctor_get(v_b_2232_, 3);
v_isSharedCheck_2255_ = !lean_is_exclusive(v_b_2232_);
if (v_isSharedCheck_2255_ == 0)
{
v___x_2249_ = v_b_2232_;
v_isShared_2250_ = v_isSharedCheck_2255_;
goto v_resetjp_2248_;
}
else
{
lean_inc(v_maxDepth_2247_);
lean_inc(v_numCollisions_2246_);
lean_inc(v_numNull_2245_);
lean_inc(v_numNodes_2244_);
lean_dec(v_b_2232_);
v___x_2249_ = lean_box(0);
v_isShared_2250_ = v_isSharedCheck_2255_;
goto v_resetjp_2248_;
}
v_resetjp_2248_:
{
lean_object* v___x_2251_; lean_object* v___x_2253_; 
v___x_2251_ = lean_nat_add(v_numNull_2245_, v___x_2239_);
lean_dec(v_numNull_2245_);
if (v_isShared_2250_ == 0)
{
lean_ctor_set(v___x_2249_, 1, v___x_2251_);
v___x_2253_ = v___x_2249_;
goto v_reusejp_2252_;
}
else
{
lean_object* v_reuseFailAlloc_2254_; 
v_reuseFailAlloc_2254_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2254_, 0, v_numNodes_2244_);
lean_ctor_set(v_reuseFailAlloc_2254_, 1, v___x_2251_);
lean_ctor_set(v_reuseFailAlloc_2254_, 2, v_numCollisions_2246_);
lean_ctor_set(v_reuseFailAlloc_2254_, 3, v_maxDepth_2247_);
v___x_2253_ = v_reuseFailAlloc_2254_;
goto v_reusejp_2252_;
}
v_reusejp_2252_:
{
v___y_2234_ = v___x_2253_;
goto v___jp_2233_;
}
}
}
}
}
else
{
return v_b_2232_;
}
v___jp_2233_:
{
size_t v___x_2235_; size_t v___x_2236_; 
v___x_2235_ = ((size_t)1ULL);
v___x_2236_ = lean_usize_add(v_i_2230_, v___x_2235_);
v_i_2230_ = v___x_2236_;
v_b_2232_ = v___y_2234_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg___boxed(lean_object* v_x_2256_, lean_object* v_as_2257_, lean_object* v_i_2258_, lean_object* v_stop_2259_, lean_object* v_b_2260_){
_start:
{
size_t v_i_boxed_2261_; size_t v_stop_boxed_2262_; lean_object* v_res_2263_; 
v_i_boxed_2261_ = lean_unbox_usize(v_i_2258_);
lean_dec(v_i_2258_);
v_stop_boxed_2262_ = lean_unbox_usize(v_stop_2259_);
lean_dec(v_stop_2259_);
v_res_2263_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(v_x_2256_, v_as_2257_, v_i_boxed_2261_, v_stop_boxed_2262_, v_b_2260_);
lean_dec_ref(v_as_2257_);
lean_dec(v_x_2256_);
return v_res_2263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___redArg___boxed(lean_object* v_x_2264_, lean_object* v_x_2265_, lean_object* v_x_2266_){
_start:
{
lean_object* v_res_2267_; 
v_res_2267_ = l_Lean_PersistentHashMap_collectStats___redArg(v_x_2264_, v_x_2265_, v_x_2266_);
lean_dec_ref(v_x_2264_);
return v_res_2267_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats(lean_object* v_00_u03b1_2268_, lean_object* v_00_u03b2_2269_, lean_object* v_x_2270_, lean_object* v_x_2271_, lean_object* v_x_2272_){
_start:
{
lean_object* v___x_2273_; 
v___x_2273_ = l_Lean_PersistentHashMap_collectStats___redArg(v_x_2270_, v_x_2271_, v_x_2272_);
return v___x_2273_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_collectStats___boxed(lean_object* v_00_u03b1_2274_, lean_object* v_00_u03b2_2275_, lean_object* v_x_2276_, lean_object* v_x_2277_, lean_object* v_x_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = l_Lean_PersistentHashMap_collectStats(v_00_u03b1_2274_, v_00_u03b2_2275_, v_x_2276_, v_x_2277_, v_x_2278_);
lean_dec_ref(v_x_2276_);
return v_res_2279_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0(lean_object* v_00_u03b1_2280_, lean_object* v_00_u03b2_2281_, lean_object* v_x_2282_, lean_object* v_as_2283_, size_t v_i_2284_, size_t v_stop_2285_, lean_object* v_b_2286_){
_start:
{
lean_object* v___x_2287_; 
v___x_2287_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___redArg(v_x_2282_, v_as_2283_, v_i_2284_, v_stop_2285_, v_b_2286_);
return v___x_2287_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0___boxed(lean_object* v_00_u03b1_2288_, lean_object* v_00_u03b2_2289_, lean_object* v_x_2290_, lean_object* v_as_2291_, lean_object* v_i_2292_, lean_object* v_stop_2293_, lean_object* v_b_2294_){
_start:
{
size_t v_i_boxed_2295_; size_t v_stop_boxed_2296_; lean_object* v_res_2297_; 
v_i_boxed_2295_ = lean_unbox_usize(v_i_2292_);
lean_dec(v_i_2292_);
v_stop_boxed_2296_ = lean_unbox_usize(v_stop_2293_);
lean_dec(v_stop_2293_);
v_res_2297_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentHashMap_collectStats_spec__0(v_00_u03b1_2288_, v_00_u03b2_2289_, v_x_2290_, v_as_2291_, v_i_boxed_2295_, v_stop_boxed_2296_, v_b_2294_);
lean_dec_ref(v_as_2291_);
lean_dec(v_x_2290_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg(lean_object* v_m_2300_){
_start:
{
lean_object* v___x_2301_; lean_object* v___x_2302_; lean_object* v___x_2303_; 
v___x_2301_ = ((lean_object*)(l_Lean_PersistentHashMap_stats___redArg___closed__0));
v___x_2302_ = lean_unsigned_to_nat(1u);
v___x_2303_ = l_Lean_PersistentHashMap_collectStats___redArg(v_m_2300_, v___x_2301_, v___x_2302_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___redArg___boxed(lean_object* v_m_2304_){
_start:
{
lean_object* v_res_2305_; 
v_res_2305_ = l_Lean_PersistentHashMap_stats___redArg(v_m_2304_);
lean_dec_ref(v_m_2304_);
return v_res_2305_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats(lean_object* v_00_u03b1_2306_, lean_object* v_00_u03b2_2307_, lean_object* v_x_2308_, lean_object* v_x_2309_, lean_object* v_m_2310_){
_start:
{
lean_object* v___x_2311_; 
v___x_2311_ = l_Lean_PersistentHashMap_stats___redArg(v_m_2310_);
return v___x_2311_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_stats___boxed(lean_object* v_00_u03b1_2312_, lean_object* v_00_u03b2_2313_, lean_object* v_x_2314_, lean_object* v_x_2315_, lean_object* v_m_2316_){
_start:
{
lean_object* v_res_2317_; 
v_res_2317_ = l_Lean_PersistentHashMap_stats(v_00_u03b1_2312_, v_00_u03b2_2313_, v_x_2314_, v_x_2315_, v_m_2316_);
lean_dec_ref(v_m_2316_);
lean_dec_ref(v_x_2315_);
lean_dec_ref(v_x_2314_);
return v_res_2317_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_Stats_toString(lean_object* v_s_2323_){
_start:
{
lean_object* v_numNodes_2324_; lean_object* v_numNull_2325_; lean_object* v_numCollisions_2326_; lean_object* v_maxDepth_2327_; lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2330_; lean_object* v___x_2331_; lean_object* v___x_2332_; lean_object* v___x_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; 
v_numNodes_2324_ = lean_ctor_get(v_s_2323_, 0);
lean_inc(v_numNodes_2324_);
v_numNull_2325_ = lean_ctor_get(v_s_2323_, 1);
lean_inc(v_numNull_2325_);
v_numCollisions_2326_ = lean_ctor_get(v_s_2323_, 2);
lean_inc(v_numCollisions_2326_);
v_maxDepth_2327_ = lean_ctor_get(v_s_2323_, 3);
lean_inc(v_maxDepth_2327_);
lean_dec_ref(v_s_2323_);
v___x_2328_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__0));
v___x_2329_ = l_Nat_reprFast(v_numNodes_2324_);
v___x_2330_ = lean_string_append(v___x_2328_, v___x_2329_);
lean_dec_ref(v___x_2329_);
v___x_2331_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__1));
v___x_2332_ = lean_string_append(v___x_2330_, v___x_2331_);
v___x_2333_ = l_Nat_reprFast(v_numNull_2325_);
v___x_2334_ = lean_string_append(v___x_2332_, v___x_2333_);
lean_dec_ref(v___x_2333_);
v___x_2335_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__2));
v___x_2336_ = lean_string_append(v___x_2334_, v___x_2335_);
v___x_2337_ = l_Nat_reprFast(v_numCollisions_2326_);
v___x_2338_ = lean_string_append(v___x_2336_, v___x_2337_);
lean_dec_ref(v___x_2337_);
v___x_2339_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__3));
v___x_2340_ = lean_string_append(v___x_2338_, v___x_2339_);
v___x_2341_ = l_Nat_reprFast(v_maxDepth_2327_);
v___x_2342_ = lean_string_append(v___x_2340_, v___x_2341_);
lean_dec_ref(v___x_2341_);
v___x_2343_ = ((lean_object*)(l_Lean_PersistentHashMap_Stats_toString___closed__4));
v___x_2344_ = lean_string_append(v___x_2342_, v___x_2343_);
return v___x_2344_;
}
}
lean_object* runtime_initialize_Init_Data_Array_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Control_Except(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_PersistentHashMap(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Array_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_PersistentHashMap_shift = _init_l_Lean_PersistentHashMap_shift();
l_Lean_PersistentHashMap_branching = _init_l_Lean_PersistentHashMap_branching();
l_Lean_PersistentHashMap_maxDepth = _init_l_Lean_PersistentHashMap_maxDepth();
l_Lean_PersistentHashMap_maxCollisions = _init_l_Lean_PersistentHashMap_maxCollisions();
lean_mark_persistent(l_Lean_PersistentHashMap_maxCollisions);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_PersistentHashMap(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Array_BasicAux(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Control_Except(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_PersistentHashMap(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Array_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Control_Except(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentHashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_PersistentHashMap(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_PersistentHashMap(builtin);
}
#ifdef __cplusplus
}
#endif
