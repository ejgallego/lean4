// Lean compiler output
// Module: Lean.Meta.AbstractNestedProofs
// Imports: public import Init.Grind.Util public import Lean.Meta.Closure public import Lean.Meta.Transform
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
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Expr_isAtomic(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
uint64_t l_Lean_ExprStructEq_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Lean_Meta_inferType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_hasSorry(lean_object*);
lean_object* l_Lean_Meta_zetaReduce___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_betaReduce(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_withoutExporting___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
uint8_t l_Lean_ExprStructEq_beq(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
uint64_t l_Lean_instHashableFVarId_hash(lean_object*);
size_t lean_usize_mul(size_t, size_t);
size_t lean_usize_shift_right(size_t, size_t);
lean_object* lean_usize_to_nat(size_t);
uint8_t l_Lean_instBEqFVarId_beq(lean_object*, lean_object*);
lean_object* l_Lean_PersistentHashMap_mkCollisionNode___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lean_usize_dec_le(size_t, size_t);
lean_object* l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(lean_object*);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_header(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
lean_object* l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_PersistentArray_set___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* l_Lean_Expr_fvarId_x21(lean_object*);
lean_object* lean_local_ctx_find(lean_object*, lean_object*);
lean_object* l_Lean_FVarId_getDecl___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_type(lean_object*);
lean_object* l_Lean_LocalDecl_setType(lean_object*, lean_object*);
lean_object* l_Lean_LocalDecl_value_x3f(lean_object*, uint8_t);
lean_object* l_Lean_LocalDecl_setValue(lean_object*, lean_object*);
lean_object* l_Lean_Core_checkSystem(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_isProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_Expr_sort___override(lean_object*);
lean_object* l_Lean_Expr_getAppNumArgs(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Environment_contains(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_Meta_mkForallFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_ptr_addr(lean_object*);
lean_object* l_Lean_Expr_mdata___override(lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_mkAppN(lean_object*, lean_object*);
lean_object* l_Lean_Meta_zetaReduce(lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAuxTheorem(lean_object*, lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(uint8_t, uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___redArg(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0_value;
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1_value;
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "nestedProof"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2_value;
static const lean_ctor_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(116, 4, 170, 185, 29, 24, 60, 188)}};
static const lean_ctor_object l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__2_value),LEAN_SCALAR_PTR_LITERAL(182, 140, 29, 19, 223, 104, 218, 25)}};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3_value;
static lean_once_cell_t l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4;
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0;
static lean_once_cell_t l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__1;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg();
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__3;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__4;
static lean_once_cell_t l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1(uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3___redArg();
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7(lean_object*, lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4_spec__11___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4___redArg(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___redArg(size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___redArg(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___lam__0(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(lean_object*, uint8_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(lean_object*, size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_AbstractNestedProofs_visit___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "abstract nested proofs"};
static const lean_object* l_Lean_Meta_AbstractNestedProofs_visit___closed__0 = (const lean_object*)&l_Lean_Meta_AbstractNestedProofs_visit___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1(size_t, size_t, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2(uint8_t, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5(lean_object*, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4_spec__11(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Meta_abstractNestedProofs___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractNestedProofs___closed__0;
static lean_once_cell_t l_Lean_Meta_abstractNestedProofs___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_abstractNestedProofs___closed__1;
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0(lean_object* v_proof_1_, uint8_t v___x_2_, lean_object* v_inst_3_, uint8_t v_cache_4_, lean_object* v_type_5_){
_start:
{
uint8_t v___y_7_; 
if (v_cache_4_ == 0)
{
v___y_7_ = v_cache_4_;
goto v___jp_6_;
}
else
{
uint8_t v___x_13_; 
v___x_13_ = l_Lean_Expr_hasSorry(v_proof_1_);
if (v___x_13_ == 0)
{
v___y_7_ = v_cache_4_;
goto v___jp_6_;
}
else
{
uint8_t v___x_14_; 
v___x_14_ = 0;
v___y_7_ = v___x_14_;
goto v___jp_6_;
}
}
v___jp_6_:
{
lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_8_ = lean_box(0);
v___x_9_ = lean_box(v___x_2_);
v___x_10_ = lean_box(v___y_7_);
v___x_11_ = lean_alloc_closure((void*)(l_Lean_Meta_mkAuxTheorem___boxed), 10, 5);
lean_closure_set(v___x_11_, 0, v_type_5_);
lean_closure_set(v___x_11_, 1, v_proof_1_);
lean_closure_set(v___x_11_, 2, v___x_9_);
lean_closure_set(v___x_11_, 3, v___x_8_);
lean_closure_set(v___x_11_, 4, v___x_10_);
v___x_12_ = lean_apply_2(v_inst_3_, lean_box(0), v___x_11_);
return v___x_12_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__0___boxed(lean_object* v_proof_15_, lean_object* v___x_16_, lean_object* v_inst_17_, lean_object* v_cache_18_, lean_object* v_type_19_){
_start:
{
uint8_t v___x_151__boxed_20_; uint8_t v_cache_boxed_21_; lean_object* v_res_22_; 
v___x_151__boxed_20_ = lean_unbox(v___x_16_);
v_cache_boxed_21_ = lean_unbox(v_cache_18_);
v_res_22_ = l_Lean_Meta_abstractProof___redArg___lam__0(v_proof_15_, v___x_151__boxed_20_, v_inst_17_, v_cache_boxed_21_, v_type_19_);
return v_res_22_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__1(lean_object* v_postprocessType_23_, lean_object* v_toBind_24_, lean_object* v___f_25_, lean_object* v_type_26_){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_apply_1(v_postprocessType_23_, v_type_26_);
v___x_28_ = lean_apply_4(v_toBind_24_, lean_box(0), lean_box(0), v___x_27_, v___f_25_);
return v___x_28_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2(uint8_t v___x_29_, lean_object* v_inst_30_, lean_object* v_toBind_31_, lean_object* v___f_32_, lean_object* v_type_33_){
_start:
{
lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; 
v___x_34_ = lean_box(v___x_29_);
v___x_35_ = lean_box(v___x_29_);
v___x_36_ = lean_box(v___x_29_);
v___x_37_ = lean_alloc_closure((void*)(l_Lean_Meta_zetaReduce___boxed), 9, 4);
lean_closure_set(v___x_37_, 0, v_type_33_);
lean_closure_set(v___x_37_, 1, v___x_34_);
lean_closure_set(v___x_37_, 2, v___x_35_);
lean_closure_set(v___x_37_, 3, v___x_36_);
v___x_38_ = lean_apply_2(v_inst_30_, lean_box(0), v___x_37_);
v___x_39_ = lean_apply_4(v_toBind_31_, lean_box(0), lean_box(0), v___x_38_, v___f_32_);
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__2___boxed(lean_object* v___x_40_, lean_object* v_inst_41_, lean_object* v_toBind_42_, lean_object* v___f_43_, lean_object* v_type_44_){
_start:
{
uint8_t v___x_181__boxed_45_; lean_object* v_res_46_; 
v___x_181__boxed_45_ = lean_unbox(v___x_40_);
v_res_46_ = l_Lean_Meta_abstractProof___redArg___lam__2(v___x_181__boxed_45_, v_inst_41_, v_toBind_42_, v___f_43_, v_type_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3(lean_object* v_type_47_, lean_object* v___y_48_, lean_object* v___y_49_, lean_object* v___y_50_, lean_object* v___y_51_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = l_Lean_Core_betaReduce(v_type_47_, v___y_50_, v___y_51_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__3___boxed(lean_object* v_type_54_, lean_object* v___y_55_, lean_object* v___y_56_, lean_object* v___y_57_, lean_object* v___y_58_, lean_object* v___y_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l_Lean_Meta_abstractProof___redArg___lam__3(v_type_54_, v___y_55_, v___y_56_, v___y_57_, v___y_58_);
lean_dec(v___y_58_);
lean_dec_ref(v___y_57_);
lean_dec(v___y_56_);
lean_dec_ref(v___y_55_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___lam__4(lean_object* v_inst_61_, lean_object* v_toBind_62_, lean_object* v___f_63_, lean_object* v_type_64_){
_start:
{
lean_object* v___f_65_; lean_object* v___x_66_; lean_object* v___x_67_; 
v___f_65_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__3___boxed), 6, 1);
lean_closure_set(v___f_65_, 0, v_type_64_);
v___x_66_ = lean_apply_2(v_inst_61_, lean_box(0), v___f_65_);
v___x_67_ = lean_apply_4(v_toBind_62_, lean_box(0), lean_box(0), v___x_66_, v___f_63_);
return v___x_67_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg(lean_object* v_inst_68_, lean_object* v_inst_69_, lean_object* v_inst_70_, lean_object* v_inst_71_, lean_object* v_proof_72_, uint8_t v_cache_73_, lean_object* v_postprocessType_74_){
_start:
{
lean_object* v_toBind_75_; lean_object* v___x_76_; lean_object* v___x_77_; uint8_t v___x_78_; lean_object* v___x_79_; lean_object* v___x_80_; lean_object* v___f_81_; lean_object* v___f_82_; lean_object* v___x_83_; lean_object* v___f_84_; lean_object* v___f_85_; lean_object* v___x_86_; lean_object* v___x_87_; 
v_toBind_75_ = lean_ctor_get(v_inst_68_, 1);
lean_inc_n(v_toBind_75_, 4);
lean_inc_ref(v_proof_72_);
v___x_76_ = lean_alloc_closure((void*)(l_Lean_Meta_inferType___boxed), 6, 1);
lean_closure_set(v___x_76_, 0, v_proof_72_);
lean_inc_n(v_inst_69_, 3);
v___x_77_ = lean_apply_2(v_inst_69_, lean_box(0), v___x_76_);
v___x_78_ = 1;
v___x_79_ = lean_box(v___x_78_);
v___x_80_ = lean_box(v_cache_73_);
v___f_81_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__0___boxed), 5, 4);
lean_closure_set(v___f_81_, 0, v_proof_72_);
lean_closure_set(v___f_81_, 1, v___x_79_);
lean_closure_set(v___f_81_, 2, v_inst_69_);
lean_closure_set(v___f_81_, 3, v___x_80_);
v___f_82_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__1), 4, 3);
lean_closure_set(v___f_82_, 0, v_postprocessType_74_);
lean_closure_set(v___f_82_, 1, v_toBind_75_);
lean_closure_set(v___f_82_, 2, v___f_81_);
v___x_83_ = lean_box(v___x_78_);
v___f_84_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__2___boxed), 5, 4);
lean_closure_set(v___f_84_, 0, v___x_83_);
lean_closure_set(v___f_84_, 1, v_inst_69_);
lean_closure_set(v___f_84_, 2, v_toBind_75_);
lean_closure_set(v___f_84_, 3, v___f_82_);
v___f_85_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___redArg___lam__4), 4, 3);
lean_closure_set(v___f_85_, 0, v_inst_69_);
lean_closure_set(v___f_85_, 1, v_toBind_75_);
lean_closure_set(v___f_85_, 2, v___f_84_);
v___x_86_ = l_Lean_withoutExporting___redArg(v_inst_68_, v_inst_70_, v_inst_71_, v___x_77_, v___x_78_);
v___x_87_ = lean_apply_4(v_toBind_75_, lean_box(0), lean_box(0), v___x_86_, v___f_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___redArg___boxed(lean_object* v_inst_88_, lean_object* v_inst_89_, lean_object* v_inst_90_, lean_object* v_inst_91_, lean_object* v_proof_92_, lean_object* v_cache_93_, lean_object* v_postprocessType_94_){
_start:
{
uint8_t v_cache_boxed_95_; lean_object* v_res_96_; 
v_cache_boxed_95_ = lean_unbox(v_cache_93_);
v_res_96_ = l_Lean_Meta_abstractProof___redArg(v_inst_88_, v_inst_89_, v_inst_90_, v_inst_91_, v_proof_92_, v_cache_boxed_95_, v_postprocessType_94_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof(lean_object* v_m_97_, lean_object* v_inst_98_, lean_object* v_inst_99_, lean_object* v_inst_100_, lean_object* v_inst_101_, lean_object* v_inst_102_, lean_object* v_proof_103_, uint8_t v_cache_104_, lean_object* v_postprocessType_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = l_Lean_Meta_abstractProof___redArg(v_inst_98_, v_inst_99_, v_inst_100_, v_inst_102_, v_proof_103_, v_cache_104_, v_postprocessType_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___boxed(lean_object* v_m_107_, lean_object* v_inst_108_, lean_object* v_inst_109_, lean_object* v_inst_110_, lean_object* v_inst_111_, lean_object* v_inst_112_, lean_object* v_proof_113_, lean_object* v_cache_114_, lean_object* v_postprocessType_115_){
_start:
{
uint8_t v_cache_boxed_116_; lean_object* v_res_117_; 
v_cache_boxed_116_ = lean_unbox(v_cache_114_);
v_res_117_ = l_Lean_Meta_abstractProof(v_m_107_, v_inst_108_, v_inst_109_, v_inst_110_, v_inst_111_, v_inst_112_, v_proof_113_, v_cache_boxed_116_, v_postprocessType_115_);
lean_dec_ref(v_inst_111_);
return v_res_117_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody(lean_object* v_e_118_){
_start:
{
if (lean_obj_tag(v_e_118_) == 6)
{
lean_object* v_body_119_; 
v_body_119_ = lean_ctor_get(v_e_118_, 2);
v_e_118_ = v_body_119_;
goto _start;
}
else
{
lean_inc_ref(v_e_118_);
return v_e_118_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_getLambdaBody___boxed(lean_object* v_e_121_){
_start:
{
lean_object* v_res_122_; 
v_res_122_ = l_Lean_Meta_AbstractNestedProofs_getLambdaBody(v_e_121_);
lean_dec_ref(v_e_121_);
return v_res_122_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(uint8_t v_a_123_, uint8_t v___y_124_, lean_object* v_as_125_, size_t v_i_126_, size_t v_stop_127_){
_start:
{
uint8_t v___y_129_; uint8_t v___x_133_; 
v___x_133_ = lean_usize_dec_eq(v_i_126_, v_stop_127_);
if (v___x_133_ == 0)
{
lean_object* v___x_134_; uint8_t v___x_135_; 
v___x_134_ = lean_array_uget_borrowed(v_as_125_, v_i_126_);
v___x_135_ = l_Lean_Expr_isAtomic(v___x_134_);
if (v___x_135_ == 0)
{
v___y_129_ = v_a_123_;
goto v___jp_128_;
}
else
{
v___y_129_ = v___y_124_;
goto v___jp_128_;
}
}
else
{
uint8_t v___x_136_; 
v___x_136_ = 0;
return v___x_136_;
}
v___jp_128_:
{
if (v___y_129_ == 0)
{
size_t v___x_130_; size_t v___x_131_; 
v___x_130_ = ((size_t)1ULL);
v___x_131_ = lean_usize_add(v_i_126_, v___x_130_);
v_i_126_ = v___x_131_;
goto _start;
}
else
{
return v___y_129_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0___boxed(lean_object* v_a_137_, lean_object* v___y_138_, lean_object* v_as_139_, lean_object* v_i_140_, lean_object* v_stop_141_){
_start:
{
uint8_t v_a_4678__boxed_142_; uint8_t v___y_4679__boxed_143_; size_t v_i_boxed_144_; size_t v_stop_boxed_145_; uint8_t v_res_146_; lean_object* v_r_147_; 
v_a_4678__boxed_142_ = lean_unbox(v_a_137_);
v___y_4679__boxed_143_ = lean_unbox(v___y_138_);
v_i_boxed_144_ = lean_unbox_usize(v_i_140_);
lean_dec(v_i_140_);
v_stop_boxed_145_ = lean_unbox_usize(v_stop_141_);
lean_dec(v_stop_141_);
v_res_146_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(v_a_4678__boxed_142_, v___y_4679__boxed_143_, v_as_139_, v_i_boxed_144_, v_stop_boxed_145_);
lean_dec_ref(v_as_139_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___redArg(uint8_t v_a_148_, uint8_t v___x_149_, lean_object* v___x_150_, lean_object* v_x_151_, lean_object* v_x_152_, lean_object* v_x_153_){
_start:
{
uint8_t v___y_156_; 
if (lean_obj_tag(v_x_151_) == 5)
{
lean_object* v_fn_169_; lean_object* v_arg_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; 
v_fn_169_ = lean_ctor_get(v_x_151_, 0);
lean_inc_ref(v_fn_169_);
v_arg_170_ = lean_ctor_get(v_x_151_, 1);
lean_inc_ref(v_arg_170_);
lean_dec_ref_known(v_x_151_, 2);
v___x_171_ = lean_array_set(v_x_152_, v_x_153_, v_arg_170_);
v___x_172_ = lean_unsigned_to_nat(1u);
v___x_173_ = lean_nat_sub(v_x_153_, v___x_172_);
lean_dec(v_x_153_);
v_x_151_ = v_fn_169_;
v_x_152_ = v___x_171_;
v_x_153_ = v___x_173_;
goto _start;
}
else
{
uint8_t v___x_175_; 
lean_dec(v_x_153_);
v___x_175_ = l_Lean_Expr_isAtomic(v_x_151_);
if (v___x_175_ == 0)
{
lean_object* v___x_176_; lean_object* v___x_177_; 
lean_dec_ref(v_x_152_);
lean_dec_ref(v_x_151_);
lean_dec_ref(v___x_150_);
v___x_176_ = lean_box(v_a_148_);
v___x_177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
return v___x_177_;
}
else
{
if (v___x_149_ == 0)
{
if (lean_obj_tag(v_x_151_) == 4)
{
lean_object* v_declName_178_; uint8_t v___x_179_; 
v_declName_178_ = lean_ctor_get(v_x_151_, 0);
lean_inc(v_declName_178_);
lean_dec_ref_known(v_x_151_, 2);
v___x_179_ = l_Lean_Environment_contains(v___x_150_, v_declName_178_, v_a_148_);
if (v___x_179_ == 0)
{
lean_object* v___x_180_; lean_object* v___x_181_; 
lean_dec_ref(v_x_152_);
v___x_180_ = lean_box(v_a_148_);
v___x_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_180_);
return v___x_181_;
}
else
{
v___y_156_ = v___x_149_;
goto v___jp_155_;
}
}
else
{
lean_dec_ref(v_x_151_);
lean_dec_ref(v___x_150_);
v___y_156_ = v___x_149_;
goto v___jp_155_;
}
}
else
{
lean_object* v___x_182_; lean_object* v___x_183_; 
lean_dec_ref(v_x_152_);
lean_dec_ref(v_x_151_);
lean_dec_ref(v___x_150_);
v___x_182_ = lean_box(v___x_149_);
v___x_183_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
return v___x_183_;
}
}
}
v___jp_155_:
{
lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v___x_157_ = lean_unsigned_to_nat(0u);
v___x_158_ = lean_array_get_size(v_x_152_);
v___x_159_ = lean_nat_dec_lt(v___x_157_, v___x_158_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; 
lean_dec_ref(v_x_152_);
v___x_160_ = lean_box(v___x_159_);
v___x_161_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_161_, 0, v___x_160_);
return v___x_161_;
}
else
{
if (v___x_159_ == 0)
{
lean_object* v___x_162_; lean_object* v___x_163_; 
lean_dec_ref(v_x_152_);
v___x_162_ = lean_box(v___x_159_);
v___x_163_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_163_, 0, v___x_162_);
return v___x_163_;
}
else
{
size_t v___x_164_; size_t v___x_165_; uint8_t v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; 
v___x_164_ = ((size_t)0ULL);
v___x_165_ = lean_usize_of_nat(v___x_158_);
v___x_166_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__0(v_a_148_, v___y_156_, v_x_152_, v___x_164_, v___x_165_);
lean_dec_ref(v_x_152_);
v___x_167_ = lean_box(v___x_166_);
v___x_168_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_168_, 0, v___x_167_);
return v___x_168_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___redArg___boxed(lean_object* v_a_184_, lean_object* v___x_185_, lean_object* v___x_186_, lean_object* v_x_187_, lean_object* v_x_188_, lean_object* v_x_189_, lean_object* v___y_190_){
_start:
{
uint8_t v_a_4702__boxed_191_; uint8_t v___x_4703__boxed_192_; lean_object* v_res_193_; 
v_a_4702__boxed_191_ = lean_unbox(v_a_184_);
v___x_4703__boxed_192_ = lean_unbox(v___x_185_);
v_res_193_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___redArg(v_a_4702__boxed_191_, v___x_4703__boxed_192_, v___x_186_, v_x_187_, v_x_188_, v_x_189_);
return v_res_193_;
}
}
static lean_object* _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4(void){
_start:
{
lean_object* v___x_201_; lean_object* v_dummy_202_; 
v___x_201_ = lean_box(0);
v_dummy_202_ = l_Lean_Expr_sort___override(v___x_201_);
return v_dummy_202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0(lean_object* v_e_203_, lean_object* v_env_204_, lean_object* v___y_205_, lean_object* v___y_206_, lean_object* v___y_207_, lean_object* v___y_208_){
_start:
{
lean_object* v___x_214_; 
lean_inc_ref(v_e_203_);
v___x_214_ = l_Lean_Meta_isProof(v_e_203_, v___y_205_, v___y_206_, v___y_207_, v___y_208_);
if (lean_obj_tag(v___x_214_) == 0)
{
lean_object* v_a_215_; uint8_t v___x_216_; 
v_a_215_ = lean_ctor_get(v___x_214_, 0);
lean_inc(v_a_215_);
lean_dec_ref_known(v___x_214_, 1);
v___x_216_ = lean_unbox(v_a_215_);
if (v___x_216_ == 0)
{
lean_dec(v_a_215_);
lean_dec_ref(v_env_204_);
lean_dec_ref(v_e_203_);
goto v___jp_210_;
}
else
{
lean_object* v___x_217_; uint8_t v___x_218_; 
v___x_217_ = ((lean_object*)(l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__3));
v___x_218_ = l_Lean_Expr_isAppOf(v_e_203_, v___x_217_);
if (v___x_218_ == 0)
{
lean_object* v___x_219_; lean_object* v_dummy_220_; lean_object* v_nargs_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; uint8_t v___x_225_; lean_object* v___x_226_; 
v___x_219_ = l_Lean_Meta_AbstractNestedProofs_getLambdaBody(v_e_203_);
lean_dec_ref(v_e_203_);
v_dummy_220_ = lean_obj_once(&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4, &l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4_once, _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4);
v_nargs_221_ = l_Lean_Expr_getAppNumArgs(v___x_219_);
lean_inc(v_nargs_221_);
v___x_222_ = lean_mk_array(v_nargs_221_, v_dummy_220_);
v___x_223_ = lean_unsigned_to_nat(1u);
v___x_224_ = lean_nat_sub(v_nargs_221_, v___x_223_);
lean_dec(v_nargs_221_);
v___x_225_ = lean_unbox(v_a_215_);
lean_dec(v_a_215_);
v___x_226_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___redArg(v___x_225_, v___x_218_, v_env_204_, v___x_219_, v___x_222_, v___x_224_);
return v___x_226_;
}
else
{
lean_dec(v_a_215_);
lean_dec_ref(v_env_204_);
lean_dec_ref(v_e_203_);
goto v___jp_210_;
}
}
}
else
{
lean_dec_ref(v_env_204_);
lean_dec_ref(v_e_203_);
return v___x_214_;
}
v___jp_210_:
{
uint8_t v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; 
v___x_211_ = 0;
v___x_212_ = lean_box(v___x_211_);
v___x_213_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_213_, 0, v___x_212_);
return v___x_213_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___boxed(lean_object* v_e_227_, lean_object* v_env_228_, lean_object* v___y_229_, lean_object* v___y_230_, lean_object* v___y_231_, lean_object* v___y_232_, lean_object* v___y_233_){
_start:
{
lean_object* v_res_234_; 
v_res_234_ = l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0(v_e_227_, v_env_228_, v___y_229_, v___y_230_, v___y_231_, v___y_232_);
lean_dec(v___y_232_);
lean_dec_ref(v___y_231_);
lean_dec(v___y_230_);
lean_dec_ref(v___y_229_);
return v_res_234_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_235_; 
v___x_235_ = l_Lean_PersistentHashMap_mkEmptyEntriesArray___redArg();
return v___x_235_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; 
v___x_236_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_237_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_237_, 0, v___x_236_);
return v___x_237_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg(){
_start:
{
lean_object* v___x_239_; 
v___x_239_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__1, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__1_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__1);
return v___x_239_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___boxed(lean_object* v___dummy_240_){
_start:
{
lean_object* v_res_241_; 
v_res_241_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg();
return v_res_241_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0(lean_object* v___y_242_, uint8_t v_isExporting_243_, lean_object* v___x_244_, lean_object* v___y_245_, lean_object* v___x_246_, lean_object* v_a_x3f_247_){
_start:
{
lean_object* v___x_249_; lean_object* v_env_250_; lean_object* v_nextMacroScope_251_; lean_object* v_ngen_252_; lean_object* v_auxDeclNGen_253_; lean_object* v_traceState_254_; lean_object* v_recordedDeps_255_; lean_object* v_messages_256_; lean_object* v_infoState_257_; lean_object* v_snapshotTasks_258_; lean_object* v___x_260_; uint8_t v_isShared_261_; uint8_t v_isSharedCheck_283_; 
v___x_249_ = lean_st_ref_take(v___y_242_);
v_env_250_ = lean_ctor_get(v___x_249_, 0);
v_nextMacroScope_251_ = lean_ctor_get(v___x_249_, 1);
v_ngen_252_ = lean_ctor_get(v___x_249_, 2);
v_auxDeclNGen_253_ = lean_ctor_get(v___x_249_, 3);
v_traceState_254_ = lean_ctor_get(v___x_249_, 4);
v_recordedDeps_255_ = lean_ctor_get(v___x_249_, 6);
v_messages_256_ = lean_ctor_get(v___x_249_, 7);
v_infoState_257_ = lean_ctor_get(v___x_249_, 8);
v_snapshotTasks_258_ = lean_ctor_get(v___x_249_, 9);
v_isSharedCheck_283_ = !lean_is_exclusive(v___x_249_);
if (v_isSharedCheck_283_ == 0)
{
lean_object* v_unused_284_; 
v_unused_284_ = lean_ctor_get(v___x_249_, 5);
lean_dec(v_unused_284_);
v___x_260_ = v___x_249_;
v_isShared_261_ = v_isSharedCheck_283_;
goto v_resetjp_259_;
}
else
{
lean_inc(v_snapshotTasks_258_);
lean_inc(v_infoState_257_);
lean_inc(v_messages_256_);
lean_inc(v_recordedDeps_255_);
lean_inc(v_traceState_254_);
lean_inc(v_auxDeclNGen_253_);
lean_inc(v_ngen_252_);
lean_inc(v_nextMacroScope_251_);
lean_inc(v_env_250_);
lean_dec(v___x_249_);
v___x_260_ = lean_box(0);
v_isShared_261_ = v_isSharedCheck_283_;
goto v_resetjp_259_;
}
v_resetjp_259_:
{
lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_262_ = l_Lean_Environment_setExporting(v_env_250_, v_isExporting_243_);
if (v_isShared_261_ == 0)
{
lean_ctor_set(v___x_260_, 5, v___x_244_);
lean_ctor_set(v___x_260_, 0, v___x_262_);
v___x_264_ = v___x_260_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_282_; 
v_reuseFailAlloc_282_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_282_, 0, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_282_, 1, v_nextMacroScope_251_);
lean_ctor_set(v_reuseFailAlloc_282_, 2, v_ngen_252_);
lean_ctor_set(v_reuseFailAlloc_282_, 3, v_auxDeclNGen_253_);
lean_ctor_set(v_reuseFailAlloc_282_, 4, v_traceState_254_);
lean_ctor_set(v_reuseFailAlloc_282_, 5, v___x_244_);
lean_ctor_set(v_reuseFailAlloc_282_, 6, v_recordedDeps_255_);
lean_ctor_set(v_reuseFailAlloc_282_, 7, v_messages_256_);
lean_ctor_set(v_reuseFailAlloc_282_, 8, v_infoState_257_);
lean_ctor_set(v_reuseFailAlloc_282_, 9, v_snapshotTasks_258_);
v___x_264_ = v_reuseFailAlloc_282_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v_mctx_267_; lean_object* v_zetaDeltaFVarIds_268_; lean_object* v_postponed_269_; lean_object* v_diag_270_; lean_object* v___x_272_; uint8_t v_isShared_273_; uint8_t v_isSharedCheck_280_; 
v___x_265_ = lean_st_ref_put(v___y_242_, v___x_264_);
v___x_266_ = lean_st_ref_take(v___y_245_);
v_mctx_267_ = lean_ctor_get(v___x_266_, 0);
v_zetaDeltaFVarIds_268_ = lean_ctor_get(v___x_266_, 2);
v_postponed_269_ = lean_ctor_get(v___x_266_, 3);
v_diag_270_ = lean_ctor_get(v___x_266_, 4);
v_isSharedCheck_280_ = !lean_is_exclusive(v___x_266_);
if (v_isSharedCheck_280_ == 0)
{
lean_object* v_unused_281_; 
v_unused_281_ = lean_ctor_get(v___x_266_, 1);
lean_dec(v_unused_281_);
v___x_272_ = v___x_266_;
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
else
{
lean_inc(v_diag_270_);
lean_inc(v_postponed_269_);
lean_inc(v_zetaDeltaFVarIds_268_);
lean_inc(v_mctx_267_);
lean_dec(v___x_266_);
v___x_272_ = lean_box(0);
v_isShared_273_ = v_isSharedCheck_280_;
goto v_resetjp_271_;
}
v_resetjp_271_:
{
lean_object* v___x_274_; lean_object* v___x_276_; 
v___x_274_ = lean_box(0);
if (v_isShared_273_ == 0)
{
lean_ctor_set(v___x_272_, 1, v___x_246_);
v___x_276_ = v___x_272_;
goto v_reusejp_275_;
}
else
{
lean_object* v_reuseFailAlloc_279_; 
v_reuseFailAlloc_279_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_279_, 0, v_mctx_267_);
lean_ctor_set(v_reuseFailAlloc_279_, 1, v___x_246_);
lean_ctor_set(v_reuseFailAlloc_279_, 2, v_zetaDeltaFVarIds_268_);
lean_ctor_set(v_reuseFailAlloc_279_, 3, v_postponed_269_);
lean_ctor_set(v_reuseFailAlloc_279_, 4, v_diag_270_);
v___x_276_ = v_reuseFailAlloc_279_;
goto v_reusejp_275_;
}
v_reusejp_275_:
{
lean_object* v___x_277_; lean_object* v___x_278_; 
v___x_277_ = lean_st_ref_put(v___y_245_, v___x_276_);
v___x_278_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_278_, 0, v___x_274_);
return v___x_278_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0___boxed(lean_object* v___y_285_, lean_object* v_isExporting_286_, lean_object* v___x_287_, lean_object* v___y_288_, lean_object* v___x_289_, lean_object* v_a_x3f_290_, lean_object* v___y_291_){
_start:
{
uint8_t v_isExporting_boxed_292_; lean_object* v_res_293_; 
v_isExporting_boxed_292_ = lean_unbox(v_isExporting_286_);
v_res_293_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0(v___y_285_, v_isExporting_boxed_292_, v___x_287_, v___y_288_, v___x_289_, v_a_x3f_290_);
lean_dec(v_a_x3f_290_);
lean_dec(v___y_288_);
lean_dec(v___y_285_);
return v_res_293_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_294_ = lean_obj_once(&l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0, &l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg___closed__0);
v___x_295_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_295_, 0, v___x_294_);
return v___x_295_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; 
v___x_296_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0);
v___x_297_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_297_, 0, v___x_296_);
lean_ctor_set(v___x_297_, 1, v___x_296_);
return v___x_297_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4___redArg();
return v___x_298_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_299_; lean_object* v___x_300_; 
v___x_299_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_299_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
return v___x_300_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = lean_unsigned_to_nat(0u);
v___x_302_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0);
v___x_303_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_303_, 0, v___x_302_);
lean_ctor_set(v___x_303_, 1, v___x_302_);
lean_ctor_set(v___x_303_, 2, v___x_301_);
return v___x_303_;
}
}
static lean_object* _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_304_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__4, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__4_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__4);
v___x_305_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__3, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__3_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__3);
v___x_306_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__0);
v___x_307_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2);
v___x_308_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_308_, 0, v___x_307_);
lean_ctor_set(v___x_308_, 1, v___x_306_);
lean_ctor_set(v___x_308_, 2, v___x_305_);
lean_ctor_set(v___x_308_, 3, v___x_306_);
lean_ctor_set(v___x_308_, 4, v___x_306_);
lean_ctor_set(v___x_308_, 5, v___x_306_);
lean_ctor_set(v___x_308_, 6, v___x_306_);
lean_ctor_set(v___x_308_, 7, v___x_304_);
return v___x_308_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg(lean_object* v_x_309_, uint8_t v_isExporting_310_, lean_object* v___y_311_, lean_object* v___y_312_, lean_object* v___y_313_, lean_object* v___y_314_){
_start:
{
lean_object* v___x_316_; lean_object* v_env_317_; lean_object* v___x_318_; uint8_t v_isModule_319_; 
v___x_316_ = lean_st_ref_get(v___y_314_);
v_env_317_ = lean_ctor_get(v___x_316_, 0);
lean_inc_ref(v_env_317_);
lean_dec(v___x_316_);
v___x_318_ = l_Lean_Environment_header(v_env_317_);
v_isModule_319_ = lean_ctor_get_uint8(v___x_318_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_318_);
if (v_isModule_319_ == 0)
{
lean_object* v___x_320_; 
lean_dec_ref(v_env_317_);
lean_inc(v___y_314_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
v___x_320_ = lean_apply_5(v_x_309_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, lean_box(0));
return v___x_320_;
}
else
{
uint8_t v_isExporting_321_; 
v_isExporting_321_ = lean_ctor_get_uint8(v_env_317_, sizeof(void*)*13);
lean_dec_ref(v_env_317_);
if (v_isExporting_310_ == 0)
{
if (v_isExporting_321_ == 0)
{
lean_object* v___x_388_; 
lean_inc(v___y_314_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
v___x_388_ = lean_apply_5(v_x_309_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, lean_box(0));
return v___x_388_;
}
else
{
goto v___jp_322_;
}
}
else
{
if (v_isExporting_321_ == 0)
{
goto v___jp_322_;
}
else
{
lean_object* v___x_389_; 
lean_inc(v___y_314_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
v___x_389_ = lean_apply_5(v_x_309_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, lean_box(0));
return v___x_389_;
}
}
v___jp_322_:
{
lean_object* v___x_323_; lean_object* v_env_324_; lean_object* v_nextMacroScope_325_; lean_object* v_ngen_326_; lean_object* v_auxDeclNGen_327_; lean_object* v_traceState_328_; lean_object* v_recordedDeps_329_; lean_object* v_messages_330_; lean_object* v_infoState_331_; lean_object* v_snapshotTasks_332_; lean_object* v___x_334_; uint8_t v_isShared_335_; uint8_t v_isSharedCheck_386_; 
v___x_323_ = lean_st_ref_take(v___y_314_);
v_env_324_ = lean_ctor_get(v___x_323_, 0);
v_nextMacroScope_325_ = lean_ctor_get(v___x_323_, 1);
v_ngen_326_ = lean_ctor_get(v___x_323_, 2);
v_auxDeclNGen_327_ = lean_ctor_get(v___x_323_, 3);
v_traceState_328_ = lean_ctor_get(v___x_323_, 4);
v_recordedDeps_329_ = lean_ctor_get(v___x_323_, 6);
v_messages_330_ = lean_ctor_get(v___x_323_, 7);
v_infoState_331_ = lean_ctor_get(v___x_323_, 8);
v_snapshotTasks_332_ = lean_ctor_get(v___x_323_, 9);
v_isSharedCheck_386_ = !lean_is_exclusive(v___x_323_);
if (v_isSharedCheck_386_ == 0)
{
lean_object* v_unused_387_; 
v_unused_387_ = lean_ctor_get(v___x_323_, 5);
lean_dec(v_unused_387_);
v___x_334_ = v___x_323_;
v_isShared_335_ = v_isSharedCheck_386_;
goto v_resetjp_333_;
}
else
{
lean_inc(v_snapshotTasks_332_);
lean_inc(v_infoState_331_);
lean_inc(v_messages_330_);
lean_inc(v_recordedDeps_329_);
lean_inc(v_traceState_328_);
lean_inc(v_auxDeclNGen_327_);
lean_inc(v_ngen_326_);
lean_inc(v_nextMacroScope_325_);
lean_inc(v_env_324_);
lean_dec(v___x_323_);
v___x_334_ = lean_box(0);
v_isShared_335_ = v_isSharedCheck_386_;
goto v_resetjp_333_;
}
v_resetjp_333_:
{
lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_339_; 
v___x_336_ = l_Lean_Environment_setExporting(v_env_324_, v_isExporting_310_);
v___x_337_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1);
if (v_isShared_335_ == 0)
{
lean_ctor_set(v___x_334_, 5, v___x_337_);
lean_ctor_set(v___x_334_, 0, v___x_336_);
v___x_339_ = v___x_334_;
goto v_reusejp_338_;
}
else
{
lean_object* v_reuseFailAlloc_385_; 
v_reuseFailAlloc_385_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_385_, 0, v___x_336_);
lean_ctor_set(v_reuseFailAlloc_385_, 1, v_nextMacroScope_325_);
lean_ctor_set(v_reuseFailAlloc_385_, 2, v_ngen_326_);
lean_ctor_set(v_reuseFailAlloc_385_, 3, v_auxDeclNGen_327_);
lean_ctor_set(v_reuseFailAlloc_385_, 4, v_traceState_328_);
lean_ctor_set(v_reuseFailAlloc_385_, 5, v___x_337_);
lean_ctor_set(v_reuseFailAlloc_385_, 6, v_recordedDeps_329_);
lean_ctor_set(v_reuseFailAlloc_385_, 7, v_messages_330_);
lean_ctor_set(v_reuseFailAlloc_385_, 8, v_infoState_331_);
lean_ctor_set(v_reuseFailAlloc_385_, 9, v_snapshotTasks_332_);
v___x_339_ = v_reuseFailAlloc_385_;
goto v_reusejp_338_;
}
v_reusejp_338_:
{
lean_object* v___x_340_; lean_object* v___x_341_; lean_object* v_mctx_342_; lean_object* v_zetaDeltaFVarIds_343_; lean_object* v_postponed_344_; lean_object* v_diag_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_383_; 
v___x_340_ = lean_st_ref_put(v___y_314_, v___x_339_);
v___x_341_ = lean_st_ref_take(v___y_312_);
v_mctx_342_ = lean_ctor_get(v___x_341_, 0);
v_zetaDeltaFVarIds_343_ = lean_ctor_get(v___x_341_, 2);
v_postponed_344_ = lean_ctor_get(v___x_341_, 3);
v_diag_345_ = lean_ctor_get(v___x_341_, 4);
v_isSharedCheck_383_ = !lean_is_exclusive(v___x_341_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; 
v_unused_384_ = lean_ctor_get(v___x_341_, 1);
lean_dec(v_unused_384_);
v___x_347_ = v___x_341_;
v_isShared_348_ = v_isSharedCheck_383_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_diag_345_);
lean_inc(v_postponed_344_);
lean_inc(v_zetaDeltaFVarIds_343_);
lean_inc(v_mctx_342_);
lean_dec(v___x_341_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_383_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v___x_349_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_382_; 
v_reuseFailAlloc_382_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_382_, 0, v_mctx_342_);
lean_ctor_set(v_reuseFailAlloc_382_, 1, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_382_, 2, v_zetaDeltaFVarIds_343_);
lean_ctor_set(v_reuseFailAlloc_382_, 3, v_postponed_344_);
lean_ctor_set(v_reuseFailAlloc_382_, 4, v_diag_345_);
v___x_351_ = v_reuseFailAlloc_382_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
lean_object* v___x_352_; lean_object* v_r_353_; 
v___x_352_ = lean_st_ref_put(v___y_312_, v___x_351_);
lean_inc(v___y_314_);
lean_inc_ref(v___y_313_);
lean_inc(v___y_312_);
lean_inc_ref(v___y_311_);
v_r_353_ = lean_apply_5(v_x_309_, v___y_311_, v___y_312_, v___y_313_, v___y_314_, lean_box(0));
if (lean_obj_tag(v_r_353_) == 0)
{
lean_object* v_a_354_; lean_object* v___x_356_; uint8_t v_isShared_357_; uint8_t v_isSharedCheck_370_; 
v_a_354_ = lean_ctor_get(v_r_353_, 0);
v_isSharedCheck_370_ = !lean_is_exclusive(v_r_353_);
if (v_isSharedCheck_370_ == 0)
{
v___x_356_ = v_r_353_;
v_isShared_357_ = v_isSharedCheck_370_;
goto v_resetjp_355_;
}
else
{
lean_inc(v_a_354_);
lean_dec(v_r_353_);
v___x_356_ = lean_box(0);
v_isShared_357_ = v_isSharedCheck_370_;
goto v_resetjp_355_;
}
v_resetjp_355_:
{
lean_object* v___x_359_; 
lean_inc(v_a_354_);
if (v_isShared_357_ == 0)
{
lean_ctor_set_tag(v___x_356_, 1);
v___x_359_ = v___x_356_;
goto v_reusejp_358_;
}
else
{
lean_object* v_reuseFailAlloc_369_; 
v_reuseFailAlloc_369_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_369_, 0, v_a_354_);
v___x_359_ = v_reuseFailAlloc_369_;
goto v_reusejp_358_;
}
v_reusejp_358_:
{
lean_object* v___x_360_; lean_object* v___x_362_; uint8_t v_isShared_363_; uint8_t v_isSharedCheck_367_; 
v___x_360_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0(v___y_314_, v_isExporting_321_, v___x_337_, v___y_312_, v___x_349_, v___x_359_);
lean_dec_ref(v___x_359_);
v_isSharedCheck_367_ = !lean_is_exclusive(v___x_360_);
if (v_isSharedCheck_367_ == 0)
{
lean_object* v_unused_368_; 
v_unused_368_ = lean_ctor_get(v___x_360_, 0);
lean_dec(v_unused_368_);
v___x_362_ = v___x_360_;
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
else
{
lean_dec(v___x_360_);
v___x_362_ = lean_box(0);
v_isShared_363_ = v_isSharedCheck_367_;
goto v_resetjp_361_;
}
v_resetjp_361_:
{
lean_object* v___x_365_; 
if (v_isShared_363_ == 0)
{
lean_ctor_set(v___x_362_, 0, v_a_354_);
v___x_365_ = v___x_362_;
goto v_reusejp_364_;
}
else
{
lean_object* v_reuseFailAlloc_366_; 
v_reuseFailAlloc_366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_366_, 0, v_a_354_);
v___x_365_ = v_reuseFailAlloc_366_;
goto v_reusejp_364_;
}
v_reusejp_364_:
{
return v___x_365_;
}
}
}
}
}
else
{
lean_object* v_a_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_375_; uint8_t v_isShared_376_; uint8_t v_isSharedCheck_380_; 
v_a_371_ = lean_ctor_get(v_r_353_, 0);
lean_inc(v_a_371_);
lean_dec_ref_known(v_r_353_, 1);
v___x_372_ = lean_box(0);
v___x_373_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0(v___y_314_, v_isExporting_321_, v___x_337_, v___y_312_, v___x_349_, v___x_372_);
v_isSharedCheck_380_ = !lean_is_exclusive(v___x_373_);
if (v_isSharedCheck_380_ == 0)
{
lean_object* v_unused_381_; 
v_unused_381_ = lean_ctor_get(v___x_373_, 0);
lean_dec(v_unused_381_);
v___x_375_ = v___x_373_;
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
else
{
lean_dec(v___x_373_);
v___x_375_ = lean_box(0);
v_isShared_376_ = v_isSharedCheck_380_;
goto v_resetjp_374_;
}
v_resetjp_374_:
{
lean_object* v___x_378_; 
if (v_isShared_376_ == 0)
{
lean_ctor_set_tag(v___x_375_, 1);
lean_ctor_set(v___x_375_, 0, v_a_371_);
v___x_378_ = v___x_375_;
goto v_reusejp_377_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v_a_371_);
v___x_378_ = v_reuseFailAlloc_379_;
goto v_reusejp_377_;
}
v_reusejp_377_:
{
return v___x_378_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___boxed(lean_object* v_x_390_, lean_object* v_isExporting_391_, lean_object* v___y_392_, lean_object* v___y_393_, lean_object* v___y_394_, lean_object* v___y_395_, lean_object* v___y_396_){
_start:
{
uint8_t v_isExporting_boxed_397_; lean_object* v_res_398_; 
v_isExporting_boxed_397_ = lean_unbox(v_isExporting_391_);
v_res_398_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg(v_x_390_, v_isExporting_boxed_397_, v___y_392_, v___y_393_, v___y_394_, v___y_395_);
lean_dec(v___y_395_);
lean_dec_ref(v___y_394_);
lean_dec(v___y_393_);
lean_dec_ref(v___y_392_);
return v_res_398_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(lean_object* v_x_399_, uint8_t v_when_400_, lean_object* v___y_401_, lean_object* v___y_402_, lean_object* v___y_403_, lean_object* v___y_404_){
_start:
{
if (v_when_400_ == 0)
{
lean_object* v___x_406_; 
lean_inc(v___y_404_);
lean_inc_ref(v___y_403_);
lean_inc(v___y_402_);
lean_inc_ref(v___y_401_);
v___x_406_ = lean_apply_5(v_x_399_, v___y_401_, v___y_402_, v___y_403_, v___y_404_, lean_box(0));
return v___x_406_;
}
else
{
uint8_t v___x_407_; lean_object* v___x_408_; 
v___x_407_ = 0;
v___x_408_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg(v_x_399_, v___x_407_, v___y_401_, v___y_402_, v___y_403_, v___y_404_);
return v___x_408_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg___boxed(lean_object* v_x_409_, lean_object* v_when_410_, lean_object* v___y_411_, lean_object* v___y_412_, lean_object* v___y_413_, lean_object* v___y_414_, lean_object* v___y_415_){
_start:
{
uint8_t v_when_boxed_416_; lean_object* v_res_417_; 
v_when_boxed_416_ = lean_unbox(v_when_410_);
v_res_417_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(v_x_409_, v_when_boxed_416_, v___y_411_, v___y_412_, v___y_413_, v___y_414_);
lean_dec(v___y_414_);
lean_dec_ref(v___y_413_);
lean_dec(v___y_412_);
lean_dec_ref(v___y_411_);
return v_res_417_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(lean_object* v_e_418_, lean_object* v_a_419_, lean_object* v_a_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v___x_424_; lean_object* v_env_425_; lean_object* v___f_426_; uint8_t v___x_427_; lean_object* v___x_428_; 
v___x_424_ = lean_st_ref_get(v_a_422_);
v_env_425_ = lean_ctor_get(v___x_424_, 0);
lean_inc_ref(v_env_425_);
lean_dec(v___x_424_);
v___f_426_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___boxed), 7, 2);
lean_closure_set(v___f_426_, 0, v_e_418_);
lean_closure_set(v___f_426_, 1, v_env_425_);
v___x_427_ = 1;
v___x_428_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(v___f_426_, v___x_427_, v_a_419_, v_a_420_, v_a_421_, v_a_422_);
return v___x_428_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___boxed(lean_object* v_e_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_, lean_object* v_a_434_){
_start:
{
lean_object* v_res_435_; 
v_res_435_ = l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(v_e_429_, v_a_430_, v_a_431_, v_a_432_, v_a_433_);
lean_dec(v_a_433_);
lean_dec_ref(v_a_432_);
lean_dec(v_a_431_);
lean_dec_ref(v_a_430_);
return v_res_435_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1(uint8_t v_a_436_, uint8_t v___x_437_, lean_object* v___x_438_, lean_object* v_x_439_, lean_object* v_x_440_, lean_object* v_x_441_, lean_object* v___y_442_, lean_object* v___y_443_, lean_object* v___y_444_, lean_object* v___y_445_){
_start:
{
lean_object* v___x_447_; 
v___x_447_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___redArg(v_a_436_, v___x_437_, v___x_438_, v_x_439_, v_x_440_, v_x_441_);
return v___x_447_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1___boxed(lean_object* v_a_448_, lean_object* v___x_449_, lean_object* v___x_450_, lean_object* v_x_451_, lean_object* v_x_452_, lean_object* v_x_453_, lean_object* v___y_454_, lean_object* v___y_455_, lean_object* v___y_456_, lean_object* v___y_457_, lean_object* v___y_458_){
_start:
{
uint8_t v_a_5149__boxed_459_; uint8_t v___x_5150__boxed_460_; lean_object* v_res_461_; 
v_a_5149__boxed_459_ = lean_unbox(v_a_448_);
v___x_5150__boxed_460_ = lean_unbox(v___x_449_);
v_res_461_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__1(v_a_5149__boxed_459_, v___x_5150__boxed_460_, v___x_450_, v_x_451_, v_x_452_, v_x_453_, v___y_454_, v___y_455_, v___y_456_, v___y_457_);
lean_dec(v___y_457_);
lean_dec_ref(v___y_456_);
lean_dec(v___y_455_);
lean_dec_ref(v___y_454_);
return v_res_461_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2(lean_object* v_00_u03b1_462_, lean_object* v_x_463_, uint8_t v_when_464_, lean_object* v___y_465_, lean_object* v___y_466_, lean_object* v___y_467_, lean_object* v___y_468_){
_start:
{
lean_object* v___x_470_; 
v___x_470_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___redArg(v_x_463_, v_when_464_, v___y_465_, v___y_466_, v___y_467_, v___y_468_);
return v___x_470_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2___boxed(lean_object* v_00_u03b1_471_, lean_object* v_x_472_, lean_object* v_when_473_, lean_object* v___y_474_, lean_object* v___y_475_, lean_object* v___y_476_, lean_object* v___y_477_, lean_object* v___y_478_){
_start:
{
uint8_t v_when_boxed_479_; lean_object* v_res_480_; 
v_when_boxed_479_ = lean_unbox(v_when_473_);
v_res_480_ = l_Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2(v_00_u03b1_471_, v_x_472_, v_when_boxed_479_, v___y_474_, v___y_475_, v___y_476_, v___y_477_);
lean_dec(v___y_477_);
lean_dec_ref(v___y_476_);
lean_dec(v___y_475_);
lean_dec_ref(v___y_474_);
return v_res_480_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2(lean_object* v_00_u03b1_481_, lean_object* v_x_482_, uint8_t v_isExporting_483_, lean_object* v___y_484_, lean_object* v___y_485_, lean_object* v___y_486_, lean_object* v___y_487_){
_start:
{
lean_object* v___x_489_; 
v___x_489_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg(v_x_482_, v_isExporting_483_, v___y_484_, v___y_485_, v___y_486_, v___y_487_);
return v___x_489_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___boxed(lean_object* v_00_u03b1_490_, lean_object* v_x_491_, lean_object* v_isExporting_492_, lean_object* v___y_493_, lean_object* v___y_494_, lean_object* v___y_495_, lean_object* v___y_496_, lean_object* v___y_497_){
_start:
{
uint8_t v_isExporting_boxed_498_; lean_object* v_res_499_; 
v_isExporting_boxed_498_ = lean_unbox(v_isExporting_492_);
v_res_499_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2(v_00_u03b1_490_, v_x_491_, v_isExporting_boxed_498_, v___y_493_, v___y_494_, v___y_495_, v___y_496_);
lean_dec(v___y_496_);
lean_dec_ref(v___y_495_);
lean_dec(v___y_494_);
lean_dec_ref(v___y_493_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_empty___at___00Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3_spec__4(lean_object* v_00_u03b2_500_){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2);
return v___x_501_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3___redArg(){
_start:
{
lean_object* v___x_503_; 
v___x_503_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2);
return v___x_503_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3___redArg___boxed(lean_object* v___dummy_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3___redArg();
return v_res_505_;
}
}
LEAN_EXPORT lean_object* l_Lean_instInhabitedBudgetedCache_default___at___00Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2_spec__3(lean_object* v_00_u03b2_506_){
_start:
{
lean_object* v___x_507_; 
v___x_507_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__2);
return v___x_507_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0(lean_object* v_x_508_, uint8_t v___y_509_, lean_object* v___y_510_, lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v___y_513_, lean_object* v___y_514_){
_start:
{
lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_516_ = lean_box(v___y_509_);
lean_inc(v___y_510_);
v___x_517_ = lean_apply_7(v_x_508_, v___x_516_, v___y_510_, v___y_511_, v___y_512_, v___y_513_, v___y_514_, lean_box(0));
return v___x_517_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0___boxed(lean_object* v_x_518_, lean_object* v___y_519_, lean_object* v___y_520_, lean_object* v___y_521_, lean_object* v___y_522_, lean_object* v___y_523_, lean_object* v___y_524_, lean_object* v___y_525_){
_start:
{
uint8_t v___y_28850__boxed_526_; lean_object* v_res_527_; 
v___y_28850__boxed_526_ = lean_unbox(v___y_519_);
v_res_527_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0(v_x_518_, v___y_28850__boxed_526_, v___y_520_, v___y_521_, v___y_522_, v___y_523_, v___y_524_);
lean_dec(v___y_520_);
return v_res_527_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(lean_object* v_lctx_528_, lean_object* v_localInsts_529_, lean_object* v_x_530_, uint8_t v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_538_; lean_object* v___f_539_; lean_object* v___x_540_; 
v___x_538_ = lean_box(v___y_531_);
lean_inc(v___y_532_);
v___f_539_ = lean_alloc_closure((void*)(l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___lam__0___boxed), 8, 3);
lean_closure_set(v___f_539_, 0, v_x_530_);
lean_closure_set(v___f_539_, 1, v___x_538_);
lean_closure_set(v___f_539_, 2, v___y_532_);
v___x_540_ = l___private_Lean_Meta_Basic_0__Lean_Meta_withLocalContextImp(lean_box(0), v_lctx_528_, v_localInsts_529_, v___f_539_, v___y_533_, v___y_534_, v___y_535_, v___y_536_);
if (lean_obj_tag(v___x_540_) == 0)
{
return v___x_540_;
}
else
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
v_a_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_540_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg___boxed(lean_object* v_lctx_549_, lean_object* v_localInsts_550_, lean_object* v_x_551_, lean_object* v___y_552_, lean_object* v___y_553_, lean_object* v___y_554_, lean_object* v___y_555_, lean_object* v___y_556_, lean_object* v___y_557_, lean_object* v___y_558_){
_start:
{
uint8_t v___y_28875__boxed_559_; lean_object* v_res_560_; 
v___y_28875__boxed_559_ = lean_unbox(v___y_552_);
v_res_560_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(v_lctx_549_, v_localInsts_550_, v_x_551_, v___y_28875__boxed_559_, v___y_553_, v___y_554_, v___y_555_, v___y_556_, v___y_557_);
lean_dec(v___y_557_);
lean_dec_ref(v___y_556_);
lean_dec(v___y_555_);
lean_dec_ref(v___y_554_);
lean_dec(v___y_553_);
return v_res_560_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3(lean_object* v_00_u03b1_561_, lean_object* v_lctx_562_, lean_object* v_localInsts_563_, lean_object* v_x_564_, uint8_t v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_, lean_object* v___y_570_){
_start:
{
lean_object* v___x_572_; 
v___x_572_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(v_lctx_562_, v_localInsts_563_, v_x_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_, v___y_569_, v___y_570_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___boxed(lean_object* v_00_u03b1_573_, lean_object* v_lctx_574_, lean_object* v_localInsts_575_, lean_object* v_x_576_, lean_object* v___y_577_, lean_object* v___y_578_, lean_object* v___y_579_, lean_object* v___y_580_, lean_object* v___y_581_, lean_object* v___y_582_, lean_object* v___y_583_){
_start:
{
uint8_t v___y_28919__boxed_584_; lean_object* v_res_585_; 
v___y_28919__boxed_584_ = lean_unbox(v___y_577_);
v_res_585_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3(v_00_u03b1_573_, v_lctx_574_, v_localInsts_575_, v_x_576_, v___y_28919__boxed_584_, v___y_578_, v___y_579_, v___y_580_, v___y_581_, v___y_582_);
lean_dec(v___y_582_);
lean_dec_ref(v___y_581_);
lean_dec(v___y_580_);
lean_dec_ref(v___y_579_);
lean_dec(v___y_578_);
return v_res_585_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___lam__0(lean_object* v_k_586_, uint8_t v___y_587_, lean_object* v___y_588_, lean_object* v_b_589_, lean_object* v_c_590_, lean_object* v___y_591_, lean_object* v___y_592_, lean_object* v___y_593_, lean_object* v___y_594_){
_start:
{
lean_object* v___x_596_; lean_object* v___x_597_; 
v___x_596_ = lean_box(v___y_587_);
lean_inc(v___y_594_);
lean_inc_ref(v___y_593_);
lean_inc(v___y_592_);
lean_inc_ref(v___y_591_);
lean_inc(v___y_588_);
v___x_597_ = lean_apply_9(v_k_586_, v_b_589_, v_c_590_, v___x_596_, v___y_588_, v___y_591_, v___y_592_, v___y_593_, v___y_594_, lean_box(0));
return v___x_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___lam__0___boxed(lean_object* v_k_598_, lean_object* v___y_599_, lean_object* v___y_600_, lean_object* v_b_601_, lean_object* v_c_602_, lean_object* v___y_603_, lean_object* v___y_604_, lean_object* v___y_605_, lean_object* v___y_606_, lean_object* v___y_607_){
_start:
{
uint8_t v___y_28942__boxed_608_; lean_object* v_res_609_; 
v___y_28942__boxed_608_ = lean_unbox(v___y_599_);
v_res_609_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___lam__0(v_k_598_, v___y_28942__boxed_608_, v___y_600_, v_b_601_, v_c_602_, v___y_603_, v___y_604_, v___y_605_, v___y_606_);
lean_dec(v___y_606_);
lean_dec_ref(v___y_605_);
lean_dec(v___y_604_);
lean_dec_ref(v___y_603_);
lean_dec(v___y_600_);
return v_res_609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg(lean_object* v_e_610_, lean_object* v_k_611_, uint8_t v_cleanupAnnotations_612_, uint8_t v_preserveNondepLet_613_, uint8_t v___y_614_, lean_object* v___y_615_, lean_object* v___y_616_, lean_object* v___y_617_, lean_object* v___y_618_, lean_object* v___y_619_){
_start:
{
lean_object* v___x_621_; lean_object* v___f_622_; uint8_t v___x_623_; uint8_t v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; 
v___x_621_ = lean_box(v___y_614_);
lean_inc(v___y_615_);
v___f_622_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_622_, 0, v_k_611_);
lean_closure_set(v___f_622_, 1, v___x_621_);
lean_closure_set(v___f_622_, 2, v___y_615_);
v___x_623_ = 1;
v___x_624_ = 0;
v___x_625_ = lean_box(0);
v___x_626_ = l___private_Lean_Meta_Basic_0__Lean_Meta_lambdaTelescopeImp(lean_box(0), v_e_610_, v___x_623_, v___x_623_, v_preserveNondepLet_613_, v___x_624_, v___x_625_, v___f_622_, v_cleanupAnnotations_612_, v___y_616_, v___y_617_, v___y_618_, v___y_619_);
if (lean_obj_tag(v___x_626_) == 0)
{
return v___x_626_;
}
else
{
lean_object* v_a_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_634_; 
v_a_627_ = lean_ctor_get(v___x_626_, 0);
v_isSharedCheck_634_ = !lean_is_exclusive(v___x_626_);
if (v_isSharedCheck_634_ == 0)
{
v___x_629_ = v___x_626_;
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_a_627_);
lean_dec(v___x_626_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_634_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v___x_632_; 
if (v_isShared_630_ == 0)
{
v___x_632_ = v___x_629_;
goto v_reusejp_631_;
}
else
{
lean_object* v_reuseFailAlloc_633_; 
v_reuseFailAlloc_633_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_633_, 0, v_a_627_);
v___x_632_ = v_reuseFailAlloc_633_;
goto v_reusejp_631_;
}
v_reusejp_631_:
{
return v___x_632_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___boxed(lean_object* v_e_635_, lean_object* v_k_636_, lean_object* v_cleanupAnnotations_637_, lean_object* v_preserveNondepLet_638_, lean_object* v___y_639_, lean_object* v___y_640_, lean_object* v___y_641_, lean_object* v___y_642_, lean_object* v___y_643_, lean_object* v___y_644_, lean_object* v___y_645_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_646_; uint8_t v_preserveNondepLet_boxed_647_; uint8_t v___y_28967__boxed_648_; lean_object* v_res_649_; 
v_cleanupAnnotations_boxed_646_ = lean_unbox(v_cleanupAnnotations_637_);
v_preserveNondepLet_boxed_647_ = lean_unbox(v_preserveNondepLet_638_);
v___y_28967__boxed_648_ = lean_unbox(v___y_639_);
v_res_649_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg(v_e_635_, v_k_636_, v_cleanupAnnotations_boxed_646_, v_preserveNondepLet_boxed_647_, v___y_28967__boxed_648_, v___y_640_, v___y_641_, v___y_642_, v___y_643_, v___y_644_);
lean_dec(v___y_644_);
lean_dec_ref(v___y_643_);
lean_dec(v___y_642_);
lean_dec_ref(v___y_641_);
lean_dec(v___y_640_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6(lean_object* v_00_u03b1_650_, lean_object* v_e_651_, lean_object* v_k_652_, uint8_t v_cleanupAnnotations_653_, uint8_t v_preserveNondepLet_654_, uint8_t v___y_655_, lean_object* v___y_656_, lean_object* v___y_657_, lean_object* v___y_658_, lean_object* v___y_659_, lean_object* v___y_660_){
_start:
{
lean_object* v___x_662_; 
v___x_662_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg(v_e_651_, v_k_652_, v_cleanupAnnotations_653_, v_preserveNondepLet_654_, v___y_655_, v___y_656_, v___y_657_, v___y_658_, v___y_659_, v___y_660_);
return v___x_662_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___boxed(lean_object* v_00_u03b1_663_, lean_object* v_e_664_, lean_object* v_k_665_, lean_object* v_cleanupAnnotations_666_, lean_object* v_preserveNondepLet_667_, lean_object* v___y_668_, lean_object* v___y_669_, lean_object* v___y_670_, lean_object* v___y_671_, lean_object* v___y_672_, lean_object* v___y_673_, lean_object* v___y_674_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_675_; uint8_t v_preserveNondepLet_boxed_676_; uint8_t v___y_29017__boxed_677_; lean_object* v_res_678_; 
v_cleanupAnnotations_boxed_675_ = lean_unbox(v_cleanupAnnotations_666_);
v_preserveNondepLet_boxed_676_ = lean_unbox(v_preserveNondepLet_667_);
v___y_29017__boxed_677_ = lean_unbox(v___y_668_);
v_res_678_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6(v_00_u03b1_663_, v_e_664_, v_k_665_, v_cleanupAnnotations_boxed_675_, v_preserveNondepLet_boxed_676_, v___y_29017__boxed_677_, v___y_669_, v___y_670_, v___y_671_, v___y_672_, v___y_673_);
lean_dec(v___y_673_);
lean_dec_ref(v___y_672_);
lean_dec(v___y_671_);
lean_dec_ref(v___y_670_);
lean_dec(v___y_669_);
return v_res_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(lean_object* v_type_679_, lean_object* v_k_680_, uint8_t v_cleanupAnnotations_681_, uint8_t v___y_682_, lean_object* v___y_683_, lean_object* v___y_684_, lean_object* v___y_685_, lean_object* v___y_686_, lean_object* v___y_687_){
_start:
{
lean_object* v___x_689_; lean_object* v___f_690_; uint8_t v___x_691_; lean_object* v___x_692_; lean_object* v___x_693_; 
v___x_689_ = lean_box(v___y_682_);
lean_inc(v___y_683_);
v___f_690_ = lean_alloc_closure((void*)(l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg___lam__0___boxed), 10, 3);
lean_closure_set(v___f_690_, 0, v_k_680_);
lean_closure_set(v___f_690_, 1, v___x_689_);
lean_closure_set(v___f_690_, 2, v___y_683_);
v___x_691_ = 0;
v___x_692_ = lean_box(0);
v___x_693_ = l___private_Lean_Meta_Basic_0__Lean_Meta_forallTelescopeReducingAuxAux(lean_box(0), v___x_691_, v___x_692_, v_type_679_, v___f_690_, v_cleanupAnnotations_681_, v___x_691_, v___y_684_, v___y_685_, v___y_686_, v___y_687_);
if (lean_obj_tag(v___x_693_) == 0)
{
return v___x_693_;
}
else
{
lean_object* v_a_694_; lean_object* v___x_696_; uint8_t v_isShared_697_; uint8_t v_isSharedCheck_701_; 
v_a_694_ = lean_ctor_get(v___x_693_, 0);
v_isSharedCheck_701_ = !lean_is_exclusive(v___x_693_);
if (v_isSharedCheck_701_ == 0)
{
v___x_696_ = v___x_693_;
v_isShared_697_ = v_isSharedCheck_701_;
goto v_resetjp_695_;
}
else
{
lean_inc(v_a_694_);
lean_dec(v___x_693_);
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
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg___boxed(lean_object* v_type_702_, lean_object* v_k_703_, lean_object* v_cleanupAnnotations_704_, lean_object* v___y_705_, lean_object* v___y_706_, lean_object* v___y_707_, lean_object* v___y_708_, lean_object* v___y_709_, lean_object* v___y_710_, lean_object* v___y_711_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_712_; uint8_t v___y_29040__boxed_713_; lean_object* v_res_714_; 
v_cleanupAnnotations_boxed_712_ = lean_unbox(v_cleanupAnnotations_704_);
v___y_29040__boxed_713_ = lean_unbox(v___y_705_);
v_res_714_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(v_type_702_, v_k_703_, v_cleanupAnnotations_boxed_712_, v___y_29040__boxed_713_, v___y_706_, v___y_707_, v___y_708_, v___y_709_, v___y_710_);
lean_dec(v___y_710_);
lean_dec_ref(v___y_709_);
lean_dec(v___y_708_);
lean_dec_ref(v___y_707_);
lean_dec(v___y_706_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7(lean_object* v_00_u03b1_715_, lean_object* v_type_716_, lean_object* v_k_717_, uint8_t v_cleanupAnnotations_718_, uint8_t v___y_719_, lean_object* v___y_720_, lean_object* v___y_721_, lean_object* v___y_722_, lean_object* v___y_723_, lean_object* v___y_724_){
_start:
{
lean_object* v___x_726_; 
v___x_726_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(v_type_716_, v_k_717_, v_cleanupAnnotations_718_, v___y_719_, v___y_720_, v___y_721_, v___y_722_, v___y_723_, v___y_724_);
return v___x_726_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___boxed(lean_object* v_00_u03b1_727_, lean_object* v_type_728_, lean_object* v_k_729_, lean_object* v_cleanupAnnotations_730_, lean_object* v___y_731_, lean_object* v___y_732_, lean_object* v___y_733_, lean_object* v___y_734_, lean_object* v___y_735_, lean_object* v___y_736_, lean_object* v___y_737_){
_start:
{
uint8_t v_cleanupAnnotations_boxed_738_; uint8_t v___y_29088__boxed_739_; lean_object* v_res_740_; 
v_cleanupAnnotations_boxed_738_ = lean_unbox(v_cleanupAnnotations_730_);
v___y_29088__boxed_739_ = lean_unbox(v___y_731_);
v_res_740_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7(v_00_u03b1_727_, v_type_728_, v_k_729_, v_cleanupAnnotations_boxed_738_, v___y_29088__boxed_739_, v___y_732_, v___y_733_, v___y_734_, v___y_735_, v___y_736_);
lean_dec(v___y_736_);
lean_dec_ref(v___y_735_);
lean_dec(v___y_734_);
lean_dec_ref(v___y_733_);
lean_dec(v___y_732_);
return v_res_740_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4_spec__11___redArg(lean_object* v_x_741_, lean_object* v_x_742_, lean_object* v_x_743_, lean_object* v_x_744_){
_start:
{
lean_object* v_ks_745_; lean_object* v_vs_746_; lean_object* v___x_748_; uint8_t v_isShared_749_; uint8_t v_isSharedCheck_770_; 
v_ks_745_ = lean_ctor_get(v_x_741_, 0);
v_vs_746_ = lean_ctor_get(v_x_741_, 1);
v_isSharedCheck_770_ = !lean_is_exclusive(v_x_741_);
if (v_isSharedCheck_770_ == 0)
{
v___x_748_ = v_x_741_;
v_isShared_749_ = v_isSharedCheck_770_;
goto v_resetjp_747_;
}
else
{
lean_inc(v_vs_746_);
lean_inc(v_ks_745_);
lean_dec(v_x_741_);
v___x_748_ = lean_box(0);
v_isShared_749_ = v_isSharedCheck_770_;
goto v_resetjp_747_;
}
v_resetjp_747_:
{
lean_object* v___x_750_; uint8_t v___x_751_; 
v___x_750_ = lean_array_get_size(v_ks_745_);
v___x_751_ = lean_nat_dec_lt(v_x_742_, v___x_750_);
if (v___x_751_ == 0)
{
lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v___x_755_; 
lean_dec(v_x_742_);
v___x_752_ = lean_array_push(v_ks_745_, v_x_743_);
v___x_753_ = lean_array_push(v_vs_746_, v_x_744_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 1, v___x_753_);
lean_ctor_set(v___x_748_, 0, v___x_752_);
v___x_755_ = v___x_748_;
goto v_reusejp_754_;
}
else
{
lean_object* v_reuseFailAlloc_756_; 
v_reuseFailAlloc_756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_756_, 0, v___x_752_);
lean_ctor_set(v_reuseFailAlloc_756_, 1, v___x_753_);
v___x_755_ = v_reuseFailAlloc_756_;
goto v_reusejp_754_;
}
v_reusejp_754_:
{
return v___x_755_;
}
}
else
{
lean_object* v_k_x27_757_; uint8_t v___x_758_; 
v_k_x27_757_ = lean_array_fget_borrowed(v_ks_745_, v_x_742_);
v___x_758_ = l_Lean_instBEqFVarId_beq(v_x_743_, v_k_x27_757_);
if (v___x_758_ == 0)
{
lean_object* v___x_760_; 
if (v_isShared_749_ == 0)
{
v___x_760_ = v___x_748_;
goto v_reusejp_759_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_ks_745_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_vs_746_);
v___x_760_ = v_reuseFailAlloc_764_;
goto v_reusejp_759_;
}
v_reusejp_759_:
{
lean_object* v___x_761_; lean_object* v___x_762_; 
v___x_761_ = lean_unsigned_to_nat(1u);
v___x_762_ = lean_nat_add(v_x_742_, v___x_761_);
lean_dec(v_x_742_);
v_x_741_ = v___x_760_;
v_x_742_ = v___x_762_;
goto _start;
}
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_768_; 
v___x_765_ = lean_array_fset(v_ks_745_, v_x_742_, v_x_743_);
v___x_766_ = lean_array_fset(v_vs_746_, v_x_742_, v_x_744_);
lean_dec(v_x_742_);
if (v_isShared_749_ == 0)
{
lean_ctor_set(v___x_748_, 1, v___x_766_);
lean_ctor_set(v___x_748_, 0, v___x_765_);
v___x_768_ = v___x_748_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_769_; 
v_reuseFailAlloc_769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_769_, 0, v___x_765_);
lean_ctor_set(v_reuseFailAlloc_769_, 1, v___x_766_);
v___x_768_ = v_reuseFailAlloc_769_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
return v___x_768_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4___redArg(lean_object* v_n_771_, lean_object* v_k_772_, lean_object* v_v_773_){
_start:
{
lean_object* v___x_774_; lean_object* v___x_775_; 
v___x_774_ = lean_unsigned_to_nat(0u);
v___x_775_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4_spec__11___redArg(v_n_771_, v___x_774_, v_k_772_, v_v_773_);
return v___x_775_;
}
}
static lean_object* _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_776_; 
v___x_776_ = l_Lean_PersistentHashMap_mkEmptyEntries___redArg();
return v___x_776_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg(lean_object* v_x_777_, size_t v_x_778_, size_t v_x_779_, lean_object* v_x_780_, lean_object* v_x_781_){
_start:
{
if (lean_obj_tag(v_x_777_) == 0)
{
lean_object* v_es_782_; size_t v___x_783_; size_t v___x_784_; lean_object* v_j_785_; lean_object* v___x_786_; uint8_t v___x_787_; 
v_es_782_ = lean_ctor_get(v_x_777_, 0);
v___x_783_ = ((size_t)31ULL);
v___x_784_ = lean_usize_land(v_x_778_, v___x_783_);
v_j_785_ = lean_usize_to_nat(v___x_784_);
v___x_786_ = lean_array_get_size(v_es_782_);
v___x_787_ = lean_nat_dec_lt(v_j_785_, v___x_786_);
if (v___x_787_ == 0)
{
lean_dec(v_j_785_);
lean_dec(v_x_781_);
lean_dec(v_x_780_);
return v_x_777_;
}
else
{
lean_object* v___x_789_; uint8_t v_isShared_790_; uint8_t v_isSharedCheck_826_; 
lean_inc_ref(v_es_782_);
v_isSharedCheck_826_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_826_ == 0)
{
lean_object* v_unused_827_; 
v_unused_827_ = lean_ctor_get(v_x_777_, 0);
lean_dec(v_unused_827_);
v___x_789_ = v_x_777_;
v_isShared_790_ = v_isSharedCheck_826_;
goto v_resetjp_788_;
}
else
{
lean_dec(v_x_777_);
v___x_789_ = lean_box(0);
v_isShared_790_ = v_isSharedCheck_826_;
goto v_resetjp_788_;
}
v_resetjp_788_:
{
lean_object* v_v_791_; lean_object* v___x_792_; lean_object* v_xs_x27_793_; lean_object* v___y_795_; 
v_v_791_ = lean_array_fget(v_es_782_, v_j_785_);
v___x_792_ = lean_box(0);
v_xs_x27_793_ = lean_array_fset(v_es_782_, v_j_785_, v___x_792_);
switch(lean_obj_tag(v_v_791_))
{
case 0:
{
lean_object* v_key_800_; lean_object* v_val_801_; lean_object* v___x_803_; uint8_t v_isShared_804_; uint8_t v_isSharedCheck_811_; 
v_key_800_ = lean_ctor_get(v_v_791_, 0);
v_val_801_ = lean_ctor_get(v_v_791_, 1);
v_isSharedCheck_811_ = !lean_is_exclusive(v_v_791_);
if (v_isSharedCheck_811_ == 0)
{
v___x_803_ = v_v_791_;
v_isShared_804_ = v_isSharedCheck_811_;
goto v_resetjp_802_;
}
else
{
lean_inc(v_val_801_);
lean_inc(v_key_800_);
lean_dec(v_v_791_);
v___x_803_ = lean_box(0);
v_isShared_804_ = v_isSharedCheck_811_;
goto v_resetjp_802_;
}
v_resetjp_802_:
{
uint8_t v___x_805_; 
v___x_805_ = l_Lean_instBEqFVarId_beq(v_x_780_, v_key_800_);
if (v___x_805_ == 0)
{
lean_object* v___x_806_; lean_object* v___x_807_; 
lean_del_object(v___x_803_);
v___x_806_ = l_Lean_PersistentHashMap_mkCollisionNode___redArg(v_key_800_, v_val_801_, v_x_780_, v_x_781_);
v___x_807_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_807_, 0, v___x_806_);
v___y_795_ = v___x_807_;
goto v___jp_794_;
}
else
{
lean_object* v___x_809_; 
lean_dec(v_val_801_);
lean_dec(v_key_800_);
if (v_isShared_804_ == 0)
{
lean_ctor_set(v___x_803_, 1, v_x_781_);
lean_ctor_set(v___x_803_, 0, v_x_780_);
v___x_809_ = v___x_803_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v_x_780_);
lean_ctor_set(v_reuseFailAlloc_810_, 1, v_x_781_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
v___y_795_ = v___x_809_;
goto v___jp_794_;
}
}
}
}
case 1:
{
lean_object* v_node_812_; lean_object* v___x_814_; uint8_t v_isShared_815_; uint8_t v_isSharedCheck_824_; 
v_node_812_ = lean_ctor_get(v_v_791_, 0);
v_isSharedCheck_824_ = !lean_is_exclusive(v_v_791_);
if (v_isSharedCheck_824_ == 0)
{
v___x_814_ = v_v_791_;
v_isShared_815_ = v_isSharedCheck_824_;
goto v_resetjp_813_;
}
else
{
lean_inc(v_node_812_);
lean_dec(v_v_791_);
v___x_814_ = lean_box(0);
v_isShared_815_ = v_isSharedCheck_824_;
goto v_resetjp_813_;
}
v_resetjp_813_:
{
size_t v___x_816_; size_t v___x_817_; size_t v___x_818_; size_t v___x_819_; lean_object* v___x_820_; lean_object* v___x_822_; 
v___x_816_ = ((size_t)5ULL);
v___x_817_ = lean_usize_shift_right(v_x_778_, v___x_816_);
v___x_818_ = ((size_t)1ULL);
v___x_819_ = lean_usize_add(v_x_779_, v___x_818_);
v___x_820_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg(v_node_812_, v___x_817_, v___x_819_, v_x_780_, v_x_781_);
if (v_isShared_815_ == 0)
{
lean_ctor_set(v___x_814_, 0, v___x_820_);
v___x_822_ = v___x_814_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_823_; 
v_reuseFailAlloc_823_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_823_, 0, v___x_820_);
v___x_822_ = v_reuseFailAlloc_823_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
v___y_795_ = v___x_822_;
goto v___jp_794_;
}
}
}
default: 
{
lean_object* v___x_825_; 
v___x_825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_825_, 0, v_x_780_);
lean_ctor_set(v___x_825_, 1, v_x_781_);
v___y_795_ = v___x_825_;
goto v___jp_794_;
}
}
v___jp_794_:
{
lean_object* v___x_796_; lean_object* v___x_798_; 
v___x_796_ = lean_array_fset(v_xs_x27_793_, v_j_785_, v___y_795_);
lean_dec(v_j_785_);
if (v_isShared_790_ == 0)
{
lean_ctor_set(v___x_789_, 0, v___x_796_);
v___x_798_ = v___x_789_;
goto v_reusejp_797_;
}
else
{
lean_object* v_reuseFailAlloc_799_; 
v_reuseFailAlloc_799_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_799_, 0, v___x_796_);
v___x_798_ = v_reuseFailAlloc_799_;
goto v_reusejp_797_;
}
v_reusejp_797_:
{
return v___x_798_;
}
}
}
}
}
else
{
lean_object* v_ks_828_; lean_object* v_vs_829_; lean_object* v___x_831_; uint8_t v_isShared_832_; uint8_t v_isSharedCheck_847_; 
v_ks_828_ = lean_ctor_get(v_x_777_, 0);
v_vs_829_ = lean_ctor_get(v_x_777_, 1);
v_isSharedCheck_847_ = !lean_is_exclusive(v_x_777_);
if (v_isSharedCheck_847_ == 0)
{
v___x_831_ = v_x_777_;
v_isShared_832_ = v_isSharedCheck_847_;
goto v_resetjp_830_;
}
else
{
lean_inc(v_vs_829_);
lean_inc(v_ks_828_);
lean_dec(v_x_777_);
v___x_831_ = lean_box(0);
v_isShared_832_ = v_isSharedCheck_847_;
goto v_resetjp_830_;
}
v_resetjp_830_:
{
lean_object* v___x_834_; 
if (v_isShared_832_ == 0)
{
v___x_834_ = v___x_831_;
goto v_reusejp_833_;
}
else
{
lean_object* v_reuseFailAlloc_846_; 
v_reuseFailAlloc_846_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_846_, 0, v_ks_828_);
lean_ctor_set(v_reuseFailAlloc_846_, 1, v_vs_829_);
v___x_834_ = v_reuseFailAlloc_846_;
goto v_reusejp_833_;
}
v_reusejp_833_:
{
lean_object* v_newNode_835_; size_t v___x_836_; uint8_t v___x_837_; 
v_newNode_835_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4___redArg(v___x_834_, v_x_780_, v_x_781_);
v___x_836_ = ((size_t)7ULL);
v___x_837_ = lean_usize_dec_le(v___x_836_, v_x_779_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; lean_object* v___x_839_; uint8_t v___x_840_; 
v___x_838_ = l_Lean_PersistentHashMap_getCollisionNodeSize___redArg(v_newNode_835_);
v___x_839_ = lean_unsigned_to_nat(4u);
v___x_840_ = lean_nat_dec_lt(v___x_838_, v___x_839_);
lean_dec(v___x_838_);
if (v___x_840_ == 0)
{
lean_object* v_ks_841_; lean_object* v_vs_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; 
v_ks_841_ = lean_ctor_get(v_newNode_835_, 0);
lean_inc_ref(v_ks_841_);
v_vs_842_ = lean_ctor_get(v_newNode_835_, 1);
lean_inc_ref(v_vs_842_);
lean_dec_ref(v_newNode_835_);
v___x_843_ = lean_unsigned_to_nat(0u);
v___x_844_ = lean_obj_once(&l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___closed__0, &l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___closed__0_once, _init_l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___closed__0);
v___x_845_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___redArg(v_x_779_, v_ks_841_, v_vs_842_, v___x_843_, v___x_844_);
lean_dec_ref(v_vs_842_);
lean_dec_ref(v_ks_841_);
return v___x_845_;
}
else
{
return v_newNode_835_;
}
}
else
{
return v_newNode_835_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___redArg(size_t v_depth_848_, lean_object* v_keys_849_, lean_object* v_vals_850_, lean_object* v_i_851_, lean_object* v_entries_852_){
_start:
{
lean_object* v___x_853_; uint8_t v___x_854_; 
v___x_853_ = lean_array_get_size(v_keys_849_);
v___x_854_ = lean_nat_dec_lt(v_i_851_, v___x_853_);
if (v___x_854_ == 0)
{
lean_dec(v_i_851_);
return v_entries_852_;
}
else
{
lean_object* v_k_855_; lean_object* v_v_856_; uint64_t v___x_857_; size_t v_h_858_; size_t v___x_859_; lean_object* v___x_860_; size_t v___x_861_; size_t v___x_862_; size_t v___x_863_; size_t v_h_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_k_855_ = lean_array_fget_borrowed(v_keys_849_, v_i_851_);
v_v_856_ = lean_array_fget_borrowed(v_vals_850_, v_i_851_);
v___x_857_ = l_Lean_instHashableFVarId_hash(v_k_855_);
v_h_858_ = lean_uint64_to_usize(v___x_857_);
v___x_859_ = ((size_t)5ULL);
v___x_860_ = lean_unsigned_to_nat(1u);
v___x_861_ = ((size_t)1ULL);
v___x_862_ = lean_usize_sub(v_depth_848_, v___x_861_);
v___x_863_ = lean_usize_mul(v___x_859_, v___x_862_);
v_h_864_ = lean_usize_shift_right(v_h_858_, v___x_863_);
v___x_865_ = lean_nat_add(v_i_851_, v___x_860_);
lean_dec(v_i_851_);
lean_inc(v_v_856_);
lean_inc(v_k_855_);
v___x_866_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg(v_entries_852_, v_h_864_, v_depth_848_, v_k_855_, v_v_856_);
v_i_851_ = v___x_865_;
v_entries_852_ = v___x_866_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___redArg___boxed(lean_object* v_depth_868_, lean_object* v_keys_869_, lean_object* v_vals_870_, lean_object* v_i_871_, lean_object* v_entries_872_){
_start:
{
size_t v_depth_boxed_873_; lean_object* v_res_874_; 
v_depth_boxed_873_ = lean_unbox_usize(v_depth_868_);
lean_dec(v_depth_868_);
v_res_874_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___redArg(v_depth_boxed_873_, v_keys_869_, v_vals_870_, v_i_871_, v_entries_872_);
lean_dec_ref(v_vals_870_);
lean_dec_ref(v_keys_869_);
return v_res_874_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg___boxed(lean_object* v_x_875_, lean_object* v_x_876_, lean_object* v_x_877_, lean_object* v_x_878_, lean_object* v_x_879_){
_start:
{
size_t v_x_29188__boxed_880_; size_t v_x_29189__boxed_881_; lean_object* v_res_882_; 
v_x_29188__boxed_880_ = lean_unbox_usize(v_x_876_);
lean_dec(v_x_876_);
v_x_29189__boxed_881_ = lean_unbox_usize(v_x_877_);
lean_dec(v_x_877_);
v_res_882_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg(v_x_875_, v_x_29188__boxed_880_, v_x_29189__boxed_881_, v_x_878_, v_x_879_);
return v_res_882_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0___redArg(lean_object* v_x_883_, lean_object* v_x_884_, lean_object* v_x_885_){
_start:
{
uint64_t v___x_886_; size_t v___x_887_; size_t v___x_888_; lean_object* v___x_889_; 
v___x_886_ = l_Lean_instHashableFVarId_hash(v_x_884_);
v___x_887_ = lean_uint64_to_usize(v___x_886_);
v___x_888_ = ((size_t)1ULL);
v___x_889_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg(v_x_883_, v___x_887_, v___x_888_, v_x_884_, v_x_885_);
return v___x_889_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(lean_object* v_a_890_, lean_object* v_b_891_, lean_object* v_x_892_){
_start:
{
if (lean_obj_tag(v_x_892_) == 0)
{
lean_dec(v_b_891_);
lean_dec_ref(v_a_890_);
return v_x_892_;
}
else
{
lean_object* v_key_893_; lean_object* v_value_894_; lean_object* v_tail_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_907_; 
v_key_893_ = lean_ctor_get(v_x_892_, 0);
v_value_894_ = lean_ctor_get(v_x_892_, 1);
v_tail_895_ = lean_ctor_get(v_x_892_, 2);
v_isSharedCheck_907_ = !lean_is_exclusive(v_x_892_);
if (v_isSharedCheck_907_ == 0)
{
v___x_897_ = v_x_892_;
v_isShared_898_ = v_isSharedCheck_907_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_tail_895_);
lean_inc(v_value_894_);
lean_inc(v_key_893_);
lean_dec(v_x_892_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_907_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint8_t v___x_899_; 
v___x_899_ = l_Lean_ExprStructEq_beq(v_key_893_, v_a_890_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; lean_object* v___x_902_; 
v___x_900_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(v_a_890_, v_b_891_, v_tail_895_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 2, v___x_900_);
v___x_902_ = v___x_897_;
goto v_reusejp_901_;
}
else
{
lean_object* v_reuseFailAlloc_903_; 
v_reuseFailAlloc_903_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_903_, 0, v_key_893_);
lean_ctor_set(v_reuseFailAlloc_903_, 1, v_value_894_);
lean_ctor_set(v_reuseFailAlloc_903_, 2, v___x_900_);
v___x_902_ = v_reuseFailAlloc_903_;
goto v_reusejp_901_;
}
v_reusejp_901_:
{
return v___x_902_;
}
}
else
{
lean_object* v___x_905_; 
lean_dec(v_value_894_);
lean_dec(v_key_893_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v_b_891_);
lean_ctor_set(v___x_897_, 0, v_a_890_);
v___x_905_ = v___x_897_;
goto v_reusejp_904_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v_a_890_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_b_891_);
lean_ctor_set(v_reuseFailAlloc_906_, 2, v_tail_895_);
v___x_905_ = v_reuseFailAlloc_906_;
goto v_reusejp_904_;
}
v_reusejp_904_:
{
return v___x_905_;
}
}
}
}
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(lean_object* v_a_908_, lean_object* v_x_909_){
_start:
{
if (lean_obj_tag(v_x_909_) == 0)
{
uint8_t v___x_910_; 
v___x_910_ = 0;
return v___x_910_;
}
else
{
lean_object* v_key_911_; lean_object* v_tail_912_; uint8_t v___x_913_; 
v_key_911_ = lean_ctor_get(v_x_909_, 0);
v_tail_912_ = lean_ctor_get(v_x_909_, 2);
v___x_913_ = l_Lean_ExprStructEq_beq(v_key_911_, v_a_908_);
if (v___x_913_ == 0)
{
v_x_909_ = v_tail_912_;
goto _start;
}
else
{
return v___x_913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg___boxed(lean_object* v_a_915_, lean_object* v_x_916_){
_start:
{
uint8_t v_res_917_; lean_object* v_r_918_; 
v_res_917_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(v_a_915_, v_x_916_);
lean_dec(v_x_916_);
lean_dec_ref(v_a_915_);
v_r_918_ = lean_box(v_res_917_);
return v_r_918_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(lean_object* v_x_919_, lean_object* v_x_920_){
_start:
{
if (lean_obj_tag(v_x_920_) == 0)
{
return v_x_919_;
}
else
{
lean_object* v_key_921_; lean_object* v_value_922_; lean_object* v_tail_923_; lean_object* v___x_925_; uint8_t v_isShared_926_; uint8_t v_isSharedCheck_946_; 
v_key_921_ = lean_ctor_get(v_x_920_, 0);
v_value_922_ = lean_ctor_get(v_x_920_, 1);
v_tail_923_ = lean_ctor_get(v_x_920_, 2);
v_isSharedCheck_946_ = !lean_is_exclusive(v_x_920_);
if (v_isSharedCheck_946_ == 0)
{
v___x_925_ = v_x_920_;
v_isShared_926_ = v_isSharedCheck_946_;
goto v_resetjp_924_;
}
else
{
lean_inc(v_tail_923_);
lean_inc(v_value_922_);
lean_inc(v_key_921_);
lean_dec(v_x_920_);
v___x_925_ = lean_box(0);
v_isShared_926_ = v_isSharedCheck_946_;
goto v_resetjp_924_;
}
v_resetjp_924_:
{
lean_object* v___x_927_; uint64_t v___x_928_; uint64_t v___x_929_; uint64_t v___x_930_; uint64_t v_fold_931_; uint64_t v___x_932_; uint64_t v___x_933_; uint64_t v___x_934_; size_t v___x_935_; size_t v___x_936_; size_t v___x_937_; size_t v___x_938_; size_t v___x_939_; lean_object* v___x_940_; lean_object* v___x_942_; 
v___x_927_ = lean_array_get_size(v_x_919_);
v___x_928_ = l_Lean_ExprStructEq_hash(v_key_921_);
v___x_929_ = 32ULL;
v___x_930_ = lean_uint64_shift_right(v___x_928_, v___x_929_);
v_fold_931_ = lean_uint64_xor(v___x_928_, v___x_930_);
v___x_932_ = 16ULL;
v___x_933_ = lean_uint64_shift_right(v_fold_931_, v___x_932_);
v___x_934_ = lean_uint64_xor(v_fold_931_, v___x_933_);
v___x_935_ = lean_uint64_to_usize(v___x_934_);
v___x_936_ = lean_usize_of_nat(v___x_927_);
v___x_937_ = ((size_t)1ULL);
v___x_938_ = lean_usize_sub(v___x_936_, v___x_937_);
v___x_939_ = lean_usize_land(v___x_935_, v___x_938_);
v___x_940_ = lean_array_uget_borrowed(v_x_919_, v___x_939_);
lean_inc(v___x_940_);
if (v_isShared_926_ == 0)
{
lean_ctor_set(v___x_925_, 2, v___x_940_);
v___x_942_ = v___x_925_;
goto v_reusejp_941_;
}
else
{
lean_object* v_reuseFailAlloc_945_; 
v_reuseFailAlloc_945_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_945_, 0, v_key_921_);
lean_ctor_set(v_reuseFailAlloc_945_, 1, v_value_922_);
lean_ctor_set(v_reuseFailAlloc_945_, 2, v___x_940_);
v___x_942_ = v_reuseFailAlloc_945_;
goto v_reusejp_941_;
}
v_reusejp_941_:
{
lean_object* v___x_943_; 
v___x_943_ = lean_array_uset(v_x_919_, v___x_939_, v___x_942_);
v_x_919_ = v___x_943_;
v_x_920_ = v_tail_923_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(lean_object* v_i_947_, lean_object* v_source_948_, lean_object* v_target_949_){
_start:
{
lean_object* v___x_950_; uint8_t v___x_951_; 
v___x_950_ = lean_array_get_size(v_source_948_);
v___x_951_ = lean_nat_dec_lt(v_i_947_, v___x_950_);
if (v___x_951_ == 0)
{
lean_dec_ref(v_source_948_);
lean_dec(v_i_947_);
return v_target_949_;
}
else
{
lean_object* v_es_952_; lean_object* v___x_953_; lean_object* v_source_954_; lean_object* v_target_955_; lean_object* v___x_956_; lean_object* v___x_957_; 
v_es_952_ = lean_array_fget(v_source_948_, v_i_947_);
v___x_953_ = lean_box(0);
v_source_954_ = lean_array_fset(v_source_948_, v_i_947_, v___x_953_);
v_target_955_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(v_target_949_, v_es_952_);
v___x_956_ = lean_unsigned_to_nat(1u);
v___x_957_ = lean_nat_add(v_i_947_, v___x_956_);
lean_dec(v_i_947_);
v_i_947_ = v___x_957_;
v_source_948_ = v_source_954_;
v_target_949_ = v_target_955_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(lean_object* v_data_959_){
_start:
{
lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v_nbuckets_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; 
v___x_960_ = lean_array_get_size(v_data_959_);
v___x_961_ = lean_unsigned_to_nat(2u);
v_nbuckets_962_ = lean_nat_mul(v___x_960_, v___x_961_);
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = lean_box(0);
v___x_965_ = lean_mk_array(v_nbuckets_962_, v___x_964_);
v___x_966_ = lean_array_propagate_mark(v_data_959_, v___x_965_);
v___x_967_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(v___x_963_, v_data_959_, v___x_966_);
return v___x_967_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(lean_object* v_m_968_, lean_object* v_a_969_, lean_object* v_b_970_){
_start:
{
lean_object* v_size_971_; lean_object* v_buckets_972_; lean_object* v___x_974_; uint8_t v_isShared_975_; uint8_t v_isSharedCheck_1015_; 
v_size_971_ = lean_ctor_get(v_m_968_, 0);
v_buckets_972_ = lean_ctor_get(v_m_968_, 1);
v_isSharedCheck_1015_ = !lean_is_exclusive(v_m_968_);
if (v_isSharedCheck_1015_ == 0)
{
v___x_974_ = v_m_968_;
v_isShared_975_ = v_isSharedCheck_1015_;
goto v_resetjp_973_;
}
else
{
lean_inc(v_buckets_972_);
lean_inc(v_size_971_);
lean_dec(v_m_968_);
v___x_974_ = lean_box(0);
v_isShared_975_ = v_isSharedCheck_1015_;
goto v_resetjp_973_;
}
v_resetjp_973_:
{
lean_object* v___x_976_; uint64_t v___x_977_; uint64_t v___x_978_; uint64_t v___x_979_; uint64_t v_fold_980_; uint64_t v___x_981_; uint64_t v___x_982_; uint64_t v___x_983_; size_t v___x_984_; size_t v___x_985_; size_t v___x_986_; size_t v___x_987_; size_t v___x_988_; lean_object* v_bkt_989_; uint8_t v___x_990_; 
v___x_976_ = lean_array_get_size(v_buckets_972_);
v___x_977_ = l_Lean_ExprStructEq_hash(v_a_969_);
v___x_978_ = 32ULL;
v___x_979_ = lean_uint64_shift_right(v___x_977_, v___x_978_);
v_fold_980_ = lean_uint64_xor(v___x_977_, v___x_979_);
v___x_981_ = 16ULL;
v___x_982_ = lean_uint64_shift_right(v_fold_980_, v___x_981_);
v___x_983_ = lean_uint64_xor(v_fold_980_, v___x_982_);
v___x_984_ = lean_uint64_to_usize(v___x_983_);
v___x_985_ = lean_usize_of_nat(v___x_976_);
v___x_986_ = ((size_t)1ULL);
v___x_987_ = lean_usize_sub(v___x_985_, v___x_986_);
v___x_988_ = lean_usize_land(v___x_984_, v___x_987_);
v_bkt_989_ = lean_array_uget_borrowed(v_buckets_972_, v___x_988_);
v___x_990_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(v_a_969_, v_bkt_989_);
if (v___x_990_ == 0)
{
lean_object* v___x_991_; lean_object* v_size_x27_992_; lean_object* v___x_993_; lean_object* v_buckets_x27_994_; lean_object* v___x_995_; lean_object* v___x_996_; lean_object* v___x_997_; lean_object* v___x_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v___x_991_ = lean_unsigned_to_nat(1u);
v_size_x27_992_ = lean_nat_add(v_size_971_, v___x_991_);
lean_dec(v_size_971_);
lean_inc(v_bkt_989_);
v___x_993_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_993_, 0, v_a_969_);
lean_ctor_set(v___x_993_, 1, v_b_970_);
lean_ctor_set(v___x_993_, 2, v_bkt_989_);
v_buckets_x27_994_ = lean_array_uset(v_buckets_972_, v___x_988_, v___x_993_);
v___x_995_ = lean_unsigned_to_nat(4u);
v___x_996_ = lean_nat_mul(v_size_x27_992_, v___x_995_);
v___x_997_ = lean_unsigned_to_nat(3u);
v___x_998_ = lean_nat_div(v___x_996_, v___x_997_);
lean_dec(v___x_996_);
v___x_999_ = lean_array_get_size(v_buckets_x27_994_);
v___x_1000_ = lean_nat_dec_le(v___x_998_, v___x_999_);
lean_dec(v___x_998_);
if (v___x_1000_ == 0)
{
lean_object* v_val_1001_; lean_object* v___x_1003_; 
v_val_1001_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(v_buckets_x27_994_);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 1, v_val_1001_);
lean_ctor_set(v___x_974_, 0, v_size_x27_992_);
v___x_1003_ = v___x_974_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_size_x27_992_);
lean_ctor_set(v_reuseFailAlloc_1004_, 1, v_val_1001_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
else
{
lean_object* v___x_1006_; 
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 1, v_buckets_x27_994_);
lean_ctor_set(v___x_974_, 0, v_size_x27_992_);
v___x_1006_ = v___x_974_;
goto v_reusejp_1005_;
}
else
{
lean_object* v_reuseFailAlloc_1007_; 
v_reuseFailAlloc_1007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1007_, 0, v_size_x27_992_);
lean_ctor_set(v_reuseFailAlloc_1007_, 1, v_buckets_x27_994_);
v___x_1006_ = v_reuseFailAlloc_1007_;
goto v_reusejp_1005_;
}
v_reusejp_1005_:
{
return v___x_1006_;
}
}
}
else
{
lean_object* v___x_1008_; lean_object* v_buckets_x27_1009_; lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v___x_1013_; 
lean_inc(v_bkt_989_);
v___x_1008_ = lean_box(0);
v_buckets_x27_1009_ = lean_array_uset(v_buckets_972_, v___x_988_, v___x_1008_);
v___x_1010_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(v_a_969_, v_b_970_, v_bkt_989_);
v___x_1011_ = lean_array_uset(v_buckets_x27_1009_, v___x_988_, v___x_1010_);
if (v_isShared_975_ == 0)
{
lean_ctor_set(v___x_974_, 1, v___x_1011_);
v___x_1013_ = v___x_974_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1014_; 
v_reuseFailAlloc_1014_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1014_, 0, v_size_971_);
lean_ctor_set(v_reuseFailAlloc_1014_, 1, v___x_1011_);
v___x_1013_ = v_reuseFailAlloc_1014_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
return v___x_1013_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(lean_object* v_a_1016_, lean_object* v_x_1017_){
_start:
{
if (lean_obj_tag(v_x_1017_) == 0)
{
lean_object* v___x_1018_; 
v___x_1018_ = lean_box(0);
return v___x_1018_;
}
else
{
lean_object* v_key_1019_; lean_object* v_value_1020_; lean_object* v_tail_1021_; uint8_t v___x_1022_; 
v_key_1019_ = lean_ctor_get(v_x_1017_, 0);
v_value_1020_ = lean_ctor_get(v_x_1017_, 1);
v_tail_1021_ = lean_ctor_get(v_x_1017_, 2);
v___x_1022_ = l_Lean_ExprStructEq_beq(v_key_1019_, v_a_1016_);
if (v___x_1022_ == 0)
{
v_x_1017_ = v_tail_1021_;
goto _start;
}
else
{
lean_object* v___x_1024_; 
lean_inc(v_value_1020_);
v___x_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1024_, 0, v_value_1020_);
return v___x_1024_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg___boxed(lean_object* v_a_1025_, lean_object* v_x_1026_){
_start:
{
lean_object* v_res_1027_; 
v_res_1027_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(v_a_1025_, v_x_1026_);
lean_dec(v_x_1026_);
lean_dec_ref(v_a_1025_);
return v_res_1027_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(lean_object* v_m_1028_, lean_object* v_a_1029_){
_start:
{
lean_object* v_buckets_1030_; lean_object* v___x_1031_; uint64_t v___x_1032_; uint64_t v___x_1033_; uint64_t v___x_1034_; uint64_t v_fold_1035_; uint64_t v___x_1036_; uint64_t v___x_1037_; uint64_t v___x_1038_; size_t v___x_1039_; size_t v___x_1040_; size_t v___x_1041_; size_t v___x_1042_; size_t v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; 
v_buckets_1030_ = lean_ctor_get(v_m_1028_, 1);
v___x_1031_ = lean_array_get_size(v_buckets_1030_);
v___x_1032_ = l_Lean_ExprStructEq_hash(v_a_1029_);
v___x_1033_ = 32ULL;
v___x_1034_ = lean_uint64_shift_right(v___x_1032_, v___x_1033_);
v_fold_1035_ = lean_uint64_xor(v___x_1032_, v___x_1034_);
v___x_1036_ = 16ULL;
v___x_1037_ = lean_uint64_shift_right(v_fold_1035_, v___x_1036_);
v___x_1038_ = lean_uint64_xor(v_fold_1035_, v___x_1037_);
v___x_1039_ = lean_uint64_to_usize(v___x_1038_);
v___x_1040_ = lean_usize_of_nat(v___x_1031_);
v___x_1041_ = ((size_t)1ULL);
v___x_1042_ = lean_usize_sub(v___x_1040_, v___x_1041_);
v___x_1043_ = lean_usize_land(v___x_1039_, v___x_1042_);
v___x_1044_ = lean_array_uget_borrowed(v_buckets_1030_, v___x_1043_);
v___x_1045_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(v_a_1029_, v___x_1044_);
return v___x_1045_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg___boxed(lean_object* v_m_1046_, lean_object* v_a_1047_){
_start:
{
lean_object* v_res_1048_; 
v_res_1048_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(v_m_1046_, v_a_1047_);
lean_dec_ref(v_a_1047_);
lean_dec_ref(v_m_1046_);
return v_res_1048_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___redArg(lean_object* v_x_1049_, uint8_t v_isExporting_1050_, uint8_t v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_){
_start:
{
lean_object* v___x_1058_; lean_object* v_env_1059_; lean_object* v___x_1060_; uint8_t v_isModule_1061_; 
v___x_1058_ = lean_st_ref_get(v___y_1056_);
v_env_1059_ = lean_ctor_get(v___x_1058_, 0);
lean_inc_ref(v_env_1059_);
lean_dec(v___x_1058_);
v___x_1060_ = l_Lean_Environment_header(v_env_1059_);
v_isModule_1061_ = lean_ctor_get_uint8(v___x_1060_, sizeof(void*)*8 + 4);
lean_dec_ref(v___x_1060_);
if (v_isModule_1061_ == 0)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; 
lean_dec_ref(v_env_1059_);
v___x_1062_ = lean_box(v___y_1051_);
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1053_);
lean_inc(v___y_1052_);
v___x_1063_ = lean_apply_7(v_x_1049_, v___x_1062_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, lean_box(0));
return v___x_1063_;
}
else
{
uint8_t v_isExporting_1064_; 
v_isExporting_1064_ = lean_ctor_get_uint8(v_env_1059_, sizeof(void*)*13);
lean_dec_ref(v_env_1059_);
if (v_isExporting_1050_ == 0)
{
if (v_isExporting_1064_ == 0)
{
lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1132_ = lean_box(v___y_1051_);
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1053_);
lean_inc(v___y_1052_);
v___x_1133_ = lean_apply_7(v_x_1049_, v___x_1132_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, lean_box(0));
return v___x_1133_;
}
else
{
goto v___jp_1065_;
}
}
else
{
if (v_isExporting_1064_ == 0)
{
goto v___jp_1065_;
}
else
{
lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1134_ = lean_box(v___y_1051_);
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1053_);
lean_inc(v___y_1052_);
v___x_1135_ = lean_apply_7(v_x_1049_, v___x_1134_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, lean_box(0));
return v___x_1135_;
}
}
v___jp_1065_:
{
lean_object* v___x_1066_; lean_object* v_env_1067_; lean_object* v_nextMacroScope_1068_; lean_object* v_ngen_1069_; lean_object* v_auxDeclNGen_1070_; lean_object* v_traceState_1071_; lean_object* v_recordedDeps_1072_; lean_object* v_messages_1073_; lean_object* v_infoState_1074_; lean_object* v_snapshotTasks_1075_; lean_object* v___x_1077_; uint8_t v_isShared_1078_; uint8_t v_isSharedCheck_1130_; 
v___x_1066_ = lean_st_ref_take(v___y_1056_);
v_env_1067_ = lean_ctor_get(v___x_1066_, 0);
v_nextMacroScope_1068_ = lean_ctor_get(v___x_1066_, 1);
v_ngen_1069_ = lean_ctor_get(v___x_1066_, 2);
v_auxDeclNGen_1070_ = lean_ctor_get(v___x_1066_, 3);
v_traceState_1071_ = lean_ctor_get(v___x_1066_, 4);
v_recordedDeps_1072_ = lean_ctor_get(v___x_1066_, 6);
v_messages_1073_ = lean_ctor_get(v___x_1066_, 7);
v_infoState_1074_ = lean_ctor_get(v___x_1066_, 8);
v_snapshotTasks_1075_ = lean_ctor_get(v___x_1066_, 9);
v_isSharedCheck_1130_ = !lean_is_exclusive(v___x_1066_);
if (v_isSharedCheck_1130_ == 0)
{
lean_object* v_unused_1131_; 
v_unused_1131_ = lean_ctor_get(v___x_1066_, 5);
lean_dec(v_unused_1131_);
v___x_1077_ = v___x_1066_;
v_isShared_1078_ = v_isSharedCheck_1130_;
goto v_resetjp_1076_;
}
else
{
lean_inc(v_snapshotTasks_1075_);
lean_inc(v_infoState_1074_);
lean_inc(v_messages_1073_);
lean_inc(v_recordedDeps_1072_);
lean_inc(v_traceState_1071_);
lean_inc(v_auxDeclNGen_1070_);
lean_inc(v_ngen_1069_);
lean_inc(v_nextMacroScope_1068_);
lean_inc(v_env_1067_);
lean_dec(v___x_1066_);
v___x_1077_ = lean_box(0);
v_isShared_1078_ = v_isSharedCheck_1130_;
goto v_resetjp_1076_;
}
v_resetjp_1076_:
{
lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1082_; 
v___x_1079_ = l_Lean_Environment_setExporting(v_env_1067_, v_isExporting_1050_);
v___x_1080_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__1);
if (v_isShared_1078_ == 0)
{
lean_ctor_set(v___x_1077_, 5, v___x_1080_);
lean_ctor_set(v___x_1077_, 0, v___x_1079_);
v___x_1082_ = v___x_1077_;
goto v_reusejp_1081_;
}
else
{
lean_object* v_reuseFailAlloc_1129_; 
v_reuseFailAlloc_1129_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_1129_, 0, v___x_1079_);
lean_ctor_set(v_reuseFailAlloc_1129_, 1, v_nextMacroScope_1068_);
lean_ctor_set(v_reuseFailAlloc_1129_, 2, v_ngen_1069_);
lean_ctor_set(v_reuseFailAlloc_1129_, 3, v_auxDeclNGen_1070_);
lean_ctor_set(v_reuseFailAlloc_1129_, 4, v_traceState_1071_);
lean_ctor_set(v_reuseFailAlloc_1129_, 5, v___x_1080_);
lean_ctor_set(v_reuseFailAlloc_1129_, 6, v_recordedDeps_1072_);
lean_ctor_set(v_reuseFailAlloc_1129_, 7, v_messages_1073_);
lean_ctor_set(v_reuseFailAlloc_1129_, 8, v_infoState_1074_);
lean_ctor_set(v_reuseFailAlloc_1129_, 9, v_snapshotTasks_1075_);
v___x_1082_ = v_reuseFailAlloc_1129_;
goto v_reusejp_1081_;
}
v_reusejp_1081_:
{
lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v_mctx_1085_; lean_object* v_zetaDeltaFVarIds_1086_; lean_object* v_postponed_1087_; lean_object* v_diag_1088_; lean_object* v___x_1090_; uint8_t v_isShared_1091_; uint8_t v_isSharedCheck_1127_; 
v___x_1083_ = lean_st_ref_put(v___y_1056_, v___x_1082_);
v___x_1084_ = lean_st_ref_take(v___y_1054_);
v_mctx_1085_ = lean_ctor_get(v___x_1084_, 0);
v_zetaDeltaFVarIds_1086_ = lean_ctor_get(v___x_1084_, 2);
v_postponed_1087_ = lean_ctor_get(v___x_1084_, 3);
v_diag_1088_ = lean_ctor_get(v___x_1084_, 4);
v_isSharedCheck_1127_ = !lean_is_exclusive(v___x_1084_);
if (v_isSharedCheck_1127_ == 0)
{
lean_object* v_unused_1128_; 
v_unused_1128_ = lean_ctor_get(v___x_1084_, 1);
lean_dec(v_unused_1128_);
v___x_1090_ = v___x_1084_;
v_isShared_1091_ = v_isSharedCheck_1127_;
goto v_resetjp_1089_;
}
else
{
lean_inc(v_diag_1088_);
lean_inc(v_postponed_1087_);
lean_inc(v_zetaDeltaFVarIds_1086_);
lean_inc(v_mctx_1085_);
lean_dec(v___x_1084_);
v___x_1090_ = lean_box(0);
v_isShared_1091_ = v_isSharedCheck_1127_;
goto v_resetjp_1089_;
}
v_resetjp_1089_:
{
lean_object* v___x_1092_; lean_object* v___x_1094_; 
v___x_1092_ = lean_obj_once(&l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5, &l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5_once, _init_l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___closed__5);
if (v_isShared_1091_ == 0)
{
lean_ctor_set(v___x_1090_, 1, v___x_1092_);
v___x_1094_ = v___x_1090_;
goto v_reusejp_1093_;
}
else
{
lean_object* v_reuseFailAlloc_1126_; 
v_reuseFailAlloc_1126_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_1126_, 0, v_mctx_1085_);
lean_ctor_set(v_reuseFailAlloc_1126_, 1, v___x_1092_);
lean_ctor_set(v_reuseFailAlloc_1126_, 2, v_zetaDeltaFVarIds_1086_);
lean_ctor_set(v_reuseFailAlloc_1126_, 3, v_postponed_1087_);
lean_ctor_set(v_reuseFailAlloc_1126_, 4, v_diag_1088_);
v___x_1094_ = v_reuseFailAlloc_1126_;
goto v_reusejp_1093_;
}
v_reusejp_1093_:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v_r_1097_; 
v___x_1095_ = lean_st_ref_put(v___y_1054_, v___x_1094_);
v___x_1096_ = lean_box(v___y_1051_);
lean_inc(v___y_1056_);
lean_inc_ref(v___y_1055_);
lean_inc(v___y_1054_);
lean_inc_ref(v___y_1053_);
lean_inc(v___y_1052_);
v_r_1097_ = lean_apply_7(v_x_1049_, v___x_1096_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, lean_box(0));
if (lean_obj_tag(v_r_1097_) == 0)
{
lean_object* v_a_1098_; lean_object* v___x_1100_; uint8_t v_isShared_1101_; uint8_t v_isSharedCheck_1114_; 
v_a_1098_ = lean_ctor_get(v_r_1097_, 0);
v_isSharedCheck_1114_ = !lean_is_exclusive(v_r_1097_);
if (v_isSharedCheck_1114_ == 0)
{
v___x_1100_ = v_r_1097_;
v_isShared_1101_ = v_isSharedCheck_1114_;
goto v_resetjp_1099_;
}
else
{
lean_inc(v_a_1098_);
lean_dec(v_r_1097_);
v___x_1100_ = lean_box(0);
v_isShared_1101_ = v_isSharedCheck_1114_;
goto v_resetjp_1099_;
}
v_resetjp_1099_:
{
lean_object* v___x_1103_; 
lean_inc(v_a_1098_);
if (v_isShared_1101_ == 0)
{
lean_ctor_set_tag(v___x_1100_, 1);
v___x_1103_ = v___x_1100_;
goto v_reusejp_1102_;
}
else
{
lean_object* v_reuseFailAlloc_1113_; 
v_reuseFailAlloc_1113_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1113_, 0, v_a_1098_);
v___x_1103_ = v_reuseFailAlloc_1113_;
goto v_reusejp_1102_;
}
v_reusejp_1102_:
{
lean_object* v___x_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1111_; 
v___x_1104_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0(v___y_1056_, v_isExporting_1064_, v___x_1080_, v___y_1054_, v___x_1092_, v___x_1103_);
lean_dec_ref(v___x_1103_);
v_isSharedCheck_1111_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1111_ == 0)
{
lean_object* v_unused_1112_; 
v_unused_1112_ = lean_ctor_get(v___x_1104_, 0);
lean_dec(v_unused_1112_);
v___x_1106_ = v___x_1104_;
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
else
{
lean_dec(v___x_1104_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1111_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1109_; 
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v_a_1098_);
v___x_1109_ = v___x_1106_;
goto v_reusejp_1108_;
}
else
{
lean_object* v_reuseFailAlloc_1110_; 
v_reuseFailAlloc_1110_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1110_, 0, v_a_1098_);
v___x_1109_ = v_reuseFailAlloc_1110_;
goto v_reusejp_1108_;
}
v_reusejp_1108_:
{
return v___x_1109_;
}
}
}
}
}
else
{
lean_object* v_a_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1119_; uint8_t v_isShared_1120_; uint8_t v_isSharedCheck_1124_; 
v_a_1115_ = lean_ctor_get(v_r_1097_, 0);
lean_inc(v_a_1115_);
lean_dec_ref_known(v_r_1097_, 1);
v___x_1116_ = lean_box(0);
v___x_1117_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_AbstractNestedProofs_isNonTrivialProof_spec__2_spec__2___redArg___lam__0(v___y_1056_, v_isExporting_1064_, v___x_1080_, v___y_1054_, v___x_1092_, v___x_1116_);
v_isSharedCheck_1124_ = !lean_is_exclusive(v___x_1117_);
if (v_isSharedCheck_1124_ == 0)
{
lean_object* v_unused_1125_; 
v_unused_1125_ = lean_ctor_get(v___x_1117_, 0);
lean_dec(v_unused_1125_);
v___x_1119_ = v___x_1117_;
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
else
{
lean_dec(v___x_1117_);
v___x_1119_ = lean_box(0);
v_isShared_1120_ = v_isSharedCheck_1124_;
goto v_resetjp_1118_;
}
v_resetjp_1118_:
{
lean_object* v___x_1122_; 
if (v_isShared_1120_ == 0)
{
lean_ctor_set_tag(v___x_1119_, 1);
lean_ctor_set(v___x_1119_, 0, v_a_1115_);
v___x_1122_ = v___x_1119_;
goto v_reusejp_1121_;
}
else
{
lean_object* v_reuseFailAlloc_1123_; 
v_reuseFailAlloc_1123_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1123_, 0, v_a_1115_);
v___x_1122_ = v_reuseFailAlloc_1123_;
goto v_reusejp_1121_;
}
v_reusejp_1121_:
{
return v___x_1122_;
}
}
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___redArg___boxed(lean_object* v_x_1136_, lean_object* v_isExporting_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_, lean_object* v___y_1143_, lean_object* v___y_1144_){
_start:
{
uint8_t v_isExporting_boxed_1145_; uint8_t v___y_29630__boxed_1146_; lean_object* v_res_1147_; 
v_isExporting_boxed_1145_ = lean_unbox(v_isExporting_1137_);
v___y_29630__boxed_1146_ = lean_unbox(v___y_1138_);
v_res_1147_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___redArg(v_x_1136_, v_isExporting_boxed_1145_, v___y_29630__boxed_1146_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_, v___y_1143_);
lean_dec(v___y_1143_);
lean_dec_ref(v___y_1142_);
lean_dec(v___y_1141_);
lean_dec_ref(v___y_1140_);
lean_dec(v___y_1139_);
return v_res_1147_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___redArg(lean_object* v_x_1148_, uint8_t v_when_1149_, uint8_t v___y_1150_, lean_object* v___y_1151_, lean_object* v___y_1152_, lean_object* v___y_1153_, lean_object* v___y_1154_, lean_object* v___y_1155_){
_start:
{
if (v_when_1149_ == 0)
{
lean_object* v___x_1157_; lean_object* v___x_1158_; 
v___x_1157_ = lean_box(v___y_1150_);
lean_inc(v___y_1155_);
lean_inc_ref(v___y_1154_);
lean_inc(v___y_1153_);
lean_inc_ref(v___y_1152_);
lean_inc(v___y_1151_);
v___x_1158_ = lean_apply_7(v_x_1148_, v___x_1157_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_, lean_box(0));
return v___x_1158_;
}
else
{
uint8_t v___x_1159_; lean_object* v___x_1160_; 
v___x_1159_ = 0;
v___x_1160_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___redArg(v_x_1148_, v___x_1159_, v___y_1150_, v___y_1151_, v___y_1152_, v___y_1153_, v___y_1154_, v___y_1155_);
return v___x_1160_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___redArg___boxed(lean_object* v_x_1161_, lean_object* v_when_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
uint8_t v_when_boxed_1170_; uint8_t v___y_29783__boxed_1171_; lean_object* v_res_1172_; 
v_when_boxed_1170_ = lean_unbox(v_when_1162_);
v___y_29783__boxed_1171_ = lean_unbox(v___y_1163_);
v_res_1172_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___redArg(v_x_1161_, v_when_boxed_1170_, v___y_29783__boxed_1171_, v___y_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_);
lean_dec(v___y_1168_);
lean_dec_ref(v___y_1167_);
lean_dec(v___y_1166_);
lean_dec_ref(v___y_1165_);
lean_dec(v___y_1164_);
return v_res_1172_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___lam__0(lean_object* v_proof_1173_, uint8_t v___y_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_){
_start:
{
lean_object* v___x_1181_; 
lean_inc(v___y_1179_);
lean_inc_ref(v___y_1178_);
lean_inc(v___y_1177_);
lean_inc_ref(v___y_1176_);
v___x_1181_ = lean_infer_type(v_proof_1173_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
return v___x_1181_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___lam__0___boxed(lean_object* v_proof_1182_, lean_object* v___y_1183_, lean_object* v___y_1184_, lean_object* v___y_1185_, lean_object* v___y_1186_, lean_object* v___y_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_){
_start:
{
uint8_t v___y_29812__boxed_1190_; lean_object* v_res_1191_; 
v___y_29812__boxed_1190_ = lean_unbox(v___y_1183_);
v_res_1191_ = l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___lam__0(v_proof_1182_, v___y_29812__boxed_1190_, v___y_1184_, v___y_1185_, v___y_1186_, v___y_1187_, v___y_1188_);
lean_dec(v___y_1188_);
lean_dec_ref(v___y_1187_);
lean_dec(v___y_1186_);
lean_dec_ref(v___y_1185_);
lean_dec(v___y_1184_);
return v_res_1191_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(lean_object* v_proof_1192_, uint8_t v_cache_1193_, lean_object* v_postprocessType_1194_, uint8_t v___y_1195_, lean_object* v___y_1196_, lean_object* v___y_1197_, lean_object* v___y_1198_, lean_object* v___y_1199_, lean_object* v___y_1200_){
_start:
{
lean_object* v___f_1202_; uint8_t v___x_1203_; lean_object* v___x_1204_; 
lean_inc_ref(v_proof_1192_);
v___f_1202_ = lean_alloc_closure((void*)(l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___lam__0___boxed), 8, 1);
lean_closure_set(v___f_1202_, 0, v_proof_1192_);
v___x_1203_ = 1;
v___x_1204_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___redArg(v___f_1202_, v___x_1203_, v___y_1195_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
if (lean_obj_tag(v___x_1204_) == 0)
{
lean_object* v_a_1205_; lean_object* v___x_1206_; 
v_a_1205_ = lean_ctor_get(v___x_1204_, 0);
lean_inc(v_a_1205_);
lean_dec_ref_known(v___x_1204_, 1);
v___x_1206_ = l_Lean_Core_betaReduce(v_a_1205_, v___y_1199_, v___y_1200_);
if (lean_obj_tag(v___x_1206_) == 0)
{
lean_object* v_a_1207_; lean_object* v___x_1208_; 
v_a_1207_ = lean_ctor_get(v___x_1206_, 0);
lean_inc(v_a_1207_);
lean_dec_ref_known(v___x_1206_, 1);
v___x_1208_ = l_Lean_Meta_zetaReduce(v_a_1207_, v___x_1203_, v___x_1203_, v___x_1203_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
if (lean_obj_tag(v___x_1208_) == 0)
{
lean_object* v_a_1209_; lean_object* v___x_1210_; lean_object* v___x_1211_; 
v_a_1209_ = lean_ctor_get(v___x_1208_, 0);
lean_inc(v_a_1209_);
lean_dec_ref_known(v___x_1208_, 1);
v___x_1210_ = lean_box(v___y_1195_);
lean_inc(v___y_1200_);
lean_inc_ref(v___y_1199_);
lean_inc(v___y_1198_);
lean_inc_ref(v___y_1197_);
lean_inc(v___y_1196_);
v___x_1211_ = lean_apply_8(v_postprocessType_1194_, v_a_1209_, v___x_1210_, v___y_1196_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_, lean_box(0));
if (lean_obj_tag(v___x_1211_) == 0)
{
lean_object* v_a_1212_; uint8_t v___y_1214_; 
v_a_1212_ = lean_ctor_get(v___x_1211_, 0);
lean_inc(v_a_1212_);
lean_dec_ref_known(v___x_1211_, 1);
if (v_cache_1193_ == 0)
{
v___y_1214_ = v_cache_1193_;
goto v___jp_1213_;
}
else
{
uint8_t v___x_1217_; 
v___x_1217_ = l_Lean_Expr_hasSorry(v_proof_1192_);
if (v___x_1217_ == 0)
{
v___y_1214_ = v_cache_1193_;
goto v___jp_1213_;
}
else
{
uint8_t v___x_1218_; 
v___x_1218_ = 0;
v___y_1214_ = v___x_1218_;
goto v___jp_1213_;
}
}
v___jp_1213_:
{
lean_object* v___x_1215_; lean_object* v___x_1216_; 
v___x_1215_ = lean_box(0);
v___x_1216_ = l_Lean_Meta_mkAuxTheorem(v_a_1212_, v_proof_1192_, v___x_1203_, v___x_1215_, v___y_1214_, v___y_1197_, v___y_1198_, v___y_1199_, v___y_1200_);
return v___x_1216_;
}
}
else
{
lean_dec_ref(v_proof_1192_);
return v___x_1211_;
}
}
else
{
lean_dec_ref(v_postprocessType_1194_);
lean_dec_ref(v_proof_1192_);
return v___x_1208_;
}
}
else
{
lean_dec_ref(v_postprocessType_1194_);
lean_dec_ref(v_proof_1192_);
return v___x_1206_;
}
}
else
{
lean_dec_ref(v_postprocessType_1194_);
lean_dec_ref(v_proof_1192_);
return v___x_1204_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9___boxed(lean_object* v_proof_1219_, lean_object* v_cache_1220_, lean_object* v_postprocessType_1221_, lean_object* v___y_1222_, lean_object* v___y_1223_, lean_object* v___y_1224_, lean_object* v___y_1225_, lean_object* v___y_1226_, lean_object* v___y_1227_, lean_object* v___y_1228_){
_start:
{
uint8_t v_cache_boxed_1229_; uint8_t v___y_29835__boxed_1230_; lean_object* v_res_1231_; 
v_cache_boxed_1229_ = lean_unbox(v_cache_1220_);
v___y_29835__boxed_1230_ = lean_unbox(v___y_1222_);
v_res_1231_ = l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(v_proof_1219_, v_cache_boxed_1229_, v_postprocessType_1221_, v___y_29835__boxed_1230_, v___y_1223_, v___y_1224_, v___y_1225_, v___y_1226_, v___y_1227_);
lean_dec(v___y_1227_);
lean_dec_ref(v___y_1226_);
lean_dec(v___y_1225_);
lean_dec_ref(v___y_1224_);
lean_dec(v___y_1223_);
return v_res_1231_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(lean_object* v_as_1232_, size_t v_sz_1233_, size_t v_i_1234_, lean_object* v_b_1235_, uint8_t v___y_1236_, lean_object* v___y_1237_, lean_object* v___y_1238_, lean_object* v___y_1239_, lean_object* v___y_1240_, lean_object* v___y_1241_){
_start:
{
lean_object* v_a_1244_; lean_object* v___y_1249_; lean_object* v___y_1250_; lean_object* v___y_1251_; lean_object* v___y_1252_; lean_object* v___y_1253_; uint8_t v___x_1257_; 
v___x_1257_ = lean_usize_dec_lt(v_i_1234_, v_sz_1233_);
if (v___x_1257_ == 0)
{
lean_object* v___x_1258_; 
v___x_1258_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1258_, 0, v_b_1235_);
return v___x_1258_;
}
else
{
lean_object* v_a_1259_; lean_object* v___x_1260_; lean_object* v_localDecl_1262_; lean_object* v___x_1270_; 
v_a_1259_ = lean_array_uget_borrowed(v_as_1232_, v_i_1234_);
v___x_1260_ = l_Lean_Expr_fvarId_x21(v_a_1259_);
lean_inc(v___x_1260_);
v___x_1270_ = l_Lean_FVarId_getDecl___redArg(v___x_1260_, v___y_1238_, v___y_1240_, v___y_1241_);
if (lean_obj_tag(v___x_1270_) == 0)
{
lean_object* v_a_1271_; lean_object* v___x_1272_; lean_object* v___x_1273_; 
v_a_1271_ = lean_ctor_get(v___x_1270_, 0);
lean_inc(v_a_1271_);
lean_dec_ref_known(v___x_1270_, 1);
v___x_1272_ = l_Lean_LocalDecl_type(v_a_1271_);
v___x_1273_ = l_Lean_Meta_AbstractNestedProofs_visit(v___x_1272_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
if (lean_obj_tag(v___x_1273_) == 0)
{
lean_object* v_a_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; 
v_a_1274_ = lean_ctor_get(v___x_1273_, 0);
lean_inc(v_a_1274_);
lean_dec_ref_known(v___x_1273_, 1);
v___x_1275_ = l_Lean_LocalDecl_setType(v_a_1271_, v_a_1274_);
v___x_1276_ = l_Lean_LocalDecl_value_x3f(v___x_1275_, v___x_1257_);
if (lean_obj_tag(v___x_1276_) == 0)
{
v_localDecl_1262_ = v___x_1275_;
goto v___jp_1261_;
}
else
{
lean_object* v_val_1277_; lean_object* v___x_1278_; 
v_val_1277_ = lean_ctor_get(v___x_1276_, 0);
lean_inc(v_val_1277_);
lean_dec_ref_known(v___x_1276_, 1);
v___x_1278_ = l_Lean_Meta_AbstractNestedProofs_visit(v_val_1277_, v___y_1236_, v___y_1237_, v___y_1238_, v___y_1239_, v___y_1240_, v___y_1241_);
if (lean_obj_tag(v___x_1278_) == 0)
{
lean_object* v_a_1279_; lean_object* v___x_1280_; 
v_a_1279_ = lean_ctor_get(v___x_1278_, 0);
lean_inc(v_a_1279_);
lean_dec_ref_known(v___x_1278_, 1);
v___x_1280_ = l_Lean_LocalDecl_setValue(v___x_1275_, v_a_1279_);
v_localDecl_1262_ = v___x_1280_;
goto v___jp_1261_;
}
else
{
lean_object* v_a_1281_; lean_object* v___x_1283_; uint8_t v_isShared_1284_; uint8_t v_isSharedCheck_1288_; 
lean_dec_ref(v___x_1275_);
lean_dec(v___x_1260_);
lean_dec_ref(v_b_1235_);
v_a_1281_ = lean_ctor_get(v___x_1278_, 0);
v_isSharedCheck_1288_ = !lean_is_exclusive(v___x_1278_);
if (v_isSharedCheck_1288_ == 0)
{
v___x_1283_ = v___x_1278_;
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
else
{
lean_inc(v_a_1281_);
lean_dec(v___x_1278_);
v___x_1283_ = lean_box(0);
v_isShared_1284_ = v_isSharedCheck_1288_;
goto v_resetjp_1282_;
}
v_resetjp_1282_:
{
lean_object* v___x_1286_; 
if (v_isShared_1284_ == 0)
{
v___x_1286_ = v___x_1283_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1287_; 
v_reuseFailAlloc_1287_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1287_, 0, v_a_1281_);
v___x_1286_ = v_reuseFailAlloc_1287_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
return v___x_1286_;
}
}
}
}
}
else
{
lean_object* v_a_1289_; lean_object* v___x_1291_; uint8_t v_isShared_1292_; uint8_t v_isSharedCheck_1296_; 
lean_dec(v_a_1271_);
lean_dec(v___x_1260_);
lean_dec_ref(v_b_1235_);
v_a_1289_ = lean_ctor_get(v___x_1273_, 0);
v_isSharedCheck_1296_ = !lean_is_exclusive(v___x_1273_);
if (v_isSharedCheck_1296_ == 0)
{
v___x_1291_ = v___x_1273_;
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
else
{
lean_inc(v_a_1289_);
lean_dec(v___x_1273_);
v___x_1291_ = lean_box(0);
v_isShared_1292_ = v_isSharedCheck_1296_;
goto v_resetjp_1290_;
}
v_resetjp_1290_:
{
lean_object* v___x_1294_; 
if (v_isShared_1292_ == 0)
{
v___x_1294_ = v___x_1291_;
goto v_reusejp_1293_;
}
else
{
lean_object* v_reuseFailAlloc_1295_; 
v_reuseFailAlloc_1295_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1295_, 0, v_a_1289_);
v___x_1294_ = v_reuseFailAlloc_1295_;
goto v_reusejp_1293_;
}
v_reusejp_1293_:
{
return v___x_1294_;
}
}
}
}
else
{
lean_object* v_a_1297_; lean_object* v___x_1299_; uint8_t v_isShared_1300_; uint8_t v_isSharedCheck_1304_; 
lean_dec(v___x_1260_);
lean_dec_ref(v_b_1235_);
v_a_1297_ = lean_ctor_get(v___x_1270_, 0);
v_isSharedCheck_1304_ = !lean_is_exclusive(v___x_1270_);
if (v_isSharedCheck_1304_ == 0)
{
v___x_1299_ = v___x_1270_;
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
else
{
lean_inc(v_a_1297_);
lean_dec(v___x_1270_);
v___x_1299_ = lean_box(0);
v_isShared_1300_ = v_isSharedCheck_1304_;
goto v_resetjp_1298_;
}
v_resetjp_1298_:
{
lean_object* v___x_1302_; 
if (v_isShared_1300_ == 0)
{
v___x_1302_ = v___x_1299_;
goto v_reusejp_1301_;
}
else
{
lean_object* v_reuseFailAlloc_1303_; 
v_reuseFailAlloc_1303_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1303_, 0, v_a_1297_);
v___x_1302_ = v_reuseFailAlloc_1303_;
goto v_reusejp_1301_;
}
v_reusejp_1301_:
{
return v___x_1302_;
}
}
}
v___jp_1261_:
{
lean_object* v_fvarIdToDecl_1263_; lean_object* v_decls_1264_; lean_object* v_auxDeclToFullName_1265_; lean_object* v___x_1266_; 
v_fvarIdToDecl_1263_ = lean_ctor_get(v_b_1235_, 0);
v_decls_1264_ = lean_ctor_get(v_b_1235_, 1);
v_auxDeclToFullName_1265_ = lean_ctor_get(v_b_1235_, 2);
lean_inc_ref(v_b_1235_);
v___x_1266_ = lean_local_ctx_find(v_b_1235_, v___x_1260_);
if (lean_obj_tag(v___x_1266_) == 0)
{
lean_dec_ref(v_localDecl_1262_);
v_a_1244_ = v_b_1235_;
goto v___jp_1243_;
}
else
{
lean_object* v_index_1267_; lean_object* v_fvarId_1268_; lean_object* v___x_1269_; 
lean_inc(v_auxDeclToFullName_1265_);
lean_inc_ref(v_decls_1264_);
lean_inc_ref(v_fvarIdToDecl_1263_);
lean_dec_ref_known(v___x_1266_, 1);
lean_dec_ref(v_b_1235_);
v_index_1267_ = lean_ctor_get(v_localDecl_1262_, 0);
lean_inc(v_index_1267_);
v_fvarId_1268_ = lean_ctor_get(v_localDecl_1262_, 1);
lean_inc_ref(v_localDecl_1262_);
lean_inc(v_fvarId_1268_);
v___x_1269_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0___redArg(v_fvarIdToDecl_1263_, v_fvarId_1268_, v_localDecl_1262_);
v___y_1249_ = v___x_1269_;
v___y_1250_ = v_localDecl_1262_;
v___y_1251_ = v_decls_1264_;
v___y_1252_ = v_auxDeclToFullName_1265_;
v___y_1253_ = v_index_1267_;
goto v___jp_1248_;
}
}
}
v___jp_1243_:
{
size_t v___x_1245_; size_t v___x_1246_; 
v___x_1245_ = ((size_t)1ULL);
v___x_1246_ = lean_usize_add(v_i_1234_, v___x_1245_);
v_i_1234_ = v___x_1246_;
v_b_1235_ = v_a_1244_;
goto _start;
}
v___jp_1248_:
{
lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v___x_1254_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1254_, 0, v___y_1250_);
v___x_1255_ = l_Lean_PersistentArray_set___redArg(v___y_1251_, v___y_1253_, v___x_1254_);
lean_dec(v___y_1253_);
v___x_1256_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1256_, 0, v___y_1249_);
lean_ctor_set(v___x_1256_, 1, v___x_1255_);
lean_ctor_set(v___x_1256_, 2, v___y_1252_);
v_a_1244_ = v___x_1256_;
goto v___jp_1243_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0(lean_object* v_xs_1305_, lean_object* v_k_1306_, uint8_t v___y_1307_, lean_object* v___y_1308_, lean_object* v___y_1309_, lean_object* v___y_1310_, lean_object* v___y_1311_, lean_object* v___y_1312_){
_start:
{
lean_object* v_lctx_1314_; lean_object* v_localInstances_1315_; size_t v_sz_1316_; size_t v___x_1317_; lean_object* v___x_1318_; 
v_lctx_1314_ = lean_ctor_get(v___y_1309_, 2);
v_localInstances_1315_ = lean_ctor_get(v___y_1309_, 3);
v_sz_1316_ = lean_array_size(v_xs_1305_);
v___x_1317_ = ((size_t)0ULL);
lean_inc_ref(v_lctx_1314_);
v___x_1318_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(v_xs_1305_, v_sz_1316_, v___x_1317_, v_lctx_1314_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
if (lean_obj_tag(v___x_1318_) == 0)
{
lean_object* v_a_1319_; lean_object* v___x_1320_; 
v_a_1319_ = lean_ctor_get(v___x_1318_, 0);
lean_inc(v_a_1319_);
lean_dec_ref_known(v___x_1318_, 1);
lean_inc_ref(v_localInstances_1315_);
v___x_1320_ = l_Lean_Meta_withLCtx___at___00Lean_Meta_AbstractNestedProofs_visit_spec__3___redArg(v_a_1319_, v_localInstances_1315_, v_k_1306_, v___y_1307_, v___y_1308_, v___y_1309_, v___y_1310_, v___y_1311_, v___y_1312_);
return v___x_1320_;
}
else
{
lean_object* v_a_1321_; lean_object* v___x_1323_; uint8_t v_isShared_1324_; uint8_t v_isSharedCheck_1328_; 
lean_dec_ref(v_k_1306_);
v_a_1321_ = lean_ctor_get(v___x_1318_, 0);
v_isSharedCheck_1328_ = !lean_is_exclusive(v___x_1318_);
if (v_isSharedCheck_1328_ == 0)
{
v___x_1323_ = v___x_1318_;
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
else
{
lean_inc(v_a_1321_);
lean_dec(v___x_1318_);
v___x_1323_ = lean_box(0);
v_isShared_1324_ = v_isSharedCheck_1328_;
goto v_resetjp_1322_;
}
v_resetjp_1322_:
{
lean_object* v___x_1326_; 
if (v_isShared_1324_ == 0)
{
v___x_1326_ = v___x_1323_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v_a_1321_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__0___boxed(lean_object* v_xs_1329_, lean_object* v_k_1330_, lean_object* v___y_1331_, lean_object* v___y_1332_, lean_object* v___y_1333_, lean_object* v___y_1334_, lean_object* v___y_1335_, lean_object* v___y_1336_, lean_object* v___y_1337_){
_start:
{
uint8_t v___y_29945__boxed_1338_; lean_object* v_res_1339_; 
v___y_29945__boxed_1338_ = lean_unbox(v___y_1331_);
v_res_1339_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__0(v_xs_1329_, v_k_1330_, v___y_29945__boxed_1338_, v___y_1332_, v___y_1333_, v___y_1334_, v___y_1335_, v___y_1336_);
lean_dec(v___y_1336_);
lean_dec_ref(v___y_1335_);
lean_dec(v___y_1334_);
lean_dec_ref(v___y_1333_);
lean_dec(v___y_1332_);
lean_dec_ref(v_xs_1329_);
return v_res_1339_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed(lean_object* v___y_1341_, lean_object* v___f_1342_, lean_object* v_xs_1343_, lean_object* v_b_1344_, lean_object* v___y_1345_, lean_object* v___y_1346_, lean_object* v___y_1347_, lean_object* v___y_1348_, lean_object* v___y_1349_, lean_object* v___y_1350_, lean_object* v___y_1351_){
_start:
{
uint8_t v___y_29896__boxed_1352_; uint8_t v___y_29898__boxed_1353_; lean_object* v_res_1354_; 
v___y_29896__boxed_1352_ = lean_unbox(v___y_1341_);
v___y_29898__boxed_1353_ = lean_unbox(v___y_1345_);
v_res_1354_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__2(v___y_29896__boxed_1352_, v___f_1342_, v_xs_1343_, v_b_1344_, v___y_29898__boxed_1353_, v___y_1346_, v___y_1347_, v___y_1348_, v___y_1349_, v___y_1350_);
lean_dec(v___y_1350_);
lean_dec_ref(v___y_1349_);
lean_dec(v___y_1348_);
lean_dec_ref(v___y_1347_);
lean_dec(v___y_1346_);
return v_res_1354_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5(lean_object* v_b_1355_, lean_object* v_xs_1356_, uint8_t v___y_1357_, uint8_t v___y_1358_, lean_object* v___y_1359_, lean_object* v___y_1360_, lean_object* v___y_1361_, lean_object* v___y_1362_, lean_object* v___y_1363_){
_start:
{
lean_object* v___x_1365_; 
v___x_1365_ = l_Lean_Meta_AbstractNestedProofs_visit(v_b_1355_, v___y_1358_, v___y_1359_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
if (lean_obj_tag(v___x_1365_) == 0)
{
lean_object* v_a_1366_; uint8_t v___x_1367_; uint8_t v___x_1368_; lean_object* v___x_1369_; 
v_a_1366_ = lean_ctor_get(v___x_1365_, 0);
lean_inc(v_a_1366_);
lean_dec_ref_known(v___x_1365_, 1);
v___x_1367_ = 1;
v___x_1368_ = 1;
v___x_1369_ = l_Lean_Meta_mkForallFVars(v_xs_1356_, v_a_1366_, v___y_1357_, v___x_1367_, v___x_1367_, v___x_1368_, v___y_1360_, v___y_1361_, v___y_1362_, v___y_1363_);
return v___x_1369_;
}
else
{
return v___x_1365_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__5___boxed(lean_object* v_b_1370_, lean_object* v_xs_1371_, lean_object* v___y_1372_, lean_object* v___y_1373_, lean_object* v___y_1374_, lean_object* v___y_1375_, lean_object* v___y_1376_, lean_object* v___y_1377_, lean_object* v___y_1378_, lean_object* v___y_1379_){
_start:
{
uint8_t v___y_29931__boxed_1380_; uint8_t v___y_29932__boxed_1381_; lean_object* v_res_1382_; 
v___y_29931__boxed_1380_ = lean_unbox(v___y_1372_);
v___y_29932__boxed_1381_ = lean_unbox(v___y_1373_);
v_res_1382_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__5(v_b_1370_, v_xs_1371_, v___y_29931__boxed_1380_, v___y_29932__boxed_1381_, v___y_1374_, v___y_1375_, v___y_1376_, v___y_1377_, v___y_1378_);
lean_dec(v___y_1378_);
lean_dec_ref(v___y_1377_);
lean_dec(v___y_1376_);
lean_dec_ref(v___y_1375_);
lean_dec(v___y_1374_);
lean_dec_ref(v_xs_1371_);
return v_res_1382_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3(uint8_t v___y_1383_, lean_object* v___f_1384_, lean_object* v_xs_1385_, lean_object* v_b_1386_, uint8_t v___y_1387_, lean_object* v___y_1388_, lean_object* v___y_1389_, lean_object* v___y_1390_, lean_object* v___y_1391_, lean_object* v___y_1392_){
_start:
{
lean_object* v___x_1394_; lean_object* v___f_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v___x_1394_ = lean_box(v___y_1383_);
lean_inc_ref(v_xs_1385_);
v___f_1395_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__5___boxed), 10, 3);
lean_closure_set(v___f_1395_, 0, v_b_1386_);
lean_closure_set(v___f_1395_, 1, v_xs_1385_);
lean_closure_set(v___f_1395_, 2, v___x_1394_);
v___x_1396_ = lean_box(v___y_1387_);
lean_inc(v___y_1392_);
lean_inc_ref(v___y_1391_);
lean_inc(v___y_1390_);
lean_inc_ref(v___y_1389_);
lean_inc(v___y_1388_);
v___x_1397_ = lean_apply_9(v___f_1384_, v_xs_1385_, v___f_1395_, v___x_1396_, v___y_1388_, v___y_1389_, v___y_1390_, v___y_1391_, v___y_1392_, lean_box(0));
return v___x_1397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__3___boxed(lean_object* v___y_1398_, lean_object* v___f_1399_, lean_object* v_xs_1400_, lean_object* v_b_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_, lean_object* v___y_1405_, lean_object* v___y_1406_, lean_object* v___y_1407_, lean_object* v___y_1408_){
_start:
{
uint8_t v___y_29907__boxed_1409_; uint8_t v___y_29909__boxed_1410_; lean_object* v_res_1411_; 
v___y_29907__boxed_1409_ = lean_unbox(v___y_1398_);
v___y_29909__boxed_1410_ = lean_unbox(v___y_1402_);
v_res_1411_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__3(v___y_29907__boxed_1409_, v___f_1399_, v_xs_1400_, v_b_1401_, v___y_29909__boxed_1410_, v___y_1403_, v___y_1404_, v___y_1405_, v___y_1406_, v___y_1407_);
lean_dec(v___y_1407_);
lean_dec_ref(v___y_1406_);
lean_dec(v___y_1405_);
lean_dec_ref(v___y_1404_);
lean_dec(v___y_1403_);
return v_res_1411_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1(size_t v_sz_1412_, size_t v_i_1413_, lean_object* v_bs_1414_, uint8_t v___y_1415_, lean_object* v___y_1416_, lean_object* v___y_1417_, lean_object* v___y_1418_, lean_object* v___y_1419_, lean_object* v___y_1420_){
_start:
{
uint8_t v___x_1422_; 
v___x_1422_ = lean_usize_dec_lt(v_i_1413_, v_sz_1412_);
if (v___x_1422_ == 0)
{
lean_object* v___x_1423_; 
v___x_1423_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1423_, 0, v_bs_1414_);
return v___x_1423_;
}
else
{
lean_object* v_v_1424_; lean_object* v___x_1425_; lean_object* v_bs_x27_1426_; lean_object* v___x_1427_; 
v_v_1424_ = lean_array_uget(v_bs_1414_, v_i_1413_);
v___x_1425_ = lean_unsigned_to_nat(0u);
v_bs_x27_1426_ = lean_array_uset(v_bs_1414_, v_i_1413_, v___x_1425_);
v___x_1427_ = l_Lean_Meta_AbstractNestedProofs_visit(v_v_1424_, v___y_1415_, v___y_1416_, v___y_1417_, v___y_1418_, v___y_1419_, v___y_1420_);
if (lean_obj_tag(v___x_1427_) == 0)
{
lean_object* v_a_1428_; size_t v___x_1429_; size_t v___x_1430_; lean_object* v___x_1431_; 
v_a_1428_ = lean_ctor_get(v___x_1427_, 0);
lean_inc(v_a_1428_);
lean_dec_ref_known(v___x_1427_, 1);
v___x_1429_ = ((size_t)1ULL);
v___x_1430_ = lean_usize_add(v_i_1413_, v___x_1429_);
v___x_1431_ = lean_array_uset(v_bs_x27_1426_, v_i_1413_, v_a_1428_);
v_i_1413_ = v___x_1430_;
v_bs_1414_ = v___x_1431_;
goto _start;
}
else
{
lean_object* v_a_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1440_; 
lean_dec_ref(v_bs_x27_1426_);
v_a_1433_ = lean_ctor_get(v___x_1427_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v___x_1427_);
if (v_isSharedCheck_1440_ == 0)
{
v___x_1435_ = v___x_1427_;
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_a_1433_);
lean_dec(v___x_1427_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1440_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v___x_1438_; 
if (v_isShared_1436_ == 0)
{
v___x_1438_ = v___x_1435_;
goto v_reusejp_1437_;
}
else
{
lean_object* v_reuseFailAlloc_1439_; 
v_reuseFailAlloc_1439_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1439_, 0, v_a_1433_);
v___x_1438_ = v_reuseFailAlloc_1439_;
goto v_reusejp_1437_;
}
v_reusejp_1437_:
{
return v___x_1438_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8(lean_object* v_x_1441_, lean_object* v_x_1442_, lean_object* v_x_1443_, uint8_t v___y_1444_, lean_object* v___y_1445_, lean_object* v___y_1446_, lean_object* v___y_1447_, lean_object* v___y_1448_, lean_object* v___y_1449_){
_start:
{
if (lean_obj_tag(v_x_1441_) == 5)
{
lean_object* v_fn_1451_; lean_object* v_arg_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; 
v_fn_1451_ = lean_ctor_get(v_x_1441_, 0);
lean_inc_ref(v_fn_1451_);
v_arg_1452_ = lean_ctor_get(v_x_1441_, 1);
lean_inc_ref(v_arg_1452_);
lean_dec_ref_known(v_x_1441_, 2);
v___x_1453_ = lean_array_set(v_x_1442_, v_x_1443_, v_arg_1452_);
v___x_1454_ = lean_unsigned_to_nat(1u);
v___x_1455_ = lean_nat_sub(v_x_1443_, v___x_1454_);
lean_dec(v_x_1443_);
v_x_1441_ = v_fn_1451_;
v_x_1442_ = v___x_1453_;
v_x_1443_ = v___x_1455_;
goto _start;
}
else
{
lean_object* v___x_1457_; 
lean_dec(v_x_1443_);
v___x_1457_ = l_Lean_Meta_AbstractNestedProofs_visit(v_x_1441_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
if (lean_obj_tag(v___x_1457_) == 0)
{
lean_object* v_a_1458_; size_t v_sz_1459_; size_t v___x_1460_; lean_object* v___x_1461_; 
v_a_1458_ = lean_ctor_get(v___x_1457_, 0);
lean_inc(v_a_1458_);
lean_dec_ref_known(v___x_1457_, 1);
v_sz_1459_ = lean_array_size(v_x_1442_);
v___x_1460_ = ((size_t)0ULL);
v___x_1461_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1(v_sz_1459_, v___x_1460_, v_x_1442_, v___y_1444_, v___y_1445_, v___y_1446_, v___y_1447_, v___y_1448_, v___y_1449_);
if (lean_obj_tag(v___x_1461_) == 0)
{
lean_object* v_a_1462_; lean_object* v___x_1464_; uint8_t v_isShared_1465_; uint8_t v_isSharedCheck_1470_; 
v_a_1462_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1470_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1470_ == 0)
{
v___x_1464_ = v___x_1461_;
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
else
{
lean_inc(v_a_1462_);
lean_dec(v___x_1461_);
v___x_1464_ = lean_box(0);
v_isShared_1465_ = v_isSharedCheck_1470_;
goto v_resetjp_1463_;
}
v_resetjp_1463_:
{
lean_object* v___x_1466_; lean_object* v___x_1468_; 
v___x_1466_ = l_Lean_mkAppN(v_a_1458_, v_a_1462_);
lean_dec(v_a_1462_);
if (v_isShared_1465_ == 0)
{
lean_ctor_set(v___x_1464_, 0, v___x_1466_);
v___x_1468_ = v___x_1464_;
goto v_reusejp_1467_;
}
else
{
lean_object* v_reuseFailAlloc_1469_; 
v_reuseFailAlloc_1469_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1469_, 0, v___x_1466_);
v___x_1468_ = v_reuseFailAlloc_1469_;
goto v_reusejp_1467_;
}
v_reusejp_1467_:
{
return v___x_1468_;
}
}
}
else
{
lean_object* v_a_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1478_; 
lean_dec(v_a_1458_);
v_a_1471_ = lean_ctor_get(v___x_1461_, 0);
v_isSharedCheck_1478_ = !lean_is_exclusive(v___x_1461_);
if (v_isSharedCheck_1478_ == 0)
{
v___x_1473_ = v___x_1461_;
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_a_1471_);
lean_dec(v___x_1461_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1478_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1476_; 
if (v_isShared_1474_ == 0)
{
v___x_1476_ = v___x_1473_;
goto v_reusejp_1475_;
}
else
{
lean_object* v_reuseFailAlloc_1477_; 
v_reuseFailAlloc_1477_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1477_, 0, v_a_1471_);
v___x_1476_ = v_reuseFailAlloc_1477_;
goto v_reusejp_1475_;
}
v_reusejp_1475_:
{
return v___x_1476_;
}
}
}
}
else
{
lean_dec_ref(v_x_1442_);
return v___x_1457_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___boxed(lean_object* v_e_1479_, lean_object* v_a_1480_, lean_object* v_a_1481_, lean_object* v_a_1482_, lean_object* v_a_1483_, lean_object* v_a_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
uint8_t v_a_boxed_1487_; lean_object* v_res_1488_; 
v_a_boxed_1487_ = lean_unbox(v_a_1480_);
v_res_1488_ = l_Lean_Meta_AbstractNestedProofs_visit(v_e_1479_, v_a_boxed_1487_, v_a_1481_, v_a_1482_, v_a_1483_, v_a_1484_, v_a_1485_);
lean_dec(v_a_1485_);
lean_dec_ref(v_a_1484_);
lean_dec(v_a_1483_);
lean_dec_ref(v_a_1482_);
lean_dec(v_a_1481_);
return v_res_1488_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit(lean_object* v_e_1489_, uint8_t v_a_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_, lean_object* v_a_1493_, lean_object* v_a_1494_, lean_object* v_a_1495_){
_start:
{
lean_object* v_a_1498_; lean_object* v___y_1504_; lean_object* v___f_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; 
v___f_1506_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__0___boxed), 9, 0);
v___x_1507_ = ((lean_object*)(l_Lean_Meta_AbstractNestedProofs_visit___closed__0));
v___x_1508_ = l_Lean_Core_checkSystem(v___x_1507_, v_a_1494_, v_a_1495_);
if (lean_obj_tag(v___x_1508_) == 0)
{
lean_object* v___x_1510_; uint8_t v_isShared_1511_; uint8_t v_isSharedCheck_1573_; 
v_isSharedCheck_1573_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1573_ == 0)
{
lean_object* v_unused_1574_; 
v_unused_1574_ = lean_ctor_get(v___x_1508_, 0);
lean_dec(v_unused_1574_);
v___x_1510_ = v___x_1508_;
v_isShared_1511_ = v_isSharedCheck_1573_;
goto v_resetjp_1509_;
}
else
{
lean_dec(v___x_1508_);
v___x_1510_ = lean_box(0);
v_isShared_1511_ = v_isSharedCheck_1573_;
goto v_resetjp_1509_;
}
v_resetjp_1509_:
{
uint8_t v___x_1512_; 
v___x_1512_ = l_Lean_Expr_isAtomic(v_e_1489_);
if (v___x_1512_ == 0)
{
lean_object* v___x_1513_; lean_object* v___x_1514_; 
v___x_1513_ = lean_st_ref_get(v_a_1491_);
v___x_1514_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(v___x_1513_, v_e_1489_);
lean_dec(v___x_1513_);
if (lean_obj_tag(v___x_1514_) == 0)
{
lean_object* v___x_1515_; 
lean_del_object(v___x_1510_);
lean_inc_ref(v_e_1489_);
v___x_1515_ = l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof(v_e_1489_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
if (lean_obj_tag(v___x_1515_) == 0)
{
lean_object* v_a_1516_; uint8_t v___y_1518_; uint8_t v___x_1553_; 
v_a_1516_ = lean_ctor_get(v___x_1515_, 0);
lean_inc(v_a_1516_);
lean_dec_ref_known(v___x_1515_, 1);
v___x_1553_ = lean_unbox(v_a_1516_);
if (v___x_1553_ == 0)
{
uint8_t v___x_1554_; 
v___x_1554_ = lean_unbox(v_a_1516_);
lean_dec(v_a_1516_);
v___y_1518_ = v___x_1554_;
goto v___jp_1517_;
}
else
{
uint8_t v___x_1555_; 
lean_dec(v_a_1516_);
v___x_1555_ = l_Lean_Expr_hasSorry(v_e_1489_);
if (v___x_1555_ == 0)
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
lean_dec_ref(v___f_1506_);
v___x_1556_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___boxed), 8, 0);
lean_inc_ref(v_e_1489_);
v___x_1557_ = l_Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9(v_e_1489_, v_a_1490_, v___x_1556_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
v___y_1504_ = v___x_1557_;
goto v___jp_1503_;
}
else
{
v___y_1518_ = v___x_1512_;
goto v___jp_1517_;
}
}
v___jp_1517_:
{
switch(lean_obj_tag(v_e_1489_))
{
case 6:
{
lean_object* v___x_1519_; lean_object* v___f_1520_; uint8_t v___x_1521_; lean_object* v___x_1522_; 
v___x_1519_ = lean_box(v___y_1518_);
v___f_1520_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1520_, 0, v___x_1519_);
lean_closure_set(v___f_1520_, 1, v___f_1506_);
v___x_1521_ = 1;
lean_inc_ref(v_e_1489_);
v___x_1522_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg(v_e_1489_, v___f_1520_, v___y_1518_, v___x_1521_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
v___y_1504_ = v___x_1522_;
goto v___jp_1503_;
}
case 8:
{
lean_object* v___x_1523_; lean_object* v___f_1524_; uint8_t v___x_1525_; lean_object* v___x_1526_; 
v___x_1523_ = lean_box(v___y_1518_);
v___f_1524_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__2___boxed), 11, 2);
lean_closure_set(v___f_1524_, 0, v___x_1523_);
lean_closure_set(v___f_1524_, 1, v___f_1506_);
v___x_1525_ = 1;
lean_inc_ref(v_e_1489_);
v___x_1526_ = l_Lean_Meta_lambdaLetTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__6___redArg(v_e_1489_, v___f_1524_, v___y_1518_, v___x_1525_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
v___y_1504_ = v___x_1526_;
goto v___jp_1503_;
}
case 7:
{
lean_object* v___x_1527_; lean_object* v___f_1528_; lean_object* v___x_1529_; 
v___x_1527_ = lean_box(v___y_1518_);
v___f_1528_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__3___boxed), 11, 2);
lean_closure_set(v___f_1528_, 0, v___x_1527_);
lean_closure_set(v___f_1528_, 1, v___f_1506_);
lean_inc_ref(v_e_1489_);
v___x_1529_ = l_Lean_Meta_forallTelescope___at___00Lean_Meta_AbstractNestedProofs_visit_spec__7___redArg(v_e_1489_, v___f_1528_, v___y_1518_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
v___y_1504_ = v___x_1529_;
goto v___jp_1503_;
}
case 10:
{
lean_object* v_data_1530_; lean_object* v_expr_1531_; lean_object* v___x_1532_; 
lean_dec_ref(v___f_1506_);
v_data_1530_ = lean_ctor_get(v_e_1489_, 0);
v_expr_1531_ = lean_ctor_get(v_e_1489_, 1);
lean_inc_ref(v_expr_1531_);
v___x_1532_ = l_Lean_Meta_AbstractNestedProofs_visit(v_expr_1531_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
if (lean_obj_tag(v___x_1532_) == 0)
{
lean_object* v_a_1533_; size_t v___x_1534_; size_t v___x_1535_; uint8_t v___x_1536_; 
v_a_1533_ = lean_ctor_get(v___x_1532_, 0);
lean_inc(v_a_1533_);
lean_dec_ref_known(v___x_1532_, 1);
v___x_1534_ = lean_ptr_addr(v_expr_1531_);
v___x_1535_ = lean_ptr_addr(v_a_1533_);
v___x_1536_ = lean_usize_dec_eq(v___x_1534_, v___x_1535_);
if (v___x_1536_ == 0)
{
lean_object* v___x_1537_; 
lean_inc(v_data_1530_);
v___x_1537_ = l_Lean_Expr_mdata___override(v_data_1530_, v_a_1533_);
v_a_1498_ = v___x_1537_;
goto v___jp_1497_;
}
else
{
lean_dec(v_a_1533_);
lean_inc_ref(v_e_1489_);
v_a_1498_ = v_e_1489_;
goto v___jp_1497_;
}
}
else
{
lean_dec_ref_known(v_e_1489_, 2);
return v___x_1532_;
}
}
case 11:
{
lean_object* v_typeName_1538_; lean_object* v_idx_1539_; lean_object* v_struct_1540_; lean_object* v___x_1541_; 
lean_dec_ref(v___f_1506_);
v_typeName_1538_ = lean_ctor_get(v_e_1489_, 0);
v_idx_1539_ = lean_ctor_get(v_e_1489_, 1);
v_struct_1540_ = lean_ctor_get(v_e_1489_, 2);
lean_inc_ref(v_struct_1540_);
v___x_1541_ = l_Lean_Meta_AbstractNestedProofs_visit(v_struct_1540_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v_a_1542_; size_t v___x_1543_; size_t v___x_1544_; uint8_t v___x_1545_; 
v_a_1542_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_a_1542_);
lean_dec_ref_known(v___x_1541_, 1);
v___x_1543_ = lean_ptr_addr(v_struct_1540_);
v___x_1544_ = lean_ptr_addr(v_a_1542_);
v___x_1545_ = lean_usize_dec_eq(v___x_1543_, v___x_1544_);
if (v___x_1545_ == 0)
{
lean_object* v___x_1546_; 
lean_inc(v_idx_1539_);
lean_inc(v_typeName_1538_);
v___x_1546_ = l_Lean_Expr_proj___override(v_typeName_1538_, v_idx_1539_, v_a_1542_);
v_a_1498_ = v___x_1546_;
goto v___jp_1497_;
}
else
{
lean_dec(v_a_1542_);
lean_inc_ref(v_e_1489_);
v_a_1498_ = v_e_1489_;
goto v___jp_1497_;
}
}
else
{
lean_dec_ref_known(v_e_1489_, 3);
return v___x_1541_;
}
}
case 5:
{
lean_object* v_dummy_1547_; lean_object* v_nargs_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_dec_ref(v___f_1506_);
v_dummy_1547_ = lean_obj_once(&l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4, &l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4_once, _init_l_Lean_Meta_AbstractNestedProofs_isNonTrivialProof___lam__0___closed__4);
v_nargs_1548_ = l_Lean_Expr_getAppNumArgs(v_e_1489_);
lean_inc(v_nargs_1548_);
v___x_1549_ = lean_mk_array(v_nargs_1548_, v_dummy_1547_);
v___x_1550_ = lean_unsigned_to_nat(1u);
v___x_1551_ = lean_nat_sub(v_nargs_1548_, v___x_1550_);
lean_dec(v_nargs_1548_);
lean_inc_ref(v_e_1489_);
v___x_1552_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8(v_e_1489_, v___x_1549_, v___x_1551_, v_a_1490_, v_a_1491_, v_a_1492_, v_a_1493_, v_a_1494_, v_a_1495_);
v___y_1504_ = v___x_1552_;
goto v___jp_1503_;
}
default: 
{
lean_dec_ref(v___f_1506_);
lean_inc_ref(v_e_1489_);
v_a_1498_ = v_e_1489_;
goto v___jp_1497_;
}
}
}
}
else
{
lean_object* v_a_1558_; lean_object* v___x_1560_; uint8_t v_isShared_1561_; uint8_t v_isSharedCheck_1565_; 
lean_dec_ref(v___f_1506_);
lean_dec_ref(v_e_1489_);
v_a_1558_ = lean_ctor_get(v___x_1515_, 0);
v_isSharedCheck_1565_ = !lean_is_exclusive(v___x_1515_);
if (v_isSharedCheck_1565_ == 0)
{
v___x_1560_ = v___x_1515_;
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
else
{
lean_inc(v_a_1558_);
lean_dec(v___x_1515_);
v___x_1560_ = lean_box(0);
v_isShared_1561_ = v_isSharedCheck_1565_;
goto v_resetjp_1559_;
}
v_resetjp_1559_:
{
lean_object* v___x_1563_; 
if (v_isShared_1561_ == 0)
{
v___x_1563_ = v___x_1560_;
goto v_reusejp_1562_;
}
else
{
lean_object* v_reuseFailAlloc_1564_; 
v_reuseFailAlloc_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1564_, 0, v_a_1558_);
v___x_1563_ = v_reuseFailAlloc_1564_;
goto v_reusejp_1562_;
}
v_reusejp_1562_:
{
return v___x_1563_;
}
}
}
}
else
{
lean_object* v_val_1566_; lean_object* v___x_1568_; 
lean_dec_ref(v___f_1506_);
lean_dec_ref(v_e_1489_);
v_val_1566_ = lean_ctor_get(v___x_1514_, 0);
lean_inc(v_val_1566_);
lean_dec_ref_known(v___x_1514_, 1);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v_val_1566_);
v___x_1568_ = v___x_1510_;
goto v_reusejp_1567_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_val_1566_);
v___x_1568_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1567_;
}
v_reusejp_1567_:
{
return v___x_1568_;
}
}
}
else
{
lean_object* v___x_1571_; 
lean_dec_ref(v___f_1506_);
if (v_isShared_1511_ == 0)
{
lean_ctor_set(v___x_1510_, 0, v_e_1489_);
v___x_1571_ = v___x_1510_;
goto v_reusejp_1570_;
}
else
{
lean_object* v_reuseFailAlloc_1572_; 
v_reuseFailAlloc_1572_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1572_, 0, v_e_1489_);
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
lean_object* v_a_1575_; lean_object* v___x_1577_; uint8_t v_isShared_1578_; uint8_t v_isSharedCheck_1582_; 
lean_dec_ref(v___f_1506_);
lean_dec_ref(v_e_1489_);
v_a_1575_ = lean_ctor_get(v___x_1508_, 0);
v_isSharedCheck_1582_ = !lean_is_exclusive(v___x_1508_);
if (v_isSharedCheck_1582_ == 0)
{
v___x_1577_ = v___x_1508_;
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
else
{
lean_inc(v_a_1575_);
lean_dec(v___x_1508_);
v___x_1577_ = lean_box(0);
v_isShared_1578_ = v_isSharedCheck_1582_;
goto v_resetjp_1576_;
}
v_resetjp_1576_:
{
lean_object* v___x_1580_; 
if (v_isShared_1578_ == 0)
{
v___x_1580_ = v___x_1577_;
goto v_reusejp_1579_;
}
else
{
lean_object* v_reuseFailAlloc_1581_; 
v_reuseFailAlloc_1581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1581_, 0, v_a_1575_);
v___x_1580_ = v_reuseFailAlloc_1581_;
goto v_reusejp_1579_;
}
v_reusejp_1579_:
{
return v___x_1580_;
}
}
}
v___jp_1497_:
{
lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; 
v___x_1499_ = lean_st_ref_take(v_a_1491_);
lean_inc_ref(v_a_1498_);
v___x_1500_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(v___x_1499_, v_e_1489_, v_a_1498_);
v___x_1501_ = lean_st_ref_put(v_a_1491_, v___x_1500_);
v___x_1502_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1502_, 0, v_a_1498_);
return v___x_1502_;
}
v___jp_1503_:
{
if (lean_obj_tag(v___y_1504_) == 0)
{
lean_object* v_a_1505_; 
v_a_1505_ = lean_ctor_get(v___y_1504_, 0);
lean_inc(v_a_1505_);
lean_dec_ref_known(v___y_1504_, 1);
v_a_1498_ = v_a_1505_;
goto v___jp_1497_;
}
else
{
lean_dec_ref(v_e_1489_);
return v___y_1504_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1(lean_object* v_b_1583_, lean_object* v_xs_1584_, uint8_t v___y_1585_, uint8_t v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_, lean_object* v___y_1590_, lean_object* v___y_1591_){
_start:
{
lean_object* v___x_1593_; 
v___x_1593_ = l_Lean_Meta_AbstractNestedProofs_visit(v_b_1583_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; uint8_t v___x_1595_; lean_object* v___x_1596_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
lean_inc(v_a_1594_);
lean_dec_ref_known(v___x_1593_, 1);
v___x_1595_ = 1;
v___x_1596_ = l_Lean_Meta_mkLambdaFVars(v_xs_1584_, v_a_1594_, v___y_1585_, v___y_1585_, v___y_1585_, v___y_1585_, v___x_1595_, v___y_1588_, v___y_1589_, v___y_1590_, v___y_1591_);
return v___x_1596_;
}
else
{
return v___x_1593_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__1___boxed(lean_object* v_b_1597_, lean_object* v_xs_1598_, lean_object* v___y_1599_, lean_object* v___y_1600_, lean_object* v___y_1601_, lean_object* v___y_1602_, lean_object* v___y_1603_, lean_object* v___y_1604_, lean_object* v___y_1605_, lean_object* v___y_1606_){
_start:
{
uint8_t v___y_29918__boxed_1607_; uint8_t v___y_29919__boxed_1608_; lean_object* v_res_1609_; 
v___y_29918__boxed_1607_ = lean_unbox(v___y_1599_);
v___y_29919__boxed_1608_ = lean_unbox(v___y_1600_);
v_res_1609_ = l_Lean_Meta_AbstractNestedProofs_visit___lam__1(v_b_1597_, v_xs_1598_, v___y_29918__boxed_1607_, v___y_29919__boxed_1608_, v___y_1601_, v___y_1602_, v___y_1603_, v___y_1604_, v___y_1605_);
lean_dec(v___y_1605_);
lean_dec_ref(v___y_1604_);
lean_dec(v___y_1603_);
lean_dec_ref(v___y_1602_);
lean_dec(v___y_1601_);
lean_dec_ref(v_xs_1598_);
return v_res_1609_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_AbstractNestedProofs_visit___lam__2(uint8_t v___y_1610_, lean_object* v___f_1611_, lean_object* v_xs_1612_, lean_object* v_b_1613_, uint8_t v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_, lean_object* v___y_1617_, lean_object* v___y_1618_, lean_object* v___y_1619_){
_start:
{
lean_object* v___x_1621_; lean_object* v___f_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; 
v___x_1621_ = lean_box(v___y_1610_);
lean_inc_ref(v_xs_1612_);
v___f_1622_ = lean_alloc_closure((void*)(l_Lean_Meta_AbstractNestedProofs_visit___lam__1___boxed), 10, 3);
lean_closure_set(v___f_1622_, 0, v_b_1613_);
lean_closure_set(v___f_1622_, 1, v_xs_1612_);
lean_closure_set(v___f_1622_, 2, v___x_1621_);
v___x_1623_ = lean_box(v___y_1614_);
lean_inc(v___y_1619_);
lean_inc_ref(v___y_1618_);
lean_inc(v___y_1617_);
lean_inc_ref(v___y_1616_);
lean_inc(v___y_1615_);
v___x_1624_ = lean_apply_9(v___f_1611_, v_xs_1612_, v___f_1622_, v___x_1623_, v___y_1615_, v___y_1616_, v___y_1617_, v___y_1618_, v___y_1619_, lean_box(0));
return v___x_1624_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1___boxed(lean_object* v_sz_1625_, lean_object* v_i_1626_, lean_object* v_bs_1627_, lean_object* v___y_1628_, lean_object* v___y_1629_, lean_object* v___y_1630_, lean_object* v___y_1631_, lean_object* v___y_1632_, lean_object* v___y_1633_, lean_object* v___y_1634_){
_start:
{
size_t v_sz_boxed_1635_; size_t v_i_boxed_1636_; uint8_t v___y_29958__boxed_1637_; lean_object* v_res_1638_; 
v_sz_boxed_1635_ = lean_unbox_usize(v_sz_1625_);
lean_dec(v_sz_1625_);
v_i_boxed_1636_ = lean_unbox_usize(v_i_1626_);
lean_dec(v_i_1626_);
v___y_29958__boxed_1637_ = lean_unbox(v___y_1628_);
v_res_1638_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_AbstractNestedProofs_visit_spec__1(v_sz_boxed_1635_, v_i_boxed_1636_, v_bs_1627_, v___y_29958__boxed_1637_, v___y_1629_, v___y_1630_, v___y_1631_, v___y_1632_, v___y_1633_);
lean_dec(v___y_1633_);
lean_dec_ref(v___y_1632_);
lean_dec(v___y_1631_);
lean_dec_ref(v___y_1630_);
lean_dec(v___y_1629_);
return v_res_1638_;
}
}
LEAN_EXPORT lean_object* l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8___boxed(lean_object* v_x_1639_, lean_object* v_x_1640_, lean_object* v_x_1641_, lean_object* v___y_1642_, lean_object* v___y_1643_, lean_object* v___y_1644_, lean_object* v___y_1645_, lean_object* v___y_1646_, lean_object* v___y_1647_, lean_object* v___y_1648_){
_start:
{
uint8_t v___y_29979__boxed_1649_; lean_object* v_res_1650_; 
v___y_29979__boxed_1649_ = lean_unbox(v___y_1642_);
v_res_1650_ = l_Lean_Expr_withAppAux___at___00Lean_Meta_AbstractNestedProofs_visit_spec__8(v_x_1639_, v_x_1640_, v_x_1641_, v___y_29979__boxed_1649_, v___y_1643_, v___y_1644_, v___y_1645_, v___y_1646_, v___y_1647_);
lean_dec(v___y_1647_);
lean_dec_ref(v___y_1646_);
lean_dec(v___y_1645_);
lean_dec_ref(v___y_1644_);
lean_dec(v___y_1643_);
return v_res_1650_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2___boxed(lean_object* v_as_1651_, lean_object* v_sz_1652_, lean_object* v_i_1653_, lean_object* v_b_1654_, lean_object* v___y_1655_, lean_object* v___y_1656_, lean_object* v___y_1657_, lean_object* v___y_1658_, lean_object* v___y_1659_, lean_object* v___y_1660_, lean_object* v___y_1661_){
_start:
{
size_t v_sz_boxed_1662_; size_t v_i_boxed_1663_; uint8_t v___y_30002__boxed_1664_; lean_object* v_res_1665_; 
v_sz_boxed_1662_ = lean_unbox_usize(v_sz_1652_);
lean_dec(v_sz_1652_);
v_i_boxed_1663_ = lean_unbox_usize(v_i_1653_);
lean_dec(v_i_1653_);
v___y_30002__boxed_1664_ = lean_unbox(v___y_1655_);
v_res_1665_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_AbstractNestedProofs_visit_spec__2(v_as_1651_, v_sz_boxed_1662_, v_i_boxed_1663_, v_b_1654_, v___y_30002__boxed_1664_, v___y_1656_, v___y_1657_, v___y_1658_, v___y_1659_, v___y_1660_);
lean_dec(v___y_1660_);
lean_dec_ref(v___y_1659_);
lean_dec(v___y_1658_);
lean_dec_ref(v___y_1657_);
lean_dec(v___y_1656_);
lean_dec_ref(v_as_1651_);
return v_res_1665_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0(lean_object* v_00_u03b2_1666_, lean_object* v_x_1667_, lean_object* v_x_1668_, lean_object* v_x_1669_){
_start:
{
lean_object* v___x_1670_; 
v___x_1670_ = l_Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0___redArg(v_x_1667_, v_x_1668_, v_x_1669_);
return v___x_1670_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4(lean_object* v_00_u03b2_1671_, lean_object* v_m_1672_, lean_object* v_a_1673_, lean_object* v_b_1674_){
_start:
{
lean_object* v___x_1675_; 
v___x_1675_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4___redArg(v_m_1672_, v_a_1673_, v_b_1674_);
return v___x_1675_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5(lean_object* v_00_u03b2_1676_, lean_object* v_m_1677_, lean_object* v_a_1678_){
_start:
{
lean_object* v___x_1679_; 
v___x_1679_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___redArg(v_m_1677_, v_a_1678_);
return v___x_1679_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5___boxed(lean_object* v_00_u03b2_1680_, lean_object* v_m_1681_, lean_object* v_a_1682_){
_start:
{
lean_object* v_res_1683_; 
v_res_1683_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5(v_00_u03b2_1680_, v_m_1681_, v_a_1682_);
lean_dec_ref(v_a_1682_);
lean_dec_ref(v_m_1681_);
return v_res_1683_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0(lean_object* v_00_u03b2_1684_, lean_object* v_x_1685_, size_t v_x_1686_, size_t v_x_1687_, lean_object* v_x_1688_, lean_object* v_x_1689_){
_start:
{
lean_object* v___x_1690_; 
v___x_1690_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___redArg(v_x_1685_, v_x_1686_, v_x_1687_, v_x_1688_, v_x_1689_);
return v___x_1690_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0___boxed(lean_object* v_00_u03b2_1691_, lean_object* v_x_1692_, lean_object* v_x_1693_, lean_object* v_x_1694_, lean_object* v_x_1695_, lean_object* v_x_1696_){
_start:
{
size_t v_x_30577__boxed_1697_; size_t v_x_30578__boxed_1698_; lean_object* v_res_1699_; 
v_x_30577__boxed_1697_ = lean_unbox_usize(v_x_1693_);
lean_dec(v_x_1693_);
v_x_30578__boxed_1698_ = lean_unbox_usize(v_x_1694_);
lean_dec(v_x_1694_);
v_res_1699_ = l_Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0(v_00_u03b2_1691_, v_x_1692_, v_x_30577__boxed_1697_, v_x_30578__boxed_1698_, v_x_1695_, v_x_1696_);
return v_res_1699_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5(lean_object* v_00_u03b2_1700_, lean_object* v_a_1701_, lean_object* v_x_1702_){
_start:
{
uint8_t v___x_1703_; 
v___x_1703_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___redArg(v_a_1701_, v_x_1702_);
return v___x_1703_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5___boxed(lean_object* v_00_u03b2_1704_, lean_object* v_a_1705_, lean_object* v_x_1706_){
_start:
{
uint8_t v_res_1707_; lean_object* v_r_1708_; 
v_res_1707_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__5(v_00_u03b2_1704_, v_a_1705_, v_x_1706_);
lean_dec(v_x_1706_);
lean_dec_ref(v_a_1705_);
v_r_1708_ = lean_box(v_res_1707_);
return v_r_1708_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6(lean_object* v_00_u03b2_1709_, lean_object* v_data_1710_){
_start:
{
lean_object* v___x_1711_; 
v___x_1711_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6___redArg(v_data_1710_);
return v___x_1711_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7(lean_object* v_00_u03b2_1712_, lean_object* v_a_1713_, lean_object* v_b_1714_, lean_object* v_x_1715_){
_start:
{
lean_object* v___x_1716_; 
v___x_1716_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__7___redArg(v_a_1713_, v_b_1714_, v_x_1715_);
return v___x_1716_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9(lean_object* v_00_u03b2_1717_, lean_object* v_a_1718_, lean_object* v_x_1719_){
_start:
{
lean_object* v___x_1720_; 
v___x_1720_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___redArg(v_a_1718_, v_x_1719_);
return v___x_1720_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9___boxed(lean_object* v_00_u03b2_1721_, lean_object* v_a_1722_, lean_object* v_x_1723_){
_start:
{
lean_object* v_res_1724_; 
v_res_1724_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Meta_AbstractNestedProofs_visit_spec__5_spec__9(v_00_u03b2_1721_, v_a_1722_, v_x_1723_);
lean_dec(v_x_1723_);
lean_dec_ref(v_a_1722_);
return v_res_1724_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14(lean_object* v_00_u03b1_1725_, lean_object* v_x_1726_, uint8_t v_when_1727_, uint8_t v___y_1728_, lean_object* v___y_1729_, lean_object* v___y_1730_, lean_object* v___y_1731_, lean_object* v___y_1732_, lean_object* v___y_1733_){
_start:
{
lean_object* v___x_1735_; 
v___x_1735_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___redArg(v_x_1726_, v_when_1727_, v___y_1728_, v___y_1729_, v___y_1730_, v___y_1731_, v___y_1732_, v___y_1733_);
return v___x_1735_;
}
}
LEAN_EXPORT lean_object* l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14___boxed(lean_object* v_00_u03b1_1736_, lean_object* v_x_1737_, lean_object* v_when_1738_, lean_object* v___y_1739_, lean_object* v___y_1740_, lean_object* v___y_1741_, lean_object* v___y_1742_, lean_object* v___y_1743_, lean_object* v___y_1744_, lean_object* v___y_1745_){
_start:
{
uint8_t v_when_boxed_1746_; uint8_t v___y_30609__boxed_1747_; lean_object* v_res_1748_; 
v_when_boxed_1746_ = lean_unbox(v_when_1738_);
v___y_30609__boxed_1747_ = lean_unbox(v___y_1739_);
v_res_1748_ = l_Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14(v_00_u03b1_1736_, v_x_1737_, v_when_boxed_1746_, v___y_30609__boxed_1747_, v___y_1740_, v___y_1741_, v___y_1742_, v___y_1743_, v___y_1744_);
lean_dec(v___y_1744_);
lean_dec_ref(v___y_1743_);
lean_dec(v___y_1742_);
lean_dec_ref(v___y_1741_);
lean_dec(v___y_1740_);
return v_res_1748_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4(lean_object* v_00_u03b2_1749_, lean_object* v_n_1750_, lean_object* v_k_1751_, lean_object* v_v_1752_){
_start:
{
lean_object* v___x_1753_; 
v___x_1753_ = l_Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4___redArg(v_n_1750_, v_k_1751_, v_v_1752_);
return v___x_1753_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5(lean_object* v_00_u03b2_1754_, size_t v_depth_1755_, lean_object* v_keys_1756_, lean_object* v_vals_1757_, lean_object* v_heq_1758_, lean_object* v_i_1759_, lean_object* v_entries_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___redArg(v_depth_1755_, v_keys_1756_, v_vals_1757_, v_i_1759_, v_entries_1760_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5___boxed(lean_object* v_00_u03b2_1762_, lean_object* v_depth_1763_, lean_object* v_keys_1764_, lean_object* v_vals_1765_, lean_object* v_heq_1766_, lean_object* v_i_1767_, lean_object* v_entries_1768_){
_start:
{
size_t v_depth_boxed_1769_; lean_object* v_res_1770_; 
v_depth_boxed_1769_ = lean_unbox_usize(v_depth_1763_);
lean_dec(v_depth_1763_);
v_res_1770_ = l___private_Lean_Data_PersistentHashMap_0__Lean_PersistentHashMap_insertAux_traverse___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__5(v_00_u03b2_1762_, v_depth_boxed_1769_, v_keys_1764_, v_vals_1765_, v_heq_1766_, v_i_1767_, v_entries_1768_);
lean_dec_ref(v_vals_1765_);
lean_dec_ref(v_keys_1764_);
return v_res_1770_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11(lean_object* v_00_u03b2_1771_, lean_object* v_i_1772_, lean_object* v_source_1773_, lean_object* v_target_1774_){
_start:
{
lean_object* v___x_1775_; 
v___x_1775_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11___redArg(v_i_1772_, v_source_1773_, v_target_1774_);
return v___x_1775_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18(lean_object* v_00_u03b1_1776_, lean_object* v_x_1777_, uint8_t v_isExporting_1778_, uint8_t v___y_1779_, lean_object* v___y_1780_, lean_object* v___y_1781_, lean_object* v___y_1782_, lean_object* v___y_1783_, lean_object* v___y_1784_){
_start:
{
lean_object* v___x_1786_; 
v___x_1786_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___redArg(v_x_1777_, v_isExporting_1778_, v___y_1779_, v___y_1780_, v___y_1781_, v___y_1782_, v___y_1783_, v___y_1784_);
return v___x_1786_;
}
}
LEAN_EXPORT lean_object* l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18___boxed(lean_object* v_00_u03b1_1787_, lean_object* v_x_1788_, lean_object* v_isExporting_1789_, lean_object* v___y_1790_, lean_object* v___y_1791_, lean_object* v___y_1792_, lean_object* v___y_1793_, lean_object* v___y_1794_, lean_object* v___y_1795_, lean_object* v___y_1796_){
_start:
{
uint8_t v_isExporting_boxed_1797_; uint8_t v___y_30638__boxed_1798_; lean_object* v_res_1799_; 
v_isExporting_boxed_1797_ = lean_unbox(v_isExporting_1789_);
v___y_30638__boxed_1798_ = lean_unbox(v___y_1790_);
v_res_1799_ = l_Lean_withExporting___at___00Lean_withoutExporting___at___00Lean_Meta_abstractProof___at___00Lean_Meta_AbstractNestedProofs_visit_spec__9_spec__14_spec__18(v_00_u03b1_1787_, v_x_1788_, v_isExporting_boxed_1797_, v___y_30638__boxed_1798_, v___y_1791_, v___y_1792_, v___y_1793_, v___y_1794_, v___y_1795_);
lean_dec(v___y_1795_);
lean_dec_ref(v___y_1794_);
lean_dec(v___y_1793_);
lean_dec_ref(v___y_1792_);
lean_dec(v___y_1791_);
return v_res_1799_;
}
}
LEAN_EXPORT lean_object* l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4_spec__11(lean_object* v_00_u03b2_1800_, lean_object* v_x_1801_, lean_object* v_x_1802_, lean_object* v_x_1803_, lean_object* v_x_1804_){
_start:
{
lean_object* v___x_1805_; 
v___x_1805_ = l_Lean_PersistentHashMap_insertAtCollisionNodeAux___at___00Lean_PersistentHashMap_insertAtCollisionNode___at___00Lean_PersistentHashMap_insertAux___at___00Lean_PersistentHashMap_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__0_spec__0_spec__4_spec__11___redArg(v_x_1801_, v_x_1802_, v_x_1803_, v_x_1804_);
return v___x_1805_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16(lean_object* v_00_u03b2_1806_, lean_object* v_x_1807_, lean_object* v_x_1808_){
_start:
{
lean_object* v___x_1809_; 
v___x_1809_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Meta_AbstractNestedProofs_visit_spec__4_spec__6_spec__11_spec__16___redArg(v_x_1807_, v_x_1808_);
return v___x_1809_;
}
}
static lean_object* _init_l_Lean_Meta_abstractNestedProofs___closed__0(void){
_start:
{
lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1810_ = lean_box(0);
v___x_1811_ = lean_unsigned_to_nat(16u);
v___x_1812_ = lean_mk_array(v___x_1811_, v___x_1810_);
return v___x_1812_;
}
}
static lean_object* _init_l_Lean_Meta_abstractNestedProofs___closed__1(void){
_start:
{
lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; 
v___x_1813_ = lean_obj_once(&l_Lean_Meta_abstractNestedProofs___closed__0, &l_Lean_Meta_abstractNestedProofs___closed__0_once, _init_l_Lean_Meta_abstractNestedProofs___closed__0);
v___x_1814_ = lean_unsigned_to_nat(0u);
v___x_1815_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1815_, 0, v___x_1814_);
lean_ctor_set(v___x_1815_, 1, v___x_1813_);
return v___x_1815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs(lean_object* v_e_1816_, uint8_t v_cache_1817_, lean_object* v_a_1818_, lean_object* v_a_1819_, lean_object* v_a_1820_, lean_object* v_a_1821_){
_start:
{
lean_object* v___x_1823_; 
lean_inc_ref(v_e_1816_);
v___x_1823_ = l_Lean_Meta_isProof(v_e_1816_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_);
if (lean_obj_tag(v___x_1823_) == 0)
{
lean_object* v_a_1824_; lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1844_; 
v_a_1824_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1844_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1826_ = v___x_1823_;
v_isShared_1827_ = v_isSharedCheck_1844_;
goto v_resetjp_1825_;
}
else
{
lean_inc(v_a_1824_);
lean_dec(v___x_1823_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1844_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
uint8_t v___x_1828_; 
v___x_1828_ = lean_unbox(v_a_1824_);
lean_dec(v_a_1824_);
if (v___x_1828_ == 0)
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
lean_del_object(v___x_1826_);
v___x_1829_ = lean_obj_once(&l_Lean_Meta_abstractNestedProofs___closed__1, &l_Lean_Meta_abstractNestedProofs___closed__1_once, _init_l_Lean_Meta_abstractNestedProofs___closed__1);
v___x_1830_ = lean_st_mk_ref(v___x_1829_);
v___x_1831_ = l_Lean_Meta_AbstractNestedProofs_visit(v_e_1816_, v_cache_1817_, v___x_1830_, v_a_1818_, v_a_1819_, v_a_1820_, v_a_1821_);
if (lean_obj_tag(v___x_1831_) == 0)
{
lean_object* v_a_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1840_; 
v_a_1832_ = lean_ctor_get(v___x_1831_, 0);
v_isSharedCheck_1840_ = !lean_is_exclusive(v___x_1831_);
if (v_isSharedCheck_1840_ == 0)
{
v___x_1834_ = v___x_1831_;
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_a_1832_);
lean_dec(v___x_1831_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1840_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v___x_1836_; lean_object* v___x_1838_; 
v___x_1836_ = lean_st_ref_get(v___x_1830_);
lean_dec(v___x_1830_);
lean_dec(v___x_1836_);
if (v_isShared_1835_ == 0)
{
v___x_1838_ = v___x_1834_;
goto v_reusejp_1837_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v_a_1832_);
v___x_1838_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1837_;
}
v_reusejp_1837_:
{
return v___x_1838_;
}
}
}
else
{
lean_dec(v___x_1830_);
return v___x_1831_;
}
}
else
{
lean_object* v___x_1842_; 
if (v_isShared_1827_ == 0)
{
lean_ctor_set(v___x_1826_, 0, v_e_1816_);
v___x_1842_ = v___x_1826_;
goto v_reusejp_1841_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v_e_1816_);
v___x_1842_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1841_;
}
v_reusejp_1841_:
{
return v___x_1842_;
}
}
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec_ref(v_e_1816_);
v_a_1845_ = lean_ctor_get(v___x_1823_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1823_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1823_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1823_);
v___x_1847_ = lean_box(0);
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
v_resetjp_1846_:
{
lean_object* v___x_1850_; 
if (v_isShared_1848_ == 0)
{
v___x_1850_ = v___x_1847_;
goto v_reusejp_1849_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v_a_1845_);
v___x_1850_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1849_;
}
v_reusejp_1849_:
{
return v___x_1850_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_abstractNestedProofs___boxed(lean_object* v_e_1853_, lean_object* v_cache_1854_, lean_object* v_a_1855_, lean_object* v_a_1856_, lean_object* v_a_1857_, lean_object* v_a_1858_, lean_object* v_a_1859_){
_start:
{
uint8_t v_cache_boxed_1860_; lean_object* v_res_1861_; 
v_cache_boxed_1860_ = lean_unbox(v_cache_1854_);
v_res_1861_ = l_Lean_Meta_abstractNestedProofs(v_e_1853_, v_cache_boxed_1860_, v_a_1855_, v_a_1856_, v_a_1857_, v_a_1858_);
lean_dec(v_a_1858_);
lean_dec_ref(v_a_1857_);
lean_dec(v_a_1856_);
lean_dec_ref(v_a_1855_);
return v_res_1861_;
}
}
lean_object* runtime_initialize_Init_Grind_Util(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Transform(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Init_Grind_Util(uint8_t builtin);
lean_object* initialize_Lean_Meta_Closure(uint8_t builtin);
lean_object* initialize_Lean_Meta_Transform(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_AbstractNestedProofs(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init_Grind_Util(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Closure(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Transform(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AbstractNestedProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_AbstractNestedProofs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_AbstractNestedProofs(builtin);
}
#ifdef __cplusplus
}
#endif
