// Lean compiler output
// Module: Lean.Meta.Sym.Simp.CongrInfo
// Imports: public import Lean.Meta.Sym.SymM import Lean.Meta.FunInfo import Init.Omega
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
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
uint64_t lean_usize_to_uint64(size_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_mul(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Meta_instBEqCongrArgKind_beq(uint8_t, uint8_t);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getFunInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_getCongrSimpKinds(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimpCore_x3f(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkCongrSimpForConst_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "false"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0_value;
static const lean_string_object l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "true"};
static const lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1 = (const lean_object*)&l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__0_value)}};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "fixedPrefix "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "interlaced "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8;
static const lean_string_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "congrTheorem "};
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9_value;
static lean_once_cell_t l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData(lean_object*);
static const lean_closure_object l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0 = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value;
LEAN_EXPORT const lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo = (const lean_object*)&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_instToMessageDataCongrInfo___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(lean_object* v_argKinds_1_, lean_object* v_pre_2_, lean_object* v_i_3_){
_start:
{
lean_object* v___x_4_; uint8_t v___x_5_; 
v___x_4_ = lean_array_get_size(v_argKinds_1_);
v___x_5_ = lean_nat_dec_lt(v_i_3_, v___x_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; 
lean_dec(v_i_3_);
v___x_6_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_6_, 0, v_pre_2_);
return v___x_6_;
}
else
{
lean_object* v___x_7_; uint8_t v___x_8_; 
v___x_7_ = lean_array_fget_borrowed(v_argKinds_1_, v_i_3_);
v___x_8_ = lean_unbox(v___x_7_);
if (v___x_8_ == 2)
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_unsigned_to_nat(1u);
v___x_10_ = lean_nat_add(v_i_3_, v___x_9_);
lean_dec(v_i_3_);
v_i_3_ = v___x_10_;
goto _start;
}
else
{
lean_object* v___x_12_; 
lean_dec(v_i_3_);
lean_dec(v_pre_2_);
v___x_12_ = lean_box(0);
return v___x_12_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq___boxed(lean_object* v_argKinds_13_, lean_object* v_pre_14_, lean_object* v_i_15_){
_start:
{
lean_object* v_res_16_; 
v_res_16_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(v_argKinds_13_, v_pre_14_, v_i_15_);
lean_dec_ref(v_argKinds_13_);
return v_res_16_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(uint8_t v_x_17_, lean_object* v_h__1_18_, lean_object* v_h__2_19_, lean_object* v_h__3_20_){
_start:
{
switch(v_x_17_)
{
case 0:
{
lean_object* v___x_21_; lean_object* v___x_22_; 
lean_dec(v_h__3_20_);
lean_dec(v_h__2_19_);
v___x_21_ = lean_box(0);
v___x_22_ = lean_apply_1(v_h__1_18_, v___x_21_);
return v___x_22_;
}
case 2:
{
lean_object* v___x_23_; lean_object* v___x_24_; 
lean_dec(v_h__3_20_);
lean_dec(v_h__1_18_);
v___x_23_ = lean_box(0);
v___x_24_ = lean_apply_1(v_h__2_19_, v___x_23_);
return v___x_24_;
}
default: 
{
lean_object* v___x_25_; lean_object* v___x_26_; 
lean_dec(v_h__2_19_);
lean_dec(v_h__1_18_);
v___x_25_ = lean_box(v_x_17_);
v___x_26_ = lean_apply_3(v_h__3_20_, v___x_25_, lean_box(0), lean_box(0));
return v___x_26_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg___boxed(lean_object* v_x_27_, lean_object* v_h__1_28_, lean_object* v_h__2_29_, lean_object* v_h__3_30_){
_start:
{
uint8_t v_x_18__boxed_31_; lean_object* v_res_32_; 
v_x_18__boxed_31_ = lean_unbox(v_x_27_);
v_res_32_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___redArg(v_x_18__boxed_31_, v_h__1_28_, v_h__2_29_, v_h__3_30_);
return v_res_32_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(lean_object* v_motive_33_, uint8_t v_x_34_, lean_object* v_h__1_35_, lean_object* v_h__2_36_, lean_object* v_h__3_37_){
_start:
{
switch(v_x_34_)
{
case 0:
{
lean_object* v___x_38_; lean_object* v___x_39_; 
lean_dec(v_h__3_37_);
lean_dec(v_h__2_36_);
v___x_38_ = lean_box(0);
v___x_39_ = lean_apply_1(v_h__1_35_, v___x_38_);
return v___x_39_;
}
case 2:
{
lean_object* v___x_40_; lean_object* v___x_41_; 
lean_dec(v_h__3_37_);
lean_dec(v_h__1_35_);
v___x_40_ = lean_box(0);
v___x_41_ = lean_apply_1(v_h__2_36_, v___x_40_);
return v___x_41_;
}
default: 
{
lean_object* v___x_42_; lean_object* v___x_43_; 
lean_dec(v_h__2_36_);
lean_dec(v_h__1_35_);
v___x_42_ = lean_box(v_x_34_);
v___x_43_ = lean_apply_3(v_h__3_37_, v___x_42_, lean_box(0), lean_box(0));
return v___x_43_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter___boxed(lean_object* v_motive_44_, lean_object* v_x_45_, lean_object* v_h__1_46_, lean_object* v_h__2_47_, lean_object* v_h__3_48_){
_start:
{
uint8_t v_x_33__boxed_49_; lean_object* v_res_50_; 
v_x_33__boxed_49_ = lean_unbox(v_x_45_);
v_res_50_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq_match__1_splitter(v_motive_44_, v_x_33__boxed_49_, v_h__1_46_, v_h__2_47_, v_h__3_48_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(lean_object* v_argKinds_51_, lean_object* v_i_52_){
_start:
{
lean_object* v___x_53_; uint8_t v___x_54_; 
v___x_53_ = lean_array_get_size(v_argKinds_51_);
v___x_54_ = lean_nat_dec_lt(v_i_52_, v___x_53_);
if (v___x_54_ == 0)
{
lean_object* v___x_55_; 
lean_dec(v_i_52_);
v___x_55_ = lean_box(0);
return v___x_55_;
}
else
{
lean_object* v___x_56_; uint8_t v___x_57_; 
v___x_56_ = lean_array_fget_borrowed(v_argKinds_51_, v_i_52_);
v___x_57_ = lean_unbox(v___x_56_);
switch(v___x_57_)
{
case 0:
{
lean_object* v___x_58_; lean_object* v___x_59_; 
v___x_58_ = lean_unsigned_to_nat(1u);
v___x_59_ = lean_nat_add(v_i_52_, v___x_58_);
lean_dec(v_i_52_);
v_i_52_ = v___x_59_;
goto _start;
}
case 2:
{
lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_61_ = lean_unsigned_to_nat(1u);
v___x_62_ = lean_nat_add(v_i_52_, v___x_61_);
v___x_63_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_goEq(v_argKinds_51_, v_i_52_, v___x_62_);
return v___x_63_;
}
default: 
{
lean_object* v___x_64_; 
lean_dec(v_i_52_);
v___x_64_ = lean_box(0);
return v___x_64_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go___boxed(lean_object* v_argKinds_65_, lean_object* v_i_66_){
_start:
{
lean_object* v_res_67_; 
v_res_67_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(v_argKinds_65_, v_i_66_);
lean_dec_ref(v_argKinds_65_);
return v_res_67_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(lean_object* v_argKinds_68_){
_start:
{
lean_object* v___x_69_; lean_object* v___x_70_; 
v___x_69_ = lean_unsigned_to_nat(0u);
v___x_70_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f_go(v_argKinds_68_, v___x_69_);
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f___boxed(lean_object* v_argKinds_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(v_argKinds_71_);
lean_dec_ref(v_argKinds_71_);
return v_res_72_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(lean_object* v_xs_73_, lean_object* v_ys_74_, lean_object* v_x_75_){
_start:
{
lean_object* v_zero_76_; uint8_t v_isZero_77_; 
v_zero_76_ = lean_unsigned_to_nat(0u);
v_isZero_77_ = lean_nat_dec_eq(v_x_75_, v_zero_76_);
if (v_isZero_77_ == 1)
{
lean_dec(v_x_75_);
return v_isZero_77_;
}
else
{
lean_object* v_one_78_; lean_object* v_n_79_; lean_object* v___x_80_; lean_object* v___x_81_; uint8_t v___x_82_; uint8_t v___x_83_; uint8_t v___x_84_; 
v_one_78_ = lean_unsigned_to_nat(1u);
v_n_79_ = lean_nat_sub(v_x_75_, v_one_78_);
lean_dec(v_x_75_);
v___x_80_ = lean_array_fget_borrowed(v_xs_73_, v_n_79_);
v___x_81_ = lean_array_fget_borrowed(v_ys_74_, v_n_79_);
v___x_82_ = lean_unbox(v___x_80_);
v___x_83_ = lean_unbox(v___x_81_);
v___x_84_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_82_, v___x_83_);
if (v___x_84_ == 0)
{
lean_dec(v_n_79_);
return v___x_84_;
}
else
{
v_x_75_ = v_n_79_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg___boxed(lean_object* v_xs_86_, lean_object* v_ys_87_, lean_object* v_x_88_){
_start:
{
uint8_t v_res_89_; lean_object* v_r_90_; 
v_res_89_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_xs_86_, v_ys_87_, v_x_88_);
lean_dec_ref(v_ys_87_);
lean_dec_ref(v_xs_86_);
v_r_90_ = lean_box(v_res_89_);
return v_r_90_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(uint8_t v___y_91_, uint8_t v_a_92_, lean_object* v_as_93_, size_t v_i_94_, size_t v_stop_95_){
_start:
{
uint8_t v___y_97_; uint8_t v___x_101_; 
v___x_101_ = lean_usize_dec_eq(v_i_94_, v_stop_95_);
if (v___x_101_ == 0)
{
lean_object* v___x_102_; uint8_t v___x_103_; uint8_t v___x_104_; uint8_t v___x_105_; 
v___x_102_ = lean_array_uget_borrowed(v_as_93_, v_i_94_);
v___x_103_ = 0;
v___x_104_ = lean_unbox(v___x_102_);
v___x_105_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_104_, v___x_103_);
if (v___x_105_ == 0)
{
v___y_97_ = v___y_91_;
goto v___jp_96_;
}
else
{
v___y_97_ = v_a_92_;
goto v___jp_96_;
}
}
else
{
uint8_t v___x_106_; 
v___x_106_ = 0;
return v___x_106_;
}
v___jp_96_:
{
if (v___y_97_ == 0)
{
size_t v___x_98_; size_t v___x_99_; 
v___x_98_ = ((size_t)1ULL);
v___x_99_ = lean_usize_add(v_i_94_, v___x_98_);
v_i_94_ = v___x_99_;
goto _start;
}
else
{
return v___y_97_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0___boxed(lean_object* v___y_107_, lean_object* v_a_108_, lean_object* v_as_109_, lean_object* v_i_110_, lean_object* v_stop_111_){
_start:
{
uint8_t v___y_6999__boxed_112_; uint8_t v_a_7000__boxed_113_; size_t v_i_boxed_114_; size_t v_stop_boxed_115_; uint8_t v_res_116_; lean_object* v_r_117_; 
v___y_6999__boxed_112_ = lean_unbox(v___y_107_);
v_a_7000__boxed_113_ = lean_unbox(v_a_108_);
v_i_boxed_114_ = lean_unbox_usize(v_i_110_);
lean_dec(v_i_110_);
v_stop_boxed_115_ = lean_unbox_usize(v_stop_111_);
lean_dec(v_stop_111_);
v_res_116_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(v___y_6999__boxed_112_, v_a_7000__boxed_113_, v_as_109_, v_i_boxed_114_, v_stop_boxed_115_);
lean_dec_ref(v_as_109_);
v_r_117_ = lean_box(v_res_116_);
return v_r_117_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(size_t v_sz_118_, size_t v_i_119_, lean_object* v_bs_120_){
_start:
{
uint8_t v___x_121_; 
v___x_121_ = lean_usize_dec_lt(v_i_119_, v_sz_118_);
if (v___x_121_ == 0)
{
return v_bs_120_;
}
else
{
lean_object* v_v_122_; lean_object* v___x_123_; lean_object* v_bs_x27_124_; uint8_t v___x_125_; uint8_t v___x_126_; uint8_t v___x_127_; size_t v___x_128_; size_t v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v_v_122_ = lean_array_uget(v_bs_120_, v_i_119_);
v___x_123_ = lean_unsigned_to_nat(0u);
v_bs_x27_124_ = lean_array_uset(v_bs_120_, v_i_119_, v___x_123_);
v___x_125_ = 2;
v___x_126_ = lean_unbox(v_v_122_);
lean_dec(v_v_122_);
v___x_127_ = l_Lean_Meta_instBEqCongrArgKind_beq(v___x_126_, v___x_125_);
v___x_128_ = ((size_t)1ULL);
v___x_129_ = lean_usize_add(v_i_119_, v___x_128_);
v___x_130_ = lean_box(v___x_127_);
v___x_131_ = lean_array_uset(v_bs_x27_124_, v_i_119_, v___x_130_);
v_i_119_ = v___x_129_;
v_bs_120_ = v___x_131_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1___boxed(lean_object* v_sz_133_, lean_object* v_i_134_, lean_object* v_bs_135_){
_start:
{
size_t v_sz_boxed_136_; size_t v_i_boxed_137_; lean_object* v_res_138_; 
v_sz_boxed_136_ = lean_unbox_usize(v_sz_133_);
lean_dec(v_sz_133_);
v_i_boxed_137_ = lean_unbox_usize(v_i_134_);
lean_dec(v_i_134_);
v_res_138_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(v_sz_boxed_136_, v_i_boxed_137_, v_bs_135_);
return v_res_138_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(uint8_t v_a_139_, lean_object* v_as_140_, size_t v_i_141_, size_t v_stop_142_){
_start:
{
uint8_t v___y_144_; uint8_t v___x_148_; 
v___x_148_ = lean_usize_dec_eq(v_i_141_, v_stop_142_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_149_ = lean_array_uget_borrowed(v_as_140_, v_i_141_);
v___x_150_ = lean_unbox(v___x_149_);
switch(v___x_150_)
{
case 0:
{
v___y_144_ = v_a_139_;
goto v___jp_143_;
}
case 2:
{
v___y_144_ = v_a_139_;
goto v___jp_143_;
}
default: 
{
uint8_t v___x_151_; 
v___x_151_ = 1;
return v___x_151_;
}
}
}
else
{
uint8_t v___x_152_; 
v___x_152_ = 0;
return v___x_152_;
}
v___jp_143_:
{
if (v___y_144_ == 0)
{
size_t v___x_145_; size_t v___x_146_; 
v___x_145_ = ((size_t)1ULL);
v___x_146_ = lean_usize_add(v_i_141_, v___x_145_);
v_i_141_ = v___x_146_;
goto _start;
}
else
{
return v___y_144_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2___boxed(lean_object* v_a_153_, lean_object* v_as_154_, lean_object* v_i_155_, lean_object* v_stop_156_){
_start:
{
uint8_t v_a_7047__boxed_157_; size_t v_i_boxed_158_; size_t v_stop_boxed_159_; uint8_t v_res_160_; lean_object* v_r_161_; 
v_a_7047__boxed_157_ = lean_unbox(v_a_153_);
v_i_boxed_158_ = lean_unbox_usize(v_i_155_);
lean_dec(v_i_155_);
v_stop_boxed_159_ = lean_unbox_usize(v_stop_156_);
lean_dec(v_stop_156_);
v_res_160_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(v_a_7047__boxed_157_, v_as_154_, v_i_boxed_158_, v_stop_boxed_159_);
lean_dec_ref(v_as_154_);
v_r_161_ = lean_box(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(lean_object* v_f_162_, lean_object* v_a_163_, lean_object* v_a_164_, lean_object* v_a_165_, lean_object* v_a_166_){
_start:
{
lean_object* v___x_171_; 
lean_inc_ref(v_f_162_);
v___x_171_ = l_Lean_Meta_isProof(v_f_162_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
if (lean_obj_tag(v___x_171_) == 0)
{
lean_object* v_a_172_; uint8_t v___x_173_; 
v_a_172_ = lean_ctor_get(v___x_171_, 0);
lean_inc(v_a_172_);
lean_dec_ref_known(v___x_171_, 1);
v___x_173_ = lean_unbox(v_a_172_);
if (v___x_173_ == 0)
{
lean_object* v___x_174_; lean_object* v___x_175_; 
v___x_174_ = lean_box(0);
lean_inc_ref(v_f_162_);
v___x_175_ = l_Lean_Meta_getFunInfo(v_f_162_, v___x_174_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
if (lean_obj_tag(v___x_175_) == 0)
{
lean_object* v_a_176_; lean_object* v___x_177_; 
v_a_176_ = lean_ctor_get(v___x_175_, 0);
lean_inc(v_a_176_);
lean_dec_ref_known(v___x_175_, 1);
lean_inc_ref(v_f_162_);
v___x_177_ = l_Lean_Meta_getCongrSimpKinds(v_f_162_, v_a_176_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
if (lean_obj_tag(v___x_177_) == 0)
{
lean_object* v_a_178_; lean_object* v___x_180_; uint8_t v_isShared_181_; uint8_t v_isSharedCheck_277_; 
v_a_178_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_277_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_277_ == 0)
{
v___x_180_ = v___x_177_;
v_isShared_181_ = v_isSharedCheck_277_;
goto v_resetjp_179_;
}
else
{
lean_inc(v_a_178_);
lean_dec(v___x_177_);
v___x_180_ = lean_box(0);
v_isShared_181_ = v_isSharedCheck_277_;
goto v_resetjp_179_;
}
v_resetjp_179_:
{
uint8_t v___y_183_; lean_object* v___x_204_; lean_object* v___x_205_; uint8_t v___x_206_; 
v___x_204_ = lean_unsigned_to_nat(0u);
v___x_205_ = lean_array_get_size(v_a_178_);
v___x_206_ = lean_nat_dec_lt(v___x_204_, v___x_205_);
if (v___x_206_ == 0)
{
uint8_t v___x_207_; 
lean_dec(v_a_176_);
lean_dec_ref(v_f_162_);
v___x_207_ = 1;
v___y_183_ = v___x_207_;
goto v___jp_182_;
}
else
{
if (v___x_206_ == 0)
{
lean_dec(v_a_176_);
lean_dec_ref(v_f_162_);
v___y_183_ = v___x_206_;
goto v___jp_182_;
}
else
{
size_t v___x_208_; size_t v___x_209_; uint8_t v___x_210_; uint8_t v___x_211_; lean_object* v___y_213_; lean_object* v___y_214_; lean_object* v___y_215_; lean_object* v___y_216_; 
v___x_208_ = ((size_t)0ULL);
v___x_209_ = lean_usize_of_nat(v___x_205_);
v___x_210_ = lean_unbox(v_a_172_);
v___x_211_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__2(v___x_210_, v_a_178_, v___x_208_, v___x_209_);
if (v___x_211_ == 0)
{
lean_dec(v_a_176_);
lean_dec_ref(v_f_162_);
v___y_183_ = v___x_206_;
goto v___jp_182_;
}
else
{
lean_del_object(v___x_180_);
lean_dec(v_a_172_);
if (lean_obj_tag(v_f_162_) == 4)
{
lean_object* v_declName_246_; lean_object* v_us_247_; lean_object* v___x_248_; 
v_declName_246_ = lean_ctor_get(v_f_162_, 0);
v_us_247_ = lean_ctor_get(v_f_162_, 1);
lean_inc(v_us_247_);
lean_inc(v_declName_246_);
v___x_248_ = l_Lean_Meta_mkCongrSimpForConst_x3f(v_declName_246_, v_us_247_, v_a_163_, v_a_164_, v_a_165_, v_a_166_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_268_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_268_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_268_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_268_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_268_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
if (lean_obj_tag(v_a_249_) == 1)
{
lean_object* v_val_253_; lean_object* v___x_255_; uint8_t v_isShared_256_; uint8_t v_isSharedCheck_267_; 
v_val_253_ = lean_ctor_get(v_a_249_, 0);
v_isSharedCheck_267_ = !lean_is_exclusive(v_a_249_);
if (v_isSharedCheck_267_ == 0)
{
v___x_255_ = v_a_249_;
v_isShared_256_ = v_isSharedCheck_267_;
goto v_resetjp_254_;
}
else
{
lean_inc(v_val_253_);
lean_dec(v_a_249_);
v___x_255_ = lean_box(0);
v_isShared_256_ = v_isSharedCheck_267_;
goto v_resetjp_254_;
}
v_resetjp_254_:
{
lean_object* v_argKinds_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_argKinds_257_ = lean_ctor_get(v_val_253_, 2);
v___x_258_ = lean_array_get_size(v_argKinds_257_);
v___x_259_ = lean_nat_dec_eq(v___x_258_, v___x_205_);
if (v___x_259_ == 0)
{
lean_del_object(v___x_255_);
lean_dec(v_val_253_);
lean_del_object(v___x_251_);
v___y_213_ = v_a_163_;
v___y_214_ = v_a_164_;
v___y_215_ = v_a_165_;
v___y_216_ = v_a_166_;
goto v___jp_212_;
}
else
{
uint8_t v___x_260_; 
v___x_260_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_argKinds_257_, v_a_178_, v___x_258_);
if (v___x_260_ == 0)
{
lean_del_object(v___x_255_);
lean_dec(v_val_253_);
lean_del_object(v___x_251_);
v___y_213_ = v_a_163_;
v___y_214_ = v_a_164_;
v___y_215_ = v_a_165_;
v___y_216_ = v_a_166_;
goto v___jp_212_;
}
else
{
lean_object* v___x_262_; 
lean_dec_ref_known(v_f_162_, 2);
lean_dec(v_a_178_);
lean_dec(v_a_176_);
if (v_isShared_256_ == 0)
{
lean_ctor_set_tag(v___x_255_, 3);
v___x_262_ = v___x_255_;
goto v_reusejp_261_;
}
else
{
lean_object* v_reuseFailAlloc_266_; 
v_reuseFailAlloc_266_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_266_, 0, v_val_253_);
v___x_262_ = v_reuseFailAlloc_266_;
goto v_reusejp_261_;
}
v_reusejp_261_:
{
lean_object* v___x_264_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set(v___x_251_, 0, v___x_262_);
v___x_264_ = v___x_251_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v___x_262_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
}
}
else
{
lean_del_object(v___x_251_);
lean_dec(v_a_249_);
v___y_213_ = v_a_163_;
v___y_214_ = v_a_164_;
v___y_215_ = v_a_165_;
v___y_216_ = v_a_166_;
goto v___jp_212_;
}
}
}
else
{
lean_object* v_a_269_; lean_object* v___x_271_; uint8_t v_isShared_272_; uint8_t v_isSharedCheck_276_; 
lean_dec_ref_known(v_f_162_, 2);
lean_dec(v_a_178_);
lean_dec(v_a_176_);
v_a_269_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_276_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_276_ == 0)
{
v___x_271_ = v___x_248_;
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
else
{
lean_inc(v_a_269_);
lean_dec(v___x_248_);
v___x_271_ = lean_box(0);
v_isShared_272_ = v_isSharedCheck_276_;
goto v_resetjp_270_;
}
v_resetjp_270_:
{
lean_object* v___x_274_; 
if (v_isShared_272_ == 0)
{
v___x_274_ = v___x_271_;
goto v_reusejp_273_;
}
else
{
lean_object* v_reuseFailAlloc_275_; 
v_reuseFailAlloc_275_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_275_, 0, v_a_269_);
v___x_274_ = v_reuseFailAlloc_275_;
goto v_reusejp_273_;
}
v_reusejp_273_:
{
return v___x_274_;
}
}
}
}
else
{
v___y_213_ = v_a_163_;
v___y_214_ = v_a_164_;
v___y_215_ = v_a_165_;
v___y_216_ = v_a_166_;
goto v___jp_212_;
}
}
v___jp_212_:
{
lean_object* v___x_217_; 
v___x_217_ = l_Lean_Meta_mkCongrSimpCore_x3f(v_f_162_, v_a_176_, v_a_178_, v___x_211_, v___y_213_, v___y_214_, v___y_215_, v___y_216_);
if (lean_obj_tag(v___x_217_) == 0)
{
lean_object* v_a_218_; lean_object* v___x_220_; uint8_t v_isShared_221_; uint8_t v_isSharedCheck_237_; 
v_a_218_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_237_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_237_ == 0)
{
v___x_220_ = v___x_217_;
v_isShared_221_ = v_isSharedCheck_237_;
goto v_resetjp_219_;
}
else
{
lean_inc(v_a_218_);
lean_dec(v___x_217_);
v___x_220_ = lean_box(0);
v_isShared_221_ = v_isSharedCheck_237_;
goto v_resetjp_219_;
}
v_resetjp_219_:
{
if (lean_obj_tag(v_a_218_) == 1)
{
lean_object* v_val_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_232_; 
v_val_222_ = lean_ctor_get(v_a_218_, 0);
v_isSharedCheck_232_ = !lean_is_exclusive(v_a_218_);
if (v_isSharedCheck_232_ == 0)
{
v___x_224_ = v_a_218_;
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_val_222_);
lean_dec(v_a_218_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_232_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_227_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set_tag(v___x_224_, 3);
v___x_227_ = v___x_224_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_231_; 
v_reuseFailAlloc_231_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_231_, 0, v_val_222_);
v___x_227_ = v_reuseFailAlloc_231_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_229_; 
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_227_);
v___x_229_ = v___x_220_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_230_; 
v_reuseFailAlloc_230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_230_, 0, v___x_227_);
v___x_229_ = v_reuseFailAlloc_230_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
return v___x_229_;
}
}
}
}
else
{
lean_object* v___x_233_; lean_object* v___x_235_; 
lean_dec(v_a_218_);
v___x_233_ = lean_box(0);
if (v_isShared_221_ == 0)
{
lean_ctor_set(v___x_220_, 0, v___x_233_);
v___x_235_ = v___x_220_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_236_; 
v_reuseFailAlloc_236_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_236_, 0, v___x_233_);
v___x_235_ = v_reuseFailAlloc_236_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
return v___x_235_;
}
}
}
}
else
{
lean_object* v_a_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_245_; 
v_a_238_ = lean_ctor_get(v___x_217_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v___x_217_);
if (v_isSharedCheck_245_ == 0)
{
v___x_240_ = v___x_217_;
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_a_238_);
lean_dec(v___x_217_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_245_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_243_; 
if (v_isShared_241_ == 0)
{
v___x_243_ = v___x_240_;
goto v_reusejp_242_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v_a_238_);
v___x_243_ = v_reuseFailAlloc_244_;
goto v_reusejp_242_;
}
v_reusejp_242_:
{
return v___x_243_;
}
}
}
}
}
}
v___jp_182_:
{
lean_object* v___x_184_; lean_object* v___x_185_; uint8_t v___x_186_; 
v___x_184_ = lean_unsigned_to_nat(0u);
v___x_185_ = lean_array_get_size(v_a_178_);
v___x_186_ = lean_nat_dec_lt(v___x_184_, v___x_185_);
if (v___x_186_ == 0)
{
lean_del_object(v___x_180_);
lean_dec(v_a_178_);
lean_dec(v_a_172_);
goto v___jp_168_;
}
else
{
if (v___x_186_ == 0)
{
lean_del_object(v___x_180_);
lean_dec(v_a_178_);
lean_dec(v_a_172_);
goto v___jp_168_;
}
else
{
size_t v___x_187_; size_t v___x_188_; uint8_t v___x_189_; uint8_t v___x_190_; 
v___x_187_ = ((size_t)0ULL);
v___x_188_ = lean_usize_of_nat(v___x_185_);
v___x_189_ = lean_unbox(v_a_172_);
lean_dec(v_a_172_);
v___x_190_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__0(v___y_183_, v___x_189_, v_a_178_, v___x_187_, v___x_188_);
if (v___x_190_ == 0)
{
lean_del_object(v___x_180_);
lean_dec(v_a_178_);
goto v___jp_168_;
}
else
{
lean_object* v___x_191_; 
v___x_191_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_isFixedPrefix_x3f(v_a_178_);
if (lean_obj_tag(v___x_191_) == 1)
{
lean_object* v_val_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
lean_dec(v_a_178_);
v_val_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_val_192_);
lean_dec_ref_known(v___x_191_, 1);
v___x_193_ = lean_nat_sub(v___x_185_, v_val_192_);
v___x_194_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_194_, 0, v_val_192_);
lean_ctor_set(v___x_194_, 1, v___x_193_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_194_);
v___x_196_ = v___x_180_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_194_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
else
{
size_t v_sz_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_202_; 
lean_dec(v___x_191_);
v_sz_198_ = lean_array_size(v_a_178_);
v___x_199_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__1(v_sz_198_, v___x_187_, v_a_178_);
v___x_200_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_200_, 0, v___x_199_);
if (v_isShared_181_ == 0)
{
lean_ctor_set(v___x_180_, 0, v___x_200_);
v___x_202_ = v___x_180_;
goto v_reusejp_201_;
}
else
{
lean_object* v_reuseFailAlloc_203_; 
v_reuseFailAlloc_203_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_203_, 0, v___x_200_);
v___x_202_ = v_reuseFailAlloc_203_;
goto v_reusejp_201_;
}
v_reusejp_201_:
{
return v___x_202_;
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
lean_object* v_a_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_285_; 
lean_dec(v_a_176_);
lean_dec(v_a_172_);
lean_dec_ref(v_f_162_);
v_a_278_ = lean_ctor_get(v___x_177_, 0);
v_isSharedCheck_285_ = !lean_is_exclusive(v___x_177_);
if (v_isSharedCheck_285_ == 0)
{
v___x_280_ = v___x_177_;
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_a_278_);
lean_dec(v___x_177_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_285_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___x_283_; 
if (v_isShared_281_ == 0)
{
v___x_283_ = v___x_280_;
goto v_reusejp_282_;
}
else
{
lean_object* v_reuseFailAlloc_284_; 
v_reuseFailAlloc_284_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_284_, 0, v_a_278_);
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
lean_dec(v_a_172_);
lean_dec_ref(v_f_162_);
v_a_286_ = lean_ctor_get(v___x_175_, 0);
v_isSharedCheck_293_ = !lean_is_exclusive(v___x_175_);
if (v_isSharedCheck_293_ == 0)
{
v___x_288_ = v___x_175_;
v_isShared_289_ = v_isSharedCheck_293_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_a_286_);
lean_dec(v___x_175_);
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
lean_dec(v_a_172_);
lean_dec_ref(v_f_162_);
goto v___jp_168_;
}
}
else
{
lean_object* v_a_294_; lean_object* v___x_296_; uint8_t v_isShared_297_; uint8_t v_isSharedCheck_301_; 
lean_dec_ref(v_f_162_);
v_a_294_ = lean_ctor_get(v___x_171_, 0);
v_isSharedCheck_301_ = !lean_is_exclusive(v___x_171_);
if (v_isSharedCheck_301_ == 0)
{
v___x_296_ = v___x_171_;
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
else
{
lean_inc(v_a_294_);
lean_dec(v___x_171_);
v___x_296_ = lean_box(0);
v_isShared_297_ = v_isSharedCheck_301_;
goto v_resetjp_295_;
}
v_resetjp_295_:
{
lean_object* v___x_299_; 
if (v_isShared_297_ == 0)
{
v___x_299_ = v___x_296_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v_a_294_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
return v___x_299_;
}
}
}
v___jp_168_:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_box(0);
v___x_170_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_170_, 0, v___x_169_);
return v___x_170_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg___boxed(lean_object* v_f_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_, lean_object* v_a_306_, lean_object* v_a_307_){
_start:
{
lean_object* v_res_308_; 
v_res_308_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_302_, v_a_303_, v_a_304_, v_a_305_, v_a_306_);
lean_dec(v_a_306_);
lean_dec_ref(v_a_305_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
return v_res_308_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(lean_object* v_f_309_, lean_object* v_a_310_, lean_object* v_a_311_, lean_object* v_a_312_, lean_object* v_a_313_, lean_object* v_a_314_, lean_object* v_a_315_){
_start:
{
lean_object* v___x_317_; 
v___x_317_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_309_, v_a_312_, v_a_313_, v_a_314_, v_a_315_);
return v___x_317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___boxed(lean_object* v_f_318_, lean_object* v_a_319_, lean_object* v_a_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo(v_f_318_, v_a_319_, v_a_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
lean_dec(v_a_320_);
lean_dec_ref(v_a_319_);
return v_res_326_;
}
}
LEAN_EXPORT uint8_t l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(lean_object* v_xs_327_, lean_object* v_ys_328_, lean_object* v_hsz_329_, lean_object* v_x_330_, lean_object* v_x_331_){
_start:
{
uint8_t v___x_332_; 
v___x_332_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___redArg(v_xs_327_, v_ys_328_, v_x_330_);
return v___x_332_;
}
}
LEAN_EXPORT lean_object* l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3___boxed(lean_object* v_xs_333_, lean_object* v_ys_334_, lean_object* v_hsz_335_, lean_object* v_x_336_, lean_object* v_x_337_){
_start:
{
uint8_t v_res_338_; lean_object* v_r_339_; 
v_res_338_ = l_Array_isEqvAux___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo_spec__3(v_xs_333_, v_ys_334_, v_hsz_335_, v_x_336_, v_x_337_);
lean_dec_ref(v_ys_334_);
lean_dec_ref(v_xs_333_);
v_r_339_ = lean_box(v_res_338_);
return v_r_339_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(lean_object* v_x_340_, lean_object* v_x_341_, lean_object* v_x_342_, lean_object* v_x_343_){
_start:
{
lean_object* v_ks_344_; lean_object* v_vs_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_371_; 
v_ks_344_ = lean_ctor_get(v_x_340_, 0);
v_vs_345_ = lean_ctor_get(v_x_340_, 1);
v_isSharedCheck_371_ = !lean_is_exclusive(v_x_340_);
if (v_isSharedCheck_371_ == 0)
{
v___x_347_ = v_x_340_;
v_isShared_348_ = v_isSharedCheck_371_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_vs_345_);
lean_inc(v_ks_344_);
lean_dec(v_x_340_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_371_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; uint8_t v___x_350_; 
v___x_349_ = lean_array_get_size(v_ks_344_);
v___x_350_ = lean_nat_dec_lt(v_x_341_, v___x_349_);
if (v___x_350_ == 0)
{
lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_354_; 
lean_dec(v_x_341_);
v___x_351_ = lean_array_push(v_ks_344_, v_x_342_);
v___x_352_ = lean_array_push(v_vs_345_, v_x_343_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v___x_352_);
lean_ctor_set(v___x_347_, 0, v___x_351_);
v___x_354_ = v___x_347_;
goto v_reusejp_353_;
}
else
{
lean_object* v_reuseFailAlloc_355_; 
v_reuseFailAlloc_355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_355_, 0, v___x_351_);
lean_ctor_set(v_reuseFailAlloc_355_, 1, v___x_352_);
v___x_354_ = v_reuseFailAlloc_355_;
goto v_reusejp_353_;
}
v_reusejp_353_:
{
return v___x_354_;
}
}
else
{
lean_object* v_k_x27_356_; size_t v___x_357_; size_t v___x_358_; uint8_t v___x_359_; 
v_k_x27_356_ = lean_array_fget_borrowed(v_ks_344_, v_x_341_);
v___x_357_ = lean_ptr_addr(v_x_342_);
v___x_358_ = lean_ptr_addr(v_k_x27_356_);
v___x_359_ = lean_usize_dec_eq(v___x_357_, v___x_358_);
if (v___x_359_ == 0)
{
lean_object* v___x_361_; 
if (v_isShared_348_ == 0)
{
v___x_361_ = v___x_347_;
goto v_reusejp_360_;
}
else
{
lean_object* v_reuseFailAlloc_365_; 
v_reuseFailAlloc_365_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_365_, 0, v_ks_344_);
lean_ctor_set(v_reuseFailAlloc_365_, 1, v_vs_345_);
v___x_361_ = v_reuseFailAlloc_365_;
goto v_reusejp_360_;
}
v_reusejp_360_:
{
lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_362_ = lean_unsigned_to_nat(1u);
v___x_363_ = lean_nat_add(v_x_341_, v___x_362_);
lean_dec(v_x_341_);
v_x_340_ = v___x_361_;
v_x_341_ = v___x_363_;
goto _start;
}
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_369_; 
v___x_366_ = lean_array_fset(v_ks_344_, v_x_341_, v_x_342_);
v___x_367_ = lean_array_fset(v_vs_345_, v_x_341_, v_x_343_);
lean_dec(v_x_341_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v___x_367_);
lean_ctor_set(v___x_347_, 0, v___x_366_);
v___x_369_ = v___x_347_;
goto v_reusejp_368_;
}
else
{
lean_object* v_reuseFailAlloc_370_; 
v_reuseFailAlloc_370_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_370_, 0, v___x_366_);
lean_ctor_set(v_reuseFailAlloc_370_, 1, v___x_367_);
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
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(lean_object* v_n_372_, lean_object* v_k_373_, lean_object* v_v_374_){
_start:
{
lean_object* v___x_375_; lean_object* v___x_376_; 
v___x_375_ = lean_unsigned_to_nat(0u);
v___x_376_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(v_n_372_, v___x_375_, v_k_373_, v_v_374_);
return v___x_376_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_377_; 
v___x_377_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_377_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(lean_object* v_x_378_, size_t v_x_379_, size_t v_x_380_, lean_object* v_x_381_, lean_object* v_x_382_){
_start:
{
if (lean_obj_tag(v_x_378_) == 0)
{
lean_object* v_es_383_; size_t v___x_384_; size_t v___x_385_; lean_object* v_j_386_; lean_object* v___x_387_; uint8_t v___x_388_; 
v_es_383_ = lean_ctor_get(v_x_378_, 0);
v___x_384_ = ((size_t)31ULL);
v___x_385_ = lean_usize_land(v_x_379_, v___x_384_);
v_j_386_ = lean_usize_to_nat(v___x_385_);
v___x_387_ = lean_array_get_size(v_es_383_);
v___x_388_ = lean_nat_dec_lt(v_j_386_, v___x_387_);
if (v___x_388_ == 0)
{
lean_dec(v_j_386_);
lean_dec(v_x_382_);
lean_dec_ref(v_x_381_);
return v_x_378_;
}
else
{
lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_429_; 
lean_inc_ref(v_es_383_);
v_isSharedCheck_429_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_429_ == 0)
{
lean_object* v_unused_430_; 
v_unused_430_ = lean_ctor_get(v_x_378_, 0);
lean_dec(v_unused_430_);
v___x_390_ = v_x_378_;
v_isShared_391_ = v_isSharedCheck_429_;
goto v_resetjp_389_;
}
else
{
lean_dec(v_x_378_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_429_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v_v_392_; lean_object* v___x_393_; lean_object* v_xs_x27_394_; lean_object* v___y_396_; 
v_v_392_ = lean_array_fget(v_es_383_, v_j_386_);
v___x_393_ = lean_box(0);
v_xs_x27_394_ = lean_array_fset(v_es_383_, v_j_386_, v___x_393_);
switch(lean_obj_tag(v_v_392_))
{
case 0:
{
lean_object* v_key_401_; lean_object* v_val_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_414_; 
v_key_401_ = lean_ctor_get(v_v_392_, 0);
v_val_402_ = lean_ctor_get(v_v_392_, 1);
v_isSharedCheck_414_ = !lean_is_exclusive(v_v_392_);
if (v_isSharedCheck_414_ == 0)
{
v___x_404_ = v_v_392_;
v_isShared_405_ = v_isSharedCheck_414_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_val_402_);
lean_inc(v_key_401_);
lean_dec(v_v_392_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_414_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
size_t v___x_406_; size_t v___x_407_; uint8_t v___x_408_; 
v___x_406_ = lean_ptr_addr(v_x_381_);
v___x_407_ = lean_ptr_addr(v_key_401_);
v___x_408_ = lean_usize_dec_eq(v___x_406_, v___x_407_);
if (v___x_408_ == 0)
{
lean_object* v___x_409_; lean_object* v___x_410_; 
lean_del_object(v___x_404_);
v___x_409_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_401_, v_val_402_, v_x_381_, v_x_382_);
v___x_410_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_410_, 0, v___x_409_);
v___y_396_ = v___x_410_;
goto v___jp_395_;
}
else
{
lean_object* v___x_412_; 
lean_dec(v_val_402_);
lean_dec(v_key_401_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v_x_382_);
lean_ctor_set(v___x_404_, 0, v_x_381_);
v___x_412_ = v___x_404_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v_x_381_);
lean_ctor_set(v_reuseFailAlloc_413_, 1, v_x_382_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
v___y_396_ = v___x_412_;
goto v___jp_395_;
}
}
}
}
case 1:
{
lean_object* v_node_415_; lean_object* v___x_417_; uint8_t v_isShared_418_; uint8_t v_isSharedCheck_427_; 
v_node_415_ = lean_ctor_get(v_v_392_, 0);
v_isSharedCheck_427_ = !lean_is_exclusive(v_v_392_);
if (v_isSharedCheck_427_ == 0)
{
v___x_417_ = v_v_392_;
v_isShared_418_ = v_isSharedCheck_427_;
goto v_resetjp_416_;
}
else
{
lean_inc(v_node_415_);
lean_dec(v_v_392_);
v___x_417_ = lean_box(0);
v_isShared_418_ = v_isSharedCheck_427_;
goto v_resetjp_416_;
}
v_resetjp_416_:
{
size_t v___x_419_; size_t v___x_420_; size_t v___x_421_; size_t v___x_422_; lean_object* v___x_423_; lean_object* v___x_425_; 
v___x_419_ = ((size_t)5ULL);
v___x_420_ = lean_usize_shift_right(v_x_379_, v___x_419_);
v___x_421_ = ((size_t)1ULL);
v___x_422_ = lean_usize_add(v_x_380_, v___x_421_);
v___x_423_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_node_415_, v___x_420_, v___x_422_, v_x_381_, v_x_382_);
if (v_isShared_418_ == 0)
{
lean_ctor_set(v___x_417_, 0, v___x_423_);
v___x_425_ = v___x_417_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_426_; 
v_reuseFailAlloc_426_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_426_, 0, v___x_423_);
v___x_425_ = v_reuseFailAlloc_426_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
v___y_396_ = v___x_425_;
goto v___jp_395_;
}
}
}
default: 
{
lean_object* v___x_428_; 
v___x_428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_428_, 0, v_x_381_);
lean_ctor_set(v___x_428_, 1, v_x_382_);
v___y_396_ = v___x_428_;
goto v___jp_395_;
}
}
v___jp_395_:
{
lean_object* v___x_397_; lean_object* v___x_399_; 
v___x_397_ = lean_array_fset(v_xs_x27_394_, v_j_386_, v___y_396_);
lean_dec(v_j_386_);
if (v_isShared_391_ == 0)
{
lean_ctor_set(v___x_390_, 0, v___x_397_);
v___x_399_ = v___x_390_;
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
}
}
else
{
lean_object* v_ks_431_; lean_object* v_vs_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_450_; 
v_ks_431_ = lean_ctor_get(v_x_378_, 0);
v_vs_432_ = lean_ctor_get(v_x_378_, 1);
v_isSharedCheck_450_ = !lean_is_exclusive(v_x_378_);
if (v_isSharedCheck_450_ == 0)
{
v___x_434_ = v_x_378_;
v_isShared_435_ = v_isSharedCheck_450_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_vs_432_);
lean_inc(v_ks_431_);
lean_dec(v_x_378_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_450_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_437_; 
if (v_isShared_435_ == 0)
{
v___x_437_ = v___x_434_;
goto v_reusejp_436_;
}
else
{
lean_object* v_reuseFailAlloc_449_; 
v_reuseFailAlloc_449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_449_, 0, v_ks_431_);
lean_ctor_set(v_reuseFailAlloc_449_, 1, v_vs_432_);
v___x_437_ = v_reuseFailAlloc_449_;
goto v_reusejp_436_;
}
v_reusejp_436_:
{
lean_object* v_newNode_438_; size_t v___x_439_; uint8_t v___x_440_; 
v_newNode_438_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(v___x_437_, v_x_381_, v_x_382_);
v___x_439_ = ((size_t)7ULL);
v___x_440_ = lean_usize_dec_le(v___x_439_, v_x_380_);
if (v___x_440_ == 0)
{
lean_object* v___x_441_; lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_441_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_438_);
v___x_442_ = lean_unsigned_to_nat(4u);
v___x_443_ = lean_nat_dec_lt(v___x_441_, v___x_442_);
lean_dec(v___x_441_);
if (v___x_443_ == 0)
{
lean_object* v_ks_444_; lean_object* v_vs_445_; lean_object* v___x_446_; lean_object* v___x_447_; lean_object* v___x_448_; 
v_ks_444_ = lean_ctor_get(v_newNode_438_, 0);
lean_inc_ref(v_ks_444_);
v_vs_445_ = lean_ctor_get(v_newNode_438_, 1);
lean_inc_ref(v_vs_445_);
lean_dec_ref(v_newNode_438_);
v___x_446_ = lean_unsigned_to_nat(0u);
v___x_447_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___closed__0);
v___x_448_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_x_380_, v_ks_444_, v_vs_445_, v___x_446_, v___x_447_);
lean_dec_ref(v_vs_445_);
lean_dec_ref(v_ks_444_);
return v___x_448_;
}
else
{
return v_newNode_438_;
}
}
else
{
return v_newNode_438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(size_t v_depth_451_, lean_object* v_keys_452_, lean_object* v_vals_453_, lean_object* v_i_454_, lean_object* v_entries_455_){
_start:
{
lean_object* v___x_456_; uint8_t v___x_457_; 
v___x_456_ = lean_array_get_size(v_keys_452_);
v___x_457_ = lean_nat_dec_lt(v_i_454_, v___x_456_);
if (v___x_457_ == 0)
{
lean_dec(v_i_454_);
return v_entries_455_;
}
else
{
lean_object* v_k_458_; lean_object* v_v_459_; size_t v___x_460_; size_t v___x_461_; size_t v___x_462_; uint64_t v___x_463_; size_t v_h_464_; size_t v___x_465_; lean_object* v___x_466_; size_t v___x_467_; size_t v___x_468_; size_t v___x_469_; size_t v_h_470_; lean_object* v___x_471_; lean_object* v___x_472_; 
v_k_458_ = lean_array_fget_borrowed(v_keys_452_, v_i_454_);
v_v_459_ = lean_array_fget_borrowed(v_vals_453_, v_i_454_);
v___x_460_ = lean_ptr_addr(v_k_458_);
v___x_461_ = ((size_t)3ULL);
v___x_462_ = lean_usize_shift_right(v___x_460_, v___x_461_);
v___x_463_ = lean_usize_to_uint64(v___x_462_);
v_h_464_ = lean_uint64_to_usize(v___x_463_);
v___x_465_ = ((size_t)5ULL);
v___x_466_ = lean_unsigned_to_nat(1u);
v___x_467_ = ((size_t)1ULL);
v___x_468_ = lean_usize_sub(v_depth_451_, v___x_467_);
v___x_469_ = lean_usize_mul(v___x_465_, v___x_468_);
v_h_470_ = lean_usize_shift_right(v_h_464_, v___x_469_);
v___x_471_ = lean_nat_add(v_i_454_, v___x_466_);
lean_dec(v_i_454_);
lean_inc(v_v_459_);
lean_inc(v_k_458_);
v___x_472_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_entries_455_, v_h_470_, v_depth_451_, v_k_458_, v_v_459_);
v_i_454_ = v___x_471_;
v_entries_455_ = v___x_472_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg___boxed(lean_object* v_depth_474_, lean_object* v_keys_475_, lean_object* v_vals_476_, lean_object* v_i_477_, lean_object* v_entries_478_){
_start:
{
size_t v_depth_boxed_479_; lean_object* v_res_480_; 
v_depth_boxed_479_ = lean_unbox_usize(v_depth_474_);
lean_dec(v_depth_474_);
v_res_480_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_depth_boxed_479_, v_keys_475_, v_vals_476_, v_i_477_, v_entries_478_);
lean_dec_ref(v_vals_476_);
lean_dec_ref(v_keys_475_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg___boxed(lean_object* v_x_481_, lean_object* v_x_482_, lean_object* v_x_483_, lean_object* v_x_484_, lean_object* v_x_485_){
_start:
{
size_t v_x_2566__boxed_486_; size_t v_x_2567__boxed_487_; lean_object* v_res_488_; 
v_x_2566__boxed_486_ = lean_unbox_usize(v_x_482_);
lean_dec(v_x_482_);
v_x_2567__boxed_487_ = lean_unbox_usize(v_x_483_);
lean_dec(v_x_483_);
v_res_488_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_481_, v_x_2566__boxed_486_, v_x_2567__boxed_487_, v_x_484_, v_x_485_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(lean_object* v_x_489_, lean_object* v_x_490_, lean_object* v_x_491_){
_start:
{
size_t v___x_492_; size_t v___x_493_; size_t v___x_494_; uint64_t v___x_495_; size_t v___x_496_; size_t v___x_497_; lean_object* v___x_498_; 
v___x_492_ = lean_ptr_addr(v_x_490_);
v___x_493_ = ((size_t)3ULL);
v___x_494_ = lean_usize_shift_right(v___x_492_, v___x_493_);
v___x_495_ = lean_usize_to_uint64(v___x_494_);
v___x_496_ = lean_uint64_to_usize(v___x_495_);
v___x_497_ = ((size_t)1ULL);
v___x_498_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_489_, v___x_496_, v___x_497_, v_x_490_, v_x_491_);
return v___x_498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_499_, lean_object* v_vals_500_, lean_object* v_i_501_, lean_object* v_k_502_){
_start:
{
lean_object* v___x_503_; uint8_t v___x_504_; 
v___x_503_ = lean_array_get_size(v_keys_499_);
v___x_504_ = lean_nat_dec_lt(v_i_501_, v___x_503_);
if (v___x_504_ == 0)
{
lean_object* v___x_505_; 
lean_dec(v_i_501_);
v___x_505_ = lean_box(0);
return v___x_505_;
}
else
{
lean_object* v_k_x27_506_; size_t v___x_507_; size_t v___x_508_; uint8_t v___x_509_; 
v_k_x27_506_ = lean_array_fget_borrowed(v_keys_499_, v_i_501_);
v___x_507_ = lean_ptr_addr(v_k_502_);
v___x_508_ = lean_ptr_addr(v_k_x27_506_);
v___x_509_ = lean_usize_dec_eq(v___x_507_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; lean_object* v___x_511_; 
v___x_510_ = lean_unsigned_to_nat(1u);
v___x_511_ = lean_nat_add(v_i_501_, v___x_510_);
lean_dec(v_i_501_);
v_i_501_ = v___x_511_;
goto _start;
}
else
{
lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_513_ = lean_array_fget_borrowed(v_vals_500_, v_i_501_);
lean_dec(v_i_501_);
lean_inc(v___x_513_);
v___x_514_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_515_, lean_object* v_vals_516_, lean_object* v_i_517_, lean_object* v_k_518_){
_start:
{
lean_object* v_res_519_; 
v_res_519_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_keys_515_, v_vals_516_, v_i_517_, v_k_518_);
lean_dec_ref(v_k_518_);
lean_dec_ref(v_vals_516_);
lean_dec_ref(v_keys_515_);
return v_res_519_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(lean_object* v_x_520_, size_t v_x_521_, lean_object* v_x_522_){
_start:
{
if (lean_obj_tag(v_x_520_) == 0)
{
lean_object* v_es_523_; lean_object* v___x_524_; size_t v___x_525_; size_t v___x_526_; lean_object* v_j_527_; lean_object* v___x_528_; 
v_es_523_ = lean_ctor_get(v_x_520_, 0);
v___x_524_ = lean_box(2);
v___x_525_ = ((size_t)31ULL);
v___x_526_ = lean_usize_land(v_x_521_, v___x_525_);
v_j_527_ = lean_usize_to_nat(v___x_526_);
v___x_528_ = lean_array_get_borrowed(v___x_524_, v_es_523_, v_j_527_);
lean_dec(v_j_527_);
switch(lean_obj_tag(v___x_528_))
{
case 0:
{
lean_object* v_key_529_; lean_object* v_val_530_; size_t v___x_531_; size_t v___x_532_; uint8_t v___x_533_; 
v_key_529_ = lean_ctor_get(v___x_528_, 0);
v_val_530_ = lean_ctor_get(v___x_528_, 1);
v___x_531_ = lean_ptr_addr(v_x_522_);
v___x_532_ = lean_ptr_addr(v_key_529_);
v___x_533_ = lean_usize_dec_eq(v___x_531_, v___x_532_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; 
v___x_534_ = lean_box(0);
return v___x_534_;
}
else
{
lean_object* v___x_535_; 
lean_inc(v_val_530_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v_val_530_);
return v___x_535_;
}
}
case 1:
{
lean_object* v_node_536_; size_t v___x_537_; size_t v___x_538_; 
v_node_536_ = lean_ctor_get(v___x_528_, 0);
v___x_537_ = ((size_t)5ULL);
v___x_538_ = lean_usize_shift_right(v_x_521_, v___x_537_);
v_x_520_ = v_node_536_;
v_x_521_ = v___x_538_;
goto _start;
}
default: 
{
lean_object* v___x_540_; 
v___x_540_ = lean_box(0);
return v___x_540_;
}
}
}
else
{
lean_object* v_ks_541_; lean_object* v_vs_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v_ks_541_ = lean_ctor_get(v_x_520_, 0);
v_vs_542_ = lean_ctor_get(v_x_520_, 1);
v___x_543_ = lean_unsigned_to_nat(0u);
v___x_544_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_ks_541_, v_vs_542_, v___x_543_, v_x_522_);
return v___x_544_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg___boxed(lean_object* v_x_545_, lean_object* v_x_546_, lean_object* v_x_547_){
_start:
{
size_t v_x_2767__boxed_548_; lean_object* v_res_549_; 
v_x_2767__boxed_548_ = lean_unbox_usize(v_x_546_);
lean_dec(v_x_546_);
v_res_549_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_545_, v_x_2767__boxed_548_, v_x_547_);
lean_dec_ref(v_x_547_);
lean_dec_ref(v_x_545_);
return v_res_549_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(lean_object* v_x_550_, lean_object* v_x_551_){
_start:
{
size_t v___x_552_; size_t v___x_553_; size_t v___x_554_; uint64_t v___x_555_; size_t v___x_556_; lean_object* v___x_557_; 
v___x_552_ = lean_ptr_addr(v_x_551_);
v___x_553_ = ((size_t)3ULL);
v___x_554_ = lean_usize_shift_right(v___x_552_, v___x_553_);
v___x_555_ = lean_usize_to_uint64(v___x_554_);
v___x_556_ = lean_uint64_to_usize(v___x_555_);
v___x_557_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_550_, v___x_556_, v_x_551_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg___boxed(lean_object* v_x_558_, lean_object* v_x_559_){
_start:
{
lean_object* v_res_560_; 
v_res_560_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_x_558_, v_x_559_);
lean_dec_ref(v_x_559_);
lean_dec_ref(v_x_558_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg(lean_object* v_f_561_, lean_object* v_a_562_, lean_object* v_a_563_, lean_object* v_a_564_, lean_object* v_a_565_, lean_object* v_a_566_){
_start:
{
lean_object* v___x_568_; lean_object* v_congrInfo_569_; lean_object* v___x_570_; 
v___x_568_ = lean_st_ref_get(v_a_562_);
v_congrInfo_569_ = lean_ctor_get(v___x_568_, 7);
lean_inc_ref(v_congrInfo_569_);
lean_dec(v___x_568_);
v___x_570_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_congrInfo_569_, v_f_561_);
lean_dec_ref(v_congrInfo_569_);
if (lean_obj_tag(v___x_570_) == 1)
{
lean_object* v_val_571_; lean_object* v___x_573_; uint8_t v_isShared_574_; uint8_t v_isSharedCheck_578_; 
lean_dec_ref(v_f_561_);
v_val_571_ = lean_ctor_get(v___x_570_, 0);
v_isSharedCheck_578_ = !lean_is_exclusive(v___x_570_);
if (v_isSharedCheck_578_ == 0)
{
v___x_573_ = v___x_570_;
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
else
{
lean_inc(v_val_571_);
lean_dec(v___x_570_);
v___x_573_ = lean_box(0);
v_isShared_574_ = v_isSharedCheck_578_;
goto v_resetjp_572_;
}
v_resetjp_572_:
{
lean_object* v___x_576_; 
if (v_isShared_574_ == 0)
{
lean_ctor_set_tag(v___x_573_, 0);
v___x_576_ = v___x_573_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_val_571_);
v___x_576_ = v_reuseFailAlloc_577_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
return v___x_576_;
}
}
}
else
{
lean_object* v___x_579_; 
lean_dec(v___x_570_);
lean_inc_ref(v_f_561_);
v___x_579_ = l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_mkCongrInfo___redArg(v_f_561_, v_a_563_, v_a_564_, v_a_565_, v_a_566_);
if (lean_obj_tag(v___x_579_) == 0)
{
lean_object* v_a_580_; lean_object* v___x_582_; uint8_t v_isShared_583_; uint8_t v_isSharedCheck_611_; 
v_a_580_ = lean_ctor_get(v___x_579_, 0);
v_isSharedCheck_611_ = !lean_is_exclusive(v___x_579_);
if (v_isSharedCheck_611_ == 0)
{
v___x_582_ = v___x_579_;
v_isShared_583_ = v_isSharedCheck_611_;
goto v_resetjp_581_;
}
else
{
lean_inc(v_a_580_);
lean_dec(v___x_579_);
v___x_582_ = lean_box(0);
v_isShared_583_ = v_isSharedCheck_611_;
goto v_resetjp_581_;
}
v_resetjp_581_:
{
lean_object* v___x_584_; lean_object* v_share_585_; lean_object* v_maxFVar_586_; lean_object* v_proofInstInfo_587_; lean_object* v_proofInstInfoFVar_588_; lean_object* v_letValue_589_; lean_object* v_inferType_590_; lean_object* v_getLevel_591_; lean_object* v_congrInfo_592_; lean_object* v_defEqI_593_; lean_object* v_extensions_594_; lean_object* v_issues_595_; lean_object* v_canon_596_; lean_object* v_instanceOverrides_597_; uint8_t v_debug_598_; lean_object* v___x_600_; uint8_t v_isShared_601_; uint8_t v_isSharedCheck_610_; 
v___x_584_ = lean_st_ref_take(v_a_562_);
v_share_585_ = lean_ctor_get(v___x_584_, 0);
v_maxFVar_586_ = lean_ctor_get(v___x_584_, 1);
v_proofInstInfo_587_ = lean_ctor_get(v___x_584_, 2);
v_proofInstInfoFVar_588_ = lean_ctor_get(v___x_584_, 3);
v_letValue_589_ = lean_ctor_get(v___x_584_, 4);
v_inferType_590_ = lean_ctor_get(v___x_584_, 5);
v_getLevel_591_ = lean_ctor_get(v___x_584_, 6);
v_congrInfo_592_ = lean_ctor_get(v___x_584_, 7);
v_defEqI_593_ = lean_ctor_get(v___x_584_, 8);
v_extensions_594_ = lean_ctor_get(v___x_584_, 9);
v_issues_595_ = lean_ctor_get(v___x_584_, 10);
v_canon_596_ = lean_ctor_get(v___x_584_, 11);
v_instanceOverrides_597_ = lean_ctor_get(v___x_584_, 12);
v_debug_598_ = lean_ctor_get_uint8(v___x_584_, sizeof(void*)*13);
v_isSharedCheck_610_ = !lean_is_exclusive(v___x_584_);
if (v_isSharedCheck_610_ == 0)
{
v___x_600_ = v___x_584_;
v_isShared_601_ = v_isSharedCheck_610_;
goto v_resetjp_599_;
}
else
{
lean_inc(v_instanceOverrides_597_);
lean_inc(v_canon_596_);
lean_inc(v_issues_595_);
lean_inc(v_extensions_594_);
lean_inc(v_defEqI_593_);
lean_inc(v_congrInfo_592_);
lean_inc(v_getLevel_591_);
lean_inc(v_inferType_590_);
lean_inc(v_letValue_589_);
lean_inc(v_proofInstInfoFVar_588_);
lean_inc(v_proofInstInfo_587_);
lean_inc(v_maxFVar_586_);
lean_inc(v_share_585_);
lean_dec(v___x_584_);
v___x_600_ = lean_box(0);
v_isShared_601_ = v_isSharedCheck_610_;
goto v_resetjp_599_;
}
v_resetjp_599_:
{
lean_object* v___x_602_; lean_object* v___x_604_; 
lean_inc(v_a_580_);
v___x_602_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(v_congrInfo_592_, v_f_561_, v_a_580_);
if (v_isShared_601_ == 0)
{
lean_ctor_set(v___x_600_, 7, v___x_602_);
v___x_604_ = v___x_600_;
goto v_reusejp_603_;
}
else
{
lean_object* v_reuseFailAlloc_609_; 
v_reuseFailAlloc_609_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v_reuseFailAlloc_609_, 0, v_share_585_);
lean_ctor_set(v_reuseFailAlloc_609_, 1, v_maxFVar_586_);
lean_ctor_set(v_reuseFailAlloc_609_, 2, v_proofInstInfo_587_);
lean_ctor_set(v_reuseFailAlloc_609_, 3, v_proofInstInfoFVar_588_);
lean_ctor_set(v_reuseFailAlloc_609_, 4, v_letValue_589_);
lean_ctor_set(v_reuseFailAlloc_609_, 5, v_inferType_590_);
lean_ctor_set(v_reuseFailAlloc_609_, 6, v_getLevel_591_);
lean_ctor_set(v_reuseFailAlloc_609_, 7, v___x_602_);
lean_ctor_set(v_reuseFailAlloc_609_, 8, v_defEqI_593_);
lean_ctor_set(v_reuseFailAlloc_609_, 9, v_extensions_594_);
lean_ctor_set(v_reuseFailAlloc_609_, 10, v_issues_595_);
lean_ctor_set(v_reuseFailAlloc_609_, 11, v_canon_596_);
lean_ctor_set(v_reuseFailAlloc_609_, 12, v_instanceOverrides_597_);
lean_ctor_set_uint8(v_reuseFailAlloc_609_, sizeof(void*)*13, v_debug_598_);
v___x_604_ = v_reuseFailAlloc_609_;
goto v_reusejp_603_;
}
v_reusejp_603_:
{
lean_object* v___x_605_; lean_object* v___x_607_; 
v___x_605_ = lean_st_ref_put(v_a_562_, v___x_604_);
if (v_isShared_583_ == 0)
{
v___x_607_ = v___x_582_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_580_);
v___x_607_ = v_reuseFailAlloc_608_;
goto v_reusejp_606_;
}
v_reusejp_606_:
{
return v___x_607_;
}
}
}
}
}
else
{
lean_dec_ref(v_f_561_);
return v___x_579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___redArg___boxed(lean_object* v_f_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_){
_start:
{
lean_object* v_res_619_; 
v_res_619_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_f_612_, v_a_613_, v_a_614_, v_a_615_, v_a_616_, v_a_617_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_616_);
lean_dec(v_a_615_);
lean_dec_ref(v_a_614_);
lean_dec(v_a_613_);
return v_res_619_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo(lean_object* v_f_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_, lean_object* v_a_624_, lean_object* v_a_625_, lean_object* v_a_626_){
_start:
{
lean_object* v___x_628_; 
v___x_628_ = l_Lean_Meta_Sym_getCongrInfo___redArg(v_f_620_, v_a_622_, v_a_623_, v_a_624_, v_a_625_, v_a_626_);
return v___x_628_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Sym_getCongrInfo___boxed(lean_object* v_f_629_, lean_object* v_a_630_, lean_object* v_a_631_, lean_object* v_a_632_, lean_object* v_a_633_, lean_object* v_a_634_, lean_object* v_a_635_, lean_object* v_a_636_){
_start:
{
lean_object* v_res_637_; 
v_res_637_ = l_Lean_Meta_Sym_getCongrInfo(v_f_629_, v_a_630_, v_a_631_, v_a_632_, v_a_633_, v_a_634_, v_a_635_);
lean_dec(v_a_635_);
lean_dec_ref(v_a_634_);
lean_dec(v_a_633_);
lean_dec_ref(v_a_632_);
lean_dec(v_a_631_);
lean_dec_ref(v_a_630_);
return v_res_637_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(lean_object* v_00_u03b2_638_, lean_object* v_x_639_, lean_object* v_x_640_){
_start:
{
lean_object* v___x_641_; 
v___x_641_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___redArg(v_x_639_, v_x_640_);
return v___x_641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0___boxed(lean_object* v_00_u03b2_642_, lean_object* v_x_643_, lean_object* v_x_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = l_Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0(v_00_u03b2_642_, v_x_643_, v_x_644_);
lean_dec_ref(v_x_644_);
lean_dec_ref(v_x_643_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1(lean_object* v_00_u03b2_646_, lean_object* v_x_647_, lean_object* v_x_648_, lean_object* v_x_649_){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1___redArg(v_x_647_, v_x_648_, v_x_649_);
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(lean_object* v_00_u03b2_651_, lean_object* v_x_652_, size_t v_x_653_, lean_object* v_x_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___redArg(v_x_652_, v_x_653_, v_x_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0___boxed(lean_object* v_00_u03b2_656_, lean_object* v_x_657_, lean_object* v_x_658_, lean_object* v_x_659_){
_start:
{
size_t v_x_2919__boxed_660_; lean_object* v_res_661_; 
v_x_2919__boxed_660_ = lean_unbox_usize(v_x_658_);
lean_dec(v_x_658_);
v_res_661_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0(v_00_u03b2_656_, v_x_657_, v_x_2919__boxed_660_, v_x_659_);
lean_dec_ref(v_x_659_);
lean_dec_ref(v_x_657_);
return v_res_661_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(lean_object* v_00_u03b2_662_, lean_object* v_x_663_, size_t v_x_664_, size_t v_x_665_, lean_object* v_x_666_, lean_object* v_x_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___redArg(v_x_663_, v_x_664_, v_x_665_, v_x_666_, v_x_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2___boxed(lean_object* v_00_u03b2_669_, lean_object* v_x_670_, lean_object* v_x_671_, lean_object* v_x_672_, lean_object* v_x_673_, lean_object* v_x_674_){
_start:
{
size_t v_x_2930__boxed_675_; size_t v_x_2931__boxed_676_; lean_object* v_res_677_; 
v_x_2930__boxed_675_ = lean_unbox_usize(v_x_671_);
lean_dec(v_x_671_);
v_x_2931__boxed_676_ = lean_unbox_usize(v_x_672_);
lean_dec(v_x_672_);
v_res_677_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2(v_00_u03b2_669_, v_x_670_, v_x_2930__boxed_675_, v_x_2931__boxed_676_, v_x_673_, v_x_674_);
return v_res_677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_678_, lean_object* v_keys_679_, lean_object* v_vals_680_, lean_object* v_heq_681_, lean_object* v_i_682_, lean_object* v_k_683_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___redArg(v_keys_679_, v_vals_680_, v_i_682_, v_k_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_685_, lean_object* v_keys_686_, lean_object* v_vals_687_, lean_object* v_heq_688_, lean_object* v_i_689_, lean_object* v_k_690_){
_start:
{
lean_object* v_res_691_; 
v_res_691_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00Lean_Meta_Sym_getCongrInfo_spec__0_spec__0_spec__1(v_00_u03b2_685_, v_keys_686_, v_vals_687_, v_heq_688_, v_i_689_, v_k_690_);
lean_dec_ref(v_k_690_);
lean_dec_ref(v_vals_687_);
lean_dec_ref(v_keys_686_);
return v_res_691_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_692_, lean_object* v_n_693_, lean_object* v_k_694_, lean_object* v_v_695_){
_start:
{
lean_object* v___x_696_; 
v___x_696_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4___redArg(v_n_693_, v_k_694_, v_v_695_);
return v___x_696_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(lean_object* v_00_u03b2_697_, size_t v_depth_698_, lean_object* v_keys_699_, lean_object* v_vals_700_, lean_object* v_heq_701_, lean_object* v_i_702_, lean_object* v_entries_703_){
_start:
{
lean_object* v___x_704_; 
v___x_704_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___redArg(v_depth_698_, v_keys_699_, v_vals_700_, v_i_702_, v_entries_703_);
return v___x_704_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5___boxed(lean_object* v_00_u03b2_705_, lean_object* v_depth_706_, lean_object* v_keys_707_, lean_object* v_vals_708_, lean_object* v_heq_709_, lean_object* v_i_710_, lean_object* v_entries_711_){
_start:
{
size_t v_depth_boxed_712_; lean_object* v_res_713_; 
v_depth_boxed_712_ = lean_unbox_usize(v_depth_706_);
lean_dec(v_depth_706_);
v_res_713_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__5(v_00_u03b2_705_, v_depth_boxed_712_, v_keys_707_, v_vals_708_, v_heq_709_, v_i_710_, v_entries_711_);
lean_dec_ref(v_vals_708_);
lean_dec_ref(v_keys_707_);
return v_res_713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5(lean_object* v_00_u03b2_714_, lean_object* v_x_715_, lean_object* v_x_716_, lean_object* v_x_717_, lean_object* v_x_718_){
_start:
{
lean_object* v___x_719_; 
v___x_719_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_Sym_getCongrInfo_spec__1_spec__2_spec__4_spec__5___redArg(v_x_715_, v_x_716_, v_x_717_, v_x_718_);
return v___x_719_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(lean_object* v_a_722_, lean_object* v_a_723_){
_start:
{
if (lean_obj_tag(v_a_722_) == 0)
{
lean_object* v___x_724_; 
v___x_724_ = l_List_reverse___redArg(v_a_723_);
return v___x_724_;
}
else
{
lean_object* v_head_725_; lean_object* v_tail_726_; lean_object* v___x_728_; uint8_t v_isShared_729_; uint8_t v_isSharedCheck_741_; 
v_head_725_ = lean_ctor_get(v_a_722_, 0);
v_tail_726_ = lean_ctor_get(v_a_722_, 1);
v_isSharedCheck_741_ = !lean_is_exclusive(v_a_722_);
if (v_isSharedCheck_741_ == 0)
{
v___x_728_ = v_a_722_;
v_isShared_729_ = v_isSharedCheck_741_;
goto v_resetjp_727_;
}
else
{
lean_inc(v_tail_726_);
lean_inc(v_head_725_);
lean_dec(v_a_722_);
v___x_728_ = lean_box(0);
v_isShared_729_ = v_isSharedCheck_741_;
goto v_resetjp_727_;
}
v_resetjp_727_:
{
lean_object* v___y_731_; uint8_t v___x_738_; 
v___x_738_ = lean_unbox(v_head_725_);
lean_dec(v_head_725_);
if (v___x_738_ == 0)
{
lean_object* v___x_739_; 
v___x_739_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__0));
v___y_731_ = v___x_739_;
goto v___jp_730_;
}
else
{
lean_object* v___x_740_; 
v___x_740_ = ((lean_object*)(l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0___closed__1));
v___y_731_ = v___x_740_;
goto v___jp_730_;
}
v___jp_730_:
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_735_; 
lean_inc_ref(v___y_731_);
v___x_732_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_732_, 0, v___y_731_);
v___x_733_ = l_Lean_MessageData_ofFormat(v___x_732_);
if (v_isShared_729_ == 0)
{
lean_ctor_set(v___x_728_, 1, v_a_723_);
lean_ctor_set(v___x_728_, 0, v___x_733_);
v___x_735_ = v___x_728_;
goto v_reusejp_734_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_733_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v_a_723_);
v___x_735_ = v_reuseFailAlloc_737_;
goto v_reusejp_734_;
}
v_reusejp_734_:
{
v_a_722_ = v_tail_726_;
v_a_723_ = v___x_735_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2(void){
_start:
{
lean_object* v___x_745_; lean_object* v___x_746_; 
v___x_745_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__1));
v___x_746_ = l_Lean_MessageData_ofFormat(v___x_745_);
return v___x_746_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4(void){
_start:
{
lean_object* v___x_748_; lean_object* v___x_749_; 
v___x_748_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__3));
v___x_749_ = l_Lean_stringToMessageData(v___x_748_);
return v___x_749_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6(void){
_start:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__5));
v___x_752_ = l_Lean_stringToMessageData(v___x_751_);
return v___x_752_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8(void){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; 
v___x_754_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__7));
v___x_755_ = l_Lean_stringToMessageData(v___x_754_);
return v___x_755_;
}
}
static lean_object* _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10(void){
_start:
{
lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_757_ = ((lean_object*)(l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__9));
v___x_758_ = l_Lean_stringToMessageData(v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData(lean_object* v_x_759_){
_start:
{
switch(lean_obj_tag(v_x_759_))
{
case 0:
{
lean_object* v___x_760_; 
v___x_760_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__2);
return v___x_760_;
}
case 1:
{
lean_object* v_prefixSize_761_; lean_object* v_suffixSize_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_779_; 
v_prefixSize_761_ = lean_ctor_get(v_x_759_, 0);
v_suffixSize_762_ = lean_ctor_get(v_x_759_, 1);
v_isSharedCheck_779_ = !lean_is_exclusive(v_x_759_);
if (v_isSharedCheck_779_ == 0)
{
v___x_764_ = v_x_759_;
v_isShared_765_ = v_isSharedCheck_779_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_suffixSize_762_);
lean_inc(v_prefixSize_761_);
lean_dec(v_x_759_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_779_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_766_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__4);
v___x_767_ = l_Nat_reprFast(v_prefixSize_761_);
v___x_768_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_768_, 0, v___x_767_);
v___x_769_ = l_Lean_MessageData_ofFormat(v___x_768_);
if (v_isShared_765_ == 0)
{
lean_ctor_set_tag(v___x_764_, 7);
lean_ctor_set(v___x_764_, 1, v___x_769_);
lean_ctor_set(v___x_764_, 0, v___x_766_);
v___x_771_ = v___x_764_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_778_; 
v_reuseFailAlloc_778_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_778_, 0, v___x_766_);
lean_ctor_set(v_reuseFailAlloc_778_, 1, v___x_769_);
v___x_771_ = v_reuseFailAlloc_778_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; 
v___x_772_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__6);
v___x_773_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_773_, 0, v___x_771_);
lean_ctor_set(v___x_773_, 1, v___x_772_);
v___x_774_ = l_Nat_reprFast(v_suffixSize_762_);
v___x_775_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_775_, 0, v___x_774_);
v___x_776_ = l_Lean_MessageData_ofFormat(v___x_775_);
v___x_777_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_777_, 0, v___x_773_);
lean_ctor_set(v___x_777_, 1, v___x_776_);
return v___x_777_;
}
}
}
case 2:
{
lean_object* v_rewritable_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v_rewritable_780_ = lean_ctor_get(v_x_759_, 0);
lean_inc_ref(v_rewritable_780_);
lean_dec_ref_known(v_x_759_, 1);
v___x_781_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__8);
v___x_782_ = lean_array_to_list(v_rewritable_780_);
v___x_783_ = lean_box(0);
v___x_784_ = l_List_mapTR_loop___at___00__private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData_spec__0(v___x_782_, v___x_783_);
v___x_785_ = l_Lean_MessageData_ofList(v___x_784_);
v___x_786_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_786_, 0, v___x_781_);
lean_ctor_set(v___x_786_, 1, v___x_785_);
return v___x_786_;
}
default: 
{
lean_object* v_thm_787_; lean_object* v_proof_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; 
v_thm_787_ = lean_ctor_get(v_x_759_, 0);
lean_inc_ref(v_thm_787_);
lean_dec_ref_known(v_x_759_, 1);
v_proof_788_ = lean_ctor_get(v_thm_787_, 1);
lean_inc_ref(v_proof_788_);
lean_dec_ref(v_thm_787_);
v___x_789_ = lean_obj_once(&l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10, &l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10_once, _init_l___private_Lean_Meta_Sym_Simp_CongrInfo_0__Lean_Meta_Sym_CongrInfo_toMessageData___closed__10);
v___x_790_ = l_Lean_MessageData_ofExpr(v_proof_788_);
v___x_791_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_791_, 0, v___x_789_);
lean_ctor_set(v___x_791_, 1, v___x_790_);
return v___x_791_;
}
}
}
}
lean_object* runtime_initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Sym_SymM(uint8_t builtin);
lean_object* initialize_Lean_Meta_FunInfo(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Sym_Simp_CongrInfo(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Sym_SymM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_FunInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Sym_Simp_CongrInfo(builtin);
}
#ifdef __cplusplus
}
#endif
