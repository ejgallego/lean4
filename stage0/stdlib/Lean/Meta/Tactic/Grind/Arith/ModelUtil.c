// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.Arith.ModelUtil
// Imports: public import Lean.Meta.Tactic.Grind.Types import Lean.Meta.Tactic.Grind.Arith.Util import Init.Grind.Module.Envelope
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
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Meta_Grind_Arith_quoteIfArithTerm(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_st_ref_take(lean_object*);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
uint8_t lean_expr_eqv(lean_object*, lean_object*);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isNatNum(lean_object*);
uint8_t l_Lean_Meta_Grind_Arith_isIntNum(lean_object*);
uint8_t l_Lean_Expr_isIte(lean_object*);
uint8_t l_Lean_Expr_isDIte(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
uint64_t lean_uint64_of_nat(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint64_t lean_usize_to_uint64(size_t);
lean_object* l_Lean_Meta_Grind_ParentSet_elems(lean_object*);
lean_object* l_Lean_Expr_cleanupAnnotations(lean_object*);
uint8_t l_Lean_Expr_isApp(lean_object*);
lean_object* l_Lean_Expr_appFnCleanup___redArg(lean_object*);
uint8_t l_Lean_Expr_isConstOf(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getRoot_x3f(lean_object*, lean_object*);
uint8_t l_instDecidableEqRat_decEq(lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getENode(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Meta_Grind_ENode_isRoot(lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getEqc(lean_object*, lean_object*, uint8_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_Grind_Goal_getGeneration(lean_object*, lean_object*);
uint8_t lean_expr_lt(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__1(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Eq"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(143, 37, 101, 248, 9, 246, 191, 223)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4_value;
static const lean_string_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "False"};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__5 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__5_value;
static const lean_ctor_object l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__5_value),LEAN_SCALAR_PTR_LITERAL(227, 122, 176, 177, 50, 175, 152, 12)}};
static const lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__6 = (const lean_object*)&l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__6_value;
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0(lean_object*, lean_object*, size_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0;
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___boxed(lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__1_value),LEAN_SCALAR_PTR_LITERAL(142, 44, 53, 46, 180, 233, 253, 99)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toInt"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__0_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__3_value),LEAN_SCALAR_PTR_LITERAL(36, 9, 44, 71, 206, 78, 188, 190)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__5_value),LEAN_SCALAR_PTR_LITERAL(221, 239, 47, 196, 170, 166, 59, 144)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__6_value),LEAN_SCALAR_PTR_LITERAL(134, 172, 115, 219, 189, 252, 56, 148)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__8_value),LEAN_SCALAR_PTR_LITERAL(254, 113, 255, 140, 142, 9, 169, 40)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__9_value),LEAN_SCALAR_PTR_LITERAL(248, 227, 200, 215, 229, 255, 92, 22)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__11_value),LEAN_SCALAR_PTR_LITERAL(121, 130, 45, 212, 110, 237, 236, 233)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__12_value),LEAN_SCALAR_PTR_LITERAL(231, 253, 204, 163, 168, 77, 27, 58)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "HSMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "hSMul"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__14_value),LEAN_SCALAR_PTR_LITERAL(226, 107, 25, 48, 80, 144, 236, 217)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__15_value),LEAN_SCALAR_PTR_LITERAL(23, 127, 6, 115, 121, 139, 223, 188)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__17_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__18_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__20_value),LEAN_SCALAR_PTR_LITERAL(74, 223, 78, 88, 255, 236, 144, 164)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__21_value),LEAN_SCALAR_PTR_LITERAL(26, 183, 188, 240, 156, 118, 170, 84)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__23_value),LEAN_SCALAR_PTR_LITERAL(93, 4, 3, 35, 188, 254, 191, 190)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__24_value),LEAN_SCALAR_PTR_LITERAL(120, 199, 142, 238, 9, 44, 94, 134)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "One"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "one"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__26_value),LEAN_SCALAR_PTR_LITERAL(19, 85, 184, 168, 121, 55, 74, 19)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__27_value),LEAN_SCALAR_PTR_LITERAL(31, 134, 200, 93, 163, 253, 252, 128)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Zero"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "zero"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__29_value),LEAN_SCALAR_PTR_LITERAL(192, 171, 244, 106, 217, 72, 118, 253)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__30_value),LEAN_SCALAR_PTR_LITERAL(172, 37, 33, 120, 251, 36, 203, 36)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "inv"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__32_value),LEAN_SCALAR_PTR_LITERAL(142, 68, 231, 210, 96, 163, 154, 19)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__33_value),LEAN_SCALAR_PTR_LITERAL(63, 31, 248, 222, 13, 64, 40, 141)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "NatCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "natCast"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__35_value),LEAN_SCALAR_PTR_LITERAL(65, 128, 63, 191, 243, 154, 52, 80)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__36_value),LEAN_SCALAR_PTR_LITERAL(47, 224, 192, 179, 253, 143, 7, 98)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__38_value),LEAN_SCALAR_PTR_LITERAL(130, 140, 200, 235, 144, 197, 118, 1)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "OfNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ofNat"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__40_value),LEAN_SCALAR_PTR_LITERAL(135, 241, 166, 108, 243, 216, 193, 244)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__41_value),LEAN_SCALAR_PTR_LITERAL(2, 108, 58, 34, 100, 49, 50, 216)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__43_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__44_value),LEAN_SCALAR_PTR_LITERAL(165, 91, 87, 132, 175, 103, 206, 109)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "IntModule"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "OfNatModule"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49_value;
static const lean_string_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "toQ"};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__46_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_0),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__47_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_1),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__48_value),LEAN_SCALAR_PTR_LITERAL(155, 104, 69, 168, 85, 29, 139, 105)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__49_value),LEAN_SCALAR_PTR_LITERAL(74, 53, 51, 211, 82, 161, 6, 157)}};
static const lean_ctor_object l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__50_value),LEAN_SCALAR_PTR_LITERAL(100, 80, 29, 215, 2, 174, 123, 91)}};
static const lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51 = (const lean_object*)&l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51_value;
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInterpretedTerm(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0;
static lean_once_cell_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Meta_Grind_Arith_finalizeModel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Meta_Grind_Arith_finalizeModel___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_finalizeModel___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_Arith_traceModel___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Meta_Grind_Arith_traceModel___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_Arith_traceModel___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_Arith_traceModel___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_Arith_traceModel___closed__0_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Meta_Grind_Arith_traceModel___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_Arith_traceModel___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Int_cast___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__1(lean_object* v_a_1_){
_start:
{
lean_object* v___x_2_; 
v___x_2_ = l_Rat_ofInt(v_a_1_);
return v___x_2_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(lean_object* v_a_3_, lean_object* v_x_4_){
_start:
{
if (lean_obj_tag(v_x_4_) == 0)
{
lean_object* v___x_5_; 
v___x_5_ = lean_box(0);
return v___x_5_;
}
else
{
lean_object* v_key_6_; lean_object* v_value_7_; lean_object* v_tail_8_; uint8_t v___x_9_; 
v_key_6_ = lean_ctor_get(v_x_4_, 0);
v_value_7_ = lean_ctor_get(v_x_4_, 1);
v_tail_8_ = lean_ctor_get(v_x_4_, 2);
v___x_9_ = lean_expr_eqv(v_key_6_, v_a_3_);
if (v___x_9_ == 0)
{
v_x_4_ = v_tail_8_;
goto _start;
}
else
{
lean_object* v___x_11_; 
lean_inc(v_value_7_);
v___x_11_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_11_, 0, v_value_7_);
return v___x_11_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg___boxed(lean_object* v_a_12_, lean_object* v_x_13_){
_start:
{
lean_object* v_res_14_; 
v_res_14_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(v_a_12_, v_x_13_);
lean_dec(v_x_13_);
lean_dec_ref(v_a_12_);
return v_res_14_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(lean_object* v_m_15_, lean_object* v_a_16_){
_start:
{
lean_object* v_buckets_17_; lean_object* v___x_18_; uint64_t v___x_19_; uint64_t v___x_20_; uint64_t v___x_21_; uint64_t v_fold_22_; uint64_t v___x_23_; uint64_t v___x_24_; uint64_t v___x_25_; size_t v___x_26_; size_t v___x_27_; size_t v___x_28_; size_t v___x_29_; size_t v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; 
v_buckets_17_ = lean_ctor_get(v_m_15_, 1);
v___x_18_ = lean_array_get_size(v_buckets_17_);
v___x_19_ = l_Lean_Expr_hash(v_a_16_);
v___x_20_ = 32ULL;
v___x_21_ = lean_uint64_shift_right(v___x_19_, v___x_20_);
v_fold_22_ = lean_uint64_xor(v___x_19_, v___x_21_);
v___x_23_ = 16ULL;
v___x_24_ = lean_uint64_shift_right(v_fold_22_, v___x_23_);
v___x_25_ = lean_uint64_xor(v_fold_22_, v___x_24_);
v___x_26_ = lean_uint64_to_usize(v___x_25_);
v___x_27_ = lean_usize_of_nat(v___x_18_);
v___x_28_ = ((size_t)1ULL);
v___x_29_ = lean_usize_sub(v___x_27_, v___x_28_);
v___x_30_ = lean_usize_land(v___x_26_, v___x_29_);
v___x_31_ = lean_array_uget_borrowed(v_buckets_17_, v___x_30_);
v___x_32_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(v_a_16_, v___x_31_);
return v___x_32_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg___boxed(lean_object* v_m_33_, lean_object* v_a_34_){
_start:
{
lean_object* v_res_35_; 
v_res_35_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_m_33_, v_a_34_);
lean_dec_ref(v_a_34_);
lean_dec_ref(v_m_33_);
return v_res_35_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(lean_object* v_a_36_, lean_object* v_v_37_, lean_object* v_other_38_){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_a_36_, v_other_38_);
if (lean_obj_tag(v___x_39_) == 1)
{
lean_object* v_val_40_; lean_object* v___x_41_; uint8_t v___x_42_; 
v_val_40_ = lean_ctor_get(v___x_39_, 0);
lean_inc(v_val_40_);
lean_dec_ref_known(v___x_39_, 1);
v___x_41_ = l_Rat_ofInt(v_v_37_);
v___x_42_ = l_instDecidableEqRat_decEq(v_val_40_, v___x_41_);
lean_dec_ref(v___x_41_);
lean_dec(v_val_40_);
if (v___x_42_ == 0)
{
uint8_t v___x_43_; 
v___x_43_ = 1;
return v___x_43_;
}
else
{
uint8_t v___x_44_; 
v___x_44_ = 0;
return v___x_44_;
}
}
else
{
uint8_t v___x_45_; 
lean_dec(v___x_39_);
lean_dec(v_v_37_);
v___x_45_ = 1;
return v___x_45_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq___boxed(lean_object* v_a_46_, lean_object* v_v_47_, lean_object* v_other_48_){
_start:
{
uint8_t v_res_49_; lean_object* v_r_50_; 
v_res_49_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(v_a_46_, v_v_47_, v_other_48_);
lean_dec_ref(v_other_48_);
lean_dec_ref(v_a_46_);
v_r_50_ = lean_box(v_res_49_);
return v_r_50_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0(lean_object* v_00_u03b2_51_, lean_object* v_m_52_, lean_object* v_a_53_){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_m_52_, v_a_53_);
return v___x_54_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___boxed(lean_object* v_00_u03b2_55_, lean_object* v_m_56_, lean_object* v_a_57_){
_start:
{
lean_object* v_res_58_; 
v_res_58_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0(v_00_u03b2_55_, v_m_56_, v_a_57_);
lean_dec_ref(v_a_57_);
lean_dec_ref(v_m_56_);
return v_res_58_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0(lean_object* v_00_u03b2_59_, lean_object* v_a_60_, lean_object* v_x_61_){
_start:
{
lean_object* v___x_62_; 
v___x_62_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___redArg(v_a_60_, v_x_61_);
return v___x_62_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0___boxed(lean_object* v_00_u03b2_63_, lean_object* v_a_64_, lean_object* v_x_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0_spec__0(v_00_u03b2_63_, v_a_64_, v_x_65_);
lean_dec(v_x_65_);
lean_dec_ref(v_a_64_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(lean_object* v_goal_82_, lean_object* v_e_83_, lean_object* v_a_84_, lean_object* v_v_85_, lean_object* v_as_x27_86_, lean_object* v_b_87_){
_start:
{
if (lean_obj_tag(v_as_x27_86_) == 0)
{
lean_dec(v_v_85_);
lean_inc_ref(v_b_87_);
return v_b_87_;
}
else
{
lean_object* v_head_88_; lean_object* v_tail_89_; lean_object* v___x_92_; lean_object* v___x_93_; uint8_t v___x_94_; 
v_head_88_ = lean_ctor_get(v_as_x27_86_, 0);
v_tail_89_ = lean_ctor_get(v_as_x27_86_, 1);
v___x_92_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2));
v___x_93_ = l_Lean_Expr_cleanupAnnotations(v_head_88_);
v___x_94_ = l_Lean_Expr_isApp(v___x_93_);
if (v___x_94_ == 0)
{
lean_dec_ref(v___x_93_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
lean_object* v___x_96_; uint8_t v___x_97_; 
v___x_96_ = l_Lean_Expr_appFnCleanup___redArg(v___x_93_);
v___x_97_ = l_Lean_Expr_isApp(v___x_96_);
if (v___x_97_ == 0)
{
lean_dec_ref(v___x_96_);
lean_dec_ref(v___x_93_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
lean_object* v___x_99_; uint8_t v___x_100_; 
v___x_99_ = l_Lean_Expr_appFnCleanup___redArg(v___x_96_);
v___x_100_ = l_Lean_Expr_isApp(v___x_99_);
if (v___x_100_ == 0)
{
lean_dec_ref(v___x_99_);
lean_dec_ref(v___x_96_);
lean_dec_ref(v___x_93_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_102_ = l_Lean_Expr_appFnCleanup___redArg(v___x_99_);
lean_dec_ref(v___x_99_);
v___x_103_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__4));
v___x_104_ = l_Lean_Expr_isConstOf(v___x_102_, v___x_103_);
lean_dec_ref(v___x_102_);
if (v___x_104_ == 0)
{
lean_dec_ref(v___x_96_);
lean_dec_ref(v___x_93_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v_goal_82_, v_head_88_);
if (lean_obj_tag(v___x_106_) == 1)
{
lean_object* v_val_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_val_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc(v_val_107_);
lean_dec_ref_known(v___x_106_, 1);
v___x_108_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__6));
v___x_109_ = l_Lean_Expr_isConstOf(v_val_107_, v___x_108_);
lean_dec(v_val_107_);
if (v___x_109_ == 0)
{
lean_dec_ref(v___x_96_);
lean_dec_ref(v___x_93_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
lean_object* v_arg_111_; lean_object* v___x_112_; 
v_arg_111_ = lean_ctor_get(v___x_96_, 1);
lean_inc_ref(v_arg_111_);
lean_dec_ref(v___x_96_);
v___x_112_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v_goal_82_, v_arg_111_);
lean_dec_ref(v_arg_111_);
if (lean_obj_tag(v___x_112_) == 1)
{
lean_object* v_val_113_; lean_object* v_arg_114_; lean_object* v___x_115_; 
v_val_113_ = lean_ctor_get(v___x_112_, 0);
lean_inc(v_val_113_);
lean_dec_ref_known(v___x_112_, 1);
v_arg_114_ = lean_ctor_get(v___x_93_, 1);
lean_inc_ref(v_arg_114_);
lean_dec_ref(v___x_93_);
v___x_115_ = l_Lean_Meta_Grind_Goal_getRoot_x3f(v_goal_82_, v_arg_114_);
lean_dec_ref(v_arg_114_);
if (lean_obj_tag(v___x_115_) == 1)
{
lean_object* v_val_116_; uint8_t v___y_118_; uint8_t v___x_123_; 
v_val_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_val_116_);
lean_dec_ref_known(v___x_115_, 1);
v___x_123_ = lean_expr_eqv(v_val_113_, v_e_83_);
if (v___x_123_ == 0)
{
v___y_118_ = v___x_123_;
goto v___jp_117_;
}
else
{
uint8_t v___x_124_; 
lean_inc(v_v_85_);
v___x_124_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(v_a_84_, v_v_85_, v_val_116_);
if (v___x_124_ == 0)
{
lean_dec(v_val_116_);
lean_dec(v_val_113_);
lean_dec(v_v_85_);
goto v___jp_90_;
}
else
{
uint8_t v___x_125_; 
v___x_125_ = 0;
v___y_118_ = v___x_125_;
goto v___jp_117_;
}
}
v___jp_117_:
{
uint8_t v___x_119_; 
v___x_119_ = lean_expr_eqv(v_val_116_, v_e_83_);
lean_dec(v_val_116_);
if (v___x_119_ == 0)
{
lean_dec(v_val_113_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
uint8_t v___x_121_; 
lean_inc(v_v_85_);
v___x_121_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq(v_a_84_, v_v_85_, v_val_113_);
lean_dec(v_val_113_);
if (v___x_121_ == 0)
{
lean_dec(v_v_85_);
goto v___jp_90_;
}
else
{
if (v___y_118_ == 0)
{
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
else
{
lean_dec(v_v_85_);
goto v___jp_90_;
}
}
}
}
}
else
{
lean_dec(v___x_115_);
lean_dec(v_val_113_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
}
else
{
lean_dec(v___x_112_);
lean_dec_ref(v___x_93_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
}
}
else
{
lean_dec(v___x_106_);
lean_dec_ref(v___x_96_);
lean_dec_ref(v___x_93_);
v_as_x27_86_ = v_tail_89_;
v_b_87_ = v___x_92_;
goto _start;
}
}
}
}
}
v___jp_90_:
{
lean_object* v___x_91_; 
v___x_91_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__1));
return v___x_91_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___boxed(lean_object* v_goal_129_, lean_object* v_e_130_, lean_object* v_a_131_, lean_object* v_v_132_, lean_object* v_as_x27_133_, lean_object* v_b_134_){
_start:
{
lean_object* v_res_135_; 
v_res_135_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(v_goal_129_, v_e_130_, v_a_131_, v_v_132_, v_as_x27_133_, v_b_134_);
lean_dec_ref(v_b_134_);
lean_dec(v_as_x27_133_);
lean_dec_ref(v_a_131_);
lean_dec_ref(v_e_130_);
lean_dec_ref(v_goal_129_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(lean_object* v_keys_136_, lean_object* v_vals_137_, lean_object* v_i_138_, lean_object* v_k_139_){
_start:
{
lean_object* v___x_140_; uint8_t v___x_141_; 
v___x_140_ = lean_array_get_size(v_keys_136_);
v___x_141_ = lean_nat_dec_lt(v_i_138_, v___x_140_);
if (v___x_141_ == 0)
{
lean_object* v___x_142_; 
lean_dec(v_i_138_);
v___x_142_ = lean_box(0);
return v___x_142_;
}
else
{
lean_object* v_k_x27_143_; size_t v___x_144_; size_t v___x_145_; uint8_t v___x_146_; 
v_k_x27_143_ = lean_array_fget_borrowed(v_keys_136_, v_i_138_);
v___x_144_ = lean_ptr_addr(v_k_139_);
v___x_145_ = lean_ptr_addr(v_k_x27_143_);
v___x_146_ = lean_usize_dec_eq(v___x_144_, v___x_145_);
if (v___x_146_ == 0)
{
lean_object* v___x_147_; lean_object* v___x_148_; 
v___x_147_ = lean_unsigned_to_nat(1u);
v___x_148_ = lean_nat_add(v_i_138_, v___x_147_);
lean_dec(v_i_138_);
v_i_138_ = v___x_148_;
goto _start;
}
else
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_array_fget_borrowed(v_vals_137_, v_i_138_);
lean_dec(v_i_138_);
lean_inc(v___x_150_);
v___x_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_151_, 0, v___x_150_);
return v___x_151_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg___boxed(lean_object* v_keys_152_, lean_object* v_vals_153_, lean_object* v_i_154_, lean_object* v_k_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(v_keys_152_, v_vals_153_, v_i_154_, v_k_155_);
lean_dec_ref(v_k_155_);
lean_dec_ref(v_vals_153_);
lean_dec_ref(v_keys_152_);
return v_res_156_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(lean_object* v_x_157_, size_t v_x_158_, lean_object* v_x_159_){
_start:
{
if (lean_obj_tag(v_x_157_) == 0)
{
lean_object* v_es_160_; lean_object* v___x_161_; size_t v___x_162_; size_t v___x_163_; lean_object* v_j_164_; lean_object* v___x_165_; 
v_es_160_ = lean_ctor_get(v_x_157_, 0);
v___x_161_ = lean_box(2);
v___x_162_ = ((size_t)31ULL);
v___x_163_ = lean_usize_land(v_x_158_, v___x_162_);
v_j_164_ = lean_usize_to_nat(v___x_163_);
v___x_165_ = lean_array_get_borrowed(v___x_161_, v_es_160_, v_j_164_);
lean_dec(v_j_164_);
switch(lean_obj_tag(v___x_165_))
{
case 0:
{
lean_object* v_key_166_; lean_object* v_val_167_; size_t v___x_168_; size_t v___x_169_; uint8_t v___x_170_; 
v_key_166_ = lean_ctor_get(v___x_165_, 0);
v_val_167_ = lean_ctor_get(v___x_165_, 1);
v___x_168_ = lean_ptr_addr(v_x_159_);
v___x_169_ = lean_ptr_addr(v_key_166_);
v___x_170_ = lean_usize_dec_eq(v___x_168_, v___x_169_);
if (v___x_170_ == 0)
{
lean_object* v___x_171_; 
v___x_171_ = lean_box(0);
return v___x_171_;
}
else
{
lean_object* v___x_172_; 
lean_inc(v_val_167_);
v___x_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_172_, 0, v_val_167_);
return v___x_172_;
}
}
case 1:
{
lean_object* v_node_173_; size_t v___x_174_; size_t v___x_175_; 
v_node_173_ = lean_ctor_get(v___x_165_, 0);
v___x_174_ = ((size_t)5ULL);
v___x_175_ = lean_usize_shift_right(v_x_158_, v___x_174_);
v_x_157_ = v_node_173_;
v_x_158_ = v___x_175_;
goto _start;
}
default: 
{
lean_object* v___x_177_; 
v___x_177_ = lean_box(0);
return v___x_177_;
}
}
}
else
{
lean_object* v_ks_178_; lean_object* v_vs_179_; lean_object* v___x_180_; lean_object* v___x_181_; 
v_ks_178_ = lean_ctor_get(v_x_157_, 0);
v_vs_179_ = lean_ctor_get(v_x_157_, 1);
v___x_180_ = lean_unsigned_to_nat(0u);
v___x_181_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(v_ks_178_, v_vs_179_, v___x_180_, v_x_159_);
return v___x_181_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg___boxed(lean_object* v_x_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
size_t v_x_1748__boxed_185_; lean_object* v_res_186_; 
v_x_1748__boxed_185_ = lean_unbox_usize(v_x_183_);
lean_dec(v_x_183_);
v_res_186_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(v_x_182_, v_x_1748__boxed_185_, v_x_184_);
lean_dec_ref(v_x_184_);
lean_dec_ref(v_x_182_);
return v_res_186_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(lean_object* v_x_187_, lean_object* v_x_188_){
_start:
{
size_t v___x_189_; size_t v___x_190_; size_t v___x_191_; uint64_t v___x_192_; size_t v___x_193_; lean_object* v___x_194_; 
v___x_189_ = lean_ptr_addr(v_x_188_);
v___x_190_ = ((size_t)3ULL);
v___x_191_ = lean_usize_shift_right(v___x_189_, v___x_190_);
v___x_192_ = lean_usize_to_uint64(v___x_191_);
v___x_193_ = lean_uint64_to_usize(v___x_192_);
v___x_194_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(v_x_187_, v___x_193_, v_x_188_);
return v___x_194_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg___boxed(lean_object* v_x_195_, lean_object* v_x_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(v_x_195_, v_x_196_);
lean_dec_ref(v_x_196_);
lean_dec_ref(v_x_195_);
return v_res_197_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(lean_object* v_goal_198_, lean_object* v_a_199_, lean_object* v_e_200_, lean_object* v_v_201_){
_start:
{
lean_object* v_toGoalState_202_; lean_object* v_parents_203_; lean_object* v___x_204_; 
v_toGoalState_202_ = lean_ctor_get(v_goal_198_, 0);
v_parents_203_ = lean_ctor_get(v_toGoalState_202_, 3);
v___x_204_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(v_parents_203_, v_e_200_);
if (lean_obj_tag(v___x_204_) == 1)
{
lean_object* v_val_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v_fst_209_; 
v_val_205_ = lean_ctor_get(v___x_204_, 0);
lean_inc(v_val_205_);
lean_dec_ref_known(v___x_204_, 1);
v___x_206_ = l_Lean_Meta_Grind_ParentSet_elems(v_val_205_);
lean_dec(v_val_205_);
v___x_207_ = ((lean_object*)(l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg___closed__2));
v___x_208_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(v_goal_198_, v_e_200_, v_a_199_, v_v_201_, v___x_206_, v___x_207_);
lean_dec(v___x_206_);
v_fst_209_ = lean_ctor_get(v___x_208_, 0);
lean_inc(v_fst_209_);
lean_dec_ref(v___x_208_);
if (lean_obj_tag(v_fst_209_) == 0)
{
uint8_t v___x_210_; 
v___x_210_ = 1;
return v___x_210_;
}
else
{
lean_object* v_val_211_; uint8_t v___x_212_; 
v_val_211_ = lean_ctor_get(v_fst_209_, 0);
lean_inc(v_val_211_);
lean_dec_ref_known(v_fst_209_, 1);
v___x_212_ = lean_unbox(v_val_211_);
lean_dec(v_val_211_);
return v___x_212_;
}
}
else
{
uint8_t v___x_213_; 
lean_dec(v___x_204_);
lean_dec(v_v_201_);
v___x_213_ = 1;
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs___boxed(lean_object* v_goal_214_, lean_object* v_a_215_, lean_object* v_e_216_, lean_object* v_v_217_){
_start:
{
uint8_t v_res_218_; lean_object* v_r_219_; 
v_res_218_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(v_goal_214_, v_a_215_, v_e_216_, v_v_217_);
lean_dec_ref(v_e_216_);
lean_dec_ref(v_a_215_);
lean_dec_ref(v_goal_214_);
v_r_219_ = lean_box(v_res_218_);
return v_r_219_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0(lean_object* v_00_u03b2_220_, lean_object* v_x_221_, lean_object* v_x_222_){
_start:
{
lean_object* v___x_223_; 
v___x_223_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___redArg(v_x_221_, v_x_222_);
return v___x_223_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0___boxed(lean_object* v_00_u03b2_224_, lean_object* v_x_225_, lean_object* v_x_226_){
_start:
{
lean_object* v_res_227_; 
v_res_227_ = l_Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0(v_00_u03b2_224_, v_x_225_, v_x_226_);
lean_dec_ref(v_x_226_);
lean_dec_ref(v_x_225_);
return v_res_227_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1(lean_object* v_goal_228_, lean_object* v_e_229_, lean_object* v_a_230_, lean_object* v_v_231_, lean_object* v_as_232_, lean_object* v_as_x27_233_, lean_object* v_b_234_, lean_object* v_a_235_){
_start:
{
lean_object* v___x_236_; 
v___x_236_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___redArg(v_goal_228_, v_e_229_, v_a_230_, v_v_231_, v_as_x27_233_, v_b_234_);
return v___x_236_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1___boxed(lean_object* v_goal_237_, lean_object* v_e_238_, lean_object* v_a_239_, lean_object* v_v_240_, lean_object* v_as_241_, lean_object* v_as_x27_242_, lean_object* v_b_243_, lean_object* v_a_244_){
_start:
{
lean_object* v_res_245_; 
v_res_245_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__1(v_goal_237_, v_e_238_, v_a_239_, v_v_240_, v_as_241_, v_as_x27_242_, v_b_243_, v_a_244_);
lean_dec_ref(v_b_243_);
lean_dec(v_as_x27_242_);
lean_dec(v_as_241_);
lean_dec_ref(v_a_239_);
lean_dec_ref(v_e_238_);
lean_dec_ref(v_goal_237_);
return v_res_245_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0(lean_object* v_00_u03b2_246_, lean_object* v_x_247_, size_t v_x_248_, lean_object* v_x_249_){
_start:
{
lean_object* v___x_250_; 
v___x_250_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___redArg(v_x_247_, v_x_248_, v_x_249_);
return v___x_250_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0___boxed(lean_object* v_00_u03b2_251_, lean_object* v_x_252_, lean_object* v_x_253_, lean_object* v_x_254_){
_start:
{
size_t v_x_1853__boxed_255_; lean_object* v_res_256_; 
v_x_1853__boxed_255_ = lean_unbox_usize(v_x_253_);
lean_dec(v_x_253_);
v_res_256_ = l_Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0(v_00_u03b2_251_, v_x_252_, v_x_1853__boxed_255_, v_x_254_);
lean_dec_ref(v_x_254_);
lean_dec_ref(v_x_252_);
return v_res_256_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_257_, lean_object* v_keys_258_, lean_object* v_vals_259_, lean_object* v_heq_260_, lean_object* v_i_261_, lean_object* v_k_262_){
_start:
{
lean_object* v___x_263_; 
v___x_263_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___redArg(v_keys_258_, v_vals_259_, v_i_261_, v_k_262_);
return v___x_263_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1___boxed(lean_object* v_00_u03b2_264_, lean_object* v_keys_265_, lean_object* v_vals_266_, lean_object* v_heq_267_, lean_object* v_i_268_, lean_object* v_k_269_){
_start:
{
lean_object* v_res_270_; 
v_res_270_ = l_Lean_PersistentHashMap_findAtAux___at___00Lean_PersistentHashMap_findAux___at___00Lean_PersistentHashMap_find_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_spec__0_spec__0_spec__1(v_00_u03b2_264_, v_keys_265_, v_vals_266_, v_heq_267_, v_i_268_, v_k_269_);
lean_dec_ref(v_k_269_);
lean_dec_ref(v_vals_266_);
lean_dec_ref(v_keys_265_);
return v_res_270_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(lean_object* v_a_271_, lean_object* v_x_272_){
_start:
{
if (lean_obj_tag(v_x_272_) == 0)
{
uint8_t v___x_273_; 
v___x_273_ = 0;
return v___x_273_;
}
else
{
lean_object* v_key_274_; lean_object* v_tail_275_; uint8_t v___x_276_; 
v_key_274_ = lean_ctor_get(v_x_272_, 0);
v_tail_275_ = lean_ctor_get(v_x_272_, 2);
v___x_276_ = lean_int_dec_eq(v_key_274_, v_a_271_);
if (v___x_276_ == 0)
{
v_x_272_ = v_tail_275_;
goto _start;
}
else
{
return v___x_276_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg___boxed(lean_object* v_a_278_, lean_object* v_x_279_){
_start:
{
uint8_t v_res_280_; lean_object* v_r_281_; 
v_res_280_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_278_, v_x_279_);
lean_dec(v_x_279_);
lean_dec(v_a_278_);
v_r_281_ = lean_box(v_res_280_);
return v_r_281_;
}
}
static lean_object* _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v_natZero_282_; lean_object* v_intZero_283_; 
v_natZero_282_ = lean_unsigned_to_nat(0u);
v_intZero_283_ = lean_nat_to_int(v_natZero_282_);
return v_intZero_283_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(lean_object* v_m_284_, lean_object* v_a_285_){
_start:
{
lean_object* v_buckets_286_; lean_object* v___x_287_; uint64_t v___y_289_; lean_object* v_intZero_303_; uint8_t v_isNeg_304_; 
v_buckets_286_ = lean_ctor_get(v_m_284_, 1);
v___x_287_ = lean_array_get_size(v_buckets_286_);
v_intZero_303_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_isNeg_304_ = lean_int_dec_lt(v_a_285_, v_intZero_303_);
if (v_isNeg_304_ == 0)
{
lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v___x_307_; uint64_t v___x_308_; 
v_a_305_ = lean_nat_abs(v_a_285_);
v___x_306_ = lean_unsigned_to_nat(2u);
v___x_307_ = lean_nat_mul(v___x_306_, v_a_305_);
lean_dec(v_a_305_);
v___x_308_ = lean_uint64_of_nat(v___x_307_);
lean_dec(v___x_307_);
v___y_289_ = v___x_308_;
goto v___jp_288_;
}
else
{
lean_object* v_abs_309_; lean_object* v_one_310_; lean_object* v_a_311_; lean_object* v___x_312_; lean_object* v___x_313_; lean_object* v___x_314_; uint64_t v___x_315_; 
v_abs_309_ = lean_nat_abs(v_a_285_);
v_one_310_ = lean_unsigned_to_nat(1u);
v_a_311_ = lean_nat_sub(v_abs_309_, v_one_310_);
lean_dec(v_abs_309_);
v___x_312_ = lean_unsigned_to_nat(2u);
v___x_313_ = lean_nat_mul(v___x_312_, v_a_311_);
lean_dec(v_a_311_);
v___x_314_ = lean_nat_add(v___x_313_, v_one_310_);
lean_dec(v___x_313_);
v___x_315_ = lean_uint64_of_nat(v___x_314_);
lean_dec(v___x_314_);
v___y_289_ = v___x_315_;
goto v___jp_288_;
}
v___jp_288_:
{
uint64_t v___x_290_; uint64_t v___x_291_; uint64_t v_fold_292_; uint64_t v___x_293_; uint64_t v___x_294_; uint64_t v___x_295_; size_t v___x_296_; size_t v___x_297_; size_t v___x_298_; size_t v___x_299_; size_t v___x_300_; lean_object* v___x_301_; uint8_t v___x_302_; 
v___x_290_ = 32ULL;
v___x_291_ = lean_uint64_shift_right(v___y_289_, v___x_290_);
v_fold_292_ = lean_uint64_xor(v___y_289_, v___x_291_);
v___x_293_ = 16ULL;
v___x_294_ = lean_uint64_shift_right(v_fold_292_, v___x_293_);
v___x_295_ = lean_uint64_xor(v_fold_292_, v___x_294_);
v___x_296_ = lean_uint64_to_usize(v___x_295_);
v___x_297_ = lean_usize_of_nat(v___x_287_);
v___x_298_ = ((size_t)1ULL);
v___x_299_ = lean_usize_sub(v___x_297_, v___x_298_);
v___x_300_ = lean_usize_land(v___x_296_, v___x_299_);
v___x_301_ = lean_array_uget_borrowed(v_buckets_286_, v___x_300_);
v___x_302_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_285_, v___x_301_);
return v___x_302_;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___boxed(lean_object* v_m_316_, lean_object* v_a_317_){
_start:
{
uint8_t v_res_318_; lean_object* v_r_319_; 
v_res_318_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(v_m_316_, v_a_317_);
lean_dec(v_a_317_);
lean_dec_ref(v_m_316_);
v_r_319_ = lean_box(v_res_318_);
return v_r_319_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; 
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_to_int(v___x_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(lean_object* v_goal_322_, lean_object* v_a_323_, lean_object* v_e_324_, lean_object* v_alreadyUsed_325_, lean_object* v_next_326_){
_start:
{
uint8_t v___x_331_; 
v___x_331_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(v_alreadyUsed_325_, v_next_326_);
if (v___x_331_ == 0)
{
uint8_t v___x_332_; 
lean_inc(v_next_326_);
v___x_332_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs(v_goal_322_, v_a_323_, v_e_324_, v_next_326_);
if (v___x_332_ == 0)
{
goto v___jp_327_;
}
else
{
return v_next_326_;
}
}
else
{
goto v___jp_327_;
}
v___jp_327_:
{
lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_328_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_329_ = lean_int_add(v_next_326_, v___x_328_);
lean_dec(v_next_326_);
v_next_326_ = v___x_329_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___boxed(lean_object* v_goal_333_, lean_object* v_a_334_, lean_object* v_e_335_, lean_object* v_alreadyUsed_336_, lean_object* v_next_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_333_, v_a_334_, v_e_335_, v_alreadyUsed_336_, v_next_337_);
lean_dec_ref(v_alreadyUsed_336_);
lean_dec_ref(v_e_335_);
lean_dec_ref(v_a_334_);
lean_dec_ref(v_goal_333_);
return v_res_338_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0(lean_object* v_00_u03b2_339_, lean_object* v_m_340_, lean_object* v_a_341_){
_start:
{
uint8_t v___x_342_; 
v___x_342_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg(v_m_340_, v_a_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___boxed(lean_object* v_00_u03b2_343_, lean_object* v_m_344_, lean_object* v_a_345_){
_start:
{
uint8_t v_res_346_; lean_object* v_r_347_; 
v_res_346_ = l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0(v_00_u03b2_343_, v_m_344_, v_a_345_);
lean_dec(v_a_345_);
lean_dec_ref(v_m_344_);
v_r_347_ = lean_box(v_res_346_);
return v_r_347_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0(lean_object* v_00_u03b2_348_, lean_object* v_a_349_, lean_object* v_x_350_){
_start:
{
uint8_t v___x_351_; 
v___x_351_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_349_, v_x_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___boxed(lean_object* v_00_u03b2_352_, lean_object* v_a_353_, lean_object* v_x_354_){
_start:
{
uint8_t v_res_355_; lean_object* v_r_356_; 
v_res_355_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0(v_00_u03b2_352_, v_a_353_, v_x_354_);
lean_dec(v_x_354_);
lean_dec(v_a_353_);
v_r_356_ = lean_box(v_res_355_);
return v_r_356_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue(lean_object* v_goal_357_, lean_object* v_a_358_, lean_object* v_e_359_, lean_object* v_next_360_, lean_object* v_alreadyUsed_361_){
_start:
{
lean_object* v___x_362_; 
v___x_362_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_357_, v_a_358_, v_e_359_, v_alreadyUsed_361_, v_next_360_);
return v___x_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_pickUnusedValue___boxed(lean_object* v_goal_363_, lean_object* v_a_364_, lean_object* v_e_365_, lean_object* v_next_366_, lean_object* v_alreadyUsed_367_){
_start:
{
lean_object* v_res_368_; 
v_res_368_ = l_Lean_Meta_Grind_Arith_pickUnusedValue(v_goal_363_, v_a_364_, v_e_365_, v_next_366_, v_alreadyUsed_367_);
lean_dec_ref(v_alreadyUsed_367_);
lean_dec_ref(v_e_365_);
lean_dec_ref(v_a_364_);
lean_dec_ref(v_goal_363_);
return v_res_368_;
}
}
LEAN_EXPORT uint8_t l_Lean_Meta_Grind_Arith_isInterpretedTerm(lean_object* v_e_457_){
_start:
{
uint8_t v___x_463_; 
v___x_463_ = l_Lean_Meta_Grind_Arith_isNatNum(v_e_457_);
if (v___x_463_ == 0)
{
uint8_t v___x_464_; 
v___x_464_ = l_Lean_Meta_Grind_Arith_isIntNum(v_e_457_);
if (v___x_464_ == 0)
{
lean_object* v___x_465_; uint8_t v___x_466_; 
v___x_465_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__7));
v___x_466_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_465_);
if (v___x_466_ == 0)
{
lean_object* v___x_467_; uint8_t v___x_468_; 
v___x_467_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__10));
v___x_468_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_467_);
if (v___x_468_ == 0)
{
lean_object* v___x_469_; uint8_t v___x_470_; 
v___x_469_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__13));
v___x_470_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_469_);
if (v___x_470_ == 0)
{
lean_object* v___x_471_; uint8_t v___x_472_; 
v___x_471_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__16));
v___x_472_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_471_);
if (v___x_472_ == 0)
{
lean_object* v___x_473_; uint8_t v___x_474_; 
v___x_473_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__19));
v___x_474_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_473_);
if (v___x_474_ == 0)
{
lean_object* v___x_475_; uint8_t v___x_476_; 
v___x_475_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__22));
v___x_476_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_475_);
if (v___x_476_ == 0)
{
lean_object* v___x_477_; uint8_t v___x_478_; 
v___x_477_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__25));
v___x_478_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_477_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; uint8_t v___x_480_; 
v___x_479_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__28));
v___x_480_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_479_);
if (v___x_480_ == 0)
{
lean_object* v___x_481_; uint8_t v___x_482_; 
v___x_481_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__31));
v___x_482_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_481_);
if (v___x_482_ == 0)
{
lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_483_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__34));
v___x_484_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_483_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_485_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__37));
v___x_486_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_485_);
if (v___x_486_ == 0)
{
uint8_t v___x_487_; 
v___x_487_ = l_Lean_Expr_isIte(v_e_457_);
if (v___x_487_ == 0)
{
uint8_t v___x_488_; 
v___x_488_ = l_Lean_Expr_isDIte(v_e_457_);
if (v___x_488_ == 0)
{
lean_object* v___x_489_; uint8_t v___x_490_; 
v___x_489_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__39));
v___x_490_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; uint8_t v___x_492_; 
v___x_491_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__42));
v___x_492_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_491_);
if (v___x_492_ == 0)
{
lean_object* v___x_493_; uint8_t v___x_494_; 
v___x_493_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__45));
v___x_494_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_493_);
if (v___x_494_ == 0)
{
lean_object* v___x_495_; uint8_t v___x_496_; 
v___x_495_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__51));
v___x_496_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_495_);
if (v___x_496_ == 0)
{
if (lean_obj_tag(v_e_457_) == 9)
{
lean_object* v_a_497_; 
v_a_497_ = lean_ctor_get(v_e_457_, 0);
if (lean_obj_tag(v_a_497_) == 0)
{
uint8_t v___x_498_; 
v___x_498_ = 1;
return v___x_498_;
}
else
{
goto v___jp_458_;
}
}
else
{
goto v___jp_458_;
}
}
else
{
return v___x_496_;
}
}
else
{
return v___x_494_;
}
}
else
{
return v___x_492_;
}
}
else
{
return v___x_490_;
}
}
else
{
return v___x_488_;
}
}
else
{
return v___x_487_;
}
}
else
{
return v___x_486_;
}
}
else
{
return v___x_484_;
}
}
else
{
return v___x_482_;
}
}
else
{
return v___x_480_;
}
}
else
{
return v___x_478_;
}
}
else
{
return v___x_476_;
}
}
else
{
return v___x_474_;
}
}
else
{
return v___x_472_;
}
}
else
{
return v___x_470_;
}
}
else
{
return v___x_468_;
}
}
else
{
return v___x_466_;
}
}
else
{
return v___x_464_;
}
}
else
{
return v___x_463_;
}
v___jp_458_:
{
lean_object* v___x_459_; uint8_t v___x_460_; 
v___x_459_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__2));
v___x_460_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_459_);
if (v___x_460_ == 0)
{
lean_object* v___x_461_; uint8_t v___x_462_; 
v___x_461_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_isInterpretedTerm___closed__4));
v___x_462_ = l_Lean_Expr_isAppOf(v_e_457_, v___x_461_);
return v___x_462_;
}
else
{
return v___x_460_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_isInterpretedTerm___boxed(lean_object* v_e_499_){
_start:
{
uint8_t v_res_500_; lean_object* v_r_501_; 
v_res_500_ = l_Lean_Meta_Grind_Arith_isInterpretedTerm(v_e_499_);
lean_dec_ref(v_e_499_);
v_r_501_ = lean_box(v_res_500_);
return v_r_501_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(lean_object* v_x_502_, lean_object* v_x_503_){
_start:
{
if (lean_obj_tag(v_x_503_) == 0)
{
return v_x_502_;
}
else
{
lean_object* v_key_504_; lean_object* v_value_505_; lean_object* v_tail_506_; lean_object* v___x_508_; uint8_t v_isShared_509_; uint8_t v_isSharedCheck_529_; 
v_key_504_ = lean_ctor_get(v_x_503_, 0);
v_value_505_ = lean_ctor_get(v_x_503_, 1);
v_tail_506_ = lean_ctor_get(v_x_503_, 2);
v_isSharedCheck_529_ = !lean_is_exclusive(v_x_503_);
if (v_isSharedCheck_529_ == 0)
{
v___x_508_ = v_x_503_;
v_isShared_509_ = v_isSharedCheck_529_;
goto v_resetjp_507_;
}
else
{
lean_inc(v_tail_506_);
lean_inc(v_value_505_);
lean_inc(v_key_504_);
lean_dec(v_x_503_);
v___x_508_ = lean_box(0);
v_isShared_509_ = v_isSharedCheck_529_;
goto v_resetjp_507_;
}
v_resetjp_507_:
{
lean_object* v___x_510_; uint64_t v___x_511_; uint64_t v___x_512_; uint64_t v___x_513_; uint64_t v_fold_514_; uint64_t v___x_515_; uint64_t v___x_516_; uint64_t v___x_517_; size_t v___x_518_; size_t v___x_519_; size_t v___x_520_; size_t v___x_521_; size_t v___x_522_; lean_object* v___x_523_; lean_object* v___x_525_; 
v___x_510_ = lean_array_get_size(v_x_502_);
v___x_511_ = l_Lean_Expr_hash(v_key_504_);
v___x_512_ = 32ULL;
v___x_513_ = lean_uint64_shift_right(v___x_511_, v___x_512_);
v_fold_514_ = lean_uint64_xor(v___x_511_, v___x_513_);
v___x_515_ = 16ULL;
v___x_516_ = lean_uint64_shift_right(v_fold_514_, v___x_515_);
v___x_517_ = lean_uint64_xor(v_fold_514_, v___x_516_);
v___x_518_ = lean_uint64_to_usize(v___x_517_);
v___x_519_ = lean_usize_of_nat(v___x_510_);
v___x_520_ = ((size_t)1ULL);
v___x_521_ = lean_usize_sub(v___x_519_, v___x_520_);
v___x_522_ = lean_usize_land(v___x_518_, v___x_521_);
v___x_523_ = lean_array_uget_borrowed(v_x_502_, v___x_522_);
lean_inc(v___x_523_);
if (v_isShared_509_ == 0)
{
lean_ctor_set(v___x_508_, 2, v___x_523_);
v___x_525_ = v___x_508_;
goto v_reusejp_524_;
}
else
{
lean_object* v_reuseFailAlloc_528_; 
v_reuseFailAlloc_528_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_528_, 0, v_key_504_);
lean_ctor_set(v_reuseFailAlloc_528_, 1, v_value_505_);
lean_ctor_set(v_reuseFailAlloc_528_, 2, v___x_523_);
v___x_525_ = v_reuseFailAlloc_528_;
goto v_reusejp_524_;
}
v_reusejp_524_:
{
lean_object* v___x_526_; 
v___x_526_ = lean_array_uset(v_x_502_, v___x_522_, v___x_525_);
v_x_502_ = v___x_526_;
v_x_503_ = v_tail_506_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(lean_object* v_i_530_, lean_object* v_source_531_, lean_object* v_target_532_){
_start:
{
lean_object* v___x_533_; uint8_t v___x_534_; 
v___x_533_ = lean_array_get_size(v_source_531_);
v___x_534_ = lean_nat_dec_lt(v_i_530_, v___x_533_);
if (v___x_534_ == 0)
{
lean_dec_ref(v_source_531_);
lean_dec(v_i_530_);
return v_target_532_;
}
else
{
lean_object* v_es_535_; lean_object* v___x_536_; lean_object* v_source_537_; lean_object* v_target_538_; lean_object* v___x_539_; lean_object* v___x_540_; 
v_es_535_ = lean_array_fget(v_source_531_, v_i_530_);
v___x_536_ = lean_box(0);
v_source_537_ = lean_array_fset(v_source_531_, v_i_530_, v___x_536_);
v_target_538_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(v_target_532_, v_es_535_);
v___x_539_ = lean_unsigned_to_nat(1u);
v___x_540_ = lean_nat_add(v_i_530_, v___x_539_);
lean_dec(v_i_530_);
v_i_530_ = v___x_540_;
v_source_531_ = v_source_537_;
v_target_532_ = v_target_538_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(lean_object* v_data_542_){
_start:
{
lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v_nbuckets_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_543_ = lean_array_get_size(v_data_542_);
v___x_544_ = lean_unsigned_to_nat(2u);
v_nbuckets_545_ = lean_nat_mul(v___x_543_, v___x_544_);
v___x_546_ = lean_unsigned_to_nat(0u);
v___x_547_ = lean_box(0);
v___x_548_ = lean_mk_array(v_nbuckets_545_, v___x_547_);
v___x_549_ = lean_array_propagate_mark(v_data_542_, v___x_548_);
v___x_550_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(v___x_546_, v_data_542_, v___x_549_);
return v___x_550_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(lean_object* v_a_551_, lean_object* v_b_552_, lean_object* v_x_553_){
_start:
{
if (lean_obj_tag(v_x_553_) == 0)
{
lean_dec(v_b_552_);
lean_dec_ref(v_a_551_);
return v_x_553_;
}
else
{
lean_object* v_key_554_; lean_object* v_value_555_; lean_object* v_tail_556_; lean_object* v___x_558_; uint8_t v_isShared_559_; uint8_t v_isSharedCheck_568_; 
v_key_554_ = lean_ctor_get(v_x_553_, 0);
v_value_555_ = lean_ctor_get(v_x_553_, 1);
v_tail_556_ = lean_ctor_get(v_x_553_, 2);
v_isSharedCheck_568_ = !lean_is_exclusive(v_x_553_);
if (v_isSharedCheck_568_ == 0)
{
v___x_558_ = v_x_553_;
v_isShared_559_ = v_isSharedCheck_568_;
goto v_resetjp_557_;
}
else
{
lean_inc(v_tail_556_);
lean_inc(v_value_555_);
lean_inc(v_key_554_);
lean_dec(v_x_553_);
v___x_558_ = lean_box(0);
v_isShared_559_ = v_isSharedCheck_568_;
goto v_resetjp_557_;
}
v_resetjp_557_:
{
uint8_t v___x_560_; 
v___x_560_ = lean_expr_eqv(v_key_554_, v_a_551_);
if (v___x_560_ == 0)
{
lean_object* v___x_561_; lean_object* v___x_563_; 
v___x_561_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(v_a_551_, v_b_552_, v_tail_556_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 2, v___x_561_);
v___x_563_ = v___x_558_;
goto v_reusejp_562_;
}
else
{
lean_object* v_reuseFailAlloc_564_; 
v_reuseFailAlloc_564_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_564_, 0, v_key_554_);
lean_ctor_set(v_reuseFailAlloc_564_, 1, v_value_555_);
lean_ctor_set(v_reuseFailAlloc_564_, 2, v___x_561_);
v___x_563_ = v_reuseFailAlloc_564_;
goto v_reusejp_562_;
}
v_reusejp_562_:
{
return v___x_563_;
}
}
else
{
lean_object* v___x_566_; 
lean_dec(v_value_555_);
lean_dec(v_key_554_);
if (v_isShared_559_ == 0)
{
lean_ctor_set(v___x_558_, 1, v_b_552_);
lean_ctor_set(v___x_558_, 0, v_a_551_);
v___x_566_ = v___x_558_;
goto v_reusejp_565_;
}
else
{
lean_object* v_reuseFailAlloc_567_; 
v_reuseFailAlloc_567_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_567_, 0, v_a_551_);
lean_ctor_set(v_reuseFailAlloc_567_, 1, v_b_552_);
lean_ctor_set(v_reuseFailAlloc_567_, 2, v_tail_556_);
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
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(lean_object* v_a_569_, lean_object* v_x_570_){
_start:
{
if (lean_obj_tag(v_x_570_) == 0)
{
uint8_t v___x_571_; 
v___x_571_ = 0;
return v___x_571_;
}
else
{
lean_object* v_key_572_; lean_object* v_tail_573_; uint8_t v___x_574_; 
v_key_572_ = lean_ctor_get(v_x_570_, 0);
v_tail_573_ = lean_ctor_get(v_x_570_, 2);
v___x_574_ = lean_expr_eqv(v_key_572_, v_a_569_);
if (v___x_574_ == 0)
{
v_x_570_ = v_tail_573_;
goto _start;
}
else
{
return v___x_574_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg___boxed(lean_object* v_a_576_, lean_object* v_x_577_){
_start:
{
uint8_t v_res_578_; lean_object* v_r_579_; 
v_res_578_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(v_a_576_, v_x_577_);
lean_dec(v_x_577_);
lean_dec_ref(v_a_576_);
v_r_579_ = lean_box(v_res_578_);
return v_r_579_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(lean_object* v_m_580_, lean_object* v_a_581_, lean_object* v_b_582_){
_start:
{
lean_object* v_size_583_; lean_object* v_buckets_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_627_; 
v_size_583_ = lean_ctor_get(v_m_580_, 0);
v_buckets_584_ = lean_ctor_get(v_m_580_, 1);
v_isSharedCheck_627_ = !lean_is_exclusive(v_m_580_);
if (v_isSharedCheck_627_ == 0)
{
v___x_586_ = v_m_580_;
v_isShared_587_ = v_isSharedCheck_627_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_buckets_584_);
lean_inc(v_size_583_);
lean_dec(v_m_580_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_627_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; uint64_t v___x_589_; uint64_t v___x_590_; uint64_t v___x_591_; uint64_t v_fold_592_; uint64_t v___x_593_; uint64_t v___x_594_; uint64_t v___x_595_; size_t v___x_596_; size_t v___x_597_; size_t v___x_598_; size_t v___x_599_; size_t v___x_600_; lean_object* v_bkt_601_; uint8_t v___x_602_; 
v___x_588_ = lean_array_get_size(v_buckets_584_);
v___x_589_ = l_Lean_Expr_hash(v_a_581_);
v___x_590_ = 32ULL;
v___x_591_ = lean_uint64_shift_right(v___x_589_, v___x_590_);
v_fold_592_ = lean_uint64_xor(v___x_589_, v___x_591_);
v___x_593_ = 16ULL;
v___x_594_ = lean_uint64_shift_right(v_fold_592_, v___x_593_);
v___x_595_ = lean_uint64_xor(v_fold_592_, v___x_594_);
v___x_596_ = lean_uint64_to_usize(v___x_595_);
v___x_597_ = lean_usize_of_nat(v___x_588_);
v___x_598_ = ((size_t)1ULL);
v___x_599_ = lean_usize_sub(v___x_597_, v___x_598_);
v___x_600_ = lean_usize_land(v___x_596_, v___x_599_);
v_bkt_601_ = lean_array_uget_borrowed(v_buckets_584_, v___x_600_);
v___x_602_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(v_a_581_, v_bkt_601_);
if (v___x_602_ == 0)
{
lean_object* v___x_603_; lean_object* v_size_x27_604_; lean_object* v___x_605_; lean_object* v_buckets_x27_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; uint8_t v___x_612_; 
v___x_603_ = lean_unsigned_to_nat(1u);
v_size_x27_604_ = lean_nat_add(v_size_583_, v___x_603_);
lean_dec(v_size_583_);
lean_inc(v_bkt_601_);
v___x_605_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_605_, 0, v_a_581_);
lean_ctor_set(v___x_605_, 1, v_b_582_);
lean_ctor_set(v___x_605_, 2, v_bkt_601_);
v_buckets_x27_606_ = lean_array_uset(v_buckets_584_, v___x_600_, v___x_605_);
v___x_607_ = lean_unsigned_to_nat(4u);
v___x_608_ = lean_nat_mul(v_size_x27_604_, v___x_607_);
v___x_609_ = lean_unsigned_to_nat(3u);
v___x_610_ = lean_nat_div(v___x_608_, v___x_609_);
lean_dec(v___x_608_);
v___x_611_ = lean_array_get_size(v_buckets_x27_606_);
v___x_612_ = lean_nat_dec_le(v___x_610_, v___x_611_);
lean_dec(v___x_610_);
if (v___x_612_ == 0)
{
lean_object* v_val_613_; lean_object* v___x_615_; 
v_val_613_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(v_buckets_x27_606_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 1, v_val_613_);
lean_ctor_set(v___x_586_, 0, v_size_x27_604_);
v___x_615_ = v___x_586_;
goto v_reusejp_614_;
}
else
{
lean_object* v_reuseFailAlloc_616_; 
v_reuseFailAlloc_616_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_616_, 0, v_size_x27_604_);
lean_ctor_set(v_reuseFailAlloc_616_, 1, v_val_613_);
v___x_615_ = v_reuseFailAlloc_616_;
goto v_reusejp_614_;
}
v_reusejp_614_:
{
return v___x_615_;
}
}
else
{
lean_object* v___x_618_; 
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 1, v_buckets_x27_606_);
lean_ctor_set(v___x_586_, 0, v_size_x27_604_);
v___x_618_ = v___x_586_;
goto v_reusejp_617_;
}
else
{
lean_object* v_reuseFailAlloc_619_; 
v_reuseFailAlloc_619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_619_, 0, v_size_x27_604_);
lean_ctor_set(v_reuseFailAlloc_619_, 1, v_buckets_x27_606_);
v___x_618_ = v_reuseFailAlloc_619_;
goto v_reusejp_617_;
}
v_reusejp_617_:
{
return v___x_618_;
}
}
}
else
{
lean_object* v___x_620_; lean_object* v_buckets_x27_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_625_; 
lean_inc(v_bkt_601_);
v___x_620_ = lean_box(0);
v_buckets_x27_621_ = lean_array_uset(v_buckets_584_, v___x_600_, v___x_620_);
v___x_622_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(v_a_581_, v_b_582_, v_bkt_601_);
v___x_623_ = lean_array_uset(v_buckets_x27_621_, v___x_600_, v___x_622_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 1, v___x_623_);
v___x_625_ = v___x_586_;
goto v_reusejp_624_;
}
else
{
lean_object* v_reuseFailAlloc_626_; 
v_reuseFailAlloc_626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_626_, 0, v_size_583_);
lean_ctor_set(v_reuseFailAlloc_626_, 1, v___x_623_);
v___x_625_ = v_reuseFailAlloc_626_;
goto v_reusejp_624_;
}
v_reusejp_624_:
{
return v___x_625_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(lean_object* v_v_628_, lean_object* v_as_x27_629_, lean_object* v_b_630_){
_start:
{
if (lean_obj_tag(v_as_x27_629_) == 0)
{
lean_dec_ref(v_v_628_);
return v_b_630_;
}
else
{
lean_object* v_head_631_; lean_object* v_tail_632_; lean_object* v___x_633_; 
v_head_631_ = lean_ctor_get(v_as_x27_629_, 0);
v_tail_632_ = lean_ctor_get(v_as_x27_629_, 1);
lean_inc_ref(v_v_628_);
lean_inc(v_head_631_);
v___x_633_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(v_b_630_, v_head_631_, v_v_628_);
v_as_x27_629_ = v_tail_632_;
v_b_630_ = v___x_633_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg___boxed(lean_object* v_v_635_, lean_object* v_as_x27_636_, lean_object* v_b_637_){
_start:
{
lean_object* v_res_638_; 
v_res_638_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(v_v_635_, v_as_x27_636_, v_b_637_);
lean_dec(v_as_x27_636_);
return v_res_638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc(lean_object* v_goal_639_, lean_object* v_e_640_, lean_object* v_v_641_, lean_object* v_a_642_){
_start:
{
uint8_t v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; 
v___x_643_ = 0;
v___x_644_ = l_Lean_Meta_Grind_Goal_getEqc(v_goal_639_, v_e_640_, v___x_643_);
v___x_645_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(v_v_641_, v___x_644_, v_a_642_);
lean_dec(v___x_644_);
return v___x_645_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_assignEqc___boxed(lean_object* v_goal_646_, lean_object* v_e_647_, lean_object* v_v_648_, lean_object* v_a_649_){
_start:
{
lean_object* v_res_650_; 
v_res_650_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_646_, v_e_647_, v_v_648_, v_a_649_);
lean_dec_ref(v_goal_646_);
return v_res_650_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0(lean_object* v_00_u03b2_651_, lean_object* v_m_652_, lean_object* v_a_653_, lean_object* v_b_654_){
_start:
{
lean_object* v___x_655_; 
v___x_655_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0___redArg(v_m_652_, v_a_653_, v_b_654_);
return v___x_655_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1(lean_object* v_v_656_, lean_object* v_as_657_, lean_object* v_as_x27_658_, lean_object* v_b_659_, lean_object* v_a_660_){
_start:
{
lean_object* v___x_661_; 
v___x_661_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___redArg(v_v_656_, v_as_x27_658_, v_b_659_);
return v___x_661_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1___boxed(lean_object* v_v_662_, lean_object* v_as_663_, lean_object* v_as_x27_664_, lean_object* v_b_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_List_forIn_x27_loop___at___00Lean_Meta_Grind_Arith_assignEqc_spec__1(v_v_662_, v_as_663_, v_as_x27_664_, v_b_665_, v_a_666_);
lean_dec(v_as_x27_664_);
lean_dec(v_as_663_);
return v_res_667_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0(lean_object* v_00_u03b2_668_, lean_object* v_a_669_, lean_object* v_x_670_){
_start:
{
uint8_t v___x_671_; 
v___x_671_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___redArg(v_a_669_, v_x_670_);
return v___x_671_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0___boxed(lean_object* v_00_u03b2_672_, lean_object* v_a_673_, lean_object* v_x_674_){
_start:
{
uint8_t v_res_675_; lean_object* v_r_676_; 
v_res_675_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__0(v_00_u03b2_672_, v_a_673_, v_x_674_);
lean_dec(v_x_674_);
lean_dec_ref(v_a_673_);
v_r_676_ = lean_box(v_res_675_);
return v_r_676_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1(lean_object* v_00_u03b2_677_, lean_object* v_data_678_){
_start:
{
lean_object* v___x_679_; 
v___x_679_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1___redArg(v_data_678_);
return v___x_679_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2(lean_object* v_00_u03b2_680_, lean_object* v_a_681_, lean_object* v_b_682_, lean_object* v_x_683_){
_start:
{
lean_object* v___x_684_; 
v___x_684_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__2___redArg(v_a_681_, v_b_682_, v_x_683_);
return v___x_684_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2(lean_object* v_00_u03b2_685_, lean_object* v_i_686_, lean_object* v_source_687_, lean_object* v_target_688_){
_start:
{
lean_object* v___x_689_; 
v___x_689_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2___redArg(v_i_686_, v_source_687_, v_target_688_);
return v___x_689_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4(lean_object* v_00_u03b2_690_, lean_object* v_x_691_, lean_object* v_x_692_){
_start:
{
lean_object* v___x_693_; 
v___x_693_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_Grind_Arith_assignEqc_spec__0_spec__1_spec__2_spec__4___redArg(v_x_691_, v_x_692_);
return v___x_693_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(lean_object* v_x_694_, lean_object* v_x_695_){
_start:
{
if (lean_obj_tag(v_x_695_) == 0)
{
return v_x_694_;
}
else
{
lean_object* v_key_696_; lean_object* v_value_697_; lean_object* v_tail_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_735_; 
v_key_696_ = lean_ctor_get(v_x_695_, 0);
v_value_697_ = lean_ctor_get(v_x_695_, 1);
v_tail_698_ = lean_ctor_get(v_x_695_, 2);
v_isSharedCheck_735_ = !lean_is_exclusive(v_x_695_);
if (v_isSharedCheck_735_ == 0)
{
v___x_700_ = v_x_695_;
v_isShared_701_ = v_isSharedCheck_735_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_tail_698_);
lean_inc(v_value_697_);
lean_inc(v_key_696_);
lean_dec(v_x_695_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_735_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_702_; uint64_t v___y_704_; lean_object* v_intZero_722_; uint8_t v_isNeg_723_; 
v___x_702_ = lean_array_get_size(v_x_694_);
v_intZero_722_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_isNeg_723_ = lean_int_dec_lt(v_key_696_, v_intZero_722_);
if (v_isNeg_723_ == 0)
{
lean_object* v_a_724_; lean_object* v___x_725_; lean_object* v___x_726_; uint64_t v___x_727_; 
v_a_724_ = lean_nat_abs(v_key_696_);
v___x_725_ = lean_unsigned_to_nat(2u);
v___x_726_ = lean_nat_mul(v___x_725_, v_a_724_);
lean_dec(v_a_724_);
v___x_727_ = lean_uint64_of_nat(v___x_726_);
lean_dec(v___x_726_);
v___y_704_ = v___x_727_;
goto v___jp_703_;
}
else
{
lean_object* v_abs_728_; lean_object* v_one_729_; lean_object* v_a_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; uint64_t v___x_734_; 
v_abs_728_ = lean_nat_abs(v_key_696_);
v_one_729_ = lean_unsigned_to_nat(1u);
v_a_730_ = lean_nat_sub(v_abs_728_, v_one_729_);
lean_dec(v_abs_728_);
v___x_731_ = lean_unsigned_to_nat(2u);
v___x_732_ = lean_nat_mul(v___x_731_, v_a_730_);
lean_dec(v_a_730_);
v___x_733_ = lean_nat_add(v___x_732_, v_one_729_);
lean_dec(v___x_732_);
v___x_734_ = lean_uint64_of_nat(v___x_733_);
lean_dec(v___x_733_);
v___y_704_ = v___x_734_;
goto v___jp_703_;
}
v___jp_703_:
{
uint64_t v___x_705_; uint64_t v___x_706_; uint64_t v_fold_707_; uint64_t v___x_708_; uint64_t v___x_709_; uint64_t v___x_710_; size_t v___x_711_; size_t v___x_712_; size_t v___x_713_; size_t v___x_714_; size_t v___x_715_; lean_object* v___x_716_; lean_object* v___x_718_; 
v___x_705_ = 32ULL;
v___x_706_ = lean_uint64_shift_right(v___y_704_, v___x_705_);
v_fold_707_ = lean_uint64_xor(v___y_704_, v___x_706_);
v___x_708_ = 16ULL;
v___x_709_ = lean_uint64_shift_right(v_fold_707_, v___x_708_);
v___x_710_ = lean_uint64_xor(v_fold_707_, v___x_709_);
v___x_711_ = lean_uint64_to_usize(v___x_710_);
v___x_712_ = lean_usize_of_nat(v___x_702_);
v___x_713_ = ((size_t)1ULL);
v___x_714_ = lean_usize_sub(v___x_712_, v___x_713_);
v___x_715_ = lean_usize_land(v___x_711_, v___x_714_);
v___x_716_ = lean_array_uget_borrowed(v_x_694_, v___x_715_);
lean_inc(v___x_716_);
if (v_isShared_701_ == 0)
{
lean_ctor_set(v___x_700_, 2, v___x_716_);
v___x_718_ = v___x_700_;
goto v_reusejp_717_;
}
else
{
lean_object* v_reuseFailAlloc_721_; 
v_reuseFailAlloc_721_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_721_, 0, v_key_696_);
lean_ctor_set(v_reuseFailAlloc_721_, 1, v_value_697_);
lean_ctor_set(v_reuseFailAlloc_721_, 2, v___x_716_);
v___x_718_ = v_reuseFailAlloc_721_;
goto v_reusejp_717_;
}
v_reusejp_717_:
{
lean_object* v___x_719_; 
v___x_719_ = lean_array_uset(v_x_694_, v___x_715_, v___x_718_);
v_x_694_ = v___x_719_;
v_x_695_ = v_tail_698_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(lean_object* v_i_736_, lean_object* v_source_737_, lean_object* v_target_738_){
_start:
{
lean_object* v___x_739_; uint8_t v___x_740_; 
v___x_739_ = lean_array_get_size(v_source_737_);
v___x_740_ = lean_nat_dec_lt(v_i_736_, v___x_739_);
if (v___x_740_ == 0)
{
lean_dec_ref(v_source_737_);
lean_dec(v_i_736_);
return v_target_738_;
}
else
{
lean_object* v_es_741_; lean_object* v___x_742_; lean_object* v_source_743_; lean_object* v_target_744_; lean_object* v___x_745_; lean_object* v___x_746_; 
v_es_741_ = lean_array_fget(v_source_737_, v_i_736_);
v___x_742_ = lean_box(0);
v_source_743_ = lean_array_fset(v_source_737_, v_i_736_, v___x_742_);
v_target_744_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(v_target_738_, v_es_741_);
v___x_745_ = lean_unsigned_to_nat(1u);
v___x_746_ = lean_nat_add(v_i_736_, v___x_745_);
lean_dec(v_i_736_);
v_i_736_ = v___x_746_;
v_source_737_ = v_source_743_;
v_target_738_ = v_target_744_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(lean_object* v_data_748_){
_start:
{
lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v_nbuckets_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; 
v___x_749_ = lean_array_get_size(v_data_748_);
v___x_750_ = lean_unsigned_to_nat(2u);
v_nbuckets_751_ = lean_nat_mul(v___x_749_, v___x_750_);
v___x_752_ = lean_unsigned_to_nat(0u);
v___x_753_ = lean_box(0);
v___x_754_ = lean_mk_array(v_nbuckets_751_, v___x_753_);
v___x_755_ = lean_array_propagate_mark(v_data_748_, v___x_754_);
v___x_756_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(v___x_752_, v_data_748_, v___x_755_);
return v___x_756_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(lean_object* v_m_757_, lean_object* v_a_758_, lean_object* v_b_759_){
_start:
{
lean_object* v_size_760_; lean_object* v_buckets_761_; lean_object* v___x_762_; uint64_t v___y_764_; lean_object* v_intZero_801_; uint8_t v_isNeg_802_; 
v_size_760_ = lean_ctor_get(v_m_757_, 0);
v_buckets_761_ = lean_ctor_get(v_m_757_, 1);
v___x_762_ = lean_array_get_size(v_buckets_761_);
v_intZero_801_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_isNeg_802_ = lean_int_dec_lt(v_a_758_, v_intZero_801_);
if (v_isNeg_802_ == 0)
{
lean_object* v_a_803_; lean_object* v___x_804_; lean_object* v___x_805_; uint64_t v___x_806_; 
v_a_803_ = lean_nat_abs(v_a_758_);
v___x_804_ = lean_unsigned_to_nat(2u);
v___x_805_ = lean_nat_mul(v___x_804_, v_a_803_);
lean_dec(v_a_803_);
v___x_806_ = lean_uint64_of_nat(v___x_805_);
lean_dec(v___x_805_);
v___y_764_ = v___x_806_;
goto v___jp_763_;
}
else
{
lean_object* v_abs_807_; lean_object* v_one_808_; lean_object* v_a_809_; lean_object* v___x_810_; lean_object* v___x_811_; lean_object* v___x_812_; uint64_t v___x_813_; 
v_abs_807_ = lean_nat_abs(v_a_758_);
v_one_808_ = lean_unsigned_to_nat(1u);
v_a_809_ = lean_nat_sub(v_abs_807_, v_one_808_);
lean_dec(v_abs_807_);
v___x_810_ = lean_unsigned_to_nat(2u);
v___x_811_ = lean_nat_mul(v___x_810_, v_a_809_);
lean_dec(v_a_809_);
v___x_812_ = lean_nat_add(v___x_811_, v_one_808_);
lean_dec(v___x_811_);
v___x_813_ = lean_uint64_of_nat(v___x_812_);
lean_dec(v___x_812_);
v___y_764_ = v___x_813_;
goto v___jp_763_;
}
v___jp_763_:
{
uint64_t v___x_765_; uint64_t v___x_766_; uint64_t v_fold_767_; uint64_t v___x_768_; uint64_t v___x_769_; uint64_t v___x_770_; size_t v___x_771_; size_t v___x_772_; size_t v___x_773_; size_t v___x_774_; size_t v___x_775_; lean_object* v_bkt_776_; uint8_t v___x_777_; 
v___x_765_ = 32ULL;
v___x_766_ = lean_uint64_shift_right(v___y_764_, v___x_765_);
v_fold_767_ = lean_uint64_xor(v___y_764_, v___x_766_);
v___x_768_ = 16ULL;
v___x_769_ = lean_uint64_shift_right(v_fold_767_, v___x_768_);
v___x_770_ = lean_uint64_xor(v_fold_767_, v___x_769_);
v___x_771_ = lean_uint64_to_usize(v___x_770_);
v___x_772_ = lean_usize_of_nat(v___x_762_);
v___x_773_ = ((size_t)1ULL);
v___x_774_ = lean_usize_sub(v___x_772_, v___x_773_);
v___x_775_ = lean_usize_land(v___x_771_, v___x_774_);
v_bkt_776_ = lean_array_uget_borrowed(v_buckets_761_, v___x_775_);
v___x_777_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0_spec__0___redArg(v_a_758_, v_bkt_776_);
if (v___x_777_ == 0)
{
lean_object* v___x_779_; uint8_t v_isShared_780_; uint8_t v_isSharedCheck_798_; 
lean_inc_ref(v_buckets_761_);
lean_inc(v_size_760_);
v_isSharedCheck_798_ = !lean_is_exclusive(v_m_757_);
if (v_isSharedCheck_798_ == 0)
{
lean_object* v_unused_799_; lean_object* v_unused_800_; 
v_unused_799_ = lean_ctor_get(v_m_757_, 1);
lean_dec(v_unused_799_);
v_unused_800_ = lean_ctor_get(v_m_757_, 0);
lean_dec(v_unused_800_);
v___x_779_ = v_m_757_;
v_isShared_780_ = v_isSharedCheck_798_;
goto v_resetjp_778_;
}
else
{
lean_dec(v_m_757_);
v___x_779_ = lean_box(0);
v_isShared_780_ = v_isSharedCheck_798_;
goto v_resetjp_778_;
}
v_resetjp_778_:
{
lean_object* v___x_781_; lean_object* v_size_x27_782_; lean_object* v___x_783_; lean_object* v_buckets_x27_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; uint8_t v___x_790_; 
v___x_781_ = lean_unsigned_to_nat(1u);
v_size_x27_782_ = lean_nat_add(v_size_760_, v___x_781_);
lean_dec(v_size_760_);
lean_inc(v_bkt_776_);
v___x_783_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_783_, 0, v_a_758_);
lean_ctor_set(v___x_783_, 1, v_b_759_);
lean_ctor_set(v___x_783_, 2, v_bkt_776_);
v_buckets_x27_784_ = lean_array_uset(v_buckets_761_, v___x_775_, v___x_783_);
v___x_785_ = lean_unsigned_to_nat(4u);
v___x_786_ = lean_nat_mul(v_size_x27_782_, v___x_785_);
v___x_787_ = lean_unsigned_to_nat(3u);
v___x_788_ = lean_nat_div(v___x_786_, v___x_787_);
lean_dec(v___x_786_);
v___x_789_ = lean_array_get_size(v_buckets_x27_784_);
v___x_790_ = lean_nat_dec_le(v___x_788_, v___x_789_);
lean_dec(v___x_788_);
if (v___x_790_ == 0)
{
lean_object* v_val_791_; lean_object* v___x_793_; 
v_val_791_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(v_buckets_x27_784_);
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 1, v_val_791_);
lean_ctor_set(v___x_779_, 0, v_size_x27_782_);
v___x_793_ = v___x_779_;
goto v_reusejp_792_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v_size_x27_782_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_val_791_);
v___x_793_ = v_reuseFailAlloc_794_;
goto v_reusejp_792_;
}
v_reusejp_792_:
{
return v___x_793_;
}
}
else
{
lean_object* v___x_796_; 
if (v_isShared_780_ == 0)
{
lean_ctor_set(v___x_779_, 1, v_buckets_x27_784_);
lean_ctor_set(v___x_779_, 0, v_size_x27_782_);
v___x_796_ = v___x_779_;
goto v_reusejp_795_;
}
else
{
lean_object* v_reuseFailAlloc_797_; 
v_reuseFailAlloc_797_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_797_, 0, v_size_x27_782_);
lean_ctor_set(v_reuseFailAlloc_797_, 1, v_buckets_x27_784_);
v___x_796_ = v_reuseFailAlloc_797_;
goto v_reusejp_795_;
}
v_reusejp_795_:
{
return v___x_796_;
}
}
}
}
else
{
lean_dec(v_b_759_);
lean_dec(v_a_758_);
return v_m_757_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(lean_object* v_goal_814_, lean_object* v_isTarget_815_, lean_object* v_as_816_, size_t v_sz_817_, size_t v_i_818_, lean_object* v_b_819_, lean_object* v___y_820_, lean_object* v___y_821_, lean_object* v___y_822_, lean_object* v___y_823_){
_start:
{
uint8_t v___x_825_; 
v___x_825_ = lean_usize_dec_lt(v_i_818_, v_sz_817_);
if (v___x_825_ == 0)
{
lean_object* v___x_826_; 
lean_dec_ref(v_isTarget_815_);
v___x_826_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_826_, 0, v_b_819_);
return v___x_826_;
}
else
{
lean_object* v_snd_827_; lean_object* v___x_829_; uint8_t v_isShared_830_; uint8_t v_isSharedCheck_908_; 
v_snd_827_ = lean_ctor_get(v_b_819_, 1);
v_isSharedCheck_908_ = !lean_is_exclusive(v_b_819_);
if (v_isSharedCheck_908_ == 0)
{
lean_object* v_unused_909_; 
v_unused_909_ = lean_ctor_get(v_b_819_, 0);
lean_dec(v_unused_909_);
v___x_829_ = v_b_819_;
v_isShared_830_ = v_isSharedCheck_908_;
goto v_resetjp_828_;
}
else
{
lean_inc(v_snd_827_);
lean_dec(v_b_819_);
v___x_829_ = lean_box(0);
v_isShared_830_ = v_isSharedCheck_908_;
goto v_resetjp_828_;
}
v_resetjp_828_:
{
lean_object* v_snd_831_; lean_object* v_fst_832_; lean_object* v___x_834_; uint8_t v_isShared_835_; uint8_t v_isSharedCheck_907_; 
v_snd_831_ = lean_ctor_get(v_snd_827_, 1);
v_fst_832_ = lean_ctor_get(v_snd_827_, 0);
v_isSharedCheck_907_ = !lean_is_exclusive(v_snd_827_);
if (v_isSharedCheck_907_ == 0)
{
v___x_834_ = v_snd_827_;
v_isShared_835_ = v_isSharedCheck_907_;
goto v_resetjp_833_;
}
else
{
lean_inc(v_snd_831_);
lean_inc(v_fst_832_);
lean_dec(v_snd_827_);
v___x_834_ = lean_box(0);
v_isShared_835_ = v_isSharedCheck_907_;
goto v_resetjp_833_;
}
v_resetjp_833_:
{
lean_object* v_fst_836_; lean_object* v_snd_837_; lean_object* v___x_839_; uint8_t v_isShared_840_; uint8_t v_isSharedCheck_906_; 
v_fst_836_ = lean_ctor_get(v_snd_831_, 0);
v_snd_837_ = lean_ctor_get(v_snd_831_, 1);
v_isSharedCheck_906_ = !lean_is_exclusive(v_snd_831_);
if (v_isSharedCheck_906_ == 0)
{
v___x_839_ = v_snd_831_;
v_isShared_840_ = v_isSharedCheck_906_;
goto v_resetjp_838_;
}
else
{
lean_inc(v_snd_837_);
lean_inc(v_fst_836_);
lean_dec(v_snd_831_);
v___x_839_ = lean_box(0);
v_isShared_840_ = v_isSharedCheck_906_;
goto v_resetjp_838_;
}
v_resetjp_838_:
{
lean_object* v___x_841_; lean_object* v_a_843_; lean_object* v_a_850_; lean_object* v___x_851_; 
v___x_841_ = lean_box(0);
v_a_850_ = lean_array_uget_borrowed(v_as_816_, v_i_818_);
lean_inc(v_a_850_);
v___x_851_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_814_, v_a_850_, v___y_820_, v___y_821_, v___y_822_, v___y_823_);
if (lean_obj_tag(v___x_851_) == 0)
{
lean_object* v_a_852_; uint8_t v___x_853_; 
v_a_852_ = lean_ctor_get(v___x_851_, 0);
lean_inc(v_a_852_);
lean_dec_ref_known(v___x_851_, 1);
v___x_853_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_852_);
if (v___x_853_ == 0)
{
lean_object* v___x_855_; 
lean_dec(v_a_852_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v_snd_837_);
lean_ctor_set(v___x_834_, 0, v_fst_836_);
v___x_855_ = v___x_834_;
goto v_reusejp_854_;
}
else
{
lean_object* v_reuseFailAlloc_859_; 
v_reuseFailAlloc_859_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_859_, 0, v_fst_836_);
lean_ctor_set(v_reuseFailAlloc_859_, 1, v_snd_837_);
v___x_855_ = v_reuseFailAlloc_859_;
goto v_reusejp_854_;
}
v_reusejp_854_:
{
lean_object* v___x_857_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v___x_855_);
lean_ctor_set(v___x_829_, 0, v_fst_832_);
v___x_857_ = v___x_829_;
goto v_reusejp_856_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_fst_832_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v___x_855_);
v___x_857_ = v_reuseFailAlloc_858_;
goto v_reusejp_856_;
}
v_reusejp_856_:
{
v_a_843_ = v___x_857_;
goto v___jp_842_;
}
}
}
else
{
lean_object* v___x_860_; 
lean_inc_ref(v_isTarget_815_);
lean_inc(v___y_823_);
lean_inc_ref(v___y_822_);
lean_inc(v___y_821_);
lean_inc_ref(v___y_820_);
lean_inc(v_a_852_);
v___x_860_ = lean_apply_6(v_isTarget_815_, v_a_852_, v___y_820_, v___y_821_, v___y_822_, v___y_823_, lean_box(0));
if (lean_obj_tag(v___x_860_) == 0)
{
lean_object* v_a_861_; uint8_t v___x_862_; 
v_a_861_ = lean_ctor_get(v___x_860_, 0);
lean_inc(v_a_861_);
lean_dec_ref_known(v___x_860_, 1);
v___x_862_ = lean_unbox(v_a_861_);
lean_dec(v_a_861_);
if (v___x_862_ == 0)
{
lean_object* v___x_864_; 
lean_dec(v_a_852_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v_snd_837_);
lean_ctor_set(v___x_834_, 0, v_fst_836_);
v___x_864_ = v___x_834_;
goto v_reusejp_863_;
}
else
{
lean_object* v_reuseFailAlloc_868_; 
v_reuseFailAlloc_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_868_, 0, v_fst_836_);
lean_ctor_set(v_reuseFailAlloc_868_, 1, v_snd_837_);
v___x_864_ = v_reuseFailAlloc_868_;
goto v_reusejp_863_;
}
v_reusejp_863_:
{
lean_object* v___x_866_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v___x_864_);
lean_ctor_set(v___x_829_, 0, v_fst_832_);
v___x_866_ = v___x_829_;
goto v_reusejp_865_;
}
else
{
lean_object* v_reuseFailAlloc_867_; 
v_reuseFailAlloc_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_867_, 0, v_fst_832_);
lean_ctor_set(v_reuseFailAlloc_867_, 1, v___x_864_);
v___x_866_ = v_reuseFailAlloc_867_;
goto v_reusejp_865_;
}
v_reusejp_865_:
{
v_a_843_ = v___x_866_;
goto v___jp_842_;
}
}
}
else
{
lean_object* v_self_869_; lean_object* v___x_870_; 
v_self_869_ = lean_ctor_get(v_a_852_, 0);
lean_inc_ref(v_self_869_);
lean_dec(v_a_852_);
v___x_870_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_837_, v_self_869_);
if (lean_obj_tag(v___x_870_) == 0)
{
lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_879_; 
v___x_871_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_814_, v_snd_837_, v_self_869_, v_fst_836_, v_fst_832_);
lean_inc_n(v___x_871_, 2);
v___x_872_ = l_Rat_ofInt(v___x_871_);
v___x_873_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_814_, v_self_869_, v___x_872_, v_snd_837_);
v___x_874_ = lean_box(0);
v___x_875_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_836_, v___x_871_, v___x_874_);
v___x_876_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_877_ = lean_int_add(v___x_871_, v___x_876_);
lean_dec(v___x_871_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v___x_873_);
lean_ctor_set(v___x_834_, 0, v___x_875_);
v___x_879_ = v___x_834_;
goto v_reusejp_878_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v___x_875_);
lean_ctor_set(v_reuseFailAlloc_883_, 1, v___x_873_);
v___x_879_ = v_reuseFailAlloc_883_;
goto v_reusejp_878_;
}
v_reusejp_878_:
{
lean_object* v___x_881_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v___x_879_);
lean_ctor_set(v___x_829_, 0, v___x_877_);
v___x_881_ = v___x_829_;
goto v_reusejp_880_;
}
else
{
lean_object* v_reuseFailAlloc_882_; 
v_reuseFailAlloc_882_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_882_, 0, v___x_877_);
lean_ctor_set(v_reuseFailAlloc_882_, 1, v___x_879_);
v___x_881_ = v_reuseFailAlloc_882_;
goto v_reusejp_880_;
}
v_reusejp_880_:
{
v_a_843_ = v___x_881_;
goto v___jp_842_;
}
}
}
else
{
lean_object* v___x_885_; 
lean_dec_ref_known(v___x_870_, 1);
lean_dec_ref(v_self_869_);
if (v_isShared_835_ == 0)
{
lean_ctor_set(v___x_834_, 1, v_snd_837_);
lean_ctor_set(v___x_834_, 0, v_fst_836_);
v___x_885_ = v___x_834_;
goto v_reusejp_884_;
}
else
{
lean_object* v_reuseFailAlloc_889_; 
v_reuseFailAlloc_889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_889_, 0, v_fst_836_);
lean_ctor_set(v_reuseFailAlloc_889_, 1, v_snd_837_);
v___x_885_ = v_reuseFailAlloc_889_;
goto v_reusejp_884_;
}
v_reusejp_884_:
{
lean_object* v___x_887_; 
if (v_isShared_830_ == 0)
{
lean_ctor_set(v___x_829_, 1, v___x_885_);
lean_ctor_set(v___x_829_, 0, v_fst_832_);
v___x_887_ = v___x_829_;
goto v_reusejp_886_;
}
else
{
lean_object* v_reuseFailAlloc_888_; 
v_reuseFailAlloc_888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_888_, 0, v_fst_832_);
lean_ctor_set(v_reuseFailAlloc_888_, 1, v___x_885_);
v___x_887_ = v_reuseFailAlloc_888_;
goto v_reusejp_886_;
}
v_reusejp_886_:
{
v_a_843_ = v___x_887_;
goto v___jp_842_;
}
}
}
}
}
else
{
lean_object* v_a_890_; lean_object* v___x_892_; uint8_t v_isShared_893_; uint8_t v_isSharedCheck_897_; 
lean_dec(v_a_852_);
lean_del_object(v___x_839_);
lean_dec(v_snd_837_);
lean_dec(v_fst_836_);
lean_del_object(v___x_834_);
lean_dec(v_fst_832_);
lean_del_object(v___x_829_);
lean_dec_ref(v_isTarget_815_);
v_a_890_ = lean_ctor_get(v___x_860_, 0);
v_isSharedCheck_897_ = !lean_is_exclusive(v___x_860_);
if (v_isSharedCheck_897_ == 0)
{
v___x_892_ = v___x_860_;
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
else
{
lean_inc(v_a_890_);
lean_dec(v___x_860_);
v___x_892_ = lean_box(0);
v_isShared_893_ = v_isSharedCheck_897_;
goto v_resetjp_891_;
}
v_resetjp_891_:
{
lean_object* v___x_895_; 
if (v_isShared_893_ == 0)
{
v___x_895_ = v___x_892_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v_a_890_);
v___x_895_ = v_reuseFailAlloc_896_;
goto v_reusejp_894_;
}
v_reusejp_894_:
{
return v___x_895_;
}
}
}
}
}
else
{
lean_object* v_a_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_905_; 
lean_del_object(v___x_839_);
lean_dec(v_snd_837_);
lean_dec(v_fst_836_);
lean_del_object(v___x_834_);
lean_dec(v_fst_832_);
lean_del_object(v___x_829_);
lean_dec_ref(v_isTarget_815_);
v_a_898_ = lean_ctor_get(v___x_851_, 0);
v_isSharedCheck_905_ = !lean_is_exclusive(v___x_851_);
if (v_isSharedCheck_905_ == 0)
{
v___x_900_ = v___x_851_;
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_a_898_);
lean_dec(v___x_851_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_905_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_903_; 
if (v_isShared_901_ == 0)
{
v___x_903_ = v___x_900_;
goto v_reusejp_902_;
}
else
{
lean_object* v_reuseFailAlloc_904_; 
v_reuseFailAlloc_904_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_904_, 0, v_a_898_);
v___x_903_ = v_reuseFailAlloc_904_;
goto v_reusejp_902_;
}
v_reusejp_902_:
{
return v___x_903_;
}
}
}
v___jp_842_:
{
lean_object* v___x_845_; 
if (v_isShared_840_ == 0)
{
lean_ctor_set(v___x_839_, 1, v_a_843_);
lean_ctor_set(v___x_839_, 0, v___x_841_);
v___x_845_ = v___x_839_;
goto v_reusejp_844_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___x_841_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_a_843_);
v___x_845_ = v_reuseFailAlloc_849_;
goto v_reusejp_844_;
}
v_reusejp_844_:
{
size_t v___x_846_; size_t v___x_847_; 
v___x_846_ = ((size_t)1ULL);
v___x_847_ = lean_usize_add(v_i_818_, v___x_846_);
v_i_818_ = v___x_847_;
v_b_819_ = v___x_845_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9___boxed(lean_object* v_goal_910_, lean_object* v_isTarget_911_, lean_object* v_as_912_, lean_object* v_sz_913_, lean_object* v_i_914_, lean_object* v_b_915_, lean_object* v___y_916_, lean_object* v___y_917_, lean_object* v___y_918_, lean_object* v___y_919_, lean_object* v___y_920_){
_start:
{
size_t v_sz_boxed_921_; size_t v_i_boxed_922_; lean_object* v_res_923_; 
v_sz_boxed_921_ = lean_unbox_usize(v_sz_913_);
lean_dec(v_sz_913_);
v_i_boxed_922_ = lean_unbox_usize(v_i_914_);
lean_dec(v_i_914_);
v_res_923_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(v_goal_910_, v_isTarget_911_, v_as_912_, v_sz_boxed_921_, v_i_boxed_922_, v_b_915_, v___y_916_, v___y_917_, v___y_918_, v___y_919_);
lean_dec(v___y_919_);
lean_dec_ref(v___y_918_);
lean_dec(v___y_917_);
lean_dec_ref(v___y_916_);
lean_dec_ref(v_as_912_);
lean_dec_ref(v_goal_910_);
return v_res_923_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(lean_object* v_goal_924_, lean_object* v_isTarget_925_, lean_object* v_as_926_, size_t v_sz_927_, size_t v_i_928_, lean_object* v_b_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_){
_start:
{
uint8_t v___x_935_; 
v___x_935_ = lean_usize_dec_lt(v_i_928_, v_sz_927_);
if (v___x_935_ == 0)
{
lean_object* v___x_936_; 
lean_dec_ref(v_isTarget_925_);
v___x_936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_936_, 0, v_b_929_);
return v___x_936_;
}
else
{
lean_object* v_snd_937_; lean_object* v___x_939_; uint8_t v_isShared_940_; uint8_t v_isSharedCheck_1018_; 
v_snd_937_ = lean_ctor_get(v_b_929_, 1);
v_isSharedCheck_1018_ = !lean_is_exclusive(v_b_929_);
if (v_isSharedCheck_1018_ == 0)
{
lean_object* v_unused_1019_; 
v_unused_1019_ = lean_ctor_get(v_b_929_, 0);
lean_dec(v_unused_1019_);
v___x_939_ = v_b_929_;
v_isShared_940_ = v_isSharedCheck_1018_;
goto v_resetjp_938_;
}
else
{
lean_inc(v_snd_937_);
lean_dec(v_b_929_);
v___x_939_ = lean_box(0);
v_isShared_940_ = v_isSharedCheck_1018_;
goto v_resetjp_938_;
}
v_resetjp_938_:
{
lean_object* v_snd_941_; lean_object* v_fst_942_; lean_object* v___x_944_; uint8_t v_isShared_945_; uint8_t v_isSharedCheck_1017_; 
v_snd_941_ = lean_ctor_get(v_snd_937_, 1);
v_fst_942_ = lean_ctor_get(v_snd_937_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v_snd_937_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_944_ = v_snd_937_;
v_isShared_945_ = v_isSharedCheck_1017_;
goto v_resetjp_943_;
}
else
{
lean_inc(v_snd_941_);
lean_inc(v_fst_942_);
lean_dec(v_snd_937_);
v___x_944_ = lean_box(0);
v_isShared_945_ = v_isSharedCheck_1017_;
goto v_resetjp_943_;
}
v_resetjp_943_:
{
lean_object* v_fst_946_; lean_object* v_snd_947_; lean_object* v___x_949_; uint8_t v_isShared_950_; uint8_t v_isSharedCheck_1016_; 
v_fst_946_ = lean_ctor_get(v_snd_941_, 0);
v_snd_947_ = lean_ctor_get(v_snd_941_, 1);
v_isSharedCheck_1016_ = !lean_is_exclusive(v_snd_941_);
if (v_isSharedCheck_1016_ == 0)
{
v___x_949_ = v_snd_941_;
v_isShared_950_ = v_isSharedCheck_1016_;
goto v_resetjp_948_;
}
else
{
lean_inc(v_snd_947_);
lean_inc(v_fst_946_);
lean_dec(v_snd_941_);
v___x_949_ = lean_box(0);
v_isShared_950_ = v_isSharedCheck_1016_;
goto v_resetjp_948_;
}
v_resetjp_948_:
{
lean_object* v___x_951_; lean_object* v_a_953_; lean_object* v_a_960_; lean_object* v___x_961_; 
v___x_951_ = lean_box(0);
v_a_960_ = lean_array_uget_borrowed(v_as_926_, v_i_928_);
lean_inc(v_a_960_);
v___x_961_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_924_, v_a_960_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
if (lean_obj_tag(v___x_961_) == 0)
{
lean_object* v_a_962_; uint8_t v___x_963_; 
v_a_962_ = lean_ctor_get(v___x_961_, 0);
lean_inc(v_a_962_);
lean_dec_ref_known(v___x_961_, 1);
v___x_963_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_962_);
if (v___x_963_ == 0)
{
lean_object* v___x_965_; 
lean_dec(v_a_962_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 1, v_snd_947_);
lean_ctor_set(v___x_944_, 0, v_fst_946_);
v___x_965_ = v___x_944_;
goto v_reusejp_964_;
}
else
{
lean_object* v_reuseFailAlloc_969_; 
v_reuseFailAlloc_969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_969_, 0, v_fst_946_);
lean_ctor_set(v_reuseFailAlloc_969_, 1, v_snd_947_);
v___x_965_ = v_reuseFailAlloc_969_;
goto v_reusejp_964_;
}
v_reusejp_964_:
{
lean_object* v___x_967_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_965_);
lean_ctor_set(v___x_939_, 0, v_fst_942_);
v___x_967_ = v___x_939_;
goto v_reusejp_966_;
}
else
{
lean_object* v_reuseFailAlloc_968_; 
v_reuseFailAlloc_968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_968_, 0, v_fst_942_);
lean_ctor_set(v_reuseFailAlloc_968_, 1, v___x_965_);
v___x_967_ = v_reuseFailAlloc_968_;
goto v_reusejp_966_;
}
v_reusejp_966_:
{
v_a_953_ = v___x_967_;
goto v___jp_952_;
}
}
}
else
{
lean_object* v___x_970_; 
lean_inc_ref(v_isTarget_925_);
lean_inc(v___y_933_);
lean_inc_ref(v___y_932_);
lean_inc(v___y_931_);
lean_inc_ref(v___y_930_);
lean_inc(v_a_962_);
v___x_970_ = lean_apply_6(v_isTarget_925_, v_a_962_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, lean_box(0));
if (lean_obj_tag(v___x_970_) == 0)
{
lean_object* v_a_971_; uint8_t v___x_972_; 
v_a_971_ = lean_ctor_get(v___x_970_, 0);
lean_inc(v_a_971_);
lean_dec_ref_known(v___x_970_, 1);
v___x_972_ = lean_unbox(v_a_971_);
lean_dec(v_a_971_);
if (v___x_972_ == 0)
{
lean_object* v___x_974_; 
lean_dec(v_a_962_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 1, v_snd_947_);
lean_ctor_set(v___x_944_, 0, v_fst_946_);
v___x_974_ = v___x_944_;
goto v_reusejp_973_;
}
else
{
lean_object* v_reuseFailAlloc_978_; 
v_reuseFailAlloc_978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_978_, 0, v_fst_946_);
lean_ctor_set(v_reuseFailAlloc_978_, 1, v_snd_947_);
v___x_974_ = v_reuseFailAlloc_978_;
goto v_reusejp_973_;
}
v_reusejp_973_:
{
lean_object* v___x_976_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_974_);
lean_ctor_set(v___x_939_, 0, v_fst_942_);
v___x_976_ = v___x_939_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v_fst_942_);
lean_ctor_set(v_reuseFailAlloc_977_, 1, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
v_a_953_ = v___x_976_;
goto v___jp_952_;
}
}
}
else
{
lean_object* v_self_979_; lean_object* v___x_980_; 
v_self_979_ = lean_ctor_get(v_a_962_, 0);
lean_inc_ref(v_self_979_);
lean_dec(v_a_962_);
v___x_980_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_947_, v_self_979_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_989_; 
v___x_981_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_924_, v_snd_947_, v_self_979_, v_fst_946_, v_fst_942_);
lean_inc_n(v___x_981_, 2);
v___x_982_ = l_Rat_ofInt(v___x_981_);
v___x_983_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_924_, v_self_979_, v___x_982_, v_snd_947_);
v___x_984_ = lean_box(0);
v___x_985_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_946_, v___x_981_, v___x_984_);
v___x_986_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_987_ = lean_int_add(v___x_981_, v___x_986_);
lean_dec(v___x_981_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 1, v___x_983_);
lean_ctor_set(v___x_944_, 0, v___x_985_);
v___x_989_ = v___x_944_;
goto v_reusejp_988_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_985_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v___x_983_);
v___x_989_ = v_reuseFailAlloc_993_;
goto v_reusejp_988_;
}
v_reusejp_988_:
{
lean_object* v___x_991_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_989_);
lean_ctor_set(v___x_939_, 0, v___x_987_);
v___x_991_ = v___x_939_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_992_; 
v_reuseFailAlloc_992_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_992_, 0, v___x_987_);
lean_ctor_set(v_reuseFailAlloc_992_, 1, v___x_989_);
v___x_991_ = v_reuseFailAlloc_992_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
v_a_953_ = v___x_991_;
goto v___jp_952_;
}
}
}
else
{
lean_object* v___x_995_; 
lean_dec_ref_known(v___x_980_, 1);
lean_dec_ref(v_self_979_);
if (v_isShared_945_ == 0)
{
lean_ctor_set(v___x_944_, 1, v_snd_947_);
lean_ctor_set(v___x_944_, 0, v_fst_946_);
v___x_995_ = v___x_944_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_999_; 
v_reuseFailAlloc_999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_999_, 0, v_fst_946_);
lean_ctor_set(v_reuseFailAlloc_999_, 1, v_snd_947_);
v___x_995_ = v_reuseFailAlloc_999_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
lean_object* v___x_997_; 
if (v_isShared_940_ == 0)
{
lean_ctor_set(v___x_939_, 1, v___x_995_);
lean_ctor_set(v___x_939_, 0, v_fst_942_);
v___x_997_ = v___x_939_;
goto v_reusejp_996_;
}
else
{
lean_object* v_reuseFailAlloc_998_; 
v_reuseFailAlloc_998_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_998_, 0, v_fst_942_);
lean_ctor_set(v_reuseFailAlloc_998_, 1, v___x_995_);
v___x_997_ = v_reuseFailAlloc_998_;
goto v_reusejp_996_;
}
v_reusejp_996_:
{
v_a_953_ = v___x_997_;
goto v___jp_952_;
}
}
}
}
}
else
{
lean_object* v_a_1000_; lean_object* v___x_1002_; uint8_t v_isShared_1003_; uint8_t v_isSharedCheck_1007_; 
lean_dec(v_a_962_);
lean_del_object(v___x_949_);
lean_dec(v_snd_947_);
lean_dec(v_fst_946_);
lean_del_object(v___x_944_);
lean_dec(v_fst_942_);
lean_del_object(v___x_939_);
lean_dec_ref(v_isTarget_925_);
v_a_1000_ = lean_ctor_get(v___x_970_, 0);
v_isSharedCheck_1007_ = !lean_is_exclusive(v___x_970_);
if (v_isSharedCheck_1007_ == 0)
{
v___x_1002_ = v___x_970_;
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
else
{
lean_inc(v_a_1000_);
lean_dec(v___x_970_);
v___x_1002_ = lean_box(0);
v_isShared_1003_ = v_isSharedCheck_1007_;
goto v_resetjp_1001_;
}
v_resetjp_1001_:
{
lean_object* v___x_1005_; 
if (v_isShared_1003_ == 0)
{
v___x_1005_ = v___x_1002_;
goto v_reusejp_1004_;
}
else
{
lean_object* v_reuseFailAlloc_1006_; 
v_reuseFailAlloc_1006_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1006_, 0, v_a_1000_);
v___x_1005_ = v_reuseFailAlloc_1006_;
goto v_reusejp_1004_;
}
v_reusejp_1004_:
{
return v___x_1005_;
}
}
}
}
}
else
{
lean_object* v_a_1008_; lean_object* v___x_1010_; uint8_t v_isShared_1011_; uint8_t v_isSharedCheck_1015_; 
lean_del_object(v___x_949_);
lean_dec(v_snd_947_);
lean_dec(v_fst_946_);
lean_del_object(v___x_944_);
lean_dec(v_fst_942_);
lean_del_object(v___x_939_);
lean_dec_ref(v_isTarget_925_);
v_a_1008_ = lean_ctor_get(v___x_961_, 0);
v_isSharedCheck_1015_ = !lean_is_exclusive(v___x_961_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_1010_ = v___x_961_;
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
else
{
lean_inc(v_a_1008_);
lean_dec(v___x_961_);
v___x_1010_ = lean_box(0);
v_isShared_1011_ = v_isSharedCheck_1015_;
goto v_resetjp_1009_;
}
v_resetjp_1009_:
{
lean_object* v___x_1013_; 
if (v_isShared_1011_ == 0)
{
v___x_1013_ = v___x_1010_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_a_1008_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
v___jp_952_:
{
lean_object* v___x_955_; 
if (v_isShared_950_ == 0)
{
lean_ctor_set(v___x_949_, 1, v_a_953_);
lean_ctor_set(v___x_949_, 0, v___x_951_);
v___x_955_ = v___x_949_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_959_; 
v_reuseFailAlloc_959_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_959_, 0, v___x_951_);
lean_ctor_set(v_reuseFailAlloc_959_, 1, v_a_953_);
v___x_955_ = v_reuseFailAlloc_959_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
size_t v___x_956_; size_t v___x_957_; lean_object* v___x_958_; 
v___x_956_ = ((size_t)1ULL);
v___x_957_ = lean_usize_add(v_i_928_, v___x_956_);
v___x_958_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5_spec__9(v_goal_924_, v_isTarget_925_, v_as_926_, v_sz_927_, v___x_957_, v___x_955_, v___y_930_, v___y_931_, v___y_932_, v___y_933_);
return v___x_958_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5___boxed(lean_object* v_goal_1020_, lean_object* v_isTarget_1021_, lean_object* v_as_1022_, lean_object* v_sz_1023_, lean_object* v_i_1024_, lean_object* v_b_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_){
_start:
{
size_t v_sz_boxed_1031_; size_t v_i_boxed_1032_; lean_object* v_res_1033_; 
v_sz_boxed_1031_ = lean_unbox_usize(v_sz_1023_);
lean_dec(v_sz_1023_);
v_i_boxed_1032_ = lean_unbox_usize(v_i_1024_);
lean_dec(v_i_1024_);
v_res_1033_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(v_goal_1020_, v_isTarget_1021_, v_as_1022_, v_sz_boxed_1031_, v_i_boxed_1032_, v_b_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v_as_1022_);
lean_dec_ref(v_goal_1020_);
return v_res_1033_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(lean_object* v_goal_1034_, lean_object* v_isTarget_1035_, lean_object* v_as_1036_, size_t v_sz_1037_, size_t v_i_1038_, lean_object* v_b_1039_, lean_object* v___y_1040_, lean_object* v___y_1041_, lean_object* v___y_1042_, lean_object* v___y_1043_){
_start:
{
uint8_t v___x_1045_; 
v___x_1045_ = lean_usize_dec_lt(v_i_1038_, v_sz_1037_);
if (v___x_1045_ == 0)
{
lean_object* v___x_1046_; 
lean_dec_ref(v_isTarget_1035_);
v___x_1046_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1046_, 0, v_b_1039_);
return v___x_1046_;
}
else
{
lean_object* v_snd_1047_; lean_object* v___x_1049_; uint8_t v_isShared_1050_; uint8_t v_isSharedCheck_1128_; 
v_snd_1047_ = lean_ctor_get(v_b_1039_, 1);
v_isSharedCheck_1128_ = !lean_is_exclusive(v_b_1039_);
if (v_isSharedCheck_1128_ == 0)
{
lean_object* v_unused_1129_; 
v_unused_1129_ = lean_ctor_get(v_b_1039_, 0);
lean_dec(v_unused_1129_);
v___x_1049_ = v_b_1039_;
v_isShared_1050_ = v_isSharedCheck_1128_;
goto v_resetjp_1048_;
}
else
{
lean_inc(v_snd_1047_);
lean_dec(v_b_1039_);
v___x_1049_ = lean_box(0);
v_isShared_1050_ = v_isSharedCheck_1128_;
goto v_resetjp_1048_;
}
v_resetjp_1048_:
{
lean_object* v_snd_1051_; lean_object* v_fst_1052_; lean_object* v___x_1054_; uint8_t v_isShared_1055_; uint8_t v_isSharedCheck_1127_; 
v_snd_1051_ = lean_ctor_get(v_snd_1047_, 1);
v_fst_1052_ = lean_ctor_get(v_snd_1047_, 0);
v_isSharedCheck_1127_ = !lean_is_exclusive(v_snd_1047_);
if (v_isSharedCheck_1127_ == 0)
{
v___x_1054_ = v_snd_1047_;
v_isShared_1055_ = v_isSharedCheck_1127_;
goto v_resetjp_1053_;
}
else
{
lean_inc(v_snd_1051_);
lean_inc(v_fst_1052_);
lean_dec(v_snd_1047_);
v___x_1054_ = lean_box(0);
v_isShared_1055_ = v_isSharedCheck_1127_;
goto v_resetjp_1053_;
}
v_resetjp_1053_:
{
lean_object* v_fst_1056_; lean_object* v_snd_1057_; lean_object* v___x_1059_; uint8_t v_isShared_1060_; uint8_t v_isSharedCheck_1126_; 
v_fst_1056_ = lean_ctor_get(v_snd_1051_, 0);
v_snd_1057_ = lean_ctor_get(v_snd_1051_, 1);
v_isSharedCheck_1126_ = !lean_is_exclusive(v_snd_1051_);
if (v_isSharedCheck_1126_ == 0)
{
v___x_1059_ = v_snd_1051_;
v_isShared_1060_ = v_isSharedCheck_1126_;
goto v_resetjp_1058_;
}
else
{
lean_inc(v_snd_1057_);
lean_inc(v_fst_1056_);
lean_dec(v_snd_1051_);
v___x_1059_ = lean_box(0);
v_isShared_1060_ = v_isSharedCheck_1126_;
goto v_resetjp_1058_;
}
v_resetjp_1058_:
{
lean_object* v___x_1061_; lean_object* v_a_1063_; lean_object* v_a_1070_; lean_object* v___x_1071_; 
v___x_1061_ = lean_box(0);
v_a_1070_ = lean_array_uget_borrowed(v_as_1036_, v_i_1038_);
lean_inc(v_a_1070_);
v___x_1071_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_1034_, v_a_1070_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_);
if (lean_obj_tag(v___x_1071_) == 0)
{
lean_object* v_a_1072_; uint8_t v___x_1073_; 
v_a_1072_ = lean_ctor_get(v___x_1071_, 0);
lean_inc(v_a_1072_);
lean_dec_ref_known(v___x_1071_, 1);
v___x_1073_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_1072_);
if (v___x_1073_ == 0)
{
lean_object* v___x_1075_; 
lean_dec(v_a_1072_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v_snd_1057_);
lean_ctor_set(v___x_1054_, 0, v_fst_1056_);
v___x_1075_ = v___x_1054_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1079_; 
v_reuseFailAlloc_1079_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1079_, 0, v_fst_1056_);
lean_ctor_set(v_reuseFailAlloc_1079_, 1, v_snd_1057_);
v___x_1075_ = v_reuseFailAlloc_1079_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
lean_object* v___x_1077_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v___x_1075_);
lean_ctor_set(v___x_1049_, 0, v_fst_1052_);
v___x_1077_ = v___x_1049_;
goto v_reusejp_1076_;
}
else
{
lean_object* v_reuseFailAlloc_1078_; 
v_reuseFailAlloc_1078_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1078_, 0, v_fst_1052_);
lean_ctor_set(v_reuseFailAlloc_1078_, 1, v___x_1075_);
v___x_1077_ = v_reuseFailAlloc_1078_;
goto v_reusejp_1076_;
}
v_reusejp_1076_:
{
v_a_1063_ = v___x_1077_;
goto v___jp_1062_;
}
}
}
else
{
lean_object* v___x_1080_; 
lean_inc_ref(v_isTarget_1035_);
lean_inc(v___y_1043_);
lean_inc_ref(v___y_1042_);
lean_inc(v___y_1041_);
lean_inc_ref(v___y_1040_);
lean_inc(v_a_1072_);
v___x_1080_ = lean_apply_6(v_isTarget_1035_, v_a_1072_, v___y_1040_, v___y_1041_, v___y_1042_, v___y_1043_, lean_box(0));
if (lean_obj_tag(v___x_1080_) == 0)
{
lean_object* v_a_1081_; uint8_t v___x_1082_; 
v_a_1081_ = lean_ctor_get(v___x_1080_, 0);
lean_inc(v_a_1081_);
lean_dec_ref_known(v___x_1080_, 1);
v___x_1082_ = lean_unbox(v_a_1081_);
lean_dec(v_a_1081_);
if (v___x_1082_ == 0)
{
lean_object* v___x_1084_; 
lean_dec(v_a_1072_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v_snd_1057_);
lean_ctor_set(v___x_1054_, 0, v_fst_1056_);
v___x_1084_ = v___x_1054_;
goto v_reusejp_1083_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_fst_1056_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v_snd_1057_);
v___x_1084_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1083_;
}
v_reusejp_1083_:
{
lean_object* v___x_1086_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v___x_1084_);
lean_ctor_set(v___x_1049_, 0, v_fst_1052_);
v___x_1086_ = v___x_1049_;
goto v_reusejp_1085_;
}
else
{
lean_object* v_reuseFailAlloc_1087_; 
v_reuseFailAlloc_1087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1087_, 0, v_fst_1052_);
lean_ctor_set(v_reuseFailAlloc_1087_, 1, v___x_1084_);
v___x_1086_ = v_reuseFailAlloc_1087_;
goto v_reusejp_1085_;
}
v_reusejp_1085_:
{
v_a_1063_ = v___x_1086_;
goto v___jp_1062_;
}
}
}
else
{
lean_object* v_self_1089_; lean_object* v___x_1090_; 
v_self_1089_ = lean_ctor_get(v_a_1072_, 0);
lean_inc_ref(v_self_1089_);
lean_dec(v_a_1072_);
v___x_1090_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_1057_, v_self_1089_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1099_; 
v___x_1091_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_1034_, v_snd_1057_, v_self_1089_, v_fst_1056_, v_fst_1052_);
lean_inc_n(v___x_1091_, 2);
v___x_1092_ = l_Rat_ofInt(v___x_1091_);
v___x_1093_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_1034_, v_self_1089_, v___x_1092_, v_snd_1057_);
v___x_1094_ = lean_box(0);
v___x_1095_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_1056_, v___x_1091_, v___x_1094_);
v___x_1096_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_1097_ = lean_int_add(v___x_1091_, v___x_1096_);
lean_dec(v___x_1091_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v___x_1093_);
lean_ctor_set(v___x_1054_, 0, v___x_1095_);
v___x_1099_ = v___x_1054_;
goto v_reusejp_1098_;
}
else
{
lean_object* v_reuseFailAlloc_1103_; 
v_reuseFailAlloc_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1103_, 0, v___x_1095_);
lean_ctor_set(v_reuseFailAlloc_1103_, 1, v___x_1093_);
v___x_1099_ = v_reuseFailAlloc_1103_;
goto v_reusejp_1098_;
}
v_reusejp_1098_:
{
lean_object* v___x_1101_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v___x_1099_);
lean_ctor_set(v___x_1049_, 0, v___x_1097_);
v___x_1101_ = v___x_1049_;
goto v_reusejp_1100_;
}
else
{
lean_object* v_reuseFailAlloc_1102_; 
v_reuseFailAlloc_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1102_, 0, v___x_1097_);
lean_ctor_set(v_reuseFailAlloc_1102_, 1, v___x_1099_);
v___x_1101_ = v_reuseFailAlloc_1102_;
goto v_reusejp_1100_;
}
v_reusejp_1100_:
{
v_a_1063_ = v___x_1101_;
goto v___jp_1062_;
}
}
}
else
{
lean_object* v___x_1105_; 
lean_dec_ref_known(v___x_1090_, 1);
lean_dec_ref(v_self_1089_);
if (v_isShared_1055_ == 0)
{
lean_ctor_set(v___x_1054_, 1, v_snd_1057_);
lean_ctor_set(v___x_1054_, 0, v_fst_1056_);
v___x_1105_ = v___x_1054_;
goto v_reusejp_1104_;
}
else
{
lean_object* v_reuseFailAlloc_1109_; 
v_reuseFailAlloc_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1109_, 0, v_fst_1056_);
lean_ctor_set(v_reuseFailAlloc_1109_, 1, v_snd_1057_);
v___x_1105_ = v_reuseFailAlloc_1109_;
goto v_reusejp_1104_;
}
v_reusejp_1104_:
{
lean_object* v___x_1107_; 
if (v_isShared_1050_ == 0)
{
lean_ctor_set(v___x_1049_, 1, v___x_1105_);
lean_ctor_set(v___x_1049_, 0, v_fst_1052_);
v___x_1107_ = v___x_1049_;
goto v_reusejp_1106_;
}
else
{
lean_object* v_reuseFailAlloc_1108_; 
v_reuseFailAlloc_1108_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1108_, 0, v_fst_1052_);
lean_ctor_set(v_reuseFailAlloc_1108_, 1, v___x_1105_);
v___x_1107_ = v_reuseFailAlloc_1108_;
goto v_reusejp_1106_;
}
v_reusejp_1106_:
{
v_a_1063_ = v___x_1107_;
goto v___jp_1062_;
}
}
}
}
}
else
{
lean_object* v_a_1110_; lean_object* v___x_1112_; uint8_t v_isShared_1113_; uint8_t v_isSharedCheck_1117_; 
lean_dec(v_a_1072_);
lean_del_object(v___x_1059_);
lean_dec(v_snd_1057_);
lean_dec(v_fst_1056_);
lean_del_object(v___x_1054_);
lean_dec(v_fst_1052_);
lean_del_object(v___x_1049_);
lean_dec_ref(v_isTarget_1035_);
v_a_1110_ = lean_ctor_get(v___x_1080_, 0);
v_isSharedCheck_1117_ = !lean_is_exclusive(v___x_1080_);
if (v_isSharedCheck_1117_ == 0)
{
v___x_1112_ = v___x_1080_;
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
else
{
lean_inc(v_a_1110_);
lean_dec(v___x_1080_);
v___x_1112_ = lean_box(0);
v_isShared_1113_ = v_isSharedCheck_1117_;
goto v_resetjp_1111_;
}
v_resetjp_1111_:
{
lean_object* v___x_1115_; 
if (v_isShared_1113_ == 0)
{
v___x_1115_ = v___x_1112_;
goto v_reusejp_1114_;
}
else
{
lean_object* v_reuseFailAlloc_1116_; 
v_reuseFailAlloc_1116_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1116_, 0, v_a_1110_);
v___x_1115_ = v_reuseFailAlloc_1116_;
goto v_reusejp_1114_;
}
v_reusejp_1114_:
{
return v___x_1115_;
}
}
}
}
}
else
{
lean_object* v_a_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1125_; 
lean_del_object(v___x_1059_);
lean_dec(v_snd_1057_);
lean_dec(v_fst_1056_);
lean_del_object(v___x_1054_);
lean_dec(v_fst_1052_);
lean_del_object(v___x_1049_);
lean_dec_ref(v_isTarget_1035_);
v_a_1118_ = lean_ctor_get(v___x_1071_, 0);
v_isSharedCheck_1125_ = !lean_is_exclusive(v___x_1071_);
if (v_isSharedCheck_1125_ == 0)
{
v___x_1120_ = v___x_1071_;
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_a_1118_);
lean_dec(v___x_1071_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1125_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v___x_1123_; 
if (v_isShared_1121_ == 0)
{
v___x_1123_ = v___x_1120_;
goto v_reusejp_1122_;
}
else
{
lean_object* v_reuseFailAlloc_1124_; 
v_reuseFailAlloc_1124_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1124_, 0, v_a_1118_);
v___x_1123_ = v_reuseFailAlloc_1124_;
goto v_reusejp_1122_;
}
v_reusejp_1122_:
{
return v___x_1123_;
}
}
}
v___jp_1062_:
{
lean_object* v___x_1065_; 
if (v_isShared_1060_ == 0)
{
lean_ctor_set(v___x_1059_, 1, v_a_1063_);
lean_ctor_set(v___x_1059_, 0, v___x_1061_);
v___x_1065_ = v___x_1059_;
goto v_reusejp_1064_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1061_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_a_1063_);
v___x_1065_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1064_;
}
v_reusejp_1064_:
{
size_t v___x_1066_; size_t v___x_1067_; 
v___x_1066_ = ((size_t)1ULL);
v___x_1067_ = lean_usize_add(v_i_1038_, v___x_1066_);
v_i_1038_ = v___x_1067_;
v_b_1039_ = v___x_1065_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9___boxed(lean_object* v_goal_1130_, lean_object* v_isTarget_1131_, lean_object* v_as_1132_, lean_object* v_sz_1133_, lean_object* v_i_1134_, lean_object* v_b_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
size_t v_sz_boxed_1141_; size_t v_i_boxed_1142_; lean_object* v_res_1143_; 
v_sz_boxed_1141_ = lean_unbox_usize(v_sz_1133_);
lean_dec(v_sz_1133_);
v_i_boxed_1142_ = lean_unbox_usize(v_i_1134_);
lean_dec(v_i_1134_);
v_res_1143_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(v_goal_1130_, v_isTarget_1131_, v_as_1132_, v_sz_boxed_1141_, v_i_boxed_1142_, v_b_1135_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_);
lean_dec(v___y_1139_);
lean_dec_ref(v___y_1138_);
lean_dec(v___y_1137_);
lean_dec_ref(v___y_1136_);
lean_dec_ref(v_as_1132_);
lean_dec_ref(v_goal_1130_);
return v_res_1143_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(lean_object* v_goal_1144_, lean_object* v_isTarget_1145_, lean_object* v_as_1146_, size_t v_sz_1147_, size_t v_i_1148_, lean_object* v_b_1149_, lean_object* v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_){
_start:
{
uint8_t v___x_1155_; 
v___x_1155_ = lean_usize_dec_lt(v_i_1148_, v_sz_1147_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; 
lean_dec_ref(v_isTarget_1145_);
v___x_1156_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1156_, 0, v_b_1149_);
return v___x_1156_;
}
else
{
lean_object* v_snd_1157_; lean_object* v___x_1159_; uint8_t v_isShared_1160_; uint8_t v_isSharedCheck_1238_; 
v_snd_1157_ = lean_ctor_get(v_b_1149_, 1);
v_isSharedCheck_1238_ = !lean_is_exclusive(v_b_1149_);
if (v_isSharedCheck_1238_ == 0)
{
lean_object* v_unused_1239_; 
v_unused_1239_ = lean_ctor_get(v_b_1149_, 0);
lean_dec(v_unused_1239_);
v___x_1159_ = v_b_1149_;
v_isShared_1160_ = v_isSharedCheck_1238_;
goto v_resetjp_1158_;
}
else
{
lean_inc(v_snd_1157_);
lean_dec(v_b_1149_);
v___x_1159_ = lean_box(0);
v_isShared_1160_ = v_isSharedCheck_1238_;
goto v_resetjp_1158_;
}
v_resetjp_1158_:
{
lean_object* v_snd_1161_; lean_object* v_fst_1162_; lean_object* v___x_1164_; uint8_t v_isShared_1165_; uint8_t v_isSharedCheck_1237_; 
v_snd_1161_ = lean_ctor_get(v_snd_1157_, 1);
v_fst_1162_ = lean_ctor_get(v_snd_1157_, 0);
v_isSharedCheck_1237_ = !lean_is_exclusive(v_snd_1157_);
if (v_isSharedCheck_1237_ == 0)
{
v___x_1164_ = v_snd_1157_;
v_isShared_1165_ = v_isSharedCheck_1237_;
goto v_resetjp_1163_;
}
else
{
lean_inc(v_snd_1161_);
lean_inc(v_fst_1162_);
lean_dec(v_snd_1157_);
v___x_1164_ = lean_box(0);
v_isShared_1165_ = v_isSharedCheck_1237_;
goto v_resetjp_1163_;
}
v_resetjp_1163_:
{
lean_object* v_fst_1166_; lean_object* v_snd_1167_; lean_object* v___x_1169_; uint8_t v_isShared_1170_; uint8_t v_isSharedCheck_1236_; 
v_fst_1166_ = lean_ctor_get(v_snd_1161_, 0);
v_snd_1167_ = lean_ctor_get(v_snd_1161_, 1);
v_isSharedCheck_1236_ = !lean_is_exclusive(v_snd_1161_);
if (v_isSharedCheck_1236_ == 0)
{
v___x_1169_ = v_snd_1161_;
v_isShared_1170_ = v_isSharedCheck_1236_;
goto v_resetjp_1168_;
}
else
{
lean_inc(v_snd_1167_);
lean_inc(v_fst_1166_);
lean_dec(v_snd_1161_);
v___x_1169_ = lean_box(0);
v_isShared_1170_ = v_isSharedCheck_1236_;
goto v_resetjp_1168_;
}
v_resetjp_1168_:
{
lean_object* v___x_1171_; lean_object* v_a_1173_; lean_object* v_a_1180_; lean_object* v___x_1181_; 
v___x_1171_ = lean_box(0);
v_a_1180_ = lean_array_uget_borrowed(v_as_1146_, v_i_1148_);
lean_inc(v_a_1180_);
v___x_1181_ = l_Lean_Meta_Grind_Goal_getENode(v_goal_1144_, v_a_1180_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
if (lean_obj_tag(v___x_1181_) == 0)
{
lean_object* v_a_1182_; uint8_t v___x_1183_; 
v_a_1182_ = lean_ctor_get(v___x_1181_, 0);
lean_inc(v_a_1182_);
lean_dec_ref_known(v___x_1181_, 1);
v___x_1183_ = l_Lean_Meta_Grind_ENode_isRoot(v_a_1182_);
if (v___x_1183_ == 0)
{
lean_object* v___x_1185_; 
lean_dec(v_a_1182_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v_snd_1167_);
lean_ctor_set(v___x_1164_, 0, v_fst_1166_);
v___x_1185_ = v___x_1164_;
goto v_reusejp_1184_;
}
else
{
lean_object* v_reuseFailAlloc_1189_; 
v_reuseFailAlloc_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1189_, 0, v_fst_1166_);
lean_ctor_set(v_reuseFailAlloc_1189_, 1, v_snd_1167_);
v___x_1185_ = v_reuseFailAlloc_1189_;
goto v_reusejp_1184_;
}
v_reusejp_1184_:
{
lean_object* v___x_1187_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1185_);
lean_ctor_set(v___x_1159_, 0, v_fst_1162_);
v___x_1187_ = v___x_1159_;
goto v_reusejp_1186_;
}
else
{
lean_object* v_reuseFailAlloc_1188_; 
v_reuseFailAlloc_1188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1188_, 0, v_fst_1162_);
lean_ctor_set(v_reuseFailAlloc_1188_, 1, v___x_1185_);
v___x_1187_ = v_reuseFailAlloc_1188_;
goto v_reusejp_1186_;
}
v_reusejp_1186_:
{
v_a_1173_ = v___x_1187_;
goto v___jp_1172_;
}
}
}
else
{
lean_object* v___x_1190_; 
lean_inc_ref(v_isTarget_1145_);
lean_inc(v___y_1153_);
lean_inc_ref(v___y_1152_);
lean_inc(v___y_1151_);
lean_inc_ref(v___y_1150_);
lean_inc(v_a_1182_);
v___x_1190_ = lean_apply_6(v_isTarget_1145_, v_a_1182_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, lean_box(0));
if (lean_obj_tag(v___x_1190_) == 0)
{
lean_object* v_a_1191_; uint8_t v___x_1192_; 
v_a_1191_ = lean_ctor_get(v___x_1190_, 0);
lean_inc(v_a_1191_);
lean_dec_ref_known(v___x_1190_, 1);
v___x_1192_ = lean_unbox(v_a_1191_);
lean_dec(v_a_1191_);
if (v___x_1192_ == 0)
{
lean_object* v___x_1194_; 
lean_dec(v_a_1182_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v_snd_1167_);
lean_ctor_set(v___x_1164_, 0, v_fst_1166_);
v___x_1194_ = v___x_1164_;
goto v_reusejp_1193_;
}
else
{
lean_object* v_reuseFailAlloc_1198_; 
v_reuseFailAlloc_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1198_, 0, v_fst_1166_);
lean_ctor_set(v_reuseFailAlloc_1198_, 1, v_snd_1167_);
v___x_1194_ = v_reuseFailAlloc_1198_;
goto v_reusejp_1193_;
}
v_reusejp_1193_:
{
lean_object* v___x_1196_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1194_);
lean_ctor_set(v___x_1159_, 0, v_fst_1162_);
v___x_1196_ = v___x_1159_;
goto v_reusejp_1195_;
}
else
{
lean_object* v_reuseFailAlloc_1197_; 
v_reuseFailAlloc_1197_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1197_, 0, v_fst_1162_);
lean_ctor_set(v_reuseFailAlloc_1197_, 1, v___x_1194_);
v___x_1196_ = v_reuseFailAlloc_1197_;
goto v_reusejp_1195_;
}
v_reusejp_1195_:
{
v_a_1173_ = v___x_1196_;
goto v___jp_1172_;
}
}
}
else
{
lean_object* v_self_1199_; lean_object* v___x_1200_; 
v_self_1199_ = lean_ctor_get(v_a_1182_, 0);
lean_inc_ref(v_self_1199_);
lean_dec(v_a_1182_);
v___x_1200_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_satisfyDiseqs_checkDiseq_spec__0___redArg(v_snd_1167_, v_self_1199_);
if (lean_obj_tag(v___x_1200_) == 0)
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1201_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go(v_goal_1144_, v_snd_1167_, v_self_1199_, v_fst_1166_, v_fst_1162_);
lean_inc_n(v___x_1201_, 2);
v___x_1202_ = l_Rat_ofInt(v___x_1201_);
v___x_1203_ = l_Lean_Meta_Grind_Arith_assignEqc(v_goal_1144_, v_self_1199_, v___x_1202_, v_snd_1167_);
v___x_1204_ = lean_box(0);
v___x_1205_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_fst_1166_, v___x_1201_, v___x_1204_);
v___x_1206_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go___closed__0);
v___x_1207_ = lean_int_add(v___x_1201_, v___x_1206_);
lean_dec(v___x_1201_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v___x_1203_);
lean_ctor_set(v___x_1164_, 0, v___x_1205_);
v___x_1209_ = v___x_1164_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1205_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1203_);
v___x_1209_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1211_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1209_);
lean_ctor_set(v___x_1159_, 0, v___x_1207_);
v___x_1211_ = v___x_1159_;
goto v_reusejp_1210_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v___x_1207_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v___x_1209_);
v___x_1211_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1210_;
}
v_reusejp_1210_:
{
v_a_1173_ = v___x_1211_;
goto v___jp_1172_;
}
}
}
else
{
lean_object* v___x_1215_; 
lean_dec_ref_known(v___x_1200_, 1);
lean_dec_ref(v_self_1199_);
if (v_isShared_1165_ == 0)
{
lean_ctor_set(v___x_1164_, 1, v_snd_1167_);
lean_ctor_set(v___x_1164_, 0, v_fst_1166_);
v___x_1215_ = v___x_1164_;
goto v_reusejp_1214_;
}
else
{
lean_object* v_reuseFailAlloc_1219_; 
v_reuseFailAlloc_1219_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1219_, 0, v_fst_1166_);
lean_ctor_set(v_reuseFailAlloc_1219_, 1, v_snd_1167_);
v___x_1215_ = v_reuseFailAlloc_1219_;
goto v_reusejp_1214_;
}
v_reusejp_1214_:
{
lean_object* v___x_1217_; 
if (v_isShared_1160_ == 0)
{
lean_ctor_set(v___x_1159_, 1, v___x_1215_);
lean_ctor_set(v___x_1159_, 0, v_fst_1162_);
v___x_1217_ = v___x_1159_;
goto v_reusejp_1216_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_fst_1162_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v___x_1215_);
v___x_1217_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1216_;
}
v_reusejp_1216_:
{
v_a_1173_ = v___x_1217_;
goto v___jp_1172_;
}
}
}
}
}
else
{
lean_object* v_a_1220_; lean_object* v___x_1222_; uint8_t v_isShared_1223_; uint8_t v_isSharedCheck_1227_; 
lean_dec(v_a_1182_);
lean_del_object(v___x_1169_);
lean_dec(v_snd_1167_);
lean_dec(v_fst_1166_);
lean_del_object(v___x_1164_);
lean_dec(v_fst_1162_);
lean_del_object(v___x_1159_);
lean_dec_ref(v_isTarget_1145_);
v_a_1220_ = lean_ctor_get(v___x_1190_, 0);
v_isSharedCheck_1227_ = !lean_is_exclusive(v___x_1190_);
if (v_isSharedCheck_1227_ == 0)
{
v___x_1222_ = v___x_1190_;
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
else
{
lean_inc(v_a_1220_);
lean_dec(v___x_1190_);
v___x_1222_ = lean_box(0);
v_isShared_1223_ = v_isSharedCheck_1227_;
goto v_resetjp_1221_;
}
v_resetjp_1221_:
{
lean_object* v___x_1225_; 
if (v_isShared_1223_ == 0)
{
v___x_1225_ = v___x_1222_;
goto v_reusejp_1224_;
}
else
{
lean_object* v_reuseFailAlloc_1226_; 
v_reuseFailAlloc_1226_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1226_, 0, v_a_1220_);
v___x_1225_ = v_reuseFailAlloc_1226_;
goto v_reusejp_1224_;
}
v_reusejp_1224_:
{
return v___x_1225_;
}
}
}
}
}
else
{
lean_object* v_a_1228_; lean_object* v___x_1230_; uint8_t v_isShared_1231_; uint8_t v_isSharedCheck_1235_; 
lean_del_object(v___x_1169_);
lean_dec(v_snd_1167_);
lean_dec(v_fst_1166_);
lean_del_object(v___x_1164_);
lean_dec(v_fst_1162_);
lean_del_object(v___x_1159_);
lean_dec_ref(v_isTarget_1145_);
v_a_1228_ = lean_ctor_get(v___x_1181_, 0);
v_isSharedCheck_1235_ = !lean_is_exclusive(v___x_1181_);
if (v_isSharedCheck_1235_ == 0)
{
v___x_1230_ = v___x_1181_;
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
else
{
lean_inc(v_a_1228_);
lean_dec(v___x_1181_);
v___x_1230_ = lean_box(0);
v_isShared_1231_ = v_isSharedCheck_1235_;
goto v_resetjp_1229_;
}
v_resetjp_1229_:
{
lean_object* v___x_1233_; 
if (v_isShared_1231_ == 0)
{
v___x_1233_ = v___x_1230_;
goto v_reusejp_1232_;
}
else
{
lean_object* v_reuseFailAlloc_1234_; 
v_reuseFailAlloc_1234_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1234_, 0, v_a_1228_);
v___x_1233_ = v_reuseFailAlloc_1234_;
goto v_reusejp_1232_;
}
v_reusejp_1232_:
{
return v___x_1233_;
}
}
}
v___jp_1172_:
{
lean_object* v___x_1175_; 
if (v_isShared_1170_ == 0)
{
lean_ctor_set(v___x_1169_, 1, v_a_1173_);
lean_ctor_set(v___x_1169_, 0, v___x_1171_);
v___x_1175_ = v___x_1169_;
goto v_reusejp_1174_;
}
else
{
lean_object* v_reuseFailAlloc_1179_; 
v_reuseFailAlloc_1179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1179_, 0, v___x_1171_);
lean_ctor_set(v_reuseFailAlloc_1179_, 1, v_a_1173_);
v___x_1175_ = v_reuseFailAlloc_1179_;
goto v_reusejp_1174_;
}
v_reusejp_1174_:
{
size_t v___x_1176_; size_t v___x_1177_; lean_object* v___x_1178_; 
v___x_1176_ = ((size_t)1ULL);
v___x_1177_ = lean_usize_add(v_i_1148_, v___x_1176_);
v___x_1178_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7_spec__9(v_goal_1144_, v_isTarget_1145_, v_as_1146_, v_sz_1147_, v___x_1177_, v___x_1175_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_);
return v___x_1178_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7___boxed(lean_object* v_goal_1240_, lean_object* v_isTarget_1241_, lean_object* v_as_1242_, lean_object* v_sz_1243_, lean_object* v_i_1244_, lean_object* v_b_1245_, lean_object* v___y_1246_, lean_object* v___y_1247_, lean_object* v___y_1248_, lean_object* v___y_1249_, lean_object* v___y_1250_){
_start:
{
size_t v_sz_boxed_1251_; size_t v_i_boxed_1252_; lean_object* v_res_1253_; 
v_sz_boxed_1251_ = lean_unbox_usize(v_sz_1243_);
lean_dec(v_sz_1243_);
v_i_boxed_1252_ = lean_unbox_usize(v_i_1244_);
lean_dec(v_i_1244_);
v_res_1253_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(v_goal_1240_, v_isTarget_1241_, v_as_1242_, v_sz_boxed_1251_, v_i_boxed_1252_, v_b_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_);
lean_dec(v___y_1249_);
lean_dec_ref(v___y_1248_);
lean_dec(v___y_1247_);
lean_dec_ref(v___y_1246_);
lean_dec_ref(v_as_1242_);
lean_dec_ref(v_goal_1240_);
return v_res_1253_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(lean_object* v_init_1254_, lean_object* v_goal_1255_, lean_object* v_isTarget_1256_, lean_object* v_n_1257_, lean_object* v_b_1258_, lean_object* v___y_1259_, lean_object* v___y_1260_, lean_object* v___y_1261_, lean_object* v___y_1262_){
_start:
{
if (lean_obj_tag(v_n_1257_) == 0)
{
lean_object* v_cs_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; size_t v_sz_1267_; size_t v___x_1268_; lean_object* v___x_1269_; 
v_cs_1264_ = lean_ctor_get(v_n_1257_, 0);
v___x_1265_ = lean_box(0);
v___x_1266_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1266_, 0, v___x_1265_);
lean_ctor_set(v___x_1266_, 1, v_b_1258_);
v_sz_1267_ = lean_array_size(v_cs_1264_);
v___x_1268_ = ((size_t)0ULL);
v___x_1269_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(v_init_1254_, v_goal_1255_, v_isTarget_1256_, v_cs_1264_, v_sz_1267_, v___x_1268_, v___x_1266_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_);
if (lean_obj_tag(v___x_1269_) == 0)
{
lean_object* v_a_1270_; lean_object* v___x_1272_; uint8_t v_isShared_1273_; uint8_t v_isSharedCheck_1284_; 
v_a_1270_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1284_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1272_ = v___x_1269_;
v_isShared_1273_ = v_isSharedCheck_1284_;
goto v_resetjp_1271_;
}
else
{
lean_inc(v_a_1270_);
lean_dec(v___x_1269_);
v___x_1272_ = lean_box(0);
v_isShared_1273_ = v_isSharedCheck_1284_;
goto v_resetjp_1271_;
}
v_resetjp_1271_:
{
lean_object* v_fst_1274_; 
v_fst_1274_ = lean_ctor_get(v_a_1270_, 0);
if (lean_obj_tag(v_fst_1274_) == 0)
{
lean_object* v_snd_1275_; lean_object* v___x_1276_; lean_object* v___x_1278_; 
v_snd_1275_ = lean_ctor_get(v_a_1270_, 1);
lean_inc(v_snd_1275_);
lean_dec(v_a_1270_);
v___x_1276_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1276_, 0, v_snd_1275_);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v___x_1276_);
v___x_1278_ = v___x_1272_;
goto v_reusejp_1277_;
}
else
{
lean_object* v_reuseFailAlloc_1279_; 
v_reuseFailAlloc_1279_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1279_, 0, v___x_1276_);
v___x_1278_ = v_reuseFailAlloc_1279_;
goto v_reusejp_1277_;
}
v_reusejp_1277_:
{
return v___x_1278_;
}
}
else
{
lean_object* v_val_1280_; lean_object* v___x_1282_; 
lean_inc_ref(v_fst_1274_);
lean_dec(v_a_1270_);
v_val_1280_ = lean_ctor_get(v_fst_1274_, 0);
lean_inc(v_val_1280_);
lean_dec_ref_known(v_fst_1274_, 1);
if (v_isShared_1273_ == 0)
{
lean_ctor_set(v___x_1272_, 0, v_val_1280_);
v___x_1282_ = v___x_1272_;
goto v_reusejp_1281_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v_val_1280_);
v___x_1282_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1281_;
}
v_reusejp_1281_:
{
return v___x_1282_;
}
}
}
}
else
{
lean_object* v_a_1285_; lean_object* v___x_1287_; uint8_t v_isShared_1288_; uint8_t v_isSharedCheck_1292_; 
v_a_1285_ = lean_ctor_get(v___x_1269_, 0);
v_isSharedCheck_1292_ = !lean_is_exclusive(v___x_1269_);
if (v_isSharedCheck_1292_ == 0)
{
v___x_1287_ = v___x_1269_;
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
else
{
lean_inc(v_a_1285_);
lean_dec(v___x_1269_);
v___x_1287_ = lean_box(0);
v_isShared_1288_ = v_isSharedCheck_1292_;
goto v_resetjp_1286_;
}
v_resetjp_1286_:
{
lean_object* v___x_1290_; 
if (v_isShared_1288_ == 0)
{
v___x_1290_ = v___x_1287_;
goto v_reusejp_1289_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v_a_1285_);
v___x_1290_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1289_;
}
v_reusejp_1289_:
{
return v___x_1290_;
}
}
}
}
else
{
lean_object* v_vs_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; size_t v_sz_1296_; size_t v___x_1297_; lean_object* v___x_1298_; 
v_vs_1293_ = lean_ctor_get(v_n_1257_, 0);
v___x_1294_ = lean_box(0);
v___x_1295_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v_b_1258_);
v_sz_1296_ = lean_array_size(v_vs_1293_);
v___x_1297_ = ((size_t)0ULL);
v___x_1298_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__7(v_goal_1255_, v_isTarget_1256_, v_vs_1293_, v_sz_1296_, v___x_1297_, v___x_1295_, v___y_1259_, v___y_1260_, v___y_1261_, v___y_1262_);
if (lean_obj_tag(v___x_1298_) == 0)
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1313_; 
v_a_1299_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1313_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1313_ == 0)
{
v___x_1301_ = v___x_1298_;
v_isShared_1302_ = v_isSharedCheck_1313_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1298_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1313_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v_fst_1303_; 
v_fst_1303_ = lean_ctor_get(v_a_1299_, 0);
if (lean_obj_tag(v_fst_1303_) == 0)
{
lean_object* v_snd_1304_; lean_object* v___x_1305_; lean_object* v___x_1307_; 
v_snd_1304_ = lean_ctor_get(v_a_1299_, 1);
lean_inc(v_snd_1304_);
lean_dec(v_a_1299_);
v___x_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1305_, 0, v_snd_1304_);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v___x_1305_);
v___x_1307_ = v___x_1301_;
goto v_reusejp_1306_;
}
else
{
lean_object* v_reuseFailAlloc_1308_; 
v_reuseFailAlloc_1308_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1308_, 0, v___x_1305_);
v___x_1307_ = v_reuseFailAlloc_1308_;
goto v_reusejp_1306_;
}
v_reusejp_1306_:
{
return v___x_1307_;
}
}
else
{
lean_object* v_val_1309_; lean_object* v___x_1311_; 
lean_inc_ref(v_fst_1303_);
lean_dec(v_a_1299_);
v_val_1309_ = lean_ctor_get(v_fst_1303_, 0);
lean_inc(v_val_1309_);
lean_dec_ref_known(v_fst_1303_, 1);
if (v_isShared_1302_ == 0)
{
lean_ctor_set(v___x_1301_, 0, v_val_1309_);
v___x_1311_ = v___x_1301_;
goto v_reusejp_1310_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v_val_1309_);
v___x_1311_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1310_;
}
v_reusejp_1310_:
{
return v___x_1311_;
}
}
}
}
else
{
lean_object* v_a_1314_; lean_object* v___x_1316_; uint8_t v_isShared_1317_; uint8_t v_isSharedCheck_1321_; 
v_a_1314_ = lean_ctor_get(v___x_1298_, 0);
v_isSharedCheck_1321_ = !lean_is_exclusive(v___x_1298_);
if (v_isSharedCheck_1321_ == 0)
{
v___x_1316_ = v___x_1298_;
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
else
{
lean_inc(v_a_1314_);
lean_dec(v___x_1298_);
v___x_1316_ = lean_box(0);
v_isShared_1317_ = v_isSharedCheck_1321_;
goto v_resetjp_1315_;
}
v_resetjp_1315_:
{
lean_object* v___x_1319_; 
if (v_isShared_1317_ == 0)
{
v___x_1319_ = v___x_1316_;
goto v_reusejp_1318_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v_a_1314_);
v___x_1319_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1318_;
}
v_reusejp_1318_:
{
return v___x_1319_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(lean_object* v_init_1322_, lean_object* v_goal_1323_, lean_object* v_isTarget_1324_, lean_object* v_as_1325_, size_t v_sz_1326_, size_t v_i_1327_, lean_object* v_b_1328_, lean_object* v___y_1329_, lean_object* v___y_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_){
_start:
{
uint8_t v___x_1334_; 
v___x_1334_ = lean_usize_dec_lt(v_i_1327_, v_sz_1326_);
if (v___x_1334_ == 0)
{
lean_object* v___x_1335_; 
lean_dec_ref(v_isTarget_1324_);
v___x_1335_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1335_, 0, v_b_1328_);
return v___x_1335_;
}
else
{
lean_object* v_snd_1336_; lean_object* v___x_1338_; uint8_t v_isShared_1339_; uint8_t v_isSharedCheck_1370_; 
v_snd_1336_ = lean_ctor_get(v_b_1328_, 1);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_b_1328_);
if (v_isSharedCheck_1370_ == 0)
{
lean_object* v_unused_1371_; 
v_unused_1371_ = lean_ctor_get(v_b_1328_, 0);
lean_dec(v_unused_1371_);
v___x_1338_ = v_b_1328_;
v_isShared_1339_ = v_isSharedCheck_1370_;
goto v_resetjp_1337_;
}
else
{
lean_inc(v_snd_1336_);
lean_dec(v_b_1328_);
v___x_1338_ = lean_box(0);
v_isShared_1339_ = v_isSharedCheck_1370_;
goto v_resetjp_1337_;
}
v_resetjp_1337_:
{
lean_object* v___x_1340_; lean_object* v_a_1341_; lean_object* v___x_1342_; 
v___x_1340_ = lean_box(0);
v_a_1341_ = lean_array_uget_borrowed(v_as_1325_, v_i_1327_);
lean_inc(v_snd_1336_);
lean_inc_ref(v_isTarget_1324_);
v___x_1342_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(v_init_1322_, v_goal_1323_, v_isTarget_1324_, v_a_1341_, v_snd_1336_, v___y_1329_, v___y_1330_, v___y_1331_, v___y_1332_);
if (lean_obj_tag(v___x_1342_) == 0)
{
lean_object* v_a_1343_; lean_object* v___x_1345_; uint8_t v_isShared_1346_; uint8_t v_isSharedCheck_1361_; 
v_a_1343_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1361_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1361_ == 0)
{
v___x_1345_ = v___x_1342_;
v_isShared_1346_ = v_isSharedCheck_1361_;
goto v_resetjp_1344_;
}
else
{
lean_inc(v_a_1343_);
lean_dec(v___x_1342_);
v___x_1345_ = lean_box(0);
v_isShared_1346_ = v_isSharedCheck_1361_;
goto v_resetjp_1344_;
}
v_resetjp_1344_:
{
if (lean_obj_tag(v_a_1343_) == 0)
{
lean_object* v___x_1347_; lean_object* v___x_1349_; 
lean_dec_ref(v_isTarget_1324_);
v___x_1347_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1347_, 0, v_a_1343_);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 0, v___x_1347_);
v___x_1349_ = v___x_1338_;
goto v_reusejp_1348_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1347_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v_snd_1336_);
v___x_1349_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1348_;
}
v_reusejp_1348_:
{
lean_object* v___x_1351_; 
if (v_isShared_1346_ == 0)
{
lean_ctor_set(v___x_1345_, 0, v___x_1349_);
v___x_1351_ = v___x_1345_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1352_; 
v_reuseFailAlloc_1352_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1352_, 0, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1352_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
return v___x_1351_;
}
}
}
else
{
lean_object* v_a_1354_; lean_object* v___x_1356_; 
lean_del_object(v___x_1345_);
lean_dec(v_snd_1336_);
v_a_1354_ = lean_ctor_get(v_a_1343_, 0);
lean_inc(v_a_1354_);
lean_dec_ref_known(v_a_1343_, 1);
if (v_isShared_1339_ == 0)
{
lean_ctor_set(v___x_1338_, 1, v_a_1354_);
lean_ctor_set(v___x_1338_, 0, v___x_1340_);
v___x_1356_ = v___x_1338_;
goto v_reusejp_1355_;
}
else
{
lean_object* v_reuseFailAlloc_1360_; 
v_reuseFailAlloc_1360_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1360_, 0, v___x_1340_);
lean_ctor_set(v_reuseFailAlloc_1360_, 1, v_a_1354_);
v___x_1356_ = v_reuseFailAlloc_1360_;
goto v_reusejp_1355_;
}
v_reusejp_1355_:
{
size_t v___x_1357_; size_t v___x_1358_; 
v___x_1357_ = ((size_t)1ULL);
v___x_1358_ = lean_usize_add(v_i_1327_, v___x_1357_);
v_i_1327_ = v___x_1358_;
v_b_1328_ = v___x_1356_;
goto _start;
}
}
}
}
else
{
lean_object* v_a_1362_; lean_object* v___x_1364_; uint8_t v_isShared_1365_; uint8_t v_isSharedCheck_1369_; 
lean_del_object(v___x_1338_);
lean_dec(v_snd_1336_);
lean_dec_ref(v_isTarget_1324_);
v_a_1362_ = lean_ctor_get(v___x_1342_, 0);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1342_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1364_ = v___x_1342_;
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
else
{
lean_inc(v_a_1362_);
lean_dec(v___x_1342_);
v___x_1364_ = lean_box(0);
v_isShared_1365_ = v_isSharedCheck_1369_;
goto v_resetjp_1363_;
}
v_resetjp_1363_:
{
lean_object* v___x_1367_; 
if (v_isShared_1365_ == 0)
{
v___x_1367_ = v___x_1364_;
goto v_reusejp_1366_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v_a_1362_);
v___x_1367_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1366_;
}
v_reusejp_1366_:
{
return v___x_1367_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6___boxed(lean_object* v_init_1372_, lean_object* v_goal_1373_, lean_object* v_isTarget_1374_, lean_object* v_as_1375_, lean_object* v_sz_1376_, lean_object* v_i_1377_, lean_object* v_b_1378_, lean_object* v___y_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_){
_start:
{
size_t v_sz_boxed_1384_; size_t v_i_boxed_1385_; lean_object* v_res_1386_; 
v_sz_boxed_1384_ = lean_unbox_usize(v_sz_1376_);
lean_dec(v_sz_1376_);
v_i_boxed_1385_ = lean_unbox_usize(v_i_1377_);
lean_dec(v_i_1377_);
v_res_1386_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4_spec__6(v_init_1372_, v_goal_1373_, v_isTarget_1374_, v_as_1375_, v_sz_boxed_1384_, v_i_boxed_1385_, v_b_1378_, v___y_1379_, v___y_1380_, v___y_1381_, v___y_1382_);
lean_dec(v___y_1382_);
lean_dec_ref(v___y_1381_);
lean_dec(v___y_1380_);
lean_dec_ref(v___y_1379_);
lean_dec_ref(v_as_1375_);
lean_dec_ref(v_goal_1373_);
lean_dec_ref(v_init_1372_);
return v_res_1386_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4___boxed(lean_object* v_init_1387_, lean_object* v_goal_1388_, lean_object* v_isTarget_1389_, lean_object* v_n_1390_, lean_object* v_b_1391_, lean_object* v___y_1392_, lean_object* v___y_1393_, lean_object* v___y_1394_, lean_object* v___y_1395_, lean_object* v___y_1396_){
_start:
{
lean_object* v_res_1397_; 
v_res_1397_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(v_init_1387_, v_goal_1388_, v_isTarget_1389_, v_n_1390_, v_b_1391_, v___y_1392_, v___y_1393_, v___y_1394_, v___y_1395_);
lean_dec(v___y_1395_);
lean_dec_ref(v___y_1394_);
lean_dec(v___y_1393_);
lean_dec_ref(v___y_1392_);
lean_dec_ref(v_n_1390_);
lean_dec_ref(v_goal_1388_);
lean_dec_ref(v_init_1387_);
return v_res_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(lean_object* v_goal_1398_, lean_object* v_isTarget_1399_, lean_object* v_t_1400_, lean_object* v_init_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_){
_start:
{
lean_object* v_root_1407_; lean_object* v_tail_1408_; lean_object* v___x_1409_; 
v_root_1407_ = lean_ctor_get(v_t_1400_, 0);
v_tail_1408_ = lean_ctor_get(v_t_1400_, 1);
lean_inc_ref(v_isTarget_1399_);
lean_inc_ref(v_init_1401_);
v___x_1409_ = l_Lean_PersistentArray_forInAux___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__4(v_init_1401_, v_goal_1398_, v_isTarget_1399_, v_root_1407_, v_init_1401_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
lean_dec_ref(v_init_1401_);
if (lean_obj_tag(v___x_1409_) == 0)
{
lean_object* v_a_1410_; lean_object* v___x_1412_; uint8_t v_isShared_1413_; uint8_t v_isSharedCheck_1446_; 
v_a_1410_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1446_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1446_ == 0)
{
v___x_1412_ = v___x_1409_;
v_isShared_1413_ = v_isSharedCheck_1446_;
goto v_resetjp_1411_;
}
else
{
lean_inc(v_a_1410_);
lean_dec(v___x_1409_);
v___x_1412_ = lean_box(0);
v_isShared_1413_ = v_isSharedCheck_1446_;
goto v_resetjp_1411_;
}
v_resetjp_1411_:
{
if (lean_obj_tag(v_a_1410_) == 0)
{
lean_object* v_a_1414_; lean_object* v___x_1416_; 
lean_dec_ref(v_isTarget_1399_);
v_a_1414_ = lean_ctor_get(v_a_1410_, 0);
lean_inc(v_a_1414_);
lean_dec_ref_known(v_a_1410_, 1);
if (v_isShared_1413_ == 0)
{
lean_ctor_set(v___x_1412_, 0, v_a_1414_);
v___x_1416_ = v___x_1412_;
goto v_reusejp_1415_;
}
else
{
lean_object* v_reuseFailAlloc_1417_; 
v_reuseFailAlloc_1417_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1417_, 0, v_a_1414_);
v___x_1416_ = v_reuseFailAlloc_1417_;
goto v_reusejp_1415_;
}
v_reusejp_1415_:
{
return v___x_1416_;
}
}
else
{
lean_object* v_a_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; size_t v_sz_1421_; size_t v___x_1422_; lean_object* v___x_1423_; 
lean_del_object(v___x_1412_);
v_a_1418_ = lean_ctor_get(v_a_1410_, 0);
lean_inc(v_a_1418_);
lean_dec_ref_known(v_a_1410_, 1);
v___x_1419_ = lean_box(0);
v___x_1420_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1420_, 0, v___x_1419_);
lean_ctor_set(v___x_1420_, 1, v_a_1418_);
v_sz_1421_ = lean_array_size(v_tail_1408_);
v___x_1422_ = ((size_t)0ULL);
v___x_1423_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3_spec__5(v_goal_1398_, v_isTarget_1399_, v_tail_1408_, v_sz_1421_, v___x_1422_, v___x_1420_, v___y_1402_, v___y_1403_, v___y_1404_, v___y_1405_);
if (lean_obj_tag(v___x_1423_) == 0)
{
lean_object* v_a_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1437_; 
v_a_1424_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1437_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1437_ == 0)
{
v___x_1426_ = v___x_1423_;
v_isShared_1427_ = v_isSharedCheck_1437_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_a_1424_);
lean_dec(v___x_1423_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1437_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v_fst_1428_; 
v_fst_1428_ = lean_ctor_get(v_a_1424_, 0);
if (lean_obj_tag(v_fst_1428_) == 0)
{
lean_object* v_snd_1429_; lean_object* v___x_1431_; 
v_snd_1429_ = lean_ctor_get(v_a_1424_, 1);
lean_inc(v_snd_1429_);
lean_dec(v_a_1424_);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v_snd_1429_);
v___x_1431_ = v___x_1426_;
goto v_reusejp_1430_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_snd_1429_);
v___x_1431_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1430_;
}
v_reusejp_1430_:
{
return v___x_1431_;
}
}
else
{
lean_object* v_val_1433_; lean_object* v___x_1435_; 
lean_inc_ref(v_fst_1428_);
lean_dec(v_a_1424_);
v_val_1433_ = lean_ctor_get(v_fst_1428_, 0);
lean_inc(v_val_1433_);
lean_dec_ref_known(v_fst_1428_, 1);
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 0, v_val_1433_);
v___x_1435_ = v___x_1426_;
goto v_reusejp_1434_;
}
else
{
lean_object* v_reuseFailAlloc_1436_; 
v_reuseFailAlloc_1436_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1436_, 0, v_val_1433_);
v___x_1435_ = v_reuseFailAlloc_1436_;
goto v_reusejp_1434_;
}
v_reusejp_1434_:
{
return v___x_1435_;
}
}
}
}
else
{
lean_object* v_a_1438_; lean_object* v___x_1440_; uint8_t v_isShared_1441_; uint8_t v_isSharedCheck_1445_; 
v_a_1438_ = lean_ctor_get(v___x_1423_, 0);
v_isSharedCheck_1445_ = !lean_is_exclusive(v___x_1423_);
if (v_isSharedCheck_1445_ == 0)
{
v___x_1440_ = v___x_1423_;
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
else
{
lean_inc(v_a_1438_);
lean_dec(v___x_1423_);
v___x_1440_ = lean_box(0);
v_isShared_1441_ = v_isSharedCheck_1445_;
goto v_resetjp_1439_;
}
v_resetjp_1439_:
{
lean_object* v___x_1443_; 
if (v_isShared_1441_ == 0)
{
v___x_1443_ = v___x_1440_;
goto v_reusejp_1442_;
}
else
{
lean_object* v_reuseFailAlloc_1444_; 
v_reuseFailAlloc_1444_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1444_, 0, v_a_1438_);
v___x_1443_ = v_reuseFailAlloc_1444_;
goto v_reusejp_1442_;
}
v_reusejp_1442_:
{
return v___x_1443_;
}
}
}
}
}
}
else
{
lean_object* v_a_1447_; lean_object* v___x_1449_; uint8_t v_isShared_1450_; uint8_t v_isSharedCheck_1454_; 
lean_dec_ref(v_isTarget_1399_);
v_a_1447_ = lean_ctor_get(v___x_1409_, 0);
v_isSharedCheck_1454_ = !lean_is_exclusive(v___x_1409_);
if (v_isSharedCheck_1454_ == 0)
{
v___x_1449_ = v___x_1409_;
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
else
{
lean_inc(v_a_1447_);
lean_dec(v___x_1409_);
v___x_1449_ = lean_box(0);
v_isShared_1450_ = v_isSharedCheck_1454_;
goto v_resetjp_1448_;
}
v_resetjp_1448_:
{
lean_object* v___x_1452_; 
if (v_isShared_1450_ == 0)
{
v___x_1452_ = v___x_1449_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1453_; 
v_reuseFailAlloc_1453_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1453_, 0, v_a_1447_);
v___x_1452_ = v_reuseFailAlloc_1453_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
return v___x_1452_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3___boxed(lean_object* v_goal_1455_, lean_object* v_isTarget_1456_, lean_object* v_t_1457_, lean_object* v_init_1458_, lean_object* v___y_1459_, lean_object* v___y_1460_, lean_object* v___y_1461_, lean_object* v___y_1462_, lean_object* v___y_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(v_goal_1455_, v_isTarget_1456_, v_t_1457_, v_init_1458_, v___y_1459_, v___y_1460_, v___y_1461_, v___y_1462_);
lean_dec(v___y_1462_);
lean_dec_ref(v___y_1461_);
lean_dec(v___y_1460_);
lean_dec_ref(v___y_1459_);
lean_dec_ref(v_t_1457_);
lean_dec_ref(v_goal_1455_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(lean_object* v_a_1465_, lean_object* v_a_1466_){
_start:
{
if (lean_obj_tag(v_a_1465_) == 0)
{
lean_object* v___x_1468_; lean_object* v___x_1469_; 
v___x_1468_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1468_, 0, v_a_1466_);
v___x_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1469_, 0, v___x_1468_);
return v___x_1469_;
}
else
{
lean_object* v_value_1470_; lean_object* v_tail_1471_; lean_object* v_num_1472_; lean_object* v_den_1473_; lean_object* v___x_1474_; uint8_t v___x_1475_; 
v_value_1470_ = lean_ctor_get(v_a_1465_, 1);
lean_inc(v_value_1470_);
v_tail_1471_ = lean_ctor_get(v_a_1465_, 2);
lean_inc(v_tail_1471_);
lean_dec_ref_known(v_a_1465_, 3);
v_num_1472_ = lean_ctor_get(v_value_1470_, 0);
lean_inc(v_num_1472_);
v_den_1473_ = lean_ctor_get(v_value_1470_, 1);
lean_inc(v_den_1473_);
lean_dec(v_value_1470_);
v___x_1474_ = lean_unsigned_to_nat(1u);
v___x_1475_ = lean_nat_dec_eq(v_den_1473_, v___x_1474_);
lean_dec(v_den_1473_);
if (v___x_1475_ == 0)
{
lean_dec(v_num_1472_);
v_a_1465_ = v_tail_1471_;
goto _start;
}
else
{
lean_object* v___x_1477_; lean_object* v___x_1478_; 
v___x_1477_ = lean_box(0);
v___x_1478_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_a_1466_, v_num_1472_, v___x_1477_);
v_a_1465_ = v_tail_1471_;
v_a_1466_ = v___x_1478_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg___boxed(lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v___y_1482_){
_start:
{
lean_object* v_res_1483_; 
v_res_1483_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(v_a_1480_, v_a_1481_);
return v_res_1483_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(lean_object* v_as_1484_, size_t v_sz_1485_, size_t v_i_1486_, lean_object* v_b_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_, lean_object* v___y_1490_, lean_object* v___y_1491_){
_start:
{
uint8_t v___x_1493_; 
v___x_1493_ = lean_usize_dec_lt(v_i_1486_, v_sz_1485_);
if (v___x_1493_ == 0)
{
lean_object* v___x_1494_; 
v___x_1494_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1494_, 0, v_b_1487_);
return v___x_1494_;
}
else
{
lean_object* v_a_1495_; lean_object* v___x_1496_; 
v_a_1495_ = lean_array_uget_borrowed(v_as_1484_, v_i_1486_);
lean_inc(v_a_1495_);
v___x_1496_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(v_a_1495_, v_b_1487_);
if (lean_obj_tag(v___x_1496_) == 0)
{
lean_object* v_a_1497_; lean_object* v___x_1499_; uint8_t v_isShared_1500_; uint8_t v_isSharedCheck_1509_; 
v_a_1497_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1509_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1509_ == 0)
{
v___x_1499_ = v___x_1496_;
v_isShared_1500_ = v_isSharedCheck_1509_;
goto v_resetjp_1498_;
}
else
{
lean_inc(v_a_1497_);
lean_dec(v___x_1496_);
v___x_1499_ = lean_box(0);
v_isShared_1500_ = v_isSharedCheck_1509_;
goto v_resetjp_1498_;
}
v_resetjp_1498_:
{
if (lean_obj_tag(v_a_1497_) == 0)
{
lean_object* v_a_1501_; lean_object* v___x_1503_; 
v_a_1501_ = lean_ctor_get(v_a_1497_, 0);
lean_inc(v_a_1501_);
lean_dec_ref_known(v_a_1497_, 1);
if (v_isShared_1500_ == 0)
{
lean_ctor_set(v___x_1499_, 0, v_a_1501_);
v___x_1503_ = v___x_1499_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1504_; 
v_reuseFailAlloc_1504_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1504_, 0, v_a_1501_);
v___x_1503_ = v_reuseFailAlloc_1504_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
return v___x_1503_;
}
}
else
{
lean_object* v_a_1505_; size_t v___x_1506_; size_t v___x_1507_; 
lean_del_object(v___x_1499_);
v_a_1505_ = lean_ctor_get(v_a_1497_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v_a_1497_, 1);
v___x_1506_ = ((size_t)1ULL);
v___x_1507_ = lean_usize_add(v_i_1486_, v___x_1506_);
v_i_1486_ = v___x_1507_;
v_b_1487_ = v_a_1505_;
goto _start;
}
}
}
else
{
lean_object* v_a_1510_; lean_object* v___x_1512_; uint8_t v_isShared_1513_; uint8_t v_isSharedCheck_1517_; 
v_a_1510_ = lean_ctor_get(v___x_1496_, 0);
v_isSharedCheck_1517_ = !lean_is_exclusive(v___x_1496_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1512_ = v___x_1496_;
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
else
{
lean_inc(v_a_1510_);
lean_dec(v___x_1496_);
v___x_1512_ = lean_box(0);
v_isShared_1513_ = v_isSharedCheck_1517_;
goto v_resetjp_1511_;
}
v_resetjp_1511_:
{
lean_object* v___x_1515_; 
if (v_isShared_1513_ == 0)
{
v___x_1515_ = v___x_1512_;
goto v_reusejp_1514_;
}
else
{
lean_object* v_reuseFailAlloc_1516_; 
v_reuseFailAlloc_1516_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1516_, 0, v_a_1510_);
v___x_1515_ = v_reuseFailAlloc_1516_;
goto v_reusejp_1514_;
}
v_reusejp_1514_:
{
return v___x_1515_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2___boxed(lean_object* v_as_1518_, lean_object* v_sz_1519_, lean_object* v_i_1520_, lean_object* v_b_1521_, lean_object* v___y_1522_, lean_object* v___y_1523_, lean_object* v___y_1524_, lean_object* v___y_1525_, lean_object* v___y_1526_){
_start:
{
size_t v_sz_boxed_1527_; size_t v_i_boxed_1528_; lean_object* v_res_1529_; 
v_sz_boxed_1527_ = lean_unbox_usize(v_sz_1519_);
lean_dec(v_sz_1519_);
v_i_boxed_1528_ = lean_unbox_usize(v_i_1520_);
lean_dec(v_i_1520_);
v_res_1529_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(v_as_1518_, v_sz_boxed_1527_, v_i_boxed_1528_, v_b_1521_, v___y_1522_, v___y_1523_, v___y_1524_, v___y_1525_);
lean_dec(v___y_1525_);
lean_dec_ref(v___y_1524_);
lean_dec(v___y_1523_);
lean_dec_ref(v___y_1522_);
lean_dec_ref(v_as_1518_);
return v_res_1529_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0(void){
_start:
{
lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; 
v___x_1530_ = lean_box(0);
v___x_1531_ = lean_unsigned_to_nat(16u);
v___x_1532_ = lean_mk_array(v___x_1531_, v___x_1530_);
return v___x_1532_;
}
}
static lean_object* _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1(void){
_start:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v_used_1535_; 
v___x_1533_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__0);
v___x_1534_ = lean_unsigned_to_nat(0u);
v_used_1535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_used_1535_, 0, v___x_1534_);
lean_ctor_set(v_used_1535_, 1, v___x_1533_);
return v_used_1535_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(lean_object* v_goal_1536_, lean_object* v_isTarget_1537_, lean_object* v_model_1538_, lean_object* v_a_1539_, lean_object* v_a_1540_, lean_object* v_a_1541_, lean_object* v_a_1542_){
_start:
{
lean_object* v_buckets_1544_; lean_object* v_nextVal_1545_; lean_object* v_used_1546_; size_t v_sz_1547_; size_t v___x_1548_; lean_object* v___x_1549_; 
v_buckets_1544_ = lean_ctor_get(v_model_1538_, 1);
v_nextVal_1545_ = lean_obj_once(&l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0, &l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0_once, _init_l_Std_DHashMap_Internal_Raw_u2080_contains___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_pickUnusedValue_go_spec__0___redArg___closed__0);
v_used_1546_ = lean_obj_once(&l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1, &l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1_once, _init_l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___closed__1);
v_sz_1547_ = lean_array_size(v_buckets_1544_);
v___x_1548_ = ((size_t)0ULL);
v___x_1549_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__2(v_buckets_1544_, v_sz_1547_, v___x_1548_, v_used_1546_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_);
if (lean_obj_tag(v___x_1549_) == 0)
{
lean_object* v_toGoalState_1550_; lean_object* v_a_1551_; lean_object* v_exprs_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; 
v_toGoalState_1550_ = lean_ctor_get(v_goal_1536_, 0);
v_a_1551_ = lean_ctor_get(v___x_1549_, 0);
lean_inc(v_a_1551_);
lean_dec_ref_known(v___x_1549_, 1);
v_exprs_1552_ = lean_ctor_get(v_toGoalState_1550_, 2);
v___x_1553_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1553_, 0, v_a_1551_);
lean_ctor_set(v___x_1553_, 1, v_model_1538_);
v___x_1554_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1554_, 0, v_nextVal_1545_);
lean_ctor_set(v___x_1554_, 1, v___x_1553_);
v___x_1555_ = l_Lean_PersistentArray_forIn___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__3(v_goal_1536_, v_isTarget_1537_, v_exprs_1552_, v___x_1554_, v_a_1539_, v_a_1540_, v_a_1541_, v_a_1542_);
if (lean_obj_tag(v___x_1555_) == 0)
{
lean_object* v_a_1556_; lean_object* v___x_1558_; uint8_t v_isShared_1559_; uint8_t v_isSharedCheck_1565_; 
v_a_1556_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1558_ = v___x_1555_;
v_isShared_1559_ = v_isSharedCheck_1565_;
goto v_resetjp_1557_;
}
else
{
lean_inc(v_a_1556_);
lean_dec(v___x_1555_);
v___x_1558_ = lean_box(0);
v_isShared_1559_ = v_isSharedCheck_1565_;
goto v_resetjp_1557_;
}
v_resetjp_1557_:
{
lean_object* v_snd_1560_; lean_object* v_snd_1561_; lean_object* v___x_1563_; 
v_snd_1560_ = lean_ctor_get(v_a_1556_, 1);
lean_inc(v_snd_1560_);
lean_dec(v_a_1556_);
v_snd_1561_ = lean_ctor_get(v_snd_1560_, 1);
lean_inc(v_snd_1561_);
lean_dec(v_snd_1560_);
if (v_isShared_1559_ == 0)
{
lean_ctor_set(v___x_1558_, 0, v_snd_1561_);
v___x_1563_ = v___x_1558_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_snd_1561_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
else
{
lean_object* v_a_1566_; lean_object* v___x_1568_; uint8_t v_isShared_1569_; uint8_t v_isSharedCheck_1573_; 
v_a_1566_ = lean_ctor_get(v___x_1555_, 0);
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1555_);
if (v_isSharedCheck_1573_ == 0)
{
v___x_1568_ = v___x_1555_;
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
else
{
lean_inc(v_a_1566_);
lean_dec(v___x_1555_);
v___x_1568_ = lean_box(0);
v_isShared_1569_ = v_isSharedCheck_1573_;
goto v_resetjp_1567_;
}
v_resetjp_1567_:
{
lean_object* v___x_1571_; 
if (v_isShared_1569_ == 0)
{
v___x_1571_ = v___x_1568_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_a_1566_);
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
lean_dec_ref(v_model_1538_);
lean_dec_ref(v_isTarget_1537_);
v_a_1574_ = lean_ctor_get(v___x_1549_, 0);
v_isSharedCheck_1581_ = !lean_is_exclusive(v___x_1549_);
if (v_isSharedCheck_1581_ == 0)
{
v___x_1576_ = v___x_1549_;
v_isShared_1577_ = v_isSharedCheck_1581_;
goto v_resetjp_1575_;
}
else
{
lean_inc(v_a_1574_);
lean_dec(v___x_1549_);
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
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned___boxed(lean_object* v_goal_1582_, lean_object* v_isTarget_1583_, lean_object* v_model_1584_, lean_object* v_a_1585_, lean_object* v_a_1586_, lean_object* v_a_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(v_goal_1582_, v_isTarget_1583_, v_model_1584_, v_a_1585_, v_a_1586_, v_a_1587_, v_a_1588_);
lean_dec(v_a_1588_);
lean_dec_ref(v_a_1587_);
lean_dec(v_a_1586_);
lean_dec_ref(v_a_1585_);
lean_dec_ref(v_goal_1582_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0(lean_object* v_00_u03b2_1591_, lean_object* v_m_1592_, lean_object* v_a_1593_, lean_object* v_b_1594_){
_start:
{
lean_object* v___x_1595_; 
v___x_1595_ = l_Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0___redArg(v_m_1592_, v_a_1593_, v_b_1594_);
return v___x_1595_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1(lean_object* v_a_1596_, lean_object* v_a_1597_, lean_object* v___y_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_){
_start:
{
lean_object* v___x_1603_; 
v___x_1603_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___redArg(v_a_1596_, v_a_1597_);
return v___x_1603_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1___boxed(lean_object* v_a_1604_, lean_object* v_a_1605_, lean_object* v___y_1606_, lean_object* v___y_1607_, lean_object* v___y_1608_, lean_object* v___y_1609_, lean_object* v___y_1610_){
_start:
{
lean_object* v_res_1611_; 
v_res_1611_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__1(v_a_1604_, v_a_1605_, v___y_1606_, v___y_1607_, v___y_1608_, v___y_1609_);
lean_dec(v___y_1609_);
lean_dec_ref(v___y_1608_);
lean_dec(v___y_1607_);
lean_dec_ref(v___y_1606_);
return v_res_1611_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0(lean_object* v_00_u03b2_1612_, lean_object* v_data_1613_){
_start:
{
lean_object* v___x_1614_; 
v___x_1614_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0___redArg(v_data_1613_);
return v___x_1614_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1(lean_object* v_00_u03b2_1615_, lean_object* v_i_1616_, lean_object* v_source_1617_, lean_object* v_target_1618_){
_start:
{
lean_object* v___x_1619_; 
v___x_1619_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1___redArg(v_i_1616_, v_source_1617_, v_target_1618_);
return v___x_1619_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5(lean_object* v_00_u03b2_1620_, lean_object* v_x_1621_, lean_object* v_x_1622_){
_start:
{
lean_object* v___x_1623_; 
v___x_1623_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insertIfNew___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned_spec__0_spec__0_spec__1_spec__5___redArg(v_x_1621_, v_x_1622_);
return v___x_1623_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(lean_object* v_goal_1624_, lean_object* v_hi_1625_, lean_object* v_pivot_1626_, lean_object* v_as_1627_, lean_object* v_i_1628_, lean_object* v_k_1629_){
_start:
{
uint8_t v___y_1631_; uint8_t v___x_1640_; 
v___x_1640_ = lean_nat_dec_lt(v_k_1629_, v_hi_1625_);
if (v___x_1640_ == 0)
{
lean_object* v___x_1641_; lean_object* v___x_1642_; 
lean_dec(v_k_1629_);
v___x_1641_ = lean_array_fswap(v_as_1627_, v_i_1628_, v_hi_1625_);
v___x_1642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1642_, 0, v_i_1628_);
lean_ctor_set(v___x_1642_, 1, v___x_1641_);
return v___x_1642_;
}
else
{
lean_object* v___x_1643_; lean_object* v_fst_1644_; lean_object* v_fst_1645_; lean_object* v_g_u2081_1646_; lean_object* v_g_u2082_1647_; uint8_t v___x_1648_; 
v___x_1643_ = lean_array_fget_borrowed(v_as_1627_, v_k_1629_);
v_fst_1644_ = lean_ctor_get(v___x_1643_, 0);
v_fst_1645_ = lean_ctor_get(v_pivot_1626_, 0);
v_g_u2081_1646_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1624_, v_fst_1644_);
v_g_u2082_1647_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1624_, v_fst_1645_);
v___x_1648_ = lean_nat_dec_eq(v_g_u2081_1646_, v_g_u2082_1647_);
if (v___x_1648_ == 0)
{
uint8_t v___x_1649_; 
v___x_1649_ = lean_nat_dec_lt(v_g_u2081_1646_, v_g_u2082_1647_);
lean_dec(v_g_u2082_1647_);
lean_dec(v_g_u2081_1646_);
v___y_1631_ = v___x_1649_;
goto v___jp_1630_;
}
else
{
uint8_t v___x_1650_; 
lean_dec(v_g_u2082_1647_);
lean_dec(v_g_u2081_1646_);
v___x_1650_ = lean_expr_lt(v_fst_1644_, v_fst_1645_);
v___y_1631_ = v___x_1650_;
goto v___jp_1630_;
}
}
v___jp_1630_:
{
if (v___y_1631_ == 0)
{
lean_object* v___x_1632_; lean_object* v___x_1633_; 
v___x_1632_ = lean_unsigned_to_nat(1u);
v___x_1633_ = lean_nat_add(v_k_1629_, v___x_1632_);
lean_dec(v_k_1629_);
v_k_1629_ = v___x_1633_;
goto _start;
}
else
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1635_ = lean_array_fswap(v_as_1627_, v_i_1628_, v_k_1629_);
v___x_1636_ = lean_unsigned_to_nat(1u);
v___x_1637_ = lean_nat_add(v_i_1628_, v___x_1636_);
lean_dec(v_i_1628_);
v___x_1638_ = lean_nat_add(v_k_1629_, v___x_1636_);
lean_dec(v_k_1629_);
v_as_1627_ = v___x_1635_;
v_i_1628_ = v___x_1637_;
v_k_1629_ = v___x_1638_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg___boxed(lean_object* v_goal_1651_, lean_object* v_hi_1652_, lean_object* v_pivot_1653_, lean_object* v_as_1654_, lean_object* v_i_1655_, lean_object* v_k_1656_){
_start:
{
lean_object* v_res_1657_; 
v_res_1657_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(v_goal_1651_, v_hi_1652_, v_pivot_1653_, v_as_1654_, v_i_1655_, v_k_1656_);
lean_dec_ref(v_pivot_1653_);
lean_dec(v_hi_1652_);
lean_dec_ref(v_goal_1651_);
return v_res_1657_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(lean_object* v_goal_1658_, lean_object* v_x_1659_, lean_object* v_x_1660_){
_start:
{
lean_object* v_fst_1661_; lean_object* v_fst_1662_; lean_object* v_g_u2081_1663_; lean_object* v_g_u2082_1664_; uint8_t v___x_1665_; 
v_fst_1661_ = lean_ctor_get(v_x_1659_, 0);
v_fst_1662_ = lean_ctor_get(v_x_1660_, 0);
v_g_u2081_1663_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1658_, v_fst_1661_);
v_g_u2082_1664_ = l_Lean_Meta_Grind_Goal_getGeneration(v_goal_1658_, v_fst_1662_);
v___x_1665_ = lean_nat_dec_eq(v_g_u2081_1663_, v_g_u2082_1664_);
if (v___x_1665_ == 0)
{
uint8_t v___x_1666_; 
v___x_1666_ = lean_nat_dec_lt(v_g_u2081_1663_, v_g_u2082_1664_);
lean_dec(v_g_u2082_1664_);
lean_dec(v_g_u2081_1663_);
return v___x_1666_;
}
else
{
uint8_t v___x_1667_; 
lean_dec(v_g_u2082_1664_);
lean_dec(v_g_u2081_1663_);
v___x_1667_ = lean_expr_lt(v_fst_1661_, v_fst_1662_);
return v___x_1667_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0___boxed(lean_object* v_goal_1668_, lean_object* v_x_1669_, lean_object* v_x_1670_){
_start:
{
uint8_t v_res_1671_; lean_object* v_r_1672_; 
v_res_1671_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1668_, v_x_1669_, v_x_1670_);
lean_dec_ref(v_x_1670_);
lean_dec_ref(v_x_1669_);
lean_dec_ref(v_goal_1668_);
v_r_1672_ = lean_box(v_res_1671_);
return v_r_1672_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(lean_object* v_goal_1673_, lean_object* v_n_1674_, lean_object* v_as_1675_, lean_object* v_lo_1676_, lean_object* v_hi_1677_){
_start:
{
lean_object* v___y_1679_; uint8_t v___x_1689_; 
v___x_1689_ = lean_nat_dec_lt(v_lo_1676_, v_hi_1677_);
if (v___x_1689_ == 0)
{
lean_dec(v_lo_1676_);
return v_as_1675_;
}
else
{
lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v_mid_1692_; lean_object* v___y_1694_; lean_object* v___y_1700_; lean_object* v___x_1705_; lean_object* v___x_1706_; uint8_t v___x_1707_; 
v___x_1690_ = lean_nat_add(v_lo_1676_, v_hi_1677_);
v___x_1691_ = lean_unsigned_to_nat(1u);
v_mid_1692_ = lean_nat_shiftr(v___x_1690_, v___x_1691_);
lean_dec(v___x_1690_);
v___x_1705_ = lean_array_fget_borrowed(v_as_1675_, v_mid_1692_);
v___x_1706_ = lean_array_fget_borrowed(v_as_1675_, v_lo_1676_);
v___x_1707_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1673_, v___x_1705_, v___x_1706_);
if (v___x_1707_ == 0)
{
v___y_1700_ = v_as_1675_;
goto v___jp_1699_;
}
else
{
lean_object* v___x_1708_; 
v___x_1708_ = lean_array_fswap(v_as_1675_, v_lo_1676_, v_mid_1692_);
v___y_1700_ = v___x_1708_;
goto v___jp_1699_;
}
v___jp_1693_:
{
lean_object* v___x_1695_; lean_object* v___x_1696_; uint8_t v___x_1697_; 
v___x_1695_ = lean_array_fget_borrowed(v___y_1694_, v_mid_1692_);
v___x_1696_ = lean_array_fget_borrowed(v___y_1694_, v_hi_1677_);
v___x_1697_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1673_, v___x_1695_, v___x_1696_);
if (v___x_1697_ == 0)
{
lean_dec(v_mid_1692_);
v___y_1679_ = v___y_1694_;
goto v___jp_1678_;
}
else
{
lean_object* v___x_1698_; 
v___x_1698_ = lean_array_fswap(v___y_1694_, v_mid_1692_, v_hi_1677_);
lean_dec(v_mid_1692_);
v___y_1679_ = v___x_1698_;
goto v___jp_1678_;
}
}
v___jp_1699_:
{
lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1701_ = lean_array_fget_borrowed(v___y_1700_, v_hi_1677_);
v___x_1702_ = lean_array_fget_borrowed(v___y_1700_, v_lo_1676_);
v___x_1703_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___lam__0(v_goal_1673_, v___x_1701_, v___x_1702_);
if (v___x_1703_ == 0)
{
v___y_1694_ = v___y_1700_;
goto v___jp_1693_;
}
else
{
lean_object* v___x_1704_; 
v___x_1704_ = lean_array_fswap(v___y_1700_, v_lo_1676_, v_hi_1677_);
v___y_1694_ = v___x_1704_;
goto v___jp_1693_;
}
}
}
v___jp_1678_:
{
lean_object* v_pivot_1680_; lean_object* v___x_1681_; lean_object* v_fst_1682_; lean_object* v_snd_1683_; uint8_t v___x_1684_; 
v_pivot_1680_ = lean_array_fget(v___y_1679_, v_hi_1677_);
lean_inc_n(v_lo_1676_, 2);
v___x_1681_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(v_goal_1673_, v_hi_1677_, v_pivot_1680_, v___y_1679_, v_lo_1676_, v_lo_1676_);
lean_dec(v_pivot_1680_);
v_fst_1682_ = lean_ctor_get(v___x_1681_, 0);
lean_inc(v_fst_1682_);
v_snd_1683_ = lean_ctor_get(v___x_1681_, 1);
lean_inc(v_snd_1683_);
lean_dec_ref(v___x_1681_);
v___x_1684_ = lean_nat_dec_le(v_hi_1677_, v_fst_1682_);
if (v___x_1684_ == 0)
{
lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; 
v___x_1685_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1673_, v_n_1674_, v_snd_1683_, v_lo_1676_, v_fst_1682_);
v___x_1686_ = lean_unsigned_to_nat(1u);
v___x_1687_ = lean_nat_add(v_fst_1682_, v___x_1686_);
lean_dec(v_fst_1682_);
v_as_1675_ = v___x_1685_;
v_lo_1676_ = v___x_1687_;
goto _start;
}
else
{
lean_dec(v_fst_1682_);
lean_dec(v_lo_1676_);
return v_snd_1683_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg___boxed(lean_object* v_goal_1709_, lean_object* v_n_1710_, lean_object* v_as_1711_, lean_object* v_lo_1712_, lean_object* v_hi_1713_){
_start:
{
lean_object* v_res_1714_; 
v_res_1714_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1709_, v_n_1710_, v_as_1711_, v_lo_1712_, v_hi_1713_);
lean_dec(v_hi_1713_);
lean_dec(v_n_1710_);
lean_dec_ref(v_goal_1709_);
return v_res_1714_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(lean_object* v_goal_1715_, lean_object* v_m_1716_){
_start:
{
lean_object* v___x_1717_; lean_object* v___x_1718_; uint8_t v___x_1719_; 
v___x_1717_ = lean_array_get_size(v_m_1716_);
v___x_1718_ = lean_unsigned_to_nat(0u);
v___x_1719_ = lean_nat_dec_eq(v___x_1717_, v___x_1718_);
if (v___x_1719_ == 0)
{
lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___y_1723_; uint8_t v___x_1727_; 
v___x_1720_ = lean_unsigned_to_nat(1u);
v___x_1721_ = lean_nat_sub(v___x_1717_, v___x_1720_);
v___x_1727_ = lean_nat_dec_le(v___x_1718_, v___x_1721_);
if (v___x_1727_ == 0)
{
lean_inc(v___x_1721_);
v___y_1723_ = v___x_1721_;
goto v___jp_1722_;
}
else
{
v___y_1723_ = v___x_1718_;
goto v___jp_1722_;
}
v___jp_1722_:
{
uint8_t v___x_1724_; 
v___x_1724_ = lean_nat_dec_le(v___y_1723_, v___x_1721_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; 
lean_dec(v___x_1721_);
lean_inc(v___y_1723_);
v___x_1725_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1715_, v___x_1717_, v_m_1716_, v___y_1723_, v___y_1723_);
lean_dec(v___y_1723_);
return v___x_1725_;
}
else
{
lean_object* v___x_1726_; 
v___x_1726_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1715_, v___x_1717_, v_m_1716_, v___y_1723_, v___x_1721_);
lean_dec(v___x_1721_);
return v___x_1726_;
}
}
}
else
{
return v_m_1716_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel___boxed(lean_object* v_goal_1728_, lean_object* v_m_1729_){
_start:
{
lean_object* v_res_1730_; 
v_res_1730_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(v_goal_1728_, v_m_1729_);
lean_dec_ref(v_goal_1728_);
return v_res_1730_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0(lean_object* v_goal_1731_, lean_object* v_n_1732_, lean_object* v_as_1733_, lean_object* v_lo_1734_, lean_object* v_hi_1735_, lean_object* v_w_1736_, lean_object* v_hlo_1737_, lean_object* v_hhi_1738_){
_start:
{
lean_object* v___x_1739_; 
v___x_1739_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___redArg(v_goal_1731_, v_n_1732_, v_as_1733_, v_lo_1734_, v_hi_1735_);
return v___x_1739_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0___boxed(lean_object* v_goal_1740_, lean_object* v_n_1741_, lean_object* v_as_1742_, lean_object* v_lo_1743_, lean_object* v_hi_1744_, lean_object* v_w_1745_, lean_object* v_hlo_1746_, lean_object* v_hhi_1747_){
_start:
{
lean_object* v_res_1748_; 
v_res_1748_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0(v_goal_1740_, v_n_1741_, v_as_1742_, v_lo_1743_, v_hi_1744_, v_w_1745_, v_hlo_1746_, v_hhi_1747_);
lean_dec(v_hi_1744_);
lean_dec(v_n_1741_);
lean_dec_ref(v_goal_1740_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0(lean_object* v_goal_1749_, lean_object* v_n_1750_, lean_object* v_lo_1751_, lean_object* v_hi_1752_, lean_object* v_hhi_1753_, lean_object* v_pivot_1754_, lean_object* v_as_1755_, lean_object* v_i_1756_, lean_object* v_k_1757_, lean_object* v_ilo_1758_, lean_object* v_ik_1759_, lean_object* v_w_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___redArg(v_goal_1749_, v_hi_1752_, v_pivot_1754_, v_as_1755_, v_i_1756_, v_k_1757_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0___boxed(lean_object* v_goal_1762_, lean_object* v_n_1763_, lean_object* v_lo_1764_, lean_object* v_hi_1765_, lean_object* v_hhi_1766_, lean_object* v_pivot_1767_, lean_object* v_as_1768_, lean_object* v_i_1769_, lean_object* v_k_1770_, lean_object* v_ilo_1771_, lean_object* v_ik_1772_, lean_object* v_w_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00__private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel_spec__0_spec__0(v_goal_1762_, v_n_1763_, v_lo_1764_, v_hi_1765_, v_hhi_1766_, v_pivot_1767_, v_as_1768_, v_i_1769_, v_k_1770_, v_ilo_1771_, v_ik_1772_, v_w_1773_);
lean_dec_ref(v_pivot_1767_);
lean_dec(v_hi_1765_);
lean_dec(v_lo_1764_);
lean_dec(v_n_1763_);
lean_dec_ref(v_goal_1762_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
if (lean_obj_tag(v_a_1775_) == 0)
{
lean_object* v___x_1778_; lean_object* v___x_1779_; 
v___x_1778_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1778_, 0, v_a_1776_);
v___x_1779_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1779_, 0, v___x_1778_);
return v___x_1779_;
}
else
{
lean_object* v_key_1780_; lean_object* v_value_1781_; lean_object* v_tail_1782_; uint8_t v___x_1783_; 
v_key_1780_ = lean_ctor_get(v_a_1775_, 0);
v_value_1781_ = lean_ctor_get(v_a_1775_, 1);
v_tail_1782_ = lean_ctor_get(v_a_1775_, 2);
v___x_1783_ = l_Lean_Meta_Grind_Arith_isInterpretedTerm(v_key_1780_);
if (v___x_1783_ == 0)
{
lean_object* v___x_1784_; lean_object* v___x_1785_; 
lean_inc(v_value_1781_);
lean_inc(v_key_1780_);
v___x_1784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1784_, 0, v_key_1780_);
lean_ctor_set(v___x_1784_, 1, v_value_1781_);
v___x_1785_ = lean_array_push(v_a_1776_, v___x_1784_);
v_a_1775_ = v_tail_1782_;
v_a_1776_ = v___x_1785_;
goto _start;
}
else
{
v_a_1775_ = v_tail_1782_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg___boxed(lean_object* v_a_1788_, lean_object* v_a_1789_, lean_object* v___y_1790_){
_start:
{
lean_object* v_res_1791_; 
v_res_1791_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(v_a_1788_, v_a_1789_);
lean_dec(v_a_1788_);
return v_res_1791_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(lean_object* v_as_1792_, size_t v_sz_1793_, size_t v_i_1794_, lean_object* v_b_1795_, lean_object* v___y_1796_, lean_object* v___y_1797_, lean_object* v___y_1798_, lean_object* v___y_1799_){
_start:
{
uint8_t v___x_1801_; 
v___x_1801_ = lean_usize_dec_lt(v_i_1794_, v_sz_1793_);
if (v___x_1801_ == 0)
{
lean_object* v___x_1802_; 
v___x_1802_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1802_, 0, v_b_1795_);
return v___x_1802_;
}
else
{
lean_object* v_a_1803_; lean_object* v___x_1804_; 
v_a_1803_ = lean_array_uget_borrowed(v_as_1792_, v_i_1794_);
v___x_1804_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(v_a_1803_, v_b_1795_);
if (lean_obj_tag(v___x_1804_) == 0)
{
lean_object* v_a_1805_; lean_object* v___x_1807_; uint8_t v_isShared_1808_; uint8_t v_isSharedCheck_1817_; 
v_a_1805_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1817_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1817_ == 0)
{
v___x_1807_ = v___x_1804_;
v_isShared_1808_ = v_isSharedCheck_1817_;
goto v_resetjp_1806_;
}
else
{
lean_inc(v_a_1805_);
lean_dec(v___x_1804_);
v___x_1807_ = lean_box(0);
v_isShared_1808_ = v_isSharedCheck_1817_;
goto v_resetjp_1806_;
}
v_resetjp_1806_:
{
if (lean_obj_tag(v_a_1805_) == 0)
{
lean_object* v_a_1809_; lean_object* v___x_1811_; 
v_a_1809_ = lean_ctor_get(v_a_1805_, 0);
lean_inc(v_a_1809_);
lean_dec_ref_known(v_a_1805_, 1);
if (v_isShared_1808_ == 0)
{
lean_ctor_set(v___x_1807_, 0, v_a_1809_);
v___x_1811_ = v___x_1807_;
goto v_reusejp_1810_;
}
else
{
lean_object* v_reuseFailAlloc_1812_; 
v_reuseFailAlloc_1812_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1812_, 0, v_a_1809_);
v___x_1811_ = v_reuseFailAlloc_1812_;
goto v_reusejp_1810_;
}
v_reusejp_1810_:
{
return v___x_1811_;
}
}
else
{
lean_object* v_a_1813_; size_t v___x_1814_; size_t v___x_1815_; 
lean_del_object(v___x_1807_);
v_a_1813_ = lean_ctor_get(v_a_1805_, 0);
lean_inc(v_a_1813_);
lean_dec_ref_known(v_a_1805_, 1);
v___x_1814_ = ((size_t)1ULL);
v___x_1815_ = lean_usize_add(v_i_1794_, v___x_1814_);
v_i_1794_ = v___x_1815_;
v_b_1795_ = v_a_1813_;
goto _start;
}
}
}
else
{
lean_object* v_a_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_1825_; 
v_a_1818_ = lean_ctor_get(v___x_1804_, 0);
v_isSharedCheck_1825_ = !lean_is_exclusive(v___x_1804_);
if (v_isSharedCheck_1825_ == 0)
{
v___x_1820_ = v___x_1804_;
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_a_1818_);
lean_dec(v___x_1804_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_1825_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___x_1823_; 
if (v_isShared_1821_ == 0)
{
v___x_1823_ = v___x_1820_;
goto v_reusejp_1822_;
}
else
{
lean_object* v_reuseFailAlloc_1824_; 
v_reuseFailAlloc_1824_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1824_, 0, v_a_1818_);
v___x_1823_ = v_reuseFailAlloc_1824_;
goto v_reusejp_1822_;
}
v_reusejp_1822_:
{
return v___x_1823_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1___boxed(lean_object* v_as_1826_, lean_object* v_sz_1827_, lean_object* v_i_1828_, lean_object* v_b_1829_, lean_object* v___y_1830_, lean_object* v___y_1831_, lean_object* v___y_1832_, lean_object* v___y_1833_, lean_object* v___y_1834_){
_start:
{
size_t v_sz_boxed_1835_; size_t v_i_boxed_1836_; lean_object* v_res_1837_; 
v_sz_boxed_1835_ = lean_unbox_usize(v_sz_1827_);
lean_dec(v_sz_1827_);
v_i_boxed_1836_ = lean_unbox_usize(v_i_1828_);
lean_dec(v_i_1828_);
v_res_1837_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(v_as_1826_, v_sz_boxed_1835_, v_i_boxed_1836_, v_b_1829_, v___y_1830_, v___y_1831_, v___y_1832_, v___y_1833_);
lean_dec(v___y_1833_);
lean_dec_ref(v___y_1832_);
lean_dec(v___y_1831_);
lean_dec_ref(v___y_1830_);
lean_dec_ref(v_as_1826_);
return v_res_1837_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel(lean_object* v_goal_1840_, lean_object* v_isTarget_1841_, lean_object* v_model_1842_, lean_object* v_a_1843_, lean_object* v_a_1844_, lean_object* v_a_1845_, lean_object* v_a_1846_){
_start:
{
lean_object* v___x_1848_; 
v___x_1848_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_assignUnassigned(v_goal_1840_, v_isTarget_1841_, v_model_1842_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_);
if (lean_obj_tag(v___x_1848_) == 0)
{
lean_object* v_a_1849_; lean_object* v_buckets_1850_; lean_object* v___x_1851_; size_t v_sz_1852_; size_t v___x_1853_; lean_object* v___x_1854_; 
v_a_1849_ = lean_ctor_get(v___x_1848_, 0);
lean_inc(v_a_1849_);
lean_dec_ref_known(v___x_1848_, 1);
v_buckets_1850_ = lean_ctor_get(v_a_1849_, 1);
lean_inc_ref(v_buckets_1850_);
lean_dec(v_a_1849_);
v___x_1851_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_finalizeModel___closed__0));
v_sz_1852_ = lean_array_size(v_buckets_1850_);
v___x_1853_ = ((size_t)0ULL);
v___x_1854_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__1(v_buckets_1850_, v_sz_1852_, v___x_1853_, v___x_1851_, v_a_1843_, v_a_1844_, v_a_1845_, v_a_1846_);
lean_dec_ref(v_buckets_1850_);
if (lean_obj_tag(v___x_1854_) == 0)
{
lean_object* v_a_1855_; lean_object* v___x_1857_; uint8_t v_isShared_1858_; uint8_t v_isSharedCheck_1863_; 
v_a_1855_ = lean_ctor_get(v___x_1854_, 0);
v_isSharedCheck_1863_ = !lean_is_exclusive(v___x_1854_);
if (v_isSharedCheck_1863_ == 0)
{
v___x_1857_ = v___x_1854_;
v_isShared_1858_ = v_isSharedCheck_1863_;
goto v_resetjp_1856_;
}
else
{
lean_inc(v_a_1855_);
lean_dec(v___x_1854_);
v___x_1857_ = lean_box(0);
v_isShared_1858_ = v_isSharedCheck_1863_;
goto v_resetjp_1856_;
}
v_resetjp_1856_:
{
lean_object* v___x_1859_; lean_object* v___x_1861_; 
v___x_1859_ = l___private_Lean_Meta_Tactic_Grind_Arith_ModelUtil_0__Lean_Meta_Grind_Arith_sortModel(v_goal_1840_, v_a_1855_);
if (v_isShared_1858_ == 0)
{
lean_ctor_set(v___x_1857_, 0, v___x_1859_);
v___x_1861_ = v___x_1857_;
goto v_reusejp_1860_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1859_);
v___x_1861_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1860_;
}
v_reusejp_1860_:
{
return v___x_1861_;
}
}
}
else
{
return v___x_1854_;
}
}
else
{
lean_object* v_a_1864_; lean_object* v___x_1866_; uint8_t v_isShared_1867_; uint8_t v_isSharedCheck_1871_; 
v_a_1864_ = lean_ctor_get(v___x_1848_, 0);
v_isSharedCheck_1871_ = !lean_is_exclusive(v___x_1848_);
if (v_isSharedCheck_1871_ == 0)
{
v___x_1866_ = v___x_1848_;
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
else
{
lean_inc(v_a_1864_);
lean_dec(v___x_1848_);
v___x_1866_ = lean_box(0);
v_isShared_1867_ = v_isSharedCheck_1871_;
goto v_resetjp_1865_;
}
v_resetjp_1865_:
{
lean_object* v___x_1869_; 
if (v_isShared_1867_ == 0)
{
v___x_1869_ = v___x_1866_;
goto v_reusejp_1868_;
}
else
{
lean_object* v_reuseFailAlloc_1870_; 
v_reuseFailAlloc_1870_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1870_, 0, v_a_1864_);
v___x_1869_ = v_reuseFailAlloc_1870_;
goto v_reusejp_1868_;
}
v_reusejp_1868_:
{
return v___x_1869_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_finalizeModel___boxed(lean_object* v_goal_1872_, lean_object* v_isTarget_1873_, lean_object* v_model_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_, lean_object* v_a_1879_){
_start:
{
lean_object* v_res_1880_; 
v_res_1880_ = l_Lean_Meta_Grind_Arith_finalizeModel(v_goal_1872_, v_isTarget_1873_, v_model_1874_, v_a_1875_, v_a_1876_, v_a_1877_, v_a_1878_);
lean_dec(v_a_1878_);
lean_dec_ref(v_a_1877_);
lean_dec(v_a_1876_);
lean_dec_ref(v_a_1875_);
lean_dec_ref(v_goal_1872_);
return v_res_1880_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0(lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v___y_1883_, lean_object* v___y_1884_, lean_object* v___y_1885_, lean_object* v___y_1886_){
_start:
{
lean_object* v___x_1888_; 
v___x_1888_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___redArg(v_a_1881_, v_a_1882_);
return v___x_1888_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0___boxed(lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v___y_1891_, lean_object* v___y_1892_, lean_object* v___y_1893_, lean_object* v___y_1894_, lean_object* v___y_1895_){
_start:
{
lean_object* v_res_1896_; 
v_res_1896_ = l___private_Std_Data_DHashMap_Internal_AssocList_Basic_0__Std_DHashMap_Internal_AssocList_forInStep_go___at___00Lean_Meta_Grind_Arith_finalizeModel_spec__0(v_a_1889_, v_a_1890_, v___y_1891_, v___y_1892_, v___y_1893_, v___y_1894_);
lean_dec(v___y_1894_);
lean_dec_ref(v___y_1893_);
lean_dec(v___y_1892_);
lean_dec_ref(v___y_1891_);
lean_dec(v_a_1889_);
return v_res_1896_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(lean_object* v_msgData_1897_, lean_object* v___y_1898_, lean_object* v___y_1899_, lean_object* v___y_1900_, lean_object* v___y_1901_){
_start:
{
lean_object* v___x_1903_; lean_object* v_env_1904_; uint8_t v___x_1905_; lean_object* v_env_1906_; lean_object* v___x_1907_; lean_object* v_toCold_1908_; lean_object* v_mctx_1909_; lean_object* v_lctx_1910_; lean_object* v_options_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; 
v___x_1903_ = lean_st_ref_get(v___y_1901_);
v_env_1904_ = lean_ctor_get(v___x_1903_, 0);
lean_inc_ref(v_env_1904_);
lean_dec(v___x_1903_);
v___x_1905_ = 0;
v_env_1906_ = l_Lean_Environment_setRecordingDeps(v_env_1904_, v___x_1905_);
v___x_1907_ = lean_st_ref_get(v___y_1899_);
v_toCold_1908_ = lean_ctor_get(v___y_1900_, 0);
v_mctx_1909_ = lean_ctor_get(v___x_1907_, 0);
lean_inc_ref(v_mctx_1909_);
lean_dec(v___x_1907_);
v_lctx_1910_ = lean_ctor_get(v___y_1898_, 2);
v_options_1911_ = lean_ctor_get(v_toCold_1908_, 2);
lean_inc_ref(v_options_1911_);
lean_inc_ref(v_lctx_1910_);
v___x_1912_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1912_, 0, v_env_1906_);
lean_ctor_set(v___x_1912_, 1, v_mctx_1909_);
lean_ctor_set(v___x_1912_, 2, v_lctx_1910_);
lean_ctor_set(v___x_1912_, 3, v_options_1911_);
v___x_1913_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_1913_, 0, v___x_1912_);
lean_ctor_set(v___x_1913_, 1, v_msgData_1897_);
v___x_1914_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1914_, 0, v___x_1913_);
return v___x_1914_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0___boxed(lean_object* v_msgData_1915_, lean_object* v___y_1916_, lean_object* v___y_1917_, lean_object* v___y_1918_, lean_object* v___y_1919_, lean_object* v___y_1920_){
_start:
{
lean_object* v_res_1921_; 
v_res_1921_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(v_msgData_1915_, v___y_1916_, v___y_1917_, v___y_1918_, v___y_1919_);
lean_dec(v___y_1919_);
lean_dec_ref(v___y_1918_);
lean_dec(v___y_1917_);
lean_dec_ref(v___y_1916_);
return v_res_1921_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0(void){
_start:
{
lean_object* v___x_1922_; double v___x_1923_; 
v___x_1922_ = lean_unsigned_to_nat(0u);
v___x_1923_ = lean_float_of_nat(v___x_1922_);
return v___x_1923_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(lean_object* v_cls_1927_, lean_object* v_msg_1928_, lean_object* v___y_1929_, lean_object* v___y_1930_, lean_object* v___y_1931_, lean_object* v___y_1932_){
_start:
{
lean_object* v_ref_1934_; lean_object* v___x_1935_; lean_object* v_a_1936_; lean_object* v___x_1938_; uint8_t v_isShared_1939_; uint8_t v_isSharedCheck_1981_; 
v_ref_1934_ = lean_ctor_get(v___y_1931_, 2);
v___x_1935_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0_spec__0(v_msg_1928_, v___y_1929_, v___y_1930_, v___y_1931_, v___y_1932_);
v_a_1936_ = lean_ctor_get(v___x_1935_, 0);
v_isSharedCheck_1981_ = !lean_is_exclusive(v___x_1935_);
if (v_isSharedCheck_1981_ == 0)
{
v___x_1938_ = v___x_1935_;
v_isShared_1939_ = v_isSharedCheck_1981_;
goto v_resetjp_1937_;
}
else
{
lean_inc(v_a_1936_);
lean_dec(v___x_1935_);
v___x_1938_ = lean_box(0);
v_isShared_1939_ = v_isSharedCheck_1981_;
goto v_resetjp_1937_;
}
v_resetjp_1937_:
{
lean_object* v___x_1940_; lean_object* v_traceState_1941_; lean_object* v_env_1942_; lean_object* v_nextMacroScope_1943_; lean_object* v_ngen_1944_; lean_object* v_auxDeclNGen_1945_; lean_object* v_cache_1946_; lean_object* v_recordedDeps_1947_; lean_object* v_messages_1948_; lean_object* v_infoState_1949_; lean_object* v_snapshotTasks_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1980_; 
v___x_1940_ = lean_st_ref_take(v___y_1932_);
v_traceState_1941_ = lean_ctor_get(v___x_1940_, 4);
v_env_1942_ = lean_ctor_get(v___x_1940_, 0);
v_nextMacroScope_1943_ = lean_ctor_get(v___x_1940_, 1);
v_ngen_1944_ = lean_ctor_get(v___x_1940_, 2);
v_auxDeclNGen_1945_ = lean_ctor_get(v___x_1940_, 3);
v_cache_1946_ = lean_ctor_get(v___x_1940_, 5);
v_recordedDeps_1947_ = lean_ctor_get(v___x_1940_, 6);
v_messages_1948_ = lean_ctor_get(v___x_1940_, 7);
v_infoState_1949_ = lean_ctor_get(v___x_1940_, 8);
v_snapshotTasks_1950_ = lean_ctor_get(v___x_1940_, 9);
v_isSharedCheck_1980_ = !lean_is_exclusive(v___x_1940_);
if (v_isSharedCheck_1980_ == 0)
{
v___x_1952_ = v___x_1940_;
v_isShared_1953_ = v_isSharedCheck_1980_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_snapshotTasks_1950_);
lean_inc(v_infoState_1949_);
lean_inc(v_messages_1948_);
lean_inc(v_recordedDeps_1947_);
lean_inc(v_cache_1946_);
lean_inc(v_traceState_1941_);
lean_inc(v_auxDeclNGen_1945_);
lean_inc(v_ngen_1944_);
lean_inc(v_nextMacroScope_1943_);
lean_inc(v_env_1942_);
lean_dec(v___x_1940_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1980_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
uint64_t v_tid_1954_; lean_object* v_traces_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1979_; 
v_tid_1954_ = lean_ctor_get_uint64(v_traceState_1941_, sizeof(void*)*1);
v_traces_1955_ = lean_ctor_get(v_traceState_1941_, 0);
v_isSharedCheck_1979_ = !lean_is_exclusive(v_traceState_1941_);
if (v_isSharedCheck_1979_ == 0)
{
v___x_1957_ = v_traceState_1941_;
v_isShared_1958_ = v_isSharedCheck_1979_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_traces_1955_);
lean_dec(v_traceState_1941_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1979_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; double v___x_1961_; uint8_t v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1970_; 
v___x_1959_ = lean_box(0);
v___x_1960_ = lean_box(0);
v___x_1961_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0, &l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__0);
v___x_1962_ = 0;
v___x_1963_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__1));
v___x_1964_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_1964_, 0, v_cls_1927_);
lean_ctor_set(v___x_1964_, 1, v___x_1960_);
lean_ctor_set(v___x_1964_, 2, v___x_1963_);
lean_ctor_set_float(v___x_1964_, sizeof(void*)*3, v___x_1961_);
lean_ctor_set_float(v___x_1964_, sizeof(void*)*3 + 8, v___x_1961_);
lean_ctor_set_uint8(v___x_1964_, sizeof(void*)*3 + 16, v___x_1962_);
v___x_1965_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___closed__2));
v___x_1966_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1966_, 0, v___x_1964_);
lean_ctor_set(v___x_1966_, 1, v_a_1936_);
lean_ctor_set(v___x_1966_, 2, v___x_1965_);
lean_inc(v_ref_1934_);
v___x_1967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1967_, 0, v_ref_1934_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
v___x_1968_ = l_Lean_PersistentArray_push___redArg(v_traces_1955_, v___x_1967_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 0, v___x_1968_);
v___x_1970_ = v___x_1957_;
goto v_reusejp_1969_;
}
else
{
lean_object* v_reuseFailAlloc_1978_; 
v_reuseFailAlloc_1978_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_1978_, 0, v___x_1968_);
lean_ctor_set_uint64(v_reuseFailAlloc_1978_, sizeof(void*)*1, v_tid_1954_);
v___x_1970_ = v_reuseFailAlloc_1978_;
goto v_reusejp_1969_;
}
v_reusejp_1969_:
{
lean_object* v___x_1972_; 
if (v_isShared_1953_ == 0)
{
lean_ctor_set(v___x_1952_, 4, v___x_1970_);
v___x_1972_ = v___x_1952_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1977_; 
v_reuseFailAlloc_1977_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1977_, 0, v_env_1942_);
lean_ctor_set(v_reuseFailAlloc_1977_, 1, v_nextMacroScope_1943_);
lean_ctor_set(v_reuseFailAlloc_1977_, 2, v_ngen_1944_);
lean_ctor_set(v_reuseFailAlloc_1977_, 3, v_auxDeclNGen_1945_);
lean_ctor_set(v_reuseFailAlloc_1977_, 4, v___x_1970_);
lean_ctor_set(v_reuseFailAlloc_1977_, 5, v_cache_1946_);
lean_ctor_set(v_reuseFailAlloc_1977_, 6, v_recordedDeps_1947_);
lean_ctor_set(v_reuseFailAlloc_1977_, 7, v_messages_1948_);
lean_ctor_set(v_reuseFailAlloc_1977_, 8, v_infoState_1949_);
lean_ctor_set(v_reuseFailAlloc_1977_, 9, v_snapshotTasks_1950_);
v___x_1972_ = v_reuseFailAlloc_1977_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1973_; lean_object* v___x_1975_; 
v___x_1973_ = lean_st_ref_put(v___y_1932_, v___x_1972_);
if (v_isShared_1939_ == 0)
{
lean_ctor_set(v___x_1938_, 0, v___x_1959_);
v___x_1975_ = v___x_1938_;
goto v_reusejp_1974_;
}
else
{
lean_object* v_reuseFailAlloc_1976_; 
v_reuseFailAlloc_1976_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1976_, 0, v___x_1959_);
v___x_1975_ = v_reuseFailAlloc_1976_;
goto v_reusejp_1974_;
}
v_reusejp_1974_:
{
return v___x_1975_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0___boxed(lean_object* v_cls_1982_, lean_object* v_msg_1983_, lean_object* v___y_1984_, lean_object* v___y_1985_, lean_object* v___y_1986_, lean_object* v___y_1987_, lean_object* v___y_1988_){
_start:
{
lean_object* v_res_1989_; 
v_res_1989_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(v_cls_1982_, v_msg_1983_, v___y_1984_, v___y_1985_, v___y_1986_, v___y_1987_);
lean_dec(v___y_1987_);
lean_dec_ref(v___y_1986_);
lean_dec(v___y_1985_);
lean_dec_ref(v___y_1984_);
return v_res_1989_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1(void){
_start:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; 
v___x_1991_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__0));
v___x_1992_ = l_Lean_stringToMessageData(v___x_1991_);
return v___x_1992_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(lean_object* v_traceClass_1994_, lean_object* v_as_1995_, size_t v_sz_1996_, size_t v_i_1997_, lean_object* v_b_1998_, lean_object* v___y_1999_, lean_object* v___y_2000_, lean_object* v___y_2001_, lean_object* v___y_2002_){
_start:
{
uint8_t v___x_2004_; 
v___x_2004_ = lean_usize_dec_lt(v_i_1997_, v_sz_1996_);
if (v___x_2004_ == 0)
{
lean_object* v___x_2005_; 
lean_dec(v_traceClass_1994_);
v___x_2005_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2005_, 0, v_b_1998_);
return v___x_2005_;
}
else
{
lean_object* v_a_2006_; lean_object* v_snd_2007_; lean_object* v_fst_2008_; lean_object* v___x_2010_; uint8_t v_isShared_2011_; uint8_t v_isSharedCheck_2043_; 
v_a_2006_ = lean_array_uget(v_as_1995_, v_i_1997_);
v_snd_2007_ = lean_ctor_get(v_a_2006_, 1);
v_fst_2008_ = lean_ctor_get(v_a_2006_, 0);
v_isSharedCheck_2043_ = !lean_is_exclusive(v_a_2006_);
if (v_isSharedCheck_2043_ == 0)
{
v___x_2010_ = v_a_2006_;
v_isShared_2011_ = v_isSharedCheck_2043_;
goto v_resetjp_2009_;
}
else
{
lean_inc(v_snd_2007_);
lean_inc(v_fst_2008_);
lean_dec(v_a_2006_);
v___x_2010_ = lean_box(0);
v_isShared_2011_ = v_isSharedCheck_2043_;
goto v_resetjp_2009_;
}
v_resetjp_2009_:
{
lean_object* v_num_2012_; lean_object* v_den_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2042_; 
v_num_2012_ = lean_ctor_get(v_snd_2007_, 0);
v_den_2013_ = lean_ctor_get(v_snd_2007_, 1);
v_isSharedCheck_2042_ = !lean_is_exclusive(v_snd_2007_);
if (v_isSharedCheck_2042_ == 0)
{
v___x_2015_ = v_snd_2007_;
v_isShared_2016_ = v_isSharedCheck_2042_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_den_2013_);
lean_inc(v_num_2012_);
lean_dec(v_snd_2007_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2042_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2021_; 
v___x_2017_ = lean_box(0);
v___x_2018_ = l_Lean_Meta_Grind_Arith_quoteIfArithTerm(v_fst_2008_);
v___x_2019_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__1);
if (v_isShared_2016_ == 0)
{
lean_ctor_set_tag(v___x_2015_, 7);
lean_ctor_set(v___x_2015_, 1, v___x_2019_);
lean_ctor_set(v___x_2015_, 0, v___x_2018_);
v___x_2021_ = v___x_2015_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2041_; 
v_reuseFailAlloc_2041_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2041_, 0, v___x_2018_);
lean_ctor_set(v_reuseFailAlloc_2041_, 1, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2041_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___y_2023_; lean_object* v___x_2033_; uint8_t v___x_2034_; 
v___x_2033_ = lean_unsigned_to_nat(1u);
v___x_2034_ = lean_nat_dec_eq(v_den_2013_, v___x_2033_);
if (v___x_2034_ == 0)
{
lean_object* v___x_2035_; lean_object* v___x_2036_; lean_object* v___x_2037_; lean_object* v___x_2038_; lean_object* v___x_2039_; 
v___x_2035_ = l_Int_repr(v_num_2012_);
lean_dec(v_num_2012_);
v___x_2036_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___closed__2));
v___x_2037_ = lean_string_append(v___x_2035_, v___x_2036_);
v___x_2038_ = l_Nat_reprFast(v_den_2013_);
v___x_2039_ = lean_string_append(v___x_2037_, v___x_2038_);
lean_dec_ref(v___x_2038_);
v___y_2023_ = v___x_2039_;
goto v___jp_2022_;
}
else
{
lean_object* v___x_2040_; 
lean_dec(v_den_2013_);
v___x_2040_ = l_Int_repr(v_num_2012_);
lean_dec(v_num_2012_);
v___y_2023_ = v___x_2040_;
goto v___jp_2022_;
}
v___jp_2022_:
{
lean_object* v___x_2024_; lean_object* v___x_2025_; lean_object* v___x_2027_; 
v___x_2024_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2024_, 0, v___y_2023_);
v___x_2025_ = l_Lean_MessageData_ofFormat(v___x_2024_);
if (v_isShared_2011_ == 0)
{
lean_ctor_set_tag(v___x_2010_, 7);
lean_ctor_set(v___x_2010_, 1, v___x_2025_);
lean_ctor_set(v___x_2010_, 0, v___x_2021_);
v___x_2027_ = v___x_2010_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2032_; 
v_reuseFailAlloc_2032_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2032_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2032_, 1, v___x_2025_);
v___x_2027_ = v_reuseFailAlloc_2032_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
lean_object* v___x_2028_; 
lean_inc(v_traceClass_1994_);
v___x_2028_ = l_Lean_addTrace___at___00Lean_Meta_Grind_Arith_traceModel_spec__0(v_traceClass_1994_, v___x_2027_, v___y_1999_, v___y_2000_, v___y_2001_, v___y_2002_);
if (lean_obj_tag(v___x_2028_) == 0)
{
size_t v___x_2029_; size_t v___x_2030_; 
lean_dec_ref_known(v___x_2028_, 1);
v___x_2029_ = ((size_t)1ULL);
v___x_2030_ = lean_usize_add(v_i_1997_, v___x_2029_);
v_i_1997_ = v___x_2030_;
v_b_1998_ = v___x_2017_;
goto _start;
}
else
{
lean_dec(v_traceClass_1994_);
return v___x_2028_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1___boxed(lean_object* v_traceClass_2044_, lean_object* v_as_2045_, lean_object* v_sz_2046_, lean_object* v_i_2047_, lean_object* v_b_2048_, lean_object* v___y_2049_, lean_object* v___y_2050_, lean_object* v___y_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_){
_start:
{
size_t v_sz_boxed_2054_; size_t v_i_boxed_2055_; lean_object* v_res_2056_; 
v_sz_boxed_2054_ = lean_unbox_usize(v_sz_2046_);
lean_dec(v_sz_2046_);
v_i_boxed_2055_ = lean_unbox_usize(v_i_2047_);
lean_dec(v_i_2047_);
v_res_2056_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(v_traceClass_2044_, v_as_2045_, v_sz_boxed_2054_, v_i_boxed_2055_, v_b_2048_, v___y_2049_, v___y_2050_, v___y_2051_, v___y_2052_);
lean_dec(v___y_2052_);
lean_dec_ref(v___y_2051_);
lean_dec(v___y_2050_);
lean_dec_ref(v___y_2049_);
lean_dec_ref(v_as_2045_);
return v_res_2056_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel(lean_object* v_traceClass_2060_, lean_object* v_model_2061_, lean_object* v_a_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_){
_start:
{
lean_object* v_toCold_2070_; lean_object* v_options_2071_; uint8_t v_hasTrace_2072_; 
v_toCold_2070_ = lean_ctor_get(v_a_2064_, 0);
v_options_2071_ = lean_ctor_get(v_toCold_2070_, 2);
v_hasTrace_2072_ = lean_ctor_get_uint8(v_options_2071_, sizeof(void*)*1);
if (v_hasTrace_2072_ == 0)
{
lean_dec(v_traceClass_2060_);
goto v___jp_2067_;
}
else
{
lean_object* v_inheritedTraceOptions_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; uint8_t v___x_2076_; 
v_inheritedTraceOptions_2073_ = lean_ctor_get(v_toCold_2070_, 11);
v___x_2074_ = ((lean_object*)(l_Lean_Meta_Grind_Arith_traceModel___closed__1));
lean_inc(v_traceClass_2060_);
v___x_2075_ = l_Lean_Name_append(v___x_2074_, v_traceClass_2060_);
v___x_2076_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2073_, v_options_2071_, v___x_2075_);
lean_dec(v___x_2075_);
if (v___x_2076_ == 0)
{
lean_dec(v_traceClass_2060_);
goto v___jp_2067_;
}
else
{
lean_object* v___x_2077_; size_t v_sz_2078_; size_t v___x_2079_; lean_object* v___x_2080_; 
v___x_2077_ = lean_box(0);
v_sz_2078_ = lean_array_size(v_model_2061_);
v___x_2079_ = ((size_t)0ULL);
v___x_2080_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_Grind_Arith_traceModel_spec__1(v_traceClass_2060_, v_model_2061_, v_sz_2078_, v___x_2079_, v___x_2077_, v_a_2062_, v_a_2063_, v_a_2064_, v_a_2065_);
if (lean_obj_tag(v___x_2080_) == 0)
{
lean_object* v___x_2082_; uint8_t v_isShared_2083_; uint8_t v_isSharedCheck_2087_; 
v_isSharedCheck_2087_ = !lean_is_exclusive(v___x_2080_);
if (v_isSharedCheck_2087_ == 0)
{
lean_object* v_unused_2088_; 
v_unused_2088_ = lean_ctor_get(v___x_2080_, 0);
lean_dec(v_unused_2088_);
v___x_2082_ = v___x_2080_;
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
else
{
lean_dec(v___x_2080_);
v___x_2082_ = lean_box(0);
v_isShared_2083_ = v_isSharedCheck_2087_;
goto v_resetjp_2081_;
}
v_resetjp_2081_:
{
lean_object* v___x_2085_; 
if (v_isShared_2083_ == 0)
{
lean_ctor_set(v___x_2082_, 0, v___x_2077_);
v___x_2085_ = v___x_2082_;
goto v_reusejp_2084_;
}
else
{
lean_object* v_reuseFailAlloc_2086_; 
v_reuseFailAlloc_2086_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2086_, 0, v___x_2077_);
v___x_2085_ = v_reuseFailAlloc_2086_;
goto v_reusejp_2084_;
}
v_reusejp_2084_:
{
return v___x_2085_;
}
}
}
else
{
return v___x_2080_;
}
}
}
v___jp_2067_:
{
lean_object* v___x_2068_; lean_object* v___x_2069_; 
v___x_2068_ = lean_box(0);
v___x_2069_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2069_, 0, v___x_2068_);
return v___x_2069_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_Arith_traceModel___boxed(lean_object* v_traceClass_2089_, lean_object* v_model_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_, lean_object* v_a_2094_, lean_object* v_a_2095_){
_start:
{
lean_object* v_res_2096_; 
v_res_2096_ = l_Lean_Meta_Grind_Arith_traceModel(v_traceClass_2089_, v_model_2090_, v_a_2091_, v_a_2092_, v_a_2093_, v_a_2094_);
lean_dec(v_a_2094_);
lean_dec_ref(v_a_2093_);
lean_dec(v_a_2092_);
lean_dec_ref(v_a_2091_);
lean_dec_ref(v_model_2090_);
return v_res_2096_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* runtime_initialize_Init_Grind_Module_Envelope(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_Util(uint8_t builtin);
lean_object* initialize_Init_Grind_Module_Envelope(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Tactic_Grind_Arith_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Grind_Module_Envelope(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_Arith_ModelUtil(builtin);
}
#ifdef __cplusplus
}
#endif
