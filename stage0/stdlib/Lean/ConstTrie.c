// Lean compiler output
// Module: Lean.ConstTrie
// Imports: public import Init.System.IO public import Init.Data.Option.BasicAux import Lean.Data.Name import Std.Data.HashMap.Basic import Std.Data.HashSet.Basic import Init.Data.Array.QSort import Init.While import Init.Omega import Init.Data.Array.Lemmas import Init.Data.Array.Monadic import Init.Data.Array.Mem
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
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_thunk_get_own(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint8_t lean_uint64_dec_lt(uint64_t, uint64_t);
uint8_t lean_uint64_dec_eq(uint64_t, uint64_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_thunk(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
uint8_t lean_name_eq(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* l_Lean_Name_getNumParts(lean_object*);
uint64_t lean_uint64_land(uint64_t, uint64_t);
lean_object* l_outOfBounds___redArg(lean_object*);
lean_object* l_mkPanicMessageWithDecl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_panic___redArg(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ExceptT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_instMonad___redArg___lam__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_pure(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_StateT_bind(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedConstTrie___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedConstTrie___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedConstTrie___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedConstTrie___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedConstTrie___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedConstTrie___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedConstTrie___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedConstTrie___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedConstTrie___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_prefixesOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0 = (const lean_object*)&l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0_value;
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__0;
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__1;
static lean_once_cell_t l_Lean_ConstTrie_ofArrays___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofArrays___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_ConstTrie_ofNames___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ConstTrie_ofNames___closed__0;
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl;
lean_object* lean_imported_consts_cache_new();
LEAN_EXPORT lean_object* l_Lean_LookupCache_new___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedImportedTree___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedImportedTree___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedImportedTree___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedImportedTree___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedImportedTree___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImportedTree___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree(lean_object*);
static const lean_ctor_object l_Lean_instInhabitedImportedConsts___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedImportedTree___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedImportedConsts___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedImportedConsts___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedImportedConsts___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedImportedConsts___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedImportedConsts___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedImportedConsts___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0(lean_object*, lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_ImportedConsts_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ImportedConsts_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object*, lean_object*);
lean_object* lean_imported_extra_consts_find_entry_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraEntryCachedImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object*, lean_object*);
lean_object* lean_imported_extra_consts_find_mod_idx_cached(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraModIdxCachedImpl___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(lean_object*, uint64_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather(lean_object*, lean_object*, lean_object*, uint64_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__1_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__2_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__8_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__3_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__4_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__5_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__6_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9_value;
static const lean_ctor_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__9_value),((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__7_value)}};
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2, .m_arity = 4, .m_num_fixed = 1, .m_objs = {((lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10_value)} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11_value;
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*0 + 8, .m_other = 0, .m_tag = 0}, .m_objs = {LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
LEAN_EXPORT const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1_value;
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0 = (const lean_object*)&l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object*, lean_object*, lean_object*, size_t, size_t, uint64_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___boxed, .m_arity = 2, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0 = (const lean_object*)&l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object*, lean_object*);
static const lean_array_object l_Lean_ImportedConsts_toArray___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_ImportedConsts_toArray___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_toArray___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Init.Data.Option.BasicAux"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Option.get!"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1_value;
static const lean_string_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "value is none"};
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2_value;
static lean_once_cell_t l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ImportedConsts_find_x3f___redArg, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0_value;
static const lean_closure_object l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1 = (const lean_object*)&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_ConstTrie_ctorIdx___impl___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl(lean_object* v_00_u03b1_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_tag_nat(v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorIdx___impl___boxed(lean_object* v_00_u03b1_8_, lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_ConstTrie_ctorIdx___impl(v_00_u03b1_8_, v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
switch(lean_obj_tag(v_t_11_))
{
case 0:
{
lean_object* v_key_13_; lean_object* v_val_14_; lean_object* v___x_15_; 
v_key_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_key_13_);
v_val_14_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_val_14_);
lean_dec_ref_known(v_t_11_, 2);
v___x_15_ = lean_apply_2(v_k_12_, v_key_13_, v_val_14_);
return v___x_15_;
}
case 1:
{
lean_object* v_key_16_; lean_object* v_children_17_; lean_object* v___x_18_; 
v_key_16_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_key_16_);
v_children_17_ = lean_ctor_get(v_t_11_, 1);
lean_inc_ref(v_children_17_);
lean_dec_ref_known(v_t_11_, 2);
v___x_18_ = lean_apply_2(v_k_12_, v_key_16_, v_children_17_);
return v___x_18_;
}
default: 
{
lean_object* v_key_19_; lean_object* v_val_20_; lean_object* v_children_21_; lean_object* v___x_22_; 
v_key_19_ = lean_ctor_get(v_t_11_, 0);
lean_inc(v_key_19_);
v_val_20_ = lean_ctor_get(v_t_11_, 1);
lean_inc(v_val_20_);
v_children_21_ = lean_ctor_get(v_t_11_, 2);
lean_inc_ref(v_children_21_);
lean_dec_ref_known(v_t_11_, 3);
v___x_22_ = lean_apply_3(v_k_12_, v_key_19_, v_val_20_, v_children_21_);
return v___x_22_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim(lean_object* v_00_u03b1_23_, lean_object* v_motive__1_24_, lean_object* v_ctorIdx_25_, lean_object* v_t_26_, lean_object* v_h_27_, lean_object* v_k_28_){
_start:
{
lean_object* v___x_29_; 
v___x_29_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_26_, v_k_28_);
return v___x_29_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ctorElim___boxed(lean_object* v_00_u03b1_30_, lean_object* v_motive__1_31_, lean_object* v_ctorIdx_32_, lean_object* v_t_33_, lean_object* v_h_34_, lean_object* v_k_35_){
_start:
{
lean_object* v_res_36_; 
v_res_36_ = l_Lean_ConstTrie_ctorElim(v_00_u03b1_30_, v_motive__1_31_, v_ctorIdx_32_, v_t_33_, v_h_34_, v_k_35_);
lean_dec(v_ctorIdx_32_);
return v_res_36_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim___redArg(lean_object* v_t_37_, lean_object* v_leaf_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_37_, v_leaf_38_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_leaf_elim(lean_object* v_00_u03b1_40_, lean_object* v_motive__1_41_, lean_object* v_t_42_, lean_object* v_h_43_, lean_object* v_leaf_44_){
_start:
{
lean_object* v___x_45_; 
v___x_45_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_42_, v_leaf_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim___redArg(lean_object* v_t_46_, lean_object* v_inner_47_){
_start:
{
lean_object* v___x_48_; 
v___x_48_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_46_, v_inner_47_);
return v___x_48_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_inner_elim(lean_object* v_00_u03b1_49_, lean_object* v_motive__1_50_, lean_object* v_t_51_, lean_object* v_h_52_, lean_object* v_inner_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_51_, v_inner_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim___redArg(lean_object* v_t_55_, lean_object* v_node_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_55_, v_node_56_);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_node_elim(lean_object* v_00_u03b1_58_, lean_object* v_motive__1_59_, lean_object* v_t_60_, lean_object* v_h_61_, lean_object* v_node_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = l_Lean_ConstTrie_ctorElim___redArg(v_t_60_, v_node_62_);
return v___x_63_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg(){
_start:
{
lean_object* v___x_70_; 
v___x_70_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__1));
return v___x_70_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie___redArg___boxed(lean_object* v___dummy_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_instInhabitedConstTrie___redArg();
return v_res_72_;
}
}
static lean_object* _init_l_Lean_instInhabitedConstTrie___closed__0(void){
_start:
{
lean_object* v___x_73_; 
v___x_73_ = l_Lean_instInhabitedConstTrie___redArg();
return v___x_73_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedConstTrie(lean_object* v_00_u03b1_74_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
return v___x_75_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_lastPartEq(lean_object* v_x_76_, lean_object* v_x_77_){
_start:
{
switch(lean_obj_tag(v_x_76_))
{
case 0:
{
if (lean_obj_tag(v_x_77_) == 0)
{
uint8_t v___x_78_; 
v___x_78_ = 1;
return v___x_78_;
}
else
{
uint8_t v___x_79_; 
v___x_79_ = 0;
return v___x_79_;
}
}
case 1:
{
if (lean_obj_tag(v_x_77_) == 1)
{
lean_object* v_str_80_; lean_object* v_str_81_; uint8_t v___x_82_; 
v_str_80_ = lean_ctor_get(v_x_76_, 1);
v_str_81_ = lean_ctor_get(v_x_77_, 1);
v___x_82_ = lean_string_dec_eq(v_str_80_, v_str_81_);
return v___x_82_;
}
else
{
uint8_t v___x_83_; 
v___x_83_ = 0;
return v___x_83_;
}
}
default: 
{
if (lean_obj_tag(v_x_77_) == 2)
{
lean_object* v_i_84_; lean_object* v_i_85_; uint8_t v___x_86_; 
v_i_84_ = lean_ctor_get(v_x_76_, 1);
v_i_85_ = lean_ctor_get(v_x_77_, 1);
v___x_86_ = lean_nat_dec_eq(v_i_84_, v_i_85_);
return v___x_86_;
}
else
{
uint8_t v___x_87_; 
v___x_87_ = 0;
return v___x_87_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_lastPartEq___boxed(lean_object* v_x_88_, lean_object* v_x_89_){
_start:
{
uint8_t v_res_90_; lean_object* v_r_91_; 
v_res_90_ = l___private_Lean_ConstTrie_0__Lean_lastPartEq(v_x_88_, v_x_89_);
lean_dec(v_x_89_);
lean_dec(v_x_88_);
v_r_91_ = lean_box(v_res_90_);
return v_r_91_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(lean_object* v_inst_92_, lean_object* v_cs_93_, lean_object* v_keyOf_94_, uint64_t v_h_95_, lean_object* v_lo_96_, lean_object* v_hi_97_){
_start:
{
uint8_t v___x_98_; 
v___x_98_ = lean_nat_dec_lt(v_lo_96_, v_hi_97_);
if (v___x_98_ == 0)
{
lean_dec(v_hi_97_);
lean_dec_ref(v_keyOf_94_);
return v_lo_96_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v_mid_101_; uint64_t v___y_103_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_99_ = lean_nat_add(v_lo_96_, v_hi_97_);
v___x_100_ = lean_unsigned_to_nat(1u);
v_mid_101_ = lean_nat_shiftr(v___x_99_, v___x_100_);
lean_dec(v___x_99_);
v___x_108_ = lean_array_get_borrowed(v_inst_92_, v_cs_93_, v_mid_101_);
lean_inc_ref(v_keyOf_94_);
lean_inc(v___x_108_);
v___x_109_ = lean_apply_1(v_keyOf_94_, v___x_108_);
if (lean_obj_tag(v___x_109_) == 0)
{
uint64_t v___x_110_; 
v___x_110_ = 1723ULL;
v___y_103_ = v___x_110_;
goto v___jp_102_;
}
else
{
uint64_t v_hash_111_; 
v_hash_111_ = lean_ctor_get_uint64(v___x_109_, sizeof(void*)*2);
lean_dec(v___x_109_);
v___y_103_ = v_hash_111_;
goto v___jp_102_;
}
v___jp_102_:
{
uint8_t v___x_104_; 
v___x_104_ = lean_uint64_dec_lt(v___y_103_, v_h_95_);
if (v___x_104_ == 0)
{
lean_dec(v_hi_97_);
v_hi_97_ = v_mid_101_;
goto _start;
}
else
{
lean_object* v___x_106_; 
lean_dec(v_lo_96_);
v___x_106_ = lean_nat_add(v_mid_101_, v___x_100_);
lean_dec(v_mid_101_);
v_lo_96_ = v___x_106_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg___boxed(lean_object* v_inst_112_, lean_object* v_cs_113_, lean_object* v_keyOf_114_, lean_object* v_h_115_, lean_object* v_lo_116_, lean_object* v_hi_117_){
_start:
{
uint64_t v_h_boxed_118_; lean_object* v_res_119_; 
v_h_boxed_118_ = lean_unbox_uint64(v_h_115_);
lean_dec_ref(v_h_115_);
v_res_119_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(v_inst_112_, v_cs_113_, v_keyOf_114_, v_h_boxed_118_, v_lo_116_, v_hi_117_);
lean_dec_ref(v_cs_113_);
lean_dec(v_inst_112_);
return v_res_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound(lean_object* v_00_u03b2_120_, lean_object* v_inst_121_, lean_object* v_cs_122_, lean_object* v_keyOf_123_, uint64_t v_h_124_, lean_object* v_lo_125_, lean_object* v_hi_126_){
_start:
{
lean_object* v___x_127_; 
v___x_127_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(v_inst_121_, v_cs_122_, v_keyOf_123_, v_h_124_, v_lo_125_, v_hi_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___boxed(lean_object* v_00_u03b2_128_, lean_object* v_inst_129_, lean_object* v_cs_130_, lean_object* v_keyOf_131_, lean_object* v_h_132_, lean_object* v_lo_133_, lean_object* v_hi_134_){
_start:
{
uint64_t v_h_boxed_135_; lean_object* v_res_136_; 
v_h_boxed_135_ = lean_unbox_uint64(v_h_132_);
lean_dec_ref(v_h_132_);
v_res_136_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound(v_00_u03b2_128_, v_inst_129_, v_cs_130_, v_keyOf_131_, v_h_boxed_135_, v_lo_133_, v_hi_134_);
lean_dec_ref(v_cs_130_);
lean_dec(v_inst_129_);
return v_res_136_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(lean_object* v_inst_137_, lean_object* v_cs_138_, lean_object* v_keyOf_139_, lean_object* v_k_140_, uint64_t v_h_141_, lean_object* v_j_142_){
_start:
{
uint8_t v___y_148_; lean_object* v___x_150_; uint8_t v___x_151_; 
v___x_150_ = lean_array_get_size(v_cs_138_);
v___x_151_ = lean_nat_dec_lt(v_j_142_, v___x_150_);
if (v___x_151_ == 0)
{
lean_object* v___x_152_; 
lean_dec(v_j_142_);
lean_dec_ref(v_keyOf_139_);
v___x_152_ = lean_box(0);
return v___x_152_;
}
else
{
lean_object* v___x_153_; lean_object* v_c_154_; uint64_t v___y_156_; 
v___x_153_ = lean_array_get_borrowed(v_inst_137_, v_cs_138_, v_j_142_);
lean_inc_ref(v_keyOf_139_);
lean_inc(v___x_153_);
v_c_154_ = lean_apply_1(v_keyOf_139_, v___x_153_);
if (lean_obj_tag(v_c_154_) == 0)
{
uint64_t v___x_166_; 
v___x_166_ = 1723ULL;
v___y_156_ = v___x_166_;
goto v___jp_155_;
}
else
{
uint64_t v_hash_167_; 
v_hash_167_ = lean_ctor_get_uint64(v_c_154_, sizeof(void*)*2);
v___y_156_ = v_hash_167_;
goto v___jp_155_;
}
v___jp_155_:
{
uint8_t v___x_157_; 
v___x_157_ = lean_uint64_dec_eq(v___y_156_, v_h_141_);
if (v___x_157_ == 0)
{
lean_object* v___x_158_; 
lean_dec(v_c_154_);
lean_dec(v_j_142_);
lean_dec_ref(v_keyOf_139_);
v___x_158_ = lean_box(0);
return v___x_158_;
}
else
{
switch(lean_obj_tag(v_c_154_))
{
case 0:
{
if (lean_obj_tag(v_k_140_) == 0)
{
lean_object* v___x_159_; 
lean_dec_ref(v_keyOf_139_);
v___x_159_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_159_, 0, v_j_142_);
return v___x_159_;
}
else
{
goto v___jp_143_;
}
}
case 1:
{
if (lean_obj_tag(v_k_140_) == 1)
{
lean_object* v_str_160_; lean_object* v_str_161_; uint8_t v___x_162_; 
v_str_160_ = lean_ctor_get(v_c_154_, 1);
lean_inc_ref(v_str_160_);
lean_dec_ref_known(v_c_154_, 2);
v_str_161_ = lean_ctor_get(v_k_140_, 1);
v___x_162_ = lean_string_dec_eq(v_str_160_, v_str_161_);
lean_dec_ref(v_str_160_);
v___y_148_ = v___x_162_;
goto v___jp_147_;
}
else
{
lean_dec_ref_known(v_c_154_, 2);
goto v___jp_143_;
}
}
default: 
{
if (lean_obj_tag(v_k_140_) == 2)
{
lean_object* v_i_163_; lean_object* v_i_164_; uint8_t v___x_165_; 
v_i_163_ = lean_ctor_get(v_c_154_, 1);
lean_inc(v_i_163_);
lean_dec_ref_known(v_c_154_, 2);
v_i_164_ = lean_ctor_get(v_k_140_, 1);
v___x_165_ = lean_nat_dec_eq(v_i_163_, v_i_164_);
lean_dec(v_i_163_);
v___y_148_ = v___x_165_;
goto v___jp_147_;
}
else
{
lean_dec_ref_known(v_c_154_, 2);
goto v___jp_143_;
}
}
}
}
}
}
v___jp_143_:
{
lean_object* v___x_144_; lean_object* v___x_145_; 
v___x_144_ = lean_unsigned_to_nat(1u);
v___x_145_ = lean_nat_add(v_j_142_, v___x_144_);
lean_dec(v_j_142_);
v_j_142_ = v___x_145_;
goto _start;
}
v___jp_147_:
{
if (v___y_148_ == 0)
{
goto v___jp_143_;
}
else
{
lean_object* v___x_149_; 
lean_dec_ref(v_keyOf_139_);
v___x_149_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_149_, 0, v_j_142_);
return v___x_149_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg___boxed(lean_object* v_inst_168_, lean_object* v_cs_169_, lean_object* v_keyOf_170_, lean_object* v_k_171_, lean_object* v_h_172_, lean_object* v_j_173_){
_start:
{
uint64_t v_h_boxed_174_; lean_object* v_res_175_; 
v_h_boxed_174_ = lean_unbox_uint64(v_h_172_);
lean_dec_ref(v_h_172_);
v_res_175_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(v_inst_168_, v_cs_169_, v_keyOf_170_, v_k_171_, v_h_boxed_174_, v_j_173_);
lean_dec(v_k_171_);
lean_dec_ref(v_cs_169_);
lean_dec(v_inst_168_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun(lean_object* v_00_u03b2_176_, lean_object* v_inst_177_, lean_object* v_cs_178_, lean_object* v_keyOf_179_, lean_object* v_k_180_, uint64_t v_h_181_, lean_object* v_j_182_){
_start:
{
lean_object* v___x_183_; 
v___x_183_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(v_inst_177_, v_cs_178_, v_keyOf_179_, v_k_180_, v_h_181_, v_j_182_);
return v___x_183_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___boxed(lean_object* v_00_u03b2_184_, lean_object* v_inst_185_, lean_object* v_cs_186_, lean_object* v_keyOf_187_, lean_object* v_k_188_, lean_object* v_h_189_, lean_object* v_j_190_){
_start:
{
uint64_t v_h_boxed_191_; lean_object* v_res_192_; 
v_h_boxed_191_ = lean_unbox_uint64(v_h_189_);
lean_dec_ref(v_h_189_);
v_res_192_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun(v_00_u03b2_184_, v_inst_185_, v_cs_186_, v_keyOf_187_, v_k_188_, v_h_boxed_191_, v_j_190_);
lean_dec(v_k_188_);
lean_dec_ref(v_cs_186_);
lean_dec(v_inst_185_);
return v_res_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(lean_object* v_inst_193_, lean_object* v_cs_194_, lean_object* v_keyOf_195_, lean_object* v_k_196_){
_start:
{
uint64_t v___y_198_; 
if (lean_obj_tag(v_k_196_) == 0)
{
uint64_t v___x_203_; 
v___x_203_ = 1723ULL;
v___y_198_ = v___x_203_;
goto v___jp_197_;
}
else
{
uint64_t v_hash_204_; 
v_hash_204_ = lean_ctor_get_uint64(v_k_196_, sizeof(void*)*2);
v___y_198_ = v_hash_204_;
goto v___jp_197_;
}
v___jp_197_:
{
lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; 
v___x_199_ = lean_unsigned_to_nat(0u);
v___x_200_ = lean_array_get_size(v_cs_194_);
lean_inc_ref(v_keyOf_195_);
v___x_201_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___redArg(v_inst_193_, v_cs_194_, v_keyOf_195_, v___y_198_, v___x_199_, v___x_200_);
v___x_202_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___redArg(v_inst_193_, v_cs_194_, v_keyOf_195_, v_k_196_, v___y_198_, v___x_201_);
return v___x_202_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg___boxed(lean_object* v_inst_205_, lean_object* v_cs_206_, lean_object* v_keyOf_207_, lean_object* v_k_208_){
_start:
{
lean_object* v_res_209_; 
v_res_209_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(v_inst_205_, v_cs_206_, v_keyOf_207_, v_k_208_);
lean_dec(v_k_208_);
lean_dec_ref(v_cs_206_);
lean_dec(v_inst_205_);
return v_res_209_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f(lean_object* v_00_u03b2_210_, lean_object* v_inst_211_, lean_object* v_cs_212_, lean_object* v_keyOf_213_, lean_object* v_k_214_){
_start:
{
lean_object* v___x_215_; 
v___x_215_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(v_inst_211_, v_cs_212_, v_keyOf_213_, v_k_214_);
return v___x_215_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___boxed(lean_object* v_00_u03b2_216_, lean_object* v_inst_217_, lean_object* v_cs_218_, lean_object* v_keyOf_219_, lean_object* v_k_220_){
_start:
{
lean_object* v_res_221_; 
v_res_221_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f(v_00_u03b2_216_, v_inst_217_, v_cs_218_, v_keyOf_219_, v_k_220_);
lean_dec(v_k_220_);
lean_dec_ref(v_cs_218_);
lean_dec(v_inst_217_);
return v_res_221_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_prefixesOf(lean_object* v_n_222_, lean_object* v_acc_223_){
_start:
{
if (lean_obj_tag(v_n_222_) == 0)
{
return v_acc_223_;
}
else
{
lean_object* v_pre_224_; lean_object* v___x_225_; 
v_pre_224_ = lean_ctor_get(v_n_222_, 0);
lean_inc(v_pre_224_);
v___x_225_ = lean_array_push(v_acc_223_, v_n_222_);
v_n_222_ = v_pre_224_;
v_acc_223_ = v___x_225_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg(lean_object* v_x_227_){
_start:
{
lean_object* v_key_228_; 
v_key_228_ = lean_ctor_get(v_x_227_, 0);
lean_inc(v_key_228_);
return v_key_228_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___redArg___boxed(lean_object* v_x_229_){
_start:
{
lean_object* v_res_230_; 
v_res_230_ = l_Lean_ConstTrie_key___redArg(v_x_229_);
lean_dec_ref(v_x_229_);
return v_res_230_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key(lean_object* v_00_u03b1_231_, lean_object* v_x_232_){
_start:
{
lean_object* v_key_233_; 
v_key_233_ = lean_ctor_get(v_x_232_, 0);
lean_inc(v_key_233_);
return v_key_233_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_key___boxed(lean_object* v_00_u03b1_234_, lean_object* v_x_235_){
_start:
{
lean_object* v_res_236_; 
v_res_236_ = l_Lean_ConstTrie_key(v_00_u03b1_234_, v_x_235_);
lean_dec_ref(v_x_235_);
return v_res_236_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg(lean_object* v_x_237_){
_start:
{
if (lean_obj_tag(v_x_237_) == 1)
{
lean_object* v___x_238_; 
v___x_238_ = lean_box(0);
return v___x_238_;
}
else
{
lean_object* v_val_239_; lean_object* v___x_240_; 
v_val_239_ = lean_ctor_get(v_x_237_, 1);
lean_inc(v_val_239_);
v___x_240_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_240_, 0, v_val_239_);
return v___x_240_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___redArg___boxed(lean_object* v_x_241_){
_start:
{
lean_object* v_res_242_; 
v_res_242_ = l_Lean_ConstTrie_val_x3f___redArg(v_x_241_);
lean_dec_ref(v_x_241_);
return v_res_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f(lean_object* v_00_u03b1_243_, lean_object* v_x_244_){
_start:
{
if (lean_obj_tag(v_x_244_) == 1)
{
lean_object* v___x_245_; 
v___x_245_ = lean_box(0);
return v___x_245_;
}
else
{
lean_object* v_val_246_; lean_object* v___x_247_; 
v_val_246_ = lean_ctor_get(v_x_244_, 1);
lean_inc(v_val_246_);
v___x_247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_247_, 0, v_val_246_);
return v___x_247_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_val_x3f___boxed(lean_object* v_00_u03b1_248_, lean_object* v_x_249_){
_start:
{
lean_object* v_res_250_; 
v_res_250_ = l_Lean_ConstTrie_val_x3f(v_00_u03b1_248_, v_x_249_);
lean_dec_ref(v_x_249_);
return v_res_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg(lean_object* v_x_251_){
_start:
{
switch(lean_obj_tag(v_x_251_))
{
case 0:
{
lean_object* v___x_252_; 
v___x_252_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
return v___x_252_;
}
case 1:
{
lean_object* v_children_253_; 
v_children_253_ = lean_ctor_get(v_x_251_, 1);
lean_inc_ref(v_children_253_);
return v_children_253_;
}
default: 
{
lean_object* v_children_254_; 
v_children_254_ = lean_ctor_get(v_x_251_, 2);
lean_inc_ref(v_children_254_);
return v_children_254_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___redArg___boxed(lean_object* v_x_255_){
_start:
{
lean_object* v_res_256_; 
v_res_256_ = l_Lean_ConstTrie_children___redArg(v_x_255_);
lean_dec_ref(v_x_255_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children(lean_object* v_00_u03b1_257_, lean_object* v_x_258_){
_start:
{
switch(lean_obj_tag(v_x_258_))
{
case 0:
{
lean_object* v___x_259_; 
v___x_259_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
return v___x_259_;
}
case 1:
{
lean_object* v_children_260_; 
v_children_260_ = lean_ctor_get(v_x_258_, 1);
lean_inc_ref(v_children_260_);
return v_children_260_;
}
default: 
{
lean_object* v_children_261_; 
v_children_261_ = lean_ctor_get(v_x_258_, 2);
lean_inc_ref(v_children_261_);
return v_children_261_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_children___boxed(lean_object* v_00_u03b1_262_, lean_object* v_x_263_){
_start:
{
lean_object* v_res_264_; 
v_res_264_ = l_Lean_ConstTrie_children(v_00_u03b1_262_, v_x_263_);
lean_dec_ref(v_x_263_);
return v_res_264_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg(lean_object* v_key_265_, lean_object* v_val_x3f_266_, lean_object* v_children_267_){
_start:
{
if (lean_obj_tag(v_val_x3f_266_) == 0)
{
lean_object* v___x_268_; 
v___x_268_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_268_, 0, v_key_265_);
lean_ctor_set(v___x_268_, 1, v_children_267_);
return v___x_268_;
}
else
{
lean_object* v_val_269_; lean_object* v___x_270_; lean_object* v___x_271_; uint8_t v___x_272_; 
v_val_269_ = lean_ctor_get(v_val_x3f_266_, 0);
v___x_270_ = lean_array_get_size(v_children_267_);
v___x_271_ = lean_unsigned_to_nat(0u);
v___x_272_ = lean_nat_dec_eq(v___x_270_, v___x_271_);
if (v___x_272_ == 0)
{
lean_object* v___x_273_; 
lean_inc(v_val_269_);
v___x_273_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_273_, 0, v_key_265_);
lean_ctor_set(v___x_273_, 1, v_val_269_);
lean_ctor_set(v___x_273_, 2, v_children_267_);
return v___x_273_;
}
else
{
lean_object* v___x_274_; 
lean_dec_ref(v_children_267_);
lean_inc(v_val_269_);
v___x_274_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_274_, 0, v_key_265_);
lean_ctor_set(v___x_274_, 1, v_val_269_);
return v___x_274_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___redArg___boxed(lean_object* v_key_275_, lean_object* v_val_x3f_276_, lean_object* v_children_277_){
_start:
{
lean_object* v_res_278_; 
v_res_278_ = l_Lean_ConstTrie_mk___redArg(v_key_275_, v_val_x3f_276_, v_children_277_);
lean_dec(v_val_x3f_276_);
return v_res_278_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk(lean_object* v_00_u03b1_279_, lean_object* v_key_280_, lean_object* v_val_x3f_281_, lean_object* v_children_282_){
_start:
{
lean_object* v___x_283_; 
v___x_283_ = l_Lean_ConstTrie_mk___redArg(v_key_280_, v_val_x3f_281_, v_children_282_);
return v___x_283_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_mk___boxed(lean_object* v_00_u03b1_284_, lean_object* v_key_285_, lean_object* v_val_x3f_286_, lean_object* v_children_287_){
_start:
{
lean_object* v_res_288_; 
v_res_288_ = l_Lean_ConstTrie_mk(v_00_u03b1_284_, v_key_285_, v_val_x3f_286_, v_children_287_);
lean_dec(v_val_x3f_286_);
return v_res_288_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(lean_object* v_cs_289_, uint64_t v_h_290_, lean_object* v_lo_291_, lean_object* v_hi_292_){
_start:
{
uint8_t v___x_293_; 
v___x_293_ = lean_nat_dec_lt(v_lo_291_, v_hi_292_);
if (v___x_293_ == 0)
{
lean_dec(v_hi_292_);
return v_lo_291_;
}
else
{
lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v_mid_297_; uint64_t v___y_299_; lean_object* v___y_305_; lean_object* v___x_308_; lean_object* v_key_309_; 
v___x_294_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_295_ = lean_nat_add(v_lo_291_, v_hi_292_);
v___x_296_ = lean_unsigned_to_nat(1u);
v_mid_297_ = lean_nat_shiftr(v___x_295_, v___x_296_);
lean_dec(v___x_295_);
v___x_308_ = lean_array_get_borrowed(v___x_294_, v_cs_289_, v_mid_297_);
v_key_309_ = lean_ctor_get(v___x_308_, 0);
v___y_305_ = v_key_309_;
goto v___jp_304_;
v___jp_298_:
{
uint8_t v___x_300_; 
v___x_300_ = lean_uint64_dec_lt(v___y_299_, v_h_290_);
if (v___x_300_ == 0)
{
lean_dec(v_hi_292_);
v_hi_292_ = v_mid_297_;
goto _start;
}
else
{
lean_object* v___x_302_; 
lean_dec(v_lo_291_);
v___x_302_ = lean_nat_add(v_mid_297_, v___x_296_);
lean_dec(v_mid_297_);
v_lo_291_ = v___x_302_;
goto _start;
}
}
v___jp_304_:
{
if (lean_obj_tag(v___y_305_) == 0)
{
uint64_t v___x_306_; 
v___x_306_ = 1723ULL;
v___y_299_ = v___x_306_;
goto v___jp_298_;
}
else
{
uint64_t v_hash_307_; 
v_hash_307_ = lean_ctor_get_uint64(v___y_305_, sizeof(void*)*2);
v___y_299_ = v_hash_307_;
goto v___jp_298_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg___boxed(lean_object* v_cs_310_, lean_object* v_h_311_, lean_object* v_lo_312_, lean_object* v_hi_313_){
_start:
{
uint64_t v_h_boxed_314_; lean_object* v_res_315_; 
v_h_boxed_314_ = lean_unbox_uint64(v_h_311_);
lean_dec_ref(v_h_311_);
v_res_315_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_cs_310_, v_h_boxed_314_, v_lo_312_, v_hi_313_);
lean_dec_ref(v_cs_310_);
return v_res_315_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(lean_object* v_cs_316_, lean_object* v_k_317_, uint64_t v_h_318_, lean_object* v_j_319_){
_start:
{
uint8_t v___y_325_; lean_object* v___y_328_; uint64_t v___y_329_; lean_object* v___y_340_; lean_object* v___x_343_; uint8_t v___x_344_; 
v___x_343_ = lean_array_get_size(v_cs_316_);
v___x_344_ = lean_nat_dec_lt(v_j_319_, v___x_343_);
if (v___x_344_ == 0)
{
lean_object* v___x_345_; 
lean_dec(v_j_319_);
v___x_345_ = lean_box(0);
return v___x_345_;
}
else
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v_key_348_; 
v___x_346_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_347_ = lean_array_get_borrowed(v___x_346_, v_cs_316_, v_j_319_);
v_key_348_ = lean_ctor_get(v___x_347_, 0);
v___y_340_ = v_key_348_;
goto v___jp_339_;
}
v___jp_320_:
{
lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_321_ = lean_unsigned_to_nat(1u);
v___x_322_ = lean_nat_add(v_j_319_, v___x_321_);
lean_dec(v_j_319_);
v_j_319_ = v___x_322_;
goto _start;
}
v___jp_324_:
{
if (v___y_325_ == 0)
{
goto v___jp_320_;
}
else
{
lean_object* v___x_326_; 
v___x_326_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_326_, 0, v_j_319_);
return v___x_326_;
}
}
v___jp_327_:
{
uint8_t v___x_330_; 
v___x_330_ = lean_uint64_dec_eq(v___y_329_, v_h_318_);
if (v___x_330_ == 0)
{
lean_object* v___x_331_; 
lean_dec(v_j_319_);
v___x_331_ = lean_box(0);
return v___x_331_;
}
else
{
switch(lean_obj_tag(v___y_328_))
{
case 0:
{
if (lean_obj_tag(v_k_317_) == 0)
{
lean_object* v___x_332_; 
v___x_332_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_332_, 0, v_j_319_);
return v___x_332_;
}
else
{
goto v___jp_320_;
}
}
case 1:
{
if (lean_obj_tag(v_k_317_) == 1)
{
lean_object* v_str_333_; lean_object* v_str_334_; uint8_t v___x_335_; 
v_str_333_ = lean_ctor_get(v___y_328_, 1);
v_str_334_ = lean_ctor_get(v_k_317_, 1);
v___x_335_ = lean_string_dec_eq(v_str_333_, v_str_334_);
v___y_325_ = v___x_335_;
goto v___jp_324_;
}
else
{
goto v___jp_320_;
}
}
default: 
{
if (lean_obj_tag(v_k_317_) == 2)
{
lean_object* v_i_336_; lean_object* v_i_337_; uint8_t v___x_338_; 
v_i_336_ = lean_ctor_get(v___y_328_, 1);
v_i_337_ = lean_ctor_get(v_k_317_, 1);
v___x_338_ = lean_nat_dec_eq(v_i_336_, v_i_337_);
v___y_325_ = v___x_338_;
goto v___jp_324_;
}
else
{
goto v___jp_320_;
}
}
}
}
}
v___jp_339_:
{
if (lean_obj_tag(v___y_340_) == 0)
{
uint64_t v___x_341_; 
v___x_341_ = 1723ULL;
v___y_328_ = v___y_340_;
v___y_329_ = v___x_341_;
goto v___jp_327_;
}
else
{
uint64_t v_hash_342_; 
v_hash_342_ = lean_ctor_get_uint64(v___y_340_, sizeof(void*)*2);
v___y_328_ = v___y_340_;
v___y_329_ = v_hash_342_;
goto v___jp_327_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg___boxed(lean_object* v_cs_349_, lean_object* v_k_350_, lean_object* v_h_351_, lean_object* v_j_352_){
_start:
{
uint64_t v_h_boxed_353_; lean_object* v_res_354_; 
v_h_boxed_353_ = lean_unbox_uint64(v_h_351_);
lean_dec_ref(v_h_351_);
v_res_354_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(v_cs_349_, v_k_350_, v_h_boxed_353_, v_j_352_);
lean_dec(v_k_350_);
lean_dec_ref(v_cs_349_);
return v_res_354_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(lean_object* v_cs_355_, lean_object* v_k_356_){
_start:
{
uint64_t v___y_358_; 
if (lean_obj_tag(v_k_356_) == 0)
{
uint64_t v___x_363_; 
v___x_363_ = 1723ULL;
v___y_358_ = v___x_363_;
goto v___jp_357_;
}
else
{
uint64_t v_hash_364_; 
v_hash_364_ = lean_ctor_get_uint64(v_k_356_, sizeof(void*)*2);
v___y_358_ = v_hash_364_;
goto v___jp_357_;
}
v___jp_357_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; 
v___x_359_ = lean_unsigned_to_nat(0u);
v___x_360_ = lean_array_get_size(v_cs_355_);
v___x_361_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_cs_355_, v___y_358_, v___x_359_, v___x_360_);
v___x_362_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(v_cs_355_, v_k_356_, v___y_358_, v___x_361_);
return v___x_362_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg___boxed(lean_object* v_cs_365_, lean_object* v_k_366_){
_start:
{
lean_object* v_res_367_; 
v_res_367_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_cs_365_, v_k_366_);
lean_dec(v_k_366_);
lean_dec_ref(v_cs_365_);
return v_res_367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(lean_object* v_t_368_, lean_object* v_path_369_, lean_object* v_i_370_){
_start:
{
lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v_cs_374_; 
v___x_371_ = lean_box(0);
v___x_372_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
switch(lean_obj_tag(v_t_368_))
{
case 0:
{
lean_object* v_val_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v_val_383_ = lean_ctor_get(v_t_368_, 1);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = lean_nat_dec_eq(v_i_370_, v___x_384_);
lean_dec(v_i_370_);
if (v___x_385_ == 0)
{
lean_object* v___x_386_; 
v___x_386_ = lean_box(0);
return v___x_386_;
}
else
{
lean_object* v___x_387_; 
lean_inc(v_val_383_);
v___x_387_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_387_, 0, v_val_383_);
return v___x_387_;
}
}
case 1:
{
lean_object* v_children_388_; lean_object* v___x_389_; uint8_t v___x_390_; 
v_children_388_ = lean_ctor_get(v_t_368_, 1);
v___x_389_ = lean_unsigned_to_nat(0u);
v___x_390_ = lean_nat_dec_eq(v_i_370_, v___x_389_);
if (v___x_390_ == 0)
{
v_cs_374_ = v_children_388_;
goto v___jp_373_;
}
else
{
lean_object* v___x_391_; 
lean_dec(v_i_370_);
v___x_391_ = lean_box(0);
return v___x_391_;
}
}
default: 
{
lean_object* v_val_392_; lean_object* v_children_393_; lean_object* v___x_394_; uint8_t v___x_395_; 
v_val_392_ = lean_ctor_get(v_t_368_, 1);
v_children_393_ = lean_ctor_get(v_t_368_, 2);
v___x_394_ = lean_unsigned_to_nat(0u);
v___x_395_ = lean_nat_dec_eq(v_i_370_, v___x_394_);
if (v___x_395_ == 0)
{
v_cs_374_ = v_children_393_;
goto v___jp_373_;
}
else
{
lean_object* v___x_396_; 
lean_dec(v_i_370_);
lean_inc(v_val_392_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v_val_392_);
return v___x_396_;
}
}
}
v___jp_373_:
{
lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_375_ = lean_unsigned_to_nat(1u);
v___x_376_ = lean_nat_sub(v_i_370_, v___x_375_);
lean_dec(v_i_370_);
v___x_377_ = lean_array_get_borrowed(v___x_371_, v_path_369_, v___x_376_);
v___x_378_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_cs_374_, v___x_377_);
if (lean_obj_tag(v___x_378_) == 0)
{
lean_object* v___x_379_; 
lean_dec(v___x_376_);
v___x_379_ = lean_box(0);
return v___x_379_;
}
else
{
lean_object* v_val_380_; lean_object* v___x_381_; 
v_val_380_ = lean_ctor_get(v___x_378_, 0);
lean_inc(v_val_380_);
lean_dec_ref_known(v___x_378_, 1);
v___x_381_ = lean_array_get_borrowed(v___x_372_, v_cs_374_, v_val_380_);
lean_dec(v_val_380_);
v_t_368_ = v___x_381_;
v_i_370_ = v___x_376_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg___boxed(lean_object* v_t_397_, lean_object* v_path_398_, lean_object* v_i_399_){
_start:
{
lean_object* v_res_400_; 
v_res_400_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_397_, v_path_398_, v_i_399_);
lean_dec_ref(v_path_398_);
lean_dec_ref(v_t_397_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(lean_object* v_00_u03b1_401_, lean_object* v_t_402_, lean_object* v_path_403_, lean_object* v_i_404_){
_start:
{
lean_object* v___x_405_; 
v___x_405_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_402_, v_path_403_, v_i_404_);
return v___x_405_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___boxed(lean_object* v_00_u03b1_406_, lean_object* v_t_407_, lean_object* v_path_408_, lean_object* v_i_409_){
_start:
{
lean_object* v_res_410_; 
v_res_410_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux(v_00_u03b1_406_, v_t_407_, v_path_408_, v_i_409_);
lean_dec_ref(v_path_408_);
lean_dec_ref(v_t_407_);
return v_res_410_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(lean_object* v_00_u03b1_411_, lean_object* v_cs_412_, lean_object* v_k_413_){
_start:
{
lean_object* v___x_414_; 
v___x_414_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___redArg(v_cs_412_, v_k_413_);
return v___x_414_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0___boxed(lean_object* v_00_u03b1_415_, lean_object* v_cs_416_, lean_object* v_k_417_){
_start:
{
lean_object* v_res_418_; 
v_res_418_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0(v_00_u03b1_415_, v_cs_416_, v_k_417_);
lean_dec(v_k_417_);
lean_dec_ref(v_cs_416_);
return v_res_418_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(lean_object* v_00_u03b1_419_, lean_object* v_cs_420_, uint64_t v_h_421_, lean_object* v_lo_422_, lean_object* v_hi_423_){
_start:
{
lean_object* v___x_424_; 
v___x_424_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___redArg(v_cs_420_, v_h_421_, v_lo_422_, v_hi_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_425_, lean_object* v_cs_426_, lean_object* v_h_427_, lean_object* v_lo_428_, lean_object* v_hi_429_){
_start:
{
uint64_t v_h_boxed_430_; lean_object* v_res_431_; 
v_h_boxed_430_ = lean_unbox_uint64(v_h_427_);
lean_dec_ref(v_h_427_);
v_res_431_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__0(v_00_u03b1_425_, v_cs_426_, v_h_boxed_430_, v_lo_428_, v_hi_429_);
lean_dec_ref(v_cs_426_);
return v_res_431_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1(lean_object* v_00_u03b1_432_, lean_object* v_cs_433_, lean_object* v_k_434_, uint64_t v_h_435_, lean_object* v_j_436_){
_start:
{
lean_object* v___x_437_; 
v___x_437_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___redArg(v_cs_433_, v_k_434_, v_h_435_, v_j_436_);
return v___x_437_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1___boxed(lean_object* v_00_u03b1_438_, lean_object* v_cs_439_, lean_object* v_k_440_, lean_object* v_h_441_, lean_object* v_j_442_){
_start:
{
uint64_t v_h_boxed_443_; lean_object* v_res_444_; 
v_h_boxed_443_ = lean_unbox_uint64(v_h_441_);
lean_dec_ref(v_h_441_);
v_res_444_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_spec__0_spec__1(v_00_u03b1_438_, v_cs_439_, v_k_440_, v_h_boxed_443_, v_j_442_);
lean_dec(v_k_440_);
lean_dec_ref(v_cs_439_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter___redArg(lean_object* v_x_445_, lean_object* v_h__1_446_, lean_object* v_h__2_447_, lean_object* v_h__3_448_){
_start:
{
switch(lean_obj_tag(v_x_445_))
{
case 0:
{
lean_object* v_key_449_; lean_object* v_val_450_; lean_object* v___x_451_; 
lean_dec(v_h__3_448_);
lean_dec(v_h__2_447_);
v_key_449_ = lean_ctor_get(v_x_445_, 0);
lean_inc(v_key_449_);
v_val_450_ = lean_ctor_get(v_x_445_, 1);
lean_inc(v_val_450_);
lean_dec_ref_known(v_x_445_, 2);
v___x_451_ = lean_apply_2(v_h__1_446_, v_key_449_, v_val_450_);
return v___x_451_;
}
case 1:
{
lean_object* v_key_452_; lean_object* v_children_453_; lean_object* v___x_454_; 
lean_dec(v_h__3_448_);
lean_dec(v_h__1_446_);
v_key_452_ = lean_ctor_get(v_x_445_, 0);
lean_inc(v_key_452_);
v_children_453_ = lean_ctor_get(v_x_445_, 1);
lean_inc_ref(v_children_453_);
lean_dec_ref_known(v_x_445_, 2);
v___x_454_ = lean_apply_2(v_h__2_447_, v_key_452_, v_children_453_);
return v___x_454_;
}
default: 
{
lean_object* v_key_455_; lean_object* v_val_456_; lean_object* v_children_457_; lean_object* v___x_458_; 
lean_dec(v_h__2_447_);
lean_dec(v_h__1_446_);
v_key_455_ = lean_ctor_get(v_x_445_, 0);
lean_inc(v_key_455_);
v_val_456_ = lean_ctor_get(v_x_445_, 1);
lean_inc(v_val_456_);
v_children_457_ = lean_ctor_get(v_x_445_, 2);
lean_inc_ref(v_children_457_);
lean_dec_ref_known(v_x_445_, 3);
v___x_458_ = lean_apply_3(v_h__3_448_, v_key_455_, v_val_456_, v_children_457_);
return v___x_458_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_key_match__1_splitter(lean_object* v_00_u03b1_459_, lean_object* v_motive_460_, lean_object* v_x_461_, lean_object* v_h__1_462_, lean_object* v_h__2_463_, lean_object* v_h__3_464_){
_start:
{
switch(lean_obj_tag(v_x_461_))
{
case 0:
{
lean_object* v_key_465_; lean_object* v_val_466_; lean_object* v___x_467_; 
lean_dec(v_h__3_464_);
lean_dec(v_h__2_463_);
v_key_465_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_key_465_);
v_val_466_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_val_466_);
lean_dec_ref_known(v_x_461_, 2);
v___x_467_ = lean_apply_2(v_h__1_462_, v_key_465_, v_val_466_);
return v___x_467_;
}
case 1:
{
lean_object* v_key_468_; lean_object* v_children_469_; lean_object* v___x_470_; 
lean_dec(v_h__3_464_);
lean_dec(v_h__1_462_);
v_key_468_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_key_468_);
v_children_469_ = lean_ctor_get(v_x_461_, 1);
lean_inc_ref(v_children_469_);
lean_dec_ref_known(v_x_461_, 2);
v___x_470_ = lean_apply_2(v_h__2_463_, v_key_468_, v_children_469_);
return v___x_470_;
}
default: 
{
lean_object* v_key_471_; lean_object* v_val_472_; lean_object* v_children_473_; lean_object* v___x_474_; 
lean_dec(v_h__2_463_);
lean_dec(v_h__1_462_);
v_key_471_ = lean_ctor_get(v_x_461_, 0);
lean_inc(v_key_471_);
v_val_472_ = lean_ctor_get(v_x_461_, 1);
lean_inc(v_val_472_);
v_children_473_ = lean_ctor_get(v_x_461_, 2);
lean_inc_ref(v_children_473_);
lean_dec_ref_known(v_x_461_, 3);
v___x_474_ = lean_apply_3(v_h__3_464_, v_key_471_, v_val_472_, v_children_473_);
return v___x_474_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter___redArg(lean_object* v_x_475_, lean_object* v_h__1_476_, lean_object* v_h__2_477_){
_start:
{
if (lean_obj_tag(v_x_475_) == 0)
{
lean_object* v___x_478_; lean_object* v___x_479_; 
lean_dec(v_h__1_476_);
v___x_478_ = lean_box(0);
v___x_479_ = lean_apply_1(v_h__2_477_, v___x_478_);
return v___x_479_;
}
else
{
lean_object* v_val_480_; lean_object* v___x_481_; 
lean_dec(v_h__2_477_);
v_val_480_ = lean_ctor_get(v_x_475_, 0);
lean_inc(v_val_480_);
lean_dec_ref_known(v_x_475_, 1);
v___x_481_ = lean_apply_1(v_h__1_476_, v_val_480_);
return v___x_481_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux_match__1_splitter(lean_object* v_motive_482_, lean_object* v_x_483_, lean_object* v_h__1_484_, lean_object* v_h__2_485_){
_start:
{
if (lean_obj_tag(v_x_483_) == 0)
{
lean_object* v___x_486_; lean_object* v___x_487_; 
lean_dec(v_h__1_484_);
v___x_486_ = lean_box(0);
v___x_487_ = lean_apply_1(v_h__2_485_, v___x_486_);
return v___x_487_;
}
else
{
lean_object* v_val_488_; lean_object* v___x_489_; 
lean_dec(v_h__2_485_);
v_val_488_ = lean_ctor_get(v_x_483_, 0);
lean_inc(v_val_488_);
lean_dec_ref_known(v_x_483_, 1);
v___x_489_ = lean_apply_1(v_h__1_484_, v_val_488_);
return v___x_489_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg(lean_object* v_t_490_, lean_object* v_n_491_){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; lean_object* v_path_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
v___x_492_ = lean_unsigned_to_nat(8u);
v___x_493_ = lean_mk_empty_array_with_capacity(v___x_492_);
v_path_494_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_491_, v___x_493_);
v___x_495_ = lean_array_get_size(v_path_494_);
v___x_496_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_t_490_, v_path_494_, v___x_495_);
lean_dec_ref(v_path_494_);
return v___x_496_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___redArg___boxed(lean_object* v_t_497_, lean_object* v_n_498_){
_start:
{
lean_object* v_res_499_; 
v_res_499_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_497_, v_n_498_);
lean_dec_ref(v_t_497_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f(lean_object* v_00_u03b1_500_, lean_object* v_t_501_, lean_object* v_n_502_){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = l_Lean_ConstTrie_find_x3f___redArg(v_t_501_, v_n_502_);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_find_x3f___boxed(lean_object* v_00_u03b1_504_, lean_object* v_t_505_, lean_object* v_n_506_){
_start:
{
lean_object* v_res_507_; 
v_res_507_ = l_Lean_ConstTrie_find_x3f(v_00_u03b1_504_, v_t_505_, v_n_506_);
lean_dec_ref(v_t_505_);
return v_res_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__2(lean_object* v_toApplicative_508_, lean_object* v_children_509_, lean_object* v_inst_510_, lean_object* v___f_511_, lean_object* v_____do__lift_512_){
_start:
{
lean_object* v_toPure_513_; lean_object* v___x_514_; lean_object* v___x_515_; uint8_t v___x_516_; 
v_toPure_513_ = lean_ctor_get(v_toApplicative_508_, 1);
lean_inc(v_toPure_513_);
lean_dec_ref(v_toApplicative_508_);
v___x_514_ = lean_unsigned_to_nat(0u);
v___x_515_ = lean_array_get_size(v_children_509_);
v___x_516_ = lean_nat_dec_lt(v___x_514_, v___x_515_);
if (v___x_516_ == 0)
{
lean_object* v___x_517_; 
lean_dec(v___f_511_);
lean_dec_ref(v_inst_510_);
lean_dec_ref(v_children_509_);
v___x_517_ = lean_apply_2(v_toPure_513_, lean_box(0), v_____do__lift_512_);
return v___x_517_;
}
else
{
size_t v___x_518_; size_t v___x_519_; lean_object* v___x_520_; 
lean_dec(v_toPure_513_);
v___x_518_ = ((size_t)0ULL);
v___x_519_ = lean_usize_of_nat(v___x_515_);
v___x_520_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_510_, v___f_511_, v_children_509_, v___x_518_, v___x_519_, v_____do__lift_512_);
return v___x_520_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg(lean_object* v_inst_521_, lean_object* v_t_522_, lean_object* v_f_523_, lean_object* v_init_524_){
_start:
{
switch(lean_obj_tag(v_t_522_))
{
case 0:
{
lean_object* v_key_525_; lean_object* v_val_526_; lean_object* v___x_527_; 
lean_dec_ref(v_inst_521_);
v_key_525_ = lean_ctor_get(v_t_522_, 0);
lean_inc(v_key_525_);
v_val_526_ = lean_ctor_get(v_t_522_, 1);
lean_inc(v_val_526_);
lean_dec_ref_known(v_t_522_, 2);
v___x_527_ = lean_apply_3(v_f_523_, v_init_524_, v_key_525_, v_val_526_);
return v___x_527_;
}
case 1:
{
lean_object* v_toApplicative_528_; lean_object* v_children_529_; lean_object* v_toPure_530_; lean_object* v___x_531_; lean_object* v___x_532_; uint8_t v___x_533_; 
v_toApplicative_528_ = lean_ctor_get(v_inst_521_, 0);
v_children_529_ = lean_ctor_get(v_t_522_, 1);
lean_inc_ref(v_children_529_);
lean_dec_ref_known(v_t_522_, 2);
v_toPure_530_ = lean_ctor_get(v_toApplicative_528_, 1);
v___x_531_ = lean_unsigned_to_nat(0u);
v___x_532_ = lean_array_get_size(v_children_529_);
v___x_533_ = lean_nat_dec_lt(v___x_531_, v___x_532_);
if (v___x_533_ == 0)
{
lean_object* v___x_534_; 
lean_inc(v_toPure_530_);
lean_dec_ref(v_children_529_);
lean_dec(v_f_523_);
lean_dec_ref(v_inst_521_);
v___x_534_ = lean_apply_2(v_toPure_530_, lean_box(0), v_init_524_);
return v___x_534_;
}
else
{
lean_object* v___f_535_; size_t v___x_536_; size_t v___x_537_; lean_object* v___x_538_; 
lean_inc_ref(v_inst_521_);
v___f_535_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_535_, 0, v_inst_521_);
lean_closure_set(v___f_535_, 1, v_f_523_);
v___x_536_ = ((size_t)0ULL);
v___x_537_ = lean_usize_of_nat(v___x_532_);
v___x_538_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_521_, v___f_535_, v_children_529_, v___x_536_, v___x_537_, v_init_524_);
return v___x_538_;
}
}
default: 
{
lean_object* v_toApplicative_539_; lean_object* v_toBind_540_; lean_object* v_key_541_; lean_object* v_val_542_; lean_object* v_children_543_; lean_object* v___f_544_; lean_object* v___f_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_toApplicative_539_ = lean_ctor_get(v_inst_521_, 0);
lean_inc_ref(v_toApplicative_539_);
v_toBind_540_ = lean_ctor_get(v_inst_521_, 1);
lean_inc(v_toBind_540_);
v_key_541_ = lean_ctor_get(v_t_522_, 0);
lean_inc(v_key_541_);
v_val_542_ = lean_ctor_get(v_t_522_, 1);
lean_inc(v_val_542_);
v_children_543_ = lean_ctor_get(v_t_522_, 2);
lean_inc_ref(v_children_543_);
lean_dec_ref_known(v_t_522_, 3);
lean_inc(v_f_523_);
lean_inc_ref(v_inst_521_);
v___f_544_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_544_, 0, v_inst_521_);
lean_closure_set(v___f_544_, 1, v_f_523_);
v___f_545_ = lean_alloc_closure((void*)(l_Lean_ConstTrie_foldlM___redArg___lam__2), 5, 4);
lean_closure_set(v___f_545_, 0, v_toApplicative_539_);
lean_closure_set(v___f_545_, 1, v_children_543_);
lean_closure_set(v___f_545_, 2, v_inst_521_);
lean_closure_set(v___f_545_, 3, v___f_544_);
v___x_546_ = lean_apply_3(v_f_523_, v_init_524_, v_key_541_, v_val_542_);
v___x_547_ = lean_apply_4(v_toBind_540_, lean_box(0), lean_box(0), v___x_546_, v___f_545_);
return v___x_547_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___redArg___lam__0(lean_object* v_inst_548_, lean_object* v_f_549_, lean_object* v_s_550_, lean_object* v_c_551_){
_start:
{
lean_object* v___x_552_; 
v___x_552_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_548_, v_c_551_, v_f_549_, v_s_550_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM(lean_object* v_m_553_, lean_object* v_00_u03b1_554_, lean_object* v_00_u03c3_555_, lean_object* v_inst_556_, lean_object* v_t_557_, lean_object* v_f_558_, lean_object* v_init_559_){
_start:
{
lean_object* v___x_560_; 
v___x_560_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_556_, v_t_557_, v_f_558_, v_init_559_);
return v___x_560_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter___redArg(lean_object* v_x_561_, lean_object* v_h__1_562_){
_start:
{
lean_object* v___x_563_; 
v___x_563_ = lean_apply_2(v_h__1_562_, v_x_561_, lean_box(0));
return v___x_563_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_foldlM__unattach_match__1_splitter(lean_object* v_00_u03b1_564_, lean_object* v_P_565_, lean_object* v_motive_566_, lean_object* v_x_567_, lean_object* v_h__1_568_){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = lean_apply_2(v_h__1_568_, v_x_567_, lean_box(0));
return v___x_569_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
return v_x_570_;
}
else
{
lean_object* v_pre_571_; 
v_pre_571_ = lean_ctor_get(v_x_570_, 0);
lean_inc(v_pre_571_);
return v_pre_571_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf___boxed(lean_object* v_x_572_){
_start:
{
lean_object* v_res_573_; 
v_res_573_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_parentOf(v_x_572_);
lean_dec(v_x_572_);
return v_res_573_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(lean_object* v_a_574_, lean_object* v_x_575_){
_start:
{
if (lean_obj_tag(v_x_575_) == 0)
{
uint8_t v___x_576_; 
v___x_576_ = 0;
return v___x_576_;
}
else
{
lean_object* v_key_577_; lean_object* v_tail_578_; uint8_t v___x_579_; 
v_key_577_ = lean_ctor_get(v_x_575_, 0);
v_tail_578_ = lean_ctor_get(v_x_575_, 2);
v___x_579_ = lean_name_eq(v_key_577_, v_a_574_);
if (v___x_579_ == 0)
{
v_x_575_ = v_tail_578_;
goto _start;
}
else
{
return v___x_579_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg___boxed(lean_object* v_a_581_, lean_object* v_x_582_){
_start:
{
uint8_t v_res_583_; lean_object* v_r_584_; 
v_res_583_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_581_, v_x_582_);
lean_dec(v_x_582_);
lean_dec(v_a_581_);
v_r_584_ = lean_box(v_res_583_);
return v_r_584_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(lean_object* v_m_585_, lean_object* v_a_586_){
_start:
{
lean_object* v_buckets_587_; lean_object* v___x_588_; uint64_t v___y_590_; 
v_buckets_587_ = lean_ctor_get(v_m_585_, 1);
v___x_588_ = lean_array_get_size(v_buckets_587_);
if (lean_obj_tag(v_a_586_) == 0)
{
uint64_t v___x_604_; 
v___x_604_ = 1723ULL;
v___y_590_ = v___x_604_;
goto v___jp_589_;
}
else
{
uint64_t v_hash_605_; 
v_hash_605_ = lean_ctor_get_uint64(v_a_586_, sizeof(void*)*2);
v___y_590_ = v_hash_605_;
goto v___jp_589_;
}
v___jp_589_:
{
uint64_t v___x_591_; uint64_t v___x_592_; uint64_t v_fold_593_; uint64_t v___x_594_; uint64_t v___x_595_; uint64_t v___x_596_; size_t v___x_597_; size_t v___x_598_; size_t v___x_599_; size_t v___x_600_; size_t v___x_601_; lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_591_ = 32ULL;
v___x_592_ = lean_uint64_shift_right(v___y_590_, v___x_591_);
v_fold_593_ = lean_uint64_xor(v___y_590_, v___x_592_);
v___x_594_ = 16ULL;
v___x_595_ = lean_uint64_shift_right(v_fold_593_, v___x_594_);
v___x_596_ = lean_uint64_xor(v_fold_593_, v___x_595_);
v___x_597_ = lean_uint64_to_usize(v___x_596_);
v___x_598_ = lean_usize_of_nat(v___x_588_);
v___x_599_ = ((size_t)1ULL);
v___x_600_ = lean_usize_sub(v___x_598_, v___x_599_);
v___x_601_ = lean_usize_land(v___x_597_, v___x_600_);
v___x_602_ = lean_array_uget_borrowed(v_buckets_587_, v___x_601_);
v___x_603_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_586_, v___x_602_);
return v___x_603_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg___boxed(lean_object* v_m_606_, lean_object* v_a_607_){
_start:
{
uint8_t v_res_608_; lean_object* v_r_609_; 
v_res_608_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_606_, v_a_607_);
lean_dec(v_a_607_);
lean_dec_ref(v_m_606_);
v_r_609_ = lean_box(v_res_608_);
return v_r_609_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(lean_object* v_x_610_, lean_object* v_x_611_){
_start:
{
if (lean_obj_tag(v_x_611_) == 0)
{
return v_x_610_;
}
else
{
lean_object* v_key_612_; lean_object* v_value_613_; lean_object* v_tail_614_; lean_object* v___x_616_; uint8_t v_isShared_617_; uint8_t v_isSharedCheck_640_; 
v_key_612_ = lean_ctor_get(v_x_611_, 0);
v_value_613_ = lean_ctor_get(v_x_611_, 1);
v_tail_614_ = lean_ctor_get(v_x_611_, 2);
v_isSharedCheck_640_ = !lean_is_exclusive(v_x_611_);
if (v_isSharedCheck_640_ == 0)
{
v___x_616_ = v_x_611_;
v_isShared_617_ = v_isSharedCheck_640_;
goto v_resetjp_615_;
}
else
{
lean_inc(v_tail_614_);
lean_inc(v_value_613_);
lean_inc(v_key_612_);
lean_dec(v_x_611_);
v___x_616_ = lean_box(0);
v_isShared_617_ = v_isSharedCheck_640_;
goto v_resetjp_615_;
}
v_resetjp_615_:
{
lean_object* v___x_618_; uint64_t v___y_620_; 
v___x_618_ = lean_array_get_size(v_x_610_);
if (lean_obj_tag(v_key_612_) == 0)
{
uint64_t v___x_638_; 
v___x_638_ = 1723ULL;
v___y_620_ = v___x_638_;
goto v___jp_619_;
}
else
{
uint64_t v_hash_639_; 
v_hash_639_ = lean_ctor_get_uint64(v_key_612_, sizeof(void*)*2);
v___y_620_ = v_hash_639_;
goto v___jp_619_;
}
v___jp_619_:
{
uint64_t v___x_621_; uint64_t v___x_622_; uint64_t v_fold_623_; uint64_t v___x_624_; uint64_t v___x_625_; uint64_t v___x_626_; size_t v___x_627_; size_t v___x_628_; size_t v___x_629_; size_t v___x_630_; size_t v___x_631_; lean_object* v___x_632_; lean_object* v___x_634_; 
v___x_621_ = 32ULL;
v___x_622_ = lean_uint64_shift_right(v___y_620_, v___x_621_);
v_fold_623_ = lean_uint64_xor(v___y_620_, v___x_622_);
v___x_624_ = 16ULL;
v___x_625_ = lean_uint64_shift_right(v_fold_623_, v___x_624_);
v___x_626_ = lean_uint64_xor(v_fold_623_, v___x_625_);
v___x_627_ = lean_uint64_to_usize(v___x_626_);
v___x_628_ = lean_usize_of_nat(v___x_618_);
v___x_629_ = ((size_t)1ULL);
v___x_630_ = lean_usize_sub(v___x_628_, v___x_629_);
v___x_631_ = lean_usize_land(v___x_627_, v___x_630_);
v___x_632_ = lean_array_uget_borrowed(v_x_610_, v___x_631_);
lean_inc(v___x_632_);
if (v_isShared_617_ == 0)
{
lean_ctor_set(v___x_616_, 2, v___x_632_);
v___x_634_ = v___x_616_;
goto v_reusejp_633_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v_key_612_);
lean_ctor_set(v_reuseFailAlloc_637_, 1, v_value_613_);
lean_ctor_set(v_reuseFailAlloc_637_, 2, v___x_632_);
v___x_634_ = v_reuseFailAlloc_637_;
goto v_reusejp_633_;
}
v_reusejp_633_:
{
lean_object* v___x_635_; 
v___x_635_ = lean_array_uset(v_x_610_, v___x_631_, v___x_634_);
v_x_610_ = v___x_635_;
v_x_611_ = v_tail_614_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(lean_object* v_i_641_, lean_object* v_source_642_, lean_object* v_target_643_){
_start:
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = lean_array_get_size(v_source_642_);
v___x_645_ = lean_nat_dec_lt(v_i_641_, v___x_644_);
if (v___x_645_ == 0)
{
lean_dec_ref(v_source_642_);
lean_dec(v_i_641_);
return v_target_643_;
}
else
{
lean_object* v_es_646_; lean_object* v___x_647_; lean_object* v_source_648_; lean_object* v_target_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_es_646_ = lean_array_fget(v_source_642_, v_i_641_);
v___x_647_ = lean_box(0);
v_source_648_ = lean_array_fset(v_source_642_, v_i_641_, v___x_647_);
v_target_649_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(v_target_643_, v_es_646_);
v___x_650_ = lean_unsigned_to_nat(1u);
v___x_651_ = lean_nat_add(v_i_641_, v___x_650_);
lean_dec(v_i_641_);
v_i_641_ = v___x_651_;
v_source_642_ = v_source_648_;
v_target_643_ = v_target_649_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(lean_object* v_data_653_){
_start:
{
lean_object* v___x_654_; lean_object* v___x_655_; lean_object* v_nbuckets_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; 
v___x_654_ = lean_array_get_size(v_data_653_);
v___x_655_ = lean_unsigned_to_nat(2u);
v_nbuckets_656_ = lean_nat_mul(v___x_654_, v___x_655_);
v___x_657_ = lean_unsigned_to_nat(0u);
v___x_658_ = lean_box(0);
v___x_659_ = lean_mk_array(v_nbuckets_656_, v___x_658_);
v___x_660_ = lean_array_propagate_mark(v_data_653_, v___x_659_);
v___x_661_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v___x_657_, v_data_653_, v___x_660_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(lean_object* v_m_662_, lean_object* v_a_663_, lean_object* v_b_664_){
_start:
{
lean_object* v_size_665_; lean_object* v_buckets_666_; lean_object* v___x_667_; uint64_t v___y_669_; 
v_size_665_ = lean_ctor_get(v_m_662_, 0);
v_buckets_666_ = lean_ctor_get(v_m_662_, 1);
v___x_667_ = lean_array_get_size(v_buckets_666_);
if (lean_obj_tag(v_a_663_) == 0)
{
uint64_t v___x_706_; 
v___x_706_ = 1723ULL;
v___y_669_ = v___x_706_;
goto v___jp_668_;
}
else
{
uint64_t v_hash_707_; 
v_hash_707_ = lean_ctor_get_uint64(v_a_663_, sizeof(void*)*2);
v___y_669_ = v_hash_707_;
goto v___jp_668_;
}
v___jp_668_:
{
uint64_t v___x_670_; uint64_t v___x_671_; uint64_t v_fold_672_; uint64_t v___x_673_; uint64_t v___x_674_; uint64_t v___x_675_; size_t v___x_676_; size_t v___x_677_; size_t v___x_678_; size_t v___x_679_; size_t v___x_680_; lean_object* v_bkt_681_; uint8_t v___x_682_; 
v___x_670_ = 32ULL;
v___x_671_ = lean_uint64_shift_right(v___y_669_, v___x_670_);
v_fold_672_ = lean_uint64_xor(v___y_669_, v___x_671_);
v___x_673_ = 16ULL;
v___x_674_ = lean_uint64_shift_right(v_fold_672_, v___x_673_);
v___x_675_ = lean_uint64_xor(v_fold_672_, v___x_674_);
v___x_676_ = lean_uint64_to_usize(v___x_675_);
v___x_677_ = lean_usize_of_nat(v___x_667_);
v___x_678_ = ((size_t)1ULL);
v___x_679_ = lean_usize_sub(v___x_677_, v___x_678_);
v___x_680_ = lean_usize_land(v___x_676_, v___x_679_);
v_bkt_681_ = lean_array_uget_borrowed(v_buckets_666_, v___x_680_);
v___x_682_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_663_, v_bkt_681_);
if (v___x_682_ == 0)
{
lean_object* v___x_684_; uint8_t v_isShared_685_; uint8_t v_isSharedCheck_703_; 
lean_inc_ref(v_buckets_666_);
lean_inc(v_size_665_);
v_isSharedCheck_703_ = !lean_is_exclusive(v_m_662_);
if (v_isSharedCheck_703_ == 0)
{
lean_object* v_unused_704_; lean_object* v_unused_705_; 
v_unused_704_ = lean_ctor_get(v_m_662_, 1);
lean_dec(v_unused_704_);
v_unused_705_ = lean_ctor_get(v_m_662_, 0);
lean_dec(v_unused_705_);
v___x_684_ = v_m_662_;
v_isShared_685_ = v_isSharedCheck_703_;
goto v_resetjp_683_;
}
else
{
lean_dec(v_m_662_);
v___x_684_ = lean_box(0);
v_isShared_685_ = v_isSharedCheck_703_;
goto v_resetjp_683_;
}
v_resetjp_683_:
{
lean_object* v___x_686_; lean_object* v_size_x27_687_; lean_object* v___x_688_; lean_object* v_buckets_x27_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_686_ = lean_unsigned_to_nat(1u);
v_size_x27_687_ = lean_nat_add(v_size_665_, v___x_686_);
lean_dec(v_size_665_);
lean_inc(v_bkt_681_);
v___x_688_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_688_, 0, v_a_663_);
lean_ctor_set(v___x_688_, 1, v_b_664_);
lean_ctor_set(v___x_688_, 2, v_bkt_681_);
v_buckets_x27_689_ = lean_array_uset(v_buckets_666_, v___x_680_, v___x_688_);
v___x_690_ = lean_unsigned_to_nat(4u);
v___x_691_ = lean_nat_mul(v_size_x27_687_, v___x_690_);
v___x_692_ = lean_unsigned_to_nat(3u);
v___x_693_ = lean_nat_div(v___x_691_, v___x_692_);
lean_dec(v___x_691_);
v___x_694_ = lean_array_get_size(v_buckets_x27_689_);
v___x_695_ = lean_nat_dec_le(v___x_693_, v___x_694_);
lean_dec(v___x_693_);
if (v___x_695_ == 0)
{
lean_object* v_val_696_; lean_object* v___x_698_; 
v_val_696_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_689_);
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 1, v_val_696_);
lean_ctor_set(v___x_684_, 0, v_size_x27_687_);
v___x_698_ = v___x_684_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_size_x27_687_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_val_696_);
v___x_698_ = v_reuseFailAlloc_699_;
goto v_reusejp_697_;
}
v_reusejp_697_:
{
return v___x_698_;
}
}
else
{
lean_object* v___x_701_; 
if (v_isShared_685_ == 0)
{
lean_ctor_set(v___x_684_, 1, v_buckets_x27_689_);
lean_ctor_set(v___x_684_, 0, v_size_x27_687_);
v___x_701_ = v___x_684_;
goto v_reusejp_700_;
}
else
{
lean_object* v_reuseFailAlloc_702_; 
v_reuseFailAlloc_702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_702_, 0, v_size_x27_687_);
lean_ctor_set(v_reuseFailAlloc_702_, 1, v_buckets_x27_689_);
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
else
{
lean_dec(v_b_664_);
lean_dec(v_a_663_);
return v_m_662_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(lean_object* v_cur_710_, lean_object* v_cs_x3f_711_){
_start:
{
lean_object* v___y_713_; 
if (lean_obj_tag(v_cs_x3f_711_) == 0)
{
lean_object* v___x_716_; 
v___x_716_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_713_ = v___x_716_;
goto v___jp_712_;
}
else
{
lean_object* v_val_717_; 
v_val_717_ = lean_ctor_get(v_cs_x3f_711_, 0);
lean_inc(v_val_717_);
lean_dec_ref_known(v_cs_x3f_711_, 1);
v___y_713_ = v_val_717_;
goto v___jp_712_;
}
v___jp_712_:
{
lean_object* v___x_714_; lean_object* v___x_715_; 
v___x_714_ = lean_array_push(v___y_713_, v_cur_710_);
v___x_715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_715_, 0, v___x_714_);
return v___x_715_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(lean_object* v_cur_718_, lean_object* v_a_719_, lean_object* v_x_720_){
_start:
{
if (lean_obj_tag(v_x_720_) == 0)
{
lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v_val_723_; lean_object* v___x_724_; 
v___x_721_ = lean_box(0);
v___x_722_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v_cur_718_, v___x_721_);
v_val_723_ = lean_ctor_get(v___x_722_, 0);
lean_inc(v_val_723_);
lean_dec(v___x_722_);
v___x_724_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_724_, 0, v_a_719_);
lean_ctor_set(v___x_724_, 1, v_val_723_);
lean_ctor_set(v___x_724_, 2, v_x_720_);
return v___x_724_;
}
else
{
lean_object* v_key_725_; lean_object* v_value_726_; lean_object* v_tail_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_742_; 
v_key_725_ = lean_ctor_get(v_x_720_, 0);
v_value_726_ = lean_ctor_get(v_x_720_, 1);
v_tail_727_ = lean_ctor_get(v_x_720_, 2);
v_isSharedCheck_742_ = !lean_is_exclusive(v_x_720_);
if (v_isSharedCheck_742_ == 0)
{
v___x_729_ = v_x_720_;
v_isShared_730_ = v_isSharedCheck_742_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_tail_727_);
lean_inc(v_value_726_);
lean_inc(v_key_725_);
lean_dec(v_x_720_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_742_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
uint8_t v___x_731_; 
v___x_731_ = lean_name_eq(v_key_725_, v_a_719_);
if (v___x_731_ == 0)
{
lean_object* v_tail_732_; lean_object* v___x_734_; 
v_tail_732_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v_cur_718_, v_a_719_, v_tail_727_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 2, v_tail_732_);
v___x_734_ = v___x_729_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_735_; 
v_reuseFailAlloc_735_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_735_, 0, v_key_725_);
lean_ctor_set(v_reuseFailAlloc_735_, 1, v_value_726_);
lean_ctor_set(v_reuseFailAlloc_735_, 2, v_tail_732_);
v___x_734_ = v_reuseFailAlloc_735_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
return v___x_734_;
}
}
else
{
lean_object* v___x_736_; lean_object* v___x_737_; lean_object* v_val_738_; lean_object* v___x_740_; 
lean_dec(v_key_725_);
v___x_736_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_736_, 0, v_value_726_);
v___x_737_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0(v_cur_718_, v___x_736_);
v_val_738_ = lean_ctor_get(v___x_737_, 0);
lean_inc(v_val_738_);
lean_dec(v___x_737_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 1, v_val_738_);
lean_ctor_set(v___x_729_, 0, v_a_719_);
v___x_740_ = v___x_729_;
goto v_reusejp_739_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_a_719_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v_val_738_);
lean_ctor_set(v_reuseFailAlloc_741_, 2, v_tail_727_);
v___x_740_ = v_reuseFailAlloc_741_;
goto v_reusejp_739_;
}
v_reusejp_739_:
{
return v___x_740_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(lean_object* v_cur_743_, lean_object* v_m_744_, lean_object* v_a_745_){
_start:
{
lean_object* v___y_747_; lean_object* v___y_748_; size_t v___y_749_; lean_object* v___y_750_; lean_object* v_size_753_; lean_object* v_buckets_754_; lean_object* v___x_756_; uint8_t v_isShared_757_; uint8_t v_isSharedCheck_801_; 
v_size_753_ = lean_ctor_get(v_m_744_, 0);
v_buckets_754_ = lean_ctor_get(v_m_744_, 1);
v_isSharedCheck_801_ = !lean_is_exclusive(v_m_744_);
if (v_isSharedCheck_801_ == 0)
{
v___x_756_ = v_m_744_;
v_isShared_757_ = v_isSharedCheck_801_;
goto v_resetjp_755_;
}
else
{
lean_inc(v_buckets_754_);
lean_inc(v_size_753_);
lean_dec(v_m_744_);
v___x_756_ = lean_box(0);
v_isShared_757_ = v_isSharedCheck_801_;
goto v_resetjp_755_;
}
v___jp_746_:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_array_uset(v___y_748_, v___y_749_, v___y_747_);
v___x_752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_752_, 0, v___y_750_);
lean_ctor_set(v___x_752_, 1, v___x_751_);
return v___x_752_;
}
v_resetjp_755_:
{
lean_object* v___x_758_; uint64_t v___y_760_; 
v___x_758_ = lean_array_get_size(v_buckets_754_);
if (lean_obj_tag(v_a_745_) == 0)
{
uint64_t v___x_799_; 
v___x_799_ = 1723ULL;
v___y_760_ = v___x_799_;
goto v___jp_759_;
}
else
{
uint64_t v_hash_800_; 
v_hash_800_ = lean_ctor_get_uint64(v_a_745_, sizeof(void*)*2);
v___y_760_ = v_hash_800_;
goto v___jp_759_;
}
v___jp_759_:
{
uint64_t v___x_761_; uint64_t v___x_762_; uint64_t v_fold_763_; uint64_t v___x_764_; uint64_t v___x_765_; uint64_t v___x_766_; size_t v___x_767_; size_t v___x_768_; size_t v___x_769_; size_t v___x_770_; size_t v___x_771_; lean_object* v_bkt_772_; uint8_t v___x_773_; 
v___x_761_ = 32ULL;
v___x_762_ = lean_uint64_shift_right(v___y_760_, v___x_761_);
v_fold_763_ = lean_uint64_xor(v___y_760_, v___x_762_);
v___x_764_ = 16ULL;
v___x_765_ = lean_uint64_shift_right(v_fold_763_, v___x_764_);
v___x_766_ = lean_uint64_xor(v_fold_763_, v___x_765_);
v___x_767_ = lean_uint64_to_usize(v___x_766_);
v___x_768_ = lean_usize_of_nat(v___x_758_);
v___x_769_ = ((size_t)1ULL);
v___x_770_ = lean_usize_sub(v___x_768_, v___x_769_);
v___x_771_ = lean_usize_land(v___x_767_, v___x_770_);
v_bkt_772_ = lean_array_uget_borrowed(v_buckets_754_, v___x_771_);
v___x_773_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_745_, v_bkt_772_);
if (v___x_773_ == 0)
{
lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v_size_x27_777_; lean_object* v___x_778_; lean_object* v_buckets_x27_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v___x_774_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___x_775_ = lean_array_push(v___x_774_, v_cur_743_);
v___x_776_ = lean_unsigned_to_nat(1u);
v_size_x27_777_ = lean_nat_add(v_size_753_, v___x_776_);
lean_dec(v_size_753_);
lean_inc(v_bkt_772_);
v___x_778_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_778_, 0, v_a_745_);
lean_ctor_set(v___x_778_, 1, v___x_775_);
lean_ctor_set(v___x_778_, 2, v_bkt_772_);
v_buckets_x27_779_ = lean_array_uset(v_buckets_754_, v___x_771_, v___x_778_);
v___x_780_ = lean_unsigned_to_nat(4u);
v___x_781_ = lean_nat_mul(v_size_x27_777_, v___x_780_);
v___x_782_ = lean_unsigned_to_nat(3u);
v___x_783_ = lean_nat_div(v___x_781_, v___x_782_);
lean_dec(v___x_781_);
v___x_784_ = lean_array_get_size(v_buckets_x27_779_);
v___x_785_ = lean_nat_dec_le(v___x_783_, v___x_784_);
lean_dec(v___x_783_);
if (v___x_785_ == 0)
{
lean_object* v_val_786_; lean_object* v___x_788_; 
v_val_786_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_779_);
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 1, v_val_786_);
lean_ctor_set(v___x_756_, 0, v_size_x27_777_);
v___x_788_ = v___x_756_;
goto v_reusejp_787_;
}
else
{
lean_object* v_reuseFailAlloc_789_; 
v_reuseFailAlloc_789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_789_, 0, v_size_x27_777_);
lean_ctor_set(v_reuseFailAlloc_789_, 1, v_val_786_);
v___x_788_ = v_reuseFailAlloc_789_;
goto v_reusejp_787_;
}
v_reusejp_787_:
{
return v___x_788_;
}
}
else
{
lean_object* v___x_791_; 
if (v_isShared_757_ == 0)
{
lean_ctor_set(v___x_756_, 1, v_buckets_x27_779_);
lean_ctor_set(v___x_756_, 0, v_size_x27_777_);
v___x_791_ = v___x_756_;
goto v_reusejp_790_;
}
else
{
lean_object* v_reuseFailAlloc_792_; 
v_reuseFailAlloc_792_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_792_, 0, v_size_x27_777_);
lean_ctor_set(v_reuseFailAlloc_792_, 1, v_buckets_x27_779_);
v___x_791_ = v_reuseFailAlloc_792_;
goto v_reusejp_790_;
}
v_reusejp_790_:
{
return v___x_791_;
}
}
}
else
{
lean_object* v___x_793_; lean_object* v_buckets_x27_794_; lean_object* v_bkt_x27_795_; uint8_t v___x_796_; 
lean_inc(v_bkt_772_);
lean_del_object(v___x_756_);
v___x_793_ = lean_box(0);
v_buckets_x27_794_ = lean_array_uset(v_buckets_754_, v___x_771_, v___x_793_);
lean_inc(v_a_745_);
v_bkt_x27_795_ = l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4(v_cur_743_, v_a_745_, v_bkt_772_);
v___x_796_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_745_, v_bkt_x27_795_);
lean_dec(v_a_745_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; lean_object* v___x_798_; 
v___x_797_ = lean_unsigned_to_nat(1u);
v___x_798_ = lean_nat_sub(v_size_753_, v___x_797_);
lean_dec(v_size_753_);
v___y_747_ = v_bkt_x27_795_;
v___y_748_ = v_buckets_x27_794_;
v___y_749_ = v___x_771_;
v___y_750_ = v___x_798_;
goto v___jp_746_;
}
else
{
v___y_747_ = v_bkt_x27_795_;
v___y_748_ = v_buckets_x27_794_;
v___y_749_ = v___x_771_;
v___y_750_ = v_size_753_;
goto v___jp_746_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(lean_object* v_b_802_, lean_object* v_cur_803_){
_start:
{
lean_object* v___x_804_; uint8_t v___x_805_; 
v___x_804_ = lean_box(0);
v___x_805_ = lean_name_eq(v_cur_803_, v___x_804_);
if (v___x_805_ == 0)
{
lean_object* v_values_806_; lean_object* v_seen_807_; lean_object* v_children_808_; uint8_t v___x_809_; 
v_values_806_ = lean_ctor_get(v_b_802_, 0);
v_seen_807_ = lean_ctor_get(v_b_802_, 1);
v_children_808_ = lean_ctor_get(v_b_802_, 2);
v___x_809_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_seen_807_, v_cur_803_);
if (v___x_809_ == 0)
{
lean_object* v___x_811_; uint8_t v_isShared_812_; uint8_t v_isSharedCheck_823_; 
lean_inc_ref(v_children_808_);
lean_inc_ref(v_seen_807_);
lean_inc_ref(v_values_806_);
v_isSharedCheck_823_ = !lean_is_exclusive(v_b_802_);
if (v_isSharedCheck_823_ == 0)
{
lean_object* v_unused_824_; lean_object* v_unused_825_; lean_object* v_unused_826_; 
v_unused_824_ = lean_ctor_get(v_b_802_, 2);
lean_dec(v_unused_824_);
v_unused_825_ = lean_ctor_get(v_b_802_, 1);
lean_dec(v_unused_825_);
v_unused_826_ = lean_ctor_get(v_b_802_, 0);
lean_dec(v_unused_826_);
v___x_811_ = v_b_802_;
v_isShared_812_ = v_isSharedCheck_823_;
goto v_resetjp_810_;
}
else
{
lean_dec(v_b_802_);
v___x_811_ = lean_box(0);
v_isShared_812_ = v_isSharedCheck_823_;
goto v_resetjp_810_;
}
v_resetjp_810_:
{
lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___y_816_; 
v___x_813_ = lean_box(0);
lean_inc(v_cur_803_);
v___x_814_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_seen_807_, v_cur_803_, v___x_813_);
if (lean_obj_tag(v_cur_803_) == 0)
{
v___y_816_ = v_cur_803_;
goto v___jp_815_;
}
else
{
lean_object* v_pre_822_; 
v_pre_822_ = lean_ctor_get(v_cur_803_, 0);
lean_inc(v_pre_822_);
v___y_816_ = v_pre_822_;
goto v___jp_815_;
}
v___jp_815_:
{
lean_object* v___x_817_; lean_object* v___x_819_; 
lean_inc(v___y_816_);
v___x_817_ = l_Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2(v_cur_803_, v_children_808_, v___y_816_);
if (v_isShared_812_ == 0)
{
lean_ctor_set(v___x_811_, 2, v___x_817_);
lean_ctor_set(v___x_811_, 1, v___x_814_);
v___x_819_ = v___x_811_;
goto v_reusejp_818_;
}
else
{
lean_object* v_reuseFailAlloc_821_; 
v_reuseFailAlloc_821_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_821_, 0, v_values_806_);
lean_ctor_set(v_reuseFailAlloc_821_, 1, v___x_814_);
lean_ctor_set(v_reuseFailAlloc_821_, 2, v___x_817_);
v___x_819_ = v_reuseFailAlloc_821_;
goto v_reusejp_818_;
}
v_reusejp_818_:
{
v_b_802_ = v___x_819_;
v_cur_803_ = v___y_816_;
goto _start;
}
}
}
}
else
{
lean_dec(v_cur_803_);
return v_b_802_;
}
}
else
{
lean_dec(v_cur_803_);
return v_b_802_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName(lean_object* v_00_u03b1_827_, lean_object* v_b_828_, lean_object* v_cur_829_){
_start:
{
lean_object* v___x_830_; 
v___x_830_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v_b_828_, v_cur_829_);
return v___x_830_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(lean_object* v_00_u03b2_831_, lean_object* v_m_832_, lean_object* v_a_833_){
_start:
{
uint8_t v___x_834_; 
v___x_834_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___redArg(v_m_832_, v_a_833_);
return v___x_834_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0___boxed(lean_object* v_00_u03b2_835_, lean_object* v_m_836_, lean_object* v_a_837_){
_start:
{
uint8_t v_res_838_; lean_object* v_r_839_; 
v_res_838_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0(v_00_u03b2_835_, v_m_836_, v_a_837_);
lean_dec(v_a_837_);
lean_dec_ref(v_m_836_);
v_r_839_ = lean_box(v_res_838_);
return v_r_839_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1(lean_object* v_00_u03b2_840_, lean_object* v_m_841_, lean_object* v_a_842_, lean_object* v_b_843_){
_start:
{
lean_object* v___x_844_; 
v___x_844_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1___redArg(v_m_841_, v_a_842_, v_b_843_);
return v___x_844_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(lean_object* v_00_u03b2_845_, lean_object* v_a_846_, lean_object* v_x_847_){
_start:
{
uint8_t v___x_848_; 
v___x_848_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_846_, v_x_847_);
return v___x_848_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___boxed(lean_object* v_00_u03b2_849_, lean_object* v_a_850_, lean_object* v_x_851_){
_start:
{
uint8_t v_res_852_; lean_object* v_r_853_; 
v_res_852_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0(v_00_u03b2_849_, v_a_850_, v_x_851_);
lean_dec(v_x_851_);
lean_dec(v_a_850_);
v_r_853_ = lean_box(v_res_852_);
return v_r_853_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2(lean_object* v_00_u03b2_854_, lean_object* v_data_855_){
_start:
{
lean_object* v___x_856_; 
v___x_856_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_data_855_);
return v___x_856_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3(lean_object* v_00_u03b2_857_, lean_object* v_i_858_, lean_object* v_source_859_, lean_object* v_target_860_){
_start:
{
lean_object* v___x_861_; 
v___x_861_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3___redArg(v_i_858_, v_source_859_, v_target_860_);
return v___x_861_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5(lean_object* v_00_u03b2_862_, lean_object* v_x_863_, lean_object* v_x_864_){
_start:
{
lean_object* v___x_865_; 
v___x_865_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2_spec__3_spec__5___redArg(v_x_863_, v_x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(lean_object* v_a_866_, lean_object* v_x_867_){
_start:
{
if (lean_obj_tag(v_x_867_) == 0)
{
lean_object* v___x_868_; 
v___x_868_ = lean_box(0);
return v___x_868_;
}
else
{
lean_object* v_key_869_; lean_object* v_value_870_; lean_object* v_tail_871_; uint8_t v___x_872_; 
v_key_869_ = lean_ctor_get(v_x_867_, 0);
v_value_870_ = lean_ctor_get(v_x_867_, 1);
v_tail_871_ = lean_ctor_get(v_x_867_, 2);
v___x_872_ = lean_name_eq(v_key_869_, v_a_866_);
if (v___x_872_ == 0)
{
v_x_867_ = v_tail_871_;
goto _start;
}
else
{
lean_object* v___x_874_; 
lean_inc(v_value_870_);
v___x_874_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_874_, 0, v_value_870_);
return v___x_874_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg___boxed(lean_object* v_a_875_, lean_object* v_x_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_875_, v_x_876_);
lean_dec(v_x_876_);
lean_dec(v_a_875_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(lean_object* v_m_878_, lean_object* v_a_879_){
_start:
{
lean_object* v_buckets_880_; lean_object* v___x_881_; uint64_t v___y_883_; 
v_buckets_880_ = lean_ctor_get(v_m_878_, 1);
v___x_881_ = lean_array_get_size(v_buckets_880_);
if (lean_obj_tag(v_a_879_) == 0)
{
uint64_t v___x_897_; 
v___x_897_ = 1723ULL;
v___y_883_ = v___x_897_;
goto v___jp_882_;
}
else
{
uint64_t v_hash_898_; 
v_hash_898_ = lean_ctor_get_uint64(v_a_879_, sizeof(void*)*2);
v___y_883_ = v_hash_898_;
goto v___jp_882_;
}
v___jp_882_:
{
uint64_t v___x_884_; uint64_t v___x_885_; uint64_t v_fold_886_; uint64_t v___x_887_; uint64_t v___x_888_; uint64_t v___x_889_; size_t v___x_890_; size_t v___x_891_; size_t v___x_892_; size_t v___x_893_; size_t v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_884_ = 32ULL;
v___x_885_ = lean_uint64_shift_right(v___y_883_, v___x_884_);
v_fold_886_ = lean_uint64_xor(v___y_883_, v___x_885_);
v___x_887_ = 16ULL;
v___x_888_ = lean_uint64_shift_right(v_fold_886_, v___x_887_);
v___x_889_ = lean_uint64_xor(v_fold_886_, v___x_888_);
v___x_890_ = lean_uint64_to_usize(v___x_889_);
v___x_891_ = lean_usize_of_nat(v___x_881_);
v___x_892_ = ((size_t)1ULL);
v___x_893_ = lean_usize_sub(v___x_891_, v___x_892_);
v___x_894_ = lean_usize_land(v___x_890_, v___x_893_);
v___x_895_ = lean_array_uget_borrowed(v_buckets_880_, v___x_894_);
v___x_896_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_879_, v___x_895_);
return v___x_896_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg___boxed(lean_object* v_m_899_, lean_object* v_a_900_){
_start:
{
lean_object* v_res_901_; 
v_res_901_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_899_, v_a_900_);
lean_dec(v_a_900_);
lean_dec_ref(v_m_899_);
return v_res_901_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(lean_object* v_hi_902_, lean_object* v_pivot_903_, lean_object* v_as_904_, lean_object* v_i_905_, lean_object* v_k_906_){
_start:
{
uint64_t v___y_908_; uint64_t v___y_909_; uint64_t v___y_920_; lean_object* v___y_921_; uint64_t v___y_925_; lean_object* v___y_928_; uint8_t v___x_931_; 
v___x_931_ = lean_nat_dec_lt(v_k_906_, v_hi_902_);
if (v___x_931_ == 0)
{
lean_object* v___x_932_; lean_object* v___x_933_; 
lean_dec(v_k_906_);
v___x_932_ = lean_array_fswap(v_as_904_, v_i_905_, v_hi_902_);
v___x_933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_933_, 0, v_i_905_);
lean_ctor_set(v___x_933_, 1, v___x_932_);
return v___x_933_;
}
else
{
lean_object* v___x_934_; lean_object* v_key_935_; 
v___x_934_ = lean_array_fget_borrowed(v_as_904_, v_k_906_);
v_key_935_ = lean_ctor_get(v___x_934_, 0);
lean_inc(v_key_935_);
v___y_928_ = v_key_935_;
goto v___jp_927_;
}
v___jp_907_:
{
uint8_t v___x_910_; 
v___x_910_ = lean_uint64_dec_lt(v___y_908_, v___y_909_);
if (v___x_910_ == 0)
{
lean_object* v___x_911_; lean_object* v___x_912_; 
v___x_911_ = lean_unsigned_to_nat(1u);
v___x_912_ = lean_nat_add(v_k_906_, v___x_911_);
lean_dec(v_k_906_);
v_k_906_ = v___x_912_;
goto _start;
}
else
{
lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_914_ = lean_array_fswap(v_as_904_, v_i_905_, v_k_906_);
v___x_915_ = lean_unsigned_to_nat(1u);
v___x_916_ = lean_nat_add(v_i_905_, v___x_915_);
lean_dec(v_i_905_);
v___x_917_ = lean_nat_add(v_k_906_, v___x_915_);
lean_dec(v_k_906_);
v_as_904_ = v___x_914_;
v_i_905_ = v___x_916_;
v_k_906_ = v___x_917_;
goto _start;
}
}
v___jp_919_:
{
if (lean_obj_tag(v___y_921_) == 0)
{
uint64_t v___x_922_; 
v___x_922_ = 1723ULL;
v___y_908_ = v___y_920_;
v___y_909_ = v___x_922_;
goto v___jp_907_;
}
else
{
uint64_t v_hash_923_; 
v_hash_923_ = lean_ctor_get_uint64(v___y_921_, sizeof(void*)*2);
v___y_908_ = v___y_920_;
v___y_909_ = v_hash_923_;
goto v___jp_907_;
}
}
v___jp_924_:
{
lean_object* v_key_926_; 
v_key_926_ = lean_ctor_get(v_pivot_903_, 0);
v___y_920_ = v___y_925_;
v___y_921_ = v_key_926_;
goto v___jp_919_;
}
v___jp_927_:
{
if (lean_obj_tag(v___y_928_) == 0)
{
uint64_t v___x_929_; 
v___x_929_ = 1723ULL;
v___y_925_ = v___x_929_;
goto v___jp_924_;
}
else
{
uint64_t v_hash_930_; 
v_hash_930_ = lean_ctor_get_uint64(v___y_928_, sizeof(void*)*2);
lean_dec(v___y_928_);
v___y_925_ = v_hash_930_;
goto v___jp_924_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg___boxed(lean_object* v_hi_936_, lean_object* v_pivot_937_, lean_object* v_as_938_, lean_object* v_i_939_, lean_object* v_k_940_){
_start:
{
lean_object* v_res_941_; 
v_res_941_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(v_hi_936_, v_pivot_937_, v_as_938_, v_i_939_, v_k_940_);
lean_dec_ref(v_pivot_937_);
lean_dec(v_hi_936_);
return v_res_941_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(lean_object* v_c_u2081_942_, lean_object* v_c_u2082_943_){
_start:
{
uint64_t v___y_945_; lean_object* v___y_946_; uint64_t v___y_952_; lean_object* v___y_955_; lean_object* v_key_958_; 
v_key_958_ = lean_ctor_get(v_c_u2081_942_, 0);
v___y_955_ = v_key_958_;
goto v___jp_954_;
v___jp_944_:
{
if (lean_obj_tag(v___y_946_) == 0)
{
uint64_t v___x_947_; uint8_t v___x_948_; 
v___x_947_ = 1723ULL;
v___x_948_ = lean_uint64_dec_lt(v___y_945_, v___x_947_);
return v___x_948_;
}
else
{
uint64_t v_hash_949_; uint8_t v___x_950_; 
v_hash_949_ = lean_ctor_get_uint64(v___y_946_, sizeof(void*)*2);
v___x_950_ = lean_uint64_dec_lt(v___y_945_, v_hash_949_);
return v___x_950_;
}
}
v___jp_951_:
{
lean_object* v_key_953_; 
v_key_953_ = lean_ctor_get(v_c_u2082_943_, 0);
v___y_945_ = v___y_952_;
v___y_946_ = v_key_953_;
goto v___jp_944_;
}
v___jp_954_:
{
if (lean_obj_tag(v___y_955_) == 0)
{
uint64_t v___x_956_; 
v___x_956_ = 1723ULL;
v___y_952_ = v___x_956_;
goto v___jp_951_;
}
else
{
uint64_t v_hash_957_; 
v_hash_957_ = lean_ctor_get_uint64(v___y_955_, sizeof(void*)*2);
v___y_952_ = v_hash_957_;
goto v___jp_951_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0___boxed(lean_object* v_c_u2081_959_, lean_object* v_c_u2082_960_){
_start:
{
uint8_t v_res_961_; lean_object* v_r_962_; 
v_res_961_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v_c_u2081_959_, v_c_u2082_960_);
lean_dec_ref(v_c_u2082_960_);
lean_dec_ref(v_c_u2081_959_);
v_r_962_ = lean_box(v_res_961_);
return v_r_962_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(lean_object* v_n_963_, lean_object* v_as_964_, lean_object* v_lo_965_, lean_object* v_hi_966_){
_start:
{
lean_object* v___y_968_; uint8_t v___x_978_; 
v___x_978_ = lean_nat_dec_lt(v_lo_965_, v_hi_966_);
if (v___x_978_ == 0)
{
lean_dec(v_lo_965_);
return v_as_964_;
}
else
{
lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v_mid_981_; lean_object* v___y_983_; lean_object* v___y_989_; lean_object* v___x_994_; lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_979_ = lean_nat_add(v_lo_965_, v_hi_966_);
v___x_980_ = lean_unsigned_to_nat(1u);
v_mid_981_ = lean_nat_shiftr(v___x_979_, v___x_980_);
lean_dec(v___x_979_);
v___x_994_ = lean_array_fget_borrowed(v_as_964_, v_mid_981_);
v___x_995_ = lean_array_fget_borrowed(v_as_964_, v_lo_965_);
v___x_996_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v___x_994_, v___x_995_);
if (v___x_996_ == 0)
{
v___y_989_ = v_as_964_;
goto v___jp_988_;
}
else
{
lean_object* v___x_997_; 
v___x_997_ = lean_array_fswap(v_as_964_, v_lo_965_, v_mid_981_);
v___y_989_ = v___x_997_;
goto v___jp_988_;
}
v___jp_982_:
{
lean_object* v___x_984_; lean_object* v___x_985_; uint8_t v___x_986_; 
v___x_984_ = lean_array_fget_borrowed(v___y_983_, v_mid_981_);
v___x_985_ = lean_array_fget_borrowed(v___y_983_, v_hi_966_);
v___x_986_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v___x_984_, v___x_985_);
if (v___x_986_ == 0)
{
lean_dec(v_mid_981_);
v___y_968_ = v___y_983_;
goto v___jp_967_;
}
else
{
lean_object* v___x_987_; 
v___x_987_ = lean_array_fswap(v___y_983_, v_mid_981_, v_hi_966_);
lean_dec(v_mid_981_);
v___y_968_ = v___x_987_;
goto v___jp_967_;
}
}
v___jp_988_:
{
lean_object* v___x_990_; lean_object* v___x_991_; uint8_t v___x_992_; 
v___x_990_ = lean_array_fget_borrowed(v___y_989_, v_hi_966_);
v___x_991_ = lean_array_fget_borrowed(v___y_989_, v_lo_965_);
v___x_992_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___lam__0(v___x_990_, v___x_991_);
if (v___x_992_ == 0)
{
v___y_983_ = v___y_989_;
goto v___jp_982_;
}
else
{
lean_object* v___x_993_; 
v___x_993_ = lean_array_fswap(v___y_989_, v_lo_965_, v_hi_966_);
v___y_983_ = v___x_993_;
goto v___jp_982_;
}
}
}
v___jp_967_:
{
lean_object* v_pivot_969_; lean_object* v___x_970_; lean_object* v_fst_971_; lean_object* v_snd_972_; uint8_t v___x_973_; 
v_pivot_969_ = lean_array_fget(v___y_968_, v_hi_966_);
lean_inc_n(v_lo_965_, 2);
v___x_970_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(v_hi_966_, v_pivot_969_, v___y_968_, v_lo_965_, v_lo_965_);
lean_dec(v_pivot_969_);
v_fst_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_fst_971_);
v_snd_972_ = lean_ctor_get(v___x_970_, 1);
lean_inc(v_snd_972_);
lean_dec_ref(v___x_970_);
v___x_973_ = lean_nat_dec_le(v_hi_966_, v_fst_971_);
if (v___x_973_ == 0)
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; 
v___x_974_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_n_963_, v_snd_972_, v_lo_965_, v_fst_971_);
v___x_975_ = lean_unsigned_to_nat(1u);
v___x_976_ = lean_nat_add(v_fst_971_, v___x_975_);
lean_dec(v_fst_971_);
v_as_964_ = v___x_974_;
v_lo_965_ = v___x_976_;
goto _start;
}
else
{
lean_dec(v_fst_971_);
lean_dec(v_lo_965_);
return v_snd_972_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg___boxed(lean_object* v_n_998_, lean_object* v_as_999_, lean_object* v_lo_1000_, lean_object* v_hi_1001_){
_start:
{
lean_object* v_res_1002_; 
v_res_1002_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_n_998_, v_as_999_, v_lo_1000_, v_hi_1001_);
lean_dec(v_hi_1001_);
lean_dec(v_n_998_);
return v_res_1002_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(lean_object* v_b_1003_, lean_object* v_key_1004_, lean_object* v_x_1005_){
_start:
{
lean_object* v_zero_1006_; uint8_t v_isZero_1007_; 
v_zero_1006_ = lean_unsigned_to_nat(0u);
v_isZero_1007_ = lean_nat_dec_eq(v_x_1005_, v_zero_1006_);
if (v_isZero_1007_ == 1)
{
lean_object* v_values_1008_; lean_object* v___x_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; 
v_values_1008_ = lean_ctor_get(v_b_1003_, 0);
v___x_1009_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_values_1008_, v_key_1004_);
v___x_1010_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___x_1011_ = l_Lean_ConstTrie_mk___redArg(v_key_1004_, v___x_1009_, v___x_1010_);
lean_dec(v___x_1009_);
return v___x_1011_;
}
else
{
lean_object* v_values_1012_; lean_object* v_children_1013_; lean_object* v___y_1015_; lean_object* v___y_1019_; lean_object* v___y_1020_; lean_object* v___y_1021_; lean_object* v___y_1022_; lean_object* v___y_1025_; lean_object* v___y_1026_; lean_object* v___y_1027_; lean_object* v___y_1028_; lean_object* v_one_1030_; lean_object* v_n_1031_; lean_object* v___y_1033_; lean_object* v___x_1041_; 
v_values_1012_ = lean_ctor_get(v_b_1003_, 0);
v_children_1013_ = lean_ctor_get(v_b_1003_, 2);
v_one_1030_ = lean_unsigned_to_nat(1u);
v_n_1031_ = lean_nat_sub(v_x_1005_, v_one_1030_);
v___x_1041_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_children_1013_, v_key_1004_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v___x_1042_; 
v___x_1042_ = ((lean_object*)(l_Std_DHashMap_Internal_AssocList_Const_alter___at___00Std_DHashMap_Internal_Raw_u2080_Const_alter___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__2_spec__4___lam__0___closed__0));
v___y_1033_ = v___x_1042_;
goto v___jp_1032_;
}
else
{
lean_object* v_val_1043_; 
v_val_1043_ = lean_ctor_get(v___x_1041_, 0);
lean_inc(v_val_1043_);
lean_dec_ref_known(v___x_1041_, 1);
v___y_1033_ = v_val_1043_;
goto v___jp_1032_;
}
v___jp_1014_:
{
lean_object* v___x_1016_; lean_object* v___x_1017_; 
v___x_1016_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_values_1012_, v_key_1004_);
v___x_1017_ = l_Lean_ConstTrie_mk___redArg(v_key_1004_, v___x_1016_, v___y_1015_);
lean_dec(v___x_1016_);
return v___x_1017_;
}
v___jp_1018_:
{
lean_object* v___x_1023_; 
v___x_1023_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v___y_1020_, v___y_1019_, v___y_1021_, v___y_1022_);
lean_dec(v___y_1022_);
lean_dec(v___y_1020_);
v___y_1015_ = v___x_1023_;
goto v___jp_1014_;
}
v___jp_1024_:
{
uint8_t v___x_1029_; 
v___x_1029_ = lean_nat_dec_le(v___y_1028_, v___y_1025_);
if (v___x_1029_ == 0)
{
lean_dec(v___y_1025_);
lean_inc(v___y_1028_);
v___y_1019_ = v___y_1026_;
v___y_1020_ = v___y_1027_;
v___y_1021_ = v___y_1028_;
v___y_1022_ = v___y_1028_;
goto v___jp_1018_;
}
else
{
v___y_1019_ = v___y_1026_;
v___y_1020_ = v___y_1027_;
v___y_1021_ = v___y_1028_;
v___y_1022_ = v___y_1025_;
goto v___jp_1018_;
}
}
v___jp_1032_:
{
size_t v_sz_1034_; size_t v___x_1035_; lean_object* v_children_1036_; lean_object* v___x_1037_; uint8_t v___x_1038_; 
v_sz_1034_ = lean_array_size(v___y_1033_);
v___x_1035_ = ((size_t)0ULL);
v_children_1036_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_b_1003_, v_n_1031_, v_sz_1034_, v___x_1035_, v___y_1033_);
lean_dec(v_n_1031_);
v___x_1037_ = lean_array_get_size(v_children_1036_);
v___x_1038_ = lean_nat_dec_eq(v___x_1037_, v_zero_1006_);
if (v___x_1038_ == 0)
{
lean_object* v___x_1039_; uint8_t v___x_1040_; 
v___x_1039_ = lean_nat_sub(v___x_1037_, v_one_1030_);
v___x_1040_ = lean_nat_dec_le(v_zero_1006_, v___x_1039_);
if (v___x_1040_ == 0)
{
lean_inc(v___x_1039_);
v___y_1025_ = v___x_1039_;
v___y_1026_ = v_children_1036_;
v___y_1027_ = v___x_1037_;
v___y_1028_ = v___x_1039_;
goto v___jp_1024_;
}
else
{
v___y_1025_ = v___x_1039_;
v___y_1026_ = v_children_1036_;
v___y_1027_ = v___x_1037_;
v___y_1028_ = v_zero_1006_;
goto v___jp_1024_;
}
}
else
{
v___y_1015_ = v_children_1036_;
goto v___jp_1014_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(lean_object* v_b_1044_, lean_object* v_n_1045_, size_t v_sz_1046_, size_t v_i_1047_, lean_object* v_bs_1048_){
_start:
{
uint8_t v___x_1049_; 
v___x_1049_ = lean_usize_dec_lt(v_i_1047_, v_sz_1046_);
if (v___x_1049_ == 0)
{
return v_bs_1048_;
}
else
{
lean_object* v_v_1050_; lean_object* v___x_1051_; lean_object* v_bs_x27_1052_; lean_object* v___x_1053_; size_t v___x_1054_; size_t v___x_1055_; lean_object* v___x_1056_; 
v_v_1050_ = lean_array_uget(v_bs_1048_, v_i_1047_);
v___x_1051_ = lean_unsigned_to_nat(0u);
v_bs_x27_1052_ = lean_array_uset(v_bs_1048_, v_i_1047_, v___x_1051_);
v___x_1053_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1044_, v_v_1050_, v_n_1045_);
v___x_1054_ = ((size_t)1ULL);
v___x_1055_ = lean_usize_add(v_i_1047_, v___x_1054_);
v___x_1056_ = lean_array_uset(v_bs_x27_1052_, v_i_1047_, v___x_1053_);
v_i_1047_ = v___x_1055_;
v_bs_1048_ = v___x_1056_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg___boxed(lean_object* v_b_1058_, lean_object* v_n_1059_, lean_object* v_sz_1060_, lean_object* v_i_1061_, lean_object* v_bs_1062_){
_start:
{
size_t v_sz_boxed_1063_; size_t v_i_boxed_1064_; lean_object* v_res_1065_; 
v_sz_boxed_1063_ = lean_unbox_usize(v_sz_1060_);
lean_dec(v_sz_1060_);
v_i_boxed_1064_ = lean_unbox_usize(v_i_1061_);
lean_dec(v_i_1061_);
v_res_1065_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_b_1058_, v_n_1059_, v_sz_boxed_1063_, v_i_boxed_1064_, v_bs_1062_);
lean_dec(v_n_1059_);
lean_dec_ref(v_b_1058_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg___boxed(lean_object* v_b_1066_, lean_object* v_key_1067_, lean_object* v_x_1068_){
_start:
{
lean_object* v_res_1069_; 
v_res_1069_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1066_, v_key_1067_, v_x_1068_);
lean_dec(v_x_1068_);
lean_dec_ref(v_b_1066_);
return v_res_1069_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(lean_object* v_00_u03b1_1070_, lean_object* v_b_1071_, lean_object* v_key_1072_, lean_object* v_x_1073_){
_start:
{
lean_object* v___x_1074_; 
v___x_1074_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v_b_1071_, v_key_1072_, v_x_1073_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___boxed(lean_object* v_00_u03b1_1075_, lean_object* v_b_1076_, lean_object* v_key_1077_, lean_object* v_x_1078_){
_start:
{
lean_object* v_res_1079_; 
v_res_1079_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie(v_00_u03b1_1075_, v_b_1076_, v_key_1077_, v_x_1078_);
lean_dec(v_x_1078_);
lean_dec_ref(v_b_1076_);
return v_res_1079_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(lean_object* v_00_u03b2_1080_, lean_object* v_m_1081_, lean_object* v_a_1082_){
_start:
{
lean_object* v___x_1083_; 
v___x_1083_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___redArg(v_m_1081_, v_a_1082_);
return v___x_1083_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0___boxed(lean_object* v_00_u03b2_1084_, lean_object* v_m_1085_, lean_object* v_a_1086_){
_start:
{
lean_object* v_res_1087_; 
v_res_1087_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0(v_00_u03b2_1084_, v_m_1085_, v_a_1086_);
lean_dec(v_a_1086_);
lean_dec_ref(v_m_1085_);
return v_res_1087_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(lean_object* v_00_u03b1_1088_, lean_object* v_b_1089_, lean_object* v_n_1090_, size_t v_sz_1091_, size_t v_i_1092_, lean_object* v_bs_1093_){
_start:
{
lean_object* v___x_1094_; 
v___x_1094_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___redArg(v_b_1089_, v_n_1090_, v_sz_1091_, v_i_1092_, v_bs_1093_);
return v___x_1094_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1___boxed(lean_object* v_00_u03b1_1095_, lean_object* v_b_1096_, lean_object* v_n_1097_, lean_object* v_sz_1098_, lean_object* v_i_1099_, lean_object* v_bs_1100_){
_start:
{
size_t v_sz_boxed_1101_; size_t v_i_boxed_1102_; lean_object* v_res_1103_; 
v_sz_boxed_1101_ = lean_unbox_usize(v_sz_1098_);
lean_dec(v_sz_1098_);
v_i_boxed_1102_ = lean_unbox_usize(v_i_1099_);
lean_dec(v_i_1099_);
v_res_1103_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__1(v_00_u03b1_1095_, v_b_1096_, v_n_1097_, v_sz_boxed_1101_, v_i_boxed_1102_, v_bs_1100_);
lean_dec(v_n_1097_);
lean_dec_ref(v_b_1096_);
return v_res_1103_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(lean_object* v_00_u03b1_1104_, lean_object* v_n_1105_, lean_object* v_as_1106_, lean_object* v_lo_1107_, lean_object* v_hi_1108_, lean_object* v_w_1109_, lean_object* v_hlo_1110_, lean_object* v_hhi_1111_){
_start:
{
lean_object* v___x_1112_; 
v___x_1112_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___redArg(v_n_1105_, v_as_1106_, v_lo_1107_, v_hi_1108_);
return v___x_1112_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2___boxed(lean_object* v_00_u03b1_1113_, lean_object* v_n_1114_, lean_object* v_as_1115_, lean_object* v_lo_1116_, lean_object* v_hi_1117_, lean_object* v_w_1118_, lean_object* v_hlo_1119_, lean_object* v_hhi_1120_){
_start:
{
lean_object* v_res_1121_; 
v_res_1121_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2(v_00_u03b1_1113_, v_n_1114_, v_as_1115_, v_lo_1116_, v_hi_1117_, v_w_1118_, v_hlo_1119_, v_hhi_1120_);
lean_dec(v_hi_1117_);
lean_dec(v_n_1114_);
return v_res_1121_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(lean_object* v_00_u03b2_1122_, lean_object* v_a_1123_, lean_object* v_x_1124_){
_start:
{
lean_object* v___x_1125_; 
v___x_1125_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___redArg(v_a_1123_, v_x_1124_);
return v___x_1125_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1126_, lean_object* v_a_1127_, lean_object* v_x_1128_){
_start:
{
lean_object* v_res_1129_; 
v_res_1129_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__0_spec__0(v_00_u03b2_1126_, v_a_1127_, v_x_1128_);
lean_dec(v_x_1128_);
lean_dec(v_a_1127_);
return v_res_1129_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3(lean_object* v_00_u03b1_1130_, lean_object* v_n_1131_, lean_object* v_lo_1132_, lean_object* v_hi_1133_, lean_object* v_hhi_1134_, lean_object* v_pivot_1135_, lean_object* v_as_1136_, lean_object* v_i_1137_, lean_object* v_k_1138_, lean_object* v_ilo_1139_, lean_object* v_ik_1140_, lean_object* v_w_1141_){
_start:
{
lean_object* v___x_1142_; 
v___x_1142_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___redArg(v_hi_1133_, v_pivot_1135_, v_as_1136_, v_i_1137_, v_k_1138_);
return v___x_1142_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3___boxed(lean_object* v_00_u03b1_1143_, lean_object* v_n_1144_, lean_object* v_lo_1145_, lean_object* v_hi_1146_, lean_object* v_hhi_1147_, lean_object* v_pivot_1148_, lean_object* v_as_1149_, lean_object* v_i_1150_, lean_object* v_k_1151_, lean_object* v_ilo_1152_, lean_object* v_ik_1153_, lean_object* v_w_1154_){
_start:
{
lean_object* v_res_1155_; 
v_res_1155_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie_spec__2_spec__3(v_00_u03b1_1143_, v_n_1144_, v_lo_1145_, v_hi_1146_, v_hhi_1147_, v_pivot_1148_, v_as_1149_, v_i_1150_, v_k_1151_, v_ilo_1152_, v_ik_1153_, v_w_1154_);
lean_dec_ref(v_pivot_1148_);
lean_dec(v_hi_1146_);
lean_dec(v_lo_1145_);
lean_dec(v_n_1144_);
return v_res_1155_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(lean_object* v_as_1156_, size_t v_i_1157_, size_t v_stop_1158_, lean_object* v_b_1159_){
_start:
{
lean_object* v___y_1161_; uint8_t v___x_1165_; 
v___x_1165_ = lean_usize_dec_eq(v_i_1157_, v_stop_1158_);
if (v___x_1165_ == 0)
{
lean_object* v___x_1166_; lean_object* v___x_1167_; uint8_t v___x_1168_; 
v___x_1166_ = lean_array_uget_borrowed(v_as_1156_, v_i_1157_);
v___x_1167_ = l_Lean_Name_getNumParts(v___x_1166_);
v___x_1168_ = lean_nat_dec_le(v_b_1159_, v___x_1167_);
if (v___x_1168_ == 0)
{
lean_dec(v___x_1167_);
v___y_1161_ = v_b_1159_;
goto v___jp_1160_;
}
else
{
lean_dec(v_b_1159_);
v___y_1161_ = v___x_1167_;
goto v___jp_1160_;
}
}
else
{
return v_b_1159_;
}
v___jp_1160_:
{
size_t v___x_1162_; size_t v___x_1163_; 
v___x_1162_ = ((size_t)1ULL);
v___x_1163_ = lean_usize_add(v_i_1157_, v___x_1162_);
v_i_1157_ = v___x_1163_;
v_b_1159_ = v___y_1161_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0___boxed(lean_object* v_as_1169_, lean_object* v_i_1170_, lean_object* v_stop_1171_, lean_object* v_b_1172_){
_start:
{
size_t v_i_boxed_1173_; size_t v_stop_boxed_1174_; lean_object* v_res_1175_; 
v_i_boxed_1173_ = lean_unbox_usize(v_i_1170_);
lean_dec(v_i_1170_);
v_stop_boxed_1174_ = lean_unbox_usize(v_stop_1171_);
lean_dec(v_stop_1171_);
v_res_1175_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(v_as_1169_, v_i_boxed_1173_, v_stop_boxed_1174_, v_b_1172_);
lean_dec_ref(v_as_1169_);
return v_res_1175_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(lean_object* v_names_1176_){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; uint8_t v___x_1179_; 
v___x_1177_ = lean_unsigned_to_nat(0u);
v___x_1178_ = lean_array_get_size(v_names_1176_);
v___x_1179_ = lean_nat_dec_lt(v___x_1177_, v___x_1178_);
if (v___x_1179_ == 0)
{
return v___x_1177_;
}
else
{
size_t v___x_1180_; size_t v___x_1181_; lean_object* v___x_1182_; 
v___x_1180_ = ((size_t)0ULL);
v___x_1181_ = lean_usize_of_nat(v___x_1178_);
v___x_1182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound_spec__0(v_names_1176_, v___x_1180_, v___x_1181_, v___x_1177_);
return v___x_1182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound___boxed(lean_object* v_names_1183_){
_start:
{
lean_object* v_res_1184_; 
v_res_1184_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(v_names_1183_);
lean_dec_ref(v_names_1183_);
return v_res_1184_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(lean_object* v_a_1185_, lean_object* v_b_1186_, lean_object* v_x_1187_){
_start:
{
if (lean_obj_tag(v_x_1187_) == 0)
{
lean_dec(v_b_1186_);
lean_dec(v_a_1185_);
return v_x_1187_;
}
else
{
lean_object* v_key_1188_; lean_object* v_value_1189_; lean_object* v_tail_1190_; lean_object* v___x_1192_; uint8_t v_isShared_1193_; uint8_t v_isSharedCheck_1202_; 
v_key_1188_ = lean_ctor_get(v_x_1187_, 0);
v_value_1189_ = lean_ctor_get(v_x_1187_, 1);
v_tail_1190_ = lean_ctor_get(v_x_1187_, 2);
v_isSharedCheck_1202_ = !lean_is_exclusive(v_x_1187_);
if (v_isSharedCheck_1202_ == 0)
{
v___x_1192_ = v_x_1187_;
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
else
{
lean_inc(v_tail_1190_);
lean_inc(v_value_1189_);
lean_inc(v_key_1188_);
lean_dec(v_x_1187_);
v___x_1192_ = lean_box(0);
v_isShared_1193_ = v_isSharedCheck_1202_;
goto v_resetjp_1191_;
}
v_resetjp_1191_:
{
uint8_t v___x_1194_; 
v___x_1194_ = lean_name_eq(v_key_1188_, v_a_1185_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(v_a_1185_, v_b_1186_, v_tail_1190_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 2, v___x_1195_);
v___x_1197_ = v___x_1192_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_key_1188_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_value_1189_);
lean_ctor_set(v_reuseFailAlloc_1198_, 2, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
return v___x_1197_;
}
}
else
{
lean_object* v___x_1200_; 
lean_dec(v_value_1189_);
lean_dec(v_key_1188_);
if (v_isShared_1193_ == 0)
{
lean_ctor_set(v___x_1192_, 1, v_b_1186_);
lean_ctor_set(v___x_1192_, 0, v_a_1185_);
v___x_1200_ = v___x_1192_;
goto v_reusejp_1199_;
}
else
{
lean_object* v_reuseFailAlloc_1201_; 
v_reuseFailAlloc_1201_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1201_, 0, v_a_1185_);
lean_ctor_set(v_reuseFailAlloc_1201_, 1, v_b_1186_);
lean_ctor_set(v_reuseFailAlloc_1201_, 2, v_tail_1190_);
v___x_1200_ = v_reuseFailAlloc_1201_;
goto v_reusejp_1199_;
}
v_reusejp_1199_:
{
return v___x_1200_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(lean_object* v_m_1203_, lean_object* v_a_1204_, lean_object* v_b_1205_){
_start:
{
lean_object* v_size_1206_; lean_object* v_buckets_1207_; lean_object* v___x_1209_; uint8_t v_isShared_1210_; uint8_t v_isSharedCheck_1253_; 
v_size_1206_ = lean_ctor_get(v_m_1203_, 0);
v_buckets_1207_ = lean_ctor_get(v_m_1203_, 1);
v_isSharedCheck_1253_ = !lean_is_exclusive(v_m_1203_);
if (v_isSharedCheck_1253_ == 0)
{
v___x_1209_ = v_m_1203_;
v_isShared_1210_ = v_isSharedCheck_1253_;
goto v_resetjp_1208_;
}
else
{
lean_inc(v_buckets_1207_);
lean_inc(v_size_1206_);
lean_dec(v_m_1203_);
v___x_1209_ = lean_box(0);
v_isShared_1210_ = v_isSharedCheck_1253_;
goto v_resetjp_1208_;
}
v_resetjp_1208_:
{
lean_object* v___x_1211_; uint64_t v___y_1213_; 
v___x_1211_ = lean_array_get_size(v_buckets_1207_);
if (lean_obj_tag(v_a_1204_) == 0)
{
uint64_t v___x_1251_; 
v___x_1251_ = 1723ULL;
v___y_1213_ = v___x_1251_;
goto v___jp_1212_;
}
else
{
uint64_t v_hash_1252_; 
v_hash_1252_ = lean_ctor_get_uint64(v_a_1204_, sizeof(void*)*2);
v___y_1213_ = v_hash_1252_;
goto v___jp_1212_;
}
v___jp_1212_:
{
uint64_t v___x_1214_; uint64_t v___x_1215_; uint64_t v_fold_1216_; uint64_t v___x_1217_; uint64_t v___x_1218_; uint64_t v___x_1219_; size_t v___x_1220_; size_t v___x_1221_; size_t v___x_1222_; size_t v___x_1223_; size_t v___x_1224_; lean_object* v_bkt_1225_; uint8_t v___x_1226_; 
v___x_1214_ = 32ULL;
v___x_1215_ = lean_uint64_shift_right(v___y_1213_, v___x_1214_);
v_fold_1216_ = lean_uint64_xor(v___y_1213_, v___x_1215_);
v___x_1217_ = 16ULL;
v___x_1218_ = lean_uint64_shift_right(v_fold_1216_, v___x_1217_);
v___x_1219_ = lean_uint64_xor(v_fold_1216_, v___x_1218_);
v___x_1220_ = lean_uint64_to_usize(v___x_1219_);
v___x_1221_ = lean_usize_of_nat(v___x_1211_);
v___x_1222_ = ((size_t)1ULL);
v___x_1223_ = lean_usize_sub(v___x_1221_, v___x_1222_);
v___x_1224_ = lean_usize_land(v___x_1220_, v___x_1223_);
v_bkt_1225_ = lean_array_uget_borrowed(v_buckets_1207_, v___x_1224_);
v___x_1226_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__0_spec__0___redArg(v_a_1204_, v_bkt_1225_);
if (v___x_1226_ == 0)
{
lean_object* v___x_1227_; lean_object* v_size_x27_1228_; lean_object* v___x_1229_; lean_object* v_buckets_x27_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; uint8_t v___x_1236_; 
v___x_1227_ = lean_unsigned_to_nat(1u);
v_size_x27_1228_ = lean_nat_add(v_size_1206_, v___x_1227_);
lean_dec(v_size_1206_);
lean_inc(v_bkt_1225_);
v___x_1229_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1229_, 0, v_a_1204_);
lean_ctor_set(v___x_1229_, 1, v_b_1205_);
lean_ctor_set(v___x_1229_, 2, v_bkt_1225_);
v_buckets_x27_1230_ = lean_array_uset(v_buckets_1207_, v___x_1224_, v___x_1229_);
v___x_1231_ = lean_unsigned_to_nat(4u);
v___x_1232_ = lean_nat_mul(v_size_x27_1228_, v___x_1231_);
v___x_1233_ = lean_unsigned_to_nat(3u);
v___x_1234_ = lean_nat_div(v___x_1232_, v___x_1233_);
lean_dec(v___x_1232_);
v___x_1235_ = lean_array_get_size(v_buckets_x27_1230_);
v___x_1236_ = lean_nat_dec_le(v___x_1234_, v___x_1235_);
lean_dec(v___x_1234_);
if (v___x_1236_ == 0)
{
lean_object* v_val_1237_; lean_object* v___x_1239_; 
v_val_1237_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName_spec__1_spec__2___redArg(v_buckets_x27_1230_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v_val_1237_);
lean_ctor_set(v___x_1209_, 0, v_size_x27_1228_);
v___x_1239_ = v___x_1209_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1240_; 
v_reuseFailAlloc_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1240_, 0, v_size_x27_1228_);
lean_ctor_set(v_reuseFailAlloc_1240_, 1, v_val_1237_);
v___x_1239_ = v_reuseFailAlloc_1240_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
return v___x_1239_;
}
}
else
{
lean_object* v___x_1242_; 
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v_buckets_x27_1230_);
lean_ctor_set(v___x_1209_, 0, v_size_x27_1228_);
v___x_1242_ = v___x_1209_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1243_; 
v_reuseFailAlloc_1243_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1243_, 0, v_size_x27_1228_);
lean_ctor_set(v_reuseFailAlloc_1243_, 1, v_buckets_x27_1230_);
v___x_1242_ = v_reuseFailAlloc_1243_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
return v___x_1242_;
}
}
}
else
{
lean_object* v___x_1244_; lean_object* v_buckets_x27_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1249_; 
lean_inc(v_bkt_1225_);
v___x_1244_ = lean_box(0);
v_buckets_x27_1245_ = lean_array_uset(v_buckets_1207_, v___x_1224_, v___x_1244_);
v___x_1246_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(v_a_1204_, v_b_1205_, v_bkt_1225_);
v___x_1247_ = lean_array_uset(v_buckets_x27_1245_, v___x_1224_, v___x_1246_);
if (v_isShared_1210_ == 0)
{
lean_ctor_set(v___x_1209_, 1, v___x_1247_);
v___x_1249_ = v___x_1209_;
goto v_reusejp_1248_;
}
else
{
lean_object* v_reuseFailAlloc_1250_; 
v_reuseFailAlloc_1250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1250_, 0, v_size_1206_);
lean_ctor_set(v_reuseFailAlloc_1250_, 1, v___x_1247_);
v___x_1249_ = v_reuseFailAlloc_1250_;
goto v_reusejp_1248_;
}
v_reusejp_1248_:
{
return v___x_1249_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(lean_object* v_names_1254_, lean_object* v_vals_1255_, lean_object* v_i_1256_, lean_object* v_b_1257_){
_start:
{
lean_object* v___x_1258_; uint8_t v___x_1259_; 
v___x_1258_ = lean_array_get_size(v_names_1254_);
v___x_1259_ = lean_nat_dec_lt(v_i_1256_, v___x_1258_);
if (v___x_1259_ == 0)
{
lean_dec(v_i_1256_);
return v_b_1257_;
}
else
{
lean_object* v___x_1260_; uint8_t v___x_1261_; 
v___x_1260_ = lean_array_get_size(v_vals_1255_);
v___x_1261_ = lean_nat_dec_lt(v_i_1256_, v___x_1260_);
if (v___x_1261_ == 0)
{
lean_dec(v_i_1256_);
return v_b_1257_;
}
else
{
lean_object* v_values_1262_; lean_object* v_seen_1263_; lean_object* v_children_1264_; lean_object* v___x_1266_; uint8_t v_isShared_1267_; uint8_t v_isSharedCheck_1278_; 
v_values_1262_ = lean_ctor_get(v_b_1257_, 0);
v_seen_1263_ = lean_ctor_get(v_b_1257_, 1);
v_children_1264_ = lean_ctor_get(v_b_1257_, 2);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_b_1257_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1266_ = v_b_1257_;
v_isShared_1267_ = v_isSharedCheck_1278_;
goto v_resetjp_1265_;
}
else
{
lean_inc(v_children_1264_);
lean_inc(v_seen_1263_);
lean_inc(v_values_1262_);
lean_dec(v_b_1257_);
v___x_1266_ = lean_box(0);
v_isShared_1267_ = v_isSharedCheck_1278_;
goto v_resetjp_1265_;
}
v_resetjp_1265_:
{
lean_object* v___x_1268_; lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v_b_1272_; 
v___x_1268_ = lean_array_fget_borrowed(v_names_1254_, v_i_1256_);
v___x_1269_ = lean_array_fget_borrowed(v_vals_1255_, v_i_1256_);
lean_inc(v___x_1269_);
lean_inc(v___x_1268_);
v___x_1270_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(v_values_1262_, v___x_1268_, v___x_1269_);
if (v_isShared_1267_ == 0)
{
lean_ctor_set(v___x_1266_, 0, v___x_1270_);
v_b_1272_ = v___x_1266_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1277_; 
v_reuseFailAlloc_1277_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1277_, 0, v___x_1270_);
lean_ctor_set(v_reuseFailAlloc_1277_, 1, v_seen_1263_);
lean_ctor_set(v_reuseFailAlloc_1277_, 2, v_children_1264_);
v_b_1272_ = v_reuseFailAlloc_1277_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
lean_object* v___x_1273_; lean_object* v___x_1274_; lean_object* v___x_1275_; 
v___x_1273_ = lean_unsigned_to_nat(1u);
v___x_1274_ = lean_nat_add(v_i_1256_, v___x_1273_);
lean_dec(v_i_1256_);
lean_inc(v___x_1268_);
v___x_1275_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v_b_1272_, v___x_1268_);
v_i_1256_ = v___x_1274_;
v_b_1257_ = v___x_1275_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg___boxed(lean_object* v_names_1279_, lean_object* v_vals_1280_, lean_object* v_i_1281_, lean_object* v_b_1282_){
_start:
{
lean_object* v_res_1283_; 
v_res_1283_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(v_names_1279_, v_vals_1280_, v_i_1281_, v_b_1282_);
lean_dec_ref(v_vals_1280_);
lean_dec_ref(v_names_1279_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go(lean_object* v_00_u03b1_1284_, lean_object* v_names_1285_, lean_object* v_vals_1286_, lean_object* v_i_1287_, lean_object* v_b_1288_){
_start:
{
lean_object* v___x_1289_; 
v___x_1289_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(v_names_1285_, v_vals_1286_, v_i_1287_, v_b_1288_);
return v___x_1289_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___boxed(lean_object* v_00_u03b1_1290_, lean_object* v_names_1291_, lean_object* v_vals_1292_, lean_object* v_i_1293_, lean_object* v_b_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go(v_00_u03b1_1290_, v_names_1291_, v_vals_1292_, v_i_1293_, v_b_1294_);
lean_dec_ref(v_vals_1292_);
lean_dec_ref(v_names_1291_);
return v_res_1295_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0(lean_object* v_00_u03b2_1296_, lean_object* v_m_1297_, lean_object* v_a_1298_, lean_object* v_b_1299_){
_start:
{
lean_object* v___x_1300_; 
v___x_1300_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(v_m_1297_, v_a_1298_, v_b_1299_);
return v___x_1300_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0(lean_object* v_00_u03b2_1301_, lean_object* v_a_1302_, lean_object* v_b_1303_, lean_object* v_x_1304_){
_start:
{
lean_object* v___x_1305_; 
v___x_1305_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0_spec__0___redArg(v_a_1302_, v_b_1303_, v_x_1304_);
return v___x_1305_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0(void){
_start:
{
lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; 
v___x_1306_ = lean_box(0);
v___x_1307_ = lean_unsigned_to_nat(16u);
v___x_1308_ = lean_mk_array(v___x_1307_, v___x_1306_);
return v___x_1308_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1(void){
_start:
{
lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
v___x_1309_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__0, &l_Lean_ConstTrie_ofArrays___redArg___closed__0_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__0);
v___x_1310_ = lean_unsigned_to_nat(0u);
v___x_1311_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1311_, 0, v___x_1310_);
lean_ctor_set(v___x_1311_, 1, v___x_1309_);
return v___x_1311_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2(void){
_start:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; 
v___x_1312_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v___x_1313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1313_, 0, v___x_1312_);
lean_ctor_set(v___x_1313_, 1, v___x_1312_);
lean_ctor_set(v___x_1313_, 2, v___x_1312_);
return v___x_1313_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg(lean_object* v_names_1314_, lean_object* v_vals_1315_){
_start:
{
lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; 
v___x_1316_ = lean_unsigned_to_nat(0u);
v___x_1317_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__2, &l_Lean_ConstTrie_ofArrays___redArg___closed__2_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__2);
v___x_1318_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go___redArg(v_names_1314_, v_vals_1315_, v___x_1316_, v___x_1317_);
v___x_1319_ = lean_box(0);
v___x_1320_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(v_names_1314_);
v___x_1321_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v___x_1318_, v___x_1319_, v___x_1320_);
lean_dec(v___x_1320_);
lean_dec_ref(v___x_1318_);
return v___x_1321_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___redArg___boxed(lean_object* v_names_1322_, lean_object* v_vals_1323_){
_start:
{
lean_object* v_res_1324_; 
v_res_1324_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1322_, v_vals_1323_);
lean_dec_ref(v_vals_1323_);
lean_dec_ref(v_names_1322_);
return v_res_1324_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays(lean_object* v_00_u03b1_1325_, lean_object* v_names_1326_, lean_object* v_vals_1327_){
_start:
{
lean_object* v___x_1328_; 
v___x_1328_ = l_Lean_ConstTrie_ofArrays___redArg(v_names_1326_, v_vals_1327_);
return v___x_1328_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofArrays___boxed(lean_object* v_00_u03b1_1329_, lean_object* v_names_1330_, lean_object* v_vals_1331_){
_start:
{
lean_object* v_res_1332_; 
v_res_1332_ = l_Lean_ConstTrie_ofArrays(v_00_u03b1_1329_, v_names_1330_, v_vals_1331_);
lean_dec_ref(v_vals_1331_);
lean_dec_ref(v_names_1330_);
return v_res_1332_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(lean_object* v_as_1333_, size_t v_sz_1334_, size_t v_i_1335_, lean_object* v_b_1336_){
_start:
{
uint8_t v___x_1337_; 
v___x_1337_ = lean_usize_dec_lt(v_i_1335_, v_sz_1334_);
if (v___x_1337_ == 0)
{
return v_b_1336_;
}
else
{
lean_object* v_values_1338_; lean_object* v_seen_1339_; lean_object* v_children_1340_; lean_object* v___x_1342_; uint8_t v_isShared_1343_; uint8_t v_isSharedCheck_1354_; 
v_values_1338_ = lean_ctor_get(v_b_1336_, 0);
v_seen_1339_ = lean_ctor_get(v_b_1336_, 1);
v_children_1340_ = lean_ctor_get(v_b_1336_, 2);
v_isSharedCheck_1354_ = !lean_is_exclusive(v_b_1336_);
if (v_isSharedCheck_1354_ == 0)
{
v___x_1342_ = v_b_1336_;
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
else
{
lean_inc(v_children_1340_);
lean_inc(v_seen_1339_);
lean_inc(v_values_1338_);
lean_dec(v_b_1336_);
v___x_1342_ = lean_box(0);
v_isShared_1343_ = v_isSharedCheck_1354_;
goto v_resetjp_1341_;
}
v_resetjp_1341_:
{
lean_object* v_a_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1348_; 
v_a_1344_ = lean_array_uget_borrowed(v_as_1333_, v_i_1335_);
v___x_1345_ = lean_box(0);
lean_inc(v_a_1344_);
v___x_1346_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00__private_Lean_ConstTrie_0__Lean_ConstTrie_ofArrays_go_spec__0___redArg(v_values_1338_, v_a_1344_, v___x_1345_);
if (v_isShared_1343_ == 0)
{
lean_ctor_set(v___x_1342_, 0, v___x_1346_);
v___x_1348_ = v___x_1342_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1346_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_seen_1339_);
lean_ctor_set(v_reuseFailAlloc_1353_, 2, v_children_1340_);
v___x_1348_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; size_t v___x_1350_; size_t v___x_1351_; 
lean_inc(v_a_1344_);
v___x_1349_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_addName___redArg(v___x_1348_, v_a_1344_);
v___x_1350_ = ((size_t)1ULL);
v___x_1351_ = lean_usize_add(v_i_1335_, v___x_1350_);
v_i_1335_ = v___x_1351_;
v_b_1336_ = v___x_1349_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0___boxed(lean_object* v_as_1355_, lean_object* v_sz_1356_, lean_object* v_i_1357_, lean_object* v_b_1358_){
_start:
{
size_t v_sz_boxed_1359_; size_t v_i_boxed_1360_; lean_object* v_res_1361_; 
v_sz_boxed_1359_ = lean_unbox_usize(v_sz_1356_);
lean_dec(v_sz_1356_);
v_i_boxed_1360_ = lean_unbox_usize(v_i_1357_);
lean_dec(v_i_1357_);
v_res_1361_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_as_1355_, v_sz_boxed_1359_, v_i_boxed_1360_, v_b_1358_);
lean_dec_ref(v_as_1355_);
return v_res_1361_;
}
}
static lean_object* _init_l_Lean_ConstTrie_ofNames___closed__0(void){
_start:
{
lean_object* v___x_1362_; lean_object* v_b_1363_; 
v___x_1362_ = lean_obj_once(&l_Lean_ConstTrie_ofArrays___redArg___closed__1, &l_Lean_ConstTrie_ofArrays___redArg___closed__1_once, _init_l_Lean_ConstTrie_ofArrays___redArg___closed__1);
v_b_1363_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_b_1363_, 0, v___x_1362_);
lean_ctor_set(v_b_1363_, 1, v___x_1362_);
lean_ctor_set(v_b_1363_, 2, v___x_1362_);
return v_b_1363_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames(lean_object* v_names_1364_){
_start:
{
lean_object* v_b_1365_; size_t v_sz_1366_; size_t v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; 
v_b_1365_ = lean_obj_once(&l_Lean_ConstTrie_ofNames___closed__0, &l_Lean_ConstTrie_ofNames___closed__0_once, _init_l_Lean_ConstTrie_ofNames___closed__0);
v_sz_1366_ = lean_array_size(v_names_1364_);
v___x_1367_ = ((size_t)0ULL);
v___x_1368_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_ConstTrie_ofNames_spec__0(v_names_1364_, v_sz_1366_, v___x_1367_, v_b_1365_);
v___x_1369_ = lean_box(0);
v___x_1370_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_depthBound(v_names_1364_);
v___x_1371_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_Builder_toTrie___redArg(v___x_1368_, v___x_1369_, v___x_1370_);
lean_dec(v___x_1370_);
lean_dec_ref(v___x_1368_);
return v___x_1371_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_ofNames___boxed(lean_object* v_names_1372_){
_start:
{
lean_object* v_res_1373_; 
v_res_1373_ = l_Lean_ConstTrie_ofNames(v_names_1372_);
lean_dec_ref(v_names_1372_);
return v_res_1373_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl(void){
_start:
{
lean_object* v___x_1374_; 
v___x_1374_ = lean_box(0);
return v___x_1374_;
}
}
LEAN_EXPORT lean_object* l_Lean_LookupCache_new___boxed(lean_object* v_a_00___x40___internal___hyg_1376_){
_start:
{
lean_object* v_res_1377_; 
v_res_1377_ = lean_imported_consts_cache_new();
return v_res_1377_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg(lean_object* v_x_1378_){
_start:
{
lean_object* v___x_1379_; 
v___x_1379_ = lean_obj_tag_nat(v_x_1378_);
return v___x_1379_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___redArg___boxed(lean_object* v_x_1380_){
_start:
{
lean_object* v_res_1381_; 
v_res_1381_ = l_Lean_ImportedTree_ctorIdx___impl___redArg(v_x_1380_);
lean_dec_ref(v_x_1380_);
return v_res_1381_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl(lean_object* v_00_u03b1_1382_, lean_object* v_x_1383_){
_start:
{
lean_object* v___x_1384_; 
v___x_1384_ = lean_obj_tag_nat(v_x_1383_);
return v___x_1384_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorIdx___impl___boxed(lean_object* v_00_u03b1_1385_, lean_object* v_x_1386_){
_start:
{
lean_object* v_res_1387_; 
v_res_1387_ = l_Lean_ImportedTree_ctorIdx___impl(v_00_u03b1_1385_, v_x_1386_);
lean_dec_ref(v_x_1386_);
return v_res_1387_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___redArg(lean_object* v_t_1388_, lean_object* v_k_1389_){
_start:
{
if (lean_obj_tag(v_t_1388_) == 0)
{
lean_object* v_modIdx_1390_; lean_object* v_tree_1391_; lean_object* v___x_1392_; 
v_modIdx_1390_ = lean_ctor_get(v_t_1388_, 0);
lean_inc(v_modIdx_1390_);
v_tree_1391_ = lean_ctor_get(v_t_1388_, 1);
lean_inc_ref(v_tree_1391_);
lean_dec_ref_known(v_t_1388_, 2);
v___x_1392_ = lean_apply_2(v_k_1389_, v_modIdx_1390_, v_tree_1391_);
return v___x_1392_;
}
else
{
lean_object* v_key_1393_; lean_object* v_entry_x3f_1394_; lean_object* v_children_1395_; lean_object* v___x_1396_; 
v_key_1393_ = lean_ctor_get(v_t_1388_, 0);
lean_inc(v_key_1393_);
v_entry_x3f_1394_ = lean_ctor_get(v_t_1388_, 1);
lean_inc(v_entry_x3f_1394_);
v_children_1395_ = lean_ctor_get(v_t_1388_, 2);
lean_inc_ref(v_children_1395_);
lean_dec_ref(v_t_1388_);
v___x_1396_ = lean_apply_3(v_k_1389_, v_key_1393_, v_entry_x3f_1394_, v_children_1395_);
return v___x_1396_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim(lean_object* v_00_u03b1_1397_, lean_object* v_motive__1_1398_, lean_object* v_ctorIdx_1399_, lean_object* v_t_1400_, lean_object* v_h_1401_, lean_object* v_k_1402_){
_start:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1400_, v_k_1402_);
return v___x_1403_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_ctorElim___boxed(lean_object* v_00_u03b1_1404_, lean_object* v_motive__1_1405_, lean_object* v_ctorIdx_1406_, lean_object* v_t_1407_, lean_object* v_h_1408_, lean_object* v_k_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = l_Lean_ImportedTree_ctorElim(v_00_u03b1_1404_, v_motive__1_1405_, v_ctorIdx_1406_, v_t_1407_, v_h_1408_, v_k_1409_);
lean_dec(v_ctorIdx_1406_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim___redArg(lean_object* v_t_1411_, lean_object* v_mod_1412_){
_start:
{
lean_object* v___x_1413_; 
v___x_1413_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1411_, v_mod_1412_);
return v___x_1413_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_mod_elim(lean_object* v_00_u03b1_1414_, lean_object* v_motive__1_1415_, lean_object* v_t_1416_, lean_object* v_h_1417_, lean_object* v_mod_1418_){
_start:
{
lean_object* v___x_1419_; 
v___x_1419_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1416_, v_mod_1418_);
return v___x_1419_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim___redArg(lean_object* v_t_1420_, lean_object* v_merged_1421_){
_start:
{
lean_object* v___x_1422_; 
v___x_1422_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1420_, v_merged_1421_);
return v___x_1422_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_merged_elim(lean_object* v_00_u03b1_1423_, lean_object* v_motive__1_1424_, lean_object* v_t_1425_, lean_object* v_h_1426_, lean_object* v_merged_1427_){
_start:
{
lean_object* v___x_1428_; 
v___x_1428_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1425_, v_merged_1427_);
return v___x_1428_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim___redArg(lean_object* v_t_1429_, lean_object* v_lazy_1430_){
_start:
{
lean_object* v___x_1431_; 
v___x_1431_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1429_, v_lazy_1430_);
return v___x_1431_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedTree_lazy_elim(lean_object* v_00_u03b1_1432_, lean_object* v_motive__1_1433_, lean_object* v_t_1434_, lean_object* v_h_1435_, lean_object* v_lazy_1436_){
_start:
{
lean_object* v___x_1437_; 
v___x_1437_ = l_Lean_ImportedTree_ctorElim___redArg(v_t_1434_, v_lazy_1436_);
return v___x_1437_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg(){
_start:
{
lean_object* v___x_1445_; 
v___x_1445_ = ((lean_object*)(l_Lean_instInhabitedImportedTree___redArg___closed__1));
return v___x_1445_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree___redArg___boxed(lean_object* v___dummy_1446_){
_start:
{
lean_object* v_res_1447_; 
v_res_1447_ = l_Lean_instInhabitedImportedTree___redArg();
return v_res_1447_;
}
}
static lean_object* _init_l_Lean_instInhabitedImportedTree___closed__0(void){
_start:
{
lean_object* v___x_1448_; 
v___x_1448_ = l_Lean_instInhabitedImportedTree___redArg();
return v___x_1448_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedTree(lean_object* v_00_u03b1_1449_){
_start:
{
lean_object* v___x_1450_; 
v___x_1450_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
return v___x_1450_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg(){
_start:
{
lean_object* v___x_1459_; 
v___x_1459_ = ((lean_object*)(l_Lean_instInhabitedImportedConsts___redArg___closed__1));
return v___x_1459_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts___redArg___boxed(lean_object* v___dummy_1460_){
_start:
{
lean_object* v_res_1461_; 
v_res_1461_ = l_Lean_instInhabitedImportedConsts___redArg();
return v_res_1461_;
}
}
static lean_object* _init_l_Lean_instInhabitedImportedConsts___closed__0(void){
_start:
{
lean_object* v___x_1462_; 
v___x_1462_ = l_Lean_instInhabitedImportedConsts___redArg();
return v___x_1462_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedImportedConsts(lean_object* v_00_u03b1_1463_){
_start:
{
lean_object* v___x_1464_; 
v___x_1464_ = lean_obj_once(&l_Lean_instInhabitedImportedConsts___closed__0, &l_Lean_instInhabitedImportedConsts___closed__0_once, _init_l_Lean_instInhabitedImportedConsts___closed__0);
return v___x_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(lean_object* v_x_1465_){
_start:
{
if (lean_obj_tag(v_x_1465_) == 0)
{
lean_object* v_tree_1466_; lean_object* v_key_1467_; 
v_tree_1466_ = lean_ctor_get(v_x_1465_, 1);
v_key_1467_ = lean_ctor_get(v_tree_1466_, 0);
lean_inc(v_key_1467_);
return v_key_1467_;
}
else
{
lean_object* v_key_1468_; 
v_key_1468_ = lean_ctor_get(v_x_1465_, 0);
lean_inc(v_key_1468_);
return v_key_1468_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg___boxed(lean_object* v_x_1469_){
_start:
{
lean_object* v_res_1470_; 
v_res_1470_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v_x_1469_);
lean_dec_ref(v_x_1469_);
return v_res_1470_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key(lean_object* v_00_u03b1_1471_, lean_object* v_x_1472_){
_start:
{
lean_object* v___x_1473_; 
v___x_1473_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v_x_1472_);
return v___x_1473_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___boxed(lean_object* v_00_u03b1_1474_, lean_object* v_x_1475_){
_start:
{
lean_object* v_res_1476_; 
v_res_1476_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key(v_00_u03b1_1474_, v_x_1475_);
lean_dec_ref(v_x_1475_);
return v_res_1476_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(lean_object* v_cs_1477_, uint64_t v_h_1478_, lean_object* v_lo_1479_, lean_object* v_hi_1480_){
_start:
{
uint8_t v___x_1481_; 
v___x_1481_ = lean_nat_dec_lt(v_lo_1479_, v_hi_1480_);
if (v___x_1481_ == 0)
{
lean_dec(v_hi_1480_);
return v_lo_1479_;
}
else
{
lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v_mid_1485_; uint64_t v___y_1487_; lean_object* v___x_1492_; lean_object* v___x_1493_; 
v___x_1482_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
v___x_1483_ = lean_nat_add(v_lo_1479_, v_hi_1480_);
v___x_1484_ = lean_unsigned_to_nat(1u);
v_mid_1485_ = lean_nat_shiftr(v___x_1483_, v___x_1484_);
lean_dec(v___x_1483_);
v___x_1492_ = lean_array_get_borrowed(v___x_1482_, v_cs_1477_, v_mid_1485_);
v___x_1493_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v___x_1492_);
if (lean_obj_tag(v___x_1493_) == 0)
{
uint64_t v___x_1494_; 
v___x_1494_ = 1723ULL;
v___y_1487_ = v___x_1494_;
goto v___jp_1486_;
}
else
{
uint64_t v_hash_1495_; 
v_hash_1495_ = lean_ctor_get_uint64(v___x_1493_, sizeof(void*)*2);
lean_dec(v___x_1493_);
v___y_1487_ = v_hash_1495_;
goto v___jp_1486_;
}
v___jp_1486_:
{
uint8_t v___x_1488_; 
v___x_1488_ = lean_uint64_dec_lt(v___y_1487_, v_h_1478_);
if (v___x_1488_ == 0)
{
lean_dec(v_hi_1480_);
v_hi_1480_ = v_mid_1485_;
goto _start;
}
else
{
lean_object* v___x_1490_; 
lean_dec(v_lo_1479_);
v___x_1490_ = lean_nat_add(v_mid_1485_, v___x_1484_);
lean_dec(v_mid_1485_);
v_lo_1479_ = v___x_1490_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg___boxed(lean_object* v_cs_1496_, lean_object* v_h_1497_, lean_object* v_lo_1498_, lean_object* v_hi_1499_){
_start:
{
uint64_t v_h_boxed_1500_; lean_object* v_res_1501_; 
v_h_boxed_1500_ = lean_unbox_uint64(v_h_1497_);
lean_dec_ref(v_h_1497_);
v_res_1501_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(v_cs_1496_, v_h_boxed_1500_, v_lo_1498_, v_hi_1499_);
lean_dec_ref(v_cs_1496_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(lean_object* v_cs_1502_, lean_object* v_k_1503_, uint64_t v_h_1504_, lean_object* v_j_1505_){
_start:
{
uint8_t v___y_1511_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v___x_1513_ = lean_array_get_size(v_cs_1502_);
v___x_1514_ = lean_nat_dec_lt(v_j_1505_, v___x_1513_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; 
lean_dec(v_j_1505_);
v___x_1515_ = lean_box(0);
return v___x_1515_;
}
else
{
lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v_c_1518_; uint64_t v___y_1520_; 
v___x_1516_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
v___x_1517_ = lean_array_get_borrowed(v___x_1516_, v_cs_1502_, v_j_1505_);
v_c_1518_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_key___redArg(v___x_1517_);
if (lean_obj_tag(v_c_1518_) == 0)
{
uint64_t v___x_1530_; 
v___x_1530_ = 1723ULL;
v___y_1520_ = v___x_1530_;
goto v___jp_1519_;
}
else
{
uint64_t v_hash_1531_; 
v_hash_1531_ = lean_ctor_get_uint64(v_c_1518_, sizeof(void*)*2);
v___y_1520_ = v_hash_1531_;
goto v___jp_1519_;
}
v___jp_1519_:
{
uint8_t v___x_1521_; 
v___x_1521_ = lean_uint64_dec_eq(v___y_1520_, v_h_1504_);
if (v___x_1521_ == 0)
{
lean_object* v___x_1522_; 
lean_dec(v_c_1518_);
lean_dec(v_j_1505_);
v___x_1522_ = lean_box(0);
return v___x_1522_;
}
else
{
switch(lean_obj_tag(v_c_1518_))
{
case 0:
{
if (lean_obj_tag(v_k_1503_) == 0)
{
lean_object* v___x_1523_; 
v___x_1523_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1523_, 0, v_j_1505_);
return v___x_1523_;
}
else
{
goto v___jp_1506_;
}
}
case 1:
{
if (lean_obj_tag(v_k_1503_) == 1)
{
lean_object* v_str_1524_; lean_object* v_str_1525_; uint8_t v___x_1526_; 
v_str_1524_ = lean_ctor_get(v_c_1518_, 1);
lean_inc_ref(v_str_1524_);
lean_dec_ref_known(v_c_1518_, 2);
v_str_1525_ = lean_ctor_get(v_k_1503_, 1);
v___x_1526_ = lean_string_dec_eq(v_str_1524_, v_str_1525_);
lean_dec_ref(v_str_1524_);
v___y_1511_ = v___x_1526_;
goto v___jp_1510_;
}
else
{
lean_dec_ref_known(v_c_1518_, 2);
goto v___jp_1506_;
}
}
default: 
{
if (lean_obj_tag(v_k_1503_) == 2)
{
lean_object* v_i_1527_; lean_object* v_i_1528_; uint8_t v___x_1529_; 
v_i_1527_ = lean_ctor_get(v_c_1518_, 1);
lean_inc(v_i_1527_);
lean_dec_ref_known(v_c_1518_, 2);
v_i_1528_ = lean_ctor_get(v_k_1503_, 1);
v___x_1529_ = lean_nat_dec_eq(v_i_1527_, v_i_1528_);
lean_dec(v_i_1527_);
v___y_1511_ = v___x_1529_;
goto v___jp_1510_;
}
else
{
lean_dec_ref_known(v_c_1518_, 2);
goto v___jp_1506_;
}
}
}
}
}
}
v___jp_1506_:
{
lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___x_1507_ = lean_unsigned_to_nat(1u);
v___x_1508_ = lean_nat_add(v_j_1505_, v___x_1507_);
lean_dec(v_j_1505_);
v_j_1505_ = v___x_1508_;
goto _start;
}
v___jp_1510_:
{
if (v___y_1511_ == 0)
{
goto v___jp_1506_;
}
else
{
lean_object* v___x_1512_; 
v___x_1512_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1512_, 0, v_j_1505_);
return v___x_1512_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg___boxed(lean_object* v_cs_1532_, lean_object* v_k_1533_, lean_object* v_h_1534_, lean_object* v_j_1535_){
_start:
{
uint64_t v_h_boxed_1536_; lean_object* v_res_1537_; 
v_h_boxed_1536_ = lean_unbox_uint64(v_h_1534_);
lean_dec_ref(v_h_1534_);
v_res_1537_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(v_cs_1532_, v_k_1533_, v_h_boxed_1536_, v_j_1535_);
lean_dec(v_k_1533_);
lean_dec_ref(v_cs_1532_);
return v_res_1537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(lean_object* v_cs_1538_, lean_object* v_k_1539_){
_start:
{
uint64_t v___y_1541_; 
if (lean_obj_tag(v_k_1539_) == 0)
{
uint64_t v___x_1546_; 
v___x_1546_ = 1723ULL;
v___y_1541_ = v___x_1546_;
goto v___jp_1540_;
}
else
{
uint64_t v_hash_1547_; 
v_hash_1547_ = lean_ctor_get_uint64(v_k_1539_, sizeof(void*)*2);
v___y_1541_ = v_hash_1547_;
goto v___jp_1540_;
}
v___jp_1540_:
{
lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; 
v___x_1542_ = lean_unsigned_to_nat(0u);
v___x_1543_ = lean_array_get_size(v_cs_1538_);
v___x_1544_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(v_cs_1538_, v___y_1541_, v___x_1542_, v___x_1543_);
v___x_1545_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(v_cs_1538_, v_k_1539_, v___y_1541_, v___x_1544_);
return v___x_1545_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg___boxed(lean_object* v_cs_1548_, lean_object* v_k_1549_){
_start:
{
lean_object* v_res_1550_; 
v_res_1550_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1548_, v_k_1549_);
lean_dec(v_k_1549_);
lean_dec_ref(v_cs_1548_);
return v_res_1550_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(lean_object* v_x_1551_, lean_object* v_x_1552_, lean_object* v_x_1553_){
_start:
{
lean_object* v___x_1554_; lean_object* v___x_1555_; 
v___x_1554_ = lean_box(0);
v___x_1555_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
switch(lean_obj_tag(v_x_1551_))
{
case 0:
{
lean_object* v_tree_1556_; lean_object* v___x_1557_; 
v_tree_1556_ = lean_ctor_get(v_x_1551_, 1);
lean_inc_ref(v_tree_1556_);
lean_dec_ref_known(v_x_1551_, 2);
v___x_1557_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_1556_, v_x_1552_, v_x_1553_);
lean_dec_ref(v_tree_1556_);
return v___x_1557_;
}
case 1:
{
lean_object* v_entry_x3f_1558_; lean_object* v_children_1559_; lean_object* v___x_1560_; uint8_t v___x_1561_; 
v_entry_x3f_1558_ = lean_ctor_get(v_x_1551_, 1);
lean_inc(v_entry_x3f_1558_);
v_children_1559_ = lean_ctor_get(v_x_1551_, 2);
lean_inc_ref(v_children_1559_);
lean_dec_ref_known(v_x_1551_, 3);
v___x_1560_ = lean_unsigned_to_nat(0u);
v___x_1561_ = lean_nat_dec_eq(v_x_1553_, v___x_1560_);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; 
lean_dec(v_entry_x3f_1558_);
v___x_1562_ = lean_unsigned_to_nat(1u);
v___x_1563_ = lean_nat_sub(v_x_1553_, v___x_1562_);
lean_dec(v_x_1553_);
v___x_1564_ = lean_array_get_borrowed(v___x_1554_, v_x_1552_, v___x_1563_);
v___x_1565_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_children_1559_, v___x_1564_);
if (lean_obj_tag(v___x_1565_) == 0)
{
lean_object* v___x_1566_; 
lean_dec(v___x_1563_);
lean_dec_ref(v_children_1559_);
v___x_1566_ = lean_box(0);
return v___x_1566_;
}
else
{
lean_object* v_val_1567_; lean_object* v___x_1568_; 
v_val_1567_ = lean_ctor_get(v___x_1565_, 0);
lean_inc(v_val_1567_);
lean_dec_ref_known(v___x_1565_, 1);
v___x_1568_ = lean_array_get(v___x_1555_, v_children_1559_, v_val_1567_);
lean_dec(v_val_1567_);
lean_dec_ref(v_children_1559_);
v_x_1551_ = v___x_1568_;
v_x_1553_ = v___x_1563_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1559_);
lean_dec(v_x_1553_);
if (lean_obj_tag(v_entry_x3f_1558_) == 0)
{
lean_object* v___x_1570_; 
v___x_1570_ = lean_box(0);
return v___x_1570_;
}
else
{
lean_object* v_val_1571_; lean_object* v___x_1573_; uint8_t v_isShared_1574_; uint8_t v_isSharedCheck_1579_; 
v_val_1571_ = lean_ctor_get(v_entry_x3f_1558_, 0);
v_isSharedCheck_1579_ = !lean_is_exclusive(v_entry_x3f_1558_);
if (v_isSharedCheck_1579_ == 0)
{
v___x_1573_ = v_entry_x3f_1558_;
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
else
{
lean_inc(v_val_1571_);
lean_dec(v_entry_x3f_1558_);
v___x_1573_ = lean_box(0);
v_isShared_1574_ = v_isSharedCheck_1579_;
goto v_resetjp_1572_;
}
v_resetjp_1572_:
{
lean_object* v_fst_1575_; lean_object* v___x_1577_; 
v_fst_1575_ = lean_ctor_get(v_val_1571_, 0);
lean_inc(v_fst_1575_);
lean_dec(v_val_1571_);
if (v_isShared_1574_ == 0)
{
lean_ctor_set(v___x_1573_, 0, v_fst_1575_);
v___x_1577_ = v___x_1573_;
goto v_reusejp_1576_;
}
else
{
lean_object* v_reuseFailAlloc_1578_; 
v_reuseFailAlloc_1578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1578_, 0, v_fst_1575_);
v___x_1577_ = v_reuseFailAlloc_1578_;
goto v_reusejp_1576_;
}
v_reusejp_1576_:
{
return v___x_1577_;
}
}
}
}
}
default: 
{
lean_object* v_entry_x3f_1580_; lean_object* v_children_1581_; lean_object* v___x_1582_; uint8_t v___x_1583_; 
v_entry_x3f_1580_ = lean_ctor_get(v_x_1551_, 1);
lean_inc(v_entry_x3f_1580_);
v_children_1581_ = lean_ctor_get(v_x_1551_, 2);
lean_inc_ref(v_children_1581_);
lean_dec_ref_known(v_x_1551_, 3);
v___x_1582_ = lean_unsigned_to_nat(0u);
v___x_1583_ = lean_nat_dec_eq(v_x_1553_, v___x_1582_);
if (v___x_1583_ == 0)
{
lean_object* v_cs_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
lean_dec(v_entry_x3f_1580_);
v_cs_1584_ = lean_thunk_get_own(v_children_1581_);
lean_dec_ref(v_children_1581_);
v___x_1585_ = lean_unsigned_to_nat(1u);
v___x_1586_ = lean_nat_sub(v_x_1553_, v___x_1585_);
lean_dec(v_x_1553_);
v___x_1587_ = lean_array_get_borrowed(v___x_1554_, v_x_1552_, v___x_1586_);
v___x_1588_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1584_, v___x_1587_);
if (lean_obj_tag(v___x_1588_) == 0)
{
lean_object* v___x_1589_; 
lean_dec(v___x_1586_);
lean_dec(v_cs_1584_);
v___x_1589_ = lean_box(0);
return v___x_1589_;
}
else
{
lean_object* v_val_1590_; lean_object* v___x_1591_; 
v_val_1590_ = lean_ctor_get(v___x_1588_, 0);
lean_inc(v_val_1590_);
lean_dec_ref_known(v___x_1588_, 1);
v___x_1591_ = lean_array_get(v___x_1555_, v_cs_1584_, v_val_1590_);
lean_dec(v_val_1590_);
lean_dec(v_cs_1584_);
v_x_1551_ = v___x_1591_;
v_x_1553_ = v___x_1586_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1581_);
lean_dec(v_x_1553_);
if (lean_obj_tag(v_entry_x3f_1580_) == 0)
{
lean_object* v___x_1593_; 
v___x_1593_ = lean_box(0);
return v___x_1593_;
}
else
{
lean_object* v_val_1594_; lean_object* v___x_1596_; uint8_t v_isShared_1597_; uint8_t v_isSharedCheck_1602_; 
v_val_1594_ = lean_ctor_get(v_entry_x3f_1580_, 0);
v_isSharedCheck_1602_ = !lean_is_exclusive(v_entry_x3f_1580_);
if (v_isSharedCheck_1602_ == 0)
{
v___x_1596_ = v_entry_x3f_1580_;
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
else
{
lean_inc(v_val_1594_);
lean_dec(v_entry_x3f_1580_);
v___x_1596_ = lean_box(0);
v_isShared_1597_ = v_isSharedCheck_1602_;
goto v_resetjp_1595_;
}
v_resetjp_1595_:
{
lean_object* v_fst_1598_; lean_object* v___x_1600_; 
v_fst_1598_ = lean_ctor_get(v_val_1594_, 0);
lean_inc(v_fst_1598_);
lean_dec(v_val_1594_);
if (v_isShared_1597_ == 0)
{
lean_ctor_set(v___x_1596_, 0, v_fst_1598_);
v___x_1600_ = v___x_1596_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1601_; 
v_reuseFailAlloc_1601_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1601_, 0, v_fst_1598_);
v___x_1600_ = v_reuseFailAlloc_1601_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
return v___x_1600_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg___boxed(lean_object* v_x_1603_, lean_object* v_x_1604_, lean_object* v_x_1605_){
_start:
{
lean_object* v_res_1606_; 
v_res_1606_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(v_x_1603_, v_x_1604_, v_x_1605_);
lean_dec_ref(v_x_1604_);
return v_res_1606_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux(lean_object* v_00_u03b1_1607_, lean_object* v_x_1608_, lean_object* v_x_1609_, lean_object* v_x_1610_){
_start:
{
lean_object* v___x_1611_; 
v___x_1611_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(v_x_1608_, v_x_1609_, v_x_1610_);
return v___x_1611_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___boxed(lean_object* v_00_u03b1_1612_, lean_object* v_x_1613_, lean_object* v_x_1614_, lean_object* v_x_1615_){
_start:
{
lean_object* v_res_1616_; 
v_res_1616_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux(v_00_u03b1_1612_, v_x_1613_, v_x_1614_, v_x_1615_);
lean_dec_ref(v_x_1614_);
return v_res_1616_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0(lean_object* v_00_u03b1_1617_, lean_object* v_cs_1618_, lean_object* v_k_1619_){
_start:
{
lean_object* v___x_1620_; 
v___x_1620_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1618_, v_k_1619_);
return v___x_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___boxed(lean_object* v_00_u03b1_1621_, lean_object* v_cs_1622_, lean_object* v_k_1623_){
_start:
{
lean_object* v_res_1624_; 
v_res_1624_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0(v_00_u03b1_1621_, v_cs_1622_, v_k_1623_);
lean_dec(v_k_1623_);
lean_dec_ref(v_cs_1622_);
return v_res_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0(lean_object* v_00_u03b1_1625_, lean_object* v_cs_1626_, uint64_t v_h_1627_, lean_object* v_lo_1628_, lean_object* v_hi_1629_){
_start:
{
lean_object* v___x_1630_; 
v___x_1630_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___redArg(v_cs_1626_, v_h_1627_, v_lo_1628_, v_hi_1629_);
return v___x_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1631_, lean_object* v_cs_1632_, lean_object* v_h_1633_, lean_object* v_lo_1634_, lean_object* v_hi_1635_){
_start:
{
uint64_t v_h_boxed_1636_; lean_object* v_res_1637_; 
v_h_boxed_1636_ = lean_unbox_uint64(v_h_1633_);
lean_dec_ref(v_h_1633_);
v_res_1637_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_lowerBound___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__0(v_00_u03b1_1631_, v_cs_1632_, v_h_boxed_1636_, v_lo_1634_, v_hi_1635_);
lean_dec_ref(v_cs_1632_);
return v_res_1637_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1(lean_object* v_00_u03b1_1638_, lean_object* v_cs_1639_, lean_object* v_k_1640_, uint64_t v_h_1641_, lean_object* v_j_1642_){
_start:
{
lean_object* v___x_1643_; 
v___x_1643_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___redArg(v_cs_1639_, v_k_1640_, v_h_1641_, v_j_1642_);
return v___x_1643_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1644_, lean_object* v_cs_1645_, lean_object* v_k_1646_, lean_object* v_h_1647_, lean_object* v_j_1648_){
_start:
{
uint64_t v_h_boxed_1649_; lean_object* v_res_1650_; 
v_h_boxed_1649_ = lean_unbox_uint64(v_h_1647_);
lean_dec_ref(v_h_1647_);
v_res_1650_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f_scanRun___at___00__private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0_spec__1(v_00_u03b1_1644_, v_cs_1645_, v_k_1646_, v_h_boxed_1649_, v_j_1648_);
lean_dec(v_k_1646_);
lean_dec_ref(v_cs_1645_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter___redArg(lean_object* v_x_1651_, lean_object* v_x_1652_, lean_object* v_x_1653_, lean_object* v_h__1_1654_, lean_object* v_h__2_1655_, lean_object* v_h__3_1656_){
_start:
{
switch(lean_obj_tag(v_x_1651_))
{
case 0:
{
lean_object* v_modIdx_1657_; lean_object* v_tree_1658_; lean_object* v___x_1659_; 
lean_dec(v_h__3_1656_);
lean_dec(v_h__2_1655_);
v_modIdx_1657_ = lean_ctor_get(v_x_1651_, 0);
lean_inc(v_modIdx_1657_);
v_tree_1658_ = lean_ctor_get(v_x_1651_, 1);
lean_inc_ref(v_tree_1658_);
lean_dec_ref_known(v_x_1651_, 2);
v___x_1659_ = lean_apply_4(v_h__1_1654_, v_modIdx_1657_, v_tree_1658_, v_x_1652_, v_x_1653_);
return v___x_1659_;
}
case 1:
{
lean_object* v_key_1660_; lean_object* v_entry_x3f_1661_; lean_object* v_children_1662_; lean_object* v___x_1663_; 
lean_dec(v_h__2_1655_);
lean_dec(v_h__1_1654_);
v_key_1660_ = lean_ctor_get(v_x_1651_, 0);
lean_inc(v_key_1660_);
v_entry_x3f_1661_ = lean_ctor_get(v_x_1651_, 1);
lean_inc(v_entry_x3f_1661_);
v_children_1662_ = lean_ctor_get(v_x_1651_, 2);
lean_inc_ref(v_children_1662_);
lean_dec_ref_known(v_x_1651_, 3);
v___x_1663_ = lean_apply_5(v_h__3_1656_, v_key_1660_, v_entry_x3f_1661_, v_children_1662_, v_x_1652_, v_x_1653_);
return v___x_1663_;
}
default: 
{
lean_object* v_key_1664_; lean_object* v_entry_x3f_1665_; lean_object* v_children_1666_; lean_object* v___x_1667_; 
lean_dec(v_h__3_1656_);
lean_dec(v_h__1_1654_);
v_key_1664_ = lean_ctor_get(v_x_1651_, 0);
lean_inc(v_key_1664_);
v_entry_x3f_1665_ = lean_ctor_get(v_x_1651_, 1);
lean_inc(v_entry_x3f_1665_);
v_children_1666_ = lean_ctor_get(v_x_1651_, 2);
lean_inc_ref(v_children_1666_);
lean_dec_ref_known(v_x_1651_, 3);
v___x_1667_ = lean_apply_5(v_h__2_1655_, v_key_1664_, v_entry_x3f_1665_, v_children_1666_, v_x_1652_, v_x_1653_);
return v___x_1667_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_match__1_splitter(lean_object* v_00_u03b1_1668_, lean_object* v_motive_1669_, lean_object* v_x_1670_, lean_object* v_x_1671_, lean_object* v_x_1672_, lean_object* v_h__1_1673_, lean_object* v_h__2_1674_, lean_object* v_h__3_1675_){
_start:
{
switch(lean_obj_tag(v_x_1670_))
{
case 0:
{
lean_object* v_modIdx_1676_; lean_object* v_tree_1677_; lean_object* v___x_1678_; 
lean_dec(v_h__3_1675_);
lean_dec(v_h__2_1674_);
v_modIdx_1676_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_modIdx_1676_);
v_tree_1677_ = lean_ctor_get(v_x_1670_, 1);
lean_inc_ref(v_tree_1677_);
lean_dec_ref_known(v_x_1670_, 2);
v___x_1678_ = lean_apply_4(v_h__1_1673_, v_modIdx_1676_, v_tree_1677_, v_x_1671_, v_x_1672_);
return v___x_1678_;
}
case 1:
{
lean_object* v_key_1679_; lean_object* v_entry_x3f_1680_; lean_object* v_children_1681_; lean_object* v___x_1682_; 
lean_dec(v_h__2_1674_);
lean_dec(v_h__1_1673_);
v_key_1679_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_key_1679_);
v_entry_x3f_1680_ = lean_ctor_get(v_x_1670_, 1);
lean_inc(v_entry_x3f_1680_);
v_children_1681_ = lean_ctor_get(v_x_1670_, 2);
lean_inc_ref(v_children_1681_);
lean_dec_ref_known(v_x_1670_, 3);
v___x_1682_ = lean_apply_5(v_h__3_1675_, v_key_1679_, v_entry_x3f_1680_, v_children_1681_, v_x_1671_, v_x_1672_);
return v___x_1682_;
}
default: 
{
lean_object* v_key_1683_; lean_object* v_entry_x3f_1684_; lean_object* v_children_1685_; lean_object* v___x_1686_; 
lean_dec(v_h__3_1675_);
lean_dec(v_h__1_1673_);
v_key_1683_ = lean_ctor_get(v_x_1670_, 0);
lean_inc(v_key_1683_);
v_entry_x3f_1684_ = lean_ctor_get(v_x_1670_, 1);
lean_inc(v_entry_x3f_1684_);
v_children_1685_ = lean_ctor_get(v_x_1670_, 2);
lean_inc_ref(v_children_1685_);
lean_dec_ref_known(v_x_1670_, 3);
v___x_1686_ = lean_apply_5(v_h__2_1674_, v_key_1683_, v_entry_x3f_1684_, v_children_1685_, v_x_1671_, v_x_1672_);
return v___x_1686_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(lean_object* v_x_1687_, lean_object* v_x_1688_, lean_object* v_x_1689_){
_start:
{
lean_object* v___x_1690_; lean_object* v___x_1691_; 
v___x_1690_ = lean_box(0);
v___x_1691_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
switch(lean_obj_tag(v_x_1687_))
{
case 0:
{
lean_object* v_modIdx_1692_; lean_object* v_tree_1693_; lean_object* v___x_1695_; uint8_t v_isShared_1696_; uint8_t v_isSharedCheck_1710_; 
v_modIdx_1692_ = lean_ctor_get(v_x_1687_, 0);
v_tree_1693_ = lean_ctor_get(v_x_1687_, 1);
v_isSharedCheck_1710_ = !lean_is_exclusive(v_x_1687_);
if (v_isSharedCheck_1710_ == 0)
{
v___x_1695_ = v_x_1687_;
v_isShared_1696_ = v_isSharedCheck_1710_;
goto v_resetjp_1694_;
}
else
{
lean_inc(v_tree_1693_);
lean_inc(v_modIdx_1692_);
lean_dec(v_x_1687_);
v___x_1695_ = lean_box(0);
v_isShared_1696_ = v_isSharedCheck_1710_;
goto v_resetjp_1694_;
}
v_resetjp_1694_:
{
lean_object* v___x_1697_; 
v___x_1697_ = l___private_Lean_ConstTrie_0__Lean_ConstTrie_findAux___redArg(v_tree_1693_, v_x_1688_, v_x_1689_);
lean_dec_ref(v_tree_1693_);
if (lean_obj_tag(v___x_1697_) == 0)
{
lean_object* v___x_1698_; 
lean_del_object(v___x_1695_);
lean_dec(v_modIdx_1692_);
v___x_1698_ = lean_box(0);
return v___x_1698_;
}
else
{
lean_object* v_val_1699_; lean_object* v___x_1701_; uint8_t v_isShared_1702_; uint8_t v_isSharedCheck_1709_; 
v_val_1699_ = lean_ctor_get(v___x_1697_, 0);
v_isSharedCheck_1709_ = !lean_is_exclusive(v___x_1697_);
if (v_isSharedCheck_1709_ == 0)
{
v___x_1701_ = v___x_1697_;
v_isShared_1702_ = v_isSharedCheck_1709_;
goto v_resetjp_1700_;
}
else
{
lean_inc(v_val_1699_);
lean_dec(v___x_1697_);
v___x_1701_ = lean_box(0);
v_isShared_1702_ = v_isSharedCheck_1709_;
goto v_resetjp_1700_;
}
v_resetjp_1700_:
{
lean_object* v___x_1704_; 
if (v_isShared_1696_ == 0)
{
lean_ctor_set(v___x_1695_, 1, v_modIdx_1692_);
lean_ctor_set(v___x_1695_, 0, v_val_1699_);
v___x_1704_ = v___x_1695_;
goto v_reusejp_1703_;
}
else
{
lean_object* v_reuseFailAlloc_1708_; 
v_reuseFailAlloc_1708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1708_, 0, v_val_1699_);
lean_ctor_set(v_reuseFailAlloc_1708_, 1, v_modIdx_1692_);
v___x_1704_ = v_reuseFailAlloc_1708_;
goto v_reusejp_1703_;
}
v_reusejp_1703_:
{
lean_object* v___x_1706_; 
if (v_isShared_1702_ == 0)
{
lean_ctor_set(v___x_1701_, 0, v___x_1704_);
v___x_1706_ = v___x_1701_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(1, 1, 0);
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
case 1:
{
lean_object* v_entry_x3f_1711_; lean_object* v_children_1712_; lean_object* v___x_1713_; uint8_t v___x_1714_; 
v_entry_x3f_1711_ = lean_ctor_get(v_x_1687_, 1);
lean_inc(v_entry_x3f_1711_);
v_children_1712_ = lean_ctor_get(v_x_1687_, 2);
lean_inc_ref(v_children_1712_);
lean_dec_ref_known(v_x_1687_, 3);
v___x_1713_ = lean_unsigned_to_nat(0u);
v___x_1714_ = lean_nat_dec_eq(v_x_1689_, v___x_1713_);
if (v___x_1714_ == 0)
{
lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_dec(v_entry_x3f_1711_);
v___x_1715_ = lean_unsigned_to_nat(1u);
v___x_1716_ = lean_nat_sub(v_x_1689_, v___x_1715_);
lean_dec(v_x_1689_);
v___x_1717_ = lean_array_get_borrowed(v___x_1690_, v_x_1688_, v___x_1716_);
v___x_1718_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_children_1712_, v___x_1717_);
if (lean_obj_tag(v___x_1718_) == 0)
{
lean_object* v___x_1719_; 
lean_dec(v___x_1716_);
lean_dec_ref(v_children_1712_);
v___x_1719_ = lean_box(0);
return v___x_1719_;
}
else
{
lean_object* v_val_1720_; lean_object* v___x_1721_; 
v_val_1720_ = lean_ctor_get(v___x_1718_, 0);
lean_inc(v_val_1720_);
lean_dec_ref_known(v___x_1718_, 1);
v___x_1721_ = lean_array_get(v___x_1691_, v_children_1712_, v_val_1720_);
lean_dec(v_val_1720_);
lean_dec_ref(v_children_1712_);
v_x_1687_ = v___x_1721_;
v_x_1689_ = v___x_1716_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1712_);
lean_dec(v_x_1689_);
return v_entry_x3f_1711_;
}
}
default: 
{
lean_object* v_entry_x3f_1723_; lean_object* v_children_1724_; lean_object* v___x_1725_; uint8_t v___x_1726_; 
v_entry_x3f_1723_ = lean_ctor_get(v_x_1687_, 1);
lean_inc(v_entry_x3f_1723_);
v_children_1724_ = lean_ctor_get(v_x_1687_, 2);
lean_inc_ref(v_children_1724_);
lean_dec_ref_known(v_x_1687_, 3);
v___x_1725_ = lean_unsigned_to_nat(0u);
v___x_1726_ = lean_nat_dec_eq(v_x_1689_, v___x_1725_);
if (v___x_1726_ == 0)
{
lean_object* v_cs_1727_; lean_object* v___x_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; 
lean_dec(v_entry_x3f_1723_);
v_cs_1727_ = lean_thunk_get_own(v_children_1724_);
lean_dec_ref(v_children_1724_);
v___x_1728_ = lean_unsigned_to_nat(1u);
v___x_1729_ = lean_nat_sub(v_x_1689_, v___x_1728_);
lean_dec(v_x_1689_);
v___x_1730_ = lean_array_get_borrowed(v___x_1690_, v_x_1688_, v___x_1729_);
v___x_1731_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux_spec__0___redArg(v_cs_1727_, v___x_1730_);
if (lean_obj_tag(v___x_1731_) == 0)
{
lean_object* v___x_1732_; 
lean_dec(v___x_1729_);
lean_dec(v_cs_1727_);
v___x_1732_ = lean_box(0);
return v___x_1732_;
}
else
{
lean_object* v_val_1733_; lean_object* v___x_1734_; 
v_val_1733_ = lean_ctor_get(v___x_1731_, 0);
lean_inc(v_val_1733_);
lean_dec_ref_known(v___x_1731_, 1);
v___x_1734_ = lean_array_get(v___x_1691_, v_cs_1727_, v_val_1733_);
lean_dec(v_val_1733_);
lean_dec(v_cs_1727_);
v_x_1687_ = v___x_1734_;
v_x_1689_ = v___x_1729_;
goto _start;
}
}
else
{
lean_dec_ref(v_children_1724_);
lean_dec(v_x_1689_);
return v_entry_x3f_1723_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg___boxed(lean_object* v_x_1736_, lean_object* v_x_1737_, lean_object* v_x_1738_){
_start:
{
lean_object* v_res_1739_; 
v_res_1739_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(v_x_1736_, v_x_1737_, v_x_1738_);
lean_dec_ref(v_x_1737_);
return v_res_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux(lean_object* v_00_u03b1_1740_, lean_object* v_x_1741_, lean_object* v_x_1742_, lean_object* v_x_1743_){
_start:
{
lean_object* v___x_1744_; 
v___x_1744_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(v_x_1741_, v_x_1742_, v_x_1743_);
return v___x_1744_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___boxed(lean_object* v_00_u03b1_1745_, lean_object* v_x_1746_, lean_object* v_x_1747_, lean_object* v_x_1748_){
_start:
{
lean_object* v_res_1749_; 
v_res_1749_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux(v_00_u03b1_1745_, v_x_1746_, v_x_1747_, v_x_1748_);
lean_dec_ref(v_x_1747_);
return v_res_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg(){
_start:
{
lean_object* v___x_1751_; 
v___x_1751_ = ((lean_object*)(l_Lean_instInhabitedImportedConsts___redArg___closed__1));
return v___x_1751_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty___redArg___boxed(lean_object* v___dummy_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = l_Lean_ImportedConsts_empty___redArg();
return v_res_1753_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_empty___closed__0(void){
_start:
{
lean_object* v___x_1754_; 
v___x_1754_ = l_Lean_ImportedConsts_empty___redArg();
return v___x_1754_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_empty(lean_object* v_00_u03b1_1755_){
_start:
{
lean_object* v___x_1756_; 
v___x_1756_ = lean_obj_once(&l_Lean_ImportedConsts_empty___closed__0, &l_Lean_ImportedConsts_empty___closed__0_once, _init_l_Lean_ImportedConsts_empty___closed__0);
return v___x_1756_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg(lean_object* v_t_1757_){
_start:
{
lean_object* v___x_1759_; lean_object* v_tree_1760_; lean_object* v___x_1762_; uint8_t v_isShared_1763_; uint8_t v_isSharedCheck_1768_; 
v___x_1759_ = lean_imported_consts_cache_new();
v_tree_1760_ = lean_ctor_get(v_t_1757_, 1);
v_isSharedCheck_1768_ = !lean_is_exclusive(v_t_1757_);
if (v_isSharedCheck_1768_ == 0)
{
lean_object* v_unused_1769_; 
v_unused_1769_ = lean_ctor_get(v_t_1757_, 0);
lean_dec(v_unused_1769_);
v___x_1762_ = v_t_1757_;
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
else
{
lean_inc(v_tree_1760_);
lean_dec(v_t_1757_);
v___x_1762_ = lean_box(0);
v_isShared_1763_ = v_isSharedCheck_1768_;
goto v_resetjp_1761_;
}
v_resetjp_1761_:
{
lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1764_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1764_, 0, v___x_1759_);
if (v_isShared_1763_ == 0)
{
lean_ctor_set(v___x_1762_, 0, v___x_1764_);
v___x_1766_ = v___x_1762_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1767_; 
v_reuseFailAlloc_1767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1767_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1767_, 1, v_tree_1760_);
v___x_1766_ = v_reuseFailAlloc_1767_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
return v___x_1766_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___redArg___boxed(lean_object* v_t_1770_, lean_object* v_a_1771_){
_start:
{
lean_object* v_res_1772_; 
v_res_1772_ = l_Lean_ImportedConsts_withCache___redArg(v_t_1770_);
return v_res_1772_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache(lean_object* v_00_u03b1_1773_, lean_object* v_t_1774_){
_start:
{
lean_object* v___x_1776_; 
v___x_1776_ = l_Lean_ImportedConsts_withCache___redArg(v_t_1774_);
return v___x_1776_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_withCache___boxed(lean_object* v_00_u03b1_1777_, lean_object* v_t_1778_, lean_object* v_a_1779_){
_start:
{
lean_object* v_res_1780_; 
v_res_1780_ = l_Lean_ImportedConsts_withCache(v_00_u03b1_1777_, v_t_1778_);
return v_res_1780_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f___redArg(lean_object* v_t_1781_, lean_object* v_n_1782_){
_start:
{
lean_object* v_tree_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v_path_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; 
v_tree_1783_ = lean_ctor_get(v_t_1781_, 1);
lean_inc_ref(v_tree_1783_);
lean_dec_ref(v_t_1781_);
v___x_1784_ = lean_unsigned_to_nat(8u);
v___x_1785_ = lean_mk_empty_array_with_capacity(v___x_1784_);
v_path_1786_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_1782_, v___x_1785_);
v___x_1787_ = lean_array_get_size(v_path_1786_);
v___x_1788_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findEntryAux___redArg(v_tree_1783_, v_path_1786_, v___x_1787_);
lean_dec_ref(v_path_1786_);
return v___x_1788_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findEntry_x3f(lean_object* v_00_u03b1_1789_, lean_object* v_t_1790_, lean_object* v_n_1791_){
_start:
{
lean_object* v___x_1792_; 
v___x_1792_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_1790_, v_n_1791_);
return v___x_1792_;
}
}
LEAN_EXPORT lean_object* lean_imported_extra_consts_find_entry_core(lean_object* v_t_1793_, lean_object* v_n_1794_){
_start:
{
lean_object* v___x_1795_; 
v___x_1795_ = l_Lean_ImportedConsts_findEntry_x3f___redArg(v_t_1793_, v_n_1794_);
return v___x_1795_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraEntryCachedImpl___boxed(lean_object* v_cache_x3f_1799_, lean_object* v_t_1800_, lean_object* v_n_1801_){
_start:
{
lean_object* v_res_1802_; 
v_res_1802_ = lean_imported_extra_consts_find_entry_cached(v_cache_x3f_1799_, v_t_1800_, v_n_1801_);
lean_dec(v_n_1801_);
lean_dec_ref(v_t_1800_);
lean_dec(v_cache_x3f_1799_);
return v_res_1802_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f(lean_object* v_t_1803_, lean_object* v_n_1804_){
_start:
{
lean_object* v_cache_x3f_1805_; lean_object* v___x_1806_; 
v_cache_x3f_1805_ = lean_ctor_get(v_t_1803_, 0);
v___x_1806_ = lean_imported_extra_consts_find_entry_cached(v_cache_x3f_1805_, v_t_1803_, v_n_1804_);
return v___x_1806_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraEntryCached_x3f___boxed(lean_object* v_t_1807_, lean_object* v_n_1808_){
_start:
{
lean_object* v_res_1809_; 
v_res_1809_ = l_Lean_ImportedConsts_findExtraEntryCached_x3f(v_t_1807_, v_n_1808_);
lean_dec(v_n_1808_);
lean_dec_ref(v_t_1807_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_findExtraModIdxCachedImpl___boxed(lean_object* v_cache_x3f_1813_, lean_object* v_t_1814_, lean_object* v_n_1815_){
_start:
{
lean_object* v_res_1816_; 
v_res_1816_ = lean_imported_extra_consts_find_mod_idx_cached(v_cache_x3f_1813_, v_t_1814_, v_n_1815_);
lean_dec(v_n_1815_);
lean_dec_ref(v_t_1814_);
lean_dec(v_cache_x3f_1813_);
return v_res_1816_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f(lean_object* v_t_1817_, lean_object* v_n_1818_){
_start:
{
lean_object* v_cache_x3f_1819_; lean_object* v___x_1820_; lean_object* v_zero_1821_; uint8_t v_isZero_1822_; 
v_cache_x3f_1819_ = lean_ctor_get(v_t_1817_, 0);
v___x_1820_ = lean_imported_extra_consts_find_mod_idx_cached(v_cache_x3f_1819_, v_t_1817_, v_n_1818_);
v_zero_1821_ = lean_unsigned_to_nat(0u);
v_isZero_1822_ = lean_nat_dec_eq(v___x_1820_, v_zero_1821_);
if (v_isZero_1822_ == 1)
{
lean_object* v___x_1823_; 
lean_dec(v___x_1820_);
v___x_1823_ = lean_box(0);
return v___x_1823_;
}
else
{
lean_object* v_one_1824_; lean_object* v_n_1825_; lean_object* v___x_1826_; 
v_one_1824_ = lean_unsigned_to_nat(1u);
v_n_1825_ = lean_nat_sub(v___x_1820_, v_one_1824_);
lean_dec(v___x_1820_);
v___x_1826_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1826_, 0, v_n_1825_);
return v___x_1826_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_findExtraModIdxCached_x3f___boxed(lean_object* v_t_1827_, lean_object* v_n_1828_){
_start:
{
lean_object* v_res_1829_; 
v_res_1829_ = l_Lean_ImportedConsts_findExtraModIdxCached_x3f(v_t_1827_, v_n_1828_);
lean_dec(v_n_1828_);
lean_dec_ref(v_t_1827_);
return v_res_1829_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f___redArg(lean_object* v_t_1830_, lean_object* v_n_1831_){
_start:
{
lean_object* v_tree_1832_; lean_object* v___x_1833_; lean_object* v___x_1834_; lean_object* v_path_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; 
v_tree_1832_ = lean_ctor_get(v_t_1830_, 1);
lean_inc_ref(v_tree_1832_);
lean_dec_ref(v_t_1830_);
v___x_1833_ = lean_unsigned_to_nat(8u);
v___x_1834_ = lean_mk_empty_array_with_capacity(v___x_1833_);
v_path_1835_ = l___private_Lean_ConstTrie_0__Lean_prefixesOf(v_n_1831_, v___x_1834_);
v___x_1836_ = lean_array_get_size(v_path_1835_);
v___x_1837_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_findValAux___redArg(v_tree_1832_, v_path_1835_, v___x_1836_);
lean_dec_ref(v_path_1835_);
return v___x_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_find_x3f(lean_object* v_00_u03b1_1838_, lean_object* v_t_1839_, lean_object* v_n_1840_){
_start:
{
lean_object* v___x_1841_; 
v___x_1841_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_1839_, v_n_1840_);
return v___x_1841_;
}
}
static lean_object* _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0(void){
_start:
{
lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; 
v___x_1842_ = lean_obj_once(&l_Lean_instInhabitedConstTrie___closed__0, &l_Lean_instInhabitedConstTrie___closed__0_once, _init_l_Lean_instInhabitedConstTrie___closed__0);
v___x_1843_ = lean_unsigned_to_nat(0u);
v___x_1844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1844_, 0, v___x_1843_);
lean_ctor_set(v___x_1844_, 1, v___x_1842_);
return v___x_1844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(lean_object* v_single_1845_, lean_object* v_multi_1846_, lean_object* v_groups_1847_, lean_object* v_k_1848_, lean_object* v_s_1849_){
_start:
{
lean_object* v___x_1850_; uint8_t v___x_1851_; 
v___x_1850_ = lean_array_get_size(v_groups_1847_);
v___x_1851_ = lean_nat_dec_lt(v_k_1848_, v___x_1850_);
if (v___x_1851_ == 0)
{
lean_dec(v_k_1848_);
lean_dec(v_multi_1846_);
lean_dec(v_single_1845_);
return v_s_1849_;
}
else
{
lean_object* v_g_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; 
v_g_1852_ = lean_array_fget_borrowed(v_groups_1847_, v_k_1848_);
v___x_1853_ = lean_unsigned_to_nat(1u);
v___x_1854_ = lean_nat_add(v_k_1848_, v___x_1853_);
lean_dec(v_k_1848_);
v___x_1855_ = lean_array_get_size(v_g_1852_);
v___x_1856_ = lean_nat_dec_eq(v___x_1855_, v___x_1853_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; 
lean_inc(v_multi_1846_);
lean_inc(v_g_1852_);
v___x_1857_ = lean_apply_4(v_multi_1846_, v_s_1849_, v_g_1852_, lean_box(0), lean_box(0));
v_k_1848_ = v___x_1854_;
v_s_1849_ = v___x_1857_;
goto _start;
}
else
{
lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v_fst_1862_; lean_object* v_snd_1863_; lean_object* v___x_1864_; 
v___x_1859_ = lean_unsigned_to_nat(0u);
v___x_1860_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_1861_ = lean_array_get_borrowed(v___x_1860_, v_g_1852_, v___x_1859_);
v_fst_1862_ = lean_ctor_get(v___x_1861_, 0);
v_snd_1863_ = lean_ctor_get(v___x_1861_, 1);
lean_inc(v_single_1845_);
lean_inc(v_snd_1863_);
lean_inc(v_fst_1862_);
v___x_1864_ = lean_apply_3(v_single_1845_, v_s_1849_, v_fst_1862_, v_snd_1863_);
v_k_1848_ = v___x_1854_;
v_s_1849_ = v___x_1864_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___boxed(lean_object* v_single_1866_, lean_object* v_multi_1867_, lean_object* v_groups_1868_, lean_object* v_k_1869_, lean_object* v_s_1870_){
_start:
{
lean_object* v_res_1871_; 
v_res_1871_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(v_single_1866_, v_multi_1867_, v_groups_1868_, v_k_1869_, v_s_1870_);
lean_dec_ref(v_groups_1868_);
return v_res_1871_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush(lean_object* v_00_u03b1_1872_, lean_object* v_00_u03c3_1873_, lean_object* v_cands_1874_, lean_object* v_single_1875_, lean_object* v_multi_1876_, lean_object* v_groups_1877_, lean_object* v_hgroups_1878_, lean_object* v_k_1879_, lean_object* v_s_1880_){
_start:
{
lean_object* v___x_1881_; 
v___x_1881_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(v_single_1875_, v_multi_1876_, v_groups_1877_, v_k_1879_, v_s_1880_);
return v___x_1881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___boxed(lean_object* v_00_u03b1_1882_, lean_object* v_00_u03c3_1883_, lean_object* v_cands_1884_, lean_object* v_single_1885_, lean_object* v_multi_1886_, lean_object* v_groups_1887_, lean_object* v_hgroups_1888_, lean_object* v_k_1889_, lean_object* v_s_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush(v_00_u03b1_1882_, v_00_u03c3_1883_, v_cands_1884_, v_single_1885_, v_multi_1886_, v_groups_1887_, v_hgroups_1888_, v_k_1889_, v_s_1890_);
lean_dec_ref(v_groups_1887_);
lean_dec_ref(v_cands_1884_);
return v_res_1891_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(lean_object* v_idx_1892_, lean_object* v___x_1893_, lean_object* v_snd_1894_, lean_object* v_as_1895_, lean_object* v_j_1896_){
_start:
{
uint8_t v___y_1902_; lean_object* v___x_1904_; uint8_t v___x_1905_; 
v___x_1904_ = lean_array_get_size(v_as_1895_);
v___x_1905_ = lean_nat_dec_lt(v_j_1896_, v___x_1904_);
if (v___x_1905_ == 0)
{
lean_object* v___x_1906_; 
lean_dec(v_j_1896_);
v___x_1906_ = lean_box(0);
return v___x_1906_;
}
else
{
lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v_snd_1911_; uint8_t v___x_1912_; lean_object* v___y_1914_; lean_object* v___y_1915_; lean_object* v___y_1923_; lean_object* v_key_1925_; 
v___x_1907_ = lean_unsigned_to_nat(0u);
v___x_1908_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_1909_ = lean_array_fget_borrowed(v_as_1895_, v_j_1896_);
v___x_1910_ = lean_array_get_borrowed(v___x_1908_, v___x_1909_, v___x_1907_);
v_snd_1911_ = lean_ctor_get(v___x_1910_, 1);
v___x_1912_ = lean_nat_dec_lt(v_idx_1892_, v___x_1893_);
v_key_1925_ = lean_ctor_get(v_snd_1911_, 0);
v___y_1923_ = v_key_1925_;
goto v___jp_1922_;
v___jp_1913_:
{
switch(lean_obj_tag(v___y_1914_))
{
case 0:
{
if (lean_obj_tag(v___y_1915_) == 0)
{
v___y_1902_ = v___x_1912_;
goto v___jp_1901_;
}
else
{
goto v___jp_1897_;
}
}
case 1:
{
if (lean_obj_tag(v___y_1915_) == 1)
{
lean_object* v_str_1916_; lean_object* v_str_1917_; uint8_t v___x_1918_; 
v_str_1916_ = lean_ctor_get(v___y_1914_, 1);
v_str_1917_ = lean_ctor_get(v___y_1915_, 1);
v___x_1918_ = lean_string_dec_eq(v_str_1916_, v_str_1917_);
v___y_1902_ = v___x_1918_;
goto v___jp_1901_;
}
else
{
goto v___jp_1897_;
}
}
default: 
{
if (lean_obj_tag(v___y_1915_) == 2)
{
lean_object* v_i_1919_; lean_object* v_i_1920_; uint8_t v___x_1921_; 
v_i_1919_ = lean_ctor_get(v___y_1914_, 1);
v_i_1920_ = lean_ctor_get(v___y_1915_, 1);
v___x_1921_ = lean_nat_dec_eq(v_i_1919_, v_i_1920_);
v___y_1902_ = v___x_1921_;
goto v___jp_1901_;
}
else
{
goto v___jp_1897_;
}
}
}
}
v___jp_1922_:
{
lean_object* v_key_1924_; 
v_key_1924_ = lean_ctor_get(v_snd_1894_, 0);
v___y_1914_ = v___y_1923_;
v___y_1915_ = v_key_1924_;
goto v___jp_1913_;
}
}
v___jp_1897_:
{
lean_object* v___x_1898_; lean_object* v___x_1899_; 
v___x_1898_ = lean_unsigned_to_nat(1u);
v___x_1899_ = lean_nat_add(v_j_1896_, v___x_1898_);
lean_dec(v_j_1896_);
v_j_1896_ = v___x_1899_;
goto _start;
}
v___jp_1901_:
{
if (v___y_1902_ == 0)
{
goto v___jp_1897_;
}
else
{
lean_object* v___x_1903_; 
v___x_1903_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1903_, 0, v_j_1896_);
return v___x_1903_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg___boxed(lean_object* v_idx_1926_, lean_object* v___x_1927_, lean_object* v_snd_1928_, lean_object* v_as_1929_, lean_object* v_j_1930_){
_start:
{
lean_object* v_res_1931_; 
v_res_1931_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(v_idx_1926_, v___x_1927_, v_snd_1928_, v_as_1929_, v_j_1930_);
lean_dec_ref(v_as_1929_);
lean_dec_ref(v_snd_1928_);
lean_dec(v___x_1927_);
lean_dec(v_idx_1926_);
return v_res_1931_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(lean_object* v_sorted_1932_, uint64_t v_hash_u2080_1933_, lean_object* v_idx_1934_, lean_object* v_groups_1935_){
_start:
{
lean_object* v_val_1937_; lean_object* v___x_1941_; uint8_t v___x_1942_; 
v___x_1941_ = lean_array_get_size(v_sorted_1932_);
v___x_1942_ = lean_nat_dec_lt(v_idx_1934_, v___x_1941_);
if (v___x_1942_ == 0)
{
lean_object* v___x_1943_; 
v___x_1943_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1943_, 0, v_groups_1935_);
lean_ctor_set(v___x_1943_, 1, v_idx_1934_);
return v___x_1943_;
}
else
{
lean_object* v___x_1944_; lean_object* v_fst_1945_; lean_object* v_snd_1946_; lean_object* v___x_1948_; uint8_t v_isShared_1949_; uint8_t v_isSharedCheck_1981_; 
v___x_1944_ = lean_array_fget(v_sorted_1932_, v_idx_1934_);
v_fst_1945_ = lean_ctor_get(v___x_1944_, 0);
v_snd_1946_ = lean_ctor_get(v___x_1944_, 1);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1944_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1948_ = v___x_1944_;
v_isShared_1949_ = v_isSharedCheck_1981_;
goto v_resetjp_1947_;
}
else
{
lean_inc(v_snd_1946_);
lean_inc(v_fst_1945_);
lean_dec(v___x_1944_);
v___x_1948_ = lean_box(0);
v_isShared_1949_ = v_isSharedCheck_1981_;
goto v_resetjp_1947_;
}
v_resetjp_1947_:
{
uint64_t v___x_1950_; uint8_t v___x_1951_; 
v___x_1950_ = lean_unbox_uint64(v_fst_1945_);
lean_dec(v_fst_1945_);
v___x_1951_ = lean_uint64_dec_eq(v___x_1950_, v_hash_u2080_1933_);
if (v___x_1951_ == 0)
{
lean_object* v___x_1953_; 
lean_dec(v_snd_1946_);
if (v_isShared_1949_ == 0)
{
lean_ctor_set(v___x_1948_, 1, v_idx_1934_);
lean_ctor_set(v___x_1948_, 0, v_groups_1935_);
v___x_1953_ = v___x_1948_;
goto v_reusejp_1952_;
}
else
{
lean_object* v_reuseFailAlloc_1954_; 
v_reuseFailAlloc_1954_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1954_, 0, v_groups_1935_);
lean_ctor_set(v_reuseFailAlloc_1954_, 1, v_idx_1934_);
v___x_1953_ = v_reuseFailAlloc_1954_;
goto v_reusejp_1952_;
}
v_reusejp_1952_:
{
return v___x_1953_;
}
}
else
{
lean_object* v_fst_1955_; lean_object* v_snd_1956_; lean_object* v___x_1958_; uint8_t v_isShared_1959_; uint8_t v_isSharedCheck_1980_; 
lean_del_object(v___x_1948_);
v_fst_1955_ = lean_ctor_get(v_snd_1946_, 0);
v_snd_1956_ = lean_ctor_get(v_snd_1946_, 1);
v_isSharedCheck_1980_ = !lean_is_exclusive(v_snd_1946_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1958_ = v_snd_1946_;
v_isShared_1959_ = v_isSharedCheck_1980_;
goto v_resetjp_1957_;
}
else
{
lean_inc(v_snd_1956_);
lean_inc(v_fst_1955_);
lean_dec(v_snd_1946_);
v___x_1958_ = lean_box(0);
v_isShared_1959_ = v_isSharedCheck_1980_;
goto v_resetjp_1957_;
}
v_resetjp_1957_:
{
lean_object* v___x_1960_; lean_object* v___x_1961_; 
v___x_1960_ = lean_unsigned_to_nat(0u);
v___x_1961_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(v_idx_1934_, v___x_1941_, v_snd_1956_, v_groups_1935_, v___x_1960_);
if (lean_obj_tag(v___x_1961_) == 0)
{
lean_object* v___x_1963_; 
if (v_isShared_1959_ == 0)
{
v___x_1963_ = v___x_1958_;
goto v_reusejp_1962_;
}
else
{
lean_object* v_reuseFailAlloc_1968_; 
v_reuseFailAlloc_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1968_, 0, v_fst_1955_);
lean_ctor_set(v_reuseFailAlloc_1968_, 1, v_snd_1956_);
v___x_1963_ = v_reuseFailAlloc_1968_;
goto v_reusejp_1962_;
}
v_reusejp_1962_:
{
lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; 
v___x_1964_ = lean_unsigned_to_nat(1u);
v___x_1965_ = lean_mk_empty_array_with_capacity(v___x_1964_);
v___x_1966_ = lean_array_push(v___x_1965_, v___x_1963_);
v___x_1967_ = lean_array_push(v_groups_1935_, v___x_1966_);
v_val_1937_ = v___x_1967_;
goto v___jp_1936_;
}
}
else
{
lean_object* v_val_1969_; lean_object* v___x_1970_; uint8_t v___x_1971_; 
v_val_1969_ = lean_ctor_get(v___x_1961_, 0);
lean_inc(v_val_1969_);
lean_dec_ref_known(v___x_1961_, 1);
v___x_1970_ = lean_array_get_size(v_groups_1935_);
v___x_1971_ = lean_nat_dec_lt(v_val_1969_, v___x_1970_);
if (v___x_1971_ == 0)
{
lean_dec(v_val_1969_);
lean_del_object(v___x_1958_);
lean_dec(v_snd_1956_);
lean_dec(v_fst_1955_);
v_val_1937_ = v_groups_1935_;
goto v___jp_1936_;
}
else
{
lean_object* v_v_1972_; lean_object* v___x_1973_; lean_object* v_xs_x27_1974_; lean_object* v___x_1976_; 
v_v_1972_ = lean_array_fget(v_groups_1935_, v_val_1969_);
v___x_1973_ = lean_box(0);
v_xs_x27_1974_ = lean_array_fset(v_groups_1935_, v_val_1969_, v___x_1973_);
if (v_isShared_1959_ == 0)
{
v___x_1976_ = v___x_1958_;
goto v_reusejp_1975_;
}
else
{
lean_object* v_reuseFailAlloc_1979_; 
v_reuseFailAlloc_1979_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1979_, 0, v_fst_1955_);
lean_ctor_set(v_reuseFailAlloc_1979_, 1, v_snd_1956_);
v___x_1976_ = v_reuseFailAlloc_1979_;
goto v_reusejp_1975_;
}
v_reusejp_1975_:
{
lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1977_ = lean_array_push(v_v_1972_, v___x_1976_);
v___x_1978_ = lean_array_fset(v_xs_x27_1974_, v_val_1969_, v___x_1977_);
lean_dec(v_val_1969_);
v_val_1937_ = v___x_1978_;
goto v___jp_1936_;
}
}
}
}
}
}
}
v___jp_1936_:
{
lean_object* v___x_1938_; lean_object* v___x_1939_; 
v___x_1938_ = lean_unsigned_to_nat(1u);
v___x_1939_ = lean_nat_add(v_idx_1934_, v___x_1938_);
lean_dec(v_idx_1934_);
v_idx_1934_ = v___x_1939_;
v_groups_1935_ = v_val_1937_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg___boxed(lean_object* v_sorted_1982_, lean_object* v_hash_u2080_1983_, lean_object* v_idx_1984_, lean_object* v_groups_1985_){
_start:
{
uint64_t v_hash_u2080_boxed_1986_; lean_object* v_res_1987_; 
v_hash_u2080_boxed_1986_ = lean_unbox_uint64(v_hash_u2080_1983_);
lean_dec_ref(v_hash_u2080_1983_);
v_res_1987_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_1982_, v_hash_u2080_boxed_1986_, v_idx_1984_, v_groups_1985_);
lean_dec_ref(v_sorted_1982_);
return v_res_1987_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather(lean_object* v_00_u03b1_1988_, lean_object* v_cands_1989_, lean_object* v_sorted_1990_, uint64_t v_hash_u2080_1991_, lean_object* v_idx_1992_, lean_object* v_groups_1993_, lean_object* v_hgroups_1994_){
_start:
{
lean_object* v___x_1995_; 
v___x_1995_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_1990_, v_hash_u2080_1991_, v_idx_1992_, v_groups_1993_);
return v___x_1995_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___boxed(lean_object* v_00_u03b1_1996_, lean_object* v_cands_1997_, lean_object* v_sorted_1998_, lean_object* v_hash_u2080_1999_, lean_object* v_idx_2000_, lean_object* v_groups_2001_, lean_object* v_hgroups_2002_){
_start:
{
uint64_t v_hash_u2080_boxed_2003_; lean_object* v_res_2004_; 
v_hash_u2080_boxed_2003_ = lean_unbox_uint64(v_hash_u2080_1999_);
lean_dec_ref(v_hash_u2080_1999_);
v_res_2004_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather(v_00_u03b1_1996_, v_cands_1997_, v_sorted_1998_, v_hash_u2080_boxed_2003_, v_idx_2000_, v_groups_2001_, v_hgroups_2002_);
lean_dec_ref(v_sorted_1998_);
lean_dec_ref(v_cands_1997_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0(lean_object* v_00_u03b1_2005_, lean_object* v_idx_2006_, lean_object* v___x_2007_, lean_object* v_snd_2008_, lean_object* v_as_2009_, lean_object* v_j_2010_){
_start:
{
lean_object* v___x_2011_; 
v___x_2011_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___redArg(v_idx_2006_, v___x_2007_, v_snd_2008_, v_as_2009_, v_j_2010_);
return v___x_2011_;
}
}
LEAN_EXPORT lean_object* l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0___boxed(lean_object* v_00_u03b1_2012_, lean_object* v_idx_2013_, lean_object* v___x_2014_, lean_object* v_snd_2015_, lean_object* v_as_2016_, lean_object* v_j_2017_){
_start:
{
lean_object* v_res_2018_; 
v_res_2018_ = l_Array_findIdx_x3f_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_spec__0(v_00_u03b1_2012_, v_idx_2013_, v___x_2014_, v_snd_2015_, v_as_2016_, v_j_2017_);
lean_dec_ref(v_as_2016_);
lean_dec_ref(v_snd_2015_);
lean_dec(v___x_2014_);
lean_dec(v_idx_2013_);
return v_res_2018_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___redArg(lean_object* v_x_2019_, lean_object* v_h__1_2020_){
_start:
{
lean_object* v_snd_2021_; lean_object* v_fst_2022_; lean_object* v_fst_2023_; lean_object* v_snd_2024_; lean_object* v___x_2025_; 
v_snd_2021_ = lean_ctor_get(v_x_2019_, 1);
lean_inc(v_snd_2021_);
v_fst_2022_ = lean_ctor_get(v_x_2019_, 0);
lean_inc(v_fst_2022_);
lean_dec_ref(v_x_2019_);
v_fst_2023_ = lean_ctor_get(v_snd_2021_, 0);
lean_inc(v_fst_2023_);
v_snd_2024_ = lean_ctor_get(v_snd_2021_, 1);
lean_inc(v_snd_2024_);
lean_dec(v_snd_2021_);
v___x_2025_ = lean_apply_3(v_h__1_2020_, v_fst_2022_, v_fst_2023_, v_snd_2024_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter(lean_object* v_00_u03b1_2026_, lean_object* v_cands_2027_, lean_object* v_motive_2028_, lean_object* v_x_2029_, lean_object* v_h__1_2030_){
_start:
{
lean_object* v_snd_2031_; lean_object* v_fst_2032_; lean_object* v_fst_2033_; lean_object* v_snd_2034_; lean_object* v___x_2035_; 
v_snd_2031_ = lean_ctor_get(v_x_2029_, 1);
lean_inc(v_snd_2031_);
v_fst_2032_ = lean_ctor_get(v_x_2029_, 0);
lean_inc(v_fst_2032_);
lean_dec_ref(v_x_2029_);
v_fst_2033_ = lean_ctor_get(v_snd_2031_, 0);
lean_inc(v_fst_2033_);
v_snd_2034_ = lean_ctor_get(v_snd_2031_, 1);
lean_inc(v_snd_2034_);
lean_dec(v_snd_2031_);
v___x_2035_ = lean_apply_3(v_h__1_2030_, v_fst_2032_, v_fst_2033_, v_snd_2034_);
return v___x_2035_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter___boxed(lean_object* v_00_u03b1_2036_, lean_object* v_cands_2037_, lean_object* v_motive_2038_, lean_object* v_x_2039_, lean_object* v_h__1_2040_){
_start:
{
lean_object* v_res_2041_; 
v_res_2041_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__3_splitter(v_00_u03b1_2036_, v_cands_2037_, v_motive_2038_, v_x_2039_, v_h__1_2040_);
lean_dec_ref(v_cands_2037_);
return v_res_2041_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___redArg(lean_object* v_x_2042_, lean_object* v_h__1_2043_){
_start:
{
lean_object* v___x_2044_; 
v___x_2044_ = lean_apply_2(v_h__1_2043_, v_x_2042_, lean_box(0));
return v___x_2044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter(lean_object* v_00_u03b1_2045_, lean_object* v_cands_2046_, lean_object* v_motive_2047_, lean_object* v_x_2048_, lean_object* v_h__1_2049_){
_start:
{
lean_object* v___x_2050_; 
v___x_2050_ = lean_apply_2(v_h__1_2049_, v_x_2048_, lean_box(0));
return v___x_2050_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter___boxed(lean_object* v_00_u03b1_2051_, lean_object* v_cands_2052_, lean_object* v_motive_2053_, lean_object* v_x_2054_, lean_object* v_h__1_2055_){
_start:
{
lean_object* v_res_2056_; 
v_res_2056_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__3_splitter(v_00_u03b1_2051_, v_cands_2052_, v_motive_2053_, v_x_2054_, v_h__1_2055_);
lean_dec_ref(v_cands_2052_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___redArg(lean_object* v_x_2057_, lean_object* v_h__1_2058_){
_start:
{
lean_object* v___x_2059_; 
v___x_2059_ = lean_apply_3(v_h__1_2058_, v_x_2057_, lean_box(0), lean_box(0));
return v___x_2059_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter(lean_object* v_00_u03b1_2060_, lean_object* v_cands_2061_, lean_object* v_idx_2062_, lean_object* v_motive_2063_, lean_object* v_x_2064_, lean_object* v_h__1_2065_){
_start:
{
lean_object* v___x_2066_; 
v___x_2066_ = lean_apply_3(v_h__1_2065_, v_x_2064_, lean_box(0), lean_box(0));
return v___x_2066_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter___boxed(lean_object* v_00_u03b1_2067_, lean_object* v_cands_2068_, lean_object* v_idx_2069_, lean_object* v_motive_2070_, lean_object* v_x_2071_, lean_object* v_h__1_2072_){
_start:
{
lean_object* v_res_2073_; 
v_res_2073_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather_match__1_splitter(v_00_u03b1_2067_, v_cands_2068_, v_idx_2069_, v_motive_2070_, v_x_2071_, v_h__1_2072_);
lean_dec(v_idx_2069_);
lean_dec_ref(v_cands_2068_);
return v_res_2073_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(lean_object* v_single_2074_, lean_object* v_multi_2075_, lean_object* v_sorted_2076_, lean_object* v_idx_2077_, lean_object* v_s_2078_){
_start:
{
lean_object* v___x_2079_; uint8_t v___x_2080_; 
v___x_2079_ = lean_array_get_size(v_sorted_2076_);
v___x_2080_ = lean_nat_dec_lt(v_idx_2077_, v___x_2079_);
if (v___x_2080_ == 0)
{
lean_dec(v_idx_2077_);
lean_dec(v_multi_2075_);
lean_dec(v_single_2074_);
return v_s_2078_;
}
else
{
lean_object* v___x_2081_; lean_object* v_snd_2082_; lean_object* v_fst_2083_; lean_object* v_fst_2084_; lean_object* v_snd_2085_; lean_object* v___x_2086_; lean_object* v_idx_2087_; uint8_t v___x_2088_; 
v___x_2081_ = lean_array_fget_borrowed(v_sorted_2076_, v_idx_2077_);
v_snd_2082_ = lean_ctor_get(v___x_2081_, 1);
v_fst_2083_ = lean_ctor_get(v___x_2081_, 0);
v_fst_2084_ = lean_ctor_get(v_snd_2082_, 0);
v_snd_2085_ = lean_ctor_get(v_snd_2082_, 1);
v___x_2086_ = lean_unsigned_to_nat(1u);
v_idx_2087_ = lean_nat_add(v_idx_2077_, v___x_2086_);
lean_dec(v_idx_2077_);
v___x_2088_ = lean_nat_dec_lt(v_idx_2087_, v___x_2079_);
if (v___x_2088_ == 0)
{
lean_object* v___x_2089_; 
lean_inc(v_single_2074_);
lean_inc(v_snd_2085_);
lean_inc(v_fst_2084_);
v___x_2089_ = lean_apply_3(v_single_2074_, v_s_2078_, v_fst_2084_, v_snd_2085_);
v_idx_2077_ = v_idx_2087_;
v_s_2078_ = v___x_2089_;
goto _start;
}
else
{
lean_object* v___x_2091_; lean_object* v_fst_2092_; lean_object* v___x_2094_; uint8_t v_isShared_2095_; uint8_t v_isSharedCheck_2114_; 
v___x_2091_ = lean_array_fget(v_sorted_2076_, v_idx_2087_);
v_fst_2092_ = lean_ctor_get(v___x_2091_, 0);
v_isSharedCheck_2114_ = !lean_is_exclusive(v___x_2091_);
if (v_isSharedCheck_2114_ == 0)
{
lean_object* v_unused_2115_; 
v_unused_2115_ = lean_ctor_get(v___x_2091_, 1);
lean_dec(v_unused_2115_);
v___x_2094_ = v___x_2091_;
v_isShared_2095_ = v_isSharedCheck_2114_;
goto v_resetjp_2093_;
}
else
{
lean_inc(v_fst_2092_);
lean_dec(v___x_2091_);
v___x_2094_ = lean_box(0);
v_isShared_2095_ = v_isSharedCheck_2114_;
goto v_resetjp_2093_;
}
v_resetjp_2093_:
{
uint64_t v___x_2096_; uint64_t v___x_2097_; uint8_t v___x_2098_; 
v___x_2096_ = lean_unbox_uint64(v_fst_2092_);
lean_dec(v_fst_2092_);
v___x_2097_ = lean_unbox_uint64(v_fst_2083_);
v___x_2098_ = lean_uint64_dec_eq(v___x_2096_, v___x_2097_);
if (v___x_2098_ == 0)
{
lean_object* v___x_2099_; 
lean_del_object(v___x_2094_);
lean_inc(v_single_2074_);
lean_inc(v_snd_2085_);
lean_inc(v_fst_2084_);
v___x_2099_ = lean_apply_3(v_single_2074_, v_s_2078_, v_fst_2084_, v_snd_2085_);
v_idx_2077_ = v_idx_2087_;
v_s_2078_ = v___x_2099_;
goto _start;
}
else
{
lean_object* v___x_2102_; 
lean_inc(v_snd_2085_);
lean_inc(v_fst_2084_);
if (v_isShared_2095_ == 0)
{
lean_ctor_set(v___x_2094_, 1, v_snd_2085_);
lean_ctor_set(v___x_2094_, 0, v_fst_2084_);
v___x_2102_ = v___x_2094_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2113_; 
v_reuseFailAlloc_2113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2113_, 0, v_fst_2084_);
lean_ctor_set(v_reuseFailAlloc_2113_, 1, v_snd_2085_);
v___x_2102_ = v_reuseFailAlloc_2113_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; uint64_t v___x_2106_; lean_object* v_val_2107_; lean_object* v_fst_2108_; lean_object* v_snd_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; 
v___x_2103_ = lean_mk_empty_array_with_capacity(v___x_2086_);
lean_inc_ref(v___x_2103_);
v___x_2104_ = lean_array_push(v___x_2103_, v___x_2102_);
v___x_2105_ = lean_array_push(v___x_2103_, v___x_2104_);
v___x_2106_ = lean_unbox_uint64(v_fst_2083_);
v_val_2107_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_2076_, v___x_2106_, v_idx_2087_, v___x_2105_);
v_fst_2108_ = lean_ctor_get(v_val_2107_, 0);
lean_inc(v_fst_2108_);
v_snd_2109_ = lean_ctor_get(v_val_2107_, 1);
lean_inc(v_snd_2109_);
lean_dec_ref(v_val_2107_);
v___x_2110_ = lean_unsigned_to_nat(0u);
lean_inc(v_multi_2075_);
lean_inc(v_single_2074_);
v___x_2111_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg(v_single_2074_, v_multi_2075_, v_fst_2108_, v___x_2110_, v_s_2078_);
lean_dec(v_fst_2108_);
v_idx_2077_ = v_snd_2109_;
v_s_2078_ = v___x_2111_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg___boxed(lean_object* v_single_2116_, lean_object* v_multi_2117_, lean_object* v_sorted_2118_, lean_object* v_idx_2119_, lean_object* v_s_2120_){
_start:
{
lean_object* v_res_2121_; 
v_res_2121_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2116_, v_multi_2117_, v_sorted_2118_, v_idx_2119_, v_s_2120_);
lean_dec_ref(v_sorted_2118_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go(lean_object* v_00_u03b1_2122_, lean_object* v_00_u03c3_2123_, lean_object* v_cands_2124_, lean_object* v_single_2125_, lean_object* v_multi_2126_, lean_object* v_sorted_2127_, lean_object* v_idx_2128_, lean_object* v_s_2129_){
_start:
{
lean_object* v___x_2130_; 
v___x_2130_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2125_, v_multi_2126_, v_sorted_2127_, v_idx_2128_, v_s_2129_);
return v___x_2130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___boxed(lean_object* v_00_u03b1_2131_, lean_object* v_00_u03c3_2132_, lean_object* v_cands_2133_, lean_object* v_single_2134_, lean_object* v_multi_2135_, lean_object* v_sorted_2136_, lean_object* v_idx_2137_, lean_object* v_s_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go(v_00_u03b1_2131_, v_00_u03c3_2132_, v_cands_2133_, v_single_2134_, v_multi_2135_, v_sorted_2136_, v_idx_2137_, v_s_2138_);
lean_dec_ref(v_sorted_2136_);
lean_dec_ref(v_cands_2133_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___redArg(lean_object* v_x_2140_, lean_object* v_h__1_2141_){
_start:
{
lean_object* v_fst_2142_; lean_object* v_snd_2143_; lean_object* v___x_2144_; 
v_fst_2142_ = lean_ctor_get(v_x_2140_, 0);
lean_inc(v_fst_2142_);
v_snd_2143_ = lean_ctor_get(v_x_2140_, 1);
lean_inc(v_snd_2143_);
lean_dec_ref(v_x_2140_);
v___x_2144_ = lean_apply_4(v_h__1_2141_, v_fst_2142_, v_snd_2143_, lean_box(0), lean_box(0));
return v___x_2144_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter(lean_object* v_00_u03b1_2145_, lean_object* v_cands_2146_, lean_object* v_idx_2147_, lean_object* v_motive_2148_, lean_object* v_x_2149_, lean_object* v_h__1_2150_){
_start:
{
lean_object* v_fst_2151_; lean_object* v_snd_2152_; lean_object* v___x_2153_; 
v_fst_2151_ = lean_ctor_get(v_x_2149_, 0);
lean_inc(v_fst_2151_);
v_snd_2152_ = lean_ctor_get(v_x_2149_, 1);
lean_inc(v_snd_2152_);
lean_dec_ref(v_x_2149_);
v___x_2153_ = lean_apply_4(v_h__1_2150_, v_fst_2151_, v_snd_2152_, lean_box(0), lean_box(0));
return v___x_2153_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter___boxed(lean_object* v_00_u03b1_2154_, lean_object* v_cands_2155_, lean_object* v_idx_2156_, lean_object* v_motive_2157_, lean_object* v_x_2158_, lean_object* v_h__1_2159_){
_start:
{
lean_object* v_res_2160_; 
v_res_2160_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go_match__1_splitter(v_00_u03b1_2154_, v_cands_2155_, v_idx_2156_, v_motive_2157_, v_x_2158_, v_h__1_2159_);
lean_dec(v_idx_2156_);
lean_dec_ref(v_cands_2155_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(lean_object* v_a_2161_, lean_object* v_x_2162_, lean_object* v___y_2163_){
_start:
{
lean_object* v___y_2165_; lean_object* v_snd_2169_; 
v_snd_2169_ = lean_ctor_get(v_a_2161_, 1);
switch(lean_obj_tag(v_snd_2169_))
{
case 0:
{
lean_object* v___x_2170_; 
v___x_2170_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2165_ = v___x_2170_;
goto v___jp_2164_;
}
case 1:
{
lean_object* v_children_2171_; 
v_children_2171_ = lean_ctor_get(v_snd_2169_, 1);
v___y_2165_ = v_children_2171_;
goto v___jp_2164_;
}
default: 
{
lean_object* v_children_2172_; 
v_children_2172_ = lean_ctor_get(v_snd_2169_, 2);
v___y_2165_ = v_children_2172_;
goto v___jp_2164_;
}
}
v___jp_2164_:
{
lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; 
v___x_2166_ = lean_array_get_size(v___y_2165_);
v___x_2167_ = lean_nat_add(v___y_2163_, v___x_2166_);
v___x_2168_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2168_, 0, v___x_2167_);
return v___x_2168_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0___boxed(lean_object* v_a_2173_, lean_object* v_x_2174_, lean_object* v___y_2175_){
_start:
{
lean_object* v_res_2176_; 
v_res_2176_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__0(v_a_2173_, v_x_2174_, v___y_2175_);
lean_dec(v___y_2175_);
lean_dec_ref(v_a_2173_);
return v_res_2176_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1(lean_object* v_fst_2177_, lean_object* v_c_2178_, lean_object* v_h_x27_2179_, lean_object* v_____s_2180_){
_start:
{
uint64_t v___y_2182_; lean_object* v___y_2189_; lean_object* v_key_2192_; 
v_key_2192_ = lean_ctor_get(v_c_2178_, 0);
lean_inc(v_key_2192_);
v___y_2189_ = v_key_2192_;
goto v___jp_2188_;
v___jp_2181_:
{
lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; 
v___x_2183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2183_, 0, v_fst_2177_);
lean_ctor_set(v___x_2183_, 1, v_c_2178_);
v___x_2184_ = lean_box_uint64(v___y_2182_);
v___x_2185_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2184_);
lean_ctor_set(v___x_2185_, 1, v___x_2183_);
v___x_2186_ = lean_array_push(v_____s_2180_, v___x_2185_);
v___x_2187_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2186_);
return v___x_2187_;
}
v___jp_2188_:
{
if (lean_obj_tag(v___y_2189_) == 0)
{
uint64_t v___x_2190_; 
v___x_2190_ = 1723ULL;
v___y_2182_ = v___x_2190_;
goto v___jp_2181_;
}
else
{
uint64_t v_hash_2191_; 
v_hash_2191_ = lean_ctor_get_uint64(v___y_2189_, sizeof(void*)*2);
lean_dec(v___y_2189_);
v___y_2182_ = v_hash_2191_;
goto v___jp_2181_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__2(lean_object* v___x_2193_, lean_object* v_p_2194_, lean_object* v_h_2195_, lean_object* v_____s_2196_){
_start:
{
lean_object* v_fst_2197_; lean_object* v_snd_2198_; lean_object* v___f_2199_; lean_object* v___y_2201_; 
v_fst_2197_ = lean_ctor_get(v_p_2194_, 0);
lean_inc(v_fst_2197_);
v_snd_2198_ = lean_ctor_get(v_p_2194_, 1);
lean_inc(v_snd_2198_);
lean_dec_ref(v_p_2194_);
v___f_2199_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__1), 4, 1);
lean_closure_set(v___f_2199_, 0, v_fst_2197_);
switch(lean_obj_tag(v_snd_2198_))
{
case 0:
{
lean_object* v___x_2206_; 
lean_dec_ref_known(v_snd_2198_, 2);
v___x_2206_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2201_ = v___x_2206_;
goto v___jp_2200_;
}
case 1:
{
lean_object* v_children_2207_; 
v_children_2207_ = lean_ctor_get(v_snd_2198_, 1);
lean_inc_ref(v_children_2207_);
lean_dec_ref_known(v_snd_2198_, 2);
v___y_2201_ = v_children_2207_;
goto v___jp_2200_;
}
default: 
{
lean_object* v_children_2208_; 
v_children_2208_ = lean_ctor_get(v_snd_2198_, 2);
lean_inc_ref(v_children_2208_);
lean_dec_ref_known(v_snd_2198_, 3);
v___y_2201_ = v_children_2208_;
goto v___jp_2200_;
}
}
v___jp_2200_:
{
size_t v_sz_2202_; size_t v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; 
v_sz_2202_ = lean_array_size(v___y_2201_);
v___x_2203_ = ((size_t)0ULL);
v___x_2204_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2193_, v___y_2201_, v___f_2199_, v_sz_2202_, v___x_2203_, v_____s_2196_);
v___x_2205_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2205_, 0, v___x_2204_);
return v___x_2205_;
}
}
}
LEAN_EXPORT uint8_t l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(lean_object* v_x_2209_, lean_object* v_x_2210_){
_start:
{
lean_object* v_snd_2211_; lean_object* v_snd_2212_; lean_object* v_fst_2213_; lean_object* v_fst_2214_; lean_object* v_fst_2215_; lean_object* v_fst_2216_; uint64_t v___x_2217_; uint64_t v___x_2218_; uint8_t v___x_2219_; 
v_snd_2211_ = lean_ctor_get(v_x_2209_, 1);
v_snd_2212_ = lean_ctor_get(v_x_2210_, 1);
v_fst_2213_ = lean_ctor_get(v_x_2209_, 0);
v_fst_2214_ = lean_ctor_get(v_snd_2211_, 0);
v_fst_2215_ = lean_ctor_get(v_x_2210_, 0);
v_fst_2216_ = lean_ctor_get(v_snd_2212_, 0);
v___x_2217_ = lean_unbox_uint64(v_fst_2213_);
v___x_2218_ = lean_unbox_uint64(v_fst_2215_);
v___x_2219_ = lean_uint64_dec_lt(v___x_2217_, v___x_2218_);
if (v___x_2219_ == 0)
{
uint64_t v___x_2220_; uint64_t v___x_2221_; uint8_t v___x_2222_; 
v___x_2220_ = lean_unbox_uint64(v_fst_2213_);
v___x_2221_ = lean_unbox_uint64(v_fst_2215_);
v___x_2222_ = lean_uint64_dec_eq(v___x_2220_, v___x_2221_);
if (v___x_2222_ == 0)
{
return v___x_2222_;
}
else
{
uint8_t v___x_2223_; 
v___x_2223_ = lean_nat_dec_lt(v_fst_2214_, v_fst_2216_);
return v___x_2223_;
}
}
else
{
return v___x_2219_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3___boxed(lean_object* v_x_2224_, lean_object* v_x_2225_){
_start:
{
uint8_t v_res_2226_; lean_object* v_r_2227_; 
v_res_2226_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v_x_2224_, v_x_2225_);
lean_dec_ref(v_x_2225_);
lean_dec_ref(v_x_2224_);
v_r_2227_ = lean_box(v_res_2226_);
return v_r_2227_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg(lean_object* v_cands_2251_, lean_object* v_init_2252_, lean_object* v_single_2253_, lean_object* v_multi_2254_){
_start:
{
lean_object* v___f_2255_; lean_object* v___x_2256_; lean_object* v___f_2257_; lean_object* v_total_2258_; size_t v_sz_2259_; size_t v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; uint8_t v___x_2265_; 
v___f_2255_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_2256_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10));
v___f_2257_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11));
v_total_2258_ = lean_unsigned_to_nat(0u);
v_sz_2259_ = lean_array_size(v_cands_2251_);
v___x_2260_ = ((size_t)0ULL);
lean_inc_ref(v_cands_2251_);
v___x_2261_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2256_, v_cands_2251_, v___f_2255_, v_sz_2259_, v___x_2260_, v_total_2258_);
v___x_2262_ = lean_mk_empty_array_with_capacity(v___x_2261_);
lean_dec(v___x_2261_);
v___x_2263_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2256_, v_cands_2251_, v___f_2257_, v_sz_2259_, v___x_2260_, v___x_2262_);
v___x_2264_ = lean_array_get_size(v___x_2263_);
v___x_2265_ = lean_nat_dec_eq(v___x_2264_, v_total_2258_);
if (v___x_2265_ == 0)
{
lean_object* v___f_2266_; lean_object* v___y_2268_; lean_object* v___y_2269_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___y_2275_; uint8_t v___x_2277_; 
v___f_2266_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12));
v___x_2272_ = lean_unsigned_to_nat(1u);
v___x_2273_ = lean_nat_sub(v___x_2264_, v___x_2272_);
v___x_2277_ = lean_nat_dec_le(v_total_2258_, v___x_2273_);
if (v___x_2277_ == 0)
{
lean_inc(v___x_2273_);
v___y_2275_ = v___x_2273_;
goto v___jp_2274_;
}
else
{
v___y_2275_ = v_total_2258_;
goto v___jp_2274_;
}
v___jp_2267_:
{
lean_object* v___x_2270_; lean_object* v___x_2271_; 
v___x_2270_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_2266_, v___x_2264_, v___x_2263_, v___y_2268_, v___y_2269_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2269_);
v___x_2271_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2253_, v_multi_2254_, v___x_2270_, v_total_2258_, v_init_2252_);
lean_dec_ref(v___x_2270_);
return v___x_2271_;
}
v___jp_2274_:
{
uint8_t v___x_2276_; 
v___x_2276_ = lean_nat_dec_le(v___y_2275_, v___x_2273_);
if (v___x_2276_ == 0)
{
lean_dec(v___x_2273_);
lean_inc(v___y_2275_);
v___y_2268_ = v___y_2275_;
v___y_2269_ = v___y_2275_;
goto v___jp_2267_;
}
else
{
v___y_2268_ = v___y_2275_;
v___y_2269_ = v___x_2273_;
goto v___jp_2267_;
}
}
}
else
{
lean_object* v___x_2278_; 
v___x_2278_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2253_, v_multi_2254_, v___x_2263_, v_total_2258_, v_init_2252_);
lean_dec(v___x_2263_);
return v___x_2278_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups(lean_object* v_00_u03b1_2279_, lean_object* v_00_u03c3_2280_, lean_object* v_cands_2281_, lean_object* v_init_2282_, lean_object* v_single_2283_, lean_object* v_multi_2284_){
_start:
{
lean_object* v___f_2285_; lean_object* v___x_2286_; lean_object* v___f_2287_; lean_object* v_total_2288_; size_t v_sz_2289_; size_t v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; uint8_t v___x_2295_; 
v___f_2285_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__0));
v___x_2286_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__10));
v___f_2287_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__11));
v_total_2288_ = lean_unsigned_to_nat(0u);
v_sz_2289_ = lean_array_size(v_cands_2281_);
v___x_2290_ = ((size_t)0ULL);
lean_inc_ref(v_cands_2281_);
v___x_2291_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2286_, v_cands_2281_, v___f_2285_, v_sz_2289_, v___x_2290_, v_total_2288_);
v___x_2292_ = lean_mk_empty_array_with_capacity(v___x_2291_);
lean_dec(v___x_2291_);
v___x_2293_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_2286_, v_cands_2281_, v___f_2287_, v_sz_2289_, v___x_2290_, v___x_2292_);
v___x_2294_ = lean_array_get_size(v___x_2293_);
v___x_2295_ = lean_nat_dec_eq(v___x_2294_, v_total_2288_);
if (v___x_2295_ == 0)
{
lean_object* v___f_2296_; lean_object* v___y_2298_; lean_object* v___y_2299_; lean_object* v___x_2302_; lean_object* v___x_2303_; lean_object* v___y_2305_; uint8_t v___x_2307_; 
v___f_2296_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___closed__12));
v___x_2302_ = lean_unsigned_to_nat(1u);
v___x_2303_ = lean_nat_sub(v___x_2294_, v___x_2302_);
v___x_2307_ = lean_nat_dec_le(v_total_2288_, v___x_2303_);
if (v___x_2307_ == 0)
{
lean_inc(v___x_2303_);
v___y_2305_ = v___x_2303_;
goto v___jp_2304_;
}
else
{
v___y_2305_ = v_total_2288_;
goto v___jp_2304_;
}
v___jp_2297_:
{
lean_object* v___x_2300_; lean_object* v___x_2301_; 
v___x_2300_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_2296_, v___x_2294_, v___x_2293_, v___y_2298_, v___y_2299_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_2299_);
v___x_2301_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2283_, v_multi_2284_, v___x_2300_, v_total_2288_, v_init_2282_);
lean_dec_ref(v___x_2300_);
return v___x_2301_;
}
v___jp_2304_:
{
uint8_t v___x_2306_; 
v___x_2306_ = lean_nat_dec_le(v___y_2305_, v___x_2303_);
if (v___x_2306_ == 0)
{
lean_dec(v___x_2303_);
lean_inc(v___y_2305_);
v___y_2298_ = v___y_2305_;
v___y_2299_ = v___y_2305_;
goto v___jp_2297_;
}
else
{
v___y_2298_ = v___y_2305_;
v___y_2299_ = v___x_2303_;
goto v___jp_2297_;
}
}
}
else
{
lean_object* v___x_2308_; 
v___x_2308_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___redArg(v_single_2283_, v_multi_2284_, v___x_2293_, v_total_2288_, v_init_2282_);
lean_dec(v___x_2293_);
return v___x_2308_;
}
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(lean_object* v_covered_2311_, lean_object* v_as_2312_, size_t v_sz_2313_, size_t v_i_2314_, uint64_t v_b_2315_){
_start:
{
uint8_t v___x_2316_; 
v___x_2316_ = lean_usize_dec_lt(v_i_2314_, v_sz_2313_);
if (v___x_2316_ == 0)
{
return v_b_2315_;
}
else
{
lean_object* v_a_2317_; lean_object* v_fst_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; uint64_t v___x_2321_; uint64_t v___x_2322_; size_t v___x_2323_; size_t v___x_2324_; 
v_a_2317_ = lean_array_uget_borrowed(v_as_2312_, v_i_2314_);
v_fst_2318_ = lean_ctor_get(v_a_2317_, 0);
v___x_2319_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed__const__1));
v___x_2320_ = lean_array_get_borrowed(v___x_2319_, v_covered_2311_, v_fst_2318_);
v___x_2321_ = lean_unbox_uint64(v___x_2320_);
v___x_2322_ = lean_uint64_land(v_b_2315_, v___x_2321_);
v___x_2323_ = ((size_t)1ULL);
v___x_2324_ = lean_usize_add(v_i_2314_, v___x_2323_);
v_i_2314_ = v___x_2324_;
v_b_2315_ = v___x_2322_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg___boxed(lean_object* v_covered_2326_, lean_object* v_as_2327_, lean_object* v_sz_2328_, lean_object* v_i_2329_, lean_object* v_b_2330_){
_start:
{
size_t v_sz_boxed_2331_; size_t v_i_boxed_2332_; uint64_t v_b_boxed_2333_; uint64_t v_res_2334_; lean_object* v_r_2335_; 
v_sz_boxed_2331_ = lean_unbox_usize(v_sz_2328_);
lean_dec(v_sz_2328_);
v_i_boxed_2332_ = lean_unbox_usize(v_i_2329_);
lean_dec(v_i_2329_);
v_b_boxed_2333_ = lean_unbox_uint64(v_b_2330_);
lean_dec_ref(v_b_2330_);
v_res_2334_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v_covered_2326_, v_as_2327_, v_sz_boxed_2331_, v_i_boxed_2332_, v_b_boxed_2333_);
lean_dec_ref(v_as_2327_);
lean_dec_ref(v_covered_2326_);
v_r_2335_ = lean_box_uint64(v_res_2334_);
return v_r_2335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(lean_object* v_p_2336_, lean_object* v_as_2337_, size_t v_sz_2338_, size_t v_i_2339_, lean_object* v_b_2340_){
_start:
{
uint8_t v___x_2341_; 
v___x_2341_ = lean_usize_dec_lt(v_i_2339_, v_sz_2338_);
if (v___x_2341_ == 0)
{
return v_b_2340_;
}
else
{
lean_object* v_a_2342_; uint64_t v___y_2344_; lean_object* v___y_2354_; lean_object* v_key_2357_; 
v_a_2342_ = lean_array_uget_borrowed(v_as_2337_, v_i_2339_);
v_key_2357_ = lean_ctor_get(v_a_2342_, 0);
v___y_2354_ = v_key_2357_;
goto v___jp_2353_;
v___jp_2343_:
{
lean_object* v_fst_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; size_t v___x_2350_; size_t v___x_2351_; 
v_fst_2345_ = lean_ctor_get(v_p_2336_, 0);
lean_inc(v_a_2342_);
lean_inc(v_fst_2345_);
v___x_2346_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2346_, 0, v_fst_2345_);
lean_ctor_set(v___x_2346_, 1, v_a_2342_);
v___x_2347_ = lean_box_uint64(v___y_2344_);
v___x_2348_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2348_, 0, v___x_2347_);
lean_ctor_set(v___x_2348_, 1, v___x_2346_);
v___x_2349_ = lean_array_push(v_b_2340_, v___x_2348_);
v___x_2350_ = ((size_t)1ULL);
v___x_2351_ = lean_usize_add(v_i_2339_, v___x_2350_);
v_i_2339_ = v___x_2351_;
v_b_2340_ = v___x_2349_;
goto _start;
}
v___jp_2353_:
{
if (lean_obj_tag(v___y_2354_) == 0)
{
uint64_t v___x_2355_; 
v___x_2355_ = 1723ULL;
v___y_2344_ = v___x_2355_;
goto v___jp_2343_;
}
else
{
uint64_t v_hash_2356_; 
v_hash_2356_ = lean_ctor_get_uint64(v___y_2354_, sizeof(void*)*2);
v___y_2344_ = v_hash_2356_;
goto v___jp_2343_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg___boxed(lean_object* v_p_2358_, lean_object* v_as_2359_, lean_object* v_sz_2360_, lean_object* v_i_2361_, lean_object* v_b_2362_){
_start:
{
size_t v_sz_boxed_2363_; size_t v_i_boxed_2364_; lean_object* v_res_2365_; 
v_sz_boxed_2363_ = lean_unbox_usize(v_sz_2360_);
lean_dec(v_sz_2360_);
v_i_boxed_2364_ = lean_unbox_usize(v_i_2361_);
lean_dec(v_i_2361_);
v_res_2365_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_p_2358_, v_as_2359_, v_sz_boxed_2363_, v_i_boxed_2364_, v_b_2362_);
lean_dec_ref(v_as_2359_);
lean_dec_ref(v_p_2358_);
return v_res_2365_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(lean_object* v_as_2366_, size_t v_sz_2367_, size_t v_i_2368_, lean_object* v_b_2369_){
_start:
{
uint8_t v___x_2370_; 
v___x_2370_ = lean_usize_dec_lt(v_i_2368_, v_sz_2367_);
if (v___x_2370_ == 0)
{
return v_b_2369_;
}
else
{
lean_object* v_a_2371_; lean_object* v___y_2373_; lean_object* v_snd_2380_; 
v_a_2371_ = lean_array_uget_borrowed(v_as_2366_, v_i_2368_);
v_snd_2380_ = lean_ctor_get(v_a_2371_, 1);
switch(lean_obj_tag(v_snd_2380_))
{
case 0:
{
lean_object* v___x_2381_; 
v___x_2381_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2373_ = v___x_2381_;
goto v___jp_2372_;
}
case 1:
{
lean_object* v_children_2382_; 
v_children_2382_ = lean_ctor_get(v_snd_2380_, 1);
v___y_2373_ = v_children_2382_;
goto v___jp_2372_;
}
default: 
{
lean_object* v_children_2383_; 
v_children_2383_ = lean_ctor_get(v_snd_2380_, 2);
v___y_2373_ = v_children_2383_;
goto v___jp_2372_;
}
}
v___jp_2372_:
{
size_t v_sz_2374_; size_t v___x_2375_; lean_object* v___x_2376_; size_t v___x_2377_; size_t v___x_2378_; 
v_sz_2374_ = lean_array_size(v___y_2373_);
v___x_2375_ = ((size_t)0ULL);
v___x_2376_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_a_2371_, v___y_2373_, v_sz_2374_, v___x_2375_, v_b_2369_);
v___x_2377_ = ((size_t)1ULL);
v___x_2378_ = lean_usize_add(v_i_2368_, v___x_2377_);
v_i_2368_ = v___x_2378_;
v_b_2369_ = v___x_2376_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg___boxed(lean_object* v_as_2384_, lean_object* v_sz_2385_, lean_object* v_i_2386_, lean_object* v_b_2387_){
_start:
{
size_t v_sz_boxed_2388_; size_t v_i_boxed_2389_; lean_object* v_res_2390_; 
v_sz_boxed_2388_ = lean_unbox_usize(v_sz_2385_);
lean_dec(v_sz_2385_);
v_i_boxed_2389_ = lean_unbox_usize(v_i_2386_);
lean_dec(v_i_2386_);
v_res_2390_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_2384_, v_sz_boxed_2388_, v_i_boxed_2389_, v_b_2387_);
lean_dec_ref(v_as_2384_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(lean_object* v_as_2391_, size_t v_i_2392_, size_t v_stop_2393_, lean_object* v_b_2394_){
_start:
{
lean_object* v___y_2396_; uint8_t v___x_2400_; 
v___x_2400_ = lean_usize_dec_eq(v_i_2392_, v_stop_2393_);
if (v___x_2400_ == 0)
{
lean_object* v___x_2401_; lean_object* v_fst_2402_; lean_object* v_snd_2403_; lean_object* v___x_2405_; uint8_t v_isShared_2406_; uint8_t v_isSharedCheck_2414_; 
v___x_2401_ = lean_array_uget(v_as_2391_, v_i_2392_);
v_fst_2402_ = lean_ctor_get(v___x_2401_, 0);
v_snd_2403_ = lean_ctor_get(v___x_2401_, 1);
v_isSharedCheck_2414_ = !lean_is_exclusive(v___x_2401_);
if (v_isSharedCheck_2414_ == 0)
{
v___x_2405_ = v___x_2401_;
v_isShared_2406_ = v_isSharedCheck_2414_;
goto v_resetjp_2404_;
}
else
{
lean_inc(v_snd_2403_);
lean_inc(v_fst_2402_);
lean_dec(v___x_2401_);
v___x_2405_ = lean_box(0);
v_isShared_2406_ = v_isSharedCheck_2414_;
goto v_resetjp_2404_;
}
v_resetjp_2404_:
{
lean_object* v_val_2408_; 
if (lean_obj_tag(v_snd_2403_) == 1)
{
lean_dec_ref_known(v_snd_2403_, 2);
lean_del_object(v___x_2405_);
lean_dec(v_fst_2402_);
v___y_2396_ = v_b_2394_;
goto v___jp_2395_;
}
else
{
lean_object* v_val_2413_; 
v_val_2413_ = lean_ctor_get(v_snd_2403_, 1);
lean_inc(v_val_2413_);
lean_dec(v_snd_2403_);
v_val_2408_ = v_val_2413_;
goto v___jp_2407_;
}
v___jp_2407_:
{
lean_object* v___x_2410_; 
if (v_isShared_2406_ == 0)
{
lean_ctor_set(v___x_2405_, 1, v_fst_2402_);
lean_ctor_set(v___x_2405_, 0, v_val_2408_);
v___x_2410_ = v___x_2405_;
goto v_reusejp_2409_;
}
else
{
lean_object* v_reuseFailAlloc_2412_; 
v_reuseFailAlloc_2412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2412_, 0, v_val_2408_);
lean_ctor_set(v_reuseFailAlloc_2412_, 1, v_fst_2402_);
v___x_2410_ = v_reuseFailAlloc_2412_;
goto v_reusejp_2409_;
}
v_reusejp_2409_:
{
lean_object* v___x_2411_; 
v___x_2411_ = lean_array_push(v_b_2394_, v___x_2410_);
v___y_2396_ = v___x_2411_;
goto v___jp_2395_;
}
}
}
}
else
{
return v_b_2394_;
}
v___jp_2395_:
{
size_t v___x_2397_; size_t v___x_2398_; 
v___x_2397_ = ((size_t)1ULL);
v___x_2398_ = lean_usize_add(v_i_2392_, v___x_2397_);
v_i_2392_ = v___x_2398_;
v_b_2394_ = v___y_2396_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg___boxed(lean_object* v_as_2415_, lean_object* v_i_2416_, lean_object* v_stop_2417_, lean_object* v_b_2418_){
_start:
{
size_t v_i_boxed_2419_; size_t v_stop_boxed_2420_; lean_object* v_res_2421_; 
v_i_boxed_2419_ = lean_unbox_usize(v_i_2416_);
lean_dec(v_i_2416_);
v_stop_boxed_2420_ = lean_unbox_usize(v_stop_2417_);
lean_dec(v_stop_2417_);
v_res_2421_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2415_, v_i_boxed_2419_, v_stop_boxed_2420_, v_b_2418_);
lean_dec_ref(v_as_2415_);
return v_res_2421_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(lean_object* v_as_2424_, lean_object* v_start_2425_, lean_object* v_stop_2426_){
_start:
{
lean_object* v___x_2427_; uint8_t v___x_2428_; 
v___x_2427_ = ((lean_object*)(l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___closed__0));
v___x_2428_ = lean_nat_dec_lt(v_start_2425_, v_stop_2426_);
if (v___x_2428_ == 0)
{
return v___x_2427_;
}
else
{
lean_object* v___x_2429_; uint8_t v___x_2430_; 
v___x_2429_ = lean_array_get_size(v_as_2424_);
v___x_2430_ = lean_nat_dec_le(v_stop_2426_, v___x_2429_);
if (v___x_2430_ == 0)
{
uint8_t v___x_2431_; 
v___x_2431_ = lean_nat_dec_lt(v_start_2425_, v___x_2429_);
if (v___x_2431_ == 0)
{
return v___x_2427_;
}
else
{
size_t v___x_2432_; size_t v___x_2433_; lean_object* v___x_2434_; 
v___x_2432_ = lean_usize_of_nat(v_start_2425_);
v___x_2433_ = lean_usize_of_nat(v___x_2429_);
v___x_2434_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2424_, v___x_2432_, v___x_2433_, v___x_2427_);
return v___x_2434_;
}
}
else
{
size_t v___x_2435_; size_t v___x_2436_; lean_object* v___x_2437_; 
v___x_2435_ = lean_usize_of_nat(v_start_2425_);
v___x_2436_ = lean_usize_of_nat(v_stop_2426_);
v___x_2437_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2424_, v___x_2435_, v___x_2436_, v___x_2427_);
return v___x_2437_;
}
}
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg___boxed(lean_object* v_as_2438_, lean_object* v_start_2439_, lean_object* v_stop_2440_){
_start:
{
lean_object* v_res_2441_; 
v_res_2441_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_as_2438_, v_start_2439_, v_stop_2440_);
lean_dec(v_stop_2440_);
lean_dec(v_start_2439_);
lean_dec_ref(v_as_2438_);
return v_res_2441_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(lean_object* v_hi_2442_, lean_object* v_pivot_2443_, lean_object* v_as_2444_, lean_object* v_i_2445_, lean_object* v_k_2446_){
_start:
{
uint8_t v___x_2457_; 
v___x_2457_ = lean_nat_dec_lt(v_k_2446_, v_hi_2442_);
if (v___x_2457_ == 0)
{
lean_object* v___x_2458_; lean_object* v___x_2459_; 
lean_dec(v_k_2446_);
v___x_2458_ = lean_array_fswap(v_as_2444_, v_i_2445_, v_hi_2442_);
v___x_2459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2459_, 0, v_i_2445_);
lean_ctor_set(v___x_2459_, 1, v___x_2458_);
return v___x_2459_;
}
else
{
lean_object* v___x_2460_; lean_object* v_snd_2461_; lean_object* v_snd_2462_; lean_object* v_fst_2463_; lean_object* v_fst_2464_; lean_object* v_fst_2465_; lean_object* v_fst_2466_; uint64_t v___x_2467_; uint64_t v___x_2468_; uint8_t v___x_2469_; 
v___x_2460_ = lean_array_fget_borrowed(v_as_2444_, v_k_2446_);
v_snd_2461_ = lean_ctor_get(v___x_2460_, 1);
v_snd_2462_ = lean_ctor_get(v_pivot_2443_, 1);
v_fst_2463_ = lean_ctor_get(v___x_2460_, 0);
v_fst_2464_ = lean_ctor_get(v_snd_2461_, 0);
v_fst_2465_ = lean_ctor_get(v_pivot_2443_, 0);
v_fst_2466_ = lean_ctor_get(v_snd_2462_, 0);
v___x_2467_ = lean_unbox_uint64(v_fst_2463_);
v___x_2468_ = lean_unbox_uint64(v_fst_2465_);
v___x_2469_ = lean_uint64_dec_lt(v___x_2467_, v___x_2468_);
if (v___x_2469_ == 0)
{
uint64_t v___x_2470_; uint64_t v___x_2471_; uint8_t v___x_2472_; 
v___x_2470_ = lean_unbox_uint64(v_fst_2463_);
v___x_2471_ = lean_unbox_uint64(v_fst_2465_);
v___x_2472_ = lean_uint64_dec_eq(v___x_2470_, v___x_2471_);
if (v___x_2472_ == 0)
{
goto v___jp_2453_;
}
else
{
uint8_t v___x_2473_; 
v___x_2473_ = lean_nat_dec_lt(v_fst_2464_, v_fst_2466_);
if (v___x_2473_ == 0)
{
goto v___jp_2453_;
}
else
{
goto v___jp_2447_;
}
}
}
else
{
goto v___jp_2447_;
}
}
v___jp_2447_:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; lean_object* v___x_2451_; 
v___x_2448_ = lean_array_fswap(v_as_2444_, v_i_2445_, v_k_2446_);
v___x_2449_ = lean_unsigned_to_nat(1u);
v___x_2450_ = lean_nat_add(v_i_2445_, v___x_2449_);
lean_dec(v_i_2445_);
v___x_2451_ = lean_nat_add(v_k_2446_, v___x_2449_);
lean_dec(v_k_2446_);
v_as_2444_ = v___x_2448_;
v_i_2445_ = v___x_2450_;
v_k_2446_ = v___x_2451_;
goto _start;
}
v___jp_2453_:
{
lean_object* v___x_2454_; lean_object* v___x_2455_; 
v___x_2454_ = lean_unsigned_to_nat(1u);
v___x_2455_ = lean_nat_add(v_k_2446_, v___x_2454_);
lean_dec(v_k_2446_);
v_k_2446_ = v___x_2455_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg___boxed(lean_object* v_hi_2474_, lean_object* v_pivot_2475_, lean_object* v_as_2476_, lean_object* v_i_2477_, lean_object* v_k_2478_){
_start:
{
lean_object* v_res_2479_; 
v_res_2479_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(v_hi_2474_, v_pivot_2475_, v_as_2476_, v_i_2477_, v_k_2478_);
lean_dec_ref(v_pivot_2475_);
lean_dec(v_hi_2474_);
return v_res_2479_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(lean_object* v_n_2480_, lean_object* v_as_2481_, lean_object* v_lo_2482_, lean_object* v_hi_2483_){
_start:
{
lean_object* v___y_2485_; uint8_t v___x_2495_; 
v___x_2495_ = lean_nat_dec_lt(v_lo_2482_, v_hi_2483_);
if (v___x_2495_ == 0)
{
lean_dec(v_lo_2482_);
return v_as_2481_;
}
else
{
lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v_mid_2498_; lean_object* v___y_2500_; lean_object* v___y_2506_; lean_object* v___x_2511_; lean_object* v___x_2512_; uint8_t v___x_2513_; 
v___x_2496_ = lean_nat_add(v_lo_2482_, v_hi_2483_);
v___x_2497_ = lean_unsigned_to_nat(1u);
v_mid_2498_ = lean_nat_shiftr(v___x_2496_, v___x_2497_);
lean_dec(v___x_2496_);
v___x_2511_ = lean_array_fget_borrowed(v_as_2481_, v_mid_2498_);
v___x_2512_ = lean_array_fget_borrowed(v_as_2481_, v_lo_2482_);
v___x_2513_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2511_, v___x_2512_);
if (v___x_2513_ == 0)
{
v___y_2506_ = v_as_2481_;
goto v___jp_2505_;
}
else
{
lean_object* v___x_2514_; 
v___x_2514_ = lean_array_fswap(v_as_2481_, v_lo_2482_, v_mid_2498_);
v___y_2506_ = v___x_2514_;
goto v___jp_2505_;
}
v___jp_2499_:
{
lean_object* v___x_2501_; lean_object* v___x_2502_; uint8_t v___x_2503_; 
v___x_2501_ = lean_array_fget_borrowed(v___y_2500_, v_mid_2498_);
v___x_2502_ = lean_array_fget_borrowed(v___y_2500_, v_hi_2483_);
v___x_2503_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2501_, v___x_2502_);
if (v___x_2503_ == 0)
{
lean_dec(v_mid_2498_);
v___y_2485_ = v___y_2500_;
goto v___jp_2484_;
}
else
{
lean_object* v___x_2504_; 
v___x_2504_ = lean_array_fswap(v___y_2500_, v_mid_2498_, v_hi_2483_);
lean_dec(v_mid_2498_);
v___y_2485_ = v___x_2504_;
goto v___jp_2484_;
}
}
v___jp_2505_:
{
lean_object* v___x_2507_; lean_object* v___x_2508_; uint8_t v___x_2509_; 
v___x_2507_ = lean_array_fget_borrowed(v___y_2506_, v_hi_2483_);
v___x_2508_ = lean_array_fget_borrowed(v___y_2506_, v_lo_2482_);
v___x_2509_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups___redArg___lam__3(v___x_2507_, v___x_2508_);
if (v___x_2509_ == 0)
{
v___y_2500_ = v___y_2506_;
goto v___jp_2499_;
}
else
{
lean_object* v___x_2510_; 
v___x_2510_ = lean_array_fswap(v___y_2506_, v_lo_2482_, v_hi_2483_);
v___y_2500_ = v___x_2510_;
goto v___jp_2499_;
}
}
}
v___jp_2484_:
{
lean_object* v_pivot_2486_; lean_object* v___x_2487_; lean_object* v_fst_2488_; lean_object* v_snd_2489_; uint8_t v___x_2490_; 
v_pivot_2486_ = lean_array_fget(v___y_2485_, v_hi_2483_);
lean_inc_n(v_lo_2482_, 2);
v___x_2487_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(v_hi_2483_, v_pivot_2486_, v___y_2485_, v_lo_2482_, v_lo_2482_);
lean_dec(v_pivot_2486_);
v_fst_2488_ = lean_ctor_get(v___x_2487_, 0);
lean_inc(v_fst_2488_);
v_snd_2489_ = lean_ctor_get(v___x_2487_, 1);
lean_inc(v_snd_2489_);
lean_dec_ref(v___x_2487_);
v___x_2490_ = lean_nat_dec_le(v_hi_2483_, v_fst_2488_);
if (v___x_2490_ == 0)
{
lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; 
v___x_2491_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_n_2480_, v_snd_2489_, v_lo_2482_, v_fst_2488_);
v___x_2492_ = lean_unsigned_to_nat(1u);
v___x_2493_ = lean_nat_add(v_fst_2488_, v___x_2492_);
lean_dec(v_fst_2488_);
v_as_2481_ = v___x_2491_;
v_lo_2482_ = v___x_2493_;
goto _start;
}
else
{
lean_dec(v_fst_2488_);
lean_dec(v_lo_2482_);
return v_snd_2489_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg___boxed(lean_object* v_n_2515_, lean_object* v_as_2516_, lean_object* v_lo_2517_, lean_object* v_hi_2518_){
_start:
{
lean_object* v_res_2519_; 
v_res_2519_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_n_2515_, v_as_2516_, v_lo_2517_, v_hi_2518_);
lean_dec(v_hi_2518_);
lean_dec(v_n_2515_);
return v_res_2519_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(lean_object* v_as_2520_, size_t v_sz_2521_, size_t v_i_2522_, lean_object* v_b_2523_){
_start:
{
lean_object* v___y_2525_; uint8_t v___x_2531_; 
v___x_2531_ = lean_usize_dec_lt(v_i_2522_, v_sz_2521_);
if (v___x_2531_ == 0)
{
return v_b_2523_;
}
else
{
lean_object* v_a_2532_; lean_object* v_snd_2533_; 
v_a_2532_ = lean_array_uget_borrowed(v_as_2520_, v_i_2522_);
v_snd_2533_ = lean_ctor_get(v_a_2532_, 1);
switch(lean_obj_tag(v_snd_2533_))
{
case 0:
{
lean_object* v___x_2534_; 
v___x_2534_ = ((lean_object*)(l_Lean_instInhabitedConstTrie___redArg___closed__0));
v___y_2525_ = v___x_2534_;
goto v___jp_2524_;
}
case 1:
{
lean_object* v_children_2535_; 
v_children_2535_ = lean_ctor_get(v_snd_2533_, 1);
v___y_2525_ = v_children_2535_;
goto v___jp_2524_;
}
default: 
{
lean_object* v_children_2536_; 
v_children_2536_ = lean_ctor_get(v_snd_2533_, 2);
v___y_2525_ = v_children_2536_;
goto v___jp_2524_;
}
}
}
v___jp_2524_:
{
lean_object* v___x_2526_; lean_object* v___x_2527_; size_t v___x_2528_; size_t v___x_2529_; 
v___x_2526_ = lean_array_get_size(v___y_2525_);
v___x_2527_ = lean_nat_add(v_b_2523_, v___x_2526_);
lean_dec(v_b_2523_);
v___x_2528_ = ((size_t)1ULL);
v___x_2529_ = lean_usize_add(v_i_2522_, v___x_2528_);
v_i_2522_ = v___x_2529_;
v_b_2523_ = v___x_2527_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg___boxed(lean_object* v_as_2537_, lean_object* v_sz_2538_, lean_object* v_i_2539_, lean_object* v_b_2540_){
_start:
{
size_t v_sz_boxed_2541_; size_t v_i_boxed_2542_; lean_object* v_res_2543_; 
v_sz_boxed_2541_ = lean_unbox_usize(v_sz_2538_);
lean_dec(v_sz_2538_);
v_i_boxed_2542_ = lean_unbox_usize(v_i_2539_);
lean_dec(v_i_2539_);
v_res_2543_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_2537_, v_sz_boxed_2541_, v_i_boxed_2542_, v_b_2540_);
lean_dec_ref(v_as_2537_);
return v_res_2543_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(lean_object* v_covered_2544_, lean_object* v_cands_2545_, lean_object* v_sorted_2546_, lean_object* v_idx_2547_, lean_object* v_s_2548_){
_start:
{
lean_object* v___x_2549_; uint8_t v___x_2550_; 
v___x_2549_ = lean_array_get_size(v_sorted_2546_);
v___x_2550_ = lean_nat_dec_lt(v_idx_2547_, v___x_2549_);
if (v___x_2550_ == 0)
{
lean_dec(v_idx_2547_);
return v_s_2548_;
}
else
{
lean_object* v___x_2551_; lean_object* v_snd_2552_; lean_object* v_fst_2553_; lean_object* v_fst_2554_; lean_object* v_snd_2555_; lean_object* v___x_2556_; lean_object* v_idx_2557_; uint8_t v___x_2558_; 
v___x_2551_ = lean_array_fget_borrowed(v_sorted_2546_, v_idx_2547_);
v_snd_2552_ = lean_ctor_get(v___x_2551_, 1);
v_fst_2553_ = lean_ctor_get(v___x_2551_, 0);
v_fst_2554_ = lean_ctor_get(v_snd_2552_, 0);
v_snd_2555_ = lean_ctor_get(v_snd_2552_, 1);
v___x_2556_ = lean_unsigned_to_nat(1u);
v_idx_2557_ = lean_nat_add(v_idx_2547_, v___x_2556_);
lean_dec(v_idx_2547_);
v___x_2558_ = lean_nat_dec_lt(v_idx_2557_, v___x_2549_);
if (v___x_2558_ == 0)
{
v_idx_2547_ = v_idx_2557_;
goto _start;
}
else
{
lean_object* v___x_2560_; lean_object* v_fst_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2582_; 
v___x_2560_ = lean_array_fget(v_sorted_2546_, v_idx_2557_);
v_fst_2561_ = lean_ctor_get(v___x_2560_, 0);
v_isSharedCheck_2582_ = !lean_is_exclusive(v___x_2560_);
if (v_isSharedCheck_2582_ == 0)
{
lean_object* v_unused_2583_; 
v_unused_2583_ = lean_ctor_get(v___x_2560_, 1);
lean_dec(v_unused_2583_);
v___x_2563_ = v___x_2560_;
v_isShared_2564_ = v_isSharedCheck_2582_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_fst_2561_);
lean_dec(v___x_2560_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2582_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
uint64_t v___x_2565_; uint64_t v___x_2566_; uint8_t v___x_2567_; 
v___x_2565_ = lean_unbox_uint64(v_fst_2561_);
lean_dec(v_fst_2561_);
v___x_2566_ = lean_unbox_uint64(v_fst_2553_);
v___x_2567_ = lean_uint64_dec_eq(v___x_2565_, v___x_2566_);
if (v___x_2567_ == 0)
{
lean_del_object(v___x_2563_);
v_idx_2547_ = v_idx_2557_;
goto _start;
}
else
{
lean_object* v___x_2570_; 
lean_inc(v_snd_2555_);
lean_inc(v_fst_2554_);
if (v_isShared_2564_ == 0)
{
lean_ctor_set(v___x_2563_, 1, v_snd_2555_);
lean_ctor_set(v___x_2563_, 0, v_fst_2554_);
v___x_2570_ = v___x_2563_;
goto v_reusejp_2569_;
}
else
{
lean_object* v_reuseFailAlloc_2581_; 
v_reuseFailAlloc_2581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2581_, 0, v_fst_2554_);
lean_ctor_set(v_reuseFailAlloc_2581_, 1, v_snd_2555_);
v___x_2570_ = v_reuseFailAlloc_2581_;
goto v_reusejp_2569_;
}
v_reusejp_2569_:
{
lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; uint64_t v___x_2574_; lean_object* v_val_2575_; lean_object* v_fst_2576_; lean_object* v_snd_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; 
v___x_2571_ = lean_mk_empty_array_with_capacity(v___x_2556_);
lean_inc_ref(v___x_2571_);
v___x_2572_ = lean_array_push(v___x_2571_, v___x_2570_);
v___x_2573_ = lean_array_push(v___x_2571_, v___x_2572_);
v___x_2574_ = lean_unbox_uint64(v_fst_2553_);
v_val_2575_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_2546_, v___x_2574_, v_idx_2557_, v___x_2573_);
v_fst_2576_ = lean_ctor_get(v_val_2575_, 0);
lean_inc(v_fst_2576_);
v_snd_2577_ = lean_ctor_get(v_val_2575_, 1);
lean_inc(v_snd_2577_);
lean_dec_ref(v_val_2575_);
v___x_2578_ = lean_unsigned_to_nat(0u);
v___x_2579_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(v_covered_2544_, v_fst_2576_, v___x_2578_, v_s_2548_);
lean_dec(v_fst_2576_);
v_idx_2547_ = v_snd_2577_;
v_s_2548_ = v___x_2579_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(lean_object* v_covered_2584_, lean_object* v_key_2585_, lean_object* v_cands_2586_, lean_object* v_acc_2587_){
_start:
{
lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2598_; lean_object* v___y_2599_; lean_object* v___y_2600_; lean_object* v___y_2601_; lean_object* v___y_2602_; lean_object* v___y_2603_; lean_object* v___y_2606_; lean_object* v_acc_2607_; lean_object* v___x_2628_; lean_object* v___x_2629_; uint8_t v___x_2630_; 
v___x_2628_ = lean_array_get_size(v_covered_2584_);
v___x_2629_ = lean_unsigned_to_nat(0u);
v___x_2630_ = lean_nat_dec_eq(v___x_2628_, v___x_2629_);
if (v___x_2630_ == 0)
{
uint64_t v_common_2631_; size_t v_sz_2632_; size_t v___x_2633_; uint64_t v___x_2634_; uint64_t v___x_2635_; uint8_t v___x_2636_; 
v_common_2631_ = 18446744073709551615ULL;
v_sz_2632_ = lean_array_size(v_cands_2586_);
v___x_2633_ = ((size_t)0ULL);
v___x_2634_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v_covered_2584_, v_cands_2586_, v_sz_2632_, v___x_2633_, v_common_2631_);
v___x_2635_ = 0ULL;
v___x_2636_ = lean_uint64_dec_eq(v___x_2634_, v___x_2635_);
if (v___x_2636_ == 0)
{
lean_dec(v_key_2585_);
return v_acc_2587_;
}
else
{
goto v___jp_2619_;
}
}
else
{
goto v___jp_2619_;
}
v___jp_2588_:
{
lean_object* v___x_2595_; lean_object* v___x_2596_; 
v___x_2595_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v___y_2591_, v___y_2592_, v___y_2593_, v___y_2594_);
lean_dec(v___y_2594_);
lean_dec(v___y_2591_);
v___x_2596_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2584_, v_cands_2586_, v___x_2595_, v___y_2590_, v___y_2589_);
lean_dec_ref(v___x_2595_);
return v___x_2596_;
}
v___jp_2597_:
{
uint8_t v___x_2604_; 
v___x_2604_ = lean_nat_dec_le(v___y_2603_, v___y_2601_);
if (v___x_2604_ == 0)
{
lean_dec(v___y_2601_);
lean_inc(v___y_2603_);
v___y_2589_ = v___y_2599_;
v___y_2590_ = v___y_2598_;
v___y_2591_ = v___y_2600_;
v___y_2592_ = v___y_2602_;
v___y_2593_ = v___y_2603_;
v___y_2594_ = v___y_2603_;
goto v___jp_2588_;
}
else
{
v___y_2589_ = v___y_2599_;
v___y_2590_ = v___y_2598_;
v___y_2591_ = v___y_2600_;
v___y_2592_ = v___y_2602_;
v___y_2593_ = v___y_2603_;
v___y_2594_ = v___y_2601_;
goto v___jp_2588_;
}
}
v___jp_2605_:
{
size_t v_sz_2608_; size_t v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; uint8_t v___x_2614_; 
v_sz_2608_ = lean_array_size(v_cands_2586_);
v___x_2609_ = ((size_t)0ULL);
lean_inc(v___y_2606_);
v___x_2610_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_2586_, v_sz_2608_, v___x_2609_, v___y_2606_);
v___x_2611_ = lean_mk_empty_array_with_capacity(v___x_2610_);
lean_dec(v___x_2610_);
v___x_2612_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_2586_, v_sz_2608_, v___x_2609_, v___x_2611_);
v___x_2613_ = lean_array_get_size(v___x_2612_);
v___x_2614_ = lean_nat_dec_eq(v___x_2613_, v___y_2606_);
if (v___x_2614_ == 0)
{
lean_object* v___x_2615_; lean_object* v___x_2616_; uint8_t v___x_2617_; 
v___x_2615_ = lean_unsigned_to_nat(1u);
v___x_2616_ = lean_nat_sub(v___x_2613_, v___x_2615_);
v___x_2617_ = lean_nat_dec_le(v___y_2606_, v___x_2616_);
if (v___x_2617_ == 0)
{
lean_inc(v___x_2616_);
v___y_2598_ = v___y_2606_;
v___y_2599_ = v_acc_2607_;
v___y_2600_ = v___x_2613_;
v___y_2601_ = v___x_2616_;
v___y_2602_ = v___x_2612_;
v___y_2603_ = v___x_2616_;
goto v___jp_2597_;
}
else
{
lean_inc(v___y_2606_);
v___y_2598_ = v___y_2606_;
v___y_2599_ = v_acc_2607_;
v___y_2600_ = v___x_2613_;
v___y_2601_ = v___x_2616_;
v___y_2602_ = v___x_2612_;
v___y_2603_ = v___y_2606_;
goto v___jp_2597_;
}
}
else
{
lean_object* v___x_2618_; 
v___x_2618_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2584_, v_cands_2586_, v___x_2612_, v___y_2606_, v_acc_2607_);
lean_dec_ref(v___x_2612_);
return v___x_2618_;
}
}
v___jp_2619_:
{
lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v_entries_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; uint8_t v___x_2625_; 
v___x_2620_ = lean_unsigned_to_nat(0u);
v___x_2621_ = lean_array_get_size(v_cands_2586_);
v_entries_2622_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_cands_2586_, v___x_2620_, v___x_2621_);
v___x_2623_ = lean_unsigned_to_nat(1u);
v___x_2624_ = lean_array_get_size(v_entries_2622_);
v___x_2625_ = lean_nat_dec_lt(v___x_2623_, v___x_2624_);
if (v___x_2625_ == 0)
{
lean_dec_ref(v_entries_2622_);
lean_dec(v_key_2585_);
v___y_2606_ = v___x_2620_;
v_acc_2607_ = v_acc_2587_;
goto v___jp_2605_;
}
else
{
lean_object* v___x_2626_; lean_object* v_acc_2627_; 
v___x_2626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2626_, 0, v_key_2585_);
lean_ctor_set(v___x_2626_, 1, v_entries_2622_);
v_acc_2627_ = lean_array_push(v_acc_2587_, v___x_2626_);
v___y_2606_ = v___x_2620_;
v_acc_2607_ = v_acc_2627_;
goto v___jp_2605_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(lean_object* v_covered_2637_, lean_object* v_groups_2638_, lean_object* v_k_2639_, lean_object* v_s_2640_){
_start:
{
lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2641_ = lean_array_get_size(v_groups_2638_);
v___x_2642_ = lean_nat_dec_lt(v_k_2639_, v___x_2641_);
if (v___x_2642_ == 0)
{
lean_dec(v_k_2639_);
return v_s_2640_;
}
else
{
lean_object* v_g_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; uint8_t v___x_2647_; 
v_g_2643_ = lean_array_fget_borrowed(v_groups_2638_, v_k_2639_);
v___x_2644_ = lean_unsigned_to_nat(1u);
v___x_2645_ = lean_nat_add(v_k_2639_, v___x_2644_);
lean_dec(v_k_2639_);
v___x_2646_ = lean_array_get_size(v_g_2643_);
v___x_2647_ = lean_nat_dec_eq(v___x_2646_, v___x_2644_);
if (v___x_2647_ == 0)
{
lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v_snd_2651_; lean_object* v_key_2652_; lean_object* v___x_2653_; 
v___x_2648_ = lean_unsigned_to_nat(0u);
v___x_2649_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_2650_ = lean_array_get_borrowed(v___x_2649_, v_g_2643_, v___x_2648_);
v_snd_2651_ = lean_ctor_get(v___x_2650_, 1);
v_key_2652_ = lean_ctor_get(v_snd_2651_, 0);
lean_inc(v_key_2652_);
v___x_2653_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2637_, v_key_2652_, v_g_2643_, v_s_2640_);
v_k_2639_ = v___x_2645_;
v_s_2640_ = v___x_2653_;
goto _start;
}
else
{
v_k_2639_ = v___x_2645_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg___boxed(lean_object* v_covered_2656_, lean_object* v_groups_2657_, lean_object* v_k_2658_, lean_object* v_s_2659_){
_start:
{
lean_object* v_res_2660_; 
v_res_2660_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(v_covered_2656_, v_groups_2657_, v_k_2658_, v_s_2659_);
lean_dec_ref(v_groups_2657_);
lean_dec_ref(v_covered_2656_);
return v_res_2660_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg___boxed(lean_object* v_covered_2661_, lean_object* v_cands_2662_, lean_object* v_sorted_2663_, lean_object* v_idx_2664_, lean_object* v_s_2665_){
_start:
{
lean_object* v_res_2666_; 
v_res_2666_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2661_, v_cands_2662_, v_sorted_2663_, v_idx_2664_, v_s_2665_);
lean_dec_ref(v_sorted_2663_);
lean_dec_ref(v_cands_2662_);
lean_dec_ref(v_covered_2661_);
return v_res_2666_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg___boxed(lean_object* v_covered_2667_, lean_object* v_key_2668_, lean_object* v_cands_2669_, lean_object* v_acc_2670_){
_start:
{
lean_object* v_res_2671_; 
v_res_2671_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2667_, v_key_2668_, v_cands_2669_, v_acc_2670_);
lean_dec_ref(v_cands_2669_);
lean_dec_ref(v_covered_2667_);
return v_res_2671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(lean_object* v_00_u03b1_2672_, lean_object* v_covered_2673_, lean_object* v_key_2674_, lean_object* v_cands_2675_, lean_object* v_acc_2676_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2673_, v_key_2674_, v_cands_2675_, v_acc_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___boxed(lean_object* v_00_u03b1_2678_, lean_object* v_covered_2679_, lean_object* v_key_2680_, lean_object* v_cands_2681_, lean_object* v_acc_2682_){
_start:
{
lean_object* v_res_2683_; 
v_res_2683_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux(v_00_u03b1_2678_, v_covered_2679_, v_key_2680_, v_cands_2681_, v_acc_2682_);
lean_dec_ref(v_cands_2681_);
lean_dec_ref(v_covered_2679_);
return v_res_2683_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(lean_object* v_00_u03b1_2684_, lean_object* v_p_2685_, lean_object* v_as_2686_, size_t v_sz_2687_, size_t v_i_2688_, lean_object* v_b_2689_){
_start:
{
lean_object* v___x_2690_; 
v___x_2690_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___redArg(v_p_2685_, v_as_2686_, v_sz_2687_, v_i_2688_, v_b_2689_);
return v___x_2690_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0___boxed(lean_object* v_00_u03b1_2691_, lean_object* v_p_2692_, lean_object* v_as_2693_, lean_object* v_sz_2694_, lean_object* v_i_2695_, lean_object* v_b_2696_){
_start:
{
size_t v_sz_boxed_2697_; size_t v_i_boxed_2698_; lean_object* v_res_2699_; 
v_sz_boxed_2697_ = lean_unbox_usize(v_sz_2694_);
lean_dec(v_sz_2694_);
v_i_boxed_2698_ = lean_unbox_usize(v_i_2695_);
lean_dec(v_i_2695_);
v_res_2699_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__0(v_00_u03b1_2691_, v_p_2692_, v_as_2693_, v_sz_boxed_2697_, v_i_boxed_2698_, v_b_2696_);
lean_dec_ref(v_as_2693_);
lean_dec_ref(v_p_2692_);
return v_res_2699_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(lean_object* v_00_u03b1_2700_, lean_object* v_as_2701_, size_t v_sz_2702_, size_t v_i_2703_, lean_object* v_b_2704_){
_start:
{
lean_object* v___x_2705_; 
v___x_2705_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_as_2701_, v_sz_2702_, v_i_2703_, v_b_2704_);
return v___x_2705_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___boxed(lean_object* v_00_u03b1_2706_, lean_object* v_as_2707_, lean_object* v_sz_2708_, lean_object* v_i_2709_, lean_object* v_b_2710_){
_start:
{
size_t v_sz_boxed_2711_; size_t v_i_boxed_2712_; lean_object* v_res_2713_; 
v_sz_boxed_2711_ = lean_unbox_usize(v_sz_2708_);
lean_dec(v_sz_2708_);
v_i_boxed_2712_ = lean_unbox_usize(v_i_2709_);
lean_dec(v_i_2709_);
v_res_2713_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1(v_00_u03b1_2706_, v_as_2707_, v_sz_boxed_2711_, v_i_boxed_2712_, v_b_2710_);
lean_dec_ref(v_as_2707_);
return v_res_2713_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(lean_object* v_00_u03b1_2714_, lean_object* v_as_2715_, size_t v_sz_2716_, size_t v_i_2717_, lean_object* v_b_2718_){
_start:
{
lean_object* v___x_2719_; 
v___x_2719_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_as_2715_, v_sz_2716_, v_i_2717_, v_b_2718_);
return v___x_2719_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___boxed(lean_object* v_00_u03b1_2720_, lean_object* v_as_2721_, lean_object* v_sz_2722_, lean_object* v_i_2723_, lean_object* v_b_2724_){
_start:
{
size_t v_sz_boxed_2725_; size_t v_i_boxed_2726_; lean_object* v_res_2727_; 
v_sz_boxed_2725_ = lean_unbox_usize(v_sz_2722_);
lean_dec(v_sz_2722_);
v_i_boxed_2726_ = lean_unbox_usize(v_i_2723_);
lean_dec(v_i_2723_);
v_res_2727_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2(v_00_u03b1_2720_, v_as_2721_, v_sz_boxed_2725_, v_i_boxed_2726_, v_b_2724_);
lean_dec_ref(v_as_2721_);
return v_res_2727_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(lean_object* v_00_u03b1_2728_, lean_object* v_n_2729_, lean_object* v_as_2730_, lean_object* v_lo_2731_, lean_object* v_hi_2732_, lean_object* v_w_2733_, lean_object* v_hlo_2734_, lean_object* v_hhi_2735_){
_start:
{
lean_object* v___x_2736_; 
v___x_2736_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v_n_2729_, v_as_2730_, v_lo_2731_, v_hi_2732_);
return v___x_2736_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___boxed(lean_object* v_00_u03b1_2737_, lean_object* v_n_2738_, lean_object* v_as_2739_, lean_object* v_lo_2740_, lean_object* v_hi_2741_, lean_object* v_w_2742_, lean_object* v_hlo_2743_, lean_object* v_hhi_2744_){
_start:
{
lean_object* v_res_2745_; 
v_res_2745_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3(v_00_u03b1_2737_, v_n_2738_, v_as_2739_, v_lo_2740_, v_hi_2741_, v_w_2742_, v_hlo_2743_, v_hhi_2744_);
lean_dec(v_hi_2741_);
lean_dec(v_n_2738_);
return v_res_2745_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(lean_object* v_00_u03b1_2746_, lean_object* v_covered_2747_, lean_object* v_cands_2748_, lean_object* v_sorted_2749_, lean_object* v_idx_2750_, lean_object* v_s_2751_){
_start:
{
lean_object* v___x_2752_; 
v___x_2752_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___redArg(v_covered_2747_, v_cands_2748_, v_sorted_2749_, v_idx_2750_, v_s_2751_);
return v___x_2752_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4___boxed(lean_object* v_00_u03b1_2753_, lean_object* v_covered_2754_, lean_object* v_cands_2755_, lean_object* v_sorted_2756_, lean_object* v_idx_2757_, lean_object* v_s_2758_){
_start:
{
lean_object* v_res_2759_; 
v_res_2759_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4(v_00_u03b1_2753_, v_covered_2754_, v_cands_2755_, v_sorted_2756_, v_idx_2757_, v_s_2758_);
lean_dec_ref(v_sorted_2756_);
lean_dec_ref(v_cands_2755_);
lean_dec_ref(v_covered_2754_);
return v_res_2759_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(lean_object* v_00_u03b1_2760_, lean_object* v_as_2761_, lean_object* v_start_2762_, lean_object* v_stop_2763_){
_start:
{
lean_object* v___x_2764_; 
v___x_2764_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_as_2761_, v_start_2762_, v_stop_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___boxed(lean_object* v_00_u03b1_2765_, lean_object* v_as_2766_, lean_object* v_start_2767_, lean_object* v_stop_2768_){
_start:
{
lean_object* v_res_2769_; 
v_res_2769_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5(v_00_u03b1_2765_, v_as_2766_, v_start_2767_, v_stop_2768_);
lean_dec(v_stop_2768_);
lean_dec(v_start_2767_);
lean_dec_ref(v_as_2766_);
return v_res_2769_;
}
}
LEAN_EXPORT uint64_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(lean_object* v_00_u03b1_2770_, lean_object* v_covered_2771_, lean_object* v_as_2772_, size_t v_sz_2773_, size_t v_i_2774_, uint64_t v_b_2775_){
_start:
{
uint64_t v___x_2776_; 
v___x_2776_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___redArg(v_covered_2771_, v_as_2772_, v_sz_2773_, v_i_2774_, v_b_2775_);
return v___x_2776_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6___boxed(lean_object* v_00_u03b1_2777_, lean_object* v_covered_2778_, lean_object* v_as_2779_, lean_object* v_sz_2780_, lean_object* v_i_2781_, lean_object* v_b_2782_){
_start:
{
size_t v_sz_boxed_2783_; size_t v_i_boxed_2784_; uint64_t v_b_boxed_2785_; uint64_t v_res_2786_; lean_object* v_r_2787_; 
v_sz_boxed_2783_ = lean_unbox_usize(v_sz_2780_);
lean_dec(v_sz_2780_);
v_i_boxed_2784_ = lean_unbox_usize(v_i_2781_);
lean_dec(v_i_2781_);
v_b_boxed_2785_ = lean_unbox_uint64(v_b_2782_);
lean_dec_ref(v_b_2782_);
v_res_2786_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__6(v_00_u03b1_2777_, v_covered_2778_, v_as_2779_, v_sz_boxed_2783_, v_i_boxed_2784_, v_b_boxed_2785_);
lean_dec_ref(v_as_2779_);
lean_dec_ref(v_covered_2778_);
v_r_2787_ = lean_box_uint64(v_res_2786_);
return v_r_2787_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3(lean_object* v_00_u03b1_2788_, lean_object* v_n_2789_, lean_object* v_lo_2790_, lean_object* v_hi_2791_, lean_object* v_hhi_2792_, lean_object* v_pivot_2793_, lean_object* v_as_2794_, lean_object* v_i_2795_, lean_object* v_k_2796_, lean_object* v_ilo_2797_, lean_object* v_ik_2798_, lean_object* v_w_2799_){
_start:
{
lean_object* v___x_2800_; 
v___x_2800_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___redArg(v_hi_2791_, v_pivot_2793_, v_as_2794_, v_i_2795_, v_k_2796_);
return v___x_2800_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3___boxed(lean_object* v_00_u03b1_2801_, lean_object* v_n_2802_, lean_object* v_lo_2803_, lean_object* v_hi_2804_, lean_object* v_hhi_2805_, lean_object* v_pivot_2806_, lean_object* v_as_2807_, lean_object* v_i_2808_, lean_object* v_k_2809_, lean_object* v_ilo_2810_, lean_object* v_ik_2811_, lean_object* v_w_2812_){
_start:
{
lean_object* v_res_2813_; 
v_res_2813_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3_spec__3(v_00_u03b1_2801_, v_n_2802_, v_lo_2803_, v_hi_2804_, v_hhi_2805_, v_pivot_2806_, v_as_2807_, v_i_2808_, v_k_2809_, v_ilo_2810_, v_ik_2811_, v_w_2812_);
lean_dec_ref(v_pivot_2806_);
lean_dec(v_hi_2804_);
lean_dec(v_lo_2803_);
lean_dec(v_n_2802_);
return v_res_2813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5(lean_object* v_00_u03b1_2814_, lean_object* v_covered_2815_, lean_object* v_cands_2816_, lean_object* v_groups_2817_, lean_object* v_hgroups_2818_, lean_object* v_k_2819_, lean_object* v_s_2820_){
_start:
{
lean_object* v___x_2821_; 
v___x_2821_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___redArg(v_covered_2815_, v_groups_2817_, v_k_2819_, v_s_2820_);
return v___x_2821_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5___boxed(lean_object* v_00_u03b1_2822_, lean_object* v_covered_2823_, lean_object* v_cands_2824_, lean_object* v_groups_2825_, lean_object* v_hgroups_2826_, lean_object* v_k_2827_, lean_object* v_s_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__4_spec__5(v_00_u03b1_2822_, v_covered_2823_, v_cands_2824_, v_groups_2825_, v_hgroups_2826_, v_k_2827_, v_s_2828_);
lean_dec_ref(v_groups_2825_);
lean_dec_ref(v_cands_2824_);
lean_dec_ref(v_covered_2823_);
return v_res_2829_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7(lean_object* v_00_u03b1_2830_, lean_object* v_as_2831_, size_t v_i_2832_, size_t v_stop_2833_, lean_object* v_b_2834_){
_start:
{
lean_object* v___x_2835_; 
v___x_2835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___redArg(v_as_2831_, v_i_2832_, v_stop_2833_, v_b_2834_);
return v___x_2835_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7___boxed(lean_object* v_00_u03b1_2836_, lean_object* v_as_2837_, lean_object* v_i_2838_, lean_object* v_stop_2839_, lean_object* v_b_2840_){
_start:
{
size_t v_i_boxed_2841_; size_t v_stop_boxed_2842_; lean_object* v_res_2843_; 
v_i_boxed_2841_ = lean_unbox_usize(v_i_2838_);
lean_dec(v_i_2838_);
v_stop_boxed_2842_ = lean_unbox_usize(v_stop_2839_);
lean_dec(v_stop_2839_);
v_res_2843_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5_spec__7(v_00_u03b1_2836_, v_as_2837_, v_i_boxed_2841_, v_stop_boxed_2842_, v_b_2840_);
lean_dec_ref(v_as_2837_);
return v_res_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter___redArg(lean_object* v_x_2844_, lean_object* v_h__1_2845_){
_start:
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_apply_2(v_h__1_2845_, v_x_2844_, lean_box(0));
return v___x_2846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Array_map__unattach_match__1_splitter(lean_object* v_00_u03b1_2847_, lean_object* v_P_2848_, lean_object* v_motive_2849_, lean_object* v_x_2850_, lean_object* v_h__1_2851_){
_start:
{
lean_object* v___x_2852_; 
v___x_2852_ = lean_apply_2(v_h__1_2851_, v_x_2850_, lean_box(0));
return v___x_2852_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter___redArg(lean_object* v_x_2853_, lean_object* v_h__1_2854_){
_start:
{
lean_object* v_fst_2855_; lean_object* v_snd_2856_; lean_object* v___x_2857_; 
v_fst_2855_ = lean_ctor_get(v_x_2853_, 0);
lean_inc(v_fst_2855_);
v_snd_2856_ = lean_ctor_get(v_x_2853_, 1);
lean_inc(v_snd_2856_);
lean_dec_ref(v_x_2853_);
v___x_2857_ = lean_apply_2(v_h__1_2854_, v_fst_2855_, v_snd_2856_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_match__1_splitter(lean_object* v_00_u03b1_2858_, lean_object* v_motive_2859_, lean_object* v_x_2860_, lean_object* v_h__1_2861_){
_start:
{
lean_object* v_fst_2862_; lean_object* v_snd_2863_; lean_object* v___x_2864_; 
v_fst_2862_ = lean_ctor_get(v_x_2860_, 0);
lean_inc(v_fst_2862_);
v_snd_2863_ = lean_ctor_get(v_x_2860_, 1);
lean_inc(v_snd_2863_);
lean_dec_ref(v_x_2860_);
v___x_2864_ = lean_apply_2(v_h__1_2861_, v_fst_2862_, v_snd_2863_);
return v___x_2864_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg(lean_object* v_trees_2867_, lean_object* v_covered_2868_){
_start:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; uint8_t v___x_2871_; 
v___x_2869_ = lean_array_get_size(v_trees_2867_);
v___x_2870_ = lean_unsigned_to_nat(2u);
v___x_2871_ = lean_nat_dec_lt(v___x_2869_, v___x_2870_);
if (v___x_2871_ == 0)
{
lean_object* v___x_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; 
v___x_2872_ = lean_box(0);
v___x_2873_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
v___x_2874_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux___redArg(v_covered_2868_, v___x_2872_, v_trees_2867_, v___x_2873_);
return v___x_2874_;
}
else
{
lean_object* v___x_2875_; 
v___x_2875_ = ((lean_object*)(l_Lean_ImportedConsts_collectDuplicates___redArg___closed__0));
return v___x_2875_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___redArg___boxed(lean_object* v_trees_2876_, lean_object* v_covered_2877_){
_start:
{
lean_object* v_res_2878_; 
v_res_2878_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_2876_, v_covered_2877_);
lean_dec_ref(v_covered_2877_);
lean_dec_ref(v_trees_2876_);
return v_res_2878_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates(lean_object* v_00_u03b1_2879_, lean_object* v_trees_2880_, lean_object* v_covered_2881_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = l_Lean_ImportedConsts_collectDuplicates___redArg(v_trees_2880_, v_covered_2881_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_collectDuplicates___boxed(lean_object* v_00_u03b1_2883_, lean_object* v_trees_2884_, lean_object* v_covered_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = l_Lean_ImportedConsts_collectDuplicates(v_00_u03b1_2883_, v_trees_2884_, v_covered_2885_);
lean_dec_ref(v_covered_2885_);
lean_dec_ref(v_trees_2884_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(lean_object* v_cs_2887_, lean_object* v_i_2888_, lean_object* v_c_2889_){
_start:
{
lean_object* v___x_2890_; lean_object* v___x_2891_; 
v___x_2890_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2890_, 0, v_i_2888_);
lean_ctor_set(v___x_2890_, 1, v_c_2889_);
v___x_2891_ = lean_array_push(v_cs_2887_, v___x_2890_);
return v___x_2891_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed(lean_object* v_resolve_2892_, lean_object* v_cands_2893_, lean_object* v_x_2894_){
_start:
{
lean_object* v_res_2895_; 
v_res_2895_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(v_resolve_2892_, v_cands_2893_, v_x_2894_);
lean_dec_ref(v_cands_2893_);
return v_res_2895_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(lean_object* v_resolve_2896_, lean_object* v_key_2897_, lean_object* v_cands_2898_){
_start:
{
lean_object* v___x_2899_; lean_object* v___x_2900_; uint8_t v___x_2901_; 
v___x_2899_ = lean_array_get_size(v_cands_2898_);
v___x_2900_ = lean_unsigned_to_nat(1u);
v___x_2901_ = lean_nat_dec_eq(v___x_2899_, v___x_2900_);
if (v___x_2901_ == 0)
{
lean_object* v___f_2902_; lean_object* v___y_2904_; lean_object* v___x_2907_; lean_object* v_entries_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; uint8_t v___x_2911_; 
lean_inc_ref(v_cands_2898_);
lean_inc_ref(v_resolve_2896_);
v___f_2902_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0___boxed), 3, 2);
lean_closure_set(v___f_2902_, 0, v_resolve_2896_);
lean_closure_set(v___f_2902_, 1, v_cands_2898_);
v___x_2907_ = lean_unsigned_to_nat(0u);
v_entries_2908_ = l_Array_filterMapM___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__5___redArg(v_cands_2898_, v___x_2907_, v___x_2899_);
lean_dec_ref(v_cands_2898_);
v___x_2909_ = lean_array_get_size(v_entries_2908_);
v___x_2910_ = lean_unsigned_to_nat(2u);
v___x_2911_ = lean_nat_dec_lt(v___x_2909_, v___x_2910_);
if (v___x_2911_ == 0)
{
lean_object* v___x_2912_; 
v___x_2912_ = lean_apply_1(v_resolve_2896_, v_entries_2908_);
v___y_2904_ = v___x_2912_;
goto v___jp_2903_;
}
else
{
uint8_t v___x_2913_; 
lean_dec_ref(v_resolve_2896_);
v___x_2913_ = lean_nat_dec_lt(v___x_2907_, v___x_2909_);
if (v___x_2913_ == 0)
{
lean_object* v___x_2914_; 
lean_dec_ref(v_entries_2908_);
v___x_2914_ = lean_box(0);
v___y_2904_ = v___x_2914_;
goto v___jp_2903_;
}
else
{
lean_object* v___x_2915_; lean_object* v___x_2916_; 
v___x_2915_ = lean_array_fget(v_entries_2908_, v___x_2907_);
lean_dec_ref(v_entries_2908_);
v___x_2916_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2915_);
v___y_2904_ = v___x_2916_;
goto v___jp_2903_;
}
}
v___jp_2903_:
{
lean_object* v___x_2905_; lean_object* v___x_2906_; 
v___x_2905_ = lean_mk_thunk(v___f_2902_);
v___x_2906_ = lean_alloc_ctor(2, 3, 0);
lean_ctor_set(v___x_2906_, 0, v_key_2897_);
lean_ctor_set(v___x_2906_, 1, v___y_2904_);
lean_ctor_set(v___x_2906_, 2, v___x_2905_);
return v___x_2906_;
}
}
else
{
lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v_fst_2920_; lean_object* v_snd_2921_; lean_object* v___x_2923_; uint8_t v_isShared_2924_; uint8_t v_isSharedCheck_2928_; 
lean_dec(v_key_2897_);
lean_dec_ref(v_resolve_2896_);
v___x_2917_ = lean_unsigned_to_nat(0u);
v___x_2918_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v___x_2919_ = lean_array_get(v___x_2918_, v_cands_2898_, v___x_2917_);
lean_dec_ref(v_cands_2898_);
v_fst_2920_ = lean_ctor_get(v___x_2919_, 0);
v_snd_2921_ = lean_ctor_get(v___x_2919_, 1);
v_isSharedCheck_2928_ = !lean_is_exclusive(v___x_2919_);
if (v_isSharedCheck_2928_ == 0)
{
v___x_2923_ = v___x_2919_;
v_isShared_2924_ = v_isSharedCheck_2928_;
goto v_resetjp_2922_;
}
else
{
lean_inc(v_snd_2921_);
lean_inc(v_fst_2920_);
lean_dec(v___x_2919_);
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
v_reuseFailAlloc_2927_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2927_, 0, v_fst_2920_);
lean_ctor_set(v_reuseFailAlloc_2927_, 1, v_snd_2921_);
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
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(lean_object* v_resolve_2929_, lean_object* v_groups_2930_, lean_object* v_k_2931_, lean_object* v_s_2932_){
_start:
{
lean_object* v___x_2933_; uint8_t v___x_2934_; 
v___x_2933_ = lean_array_get_size(v_groups_2930_);
v___x_2934_ = lean_nat_dec_lt(v_k_2931_, v___x_2933_);
if (v___x_2934_ == 0)
{
lean_dec(v_k_2931_);
lean_dec_ref(v_resolve_2929_);
return v_s_2932_;
}
else
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v_g_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___y_2941_; lean_object* v___x_2945_; uint8_t v___x_2946_; 
v___x_2935_ = lean_unsigned_to_nat(0u);
v___x_2936_ = lean_obj_once(&l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0, &l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0_once, _init_l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___redArg___closed__0);
v_g_2937_ = lean_array_fget_borrowed(v_groups_2930_, v_k_2931_);
v___x_2938_ = lean_unsigned_to_nat(1u);
v___x_2939_ = lean_nat_add(v_k_2931_, v___x_2938_);
lean_dec(v_k_2931_);
v___x_2945_ = lean_array_get_size(v_g_2937_);
v___x_2946_ = lean_nat_dec_eq(v___x_2945_, v___x_2938_);
if (v___x_2946_ == 0)
{
lean_object* v___x_2947_; lean_object* v_snd_2948_; lean_object* v_key_2949_; 
v___x_2947_ = lean_array_get_borrowed(v___x_2936_, v_g_2937_, v___x_2935_);
v_snd_2948_ = lean_ctor_get(v___x_2947_, 1);
v_key_2949_ = lean_ctor_get(v_snd_2948_, 0);
lean_inc(v_key_2949_);
v___y_2941_ = v_key_2949_;
goto v___jp_2940_;
}
else
{
lean_object* v___x_2950_; lean_object* v_fst_2951_; lean_object* v_snd_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2961_; 
v___x_2950_ = lean_array_get(v___x_2936_, v_g_2937_, v___x_2935_);
v_fst_2951_ = lean_ctor_get(v___x_2950_, 0);
v_snd_2952_ = lean_ctor_get(v___x_2950_, 1);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2950_);
if (v_isSharedCheck_2961_ == 0)
{
v___x_2954_ = v___x_2950_;
v_isShared_2955_ = v_isSharedCheck_2961_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_snd_2952_);
lean_inc(v_fst_2951_);
lean_dec(v___x_2950_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2961_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2957_; 
if (v_isShared_2955_ == 0)
{
v___x_2957_ = v___x_2954_;
goto v_reusejp_2956_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v_fst_2951_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v_snd_2952_);
v___x_2957_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2956_;
}
v_reusejp_2956_:
{
lean_object* v___x_2958_; 
v___x_2958_ = lean_array_push(v_s_2932_, v___x_2957_);
v_k_2931_ = v___x_2939_;
v_s_2932_ = v___x_2958_;
goto _start;
}
}
}
v___jp_2940_:
{
lean_object* v___x_2942_; lean_object* v___x_2943_; 
lean_inc(v_g_2937_);
lean_inc_ref(v_resolve_2929_);
v___x_2942_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_2929_, v___y_2941_, v_g_2937_);
v___x_2943_ = lean_array_push(v_s_2932_, v___x_2942_);
v_k_2931_ = v___x_2939_;
v_s_2932_ = v___x_2943_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(lean_object* v_resolve_2962_, lean_object* v_cands_2963_, lean_object* v_sorted_2964_, lean_object* v_idx_2965_, lean_object* v_s_2966_){
_start:
{
lean_object* v___x_2967_; uint8_t v___x_2968_; 
v___x_2967_ = lean_array_get_size(v_sorted_2964_);
v___x_2968_ = lean_nat_dec_lt(v_idx_2965_, v___x_2967_);
if (v___x_2968_ == 0)
{
lean_dec(v_idx_2965_);
lean_dec_ref(v_resolve_2962_);
return v_s_2966_;
}
else
{
lean_object* v___x_2969_; lean_object* v_snd_2970_; lean_object* v_fst_2971_; lean_object* v_fst_2972_; lean_object* v_snd_2973_; lean_object* v___x_2974_; lean_object* v_idx_2975_; uint8_t v___x_2976_; 
v___x_2969_ = lean_array_fget_borrowed(v_sorted_2964_, v_idx_2965_);
v_snd_2970_ = lean_ctor_get(v___x_2969_, 1);
v_fst_2971_ = lean_ctor_get(v___x_2969_, 0);
v_fst_2972_ = lean_ctor_get(v_snd_2970_, 0);
v_snd_2973_ = lean_ctor_get(v_snd_2970_, 1);
v___x_2974_ = lean_unsigned_to_nat(1u);
v_idx_2975_ = lean_nat_add(v_idx_2965_, v___x_2974_);
lean_dec(v_idx_2965_);
v___x_2976_ = lean_nat_dec_lt(v_idx_2975_, v___x_2967_);
if (v___x_2976_ == 0)
{
lean_object* v___x_2977_; 
lean_inc(v_snd_2973_);
lean_inc(v_fst_2972_);
v___x_2977_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(v_s_2966_, v_fst_2972_, v_snd_2973_);
v_idx_2965_ = v_idx_2975_;
v_s_2966_ = v___x_2977_;
goto _start;
}
else
{
lean_object* v___x_2979_; lean_object* v_fst_2980_; lean_object* v___x_2982_; uint8_t v_isShared_2983_; uint8_t v_isSharedCheck_3002_; 
v___x_2979_ = lean_array_fget(v_sorted_2964_, v_idx_2975_);
v_fst_2980_ = lean_ctor_get(v___x_2979_, 0);
v_isSharedCheck_3002_ = !lean_is_exclusive(v___x_2979_);
if (v_isSharedCheck_3002_ == 0)
{
lean_object* v_unused_3003_; 
v_unused_3003_ = lean_ctor_get(v___x_2979_, 1);
lean_dec(v_unused_3003_);
v___x_2982_ = v___x_2979_;
v_isShared_2983_ = v_isSharedCheck_3002_;
goto v_resetjp_2981_;
}
else
{
lean_inc(v_fst_2980_);
lean_dec(v___x_2979_);
v___x_2982_ = lean_box(0);
v_isShared_2983_ = v_isSharedCheck_3002_;
goto v_resetjp_2981_;
}
v_resetjp_2981_:
{
uint64_t v___x_2984_; uint64_t v___x_2985_; uint8_t v___x_2986_; 
v___x_2984_ = lean_unbox_uint64(v_fst_2980_);
lean_dec(v_fst_2980_);
v___x_2985_ = lean_unbox_uint64(v_fst_2971_);
v___x_2986_ = lean_uint64_dec_eq(v___x_2984_, v___x_2985_);
if (v___x_2986_ == 0)
{
lean_object* v___x_2987_; 
lean_del_object(v___x_2982_);
lean_inc(v_snd_2973_);
lean_inc(v_fst_2972_);
v___x_2987_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___lam__0(v_s_2966_, v_fst_2972_, v_snd_2973_);
v_idx_2965_ = v_idx_2975_;
v_s_2966_ = v___x_2987_;
goto _start;
}
else
{
lean_object* v___x_2990_; 
lean_inc(v_snd_2973_);
lean_inc(v_fst_2972_);
if (v_isShared_2983_ == 0)
{
lean_ctor_set(v___x_2982_, 1, v_snd_2973_);
lean_ctor_set(v___x_2982_, 0, v_fst_2972_);
v___x_2990_ = v___x_2982_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_3001_; 
v_reuseFailAlloc_3001_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3001_, 0, v_fst_2972_);
lean_ctor_set(v_reuseFailAlloc_3001_, 1, v_snd_2973_);
v___x_2990_ = v_reuseFailAlloc_3001_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
lean_object* v___x_2991_; lean_object* v___x_2992_; lean_object* v___x_2993_; uint64_t v___x_2994_; lean_object* v_val_2995_; lean_object* v_fst_2996_; lean_object* v_snd_2997_; lean_object* v___x_2998_; lean_object* v___x_2999_; 
v___x_2991_ = lean_mk_empty_array_with_capacity(v___x_2974_);
lean_inc_ref(v___x_2991_);
v___x_2992_ = lean_array_push(v___x_2991_, v___x_2990_);
v___x_2993_ = lean_array_push(v___x_2991_, v___x_2992_);
v___x_2994_ = lean_unbox_uint64(v_fst_2971_);
v_val_2995_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_gather___redArg(v_sorted_2964_, v___x_2994_, v_idx_2975_, v___x_2993_);
v_fst_2996_ = lean_ctor_get(v_val_2995_, 0);
lean_inc(v_fst_2996_);
v_snd_2997_ = lean_ctor_get(v_val_2995_, 1);
lean_inc(v_snd_2997_);
lean_dec_ref(v_val_2995_);
v___x_2998_ = lean_unsigned_to_nat(0u);
lean_inc_ref(v_resolve_2962_);
v___x_2999_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_2962_, v_fst_2996_, v___x_2998_, v_s_2966_);
lean_dec(v_fst_2996_);
v_idx_2965_ = v_snd_2997_;
v_s_2966_ = v___x_2999_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(lean_object* v_resolve_3004_, lean_object* v_cands_3005_){
_start:
{
lean_object* v___x_3006_; lean_object* v___x_3007_; size_t v_sz_3008_; size_t v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___y_3015_; lean_object* v___y_3016_; uint8_t v___x_3019_; 
v___x_3006_ = lean_unsigned_to_nat(0u);
v___x_3007_ = ((lean_object*)(l_Lean_instInhabitedImportedTree___redArg___closed__0));
v_sz_3008_ = lean_array_size(v_cands_3005_);
v___x_3009_ = ((size_t)0ULL);
v___x_3010_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__1___redArg(v_cands_3005_, v_sz_3008_, v___x_3009_, v___x_3006_);
v___x_3011_ = lean_mk_empty_array_with_capacity(v___x_3010_);
lean_dec(v___x_3010_);
v___x_3012_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__2___redArg(v_cands_3005_, v_sz_3008_, v___x_3009_, v___x_3011_);
v___x_3013_ = lean_array_get_size(v___x_3012_);
v___x_3019_ = lean_nat_dec_eq(v___x_3013_, v___x_3006_);
if (v___x_3019_ == 0)
{
lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___y_3023_; uint8_t v___x_3025_; 
v___x_3020_ = lean_unsigned_to_nat(1u);
v___x_3021_ = lean_nat_sub(v___x_3013_, v___x_3020_);
v___x_3025_ = lean_nat_dec_le(v___x_3006_, v___x_3021_);
if (v___x_3025_ == 0)
{
lean_inc(v___x_3021_);
v___y_3023_ = v___x_3021_;
goto v___jp_3022_;
}
else
{
v___y_3023_ = v___x_3006_;
goto v___jp_3022_;
}
v___jp_3022_:
{
uint8_t v___x_3024_; 
v___x_3024_ = lean_nat_dec_le(v___y_3023_, v___x_3021_);
if (v___x_3024_ == 0)
{
lean_dec(v___x_3021_);
lean_inc(v___y_3023_);
v___y_3015_ = v___y_3023_;
v___y_3016_ = v___y_3023_;
goto v___jp_3014_;
}
else
{
v___y_3015_ = v___y_3023_;
v___y_3016_ = v___x_3021_;
goto v___jp_3014_;
}
}
}
else
{
lean_object* v___x_3026_; 
v___x_3026_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3004_, v_cands_3005_, v___x_3012_, v___x_3006_, v___x_3007_);
lean_dec_ref(v___x_3012_);
return v___x_3026_;
}
v___jp_3014_:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3017_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_collectDupsAux_spec__3___redArg(v___x_3013_, v___x_3012_, v___y_3015_, v___y_3016_);
lean_dec(v___y_3016_);
v___x_3018_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3004_, v_cands_3005_, v___x_3017_, v___x_3006_, v___x_3007_);
lean_dec_ref(v___x_3017_);
return v___x_3018_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg___lam__0(lean_object* v_resolve_3027_, lean_object* v_cands_3028_, lean_object* v_x_3029_){
_start:
{
lean_object* v___x_3030_; 
v___x_3030_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_3027_, v_cands_3028_);
return v___x_3030_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg___boxed(lean_object* v_resolve_3031_, lean_object* v_cands_3032_){
_start:
{
lean_object* v_res_3033_; 
v_res_3033_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_3031_, v_cands_3032_);
lean_dec_ref(v_cands_3032_);
return v_res_3033_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg___boxed(lean_object* v_resolve_3034_, lean_object* v_groups_3035_, lean_object* v_k_3036_, lean_object* v_s_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_3034_, v_groups_3035_, v_k_3036_, v_s_3037_);
lean_dec_ref(v_groups_3035_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg___boxed(lean_object* v_resolve_3039_, lean_object* v_cands_3040_, lean_object* v_sorted_3041_, lean_object* v_idx_3042_, lean_object* v_s_3043_){
_start:
{
lean_object* v_res_3044_; 
v_res_3044_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3039_, v_cands_3040_, v_sorted_3041_, v_idx_3042_, v_s_3043_);
lean_dec_ref(v_sorted_3041_);
lean_dec_ref(v_cands_3040_);
return v_res_3044_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(lean_object* v_00_u03b1_3045_, lean_object* v_resolve_3046_, lean_object* v_cands_3047_){
_start:
{
lean_object* v___x_3048_; 
v___x_3048_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___redArg(v_resolve_3046_, v_cands_3047_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy___boxed(lean_object* v_00_u03b1_3049_, lean_object* v_resolve_3050_, lean_object* v_cands_3051_){
_start:
{
lean_object* v_res_3052_; 
v_res_3052_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy(v_00_u03b1_3049_, v_resolve_3050_, v_cands_3051_);
lean_dec_ref(v_cands_3051_);
return v_res_3052_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy(lean_object* v_00_u03b1_3053_, lean_object* v_resolve_3054_, lean_object* v_key_3055_, lean_object* v_cands_3056_){
_start:
{
lean_object* v___x_3057_; 
v___x_3057_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_3054_, v_key_3055_, v_cands_3056_);
return v___x_3057_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(lean_object* v_00_u03b1_3058_, lean_object* v_resolve_3059_, lean_object* v_cands_3060_, lean_object* v_sorted_3061_, lean_object* v_idx_3062_, lean_object* v_s_3063_){
_start:
{
lean_object* v___x_3064_; 
v___x_3064_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___redArg(v_resolve_3059_, v_cands_3060_, v_sorted_3061_, v_idx_3062_, v_s_3063_);
return v___x_3064_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0___boxed(lean_object* v_00_u03b1_3065_, lean_object* v_resolve_3066_, lean_object* v_cands_3067_, lean_object* v_sorted_3068_, lean_object* v_idx_3069_, lean_object* v_s_3070_){
_start:
{
lean_object* v_res_3071_; 
v_res_3071_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0(v_00_u03b1_3065_, v_resolve_3066_, v_cands_3067_, v_sorted_3068_, v_idx_3069_, v_s_3070_);
lean_dec_ref(v_sorted_3068_);
lean_dec_ref(v_cands_3067_);
return v_res_3071_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(lean_object* v_00_u03b1_3072_, lean_object* v_resolve_3073_, lean_object* v_cands_3074_, lean_object* v_groups_3075_, lean_object* v_hgroups_3076_, lean_object* v_k_3077_, lean_object* v_s_3078_){
_start:
{
lean_object* v___x_3079_; 
v___x_3079_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___redArg(v_resolve_3073_, v_groups_3075_, v_k_3077_, v_s_3078_);
return v___x_3079_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3080_, lean_object* v_resolve_3081_, lean_object* v_cands_3082_, lean_object* v_groups_3083_, lean_object* v_hgroups_3084_, lean_object* v_k_3085_, lean_object* v_s_3086_){
_start:
{
lean_object* v_res_3087_; 
v_res_3087_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_flush___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_foldChildGroups_go___at___00__private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy_expandLazy_spec__0_spec__0(v_00_u03b1_3080_, v_resolve_3081_, v_cands_3082_, v_groups_3083_, v_hgroups_3084_, v_k_3085_, v_s_3086_);
lean_dec_ref(v_groups_3083_);
lean_dec_ref(v_cands_3082_);
return v_res_3087_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(lean_object* v_trees_3088_, lean_object* v_resolve_3089_){
_start:
{
lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; 
v___x_3090_ = lean_box(0);
v___x_3091_ = lean_box(0);
v___x_3092_ = l___private_Lean_ConstTrie_0__Lean_ImportedConsts_mergeLazy___redArg(v_resolve_3089_, v___x_3091_, v_trees_3088_);
v___x_3093_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3093_, 0, v___x_3090_);
lean_ctor_set(v___x_3093_, 1, v___x_3092_);
return v___x_3093_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_mergeModuleTreesLazy(lean_object* v_00_u03b1_3094_, lean_object* v_trees_3095_, lean_object* v_resolve_3096_){
_start:
{
lean_object* v___x_3097_; 
v___x_3097_ = l_Lean_ImportedConsts_mergeModuleTreesLazy___redArg(v_trees_3095_, v_resolve_3096_);
return v___x_3097_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(lean_object* v_n_3099_, lean_object* v_f_3100_, lean_object* v_a_3101_){
_start:
{
switch(lean_obj_tag(v_a_3101_))
{
case 0:
{
lean_dec_ref(v_f_3100_);
return v_a_3101_;
}
case 1:
{
lean_object* v_key_3102_; lean_object* v_entry_x3f_3103_; lean_object* v_children_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; 
v_key_3102_ = lean_ctor_get(v_a_3101_, 0);
v_entry_x3f_3103_ = lean_ctor_get(v_a_3101_, 1);
v_children_3104_ = lean_ctor_get(v_a_3101_, 2);
v___x_3105_ = lean_obj_once(&l_Lean_instInhabitedImportedTree___closed__0, &l_Lean_instInhabitedImportedTree___closed__0_once, _init_l_Lean_instInhabitedImportedTree___closed__0);
v___x_3106_ = ((lean_object*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___closed__0));
v___x_3107_ = l___private_Lean_ConstTrie_0__Lean_findChildIdx_x3f___redArg(v___x_3105_, v_children_3104_, v___x_3106_, v_n_3099_);
if (lean_obj_tag(v___x_3107_) == 0)
{
lean_dec_ref(v_f_3100_);
return v_a_3101_;
}
else
{
lean_object* v_val_3108_; lean_object* v___x_3109_; uint8_t v___x_3110_; 
v_val_3108_ = lean_ctor_get(v___x_3107_, 0);
lean_inc(v_val_3108_);
lean_dec_ref_known(v___x_3107_, 1);
v___x_3109_ = lean_array_get_size(v_children_3104_);
v___x_3110_ = lean_nat_dec_lt(v_val_3108_, v___x_3109_);
if (v___x_3110_ == 0)
{
lean_dec(v_val_3108_);
lean_dec_ref(v_f_3100_);
return v_a_3101_;
}
else
{
lean_object* v___x_3112_; uint8_t v_isShared_3113_; uint8_t v_isSharedCheck_3122_; 
lean_inc_ref(v_children_3104_);
lean_inc(v_entry_x3f_3103_);
lean_inc(v_key_3102_);
v_isSharedCheck_3122_ = !lean_is_exclusive(v_a_3101_);
if (v_isSharedCheck_3122_ == 0)
{
lean_object* v_unused_3123_; lean_object* v_unused_3124_; lean_object* v_unused_3125_; 
v_unused_3123_ = lean_ctor_get(v_a_3101_, 2);
lean_dec(v_unused_3123_);
v_unused_3124_ = lean_ctor_get(v_a_3101_, 1);
lean_dec(v_unused_3124_);
v_unused_3125_ = lean_ctor_get(v_a_3101_, 0);
lean_dec(v_unused_3125_);
v___x_3112_ = v_a_3101_;
v_isShared_3113_ = v_isSharedCheck_3122_;
goto v_resetjp_3111_;
}
else
{
lean_dec(v_a_3101_);
v___x_3112_ = lean_box(0);
v_isShared_3113_ = v_isSharedCheck_3122_;
goto v_resetjp_3111_;
}
v_resetjp_3111_:
{
lean_object* v_v_3114_; lean_object* v___x_3115_; lean_object* v_xs_x27_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3120_; 
v_v_3114_ = lean_array_fget(v_children_3104_, v_val_3108_);
v___x_3115_ = lean_box(0);
v_xs_x27_3116_ = lean_array_fset(v_children_3104_, v_val_3108_, v___x_3115_);
v___x_3117_ = lean_apply_1(v_f_3100_, v_v_3114_);
v___x_3118_ = lean_array_fset(v_xs_x27_3116_, v_val_3108_, v___x_3117_);
lean_dec(v_val_3108_);
if (v_isShared_3113_ == 0)
{
lean_ctor_set(v___x_3112_, 2, v___x_3118_);
v___x_3120_ = v___x_3112_;
goto v_reusejp_3119_;
}
else
{
lean_object* v_reuseFailAlloc_3121_; 
v_reuseFailAlloc_3121_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3121_, 0, v_key_3102_);
lean_ctor_set(v_reuseFailAlloc_3121_, 1, v_entry_x3f_3103_);
lean_ctor_set(v_reuseFailAlloc_3121_, 2, v___x_3118_);
v___x_3120_ = v_reuseFailAlloc_3121_;
goto v_reusejp_3119_;
}
v_reusejp_3119_:
{
return v___x_3120_;
}
}
}
}
}
default: 
{
lean_object* v_key_3126_; lean_object* v_entry_x3f_3127_; lean_object* v_children_3128_; lean_object* v___x_3130_; uint8_t v_isShared_3131_; uint8_t v_isSharedCheck_3137_; 
v_key_3126_ = lean_ctor_get(v_a_3101_, 0);
v_entry_x3f_3127_ = lean_ctor_get(v_a_3101_, 1);
v_children_3128_ = lean_ctor_get(v_a_3101_, 2);
v_isSharedCheck_3137_ = !lean_is_exclusive(v_a_3101_);
if (v_isSharedCheck_3137_ == 0)
{
v___x_3130_ = v_a_3101_;
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
else
{
lean_inc(v_children_3128_);
lean_inc(v_entry_x3f_3127_);
lean_inc(v_key_3126_);
lean_dec(v_a_3101_);
v___x_3130_ = lean_box(0);
v_isShared_3131_ = v_isSharedCheck_3137_;
goto v_resetjp_3129_;
}
v_resetjp_3129_:
{
lean_object* v___x_3132_; lean_object* v___x_3134_; 
v___x_3132_ = lean_thunk_get_own(v_children_3128_);
lean_dec_ref(v_children_3128_);
if (v_isShared_3131_ == 0)
{
lean_ctor_set_tag(v___x_3130_, 1);
lean_ctor_set(v___x_3130_, 2, v___x_3132_);
v___x_3134_ = v___x_3130_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3136_; 
v_reuseFailAlloc_3136_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_3136_, 0, v_key_3126_);
lean_ctor_set(v_reuseFailAlloc_3136_, 1, v_entry_x3f_3127_);
lean_ctor_set(v_reuseFailAlloc_3136_, 2, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3136_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
v_a_3101_ = v___x_3134_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg___boxed(lean_object* v_n_3138_, lean_object* v_f_3139_, lean_object* v_a_3140_){
_start:
{
lean_object* v_res_3141_; 
v_res_3141_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(v_n_3138_, v_f_3139_, v_a_3140_);
lean_dec(v_n_3138_);
return v_res_3141_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild(lean_object* v_00_u03b1_3142_, lean_object* v_n_3143_, lean_object* v_f_3144_, lean_object* v_a_3145_){
_start:
{
lean_object* v___x_3146_; 
v___x_3146_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___redArg(v_n_3143_, v_f_3144_, v_a_3145_);
return v___x_3146_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___boxed(lean_object* v_00_u03b1_3147_, lean_object* v_n_3148_, lean_object* v_f_3149_, lean_object* v_a_3150_){
_start:
{
lean_object* v_res_3151_; 
v_res_3151_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild(v_00_u03b1_3147_, v_n_3148_, v_f_3149_, v_a_3150_);
lean_dec(v_n_3148_);
return v_res_3151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(lean_object* v_t_3152_, lean_object* v_n_3153_, lean_object* v_f_3154_){
_start:
{
if (lean_obj_tag(v_n_3153_) == 0)
{
lean_object* v___x_3155_; 
v___x_3155_ = lean_apply_1(v_f_3154_, v_t_3152_);
return v___x_3155_;
}
else
{
lean_object* v_pre_3156_; lean_object* v___x_3157_; 
v_pre_3156_ = lean_ctor_get(v_n_3153_, 0);
lean_inc(v_pre_3156_);
v___x_3157_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt_modifyChild___boxed), 4, 3);
lean_closure_set(v___x_3157_, 0, lean_box(0));
lean_closure_set(v___x_3157_, 1, v_n_3153_);
lean_closure_set(v___x_3157_, 2, v_f_3154_);
v_n_3153_ = v_pre_3156_;
v_f_3154_ = v___x_3157_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt(lean_object* v_00_u03b1_3159_, lean_object* v_t_3160_, lean_object* v_n_3161_, lean_object* v_f_3162_){
_start:
{
lean_object* v___x_3163_; 
v___x_3163_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(v_t_3160_, v_n_3161_, v_f_3162_);
return v___x_3163_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2(lean_object* v___f_3164_, lean_object* v_____x_3165_){
_start:
{
lean_object* v___x_3166_; lean_object* v___x_3167_; 
v___x_3166_ = lean_box(0);
v___x_3167_ = lean_apply_2(v___f_3164_, v___x_3166_, v_____x_3165_);
return v___x_3167_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(lean_object* v_toApplicative_3168_, lean_object* v_children_3169_, lean_object* v_inst_3170_, lean_object* v___f_3171_, lean_object* v_____r_3172_, lean_object* v_s_3173_){
_start:
{
lean_object* v_toPure_3174_; lean_object* v___x_3175_; lean_object* v___x_3176_; lean_object* v___x_3177_; uint8_t v___x_3178_; 
v_toPure_3174_ = lean_ctor_get(v_toApplicative_3168_, 1);
lean_inc(v_toPure_3174_);
lean_dec_ref(v_toApplicative_3168_);
v___x_3175_ = lean_thunk_get_own(v_children_3169_);
v___x_3176_ = lean_unsigned_to_nat(0u);
v___x_3177_ = lean_array_get_size(v___x_3175_);
v___x_3178_ = lean_nat_dec_lt(v___x_3176_, v___x_3177_);
if (v___x_3178_ == 0)
{
lean_object* v___x_3179_; 
lean_dec(v___x_3175_);
lean_dec(v___f_3171_);
lean_dec_ref(v_inst_3170_);
v___x_3179_ = lean_apply_2(v_toPure_3174_, lean_box(0), v_s_3173_);
return v___x_3179_;
}
else
{
size_t v___x_3180_; size_t v___x_3181_; lean_object* v___x_3182_; 
lean_dec(v_toPure_3174_);
v___x_3180_ = ((size_t)0ULL);
v___x_3181_ = lean_usize_of_nat(v___x_3177_);
v___x_3182_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3170_, v___f_3171_, v___x_3175_, v___x_3180_, v___x_3181_, v_s_3173_);
return v___x_3182_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed(lean_object* v_toApplicative_3183_, lean_object* v_children_3184_, lean_object* v_inst_3185_, lean_object* v___f_3186_, lean_object* v_____r_3187_, lean_object* v_s_3188_){
_start:
{
lean_object* v_res_3189_; 
v_res_3189_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(v_toApplicative_3183_, v_children_3184_, v_inst_3185_, v___f_3186_, v_____r_3187_, v_s_3188_);
lean_dec_ref(v_children_3184_);
return v_res_3189_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(lean_object* v_toApplicative_3190_, lean_object* v_children_3191_, lean_object* v_inst_3192_, lean_object* v___f_3193_, lean_object* v_____r_3194_, lean_object* v_s_3195_){
_start:
{
lean_object* v_toPure_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; uint8_t v___x_3199_; 
v_toPure_3196_ = lean_ctor_get(v_toApplicative_3190_, 1);
lean_inc(v_toPure_3196_);
lean_dec_ref(v_toApplicative_3190_);
v___x_3197_ = lean_unsigned_to_nat(0u);
v___x_3198_ = lean_array_get_size(v_children_3191_);
v___x_3199_ = lean_nat_dec_lt(v___x_3197_, v___x_3198_);
if (v___x_3199_ == 0)
{
lean_object* v___x_3200_; 
lean_dec(v___f_3193_);
lean_dec_ref(v_inst_3192_);
lean_dec_ref(v_children_3191_);
v___x_3200_ = lean_apply_2(v_toPure_3196_, lean_box(0), v_s_3195_);
return v___x_3200_;
}
else
{
size_t v___x_3201_; size_t v___x_3202_; lean_object* v___x_3203_; 
lean_dec(v_toPure_3196_);
v___x_3201_ = ((size_t)0ULL);
v___x_3202_ = lean_usize_of_nat(v___x_3198_);
v___x_3203_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_3192_, v___f_3193_, v_children_3191_, v___x_3201_, v___x_3202_, v_s_3195_);
return v___x_3203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(lean_object* v_inst_3204_, lean_object* v_t_3205_, lean_object* v_f_3206_, lean_object* v_init_3207_){
_start:
{
switch(lean_obj_tag(v_t_3205_))
{
case 0:
{
lean_object* v_tree_3208_; lean_object* v___x_3209_; 
v_tree_3208_ = lean_ctor_get(v_t_3205_, 1);
lean_inc_ref(v_tree_3208_);
lean_dec_ref_known(v_t_3205_, 2);
v___x_3209_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_3204_, v_tree_3208_, v_f_3206_, v_init_3207_);
return v___x_3209_;
}
case 1:
{
lean_object* v_toApplicative_3210_; lean_object* v_toBind_3211_; lean_object* v_key_3212_; lean_object* v_entry_x3f_3213_; lean_object* v_children_3214_; lean_object* v___f_3215_; lean_object* v___f_3216_; 
v_toApplicative_3210_ = lean_ctor_get(v_inst_3204_, 0);
lean_inc_ref_n(v_toApplicative_3210_, 2);
v_toBind_3211_ = lean_ctor_get(v_inst_3204_, 1);
v_key_3212_ = lean_ctor_get(v_t_3205_, 0);
lean_inc(v_key_3212_);
v_entry_x3f_3213_ = lean_ctor_get(v_t_3205_, 1);
lean_inc(v_entry_x3f_3213_);
v_children_3214_ = lean_ctor_get(v_t_3205_, 2);
lean_inc_ref_n(v_children_3214_, 2);
lean_dec_ref_known(v_t_3205_, 3);
lean_inc(v_f_3206_);
lean_inc_ref_n(v_inst_3204_, 2);
v___f_3215_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_3215_, 0, v_inst_3204_);
lean_closure_set(v___f_3215_, 1, v_f_3206_);
lean_inc_ref(v___f_3215_);
v___f_3216_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_3216_, 0, v_toApplicative_3210_);
lean_closure_set(v___f_3216_, 1, v_children_3214_);
lean_closure_set(v___f_3216_, 2, v_inst_3204_);
lean_closure_set(v___f_3216_, 3, v___f_3215_);
if (lean_obj_tag(v_entry_x3f_3213_) == 1)
{
lean_object* v_val_3217_; lean_object* v_fst_3218_; lean_object* v___f_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; 
lean_inc(v_toBind_3211_);
lean_dec_ref(v___f_3215_);
lean_dec_ref(v_children_3214_);
lean_dec_ref(v_toApplicative_3210_);
lean_dec_ref(v_inst_3204_);
v_val_3217_ = lean_ctor_get(v_entry_x3f_3213_, 0);
lean_inc(v_val_3217_);
lean_dec_ref_known(v_entry_x3f_3213_, 1);
v_fst_3218_ = lean_ctor_get(v_val_3217_, 0);
lean_inc(v_fst_3218_);
lean_dec(v_val_3217_);
v___f_3219_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3219_, 0, v___f_3216_);
v___x_3220_ = lean_apply_3(v_f_3206_, v_init_3207_, v_key_3212_, v_fst_3218_);
v___x_3221_ = lean_apply_4(v_toBind_3211_, lean_box(0), lean_box(0), v___x_3220_, v___f_3219_);
return v___x_3221_;
}
else
{
lean_object* v___x_3222_; lean_object* v___x_3223_; 
lean_dec_ref(v___f_3216_);
lean_dec(v_entry_x3f_3213_);
lean_dec(v_key_3212_);
lean_dec(v_f_3206_);
v___x_3222_ = lean_box(0);
v___x_3223_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(v_toApplicative_3210_, v_children_3214_, v_inst_3204_, v___f_3215_, v___x_3222_, v_init_3207_);
return v___x_3223_;
}
}
default: 
{
lean_object* v_toApplicative_3224_; lean_object* v_toBind_3225_; lean_object* v_key_3226_; lean_object* v_entry_x3f_3227_; lean_object* v_children_3228_; lean_object* v___f_3229_; lean_object* v___f_3230_; 
v_toApplicative_3224_ = lean_ctor_get(v_inst_3204_, 0);
lean_inc_ref_n(v_toApplicative_3224_, 2);
v_toBind_3225_ = lean_ctor_get(v_inst_3204_, 1);
v_key_3226_ = lean_ctor_get(v_t_3205_, 0);
lean_inc(v_key_3226_);
v_entry_x3f_3227_ = lean_ctor_get(v_t_3205_, 1);
lean_inc(v_entry_x3f_3227_);
v_children_3228_ = lean_ctor_get(v_t_3205_, 2);
lean_inc_ref_n(v_children_3228_, 2);
lean_dec_ref_known(v_t_3205_, 3);
lean_inc(v_f_3206_);
lean_inc_ref_n(v_inst_3204_, 2);
v___f_3229_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0), 4, 2);
lean_closure_set(v___f_3229_, 0, v_inst_3204_);
lean_closure_set(v___f_3229_, 1, v_f_3206_);
lean_inc_ref(v___f_3229_);
v___f_3230_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3230_, 0, v_toApplicative_3224_);
lean_closure_set(v___f_3230_, 1, v_children_3228_);
lean_closure_set(v___f_3230_, 2, v_inst_3204_);
lean_closure_set(v___f_3230_, 3, v___f_3229_);
if (lean_obj_tag(v_entry_x3f_3227_) == 1)
{
lean_object* v_val_3231_; lean_object* v_fst_3232_; lean_object* v___f_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; 
lean_inc(v_toBind_3225_);
lean_dec_ref(v___f_3229_);
lean_dec_ref(v_children_3228_);
lean_dec_ref(v_toApplicative_3224_);
lean_dec_ref(v_inst_3204_);
v_val_3231_ = lean_ctor_get(v_entry_x3f_3227_, 0);
lean_inc(v_val_3231_);
lean_dec_ref_known(v_entry_x3f_3227_, 1);
v_fst_3232_ = lean_ctor_get(v_val_3231_, 0);
lean_inc(v_fst_3232_);
lean_dec(v_val_3231_);
v___f_3233_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3233_, 0, v___f_3230_);
v___x_3234_ = lean_apply_3(v_f_3206_, v_init_3207_, v_key_3226_, v_fst_3232_);
v___x_3235_ = lean_apply_4(v_toBind_3225_, lean_box(0), lean_box(0), v___x_3234_, v___f_3233_);
return v___x_3235_;
}
else
{
lean_object* v___x_3236_; lean_object* v___x_3237_; 
lean_dec_ref(v___f_3230_);
lean_dec(v_entry_x3f_3227_);
lean_dec(v_key_3226_);
lean_dec(v_f_3206_);
v___x_3236_ = lean_box(0);
v___x_3237_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(v_toApplicative_3224_, v_children_3228_, v_inst_3204_, v___f_3229_, v___x_3236_, v_init_3207_);
lean_dec_ref(v_children_3228_);
return v___x_3237_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__0(lean_object* v_inst_3238_, lean_object* v_f_3239_, lean_object* v_s_3240_, lean_object* v_c_3241_){
_start:
{
lean_object* v___x_3242_; 
v___x_3242_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(v_inst_3238_, v_c_3241_, v_f_3239_, v_s_3240_);
return v___x_3242_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM(lean_object* v_m_3243_, lean_object* v_00_u03b1_3244_, lean_object* v_00_u03c3_3245_, lean_object* v_inst_3246_, lean_object* v_t_3247_, lean_object* v_f_3248_, lean_object* v_init_3249_){
_start:
{
lean_object* v___x_3250_; 
v___x_3250_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(v_inst_3246_, v_t_3247_, v_f_3248_, v_init_3249_);
return v___x_3250_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__0(lean_object* v_modIdx_3251_, lean_object* v_f_3252_, lean_object* v_s_3253_, lean_object* v_n_3254_, lean_object* v_v_3255_){
_start:
{
lean_object* v___x_3256_; lean_object* v___x_3257_; 
v___x_3256_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3256_, 0, v_v_3255_);
lean_ctor_set(v___x_3256_, 1, v_modIdx_3251_);
v___x_3257_ = lean_apply_3(v_f_3252_, v_s_3253_, v_n_3254_, v___x_3256_);
return v___x_3257_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(lean_object* v_inst_3258_, lean_object* v_t_3259_, lean_object* v_f_3260_, lean_object* v_init_3261_){
_start:
{
switch(lean_obj_tag(v_t_3259_))
{
case 0:
{
lean_object* v_modIdx_3262_; lean_object* v_tree_3263_; lean_object* v___f_3264_; lean_object* v___x_3265_; 
v_modIdx_3262_ = lean_ctor_get(v_t_3259_, 0);
lean_inc(v_modIdx_3262_);
v_tree_3263_ = lean_ctor_get(v_t_3259_, 1);
lean_inc_ref(v_tree_3263_);
lean_dec_ref_known(v_t_3259_, 2);
v___f_3264_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__0), 5, 2);
lean_closure_set(v___f_3264_, 0, v_modIdx_3262_);
lean_closure_set(v___f_3264_, 1, v_f_3260_);
v___x_3265_ = l_Lean_ConstTrie_foldlM___redArg(v_inst_3258_, v_tree_3263_, v___f_3264_, v_init_3261_);
return v___x_3265_;
}
case 1:
{
lean_object* v_toApplicative_3266_; lean_object* v_toBind_3267_; lean_object* v_key_3268_; lean_object* v_entry_x3f_3269_; lean_object* v_children_3270_; lean_object* v___f_3271_; lean_object* v___f_3272_; 
v_toApplicative_3266_ = lean_ctor_get(v_inst_3258_, 0);
lean_inc_ref_n(v_toApplicative_3266_, 2);
v_toBind_3267_ = lean_ctor_get(v_inst_3258_, 1);
v_key_3268_ = lean_ctor_get(v_t_3259_, 0);
lean_inc(v_key_3268_);
v_entry_x3f_3269_ = lean_ctor_get(v_t_3259_, 1);
lean_inc(v_entry_x3f_3269_);
v_children_3270_ = lean_ctor_get(v_t_3259_, 2);
lean_inc_ref_n(v_children_3270_, 2);
lean_dec_ref_known(v_t_3259_, 3);
lean_inc(v_f_3260_);
lean_inc_ref_n(v_inst_3258_, 2);
v___f_3271_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_3271_, 0, v_inst_3258_);
lean_closure_set(v___f_3271_, 1, v_f_3260_);
lean_inc_ref(v___f_3271_);
v___f_3272_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1), 6, 4);
lean_closure_set(v___f_3272_, 0, v_toApplicative_3266_);
lean_closure_set(v___f_3272_, 1, v_children_3270_);
lean_closure_set(v___f_3272_, 2, v_inst_3258_);
lean_closure_set(v___f_3272_, 3, v___f_3271_);
if (lean_obj_tag(v_entry_x3f_3269_) == 1)
{
lean_object* v_val_3273_; lean_object* v___f_3274_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
lean_inc(v_toBind_3267_);
lean_dec_ref(v___f_3271_);
lean_dec_ref(v_children_3270_);
lean_dec_ref(v_toApplicative_3266_);
lean_dec_ref(v_inst_3258_);
v_val_3273_ = lean_ctor_get(v_entry_x3f_3269_, 0);
lean_inc(v_val_3273_);
lean_dec_ref_known(v_entry_x3f_3269_, 1);
v___f_3274_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3274_, 0, v___f_3272_);
v___x_3275_ = lean_apply_3(v_f_3260_, v_init_3261_, v_key_3268_, v_val_3273_);
v___x_3276_ = lean_apply_4(v_toBind_3267_, lean_box(0), lean_box(0), v___x_3275_, v___f_3274_);
return v___x_3276_;
}
else
{
lean_object* v___x_3277_; lean_object* v___x_3278_; 
lean_dec_ref(v___f_3272_);
lean_dec(v_entry_x3f_3269_);
lean_dec(v_key_3268_);
lean_dec(v_f_3260_);
v___x_3277_ = lean_box(0);
v___x_3278_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__1(v_toApplicative_3266_, v_children_3270_, v_inst_3258_, v___f_3271_, v___x_3277_, v_init_3261_);
return v___x_3278_;
}
}
default: 
{
lean_object* v_toApplicative_3279_; lean_object* v_toBind_3280_; lean_object* v_key_3281_; lean_object* v_entry_x3f_3282_; lean_object* v_children_3283_; lean_object* v___f_3284_; lean_object* v___f_3285_; 
v_toApplicative_3279_ = lean_ctor_get(v_inst_3258_, 0);
lean_inc_ref_n(v_toApplicative_3279_, 2);
v_toBind_3280_ = lean_ctor_get(v_inst_3258_, 1);
v_key_3281_ = lean_ctor_get(v_t_3259_, 0);
lean_inc(v_key_3281_);
v_entry_x3f_3282_ = lean_ctor_get(v_t_3259_, 1);
lean_inc(v_entry_x3f_3282_);
v_children_3283_ = lean_ctor_get(v_t_3259_, 2);
lean_inc_ref_n(v_children_3283_, 2);
lean_dec_ref_known(v_t_3259_, 3);
lean_inc(v_f_3260_);
lean_inc_ref_n(v_inst_3258_, 2);
v___f_3284_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1), 4, 2);
lean_closure_set(v___f_3284_, 0, v_inst_3258_);
lean_closure_set(v___f_3284_, 1, v_f_3260_);
lean_inc_ref(v___f_3284_);
v___f_3285_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4___boxed), 6, 4);
lean_closure_set(v___f_3285_, 0, v_toApplicative_3279_);
lean_closure_set(v___f_3285_, 1, v_children_3283_);
lean_closure_set(v___f_3285_, 2, v_inst_3258_);
lean_closure_set(v___f_3285_, 3, v___f_3284_);
if (lean_obj_tag(v_entry_x3f_3282_) == 1)
{
lean_object* v_val_3286_; lean_object* v___f_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
lean_inc(v_toBind_3280_);
lean_dec_ref(v___f_3284_);
lean_dec_ref(v_children_3283_);
lean_dec_ref(v_toApplicative_3279_);
lean_dec_ref(v_inst_3258_);
v_val_3286_ = lean_ctor_get(v_entry_x3f_3282_, 0);
lean_inc(v_val_3286_);
lean_dec_ref_known(v_entry_x3f_3282_, 1);
v___f_3287_ = lean_alloc_closure((void*)(l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__2), 2, 1);
lean_closure_set(v___f_3287_, 0, v___f_3285_);
v___x_3288_ = lean_apply_3(v_f_3260_, v_init_3261_, v_key_3281_, v_val_3286_);
v___x_3289_ = lean_apply_4(v_toBind_3280_, lean_box(0), lean_box(0), v___x_3288_, v___f_3287_);
return v___x_3289_;
}
else
{
lean_object* v___x_3290_; lean_object* v___x_3291_; 
lean_dec_ref(v___f_3285_);
lean_dec(v_entry_x3f_3282_);
lean_dec(v_key_3281_);
lean_dec(v_f_3260_);
v___x_3290_ = lean_box(0);
v___x_3291_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg___lam__4(v_toApplicative_3279_, v_children_3283_, v_inst_3258_, v___f_3284_, v___x_3290_, v_init_3261_);
lean_dec_ref(v_children_3283_);
return v___x_3291_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg___lam__1(lean_object* v_inst_3292_, lean_object* v_f_3293_, lean_object* v_s_3294_, lean_object* v_c_3295_){
_start:
{
lean_object* v___x_3296_; 
v___x_3296_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(v_inst_3292_, v_c_3295_, v_f_3293_, v_s_3294_);
return v___x_3296_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM(lean_object* v_m_3297_, lean_object* v_00_u03b1_3298_, lean_object* v_00_u03c3_3299_, lean_object* v_inst_3300_, lean_object* v_t_3301_, lean_object* v_f_3302_, lean_object* v_init_3303_){
_start:
{
lean_object* v___x_3304_; 
v___x_3304_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(v_inst_3300_, v_t_3301_, v_f_3302_, v_init_3303_);
return v___x_3304_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt___redArg(lean_object* v_t_3305_, lean_object* v_n_3306_, lean_object* v_f_3307_){
_start:
{
lean_object* v_tree_3308_; lean_object* v___x_3310_; uint8_t v_isShared_3311_; uint8_t v_isSharedCheck_3317_; 
v_tree_3308_ = lean_ctor_get(v_t_3305_, 1);
v_isSharedCheck_3317_ = !lean_is_exclusive(v_t_3305_);
if (v_isSharedCheck_3317_ == 0)
{
lean_object* v_unused_3318_; 
v_unused_3318_ = lean_ctor_get(v_t_3305_, 0);
lean_dec(v_unused_3318_);
v___x_3310_ = v_t_3305_;
v_isShared_3311_ = v_isSharedCheck_3317_;
goto v_resetjp_3309_;
}
else
{
lean_inc(v_tree_3308_);
lean_dec(v_t_3305_);
v___x_3310_ = lean_box(0);
v_isShared_3311_ = v_isSharedCheck_3317_;
goto v_resetjp_3309_;
}
v_resetjp_3309_:
{
lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3315_; 
v___x_3312_ = lean_box(0);
v___x_3313_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_modifyAt___redArg(v_tree_3308_, v_n_3306_, v_f_3307_);
if (v_isShared_3311_ == 0)
{
lean_ctor_set(v___x_3310_, 1, v___x_3313_);
lean_ctor_set(v___x_3310_, 0, v___x_3312_);
v___x_3315_ = v___x_3310_;
goto v_reusejp_3314_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v___x_3312_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v___x_3313_);
v___x_3315_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3314_;
}
v_reusejp_3314_:
{
return v___x_3315_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_modifyAt(lean_object* v_00_u03b1_3319_, lean_object* v_t_3320_, lean_object* v_n_3321_, lean_object* v_f_3322_){
_start:
{
lean_object* v___x_3323_; 
v___x_3323_ = l_Lean_ImportedConsts_modifyAt___redArg(v_t_3320_, v_n_3321_, v_f_3322_);
return v___x_3323_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___redArg(lean_object* v_inst_3324_, lean_object* v_t_3325_, lean_object* v_f_3326_, lean_object* v_init_3327_){
_start:
{
lean_object* v_tree_3328_; lean_object* v___x_3329_; 
v_tree_3328_ = lean_ctor_get(v_t_3325_, 1);
lean_inc_ref(v_tree_3328_);
lean_dec_ref(v_t_3325_);
v___x_3329_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___redArg(v_inst_3324_, v_tree_3328_, v_f_3326_, v_init_3327_);
return v___x_3329_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM(lean_object* v_m_3330_, lean_object* v_00_u03b1_3331_, lean_object* v_00_u03c3_3332_, lean_object* v_inst_3333_, lean_object* v_t_3334_, lean_object* v_f_3335_, lean_object* v_init_3336_){
_start:
{
lean_object* v___x_3337_; 
v___x_3337_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3333_, v_t_3334_, v_f_3335_, v_init_3336_);
return v___x_3337_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3338_, lean_object* v_f_3339_, lean_object* v_init_3340_){
_start:
{
switch(lean_obj_tag(v_t_3338_))
{
case 0:
{
lean_object* v_key_3341_; lean_object* v_val_3342_; lean_object* v___x_3343_; 
v_key_3341_ = lean_ctor_get(v_t_3338_, 0);
lean_inc(v_key_3341_);
v_val_3342_ = lean_ctor_get(v_t_3338_, 1);
lean_inc(v_val_3342_);
lean_dec_ref_known(v_t_3338_, 2);
v___x_3343_ = lean_apply_3(v_f_3339_, v_init_3340_, v_key_3341_, v_val_3342_);
return v___x_3343_;
}
case 1:
{
lean_object* v_children_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; uint8_t v___x_3347_; 
v_children_3344_ = lean_ctor_get(v_t_3338_, 1);
lean_inc_ref(v_children_3344_);
lean_dec_ref_known(v_t_3338_, 2);
v___x_3345_ = lean_unsigned_to_nat(0u);
v___x_3346_ = lean_array_get_size(v_children_3344_);
v___x_3347_ = lean_nat_dec_lt(v___x_3345_, v___x_3346_);
if (v___x_3347_ == 0)
{
lean_dec_ref(v_children_3344_);
lean_dec(v_f_3339_);
return v_init_3340_;
}
else
{
size_t v___x_3348_; size_t v___x_3349_; lean_object* v___x_3350_; 
v___x_3348_ = ((size_t)0ULL);
v___x_3349_ = lean_usize_of_nat(v___x_3346_);
v___x_3350_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3339_, v_children_3344_, v___x_3348_, v___x_3349_, v_init_3340_);
lean_dec_ref(v_children_3344_);
return v___x_3350_;
}
}
default: 
{
lean_object* v_key_3351_; lean_object* v_val_3352_; lean_object* v_children_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; uint8_t v___x_3357_; 
v_key_3351_ = lean_ctor_get(v_t_3338_, 0);
lean_inc(v_key_3351_);
v_val_3352_ = lean_ctor_get(v_t_3338_, 1);
lean_inc(v_val_3352_);
v_children_3353_ = lean_ctor_get(v_t_3338_, 2);
lean_inc_ref(v_children_3353_);
lean_dec_ref_known(v_t_3338_, 3);
lean_inc(v_f_3339_);
v___x_3354_ = lean_apply_3(v_f_3339_, v_init_3340_, v_key_3351_, v_val_3352_);
v___x_3355_ = lean_unsigned_to_nat(0u);
v___x_3356_ = lean_array_get_size(v_children_3353_);
v___x_3357_ = lean_nat_dec_lt(v___x_3355_, v___x_3356_);
if (v___x_3357_ == 0)
{
lean_dec_ref(v_children_3353_);
lean_dec(v_f_3339_);
return v___x_3354_;
}
else
{
size_t v___x_3358_; size_t v___x_3359_; lean_object* v___x_3360_; 
v___x_3358_ = ((size_t)0ULL);
v___x_3359_ = lean_usize_of_nat(v___x_3356_);
v___x_3360_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3339_, v_children_3353_, v___x_3358_, v___x_3359_, v___x_3354_);
lean_dec_ref(v_children_3353_);
return v___x_3360_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_f_3361_, lean_object* v_as_3362_, size_t v_i_3363_, size_t v_stop_3364_, lean_object* v_b_3365_){
_start:
{
uint8_t v___x_3366_; 
v___x_3366_ = lean_usize_dec_eq(v_i_3363_, v_stop_3364_);
if (v___x_3366_ == 0)
{
lean_object* v___x_3367_; lean_object* v___x_3368_; size_t v___x_3369_; size_t v___x_3370_; 
v___x_3367_ = lean_array_uget_borrowed(v_as_3362_, v_i_3363_);
lean_inc(v_f_3361_);
lean_inc(v___x_3367_);
v___x_3368_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v___x_3367_, v_f_3361_, v_b_3365_);
v___x_3369_ = ((size_t)1ULL);
v___x_3370_ = lean_usize_add(v_i_3363_, v___x_3369_);
v_i_3363_ = v___x_3370_;
v_b_3365_ = v___x_3368_;
goto _start;
}
else
{
lean_dec(v_f_3361_);
return v_b_3365_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_f_3372_, lean_object* v_as_3373_, lean_object* v_i_3374_, lean_object* v_stop_3375_, lean_object* v_b_3376_){
_start:
{
size_t v_i_boxed_3377_; size_t v_stop_boxed_3378_; lean_object* v_res_3379_; 
v_i_boxed_3377_ = lean_unbox_usize(v_i_3374_);
lean_dec(v_i_3374_);
v_stop_boxed_3378_ = lean_unbox_usize(v_stop_3375_);
lean_dec(v_stop_3375_);
v_res_3379_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3372_, v_as_3373_, v_i_boxed_3377_, v_stop_boxed_3378_, v_b_3376_);
lean_dec_ref(v_as_3373_);
return v_res_3379_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(lean_object* v_t_3380_, lean_object* v_f_3381_, lean_object* v_init_3382_){
_start:
{
switch(lean_obj_tag(v_t_3380_))
{
case 0:
{
lean_object* v_tree_3383_; lean_object* v___x_3384_; 
v_tree_3383_ = lean_ctor_get(v_t_3380_, 1);
lean_inc_ref(v_tree_3383_);
lean_dec_ref_known(v_t_3380_, 2);
v___x_3384_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_tree_3383_, v_f_3381_, v_init_3382_);
return v___x_3384_;
}
case 1:
{
lean_object* v_key_3385_; lean_object* v_entry_x3f_3386_; lean_object* v_children_3387_; lean_object* v_s_3389_; 
v_key_3385_ = lean_ctor_get(v_t_3380_, 0);
lean_inc(v_key_3385_);
v_entry_x3f_3386_ = lean_ctor_get(v_t_3380_, 1);
lean_inc(v_entry_x3f_3386_);
v_children_3387_ = lean_ctor_get(v_t_3380_, 2);
lean_inc_ref(v_children_3387_);
lean_dec_ref_known(v_t_3380_, 3);
if (lean_obj_tag(v_entry_x3f_3386_) == 1)
{
lean_object* v_val_3396_; lean_object* v_fst_3397_; lean_object* v___x_3398_; 
v_val_3396_ = lean_ctor_get(v_entry_x3f_3386_, 0);
lean_inc(v_val_3396_);
lean_dec_ref_known(v_entry_x3f_3386_, 1);
v_fst_3397_ = lean_ctor_get(v_val_3396_, 0);
lean_inc(v_fst_3397_);
lean_dec(v_val_3396_);
lean_inc(v_f_3381_);
v___x_3398_ = lean_apply_3(v_f_3381_, v_init_3382_, v_key_3385_, v_fst_3397_);
v_s_3389_ = v___x_3398_;
goto v___jp_3388_;
}
else
{
lean_dec(v_entry_x3f_3386_);
lean_dec(v_key_3385_);
v_s_3389_ = v_init_3382_;
goto v___jp_3388_;
}
v___jp_3388_:
{
lean_object* v___x_3390_; lean_object* v___x_3391_; uint8_t v___x_3392_; 
v___x_3390_ = lean_unsigned_to_nat(0u);
v___x_3391_ = lean_array_get_size(v_children_3387_);
v___x_3392_ = lean_nat_dec_lt(v___x_3390_, v___x_3391_);
if (v___x_3392_ == 0)
{
lean_dec_ref(v_children_3387_);
lean_dec(v_f_3381_);
return v_s_3389_;
}
else
{
size_t v___x_3393_; size_t v___x_3394_; lean_object* v___x_3395_; 
v___x_3393_ = ((size_t)0ULL);
v___x_3394_ = lean_usize_of_nat(v___x_3391_);
v___x_3395_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3381_, v_children_3387_, v___x_3393_, v___x_3394_, v_s_3389_);
lean_dec_ref(v_children_3387_);
return v___x_3395_;
}
}
}
default: 
{
lean_object* v_key_3399_; lean_object* v_entry_x3f_3400_; lean_object* v_children_3401_; lean_object* v_s_3403_; 
v_key_3399_ = lean_ctor_get(v_t_3380_, 0);
lean_inc(v_key_3399_);
v_entry_x3f_3400_ = lean_ctor_get(v_t_3380_, 1);
lean_inc(v_entry_x3f_3400_);
v_children_3401_ = lean_ctor_get(v_t_3380_, 2);
lean_inc_ref(v_children_3401_);
lean_dec_ref_known(v_t_3380_, 3);
if (lean_obj_tag(v_entry_x3f_3400_) == 1)
{
lean_object* v_val_3411_; lean_object* v_fst_3412_; lean_object* v___x_3413_; 
v_val_3411_ = lean_ctor_get(v_entry_x3f_3400_, 0);
lean_inc(v_val_3411_);
lean_dec_ref_known(v_entry_x3f_3400_, 1);
v_fst_3412_ = lean_ctor_get(v_val_3411_, 0);
lean_inc(v_fst_3412_);
lean_dec(v_val_3411_);
lean_inc(v_f_3381_);
v___x_3413_ = lean_apply_3(v_f_3381_, v_init_3382_, v_key_3399_, v_fst_3412_);
v_s_3403_ = v___x_3413_;
goto v___jp_3402_;
}
else
{
lean_dec(v_entry_x3f_3400_);
lean_dec(v_key_3399_);
v_s_3403_ = v_init_3382_;
goto v___jp_3402_;
}
v___jp_3402_:
{
lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v___x_3406_; uint8_t v___x_3407_; 
v___x_3404_ = lean_thunk_get_own(v_children_3401_);
lean_dec_ref(v_children_3401_);
v___x_3405_ = lean_unsigned_to_nat(0u);
v___x_3406_ = lean_array_get_size(v___x_3404_);
v___x_3407_ = lean_nat_dec_lt(v___x_3405_, v___x_3406_);
if (v___x_3407_ == 0)
{
lean_dec(v___x_3404_);
lean_dec(v_f_3381_);
return v_s_3403_;
}
else
{
size_t v___x_3408_; size_t v___x_3409_; lean_object* v___x_3410_; 
v___x_3408_ = ((size_t)0ULL);
v___x_3409_ = lean_usize_of_nat(v___x_3406_);
v___x_3410_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3381_, v___x_3404_, v___x_3408_, v___x_3409_, v_s_3403_);
lean_dec(v___x_3404_);
return v___x_3410_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(lean_object* v_f_3414_, lean_object* v_as_3415_, size_t v_i_3416_, size_t v_stop_3417_, lean_object* v_b_3418_){
_start:
{
uint8_t v___x_3419_; 
v___x_3419_ = lean_usize_dec_eq(v_i_3416_, v_stop_3417_);
if (v___x_3419_ == 0)
{
lean_object* v___x_3420_; lean_object* v___x_3421_; size_t v___x_3422_; size_t v___x_3423_; 
v___x_3420_ = lean_array_uget_borrowed(v_as_3415_, v_i_3416_);
lean_inc(v_f_3414_);
lean_inc(v___x_3420_);
v___x_3421_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v___x_3420_, v_f_3414_, v_b_3418_);
v___x_3422_ = ((size_t)1ULL);
v___x_3423_ = lean_usize_add(v_i_3416_, v___x_3422_);
v_i_3416_ = v___x_3423_;
v_b_3418_ = v___x_3421_;
goto _start;
}
else
{
lean_dec(v_f_3414_);
return v_b_3418_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_f_3425_, lean_object* v_as_3426_, lean_object* v_i_3427_, lean_object* v_stop_3428_, lean_object* v_b_3429_){
_start:
{
size_t v_i_boxed_3430_; size_t v_stop_boxed_3431_; lean_object* v_res_3432_; 
v_i_boxed_3430_ = lean_unbox_usize(v_i_3427_);
lean_dec(v_i_3427_);
v_stop_boxed_3431_ = lean_unbox_usize(v_stop_3428_);
lean_dec(v_stop_3428_);
v_res_3432_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3425_, v_as_3426_, v_i_boxed_3430_, v_stop_boxed_3431_, v_b_3429_);
lean_dec_ref(v_as_3426_);
return v_res_3432_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(lean_object* v_t_3433_, lean_object* v_f_3434_, lean_object* v_init_3435_){
_start:
{
lean_object* v_tree_3436_; lean_object* v___x_3437_; 
v_tree_3436_ = lean_ctor_get(v_t_3433_, 1);
lean_inc_ref(v_tree_3436_);
lean_dec_ref(v_t_3433_);
v___x_3437_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_tree_3436_, v_f_3434_, v_init_3435_);
return v___x_3437_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl___redArg(lean_object* v_t_3438_, lean_object* v_f_3439_, lean_object* v_init_3440_){
_start:
{
lean_object* v___x_3441_; 
v___x_3441_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3438_, v_f_3439_, v_init_3440_);
return v___x_3441_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldl(lean_object* v_00_u03b1_3442_, lean_object* v_00_u03c3_3443_, lean_object* v_t_3444_, lean_object* v_f_3445_, lean_object* v_init_3446_){
_start:
{
lean_object* v___x_3447_; 
v___x_3447_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3444_, v_f_3445_, v_init_3446_);
return v___x_3447_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0(lean_object* v_00_u03b1_3448_, lean_object* v_00_u03c3_3449_, lean_object* v_t_3450_, lean_object* v_f_3451_, lean_object* v_init_3452_){
_start:
{
lean_object* v___x_3453_; 
v___x_3453_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3450_, v_f_3451_, v_init_3452_);
return v___x_3453_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0(lean_object* v_00_u03b1_3454_, lean_object* v_00_u03c3_3455_, lean_object* v_t_3456_, lean_object* v_f_3457_, lean_object* v_init_3458_){
_start:
{
lean_object* v___x_3459_; 
v___x_3459_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___redArg(v_t_3456_, v_f_3457_, v_init_3458_);
return v___x_3459_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3460_, lean_object* v_00_u03c3_3461_, lean_object* v_t_3462_, lean_object* v_f_3463_, lean_object* v_init_3464_){
_start:
{
lean_object* v___x_3465_; 
v___x_3465_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___redArg(v_t_3462_, v_f_3463_, v_init_3464_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3466_, lean_object* v_00_u03c3_3467_, lean_object* v_f_3468_, lean_object* v_as_3469_, size_t v_i_3470_, size_t v_stop_3471_, lean_object* v_b_3472_){
_start:
{
lean_object* v___x_3473_; 
v___x_3473_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___redArg(v_f_3468_, v_as_3469_, v_i_3470_, v_stop_3471_, v_b_3472_);
return v___x_3473_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3474_, lean_object* v_00_u03c3_3475_, lean_object* v_f_3476_, lean_object* v_as_3477_, lean_object* v_i_3478_, lean_object* v_stop_3479_, lean_object* v_b_3480_){
_start:
{
size_t v_i_boxed_3481_; size_t v_stop_boxed_3482_; lean_object* v_res_3483_; 
v_i_boxed_3481_ = lean_unbox_usize(v_i_3478_);
lean_dec(v_i_3478_);
v_stop_boxed_3482_ = lean_unbox_usize(v_stop_3479_);
lean_dec(v_stop_3479_);
v_res_3483_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2(v_00_u03b1_3474_, v_00_u03c3_3475_, v_f_3476_, v_as_3477_, v_i_boxed_3481_, v_stop_boxed_3482_, v_b_3480_);
lean_dec_ref(v_as_3477_);
return v_res_3483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3484_, lean_object* v_00_u03c3_3485_, lean_object* v_f_3486_, lean_object* v_as_3487_, size_t v_i_3488_, size_t v_stop_3489_, lean_object* v_b_3490_){
_start:
{
lean_object* v___x_3491_; 
v___x_3491_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___redArg(v_f_3486_, v_as_3487_, v_i_3488_, v_stop_3489_, v_b_3490_);
return v___x_3491_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3492_, lean_object* v_00_u03c3_3493_, lean_object* v_f_3494_, lean_object* v_as_3495_, lean_object* v_i_3496_, lean_object* v_stop_3497_, lean_object* v_b_3498_){
_start:
{
size_t v_i_boxed_3499_; size_t v_stop_boxed_3500_; lean_object* v_res_3501_; 
v_i_boxed_3499_ = lean_unbox_usize(v_i_3496_);
lean_dec(v_i_3496_);
v_stop_boxed_3500_ = lean_unbox_usize(v_stop_3497_);
lean_dec(v_stop_3497_);
v_res_3501_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3492_, v_00_u03c3_3493_, v_f_3494_, v_as_3495_, v_i_boxed_3499_, v_stop_boxed_3500_, v_b_3498_);
lean_dec_ref(v_as_3495_);
return v_res_3501_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM___redArg(lean_object* v_inst_3502_, lean_object* v_t_3503_, lean_object* v_f_3504_, lean_object* v_init_3505_){
_start:
{
lean_object* v_tree_3506_; lean_object* v___x_3507_; 
v_tree_3506_ = lean_ctor_get(v_t_3503_, 1);
lean_inc_ref(v_tree_3506_);
lean_dec_ref(v_t_3503_);
v___x_3507_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlEntriesM___redArg(v_inst_3502_, v_tree_3506_, v_f_3504_, v_init_3505_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlEntriesM(lean_object* v_m_3508_, lean_object* v_00_u03b1_3509_, lean_object* v_00_u03c3_3510_, lean_object* v_inst_3511_, lean_object* v_t_3512_, lean_object* v_f_3513_, lean_object* v_init_3514_){
_start:
{
lean_object* v___x_3515_; 
v___x_3515_ = l_Lean_ImportedConsts_foldlEntriesM___redArg(v_inst_3511_, v_t_3512_, v_f_3513_, v_init_3514_);
return v___x_3515_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg___lam__0(lean_object* v_f_3516_, lean_object* v_x_3517_, lean_object* v_n_3518_, lean_object* v_v_3519_){
_start:
{
lean_object* v___x_3520_; 
v___x_3520_ = lean_apply_2(v_f_3516_, v_n_3518_, v_v_3519_);
return v___x_3520_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM___redArg(lean_object* v_inst_3521_, lean_object* v_t_3522_, lean_object* v_f_3523_){
_start:
{
lean_object* v___f_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; 
v___f_3524_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_forM___redArg___lam__0), 4, 1);
lean_closure_set(v___f_3524_, 0, v_f_3523_);
v___x_3525_ = lean_box(0);
v___x_3526_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3521_, v_t_3522_, v___f_3524_, v___x_3525_);
return v___x_3526_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_forM(lean_object* v_m_3527_, lean_object* v_00_u03b1_3528_, lean_object* v_inst_3529_, lean_object* v_t_3530_, lean_object* v_f_3531_){
_start:
{
lean_object* v___x_3532_; 
v___x_3532_ = l_Lean_ImportedConsts_forM___redArg(v_inst_3529_, v_t_3530_, v_f_3531_);
return v___x_3532_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(lean_object* v_n_3533_, lean_object* v_x_3534_, lean_object* v_x_3535_){
_start:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3536_ = lean_unsigned_to_nat(1u);
v___x_3537_ = lean_nat_add(v_n_3533_, v___x_3536_);
return v___x_3537_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0___boxed(lean_object* v_n_3538_, lean_object* v_x_3539_, lean_object* v_x_3540_){
_start:
{
lean_object* v_res_3541_; 
v_res_3541_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_n_3538_, v_x_3539_, v_x_3540_);
lean_dec(v_x_3540_);
lean_dec(v_x_3539_);
lean_dec(v_n_3538_);
return v_res_3541_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v_n_3542_, lean_object* v_x_3543_, lean_object* v_x_3544_){
_start:
{
lean_object* v___x_3545_; lean_object* v___x_3546_; 
v___x_3545_ = lean_unsigned_to_nat(1u);
v___x_3546_ = lean_nat_add(v_n_3542_, v___x_3545_);
return v___x_3546_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0___boxed(lean_object* v_n_3547_, lean_object* v_x_3548_, lean_object* v_x_3549_){
_start:
{
lean_object* v_res_3550_; 
v_res_3550_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(v_n_3547_, v_x_3548_, v_x_3549_);
lean_dec(v_x_3549_);
lean_dec(v_x_3548_);
lean_dec(v_n_3547_);
return v_res_3550_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3551_, lean_object* v_init_3552_){
_start:
{
switch(lean_obj_tag(v_t_3551_))
{
case 0:
{
lean_object* v_key_3553_; lean_object* v_val_3554_; lean_object* v___x_3555_; 
v_key_3553_ = lean_ctor_get(v_t_3551_, 0);
v_val_3554_ = lean_ctor_get(v_t_3551_, 1);
v___x_3555_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3552_, v_key_3553_, v_val_3554_);
lean_dec(v_init_3552_);
return v___x_3555_;
}
case 1:
{
lean_object* v_children_3556_; lean_object* v___x_3557_; lean_object* v___x_3558_; uint8_t v___x_3559_; 
v_children_3556_ = lean_ctor_get(v_t_3551_, 1);
v___x_3557_ = lean_unsigned_to_nat(0u);
v___x_3558_ = lean_array_get_size(v_children_3556_);
v___x_3559_ = lean_nat_dec_lt(v___x_3557_, v___x_3558_);
if (v___x_3559_ == 0)
{
return v_init_3552_;
}
else
{
size_t v___x_3560_; size_t v___x_3561_; lean_object* v___x_3562_; 
v___x_3560_ = ((size_t)0ULL);
v___x_3561_ = lean_usize_of_nat(v___x_3558_);
v___x_3562_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3556_, v___x_3560_, v___x_3561_, v_init_3552_);
return v___x_3562_;
}
}
default: 
{
lean_object* v_key_3563_; lean_object* v_val_3564_; lean_object* v_children_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; uint8_t v___x_3569_; 
v_key_3563_ = lean_ctor_get(v_t_3551_, 0);
v_val_3564_ = lean_ctor_get(v_t_3551_, 1);
v_children_3565_ = lean_ctor_get(v_t_3551_, 2);
v___x_3566_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3552_, v_key_3563_, v_val_3564_);
lean_dec(v_init_3552_);
v___x_3567_ = lean_unsigned_to_nat(0u);
v___x_3568_ = lean_array_get_size(v_children_3565_);
v___x_3569_ = lean_nat_dec_lt(v___x_3567_, v___x_3568_);
if (v___x_3569_ == 0)
{
return v___x_3566_;
}
else
{
size_t v___x_3570_; size_t v___x_3571_; lean_object* v___x_3572_; 
v___x_3570_ = ((size_t)0ULL);
v___x_3571_ = lean_usize_of_nat(v___x_3568_);
v___x_3572_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3565_, v___x_3570_, v___x_3571_, v___x_3566_);
return v___x_3572_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3573_, size_t v_i_3574_, size_t v_stop_3575_, lean_object* v_b_3576_){
_start:
{
uint8_t v___x_3577_; 
v___x_3577_ = lean_usize_dec_eq(v_i_3574_, v_stop_3575_);
if (v___x_3577_ == 0)
{
lean_object* v___x_3578_; lean_object* v___x_3579_; size_t v___x_3580_; size_t v___x_3581_; 
v___x_3578_ = lean_array_uget_borrowed(v_as_3573_, v_i_3574_);
v___x_3579_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v___x_3578_, v_b_3576_);
v___x_3580_ = ((size_t)1ULL);
v___x_3581_ = lean_usize_add(v_i_3574_, v___x_3580_);
v_i_3574_ = v___x_3581_;
v_b_3576_ = v___x_3579_;
goto _start;
}
else
{
return v_b_3576_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3583_, lean_object* v_i_3584_, lean_object* v_stop_3585_, lean_object* v_b_3586_){
_start:
{
size_t v_i_boxed_3587_; size_t v_stop_boxed_3588_; lean_object* v_res_3589_; 
v_i_boxed_3587_ = lean_unbox_usize(v_i_3584_);
lean_dec(v_i_3584_);
v_stop_boxed_3588_ = lean_unbox_usize(v_stop_3585_);
lean_dec(v_stop_3585_);
v_res_3589_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3583_, v_i_boxed_3587_, v_stop_boxed_3588_, v_b_3586_);
lean_dec_ref(v_as_3583_);
return v_res_3589_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_t_3590_, lean_object* v_init_3591_){
_start:
{
lean_object* v_res_3592_; 
v_res_3592_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_t_3590_, v_init_3591_);
lean_dec_ref(v_t_3590_);
return v_res_3592_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(lean_object* v_t_3593_, lean_object* v_init_3594_){
_start:
{
switch(lean_obj_tag(v_t_3593_))
{
case 0:
{
lean_object* v_tree_3595_; lean_object* v___x_3596_; 
v_tree_3595_ = lean_ctor_get(v_t_3593_, 1);
v___x_3596_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_tree_3595_, v_init_3594_);
return v___x_3596_;
}
case 1:
{
lean_object* v_key_3597_; lean_object* v_entry_x3f_3598_; lean_object* v_children_3599_; lean_object* v_s_3601_; 
v_key_3597_ = lean_ctor_get(v_t_3593_, 0);
v_entry_x3f_3598_ = lean_ctor_get(v_t_3593_, 1);
v_children_3599_ = lean_ctor_get(v_t_3593_, 2);
if (lean_obj_tag(v_entry_x3f_3598_) == 1)
{
lean_object* v_val_3608_; lean_object* v_fst_3609_; lean_object* v___x_3610_; 
v_val_3608_ = lean_ctor_get(v_entry_x3f_3598_, 0);
v_fst_3609_ = lean_ctor_get(v_val_3608_, 0);
v___x_3610_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_init_3594_, v_key_3597_, v_fst_3609_);
lean_dec(v_init_3594_);
v_s_3601_ = v___x_3610_;
goto v___jp_3600_;
}
else
{
v_s_3601_ = v_init_3594_;
goto v___jp_3600_;
}
v___jp_3600_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; uint8_t v___x_3604_; 
v___x_3602_ = lean_unsigned_to_nat(0u);
v___x_3603_ = lean_array_get_size(v_children_3599_);
v___x_3604_ = lean_nat_dec_lt(v___x_3602_, v___x_3603_);
if (v___x_3604_ == 0)
{
return v_s_3601_;
}
else
{
size_t v___x_3605_; size_t v___x_3606_; lean_object* v___x_3607_; 
v___x_3605_ = ((size_t)0ULL);
v___x_3606_ = lean_usize_of_nat(v___x_3603_);
v___x_3607_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_children_3599_, v___x_3605_, v___x_3606_, v_s_3601_);
return v___x_3607_;
}
}
}
default: 
{
lean_object* v_key_3611_; lean_object* v_entry_x3f_3612_; lean_object* v_children_3613_; lean_object* v_s_3615_; 
v_key_3611_ = lean_ctor_get(v_t_3593_, 0);
v_entry_x3f_3612_ = lean_ctor_get(v_t_3593_, 1);
v_children_3613_ = lean_ctor_get(v_t_3593_, 2);
if (lean_obj_tag(v_entry_x3f_3612_) == 1)
{
lean_object* v_val_3623_; lean_object* v_fst_3624_; lean_object* v___x_3625_; 
v_val_3623_ = lean_ctor_get(v_entry_x3f_3612_, 0);
v_fst_3624_ = lean_ctor_get(v_val_3623_, 0);
v___x_3625_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___lam__0(v_init_3594_, v_key_3611_, v_fst_3624_);
lean_dec(v_init_3594_);
v_s_3615_ = v___x_3625_;
goto v___jp_3614_;
}
else
{
v_s_3615_ = v_init_3594_;
goto v___jp_3614_;
}
v___jp_3614_:
{
lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; uint8_t v___x_3619_; 
v___x_3616_ = lean_thunk_get_own(v_children_3613_);
v___x_3617_ = lean_unsigned_to_nat(0u);
v___x_3618_ = lean_array_get_size(v___x_3616_);
v___x_3619_ = lean_nat_dec_lt(v___x_3617_, v___x_3618_);
if (v___x_3619_ == 0)
{
lean_dec(v___x_3616_);
return v_s_3615_;
}
else
{
size_t v___x_3620_; size_t v___x_3621_; lean_object* v___x_3622_; 
v___x_3620_ = ((size_t)0ULL);
v___x_3621_ = lean_usize_of_nat(v___x_3618_);
v___x_3622_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v___x_3616_, v___x_3620_, v___x_3621_, v_s_3615_);
lean_dec(v___x_3616_);
return v___x_3622_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(lean_object* v_as_3626_, size_t v_i_3627_, size_t v_stop_3628_, lean_object* v_b_3629_){
_start:
{
uint8_t v___x_3630_; 
v___x_3630_ = lean_usize_dec_eq(v_i_3627_, v_stop_3628_);
if (v___x_3630_ == 0)
{
lean_object* v___x_3631_; lean_object* v___x_3632_; size_t v___x_3633_; size_t v___x_3634_; 
v___x_3631_ = lean_array_uget_borrowed(v_as_3626_, v_i_3627_);
v___x_3632_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v___x_3631_, v_b_3629_);
v___x_3633_ = ((size_t)1ULL);
v___x_3634_ = lean_usize_add(v_i_3627_, v___x_3633_);
v_i_3627_ = v___x_3634_;
v_b_3629_ = v___x_3632_;
goto _start;
}
else
{
return v_b_3629_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_3636_, lean_object* v_i_3637_, lean_object* v_stop_3638_, lean_object* v_b_3639_){
_start:
{
size_t v_i_boxed_3640_; size_t v_stop_boxed_3641_; lean_object* v_res_3642_; 
v_i_boxed_3640_ = lean_unbox_usize(v_i_3637_);
lean_dec(v_i_3637_);
v_stop_boxed_3641_ = lean_unbox_usize(v_stop_3638_);
lean_dec(v_stop_3638_);
v_res_3642_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_as_3636_, v_i_boxed_3640_, v_stop_boxed_3641_, v_b_3639_);
lean_dec_ref(v_as_3636_);
return v_res_3642_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg___boxed(lean_object* v_t_3643_, lean_object* v_init_3644_){
_start:
{
lean_object* v_res_3645_; 
v_res_3645_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_3643_, v_init_3644_);
lean_dec_ref(v_t_3643_);
return v_res_3645_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(lean_object* v_t_3646_, lean_object* v_init_3647_){
_start:
{
lean_object* v_tree_3648_; lean_object* v___x_3649_; 
v_tree_3648_ = lean_ctor_get(v_t_3646_, 1);
v___x_3649_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_tree_3648_, v_init_3647_);
return v___x_3649_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg___boxed(lean_object* v_t_3650_, lean_object* v_init_3651_){
_start:
{
lean_object* v_res_3652_; 
v_res_3652_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_3650_, v_init_3651_);
lean_dec_ref(v_t_3650_);
return v_res_3652_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg(lean_object* v_t_3653_){
_start:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3654_ = lean_unsigned_to_nat(0u);
v___x_3655_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_3653_, v___x_3654_);
return v___x_3655_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___redArg___boxed(lean_object* v_t_3656_){
_start:
{
lean_object* v_res_3657_; 
v_res_3657_ = l_Lean_ImportedConsts_size___redArg(v_t_3656_);
lean_dec_ref(v_t_3656_);
return v_res_3657_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size(lean_object* v_00_u03b1_3658_, lean_object* v_t_3659_){
_start:
{
lean_object* v___x_3660_; 
v___x_3660_ = l_Lean_ImportedConsts_size___redArg(v_t_3659_);
return v___x_3660_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_size___boxed(lean_object* v_00_u03b1_3661_, lean_object* v_t_3662_){
_start:
{
lean_object* v_res_3663_; 
v_res_3663_ = l_Lean_ImportedConsts_size(v_00_u03b1_3661_, v_t_3662_);
lean_dec_ref(v_t_3662_);
return v_res_3663_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(lean_object* v_00_u03b1_3664_, lean_object* v_t_3665_, lean_object* v_init_3666_){
_start:
{
lean_object* v___x_3667_; 
v___x_3667_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___redArg(v_t_3665_, v_init_3666_);
return v___x_3667_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0___boxed(lean_object* v_00_u03b1_3668_, lean_object* v_t_3669_, lean_object* v_init_3670_){
_start:
{
lean_object* v_res_3671_; 
v_res_3671_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0(v_00_u03b1_3668_, v_t_3669_, v_init_3670_);
lean_dec_ref(v_t_3669_);
return v_res_3671_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(lean_object* v_00_u03b1_3672_, lean_object* v_t_3673_, lean_object* v_init_3674_){
_start:
{
lean_object* v___x_3675_; 
v___x_3675_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___redArg(v_t_3673_, v_init_3674_);
return v___x_3675_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0___boxed(lean_object* v_00_u03b1_3676_, lean_object* v_t_3677_, lean_object* v_init_3678_){
_start:
{
lean_object* v_res_3679_; 
v_res_3679_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0(v_00_u03b1_3676_, v_t_3677_, v_init_3678_);
lean_dec_ref(v_t_3677_);
return v_res_3679_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3680_, lean_object* v_t_3681_, lean_object* v_init_3682_){
_start:
{
lean_object* v___x_3683_; 
v___x_3683_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___redArg(v_t_3681_, v_init_3682_);
return v___x_3683_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_3684_, lean_object* v_t_3685_, lean_object* v_init_3686_){
_start:
{
lean_object* v_res_3687_; 
v_res_3687_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1(v_00_u03b1_3684_, v_t_3685_, v_init_3686_);
lean_dec_ref(v_t_3685_);
return v_res_3687_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3688_, lean_object* v_as_3689_, size_t v_i_3690_, size_t v_stop_3691_, lean_object* v_b_3692_){
_start:
{
lean_object* v___x_3693_; 
v___x_3693_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___redArg(v_as_3689_, v_i_3690_, v_stop_3691_, v_b_3692_);
return v___x_3693_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3694_, lean_object* v_as_3695_, lean_object* v_i_3696_, lean_object* v_stop_3697_, lean_object* v_b_3698_){
_start:
{
size_t v_i_boxed_3699_; size_t v_stop_boxed_3700_; lean_object* v_res_3701_; 
v_i_boxed_3699_ = lean_unbox_usize(v_i_3696_);
lean_dec(v_i_3696_);
v_stop_boxed_3700_ = lean_unbox_usize(v_stop_3697_);
lean_dec(v_stop_3697_);
v_res_3701_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__2(v_00_u03b1_3694_, v_as_3695_, v_i_boxed_3699_, v_stop_boxed_3700_, v_b_3698_);
lean_dec_ref(v_as_3695_);
return v_res_3701_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3702_, lean_object* v_as_3703_, size_t v_i_3704_, size_t v_stop_3705_, lean_object* v_b_3706_){
_start:
{
lean_object* v___x_3707_; 
v___x_3707_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3703_, v_i_3704_, v_stop_3705_, v_b_3706_);
return v___x_3707_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3708_, lean_object* v_as_3709_, lean_object* v_i_3710_, lean_object* v_stop_3711_, lean_object* v_b_3712_){
_start:
{
size_t v_i_boxed_3713_; size_t v_stop_boxed_3714_; lean_object* v_res_3715_; 
v_i_boxed_3713_ = lean_unbox_usize(v_i_3710_);
lean_dec(v_i_3710_);
v_stop_boxed_3714_ = lean_unbox_usize(v_stop_3711_);
lean_dec(v_stop_3711_);
v_res_3715_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_size_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3708_, v_as_3709_, v_i_boxed_3713_, v_stop_boxed_3714_, v_b_3712_);
lean_dec_ref(v_as_3709_);
return v_res_3715_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold___redArg(lean_object* v_t_3716_, lean_object* v_f_3717_, lean_object* v_init_3718_){
_start:
{
lean_object* v___x_3719_; 
v___x_3719_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3716_, v_f_3717_, v_init_3718_);
return v___x_3719_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_fold(lean_object* v_00_u03b1_3720_, lean_object* v_00_u03c3_3721_, lean_object* v_t_3722_, lean_object* v_f_3723_, lean_object* v_init_3724_){
_start:
{
lean_object* v___x_3725_; 
v___x_3725_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___redArg(v_t_3722_, v_f_3723_, v_init_3724_);
return v___x_3725_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM___redArg(lean_object* v_inst_3726_, lean_object* v_t_3727_, lean_object* v_f_3728_, lean_object* v_init_3729_){
_start:
{
lean_object* v___x_3730_; 
v___x_3730_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3726_, v_t_3727_, v_f_3728_, v_init_3729_);
return v___x_3730_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldM(lean_object* v_m_3731_, lean_object* v_00_u03b1_3732_, lean_object* v_00_u03c3_3733_, lean_object* v_inst_3734_, lean_object* v_t_3735_, lean_object* v_f_3736_, lean_object* v_init_3737_){
_start:
{
lean_object* v___x_3738_; 
v___x_3738_ = l_Lean_ImportedConsts_foldlM___redArg(v_inst_3734_, v_t_3735_, v_f_3736_, v_init_3737_);
return v___x_3738_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(lean_object* v_l_3739_, lean_object* v_n_3740_, lean_object* v_v_3741_){
_start:
{
lean_object* v___x_3742_; lean_object* v___x_3743_; 
v___x_3742_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3742_, 0, v_n_3740_);
lean_ctor_set(v___x_3742_, 1, v_v_3741_);
v___x_3743_ = lean_array_push(v_l_3739_, v___x_3742_);
return v___x_3743_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(lean_object* v_l_3744_, lean_object* v_n_3745_, lean_object* v_v_3746_){
_start:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; 
v___x_3747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3747_, 0, v_n_3745_);
lean_ctor_set(v___x_3747_, 1, v_v_3746_);
v___x_3748_ = lean_array_push(v_l_3744_, v___x_3747_);
return v___x_3748_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3749_, lean_object* v_init_3750_){
_start:
{
switch(lean_obj_tag(v_t_3749_))
{
case 0:
{
lean_object* v_key_3751_; lean_object* v_val_3752_; lean_object* v___x_3753_; 
v_key_3751_ = lean_ctor_get(v_t_3749_, 0);
lean_inc(v_key_3751_);
v_val_3752_ = lean_ctor_get(v_t_3749_, 1);
lean_inc(v_val_3752_);
lean_dec_ref_known(v_t_3749_, 2);
v___x_3753_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3750_, v_key_3751_, v_val_3752_);
return v___x_3753_;
}
case 1:
{
lean_object* v_children_3754_; lean_object* v___x_3755_; lean_object* v___x_3756_; uint8_t v___x_3757_; 
v_children_3754_ = lean_ctor_get(v_t_3749_, 1);
lean_inc_ref(v_children_3754_);
lean_dec_ref_known(v_t_3749_, 2);
v___x_3755_ = lean_unsigned_to_nat(0u);
v___x_3756_ = lean_array_get_size(v_children_3754_);
v___x_3757_ = lean_nat_dec_lt(v___x_3755_, v___x_3756_);
if (v___x_3757_ == 0)
{
lean_dec_ref(v_children_3754_);
return v_init_3750_;
}
else
{
size_t v___x_3758_; size_t v___x_3759_; lean_object* v___x_3760_; 
v___x_3758_ = ((size_t)0ULL);
v___x_3759_ = lean_usize_of_nat(v___x_3756_);
v___x_3760_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3754_, v___x_3758_, v___x_3759_, v_init_3750_);
lean_dec_ref(v_children_3754_);
return v___x_3760_;
}
}
default: 
{
lean_object* v_key_3761_; lean_object* v_val_3762_; lean_object* v_children_3763_; lean_object* v___x_3764_; lean_object* v___x_3765_; lean_object* v___x_3766_; uint8_t v___x_3767_; 
v_key_3761_ = lean_ctor_get(v_t_3749_, 0);
lean_inc(v_key_3761_);
v_val_3762_ = lean_ctor_get(v_t_3749_, 1);
lean_inc(v_val_3762_);
v_children_3763_ = lean_ctor_get(v_t_3749_, 2);
lean_inc_ref(v_children_3763_);
lean_dec_ref_known(v_t_3749_, 3);
v___x_3764_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg___lam__0(v_init_3750_, v_key_3761_, v_val_3762_);
v___x_3765_ = lean_unsigned_to_nat(0u);
v___x_3766_ = lean_array_get_size(v_children_3763_);
v___x_3767_ = lean_nat_dec_lt(v___x_3765_, v___x_3766_);
if (v___x_3767_ == 0)
{
lean_dec_ref(v_children_3763_);
return v___x_3764_;
}
else
{
size_t v___x_3768_; size_t v___x_3769_; lean_object* v___x_3770_; 
v___x_3768_ = ((size_t)0ULL);
v___x_3769_ = lean_usize_of_nat(v___x_3766_);
v___x_3770_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3763_, v___x_3768_, v___x_3769_, v___x_3764_);
lean_dec_ref(v_children_3763_);
return v___x_3770_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3771_, size_t v_i_3772_, size_t v_stop_3773_, lean_object* v_b_3774_){
_start:
{
uint8_t v___x_3775_; 
v___x_3775_ = lean_usize_dec_eq(v_i_3772_, v_stop_3773_);
if (v___x_3775_ == 0)
{
lean_object* v___x_3776_; lean_object* v___x_3777_; size_t v___x_3778_; size_t v___x_3779_; 
v___x_3776_ = lean_array_uget_borrowed(v_as_3771_, v_i_3772_);
lean_inc(v___x_3776_);
v___x_3777_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v___x_3776_, v_b_3774_);
v___x_3778_ = ((size_t)1ULL);
v___x_3779_ = lean_usize_add(v_i_3772_, v___x_3778_);
v_i_3772_ = v___x_3779_;
v_b_3774_ = v___x_3777_;
goto _start;
}
else
{
return v_b_3774_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3781_, lean_object* v_i_3782_, lean_object* v_stop_3783_, lean_object* v_b_3784_){
_start:
{
size_t v_i_boxed_3785_; size_t v_stop_boxed_3786_; lean_object* v_res_3787_; 
v_i_boxed_3785_ = lean_unbox_usize(v_i_3782_);
lean_dec(v_i_3782_);
v_stop_boxed_3786_ = lean_unbox_usize(v_stop_3783_);
lean_dec(v_stop_3783_);
v_res_3787_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3781_, v_i_boxed_3785_, v_stop_boxed_3786_, v_b_3784_);
lean_dec_ref(v_as_3781_);
return v_res_3787_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(lean_object* v_t_3788_, lean_object* v_init_3789_){
_start:
{
switch(lean_obj_tag(v_t_3788_))
{
case 0:
{
lean_object* v_tree_3790_; lean_object* v___x_3791_; 
v_tree_3790_ = lean_ctor_get(v_t_3788_, 1);
lean_inc_ref(v_tree_3790_);
lean_dec_ref_known(v_t_3788_, 2);
v___x_3791_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_tree_3790_, v_init_3789_);
return v___x_3791_;
}
case 1:
{
lean_object* v_key_3792_; lean_object* v_entry_x3f_3793_; lean_object* v_children_3794_; lean_object* v_s_3796_; 
v_key_3792_ = lean_ctor_get(v_t_3788_, 0);
lean_inc(v_key_3792_);
v_entry_x3f_3793_ = lean_ctor_get(v_t_3788_, 1);
lean_inc(v_entry_x3f_3793_);
v_children_3794_ = lean_ctor_get(v_t_3788_, 2);
lean_inc_ref(v_children_3794_);
lean_dec_ref_known(v_t_3788_, 3);
if (lean_obj_tag(v_entry_x3f_3793_) == 1)
{
lean_object* v_val_3803_; lean_object* v_fst_3804_; lean_object* v___x_3805_; 
v_val_3803_ = lean_ctor_get(v_entry_x3f_3793_, 0);
lean_inc(v_val_3803_);
lean_dec_ref_known(v_entry_x3f_3793_, 1);
v_fst_3804_ = lean_ctor_get(v_val_3803_, 0);
lean_inc(v_fst_3804_);
lean_dec(v_val_3803_);
v___x_3805_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(v_init_3789_, v_key_3792_, v_fst_3804_);
v_s_3796_ = v___x_3805_;
goto v___jp_3795_;
}
else
{
lean_dec(v_entry_x3f_3793_);
lean_dec(v_key_3792_);
v_s_3796_ = v_init_3789_;
goto v___jp_3795_;
}
v___jp_3795_:
{
lean_object* v___x_3797_; lean_object* v___x_3798_; uint8_t v___x_3799_; 
v___x_3797_ = lean_unsigned_to_nat(0u);
v___x_3798_ = lean_array_get_size(v_children_3794_);
v___x_3799_ = lean_nat_dec_lt(v___x_3797_, v___x_3798_);
if (v___x_3799_ == 0)
{
lean_dec_ref(v_children_3794_);
return v_s_3796_;
}
else
{
size_t v___x_3800_; size_t v___x_3801_; lean_object* v___x_3802_; 
v___x_3800_ = ((size_t)0ULL);
v___x_3801_ = lean_usize_of_nat(v___x_3798_);
v___x_3802_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_children_3794_, v___x_3800_, v___x_3801_, v_s_3796_);
lean_dec_ref(v_children_3794_);
return v___x_3802_;
}
}
}
default: 
{
lean_object* v_key_3806_; lean_object* v_entry_x3f_3807_; lean_object* v_children_3808_; lean_object* v_s_3810_; 
v_key_3806_ = lean_ctor_get(v_t_3788_, 0);
lean_inc(v_key_3806_);
v_entry_x3f_3807_ = lean_ctor_get(v_t_3788_, 1);
lean_inc(v_entry_x3f_3807_);
v_children_3808_ = lean_ctor_get(v_t_3788_, 2);
lean_inc_ref(v_children_3808_);
lean_dec_ref_known(v_t_3788_, 3);
if (lean_obj_tag(v_entry_x3f_3807_) == 1)
{
lean_object* v_val_3818_; lean_object* v_fst_3819_; lean_object* v___x_3820_; 
v_val_3818_ = lean_ctor_get(v_entry_x3f_3807_, 0);
lean_inc(v_val_3818_);
lean_dec_ref_known(v_entry_x3f_3807_, 1);
v_fst_3819_ = lean_ctor_get(v_val_3818_, 0);
lean_inc(v_fst_3819_);
lean_dec(v_val_3818_);
v___x_3820_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg___lam__0(v_init_3789_, v_key_3806_, v_fst_3819_);
v_s_3810_ = v___x_3820_;
goto v___jp_3809_;
}
else
{
lean_dec(v_entry_x3f_3807_);
lean_dec(v_key_3806_);
v_s_3810_ = v_init_3789_;
goto v___jp_3809_;
}
v___jp_3809_:
{
lean_object* v___x_3811_; lean_object* v___x_3812_; lean_object* v___x_3813_; uint8_t v___x_3814_; 
v___x_3811_ = lean_thunk_get_own(v_children_3808_);
lean_dec_ref(v_children_3808_);
v___x_3812_ = lean_unsigned_to_nat(0u);
v___x_3813_ = lean_array_get_size(v___x_3811_);
v___x_3814_ = lean_nat_dec_lt(v___x_3812_, v___x_3813_);
if (v___x_3814_ == 0)
{
lean_dec(v___x_3811_);
return v_s_3810_;
}
else
{
size_t v___x_3815_; size_t v___x_3816_; lean_object* v___x_3817_; 
v___x_3815_ = ((size_t)0ULL);
v___x_3816_ = lean_usize_of_nat(v___x_3813_);
v___x_3817_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v___x_3811_, v___x_3815_, v___x_3816_, v_s_3810_);
lean_dec(v___x_3811_);
return v___x_3817_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(lean_object* v_as_3821_, size_t v_i_3822_, size_t v_stop_3823_, lean_object* v_b_3824_){
_start:
{
uint8_t v___x_3825_; 
v___x_3825_ = lean_usize_dec_eq(v_i_3822_, v_stop_3823_);
if (v___x_3825_ == 0)
{
lean_object* v___x_3826_; lean_object* v___x_3827_; size_t v___x_3828_; size_t v___x_3829_; 
v___x_3826_ = lean_array_uget_borrowed(v_as_3821_, v_i_3822_);
lean_inc(v___x_3826_);
v___x_3827_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v___x_3826_, v_b_3824_);
v___x_3828_ = ((size_t)1ULL);
v___x_3829_ = lean_usize_add(v_i_3822_, v___x_3828_);
v_i_3822_ = v___x_3829_;
v_b_3824_ = v___x_3827_;
goto _start;
}
else
{
return v_b_3824_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_3831_, lean_object* v_i_3832_, lean_object* v_stop_3833_, lean_object* v_b_3834_){
_start:
{
size_t v_i_boxed_3835_; size_t v_stop_boxed_3836_; lean_object* v_res_3837_; 
v_i_boxed_3835_ = lean_unbox_usize(v_i_3832_);
lean_dec(v_i_3832_);
v_stop_boxed_3836_ = lean_unbox_usize(v_stop_3833_);
lean_dec(v_stop_3833_);
v_res_3837_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_as_3831_, v_i_boxed_3835_, v_stop_boxed_3836_, v_b_3834_);
lean_dec_ref(v_as_3831_);
return v_res_3837_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(lean_object* v_t_3838_, lean_object* v_init_3839_){
_start:
{
lean_object* v_tree_3840_; lean_object* v___x_3841_; 
v_tree_3840_ = lean_ctor_get(v_t_3838_, 1);
lean_inc_ref(v_tree_3840_);
lean_dec_ref(v_t_3838_);
v___x_3841_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_tree_3840_, v_init_3839_);
return v___x_3841_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray___redArg(lean_object* v_t_3844_){
_start:
{
lean_object* v___x_3845_; lean_object* v___x_3846_; 
v___x_3845_ = ((lean_object*)(l_Lean_ImportedConsts_toArray___redArg___closed__0));
v___x_3846_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_3844_, v___x_3845_);
return v___x_3846_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_toArray(lean_object* v_00_u03b1_3847_, lean_object* v_t_3848_){
_start:
{
lean_object* v___x_3849_; 
v___x_3849_ = l_Lean_ImportedConsts_toArray___redArg(v_t_3848_);
return v___x_3849_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0(lean_object* v_00_u03b1_3850_, lean_object* v_t_3851_, lean_object* v_init_3852_){
_start:
{
lean_object* v___x_3853_; 
v___x_3853_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0___redArg(v_t_3851_, v_init_3852_);
return v___x_3853_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0(lean_object* v_00_u03b1_3854_, lean_object* v_t_3855_, lean_object* v_init_3856_){
_start:
{
lean_object* v___x_3857_; 
v___x_3857_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0___redArg(v_t_3855_, v_init_3856_);
return v___x_3857_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_3858_, lean_object* v_t_3859_, lean_object* v_init_3860_){
_start:
{
lean_object* v___x_3861_; 
v___x_3861_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1___redArg(v_t_3859_, v_init_3860_);
return v___x_3861_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_3862_, lean_object* v_as_3863_, size_t v_i_3864_, size_t v_stop_3865_, lean_object* v_b_3866_){
_start:
{
lean_object* v___x_3867_; 
v___x_3867_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___redArg(v_as_3863_, v_i_3864_, v_stop_3865_, v_b_3866_);
return v___x_3867_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_3868_, lean_object* v_as_3869_, lean_object* v_i_3870_, lean_object* v_stop_3871_, lean_object* v_b_3872_){
_start:
{
size_t v_i_boxed_3873_; size_t v_stop_boxed_3874_; lean_object* v_res_3875_; 
v_i_boxed_3873_ = lean_unbox_usize(v_i_3870_);
lean_dec(v_i_3870_);
v_stop_boxed_3874_ = lean_unbox_usize(v_stop_3871_);
lean_dec(v_stop_3871_);
v_res_3875_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__2(v_00_u03b1_3868_, v_as_3869_, v_i_boxed_3873_, v_stop_boxed_3874_, v_b_3872_);
lean_dec_ref(v_as_3869_);
return v_res_3875_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_3876_, lean_object* v_as_3877_, size_t v_i_3878_, size_t v_stop_3879_, lean_object* v_b_3880_){
_start:
{
lean_object* v___x_3881_; 
v___x_3881_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3877_, v_i_3878_, v_stop_3879_, v_b_3880_);
return v___x_3881_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_3882_, lean_object* v_as_3883_, lean_object* v_i_3884_, lean_object* v_stop_3885_, lean_object* v_b_3886_){
_start:
{
size_t v_i_boxed_3887_; size_t v_stop_boxed_3888_; lean_object* v_res_3889_; 
v_i_boxed_3887_ = lean_unbox_usize(v_i_3884_);
lean_dec(v_i_3884_);
v_stop_boxed_3888_ = lean_unbox_usize(v_stop_3885_);
lean_dec(v_stop_3885_);
v_res_3889_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_toArray_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_3882_, v_as_3883_, v_i_boxed_3887_, v_stop_boxed_3888_, v_b_3886_);
lean_dec_ref(v_as_3883_);
return v_res_3889_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(lean_object* v_t_3890_, lean_object* v_init_3891_){
_start:
{
switch(lean_obj_tag(v_t_3890_))
{
case 0:
{
lean_object* v_val_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_3899_; 
v_val_3892_ = lean_ctor_get(v_t_3890_, 1);
v_isSharedCheck_3899_ = !lean_is_exclusive(v_t_3890_);
if (v_isSharedCheck_3899_ == 0)
{
lean_object* v_unused_3900_; 
v_unused_3900_ = lean_ctor_get(v_t_3890_, 0);
lean_dec(v_unused_3900_);
v___x_3894_ = v_t_3890_;
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_val_3892_);
lean_dec(v_t_3890_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_3899_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v___x_3897_; 
if (v_isShared_3895_ == 0)
{
lean_ctor_set_tag(v___x_3894_, 1);
lean_ctor_set(v___x_3894_, 1, v_init_3891_);
lean_ctor_set(v___x_3894_, 0, v_val_3892_);
v___x_3897_ = v___x_3894_;
goto v_reusejp_3896_;
}
else
{
lean_object* v_reuseFailAlloc_3898_; 
v_reuseFailAlloc_3898_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3898_, 0, v_val_3892_);
lean_ctor_set(v_reuseFailAlloc_3898_, 1, v_init_3891_);
v___x_3897_ = v_reuseFailAlloc_3898_;
goto v_reusejp_3896_;
}
v_reusejp_3896_:
{
return v___x_3897_;
}
}
}
case 1:
{
lean_object* v_children_3901_; lean_object* v___x_3902_; lean_object* v___x_3903_; uint8_t v___x_3904_; 
v_children_3901_ = lean_ctor_get(v_t_3890_, 1);
lean_inc_ref(v_children_3901_);
lean_dec_ref_known(v_t_3890_, 2);
v___x_3902_ = lean_unsigned_to_nat(0u);
v___x_3903_ = lean_array_get_size(v_children_3901_);
v___x_3904_ = lean_nat_dec_lt(v___x_3902_, v___x_3903_);
if (v___x_3904_ == 0)
{
lean_dec_ref(v_children_3901_);
return v_init_3891_;
}
else
{
size_t v___x_3905_; size_t v___x_3906_; lean_object* v___x_3907_; 
v___x_3905_ = ((size_t)0ULL);
v___x_3906_ = lean_usize_of_nat(v___x_3903_);
v___x_3907_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3901_, v___x_3905_, v___x_3906_, v_init_3891_);
lean_dec_ref(v_children_3901_);
return v___x_3907_;
}
}
default: 
{
lean_object* v_val_3908_; lean_object* v_children_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; uint8_t v___x_3913_; 
v_val_3908_ = lean_ctor_get(v_t_3890_, 1);
lean_inc(v_val_3908_);
v_children_3909_ = lean_ctor_get(v_t_3890_, 2);
lean_inc_ref(v_children_3909_);
lean_dec_ref_known(v_t_3890_, 3);
v___x_3910_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3910_, 0, v_val_3908_);
lean_ctor_set(v___x_3910_, 1, v_init_3891_);
v___x_3911_ = lean_unsigned_to_nat(0u);
v___x_3912_ = lean_array_get_size(v_children_3909_);
v___x_3913_ = lean_nat_dec_lt(v___x_3911_, v___x_3912_);
if (v___x_3913_ == 0)
{
lean_dec_ref(v_children_3909_);
return v___x_3910_;
}
else
{
size_t v___x_3914_; size_t v___x_3915_; lean_object* v___x_3916_; 
v___x_3914_ = ((size_t)0ULL);
v___x_3915_ = lean_usize_of_nat(v___x_3912_);
v___x_3916_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_children_3909_, v___x_3914_, v___x_3915_, v___x_3910_);
lean_dec_ref(v_children_3909_);
return v___x_3916_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(lean_object* v_as_3917_, size_t v_i_3918_, size_t v_stop_3919_, lean_object* v_b_3920_){
_start:
{
uint8_t v___x_3921_; 
v___x_3921_ = lean_usize_dec_eq(v_i_3918_, v_stop_3919_);
if (v___x_3921_ == 0)
{
lean_object* v___x_3922_; lean_object* v___x_3923_; size_t v___x_3924_; size_t v___x_3925_; 
v___x_3922_ = lean_array_uget_borrowed(v_as_3917_, v_i_3918_);
lean_inc(v___x_3922_);
v___x_3923_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v___x_3922_, v_b_3920_);
v___x_3924_ = ((size_t)1ULL);
v___x_3925_ = lean_usize_add(v_i_3918_, v___x_3924_);
v_i_3918_ = v___x_3925_;
v_b_3920_ = v___x_3923_;
goto _start;
}
else
{
return v_b_3920_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg___boxed(lean_object* v_as_3927_, lean_object* v_i_3928_, lean_object* v_stop_3929_, lean_object* v_b_3930_){
_start:
{
size_t v_i_boxed_3931_; size_t v_stop_boxed_3932_; lean_object* v_res_3933_; 
v_i_boxed_3931_ = lean_unbox_usize(v_i_3928_);
lean_dec(v_i_3928_);
v_stop_boxed_3932_ = lean_unbox_usize(v_stop_3929_);
lean_dec(v_stop_3929_);
v_res_3933_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_as_3927_, v_i_boxed_3931_, v_stop_boxed_3932_, v_b_3930_);
lean_dec_ref(v_as_3927_);
return v_res_3933_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(lean_object* v_t_3934_, lean_object* v_init_3935_){
_start:
{
switch(lean_obj_tag(v_t_3934_))
{
case 0:
{
lean_object* v_tree_3936_; lean_object* v___x_3937_; 
v_tree_3936_ = lean_ctor_get(v_t_3934_, 1);
lean_inc_ref(v_tree_3936_);
lean_dec_ref_known(v_t_3934_, 2);
v___x_3937_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_tree_3936_, v_init_3935_);
return v___x_3937_;
}
case 1:
{
lean_object* v_entry_x3f_3938_; lean_object* v_children_3939_; lean_object* v_s_3941_; 
v_entry_x3f_3938_ = lean_ctor_get(v_t_3934_, 1);
lean_inc(v_entry_x3f_3938_);
v_children_3939_ = lean_ctor_get(v_t_3934_, 2);
lean_inc_ref(v_children_3939_);
lean_dec_ref_known(v_t_3934_, 3);
if (lean_obj_tag(v_entry_x3f_3938_) == 1)
{
lean_object* v_val_3948_; lean_object* v_fst_3949_; lean_object* v___x_3951_; uint8_t v_isShared_3952_; uint8_t v_isSharedCheck_3956_; 
v_val_3948_ = lean_ctor_get(v_entry_x3f_3938_, 0);
lean_inc(v_val_3948_);
lean_dec_ref_known(v_entry_x3f_3938_, 1);
v_fst_3949_ = lean_ctor_get(v_val_3948_, 0);
v_isSharedCheck_3956_ = !lean_is_exclusive(v_val_3948_);
if (v_isSharedCheck_3956_ == 0)
{
lean_object* v_unused_3957_; 
v_unused_3957_ = lean_ctor_get(v_val_3948_, 1);
lean_dec(v_unused_3957_);
v___x_3951_ = v_val_3948_;
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
else
{
lean_inc(v_fst_3949_);
lean_dec(v_val_3948_);
v___x_3951_ = lean_box(0);
v_isShared_3952_ = v_isSharedCheck_3956_;
goto v_resetjp_3950_;
}
v_resetjp_3950_:
{
lean_object* v___x_3954_; 
if (v_isShared_3952_ == 0)
{
lean_ctor_set_tag(v___x_3951_, 1);
lean_ctor_set(v___x_3951_, 1, v_init_3935_);
v___x_3954_ = v___x_3951_;
goto v_reusejp_3953_;
}
else
{
lean_object* v_reuseFailAlloc_3955_; 
v_reuseFailAlloc_3955_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3955_, 0, v_fst_3949_);
lean_ctor_set(v_reuseFailAlloc_3955_, 1, v_init_3935_);
v___x_3954_ = v_reuseFailAlloc_3955_;
goto v_reusejp_3953_;
}
v_reusejp_3953_:
{
v_s_3941_ = v___x_3954_;
goto v___jp_3940_;
}
}
}
else
{
lean_dec(v_entry_x3f_3938_);
v_s_3941_ = v_init_3935_;
goto v___jp_3940_;
}
v___jp_3940_:
{
lean_object* v___x_3942_; lean_object* v___x_3943_; uint8_t v___x_3944_; 
v___x_3942_ = lean_unsigned_to_nat(0u);
v___x_3943_ = lean_array_get_size(v_children_3939_);
v___x_3944_ = lean_nat_dec_lt(v___x_3942_, v___x_3943_);
if (v___x_3944_ == 0)
{
lean_dec_ref(v_children_3939_);
return v_s_3941_;
}
else
{
size_t v___x_3945_; size_t v___x_3946_; lean_object* v___x_3947_; 
v___x_3945_ = ((size_t)0ULL);
v___x_3946_ = lean_usize_of_nat(v___x_3943_);
v___x_3947_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_children_3939_, v___x_3945_, v___x_3946_, v_s_3941_);
lean_dec_ref(v_children_3939_);
return v___x_3947_;
}
}
}
default: 
{
lean_object* v_entry_x3f_3958_; lean_object* v_children_3959_; lean_object* v_s_3961_; 
v_entry_x3f_3958_ = lean_ctor_get(v_t_3934_, 1);
lean_inc(v_entry_x3f_3958_);
v_children_3959_ = lean_ctor_get(v_t_3934_, 2);
lean_inc_ref(v_children_3959_);
lean_dec_ref_known(v_t_3934_, 3);
if (lean_obj_tag(v_entry_x3f_3958_) == 1)
{
lean_object* v_val_3969_; lean_object* v_fst_3970_; lean_object* v___x_3972_; uint8_t v_isShared_3973_; uint8_t v_isSharedCheck_3977_; 
v_val_3969_ = lean_ctor_get(v_entry_x3f_3958_, 0);
lean_inc(v_val_3969_);
lean_dec_ref_known(v_entry_x3f_3958_, 1);
v_fst_3970_ = lean_ctor_get(v_val_3969_, 0);
v_isSharedCheck_3977_ = !lean_is_exclusive(v_val_3969_);
if (v_isSharedCheck_3977_ == 0)
{
lean_object* v_unused_3978_; 
v_unused_3978_ = lean_ctor_get(v_val_3969_, 1);
lean_dec(v_unused_3978_);
v___x_3972_ = v_val_3969_;
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
else
{
lean_inc(v_fst_3970_);
lean_dec(v_val_3969_);
v___x_3972_ = lean_box(0);
v_isShared_3973_ = v_isSharedCheck_3977_;
goto v_resetjp_3971_;
}
v_resetjp_3971_:
{
lean_object* v___x_3975_; 
if (v_isShared_3973_ == 0)
{
lean_ctor_set_tag(v___x_3972_, 1);
lean_ctor_set(v___x_3972_, 1, v_init_3935_);
v___x_3975_ = v___x_3972_;
goto v_reusejp_3974_;
}
else
{
lean_object* v_reuseFailAlloc_3976_; 
v_reuseFailAlloc_3976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3976_, 0, v_fst_3970_);
lean_ctor_set(v_reuseFailAlloc_3976_, 1, v_init_3935_);
v___x_3975_ = v_reuseFailAlloc_3976_;
goto v_reusejp_3974_;
}
v_reusejp_3974_:
{
v_s_3961_ = v___x_3975_;
goto v___jp_3960_;
}
}
}
else
{
lean_dec(v_entry_x3f_3958_);
v_s_3961_ = v_init_3935_;
goto v___jp_3960_;
}
v___jp_3960_:
{
lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; uint8_t v___x_3965_; 
v___x_3962_ = lean_thunk_get_own(v_children_3959_);
lean_dec_ref(v_children_3959_);
v___x_3963_ = lean_unsigned_to_nat(0u);
v___x_3964_ = lean_array_get_size(v___x_3962_);
v___x_3965_ = lean_nat_dec_lt(v___x_3963_, v___x_3964_);
if (v___x_3965_ == 0)
{
lean_dec(v___x_3962_);
return v_s_3961_;
}
else
{
size_t v___x_3966_; size_t v___x_3967_; lean_object* v___x_3968_; 
v___x_3966_ = ((size_t)0ULL);
v___x_3967_ = lean_usize_of_nat(v___x_3964_);
v___x_3968_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v___x_3962_, v___x_3966_, v___x_3967_, v_s_3961_);
lean_dec(v___x_3962_);
return v___x_3968_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(lean_object* v_as_3979_, size_t v_i_3980_, size_t v_stop_3981_, lean_object* v_b_3982_){
_start:
{
uint8_t v___x_3983_; 
v___x_3983_ = lean_usize_dec_eq(v_i_3980_, v_stop_3981_);
if (v___x_3983_ == 0)
{
lean_object* v___x_3984_; lean_object* v___x_3985_; size_t v___x_3986_; size_t v___x_3987_; 
v___x_3984_ = lean_array_uget_borrowed(v_as_3979_, v_i_3980_);
lean_inc(v___x_3984_);
v___x_3985_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v___x_3984_, v_b_3982_);
v___x_3986_ = ((size_t)1ULL);
v___x_3987_ = lean_usize_add(v_i_3980_, v___x_3986_);
v_i_3980_ = v___x_3987_;
v_b_3982_ = v___x_3985_;
goto _start;
}
else
{
return v_b_3982_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg___boxed(lean_object* v_as_3989_, lean_object* v_i_3990_, lean_object* v_stop_3991_, lean_object* v_b_3992_){
_start:
{
size_t v_i_boxed_3993_; size_t v_stop_boxed_3994_; lean_object* v_res_3995_; 
v_i_boxed_3993_ = lean_unbox_usize(v_i_3990_);
lean_dec(v_i_3990_);
v_stop_boxed_3994_ = lean_unbox_usize(v_stop_3991_);
lean_dec(v_stop_3991_);
v_res_3995_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_as_3989_, v_i_boxed_3993_, v_stop_boxed_3994_, v_b_3992_);
lean_dec_ref(v_as_3989_);
return v_res_3995_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(lean_object* v_t_3996_, lean_object* v_init_3997_){
_start:
{
lean_object* v_tree_3998_; lean_object* v___x_3999_; 
v_tree_3998_ = lean_ctor_get(v_t_3996_, 1);
lean_inc_ref(v_tree_3998_);
lean_dec_ref(v_t_3996_);
v___x_3999_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_tree_3998_, v_init_3997_);
return v___x_3999_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values___redArg(lean_object* v_t_4000_){
_start:
{
lean_object* v___x_4001_; lean_object* v___x_4002_; 
v___x_4001_ = lean_box(0);
v___x_4002_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_4000_, v___x_4001_);
return v___x_4002_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_values(lean_object* v_00_u03b1_4003_, lean_object* v_t_4004_){
_start:
{
lean_object* v___x_4005_; 
v___x_4005_ = l_Lean_ImportedConsts_values___redArg(v_t_4004_);
return v___x_4005_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0(lean_object* v_00_u03b1_4006_, lean_object* v_t_4007_, lean_object* v_init_4008_){
_start:
{
lean_object* v___x_4009_; 
v___x_4009_ = l_Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0___redArg(v_t_4007_, v_init_4008_);
return v___x_4009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0(lean_object* v_00_u03b1_4010_, lean_object* v_t_4011_, lean_object* v_init_4012_){
_start:
{
lean_object* v___x_4013_; 
v___x_4013_ = l___private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0___redArg(v_t_4011_, v_init_4012_);
return v___x_4013_;
}
}
LEAN_EXPORT lean_object* l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_4014_, lean_object* v_t_4015_, lean_object* v_init_4016_){
_start:
{
lean_object* v___x_4017_; 
v___x_4017_ = l_Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1___redArg(v_t_4015_, v_init_4016_);
return v___x_4017_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(lean_object* v_00_u03b1_4018_, lean_object* v_as_4019_, size_t v_i_4020_, size_t v_stop_4021_, lean_object* v_b_4022_){
_start:
{
lean_object* v___x_4023_; 
v___x_4023_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___redArg(v_as_4019_, v_i_4020_, v_stop_4021_, v_b_4022_);
return v___x_4023_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2___boxed(lean_object* v_00_u03b1_4024_, lean_object* v_as_4025_, lean_object* v_i_4026_, lean_object* v_stop_4027_, lean_object* v_b_4028_){
_start:
{
size_t v_i_boxed_4029_; size_t v_stop_boxed_4030_; lean_object* v_res_4031_; 
v_i_boxed_4029_ = lean_unbox_usize(v_i_4026_);
lean_dec(v_i_4026_);
v_stop_boxed_4030_ = lean_unbox_usize(v_stop_4027_);
lean_dec(v_stop_4027_);
v_res_4031_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__2___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__2(v_00_u03b1_4024_, v_as_4025_, v_i_boxed_4029_, v_stop_boxed_4030_, v_b_4028_);
lean_dec_ref(v_as_4025_);
return v_res_4031_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(lean_object* v_00_u03b1_4032_, lean_object* v_as_4033_, size_t v_i_4034_, size_t v_stop_4035_, lean_object* v_b_4036_){
_start:
{
lean_object* v___x_4037_; 
v___x_4037_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___redArg(v_as_4033_, v_i_4034_, v_stop_4035_, v_b_4036_);
return v___x_4037_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2___boxed(lean_object* v_00_u03b1_4038_, lean_object* v_as_4039_, lean_object* v_i_4040_, lean_object* v_stop_4041_, lean_object* v_b_4042_){
_start:
{
size_t v_i_boxed_4043_; size_t v_stop_boxed_4044_; lean_object* v_res_4045_; 
v_i_boxed_4043_ = lean_unbox_usize(v_i_4040_);
lean_dec(v_i_4040_);
v_stop_boxed_4044_ = lean_unbox_usize(v_stop_4041_);
lean_dec(v_stop_4041_);
v_res_4045_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1_spec__2___at___00Lean_ConstTrie_foldlM___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0_spec__1___at___00__private_Lean_ConstTrie_0__Lean_ImportedTree_foldlM___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0_spec__0___at___00Lean_ImportedConsts_foldlM___at___00Lean_ImportedConsts_foldl_spec__0___at___00Lean_ImportedConsts_values_spec__0_spec__0_spec__1_spec__2(v_00_u03b1_4038_, v_as_4039_, v_i_boxed_4043_, v_stop_boxed_4044_, v_b_4042_);
lean_dec_ref(v_as_4039_);
return v_res_4045_;
}
}
static lean_object* _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3(void){
_start:
{
lean_object* v___x_4049_; lean_object* v___x_4050_; lean_object* v___x_4051_; lean_object* v___x_4052_; lean_object* v___x_4053_; lean_object* v___x_4054_; 
v___x_4049_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__2));
v___x_4050_ = lean_unsigned_to_nat(14u);
v___x_4051_ = lean_unsigned_to_nat(22u);
v___x_4052_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__1));
v___x_4053_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__0));
v___x_4054_ = l_mkPanicMessageWithDecl(v___x_4053_, v___x_4052_, v___x_4051_, v___x_4050_, v___x_4049_);
return v___x_4054_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(lean_object* v_inst_4055_, lean_object* v_t_4056_, lean_object* v_n_4057_, lean_object* v_x_4058_){
_start:
{
lean_object* v___x_4059_; 
v___x_4059_ = l_Lean_ImportedConsts_find_x3f___redArg(v_t_4056_, v_n_4057_);
if (lean_obj_tag(v___x_4059_) == 0)
{
lean_object* v___x_4060_; lean_object* v___x_4061_; 
v___x_4060_ = lean_obj_once(&l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3, &l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3_once, _init_l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___closed__3);
v___x_4061_ = l_panic___redArg(v_inst_4055_, v___x_4060_);
return v___x_4061_;
}
else
{
lean_object* v_val_4062_; 
v_val_4062_ = lean_ctor_get(v___x_4059_, 0);
lean_inc(v_val_4062_);
lean_dec_ref_known(v___x_4059_, 1);
return v_val_4062_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_4063_, lean_object* v_t_4064_, lean_object* v_n_4065_, lean_object* v_x_4066_){
_start:
{
lean_object* v_res_4067_; 
v_res_4067_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0(v_inst_4063_, v_t_4064_, v_n_4065_, v_x_4066_);
lean_dec(v_inst_4063_);
return v_res_4067_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(lean_object* v_inst_4068_, lean_object* v_xs_4069_, lean_object* v_i_4070_){
_start:
{
lean_object* v___x_4071_; 
v___x_4071_ = l_Lean_ImportedConsts_find_x3f___redArg(v_xs_4069_, v_i_4070_);
if (lean_obj_tag(v___x_4071_) == 0)
{
lean_object* v___x_4072_; 
v___x_4072_ = l_outOfBounds___redArg(v_inst_4068_);
return v___x_4072_;
}
else
{
lean_object* v_val_4073_; 
v_val_4073_ = lean_ctor_get(v___x_4071_, 0);
lean_inc(v_val_4073_);
lean_dec_ref_known(v___x_4071_, 1);
return v_val_4073_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1___boxed(lean_object* v_inst_4074_, lean_object* v_xs_4075_, lean_object* v_i_4076_){
_start:
{
lean_object* v_res_4077_; 
v_res_4077_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__1(v_inst_4074_, v_xs_4075_, v_i_4076_);
lean_dec(v_inst_4074_);
return v_res_4077_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(lean_object* v_inst_4080_){
_start:
{
lean_object* v___f_4081_; lean_object* v___f_4082_; lean_object* v___f_4083_; lean_object* v___x_4084_; 
v___f_4081_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_4081_, 0, v_inst_4080_);
v___f_4082_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__0));
v___f_4083_ = ((lean_object*)(l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg___closed__1));
v___x_4084_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_4084_, 0, v___f_4081_);
lean_ctor_set(v___x_4084_, 1, v___f_4082_);
lean_ctor_set(v___x_4084_, 2, v___f_4083_);
return v___x_4084_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited(lean_object* v_00_u03b1_4085_, lean_object* v_inst_4086_){
_start:
{
lean_object* v___x_4087_; 
v___x_4087_ = l_Lean_ImportedConsts_instGetElem_x3fNameTrueOfInhabited___redArg(v_inst_4086_);
return v___x_4087_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0(lean_object* v_f_4088_, lean_object* v_n_4089_, lean_object* v_v_4090_){
_start:
{
lean_object* v___x_4091_; lean_object* v___x_4092_; 
v___x_4091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4091_, 0, v_n_4089_);
lean_ctor_set(v___x_4091_, 1, v_v_4090_);
v___x_4092_ = lean_apply_1(v_f_4088_, v___x_4091_);
return v___x_4092_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1(lean_object* v_inst_4093_, lean_object* v_t_4094_, lean_object* v_f_4095_){
_start:
{
lean_object* v___f_4096_; lean_object* v___x_4097_; 
v___f_4096_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__0), 3, 1);
lean_closure_set(v___f_4096_, 0, v_f_4095_);
v___x_4097_ = l_Lean_ImportedConsts_forM___redArg(v_inst_4093_, v_t_4094_, v___f_4096_);
return v___x_4097_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg(lean_object* v_inst_4098_){
_start:
{
lean_object* v___f_4099_; 
v___f_4099_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_4099_, 0, v_inst_4098_);
return v___f_4099_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForMProdNameOfMonad(lean_object* v_m_4100_, lean_object* v_00_u03b1_4101_, lean_object* v_inst_4102_){
_start:
{
lean_object* v___f_4103_; 
v___f_4103_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForMProdNameOfMonad___redArg___lam__1), 3, 1);
lean_closure_set(v___f_4103_, 0, v_inst_4102_);
return v___f_4103_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0(lean_object* v_toPure_4104_, lean_object* v_____do__lift_4105_){
_start:
{
if (lean_obj_tag(v_____do__lift_4105_) == 0)
{
lean_object* v_a_4106_; lean_object* v___x_4107_; 
v_a_4106_ = lean_ctor_get(v_____do__lift_4105_, 0);
lean_inc(v_a_4106_);
lean_dec_ref_known(v_____do__lift_4105_, 1);
v___x_4107_ = lean_apply_2(v_toPure_4104_, lean_box(0), v_a_4106_);
return v___x_4107_;
}
else
{
lean_object* v_a_4108_; lean_object* v_snd_4109_; lean_object* v___x_4110_; 
v_a_4108_ = lean_ctor_get(v_____do__lift_4105_, 0);
lean_inc(v_a_4108_);
lean_dec_ref_known(v_____do__lift_4105_, 1);
v_snd_4109_ = lean_ctor_get(v_a_4108_, 1);
lean_inc(v_snd_4109_);
lean_dec(v_a_4108_);
v___x_4110_ = lean_apply_2(v_toPure_4104_, lean_box(0), v_snd_4109_);
return v___x_4110_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1(lean_object* v_toPure_4111_, lean_object* v_____do__lift_4112_){
_start:
{
if (lean_obj_tag(v_____do__lift_4112_) == 0)
{
lean_object* v_a_4113_; lean_object* v___x_4115_; uint8_t v_isShared_4116_; uint8_t v_isSharedCheck_4121_; 
v_a_4113_ = lean_ctor_get(v_____do__lift_4112_, 0);
v_isSharedCheck_4121_ = !lean_is_exclusive(v_____do__lift_4112_);
if (v_isSharedCheck_4121_ == 0)
{
v___x_4115_ = v_____do__lift_4112_;
v_isShared_4116_ = v_isSharedCheck_4121_;
goto v_resetjp_4114_;
}
else
{
lean_inc(v_a_4113_);
lean_dec(v_____do__lift_4112_);
v___x_4115_ = lean_box(0);
v_isShared_4116_ = v_isSharedCheck_4121_;
goto v_resetjp_4114_;
}
v_resetjp_4114_:
{
lean_object* v___x_4118_; 
if (v_isShared_4116_ == 0)
{
v___x_4118_ = v___x_4115_;
goto v_reusejp_4117_;
}
else
{
lean_object* v_reuseFailAlloc_4120_; 
v_reuseFailAlloc_4120_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4120_, 0, v_a_4113_);
v___x_4118_ = v_reuseFailAlloc_4120_;
goto v_reusejp_4117_;
}
v_reusejp_4117_:
{
lean_object* v___x_4119_; 
v___x_4119_ = lean_apply_2(v_toPure_4111_, lean_box(0), v___x_4118_);
return v___x_4119_;
}
}
}
else
{
lean_object* v_a_4122_; lean_object* v___x_4124_; uint8_t v_isShared_4125_; uint8_t v_isSharedCheck_4132_; 
v_a_4122_ = lean_ctor_get(v_____do__lift_4112_, 0);
v_isSharedCheck_4132_ = !lean_is_exclusive(v_____do__lift_4112_);
if (v_isSharedCheck_4132_ == 0)
{
v___x_4124_ = v_____do__lift_4112_;
v_isShared_4125_ = v_isSharedCheck_4132_;
goto v_resetjp_4123_;
}
else
{
lean_inc(v_a_4122_);
lean_dec(v_____do__lift_4112_);
v___x_4124_ = lean_box(0);
v_isShared_4125_ = v_isSharedCheck_4132_;
goto v_resetjp_4123_;
}
v_resetjp_4123_:
{
lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4129_; 
v___x_4126_ = lean_box(0);
v___x_4127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4126_);
lean_ctor_set(v___x_4127_, 1, v_a_4122_);
if (v_isShared_4125_ == 0)
{
lean_ctor_set(v___x_4124_, 0, v___x_4127_);
v___x_4129_ = v___x_4124_;
goto v_reusejp_4128_;
}
else
{
lean_object* v_reuseFailAlloc_4131_; 
v_reuseFailAlloc_4131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4131_, 0, v___x_4127_);
v___x_4129_ = v_reuseFailAlloc_4131_;
goto v_reusejp_4128_;
}
v_reusejp_4128_:
{
lean_object* v___x_4130_; 
v___x_4130_ = lean_apply_2(v_toPure_4111_, lean_box(0), v___x_4129_);
return v___x_4130_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2(lean_object* v___y_4133_, lean_object* v_toBind_4134_, lean_object* v___f_4135_, lean_object* v_n_4136_, lean_object* v_v_4137_, lean_object* v___y_4138_){
_start:
{
lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; 
v___x_4139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4139_, 0, v_n_4136_);
lean_ctor_set(v___x_4139_, 1, v_v_4137_);
v___x_4140_ = lean_apply_2(v___y_4133_, v___x_4139_, v___y_4138_);
v___x_4141_ = lean_apply_4(v_toBind_4134_, lean_box(0), lean_box(0), v___x_4140_, v___f_4135_);
return v___x_4141_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3(lean_object* v_inst_4142_, lean_object* v_00_u03b2_4143_, lean_object* v___y_4144_, lean_object* v___y_4145_, lean_object* v___y_4146_){
_start:
{
lean_object* v___f_4147_; lean_object* v___f_4148_; lean_object* v___f_4149_; lean_object* v___f_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___f_4157_; lean_object* v___f_4158_; lean_object* v___f_4159_; lean_object* v___f_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v_toApplicative_4167_; lean_object* v_toBind_4168_; lean_object* v_toPure_4169_; lean_object* v___f_4170_; lean_object* v___f_4171_; lean_object* v___f_4172_; lean_object* v___x_138__overap_4173_; lean_object* v___x_4174_; lean_object* v___x_4175_; 
lean_inc_ref_n(v_inst_4142_, 7);
v___f_4147_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__1), 5, 1);
lean_closure_set(v___f_4147_, 0, v_inst_4142_);
v___f_4148_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__4), 5, 1);
lean_closure_set(v___f_4148_, 0, v_inst_4142_);
v___f_4149_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__7), 5, 1);
lean_closure_set(v___f_4149_, 0, v_inst_4142_);
v___f_4150_ = lean_alloc_closure((void*)(l_ExceptT_instMonad___redArg___lam__9), 5, 1);
lean_closure_set(v___f_4150_, 0, v_inst_4142_);
v___x_4151_ = lean_alloc_closure((void*)(l_ExceptT_map), 7, 3);
lean_closure_set(v___x_4151_, 0, lean_box(0));
lean_closure_set(v___x_4151_, 1, lean_box(0));
lean_closure_set(v___x_4151_, 2, v_inst_4142_);
v___x_4152_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4152_, 0, v___x_4151_);
lean_ctor_set(v___x_4152_, 1, v___f_4147_);
v___x_4153_ = lean_alloc_closure((void*)(l_ExceptT_pure), 5, 3);
lean_closure_set(v___x_4153_, 0, lean_box(0));
lean_closure_set(v___x_4153_, 1, lean_box(0));
lean_closure_set(v___x_4153_, 2, v_inst_4142_);
v___x_4154_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4154_, 0, v___x_4152_);
lean_ctor_set(v___x_4154_, 1, v___x_4153_);
lean_ctor_set(v___x_4154_, 2, v___f_4148_);
lean_ctor_set(v___x_4154_, 3, v___f_4149_);
lean_ctor_set(v___x_4154_, 4, v___f_4150_);
v___x_4155_ = lean_alloc_closure((void*)(l_ExceptT_bind), 7, 3);
lean_closure_set(v___x_4155_, 0, lean_box(0));
lean_closure_set(v___x_4155_, 1, lean_box(0));
lean_closure_set(v___x_4155_, 2, v_inst_4142_);
v___x_4156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4154_);
lean_ctor_set(v___x_4156_, 1, v___x_4155_);
lean_inc_ref_n(v___x_4156_, 6);
v___f_4157_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_4157_, 0, v___x_4156_);
v___f_4158_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_4158_, 0, v___x_4156_);
v___f_4159_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__7), 6, 1);
lean_closure_set(v___f_4159_, 0, v___x_4156_);
v___f_4160_ = lean_alloc_closure((void*)(l_StateT_instMonad___redArg___lam__9), 6, 1);
lean_closure_set(v___f_4160_, 0, v___x_4156_);
v___x_4161_ = lean_alloc_closure((void*)(l_StateT_map), 8, 3);
lean_closure_set(v___x_4161_, 0, lean_box(0));
lean_closure_set(v___x_4161_, 1, lean_box(0));
lean_closure_set(v___x_4161_, 2, v___x_4156_);
v___x_4162_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4161_);
lean_ctor_set(v___x_4162_, 1, v___f_4157_);
v___x_4163_ = lean_alloc_closure((void*)(l_StateT_pure), 6, 3);
lean_closure_set(v___x_4163_, 0, lean_box(0));
lean_closure_set(v___x_4163_, 1, lean_box(0));
lean_closure_set(v___x_4163_, 2, v___x_4156_);
v___x_4164_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_4164_, 0, v___x_4162_);
lean_ctor_set(v___x_4164_, 1, v___x_4163_);
lean_ctor_set(v___x_4164_, 2, v___f_4158_);
lean_ctor_set(v___x_4164_, 3, v___f_4159_);
lean_ctor_set(v___x_4164_, 4, v___f_4160_);
v___x_4165_ = lean_alloc_closure((void*)(l_StateT_bind), 8, 3);
lean_closure_set(v___x_4165_, 0, lean_box(0));
lean_closure_set(v___x_4165_, 1, lean_box(0));
lean_closure_set(v___x_4165_, 2, v___x_4156_);
v___x_4166_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4166_, 0, v___x_4164_);
lean_ctor_set(v___x_4166_, 1, v___x_4165_);
v_toApplicative_4167_ = lean_ctor_get(v_inst_4142_, 0);
lean_inc_ref(v_toApplicative_4167_);
v_toBind_4168_ = lean_ctor_get(v_inst_4142_, 1);
lean_inc_n(v_toBind_4168_, 2);
lean_dec_ref(v_inst_4142_);
v_toPure_4169_ = lean_ctor_get(v_toApplicative_4167_, 1);
lean_inc_n(v_toPure_4169_, 2);
lean_dec_ref(v_toApplicative_4167_);
v___f_4170_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__0), 2, 1);
lean_closure_set(v___f_4170_, 0, v_toPure_4169_);
v___f_4171_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__1), 2, 1);
lean_closure_set(v___f_4171_, 0, v_toPure_4169_);
v___f_4172_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__2), 6, 3);
lean_closure_set(v___f_4172_, 0, v___y_4146_);
lean_closure_set(v___f_4172_, 1, v_toBind_4168_);
lean_closure_set(v___f_4172_, 2, v___f_4171_);
v___x_138__overap_4173_ = l_Lean_ImportedConsts_forM___redArg(v___x_4166_, v___y_4144_, v___f_4172_);
v___x_4174_ = lean_apply_1(v___x_138__overap_4173_, v___y_4145_);
v___x_4175_ = lean_apply_4(v_toBind_4168_, lean_box(0), lean_box(0), v___x_4174_, v___f_4170_);
return v___x_4175_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg(lean_object* v_inst_4176_){
_start:
{
lean_object* v___f_4177_; 
v___f_4177_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_4177_, 0, v_inst_4176_);
return v___f_4177_;
}
}
LEAN_EXPORT lean_object* l_Lean_ImportedConsts_instForInProdNameOfMonad(lean_object* v_m_4178_, lean_object* v_00_u03b1_4179_, lean_object* v_inst_4180_){
_start:
{
lean_object* v___f_4181_; 
v___f_4181_ = lean_alloc_closure((void*)(l_Lean_ImportedConsts_instForInProdNameOfMonad___redArg___lam__3), 5, 1);
lean_closure_set(v___f_4181_, 0, v_inst_4180_);
return v___f_4181_;
}
}
lean_object* runtime_initialize_Init_System_IO(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* runtime_initialize_Lean_Data_Name(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* runtime_initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* runtime_initialize_Init_While(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Monadic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_Array_Mem(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Monadic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl = _init_l___private_Lean_ConstTrie_0__Lean_LookupCacheImpl();
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_System_IO(uint8_t builtin);
lean_object* initialize_Init_Data_Option_BasicAux(uint8_t builtin);
lean_object* initialize_Lean_Data_Name(uint8_t builtin);
lean_object* initialize_Std_Data_HashMap_Basic(uint8_t builtin);
lean_object* initialize_Std_Data_HashSet_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_QSort(uint8_t builtin);
lean_object* initialize_Init_While(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Lemmas(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Monadic(uint8_t builtin);
lean_object* initialize_Init_Data_Array_Mem(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_ConstTrie(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_System_IO(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Option_BasicAux(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Name(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashMap_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Std_Data_HashSet_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_QSort(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_While(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Lemmas(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Monadic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_Array_Mem(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_ConstTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_ConstTrie(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_ConstTrie(builtin);
}
#ifdef __cplusplus
}
#endif
