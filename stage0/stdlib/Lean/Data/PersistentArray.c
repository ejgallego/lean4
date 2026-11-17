// Lean compiler output
// Module: Lean.Data.PersistentArray
// Imports: public import Init.Data.Nat.Fold public import Init.Data.UInt.Basic import Init.Data.String.Defs import Init.Data.ToString.Macro import Init.Omega
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
lean_object* l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_usize_shift_left(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
extern lean_object* l_System_Platform_numBits;
lean_object* lean_nat_pow(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_obj_tag_nat(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0 = (const lean_object*)&l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0_value;
static const lean_ctor_object l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__0_value)}};
static const lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1 = (const lean_object*)&l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArrayNode_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_initShift;
LEAN_EXPORT size_t l_Lean_PersistentArray_branching;
static lean_once_cell_t l_Lean_instInhabitedPersistentArray_default___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___closed__0;
static lean_once_cell_t l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_instInhabitedPersistentArray_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_instInhabitedPersistentArray_default___closed__0;
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_empty___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_empty___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___redArg___boxed(lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg___boxed(lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_mkEmptyArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_mkEmptyArray___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray(lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_mul2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mul2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_div2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_div2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT size_t l_Lean_PersistentArray_mod2Shift(size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mod2Shift___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg(size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_PersistentArray_mkNewTail___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_PersistentArray_mkNewTail___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_mkNewTail___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_tooBig___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_tooBig___closed__0;
static lean_once_cell_t l_Lean_PersistentArray_tooBig___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_tooBig___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_tooBig;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_rightpad_go___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_rightpad_go(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg();
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg___boxed(lean_object*);
static lean_once_cell_t l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray(lean_object*);
static lean_once_cell_t l_Lean_PersistentArray_popLeaf___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentArray_popLeaf___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_Lean_PersistentArray_findSomeMAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_findSomeMAux___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___lam__0(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__0_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__1_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__2 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__2_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__3 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__3_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__4 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__4_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__5 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__5_value;
static const lean_closure_object l_Lean_PersistentArray_foldl___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__6 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__6_value;
static const lean_ctor_object l_Lean_PersistentArray_foldl___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__0_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__1_value)}};
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__7 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__7_value;
static const lean_ctor_object l_Lean_PersistentArray_foldl___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__7_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__2_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__3_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__4_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__5_value)}};
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__8 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__8_value;
static const lean_ctor_object l_Lean_PersistentArray_foldl___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__8_value),((lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__6_value)}};
static const lean_object* l_Lean_PersistentArray_foldl___redArg___closed__9 = (const lean_object*)&l_Lean_PersistentArray_foldl___redArg___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_PersistentArray_instAppend___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_append___boxed, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_PersistentArray_instAppend___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_instAppend___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0(lean_object*, uint8_t);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__2(lean_object*);
static const lean_closure_object l_Lean_PersistentArray_mapMAux___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_mapMAux___redArg___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_mapMAux___redArg___closed__0 = (const lean_object*)&l_Lean_PersistentArray_mapMAux___redArg___closed__0_value;
static const lean_closure_object l_Lean_PersistentArray_mapMAux___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_mapMAux___redArg___lam__2, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_mapMAux___redArg___closed__1 = (const lean_object*)&l_Lean_PersistentArray_mapMAux___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0(lean_object*, lean_object*, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "{nodes := "};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__0 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__0_value;
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ", depth := "};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__1 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__1_value;
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = ", tail size := "};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__2 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__2_value;
static const lean_string_object l_Lean_PersistentArray_Stats_toString___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "}"};
static const lean_object* l_Lean_PersistentArray_Stats_toString___closed__3 = (const lean_object*)&l_Lean_PersistentArray_Stats_toString___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_PersistentArray_Stats_toString(lean_object*);
static const lean_closure_object l_Lean_PersistentArray_instToStringStats___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_PersistentArray_Stats_toString, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_PersistentArray_instToStringStats___closed__0 = (const lean_object*)&l_Lean_PersistentArray_instToStringStats___closed__0_value;
LEAN_EXPORT const lean_object* l_Lean_PersistentArray_instToStringStats = (const lean_object*)&l_Lean_PersistentArray_instToStringStats___closed__0_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPArray___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_mkPArray(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl___redArg(lean_object* v_x_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = lean_obj_tag_nat(v_x_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl___redArg___boxed(lean_object* v_x_3_){
_start:
{
lean_object* v_res_4_; 
v_res_4_ = l_Lean_PersistentArrayNode_ctorIdx___impl___redArg(v_x_3_);
lean_dec_ref(v_x_3_);
return v_res_4_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl(lean_object* v_00_u03b1_5_, lean_object* v_x_6_){
_start:
{
lean_object* v___x_7_; 
v___x_7_ = lean_obj_tag_nat(v_x_6_);
return v___x_7_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorIdx___impl___boxed(lean_object* v_00_u03b1_8_, lean_object* v_x_9_){
_start:
{
lean_object* v_res_10_; 
v_res_10_ = l_Lean_PersistentArrayNode_ctorIdx___impl(v_00_u03b1_8_, v_x_9_);
lean_dec_ref(v_x_9_);
return v_res_10_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___redArg(lean_object* v_t_11_, lean_object* v_k_12_){
_start:
{
lean_object* v_cs_13_; lean_object* v___x_14_; 
v_cs_13_ = lean_ctor_get(v_t_11_, 0);
lean_inc_ref(v_cs_13_);
lean_dec_ref(v_t_11_);
v___x_14_ = lean_apply_1(v_k_12_, v_cs_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim(lean_object* v_00_u03b1_15_, lean_object* v_motive__1_16_, lean_object* v_ctorIdx_17_, lean_object* v_t_18_, lean_object* v_h_19_, lean_object* v_k_20_){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_18_, v_k_20_);
return v___x_21_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_ctorElim___boxed(lean_object* v_00_u03b1_22_, lean_object* v_motive__1_23_, lean_object* v_ctorIdx_24_, lean_object* v_t_25_, lean_object* v_h_26_, lean_object* v_k_27_){
_start:
{
lean_object* v_res_28_; 
v_res_28_ = l_Lean_PersistentArrayNode_ctorElim(v_00_u03b1_22_, v_motive__1_23_, v_ctorIdx_24_, v_t_25_, v_h_26_, v_k_27_);
lean_dec(v_ctorIdx_24_);
return v_res_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim___redArg(lean_object* v_t_29_, lean_object* v_node_30_){
_start:
{
lean_object* v___x_31_; 
v___x_31_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_29_, v_node_30_);
return v___x_31_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_node_elim(lean_object* v_00_u03b1_32_, lean_object* v_motive__1_33_, lean_object* v_t_34_, lean_object* v_h_35_, lean_object* v_node_36_){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_34_, v_node_36_);
return v___x_37_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim___redArg(lean_object* v_t_38_, lean_object* v_leaf_39_){
_start:
{
lean_object* v___x_40_; 
v___x_40_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_38_, v_leaf_39_);
return v___x_40_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_leaf_elim(lean_object* v_00_u03b1_41_, lean_object* v_motive__1_42_, lean_object* v_t_43_, lean_object* v_h_44_, lean_object* v_leaf_45_){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = l_Lean_PersistentArrayNode_ctorElim___redArg(v_t_43_, v_leaf_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg(){
_start:
{
lean_object* v___x_52_; 
v___x_52_ = ((lean_object*)(l_Lean_instInhabitedPersistentArrayNode_default___redArg___closed__1));
return v___x_52_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default___redArg___boxed(lean_object* v___dummy_53_){
_start:
{
lean_object* v_res_54_; 
v_res_54_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v_res_54_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0(void){
_start:
{
lean_object* v___x_55_; 
v___x_55_ = l_Lean_instInhabitedPersistentArrayNode_default___redArg();
return v___x_55_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode_default(lean_object* v_00_u03b1_56_){
_start:
{
lean_object* v___x_57_; 
v___x_57_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
return v___x_57_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg(){
_start:
{
lean_object* v___x_59_; 
v___x_59_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
return v___x_59_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode___redArg___boxed(lean_object* v___dummy_60_){
_start:
{
lean_object* v_res_61_; 
v_res_61_ = l_Lean_instInhabitedPersistentArrayNode___redArg();
return v_res_61_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArrayNode(lean_object* v_a_62_){
_start:
{
lean_object* v___x_63_; 
v___x_63_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
return v___x_63_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode___redArg(lean_object* v_x_64_){
_start:
{
if (lean_obj_tag(v_x_64_) == 0)
{
uint8_t v___x_65_; 
v___x_65_ = 1;
return v___x_65_;
}
else
{
uint8_t v___x_66_; 
v___x_66_ = 0;
return v___x_66_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___redArg___boxed(lean_object* v_x_67_){
_start:
{
uint8_t v_res_68_; lean_object* v_r_69_; 
v_res_68_ = l_Lean_PersistentArrayNode_isNode___redArg(v_x_67_);
lean_dec_ref(v_x_67_);
v_r_69_ = lean_box(v_res_68_);
return v_r_69_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArrayNode_isNode(lean_object* v_00_u03b1_70_, lean_object* v_x_71_){
_start:
{
uint8_t v___x_72_; 
v___x_72_ = l_Lean_PersistentArrayNode_isNode___redArg(v_x_71_);
return v___x_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArrayNode_isNode___boxed(lean_object* v_00_u03b1_73_, lean_object* v_x_74_){
_start:
{
uint8_t v_res_75_; lean_object* v_r_76_; 
v_res_75_ = l_Lean_PersistentArrayNode_isNode(v_00_u03b1_73_, v_x_74_);
lean_dec_ref(v_x_74_);
v_r_76_ = lean_box(v_res_75_);
return v_r_76_;
}
}
static size_t _init_l_Lean_PersistentArray_initShift(void){
_start:
{
size_t v___x_77_; 
v___x_77_ = ((size_t)5ULL);
return v___x_77_;
}
}
static size_t _init_l_Lean_PersistentArray_branching(void){
_start:
{
size_t v___x_78_; 
v___x_78_ = ((size_t)32ULL);
return v___x_78_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__0(void){
_start:
{
lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___x_81_; 
v___x_79_ = lean_unsigned_to_nat(32u);
v___x_80_ = lean_mk_empty_array_with_capacity(v___x_79_);
v___x_81_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_81_, 0, v___x_80_);
return v___x_81_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1(void){
_start:
{
size_t v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v___x_82_ = ((size_t)5ULL);
v___x_83_ = lean_unsigned_to_nat(0u);
v___x_84_ = lean_unsigned_to_nat(32u);
v___x_85_ = lean_mk_empty_array_with_capacity(v___x_84_);
v___x_86_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__0, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__0);
v___x_87_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_87_, 0, v___x_86_);
lean_ctor_set(v___x_87_, 1, v___x_85_);
lean_ctor_set(v___x_87_, 2, v___x_83_);
lean_ctor_set(v___x_87_, 3, v___x_83_);
lean_ctor_set_usize(v___x_87_, 4, v___x_82_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg(){
_start:
{
lean_object* v___x_89_; 
v___x_89_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
return v___x_89_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default___redArg___boxed(lean_object* v___dummy_90_){
_start:
{
lean_object* v_res_91_; 
v_res_91_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v_res_91_;
}
}
static lean_object* _init_l_Lean_instInhabitedPersistentArray_default___closed__0(void){
_start:
{
lean_object* v___x_92_; 
v___x_92_ = l_Lean_instInhabitedPersistentArray_default___redArg();
return v___x_92_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray_default(lean_object* v_00_u03b1_93_){
_start:
{
lean_object* v___x_94_; 
v___x_94_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___closed__0, &l_Lean_instInhabitedPersistentArray_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___closed__0);
return v___x_94_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg(){
_start:
{
lean_object* v___x_96_; 
v___x_96_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___closed__0, &l_Lean_instInhabitedPersistentArray_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___closed__0);
return v___x_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray___redArg___boxed(lean_object* v___dummy_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = l_Lean_instInhabitedPersistentArray___redArg();
return v_res_98_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedPersistentArray(lean_object* v_a_99_){
_start:
{
lean_object* v___x_100_; 
v___x_100_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___closed__0, &l_Lean_instInhabitedPersistentArray_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArray_default___closed__0);
return v___x_100_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg(){
_start:
{
lean_object* v___x_102_; lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_102_ = lean_unsigned_to_nat(32u);
v___x_103_ = lean_mk_empty_array_with_capacity(v___x_102_);
lean_dec_ref(v___x_103_);
v___x_104_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
return v___x_104_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty___redArg___boxed(lean_object* v___dummy_105_){
_start:
{
lean_object* v_res_106_; 
v_res_106_ = l_Lean_PersistentArray_empty___redArg();
return v_res_106_;
}
}
static lean_object* _init_l_Lean_PersistentArray_empty___closed__0(void){
_start:
{
lean_object* v___x_107_; 
v___x_107_ = l_Lean_PersistentArray_empty___redArg();
return v___x_107_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_empty(lean_object* v_00_u03b1_108_){
_start:
{
lean_object* v___x_109_; 
v___x_109_ = lean_obj_once(&l_Lean_PersistentArray_empty___closed__0, &l_Lean_PersistentArray_empty___closed__0_once, _init_l_Lean_PersistentArray_empty___closed__0);
return v___x_109_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty___redArg(lean_object* v_a_110_){
_start:
{
lean_object* v_size_111_; lean_object* v___x_112_; uint8_t v___x_113_; 
v_size_111_ = lean_ctor_get(v_a_110_, 2);
v___x_112_ = lean_unsigned_to_nat(0u);
v___x_113_ = lean_nat_dec_eq(v_size_111_, v___x_112_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___redArg___boxed(lean_object* v_a_114_){
_start:
{
uint8_t v_res_115_; lean_object* v_r_116_; 
v_res_115_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_114_);
lean_dec_ref(v_a_114_);
v_r_116_ = lean_box(v_res_115_);
return v_r_116_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_isEmpty(lean_object* v_00_u03b1_117_, lean_object* v_a_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = l_Lean_PersistentArray_isEmpty___redArg(v_a_118_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_isEmpty___boxed(lean_object* v_00_u03b1_120_, lean_object* v_a_121_){
_start:
{
uint8_t v_res_122_; lean_object* v_r_123_; 
v_res_122_ = l_Lean_PersistentArray_isEmpty(v_00_u03b1_120_, v_a_121_);
lean_dec_ref(v_a_121_);
v_r_123_ = lean_box(v_res_122_);
return v_r_123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg(){
_start:
{
lean_object* v___x_125_; lean_object* v___x_126_; 
v___x_125_ = lean_unsigned_to_nat(32u);
v___x_126_ = lean_mk_empty_array_with_capacity(v___x_125_);
return v___x_126_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray___redArg___boxed(lean_object* v___dummy_127_){
_start:
{
lean_object* v_res_128_; 
v_res_128_ = l_Lean_PersistentArray_mkEmptyArray___redArg();
return v_res_128_;
}
}
static lean_object* _init_l_Lean_PersistentArray_mkEmptyArray___closed__0(void){
_start:
{
lean_object* v___x_129_; 
v___x_129_ = l_Lean_PersistentArray_mkEmptyArray___redArg();
return v___x_129_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkEmptyArray(lean_object* v_00_u03b1_130_){
_start:
{
lean_object* v___x_131_; 
v___x_131_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
return v___x_131_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentArray_mul2Shift(size_t v_i_132_, size_t v_shift_133_){
_start:
{
size_t v___x_134_; 
v___x_134_ = lean_usize_shift_left(v_i_132_, v_shift_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mul2Shift___boxed(lean_object* v_i_135_, lean_object* v_shift_136_){
_start:
{
size_t v_i_boxed_137_; size_t v_shift_boxed_138_; size_t v_res_139_; lean_object* v_r_140_; 
v_i_boxed_137_ = lean_unbox_usize(v_i_135_);
lean_dec(v_i_135_);
v_shift_boxed_138_ = lean_unbox_usize(v_shift_136_);
lean_dec(v_shift_136_);
v_res_139_ = l_Lean_PersistentArray_mul2Shift(v_i_boxed_137_, v_shift_boxed_138_);
v_r_140_ = lean_box_usize(v_res_139_);
return v_r_140_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentArray_div2Shift(size_t v_i_141_, size_t v_shift_142_){
_start:
{
size_t v___x_143_; 
v___x_143_ = lean_usize_shift_right(v_i_141_, v_shift_142_);
return v___x_143_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_div2Shift___boxed(lean_object* v_i_144_, lean_object* v_shift_145_){
_start:
{
size_t v_i_boxed_146_; size_t v_shift_boxed_147_; size_t v_res_148_; lean_object* v_r_149_; 
v_i_boxed_146_ = lean_unbox_usize(v_i_144_);
lean_dec(v_i_144_);
v_shift_boxed_147_ = lean_unbox_usize(v_shift_145_);
lean_dec(v_shift_145_);
v_res_148_ = l_Lean_PersistentArray_div2Shift(v_i_boxed_146_, v_shift_boxed_147_);
v_r_149_ = lean_box_usize(v_res_148_);
return v_r_149_;
}
}
LEAN_EXPORT size_t l_Lean_PersistentArray_mod2Shift(size_t v_i_150_, size_t v_shift_151_){
_start:
{
size_t v___x_152_; size_t v___x_153_; size_t v___x_154_; size_t v___x_155_; 
v___x_152_ = ((size_t)1ULL);
v___x_153_ = lean_usize_shift_left(v___x_152_, v_shift_151_);
v___x_154_ = lean_usize_sub(v___x_153_, v___x_152_);
v___x_155_ = lean_usize_land(v_i_150_, v___x_154_);
return v___x_155_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mod2Shift___boxed(lean_object* v_i_156_, lean_object* v_shift_157_){
_start:
{
size_t v_i_boxed_158_; size_t v_shift_boxed_159_; size_t v_res_160_; lean_object* v_r_161_; 
v_i_boxed_158_ = lean_unbox_usize(v_i_156_);
lean_dec(v_i_156_);
v_shift_boxed_159_ = lean_unbox_usize(v_shift_157_);
lean_dec(v_shift_157_);
v_res_160_ = l_Lean_PersistentArray_mod2Shift(v_i_boxed_158_, v_shift_boxed_159_);
v_r_161_ = lean_box_usize(v_res_160_);
return v_r_161_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg(lean_object* v_inst_162_, lean_object* v_x_163_, size_t v_x_164_, size_t v_x_165_){
_start:
{
if (lean_obj_tag(v_x_163_) == 0)
{
lean_object* v_cs_166_; lean_object* v___x_167_; size_t v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; size_t v___x_171_; size_t v___x_172_; size_t v___x_173_; size_t v___x_174_; size_t v___x_175_; size_t v___x_176_; 
v_cs_166_ = lean_ctor_get(v_x_163_, 0);
v___x_167_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_168_ = lean_usize_shift_right(v_x_164_, v_x_165_);
v___x_169_ = lean_usize_to_nat(v___x_168_);
v___x_170_ = lean_array_get_borrowed(v___x_167_, v_cs_166_, v___x_169_);
lean_dec(v___x_169_);
v___x_171_ = ((size_t)1ULL);
v___x_172_ = lean_usize_shift_left(v___x_171_, v_x_165_);
v___x_173_ = lean_usize_sub(v___x_172_, v___x_171_);
v___x_174_ = lean_usize_land(v_x_164_, v___x_173_);
v___x_175_ = ((size_t)5ULL);
v___x_176_ = lean_usize_sub(v_x_165_, v___x_175_);
v_x_163_ = v___x_170_;
v_x_164_ = v___x_174_;
v_x_165_ = v___x_176_;
goto _start;
}
else
{
lean_object* v_vs_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v_vs_178_ = lean_ctor_get(v_x_163_, 0);
v___x_179_ = lean_usize_to_nat(v_x_164_);
v___x_180_ = lean_array_get_borrowed(v_inst_162_, v_vs_178_, v___x_179_);
lean_dec(v___x_179_);
lean_inc(v___x_180_);
return v___x_180_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___redArg___boxed(lean_object* v_inst_181_, lean_object* v_x_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
size_t v_x_94__boxed_185_; size_t v_x_95__boxed_186_; lean_object* v_res_187_; 
v_x_94__boxed_185_ = lean_unbox_usize(v_x_183_);
lean_dec(v_x_183_);
v_x_95__boxed_186_ = lean_unbox_usize(v_x_184_);
lean_dec(v_x_184_);
v_res_187_ = l_Lean_PersistentArray_getAux___redArg(v_inst_181_, v_x_182_, v_x_94__boxed_185_, v_x_95__boxed_186_);
lean_dec_ref(v_x_182_);
lean_dec(v_inst_181_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux(lean_object* v_00_u03b1_188_, lean_object* v_inst_189_, lean_object* v_x_190_, size_t v_x_191_, size_t v_x_192_){
_start:
{
lean_object* v___x_193_; 
v___x_193_ = l_Lean_PersistentArray_getAux___redArg(v_inst_189_, v_x_190_, v_x_191_, v_x_192_);
return v___x_193_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_getAux___boxed(lean_object* v_00_u03b1_194_, lean_object* v_inst_195_, lean_object* v_x_196_, lean_object* v_x_197_, lean_object* v_x_198_){
_start:
{
size_t v_x_136__boxed_199_; size_t v_x_137__boxed_200_; lean_object* v_res_201_; 
v_x_136__boxed_199_ = lean_unbox_usize(v_x_197_);
lean_dec(v_x_197_);
v_x_137__boxed_200_ = lean_unbox_usize(v_x_198_);
lean_dec(v_x_198_);
v_res_201_ = l_Lean_PersistentArray_getAux(v_00_u03b1_194_, v_inst_195_, v_x_196_, v_x_136__boxed_199_, v_x_137__boxed_200_);
lean_dec_ref(v_x_196_);
lean_dec(v_inst_195_);
return v_res_201_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg(lean_object* v_inst_202_, lean_object* v_t_203_, lean_object* v_i_204_){
_start:
{
lean_object* v_root_205_; lean_object* v_tail_206_; size_t v_shift_207_; lean_object* v_tailOff_208_; uint8_t v___x_209_; 
v_root_205_ = lean_ctor_get(v_t_203_, 0);
v_tail_206_ = lean_ctor_get(v_t_203_, 1);
v_shift_207_ = lean_ctor_get_usize(v_t_203_, 4);
v_tailOff_208_ = lean_ctor_get(v_t_203_, 3);
v___x_209_ = lean_nat_dec_le(v_tailOff_208_, v_i_204_);
if (v___x_209_ == 0)
{
size_t v___x_210_; lean_object* v___x_211_; 
v___x_210_ = lean_usize_of_nat(v_i_204_);
v___x_211_ = l_Lean_PersistentArray_getAux___redArg(v_inst_202_, v_root_205_, v___x_210_, v_shift_207_);
return v___x_211_;
}
else
{
lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_212_ = lean_nat_sub(v_i_204_, v_tailOff_208_);
v___x_213_ = lean_array_get_borrowed(v_inst_202_, v_tail_206_, v___x_212_);
lean_dec(v___x_212_);
lean_inc(v___x_213_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___redArg___boxed(lean_object* v_inst_214_, lean_object* v_t_215_, lean_object* v_i_216_){
_start:
{
lean_object* v_res_217_; 
v_res_217_ = l_Lean_PersistentArray_get_x21___redArg(v_inst_214_, v_t_215_, v_i_216_);
lean_dec(v_i_216_);
lean_dec_ref(v_t_215_);
lean_dec(v_inst_214_);
return v_res_217_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21(lean_object* v_00_u03b1_218_, lean_object* v_inst_219_, lean_object* v_t_220_, lean_object* v_i_221_){
_start:
{
lean_object* v___x_222_; 
v___x_222_ = l_Lean_PersistentArray_get_x21___redArg(v_inst_219_, v_t_220_, v_i_221_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_get_x21___boxed(lean_object* v_00_u03b1_223_, lean_object* v_inst_224_, lean_object* v_t_225_, lean_object* v_i_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_PersistentArray_get_x21(v_00_u03b1_223_, v_inst_224_, v_t_225_, v_i_226_);
lean_dec(v_i_226_);
lean_dec_ref(v_t_225_);
lean_dec(v_inst_224_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0(lean_object* v_inst_228_, lean_object* v_xs_229_, lean_object* v_i_230_, lean_object* v_x_231_){
_start:
{
lean_object* v___x_232_; 
v___x_232_ = l_Lean_PersistentArray_get_x21___redArg(v_inst_228_, v_xs_229_, v_i_230_);
return v___x_232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed(lean_object* v_inst_233_, lean_object* v_xs_234_, lean_object* v_i_235_, lean_object* v_x_236_){
_start:
{
lean_object* v_res_237_; 
v_res_237_ = l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0(v_inst_233_, v_xs_234_, v_i_235_, v_x_236_);
lean_dec(v_i_235_);
lean_dec_ref(v_xs_234_);
lean_dec(v_inst_233_);
return v_res_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg(lean_object* v_inst_238_){
_start:
{
lean_object* v___f_239_; 
v___f_239_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_239_, 0, v_inst_238_);
return v___f_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited(lean_object* v_00_u03b1_240_, lean_object* v_inst_241_){
_start:
{
lean_object* v___f_242_; 
v___f_242_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_instGetElemNatLtSizeOfInhabited___redArg___lam__0___boxed), 4, 1);
lean_closure_set(v___f_242_, 0, v_inst_241_);
return v___f_242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg(lean_object* v_x_243_, size_t v_x_244_, size_t v_x_245_, lean_object* v_x_246_){
_start:
{
if (lean_obj_tag(v_x_243_) == 0)
{
lean_object* v_cs_247_; size_t v_j_248_; lean_object* v___x_249_; lean_object* v___x_250_; uint8_t v___x_251_; 
v_cs_247_ = lean_ctor_get(v_x_243_, 0);
v_j_248_ = lean_usize_shift_right(v_x_244_, v_x_245_);
v___x_249_ = lean_usize_to_nat(v_j_248_);
v___x_250_ = lean_array_get_size(v_cs_247_);
v___x_251_ = lean_nat_dec_lt(v___x_249_, v___x_250_);
if (v___x_251_ == 0)
{
lean_dec(v___x_249_);
lean_dec(v_x_246_);
return v_x_243_;
}
else
{
lean_object* v___x_253_; uint8_t v_isShared_254_; uint8_t v_isSharedCheck_269_; 
lean_inc_ref(v_cs_247_);
v_isSharedCheck_269_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_269_ == 0)
{
lean_object* v_unused_270_; 
v_unused_270_ = lean_ctor_get(v_x_243_, 0);
lean_dec(v_unused_270_);
v___x_253_ = v_x_243_;
v_isShared_254_ = v_isSharedCheck_269_;
goto v_resetjp_252_;
}
else
{
lean_dec(v_x_243_);
v___x_253_ = lean_box(0);
v_isShared_254_ = v_isSharedCheck_269_;
goto v_resetjp_252_;
}
v_resetjp_252_:
{
size_t v___x_255_; size_t v___x_256_; size_t v___x_257_; size_t v_i_258_; size_t v___x_259_; size_t v_shift_260_; lean_object* v_v_261_; lean_object* v___x_262_; lean_object* v_xs_x27_263_; lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_267_; 
v___x_255_ = ((size_t)1ULL);
v___x_256_ = lean_usize_shift_left(v___x_255_, v_x_245_);
v___x_257_ = lean_usize_sub(v___x_256_, v___x_255_);
v_i_258_ = lean_usize_land(v_x_244_, v___x_257_);
v___x_259_ = ((size_t)5ULL);
v_shift_260_ = lean_usize_sub(v_x_245_, v___x_259_);
v_v_261_ = lean_array_fget(v_cs_247_, v___x_249_);
v___x_262_ = lean_box(0);
v_xs_x27_263_ = lean_array_fset(v_cs_247_, v___x_249_, v___x_262_);
v___x_264_ = l_Lean_PersistentArray_setAux___redArg(v_v_261_, v_i_258_, v_shift_260_, v_x_246_);
v___x_265_ = lean_array_fset(v_xs_x27_263_, v___x_249_, v___x_264_);
lean_dec(v___x_249_);
if (v_isShared_254_ == 0)
{
lean_ctor_set(v___x_253_, 0, v___x_265_);
v___x_267_ = v___x_253_;
goto v_reusejp_266_;
}
else
{
lean_object* v_reuseFailAlloc_268_; 
v_reuseFailAlloc_268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_268_, 0, v___x_265_);
v___x_267_ = v_reuseFailAlloc_268_;
goto v_reusejp_266_;
}
v_reusejp_266_:
{
return v___x_267_;
}
}
}
}
else
{
lean_object* v_vs_271_; lean_object* v___x_273_; uint8_t v_isShared_274_; uint8_t v_isSharedCheck_280_; 
v_vs_271_ = lean_ctor_get(v_x_243_, 0);
v_isSharedCheck_280_ = !lean_is_exclusive(v_x_243_);
if (v_isSharedCheck_280_ == 0)
{
v___x_273_ = v_x_243_;
v_isShared_274_ = v_isSharedCheck_280_;
goto v_resetjp_272_;
}
else
{
lean_inc(v_vs_271_);
lean_dec(v_x_243_);
v___x_273_ = lean_box(0);
v_isShared_274_ = v_isSharedCheck_280_;
goto v_resetjp_272_;
}
v_resetjp_272_:
{
lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_278_; 
v___x_275_ = lean_usize_to_nat(v_x_244_);
v___x_276_ = lean_array_set(v_vs_271_, v___x_275_, v_x_246_);
lean_dec(v___x_275_);
if (v_isShared_274_ == 0)
{
lean_ctor_set(v___x_273_, 0, v___x_276_);
v___x_278_ = v___x_273_;
goto v_reusejp_277_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v___x_276_);
v___x_278_ = v_reuseFailAlloc_279_;
goto v_reusejp_277_;
}
v_reusejp_277_:
{
return v___x_278_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___redArg___boxed(lean_object* v_x_281_, lean_object* v_x_282_, lean_object* v_x_283_, lean_object* v_x_284_){
_start:
{
size_t v_x_79__boxed_285_; size_t v_x_80__boxed_286_; lean_object* v_res_287_; 
v_x_79__boxed_285_ = lean_unbox_usize(v_x_282_);
lean_dec(v_x_282_);
v_x_80__boxed_286_ = lean_unbox_usize(v_x_283_);
lean_dec(v_x_283_);
v_res_287_ = l_Lean_PersistentArray_setAux___redArg(v_x_281_, v_x_79__boxed_285_, v_x_80__boxed_286_, v_x_284_);
return v_res_287_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux(lean_object* v_00_u03b1_288_, lean_object* v_x_289_, size_t v_x_290_, size_t v_x_291_, lean_object* v_x_292_){
_start:
{
lean_object* v___x_293_; 
v___x_293_ = l_Lean_PersistentArray_setAux___redArg(v_x_289_, v_x_290_, v_x_291_, v_x_292_);
return v___x_293_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_setAux___boxed(lean_object* v_00_u03b1_294_, lean_object* v_x_295_, lean_object* v_x_296_, lean_object* v_x_297_, lean_object* v_x_298_){
_start:
{
size_t v_x_149__boxed_299_; size_t v_x_150__boxed_300_; lean_object* v_res_301_; 
v_x_149__boxed_299_ = lean_unbox_usize(v_x_296_);
lean_dec(v_x_296_);
v_x_150__boxed_300_ = lean_unbox_usize(v_x_297_);
lean_dec(v_x_297_);
v_res_301_ = l_Lean_PersistentArray_setAux(v_00_u03b1_294_, v_x_295_, v_x_149__boxed_299_, v_x_150__boxed_300_, v_x_298_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg(lean_object* v_t_302_, lean_object* v_i_303_, lean_object* v_a_304_){
_start:
{
lean_object* v_root_305_; lean_object* v_tail_306_; lean_object* v_size_307_; size_t v_shift_308_; lean_object* v_tailOff_309_; lean_object* v___x_311_; uint8_t v_isShared_312_; uint8_t v_isSharedCheck_324_; 
v_root_305_ = lean_ctor_get(v_t_302_, 0);
v_tail_306_ = lean_ctor_get(v_t_302_, 1);
v_size_307_ = lean_ctor_get(v_t_302_, 2);
v_shift_308_ = lean_ctor_get_usize(v_t_302_, 4);
v_tailOff_309_ = lean_ctor_get(v_t_302_, 3);
v_isSharedCheck_324_ = !lean_is_exclusive(v_t_302_);
if (v_isSharedCheck_324_ == 0)
{
v___x_311_ = v_t_302_;
v_isShared_312_ = v_isSharedCheck_324_;
goto v_resetjp_310_;
}
else
{
lean_inc(v_tailOff_309_);
lean_inc(v_size_307_);
lean_inc(v_tail_306_);
lean_inc(v_root_305_);
lean_dec(v_t_302_);
v___x_311_ = lean_box(0);
v_isShared_312_ = v_isSharedCheck_324_;
goto v_resetjp_310_;
}
v_resetjp_310_:
{
uint8_t v___x_313_; 
v___x_313_ = lean_nat_dec_le(v_tailOff_309_, v_i_303_);
if (v___x_313_ == 0)
{
size_t v___x_314_; lean_object* v___x_315_; lean_object* v___x_317_; 
v___x_314_ = lean_usize_of_nat(v_i_303_);
v___x_315_ = l_Lean_PersistentArray_setAux___redArg(v_root_305_, v___x_314_, v_shift_308_, v_a_304_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 0, v___x_315_);
v___x_317_ = v___x_311_;
goto v_reusejp_316_;
}
else
{
lean_object* v_reuseFailAlloc_318_; 
v_reuseFailAlloc_318_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_318_, 0, v___x_315_);
lean_ctor_set(v_reuseFailAlloc_318_, 1, v_tail_306_);
lean_ctor_set(v_reuseFailAlloc_318_, 2, v_size_307_);
lean_ctor_set(v_reuseFailAlloc_318_, 3, v_tailOff_309_);
lean_ctor_set_usize(v_reuseFailAlloc_318_, 4, v_shift_308_);
v___x_317_ = v_reuseFailAlloc_318_;
goto v_reusejp_316_;
}
v_reusejp_316_:
{
return v___x_317_;
}
}
else
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_322_; 
v___x_319_ = lean_nat_sub(v_i_303_, v_tailOff_309_);
v___x_320_ = lean_array_set(v_tail_306_, v___x_319_, v_a_304_);
lean_dec(v___x_319_);
if (v_isShared_312_ == 0)
{
lean_ctor_set(v___x_311_, 1, v___x_320_);
v___x_322_ = v___x_311_;
goto v_reusejp_321_;
}
else
{
lean_object* v_reuseFailAlloc_323_; 
v_reuseFailAlloc_323_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_323_, 0, v_root_305_);
lean_ctor_set(v_reuseFailAlloc_323_, 1, v___x_320_);
lean_ctor_set(v_reuseFailAlloc_323_, 2, v_size_307_);
lean_ctor_set(v_reuseFailAlloc_323_, 3, v_tailOff_309_);
lean_ctor_set_usize(v_reuseFailAlloc_323_, 4, v_shift_308_);
v___x_322_ = v_reuseFailAlloc_323_;
goto v_reusejp_321_;
}
v_reusejp_321_:
{
return v___x_322_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___redArg___boxed(lean_object* v_t_325_, lean_object* v_i_326_, lean_object* v_a_327_){
_start:
{
lean_object* v_res_328_; 
v_res_328_ = l_Lean_PersistentArray_set___redArg(v_t_325_, v_i_326_, v_a_327_);
lean_dec(v_i_326_);
return v_res_328_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set(lean_object* v_00_u03b1_329_, lean_object* v_t_330_, lean_object* v_i_331_, lean_object* v_a_332_){
_start:
{
lean_object* v___x_333_; 
v___x_333_ = l_Lean_PersistentArray_set___redArg(v_t_330_, v_i_331_, v_a_332_);
return v___x_333_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_set___boxed(lean_object* v_00_u03b1_334_, lean_object* v_t_335_, lean_object* v_i_336_, lean_object* v_a_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l_Lean_PersistentArray_set(v_00_u03b1_334_, v_t_335_, v_i_336_, v_a_337_);
lean_dec(v_i_336_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg(lean_object* v_f_339_, lean_object* v_x_340_, size_t v_x_341_, size_t v_x_342_){
_start:
{
if (lean_obj_tag(v_x_340_) == 0)
{
lean_object* v_cs_343_; size_t v_j_344_; lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v_cs_343_ = lean_ctor_get(v_x_340_, 0);
v_j_344_ = lean_usize_shift_right(v_x_341_, v_x_342_);
v___x_345_ = lean_usize_to_nat(v_j_344_);
v___x_346_ = lean_array_get_size(v_cs_343_);
v___x_347_ = lean_nat_dec_lt(v___x_345_, v___x_346_);
if (v___x_347_ == 0)
{
lean_dec(v___x_345_);
lean_dec(v_f_339_);
return v_x_340_;
}
else
{
lean_object* v___x_349_; uint8_t v_isShared_350_; uint8_t v_isSharedCheck_365_; 
lean_inc_ref(v_cs_343_);
v_isSharedCheck_365_ = !lean_is_exclusive(v_x_340_);
if (v_isSharedCheck_365_ == 0)
{
lean_object* v_unused_366_; 
v_unused_366_ = lean_ctor_get(v_x_340_, 0);
lean_dec(v_unused_366_);
v___x_349_ = v_x_340_;
v_isShared_350_ = v_isSharedCheck_365_;
goto v_resetjp_348_;
}
else
{
lean_dec(v_x_340_);
v___x_349_ = lean_box(0);
v_isShared_350_ = v_isSharedCheck_365_;
goto v_resetjp_348_;
}
v_resetjp_348_:
{
size_t v___x_351_; size_t v___x_352_; size_t v___x_353_; size_t v_i_354_; size_t v___x_355_; size_t v_shift_356_; lean_object* v_v_357_; lean_object* v___x_358_; lean_object* v_xs_x27_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_363_; 
v___x_351_ = ((size_t)1ULL);
v___x_352_ = lean_usize_shift_left(v___x_351_, v_x_342_);
v___x_353_ = lean_usize_sub(v___x_352_, v___x_351_);
v_i_354_ = lean_usize_land(v_x_341_, v___x_353_);
v___x_355_ = ((size_t)5ULL);
v_shift_356_ = lean_usize_sub(v_x_342_, v___x_355_);
v_v_357_ = lean_array_fget(v_cs_343_, v___x_345_);
v___x_358_ = lean_box(0);
v_xs_x27_359_ = lean_array_fset(v_cs_343_, v___x_345_, v___x_358_);
v___x_360_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_339_, v_v_357_, v_i_354_, v_shift_356_);
v___x_361_ = lean_array_fset(v_xs_x27_359_, v___x_345_, v___x_360_);
lean_dec(v___x_345_);
if (v_isShared_350_ == 0)
{
lean_ctor_set(v___x_349_, 0, v___x_361_);
v___x_363_ = v___x_349_;
goto v_reusejp_362_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v___x_361_);
v___x_363_ = v_reuseFailAlloc_364_;
goto v_reusejp_362_;
}
v_reusejp_362_:
{
return v___x_363_;
}
}
}
}
else
{
lean_object* v_vs_367_; lean_object* v___x_368_; lean_object* v___x_369_; uint8_t v___x_370_; 
v_vs_367_ = lean_ctor_get(v_x_340_, 0);
v___x_368_ = lean_usize_to_nat(v_x_341_);
v___x_369_ = lean_array_get_size(v_vs_367_);
v___x_370_ = lean_nat_dec_lt(v___x_368_, v___x_369_);
if (v___x_370_ == 0)
{
lean_dec(v___x_368_);
lean_dec(v_f_339_);
return v_x_340_;
}
else
{
lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_382_; 
lean_inc_ref(v_vs_367_);
v_isSharedCheck_382_ = !lean_is_exclusive(v_x_340_);
if (v_isSharedCheck_382_ == 0)
{
lean_object* v_unused_383_; 
v_unused_383_ = lean_ctor_get(v_x_340_, 0);
lean_dec(v_unused_383_);
v___x_372_ = v_x_340_;
v_isShared_373_ = v_isSharedCheck_382_;
goto v_resetjp_371_;
}
else
{
lean_dec(v_x_340_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_382_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v_v_374_; lean_object* v___x_375_; lean_object* v_xs_x27_376_; lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_380_; 
v_v_374_ = lean_array_fget(v_vs_367_, v___x_368_);
v___x_375_ = lean_box(0);
v_xs_x27_376_ = lean_array_fset(v_vs_367_, v___x_368_, v___x_375_);
v___x_377_ = lean_apply_1(v_f_339_, v_v_374_);
v___x_378_ = lean_array_fset(v_xs_x27_376_, v___x_368_, v___x_377_);
lean_dec(v___x_368_);
if (v_isShared_373_ == 0)
{
lean_ctor_set(v___x_372_, 0, v___x_378_);
v___x_380_ = v___x_372_;
goto v_reusejp_379_;
}
else
{
lean_object* v_reuseFailAlloc_381_; 
v_reuseFailAlloc_381_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_381_, 0, v___x_378_);
v___x_380_ = v_reuseFailAlloc_381_;
goto v_reusejp_379_;
}
v_reusejp_379_:
{
return v___x_380_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___redArg___boxed(lean_object* v_f_384_, lean_object* v_x_385_, lean_object* v_x_386_, lean_object* v_x_387_){
_start:
{
size_t v_x_96__boxed_388_; size_t v_x_97__boxed_389_; lean_object* v_res_390_; 
v_x_96__boxed_388_ = lean_unbox_usize(v_x_386_);
lean_dec(v_x_386_);
v_x_97__boxed_389_ = lean_unbox_usize(v_x_387_);
lean_dec(v_x_387_);
v_res_390_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_384_, v_x_385_, v_x_96__boxed_388_, v_x_97__boxed_389_);
return v_res_390_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux(lean_object* v_00_u03b1_391_, lean_object* v_inst_392_, lean_object* v_f_393_, lean_object* v_x_394_, size_t v_x_395_, size_t v_x_396_){
_start:
{
lean_object* v___x_397_; 
v___x_397_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_393_, v_x_394_, v_x_395_, v_x_396_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modifyAux___boxed(lean_object* v_00_u03b1_398_, lean_object* v_inst_399_, lean_object* v_f_400_, lean_object* v_x_401_, lean_object* v_x_402_, lean_object* v_x_403_){
_start:
{
size_t v_x_174__boxed_404_; size_t v_x_175__boxed_405_; lean_object* v_res_406_; 
v_x_174__boxed_404_ = lean_unbox_usize(v_x_402_);
lean_dec(v_x_402_);
v_x_175__boxed_405_ = lean_unbox_usize(v_x_403_);
lean_dec(v_x_403_);
v_res_406_ = l_Lean_PersistentArray_modifyAux(v_00_u03b1_398_, v_inst_399_, v_f_400_, v_x_401_, v_x_174__boxed_404_, v_x_175__boxed_405_);
lean_dec(v_inst_399_);
return v_res_406_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg(lean_object* v_t_407_, lean_object* v_i_408_, lean_object* v_f_409_){
_start:
{
lean_object* v_root_410_; lean_object* v_tail_411_; lean_object* v_size_412_; size_t v_shift_413_; lean_object* v_tailOff_414_; lean_object* v___x_416_; uint8_t v_isShared_417_; uint8_t v_isSharedCheck_438_; 
v_root_410_ = lean_ctor_get(v_t_407_, 0);
v_tail_411_ = lean_ctor_get(v_t_407_, 1);
v_size_412_ = lean_ctor_get(v_t_407_, 2);
v_shift_413_ = lean_ctor_get_usize(v_t_407_, 4);
v_tailOff_414_ = lean_ctor_get(v_t_407_, 3);
v_isSharedCheck_438_ = !lean_is_exclusive(v_t_407_);
if (v_isSharedCheck_438_ == 0)
{
v___x_416_ = v_t_407_;
v_isShared_417_ = v_isSharedCheck_438_;
goto v_resetjp_415_;
}
else
{
lean_inc(v_tailOff_414_);
lean_inc(v_size_412_);
lean_inc(v_tail_411_);
lean_inc(v_root_410_);
lean_dec(v_t_407_);
v___x_416_ = lean_box(0);
v_isShared_417_ = v_isSharedCheck_438_;
goto v_resetjp_415_;
}
v_resetjp_415_:
{
uint8_t v___x_418_; 
v___x_418_ = lean_nat_dec_le(v_tailOff_414_, v_i_408_);
if (v___x_418_ == 0)
{
size_t v___x_419_; lean_object* v___x_420_; lean_object* v___x_422_; 
v___x_419_ = lean_usize_of_nat(v_i_408_);
v___x_420_ = l_Lean_PersistentArray_modifyAux___redArg(v_f_409_, v_root_410_, v___x_419_, v_shift_413_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 0, v___x_420_);
v___x_422_ = v___x_416_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v___x_420_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_tail_411_);
lean_ctor_set(v_reuseFailAlloc_423_, 2, v_size_412_);
lean_ctor_set(v_reuseFailAlloc_423_, 3, v_tailOff_414_);
lean_ctor_set_usize(v_reuseFailAlloc_423_, 4, v_shift_413_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
else
{
lean_object* v___x_424_; lean_object* v___x_425_; uint8_t v___x_426_; 
v___x_424_ = lean_nat_sub(v_i_408_, v_tailOff_414_);
v___x_425_ = lean_array_get_size(v_tail_411_);
v___x_426_ = lean_nat_dec_lt(v___x_424_, v___x_425_);
if (v___x_426_ == 0)
{
lean_object* v___x_428_; 
lean_dec(v___x_424_);
lean_dec(v_f_409_);
if (v_isShared_417_ == 0)
{
v___x_428_ = v___x_416_;
goto v_reusejp_427_;
}
else
{
lean_object* v_reuseFailAlloc_429_; 
v_reuseFailAlloc_429_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_429_, 0, v_root_410_);
lean_ctor_set(v_reuseFailAlloc_429_, 1, v_tail_411_);
lean_ctor_set(v_reuseFailAlloc_429_, 2, v_size_412_);
lean_ctor_set(v_reuseFailAlloc_429_, 3, v_tailOff_414_);
lean_ctor_set_usize(v_reuseFailAlloc_429_, 4, v_shift_413_);
v___x_428_ = v_reuseFailAlloc_429_;
goto v_reusejp_427_;
}
v_reusejp_427_:
{
return v___x_428_;
}
}
else
{
lean_object* v_v_430_; lean_object* v___x_431_; lean_object* v_xs_x27_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_436_; 
v_v_430_ = lean_array_fget(v_tail_411_, v___x_424_);
v___x_431_ = lean_box(0);
v_xs_x27_432_ = lean_array_fset(v_tail_411_, v___x_424_, v___x_431_);
v___x_433_ = lean_apply_1(v_f_409_, v_v_430_);
v___x_434_ = lean_array_fset(v_xs_x27_432_, v___x_424_, v___x_433_);
lean_dec(v___x_424_);
if (v_isShared_417_ == 0)
{
lean_ctor_set(v___x_416_, 1, v___x_434_);
v___x_436_ = v___x_416_;
goto v_reusejp_435_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v_root_410_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v___x_434_);
lean_ctor_set(v_reuseFailAlloc_437_, 2, v_size_412_);
lean_ctor_set(v_reuseFailAlloc_437_, 3, v_tailOff_414_);
lean_ctor_set_usize(v_reuseFailAlloc_437_, 4, v_shift_413_);
v___x_436_ = v_reuseFailAlloc_437_;
goto v_reusejp_435_;
}
v_reusejp_435_:
{
return v___x_436_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___redArg___boxed(lean_object* v_t_439_, lean_object* v_i_440_, lean_object* v_f_441_){
_start:
{
lean_object* v_res_442_; 
v_res_442_ = l_Lean_PersistentArray_modify___redArg(v_t_439_, v_i_440_, v_f_441_);
lean_dec(v_i_440_);
return v_res_442_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify(lean_object* v_00_u03b1_443_, lean_object* v_inst_444_, lean_object* v_t_445_, lean_object* v_i_446_, lean_object* v_f_447_){
_start:
{
lean_object* v___x_448_; 
v___x_448_ = l_Lean_PersistentArray_modify___redArg(v_t_445_, v_i_446_, v_f_447_);
return v___x_448_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_modify___boxed(lean_object* v_00_u03b1_449_, lean_object* v_inst_450_, lean_object* v_t_451_, lean_object* v_i_452_, lean_object* v_f_453_){
_start:
{
lean_object* v_res_454_; 
v_res_454_ = l_Lean_PersistentArray_modify(v_00_u03b1_449_, v_inst_450_, v_t_451_, v_i_452_, v_f_453_);
lean_dec(v_i_452_);
lean_dec(v_inst_450_);
return v_res_454_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg(size_t v_shift_455_, lean_object* v_a_456_){
_start:
{
size_t v___x_457_; uint8_t v___x_458_; 
v___x_457_ = ((size_t)0ULL);
v___x_458_ = lean_usize_dec_eq(v_shift_455_, v___x_457_);
if (v___x_458_ == 0)
{
lean_object* v___x_459_; size_t v___x_460_; size_t v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; 
v___x_459_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
v___x_460_ = ((size_t)5ULL);
v___x_461_ = lean_usize_sub(v_shift_455_, v___x_460_);
v___x_462_ = l_Lean_PersistentArray_mkNewPath___redArg(v___x_461_, v_a_456_);
v___x_463_ = lean_array_push(v___x_459_, v___x_462_);
v___x_464_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_464_, 0, v___x_463_);
return v___x_464_;
}
else
{
lean_object* v___x_465_; 
v___x_465_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_465_, 0, v_a_456_);
return v___x_465_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___redArg___boxed(lean_object* v_shift_466_, lean_object* v_a_467_){
_start:
{
size_t v_shift_boxed_468_; lean_object* v_res_469_; 
v_shift_boxed_468_ = lean_unbox_usize(v_shift_466_);
lean_dec(v_shift_466_);
v_res_469_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_boxed_468_, v_a_467_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath(lean_object* v_00_u03b1_470_, size_t v_shift_471_, lean_object* v_a_472_){
_start:
{
lean_object* v___x_473_; 
v___x_473_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_471_, v_a_472_);
return v___x_473_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewPath___boxed(lean_object* v_00_u03b1_474_, lean_object* v_shift_475_, lean_object* v_a_476_){
_start:
{
size_t v_shift_boxed_477_; lean_object* v_res_478_; 
v_shift_boxed_477_ = lean_unbox_usize(v_shift_475_);
lean_dec(v_shift_475_);
v_res_478_ = l_Lean_PersistentArray_mkNewPath(v_00_u03b1_474_, v_shift_boxed_477_, v_a_476_);
return v_res_478_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg(lean_object* v_x_479_, size_t v_x_480_, size_t v_x_481_, lean_object* v_x_482_){
_start:
{
if (lean_obj_tag(v_x_479_) == 0)
{
lean_object* v_cs_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_517_; 
v_cs_483_ = lean_ctor_get(v_x_479_, 0);
v_isSharedCheck_517_ = !lean_is_exclusive(v_x_479_);
if (v_isSharedCheck_517_ == 0)
{
v___x_485_ = v_x_479_;
v_isShared_486_ = v_isSharedCheck_517_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_cs_483_);
lean_dec(v_x_479_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_517_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
size_t v___x_487_; uint8_t v___x_488_; 
v___x_487_ = ((size_t)32ULL);
v___x_488_ = lean_usize_dec_lt(v_x_480_, v___x_487_);
if (v___x_488_ == 0)
{
size_t v_j_489_; size_t v___x_490_; size_t v___x_491_; size_t v___x_492_; size_t v_shift_493_; lean_object* v___x_494_; lean_object* v___x_495_; uint8_t v___x_496_; 
v_j_489_ = lean_usize_shift_right(v_x_480_, v_x_481_);
v___x_490_ = ((size_t)1ULL);
v___x_491_ = lean_usize_shift_left(v___x_490_, v_x_481_);
v___x_492_ = ((size_t)5ULL);
v_shift_493_ = lean_usize_sub(v_x_481_, v___x_492_);
v___x_494_ = lean_usize_to_nat(v_j_489_);
v___x_495_ = lean_array_get_size(v_cs_483_);
v___x_496_ = lean_nat_dec_lt(v___x_494_, v___x_495_);
if (v___x_496_ == 0)
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_500_; 
lean_dec(v___x_494_);
v___x_497_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_493_, v_x_482_);
v___x_498_ = lean_array_push(v_cs_483_, v___x_497_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v___x_498_);
v___x_500_ = v___x_485_;
goto v_reusejp_499_;
}
else
{
lean_object* v_reuseFailAlloc_501_; 
v_reuseFailAlloc_501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_501_, 0, v___x_498_);
v___x_500_ = v_reuseFailAlloc_501_;
goto v_reusejp_499_;
}
v_reusejp_499_:
{
return v___x_500_;
}
}
else
{
size_t v___x_502_; size_t v_i_503_; lean_object* v_v_504_; lean_object* v___x_505_; lean_object* v_xs_x27_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_510_; 
v___x_502_ = lean_usize_sub(v___x_491_, v___x_490_);
v_i_503_ = lean_usize_land(v_x_480_, v___x_502_);
v_v_504_ = lean_array_fget(v_cs_483_, v___x_494_);
v___x_505_ = lean_box(0);
v_xs_x27_506_ = lean_array_fset(v_cs_483_, v___x_494_, v___x_505_);
v___x_507_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_v_504_, v_i_503_, v_shift_493_, v_x_482_);
v___x_508_ = lean_array_fset(v_xs_x27_506_, v___x_494_, v___x_507_);
lean_dec(v___x_494_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 0, v___x_508_);
v___x_510_ = v___x_485_;
goto v_reusejp_509_;
}
else
{
lean_object* v_reuseFailAlloc_511_; 
v_reuseFailAlloc_511_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_511_, 0, v___x_508_);
v___x_510_ = v_reuseFailAlloc_511_;
goto v_reusejp_509_;
}
v_reusejp_509_:
{
return v___x_510_;
}
}
}
else
{
lean_object* v___x_513_; 
if (v_isShared_486_ == 0)
{
lean_ctor_set_tag(v___x_485_, 1);
lean_ctor_set(v___x_485_, 0, v_x_482_);
v___x_513_ = v___x_485_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_516_; 
v_reuseFailAlloc_516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_516_, 0, v_x_482_);
v___x_513_ = v_reuseFailAlloc_516_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; 
v___x_514_ = lean_array_push(v_cs_483_, v___x_513_);
v___x_515_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_515_, 0, v___x_514_);
return v___x_515_;
}
}
}
}
else
{
lean_dec_ref(v_x_482_);
return v_x_479_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___redArg___boxed(lean_object* v_x_518_, lean_object* v_x_519_, lean_object* v_x_520_, lean_object* v_x_521_){
_start:
{
size_t v_x_179__boxed_522_; size_t v_x_180__boxed_523_; lean_object* v_res_524_; 
v_x_179__boxed_522_ = lean_unbox_usize(v_x_519_);
lean_dec(v_x_519_);
v_x_180__boxed_523_ = lean_unbox_usize(v_x_520_);
lean_dec(v_x_520_);
v_res_524_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_x_518_, v_x_179__boxed_522_, v_x_180__boxed_523_, v_x_521_);
return v_res_524_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf(lean_object* v_00_u03b1_525_, lean_object* v_x_526_, size_t v_x_527_, size_t v_x_528_, lean_object* v_x_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_x_526_, v_x_527_, v_x_528_, v_x_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_insertNewLeaf___boxed(lean_object* v_00_u03b1_531_, lean_object* v_x_532_, lean_object* v_x_533_, lean_object* v_x_534_, lean_object* v_x_535_){
_start:
{
size_t v_x_251__boxed_536_; size_t v_x_252__boxed_537_; lean_object* v_res_538_; 
v_x_251__boxed_536_ = lean_unbox_usize(v_x_533_);
lean_dec(v_x_533_);
v_x_252__boxed_537_ = lean_unbox_usize(v_x_534_);
lean_dec(v_x_534_);
v_res_538_ = l_Lean_PersistentArray_insertNewLeaf(v_00_u03b1_531_, v_x_532_, v_x_251__boxed_536_, v_x_252__boxed_537_, v_x_535_);
return v_res_538_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail___redArg(lean_object* v_t_541_){
_start:
{
lean_object* v_root_542_; lean_object* v_tail_543_; lean_object* v_size_544_; size_t v_shift_545_; lean_object* v___x_547_; uint8_t v_isShared_548_; uint8_t v_isSharedCheck_572_; 
v_root_542_ = lean_ctor_get(v_t_541_, 0);
v_tail_543_ = lean_ctor_get(v_t_541_, 1);
v_size_544_ = lean_ctor_get(v_t_541_, 2);
v_shift_545_ = lean_ctor_get_usize(v_t_541_, 4);
v_isSharedCheck_572_ = !lean_is_exclusive(v_t_541_);
if (v_isSharedCheck_572_ == 0)
{
lean_object* v_unused_573_; 
v_unused_573_ = lean_ctor_get(v_t_541_, 3);
lean_dec(v_unused_573_);
v___x_547_ = v_t_541_;
v_isShared_548_ = v_isSharedCheck_572_;
goto v_resetjp_546_;
}
else
{
lean_inc(v_size_544_);
lean_inc(v_tail_543_);
lean_inc(v_root_542_);
lean_dec(v_t_541_);
v___x_547_ = lean_box(0);
v_isShared_548_ = v_isSharedCheck_572_;
goto v_resetjp_546_;
}
v_resetjp_546_:
{
size_t v___x_549_; size_t v___x_550_; size_t v___x_551_; size_t v___x_552_; lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_549_ = ((size_t)1ULL);
v___x_550_ = ((size_t)5ULL);
v___x_551_ = lean_usize_add(v_shift_545_, v___x_550_);
v___x_552_ = lean_usize_shift_left(v___x_549_, v___x_551_);
v___x_553_ = lean_usize_to_nat(v___x_552_);
v___x_554_ = lean_nat_dec_le(v_size_544_, v___x_553_);
lean_dec(v___x_553_);
if (v___x_554_ == 0)
{
lean_object* v___x_555_; lean_object* v_n_556_; lean_object* v___x_557_; lean_object* v___x_558_; lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_562_; 
v___x_555_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
v_n_556_ = lean_array_push(v___x_555_, v_root_542_);
v___x_557_ = l_Lean_PersistentArray_mkNewPath___redArg(v_shift_545_, v_tail_543_);
v___x_558_ = lean_array_push(v_n_556_, v___x_557_);
v___x_559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_559_, 0, v___x_558_);
v___x_560_ = ((lean_object*)(l_Lean_PersistentArray_mkNewTail___redArg___closed__0));
lean_inc(v_size_544_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 3, v_size_544_);
lean_ctor_set(v___x_547_, 1, v___x_560_);
lean_ctor_set(v___x_547_, 0, v___x_559_);
v___x_562_ = v___x_547_;
goto v_reusejp_561_;
}
else
{
lean_object* v_reuseFailAlloc_563_; 
v_reuseFailAlloc_563_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_563_, 0, v___x_559_);
lean_ctor_set(v_reuseFailAlloc_563_, 1, v___x_560_);
lean_ctor_set(v_reuseFailAlloc_563_, 2, v_size_544_);
lean_ctor_set(v_reuseFailAlloc_563_, 3, v_size_544_);
v___x_562_ = v_reuseFailAlloc_563_;
goto v_reusejp_561_;
}
v_reusejp_561_:
{
lean_ctor_set_usize(v___x_562_, 4, v___x_551_);
return v___x_562_;
}
}
else
{
lean_object* v___x_564_; lean_object* v___x_565_; size_t v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_570_; 
v___x_564_ = lean_unsigned_to_nat(1u);
v___x_565_ = lean_nat_sub(v_size_544_, v___x_564_);
v___x_566_ = lean_usize_of_nat(v___x_565_);
lean_dec(v___x_565_);
v___x_567_ = l_Lean_PersistentArray_insertNewLeaf___redArg(v_root_542_, v___x_566_, v_shift_545_, v_tail_543_);
v___x_568_ = lean_obj_once(&l_Lean_PersistentArray_mkEmptyArray___closed__0, &l_Lean_PersistentArray_mkEmptyArray___closed__0_once, _init_l_Lean_PersistentArray_mkEmptyArray___closed__0);
lean_inc(v_size_544_);
if (v_isShared_548_ == 0)
{
lean_ctor_set(v___x_547_, 3, v_size_544_);
lean_ctor_set(v___x_547_, 1, v___x_568_);
lean_ctor_set(v___x_547_, 0, v___x_567_);
v___x_570_ = v___x_547_;
goto v_reusejp_569_;
}
else
{
lean_object* v_reuseFailAlloc_571_; 
v_reuseFailAlloc_571_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_571_, 0, v___x_567_);
lean_ctor_set(v_reuseFailAlloc_571_, 1, v___x_568_);
lean_ctor_set(v_reuseFailAlloc_571_, 2, v_size_544_);
lean_ctor_set(v_reuseFailAlloc_571_, 3, v_size_544_);
lean_ctor_set_usize(v_reuseFailAlloc_571_, 4, v_shift_545_);
v___x_570_ = v_reuseFailAlloc_571_;
goto v_reusejp_569_;
}
v_reusejp_569_:
{
return v___x_570_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mkNewTail(lean_object* v_00_u03b1_574_, lean_object* v_t_575_){
_start:
{
lean_object* v___x_576_; 
v___x_576_ = l_Lean_PersistentArray_mkNewTail___redArg(v_t_575_);
return v___x_576_;
}
}
static lean_object* _init_l_Lean_PersistentArray_tooBig___closed__0(void){
_start:
{
lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; 
v___x_577_ = l_System_Platform_numBits;
v___x_578_ = lean_unsigned_to_nat(2u);
v___x_579_ = lean_nat_pow(v___x_578_, v___x_577_);
return v___x_579_;
}
}
static lean_object* _init_l_Lean_PersistentArray_tooBig___closed__1(void){
_start:
{
lean_object* v___x_580_; lean_object* v___x_581_; lean_object* v___x_582_; 
v___x_580_ = lean_unsigned_to_nat(3u);
v___x_581_ = lean_obj_once(&l_Lean_PersistentArray_tooBig___closed__0, &l_Lean_PersistentArray_tooBig___closed__0_once, _init_l_Lean_PersistentArray_tooBig___closed__0);
v___x_582_ = lean_nat_shiftr(v___x_581_, v___x_580_);
return v___x_582_;
}
}
static lean_object* _init_l_Lean_PersistentArray_tooBig(void){
_start:
{
lean_object* v___x_583_; 
v___x_583_ = lean_obj_once(&l_Lean_PersistentArray_tooBig___closed__1, &l_Lean_PersistentArray_tooBig___closed__1_once, _init_l_Lean_PersistentArray_tooBig___closed__1);
return v___x_583_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push___redArg(lean_object* v_t_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_root_586_; lean_object* v_tail_587_; lean_object* v_size_588_; size_t v_shift_589_; lean_object* v_tailOff_590_; lean_object* v___x_592_; uint8_t v_isShared_593_; uint8_t v_isSharedCheck_606_; 
v_root_586_ = lean_ctor_get(v_t_584_, 0);
v_tail_587_ = lean_ctor_get(v_t_584_, 1);
v_size_588_ = lean_ctor_get(v_t_584_, 2);
v_shift_589_ = lean_ctor_get_usize(v_t_584_, 4);
v_tailOff_590_ = lean_ctor_get(v_t_584_, 3);
v_isSharedCheck_606_ = !lean_is_exclusive(v_t_584_);
if (v_isSharedCheck_606_ == 0)
{
v___x_592_ = v_t_584_;
v_isShared_593_ = v_isSharedCheck_606_;
goto v_resetjp_591_;
}
else
{
lean_inc(v_tailOff_590_);
lean_inc(v_size_588_);
lean_inc(v_tail_587_);
lean_inc(v_root_586_);
lean_dec(v_t_584_);
v___x_592_ = lean_box(0);
v_isShared_593_ = v_isSharedCheck_606_;
goto v_resetjp_591_;
}
v_resetjp_591_:
{
lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v_r_598_; 
v___x_594_ = lean_array_push(v_tail_587_, v_a_585_);
v___x_595_ = lean_unsigned_to_nat(1u);
v___x_596_ = lean_nat_add(v_size_588_, v___x_595_);
lean_inc_ref(v___x_594_);
if (v_isShared_593_ == 0)
{
lean_ctor_set(v___x_592_, 2, v___x_596_);
lean_ctor_set(v___x_592_, 1, v___x_594_);
v_r_598_ = v___x_592_;
goto v_reusejp_597_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v_root_586_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v___x_594_);
lean_ctor_set(v_reuseFailAlloc_605_, 2, v___x_596_);
lean_ctor_set(v_reuseFailAlloc_605_, 3, v_tailOff_590_);
lean_ctor_set_usize(v_reuseFailAlloc_605_, 4, v_shift_589_);
v_r_598_ = v_reuseFailAlloc_605_;
goto v_reusejp_597_;
}
v_reusejp_597_:
{
lean_object* v___x_599_; lean_object* v___x_600_; uint8_t v___x_601_; 
v___x_599_ = lean_array_get_size(v___x_594_);
lean_dec_ref(v___x_594_);
v___x_600_ = lean_unsigned_to_nat(32u);
v___x_601_ = lean_nat_dec_lt(v___x_599_, v___x_600_);
if (v___x_601_ == 0)
{
lean_object* v___x_602_; uint8_t v___x_603_; 
v___x_602_ = l_Lean_PersistentArray_tooBig;
v___x_603_ = lean_nat_dec_le(v___x_602_, v_size_588_);
lean_dec(v_size_588_);
if (v___x_603_ == 0)
{
lean_object* v___x_604_; 
v___x_604_ = l_Lean_PersistentArray_mkNewTail___redArg(v_r_598_);
return v___x_604_;
}
else
{
return v_r_598_;
}
}
else
{
lean_dec(v_size_588_);
return v_r_598_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_push(lean_object* v_00_u03b1_607_, lean_object* v_t_608_, lean_object* v_a_609_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_PersistentArray_push___redArg(v_t_608_, v_a_609_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_rightpad_go___redArg(lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_zero_614_; uint8_t v_isZero_615_; 
v_zero_614_ = lean_unsigned_to_nat(0u);
v_isZero_615_ = lean_nat_dec_eq(v_a_612_, v_zero_614_);
if (v_isZero_615_ == 1)
{
lean_dec(v_a_612_);
lean_dec(v_a_611_);
return v_a_613_;
}
else
{
lean_object* v_one_616_; lean_object* v_n_617_; lean_object* v___x_618_; 
v_one_616_ = lean_unsigned_to_nat(1u);
v_n_617_ = lean_nat_sub(v_a_612_, v_one_616_);
lean_dec(v_a_612_);
lean_inc(v_a_611_);
v___x_618_ = l_Lean_PersistentArray_push___redArg(v_a_613_, v_a_611_);
v_a_612_ = v_n_617_;
v_a_613_ = v___x_618_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_rightpad_go(lean_object* v_00_u03b1_620_, lean_object* v_a_621_, lean_object* v_a_622_, lean_object* v_a_623_){
_start:
{
lean_object* v___x_624_; 
v___x_624_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_rightpad_go___redArg(v_a_621_, v_a_622_, v_a_623_);
return v___x_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad___redArg(lean_object* v_n_625_, lean_object* v_a_626_, lean_object* v_t_627_){
_start:
{
lean_object* v_size_628_; lean_object* v___x_629_; lean_object* v___x_630_; 
v_size_628_ = lean_ctor_get(v_t_627_, 2);
v___x_629_ = lean_nat_sub(v_n_625_, v_size_628_);
v___x_630_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_rightpad_go___redArg(v_a_626_, v___x_629_, v_t_627_);
return v___x_630_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad___redArg___boxed(lean_object* v_n_631_, lean_object* v_a_632_, lean_object* v_t_633_){
_start:
{
lean_object* v_res_634_; 
v_res_634_ = l_Lean_PersistentArray_rightpad___redArg(v_n_631_, v_a_632_, v_t_633_);
lean_dec(v_n_631_);
return v_res_634_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad(lean_object* v_00_u03b1_635_, lean_object* v_n_636_, lean_object* v_a_637_, lean_object* v_t_638_){
_start:
{
lean_object* v___x_639_; 
v___x_639_ = l_Lean_PersistentArray_rightpad___redArg(v_n_636_, v_a_637_, v_t_638_);
return v___x_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_rightpad___boxed(lean_object* v_00_u03b1_640_, lean_object* v_n_641_, lean_object* v_a_642_, lean_object* v_t_643_){
_start:
{
lean_object* v_res_644_; 
v_res_644_ = l_Lean_PersistentArray_rightpad(v_00_u03b1_640_, v_n_641_, v_a_642_, v_t_643_);
lean_dec(v_n_641_);
return v_res_644_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg(){
_start:
{
lean_object* v___x_646_; lean_object* v___x_647_; 
v___x_646_ = lean_unsigned_to_nat(32u);
v___x_647_ = lean_mk_empty_array_with_capacity(v___x_646_);
return v___x_647_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg___boxed(lean_object* v___dummy_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg();
return v_res_649_;
}
}
static lean_object* _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0(void){
_start:
{
lean_object* v___x_650_; 
v___x_650_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___redArg();
return v___x_650_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray(lean_object* v_00_u03b1_651_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
return v___x_652_;
}
}
static lean_object* _init_l_Lean_PersistentArray_popLeaf___redArg___closed__0(void){
_start:
{
lean_object* v___x_653_; lean_object* v___x_654_; lean_object* v___x_655_; 
v___x_653_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
v___x_654_ = lean_box(0);
v___x_655_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_655_, 0, v___x_654_);
lean_ctor_set(v___x_655_, 1, v___x_653_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf___redArg(lean_object* v_x_656_){
_start:
{
if (lean_obj_tag(v_x_656_) == 0)
{
lean_object* v_cs_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_707_; 
v_cs_657_ = lean_ctor_get(v_x_656_, 0);
v_isSharedCheck_707_ = !lean_is_exclusive(v_x_656_);
if (v_isSharedCheck_707_ == 0)
{
v___x_659_ = v_x_656_;
v_isShared_660_ = v_isSharedCheck_707_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_cs_657_);
lean_dec(v_x_656_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_707_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v___x_661_; lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_661_ = lean_array_get_size(v_cs_657_);
v___x_662_ = lean_unsigned_to_nat(0u);
v___x_663_ = lean_nat_dec_eq(v___x_661_, v___x_662_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; lean_object* v_idx_665_; lean_object* v_last_666_; lean_object* v___x_667_; lean_object* v_fst_668_; 
v___x_664_ = lean_unsigned_to_nat(1u);
v_idx_665_ = lean_nat_sub(v___x_661_, v___x_664_);
v_last_666_ = lean_array_fget_borrowed(v_cs_657_, v_idx_665_);
lean_inc(v_last_666_);
v___x_667_ = l_Lean_PersistentArray_popLeaf___redArg(v_last_666_);
v_fst_668_ = lean_ctor_get(v___x_667_, 0);
lean_inc(v_fst_668_);
if (lean_obj_tag(v_fst_668_) == 0)
{
lean_object* v___x_670_; uint8_t v_isShared_671_; uint8_t v_isSharedCheck_676_; 
lean_dec(v_idx_665_);
lean_del_object(v___x_659_);
lean_dec_ref(v_cs_657_);
v_isSharedCheck_676_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_676_ == 0)
{
lean_object* v_unused_677_; lean_object* v_unused_678_; 
v_unused_677_ = lean_ctor_get(v___x_667_, 1);
lean_dec(v_unused_677_);
v_unused_678_ = lean_ctor_get(v___x_667_, 0);
lean_dec(v_unused_678_);
v___x_670_ = v___x_667_;
v_isShared_671_ = v_isSharedCheck_676_;
goto v_resetjp_669_;
}
else
{
lean_dec(v___x_667_);
v___x_670_ = lean_box(0);
v_isShared_671_ = v_isSharedCheck_676_;
goto v_resetjp_669_;
}
v_resetjp_669_:
{
lean_object* v___x_672_; lean_object* v___x_674_; 
v___x_672_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
if (v_isShared_671_ == 0)
{
lean_ctor_set(v___x_670_, 1, v___x_672_);
v___x_674_ = v___x_670_;
goto v_reusejp_673_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v_fst_668_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v___x_672_);
v___x_674_ = v_reuseFailAlloc_675_;
goto v_reusejp_673_;
}
v_reusejp_673_:
{
return v___x_674_;
}
}
}
else
{
lean_object* v_snd_679_; lean_object* v___x_681_; uint8_t v_isShared_682_; uint8_t v_isSharedCheck_704_; 
v_snd_679_ = lean_ctor_get(v___x_667_, 1);
v_isSharedCheck_704_ = !lean_is_exclusive(v___x_667_);
if (v_isSharedCheck_704_ == 0)
{
lean_object* v_unused_705_; 
v_unused_705_ = lean_ctor_get(v___x_667_, 0);
lean_dec(v_unused_705_);
v___x_681_ = v___x_667_;
v_isShared_682_ = v_isSharedCheck_704_;
goto v_resetjp_680_;
}
else
{
lean_inc(v_snd_679_);
lean_dec(v___x_667_);
v___x_681_ = lean_box(0);
v_isShared_682_ = v_isSharedCheck_704_;
goto v_resetjp_680_;
}
v_resetjp_680_:
{
lean_object* v___x_683_; lean_object* v_cs_x27_684_; lean_object* v___x_685_; uint8_t v___x_686_; 
v___x_683_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v_cs_x27_684_ = lean_array_fset(v_cs_657_, v_idx_665_, v___x_683_);
v___x_685_ = lean_array_get_size(v_snd_679_);
v___x_686_ = lean_nat_dec_eq(v___x_685_, v___x_662_);
if (v___x_686_ == 0)
{
lean_object* v___x_688_; 
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 0, v_snd_679_);
v___x_688_ = v___x_659_;
goto v_reusejp_687_;
}
else
{
lean_object* v_reuseFailAlloc_693_; 
v_reuseFailAlloc_693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_693_, 0, v_snd_679_);
v___x_688_ = v_reuseFailAlloc_693_;
goto v_reusejp_687_;
}
v_reusejp_687_:
{
lean_object* v___x_689_; lean_object* v___x_691_; 
v___x_689_ = lean_array_fset(v_cs_x27_684_, v_idx_665_, v___x_688_);
lean_dec(v_idx_665_);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v___x_689_);
v___x_691_ = v___x_681_;
goto v_reusejp_690_;
}
else
{
lean_object* v_reuseFailAlloc_692_; 
v_reuseFailAlloc_692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_692_, 0, v_fst_668_);
lean_ctor_set(v_reuseFailAlloc_692_, 1, v___x_689_);
v___x_691_ = v_reuseFailAlloc_692_;
goto v_reusejp_690_;
}
v_reusejp_690_:
{
return v___x_691_;
}
}
}
else
{
lean_object* v_cs_x27_694_; lean_object* v___x_695_; uint8_t v___x_696_; 
lean_dec(v_snd_679_);
lean_dec(v_idx_665_);
lean_del_object(v___x_659_);
v_cs_x27_694_ = lean_array_pop(v_cs_x27_684_);
v___x_695_ = lean_array_get_size(v_cs_x27_694_);
v___x_696_ = lean_nat_dec_eq(v___x_695_, v___x_662_);
if (v___x_696_ == 0)
{
lean_object* v___x_698_; 
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v_cs_x27_694_);
v___x_698_ = v___x_681_;
goto v_reusejp_697_;
}
else
{
lean_object* v_reuseFailAlloc_699_; 
v_reuseFailAlloc_699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_699_, 0, v_fst_668_);
lean_ctor_set(v_reuseFailAlloc_699_, 1, v_cs_x27_694_);
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
lean_object* v___x_700_; lean_object* v___x_702_; 
lean_dec_ref(v_cs_x27_694_);
v___x_700_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
if (v_isShared_682_ == 0)
{
lean_ctor_set(v___x_681_, 1, v___x_700_);
v___x_702_ = v___x_681_;
goto v_reusejp_701_;
}
else
{
lean_object* v_reuseFailAlloc_703_; 
v_reuseFailAlloc_703_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_703_, 0, v_fst_668_);
lean_ctor_set(v_reuseFailAlloc_703_, 1, v___x_700_);
v___x_702_ = v_reuseFailAlloc_703_;
goto v_reusejp_701_;
}
v_reusejp_701_:
{
return v___x_702_;
}
}
}
}
}
}
else
{
lean_object* v___x_706_; 
lean_del_object(v___x_659_);
lean_dec_ref(v_cs_657_);
v___x_706_ = lean_obj_once(&l_Lean_PersistentArray_popLeaf___redArg___closed__0, &l_Lean_PersistentArray_popLeaf___redArg___closed__0_once, _init_l_Lean_PersistentArray_popLeaf___redArg___closed__0);
return v___x_706_;
}
}
}
else
{
lean_object* v_vs_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; 
v_vs_708_ = lean_ctor_get(v_x_656_, 0);
lean_inc_ref(v_vs_708_);
lean_dec_ref_known(v_x_656_, 1);
v___x_709_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_709_, 0, v_vs_708_);
v___x_710_ = lean_obj_once(&l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0, &l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0_once, _init_l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_emptyArray___closed__0);
v___x_711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_711_, 0, v___x_709_);
lean_ctor_set(v___x_711_, 1, v___x_710_);
return v___x_711_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_popLeaf(lean_object* v_00_u03b1_712_, lean_object* v_x_713_){
_start:
{
lean_object* v___x_714_; 
v___x_714_ = l_Lean_PersistentArray_popLeaf___redArg(v_x_713_);
return v___x_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop___redArg(lean_object* v_t_715_){
_start:
{
lean_object* v_root_716_; lean_object* v_tail_717_; lean_object* v_size_718_; size_t v_shift_719_; lean_object* v_tailOff_720_; lean_object* v___x_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v_root_716_ = lean_ctor_get(v_t_715_, 0);
v_tail_717_ = lean_ctor_get(v_t_715_, 1);
v_size_718_ = lean_ctor_get(v_t_715_, 2);
v_shift_719_ = lean_ctor_get_usize(v_t_715_, 4);
v_tailOff_720_ = lean_ctor_get(v_t_715_, 3);
v___x_721_ = lean_unsigned_to_nat(0u);
v___x_722_ = lean_array_get_size(v_tail_717_);
v___x_723_ = lean_nat_dec_lt(v___x_721_, v___x_722_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; lean_object* v_fst_725_; 
lean_inc_ref(v_root_716_);
v___x_724_ = l_Lean_PersistentArray_popLeaf___redArg(v_root_716_);
v_fst_725_ = lean_ctor_get(v___x_724_, 0);
lean_inc(v_fst_725_);
if (lean_obj_tag(v_fst_725_) == 0)
{
lean_dec_ref(v___x_724_);
return v_t_715_;
}
else
{
lean_object* v___x_727_; uint8_t v_isShared_728_; uint8_t v_isSharedCheck_754_; 
lean_inc(v_size_718_);
v_isSharedCheck_754_ = !lean_is_exclusive(v_t_715_);
if (v_isSharedCheck_754_ == 0)
{
lean_object* v_unused_755_; lean_object* v_unused_756_; lean_object* v_unused_757_; lean_object* v_unused_758_; 
v_unused_755_ = lean_ctor_get(v_t_715_, 3);
lean_dec(v_unused_755_);
v_unused_756_ = lean_ctor_get(v_t_715_, 2);
lean_dec(v_unused_756_);
v_unused_757_ = lean_ctor_get(v_t_715_, 1);
lean_dec(v_unused_757_);
v_unused_758_ = lean_ctor_get(v_t_715_, 0);
lean_dec(v_unused_758_);
v___x_727_ = v_t_715_;
v_isShared_728_ = v_isSharedCheck_754_;
goto v_resetjp_726_;
}
else
{
lean_dec(v_t_715_);
v___x_727_ = lean_box(0);
v_isShared_728_ = v_isSharedCheck_754_;
goto v_resetjp_726_;
}
v_resetjp_726_:
{
lean_object* v_snd_729_; lean_object* v_val_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_753_; 
v_snd_729_ = lean_ctor_get(v___x_724_, 1);
lean_inc(v_snd_729_);
lean_dec_ref(v___x_724_);
v_val_730_ = lean_ctor_get(v_fst_725_, 0);
v_isSharedCheck_753_ = !lean_is_exclusive(v_fst_725_);
if (v_isSharedCheck_753_ == 0)
{
v___x_732_ = v_fst_725_;
v_isShared_733_ = v_isSharedCheck_753_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_val_730_);
lean_dec(v_fst_725_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_753_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v_last_734_; lean_object* v___x_735_; lean_object* v_newSize_736_; lean_object* v___x_737_; lean_object* v_newTailOff_738_; lean_object* v___x_746_; uint8_t v___x_747_; 
v_last_734_ = lean_array_pop(v_val_730_);
v___x_735_ = lean_unsigned_to_nat(1u);
v_newSize_736_ = lean_nat_sub(v_size_718_, v___x_735_);
lean_dec(v_size_718_);
v___x_737_ = lean_array_get_size(v_last_734_);
v_newTailOff_738_ = lean_nat_sub(v_newSize_736_, v___x_737_);
v___x_746_ = lean_array_get_size(v_snd_729_);
v___x_747_ = lean_nat_dec_eq(v___x_746_, v___x_735_);
if (v___x_747_ == 0)
{
goto v___jp_739_;
}
else
{
lean_object* v___x_748_; uint8_t v___x_749_; 
v___x_748_ = lean_array_fget_borrowed(v_snd_729_, v___x_721_);
v___x_749_ = l_Lean_PersistentArrayNode_isNode___redArg(v___x_748_);
if (v___x_749_ == 0)
{
goto v___jp_739_;
}
else
{
size_t v___x_750_; size_t v___x_751_; lean_object* v___x_752_; 
lean_inc(v___x_748_);
lean_del_object(v___x_732_);
lean_dec(v_snd_729_);
lean_del_object(v___x_727_);
v___x_750_ = ((size_t)5ULL);
v___x_751_ = lean_usize_sub(v_shift_719_, v___x_750_);
v___x_752_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_752_, 0, v___x_748_);
lean_ctor_set(v___x_752_, 1, v_last_734_);
lean_ctor_set(v___x_752_, 2, v_newSize_736_);
lean_ctor_set(v___x_752_, 3, v_newTailOff_738_);
lean_ctor_set_usize(v___x_752_, 4, v___x_751_);
return v___x_752_;
}
}
v___jp_739_:
{
lean_object* v___x_741_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set_tag(v___x_732_, 0);
lean_ctor_set(v___x_732_, 0, v_snd_729_);
v___x_741_ = v___x_732_;
goto v_reusejp_740_;
}
else
{
lean_object* v_reuseFailAlloc_745_; 
v_reuseFailAlloc_745_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_745_, 0, v_snd_729_);
v___x_741_ = v_reuseFailAlloc_745_;
goto v_reusejp_740_;
}
v_reusejp_740_:
{
lean_object* v___x_743_; 
if (v_isShared_728_ == 0)
{
lean_ctor_set(v___x_727_, 3, v_newTailOff_738_);
lean_ctor_set(v___x_727_, 2, v_newSize_736_);
lean_ctor_set(v___x_727_, 1, v_last_734_);
lean_ctor_set(v___x_727_, 0, v___x_741_);
v___x_743_ = v___x_727_;
goto v_reusejp_742_;
}
else
{
lean_object* v_reuseFailAlloc_744_; 
v_reuseFailAlloc_744_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_744_, 0, v___x_741_);
lean_ctor_set(v_reuseFailAlloc_744_, 1, v_last_734_);
lean_ctor_set(v_reuseFailAlloc_744_, 2, v_newSize_736_);
lean_ctor_set(v_reuseFailAlloc_744_, 3, v_newTailOff_738_);
lean_ctor_set_usize(v_reuseFailAlloc_744_, 4, v_shift_719_);
v___x_743_ = v_reuseFailAlloc_744_;
goto v_reusejp_742_;
}
v_reusejp_742_:
{
return v___x_743_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_768_; 
lean_inc(v_tailOff_720_);
lean_inc(v_size_718_);
lean_inc_ref(v_tail_717_);
lean_inc_ref(v_root_716_);
v_isSharedCheck_768_ = !lean_is_exclusive(v_t_715_);
if (v_isSharedCheck_768_ == 0)
{
lean_object* v_unused_769_; lean_object* v_unused_770_; lean_object* v_unused_771_; lean_object* v_unused_772_; 
v_unused_769_ = lean_ctor_get(v_t_715_, 3);
lean_dec(v_unused_769_);
v_unused_770_ = lean_ctor_get(v_t_715_, 2);
lean_dec(v_unused_770_);
v_unused_771_ = lean_ctor_get(v_t_715_, 1);
lean_dec(v_unused_771_);
v_unused_772_ = lean_ctor_get(v_t_715_, 0);
lean_dec(v_unused_772_);
v___x_760_ = v_t_715_;
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
else
{
lean_dec(v_t_715_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_768_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_766_; 
v___x_762_ = lean_array_pop(v_tail_717_);
v___x_763_ = lean_unsigned_to_nat(1u);
v___x_764_ = lean_nat_sub(v_size_718_, v___x_763_);
lean_dec(v_size_718_);
if (v_isShared_761_ == 0)
{
lean_ctor_set(v___x_760_, 2, v___x_764_);
lean_ctor_set(v___x_760_, 1, v___x_762_);
v___x_766_ = v___x_760_;
goto v_reusejp_765_;
}
else
{
lean_object* v_reuseFailAlloc_767_; 
v_reuseFailAlloc_767_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v_reuseFailAlloc_767_, 0, v_root_716_);
lean_ctor_set(v_reuseFailAlloc_767_, 1, v___x_762_);
lean_ctor_set(v_reuseFailAlloc_767_, 2, v___x_764_);
lean_ctor_set(v_reuseFailAlloc_767_, 3, v_tailOff_720_);
lean_ctor_set_usize(v_reuseFailAlloc_767_, 4, v_shift_719_);
v___x_766_ = v_reuseFailAlloc_767_;
goto v_reusejp_765_;
}
v_reusejp_765_:
{
return v___x_766_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_pop(lean_object* v_00_u03b1_773_, lean_object* v_t_774_){
_start:
{
lean_object* v___x_775_; 
v___x_775_ = l_Lean_PersistentArray_pop___redArg(v_t_774_);
return v___x_775_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(lean_object* v_inst_776_, lean_object* v_f_777_, lean_object* v_x_778_, lean_object* v_x_779_){
_start:
{
if (lean_obj_tag(v_x_778_) == 0)
{
lean_object* v_toApplicative_780_; lean_object* v_cs_781_; lean_object* v_toPure_782_; lean_object* v___x_783_; lean_object* v___x_784_; uint8_t v___x_785_; 
v_toApplicative_780_ = lean_ctor_get(v_inst_776_, 0);
v_cs_781_ = lean_ctor_get(v_x_778_, 0);
lean_inc_ref(v_cs_781_);
lean_dec_ref_known(v_x_778_, 1);
v_toPure_782_ = lean_ctor_get(v_toApplicative_780_, 1);
v___x_783_ = lean_unsigned_to_nat(0u);
v___x_784_ = lean_array_get_size(v_cs_781_);
v___x_785_ = lean_nat_dec_lt(v___x_783_, v___x_784_);
if (v___x_785_ == 0)
{
lean_object* v___x_786_; 
lean_inc(v_toPure_782_);
lean_dec_ref(v_cs_781_);
lean_dec(v_f_777_);
lean_dec_ref(v_inst_776_);
v___x_786_ = lean_apply_2(v_toPure_782_, lean_box(0), v_x_779_);
return v___x_786_;
}
else
{
lean_object* v___f_787_; size_t v___x_788_; size_t v___x_789_; lean_object* v___x_790_; 
lean_inc_ref(v_inst_776_);
v___f_787_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_787_, 0, v_inst_776_);
lean_closure_set(v___f_787_, 1, v_f_777_);
v___x_788_ = ((size_t)0ULL);
v___x_789_ = lean_usize_of_nat(v___x_784_);
v___x_790_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_776_, v___f_787_, v_cs_781_, v___x_788_, v___x_789_, v_x_779_);
return v___x_790_;
}
}
else
{
lean_object* v_toApplicative_791_; lean_object* v_vs_792_; lean_object* v_toPure_793_; lean_object* v___x_794_; lean_object* v___x_795_; uint8_t v___x_796_; 
v_toApplicative_791_ = lean_ctor_get(v_inst_776_, 0);
v_vs_792_ = lean_ctor_get(v_x_778_, 0);
lean_inc_ref(v_vs_792_);
lean_dec_ref_known(v_x_778_, 1);
v_toPure_793_ = lean_ctor_get(v_toApplicative_791_, 1);
v___x_794_ = lean_unsigned_to_nat(0u);
v___x_795_ = lean_array_get_size(v_vs_792_);
v___x_796_ = lean_nat_dec_lt(v___x_794_, v___x_795_);
if (v___x_796_ == 0)
{
lean_object* v___x_797_; 
lean_inc(v_toPure_793_);
lean_dec_ref(v_vs_792_);
lean_dec(v_f_777_);
lean_dec_ref(v_inst_776_);
v___x_797_ = lean_apply_2(v_toPure_793_, lean_box(0), v_x_779_);
return v___x_797_;
}
else
{
size_t v___x_798_; size_t v___x_799_; lean_object* v___x_800_; 
v___x_798_ = ((size_t)0ULL);
v___x_799_ = lean_usize_of_nat(v___x_795_);
v___x_800_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_776_, v_f_777_, v_vs_792_, v___x_798_, v___x_799_, v_x_779_);
return v___x_800_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0(lean_object* v_inst_801_, lean_object* v_f_802_, lean_object* v_b_803_, lean_object* v_c_804_){
_start:
{
lean_object* v___x_805_; 
v___x_805_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(v_inst_801_, v_f_802_, v_c_804_, v_b_803_);
return v___x_805_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux(lean_object* v_00_u03b1_806_, lean_object* v_m_807_, lean_object* v_inst_808_, lean_object* v_00_u03b2_809_, lean_object* v_f_810_, lean_object* v_x_811_, lean_object* v_x_812_){
_start:
{
lean_object* v___x_813_; 
v___x_813_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(v_inst_808_, v_f_810_, v_x_811_, v_x_812_);
return v___x_813_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1(lean_object* v_toApplicative_814_, lean_object* v_j_815_, lean_object* v_cs_816_, lean_object* v_inst_817_, lean_object* v___f_818_, lean_object* v_b_819_){
_start:
{
lean_object* v_toPure_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; uint8_t v___x_824_; 
v_toPure_820_ = lean_ctor_get(v_toApplicative_814_, 1);
lean_inc(v_toPure_820_);
lean_dec_ref(v_toApplicative_814_);
v___x_821_ = lean_unsigned_to_nat(1u);
v___x_822_ = lean_nat_add(v_j_815_, v___x_821_);
v___x_823_ = lean_array_get_size(v_cs_816_);
v___x_824_ = lean_nat_dec_lt(v___x_822_, v___x_823_);
if (v___x_824_ == 0)
{
lean_object* v___x_825_; 
lean_dec(v___x_822_);
lean_dec(v___f_818_);
lean_dec_ref(v_inst_817_);
lean_dec_ref(v_cs_816_);
v___x_825_ = lean_apply_2(v_toPure_820_, lean_box(0), v_b_819_);
return v___x_825_;
}
else
{
size_t v___x_826_; size_t v___x_827_; lean_object* v___x_828_; 
lean_dec(v_toPure_820_);
v___x_826_ = lean_usize_of_nat(v___x_822_);
lean_dec(v___x_822_);
v___x_827_ = lean_usize_of_nat(v___x_823_);
v___x_828_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_817_, v___f_818_, v_cs_816_, v___x_826_, v___x_827_, v_b_819_);
return v___x_828_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1___boxed(lean_object* v_toApplicative_829_, lean_object* v_j_830_, lean_object* v_cs_831_, lean_object* v_inst_832_, lean_object* v___f_833_, lean_object* v_b_834_){
_start:
{
lean_object* v_res_835_; 
v_res_835_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1(v_toApplicative_829_, v_j_830_, v_cs_831_, v_inst_832_, v___f_833_, v_b_834_);
lean_dec(v_j_830_);
return v_res_835_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(lean_object* v_inst_836_, lean_object* v_f_837_, lean_object* v_x_838_, size_t v_x_839_, size_t v_x_840_, lean_object* v_x_841_){
_start:
{
if (lean_obj_tag(v_x_838_) == 0)
{
lean_object* v_toApplicative_842_; lean_object* v_toBind_843_; lean_object* v_cs_844_; lean_object* v___f_845_; lean_object* v___x_846_; size_t v___x_847_; lean_object* v_j_848_; lean_object* v___f_849_; lean_object* v___x_850_; size_t v___x_851_; size_t v___x_852_; size_t v___x_853_; size_t v___x_854_; size_t v___x_855_; size_t v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v_toApplicative_842_ = lean_ctor_get(v_inst_836_, 0);
v_toBind_843_ = lean_ctor_get(v_inst_836_, 1);
lean_inc(v_toBind_843_);
v_cs_844_ = lean_ctor_get(v_x_838_, 0);
lean_inc_ref_n(v_cs_844_, 2);
lean_dec_ref_known(v_x_838_, 1);
lean_inc(v_f_837_);
lean_inc_ref_n(v_inst_836_, 2);
v___f_845_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_845_, 0, v_inst_836_);
lean_closure_set(v___f_845_, 1, v_f_837_);
v___x_846_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_847_ = lean_usize_shift_right(v_x_839_, v_x_840_);
v_j_848_ = lean_usize_to_nat(v___x_847_);
lean_inc(v_j_848_);
lean_inc_ref(v_toApplicative_842_);
v___f_849_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_849_, 0, v_toApplicative_842_);
lean_closure_set(v___f_849_, 1, v_j_848_);
lean_closure_set(v___f_849_, 2, v_cs_844_);
lean_closure_set(v___f_849_, 3, v_inst_836_);
lean_closure_set(v___f_849_, 4, v___f_845_);
v___x_850_ = lean_array_get(v___x_846_, v_cs_844_, v_j_848_);
lean_dec(v_j_848_);
lean_dec_ref(v_cs_844_);
v___x_851_ = ((size_t)1ULL);
v___x_852_ = lean_usize_shift_left(v___x_851_, v_x_840_);
v___x_853_ = lean_usize_sub(v___x_852_, v___x_851_);
v___x_854_ = lean_usize_land(v_x_839_, v___x_853_);
v___x_855_ = ((size_t)5ULL);
v___x_856_ = lean_usize_sub(v_x_840_, v___x_855_);
v___x_857_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_836_, v_f_837_, v___x_850_, v___x_854_, v___x_856_, v_x_841_);
v___x_858_ = lean_apply_4(v_toBind_843_, lean_box(0), lean_box(0), v___x_857_, v___f_849_);
return v___x_858_;
}
else
{
lean_object* v_toApplicative_859_; lean_object* v_vs_860_; lean_object* v_toPure_861_; lean_object* v___x_862_; lean_object* v___x_863_; uint8_t v___x_864_; 
v_toApplicative_859_ = lean_ctor_get(v_inst_836_, 0);
v_vs_860_ = lean_ctor_get(v_x_838_, 0);
lean_inc_ref(v_vs_860_);
lean_dec_ref_known(v_x_838_, 1);
v_toPure_861_ = lean_ctor_get(v_toApplicative_859_, 1);
v___x_862_ = lean_usize_to_nat(v_x_839_);
v___x_863_ = lean_array_get_size(v_vs_860_);
v___x_864_ = lean_nat_dec_lt(v___x_862_, v___x_863_);
if (v___x_864_ == 0)
{
lean_object* v___x_865_; 
lean_inc(v_toPure_861_);
lean_dec(v___x_862_);
lean_dec_ref(v_vs_860_);
lean_dec(v_f_837_);
lean_dec_ref(v_inst_836_);
v___x_865_ = lean_apply_2(v_toPure_861_, lean_box(0), v_x_841_);
return v___x_865_;
}
else
{
size_t v___x_866_; size_t v___x_867_; lean_object* v___x_868_; 
v___x_866_ = lean_usize_of_nat(v___x_862_);
lean_dec(v___x_862_);
v___x_867_ = lean_usize_of_nat(v___x_863_);
v___x_868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_836_, v_f_837_, v_vs_860_, v___x_866_, v___x_867_, v_x_841_);
return v___x_868_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg___boxed(lean_object* v_inst_869_, lean_object* v_f_870_, lean_object* v_x_871_, lean_object* v_x_872_, lean_object* v_x_873_, lean_object* v_x_874_){
_start:
{
size_t v_x_192__boxed_875_; size_t v_x_193__boxed_876_; lean_object* v_res_877_; 
v_x_192__boxed_875_ = lean_unbox_usize(v_x_872_);
lean_dec(v_x_872_);
v_x_193__boxed_876_ = lean_unbox_usize(v_x_873_);
lean_dec(v_x_873_);
v_res_877_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_869_, v_f_870_, v_x_871_, v_x_192__boxed_875_, v_x_193__boxed_876_, v_x_874_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux(lean_object* v_00_u03b1_878_, lean_object* v_m_879_, lean_object* v_inst_880_, lean_object* v_00_u03b2_881_, lean_object* v_f_882_, lean_object* v_x_883_, size_t v_x_884_, size_t v_x_885_, lean_object* v_x_886_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_880_, v_f_882_, v_x_883_, v_x_884_, v_x_885_, v_x_886_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___boxed(lean_object* v_00_u03b1_888_, lean_object* v_m_889_, lean_object* v_inst_890_, lean_object* v_00_u03b2_891_, lean_object* v_f_892_, lean_object* v_x_893_, lean_object* v_x_894_, lean_object* v_x_895_, lean_object* v_x_896_){
_start:
{
size_t v_x_251__boxed_897_; size_t v_x_252__boxed_898_; lean_object* v_res_899_; 
v_x_251__boxed_897_ = lean_unbox_usize(v_x_894_);
lean_dec(v_x_894_);
v_x_252__boxed_898_ = lean_unbox_usize(v_x_895_);
lean_dec(v_x_895_);
v_res_899_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux(v_00_u03b1_888_, v_m_889_, v_inst_890_, v_00_u03b2_891_, v_f_892_, v_x_893_, v_x_251__boxed_897_, v_x_252__boxed_898_, v_x_896_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___lam__0(lean_object* v_toApplicative_900_, lean_object* v_tail_901_, lean_object* v_inst_902_, lean_object* v_f_903_, lean_object* v_b_904_){
_start:
{
lean_object* v_toPure_905_; lean_object* v___x_906_; lean_object* v___x_907_; uint8_t v___x_908_; 
v_toPure_905_ = lean_ctor_get(v_toApplicative_900_, 1);
lean_inc(v_toPure_905_);
lean_dec_ref(v_toApplicative_900_);
v___x_906_ = lean_unsigned_to_nat(0u);
v___x_907_ = lean_array_get_size(v_tail_901_);
v___x_908_ = lean_nat_dec_lt(v___x_906_, v___x_907_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; 
lean_dec(v_f_903_);
lean_dec_ref(v_inst_902_);
lean_dec_ref(v_tail_901_);
v___x_909_ = lean_apply_2(v_toPure_905_, lean_box(0), v_b_904_);
return v___x_909_;
}
else
{
size_t v___x_910_; size_t v___x_911_; lean_object* v___x_912_; 
lean_dec(v_toPure_905_);
v___x_910_ = ((size_t)0ULL);
v___x_911_ = lean_usize_of_nat(v___x_907_);
v___x_912_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_902_, v_f_903_, v_tail_901_, v___x_910_, v___x_911_, v_b_904_);
return v___x_912_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg(lean_object* v_inst_913_, lean_object* v_t_914_, lean_object* v_f_915_, lean_object* v_init_916_, lean_object* v_start_917_){
_start:
{
lean_object* v_toApplicative_918_; lean_object* v_toBind_919_; lean_object* v___x_920_; uint8_t v___x_921_; 
v_toApplicative_918_ = lean_ctor_get(v_inst_913_, 0);
v_toBind_919_ = lean_ctor_get(v_inst_913_, 1);
v___x_920_ = lean_unsigned_to_nat(0u);
v___x_921_ = lean_nat_dec_eq(v_start_917_, v___x_920_);
if (v___x_921_ == 0)
{
lean_object* v_root_922_; lean_object* v_tail_923_; size_t v_shift_924_; lean_object* v_tailOff_925_; uint8_t v___x_926_; 
v_root_922_ = lean_ctor_get(v_t_914_, 0);
lean_inc_ref(v_root_922_);
v_tail_923_ = lean_ctor_get(v_t_914_, 1);
lean_inc_ref(v_tail_923_);
v_shift_924_ = lean_ctor_get_usize(v_t_914_, 4);
v_tailOff_925_ = lean_ctor_get(v_t_914_, 3);
lean_inc(v_tailOff_925_);
lean_dec_ref(v_t_914_);
v___x_926_ = lean_nat_dec_le(v_tailOff_925_, v_start_917_);
if (v___x_926_ == 0)
{
lean_object* v___f_927_; size_t v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; 
lean_inc(v_toBind_919_);
lean_dec(v_tailOff_925_);
lean_inc(v_f_915_);
lean_inc_ref(v_inst_913_);
lean_inc_ref(v_toApplicative_918_);
v___f_927_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldlM___redArg___lam__0), 5, 4);
lean_closure_set(v___f_927_, 0, v_toApplicative_918_);
lean_closure_set(v___f_927_, 1, v_tail_923_);
lean_closure_set(v___f_927_, 2, v_inst_913_);
lean_closure_set(v___f_927_, 3, v_f_915_);
v___x_928_ = lean_usize_of_nat(v_start_917_);
v___x_929_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___redArg(v_inst_913_, v_f_915_, v_root_922_, v___x_928_, v_shift_924_, v_init_916_);
v___x_930_ = lean_apply_4(v_toBind_919_, lean_box(0), lean_box(0), v___x_929_, v___f_927_);
return v___x_930_;
}
else
{
lean_object* v_toPure_931_; lean_object* v___x_932_; lean_object* v___x_933_; uint8_t v___x_934_; 
lean_dec_ref(v_root_922_);
v_toPure_931_ = lean_ctor_get(v_toApplicative_918_, 1);
v___x_932_ = lean_nat_sub(v_start_917_, v_tailOff_925_);
lean_dec(v_tailOff_925_);
v___x_933_ = lean_array_get_size(v_tail_923_);
v___x_934_ = lean_nat_dec_lt(v___x_932_, v___x_933_);
if (v___x_934_ == 0)
{
lean_object* v___x_935_; 
lean_inc(v_toPure_931_);
lean_dec(v___x_932_);
lean_dec_ref(v_tail_923_);
lean_dec(v_f_915_);
lean_dec_ref(v_inst_913_);
v___x_935_ = lean_apply_2(v_toPure_931_, lean_box(0), v_init_916_);
return v___x_935_;
}
else
{
size_t v___x_936_; size_t v___x_937_; lean_object* v___x_938_; 
v___x_936_ = lean_usize_of_nat(v___x_932_);
lean_dec(v___x_932_);
v___x_937_ = lean_usize_of_nat(v___x_933_);
v___x_938_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_913_, v_f_915_, v_tail_923_, v___x_936_, v___x_937_, v_init_916_);
return v___x_938_;
}
}
}
else
{
lean_object* v_root_939_; lean_object* v_tail_940_; lean_object* v___f_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
lean_inc(v_toBind_919_);
v_root_939_ = lean_ctor_get(v_t_914_, 0);
lean_inc_ref(v_root_939_);
v_tail_940_ = lean_ctor_get(v_t_914_, 1);
lean_inc_ref(v_tail_940_);
lean_dec_ref(v_t_914_);
lean_inc(v_f_915_);
lean_inc_ref(v_inst_913_);
lean_inc_ref(v_toApplicative_918_);
v___f_941_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldlM___redArg___lam__0), 5, 4);
lean_closure_set(v___f_941_, 0, v_toApplicative_918_);
lean_closure_set(v___f_941_, 1, v_tail_940_);
lean_closure_set(v___f_941_, 2, v_inst_913_);
lean_closure_set(v___f_941_, 3, v_f_915_);
v___x_942_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___redArg(v_inst_913_, v_f_915_, v_root_939_, v_init_916_);
v___x_943_ = lean_apply_4(v_toBind_919_, lean_box(0), lean_box(0), v___x_942_, v___f_941_);
return v___x_943_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___redArg___boxed(lean_object* v_inst_944_, lean_object* v_t_945_, lean_object* v_f_946_, lean_object* v_init_947_, lean_object* v_start_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = l_Lean_PersistentArray_foldlM___redArg(v_inst_944_, v_t_945_, v_f_946_, v_init_947_, v_start_948_);
lean_dec(v_start_948_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM(lean_object* v_00_u03b1_950_, lean_object* v_m_951_, lean_object* v_inst_952_, lean_object* v_00_u03b2_953_, lean_object* v_t_954_, lean_object* v_f_955_, lean_object* v_init_956_, lean_object* v_start_957_){
_start:
{
lean_object* v___x_958_; 
v___x_958_ = l_Lean_PersistentArray_foldlM___redArg(v_inst_952_, v_t_954_, v_f_955_, v_init_956_, v_start_957_);
return v___x_958_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___boxed(lean_object* v_00_u03b1_959_, lean_object* v_m_960_, lean_object* v_inst_961_, lean_object* v_00_u03b2_962_, lean_object* v_t_963_, lean_object* v_f_964_, lean_object* v_init_965_, lean_object* v_start_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = l_Lean_PersistentArray_foldlM(v_00_u03b1_959_, v_m_960_, v_inst_961_, v_00_u03b2_962_, v_t_963_, v_f_964_, v_init_965_, v_start_966_);
lean_dec(v_start_966_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(lean_object* v_inst_968_, lean_object* v_f_969_, lean_object* v_x_970_, lean_object* v_x_971_){
_start:
{
if (lean_obj_tag(v_x_970_) == 0)
{
lean_object* v_toApplicative_972_; lean_object* v_cs_973_; lean_object* v_toPure_974_; lean_object* v___x_975_; lean_object* v___x_976_; uint8_t v___x_977_; 
v_toApplicative_972_ = lean_ctor_get(v_inst_968_, 0);
v_cs_973_ = lean_ctor_get(v_x_970_, 0);
lean_inc_ref(v_cs_973_);
lean_dec_ref_known(v_x_970_, 1);
v_toPure_974_ = lean_ctor_get(v_toApplicative_972_, 1);
v___x_975_ = lean_array_get_size(v_cs_973_);
v___x_976_ = lean_unsigned_to_nat(0u);
v___x_977_ = lean_nat_dec_lt(v___x_976_, v___x_975_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; 
lean_inc(v_toPure_974_);
lean_dec_ref(v_cs_973_);
lean_dec(v_f_969_);
lean_dec_ref(v_inst_968_);
v___x_978_ = lean_apply_2(v_toPure_974_, lean_box(0), v_x_971_);
return v___x_978_;
}
else
{
lean_object* v___f_979_; size_t v___x_980_; size_t v___x_981_; lean_object* v___x_982_; 
lean_inc_ref(v_inst_968_);
v___f_979_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_979_, 0, v_inst_968_);
lean_closure_set(v___f_979_, 1, v_f_969_);
v___x_980_ = lean_usize_of_nat(v___x_975_);
v___x_981_ = ((size_t)0ULL);
v___x_982_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_968_, v___f_979_, v_cs_973_, v___x_980_, v___x_981_, v_x_971_);
return v___x_982_;
}
}
else
{
lean_object* v_toApplicative_983_; lean_object* v_vs_984_; lean_object* v_toPure_985_; lean_object* v___x_986_; lean_object* v___x_987_; uint8_t v___x_988_; 
v_toApplicative_983_ = lean_ctor_get(v_inst_968_, 0);
v_vs_984_ = lean_ctor_get(v_x_970_, 0);
lean_inc_ref(v_vs_984_);
lean_dec_ref_known(v_x_970_, 1);
v_toPure_985_ = lean_ctor_get(v_toApplicative_983_, 1);
v___x_986_ = lean_array_get_size(v_vs_984_);
v___x_987_ = lean_unsigned_to_nat(0u);
v___x_988_ = lean_nat_dec_lt(v___x_987_, v___x_986_);
if (v___x_988_ == 0)
{
lean_object* v___x_989_; 
lean_inc(v_toPure_985_);
lean_dec_ref(v_vs_984_);
lean_dec(v_f_969_);
lean_dec_ref(v_inst_968_);
v___x_989_ = lean_apply_2(v_toPure_985_, lean_box(0), v_x_971_);
return v___x_989_;
}
else
{
size_t v___x_990_; size_t v___x_991_; lean_object* v___x_992_; 
v___x_990_ = lean_usize_of_nat(v___x_986_);
v___x_991_ = ((size_t)0ULL);
v___x_992_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_968_, v_f_969_, v_vs_984_, v___x_990_, v___x_991_, v_x_971_);
return v___x_992_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg___lam__0(lean_object* v_inst_993_, lean_object* v_f_994_, lean_object* v_c_995_, lean_object* v_b_996_){
_start:
{
lean_object* v___x_997_; 
v___x_997_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(v_inst_993_, v_f_994_, v_c_995_, v_b_996_);
return v___x_997_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux(lean_object* v_00_u03b1_998_, lean_object* v_m_999_, lean_object* v_00_u03b2_1000_, lean_object* v_inst_1001_, lean_object* v_f_1002_, lean_object* v_x_1003_, lean_object* v_x_1004_){
_start:
{
lean_object* v___x_1005_; 
v___x_1005_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(v_inst_1001_, v_f_1002_, v_x_1003_, v_x_1004_);
return v___x_1005_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg___lam__0(lean_object* v_inst_1006_, lean_object* v_f_1007_, lean_object* v_root_1008_, lean_object* v_____do__lift_1009_){
_start:
{
lean_object* v___x_1010_; 
v___x_1010_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldrMAux___redArg(v_inst_1006_, v_f_1007_, v_root_1008_, v_____do__lift_1009_);
return v___x_1010_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM___redArg(lean_object* v_inst_1011_, lean_object* v_t_1012_, lean_object* v_f_1013_, lean_object* v_init_1014_){
_start:
{
lean_object* v_toApplicative_1015_; lean_object* v_toBind_1016_; lean_object* v_root_1017_; lean_object* v_tail_1018_; lean_object* v_toPure_1019_; lean_object* v___f_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; uint8_t v___x_1023_; 
v_toApplicative_1015_ = lean_ctor_get(v_inst_1011_, 0);
v_toBind_1016_ = lean_ctor_get(v_inst_1011_, 1);
lean_inc(v_toBind_1016_);
v_root_1017_ = lean_ctor_get(v_t_1012_, 0);
lean_inc_ref(v_root_1017_);
v_tail_1018_ = lean_ctor_get(v_t_1012_, 1);
lean_inc_ref(v_tail_1018_);
lean_dec_ref(v_t_1012_);
v_toPure_1019_ = lean_ctor_get(v_toApplicative_1015_, 1);
lean_inc(v_f_1013_);
lean_inc_ref(v_inst_1011_);
v___f_1020_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldrM___redArg___lam__0), 4, 3);
lean_closure_set(v___f_1020_, 0, v_inst_1011_);
lean_closure_set(v___f_1020_, 1, v_f_1013_);
lean_closure_set(v___f_1020_, 2, v_root_1017_);
v___x_1021_ = lean_array_get_size(v_tail_1018_);
v___x_1022_ = lean_unsigned_to_nat(0u);
v___x_1023_ = lean_nat_dec_lt(v___x_1022_, v___x_1021_);
if (v___x_1023_ == 0)
{
lean_object* v___x_1024_; lean_object* v___x_1025_; 
lean_inc(v_toPure_1019_);
lean_dec_ref(v_tail_1018_);
lean_dec(v_f_1013_);
lean_dec_ref(v_inst_1011_);
v___x_1024_ = lean_apply_2(v_toPure_1019_, lean_box(0), v_init_1014_);
v___x_1025_ = lean_apply_4(v_toBind_1016_, lean_box(0), lean_box(0), v___x_1024_, v___f_1020_);
return v___x_1025_;
}
else
{
size_t v___x_1026_; size_t v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; 
v___x_1026_ = lean_usize_of_nat(v___x_1021_);
v___x_1027_ = ((size_t)0ULL);
v___x_1028_ = l___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1011_, v_f_1013_, v_tail_1018_, v___x_1026_, v___x_1027_, v_init_1014_);
v___x_1029_ = lean_apply_4(v_toBind_1016_, lean_box(0), lean_box(0), v___x_1028_, v___f_1020_);
return v___x_1029_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldrM(lean_object* v_00_u03b1_1030_, lean_object* v_m_1031_, lean_object* v_00_u03b2_1032_, lean_object* v_inst_1033_, lean_object* v_t_1034_, lean_object* v_f_1035_, lean_object* v_init_1036_){
_start:
{
lean_object* v___x_1037_; 
v___x_1037_ = l_Lean_PersistentArray_foldrM___redArg(v_inst_1033_, v_t_1034_, v_f_1035_, v_init_1036_);
return v___x_1037_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__0(lean_object* v_toPure_1038_, lean_object* v_____s_1039_){
_start:
{
lean_object* v_fst_1040_; 
v_fst_1040_ = lean_ctor_get(v_____s_1039_, 0);
if (lean_obj_tag(v_fst_1040_) == 0)
{
lean_object* v_snd_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; 
v_snd_1041_ = lean_ctor_get(v_____s_1039_, 1);
lean_inc(v_snd_1041_);
lean_dec_ref(v_____s_1039_);
v___x_1042_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1042_, 0, v_snd_1041_);
v___x_1043_ = lean_apply_2(v_toPure_1038_, lean_box(0), v___x_1042_);
return v___x_1043_;
}
else
{
lean_object* v_val_1044_; lean_object* v___x_1045_; 
lean_inc_ref(v_fst_1040_);
lean_dec_ref(v_____s_1039_);
v_val_1044_ = lean_ctor_get(v_fst_1040_, 0);
lean_inc(v_val_1044_);
lean_dec_ref_known(v_fst_1040_, 1);
v___x_1045_ = lean_apply_2(v_toPure_1038_, lean_box(0), v_val_1044_);
return v___x_1045_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__1(lean_object* v_snd_1046_, lean_object* v_toPure_1047_, lean_object* v___x_1048_, lean_object* v_____do__lift_1049_){
_start:
{
if (lean_obj_tag(v_____do__lift_1049_) == 0)
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; 
lean_dec(v___x_1048_);
v___x_1050_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1050_, 0, v_____do__lift_1049_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1050_);
lean_ctor_set(v___x_1051_, 1, v_snd_1046_);
v___x_1052_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
v___x_1053_ = lean_apply_2(v_toPure_1047_, lean_box(0), v___x_1052_);
return v___x_1053_;
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1063_; 
lean_dec(v_snd_1046_);
v_a_1054_ = lean_ctor_get(v_____do__lift_1049_, 0);
v_isSharedCheck_1063_ = !lean_is_exclusive(v_____do__lift_1049_);
if (v_isSharedCheck_1063_ == 0)
{
v___x_1056_ = v_____do__lift_1049_;
v_isShared_1057_ = v_isSharedCheck_1063_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v_____do__lift_1049_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1063_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1058_; lean_object* v___x_1060_; 
v___x_1058_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1048_);
lean_ctor_set(v___x_1058_, 1, v_a_1054_);
if (v_isShared_1057_ == 0)
{
lean_ctor_set(v___x_1056_, 0, v___x_1058_);
v___x_1060_ = v___x_1056_;
goto v_reusejp_1059_;
}
else
{
lean_object* v_reuseFailAlloc_1062_; 
v_reuseFailAlloc_1062_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1062_, 0, v___x_1058_);
v___x_1060_ = v_reuseFailAlloc_1062_;
goto v_reusejp_1059_;
}
v_reusejp_1059_:
{
lean_object* v___x_1061_; 
v___x_1061_ = lean_apply_2(v_toPure_1047_, lean_box(0), v___x_1060_);
return v___x_1061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__5(lean_object* v_toPure_1064_, lean_object* v___x_1065_, lean_object* v_f_1066_, lean_object* v_toBind_1067_, lean_object* v_a_1068_, lean_object* v_x_1069_, lean_object* v___y_1070_){
_start:
{
lean_object* v_snd_1071_; lean_object* v___f_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; 
v_snd_1071_ = lean_ctor_get(v___y_1070_, 1);
lean_inc_n(v_snd_1071_, 2);
lean_dec_ref(v___y_1070_);
v___f_1072_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1072_, 0, v_snd_1071_);
lean_closure_set(v___f_1072_, 1, v_toPure_1064_);
lean_closure_set(v___f_1072_, 2, v___x_1065_);
v___x_1073_ = lean_apply_2(v_f_1066_, v_a_1068_, v_snd_1071_);
v___x_1074_ = lean_apply_4(v_toBind_1067_, lean_box(0), lean_box(0), v___x_1073_, v___f_1072_);
return v___x_1074_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2___boxed(lean_object* v_toPure_1075_, lean_object* v___x_1076_, lean_object* v_inst_1077_, lean_object* v_f_1078_, lean_object* v_toBind_1079_, lean_object* v_a_1080_, lean_object* v_x_1081_, lean_object* v___y_1082_){
_start:
{
lean_object* v_res_1083_; 
v_res_1083_ = l_Lean_PersistentArray_forInAux___redArg___lam__2(v_toPure_1075_, v___x_1076_, v_inst_1077_, v_f_1078_, v_toBind_1079_, v_a_1080_, v_x_1081_, v___y_1082_);
lean_dec_ref(v_a_1080_);
return v_res_1083_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg(lean_object* v_inst_1084_, lean_object* v_f_1085_, lean_object* v_n_1086_, lean_object* v_b_1087_){
_start:
{
if (lean_obj_tag(v_n_1086_) == 0)
{
lean_object* v_toApplicative_1088_; lean_object* v_toBind_1089_; lean_object* v_toPure_1090_; lean_object* v_cs_1091_; lean_object* v___f_1092_; lean_object* v___x_1093_; lean_object* v___f_1094_; lean_object* v___x_1095_; size_t v_sz_1096_; size_t v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v_toApplicative_1088_ = lean_ctor_get(v_inst_1084_, 0);
v_toBind_1089_ = lean_ctor_get(v_inst_1084_, 1);
lean_inc_n(v_toBind_1089_, 2);
v_toPure_1090_ = lean_ctor_get(v_toApplicative_1088_, 1);
v_cs_1091_ = lean_ctor_get(v_n_1086_, 0);
lean_inc_n(v_toPure_1090_, 2);
v___f_1092_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1092_, 0, v_toPure_1090_);
v___x_1093_ = lean_box(0);
lean_inc_ref(v_inst_1084_);
v___f_1094_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__2___boxed), 8, 5);
lean_closure_set(v___f_1094_, 0, v_toPure_1090_);
lean_closure_set(v___f_1094_, 1, v___x_1093_);
lean_closure_set(v___f_1094_, 2, v_inst_1084_);
lean_closure_set(v___f_1094_, 3, v_f_1085_);
lean_closure_set(v___f_1094_, 4, v_toBind_1089_);
v___x_1095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1095_, 0, v___x_1093_);
lean_ctor_set(v___x_1095_, 1, v_b_1087_);
v_sz_1096_ = lean_array_size(v_cs_1091_);
v___x_1097_ = ((size_t)0ULL);
lean_inc_ref(v_cs_1091_);
v___x_1098_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1084_, v_cs_1091_, v___f_1094_, v_sz_1096_, v___x_1097_, v___x_1095_);
v___x_1099_ = lean_apply_4(v_toBind_1089_, lean_box(0), lean_box(0), v___x_1098_, v___f_1092_);
return v___x_1099_;
}
else
{
lean_object* v_toApplicative_1100_; lean_object* v_toBind_1101_; lean_object* v_toPure_1102_; lean_object* v_vs_1103_; lean_object* v___f_1104_; lean_object* v___x_1105_; lean_object* v___f_1106_; lean_object* v___x_1107_; size_t v_sz_1108_; size_t v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v_toApplicative_1100_ = lean_ctor_get(v_inst_1084_, 0);
v_toBind_1101_ = lean_ctor_get(v_inst_1084_, 1);
lean_inc_n(v_toBind_1101_, 2);
v_toPure_1102_ = lean_ctor_get(v_toApplicative_1100_, 1);
v_vs_1103_ = lean_ctor_get(v_n_1086_, 0);
lean_inc_n(v_toPure_1102_, 2);
v___f_1104_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1104_, 0, v_toPure_1102_);
v___x_1105_ = lean_box(0);
v___f_1106_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__5), 7, 4);
lean_closure_set(v___f_1106_, 0, v_toPure_1102_);
lean_closure_set(v___f_1106_, 1, v___x_1105_);
lean_closure_set(v___f_1106_, 2, v_f_1085_);
lean_closure_set(v___f_1106_, 3, v_toBind_1101_);
v___x_1107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1107_, 0, v___x_1105_);
lean_ctor_set(v___x_1107_, 1, v_b_1087_);
v_sz_1108_ = lean_array_size(v_vs_1103_);
v___x_1109_ = ((size_t)0ULL);
lean_inc_ref(v_vs_1103_);
v___x_1110_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1084_, v_vs_1103_, v___f_1106_, v_sz_1108_, v___x_1109_, v___x_1107_);
v___x_1111_ = lean_apply_4(v_toBind_1101_, lean_box(0), lean_box(0), v___x_1110_, v___f_1104_);
return v___x_1111_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___lam__2(lean_object* v_toPure_1112_, lean_object* v___x_1113_, lean_object* v_inst_1114_, lean_object* v_f_1115_, lean_object* v_toBind_1116_, lean_object* v_a_1117_, lean_object* v_x_1118_, lean_object* v___y_1119_){
_start:
{
lean_object* v_snd_1120_; lean_object* v___f_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v_snd_1120_ = lean_ctor_get(v___y_1119_, 1);
lean_inc_n(v_snd_1120_, 2);
lean_dec_ref(v___y_1119_);
v___f_1121_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forInAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1121_, 0, v_snd_1120_);
lean_closure_set(v___f_1121_, 1, v_toPure_1112_);
lean_closure_set(v___f_1121_, 2, v___x_1113_);
v___x_1122_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1114_, v_f_1115_, v_a_1117_, v_snd_1120_);
v___x_1123_ = lean_apply_4(v_toBind_1116_, lean_box(0), lean_box(0), v___x_1122_, v___f_1121_);
return v___x_1123_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___redArg___boxed(lean_object* v_inst_1124_, lean_object* v_f_1125_, lean_object* v_n_1126_, lean_object* v_b_1127_){
_start:
{
lean_object* v_res_1128_; 
v_res_1128_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1124_, v_f_1125_, v_n_1126_, v_b_1127_);
lean_dec_ref(v_n_1126_);
return v_res_1128_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux(lean_object* v_00_u03b1_1129_, lean_object* v_00_u03b2_1130_, lean_object* v_m_1131_, lean_object* v_inst_1132_, lean_object* v_inh_1133_, lean_object* v_f_1134_, lean_object* v_n_1135_, lean_object* v_b_1136_){
_start:
{
lean_object* v___x_1137_; 
v___x_1137_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1132_, v_f_1134_, v_n_1135_, v_b_1136_);
return v___x_1137_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___boxed(lean_object* v_00_u03b1_1138_, lean_object* v_00_u03b2_1139_, lean_object* v_m_1140_, lean_object* v_inst_1141_, lean_object* v_inh_1142_, lean_object* v_f_1143_, lean_object* v_n_1144_, lean_object* v_b_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l_Lean_PersistentArray_forInAux(v_00_u03b1_1138_, v_00_u03b2_1139_, v_m_1140_, v_inst_1141_, v_inh_1142_, v_f_1143_, v_n_1144_, v_b_1145_);
lean_dec_ref(v_n_1144_);
lean_dec(v_inh_1142_);
return v_res_1146_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__0(lean_object* v_toPure_1147_, lean_object* v_____s_1148_){
_start:
{
lean_object* v_fst_1149_; 
v_fst_1149_ = lean_ctor_get(v_____s_1148_, 0);
if (lean_obj_tag(v_fst_1149_) == 0)
{
lean_object* v_snd_1150_; lean_object* v___x_1151_; 
v_snd_1150_ = lean_ctor_get(v_____s_1148_, 1);
lean_inc(v_snd_1150_);
lean_dec_ref(v_____s_1148_);
v___x_1151_ = lean_apply_2(v_toPure_1147_, lean_box(0), v_snd_1150_);
return v___x_1151_;
}
else
{
lean_object* v_val_1152_; lean_object* v___x_1153_; 
lean_inc_ref(v_fst_1149_);
lean_dec_ref(v_____s_1148_);
v_val_1152_ = lean_ctor_get(v_fst_1149_, 0);
lean_inc(v_val_1152_);
lean_dec_ref_known(v_fst_1149_, 1);
v___x_1153_ = lean_apply_2(v_toPure_1147_, lean_box(0), v_val_1152_);
return v___x_1153_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__1(lean_object* v_snd_1154_, lean_object* v_toPure_1155_, lean_object* v___x_1156_, lean_object* v_____do__lift_1157_){
_start:
{
if (lean_obj_tag(v_____do__lift_1157_) == 0)
{
lean_object* v_a_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1168_; 
lean_dec(v___x_1156_);
v_a_1158_ = lean_ctor_get(v_____do__lift_1157_, 0);
v_isSharedCheck_1168_ = !lean_is_exclusive(v_____do__lift_1157_);
if (v_isSharedCheck_1168_ == 0)
{
v___x_1160_ = v_____do__lift_1157_;
v_isShared_1161_ = v_isSharedCheck_1168_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_a_1158_);
lean_dec(v_____do__lift_1157_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1168_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1165_; 
v___x_1162_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1162_, 0, v_a_1158_);
v___x_1163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1163_, 0, v___x_1162_);
lean_ctor_set(v___x_1163_, 1, v_snd_1154_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set(v___x_1160_, 0, v___x_1163_);
v___x_1165_ = v___x_1160_;
goto v_reusejp_1164_;
}
else
{
lean_object* v_reuseFailAlloc_1167_; 
v_reuseFailAlloc_1167_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1167_, 0, v___x_1163_);
v___x_1165_ = v_reuseFailAlloc_1167_;
goto v_reusejp_1164_;
}
v_reusejp_1164_:
{
lean_object* v___x_1166_; 
v___x_1166_ = lean_apply_2(v_toPure_1155_, lean_box(0), v___x_1165_);
return v___x_1166_;
}
}
}
else
{
lean_object* v_a_1169_; lean_object* v___x_1171_; uint8_t v_isShared_1172_; uint8_t v_isSharedCheck_1178_; 
lean_dec(v_snd_1154_);
v_a_1169_ = lean_ctor_get(v_____do__lift_1157_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v_____do__lift_1157_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1171_ = v_____do__lift_1157_;
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
else
{
lean_inc(v_a_1169_);
lean_dec(v_____do__lift_1157_);
v___x_1171_ = lean_box(0);
v_isShared_1172_ = v_isSharedCheck_1178_;
goto v_resetjp_1170_;
}
v_resetjp_1170_:
{
lean_object* v___x_1173_; lean_object* v___x_1175_; 
v___x_1173_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1173_, 0, v___x_1156_);
lean_ctor_set(v___x_1173_, 1, v_a_1169_);
if (v_isShared_1172_ == 0)
{
lean_ctor_set(v___x_1171_, 0, v___x_1173_);
v___x_1175_ = v___x_1171_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v___x_1173_);
v___x_1175_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
lean_object* v___x_1176_; 
v___x_1176_ = lean_apply_2(v_toPure_1155_, lean_box(0), v___x_1175_);
return v___x_1176_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__2(lean_object* v_toPure_1179_, lean_object* v___x_1180_, lean_object* v_f_1181_, lean_object* v_toBind_1182_, lean_object* v_a_1183_, lean_object* v_x_1184_, lean_object* v___y_1185_){
_start:
{
lean_object* v_snd_1186_; lean_object* v___f_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; 
v_snd_1186_ = lean_ctor_get(v___y_1185_, 1);
lean_inc_n(v_snd_1186_, 2);
lean_dec_ref(v___y_1185_);
v___f_1187_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1187_, 0, v_snd_1186_);
lean_closure_set(v___f_1187_, 1, v_toPure_1179_);
lean_closure_set(v___f_1187_, 2, v___x_1180_);
v___x_1188_ = lean_apply_2(v_f_1181_, v_a_1183_, v_snd_1186_);
v___x_1189_ = lean_apply_4(v_toBind_1182_, lean_box(0), lean_box(0), v___x_1188_, v___f_1187_);
return v___x_1189_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___lam__3(lean_object* v_toPure_1190_, lean_object* v_f_1191_, lean_object* v_toBind_1192_, lean_object* v_tail_1193_, lean_object* v_inst_1194_, lean_object* v___f_1195_, lean_object* v_____do__lift_1196_){
_start:
{
if (lean_obj_tag(v_____do__lift_1196_) == 0)
{
lean_object* v_a_1197_; lean_object* v___x_1198_; 
lean_dec(v___f_1195_);
lean_dec_ref(v_inst_1194_);
lean_dec_ref(v_tail_1193_);
lean_dec(v_toBind_1192_);
lean_dec(v_f_1191_);
v_a_1197_ = lean_ctor_get(v_____do__lift_1196_, 0);
lean_inc(v_a_1197_);
lean_dec_ref_known(v_____do__lift_1196_, 1);
v___x_1198_ = lean_apply_2(v_toPure_1190_, lean_box(0), v_a_1197_);
return v___x_1198_;
}
else
{
lean_object* v_a_1199_; lean_object* v___x_1200_; lean_object* v___f_1201_; lean_object* v___x_1202_; size_t v_sz_1203_; size_t v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; 
v_a_1199_ = lean_ctor_get(v_____do__lift_1196_, 0);
lean_inc(v_a_1199_);
lean_dec_ref_known(v_____do__lift_1196_, 1);
v___x_1200_ = lean_box(0);
lean_inc(v_toBind_1192_);
v___f_1201_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__2), 7, 4);
lean_closure_set(v___f_1201_, 0, v_toPure_1190_);
lean_closure_set(v___f_1201_, 1, v___x_1200_);
lean_closure_set(v___f_1201_, 2, v_f_1191_);
lean_closure_set(v___f_1201_, 3, v_toBind_1192_);
v___x_1202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1202_, 0, v___x_1200_);
lean_ctor_set(v___x_1202_, 1, v_a_1199_);
v_sz_1203_ = lean_array_size(v_tail_1193_);
v___x_1204_ = ((size_t)0ULL);
v___x_1205_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1194_, v_tail_1193_, v___f_1201_, v_sz_1203_, v___x_1204_, v___x_1202_);
v___x_1206_ = lean_apply_4(v_toBind_1192_, lean_box(0), lean_box(0), v___x_1205_, v___f_1195_);
return v___x_1206_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg(lean_object* v_inst_1207_, lean_object* v_t_1208_, lean_object* v_init_1209_, lean_object* v_f_1210_){
_start:
{
lean_object* v_toApplicative_1211_; lean_object* v_toBind_1212_; lean_object* v_root_1213_; lean_object* v_tail_1214_; lean_object* v_toPure_1215_; lean_object* v___x_1216_; lean_object* v___f_1217_; lean_object* v___f_1218_; lean_object* v___x_1219_; 
v_toApplicative_1211_ = lean_ctor_get(v_inst_1207_, 0);
v_toBind_1212_ = lean_ctor_get(v_inst_1207_, 1);
lean_inc_n(v_toBind_1212_, 2);
v_root_1213_ = lean_ctor_get(v_t_1208_, 0);
v_tail_1214_ = lean_ctor_get(v_t_1208_, 1);
v_toPure_1215_ = lean_ctor_get(v_toApplicative_1211_, 1);
lean_inc_n(v_toPure_1215_, 2);
lean_inc(v_f_1210_);
lean_inc_ref(v_inst_1207_);
v___x_1216_ = l_Lean_PersistentArray_forInAux___redArg(v_inst_1207_, v_f_1210_, v_root_1213_, v_init_1209_);
v___f_1217_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1217_, 0, v_toPure_1215_);
lean_inc_ref(v_tail_1214_);
v___f_1218_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___redArg___lam__3), 7, 6);
lean_closure_set(v___f_1218_, 0, v_toPure_1215_);
lean_closure_set(v___f_1218_, 1, v_f_1210_);
lean_closure_set(v___f_1218_, 2, v_toBind_1212_);
lean_closure_set(v___f_1218_, 3, v_tail_1214_);
lean_closure_set(v___f_1218_, 4, v_inst_1207_);
lean_closure_set(v___f_1218_, 5, v___f_1217_);
v___x_1219_ = lean_apply_4(v_toBind_1212_, lean_box(0), lean_box(0), v___x_1216_, v___f_1218_);
return v___x_1219_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___redArg___boxed(lean_object* v_inst_1220_, lean_object* v_t_1221_, lean_object* v_init_1222_, lean_object* v_f_1223_){
_start:
{
lean_object* v_res_1224_; 
v_res_1224_ = l_Lean_PersistentArray_forIn___redArg(v_inst_1220_, v_t_1221_, v_init_1222_, v_f_1223_);
lean_dec_ref(v_t_1221_);
return v_res_1224_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn(lean_object* v_00_u03b1_1225_, lean_object* v_m_1226_, lean_object* v_inst_1227_, lean_object* v_00_u03b2_1228_, lean_object* v_t_1229_, lean_object* v_init_1230_, lean_object* v_f_1231_){
_start:
{
lean_object* v___x_1232_; 
v___x_1232_ = l_Lean_PersistentArray_forIn___redArg(v_inst_1227_, v_t_1229_, v_init_1230_, v_f_1231_);
return v___x_1232_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___boxed(lean_object* v_00_u03b1_1233_, lean_object* v_m_1234_, lean_object* v_inst_1235_, lean_object* v_00_u03b2_1236_, lean_object* v_t_1237_, lean_object* v_init_1238_, lean_object* v_f_1239_){
_start:
{
lean_object* v_res_1240_; 
v_res_1240_ = l_Lean_PersistentArray_forIn(v_00_u03b1_1233_, v_m_1234_, v_inst_1235_, v_00_u03b2_1236_, v_t_1237_, v_init_1238_, v_f_1239_);
lean_dec_ref(v_t_1237_);
return v_res_1240_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad___redArg(lean_object* v_inst_1241_){
_start:
{
lean_object* v___x_1242_; 
v___x_1242_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___boxed), 7, 3);
lean_closure_set(v___x_1242_, 0, lean_box(0));
lean_closure_set(v___x_1242_, 1, lean_box(0));
lean_closure_set(v___x_1242_, 2, v_inst_1241_);
return v___x_1242_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instForInOfMonad(lean_object* v_00_u03b1_1243_, lean_object* v_m_1244_, lean_object* v_inst_1245_){
_start:
{
lean_object* v___x_1246_; 
v___x_1246_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forIn___boxed), 7, 3);
lean_closure_set(v___x_1246_, 0, lean_box(0));
lean_closure_set(v___x_1246_, 1, lean_box(0));
lean_closure_set(v___x_1246_, 2, v_inst_1245_);
return v___x_1246_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__0(lean_object* v_toPure_1247_, lean_object* v_____s_1248_){
_start:
{
lean_object* v_fst_1249_; 
v_fst_1249_ = lean_ctor_get(v_____s_1248_, 0);
lean_inc(v_fst_1249_);
lean_dec_ref(v_____s_1248_);
if (lean_obj_tag(v_fst_1249_) == 0)
{
lean_object* v___x_1250_; lean_object* v___x_1251_; 
v___x_1250_ = lean_box(0);
v___x_1251_ = lean_apply_2(v_toPure_1247_, lean_box(0), v___x_1250_);
return v___x_1251_;
}
else
{
lean_object* v_val_1252_; lean_object* v___x_1253_; 
v_val_1252_ = lean_ctor_get(v_fst_1249_, 0);
lean_inc(v_val_1252_);
lean_dec_ref_known(v_fst_1249_, 1);
v___x_1253_ = lean_apply_2(v_toPure_1247_, lean_box(0), v_val_1252_);
return v___x_1253_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__1(lean_object* v___x_1254_, lean_object* v_toPure_1255_, lean_object* v___x_1256_, lean_object* v_____do__lift_1257_){
_start:
{
if (lean_obj_tag(v_____do__lift_1257_) == 1)
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; 
lean_dec_ref(v___x_1256_);
v___x_1258_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1258_, 0, v_____do__lift_1257_);
v___x_1259_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_ctor_set(v___x_1259_, 1, v___x_1254_);
v___x_1260_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1260_, 0, v___x_1259_);
v___x_1261_ = lean_apply_2(v_toPure_1255_, lean_box(0), v___x_1260_);
return v___x_1261_;
}
else
{
lean_object* v___x_1262_; lean_object* v___x_1263_; 
lean_dec(v_____do__lift_1257_);
v___x_1262_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1262_, 0, v___x_1256_);
v___x_1263_ = lean_apply_2(v_toPure_1255_, lean_box(0), v___x_1262_);
return v___x_1263_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5(lean_object* v_f_1264_, lean_object* v_toBind_1265_, lean_object* v___f_1266_, lean_object* v_a_1267_, lean_object* v_x_1268_, lean_object* v___y_1269_){
_start:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_apply_1(v_f_1264_, v_a_1267_);
v___x_1271_ = lean_apply_4(v_toBind_1265_, lean_box(0), lean_box(0), v___x_1270_, v___f_1266_);
return v___x_1271_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__5___boxed(lean_object* v_f_1272_, lean_object* v_toBind_1273_, lean_object* v___f_1274_, lean_object* v_a_1275_, lean_object* v_x_1276_, lean_object* v___y_1277_){
_start:
{
lean_object* v_res_1278_; 
v_res_1278_ = l_Lean_PersistentArray_findSomeMAux___redArg___lam__5(v_f_1272_, v_toBind_1273_, v___f_1274_, v_a_1275_, v_x_1276_, v___y_1277_);
lean_dec_ref(v___y_1277_);
return v_res_1278_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2___boxed(lean_object* v_inst_1282_, lean_object* v_f_1283_, lean_object* v_toBind_1284_, lean_object* v___f_1285_, lean_object* v_a_1286_, lean_object* v_x_1287_, lean_object* v___y_1288_){
_start:
{
lean_object* v_res_1289_; 
v_res_1289_ = l_Lean_PersistentArray_findSomeMAux___redArg___lam__2(v_inst_1282_, v_f_1283_, v_toBind_1284_, v___f_1285_, v_a_1286_, v_x_1287_, v___y_1288_);
lean_dec_ref(v___y_1288_);
return v_res_1289_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg(lean_object* v_inst_1290_, lean_object* v_f_1291_, lean_object* v_x_1292_){
_start:
{
if (lean_obj_tag(v_x_1292_) == 0)
{
lean_object* v_toApplicative_1293_; lean_object* v_cs_1294_; lean_object* v_toBind_1295_; lean_object* v_toPure_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___f_1299_; lean_object* v___f_1300_; lean_object* v___f_1301_; size_t v_sz_1302_; size_t v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; 
v_toApplicative_1293_ = lean_ctor_get(v_inst_1290_, 0);
v_cs_1294_ = lean_ctor_get(v_x_1292_, 0);
lean_inc_ref(v_cs_1294_);
lean_dec_ref_known(v_x_1292_, 1);
v_toBind_1295_ = lean_ctor_get(v_inst_1290_, 1);
lean_inc_n(v_toBind_1295_, 2);
v_toPure_1296_ = lean_ctor_get(v_toApplicative_1293_, 1);
v___x_1297_ = lean_box(0);
v___x_1298_ = ((lean_object*)(l_Lean_PersistentArray_findSomeMAux___redArg___closed__0));
lean_inc_n(v_toPure_1296_, 2);
v___f_1299_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1299_, 0, v_toPure_1296_);
v___f_1300_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1300_, 0, v___x_1297_);
lean_closure_set(v___f_1300_, 1, v_toPure_1296_);
lean_closure_set(v___f_1300_, 2, v___x_1298_);
lean_inc_ref(v_inst_1290_);
v___f_1301_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__2___boxed), 7, 4);
lean_closure_set(v___f_1301_, 0, v_inst_1290_);
lean_closure_set(v___f_1301_, 1, v_f_1291_);
lean_closure_set(v___f_1301_, 2, v_toBind_1295_);
lean_closure_set(v___f_1301_, 3, v___f_1300_);
v_sz_1302_ = lean_array_size(v_cs_1294_);
v___x_1303_ = ((size_t)0ULL);
v___x_1304_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1290_, v_cs_1294_, v___f_1301_, v_sz_1302_, v___x_1303_, v___x_1298_);
v___x_1305_ = lean_apply_4(v_toBind_1295_, lean_box(0), lean_box(0), v___x_1304_, v___f_1299_);
return v___x_1305_;
}
else
{
lean_object* v_toApplicative_1306_; lean_object* v_vs_1307_; lean_object* v_toBind_1308_; lean_object* v_toPure_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___f_1312_; lean_object* v___f_1313_; lean_object* v___f_1314_; size_t v_sz_1315_; size_t v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; 
v_toApplicative_1306_ = lean_ctor_get(v_inst_1290_, 0);
v_vs_1307_ = lean_ctor_get(v_x_1292_, 0);
lean_inc_ref(v_vs_1307_);
lean_dec_ref_known(v_x_1292_, 1);
v_toBind_1308_ = lean_ctor_get(v_inst_1290_, 1);
lean_inc_n(v_toBind_1308_, 2);
v_toPure_1309_ = lean_ctor_get(v_toApplicative_1306_, 1);
v___x_1310_ = lean_box(0);
v___x_1311_ = ((lean_object*)(l_Lean_PersistentArray_findSomeMAux___redArg___closed__0));
lean_inc_n(v_toPure_1309_, 2);
v___f_1312_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__0), 2, 1);
lean_closure_set(v___f_1312_, 0, v_toPure_1309_);
v___f_1313_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1313_, 0, v___x_1310_);
lean_closure_set(v___f_1313_, 1, v_toPure_1309_);
lean_closure_set(v___f_1313_, 2, v___x_1311_);
v___f_1314_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeMAux___redArg___lam__5___boxed), 6, 3);
lean_closure_set(v___f_1314_, 0, v_f_1291_);
lean_closure_set(v___f_1314_, 1, v_toBind_1308_);
lean_closure_set(v___f_1314_, 2, v___f_1313_);
v_sz_1315_ = lean_array_size(v_vs_1307_);
v___x_1316_ = ((size_t)0ULL);
v___x_1317_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1290_, v_vs_1307_, v___f_1314_, v_sz_1315_, v___x_1316_, v___x_1311_);
v___x_1318_ = lean_apply_4(v_toBind_1308_, lean_box(0), lean_box(0), v___x_1317_, v___f_1312_);
return v___x_1318_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux___redArg___lam__2(lean_object* v_inst_1319_, lean_object* v_f_1320_, lean_object* v_toBind_1321_, lean_object* v___f_1322_, lean_object* v_a_1323_, lean_object* v_x_1324_, lean_object* v___y_1325_){
_start:
{
lean_object* v___x_1326_; lean_object* v___x_1327_; 
v___x_1326_ = l_Lean_PersistentArray_findSomeMAux___redArg(v_inst_1319_, v_f_1320_, v_a_1323_);
v___x_1327_ = lean_apply_4(v_toBind_1321_, lean_box(0), lean_box(0), v___x_1326_, v___f_1322_);
return v___x_1327_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeMAux(lean_object* v_00_u03b1_1328_, lean_object* v_m_1329_, lean_object* v_inst_1330_, lean_object* v_00_u03b2_1331_, lean_object* v_f_1332_, lean_object* v_x_1333_){
_start:
{
lean_object* v___x_1334_; 
v___x_1334_ = l_Lean_PersistentArray_findSomeMAux___redArg(v_inst_1330_, v_f_1332_, v_x_1333_);
return v___x_1334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__0(lean_object* v_toPure_1335_, lean_object* v_____do__lift_1336_, lean_object* v_____s_1337_){
_start:
{
lean_object* v_fst_1338_; 
v_fst_1338_ = lean_ctor_get(v_____s_1337_, 0);
lean_inc(v_fst_1338_);
lean_dec_ref(v_____s_1337_);
if (lean_obj_tag(v_fst_1338_) == 0)
{
lean_object* v___x_1339_; 
v___x_1339_ = lean_apply_2(v_toPure_1335_, lean_box(0), v_____do__lift_1336_);
return v___x_1339_;
}
else
{
lean_object* v_val_1340_; lean_object* v___x_1341_; 
lean_dec(v_____do__lift_1336_);
v_val_1340_ = lean_ctor_get(v_fst_1338_, 0);
lean_inc(v_val_1340_);
lean_dec_ref_known(v_fst_1338_, 1);
v___x_1341_ = lean_apply_2(v_toPure_1335_, lean_box(0), v_val_1340_);
return v___x_1341_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__1(lean_object* v___x_1342_, lean_object* v_toPure_1343_, lean_object* v___x_1344_, lean_object* v_____do__lift_1345_){
_start:
{
if (lean_obj_tag(v_____do__lift_1345_) == 1)
{
lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; 
lean_dec_ref(v___x_1344_);
v___x_1346_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1346_, 0, v_____do__lift_1345_);
v___x_1347_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set(v___x_1347_, 1, v___x_1342_);
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
v___x_1349_ = lean_apply_2(v_toPure_1343_, lean_box(0), v___x_1348_);
return v___x_1349_;
}
else
{
lean_object* v___x_1350_; lean_object* v___x_1351_; 
lean_dec(v_____do__lift_1345_);
v___x_1350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1350_, 0, v___x_1344_);
v___x_1351_ = lean_apply_2(v_toPure_1343_, lean_box(0), v___x_1350_);
return v___x_1351_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2(lean_object* v_f_1352_, lean_object* v_toBind_1353_, lean_object* v___f_1354_, lean_object* v_a_1355_, lean_object* v_x_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = lean_apply_1(v_f_1352_, v_a_1355_);
v___x_1359_ = lean_apply_4(v_toBind_1353_, lean_box(0), lean_box(0), v___x_1358_, v___f_1354_);
return v___x_1359_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2___boxed(lean_object* v_f_1360_, lean_object* v_toBind_1361_, lean_object* v___f_1362_, lean_object* v_a_1363_, lean_object* v_x_1364_, lean_object* v___y_1365_){
_start:
{
lean_object* v_res_1366_; 
v_res_1366_ = l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2(v_f_1360_, v_toBind_1361_, v___f_1362_, v_a_1363_, v_x_1364_, v___y_1365_);
lean_dec_ref(v___y_1365_);
return v_res_1366_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__3(lean_object* v_toPure_1367_, lean_object* v_f_1368_, lean_object* v_toBind_1369_, lean_object* v_tail_1370_, lean_object* v_inst_1371_, lean_object* v_____do__lift_1372_){
_start:
{
if (lean_obj_tag(v_____do__lift_1372_) == 0)
{
lean_object* v___f_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___f_1376_; lean_object* v___f_1377_; size_t v_sz_1378_; size_t v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; 
lean_inc(v_toPure_1367_);
v___f_1373_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1373_, 0, v_toPure_1367_);
lean_closure_set(v___f_1373_, 1, v_____do__lift_1372_);
v___x_1374_ = lean_box(0);
v___x_1375_ = ((lean_object*)(l_Lean_PersistentArray_findSomeMAux___redArg___closed__0));
v___f_1376_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__1), 4, 3);
lean_closure_set(v___f_1376_, 0, v___x_1374_);
lean_closure_set(v___f_1376_, 1, v_toPure_1367_);
lean_closure_set(v___f_1376_, 2, v___x_1375_);
lean_inc(v_toBind_1369_);
v___f_1377_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__2___boxed), 6, 3);
lean_closure_set(v___f_1377_, 0, v_f_1368_);
lean_closure_set(v___f_1377_, 1, v_toBind_1369_);
lean_closure_set(v___f_1377_, 2, v___f_1376_);
v_sz_1378_ = lean_array_size(v_tail_1370_);
v___x_1379_ = ((size_t)0ULL);
v___x_1380_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v_inst_1371_, v_tail_1370_, v___f_1377_, v_sz_1378_, v___x_1379_, v___x_1375_);
v___x_1381_ = lean_apply_4(v_toBind_1369_, lean_box(0), lean_box(0), v___x_1380_, v___f_1373_);
return v___x_1381_;
}
else
{
lean_object* v___x_1382_; 
lean_dec_ref(v_inst_1371_);
lean_dec_ref(v_tail_1370_);
lean_dec(v_toBind_1369_);
lean_dec(v_f_1368_);
v___x_1382_ = lean_apply_2(v_toPure_1367_, lean_box(0), v_____do__lift_1372_);
return v___x_1382_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f___redArg(lean_object* v_inst_1383_, lean_object* v_t_1384_, lean_object* v_f_1385_){
_start:
{
lean_object* v_toApplicative_1386_; lean_object* v_toBind_1387_; lean_object* v_root_1388_; lean_object* v_tail_1389_; lean_object* v_toPure_1390_; lean_object* v___x_1391_; lean_object* v___f_1392_; lean_object* v___x_1393_; 
v_toApplicative_1386_ = lean_ctor_get(v_inst_1383_, 0);
v_toBind_1387_ = lean_ctor_get(v_inst_1383_, 1);
lean_inc_n(v_toBind_1387_, 2);
v_root_1388_ = lean_ctor_get(v_t_1384_, 0);
lean_inc_ref(v_root_1388_);
v_tail_1389_ = lean_ctor_get(v_t_1384_, 1);
lean_inc_ref(v_tail_1389_);
lean_dec_ref(v_t_1384_);
v_toPure_1390_ = lean_ctor_get(v_toApplicative_1386_, 1);
lean_inc(v_toPure_1390_);
lean_inc(v_f_1385_);
lean_inc_ref(v_inst_1383_);
v___x_1391_ = l_Lean_PersistentArray_findSomeMAux___redArg(v_inst_1383_, v_f_1385_, v_root_1388_);
v___f_1392_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeM_x3f___redArg___lam__3), 6, 5);
lean_closure_set(v___f_1392_, 0, v_toPure_1390_);
lean_closure_set(v___f_1392_, 1, v_f_1385_);
lean_closure_set(v___f_1392_, 2, v_toBind_1387_);
lean_closure_set(v___f_1392_, 3, v_tail_1389_);
lean_closure_set(v___f_1392_, 4, v_inst_1383_);
v___x_1393_ = lean_apply_4(v_toBind_1387_, lean_box(0), lean_box(0), v___x_1391_, v___f_1392_);
return v___x_1393_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeM_x3f(lean_object* v_00_u03b1_1394_, lean_object* v_m_1395_, lean_object* v_inst_1396_, lean_object* v_00_u03b2_1397_, lean_object* v_t_1398_, lean_object* v_f_1399_){
_start:
{
lean_object* v___x_1400_; 
v___x_1400_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v_inst_1396_, v_t_1398_, v_f_1399_);
return v___x_1400_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg(lean_object* v_inst_1401_, lean_object* v_f_1402_, lean_object* v_x_1403_){
_start:
{
if (lean_obj_tag(v_x_1403_) == 0)
{
lean_object* v_cs_1404_; lean_object* v___f_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v_cs_1404_ = lean_ctor_get(v_x_1403_, 0);
lean_inc_ref(v_cs_1404_);
lean_dec_ref_known(v_x_1403_, 1);
lean_inc_ref(v_inst_1401_);
v___f_1405_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeRevMAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_1405_, 0, v_inst_1401_);
lean_closure_set(v___f_1405_, 1, v_f_1402_);
v___x_1406_ = lean_array_get_size(v_cs_1404_);
v___x_1407_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_1401_, v___f_1405_, v_cs_1404_, v___x_1406_, lean_box(0));
return v___x_1407_;
}
else
{
lean_object* v_vs_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; 
v_vs_1408_ = lean_ctor_get(v_x_1403_, 0);
lean_inc_ref(v_vs_1408_);
lean_dec_ref_known(v_x_1403_, 1);
v___x_1409_ = lean_array_get_size(v_vs_1408_);
v___x_1410_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_1401_, v_f_1402_, v_vs_1408_, v___x_1409_, lean_box(0));
return v___x_1410_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux___redArg___lam__0(lean_object* v_inst_1411_, lean_object* v_f_1412_, lean_object* v_c_1413_){
_start:
{
lean_object* v___x_1414_; 
v___x_1414_ = l_Lean_PersistentArray_findSomeRevMAux___redArg(v_inst_1411_, v_f_1412_, v_c_1413_);
return v___x_1414_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevMAux(lean_object* v_00_u03b1_1415_, lean_object* v_m_1416_, lean_object* v_inst_1417_, lean_object* v_00_u03b2_1418_, lean_object* v_f_1419_, lean_object* v_x_1420_){
_start:
{
lean_object* v___x_1421_; 
v___x_1421_ = l_Lean_PersistentArray_findSomeRevMAux___redArg(v_inst_1417_, v_f_1419_, v_x_1420_);
return v___x_1421_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg___lam__0(lean_object* v_inst_1422_, lean_object* v_f_1423_, lean_object* v_root_1424_, lean_object* v_toPure_1425_, lean_object* v_____do__lift_1426_){
_start:
{
if (lean_obj_tag(v_____do__lift_1426_) == 0)
{
lean_object* v___x_1427_; 
lean_dec(v_toPure_1425_);
v___x_1427_ = l_Lean_PersistentArray_findSomeRevMAux___redArg(v_inst_1422_, v_f_1423_, v_root_1424_);
return v___x_1427_;
}
else
{
lean_object* v___x_1428_; 
lean_dec_ref(v_root_1424_);
lean_dec(v_f_1423_);
lean_dec_ref(v_inst_1422_);
v___x_1428_ = lean_apply_2(v_toPure_1425_, lean_box(0), v_____do__lift_1426_);
return v___x_1428_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f___redArg(lean_object* v_inst_1429_, lean_object* v_t_1430_, lean_object* v_f_1431_){
_start:
{
lean_object* v_toApplicative_1432_; lean_object* v_toBind_1433_; lean_object* v_root_1434_; lean_object* v_tail_1435_; lean_object* v_toPure_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___f_1439_; lean_object* v___x_1440_; 
v_toApplicative_1432_ = lean_ctor_get(v_inst_1429_, 0);
v_toBind_1433_ = lean_ctor_get(v_inst_1429_, 1);
lean_inc(v_toBind_1433_);
v_root_1434_ = lean_ctor_get(v_t_1430_, 0);
lean_inc_ref(v_root_1434_);
v_tail_1435_ = lean_ctor_get(v_t_1430_, 1);
lean_inc_ref(v_tail_1435_);
lean_dec_ref(v_t_1430_);
v_toPure_1436_ = lean_ctor_get(v_toApplicative_1432_, 1);
lean_inc(v_toPure_1436_);
v___x_1437_ = lean_array_get_size(v_tail_1435_);
lean_inc(v_f_1431_);
lean_inc_ref(v_inst_1429_);
v___x_1438_ = l___private_Init_Data_Array_Basic_0__Array_findSomeRevM_x3f_find(lean_box(0), lean_box(0), lean_box(0), v_inst_1429_, v_f_1431_, v_tail_1435_, v___x_1437_, lean_box(0));
v___f_1439_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSomeRevM_x3f___redArg___lam__0), 5, 4);
lean_closure_set(v___f_1439_, 0, v_inst_1429_);
lean_closure_set(v___f_1439_, 1, v_f_1431_);
lean_closure_set(v___f_1439_, 2, v_root_1434_);
lean_closure_set(v___f_1439_, 3, v_toPure_1436_);
v___x_1440_ = lean_apply_4(v_toBind_1433_, lean_box(0), lean_box(0), v___x_1438_, v___f_1439_);
return v___x_1440_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRevM_x3f(lean_object* v_00_u03b1_1441_, lean_object* v_m_1442_, lean_object* v_inst_1443_, lean_object* v_00_u03b2_1444_, lean_object* v_t_1445_, lean_object* v_f_1446_){
_start:
{
lean_object* v___x_1447_; 
v___x_1447_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v_inst_1443_, v_t_1445_, v_f_1446_);
return v___x_1447_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__1(lean_object* v_f_1448_, lean_object* v_x_1449_, lean_object* v___y_1450_){
_start:
{
lean_object* v___x_1451_; 
v___x_1451_ = lean_apply_1(v_f_1448_, v___y_1450_);
return v___x_1451_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg(lean_object* v_inst_1452_, lean_object* v_f_1453_, lean_object* v_x_1454_){
_start:
{
if (lean_obj_tag(v_x_1454_) == 0)
{
lean_object* v_toApplicative_1455_; lean_object* v_cs_1456_; lean_object* v_toPure_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; uint8_t v___x_1461_; 
v_toApplicative_1455_ = lean_ctor_get(v_inst_1452_, 0);
v_cs_1456_ = lean_ctor_get(v_x_1454_, 0);
lean_inc_ref(v_cs_1456_);
lean_dec_ref_known(v_x_1454_, 1);
v_toPure_1457_ = lean_ctor_get(v_toApplicative_1455_, 1);
v___x_1458_ = lean_unsigned_to_nat(0u);
v___x_1459_ = lean_array_get_size(v_cs_1456_);
v___x_1460_ = lean_box(0);
v___x_1461_ = lean_nat_dec_lt(v___x_1458_, v___x_1459_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; 
lean_inc(v_toPure_1457_);
lean_dec_ref(v_cs_1456_);
lean_dec(v_f_1453_);
lean_dec_ref(v_inst_1452_);
v___x_1462_ = lean_apply_2(v_toPure_1457_, lean_box(0), v___x_1460_);
return v___x_1462_;
}
else
{
lean_object* v___f_1463_; size_t v___x_1464_; size_t v___x_1465_; lean_object* v___x_1466_; 
lean_inc_ref(v_inst_1452_);
v___f_1463_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1463_, 0, v_inst_1452_);
lean_closure_set(v___f_1463_, 1, v_f_1453_);
v___x_1464_ = ((size_t)0ULL);
v___x_1465_ = lean_usize_of_nat(v___x_1459_);
v___x_1466_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1452_, v___f_1463_, v_cs_1456_, v___x_1464_, v___x_1465_, v___x_1460_);
return v___x_1466_;
}
}
else
{
lean_object* v_toApplicative_1467_; lean_object* v_vs_1468_; lean_object* v_toPure_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; uint8_t v___x_1473_; 
v_toApplicative_1467_ = lean_ctor_get(v_inst_1452_, 0);
v_vs_1468_ = lean_ctor_get(v_x_1454_, 0);
lean_inc_ref(v_vs_1468_);
lean_dec_ref_known(v_x_1454_, 1);
v_toPure_1469_ = lean_ctor_get(v_toApplicative_1467_, 1);
v___x_1470_ = lean_unsigned_to_nat(0u);
v___x_1471_ = lean_array_get_size(v_vs_1468_);
v___x_1472_ = lean_box(0);
v___x_1473_ = lean_nat_dec_lt(v___x_1470_, v___x_1471_);
if (v___x_1473_ == 0)
{
lean_object* v___x_1474_; 
lean_inc(v_toPure_1469_);
lean_dec_ref(v_vs_1468_);
lean_dec(v_f_1453_);
lean_dec_ref(v_inst_1452_);
v___x_1474_ = lean_apply_2(v_toPure_1469_, lean_box(0), v___x_1472_);
return v___x_1474_;
}
else
{
lean_object* v___f_1475_; size_t v___x_1476_; size_t v___x_1477_; lean_object* v___x_1478_; 
v___f_1475_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__1), 3, 1);
lean_closure_set(v___f_1475_, 0, v_f_1453_);
v___x_1476_ = ((size_t)0ULL);
v___x_1477_ = lean_usize_of_nat(v___x_1471_);
v___x_1478_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1452_, v___f_1475_, v_vs_1468_, v___x_1476_, v___x_1477_, v___x_1472_);
return v___x_1478_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux___redArg___lam__0(lean_object* v_inst_1479_, lean_object* v_f_1480_, lean_object* v_x_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v___x_1483_; 
v___x_1483_ = l_Lean_PersistentArray_forMAux___redArg(v_inst_1479_, v_f_1480_, v___y_1482_);
return v___x_1483_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMAux(lean_object* v_00_u03b1_1484_, lean_object* v_m_1485_, lean_object* v_inst_1486_, lean_object* v_f_1487_, lean_object* v_x_1488_){
_start:
{
lean_object* v___x_1489_; 
v___x_1489_ = l_Lean_PersistentArray_forMAux___redArg(v_inst_1486_, v_f_1487_, v_x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__0(lean_object* v_f_1490_, lean_object* v_x_1491_, lean_object* v___y_1492_){
_start:
{
lean_object* v___x_1493_; 
v___x_1493_ = lean_apply_1(v_f_1490_, v___y_1492_);
return v___x_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg___lam__1(lean_object* v_tail_1494_, lean_object* v_toPure_1495_, lean_object* v_inst_1496_, lean_object* v___f_1497_, lean_object* v_x_1498_){
_start:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; uint8_t v___x_1502_; 
v___x_1499_ = lean_unsigned_to_nat(0u);
v___x_1500_ = lean_array_get_size(v_tail_1494_);
v___x_1501_ = lean_box(0);
v___x_1502_ = lean_nat_dec_lt(v___x_1499_, v___x_1500_);
if (v___x_1502_ == 0)
{
lean_object* v___x_1503_; 
lean_dec(v___f_1497_);
lean_dec_ref(v_inst_1496_);
lean_dec_ref(v_tail_1494_);
v___x_1503_ = lean_apply_2(v_toPure_1495_, lean_box(0), v___x_1501_);
return v___x_1503_;
}
else
{
size_t v___x_1504_; size_t v___x_1505_; lean_object* v___x_1506_; 
lean_dec(v_toPure_1495_);
v___x_1504_ = ((size_t)0ULL);
v___x_1505_ = lean_usize_of_nat(v___x_1500_);
v___x_1506_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1496_, v___f_1497_, v_tail_1494_, v___x_1504_, v___x_1505_, v___x_1501_);
return v___x_1506_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0___redArg(lean_object* v_inst_1507_, lean_object* v_t_1508_, lean_object* v_f_1509_){
_start:
{
lean_object* v_toApplicative_1510_; lean_object* v_toPure_1511_; lean_object* v_toSeqRight_1512_; lean_object* v_root_1513_; lean_object* v_tail_1514_; lean_object* v___f_1515_; lean_object* v___f_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; 
v_toApplicative_1510_ = lean_ctor_get(v_inst_1507_, 0);
v_toPure_1511_ = lean_ctor_get(v_toApplicative_1510_, 1);
v_toSeqRight_1512_ = lean_ctor_get(v_toApplicative_1510_, 4);
lean_inc(v_toSeqRight_1512_);
v_root_1513_ = lean_ctor_get(v_t_1508_, 0);
lean_inc_ref(v_root_1513_);
v_tail_1514_ = lean_ctor_get(v_t_1508_, 1);
lean_inc_ref(v_tail_1514_);
lean_dec_ref(v_t_1508_);
lean_inc(v_f_1509_);
v___f_1515_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1515_, 0, v_f_1509_);
lean_inc_ref(v_inst_1507_);
lean_inc(v_toPure_1511_);
v___f_1516_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1516_, 0, v_tail_1514_);
lean_closure_set(v___f_1516_, 1, v_toPure_1511_);
lean_closure_set(v___f_1516_, 2, v_inst_1507_);
lean_closure_set(v___f_1516_, 3, v___f_1515_);
v___x_1517_ = l_Lean_PersistentArray_forMAux___redArg(v_inst_1507_, v_f_1509_, v_root_1513_);
v___x_1518_ = lean_apply_4(v_toSeqRight_1512_, lean_box(0), lean_box(0), v___x_1517_, v___f_1516_);
return v___x_1518_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forMFrom0(lean_object* v_00_u03b1_1519_, lean_object* v_m_1520_, lean_object* v_inst_1521_, lean_object* v_t_1522_, lean_object* v_f_1523_){
_start:
{
lean_object* v___x_1524_; 
v___x_1524_ = l_Lean_PersistentArray_forMFrom0___redArg(v_inst_1521_, v_t_1522_, v_f_1523_);
return v___x_1524_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1(lean_object* v_toApplicative_1525_, lean_object* v_j_1526_, lean_object* v_cs_1527_, lean_object* v_inst_1528_, lean_object* v___f_1529_, lean_object* v_____r_1530_){
_start:
{
lean_object* v_toPure_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; uint8_t v___x_1536_; 
v_toPure_1531_ = lean_ctor_get(v_toApplicative_1525_, 1);
lean_inc(v_toPure_1531_);
lean_dec_ref(v_toApplicative_1525_);
v___x_1532_ = lean_unsigned_to_nat(1u);
v___x_1533_ = lean_nat_add(v_j_1526_, v___x_1532_);
v___x_1534_ = lean_array_get_size(v_cs_1527_);
v___x_1535_ = lean_box(0);
v___x_1536_ = lean_nat_dec_lt(v___x_1533_, v___x_1534_);
if (v___x_1536_ == 0)
{
lean_object* v___x_1537_; 
lean_dec(v___x_1533_);
lean_dec(v___f_1529_);
lean_dec_ref(v_inst_1528_);
lean_dec_ref(v_cs_1527_);
v___x_1537_ = lean_apply_2(v_toPure_1531_, lean_box(0), v___x_1535_);
return v___x_1537_;
}
else
{
size_t v___x_1538_; size_t v___x_1539_; lean_object* v___x_1540_; 
lean_dec(v_toPure_1531_);
v___x_1538_ = lean_usize_of_nat(v___x_1533_);
lean_dec(v___x_1533_);
v___x_1539_ = lean_usize_of_nat(v___x_1534_);
v___x_1540_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1528_, v___f_1529_, v_cs_1527_, v___x_1538_, v___x_1539_, v___x_1535_);
return v___x_1540_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1___boxed(lean_object* v_toApplicative_1541_, lean_object* v_j_1542_, lean_object* v_cs_1543_, lean_object* v_inst_1544_, lean_object* v___f_1545_, lean_object* v_____r_1546_){
_start:
{
lean_object* v_res_1547_; 
v_res_1547_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1(v_toApplicative_1541_, v_j_1542_, v_cs_1543_, v_inst_1544_, v___f_1545_, v_____r_1546_);
lean_dec(v_j_1542_);
return v_res_1547_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(lean_object* v_inst_1548_, lean_object* v_f_1549_, lean_object* v_x_1550_, size_t v_x_1551_, size_t v_x_1552_){
_start:
{
if (lean_obj_tag(v_x_1550_) == 0)
{
lean_object* v_toApplicative_1553_; lean_object* v_toBind_1554_; lean_object* v_cs_1555_; lean_object* v___f_1556_; lean_object* v___x_1557_; size_t v___x_1558_; lean_object* v_j_1559_; lean_object* v___f_1560_; lean_object* v___x_1561_; size_t v___x_1562_; size_t v___x_1563_; size_t v___x_1564_; size_t v___x_1565_; size_t v___x_1566_; size_t v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; 
v_toApplicative_1553_ = lean_ctor_get(v_inst_1548_, 0);
v_toBind_1554_ = lean_ctor_get(v_inst_1548_, 1);
lean_inc(v_toBind_1554_);
v_cs_1555_ = lean_ctor_get(v_x_1550_, 0);
lean_inc_ref_n(v_cs_1555_, 2);
lean_dec_ref_known(v_x_1550_, 1);
lean_inc(v_f_1549_);
lean_inc_ref_n(v_inst_1548_, 2);
v___f_1556_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__0), 4, 2);
lean_closure_set(v___f_1556_, 0, v_inst_1548_);
lean_closure_set(v___f_1556_, 1, v_f_1549_);
v___x_1557_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_1558_ = lean_usize_shift_right(v_x_1551_, v_x_1552_);
v_j_1559_ = lean_usize_to_nat(v___x_1558_);
lean_inc(v_j_1559_);
lean_inc_ref(v_toApplicative_1553_);
v___f_1560_ = lean_alloc_closure((void*)(l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___lam__1___boxed), 6, 5);
lean_closure_set(v___f_1560_, 0, v_toApplicative_1553_);
lean_closure_set(v___f_1560_, 1, v_j_1559_);
lean_closure_set(v___f_1560_, 2, v_cs_1555_);
lean_closure_set(v___f_1560_, 3, v_inst_1548_);
lean_closure_set(v___f_1560_, 4, v___f_1556_);
v___x_1561_ = lean_array_get(v___x_1557_, v_cs_1555_, v_j_1559_);
lean_dec(v_j_1559_);
lean_dec_ref(v_cs_1555_);
v___x_1562_ = ((size_t)1ULL);
v___x_1563_ = lean_usize_shift_left(v___x_1562_, v_x_1552_);
v___x_1564_ = lean_usize_sub(v___x_1563_, v___x_1562_);
v___x_1565_ = lean_usize_land(v_x_1551_, v___x_1564_);
v___x_1566_ = ((size_t)5ULL);
v___x_1567_ = lean_usize_sub(v_x_1552_, v___x_1566_);
v___x_1568_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1548_, v_f_1549_, v___x_1561_, v___x_1565_, v___x_1567_);
v___x_1569_ = lean_apply_4(v_toBind_1554_, lean_box(0), lean_box(0), v___x_1568_, v___f_1560_);
return v___x_1569_;
}
else
{
lean_object* v_toApplicative_1570_; lean_object* v_vs_1571_; lean_object* v_toPure_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; uint8_t v___x_1576_; 
v_toApplicative_1570_ = lean_ctor_get(v_inst_1548_, 0);
v_vs_1571_ = lean_ctor_get(v_x_1550_, 0);
lean_inc_ref(v_vs_1571_);
lean_dec_ref_known(v_x_1550_, 1);
v_toPure_1572_ = lean_ctor_get(v_toApplicative_1570_, 1);
v___x_1573_ = lean_usize_to_nat(v_x_1551_);
v___x_1574_ = lean_array_get_size(v_vs_1571_);
v___x_1575_ = lean_box(0);
v___x_1576_ = lean_nat_dec_lt(v___x_1573_, v___x_1574_);
if (v___x_1576_ == 0)
{
lean_object* v___x_1577_; 
lean_inc(v_toPure_1572_);
lean_dec(v___x_1573_);
lean_dec_ref(v_vs_1571_);
lean_dec(v_f_1549_);
lean_dec_ref(v_inst_1548_);
v___x_1577_ = lean_apply_2(v_toPure_1572_, lean_box(0), v___x_1575_);
return v___x_1577_;
}
else
{
lean_object* v___f_1578_; size_t v___x_1579_; size_t v___x_1580_; lean_object* v___x_1581_; 
v___f_1578_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMAux___redArg___lam__1), 3, 1);
lean_closure_set(v___f_1578_, 0, v_f_1549_);
v___x_1579_ = lean_usize_of_nat(v___x_1573_);
lean_dec(v___x_1573_);
v___x_1580_ = lean_usize_of_nat(v___x_1574_);
v___x_1581_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1548_, v___f_1578_, v_vs_1571_, v___x_1579_, v___x_1580_, v___x_1575_);
return v___x_1581_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg___boxed(lean_object* v_inst_1582_, lean_object* v_f_1583_, lean_object* v_x_1584_, lean_object* v_x_1585_, lean_object* v_x_1586_){
_start:
{
size_t v_x_257__boxed_1587_; size_t v_x_258__boxed_1588_; lean_object* v_res_1589_; 
v_x_257__boxed_1587_ = lean_unbox_usize(v_x_1585_);
lean_dec(v_x_1585_);
v_x_258__boxed_1588_ = lean_unbox_usize(v_x_1586_);
lean_dec(v_x_1586_);
v_res_1589_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1582_, v_f_1583_, v_x_1584_, v_x_257__boxed_1587_, v_x_258__boxed_1588_);
return v_res_1589_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux(lean_object* v_00_u03b1_1590_, lean_object* v_m_1591_, lean_object* v_inst_1592_, lean_object* v_f_1593_, lean_object* v_x_1594_, size_t v_x_1595_, size_t v_x_1596_){
_start:
{
lean_object* v___x_1597_; 
v___x_1597_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1592_, v_f_1593_, v_x_1594_, v_x_1595_, v_x_1596_);
return v___x_1597_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___boxed(lean_object* v_00_u03b1_1598_, lean_object* v_m_1599_, lean_object* v_inst_1600_, lean_object* v_f_1601_, lean_object* v_x_1602_, lean_object* v_x_1603_, lean_object* v_x_1604_){
_start:
{
size_t v_x_317__boxed_1605_; size_t v_x_318__boxed_1606_; lean_object* v_res_1607_; 
v_x_317__boxed_1605_ = lean_unbox_usize(v_x_1603_);
lean_dec(v_x_1603_);
v_x_318__boxed_1606_ = lean_unbox_usize(v_x_1604_);
lean_dec(v_x_1604_);
v_res_1607_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux(v_00_u03b1_1598_, v_m_1599_, v_inst_1600_, v_f_1601_, v_x_1602_, v_x_317__boxed_1605_, v_x_318__boxed_1606_);
return v_res_1607_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___lam__1(lean_object* v_toApplicative_1608_, lean_object* v_tail_1609_, lean_object* v_inst_1610_, lean_object* v___f_1611_, lean_object* v_____r_1612_){
_start:
{
lean_object* v_toPure_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; uint8_t v___x_1617_; 
v_toPure_1613_ = lean_ctor_get(v_toApplicative_1608_, 1);
lean_inc(v_toPure_1613_);
lean_dec_ref(v_toApplicative_1608_);
v___x_1614_ = lean_unsigned_to_nat(0u);
v___x_1615_ = lean_array_get_size(v_tail_1609_);
v___x_1616_ = lean_box(0);
v___x_1617_ = lean_nat_dec_lt(v___x_1614_, v___x_1615_);
if (v___x_1617_ == 0)
{
lean_object* v___x_1618_; 
lean_dec(v___f_1611_);
lean_dec_ref(v_inst_1610_);
lean_dec_ref(v_tail_1609_);
v___x_1618_ = lean_apply_2(v_toPure_1613_, lean_box(0), v___x_1616_);
return v___x_1618_;
}
else
{
size_t v___x_1619_; size_t v___x_1620_; lean_object* v___x_1621_; 
lean_dec(v_toPure_1613_);
v___x_1619_ = ((size_t)0ULL);
v___x_1620_ = lean_usize_of_nat(v___x_1615_);
v___x_1621_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1610_, v___f_1611_, v_tail_1609_, v___x_1619_, v___x_1620_, v___x_1616_);
return v___x_1621_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg(lean_object* v_inst_1622_, lean_object* v_t_1623_, lean_object* v_f_1624_, lean_object* v_start_1625_){
_start:
{
lean_object* v_toApplicative_1626_; lean_object* v_toBind_1627_; lean_object* v___x_1628_; uint8_t v___x_1629_; 
v_toApplicative_1626_ = lean_ctor_get(v_inst_1622_, 0);
v_toBind_1627_ = lean_ctor_get(v_inst_1622_, 1);
v___x_1628_ = lean_unsigned_to_nat(0u);
v___x_1629_ = lean_nat_dec_eq(v_start_1625_, v___x_1628_);
if (v___x_1629_ == 0)
{
lean_object* v_root_1630_; lean_object* v_tail_1631_; size_t v_shift_1632_; lean_object* v_tailOff_1633_; uint8_t v___x_1634_; 
v_root_1630_ = lean_ctor_get(v_t_1623_, 0);
lean_inc_ref(v_root_1630_);
v_tail_1631_ = lean_ctor_get(v_t_1623_, 1);
lean_inc_ref(v_tail_1631_);
v_shift_1632_ = lean_ctor_get_usize(v_t_1623_, 4);
v_tailOff_1633_ = lean_ctor_get(v_t_1623_, 3);
lean_inc(v_tailOff_1633_);
lean_dec_ref(v_t_1623_);
v___x_1634_ = lean_nat_dec_le(v_tailOff_1633_, v_start_1625_);
if (v___x_1634_ == 0)
{
lean_object* v___f_1635_; lean_object* v___f_1636_; size_t v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; 
lean_inc(v_toBind_1627_);
lean_dec(v_tailOff_1633_);
lean_inc(v_f_1624_);
v___f_1635_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1635_, 0, v_f_1624_);
lean_inc_ref(v_inst_1622_);
lean_inc_ref(v_toApplicative_1626_);
v___f_1636_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forM___redArg___lam__1), 5, 4);
lean_closure_set(v___f_1636_, 0, v_toApplicative_1626_);
lean_closure_set(v___f_1636_, 1, v_tail_1631_);
lean_closure_set(v___f_1636_, 2, v_inst_1622_);
lean_closure_set(v___f_1636_, 3, v___f_1635_);
v___x_1637_ = lean_usize_of_nat(v_start_1625_);
v___x_1638_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_forFromMAux___redArg(v_inst_1622_, v_f_1624_, v_root_1630_, v___x_1637_, v_shift_1632_);
v___x_1639_ = lean_apply_4(v_toBind_1627_, lean_box(0), lean_box(0), v___x_1638_, v___f_1636_);
return v___x_1639_;
}
else
{
lean_object* v_toPure_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; uint8_t v___x_1644_; 
lean_dec_ref(v_root_1630_);
v_toPure_1640_ = lean_ctor_get(v_toApplicative_1626_, 1);
v___x_1641_ = lean_nat_sub(v_start_1625_, v_tailOff_1633_);
lean_dec(v_tailOff_1633_);
v___x_1642_ = lean_array_get_size(v_tail_1631_);
v___x_1643_ = lean_box(0);
v___x_1644_ = lean_nat_dec_lt(v___x_1641_, v___x_1642_);
if (v___x_1644_ == 0)
{
lean_object* v___x_1645_; 
lean_inc(v_toPure_1640_);
lean_dec(v___x_1641_);
lean_dec_ref(v_tail_1631_);
lean_dec(v_f_1624_);
lean_dec_ref(v_inst_1622_);
v___x_1645_ = lean_apply_2(v_toPure_1640_, lean_box(0), v___x_1643_);
return v___x_1645_;
}
else
{
lean_object* v___f_1646_; size_t v___x_1647_; size_t v___x_1648_; lean_object* v___x_1649_; 
v___f_1646_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_forMFrom0___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1646_, 0, v_f_1624_);
v___x_1647_ = lean_usize_of_nat(v___x_1641_);
lean_dec(v___x_1641_);
v___x_1648_ = lean_usize_of_nat(v___x_1642_);
v___x_1649_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v_inst_1622_, v___f_1646_, v_tail_1631_, v___x_1647_, v___x_1648_, v___x_1643_);
return v___x_1649_;
}
}
}
else
{
lean_object* v___x_1650_; 
v___x_1650_ = l_Lean_PersistentArray_forMFrom0___redArg(v_inst_1622_, v_t_1623_, v_f_1624_);
return v___x_1650_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___redArg___boxed(lean_object* v_inst_1651_, lean_object* v_t_1652_, lean_object* v_f_1653_, lean_object* v_start_1654_){
_start:
{
lean_object* v_res_1655_; 
v_res_1655_ = l_Lean_PersistentArray_forM___redArg(v_inst_1651_, v_t_1652_, v_f_1653_, v_start_1654_);
lean_dec(v_start_1654_);
return v_res_1655_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM(lean_object* v_00_u03b1_1656_, lean_object* v_m_1657_, lean_object* v_inst_1658_, lean_object* v_t_1659_, lean_object* v_f_1660_, lean_object* v_start_1661_){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = l_Lean_PersistentArray_forM___redArg(v_inst_1658_, v_t_1659_, v_f_1660_, v_start_1661_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forM___boxed(lean_object* v_00_u03b1_1663_, lean_object* v_m_1664_, lean_object* v_inst_1665_, lean_object* v_t_1666_, lean_object* v_f_1667_, lean_object* v_start_1668_){
_start:
{
lean_object* v_res_1669_; 
v_res_1669_ = l_Lean_PersistentArray_forM(v_00_u03b1_1663_, v_m_1664_, v_inst_1665_, v_t_1666_, v_f_1667_, v_start_1668_);
lean_dec(v_start_1668_);
return v_res_1669_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___lam__0(lean_object* v_f_1670_, lean_object* v_x1_1671_, lean_object* v_x2_1672_){
_start:
{
lean_object* v___x_1673_; 
v___x_1673_ = lean_apply_2(v_f_1670_, v_x1_1671_, v_x2_1672_);
return v___x_1673_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg(lean_object* v_t_1693_, lean_object* v_f_1694_, lean_object* v_init_1695_, lean_object* v_start_1696_){
_start:
{
lean_object* v___f_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; 
v___f_1697_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1697_, 0, v_f_1694_);
v___x_1698_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1699_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1698_, v_t_1693_, v___f_1697_, v_init_1695_, v_start_1696_);
return v___x_1699_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___redArg___boxed(lean_object* v_t_1700_, lean_object* v_f_1701_, lean_object* v_init_1702_, lean_object* v_start_1703_){
_start:
{
lean_object* v_res_1704_; 
v_res_1704_ = l_Lean_PersistentArray_foldl___redArg(v_t_1700_, v_f_1701_, v_init_1702_, v_start_1703_);
lean_dec(v_start_1703_);
return v_res_1704_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl(lean_object* v_00_u03b1_1705_, lean_object* v_00_u03b2_1706_, lean_object* v_t_1707_, lean_object* v_f_1708_, lean_object* v_init_1709_, lean_object* v_start_1710_){
_start:
{
lean_object* v___f_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; 
v___f_1711_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1711_, 0, v_f_1708_);
v___x_1712_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1713_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1712_, v_t_1707_, v___f_1711_, v_init_1709_, v_start_1710_);
return v___x_1713_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldl___boxed(lean_object* v_00_u03b1_1714_, lean_object* v_00_u03b2_1715_, lean_object* v_t_1716_, lean_object* v_f_1717_, lean_object* v_init_1718_, lean_object* v_start_1719_){
_start:
{
lean_object* v_res_1720_; 
v_res_1720_ = l_Lean_PersistentArray_foldl(v_00_u03b1_1714_, v_00_u03b2_1715_, v_t_1716_, v_f_1717_, v_init_1718_, v_start_1719_);
lean_dec(v_start_1719_);
return v_res_1720_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr___redArg(lean_object* v_t_1721_, lean_object* v_f_1722_, lean_object* v_init_1723_){
_start:
{
lean_object* v___f_1724_; lean_object* v___x_1725_; lean_object* v___x_1726_; 
v___f_1724_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1724_, 0, v_f_1722_);
v___x_1725_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1726_ = l_Lean_PersistentArray_foldrM___redArg(v___x_1725_, v_t_1721_, v___f_1724_, v_init_1723_);
return v___x_1726_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldr(lean_object* v_00_u03b1_1727_, lean_object* v_00_u03b2_1728_, lean_object* v_t_1729_, lean_object* v_f_1730_, lean_object* v_init_1731_){
_start:
{
lean_object* v___f_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; 
v___f_1732_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_foldl___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1732_, 0, v_f_1730_);
v___x_1733_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1734_ = l_Lean_PersistentArray_foldrM___redArg(v___x_1733_, v_t_1729_, v___f_1732_, v_init_1731_);
return v___x_1734_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg___lam__0(lean_object* v_p_1735_, lean_object* v_x1_1736_, lean_object* v_x2_1737_){
_start:
{
lean_object* v___x_1738_; uint8_t v___x_1739_; 
lean_inc(v_x2_1737_);
v___x_1738_ = lean_apply_1(v_p_1735_, v_x2_1737_);
v___x_1739_ = lean_unbox(v___x_1738_);
if (v___x_1739_ == 0)
{
lean_dec(v_x2_1737_);
return v_x1_1736_;
}
else
{
lean_object* v___x_1740_; 
v___x_1740_ = l_Lean_PersistentArray_push___redArg(v_x1_1736_, v_x2_1737_);
return v___x_1740_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter___redArg(lean_object* v_as_1741_, lean_object* v_p_1742_){
_start:
{
lean_object* v___f_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; 
v___f_1743_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1743_, 0, v_p_1742_);
v___x_1744_ = lean_unsigned_to_nat(32u);
v___x_1745_ = lean_mk_empty_array_with_capacity(v___x_1744_);
lean_dec_ref(v___x_1745_);
v___x_1746_ = lean_unsigned_to_nat(0u);
v___x_1747_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
v___x_1748_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1749_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1748_, v_as_1741_, v___f_1743_, v___x_1747_, v___x_1746_);
return v___x_1749_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_filter(lean_object* v_00_u03b1_1750_, lean_object* v_as_1751_, lean_object* v_p_1752_){
_start:
{
lean_object* v___f_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v___x_1756_; lean_object* v___x_1757_; lean_object* v___x_1758_; lean_object* v___x_1759_; 
v___f_1753_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_filter___redArg___lam__0), 3, 1);
lean_closure_set(v___f_1753_, 0, v_p_1752_);
v___x_1754_ = lean_unsigned_to_nat(32u);
v___x_1755_ = lean_mk_empty_array_with_capacity(v___x_1754_);
lean_dec_ref(v___x_1755_);
v___x_1756_ = lean_unsigned_to_nat(0u);
v___x_1757_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
v___x_1758_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_1759_ = l_Lean_PersistentArray_foldlM___redArg(v___x_1758_, v_as_1751_, v___f_1753_, v___x_1757_, v___x_1756_);
return v___x_1759_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(lean_object* v_as_1760_, size_t v_i_1761_, size_t v_stop_1762_, lean_object* v_b_1763_){
_start:
{
uint8_t v___x_1764_; 
v___x_1764_ = lean_usize_dec_eq(v_i_1761_, v_stop_1762_);
if (v___x_1764_ == 0)
{
lean_object* v___x_1765_; lean_object* v___x_1766_; size_t v___x_1767_; size_t v___x_1768_; 
v___x_1765_ = lean_array_uget_borrowed(v_as_1760_, v_i_1761_);
lean_inc(v___x_1765_);
v___x_1766_ = lean_array_push(v_b_1763_, v___x_1765_);
v___x_1767_ = ((size_t)1ULL);
v___x_1768_ = lean_usize_add(v_i_1761_, v___x_1767_);
v_i_1761_ = v___x_1768_;
v_b_1763_ = v___x_1766_;
goto _start;
}
else
{
return v_b_1763_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg___boxed(lean_object* v_as_1770_, lean_object* v_i_1771_, lean_object* v_stop_1772_, lean_object* v_b_1773_){
_start:
{
size_t v_i_boxed_1774_; size_t v_stop_boxed_1775_; lean_object* v_res_1776_; 
v_i_boxed_1774_ = lean_unbox_usize(v_i_1771_);
lean_dec(v_i_1771_);
v_stop_boxed_1775_ = lean_unbox_usize(v_stop_1772_);
lean_dec(v_stop_1772_);
v_res_1776_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_as_1770_, v_i_boxed_1774_, v_stop_boxed_1775_, v_b_1773_);
lean_dec_ref(v_as_1770_);
return v_res_1776_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(lean_object* v_x_1777_, lean_object* v_x_1778_){
_start:
{
if (lean_obj_tag(v_x_1777_) == 0)
{
lean_object* v_cs_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; uint8_t v___x_1782_; 
v_cs_1779_ = lean_ctor_get(v_x_1777_, 0);
v___x_1780_ = lean_unsigned_to_nat(0u);
v___x_1781_ = lean_array_get_size(v_cs_1779_);
v___x_1782_ = lean_nat_dec_lt(v___x_1780_, v___x_1781_);
if (v___x_1782_ == 0)
{
return v_x_1778_;
}
else
{
size_t v___x_1783_; size_t v___x_1784_; lean_object* v___x_1785_; 
v___x_1783_ = ((size_t)0ULL);
v___x_1784_ = lean_usize_of_nat(v___x_1781_);
v___x_1785_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_cs_1779_, v___x_1783_, v___x_1784_, v_x_1778_);
return v___x_1785_;
}
}
else
{
lean_object* v_vs_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; uint8_t v___x_1789_; 
v_vs_1786_ = lean_ctor_get(v_x_1777_, 0);
v___x_1787_ = lean_unsigned_to_nat(0u);
v___x_1788_ = lean_array_get_size(v_vs_1786_);
v___x_1789_ = lean_nat_dec_lt(v___x_1787_, v___x_1788_);
if (v___x_1789_ == 0)
{
return v_x_1778_;
}
else
{
size_t v___x_1790_; size_t v___x_1791_; lean_object* v___x_1792_; 
v___x_1790_ = ((size_t)0ULL);
v___x_1791_ = lean_usize_of_nat(v___x_1788_);
v___x_1792_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_vs_1786_, v___x_1790_, v___x_1791_, v_x_1778_);
return v___x_1792_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(lean_object* v_as_1793_, size_t v_i_1794_, size_t v_stop_1795_, lean_object* v_b_1796_){
_start:
{
uint8_t v___x_1797_; 
v___x_1797_ = lean_usize_dec_eq(v_i_1794_, v_stop_1795_);
if (v___x_1797_ == 0)
{
lean_object* v___x_1798_; lean_object* v___x_1799_; size_t v___x_1800_; size_t v___x_1801_; 
v___x_1798_ = lean_array_uget_borrowed(v_as_1793_, v_i_1794_);
v___x_1799_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v___x_1798_, v_b_1796_);
v___x_1800_ = ((size_t)1ULL);
v___x_1801_ = lean_usize_add(v_i_1794_, v___x_1800_);
v_i_1794_ = v___x_1801_;
v_b_1796_ = v___x_1799_;
goto _start;
}
else
{
return v_b_1796_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_1803_, lean_object* v_i_1804_, lean_object* v_stop_1805_, lean_object* v_b_1806_){
_start:
{
size_t v_i_boxed_1807_; size_t v_stop_boxed_1808_; lean_object* v_res_1809_; 
v_i_boxed_1807_ = lean_unbox_usize(v_i_1804_);
lean_dec(v_i_1804_);
v_stop_boxed_1808_ = lean_unbox_usize(v_stop_1805_);
lean_dec(v_stop_1805_);
v_res_1809_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_as_1803_, v_i_boxed_1807_, v_stop_boxed_1808_, v_b_1806_);
lean_dec_ref(v_as_1803_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg___boxed(lean_object* v_x_1810_, lean_object* v_x_1811_){
_start:
{
lean_object* v_res_1812_; 
v_res_1812_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v_x_1810_, v_x_1811_);
lean_dec_ref(v_x_1810_);
return v_res_1812_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(lean_object* v_x_1813_, size_t v_x_1814_, size_t v_x_1815_, lean_object* v_x_1816_){
_start:
{
if (lean_obj_tag(v_x_1813_) == 0)
{
lean_object* v_cs_1817_; lean_object* v___x_1818_; size_t v___x_1819_; lean_object* v_j_1820_; lean_object* v___x_1821_; size_t v___x_1822_; size_t v___x_1823_; size_t v___x_1824_; size_t v___x_1825_; size_t v___x_1826_; size_t v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; uint8_t v___x_1832_; 
v_cs_1817_ = lean_ctor_get(v_x_1813_, 0);
v___x_1818_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_1819_ = lean_usize_shift_right(v_x_1814_, v_x_1815_);
v_j_1820_ = lean_usize_to_nat(v___x_1819_);
v___x_1821_ = lean_array_get_borrowed(v___x_1818_, v_cs_1817_, v_j_1820_);
v___x_1822_ = ((size_t)1ULL);
v___x_1823_ = lean_usize_shift_left(v___x_1822_, v_x_1815_);
v___x_1824_ = lean_usize_sub(v___x_1823_, v___x_1822_);
v___x_1825_ = lean_usize_land(v_x_1814_, v___x_1824_);
v___x_1826_ = ((size_t)5ULL);
v___x_1827_ = lean_usize_sub(v_x_1815_, v___x_1826_);
v___x_1828_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v___x_1821_, v___x_1825_, v___x_1827_, v_x_1816_);
v___x_1829_ = lean_unsigned_to_nat(1u);
v___x_1830_ = lean_nat_add(v_j_1820_, v___x_1829_);
lean_dec(v_j_1820_);
v___x_1831_ = lean_array_get_size(v_cs_1817_);
v___x_1832_ = lean_nat_dec_lt(v___x_1830_, v___x_1831_);
if (v___x_1832_ == 0)
{
lean_dec(v___x_1830_);
return v___x_1828_;
}
else
{
size_t v___x_1833_; size_t v___x_1834_; lean_object* v___x_1835_; 
v___x_1833_ = lean_usize_of_nat(v___x_1830_);
lean_dec(v___x_1830_);
v___x_1834_ = lean_usize_of_nat(v___x_1831_);
v___x_1835_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_cs_1817_, v___x_1833_, v___x_1834_, v___x_1828_);
return v___x_1835_;
}
}
else
{
lean_object* v_vs_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; uint8_t v___x_1839_; 
v_vs_1836_ = lean_ctor_get(v_x_1813_, 0);
v___x_1837_ = lean_usize_to_nat(v_x_1814_);
v___x_1838_ = lean_array_get_size(v_vs_1836_);
v___x_1839_ = lean_nat_dec_lt(v___x_1837_, v___x_1838_);
if (v___x_1839_ == 0)
{
lean_dec(v___x_1837_);
return v_x_1816_;
}
else
{
size_t v___x_1840_; size_t v___x_1841_; lean_object* v___x_1842_; 
v___x_1840_ = lean_usize_of_nat(v___x_1837_);
lean_dec(v___x_1837_);
v___x_1841_ = lean_usize_of_nat(v___x_1838_);
v___x_1842_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_vs_1836_, v___x_1840_, v___x_1841_, v_x_1816_);
return v___x_1842_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg___boxed(lean_object* v_x_1843_, lean_object* v_x_1844_, lean_object* v_x_1845_, lean_object* v_x_1846_){
_start:
{
size_t v_x_1124__boxed_1847_; size_t v_x_1125__boxed_1848_; lean_object* v_res_1849_; 
v_x_1124__boxed_1847_ = lean_unbox_usize(v_x_1844_);
lean_dec(v_x_1844_);
v_x_1125__boxed_1848_ = lean_unbox_usize(v_x_1845_);
lean_dec(v_x_1845_);
v_res_1849_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v_x_1843_, v_x_1124__boxed_1847_, v_x_1125__boxed_1848_, v_x_1846_);
lean_dec_ref(v_x_1843_);
return v_res_1849_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(lean_object* v_t_1850_, lean_object* v_init_1851_, lean_object* v_start_1852_){
_start:
{
lean_object* v___x_1853_; uint8_t v___x_1854_; 
v___x_1853_ = lean_unsigned_to_nat(0u);
v___x_1854_ = lean_nat_dec_eq(v_start_1852_, v___x_1853_);
if (v___x_1854_ == 0)
{
lean_object* v_root_1855_; lean_object* v_tail_1856_; size_t v_shift_1857_; lean_object* v_tailOff_1858_; uint8_t v___x_1859_; 
v_root_1855_ = lean_ctor_get(v_t_1850_, 0);
v_tail_1856_ = lean_ctor_get(v_t_1850_, 1);
v_shift_1857_ = lean_ctor_get_usize(v_t_1850_, 4);
v_tailOff_1858_ = lean_ctor_get(v_t_1850_, 3);
v___x_1859_ = lean_nat_dec_le(v_tailOff_1858_, v_start_1852_);
if (v___x_1859_ == 0)
{
size_t v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; uint8_t v___x_1863_; 
v___x_1860_ = lean_usize_of_nat(v_start_1852_);
v___x_1861_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v_root_1855_, v___x_1860_, v_shift_1857_, v_init_1851_);
v___x_1862_ = lean_array_get_size(v_tail_1856_);
v___x_1863_ = lean_nat_dec_lt(v___x_1853_, v___x_1862_);
if (v___x_1863_ == 0)
{
return v___x_1861_;
}
else
{
size_t v___x_1864_; size_t v___x_1865_; lean_object* v___x_1866_; 
v___x_1864_ = ((size_t)0ULL);
v___x_1865_ = lean_usize_of_nat(v___x_1862_);
v___x_1866_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_tail_1856_, v___x_1864_, v___x_1865_, v___x_1861_);
return v___x_1866_;
}
}
else
{
lean_object* v___x_1867_; lean_object* v___x_1868_; uint8_t v___x_1869_; 
v___x_1867_ = lean_nat_sub(v_start_1852_, v_tailOff_1858_);
v___x_1868_ = lean_array_get_size(v_tail_1856_);
v___x_1869_ = lean_nat_dec_lt(v___x_1867_, v___x_1868_);
if (v___x_1869_ == 0)
{
lean_dec(v___x_1867_);
return v_init_1851_;
}
else
{
size_t v___x_1870_; size_t v___x_1871_; lean_object* v___x_1872_; 
v___x_1870_ = lean_usize_of_nat(v___x_1867_);
lean_dec(v___x_1867_);
v___x_1871_ = lean_usize_of_nat(v___x_1868_);
v___x_1872_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_tail_1856_, v___x_1870_, v___x_1871_, v_init_1851_);
return v___x_1872_;
}
}
}
else
{
lean_object* v_root_1873_; lean_object* v_tail_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; uint8_t v___x_1877_; 
v_root_1873_ = lean_ctor_get(v_t_1850_, 0);
v_tail_1874_ = lean_ctor_get(v_t_1850_, 1);
v___x_1875_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v_root_1873_, v_init_1851_);
v___x_1876_ = lean_array_get_size(v_tail_1874_);
v___x_1877_ = lean_nat_dec_lt(v___x_1853_, v___x_1876_);
if (v___x_1877_ == 0)
{
return v___x_1875_;
}
else
{
size_t v___x_1878_; size_t v___x_1879_; lean_object* v___x_1880_; 
v___x_1878_ = ((size_t)0ULL);
v___x_1879_ = lean_usize_of_nat(v___x_1876_);
v___x_1880_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_tail_1874_, v___x_1878_, v___x_1879_, v___x_1875_);
return v___x_1880_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg___boxed(lean_object* v_t_1881_, lean_object* v_init_1882_, lean_object* v_start_1883_){
_start:
{
lean_object* v_res_1884_; 
v_res_1884_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(v_t_1881_, v_init_1882_, v_start_1883_);
lean_dec(v_start_1883_);
lean_dec_ref(v_t_1881_);
return v_res_1884_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg(lean_object* v_t_1885_){
_start:
{
lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; 
v___x_1886_ = lean_unsigned_to_nat(0u);
v___x_1887_ = ((lean_object*)(l_Lean_PersistentArray_mkNewTail___redArg___closed__0));
v___x_1888_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(v_t_1885_, v___x_1887_, v___x_1886_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___redArg___boxed(lean_object* v_t_1889_){
_start:
{
lean_object* v_res_1890_; 
v_res_1890_ = l_Lean_PersistentArray_toArray___redArg(v_t_1889_);
lean_dec_ref(v_t_1889_);
return v_res_1890_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray(lean_object* v_00_u03b1_1891_, lean_object* v_t_1892_){
_start:
{
lean_object* v___x_1893_; 
v___x_1893_ = l_Lean_PersistentArray_toArray___redArg(v_t_1892_);
return v___x_1893_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toArray___boxed(lean_object* v_00_u03b1_1894_, lean_object* v_t_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l_Lean_PersistentArray_toArray(v_00_u03b1_1894_, v_t_1895_);
lean_dec_ref(v_t_1895_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0(lean_object* v_00_u03b1_1897_, lean_object* v_t_1898_, lean_object* v_init_1899_, lean_object* v_start_1900_){
_start:
{
lean_object* v___x_1901_; 
v___x_1901_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___redArg(v_t_1898_, v_init_1899_, v_start_1900_);
return v___x_1901_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0___boxed(lean_object* v_00_u03b1_1902_, lean_object* v_t_1903_, lean_object* v_init_1904_, lean_object* v_start_1905_){
_start:
{
lean_object* v_res_1906_; 
v_res_1906_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0(v_00_u03b1_1902_, v_t_1903_, v_init_1904_, v_start_1905_);
lean_dec(v_start_1905_);
lean_dec_ref(v_t_1903_);
return v_res_1906_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0(lean_object* v_00_u03b1_1907_, lean_object* v_x_1908_, size_t v_x_1909_, size_t v_x_1910_, lean_object* v_x_1911_){
_start:
{
lean_object* v___x_1912_; 
v___x_1912_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___redArg(v_x_1908_, v_x_1909_, v_x_1910_, v_x_1911_);
return v___x_1912_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0___boxed(lean_object* v_00_u03b1_1913_, lean_object* v_x_1914_, lean_object* v_x_1915_, lean_object* v_x_1916_, lean_object* v_x_1917_){
_start:
{
size_t v_x_1242__boxed_1918_; size_t v_x_1243__boxed_1919_; lean_object* v_res_1920_; 
v_x_1242__boxed_1918_ = lean_unbox_usize(v_x_1915_);
lean_dec(v_x_1915_);
v_x_1243__boxed_1919_ = lean_unbox_usize(v_x_1916_);
lean_dec(v_x_1916_);
v_res_1920_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0(v_00_u03b1_1913_, v_x_1914_, v_x_1242__boxed_1918_, v_x_1243__boxed_1919_, v_x_1917_);
lean_dec_ref(v_x_1914_);
return v_res_1920_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1(lean_object* v_00_u03b1_1921_, lean_object* v_as_1922_, size_t v_i_1923_, size_t v_stop_1924_, lean_object* v_b_1925_){
_start:
{
lean_object* v___x_1926_; 
v___x_1926_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___redArg(v_as_1922_, v_i_1923_, v_stop_1924_, v_b_1925_);
return v___x_1926_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1927_, lean_object* v_as_1928_, lean_object* v_i_1929_, lean_object* v_stop_1930_, lean_object* v_b_1931_){
_start:
{
size_t v_i_boxed_1932_; size_t v_stop_boxed_1933_; lean_object* v_res_1934_; 
v_i_boxed_1932_ = lean_unbox_usize(v_i_1929_);
lean_dec(v_i_1929_);
v_stop_boxed_1933_ = lean_unbox_usize(v_stop_1930_);
lean_dec(v_stop_1930_);
v_res_1934_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__1(v_00_u03b1_1927_, v_as_1928_, v_i_boxed_1932_, v_stop_boxed_1933_, v_b_1931_);
lean_dec_ref(v_as_1928_);
return v_res_1934_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2(lean_object* v_00_u03b1_1935_, lean_object* v_x_1936_, lean_object* v_x_1937_){
_start:
{
lean_object* v___x_1938_; 
v___x_1938_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___redArg(v_x_1936_, v_x_1937_);
return v___x_1938_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2___boxed(lean_object* v_00_u03b1_1939_, lean_object* v_x_1940_, lean_object* v_x_1941_){
_start:
{
lean_object* v_res_1942_; 
v_res_1942_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__2(v_00_u03b1_1939_, v_x_1940_, v_x_1941_);
lean_dec_ref(v_x_1940_);
return v_res_1942_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_1943_, lean_object* v_as_1944_, size_t v_i_1945_, size_t v_stop_1946_, lean_object* v_b_1947_){
_start:
{
lean_object* v___x_1948_; 
v___x_1948_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___redArg(v_as_1944_, v_i_1945_, v_stop_1946_, v_b_1947_);
return v___x_1948_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_1949_, lean_object* v_as_1950_, lean_object* v_i_1951_, lean_object* v_stop_1952_, lean_object* v_b_1953_){
_start:
{
size_t v_i_boxed_1954_; size_t v_stop_boxed_1955_; lean_object* v_res_1956_; 
v_i_boxed_1954_ = lean_unbox_usize(v_i_1951_);
lean_dec(v_i_1951_);
v_stop_boxed_1955_ = lean_unbox_usize(v_stop_1952_);
lean_dec(v_stop_1952_);
v_res_1956_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toArray_spec__0_spec__0_spec__1(v_00_u03b1_1949_, v_as_1950_, v_i_boxed_1954_, v_stop_boxed_1955_, v_b_1953_);
lean_dec_ref(v_as_1950_);
return v_res_1956_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(lean_object* v_as_1957_, size_t v_i_1958_, size_t v_stop_1959_, lean_object* v_b_1960_){
_start:
{
uint8_t v___x_1961_; 
v___x_1961_ = lean_usize_dec_eq(v_i_1958_, v_stop_1959_);
if (v___x_1961_ == 0)
{
lean_object* v___x_1962_; lean_object* v___x_1963_; size_t v___x_1964_; size_t v___x_1965_; 
v___x_1962_ = lean_array_uget_borrowed(v_as_1957_, v_i_1958_);
lean_inc(v___x_1962_);
v___x_1963_ = l_Lean_PersistentArray_push___redArg(v_b_1960_, v___x_1962_);
v___x_1964_ = ((size_t)1ULL);
v___x_1965_ = lean_usize_add(v_i_1958_, v___x_1964_);
v_i_1958_ = v___x_1965_;
v_b_1960_ = v___x_1963_;
goto _start;
}
else
{
return v_b_1960_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg___boxed(lean_object* v_as_1967_, lean_object* v_i_1968_, lean_object* v_stop_1969_, lean_object* v_b_1970_){
_start:
{
size_t v_i_boxed_1971_; size_t v_stop_boxed_1972_; lean_object* v_res_1973_; 
v_i_boxed_1971_ = lean_unbox_usize(v_i_1968_);
lean_dec(v_i_1968_);
v_stop_boxed_1972_ = lean_unbox_usize(v_stop_1969_);
lean_dec(v_stop_1969_);
v_res_1973_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_as_1967_, v_i_boxed_1971_, v_stop_boxed_1972_, v_b_1970_);
lean_dec_ref(v_as_1967_);
return v_res_1973_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(lean_object* v_x_1974_, lean_object* v_x_1975_){
_start:
{
if (lean_obj_tag(v_x_1974_) == 0)
{
lean_object* v_cs_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; uint8_t v___x_1979_; 
v_cs_1976_ = lean_ctor_get(v_x_1974_, 0);
v___x_1977_ = lean_unsigned_to_nat(0u);
v___x_1978_ = lean_array_get_size(v_cs_1976_);
v___x_1979_ = lean_nat_dec_lt(v___x_1977_, v___x_1978_);
if (v___x_1979_ == 0)
{
return v_x_1975_;
}
else
{
size_t v___x_1980_; size_t v___x_1981_; lean_object* v___x_1982_; 
v___x_1980_ = ((size_t)0ULL);
v___x_1981_ = lean_usize_of_nat(v___x_1978_);
v___x_1982_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_cs_1976_, v___x_1980_, v___x_1981_, v_x_1975_);
return v___x_1982_;
}
}
else
{
lean_object* v_vs_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; uint8_t v___x_1986_; 
v_vs_1983_ = lean_ctor_get(v_x_1974_, 0);
v___x_1984_ = lean_unsigned_to_nat(0u);
v___x_1985_ = lean_array_get_size(v_vs_1983_);
v___x_1986_ = lean_nat_dec_lt(v___x_1984_, v___x_1985_);
if (v___x_1986_ == 0)
{
return v_x_1975_;
}
else
{
size_t v___x_1987_; size_t v___x_1988_; lean_object* v___x_1989_; 
v___x_1987_ = ((size_t)0ULL);
v___x_1988_ = lean_usize_of_nat(v___x_1985_);
v___x_1989_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_vs_1983_, v___x_1987_, v___x_1988_, v_x_1975_);
return v___x_1989_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(lean_object* v_as_1990_, size_t v_i_1991_, size_t v_stop_1992_, lean_object* v_b_1993_){
_start:
{
uint8_t v___x_1994_; 
v___x_1994_ = lean_usize_dec_eq(v_i_1991_, v_stop_1992_);
if (v___x_1994_ == 0)
{
lean_object* v___x_1995_; lean_object* v___x_1996_; size_t v___x_1997_; size_t v___x_1998_; 
v___x_1995_ = lean_array_uget_borrowed(v_as_1990_, v_i_1991_);
v___x_1996_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v___x_1995_, v_b_1993_);
v___x_1997_ = ((size_t)1ULL);
v___x_1998_ = lean_usize_add(v_i_1991_, v___x_1997_);
v_i_1991_ = v___x_1998_;
v_b_1993_ = v___x_1996_;
goto _start;
}
else
{
return v_b_1993_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_2000_, lean_object* v_i_2001_, lean_object* v_stop_2002_, lean_object* v_b_2003_){
_start:
{
size_t v_i_boxed_2004_; size_t v_stop_boxed_2005_; lean_object* v_res_2006_; 
v_i_boxed_2004_ = lean_unbox_usize(v_i_2001_);
lean_dec(v_i_2001_);
v_stop_boxed_2005_ = lean_unbox_usize(v_stop_2002_);
lean_dec(v_stop_2002_);
v_res_2006_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_as_2000_, v_i_boxed_2004_, v_stop_boxed_2005_, v_b_2003_);
lean_dec_ref(v_as_2000_);
return v_res_2006_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg___boxed(lean_object* v_x_2007_, lean_object* v_x_2008_){
_start:
{
lean_object* v_res_2009_; 
v_res_2009_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v_x_2007_, v_x_2008_);
lean_dec_ref(v_x_2007_);
return v_res_2009_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(lean_object* v_x_2010_, size_t v_x_2011_, size_t v_x_2012_, lean_object* v_x_2013_){
_start:
{
if (lean_obj_tag(v_x_2010_) == 0)
{
lean_object* v_cs_2014_; lean_object* v___x_2015_; size_t v___x_2016_; lean_object* v_j_2017_; lean_object* v___x_2018_; size_t v___x_2019_; size_t v___x_2020_; size_t v___x_2021_; size_t v___x_2022_; size_t v___x_2023_; size_t v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2026_; lean_object* v___x_2027_; lean_object* v___x_2028_; uint8_t v___x_2029_; 
v_cs_2014_ = lean_ctor_get(v_x_2010_, 0);
v___x_2015_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_2016_ = lean_usize_shift_right(v_x_2011_, v_x_2012_);
v_j_2017_ = lean_usize_to_nat(v___x_2016_);
v___x_2018_ = lean_array_get_borrowed(v___x_2015_, v_cs_2014_, v_j_2017_);
v___x_2019_ = ((size_t)1ULL);
v___x_2020_ = lean_usize_shift_left(v___x_2019_, v_x_2012_);
v___x_2021_ = lean_usize_sub(v___x_2020_, v___x_2019_);
v___x_2022_ = lean_usize_land(v_x_2011_, v___x_2021_);
v___x_2023_ = ((size_t)5ULL);
v___x_2024_ = lean_usize_sub(v_x_2012_, v___x_2023_);
v___x_2025_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v___x_2018_, v___x_2022_, v___x_2024_, v_x_2013_);
v___x_2026_ = lean_unsigned_to_nat(1u);
v___x_2027_ = lean_nat_add(v_j_2017_, v___x_2026_);
lean_dec(v_j_2017_);
v___x_2028_ = lean_array_get_size(v_cs_2014_);
v___x_2029_ = lean_nat_dec_lt(v___x_2027_, v___x_2028_);
if (v___x_2029_ == 0)
{
lean_dec(v___x_2027_);
return v___x_2025_;
}
else
{
size_t v___x_2030_; size_t v___x_2031_; lean_object* v___x_2032_; 
v___x_2030_ = lean_usize_of_nat(v___x_2027_);
lean_dec(v___x_2027_);
v___x_2031_ = lean_usize_of_nat(v___x_2028_);
v___x_2032_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_cs_2014_, v___x_2030_, v___x_2031_, v___x_2025_);
return v___x_2032_;
}
}
else
{
lean_object* v_vs_2033_; lean_object* v___x_2034_; lean_object* v___x_2035_; uint8_t v___x_2036_; 
v_vs_2033_ = lean_ctor_get(v_x_2010_, 0);
v___x_2034_ = lean_usize_to_nat(v_x_2011_);
v___x_2035_ = lean_array_get_size(v_vs_2033_);
v___x_2036_ = lean_nat_dec_lt(v___x_2034_, v___x_2035_);
if (v___x_2036_ == 0)
{
lean_dec(v___x_2034_);
return v_x_2013_;
}
else
{
size_t v___x_2037_; size_t v___x_2038_; lean_object* v___x_2039_; 
v___x_2037_ = lean_usize_of_nat(v___x_2034_);
lean_dec(v___x_2034_);
v___x_2038_ = lean_usize_of_nat(v___x_2035_);
v___x_2039_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_vs_2033_, v___x_2037_, v___x_2038_, v_x_2013_);
return v___x_2039_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg___boxed(lean_object* v_x_2040_, lean_object* v_x_2041_, lean_object* v_x_2042_, lean_object* v_x_2043_){
_start:
{
size_t v_x_1141__boxed_2044_; size_t v_x_1142__boxed_2045_; lean_object* v_res_2046_; 
v_x_1141__boxed_2044_ = lean_unbox_usize(v_x_2041_);
lean_dec(v_x_2041_);
v_x_1142__boxed_2045_ = lean_unbox_usize(v_x_2042_);
lean_dec(v_x_2042_);
v_res_2046_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v_x_2040_, v_x_1141__boxed_2044_, v_x_1142__boxed_2045_, v_x_2043_);
lean_dec_ref(v_x_2040_);
return v_res_2046_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(lean_object* v_t_2047_, lean_object* v_init_2048_, lean_object* v_start_2049_){
_start:
{
lean_object* v___x_2050_; uint8_t v___x_2051_; 
v___x_2050_ = lean_unsigned_to_nat(0u);
v___x_2051_ = lean_nat_dec_eq(v_start_2049_, v___x_2050_);
if (v___x_2051_ == 0)
{
lean_object* v_root_2052_; lean_object* v_tail_2053_; size_t v_shift_2054_; lean_object* v_tailOff_2055_; uint8_t v___x_2056_; 
v_root_2052_ = lean_ctor_get(v_t_2047_, 0);
v_tail_2053_ = lean_ctor_get(v_t_2047_, 1);
v_shift_2054_ = lean_ctor_get_usize(v_t_2047_, 4);
v_tailOff_2055_ = lean_ctor_get(v_t_2047_, 3);
v___x_2056_ = lean_nat_dec_le(v_tailOff_2055_, v_start_2049_);
if (v___x_2056_ == 0)
{
size_t v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; uint8_t v___x_2060_; 
v___x_2057_ = lean_usize_of_nat(v_start_2049_);
v___x_2058_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v_root_2052_, v___x_2057_, v_shift_2054_, v_init_2048_);
v___x_2059_ = lean_array_get_size(v_tail_2053_);
v___x_2060_ = lean_nat_dec_lt(v___x_2050_, v___x_2059_);
if (v___x_2060_ == 0)
{
return v___x_2058_;
}
else
{
size_t v___x_2061_; size_t v___x_2062_; lean_object* v___x_2063_; 
v___x_2061_ = ((size_t)0ULL);
v___x_2062_ = lean_usize_of_nat(v___x_2059_);
v___x_2063_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_tail_2053_, v___x_2061_, v___x_2062_, v___x_2058_);
return v___x_2063_;
}
}
else
{
lean_object* v___x_2064_; lean_object* v___x_2065_; uint8_t v___x_2066_; 
v___x_2064_ = lean_nat_sub(v_start_2049_, v_tailOff_2055_);
v___x_2065_ = lean_array_get_size(v_tail_2053_);
v___x_2066_ = lean_nat_dec_lt(v___x_2064_, v___x_2065_);
if (v___x_2066_ == 0)
{
lean_dec(v___x_2064_);
return v_init_2048_;
}
else
{
size_t v___x_2067_; size_t v___x_2068_; lean_object* v___x_2069_; 
v___x_2067_ = lean_usize_of_nat(v___x_2064_);
lean_dec(v___x_2064_);
v___x_2068_ = lean_usize_of_nat(v___x_2065_);
v___x_2069_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_tail_2053_, v___x_2067_, v___x_2068_, v_init_2048_);
return v___x_2069_;
}
}
}
else
{
lean_object* v_root_2070_; lean_object* v_tail_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; uint8_t v___x_2074_; 
v_root_2070_ = lean_ctor_get(v_t_2047_, 0);
v_tail_2071_ = lean_ctor_get(v_t_2047_, 1);
v___x_2072_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v_root_2070_, v_init_2048_);
v___x_2073_ = lean_array_get_size(v_tail_2071_);
v___x_2074_ = lean_nat_dec_lt(v___x_2050_, v___x_2073_);
if (v___x_2074_ == 0)
{
return v___x_2072_;
}
else
{
size_t v___x_2075_; size_t v___x_2076_; lean_object* v___x_2077_; 
v___x_2075_ = ((size_t)0ULL);
v___x_2076_ = lean_usize_of_nat(v___x_2073_);
v___x_2077_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_tail_2071_, v___x_2075_, v___x_2076_, v___x_2072_);
return v___x_2077_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg___boxed(lean_object* v_t_2078_, lean_object* v_init_2079_, lean_object* v_start_2080_){
_start:
{
lean_object* v_res_2081_; 
v_res_2081_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(v_t_2078_, v_init_2079_, v_start_2080_);
lean_dec(v_start_2080_);
lean_dec_ref(v_t_2078_);
return v_res_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg(lean_object* v_t_u2081_2082_, lean_object* v_t_u2082_2083_){
_start:
{
uint8_t v___x_2084_; 
v___x_2084_ = l_Lean_PersistentArray_isEmpty___redArg(v_t_u2081_2082_);
if (v___x_2084_ == 0)
{
lean_object* v___x_2085_; lean_object* v___x_2086_; 
v___x_2085_ = lean_unsigned_to_nat(0u);
v___x_2086_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(v_t_u2082_2083_, v_t_u2081_2082_, v___x_2085_);
return v___x_2086_;
}
else
{
lean_dec_ref(v_t_u2081_2082_);
lean_inc_ref(v_t_u2082_2083_);
return v_t_u2082_2083_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___redArg___boxed(lean_object* v_t_u2081_2087_, lean_object* v_t_u2082_2088_){
_start:
{
lean_object* v_res_2089_; 
v_res_2089_ = l_Lean_PersistentArray_append___redArg(v_t_u2081_2087_, v_t_u2082_2088_);
lean_dec_ref(v_t_u2082_2088_);
return v_res_2089_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append(lean_object* v_00_u03b1_2090_, lean_object* v_t_u2081_2091_, lean_object* v_t_u2082_2092_){
_start:
{
lean_object* v___x_2093_; 
v___x_2093_ = l_Lean_PersistentArray_append___redArg(v_t_u2081_2091_, v_t_u2082_2092_);
return v___x_2093_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_append___boxed(lean_object* v_00_u03b1_2094_, lean_object* v_t_u2081_2095_, lean_object* v_t_u2082_2096_){
_start:
{
lean_object* v_res_2097_; 
v_res_2097_ = l_Lean_PersistentArray_append(v_00_u03b1_2094_, v_t_u2081_2095_, v_t_u2082_2096_);
lean_dec_ref(v_t_u2082_2096_);
return v_res_2097_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0(lean_object* v_00_u03b1_2098_, lean_object* v_t_2099_, lean_object* v_init_2100_, lean_object* v_start_2101_){
_start:
{
lean_object* v___x_2102_; 
v___x_2102_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___redArg(v_t_2099_, v_init_2100_, v_start_2101_);
return v___x_2102_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0___boxed(lean_object* v_00_u03b1_2103_, lean_object* v_t_2104_, lean_object* v_init_2105_, lean_object* v_start_2106_){
_start:
{
lean_object* v_res_2107_; 
v_res_2107_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0(v_00_u03b1_2103_, v_t_2104_, v_init_2105_, v_start_2106_);
lean_dec(v_start_2106_);
lean_dec_ref(v_t_2104_);
return v_res_2107_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0(lean_object* v_00_u03b1_2108_, lean_object* v_x_2109_, size_t v_x_2110_, size_t v_x_2111_, lean_object* v_x_2112_){
_start:
{
lean_object* v___x_2113_; 
v___x_2113_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___redArg(v_x_2109_, v_x_2110_, v_x_2111_, v_x_2112_);
return v___x_2113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2114_, lean_object* v_x_2115_, lean_object* v_x_2116_, lean_object* v_x_2117_, lean_object* v_x_2118_){
_start:
{
size_t v_x_1257__boxed_2119_; size_t v_x_1258__boxed_2120_; lean_object* v_res_2121_; 
v_x_1257__boxed_2119_ = lean_unbox_usize(v_x_2116_);
lean_dec(v_x_2116_);
v_x_1258__boxed_2120_ = lean_unbox_usize(v_x_2117_);
lean_dec(v_x_2117_);
v_res_2121_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0(v_00_u03b1_2114_, v_x_2115_, v_x_1257__boxed_2119_, v_x_1258__boxed_2120_, v_x_2118_);
lean_dec_ref(v_x_2115_);
return v_res_2121_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1(lean_object* v_00_u03b1_2122_, lean_object* v_as_2123_, size_t v_i_2124_, size_t v_stop_2125_, lean_object* v_b_2126_){
_start:
{
lean_object* v___x_2127_; 
v___x_2127_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_as_2123_, v_i_2124_, v_stop_2125_, v_b_2126_);
return v___x_2127_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2128_, lean_object* v_as_2129_, lean_object* v_i_2130_, lean_object* v_stop_2131_, lean_object* v_b_2132_){
_start:
{
size_t v_i_boxed_2133_; size_t v_stop_boxed_2134_; lean_object* v_res_2135_; 
v_i_boxed_2133_ = lean_unbox_usize(v_i_2130_);
lean_dec(v_i_2130_);
v_stop_boxed_2134_ = lean_unbox_usize(v_stop_2131_);
lean_dec(v_stop_2131_);
v_res_2135_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1(v_00_u03b1_2128_, v_as_2129_, v_i_boxed_2133_, v_stop_boxed_2134_, v_b_2132_);
lean_dec_ref(v_as_2129_);
return v_res_2135_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2(lean_object* v_00_u03b1_2136_, lean_object* v_x_2137_, lean_object* v_x_2138_){
_start:
{
lean_object* v___x_2139_; 
v___x_2139_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___redArg(v_x_2137_, v_x_2138_);
return v___x_2139_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2140_, lean_object* v_x_2141_, lean_object* v_x_2142_){
_start:
{
lean_object* v_res_2143_; 
v_res_2143_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__2(v_00_u03b1_2140_, v_x_2141_, v_x_2142_);
lean_dec_ref(v_x_2141_);
return v_res_2143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2144_, lean_object* v_as_2145_, size_t v_i_2146_, size_t v_stop_2147_, lean_object* v_b_2148_){
_start:
{
lean_object* v___x_2149_; 
v___x_2149_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___redArg(v_as_2145_, v_i_2146_, v_stop_2147_, v_b_2148_);
return v___x_2149_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2150_, lean_object* v_as_2151_, lean_object* v_i_2152_, lean_object* v_stop_2153_, lean_object* v_b_2154_){
_start:
{
size_t v_i_boxed_2155_; size_t v_stop_boxed_2156_; lean_object* v_res_2157_; 
v_i_boxed_2155_ = lean_unbox_usize(v_i_2152_);
lean_dec(v_i_2152_);
v_stop_boxed_2156_ = lean_unbox_usize(v_stop_2153_);
lean_dec(v_stop_2153_);
v_res_2157_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__0_spec__1(v_00_u03b1_2150_, v_as_2151_, v_i_boxed_2155_, v_stop_boxed_2156_, v_b_2154_);
lean_dec_ref(v_as_2151_);
return v_res_2157_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg(){
_start:
{
lean_object* v___x_2160_; 
v___x_2160_ = ((lean_object*)(l_Lean_PersistentArray_instAppend___redArg___closed__0));
return v___x_2160_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend___redArg___boxed(lean_object* v___dummy_2161_){
_start:
{
lean_object* v_res_2162_; 
v_res_2162_ = l_Lean_PersistentArray_instAppend___redArg();
return v_res_2162_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_instAppend(lean_object* v_00_u03b1_2163_){
_start:
{
lean_object* v___x_2164_; 
v___x_2164_ = ((lean_object*)(l_Lean_PersistentArray_instAppend___redArg___closed__0));
return v___x_2164_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg___lam__0(lean_object* v_f_2165_, lean_object* v_x_2166_){
_start:
{
lean_object* v___x_2167_; 
v___x_2167_ = lean_apply_1(v_f_2165_, v_x_2166_);
return v___x_2167_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f___redArg(lean_object* v_t_2168_, lean_object* v_f_2169_){
_start:
{
lean_object* v___f_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; 
v___f_2170_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2170_, 0, v_f_2169_);
v___x_2171_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2172_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v___x_2171_, v_t_2168_, v___f_2170_);
return v___x_2172_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSome_x3f(lean_object* v_00_u03b1_2173_, lean_object* v_00_u03b2_2174_, lean_object* v_t_2175_, lean_object* v_f_2176_){
_start:
{
lean_object* v___f_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; 
v___f_2177_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2177_, 0, v_f_2176_);
v___x_2178_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2179_ = l_Lean_PersistentArray_findSomeM_x3f___redArg(v___x_2178_, v_t_2175_, v___f_2177_);
return v___x_2179_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f___redArg(lean_object* v_t_2180_, lean_object* v_f_2181_){
_start:
{
lean_object* v___f_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; 
v___f_2182_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2182_, 0, v_f_2181_);
v___x_2183_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2184_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2183_, v_t_2180_, v___f_2182_);
return v___x_2184_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_findSomeRev_x3f(lean_object* v_00_u03b1_2185_, lean_object* v_00_u03b2_2186_, lean_object* v_t_2187_, lean_object* v_f_2188_){
_start:
{
lean_object* v___f_2189_; lean_object* v___x_2190_; lean_object* v___x_2191_; 
v___f_2189_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_findSome_x3f___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2189_, 0, v_f_2188_);
v___x_2190_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2191_ = l_Lean_PersistentArray_findSomeRevM_x3f___redArg(v___x_2190_, v_t_2187_, v___f_2189_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(lean_object* v_as_2192_, size_t v_i_2193_, size_t v_stop_2194_, lean_object* v_b_2195_){
_start:
{
uint8_t v___x_2196_; 
v___x_2196_ = lean_usize_dec_eq(v_i_2193_, v_stop_2194_);
if (v___x_2196_ == 0)
{
lean_object* v___x_2197_; lean_object* v___x_2198_; size_t v___x_2199_; size_t v___x_2200_; 
v___x_2197_ = lean_array_uget_borrowed(v_as_2192_, v_i_2193_);
lean_inc(v___x_2197_);
v___x_2198_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2198_, 0, v___x_2197_);
lean_ctor_set(v___x_2198_, 1, v_b_2195_);
v___x_2199_ = ((size_t)1ULL);
v___x_2200_ = lean_usize_add(v_i_2193_, v___x_2199_);
v_i_2193_ = v___x_2200_;
v_b_2195_ = v___x_2198_;
goto _start;
}
else
{
return v_b_2195_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg___boxed(lean_object* v_as_2202_, lean_object* v_i_2203_, lean_object* v_stop_2204_, lean_object* v_b_2205_){
_start:
{
size_t v_i_boxed_2206_; size_t v_stop_boxed_2207_; lean_object* v_res_2208_; 
v_i_boxed_2206_ = lean_unbox_usize(v_i_2203_);
lean_dec(v_i_2203_);
v_stop_boxed_2207_ = lean_unbox_usize(v_stop_2204_);
lean_dec(v_stop_2204_);
v_res_2208_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_as_2202_, v_i_boxed_2206_, v_stop_boxed_2207_, v_b_2205_);
lean_dec_ref(v_as_2202_);
return v_res_2208_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(lean_object* v_x_2209_, lean_object* v_x_2210_){
_start:
{
if (lean_obj_tag(v_x_2209_) == 0)
{
lean_object* v_cs_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; uint8_t v___x_2214_; 
v_cs_2211_ = lean_ctor_get(v_x_2209_, 0);
v___x_2212_ = lean_unsigned_to_nat(0u);
v___x_2213_ = lean_array_get_size(v_cs_2211_);
v___x_2214_ = lean_nat_dec_lt(v___x_2212_, v___x_2213_);
if (v___x_2214_ == 0)
{
return v_x_2210_;
}
else
{
size_t v___x_2215_; size_t v___x_2216_; lean_object* v___x_2217_; 
v___x_2215_ = ((size_t)0ULL);
v___x_2216_ = lean_usize_of_nat(v___x_2213_);
v___x_2217_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_cs_2211_, v___x_2215_, v___x_2216_, v_x_2210_);
return v___x_2217_;
}
}
else
{
lean_object* v_vs_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; uint8_t v___x_2221_; 
v_vs_2218_ = lean_ctor_get(v_x_2209_, 0);
v___x_2219_ = lean_unsigned_to_nat(0u);
v___x_2220_ = lean_array_get_size(v_vs_2218_);
v___x_2221_ = lean_nat_dec_lt(v___x_2219_, v___x_2220_);
if (v___x_2221_ == 0)
{
return v_x_2210_;
}
else
{
size_t v___x_2222_; size_t v___x_2223_; lean_object* v___x_2224_; 
v___x_2222_ = ((size_t)0ULL);
v___x_2223_ = lean_usize_of_nat(v___x_2220_);
v___x_2224_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_vs_2218_, v___x_2222_, v___x_2223_, v_x_2210_);
return v___x_2224_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(lean_object* v_as_2225_, size_t v_i_2226_, size_t v_stop_2227_, lean_object* v_b_2228_){
_start:
{
uint8_t v___x_2229_; 
v___x_2229_ = lean_usize_dec_eq(v_i_2226_, v_stop_2227_);
if (v___x_2229_ == 0)
{
lean_object* v___x_2230_; lean_object* v___x_2231_; size_t v___x_2232_; size_t v___x_2233_; 
v___x_2230_ = lean_array_uget_borrowed(v_as_2225_, v_i_2226_);
v___x_2231_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v___x_2230_, v_b_2228_);
v___x_2232_ = ((size_t)1ULL);
v___x_2233_ = lean_usize_add(v_i_2226_, v___x_2232_);
v_i_2226_ = v___x_2233_;
v_b_2228_ = v___x_2231_;
goto _start;
}
else
{
return v_b_2228_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_as_2235_, lean_object* v_i_2236_, lean_object* v_stop_2237_, lean_object* v_b_2238_){
_start:
{
size_t v_i_boxed_2239_; size_t v_stop_boxed_2240_; lean_object* v_res_2241_; 
v_i_boxed_2239_ = lean_unbox_usize(v_i_2236_);
lean_dec(v_i_2236_);
v_stop_boxed_2240_ = lean_unbox_usize(v_stop_2237_);
lean_dec(v_stop_2237_);
v_res_2241_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_as_2235_, v_i_boxed_2239_, v_stop_boxed_2240_, v_b_2238_);
lean_dec_ref(v_as_2235_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg___boxed(lean_object* v_x_2242_, lean_object* v_x_2243_){
_start:
{
lean_object* v_res_2244_; 
v_res_2244_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v_x_2242_, v_x_2243_);
lean_dec_ref(v_x_2242_);
return v_res_2244_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(lean_object* v_x_2245_, size_t v_x_2246_, size_t v_x_2247_, lean_object* v_x_2248_){
_start:
{
if (lean_obj_tag(v_x_2245_) == 0)
{
lean_object* v_cs_2249_; lean_object* v___x_2250_; size_t v___x_2251_; lean_object* v_j_2252_; lean_object* v___x_2253_; size_t v___x_2254_; size_t v___x_2255_; size_t v___x_2256_; size_t v___x_2257_; size_t v___x_2258_; size_t v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; lean_object* v___x_2262_; lean_object* v___x_2263_; uint8_t v___x_2264_; 
v_cs_2249_ = lean_ctor_get(v_x_2245_, 0);
v___x_2250_ = lean_obj_once(&l_Lean_instInhabitedPersistentArrayNode_default___closed__0, &l_Lean_instInhabitedPersistentArrayNode_default___closed__0_once, _init_l_Lean_instInhabitedPersistentArrayNode_default___closed__0);
v___x_2251_ = lean_usize_shift_right(v_x_2246_, v_x_2247_);
v_j_2252_ = lean_usize_to_nat(v___x_2251_);
v___x_2253_ = lean_array_get_borrowed(v___x_2250_, v_cs_2249_, v_j_2252_);
v___x_2254_ = ((size_t)1ULL);
v___x_2255_ = lean_usize_shift_left(v___x_2254_, v_x_2247_);
v___x_2256_ = lean_usize_sub(v___x_2255_, v___x_2254_);
v___x_2257_ = lean_usize_land(v_x_2246_, v___x_2256_);
v___x_2258_ = ((size_t)5ULL);
v___x_2259_ = lean_usize_sub(v_x_2247_, v___x_2258_);
v___x_2260_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v___x_2253_, v___x_2257_, v___x_2259_, v_x_2248_);
v___x_2261_ = lean_unsigned_to_nat(1u);
v___x_2262_ = lean_nat_add(v_j_2252_, v___x_2261_);
lean_dec(v_j_2252_);
v___x_2263_ = lean_array_get_size(v_cs_2249_);
v___x_2264_ = lean_nat_dec_lt(v___x_2262_, v___x_2263_);
if (v___x_2264_ == 0)
{
lean_dec(v___x_2262_);
return v___x_2260_;
}
else
{
size_t v___x_2265_; size_t v___x_2266_; lean_object* v___x_2267_; 
v___x_2265_ = lean_usize_of_nat(v___x_2262_);
lean_dec(v___x_2262_);
v___x_2266_ = lean_usize_of_nat(v___x_2263_);
v___x_2267_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_cs_2249_, v___x_2265_, v___x_2266_, v___x_2260_);
return v___x_2267_;
}
}
else
{
lean_object* v_vs_2268_; lean_object* v___x_2269_; lean_object* v___x_2270_; uint8_t v___x_2271_; 
v_vs_2268_ = lean_ctor_get(v_x_2245_, 0);
v___x_2269_ = lean_usize_to_nat(v_x_2246_);
v___x_2270_ = lean_array_get_size(v_vs_2268_);
v___x_2271_ = lean_nat_dec_lt(v___x_2269_, v___x_2270_);
if (v___x_2271_ == 0)
{
lean_dec(v___x_2269_);
return v_x_2248_;
}
else
{
size_t v___x_2272_; size_t v___x_2273_; lean_object* v___x_2274_; 
v___x_2272_ = lean_usize_of_nat(v___x_2269_);
lean_dec(v___x_2269_);
v___x_2273_ = lean_usize_of_nat(v___x_2270_);
v___x_2274_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_vs_2268_, v___x_2272_, v___x_2273_, v_x_2248_);
return v___x_2274_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg___boxed(lean_object* v_x_2275_, lean_object* v_x_2276_, lean_object* v_x_2277_, lean_object* v_x_2278_){
_start:
{
size_t v_x_1125__boxed_2279_; size_t v_x_1126__boxed_2280_; lean_object* v_res_2281_; 
v_x_1125__boxed_2279_ = lean_unbox_usize(v_x_2276_);
lean_dec(v_x_2276_);
v_x_1126__boxed_2280_ = lean_unbox_usize(v_x_2277_);
lean_dec(v_x_2277_);
v_res_2281_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v_x_2275_, v_x_1125__boxed_2279_, v_x_1126__boxed_2280_, v_x_2278_);
lean_dec_ref(v_x_2275_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(lean_object* v_t_2282_, lean_object* v_init_2283_, lean_object* v_start_2284_){
_start:
{
lean_object* v___x_2285_; uint8_t v___x_2286_; 
v___x_2285_ = lean_unsigned_to_nat(0u);
v___x_2286_ = lean_nat_dec_eq(v_start_2284_, v___x_2285_);
if (v___x_2286_ == 0)
{
lean_object* v_root_2287_; lean_object* v_tail_2288_; size_t v_shift_2289_; lean_object* v_tailOff_2290_; uint8_t v___x_2291_; 
v_root_2287_ = lean_ctor_get(v_t_2282_, 0);
v_tail_2288_ = lean_ctor_get(v_t_2282_, 1);
v_shift_2289_ = lean_ctor_get_usize(v_t_2282_, 4);
v_tailOff_2290_ = lean_ctor_get(v_t_2282_, 3);
v___x_2291_ = lean_nat_dec_le(v_tailOff_2290_, v_start_2284_);
if (v___x_2291_ == 0)
{
size_t v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2294_; uint8_t v___x_2295_; 
v___x_2292_ = lean_usize_of_nat(v_start_2284_);
v___x_2293_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v_root_2287_, v___x_2292_, v_shift_2289_, v_init_2283_);
v___x_2294_ = lean_array_get_size(v_tail_2288_);
v___x_2295_ = lean_nat_dec_lt(v___x_2285_, v___x_2294_);
if (v___x_2295_ == 0)
{
return v___x_2293_;
}
else
{
size_t v___x_2296_; size_t v___x_2297_; lean_object* v___x_2298_; 
v___x_2296_ = ((size_t)0ULL);
v___x_2297_ = lean_usize_of_nat(v___x_2294_);
v___x_2298_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_tail_2288_, v___x_2296_, v___x_2297_, v___x_2293_);
return v___x_2298_;
}
}
else
{
lean_object* v___x_2299_; lean_object* v___x_2300_; uint8_t v___x_2301_; 
v___x_2299_ = lean_nat_sub(v_start_2284_, v_tailOff_2290_);
v___x_2300_ = lean_array_get_size(v_tail_2288_);
v___x_2301_ = lean_nat_dec_lt(v___x_2299_, v___x_2300_);
if (v___x_2301_ == 0)
{
lean_dec(v___x_2299_);
return v_init_2283_;
}
else
{
size_t v___x_2302_; size_t v___x_2303_; lean_object* v___x_2304_; 
v___x_2302_ = lean_usize_of_nat(v___x_2299_);
lean_dec(v___x_2299_);
v___x_2303_ = lean_usize_of_nat(v___x_2300_);
v___x_2304_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_tail_2288_, v___x_2302_, v___x_2303_, v_init_2283_);
return v___x_2304_;
}
}
}
else
{
lean_object* v_root_2305_; lean_object* v_tail_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; uint8_t v___x_2309_; 
v_root_2305_ = lean_ctor_get(v_t_2282_, 0);
v_tail_2306_ = lean_ctor_get(v_t_2282_, 1);
v___x_2307_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v_root_2305_, v_init_2283_);
v___x_2308_ = lean_array_get_size(v_tail_2306_);
v___x_2309_ = lean_nat_dec_lt(v___x_2285_, v___x_2308_);
if (v___x_2309_ == 0)
{
return v___x_2307_;
}
else
{
size_t v___x_2310_; size_t v___x_2311_; lean_object* v___x_2312_; 
v___x_2310_ = ((size_t)0ULL);
v___x_2311_ = lean_usize_of_nat(v___x_2308_);
v___x_2312_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_tail_2306_, v___x_2310_, v___x_2311_, v___x_2307_);
return v___x_2312_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg___boxed(lean_object* v_t_2313_, lean_object* v_init_2314_, lean_object* v_start_2315_){
_start:
{
lean_object* v_res_2316_; 
v_res_2316_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(v_t_2313_, v_init_2314_, v_start_2315_);
lean_dec(v_start_2315_);
lean_dec_ref(v_t_2313_);
return v_res_2316_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg(lean_object* v_t_2317_){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v___x_2320_; lean_object* v___x_2321_; 
v___x_2318_ = lean_box(0);
v___x_2319_ = lean_unsigned_to_nat(0u);
v___x_2320_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(v_t_2317_, v___x_2318_, v___x_2319_);
v___x_2321_ = l_List_reverse___redArg(v___x_2320_);
return v___x_2321_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___redArg___boxed(lean_object* v_t_2322_){
_start:
{
lean_object* v_res_2323_; 
v_res_2323_ = l_Lean_PersistentArray_toList___redArg(v_t_2322_);
lean_dec_ref(v_t_2322_);
return v_res_2323_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList(lean_object* v_00_u03b1_2324_, lean_object* v_t_2325_){
_start:
{
lean_object* v___x_2326_; 
v___x_2326_ = l_Lean_PersistentArray_toList___redArg(v_t_2325_);
return v___x_2326_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_toList___boxed(lean_object* v_00_u03b1_2327_, lean_object* v_t_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = l_Lean_PersistentArray_toList(v_00_u03b1_2327_, v_t_2328_);
lean_dec_ref(v_t_2328_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0(lean_object* v_00_u03b1_2330_, lean_object* v_t_2331_, lean_object* v_init_2332_, lean_object* v_start_2333_){
_start:
{
lean_object* v___x_2334_; 
v___x_2334_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___redArg(v_t_2331_, v_init_2332_, v_start_2333_);
return v___x_2334_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0___boxed(lean_object* v_00_u03b1_2335_, lean_object* v_t_2336_, lean_object* v_init_2337_, lean_object* v_start_2338_){
_start:
{
lean_object* v_res_2339_; 
v_res_2339_ = l_Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0(v_00_u03b1_2335_, v_t_2336_, v_init_2337_, v_start_2338_);
lean_dec(v_start_2338_);
lean_dec_ref(v_t_2336_);
return v_res_2339_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0(lean_object* v_00_u03b1_2340_, lean_object* v_x_2341_, size_t v_x_2342_, size_t v_x_2343_, lean_object* v_x_2344_){
_start:
{
lean_object* v___x_2345_; 
v___x_2345_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___redArg(v_x_2341_, v_x_2342_, v_x_2343_, v_x_2344_);
return v___x_2345_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0___boxed(lean_object* v_00_u03b1_2346_, lean_object* v_x_2347_, lean_object* v_x_2348_, lean_object* v_x_2349_, lean_object* v_x_2350_){
_start:
{
size_t v_x_1243__boxed_2351_; size_t v_x_1244__boxed_2352_; lean_object* v_res_2353_; 
v_x_1243__boxed_2351_ = lean_unbox_usize(v_x_2348_);
lean_dec(v_x_2348_);
v_x_1244__boxed_2352_ = lean_unbox_usize(v_x_2349_);
lean_dec(v_x_2349_);
v_res_2353_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0(v_00_u03b1_2346_, v_x_2347_, v_x_1243__boxed_2351_, v_x_1244__boxed_2352_, v_x_2350_);
lean_dec_ref(v_x_2347_);
return v_res_2353_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1(lean_object* v_00_u03b1_2354_, lean_object* v_as_2355_, size_t v_i_2356_, size_t v_stop_2357_, lean_object* v_b_2358_){
_start:
{
lean_object* v___x_2359_; 
v___x_2359_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___redArg(v_as_2355_, v_i_2356_, v_stop_2357_, v_b_2358_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2360_, lean_object* v_as_2361_, lean_object* v_i_2362_, lean_object* v_stop_2363_, lean_object* v_b_2364_){
_start:
{
size_t v_i_boxed_2365_; size_t v_stop_boxed_2366_; lean_object* v_res_2367_; 
v_i_boxed_2365_ = lean_unbox_usize(v_i_2362_);
lean_dec(v_i_2362_);
v_stop_boxed_2366_ = lean_unbox_usize(v_stop_2363_);
lean_dec(v_stop_2363_);
v_res_2367_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__1(v_00_u03b1_2360_, v_as_2361_, v_i_boxed_2365_, v_stop_boxed_2366_, v_b_2364_);
lean_dec_ref(v_as_2361_);
return v_res_2367_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2(lean_object* v_00_u03b1_2368_, lean_object* v_x_2369_, lean_object* v_x_2370_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___redArg(v_x_2369_, v_x_2370_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2___boxed(lean_object* v_00_u03b1_2372_, lean_object* v_x_2373_, lean_object* v_x_2374_){
_start:
{
lean_object* v_res_2375_; 
v_res_2375_ = l___private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__2(v_00_u03b1_2372_, v_x_2373_, v_x_2374_);
lean_dec_ref(v_x_2373_);
return v_res_2375_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1(lean_object* v_00_u03b1_2376_, lean_object* v_as_2377_, size_t v_i_2378_, size_t v_stop_2379_, lean_object* v_b_2380_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___redArg(v_as_2377_, v_i_2378_, v_stop_2379_, v_b_2380_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b1_2382_, lean_object* v_as_2383_, lean_object* v_i_2384_, lean_object* v_stop_2385_, lean_object* v_b_2386_){
_start:
{
size_t v_i_boxed_2387_; size_t v_stop_boxed_2388_; lean_object* v_res_2389_; 
v_i_boxed_2387_ = lean_unbox_usize(v_i_2384_);
lean_dec(v_i_2384_);
v_stop_boxed_2388_ = lean_unbox_usize(v_stop_2385_);
lean_dec(v_stop_2385_);
v_res_2389_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Data_PersistentArray_0__Lean_PersistentArray_foldlFromMAux___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_toList_spec__0_spec__0_spec__1(v_00_u03b1_2382_, v_as_2383_, v_i_boxed_2387_, v_stop_boxed_2388_, v_b_2386_);
lean_dec_ref(v_as_2383_);
return v_res_2389_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg(lean_object* v_inst_2390_, lean_object* v_p_2391_, lean_object* v_x_2392_){
_start:
{
if (lean_obj_tag(v_x_2392_) == 0)
{
lean_object* v_toApplicative_2393_; lean_object* v_cs_2394_; lean_object* v_toPure_2395_; lean_object* v___x_2396_; lean_object* v___x_2397_; uint8_t v___x_2398_; 
v_toApplicative_2393_ = lean_ctor_get(v_inst_2390_, 0);
v_cs_2394_ = lean_ctor_get(v_x_2392_, 0);
lean_inc_ref(v_cs_2394_);
lean_dec_ref_known(v_x_2392_, 1);
v_toPure_2395_ = lean_ctor_get(v_toApplicative_2393_, 1);
v___x_2396_ = lean_unsigned_to_nat(0u);
v___x_2397_ = lean_array_get_size(v_cs_2394_);
v___x_2398_ = lean_nat_dec_lt(v___x_2396_, v___x_2397_);
if (v___x_2398_ == 0)
{
lean_object* v___x_2399_; lean_object* v___x_2400_; 
lean_inc(v_toPure_2395_);
lean_dec_ref(v_cs_2394_);
lean_dec(v_p_2391_);
lean_dec_ref(v_inst_2390_);
v___x_2399_ = lean_box(v___x_2398_);
v___x_2400_ = lean_apply_2(v_toPure_2395_, lean_box(0), v___x_2399_);
return v___x_2400_;
}
else
{
if (v___x_2398_ == 0)
{
lean_object* v___x_2401_; lean_object* v___x_2402_; 
lean_inc(v_toPure_2395_);
lean_dec_ref(v_cs_2394_);
lean_dec(v_p_2391_);
lean_dec_ref(v_inst_2390_);
v___x_2401_ = lean_box(v___x_2398_);
v___x_2402_ = lean_apply_2(v_toPure_2395_, lean_box(0), v___x_2401_);
return v___x_2402_;
}
else
{
lean_object* v___f_2403_; size_t v___x_2404_; size_t v___x_2405_; lean_object* v___x_2406_; 
lean_inc_ref(v_inst_2390_);
v___f_2403_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_anyMAux___redArg___lam__0), 3, 2);
lean_closure_set(v___f_2403_, 0, v_inst_2390_);
lean_closure_set(v___f_2403_, 1, v_p_2391_);
v___x_2404_ = ((size_t)0ULL);
v___x_2405_ = lean_usize_of_nat(v___x_2397_);
v___x_2406_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2390_, v___f_2403_, v_cs_2394_, v___x_2404_, v___x_2405_);
return v___x_2406_;
}
}
}
else
{
lean_object* v_toApplicative_2407_; lean_object* v_vs_2408_; lean_object* v_toPure_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; uint8_t v___x_2412_; 
v_toApplicative_2407_ = lean_ctor_get(v_inst_2390_, 0);
v_vs_2408_ = lean_ctor_get(v_x_2392_, 0);
lean_inc_ref(v_vs_2408_);
lean_dec_ref_known(v_x_2392_, 1);
v_toPure_2409_ = lean_ctor_get(v_toApplicative_2407_, 1);
v___x_2410_ = lean_unsigned_to_nat(0u);
v___x_2411_ = lean_array_get_size(v_vs_2408_);
v___x_2412_ = lean_nat_dec_lt(v___x_2410_, v___x_2411_);
if (v___x_2412_ == 0)
{
lean_object* v___x_2413_; lean_object* v___x_2414_; 
lean_inc(v_toPure_2409_);
lean_dec_ref(v_vs_2408_);
lean_dec(v_p_2391_);
lean_dec_ref(v_inst_2390_);
v___x_2413_ = lean_box(v___x_2412_);
v___x_2414_ = lean_apply_2(v_toPure_2409_, lean_box(0), v___x_2413_);
return v___x_2414_;
}
else
{
if (v___x_2412_ == 0)
{
lean_object* v___x_2415_; lean_object* v___x_2416_; 
lean_inc(v_toPure_2409_);
lean_dec_ref(v_vs_2408_);
lean_dec(v_p_2391_);
lean_dec_ref(v_inst_2390_);
v___x_2415_ = lean_box(v___x_2412_);
v___x_2416_ = lean_apply_2(v_toPure_2409_, lean_box(0), v___x_2415_);
return v___x_2416_;
}
else
{
size_t v___x_2417_; size_t v___x_2418_; lean_object* v___x_2419_; 
v___x_2417_ = ((size_t)0ULL);
v___x_2418_ = lean_usize_of_nat(v___x_2411_);
v___x_2419_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2390_, v_p_2391_, v_vs_2408_, v___x_2417_, v___x_2418_);
return v___x_2419_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux___redArg___lam__0(lean_object* v_inst_2420_, lean_object* v_p_2421_, lean_object* v_c_2422_){
_start:
{
lean_object* v___x_2423_; 
v___x_2423_ = l_Lean_PersistentArray_anyMAux___redArg(v_inst_2420_, v_p_2421_, v_c_2422_);
return v___x_2423_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyMAux(lean_object* v_00_u03b1_2424_, lean_object* v_m_2425_, lean_object* v_inst_2426_, lean_object* v_p_2427_, lean_object* v_x_2428_){
_start:
{
lean_object* v___x_2429_; 
v___x_2429_ = l_Lean_PersistentArray_anyMAux___redArg(v_inst_2426_, v_p_2427_, v_x_2428_);
return v___x_2429_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0(lean_object* v_tail_2430_, lean_object* v_toPure_2431_, lean_object* v_inst_2432_, lean_object* v_p_2433_, uint8_t v_b_2434_){
_start:
{
if (v_b_2434_ == 0)
{
lean_object* v___x_2435_; lean_object* v___x_2436_; uint8_t v___x_2437_; 
v___x_2435_ = lean_unsigned_to_nat(0u);
v___x_2436_ = lean_array_get_size(v_tail_2430_);
v___x_2437_ = lean_nat_dec_lt(v___x_2435_, v___x_2436_);
if (v___x_2437_ == 0)
{
lean_object* v___x_2438_; lean_object* v___x_2439_; 
lean_dec(v_p_2433_);
lean_dec_ref(v_inst_2432_);
lean_dec_ref(v_tail_2430_);
v___x_2438_ = lean_box(v___x_2437_);
v___x_2439_ = lean_apply_2(v_toPure_2431_, lean_box(0), v___x_2438_);
return v___x_2439_;
}
else
{
if (v___x_2437_ == 0)
{
lean_object* v___x_2440_; lean_object* v___x_2441_; 
lean_dec(v_p_2433_);
lean_dec_ref(v_inst_2432_);
lean_dec_ref(v_tail_2430_);
v___x_2440_ = lean_box(v___x_2437_);
v___x_2441_ = lean_apply_2(v_toPure_2431_, lean_box(0), v___x_2440_);
return v___x_2441_;
}
else
{
size_t v___x_2442_; size_t v___x_2443_; lean_object* v___x_2444_; 
lean_dec(v_toPure_2431_);
v___x_2442_ = ((size_t)0ULL);
v___x_2443_ = lean_usize_of_nat(v___x_2436_);
v___x_2444_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any(lean_box(0), lean_box(0), v_inst_2432_, v_p_2433_, v_tail_2430_, v___x_2442_, v___x_2443_);
return v___x_2444_;
}
}
}
else
{
lean_object* v___x_2445_; lean_object* v___x_2446_; 
lean_dec(v_p_2433_);
lean_dec_ref(v_inst_2432_);
lean_dec_ref(v_tail_2430_);
v___x_2445_ = lean_box(v_b_2434_);
v___x_2446_ = lean_apply_2(v_toPure_2431_, lean_box(0), v___x_2445_);
return v___x_2446_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg___lam__0___boxed(lean_object* v_tail_2447_, lean_object* v_toPure_2448_, lean_object* v_inst_2449_, lean_object* v_p_2450_, lean_object* v_b_2451_){
_start:
{
uint8_t v_b_boxed_2452_; lean_object* v_res_2453_; 
v_b_boxed_2452_ = lean_unbox(v_b_2451_);
v_res_2453_ = l_Lean_PersistentArray_anyM___redArg___lam__0(v_tail_2447_, v_toPure_2448_, v_inst_2449_, v_p_2450_, v_b_boxed_2452_);
return v_res_2453_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM___redArg(lean_object* v_inst_2454_, lean_object* v_t_2455_, lean_object* v_p_2456_){
_start:
{
lean_object* v_toApplicative_2457_; lean_object* v_toBind_2458_; lean_object* v_root_2459_; lean_object* v_tail_2460_; lean_object* v_toPure_2461_; lean_object* v___x_2462_; lean_object* v___f_2463_; lean_object* v___x_2464_; 
v_toApplicative_2457_ = lean_ctor_get(v_inst_2454_, 0);
v_toBind_2458_ = lean_ctor_get(v_inst_2454_, 1);
lean_inc(v_toBind_2458_);
v_root_2459_ = lean_ctor_get(v_t_2455_, 0);
lean_inc_ref(v_root_2459_);
v_tail_2460_ = lean_ctor_get(v_t_2455_, 1);
lean_inc_ref(v_tail_2460_);
lean_dec_ref(v_t_2455_);
v_toPure_2461_ = lean_ctor_get(v_toApplicative_2457_, 1);
lean_inc(v_toPure_2461_);
lean_inc(v_p_2456_);
lean_inc_ref(v_inst_2454_);
v___x_2462_ = l_Lean_PersistentArray_anyMAux___redArg(v_inst_2454_, v_p_2456_, v_root_2459_);
v___f_2463_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_anyM___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_2463_, 0, v_tail_2460_);
lean_closure_set(v___f_2463_, 1, v_toPure_2461_);
lean_closure_set(v___f_2463_, 2, v_inst_2454_);
lean_closure_set(v___f_2463_, 3, v_p_2456_);
v___x_2464_ = lean_apply_4(v_toBind_2458_, lean_box(0), lean_box(0), v___x_2462_, v___f_2463_);
return v___x_2464_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_anyM(lean_object* v_00_u03b1_2465_, lean_object* v_m_2466_, lean_object* v_inst_2467_, lean_object* v_t_2468_, lean_object* v_p_2469_){
_start:
{
lean_object* v___x_2470_; 
v___x_2470_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2467_, v_t_2468_, v_p_2469_);
return v___x_2470_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0(lean_object* v_toPure_2471_, uint8_t v_b_2472_){
_start:
{
if (v_b_2472_ == 0)
{
uint8_t v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; 
v___x_2473_ = 1;
v___x_2474_ = lean_box(v___x_2473_);
v___x_2475_ = lean_apply_2(v_toPure_2471_, lean_box(0), v___x_2474_);
return v___x_2475_;
}
else
{
uint8_t v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v___x_2476_ = 0;
v___x_2477_ = lean_box(v___x_2476_);
v___x_2478_ = lean_apply_2(v_toPure_2471_, lean_box(0), v___x_2477_);
return v___x_2478_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__0___boxed(lean_object* v_toPure_2479_, lean_object* v_b_2480_){
_start:
{
uint8_t v_b_boxed_2481_; lean_object* v_res_2482_; 
v_b_boxed_2481_ = lean_unbox(v_b_2480_);
v_res_2482_ = l_Lean_PersistentArray_allM___redArg___lam__0(v_toPure_2479_, v_b_boxed_2481_);
return v_res_2482_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg___lam__1(lean_object* v_p_2483_, lean_object* v_toBind_2484_, lean_object* v___f_2485_, lean_object* v_v_2486_){
_start:
{
lean_object* v___x_2487_; lean_object* v___x_2488_; 
v___x_2487_ = lean_apply_1(v_p_2483_, v_v_2486_);
v___x_2488_ = lean_apply_4(v_toBind_2484_, lean_box(0), lean_box(0), v___x_2487_, v___f_2485_);
return v___x_2488_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM___redArg(lean_object* v_inst_2489_, lean_object* v_a_2490_, lean_object* v_p_2491_){
_start:
{
lean_object* v_toApplicative_2492_; lean_object* v_toBind_2493_; lean_object* v_toPure_2494_; lean_object* v___f_2495_; lean_object* v___f_2496_; lean_object* v___x_2497_; lean_object* v___x_2498_; 
v_toApplicative_2492_ = lean_ctor_get(v_inst_2489_, 0);
v_toBind_2493_ = lean_ctor_get(v_inst_2489_, 1);
lean_inc_n(v_toBind_2493_, 2);
v_toPure_2494_ = lean_ctor_get(v_toApplicative_2492_, 1);
lean_inc(v_toPure_2494_);
v___f_2495_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2495_, 0, v_toPure_2494_);
lean_inc_ref(v___f_2495_);
v___f_2496_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2496_, 0, v_p_2491_);
lean_closure_set(v___f_2496_, 1, v_toBind_2493_);
lean_closure_set(v___f_2496_, 2, v___f_2495_);
v___x_2497_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2489_, v_a_2490_, v___f_2496_);
v___x_2498_ = lean_apply_4(v_toBind_2493_, lean_box(0), lean_box(0), v___x_2497_, v___f_2495_);
return v___x_2498_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_allM(lean_object* v_00_u03b1_2499_, lean_object* v_m_2500_, lean_object* v_inst_2501_, lean_object* v_a_2502_, lean_object* v_p_2503_){
_start:
{
lean_object* v_toApplicative_2504_; lean_object* v_toBind_2505_; lean_object* v_toPure_2506_; lean_object* v___f_2507_; lean_object* v___f_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; 
v_toApplicative_2504_ = lean_ctor_get(v_inst_2501_, 0);
v_toBind_2505_ = lean_ctor_get(v_inst_2501_, 1);
lean_inc_n(v_toBind_2505_, 2);
v_toPure_2506_ = lean_ctor_get(v_toApplicative_2504_, 1);
lean_inc(v_toPure_2506_);
v___f_2507_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2507_, 0, v_toPure_2506_);
lean_inc_ref(v___f_2507_);
v___f_2508_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_allM___redArg___lam__1), 4, 3);
lean_closure_set(v___f_2508_, 0, v_p_2503_);
lean_closure_set(v___f_2508_, 1, v_toBind_2505_);
lean_closure_set(v___f_2508_, 2, v___f_2507_);
v___x_2509_ = l_Lean_PersistentArray_anyM___redArg(v_inst_2501_, v_a_2502_, v___f_2508_);
v___x_2510_ = lean_apply_4(v_toBind_2505_, lean_box(0), lean_box(0), v___x_2509_, v___f_2507_);
return v___x_2510_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any___redArg___lam__0(lean_object* v_p_2511_, lean_object* v_x_2512_){
_start:
{
lean_object* v___x_2513_; uint8_t v___x_2514_; 
v___x_2513_ = lean_apply_1(v_p_2511_, v_x_2512_);
v___x_2514_ = lean_unbox(v___x_2513_);
return v___x_2514_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg___lam__0___boxed(lean_object* v_p_2515_, lean_object* v_x_2516_){
_start:
{
uint8_t v_res_2517_; lean_object* v_r_2518_; 
v_res_2517_ = l_Lean_PersistentArray_any___redArg___lam__0(v_p_2515_, v_x_2516_);
v_r_2518_ = lean_box(v_res_2517_);
return v_r_2518_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___redArg(lean_object* v_a_2519_, lean_object* v_p_2520_){
_start:
{
lean_object* v___f_2521_; lean_object* v___x_2522_; lean_object* v___x_2523_; 
v___f_2521_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2521_, 0, v_p_2520_);
v___x_2522_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2523_ = l_Lean_PersistentArray_anyM___redArg(v___x_2522_, v_a_2519_, v___f_2521_);
return v___x_2523_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_any(lean_object* v_00_u03b1_2524_, lean_object* v_a_2525_, lean_object* v_p_2526_){
_start:
{
lean_object* v___f_2527_; lean_object* v___x_2528_; lean_object* v___x_2529_; uint8_t v___x_2530_; 
v___f_2527_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_any___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2527_, 0, v_p_2526_);
v___x_2528_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2529_ = l_Lean_PersistentArray_anyM___redArg(v___x_2528_, v_a_2525_, v___f_2527_);
v___x_2530_ = lean_unbox(v___x_2529_);
lean_dec(v___x_2529_);
return v___x_2530_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_any___boxed(lean_object* v_00_u03b1_2531_, lean_object* v_a_2532_, lean_object* v_p_2533_){
_start:
{
uint8_t v_res_2534_; lean_object* v_r_2535_; 
v_res_2534_ = l_Lean_PersistentArray_any(v_00_u03b1_2531_, v_a_2532_, v_p_2533_);
v_r_2535_ = lean_box(v_res_2534_);
return v_r_2535_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg___lam__0(lean_object* v_p_2536_, lean_object* v_x_2537_){
_start:
{
lean_object* v___x_2538_; uint8_t v___x_2539_; 
v___x_2538_ = lean_apply_1(v_p_2536_, v_x_2537_);
v___x_2539_ = lean_unbox(v___x_2538_);
if (v___x_2539_ == 0)
{
uint8_t v___x_2540_; 
v___x_2540_ = 1;
return v___x_2540_;
}
else
{
uint8_t v___x_2541_; 
v___x_2541_ = 0;
return v___x_2541_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___lam__0___boxed(lean_object* v_p_2542_, lean_object* v_x_2543_){
_start:
{
uint8_t v_res_2544_; lean_object* v_r_2545_; 
v_res_2544_ = l_Lean_PersistentArray_all___redArg___lam__0(v_p_2542_, v_x_2543_);
v_r_2545_ = lean_box(v_res_2544_);
return v_r_2545_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all___redArg(lean_object* v_a_2546_, lean_object* v_p_2547_){
_start:
{
lean_object* v___f_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; uint8_t v___x_2551_; 
v___f_2548_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_all___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2548_, 0, v_p_2547_);
v___x_2549_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2550_ = l_Lean_PersistentArray_anyM___redArg(v___x_2549_, v_a_2546_, v___f_2548_);
v___x_2551_ = lean_unbox(v___x_2550_);
lean_dec(v___x_2550_);
if (v___x_2551_ == 0)
{
uint8_t v___x_2552_; 
v___x_2552_ = 1;
return v___x_2552_;
}
else
{
uint8_t v___x_2553_; 
v___x_2553_ = 0;
return v___x_2553_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___redArg___boxed(lean_object* v_a_2554_, lean_object* v_p_2555_){
_start:
{
uint8_t v_res_2556_; lean_object* v_r_2557_; 
v_res_2556_ = l_Lean_PersistentArray_all___redArg(v_a_2554_, v_p_2555_);
v_r_2557_ = lean_box(v_res_2556_);
return v_r_2557_;
}
}
LEAN_EXPORT uint8_t l_Lean_PersistentArray_all(lean_object* v_00_u03b1_2558_, lean_object* v_a_2559_, lean_object* v_p_2560_){
_start:
{
lean_object* v___f_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; uint8_t v___x_2564_; 
v___f_2561_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_all___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_2561_, 0, v_p_2560_);
v___x_2562_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2563_ = l_Lean_PersistentArray_anyM___redArg(v___x_2562_, v_a_2559_, v___f_2561_);
v___x_2564_ = lean_unbox(v___x_2563_);
lean_dec(v___x_2563_);
if (v___x_2564_ == 0)
{
uint8_t v___x_2565_; 
v___x_2565_ = 1;
return v___x_2565_;
}
else
{
uint8_t v___x_2566_; 
v___x_2566_ = 0;
return v___x_2566_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_all___boxed(lean_object* v_00_u03b1_2567_, lean_object* v_a_2568_, lean_object* v_p_2569_){
_start:
{
uint8_t v_res_2570_; lean_object* v_r_2571_; 
v_res_2570_ = l_Lean_PersistentArray_all(v_00_u03b1_2567_, v_a_2568_, v_p_2569_);
v_r_2571_ = lean_box(v_res_2570_);
return v_r_2571_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__0(lean_object* v_cs_2572_){
_start:
{
lean_object* v___x_2573_; 
v___x_2573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2573_, 0, v_cs_2572_);
return v___x_2573_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__2(lean_object* v_vs_2574_){
_start:
{
lean_object* v___x_2575_; 
v___x_2575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2575_, 0, v_vs_2574_);
return v___x_2575_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg(lean_object* v_inst_2578_, lean_object* v_f_2579_, lean_object* v_x_2580_){
_start:
{
if (lean_obj_tag(v_x_2580_) == 0)
{
lean_object* v_toApplicative_2581_; lean_object* v_toFunctor_2582_; lean_object* v_cs_2583_; lean_object* v_map_2584_; lean_object* v___f_2585_; lean_object* v___f_2586_; size_t v_sz_2587_; size_t v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; 
v_toApplicative_2581_ = lean_ctor_get(v_inst_2578_, 0);
v_toFunctor_2582_ = lean_ctor_get(v_toApplicative_2581_, 0);
v_cs_2583_ = lean_ctor_get(v_x_2580_, 0);
lean_inc_ref(v_cs_2583_);
lean_dec_ref_known(v_x_2580_, 1);
v_map_2584_ = lean_ctor_get(v_toFunctor_2582_, 0);
lean_inc(v_map_2584_);
v___f_2585_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___redArg___closed__0));
lean_inc_ref(v_inst_2578_);
v___f_2586_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_mapMAux___redArg___lam__1), 3, 2);
lean_closure_set(v___f_2586_, 0, v_inst_2578_);
lean_closure_set(v___f_2586_, 1, v_f_2579_);
v_sz_2587_ = lean_array_size(v_cs_2583_);
v___x_2588_ = ((size_t)0ULL);
v___x_2589_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2578_, v___f_2586_, v_sz_2587_, v___x_2588_, v_cs_2583_);
v___x_2590_ = lean_apply_4(v_map_2584_, lean_box(0), lean_box(0), v___f_2585_, v___x_2589_);
return v___x_2590_;
}
else
{
lean_object* v_toApplicative_2591_; lean_object* v_toFunctor_2592_; lean_object* v_vs_2593_; lean_object* v_map_2594_; lean_object* v___f_2595_; size_t v_sz_2596_; size_t v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; 
v_toApplicative_2591_ = lean_ctor_get(v_inst_2578_, 0);
v_toFunctor_2592_ = lean_ctor_get(v_toApplicative_2591_, 0);
v_vs_2593_ = lean_ctor_get(v_x_2580_, 0);
lean_inc_ref(v_vs_2593_);
lean_dec_ref_known(v_x_2580_, 1);
v_map_2594_ = lean_ctor_get(v_toFunctor_2592_, 0);
lean_inc(v_map_2594_);
v___f_2595_ = ((lean_object*)(l_Lean_PersistentArray_mapMAux___redArg___closed__1));
v_sz_2596_ = lean_array_size(v_vs_2593_);
v___x_2597_ = ((size_t)0ULL);
v___x_2598_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2578_, v_f_2579_, v_sz_2596_, v___x_2597_, v_vs_2593_);
v___x_2599_ = lean_apply_4(v_map_2594_, lean_box(0), lean_box(0), v___f_2595_, v___x_2598_);
return v___x_2599_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux___redArg___lam__1(lean_object* v_inst_2600_, lean_object* v_f_2601_, lean_object* v_c_2602_){
_start:
{
lean_object* v___x_2603_; 
v___x_2603_ = l_Lean_PersistentArray_mapMAux___redArg(v_inst_2600_, v_f_2601_, v_c_2602_);
return v___x_2603_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapMAux(lean_object* v_00_u03b1_2604_, lean_object* v_m_2605_, lean_object* v_inst_2606_, lean_object* v_00_u03b2_2607_, lean_object* v_f_2608_, lean_object* v_x_2609_){
_start:
{
lean_object* v___x_2610_; 
v___x_2610_ = l_Lean_PersistentArray_mapMAux___redArg(v_inst_2606_, v_f_2608_, v_x_2609_);
return v___x_2610_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0(lean_object* v_root_2611_, lean_object* v_size_2612_, size_t v_shift_2613_, lean_object* v_tailOff_2614_, lean_object* v_toPure_2615_, lean_object* v_tail_2616_){
_start:
{
lean_object* v___x_2617_; lean_object* v___x_2618_; 
v___x_2617_ = lean_alloc_ctor(0, 4, sizeof(size_t)*1);
lean_ctor_set(v___x_2617_, 0, v_root_2611_);
lean_ctor_set(v___x_2617_, 1, v_tail_2616_);
lean_ctor_set(v___x_2617_, 2, v_size_2612_);
lean_ctor_set(v___x_2617_, 3, v_tailOff_2614_);
lean_ctor_set_usize(v___x_2617_, 4, v_shift_2613_);
v___x_2618_ = lean_apply_2(v_toPure_2615_, lean_box(0), v___x_2617_);
return v___x_2618_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__0___boxed(lean_object* v_root_2619_, lean_object* v_size_2620_, lean_object* v_shift_2621_, lean_object* v_tailOff_2622_, lean_object* v_toPure_2623_, lean_object* v_tail_2624_){
_start:
{
size_t v_shift_boxed_2625_; lean_object* v_res_2626_; 
v_shift_boxed_2625_ = lean_unbox_usize(v_shift_2621_);
lean_dec(v_shift_2621_);
v_res_2626_ = l_Lean_PersistentArray_mapM___redArg___lam__0(v_root_2619_, v_size_2620_, v_shift_boxed_2625_, v_tailOff_2622_, v_toPure_2623_, v_tail_2624_);
return v_res_2626_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1(lean_object* v_size_2627_, size_t v_shift_2628_, lean_object* v_tailOff_2629_, lean_object* v_toPure_2630_, lean_object* v_tail_2631_, lean_object* v_inst_2632_, lean_object* v_f_2633_, lean_object* v_toBind_2634_, lean_object* v_root_2635_){
_start:
{
lean_object* v___x_2636_; lean_object* v___f_2637_; size_t v_sz_2638_; size_t v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; 
v___x_2636_ = lean_box_usize(v_shift_2628_);
v___f_2637_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_mapM___redArg___lam__0___boxed), 6, 5);
lean_closure_set(v___f_2637_, 0, v_root_2635_);
lean_closure_set(v___f_2637_, 1, v_size_2627_);
lean_closure_set(v___f_2637_, 2, v___x_2636_);
lean_closure_set(v___f_2637_, 3, v_tailOff_2629_);
lean_closure_set(v___f_2637_, 4, v_toPure_2630_);
v_sz_2638_ = lean_array_size(v_tail_2631_);
v___x_2639_ = ((size_t)0ULL);
v___x_2640_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v_inst_2632_, v_f_2633_, v_sz_2638_, v___x_2639_, v_tail_2631_);
v___x_2641_ = lean_apply_4(v_toBind_2634_, lean_box(0), lean_box(0), v___x_2640_, v___f_2637_);
return v___x_2641_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg___lam__1___boxed(lean_object* v_size_2642_, lean_object* v_shift_2643_, lean_object* v_tailOff_2644_, lean_object* v_toPure_2645_, lean_object* v_tail_2646_, lean_object* v_inst_2647_, lean_object* v_f_2648_, lean_object* v_toBind_2649_, lean_object* v_root_2650_){
_start:
{
size_t v_shift_boxed_2651_; lean_object* v_res_2652_; 
v_shift_boxed_2651_ = lean_unbox_usize(v_shift_2643_);
lean_dec(v_shift_2643_);
v_res_2652_ = l_Lean_PersistentArray_mapM___redArg___lam__1(v_size_2642_, v_shift_boxed_2651_, v_tailOff_2644_, v_toPure_2645_, v_tail_2646_, v_inst_2647_, v_f_2648_, v_toBind_2649_, v_root_2650_);
return v_res_2652_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM___redArg(lean_object* v_inst_2653_, lean_object* v_f_2654_, lean_object* v_t_2655_){
_start:
{
lean_object* v_toApplicative_2656_; lean_object* v_toBind_2657_; lean_object* v_root_2658_; lean_object* v_tail_2659_; lean_object* v_size_2660_; size_t v_shift_2661_; lean_object* v_tailOff_2662_; lean_object* v_toPure_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___f_2666_; lean_object* v___x_2667_; 
v_toApplicative_2656_ = lean_ctor_get(v_inst_2653_, 0);
v_toBind_2657_ = lean_ctor_get(v_inst_2653_, 1);
lean_inc_n(v_toBind_2657_, 2);
v_root_2658_ = lean_ctor_get(v_t_2655_, 0);
lean_inc_ref(v_root_2658_);
v_tail_2659_ = lean_ctor_get(v_t_2655_, 1);
lean_inc_ref(v_tail_2659_);
v_size_2660_ = lean_ctor_get(v_t_2655_, 2);
lean_inc(v_size_2660_);
v_shift_2661_ = lean_ctor_get_usize(v_t_2655_, 4);
v_tailOff_2662_ = lean_ctor_get(v_t_2655_, 3);
lean_inc(v_tailOff_2662_);
lean_dec_ref(v_t_2655_);
v_toPure_2663_ = lean_ctor_get(v_toApplicative_2656_, 1);
lean_inc(v_toPure_2663_);
lean_inc(v_f_2654_);
lean_inc_ref(v_inst_2653_);
v___x_2664_ = l_Lean_PersistentArray_mapMAux___redArg(v_inst_2653_, v_f_2654_, v_root_2658_);
v___x_2665_ = lean_box_usize(v_shift_2661_);
v___f_2666_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_mapM___redArg___lam__1___boxed), 9, 8);
lean_closure_set(v___f_2666_, 0, v_size_2660_);
lean_closure_set(v___f_2666_, 1, v___x_2665_);
lean_closure_set(v___f_2666_, 2, v_tailOff_2662_);
lean_closure_set(v___f_2666_, 3, v_toPure_2663_);
lean_closure_set(v___f_2666_, 4, v_tail_2659_);
lean_closure_set(v___f_2666_, 5, v_inst_2653_);
lean_closure_set(v___f_2666_, 6, v_f_2654_);
lean_closure_set(v___f_2666_, 7, v_toBind_2657_);
v___x_2667_ = lean_apply_4(v_toBind_2657_, lean_box(0), lean_box(0), v___x_2664_, v___f_2666_);
return v___x_2667_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_mapM(lean_object* v_00_u03b1_2668_, lean_object* v_m_2669_, lean_object* v_inst_2670_, lean_object* v_00_u03b2_2671_, lean_object* v_f_2672_, lean_object* v_t_2673_){
_start:
{
lean_object* v___x_2674_; 
v___x_2674_ = l_Lean_PersistentArray_mapM___redArg(v_inst_2670_, v_f_2672_, v_t_2673_);
return v___x_2674_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg___lam__0(lean_object* v_f_2675_, lean_object* v_x_2676_){
_start:
{
lean_object* v___x_2677_; 
v___x_2677_ = lean_apply_1(v_f_2675_, v_x_2676_);
return v___x_2677_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map___redArg(lean_object* v_f_2678_, lean_object* v_t_2679_){
_start:
{
lean_object* v___f_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; 
v___f_2680_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2680_, 0, v_f_2678_);
v___x_2681_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2682_ = l_Lean_PersistentArray_mapM___redArg(v___x_2681_, v___f_2680_, v_t_2679_);
return v___x_2682_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_map(lean_object* v_00_u03b1_2683_, lean_object* v_00_u03b2_2684_, lean_object* v_f_2685_, lean_object* v_t_2686_){
_start:
{
lean_object* v___f_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; 
v___f_2687_ = lean_alloc_closure((void*)(l_Lean_PersistentArray_map___redArg___lam__0), 2, 1);
lean_closure_set(v___f_2687_, 0, v_f_2685_);
v___x_2688_ = ((lean_object*)(l_Lean_PersistentArray_foldl___redArg___closed__9));
v___x_2689_ = l_Lean_PersistentArray_mapM___redArg(v___x_2688_, v___f_2687_, v_t_2686_);
return v___x_2689_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg(lean_object* v_x_2690_, lean_object* v_x_2691_, lean_object* v_x_2692_){
_start:
{
if (lean_obj_tag(v_x_2690_) == 0)
{
lean_object* v_cs_2693_; lean_object* v_numNodes_2694_; lean_object* v_depth_2695_; lean_object* v_tailSize_2696_; lean_object* v___x_2698_; uint8_t v_isShared_2699_; uint8_t v_isSharedCheck_2714_; 
v_cs_2693_ = lean_ctor_get(v_x_2690_, 0);
v_numNodes_2694_ = lean_ctor_get(v_x_2691_, 0);
v_depth_2695_ = lean_ctor_get(v_x_2691_, 1);
v_tailSize_2696_ = lean_ctor_get(v_x_2691_, 2);
v_isSharedCheck_2714_ = !lean_is_exclusive(v_x_2691_);
if (v_isSharedCheck_2714_ == 0)
{
v___x_2698_ = v_x_2691_;
v_isShared_2699_ = v_isSharedCheck_2714_;
goto v_resetjp_2697_;
}
else
{
lean_inc(v_tailSize_2696_);
lean_inc(v_depth_2695_);
lean_inc(v_numNodes_2694_);
lean_dec(v_x_2691_);
v___x_2698_ = lean_box(0);
v_isShared_2699_ = v_isSharedCheck_2714_;
goto v_resetjp_2697_;
}
v_resetjp_2697_:
{
lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___y_2703_; uint8_t v___x_2713_; 
v___x_2700_ = lean_unsigned_to_nat(1u);
v___x_2701_ = lean_nat_add(v_numNodes_2694_, v___x_2700_);
lean_dec(v_numNodes_2694_);
v___x_2713_ = lean_nat_dec_le(v_x_2692_, v_depth_2695_);
if (v___x_2713_ == 0)
{
lean_dec(v_depth_2695_);
lean_inc(v_x_2692_);
v___y_2703_ = v_x_2692_;
goto v___jp_2702_;
}
else
{
v___y_2703_ = v_depth_2695_;
goto v___jp_2702_;
}
v___jp_2702_:
{
lean_object* v___x_2705_; 
if (v_isShared_2699_ == 0)
{
lean_ctor_set(v___x_2698_, 1, v___y_2703_);
lean_ctor_set(v___x_2698_, 0, v___x_2701_);
v___x_2705_ = v___x_2698_;
goto v_reusejp_2704_;
}
else
{
lean_object* v_reuseFailAlloc_2712_; 
v_reuseFailAlloc_2712_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2712_, 0, v___x_2701_);
lean_ctor_set(v_reuseFailAlloc_2712_, 1, v___y_2703_);
lean_ctor_set(v_reuseFailAlloc_2712_, 2, v_tailSize_2696_);
v___x_2705_ = v_reuseFailAlloc_2712_;
goto v_reusejp_2704_;
}
v_reusejp_2704_:
{
lean_object* v___x_2706_; lean_object* v___x_2707_; uint8_t v___x_2708_; 
v___x_2706_ = lean_unsigned_to_nat(0u);
v___x_2707_ = lean_array_get_size(v_cs_2693_);
v___x_2708_ = lean_nat_dec_lt(v___x_2706_, v___x_2707_);
if (v___x_2708_ == 0)
{
lean_dec(v_x_2692_);
return v___x_2705_;
}
else
{
size_t v___x_2709_; size_t v___x_2710_; lean_object* v___x_2711_; 
v___x_2709_ = ((size_t)0ULL);
v___x_2710_ = lean_usize_of_nat(v___x_2707_);
v___x_2711_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(v_x_2692_, v_cs_2693_, v___x_2709_, v___x_2710_, v___x_2705_);
lean_dec(v_x_2692_);
return v___x_2711_;
}
}
}
}
}
else
{
lean_object* v_numNodes_2715_; lean_object* v_depth_2716_; lean_object* v_tailSize_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2730_; 
v_numNodes_2715_ = lean_ctor_get(v_x_2691_, 0);
v_depth_2716_ = lean_ctor_get(v_x_2691_, 1);
v_tailSize_2717_ = lean_ctor_get(v_x_2691_, 2);
v_isSharedCheck_2730_ = !lean_is_exclusive(v_x_2691_);
if (v_isSharedCheck_2730_ == 0)
{
v___x_2719_ = v_x_2691_;
v_isShared_2720_ = v_isSharedCheck_2730_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_tailSize_2717_);
lean_inc(v_depth_2716_);
lean_inc(v_numNodes_2715_);
lean_dec(v_x_2691_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2730_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v___x_2721_; lean_object* v___x_2722_; uint8_t v___x_2723_; 
v___x_2721_ = lean_unsigned_to_nat(1u);
v___x_2722_ = lean_nat_add(v_numNodes_2715_, v___x_2721_);
lean_dec(v_numNodes_2715_);
v___x_2723_ = lean_nat_dec_le(v_x_2692_, v_depth_2716_);
if (v___x_2723_ == 0)
{
lean_object* v___x_2725_; 
lean_dec(v_depth_2716_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 1, v_x_2692_);
lean_ctor_set(v___x_2719_, 0, v___x_2722_);
v___x_2725_ = v___x_2719_;
goto v_reusejp_2724_;
}
else
{
lean_object* v_reuseFailAlloc_2726_; 
v_reuseFailAlloc_2726_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2726_, 0, v___x_2722_);
lean_ctor_set(v_reuseFailAlloc_2726_, 1, v_x_2692_);
lean_ctor_set(v_reuseFailAlloc_2726_, 2, v_tailSize_2717_);
v___x_2725_ = v_reuseFailAlloc_2726_;
goto v_reusejp_2724_;
}
v_reusejp_2724_:
{
return v___x_2725_;
}
}
else
{
lean_object* v___x_2728_; 
lean_dec(v_x_2692_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 0, v___x_2722_);
v___x_2728_ = v___x_2719_;
goto v_reusejp_2727_;
}
else
{
lean_object* v_reuseFailAlloc_2729_; 
v_reuseFailAlloc_2729_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2729_, 0, v___x_2722_);
lean_ctor_set(v_reuseFailAlloc_2729_, 1, v_depth_2716_);
lean_ctor_set(v_reuseFailAlloc_2729_, 2, v_tailSize_2717_);
v___x_2728_ = v_reuseFailAlloc_2729_;
goto v_reusejp_2727_;
}
v_reusejp_2727_:
{
return v___x_2728_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(lean_object* v_x_2731_, lean_object* v_as_2732_, size_t v_i_2733_, size_t v_stop_2734_, lean_object* v_b_2735_){
_start:
{
uint8_t v___x_2736_; 
v___x_2736_ = lean_usize_dec_eq(v_i_2733_, v_stop_2734_);
if (v___x_2736_ == 0)
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; lean_object* v___x_2740_; size_t v___x_2741_; size_t v___x_2742_; 
v___x_2737_ = lean_array_uget_borrowed(v_as_2732_, v_i_2733_);
v___x_2738_ = lean_unsigned_to_nat(1u);
v___x_2739_ = lean_nat_add(v_x_2731_, v___x_2738_);
v___x_2740_ = l_Lean_PersistentArray_collectStats___redArg(v___x_2737_, v_b_2735_, v___x_2739_);
v___x_2741_ = ((size_t)1ULL);
v___x_2742_ = lean_usize_add(v_i_2733_, v___x_2741_);
v_i_2733_ = v___x_2742_;
v_b_2735_ = v___x_2740_;
goto _start;
}
else
{
return v_b_2735_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg___boxed(lean_object* v_x_2744_, lean_object* v_as_2745_, lean_object* v_i_2746_, lean_object* v_stop_2747_, lean_object* v_b_2748_){
_start:
{
size_t v_i_boxed_2749_; size_t v_stop_boxed_2750_; lean_object* v_res_2751_; 
v_i_boxed_2749_ = lean_unbox_usize(v_i_2746_);
lean_dec(v_i_2746_);
v_stop_boxed_2750_ = lean_unbox_usize(v_stop_2747_);
lean_dec(v_stop_2747_);
v_res_2751_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(v_x_2744_, v_as_2745_, v_i_boxed_2749_, v_stop_boxed_2750_, v_b_2748_);
lean_dec_ref(v_as_2745_);
lean_dec(v_x_2744_);
return v_res_2751_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___redArg___boxed(lean_object* v_x_2752_, lean_object* v_x_2753_, lean_object* v_x_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = l_Lean_PersistentArray_collectStats___redArg(v_x_2752_, v_x_2753_, v_x_2754_);
lean_dec_ref(v_x_2752_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats(lean_object* v_00_u03b1_2756_, lean_object* v_x_2757_, lean_object* v_x_2758_, lean_object* v_x_2759_){
_start:
{
lean_object* v___x_2760_; 
v___x_2760_ = l_Lean_PersistentArray_collectStats___redArg(v_x_2757_, v_x_2758_, v_x_2759_);
return v___x_2760_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_collectStats___boxed(lean_object* v_00_u03b1_2761_, lean_object* v_x_2762_, lean_object* v_x_2763_, lean_object* v_x_2764_){
_start:
{
lean_object* v_res_2765_; 
v_res_2765_ = l_Lean_PersistentArray_collectStats(v_00_u03b1_2761_, v_x_2762_, v_x_2763_, v_x_2764_);
lean_dec_ref(v_x_2762_);
return v_res_2765_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0(lean_object* v_00_u03b1_2766_, lean_object* v_x_2767_, lean_object* v_as_2768_, size_t v_i_2769_, size_t v_stop_2770_, lean_object* v_b_2771_){
_start:
{
lean_object* v___x_2772_; 
v___x_2772_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___redArg(v_x_2767_, v_as_2768_, v_i_2769_, v_stop_2770_, v_b_2771_);
return v___x_2772_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0___boxed(lean_object* v_00_u03b1_2773_, lean_object* v_x_2774_, lean_object* v_as_2775_, lean_object* v_i_2776_, lean_object* v_stop_2777_, lean_object* v_b_2778_){
_start:
{
size_t v_i_boxed_2779_; size_t v_stop_boxed_2780_; lean_object* v_res_2781_; 
v_i_boxed_2779_ = lean_unbox_usize(v_i_2776_);
lean_dec(v_i_2776_);
v_stop_boxed_2780_ = lean_unbox_usize(v_stop_2777_);
lean_dec(v_stop_2777_);
v_res_2781_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_collectStats_spec__0(v_00_u03b1_2773_, v_x_2774_, v_as_2775_, v_i_boxed_2779_, v_stop_boxed_2780_, v_b_2778_);
lean_dec_ref(v_as_2775_);
lean_dec(v_x_2774_);
return v_res_2781_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg(lean_object* v_r_2782_){
_start:
{
lean_object* v_root_2783_; lean_object* v_tail_2784_; lean_object* v___x_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v_root_2783_ = lean_ctor_get(v_r_2782_, 0);
v_tail_2784_ = lean_ctor_get(v_r_2782_, 1);
v___x_2785_ = lean_unsigned_to_nat(0u);
v___x_2786_ = lean_array_get_size(v_tail_2784_);
v___x_2787_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2787_, 0, v___x_2785_);
lean_ctor_set(v___x_2787_, 1, v___x_2785_);
lean_ctor_set(v___x_2787_, 2, v___x_2786_);
v___x_2788_ = l_Lean_PersistentArray_collectStats___redArg(v_root_2783_, v___x_2787_, v___x_2785_);
return v___x_2788_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___redArg___boxed(lean_object* v_r_2789_){
_start:
{
lean_object* v_res_2790_; 
v_res_2790_ = l_Lean_PersistentArray_stats___redArg(v_r_2789_);
lean_dec_ref(v_r_2789_);
return v_res_2790_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats(lean_object* v_00_u03b1_2791_, lean_object* v_r_2792_){
_start:
{
lean_object* v___x_2793_; 
v___x_2793_ = l_Lean_PersistentArray_stats___redArg(v_r_2792_);
return v___x_2793_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_stats___boxed(lean_object* v_00_u03b1_2794_, lean_object* v_r_2795_){
_start:
{
lean_object* v_res_2796_; 
v_res_2796_ = l_Lean_PersistentArray_stats(v_00_u03b1_2794_, v_r_2795_);
lean_dec_ref(v_r_2795_);
return v_res_2796_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_Stats_toString(lean_object* v_s_2801_){
_start:
{
lean_object* v_numNodes_2802_; lean_object* v_depth_2803_; lean_object* v_tailSize_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; lean_object* v___x_2807_; lean_object* v___x_2808_; lean_object* v___x_2809_; lean_object* v___x_2810_; lean_object* v___x_2811_; lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v_numNodes_2802_ = lean_ctor_get(v_s_2801_, 0);
lean_inc(v_numNodes_2802_);
v_depth_2803_ = lean_ctor_get(v_s_2801_, 1);
lean_inc(v_depth_2803_);
v_tailSize_2804_ = lean_ctor_get(v_s_2801_, 2);
lean_inc(v_tailSize_2804_);
lean_dec_ref(v_s_2801_);
v___x_2805_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__0));
v___x_2806_ = l_Nat_reprFast(v_numNodes_2802_);
v___x_2807_ = lean_string_append(v___x_2805_, v___x_2806_);
lean_dec_ref(v___x_2806_);
v___x_2808_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__1));
v___x_2809_ = lean_string_append(v___x_2807_, v___x_2808_);
v___x_2810_ = l_Nat_reprFast(v_depth_2803_);
v___x_2811_ = lean_string_append(v___x_2809_, v___x_2810_);
lean_dec_ref(v___x_2810_);
v___x_2812_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__2));
v___x_2813_ = lean_string_append(v___x_2811_, v___x_2812_);
v___x_2814_ = l_Nat_reprFast(v_tailSize_2804_);
v___x_2815_ = lean_string_append(v___x_2813_, v___x_2814_);
lean_dec_ref(v___x_2814_);
v___x_2816_ = ((lean_object*)(l_Lean_PersistentArray_Stats_toString___closed__3));
v___x_2817_ = lean_string_append(v___x_2815_, v___x_2816_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(lean_object* v_v_2820_, lean_object* v_j_2821_, lean_object* v_a_2822_){
_start:
{
lean_object* v_zero_2823_; uint8_t v_isZero_2824_; 
v_zero_2823_ = lean_unsigned_to_nat(0u);
v_isZero_2824_ = lean_nat_dec_eq(v_j_2821_, v_zero_2823_);
if (v_isZero_2824_ == 1)
{
lean_dec(v_j_2821_);
lean_dec(v_v_2820_);
return v_a_2822_;
}
else
{
lean_object* v_one_2825_; lean_object* v_n_2826_; lean_object* v___x_2827_; 
v_one_2825_ = lean_unsigned_to_nat(1u);
v_n_2826_ = lean_nat_sub(v_j_2821_, v_one_2825_);
lean_dec(v_j_2821_);
lean_inc(v_v_2820_);
v___x_2827_ = l_Lean_PersistentArray_push___redArg(v_a_2822_, v_v_2820_);
v_j_2821_ = v_n_2826_;
v_a_2822_ = v___x_2827_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray___redArg(lean_object* v_n_2829_, lean_object* v_v_2830_){
_start:
{
lean_object* v___x_2831_; lean_object* v___x_2832_; 
v___x_2831_ = lean_obj_once(&l_Lean_PersistentArray_empty___closed__0, &l_Lean_PersistentArray_empty___closed__0_once, _init_l_Lean_PersistentArray_empty___closed__0);
v___x_2832_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(v_v_2830_, v_n_2829_, v___x_2831_);
return v___x_2832_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPersistentArray(lean_object* v_00_u03b1_2833_, lean_object* v_n_2834_, lean_object* v_v_2835_){
_start:
{
lean_object* v___x_2836_; 
v___x_2836_ = l_Lean_mkPersistentArray___redArg(v_n_2834_, v_v_2835_);
return v___x_2836_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0(lean_object* v_00_u03b1_2837_, lean_object* v_v_2838_, lean_object* v_n_2839_, lean_object* v_j_2840_, lean_object* v_a_2841_, lean_object* v_a_2842_){
_start:
{
lean_object* v___x_2843_; 
v___x_2843_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___redArg(v_v_2838_, v_j_2840_, v_a_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0___boxed(lean_object* v_00_u03b1_2844_, lean_object* v_v_2845_, lean_object* v_n_2846_, lean_object* v_j_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_){
_start:
{
lean_object* v_res_2850_; 
v_res_2850_ = l___private_Init_Data_Nat_Fold_0__Nat_foldTR_loop___at___00Lean_mkPersistentArray_spec__0(v_00_u03b1_2844_, v_v_2845_, v_n_2846_, v_j_2847_, v_a_2848_, v_a_2849_);
lean_dec(v_n_2846_);
return v_res_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPArray___redArg(lean_object* v_n_2851_, lean_object* v_v_2852_){
_start:
{
lean_object* v___x_2853_; 
v___x_2853_ = l_Lean_mkPersistentArray___redArg(v_n_2851_, v_v_2852_);
return v___x_2853_;
}
}
LEAN_EXPORT lean_object* l_Lean_mkPArray(lean_object* v_00_u03b1_2854_, lean_object* v_n_2855_, lean_object* v_v_2856_){
_start:
{
lean_object* v___x_2857_; 
v___x_2857_ = l_Lean_mkPersistentArray___redArg(v_n_2855_, v_v_2856_);
return v___x_2857_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(lean_object* v_a_2858_, lean_object* v_a_2859_){
_start:
{
if (lean_obj_tag(v_a_2858_) == 0)
{
return v_a_2859_;
}
else
{
lean_object* v_head_2860_; lean_object* v_tail_2861_; lean_object* v___x_2862_; 
v_head_2860_ = lean_ctor_get(v_a_2858_, 0);
lean_inc(v_head_2860_);
v_tail_2861_ = lean_ctor_get(v_a_2858_, 1);
lean_inc(v_tail_2861_);
lean_dec_ref_known(v_a_2858_, 2);
v___x_2862_ = l_Lean_PersistentArray_push___redArg(v_a_2859_, v_head_2860_);
v_a_2858_ = v_tail_2861_;
v_a_2859_ = v___x_2862_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop(lean_object* v_00_u03b1_2864_, lean_object* v_a_2865_, lean_object* v_a_2866_){
_start:
{
lean_object* v___x_2867_; 
v___x_2867_ = l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(v_a_2865_, v_a_2866_);
return v___x_2867_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27___redArg(lean_object* v_xs_2868_){
_start:
{
lean_object* v___x_2869_; lean_object* v___x_2870_; lean_object* v___x_2871_; lean_object* v___x_2872_; 
v___x_2869_ = lean_unsigned_to_nat(32u);
v___x_2870_ = lean_mk_empty_array_with_capacity(v___x_2869_);
lean_dec_ref(v___x_2870_);
v___x_2871_ = lean_obj_once(&l_Lean_instInhabitedPersistentArray_default___redArg___closed__1, &l_Lean_instInhabitedPersistentArray_default___redArg___closed__1_once, _init_l_Lean_instInhabitedPersistentArray_default___redArg___closed__1);
v___x_2872_ = l___private_Lean_Data_PersistentArray_0__Lean_List_toPArray_x27_loop___redArg(v_xs_2868_, v___x_2871_);
return v___x_2872_;
}
}
LEAN_EXPORT lean_object* l_Lean_List_toPArray_x27(lean_object* v_00_u03b1_2873_, lean_object* v_xs_2874_){
_start:
{
lean_object* v___x_2875_; 
v___x_2875_ = l_Lean_List_toPArray_x27___redArg(v_xs_2874_);
return v___x_2875_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg(lean_object* v_xs_2876_){
_start:
{
lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; uint8_t v___x_2880_; 
v___x_2877_ = lean_obj_once(&l_Lean_PersistentArray_empty___closed__0, &l_Lean_PersistentArray_empty___closed__0_once, _init_l_Lean_PersistentArray_empty___closed__0);
v___x_2878_ = lean_unsigned_to_nat(0u);
v___x_2879_ = lean_array_get_size(v_xs_2876_);
v___x_2880_ = lean_nat_dec_lt(v___x_2878_, v___x_2879_);
if (v___x_2880_ == 0)
{
return v___x_2877_;
}
else
{
size_t v___x_2881_; size_t v___x_2882_; lean_object* v___x_2883_; 
v___x_2881_ = ((size_t)0ULL);
v___x_2882_ = lean_usize_of_nat(v___x_2879_);
v___x_2883_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_PersistentArray_foldlM___at___00Lean_PersistentArray_append_spec__0_spec__1___redArg(v_xs_2876_, v___x_2881_, v___x_2882_, v___x_2877_);
return v___x_2883_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___redArg___boxed(lean_object* v_xs_2884_){
_start:
{
lean_object* v_res_2885_; 
v_res_2885_ = l_Lean_Array_toPArray_x27___redArg(v_xs_2884_);
lean_dec_ref(v_xs_2884_);
return v_res_2885_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27(lean_object* v_00_u03b1_2886_, lean_object* v_xs_2887_){
_start:
{
lean_object* v___x_2888_; 
v___x_2888_ = l_Lean_Array_toPArray_x27___redArg(v_xs_2887_);
return v___x_2888_;
}
}
LEAN_EXPORT lean_object* l_Lean_Array_toPArray_x27___boxed(lean_object* v_00_u03b1_2889_, lean_object* v_xs_2890_){
_start:
{
lean_object* v_res_2891_; 
v_res_2891_ = l_Lean_Array_toPArray_x27(v_00_u03b1_2889_, v_xs_2890_);
lean_dec_ref(v_xs_2890_);
return v_res_2891_;
}
}
lean_object* runtime_initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* runtime_initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Data_PersistentArray(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_Lean_PersistentArray_initShift = _init_l_Lean_PersistentArray_initShift();
l_Lean_PersistentArray_branching = _init_l_Lean_PersistentArray_branching();
l_Lean_PersistentArray_tooBig = _init_l_Lean_PersistentArray_tooBig();
lean_mark_persistent(l_Lean_PersistentArray_tooBig);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Data_PersistentArray(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Data_Nat_Fold(uint8_t builtin);
lean_object* initialize_Init_Data_UInt_Basic(uint8_t builtin);
lean_object* initialize_Init_Data_String_Defs(uint8_t builtin);
lean_object* initialize_Init_Data_ToString_Macro(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Data_PersistentArray(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Data_Nat_Fold(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_UInt_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_String_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Data_ToString_Macro(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Data_PersistentArray(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Data_PersistentArray(builtin);
}
#ifdef __cplusplus
}
#endif
