// Lean compiler output
// Module: Lean.Elab.Tactic.Omega.OmegaM
// Imports: public import Lean.Meta.AppBuilder public import Lean.Meta.Canonicalizer public import Init.Omega
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
uint8_t lean_expr_eqv(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Meta_Canonicalizer_canon(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint64_t l_Lean_Expr_hash(lean_object*);
uint64_t lean_uint64_shift_right(uint64_t, uint64_t);
uint64_t lean_uint64_xor(uint64_t, uint64_t);
size_t lean_uint64_to_usize(uint64_t);
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_sub(size_t, size_t);
size_t lean_usize_land(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_array_propagate_mark(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Expr_getAppFnArgs(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Expr_const___override(lean_object*, lean_object*);
lean_object* l_Lean_mkAppB(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_nat_x3f(lean_object*);
lean_object* l_Lean_Level_ofNat(lean_object*);
lean_object* l_Lean_mkNatLit(lean_object*);
lean_object* l_Lean_mkApp4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkDecideProof(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_mkApp3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_Lean_instToExprInt_mkNat(lean_object*);
lean_object* l_Lean_Expr_app___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_proj___override(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
double lean_float_of_nat(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Lean_PersistentArray_push___redArg(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_fswap(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Lean_Meta_mkListLit(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Expr_int_x3f(lean_object*);
lean_object* l_Nat_pow___boxed(lean_object*, lean_object*);
lean_object* l_Nat_div___boxed(lean_object*, lean_object*);
lean_object* l_Nat_sub___boxed(lean_object*, lean_object*);
lean_object* l_Nat_mul___boxed(lean_object*, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* l_Int_ediv___boxed(lean_object*, lean_object*);
lean_object* l_Int_sub___boxed(lean_object*, lean_object*);
lean_object* l_Int_mul___boxed(lean_object*, lean_object*);
lean_object* l_Int_add___boxed(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEqRefl(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkEq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkExpectedPropHint(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Int"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Omega"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Coeffs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ofList"};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(200, 12, 56, 206, 160, 32, 217, 148)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(16, 98, 247, 173, 146, 185, 161, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Nat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cast"};
static const lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f(lean_object*);
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Tactic_Omega_intCast_x3f_spec__0(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_intCast_x3f(lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HAdd"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMul"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HSub"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HDiv"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HPow"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hPow"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_pow___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hDiv"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_div___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hSub"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMul"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hAdd"};
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_ediv___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_sub___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_mul___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2_value;
static const lean_closure_object l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Int_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "HMod"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Min"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Max"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "max"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "le_max_left"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(202, 116, 120, 162, 144, 249, 91, 118)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "le_max_right"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__7_value),LEAN_SCALAR_PTR_LITERAL(187, 64, 160, 147, 232, 106, 148, 64)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "min"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "min_le_left"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__11_value),LEAN_SCALAR_PTR_LITERAL(18, 98, 222, 238, 10, 11, 175, 208)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "min_le_right"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__14_value),LEAN_SCALAR_PTR_LITERAL(89, 109, 128, 29, 84, 251, 120, 13)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hMod"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "emod_ofNat_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__18_value),LEAN_SCALAR_PTR_LITERAL(193, 64, 179, 146, 49, 216, 163, 147)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "LT"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "lt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__20_value),LEAN_SCALAR_PTR_LITERAL(71, 235, 154, 184, 62, 135, 30, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__21_value),LEAN_SCALAR_PTR_LITERAL(54, 235, 251, 9, 4, 74, 57, 164)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__25_value),LEAN_SCALAR_PTR_LITERAL(141, 27, 201, 217, 48, 203, 85, 203)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "pow_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0_value),LEAN_SCALAR_PTR_LITERAL(155, 221, 223, 104, 58, 13, 204, 158)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__28_value),LEAN_SCALAR_PTR_LITERAL(8, 188, 92, 81, 98, 125, 214, 195)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "ofNat_pos_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__30_value),LEAN_SCALAR_PTR_LITERAL(40, 203, 156, 230, 39, 171, 106, 183)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "emod_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__32_value),LEAN_SCALAR_PTR_LITERAL(61, 100, 115, 114, 207, 135, 28, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "ne_of_gt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__34_value),LEAN_SCALAR_PTR_LITERAL(124, 85, 105, 24, 138, 4, 9, 162)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "emod_lt_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__36_value),LEAN_SCALAR_PTR_LITERAL(179, 253, 191, 46, 213, 199, 79, 210)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "neg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__40_value),LEAN_SCALAR_PTR_LITERAL(94, 4, 109, 108, 64, 81, 153, 133)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__41_value),LEAN_SCALAR_PTR_LITERAL(105, 26, 70, 221, 245, 238, 127, 238)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instNegInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__43_value),LEAN_SCALAR_PTR_LITERAL(217, 109, 233, 1, 211, 122, 77, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "instLTInt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__52_value),LEAN_SCALAR_PTR_LITERAL(174, 212, 102, 196, 69, 170, 149, 126)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "pos_pow_of_pos"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__55_value),LEAN_SCALAR_PTR_LITERAL(145, 25, 143, 59, 16, 211, 163, 116)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Ne"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__64_value),LEAN_SCALAR_PTR_LITERAL(161, 247, 70, 70, 118, 145, 235, 92)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "mul_ediv_self_le"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__69_value),LEAN_SCALAR_PTR_LITERAL(252, 253, 214, 154, 97, 254, 157, 214)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "lt_mul_ediv_self_add"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__72_value),LEAN_SCALAR_PTR_LITERAL(94, 156, 157, 133, 195, 57, 68, 244)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "neg_le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__75_value),LEAN_SCALAR_PTR_LITERAL(217, 253, 117, 167, 254, 111, 180, 184)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "natCast_nonneg"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__77_value),LEAN_SCALAR_PTR_LITERAL(78, 189, 5, 123, 91, 219, 85, 246)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "cond_disjunction"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__79_value),LEAN_SCALAR_PTR_LITERAL(81, 13, 4, 146, 240, 212, 130, 3)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Decidable"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__81_value),LEAN_SCALAR_PTR_LITERAL(87, 187, 205, 215, 218, 218, 68, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "BitVec"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "isLt"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83_value),LEAN_SCALAR_PTR_LITERAL(108, 178, 58, 132, 143, 189, 222, 74)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value),LEAN_SCALAR_PTR_LITERAL(196, 26, 231, 251, 226, 55, 19, 117)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Fin"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86_value),LEAN_SCALAR_PTR_LITERAL(62, 91, 162, 2, 110, 238, 123, 219)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__84_value),LEAN_SCALAR_PTR_LITERAL(222, 150, 50, 101, 25, 222, 136, 68)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "le_natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(61, 25, 98, 154, 117, 127, 69, 97)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__88_value),LEAN_SCALAR_PTR_LITERAL(90, 82, 63, 108, 86, 248, 24, 88)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "toNat"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "val"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "natAbs"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "ofNat_sub_dichotomy"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value_aux_0),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(113, 76, 155, 247, 209, 92, 141, 248)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value_aux_1),((lean_object*)&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(127, 141, 7, 147, 89, 24, 200, 6)}};
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value_aux_2),((lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__93_value),LEAN_SCALAR_PTR_LITERAL(132, 176, 7, 204, 155, 0, 78, 60)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__95_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "cond"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__95 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__95_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__96_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ite"};
static const lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__96 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__96_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0;
static const lean_string_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1_value;
static const lean_array_object l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2 = (const lean_object*)&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2_value;
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "omega"};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__0 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__0_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_lookup___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__0_value),LEAN_SCALAR_PTR_LITERAL(107, 155, 144, 136, 132, 122, 189, 157)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__1 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__1_value;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__2 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__2_value;
static const lean_ctor_object l_Lean_Elab_Tactic_Omega_lookup___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__2_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__3 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__3_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__4;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "New facts: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__5 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__5_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__6;
static const lean_string_object l_Lean_Elab_Tactic_Omega_lookup___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "New atom: "};
static const lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__7 = (const lean_object*)&l_Lean_Elab_Tactic_Omega_lookup___closed__7_value;
static lean_once_cell_t l_Lean_Elab_Tactic_Omega_lookup___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_Tactic_Omega_lookup___closed__8;
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(lean_object* v___x_1_, lean_object* v___x_2_, lean_object* v_m_3_, lean_object* v_cfg_4_, uint8_t v___y_5_, lean_object* v___y_6_, lean_object* v___y_7_, lean_object* v___y_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v___x_12_ = lean_st_mk_ref(v___x_1_);
v___x_13_ = lean_st_mk_ref(v___x_2_);
v___x_14_ = lean_box(v___y_5_);
lean_inc(v___y_10_);
lean_inc_ref(v___y_9_);
lean_inc(v___y_8_);
lean_inc_ref(v___y_7_);
lean_inc(v___y_6_);
lean_inc(v___x_12_);
lean_inc(v___x_13_);
v___x_15_ = lean_apply_10(v_m_3_, v___x_13_, v___x_12_, v_cfg_4_, v___x_14_, v___y_6_, v___y_7_, v___y_8_, v___y_9_, v___y_10_, lean_box(0));
if (lean_obj_tag(v___x_15_) == 0)
{
lean_object* v_a_16_; lean_object* v___x_18_; uint8_t v_isShared_19_; uint8_t v_isSharedCheck_25_; 
v_a_16_ = lean_ctor_get(v___x_15_, 0);
v_isSharedCheck_25_ = !lean_is_exclusive(v___x_15_);
if (v_isSharedCheck_25_ == 0)
{
v___x_18_ = v___x_15_;
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
else
{
lean_inc(v_a_16_);
lean_dec(v___x_15_);
v___x_18_ = lean_box(0);
v_isShared_19_ = v_isSharedCheck_25_;
goto v_resetjp_17_;
}
v_resetjp_17_:
{
lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_23_; 
v___x_20_ = lean_st_ref_get(v___x_13_);
lean_dec(v___x_13_);
lean_dec(v___x_20_);
v___x_21_ = lean_st_ref_get(v___x_12_);
lean_dec(v___x_12_);
lean_dec(v___x_21_);
if (v_isShared_19_ == 0)
{
v___x_23_ = v___x_18_;
goto v_reusejp_22_;
}
else
{
lean_object* v_reuseFailAlloc_24_; 
v_reuseFailAlloc_24_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_24_, 0, v_a_16_);
v___x_23_ = v_reuseFailAlloc_24_;
goto v_reusejp_22_;
}
v_reusejp_22_:
{
return v___x_23_;
}
}
}
else
{
lean_dec(v___x_13_);
lean_dec(v___x_12_);
return v___x_15_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed(lean_object* v___x_26_, lean_object* v___x_27_, lean_object* v_m_28_, lean_object* v_cfg_29_, lean_object* v___y_30_, lean_object* v___y_31_, lean_object* v___y_32_, lean_object* v___y_33_, lean_object* v___y_34_, lean_object* v___y_35_, lean_object* v___y_36_){
_start:
{
uint8_t v___y_4837__boxed_37_; lean_object* v_res_38_; 
v___y_4837__boxed_37_ = lean_unbox(v___y_30_);
v_res_38_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0(v___x_26_, v___x_27_, v_m_28_, v_cfg_29_, v___y_4837__boxed_37_, v___y_31_, v___y_32_, v___y_33_, v___y_34_, v___y_35_);
lean_dec(v___y_35_);
lean_dec_ref(v___y_34_);
lean_dec(v___y_33_);
lean_dec_ref(v___y_32_);
lean_dec(v___y_31_);
return v_res_38_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; 
v___x_39_ = lean_box(0);
v___x_40_ = lean_unsigned_to_nat(16u);
v___x_41_ = lean_mk_array(v___x_40_, v___x_39_);
return v___x_41_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_42_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__0);
v___x_43_ = lean_unsigned_to_nat(0u);
v___x_44_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_44_, 0, v___x_43_);
lean_ctor_set(v___x_44_, 1, v___x_42_);
return v___x_44_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2(void){
_start:
{
lean_object* v___x_45_; lean_object* v___x_46_; 
v___x_45_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___x_46_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_46_, 0, v___x_45_);
lean_ctor_set(v___x_46_, 1, v___x_45_);
return v___x_46_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(lean_object* v_m_47_, lean_object* v_cfg_48_, lean_object* v_a_49_, lean_object* v_a_50_, lean_object* v_a_51_, lean_object* v_a_52_){
_start:
{
lean_object* v___x_54_; lean_object* v___f_55_; uint8_t v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; 
v___x_54_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__1);
v___f_55_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___lam__0___boxed), 11, 4);
lean_closure_set(v___f_55_, 0, v___x_54_);
lean_closure_set(v___f_55_, 1, v___x_54_);
lean_closure_set(v___f_55_, 2, v_m_47_);
lean_closure_set(v___f_55_, 3, v_cfg_48_);
v___x_56_ = 3;
v___x_57_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___closed__2);
v___x_58_ = l_Lean_Meta_Canonicalizer_CanonM_run_x27___redArg(v___f_55_, v___x_56_, v___x_57_, v_a_49_, v_a_50_, v_a_51_, v_a_52_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg___boxed(lean_object* v_m_59_, lean_object* v_cfg_60_, lean_object* v_a_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_, lean_object* v_a_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_59_, v_cfg_60_, v_a_61_, v_a_62_, v_a_63_, v_a_64_);
lean_dec(v_a_64_);
lean_dec_ref(v_a_63_);
lean_dec(v_a_62_);
lean_dec_ref(v_a_61_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run(lean_object* v_00_u03b1_67_, lean_object* v_m_68_, lean_object* v_cfg_69_, lean_object* v_a_70_, lean_object* v_a_71_, lean_object* v_a_72_, lean_object* v_a_73_){
_start:
{
lean_object* v___x_75_; 
v___x_75_ = l_Lean_Elab_Tactic_Omega_OmegaM_run___redArg(v_m_68_, v_cfg_69_, v_a_70_, v_a_71_, v_a_72_, v_a_73_);
return v___x_75_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_OmegaM_run___boxed(lean_object* v_00_u03b1_76_, lean_object* v_m_77_, lean_object* v_cfg_78_, lean_object* v_a_79_, lean_object* v_a_80_, lean_object* v_a_81_, lean_object* v_a_82_, lean_object* v_a_83_){
_start:
{
lean_object* v_res_84_; 
v_res_84_ = l_Lean_Elab_Tactic_Omega_OmegaM_run(v_00_u03b1_76_, v_m_77_, v_cfg_78_, v_a_79_, v_a_80_, v_a_81_, v_a_82_);
lean_dec(v_a_82_);
lean_dec_ref(v_a_81_);
lean_dec(v_a_80_);
lean_dec_ref(v_a_79_);
return v_res_84_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg(lean_object* v_a_85_){
_start:
{
lean_object* v___x_87_; 
lean_inc_ref(v_a_85_);
v___x_87_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_87_, 0, v_a_85_);
return v___x_87_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___redArg___boxed(lean_object* v_a_88_, lean_object* v_a_89_){
_start:
{
lean_object* v_res_90_; 
v_res_90_ = l_Lean_Elab_Tactic_Omega_cfg___redArg(v_a_88_);
lean_dec_ref(v_a_88_);
return v_res_90_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg(lean_object* v_a_91_, lean_object* v_a_92_, lean_object* v_a_93_, uint8_t v_a_94_, lean_object* v_a_95_, lean_object* v_a_96_, lean_object* v_a_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; 
lean_inc_ref(v_a_93_);
v___x_101_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_101_, 0, v_a_93_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_cfg___boxed(lean_object* v_a_102_, lean_object* v_a_103_, lean_object* v_a_104_, lean_object* v_a_105_, lean_object* v_a_106_, lean_object* v_a_107_, lean_object* v_a_108_, lean_object* v_a_109_, lean_object* v_a_110_, lean_object* v_a_111_){
_start:
{
uint8_t v_a_boxed_112_; lean_object* v_res_113_; 
v_a_boxed_112_ = lean_unbox(v_a_105_);
v_res_113_ = l_Lean_Elab_Tactic_Omega_cfg(v_a_102_, v_a_103_, v_a_104_, v_a_boxed_112_, v_a_106_, v_a_107_, v_a_108_, v_a_109_, v_a_110_);
lean_dec(v_a_110_);
lean_dec_ref(v_a_109_);
lean_dec(v_a_108_);
lean_dec_ref(v_a_107_);
lean_dec(v_a_106_);
lean_dec_ref(v_a_104_);
lean_dec(v_a_103_);
lean_dec(v_a_102_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(lean_object* v_hi_114_, lean_object* v_pivot_115_, lean_object* v_as_116_, lean_object* v_i_117_, lean_object* v_k_118_){
_start:
{
uint8_t v___x_119_; 
v___x_119_ = lean_nat_dec_lt(v_k_118_, v_hi_114_);
if (v___x_119_ == 0)
{
lean_object* v___x_120_; lean_object* v___x_121_; 
lean_dec(v_k_118_);
v___x_120_ = lean_array_fswap(v_as_116_, v_i_117_, v_hi_114_);
v___x_121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_121_, 0, v_i_117_);
lean_ctor_set(v___x_121_, 1, v___x_120_);
return v___x_121_;
}
else
{
lean_object* v___x_122_; lean_object* v_snd_123_; lean_object* v_snd_124_; uint8_t v___x_125_; 
v___x_122_ = lean_array_fget_borrowed(v_as_116_, v_k_118_);
v_snd_123_ = lean_ctor_get(v___x_122_, 1);
v_snd_124_ = lean_ctor_get(v_pivot_115_, 1);
v___x_125_ = lean_nat_dec_lt(v_snd_123_, v_snd_124_);
if (v___x_125_ == 0)
{
lean_object* v___x_126_; lean_object* v___x_127_; 
v___x_126_ = lean_unsigned_to_nat(1u);
v___x_127_ = lean_nat_add(v_k_118_, v___x_126_);
lean_dec(v_k_118_);
v_k_118_ = v___x_127_;
goto _start;
}
else
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; 
v___x_129_ = lean_array_fswap(v_as_116_, v_i_117_, v_k_118_);
v___x_130_ = lean_unsigned_to_nat(1u);
v___x_131_ = lean_nat_add(v_i_117_, v___x_130_);
lean_dec(v_i_117_);
v___x_132_ = lean_nat_add(v_k_118_, v___x_130_);
lean_dec(v_k_118_);
v_as_116_ = v___x_129_;
v_i_117_ = v___x_131_;
v_k_118_ = v___x_132_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg___boxed(lean_object* v_hi_134_, lean_object* v_pivot_135_, lean_object* v_as_136_, lean_object* v_i_137_, lean_object* v_k_138_){
_start:
{
lean_object* v_res_139_; 
v_res_139_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_134_, v_pivot_135_, v_as_136_, v_i_137_, v_k_138_);
lean_dec_ref(v_pivot_135_);
lean_dec(v_hi_134_);
return v_res_139_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(lean_object* v_x1_140_, lean_object* v_x2_141_){
_start:
{
lean_object* v_snd_142_; lean_object* v_snd_143_; uint8_t v___x_144_; 
v_snd_142_ = lean_ctor_get(v_x1_140_, 1);
v_snd_143_ = lean_ctor_get(v_x2_141_, 1);
v___x_144_ = lean_nat_dec_lt(v_snd_142_, v_snd_143_);
return v___x_144_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0___boxed(lean_object* v_x1_145_, lean_object* v_x2_146_){
_start:
{
uint8_t v_res_147_; lean_object* v_r_148_; 
v_res_147_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v_x1_145_, v_x2_146_);
lean_dec_ref(v_x2_146_);
lean_dec_ref(v_x1_145_);
v_r_148_ = lean_box(v_res_147_);
return v_r_148_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(lean_object* v_n_149_, lean_object* v_as_150_, lean_object* v_lo_151_, lean_object* v_hi_152_){
_start:
{
lean_object* v___y_154_; uint8_t v___x_164_; 
v___x_164_ = lean_nat_dec_lt(v_lo_151_, v_hi_152_);
if (v___x_164_ == 0)
{
lean_dec(v_lo_151_);
return v_as_150_;
}
else
{
lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v_mid_167_; lean_object* v___y_169_; lean_object* v___y_175_; lean_object* v___x_180_; lean_object* v___x_181_; uint8_t v___x_182_; 
v___x_165_ = lean_nat_add(v_lo_151_, v_hi_152_);
v___x_166_ = lean_unsigned_to_nat(1u);
v_mid_167_ = lean_nat_shiftr(v___x_165_, v___x_166_);
lean_dec(v___x_165_);
v___x_180_ = lean_array_fget_borrowed(v_as_150_, v_mid_167_);
v___x_181_ = lean_array_fget_borrowed(v_as_150_, v_lo_151_);
v___x_182_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_180_, v___x_181_);
if (v___x_182_ == 0)
{
v___y_175_ = v_as_150_;
goto v___jp_174_;
}
else
{
lean_object* v___x_183_; 
v___x_183_ = lean_array_fswap(v_as_150_, v_lo_151_, v_mid_167_);
v___y_175_ = v___x_183_;
goto v___jp_174_;
}
v___jp_168_:
{
lean_object* v___x_170_; lean_object* v___x_171_; uint8_t v___x_172_; 
v___x_170_ = lean_array_fget_borrowed(v___y_169_, v_mid_167_);
v___x_171_ = lean_array_fget_borrowed(v___y_169_, v_hi_152_);
v___x_172_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_170_, v___x_171_);
if (v___x_172_ == 0)
{
lean_dec(v_mid_167_);
v___y_154_ = v___y_169_;
goto v___jp_153_;
}
else
{
lean_object* v___x_173_; 
v___x_173_ = lean_array_fswap(v___y_169_, v_mid_167_, v_hi_152_);
lean_dec(v_mid_167_);
v___y_154_ = v___x_173_;
goto v___jp_153_;
}
}
v___jp_174_:
{
lean_object* v___x_176_; lean_object* v___x_177_; uint8_t v___x_178_; 
v___x_176_ = lean_array_fget_borrowed(v___y_175_, v_hi_152_);
v___x_177_ = lean_array_fget_borrowed(v___y_175_, v_lo_151_);
v___x_178_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___lam__0(v___x_176_, v___x_177_);
if (v___x_178_ == 0)
{
v___y_169_ = v___y_175_;
goto v___jp_168_;
}
else
{
lean_object* v___x_179_; 
v___x_179_ = lean_array_fswap(v___y_175_, v_lo_151_, v_hi_152_);
v___y_169_ = v___x_179_;
goto v___jp_168_;
}
}
}
v___jp_153_:
{
lean_object* v_pivot_155_; lean_object* v___x_156_; lean_object* v_fst_157_; lean_object* v_snd_158_; uint8_t v___x_159_; 
v_pivot_155_ = lean_array_fget(v___y_154_, v_hi_152_);
lean_inc_n(v_lo_151_, 2);
v___x_156_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_152_, v_pivot_155_, v___y_154_, v_lo_151_, v_lo_151_);
lean_dec(v_pivot_155_);
v_fst_157_ = lean_ctor_get(v___x_156_, 0);
lean_inc(v_fst_157_);
v_snd_158_ = lean_ctor_get(v___x_156_, 1);
lean_inc(v_snd_158_);
lean_dec_ref(v___x_156_);
v___x_159_ = lean_nat_dec_le(v_hi_152_, v_fst_157_);
if (v___x_159_ == 0)
{
lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_160_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_149_, v_snd_158_, v_lo_151_, v_fst_157_);
v___x_161_ = lean_unsigned_to_nat(1u);
v___x_162_ = lean_nat_add(v_fst_157_, v___x_161_);
lean_dec(v_fst_157_);
v_as_150_ = v___x_160_;
v_lo_151_ = v___x_162_;
goto _start;
}
else
{
lean_dec(v_fst_157_);
lean_dec(v_lo_151_);
return v_snd_158_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg___boxed(lean_object* v_n_184_, lean_object* v_as_185_, lean_object* v_lo_186_, lean_object* v_hi_187_){
_start:
{
lean_object* v_res_188_; 
v_res_188_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_184_, v_as_185_, v_lo_186_, v_hi_187_);
lean_dec(v_hi_187_);
lean_dec(v_n_184_);
return v_res_188_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(lean_object* v_x_189_, lean_object* v_x_190_){
_start:
{
if (lean_obj_tag(v_x_190_) == 0)
{
return v_x_189_;
}
else
{
lean_object* v_key_191_; lean_object* v_value_192_; lean_object* v_tail_193_; lean_object* v___x_194_; lean_object* v___x_195_; 
v_key_191_ = lean_ctor_get(v_x_190_, 0);
v_value_192_ = lean_ctor_get(v_x_190_, 1);
v_tail_193_ = lean_ctor_get(v_x_190_, 2);
lean_inc(v_value_192_);
lean_inc(v_key_191_);
v___x_194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_194_, 0, v_key_191_);
lean_ctor_set(v___x_194_, 1, v_value_192_);
v___x_195_ = lean_array_push(v_x_189_, v___x_194_);
v_x_189_ = v___x_195_;
v_x_190_ = v_tail_193_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2___boxed(lean_object* v_x_197_, lean_object* v_x_198_){
_start:
{
lean_object* v_res_199_; 
v_res_199_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_x_197_, v_x_198_);
lean_dec(v_x_198_);
return v_res_199_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(lean_object* v_as_200_, size_t v_i_201_, size_t v_stop_202_, lean_object* v_b_203_){
_start:
{
uint8_t v___x_204_; 
v___x_204_ = lean_usize_dec_eq(v_i_201_, v_stop_202_);
if (v___x_204_ == 0)
{
lean_object* v___x_205_; lean_object* v___x_206_; size_t v___x_207_; size_t v___x_208_; 
v___x_205_ = lean_array_uget_borrowed(v_as_200_, v_i_201_);
v___x_206_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00Lean_Elab_Tactic_Omega_atoms_spec__2(v_b_203_, v___x_205_);
v___x_207_ = ((size_t)1ULL);
v___x_208_ = lean_usize_add(v_i_201_, v___x_207_);
v_i_201_ = v___x_208_;
v_b_203_ = v___x_206_;
goto _start;
}
else
{
return v_b_203_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3___boxed(lean_object* v_as_210_, lean_object* v_i_211_, lean_object* v_stop_212_, lean_object* v_b_213_){
_start:
{
size_t v_i_boxed_214_; size_t v_stop_boxed_215_; lean_object* v_res_216_; 
v_i_boxed_214_ = lean_unbox_usize(v_i_211_);
lean_dec(v_i_211_);
v_stop_boxed_215_ = lean_unbox_usize(v_stop_212_);
lean_dec(v_stop_212_);
v_res_216_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_as_210_, v_i_boxed_214_, v_stop_boxed_215_, v_b_213_);
lean_dec_ref(v_as_210_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(size_t v_sz_217_, size_t v_i_218_, lean_object* v_bs_219_){
_start:
{
uint8_t v___x_220_; 
v___x_220_ = lean_usize_dec_lt(v_i_218_, v_sz_217_);
if (v___x_220_ == 0)
{
return v_bs_219_;
}
else
{
lean_object* v_v_221_; lean_object* v_fst_222_; lean_object* v___x_223_; lean_object* v_bs_x27_224_; size_t v___x_225_; size_t v___x_226_; lean_object* v___x_227_; 
v_v_221_ = lean_array_uget_borrowed(v_bs_219_, v_i_218_);
v_fst_222_ = lean_ctor_get(v_v_221_, 0);
lean_inc(v_fst_222_);
v___x_223_ = lean_unsigned_to_nat(0u);
v_bs_x27_224_ = lean_array_uset(v_bs_219_, v_i_218_, v___x_223_);
v___x_225_ = ((size_t)1ULL);
v___x_226_ = lean_usize_add(v_i_218_, v___x_225_);
v___x_227_ = lean_array_uset(v_bs_x27_224_, v_i_218_, v_fst_222_);
v_i_218_ = v___x_226_;
v_bs_219_ = v___x_227_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0___boxed(lean_object* v_sz_229_, lean_object* v_i_230_, lean_object* v_bs_231_){
_start:
{
size_t v_sz_boxed_232_; size_t v_i_boxed_233_; lean_object* v_res_234_; 
v_sz_boxed_232_ = lean_unbox_usize(v_sz_229_);
lean_dec(v_sz_229_);
v_i_boxed_233_ = lean_unbox_usize(v_i_230_);
lean_dec(v_i_230_);
v_res_234_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_boxed_232_, v_i_boxed_233_, v_bs_231_);
return v_res_234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg(lean_object* v_a_235_){
_start:
{
lean_object* v___x_237_; lean_object* v___y_239_; lean_object* v___y_245_; lean_object* v___y_246_; lean_object* v___y_247_; lean_object* v___y_248_; lean_object* v___y_251_; lean_object* v___y_252_; lean_object* v___y_253_; lean_object* v___y_254_; lean_object* v___y_257_; lean_object* v_size_264_; lean_object* v_buckets_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; uint8_t v___x_269_; 
v___x_237_ = lean_st_ref_get(v_a_235_);
v_size_264_ = lean_ctor_get(v___x_237_, 0);
lean_inc(v_size_264_);
v_buckets_265_ = lean_ctor_get(v___x_237_, 1);
lean_inc_ref(v_buckets_265_);
lean_dec(v___x_237_);
v___x_266_ = lean_mk_empty_array_with_capacity(v_size_264_);
lean_dec(v_size_264_);
v___x_267_ = lean_unsigned_to_nat(0u);
v___x_268_ = lean_array_get_size(v_buckets_265_);
v___x_269_ = lean_nat_dec_lt(v___x_267_, v___x_268_);
if (v___x_269_ == 0)
{
lean_dec_ref(v_buckets_265_);
v___y_257_ = v___x_266_;
goto v___jp_256_;
}
else
{
size_t v___x_270_; size_t v___x_271_; lean_object* v___x_272_; 
v___x_270_ = ((size_t)0ULL);
v___x_271_ = lean_usize_of_nat(v___x_268_);
v___x_272_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Elab_Tactic_Omega_atoms_spec__3(v_buckets_265_, v___x_270_, v___x_271_, v___x_266_);
lean_dec_ref(v_buckets_265_);
v___y_257_ = v___x_272_;
goto v___jp_256_;
}
v___jp_238_:
{
size_t v_sz_240_; size_t v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v_sz_240_ = lean_array_size(v___y_239_);
v___x_241_ = ((size_t)0ULL);
v___x_242_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Tactic_Omega_atoms_spec__0(v_sz_240_, v___x_241_, v___y_239_);
v___x_243_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_243_, 0, v___x_242_);
return v___x_243_;
}
v___jp_244_:
{
lean_object* v___x_249_; 
v___x_249_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v___y_246_, v___y_245_, v___y_247_, v___y_248_);
lean_dec(v___y_248_);
lean_dec(v___y_246_);
v___y_239_ = v___x_249_;
goto v___jp_238_;
}
v___jp_250_:
{
uint8_t v___x_255_; 
v___x_255_ = lean_nat_dec_le(v___y_254_, v___y_251_);
if (v___x_255_ == 0)
{
lean_dec(v___y_251_);
lean_inc(v___y_254_);
v___y_245_ = v___y_252_;
v___y_246_ = v___y_253_;
v___y_247_ = v___y_254_;
v___y_248_ = v___y_254_;
goto v___jp_244_;
}
else
{
v___y_245_ = v___y_252_;
v___y_246_ = v___y_253_;
v___y_247_ = v___y_254_;
v___y_248_ = v___y_251_;
goto v___jp_244_;
}
}
v___jp_256_:
{
lean_object* v___x_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v___x_258_ = lean_array_get_size(v___y_257_);
v___x_259_ = lean_unsigned_to_nat(0u);
v___x_260_ = lean_nat_dec_eq(v___x_258_, v___x_259_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; lean_object* v___x_262_; uint8_t v___x_263_; 
v___x_261_ = lean_unsigned_to_nat(1u);
v___x_262_ = lean_nat_sub(v___x_258_, v___x_261_);
v___x_263_ = lean_nat_dec_le(v___x_259_, v___x_262_);
if (v___x_263_ == 0)
{
lean_inc(v___x_262_);
v___y_251_ = v___x_262_;
v___y_252_ = v___y_257_;
v___y_253_ = v___x_258_;
v___y_254_ = v___x_262_;
goto v___jp_250_;
}
else
{
v___y_251_ = v___x_262_;
v___y_252_ = v___y_257_;
v___y_253_ = v___x_258_;
v___y_254_ = v___x_259_;
goto v___jp_250_;
}
}
else
{
v___y_239_ = v___y_257_;
goto v___jp_238_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___redArg___boxed(lean_object* v_a_273_, lean_object* v_a_274_){
_start:
{
lean_object* v_res_275_; 
v_res_275_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_273_);
lean_dec(v_a_273_);
return v_res_275_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms(lean_object* v_a_276_, lean_object* v_a_277_, lean_object* v_a_278_, uint8_t v_a_279_, lean_object* v_a_280_, lean_object* v_a_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; 
v___x_286_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_277_);
return v___x_286_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atoms___boxed(lean_object* v_a_287_, lean_object* v_a_288_, lean_object* v_a_289_, lean_object* v_a_290_, lean_object* v_a_291_, lean_object* v_a_292_, lean_object* v_a_293_, lean_object* v_a_294_, lean_object* v_a_295_, lean_object* v_a_296_){
_start:
{
uint8_t v_a_boxed_297_; lean_object* v_res_298_; 
v_a_boxed_297_ = lean_unbox(v_a_290_);
v_res_298_ = l_Lean_Elab_Tactic_Omega_atoms(v_a_287_, v_a_288_, v_a_289_, v_a_boxed_297_, v_a_291_, v_a_292_, v_a_293_, v_a_294_, v_a_295_);
lean_dec(v_a_295_);
lean_dec_ref(v_a_294_);
lean_dec(v_a_293_);
lean_dec_ref(v_a_292_);
lean_dec(v_a_291_);
lean_dec_ref(v_a_289_);
lean_dec(v_a_288_);
lean_dec(v_a_287_);
return v_res_298_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(lean_object* v_n_299_, lean_object* v_as_300_, lean_object* v_lo_301_, lean_object* v_hi_302_, lean_object* v_w_303_, lean_object* v_hlo_304_, lean_object* v_hhi_305_){
_start:
{
lean_object* v___x_306_; 
v___x_306_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___redArg(v_n_299_, v_as_300_, v_lo_301_, v_hi_302_);
return v___x_306_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1___boxed(lean_object* v_n_307_, lean_object* v_as_308_, lean_object* v_lo_309_, lean_object* v_hi_310_, lean_object* v_w_311_, lean_object* v_hlo_312_, lean_object* v_hhi_313_){
_start:
{
lean_object* v_res_314_; 
v_res_314_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1(v_n_307_, v_as_308_, v_lo_309_, v_hi_310_, v_w_311_, v_hlo_312_, v_hhi_313_);
lean_dec(v_hi_310_);
lean_dec(v_n_307_);
return v_res_314_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(lean_object* v_n_315_, lean_object* v_lo_316_, lean_object* v_hi_317_, lean_object* v_hhi_318_, lean_object* v_pivot_319_, lean_object* v_as_320_, lean_object* v_i_321_, lean_object* v_k_322_, lean_object* v_ilo_323_, lean_object* v_ik_324_, lean_object* v_w_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___redArg(v_hi_317_, v_pivot_319_, v_as_320_, v_i_321_, v_k_322_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1___boxed(lean_object* v_n_327_, lean_object* v_lo_328_, lean_object* v_hi_329_, lean_object* v_hhi_330_, lean_object* v_pivot_331_, lean_object* v_as_332_, lean_object* v_i_333_, lean_object* v_k_334_, lean_object* v_ilo_335_, lean_object* v_ik_336_, lean_object* v_w_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qpartition_loop___at___00__private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort___at___00Lean_Elab_Tactic_Omega_atoms_spec__1_spec__1(v_n_327_, v_lo_328_, v_hi_329_, v_hhi_330_, v_pivot_331_, v_as_332_, v_i_333_, v_k_334_, v_ilo_335_, v_ik_336_, v_w_337_);
lean_dec_ref(v_pivot_331_);
lean_dec(v_hi_329_);
lean_dec(v_lo_328_);
lean_dec(v_n_327_);
return v_res_338_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2(void){
_start:
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; 
v___x_342_ = lean_box(0);
v___x_343_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_344_ = l_Lean_Expr_const___override(v___x_343_, v___x_342_);
return v___x_344_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg(lean_object* v_a_345_, lean_object* v_a_346_, lean_object* v_a_347_, lean_object* v_a_348_, lean_object* v_a_349_){
_start:
{
lean_object* v___x_351_; lean_object* v_a_352_; lean_object* v___x_353_; lean_object* v___x_354_; lean_object* v___x_355_; 
v___x_351_ = l_Lean_Elab_Tactic_Omega_atoms___redArg(v_a_345_);
v_a_352_ = lean_ctor_get(v___x_351_, 0);
lean_inc(v_a_352_);
lean_dec_ref(v___x_351_);
v___x_353_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_354_ = lean_array_to_list(v_a_352_);
v___x_355_ = l_Lean_Meta_mkListLit(v___x_353_, v___x_354_, v_a_346_, v_a_347_, v_a_348_, v_a_349_);
return v___x_355_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___redArg___boxed(lean_object* v_a_356_, lean_object* v_a_357_, lean_object* v_a_358_, lean_object* v_a_359_, lean_object* v_a_360_, lean_object* v_a_361_){
_start:
{
lean_object* v_res_362_; 
v_res_362_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_356_, v_a_357_, v_a_358_, v_a_359_, v_a_360_);
lean_dec(v_a_360_);
lean_dec_ref(v_a_359_);
lean_dec(v_a_358_);
lean_dec_ref(v_a_357_);
lean_dec(v_a_356_);
return v_res_362_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList(lean_object* v_a_363_, lean_object* v_a_364_, lean_object* v_a_365_, uint8_t v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_){
_start:
{
lean_object* v___x_373_; 
v___x_373_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_364_, v_a_368_, v_a_369_, v_a_370_, v_a_371_);
return v___x_373_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsList___boxed(lean_object* v_a_374_, lean_object* v_a_375_, lean_object* v_a_376_, lean_object* v_a_377_, lean_object* v_a_378_, lean_object* v_a_379_, lean_object* v_a_380_, lean_object* v_a_381_, lean_object* v_a_382_, lean_object* v_a_383_){
_start:
{
uint8_t v_a_boxed_384_; lean_object* v_res_385_; 
v_a_boxed_384_ = lean_unbox(v_a_377_);
v_res_385_ = l_Lean_Elab_Tactic_Omega_atomsList(v_a_374_, v_a_375_, v_a_376_, v_a_boxed_384_, v_a_378_, v_a_379_, v_a_380_, v_a_381_, v_a_382_);
lean_dec(v_a_382_);
lean_dec_ref(v_a_381_);
lean_dec(v_a_380_);
lean_dec_ref(v_a_379_);
lean_dec(v_a_378_);
lean_dec_ref(v_a_376_);
lean_dec(v_a_375_);
lean_dec(v_a_374_);
return v_res_385_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5(void){
_start:
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; 
v___x_395_ = lean_box(0);
v___x_396_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__4));
v___x_397_ = l_Lean_Expr_const___override(v___x_396_, v___x_395_);
return v___x_397_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(lean_object* v_a_398_, lean_object* v_a_399_, lean_object* v_a_400_, lean_object* v_a_401_, lean_object* v_a_402_){
_start:
{
lean_object* v___x_404_; 
v___x_404_ = l_Lean_Elab_Tactic_Omega_atomsList___redArg(v_a_398_, v_a_399_, v_a_400_, v_a_401_, v_a_402_);
if (lean_obj_tag(v___x_404_) == 0)
{
lean_object* v_a_405_; lean_object* v___x_407_; uint8_t v_isShared_408_; uint8_t v_isSharedCheck_414_; 
v_a_405_ = lean_ctor_get(v___x_404_, 0);
v_isSharedCheck_414_ = !lean_is_exclusive(v___x_404_);
if (v_isSharedCheck_414_ == 0)
{
v___x_407_ = v___x_404_;
v_isShared_408_ = v_isSharedCheck_414_;
goto v_resetjp_406_;
}
else
{
lean_inc(v_a_405_);
lean_dec(v___x_404_);
v___x_407_ = lean_box(0);
v_isShared_408_ = v_isSharedCheck_414_;
goto v_resetjp_406_;
}
v_resetjp_406_:
{
lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_412_; 
v___x_409_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5, &l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5_once, _init_l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___closed__5);
v___x_410_ = l_Lean_Expr_app___override(v___x_409_, v_a_405_);
if (v_isShared_408_ == 0)
{
lean_ctor_set(v___x_407_, 0, v___x_410_);
v___x_412_ = v___x_407_;
goto v_reusejp_411_;
}
else
{
lean_object* v_reuseFailAlloc_413_; 
v_reuseFailAlloc_413_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_413_, 0, v___x_410_);
v___x_412_ = v_reuseFailAlloc_413_;
goto v_reusejp_411_;
}
v_reusejp_411_:
{
return v___x_412_;
}
}
}
else
{
return v___x_404_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg___boxed(lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_, lean_object* v_a_419_, lean_object* v_a_420_){
_start:
{
lean_object* v_res_421_; 
v_res_421_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_415_, v_a_416_, v_a_417_, v_a_418_, v_a_419_);
lean_dec(v_a_419_);
lean_dec_ref(v_a_418_);
lean_dec(v_a_417_);
lean_dec_ref(v_a_416_);
lean_dec(v_a_415_);
return v_res_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs(lean_object* v_a_422_, lean_object* v_a_423_, lean_object* v_a_424_, uint8_t v_a_425_, lean_object* v_a_426_, lean_object* v_a_427_, lean_object* v_a_428_, lean_object* v_a_429_, lean_object* v_a_430_){
_start:
{
lean_object* v___x_432_; 
v___x_432_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs___redArg(v_a_423_, v_a_427_, v_a_428_, v_a_429_, v_a_430_);
return v___x_432_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_atomsCoeffs___boxed(lean_object* v_a_433_, lean_object* v_a_434_, lean_object* v_a_435_, lean_object* v_a_436_, lean_object* v_a_437_, lean_object* v_a_438_, lean_object* v_a_439_, lean_object* v_a_440_, lean_object* v_a_441_, lean_object* v_a_442_){
_start:
{
uint8_t v_a_boxed_443_; lean_object* v_res_444_; 
v_a_boxed_443_ = lean_unbox(v_a_436_);
v_res_444_ = l_Lean_Elab_Tactic_Omega_atomsCoeffs(v_a_433_, v_a_434_, v_a_435_, v_a_boxed_443_, v_a_437_, v_a_438_, v_a_439_, v_a_440_, v_a_441_);
lean_dec(v_a_441_);
lean_dec_ref(v_a_440_);
lean_dec(v_a_439_);
lean_dec_ref(v_a_438_);
lean_dec(v_a_437_);
lean_dec_ref(v_a_435_);
lean_dec(v_a_434_);
lean_dec(v_a_433_);
return v_res_444_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg(lean_object* v_t_445_, lean_object* v_a_446_, lean_object* v_a_447_, lean_object* v_a_448_, uint8_t v_a_449_, lean_object* v_a_450_, lean_object* v_a_451_, lean_object* v_a_452_, lean_object* v_a_453_, lean_object* v_a_454_){
_start:
{
lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_456_ = lean_st_ref_get(v_a_447_);
v___x_457_ = lean_st_ref_get(v_a_446_);
v___x_458_ = lean_box(v_a_449_);
lean_inc(v_a_454_);
lean_inc_ref(v_a_453_);
lean_inc(v_a_452_);
lean_inc_ref(v_a_451_);
lean_inc(v_a_450_);
lean_inc_ref(v_a_448_);
lean_inc(v_a_447_);
lean_inc(v_a_446_);
v___x_459_ = lean_apply_10(v_t_445_, v_a_446_, v_a_447_, v_a_448_, v___x_458_, v_a_450_, v_a_451_, v_a_452_, v_a_453_, v_a_454_, lean_box(0));
if (lean_obj_tag(v___x_459_) == 0)
{
lean_object* v_a_460_; lean_object* v___x_462_; uint8_t v_isShared_463_; uint8_t v_isSharedCheck_478_; 
v_a_460_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_478_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_478_ == 0)
{
v___x_462_ = v___x_459_;
v_isShared_463_ = v_isSharedCheck_478_;
goto v_resetjp_461_;
}
else
{
lean_inc(v_a_460_);
lean_dec(v___x_459_);
v___x_462_ = lean_box(0);
v_isShared_463_ = v_isSharedCheck_478_;
goto v_resetjp_461_;
}
v_resetjp_461_:
{
lean_object* v_snd_464_; uint8_t v___x_465_; 
v_snd_464_ = lean_ctor_get(v_a_460_, 1);
v___x_465_ = lean_unbox(v_snd_464_);
if (v___x_465_ == 0)
{
lean_object* v_fst_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_472_; 
v_fst_466_ = lean_ctor_get(v_a_460_, 0);
lean_inc(v_fst_466_);
lean_dec(v_a_460_);
v___x_467_ = lean_st_ref_take(v_a_447_);
lean_dec(v___x_467_);
v___x_468_ = lean_st_ref_put(v_a_447_, v___x_456_);
v___x_469_ = lean_st_ref_take(v_a_446_);
lean_dec(v___x_469_);
v___x_470_ = lean_st_ref_put(v_a_446_, v___x_457_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v_fst_466_);
v___x_472_ = v___x_462_;
goto v_reusejp_471_;
}
else
{
lean_object* v_reuseFailAlloc_473_; 
v_reuseFailAlloc_473_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_473_, 0, v_fst_466_);
v___x_472_ = v_reuseFailAlloc_473_;
goto v_reusejp_471_;
}
v_reusejp_471_:
{
return v___x_472_;
}
}
else
{
lean_object* v_fst_474_; lean_object* v___x_476_; 
lean_dec(v___x_457_);
lean_dec(v___x_456_);
v_fst_474_ = lean_ctor_get(v_a_460_, 0);
lean_inc(v_fst_474_);
lean_dec(v_a_460_);
if (v_isShared_463_ == 0)
{
lean_ctor_set(v___x_462_, 0, v_fst_474_);
v___x_476_ = v___x_462_;
goto v_reusejp_475_;
}
else
{
lean_object* v_reuseFailAlloc_477_; 
v_reuseFailAlloc_477_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_477_, 0, v_fst_474_);
v___x_476_ = v_reuseFailAlloc_477_;
goto v_reusejp_475_;
}
v_reusejp_475_:
{
return v___x_476_;
}
}
}
}
else
{
lean_object* v_a_479_; lean_object* v___x_481_; uint8_t v_isShared_482_; uint8_t v_isSharedCheck_486_; 
lean_dec(v___x_457_);
lean_dec(v___x_456_);
v_a_479_ = lean_ctor_get(v___x_459_, 0);
v_isSharedCheck_486_ = !lean_is_exclusive(v___x_459_);
if (v_isSharedCheck_486_ == 0)
{
v___x_481_ = v___x_459_;
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
else
{
lean_inc(v_a_479_);
lean_dec(v___x_459_);
v___x_481_ = lean_box(0);
v_isShared_482_ = v_isSharedCheck_486_;
goto v_resetjp_480_;
}
v_resetjp_480_:
{
lean_object* v___x_484_; 
if (v_isShared_482_ == 0)
{
v___x_484_ = v___x_481_;
goto v_reusejp_483_;
}
else
{
lean_object* v_reuseFailAlloc_485_; 
v_reuseFailAlloc_485_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_485_, 0, v_a_479_);
v___x_484_ = v_reuseFailAlloc_485_;
goto v_reusejp_483_;
}
v_reusejp_483_:
{
return v___x_484_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___redArg___boxed(lean_object* v_t_487_, lean_object* v_a_488_, lean_object* v_a_489_, lean_object* v_a_490_, lean_object* v_a_491_, lean_object* v_a_492_, lean_object* v_a_493_, lean_object* v_a_494_, lean_object* v_a_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
uint8_t v_a_boxed_498_; lean_object* v_res_499_; 
v_a_boxed_498_ = lean_unbox(v_a_491_);
v_res_499_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_487_, v_a_488_, v_a_489_, v_a_490_, v_a_boxed_498_, v_a_492_, v_a_493_, v_a_494_, v_a_495_, v_a_496_);
lean_dec(v_a_496_);
lean_dec_ref(v_a_495_);
lean_dec(v_a_494_);
lean_dec_ref(v_a_493_);
lean_dec(v_a_492_);
lean_dec_ref(v_a_490_);
lean_dec(v_a_489_);
lean_dec(v_a_488_);
return v_res_499_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen(lean_object* v_00_u03b1_500_, lean_object* v_t_501_, lean_object* v_a_502_, lean_object* v_a_503_, lean_object* v_a_504_, uint8_t v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_, lean_object* v_a_508_, lean_object* v_a_509_, lean_object* v_a_510_){
_start:
{
lean_object* v___x_512_; 
v___x_512_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v_t_501_, v_a_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_, v_a_507_, v_a_508_, v_a_509_, v_a_510_);
return v___x_512_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_commitWhen___boxed(lean_object* v_00_u03b1_513_, lean_object* v_t_514_, lean_object* v_a_515_, lean_object* v_a_516_, lean_object* v_a_517_, lean_object* v_a_518_, lean_object* v_a_519_, lean_object* v_a_520_, lean_object* v_a_521_, lean_object* v_a_522_, lean_object* v_a_523_, lean_object* v_a_524_){
_start:
{
uint8_t v_a_boxed_525_; lean_object* v_res_526_; 
v_a_boxed_525_ = lean_unbox(v_a_518_);
v_res_526_ = l_Lean_Elab_Tactic_Omega_commitWhen(v_00_u03b1_513_, v_t_514_, v_a_515_, v_a_516_, v_a_517_, v_a_boxed_525_, v_a_519_, v_a_520_, v_a_521_, v_a_522_, v_a_523_);
lean_dec(v_a_523_);
lean_dec_ref(v_a_522_);
lean_dec(v_a_521_);
lean_dec_ref(v_a_520_);
lean_dec(v_a_519_);
lean_dec_ref(v_a_517_);
lean_dec(v_a_516_);
lean_dec(v_a_515_);
return v_res_526_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(lean_object* v_t_527_, lean_object* v___y_528_, lean_object* v___y_529_, lean_object* v___y_530_, uint8_t v___y_531_, lean_object* v___y_532_, lean_object* v___y_533_, lean_object* v___y_534_, lean_object* v___y_535_, lean_object* v___y_536_){
_start:
{
lean_object* v___x_538_; lean_object* v___x_539_; 
v___x_538_ = lean_box(v___y_531_);
lean_inc(v___y_536_);
lean_inc_ref(v___y_535_);
lean_inc(v___y_534_);
lean_inc_ref(v___y_533_);
lean_inc(v___y_532_);
lean_inc_ref(v___y_530_);
lean_inc(v___y_529_);
lean_inc(v___y_528_);
v___x_539_ = lean_apply_10(v_t_527_, v___y_528_, v___y_529_, v___y_530_, v___x_538_, v___y_532_, v___y_533_, v___y_534_, v___y_535_, v___y_536_, lean_box(0));
if (lean_obj_tag(v___x_539_) == 0)
{
lean_object* v_a_540_; lean_object* v___x_542_; uint8_t v_isShared_543_; uint8_t v_isSharedCheck_550_; 
v_a_540_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_550_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_550_ == 0)
{
v___x_542_ = v___x_539_;
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
else
{
lean_inc(v_a_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_box(0);
v_isShared_543_ = v_isSharedCheck_550_;
goto v_resetjp_541_;
}
v_resetjp_541_:
{
uint8_t v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_548_; 
v___x_544_ = 0;
v___x_545_ = lean_box(v___x_544_);
v___x_546_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_546_, 0, v_a_540_);
lean_ctor_set(v___x_546_, 1, v___x_545_);
if (v_isShared_543_ == 0)
{
lean_ctor_set(v___x_542_, 0, v___x_546_);
v___x_548_ = v___x_542_;
goto v_reusejp_547_;
}
else
{
lean_object* v_reuseFailAlloc_549_; 
v_reuseFailAlloc_549_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_549_, 0, v___x_546_);
v___x_548_ = v_reuseFailAlloc_549_;
goto v_reusejp_547_;
}
v_reusejp_547_:
{
return v___x_548_;
}
}
}
else
{
lean_object* v_a_551_; lean_object* v___x_553_; uint8_t v_isShared_554_; uint8_t v_isSharedCheck_558_; 
v_a_551_ = lean_ctor_get(v___x_539_, 0);
v_isSharedCheck_558_ = !lean_is_exclusive(v___x_539_);
if (v_isSharedCheck_558_ == 0)
{
v___x_553_ = v___x_539_;
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
else
{
lean_inc(v_a_551_);
lean_dec(v___x_539_);
v___x_553_ = lean_box(0);
v_isShared_554_ = v_isSharedCheck_558_;
goto v_resetjp_552_;
}
v_resetjp_552_:
{
lean_object* v___x_556_; 
if (v_isShared_554_ == 0)
{
v___x_556_ = v___x_553_;
goto v_reusejp_555_;
}
else
{
lean_object* v_reuseFailAlloc_557_; 
v_reuseFailAlloc_557_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_557_, 0, v_a_551_);
v___x_556_ = v_reuseFailAlloc_557_;
goto v_reusejp_555_;
}
v_reusejp_555_:
{
return v___x_556_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed(lean_object* v_t_559_, lean_object* v___y_560_, lean_object* v___y_561_, lean_object* v___y_562_, lean_object* v___y_563_, lean_object* v___y_564_, lean_object* v___y_565_, lean_object* v___y_566_, lean_object* v___y_567_, lean_object* v___y_568_, lean_object* v___y_569_){
_start:
{
uint8_t v___y_673__boxed_570_; lean_object* v_res_571_; 
v___y_673__boxed_570_ = lean_unbox(v___y_563_);
v_res_571_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0(v_t_559_, v___y_560_, v___y_561_, v___y_562_, v___y_673__boxed_570_, v___y_564_, v___y_565_, v___y_566_, v___y_567_, v___y_568_);
lean_dec(v___y_568_);
lean_dec_ref(v___y_567_);
lean_dec(v___y_566_);
lean_dec_ref(v___y_565_);
lean_dec(v___y_564_);
lean_dec_ref(v___y_562_);
lean_dec(v___y_561_);
lean_dec(v___y_560_);
return v_res_571_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(lean_object* v_t_572_, lean_object* v_a_573_, lean_object* v_a_574_, lean_object* v_a_575_, uint8_t v_a_576_, lean_object* v_a_577_, lean_object* v_a_578_, lean_object* v_a_579_, lean_object* v_a_580_, lean_object* v_a_581_){
_start:
{
lean_object* v___f_583_; lean_object* v___x_584_; 
v___f_583_ = lean_alloc_closure((void*)(l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___lam__0___boxed), 11, 1);
lean_closure_set(v___f_583_, 0, v_t_572_);
v___x_584_ = l_Lean_Elab_Tactic_Omega_commitWhen___redArg(v___f_583_, v_a_573_, v_a_574_, v_a_575_, v_a_576_, v_a_577_, v_a_578_, v_a_579_, v_a_580_, v_a_581_);
return v___x_584_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg___boxed(lean_object* v_t_585_, lean_object* v_a_586_, lean_object* v_a_587_, lean_object* v_a_588_, lean_object* v_a_589_, lean_object* v_a_590_, lean_object* v_a_591_, lean_object* v_a_592_, lean_object* v_a_593_, lean_object* v_a_594_, lean_object* v_a_595_){
_start:
{
uint8_t v_a_boxed_596_; lean_object* v_res_597_; 
v_a_boxed_596_ = lean_unbox(v_a_589_);
v_res_597_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_585_, v_a_586_, v_a_587_, v_a_588_, v_a_boxed_596_, v_a_590_, v_a_591_, v_a_592_, v_a_593_, v_a_594_);
lean_dec(v_a_594_);
lean_dec_ref(v_a_593_);
lean_dec(v_a_592_);
lean_dec_ref(v_a_591_);
lean_dec(v_a_590_);
lean_dec_ref(v_a_588_);
lean_dec(v_a_587_);
lean_dec(v_a_586_);
return v_res_597_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState(lean_object* v_00_u03b1_598_, lean_object* v_t_599_, lean_object* v_a_600_, lean_object* v_a_601_, lean_object* v_a_602_, uint8_t v_a_603_, lean_object* v_a_604_, lean_object* v_a_605_, lean_object* v_a_606_, lean_object* v_a_607_, lean_object* v_a_608_){
_start:
{
lean_object* v___x_610_; 
v___x_610_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState___redArg(v_t_599_, v_a_600_, v_a_601_, v_a_602_, v_a_603_, v_a_604_, v_a_605_, v_a_606_, v_a_607_, v_a_608_);
return v___x_610_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_withoutModifyingState___boxed(lean_object* v_00_u03b1_611_, lean_object* v_t_612_, lean_object* v_a_613_, lean_object* v_a_614_, lean_object* v_a_615_, lean_object* v_a_616_, lean_object* v_a_617_, lean_object* v_a_618_, lean_object* v_a_619_, lean_object* v_a_620_, lean_object* v_a_621_, lean_object* v_a_622_){
_start:
{
uint8_t v_a_boxed_623_; lean_object* v_res_624_; 
v_a_boxed_623_ = lean_unbox(v_a_616_);
v_res_624_ = l_Lean_Elab_Tactic_Omega_withoutModifyingState(v_00_u03b1_611_, v_t_612_, v_a_613_, v_a_614_, v_a_615_, v_a_boxed_623_, v_a_617_, v_a_618_, v_a_619_, v_a_620_, v_a_621_);
lean_dec(v_a_621_);
lean_dec_ref(v_a_620_);
lean_dec(v_a_619_);
lean_dec_ref(v_a_618_);
lean_dec(v_a_617_);
lean_dec_ref(v_a_615_);
lean_dec(v_a_614_);
lean_dec(v_a_613_);
return v_res_624_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_natCast_x3f(lean_object* v_n_627_){
_start:
{
lean_object* v___x_628_; lean_object* v_fst_629_; 
lean_inc_ref(v_n_627_);
v___x_628_ = l_Lean_Expr_getAppFnArgs(v_n_627_);
v_fst_629_ = lean_ctor_get(v___x_628_, 0);
lean_inc(v_fst_629_);
if (lean_obj_tag(v_fst_629_) == 1)
{
lean_object* v_pre_630_; 
v_pre_630_ = lean_ctor_get(v_fst_629_, 0);
lean_inc(v_pre_630_);
if (lean_obj_tag(v_pre_630_) == 1)
{
lean_object* v_pre_631_; 
v_pre_631_ = lean_ctor_get(v_pre_630_, 0);
if (lean_obj_tag(v_pre_631_) == 0)
{
lean_object* v_snd_632_; lean_object* v_str_633_; lean_object* v_str_634_; lean_object* v___x_635_; uint8_t v___x_636_; 
v_snd_632_ = lean_ctor_get(v___x_628_, 1);
lean_inc(v_snd_632_);
lean_dec_ref(v___x_628_);
v_str_633_ = lean_ctor_get(v_fst_629_, 1);
lean_inc_ref(v_str_633_);
lean_dec_ref_known(v_fst_629_, 2);
v_str_634_ = lean_ctor_get(v_pre_630_, 1);
lean_inc_ref(v_str_634_);
lean_dec_ref_known(v_pre_630_, 2);
v___x_635_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_636_ = lean_string_dec_eq(v_str_634_, v___x_635_);
lean_dec_ref(v_str_634_);
if (v___x_636_ == 0)
{
lean_object* v___x_637_; 
lean_dec_ref(v_str_633_);
lean_dec(v_snd_632_);
v___x_637_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_637_;
}
else
{
lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_638_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_639_ = lean_string_dec_eq(v_str_633_, v___x_638_);
lean_dec_ref(v_str_633_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; 
lean_dec(v_snd_632_);
v___x_640_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_640_;
}
else
{
lean_object* v___x_641_; lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_641_ = lean_array_get_size(v_snd_632_);
v___x_642_ = lean_unsigned_to_nat(3u);
v___x_643_ = lean_nat_dec_eq(v___x_641_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; 
lean_dec(v_snd_632_);
v___x_644_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_644_;
}
else
{
lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; 
lean_dec_ref(v_n_627_);
v___x_645_ = lean_unsigned_to_nat(2u);
v___x_646_ = lean_array_fget(v_snd_632_, v___x_645_);
lean_dec(v_snd_632_);
v___x_647_ = l_Lean_Expr_nat_x3f(v___x_646_);
lean_dec(v___x_646_);
return v___x_647_;
}
}
}
}
else
{
lean_object* v___x_648_; 
lean_dec_ref_known(v_pre_630_, 2);
lean_dec_ref_known(v_fst_629_, 2);
lean_dec_ref(v___x_628_);
v___x_648_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_648_;
}
}
else
{
lean_object* v___x_649_; 
lean_dec_ref_known(v_fst_629_, 2);
lean_dec(v_pre_630_);
lean_dec_ref(v___x_628_);
v___x_649_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_649_;
}
}
else
{
lean_object* v___x_650_; 
lean_dec(v_fst_629_);
lean_dec_ref(v___x_628_);
v___x_650_ = l_Lean_Expr_nat_x3f(v_n_627_);
lean_dec_ref(v_n_627_);
return v___x_650_;
}
}
}
LEAN_EXPORT lean_object* l_Nat_cast___at___00Lean_Elab_Tactic_Omega_intCast_x3f_spec__0(lean_object* v_a_651_){
_start:
{
lean_object* v___x_652_; 
v___x_652_ = lean_nat_to_int(v_a_651_);
return v___x_652_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_intCast_x3f(lean_object* v_n_653_){
_start:
{
lean_object* v___x_654_; lean_object* v_fst_655_; 
lean_inc_ref(v_n_653_);
v___x_654_ = l_Lean_Expr_getAppFnArgs(v_n_653_);
v_fst_655_ = lean_ctor_get(v___x_654_, 0);
lean_inc(v_fst_655_);
if (lean_obj_tag(v_fst_655_) == 1)
{
lean_object* v_pre_656_; 
v_pre_656_ = lean_ctor_get(v_fst_655_, 0);
lean_inc(v_pre_656_);
if (lean_obj_tag(v_pre_656_) == 1)
{
lean_object* v_pre_657_; 
v_pre_657_ = lean_ctor_get(v_pre_656_, 0);
if (lean_obj_tag(v_pre_657_) == 0)
{
lean_object* v_snd_658_; lean_object* v_str_659_; lean_object* v_str_660_; lean_object* v___x_661_; uint8_t v___x_662_; 
v_snd_658_ = lean_ctor_get(v___x_654_, 1);
lean_inc(v_snd_658_);
lean_dec_ref(v___x_654_);
v_str_659_ = lean_ctor_get(v_fst_655_, 1);
lean_inc_ref(v_str_659_);
lean_dec_ref_known(v_fst_655_, 2);
v_str_660_ = lean_ctor_get(v_pre_656_, 1);
lean_inc_ref(v_str_660_);
lean_dec_ref_known(v_pre_656_, 2);
v___x_661_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_662_ = lean_string_dec_eq(v_str_660_, v___x_661_);
lean_dec_ref(v_str_660_);
if (v___x_662_ == 0)
{
lean_object* v___x_663_; 
lean_dec_ref(v_str_659_);
lean_dec(v_snd_658_);
v___x_663_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_663_;
}
else
{
lean_object* v___x_664_; uint8_t v___x_665_; 
v___x_664_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_665_ = lean_string_dec_eq(v_str_659_, v___x_664_);
lean_dec_ref(v_str_659_);
if (v___x_665_ == 0)
{
lean_object* v___x_666_; 
lean_dec(v_snd_658_);
v___x_666_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_666_;
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; uint8_t v___x_669_; 
v___x_667_ = lean_array_get_size(v_snd_658_);
v___x_668_ = lean_unsigned_to_nat(3u);
v___x_669_ = lean_nat_dec_eq(v___x_667_, v___x_668_);
if (v___x_669_ == 0)
{
lean_object* v___x_670_; 
lean_dec(v_snd_658_);
v___x_670_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_670_;
}
else
{
lean_object* v___x_671_; lean_object* v___x_672_; lean_object* v___x_673_; 
lean_dec_ref(v_n_653_);
v___x_671_ = lean_unsigned_to_nat(2u);
v___x_672_ = lean_array_fget(v_snd_658_, v___x_671_);
lean_dec(v_snd_658_);
v___x_673_ = l_Lean_Expr_nat_x3f(v___x_672_);
lean_dec(v___x_672_);
if (lean_obj_tag(v___x_673_) == 0)
{
lean_object* v___x_674_; 
v___x_674_ = lean_box(0);
return v___x_674_;
}
else
{
lean_object* v_val_675_; lean_object* v___x_677_; uint8_t v_isShared_678_; uint8_t v_isSharedCheck_683_; 
v_val_675_ = lean_ctor_get(v___x_673_, 0);
v_isSharedCheck_683_ = !lean_is_exclusive(v___x_673_);
if (v_isSharedCheck_683_ == 0)
{
v___x_677_ = v___x_673_;
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
else
{
lean_inc(v_val_675_);
lean_dec(v___x_673_);
v___x_677_ = lean_box(0);
v_isShared_678_ = v_isSharedCheck_683_;
goto v_resetjp_676_;
}
v_resetjp_676_:
{
lean_object* v___x_679_; lean_object* v___x_681_; 
v___x_679_ = lean_nat_to_int(v_val_675_);
if (v_isShared_678_ == 0)
{
lean_ctor_set(v___x_677_, 0, v___x_679_);
v___x_681_ = v___x_677_;
goto v_reusejp_680_;
}
else
{
lean_object* v_reuseFailAlloc_682_; 
v_reuseFailAlloc_682_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_682_, 0, v___x_679_);
v___x_681_ = v_reuseFailAlloc_682_;
goto v_reusejp_680_;
}
v_reusejp_680_:
{
return v___x_681_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_684_; 
lean_dec_ref_known(v_pre_656_, 2);
lean_dec_ref_known(v_fst_655_, 2);
lean_dec_ref(v___x_654_);
v___x_684_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_684_;
}
}
else
{
lean_object* v___x_685_; 
lean_dec_ref_known(v_fst_655_, 2);
lean_dec(v_pre_656_);
lean_dec_ref(v___x_654_);
v___x_685_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_685_;
}
}
else
{
lean_object* v___x_686_; 
lean_dec(v_fst_655_);
lean_dec_ref(v___x_654_);
v___x_686_ = l_Lean_Expr_int_x3f(v_n_653_);
lean_dec_ref(v_n_653_);
return v___x_686_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundNat_x3f(lean_object* v_e_702_){
_start:
{
lean_object* v___x_703_; lean_object* v_fst_704_; 
lean_inc_ref(v_e_702_);
v___x_703_ = l_Lean_Expr_getAppFnArgs(v_e_702_);
v_fst_704_ = lean_ctor_get(v___x_703_, 0);
lean_inc(v_fst_704_);
if (lean_obj_tag(v_fst_704_) == 1)
{
lean_object* v_pre_705_; 
v_pre_705_ = lean_ctor_get(v_fst_704_, 0);
lean_inc(v_pre_705_);
if (lean_obj_tag(v_pre_705_) == 1)
{
lean_object* v_pre_706_; 
v_pre_706_ = lean_ctor_get(v_pre_705_, 0);
if (lean_obj_tag(v_pre_706_) == 0)
{
lean_object* v_snd_707_; lean_object* v_str_708_; lean_object* v_str_709_; lean_object* v___x_710_; uint8_t v___x_711_; 
v_snd_707_ = lean_ctor_get(v___x_703_, 1);
lean_inc(v_snd_707_);
lean_dec_ref(v___x_703_);
v_str_708_ = lean_ctor_get(v_fst_704_, 1);
lean_inc_ref(v_str_708_);
lean_dec_ref_known(v_fst_704_, 2);
v_str_709_ = lean_ctor_get(v_pre_705_, 1);
lean_inc_ref(v_str_709_);
lean_dec_ref_known(v_pre_705_, 2);
v___x_710_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_711_ = lean_string_dec_eq(v_str_709_, v___x_710_);
if (v___x_711_ == 0)
{
lean_object* v___x_712_; uint8_t v___x_713_; 
v___x_712_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_713_ = lean_string_dec_eq(v_str_709_, v___x_712_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_715_ = lean_string_dec_eq(v_str_709_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; uint8_t v___x_717_; 
v___x_716_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_717_ = lean_string_dec_eq(v_str_709_, v___x_716_);
if (v___x_717_ == 0)
{
lean_object* v___x_718_; uint8_t v___x_719_; 
v___x_718_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_719_ = lean_string_dec_eq(v_str_709_, v___x_718_);
if (v___x_719_ == 0)
{
lean_object* v___x_720_; uint8_t v___x_721_; 
v___x_720_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_721_ = lean_string_dec_eq(v_str_709_, v___x_720_);
lean_dec_ref(v_str_709_);
if (v___x_721_ == 0)
{
lean_object* v___x_722_; 
lean_dec_ref(v_str_708_);
lean_dec(v_snd_707_);
v___x_722_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_722_;
}
else
{
lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_723_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_724_ = lean_string_dec_eq(v_str_708_, v___x_723_);
lean_dec_ref(v_str_708_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; 
lean_dec(v_snd_707_);
v___x_725_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_725_;
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; uint8_t v___x_728_; 
v___x_726_ = lean_array_get_size(v_snd_707_);
v___x_727_ = lean_unsigned_to_nat(6u);
v___x_728_ = lean_nat_dec_eq(v___x_726_, v___x_727_);
if (v___x_728_ == 0)
{
lean_object* v___x_729_; 
lean_dec(v_snd_707_);
v___x_729_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_729_;
}
else
{
lean_object* v___f_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; 
lean_dec_ref(v_e_702_);
v___f_730_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__6));
v___x_731_ = lean_unsigned_to_nat(4u);
v___x_732_ = lean_array_fget(v_snd_707_, v___x_731_);
v___x_733_ = lean_unsigned_to_nat(5u);
v___x_734_ = lean_array_fget(v_snd_707_, v___x_733_);
lean_dec(v_snd_707_);
v___x_735_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_730_, v___x_732_, v___x_734_);
return v___x_735_;
}
}
}
}
else
{
lean_object* v___x_736_; uint8_t v___x_737_; 
lean_dec_ref(v_str_709_);
v___x_736_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_737_ = lean_string_dec_eq(v_str_708_, v___x_736_);
lean_dec_ref(v_str_708_);
if (v___x_737_ == 0)
{
lean_object* v___x_738_; 
lean_dec(v_snd_707_);
v___x_738_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_738_;
}
else
{
lean_object* v___x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v___x_739_ = lean_array_get_size(v_snd_707_);
v___x_740_ = lean_unsigned_to_nat(6u);
v___x_741_ = lean_nat_dec_eq(v___x_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v_snd_707_);
v___x_742_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_742_;
}
else
{
lean_object* v___f_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
lean_dec_ref(v_e_702_);
v___f_743_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__8));
v___x_744_ = lean_unsigned_to_nat(4u);
v___x_745_ = lean_array_fget(v_snd_707_, v___x_744_);
v___x_746_ = lean_unsigned_to_nat(5u);
v___x_747_ = lean_array_fget(v_snd_707_, v___x_746_);
lean_dec(v_snd_707_);
v___x_748_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_743_, v___x_745_, v___x_747_);
return v___x_748_;
}
}
}
}
else
{
lean_object* v___x_749_; uint8_t v___x_750_; 
lean_dec_ref(v_str_709_);
v___x_749_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_750_ = lean_string_dec_eq(v_str_708_, v___x_749_);
lean_dec_ref(v_str_708_);
if (v___x_750_ == 0)
{
lean_object* v___x_751_; 
lean_dec(v_snd_707_);
v___x_751_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_751_;
}
else
{
lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_752_ = lean_array_get_size(v_snd_707_);
v___x_753_ = lean_unsigned_to_nat(6u);
v___x_754_ = lean_nat_dec_eq(v___x_752_, v___x_753_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; 
lean_dec(v_snd_707_);
v___x_755_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_755_;
}
else
{
lean_object* v___f_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; 
lean_dec_ref(v_e_702_);
v___f_756_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__10));
v___x_757_ = lean_unsigned_to_nat(4u);
v___x_758_ = lean_array_fget(v_snd_707_, v___x_757_);
v___x_759_ = lean_unsigned_to_nat(5u);
v___x_760_ = lean_array_fget(v_snd_707_, v___x_759_);
lean_dec(v_snd_707_);
v___x_761_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_756_, v___x_758_, v___x_760_);
return v___x_761_;
}
}
}
}
else
{
lean_object* v___x_762_; uint8_t v___x_763_; 
lean_dec_ref(v_str_709_);
v___x_762_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_763_ = lean_string_dec_eq(v_str_708_, v___x_762_);
lean_dec_ref(v_str_708_);
if (v___x_763_ == 0)
{
lean_object* v___x_764_; 
lean_dec(v_snd_707_);
v___x_764_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_764_;
}
else
{
lean_object* v___x_765_; lean_object* v___x_766_; uint8_t v___x_767_; 
v___x_765_ = lean_array_get_size(v_snd_707_);
v___x_766_ = lean_unsigned_to_nat(6u);
v___x_767_ = lean_nat_dec_eq(v___x_765_, v___x_766_);
if (v___x_767_ == 0)
{
lean_object* v___x_768_; 
lean_dec(v_snd_707_);
v___x_768_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_768_;
}
else
{
lean_object* v___f_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; 
lean_dec_ref(v_e_702_);
v___f_769_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__12));
v___x_770_ = lean_unsigned_to_nat(4u);
v___x_771_ = lean_array_fget(v_snd_707_, v___x_770_);
v___x_772_ = lean_unsigned_to_nat(5u);
v___x_773_ = lean_array_fget(v_snd_707_, v___x_772_);
lean_dec(v_snd_707_);
v___x_774_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_769_, v___x_771_, v___x_773_);
return v___x_774_;
}
}
}
}
else
{
lean_object* v___x_775_; uint8_t v___x_776_; 
lean_dec_ref(v_str_709_);
v___x_775_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_776_ = lean_string_dec_eq(v_str_708_, v___x_775_);
lean_dec_ref(v_str_708_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
lean_dec(v_snd_707_);
v___x_777_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_777_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_778_ = lean_array_get_size(v_snd_707_);
v___x_779_ = lean_unsigned_to_nat(6u);
v___x_780_ = lean_nat_dec_eq(v___x_778_, v___x_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; 
lean_dec(v_snd_707_);
v___x_781_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_781_;
}
else
{
lean_object* v___f_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
lean_dec_ref(v_e_702_);
v___f_782_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__14));
v___x_783_ = lean_unsigned_to_nat(4u);
v___x_784_ = lean_array_fget(v_snd_707_, v___x_783_);
v___x_785_ = lean_unsigned_to_nat(5u);
v___x_786_ = lean_array_fget(v_snd_707_, v___x_785_);
lean_dec(v_snd_707_);
v___x_787_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(v___f_782_, v___x_784_, v___x_786_);
return v___x_787_;
}
}
}
}
else
{
lean_object* v___x_788_; uint8_t v___x_789_; 
lean_dec_ref(v_str_709_);
v___x_788_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_789_ = lean_string_dec_eq(v_str_708_, v___x_788_);
lean_dec_ref(v_str_708_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; 
lean_dec(v_snd_707_);
v___x_790_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_790_;
}
else
{
lean_object* v___x_791_; lean_object* v___x_792_; uint8_t v___x_793_; 
v___x_791_ = lean_array_get_size(v_snd_707_);
v___x_792_ = lean_unsigned_to_nat(3u);
v___x_793_ = lean_nat_dec_eq(v___x_791_, v___x_792_);
if (v___x_793_ == 0)
{
lean_object* v___x_794_; 
lean_dec(v_snd_707_);
v___x_794_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_794_;
}
else
{
lean_object* v___x_795_; lean_object* v___x_796_; 
lean_dec_ref(v_e_702_);
v___x_795_ = lean_unsigned_to_nat(2u);
v___x_796_ = lean_array_fget(v_snd_707_, v___x_795_);
lean_dec(v_snd_707_);
v_e_702_ = v___x_796_;
goto _start;
}
}
}
}
else
{
lean_object* v___x_798_; 
lean_dec_ref_known(v_pre_705_, 2);
lean_dec_ref_known(v_fst_704_, 2);
lean_dec_ref(v___x_703_);
v___x_798_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_798_;
}
}
else
{
lean_object* v___x_799_; 
lean_dec_ref_known(v_fst_704_, 2);
lean_dec(v_pre_705_);
lean_dec_ref(v___x_703_);
v___x_799_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_799_;
}
}
else
{
lean_object* v___x_800_; 
lean_dec(v_fst_704_);
lean_dec_ref(v___x_703_);
v___x_800_ = l_Lean_Expr_nat_x3f(v_e_702_);
lean_dec_ref(v_e_702_);
return v___x_800_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundNat_x3f_op(lean_object* v_f_801_, lean_object* v_x_802_, lean_object* v_y_803_){
_start:
{
lean_object* v___x_804_; 
v___x_804_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_x_802_);
if (lean_obj_tag(v___x_804_) == 1)
{
lean_object* v_val_805_; lean_object* v___x_806_; 
v_val_805_ = lean_ctor_get(v___x_804_, 0);
lean_inc(v_val_805_);
lean_dec_ref_known(v___x_804_, 1);
v___x_806_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v_y_803_);
if (lean_obj_tag(v___x_806_) == 1)
{
lean_object* v_val_807_; lean_object* v___x_809_; uint8_t v_isShared_810_; uint8_t v_isSharedCheck_815_; 
v_val_807_ = lean_ctor_get(v___x_806_, 0);
v_isSharedCheck_815_ = !lean_is_exclusive(v___x_806_);
if (v_isSharedCheck_815_ == 0)
{
v___x_809_ = v___x_806_;
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
else
{
lean_inc(v_val_807_);
lean_dec(v___x_806_);
v___x_809_ = lean_box(0);
v_isShared_810_ = v_isSharedCheck_815_;
goto v_resetjp_808_;
}
v_resetjp_808_:
{
lean_object* v___x_811_; lean_object* v___x_813_; 
v___x_811_ = lean_apply_2(v_f_801_, v_val_805_, v_val_807_);
if (v_isShared_810_ == 0)
{
lean_ctor_set(v___x_809_, 0, v___x_811_);
v___x_813_ = v___x_809_;
goto v_reusejp_812_;
}
else
{
lean_object* v_reuseFailAlloc_814_; 
v_reuseFailAlloc_814_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_814_, 0, v___x_811_);
v___x_813_ = v_reuseFailAlloc_814_;
goto v_reusejp_812_;
}
v_reusejp_812_:
{
return v___x_813_;
}
}
}
else
{
lean_object* v___x_816_; 
lean_dec(v___x_806_);
lean_dec(v_val_805_);
lean_dec_ref(v_f_801_);
v___x_816_ = lean_box(0);
return v___x_816_;
}
}
else
{
lean_object* v___x_817_; 
lean_dec(v___x_804_);
lean_dec_ref(v_y_803_);
lean_dec_ref(v_f_801_);
v___x_817_ = lean_box(0);
return v___x_817_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_groundInt_x3f(lean_object* v_e_822_){
_start:
{
lean_object* v___x_823_; lean_object* v_fst_824_; 
lean_inc_ref(v_e_822_);
v___x_823_ = l_Lean_Expr_getAppFnArgs(v_e_822_);
v_fst_824_ = lean_ctor_get(v___x_823_, 0);
lean_inc(v_fst_824_);
if (lean_obj_tag(v_fst_824_) == 1)
{
lean_object* v_pre_825_; 
v_pre_825_ = lean_ctor_get(v_fst_824_, 0);
lean_inc(v_pre_825_);
if (lean_obj_tag(v_pre_825_) == 1)
{
lean_object* v_pre_826_; 
v_pre_826_ = lean_ctor_get(v_pre_825_, 0);
if (lean_obj_tag(v_pre_826_) == 0)
{
lean_object* v_snd_827_; lean_object* v_str_828_; lean_object* v_str_829_; lean_object* v___x_830_; uint8_t v___x_831_; 
v_snd_827_ = lean_ctor_get(v___x_823_, 1);
lean_inc(v_snd_827_);
lean_dec_ref(v___x_823_);
v_str_828_ = lean_ctor_get(v_fst_824_, 1);
lean_inc_ref(v_str_828_);
lean_dec_ref_known(v_fst_824_, 2);
v_str_829_ = lean_ctor_get(v_pre_825_, 1);
lean_inc_ref(v_str_829_);
lean_dec_ref_known(v_pre_825_, 2);
v___x_830_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_831_ = lean_string_dec_eq(v_str_829_, v___x_830_);
if (v___x_831_ == 0)
{
lean_object* v___x_832_; uint8_t v___x_833_; 
v___x_832_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__0));
v___x_833_ = lean_string_dec_eq(v_str_829_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; 
v___x_834_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__1));
v___x_835_ = lean_string_dec_eq(v_str_829_, v___x_834_);
if (v___x_835_ == 0)
{
lean_object* v___x_836_; uint8_t v___x_837_; 
v___x_836_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_837_ = lean_string_dec_eq(v_str_829_, v___x_836_);
if (v___x_837_ == 0)
{
lean_object* v___x_838_; uint8_t v___x_839_; 
v___x_838_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_839_ = lean_string_dec_eq(v_str_829_, v___x_838_);
if (v___x_839_ == 0)
{
lean_object* v___x_840_; uint8_t v___x_841_; 
v___x_840_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_841_ = lean_string_dec_eq(v_str_829_, v___x_840_);
lean_dec_ref(v_str_829_);
if (v___x_841_ == 0)
{
lean_object* v___x_842_; 
lean_dec_ref(v_str_828_);
lean_dec(v_snd_827_);
v___x_842_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_842_;
}
else
{
lean_object* v___x_843_; uint8_t v___x_844_; 
v___x_843_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_844_ = lean_string_dec_eq(v_str_828_, v___x_843_);
lean_dec_ref(v_str_828_);
if (v___x_844_ == 0)
{
lean_object* v___x_845_; 
lean_dec(v_snd_827_);
v___x_845_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_845_;
}
else
{
lean_object* v___x_846_; lean_object* v___x_847_; uint8_t v___x_848_; 
v___x_846_ = lean_array_get_size(v_snd_827_);
v___x_847_ = lean_unsigned_to_nat(6u);
v___x_848_ = lean_nat_dec_eq(v___x_846_, v___x_847_);
if (v___x_848_ == 0)
{
lean_object* v___x_849_; 
lean_dec(v_snd_827_);
v___x_849_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_849_;
}
else
{
lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; 
lean_dec_ref(v_e_822_);
v___x_850_ = lean_unsigned_to_nat(4u);
v___x_851_ = lean_array_fget_borrowed(v_snd_827_, v___x_850_);
lean_inc(v___x_851_);
v___x_852_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v___x_851_);
if (lean_obj_tag(v___x_852_) == 1)
{
lean_object* v_val_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; 
v_val_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_val_853_);
lean_dec_ref_known(v___x_852_, 1);
v___x_854_ = lean_unsigned_to_nat(5u);
v___x_855_ = lean_array_fget(v_snd_827_, v___x_854_);
lean_dec(v_snd_827_);
v___x_856_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_855_);
if (lean_obj_tag(v___x_856_) == 1)
{
lean_object* v_val_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_865_; 
v_val_857_ = lean_ctor_get(v___x_856_, 0);
v_isSharedCheck_865_ = !lean_is_exclusive(v___x_856_);
if (v_isSharedCheck_865_ == 0)
{
v___x_859_ = v___x_856_;
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_val_857_);
lean_dec(v___x_856_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_861_ = l_Int_pow(v_val_853_, v_val_857_);
lean_dec(v_val_857_);
lean_dec(v_val_853_);
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 0, v___x_861_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v___x_861_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
return v___x_863_;
}
}
}
else
{
lean_object* v___x_866_; 
lean_dec(v___x_856_);
lean_dec(v_val_853_);
v___x_866_ = lean_box(0);
return v___x_866_;
}
}
else
{
lean_object* v___x_867_; 
lean_dec(v___x_852_);
lean_dec(v_snd_827_);
v___x_867_ = lean_box(0);
return v___x_867_;
}
}
}
}
}
else
{
lean_object* v___x_868_; uint8_t v___x_869_; 
lean_dec_ref(v_str_829_);
v___x_868_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_869_ = lean_string_dec_eq(v_str_828_, v___x_868_);
lean_dec_ref(v_str_828_);
if (v___x_869_ == 0)
{
lean_object* v___x_870_; 
lean_dec(v_snd_827_);
v___x_870_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_870_;
}
else
{
lean_object* v___x_871_; lean_object* v___x_872_; uint8_t v___x_873_; 
v___x_871_ = lean_array_get_size(v_snd_827_);
v___x_872_ = lean_unsigned_to_nat(6u);
v___x_873_ = lean_nat_dec_eq(v___x_871_, v___x_872_);
if (v___x_873_ == 0)
{
lean_object* v___x_874_; 
lean_dec(v_snd_827_);
v___x_874_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_874_;
}
else
{
lean_object* v___f_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; 
lean_dec_ref(v_e_822_);
v___f_875_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__0));
v___x_876_ = lean_unsigned_to_nat(4u);
v___x_877_ = lean_array_fget(v_snd_827_, v___x_876_);
v___x_878_ = lean_unsigned_to_nat(5u);
v___x_879_ = lean_array_fget(v_snd_827_, v___x_878_);
lean_dec(v_snd_827_);
v___x_880_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_875_, v___x_877_, v___x_879_);
return v___x_880_;
}
}
}
}
else
{
lean_object* v___x_881_; uint8_t v___x_882_; 
lean_dec_ref(v_str_829_);
v___x_881_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_882_ = lean_string_dec_eq(v_str_828_, v___x_881_);
lean_dec_ref(v_str_828_);
if (v___x_882_ == 0)
{
lean_object* v___x_883_; 
lean_dec(v_snd_827_);
v___x_883_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_883_;
}
else
{
lean_object* v___x_884_; lean_object* v___x_885_; uint8_t v___x_886_; 
v___x_884_ = lean_array_get_size(v_snd_827_);
v___x_885_ = lean_unsigned_to_nat(6u);
v___x_886_ = lean_nat_dec_eq(v___x_884_, v___x_885_);
if (v___x_886_ == 0)
{
lean_object* v___x_887_; 
lean_dec(v_snd_827_);
v___x_887_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_887_;
}
else
{
lean_object* v___f_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; 
lean_dec_ref(v_e_822_);
v___f_888_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__1));
v___x_889_ = lean_unsigned_to_nat(4u);
v___x_890_ = lean_array_fget(v_snd_827_, v___x_889_);
v___x_891_ = lean_unsigned_to_nat(5u);
v___x_892_ = lean_array_fget(v_snd_827_, v___x_891_);
lean_dec(v_snd_827_);
v___x_893_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_888_, v___x_890_, v___x_892_);
return v___x_893_;
}
}
}
}
else
{
lean_object* v___x_894_; uint8_t v___x_895_; 
lean_dec_ref(v_str_829_);
v___x_894_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__11));
v___x_895_ = lean_string_dec_eq(v_str_828_, v___x_894_);
lean_dec_ref(v_str_828_);
if (v___x_895_ == 0)
{
lean_object* v___x_896_; 
lean_dec(v_snd_827_);
v___x_896_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_896_;
}
else
{
lean_object* v___x_897_; lean_object* v___x_898_; uint8_t v___x_899_; 
v___x_897_ = lean_array_get_size(v_snd_827_);
v___x_898_ = lean_unsigned_to_nat(6u);
v___x_899_ = lean_nat_dec_eq(v___x_897_, v___x_898_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; 
lean_dec(v_snd_827_);
v___x_900_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_900_;
}
else
{
lean_object* v___f_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; 
lean_dec_ref(v_e_822_);
v___f_901_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__2));
v___x_902_ = lean_unsigned_to_nat(4u);
v___x_903_ = lean_array_fget(v_snd_827_, v___x_902_);
v___x_904_ = lean_unsigned_to_nat(5u);
v___x_905_ = lean_array_fget(v_snd_827_, v___x_904_);
lean_dec(v_snd_827_);
v___x_906_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_901_, v___x_903_, v___x_905_);
return v___x_906_;
}
}
}
}
else
{
lean_object* v___x_907_; uint8_t v___x_908_; 
lean_dec_ref(v_str_829_);
v___x_907_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__13));
v___x_908_ = lean_string_dec_eq(v_str_828_, v___x_907_);
lean_dec_ref(v_str_828_);
if (v___x_908_ == 0)
{
lean_object* v___x_909_; 
lean_dec(v_snd_827_);
v___x_909_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_909_;
}
else
{
lean_object* v___x_910_; lean_object* v___x_911_; uint8_t v___x_912_; 
v___x_910_ = lean_array_get_size(v_snd_827_);
v___x_911_ = lean_unsigned_to_nat(6u);
v___x_912_ = lean_nat_dec_eq(v___x_910_, v___x_911_);
if (v___x_912_ == 0)
{
lean_object* v___x_913_; 
lean_dec(v_snd_827_);
v___x_913_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_913_;
}
else
{
lean_object* v___f_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; 
lean_dec_ref(v_e_822_);
v___f_914_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundInt_x3f___closed__3));
v___x_915_ = lean_unsigned_to_nat(4u);
v___x_916_ = lean_array_fget(v_snd_827_, v___x_915_);
v___x_917_ = lean_unsigned_to_nat(5u);
v___x_918_ = lean_array_fget(v_snd_827_, v___x_917_);
lean_dec(v_snd_827_);
v___x_919_ = l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(v___f_914_, v___x_916_, v___x_918_);
return v___x_919_;
}
}
}
}
else
{
lean_object* v___x_920_; uint8_t v___x_921_; 
lean_dec_ref(v_str_829_);
v___x_920_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_921_ = lean_string_dec_eq(v_str_828_, v___x_920_);
lean_dec_ref(v_str_828_);
if (v___x_921_ == 0)
{
lean_object* v___x_922_; 
lean_dec(v_snd_827_);
v___x_922_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_922_;
}
else
{
lean_object* v___x_923_; lean_object* v___x_924_; uint8_t v___x_925_; 
v___x_923_ = lean_array_get_size(v_snd_827_);
v___x_924_ = lean_unsigned_to_nat(3u);
v___x_925_ = lean_nat_dec_eq(v___x_923_, v___x_924_);
if (v___x_925_ == 0)
{
lean_object* v___x_926_; 
lean_dec(v_snd_827_);
v___x_926_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_926_;
}
else
{
lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; 
lean_dec_ref(v_e_822_);
v___x_927_ = lean_unsigned_to_nat(2u);
v___x_928_ = lean_array_fget(v_snd_827_, v___x_927_);
lean_dec(v_snd_827_);
v___x_929_ = l_Lean_Elab_Tactic_Omega_groundNat_x3f(v___x_928_);
if (lean_obj_tag(v___x_929_) == 0)
{
lean_object* v___x_930_; 
v___x_930_ = lean_box(0);
return v___x_930_;
}
else
{
lean_object* v_val_931_; lean_object* v___x_933_; uint8_t v_isShared_934_; uint8_t v_isSharedCheck_939_; 
v_val_931_ = lean_ctor_get(v___x_929_, 0);
v_isSharedCheck_939_ = !lean_is_exclusive(v___x_929_);
if (v_isSharedCheck_939_ == 0)
{
v___x_933_ = v___x_929_;
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
else
{
lean_inc(v_val_931_);
lean_dec(v___x_929_);
v___x_933_ = lean_box(0);
v_isShared_934_ = v_isSharedCheck_939_;
goto v_resetjp_932_;
}
v_resetjp_932_:
{
lean_object* v___x_935_; lean_object* v___x_937_; 
v___x_935_ = lean_nat_to_int(v_val_931_);
if (v_isShared_934_ == 0)
{
lean_ctor_set(v___x_933_, 0, v___x_935_);
v___x_937_ = v___x_933_;
goto v_reusejp_936_;
}
else
{
lean_object* v_reuseFailAlloc_938_; 
v_reuseFailAlloc_938_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_938_, 0, v___x_935_);
v___x_937_ = v_reuseFailAlloc_938_;
goto v_reusejp_936_;
}
v_reusejp_936_:
{
return v___x_937_;
}
}
}
}
}
}
}
else
{
lean_object* v___x_940_; 
lean_dec_ref_known(v_pre_825_, 2);
lean_dec_ref_known(v_fst_824_, 2);
lean_dec_ref(v___x_823_);
v___x_940_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_940_;
}
}
else
{
lean_object* v___x_941_; 
lean_dec(v_pre_825_);
lean_dec_ref_known(v_fst_824_, 2);
lean_dec_ref(v___x_823_);
v___x_941_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_941_;
}
}
else
{
lean_object* v___x_942_; 
lean_dec(v_fst_824_);
lean_dec_ref(v___x_823_);
v___x_942_ = l_Lean_Expr_int_x3f(v_e_822_);
lean_dec_ref(v_e_822_);
return v___x_942_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_Tactic_Omega_OmegaM_0__Lean_Elab_Tactic_Omega_groundInt_x3f_op(lean_object* v_f_943_, lean_object* v_x_944_, lean_object* v_y_945_){
_start:
{
lean_object* v___x_946_; 
v___x_946_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_x_944_);
if (lean_obj_tag(v___x_946_) == 1)
{
lean_object* v_val_947_; lean_object* v___x_948_; 
v_val_947_ = lean_ctor_get(v___x_946_, 0);
lean_inc(v_val_947_);
lean_dec_ref_known(v___x_946_, 1);
v___x_948_ = l_Lean_Elab_Tactic_Omega_groundInt_x3f(v_y_945_);
if (lean_obj_tag(v___x_948_) == 1)
{
lean_object* v_val_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_957_; 
v_val_949_ = lean_ctor_get(v___x_948_, 0);
v_isSharedCheck_957_ = !lean_is_exclusive(v___x_948_);
if (v_isSharedCheck_957_ == 0)
{
v___x_951_ = v___x_948_;
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_val_949_);
lean_dec(v___x_948_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_957_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_953_; lean_object* v___x_955_; 
v___x_953_ = lean_apply_2(v_f_943_, v_val_947_, v_val_949_);
if (v_isShared_952_ == 0)
{
lean_ctor_set(v___x_951_, 0, v___x_953_);
v___x_955_ = v___x_951_;
goto v_reusejp_954_;
}
else
{
lean_object* v_reuseFailAlloc_956_; 
v_reuseFailAlloc_956_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_956_, 0, v___x_953_);
v___x_955_ = v_reuseFailAlloc_956_;
goto v_reusejp_954_;
}
v_reusejp_954_:
{
return v___x_955_;
}
}
}
else
{
lean_object* v___x_958_; 
lean_dec(v___x_948_);
lean_dec(v_val_947_);
lean_dec_ref(v_f_943_);
v___x_958_ = lean_box(0);
return v___x_958_;
}
}
else
{
lean_object* v___x_959_; 
lean_dec(v___x_946_);
lean_dec_ref(v_y_945_);
lean_dec_ref(v_f_943_);
v___x_959_ = lean_box(0);
return v___x_959_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(lean_object* v_a_960_, lean_object* v_b_961_, lean_object* v_a_962_, lean_object* v_a_963_, lean_object* v_a_964_, lean_object* v_a_965_){
_start:
{
lean_object* v___x_967_; 
lean_inc_ref(v_a_960_);
v___x_967_ = l_Lean_Meta_mkEqRefl(v_a_960_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_967_) == 0)
{
lean_object* v_a_968_; lean_object* v___x_969_; 
v_a_968_ = lean_ctor_get(v___x_967_, 0);
lean_inc(v_a_968_);
lean_dec_ref_known(v___x_967_, 1);
v___x_969_ = l_Lean_Meta_mkEq(v_a_960_, v_b_961_, v_a_962_, v_a_963_, v_a_964_, v_a_965_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___x_972_; uint8_t v_isShared_973_; uint8_t v_isSharedCheck_978_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_978_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_978_ == 0)
{
v___x_972_ = v___x_969_;
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
else
{
lean_inc(v_a_970_);
lean_dec(v___x_969_);
v___x_972_ = lean_box(0);
v_isShared_973_ = v_isSharedCheck_978_;
goto v_resetjp_971_;
}
v_resetjp_971_:
{
lean_object* v___x_974_; lean_object* v___x_976_; 
v___x_974_ = l_Lean_Meta_mkExpectedPropHint(v_a_968_, v_a_970_);
if (v_isShared_973_ == 0)
{
lean_ctor_set(v___x_972_, 0, v___x_974_);
v___x_976_ = v___x_972_;
goto v_reusejp_975_;
}
else
{
lean_object* v_reuseFailAlloc_977_; 
v_reuseFailAlloc_977_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_977_, 0, v___x_974_);
v___x_976_ = v_reuseFailAlloc_977_;
goto v_reusejp_975_;
}
v_reusejp_975_:
{
return v___x_976_;
}
}
}
else
{
lean_dec(v_a_968_);
return v___x_969_;
}
}
else
{
lean_dec_ref(v_b_961_);
lean_dec_ref(v_a_960_);
return v___x_967_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType___boxed(lean_object* v_a_979_, lean_object* v_b_980_, lean_object* v_a_981_, lean_object* v_a_982_, lean_object* v_a_983_, lean_object* v_a_984_, lean_object* v_a_985_){
_start:
{
lean_object* v_res_986_; 
v_res_986_ = l_Lean_Elab_Tactic_Omega_mkEqReflWithExpectedType(v_a_979_, v_b_980_, v_a_981_, v_a_982_, v_a_983_, v_a_984_);
lean_dec(v_a_984_);
lean_dec_ref(v_a_983_);
lean_dec(v_a_982_);
lean_dec_ref(v_a_981_);
return v_res_986_;
}
}
LEAN_EXPORT uint8_t l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(lean_object* v_a_987_, lean_object* v_x_988_){
_start:
{
if (lean_obj_tag(v_x_988_) == 0)
{
uint8_t v___x_989_; 
v___x_989_ = 0;
return v___x_989_;
}
else
{
lean_object* v_head_990_; lean_object* v_tail_991_; uint8_t v___x_992_; 
v_head_990_ = lean_ctor_get(v_x_988_, 0);
v_tail_991_ = lean_ctor_get(v_x_988_, 1);
v___x_992_ = lean_expr_eqv(v_a_987_, v_head_990_);
if (v___x_992_ == 0)
{
v_x_988_ = v_tail_991_;
goto _start;
}
else
{
return v___x_992_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0___boxed(lean_object* v_a_994_, lean_object* v_x_995_){
_start:
{
uint8_t v_res_996_; lean_object* v_r_997_; 
v_res_996_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v_a_994_, v_x_995_);
lean_dec(v_x_995_);
lean_dec_ref(v_a_994_);
v_r_997_ = lean_box(v_res_996_);
return v_r_997_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6(void){
_start:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; 
v___x_1006_ = lean_box(0);
v___x_1007_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__5));
v___x_1008_ = l_Lean_Expr_const___override(v___x_1007_, v___x_1006_);
return v___x_1008_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9(void){
_start:
{
lean_object* v___x_1013_; lean_object* v___x_1014_; lean_object* v___x_1015_; 
v___x_1013_ = lean_box(0);
v___x_1014_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__8));
v___x_1015_ = l_Lean_Expr_const___override(v___x_1014_, v___x_1013_);
return v___x_1015_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13(void){
_start:
{
lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; 
v___x_1021_ = lean_box(0);
v___x_1022_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__12));
v___x_1023_ = l_Lean_Expr_const___override(v___x_1022_, v___x_1021_);
return v___x_1023_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16(void){
_start:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; 
v___x_1028_ = lean_box(0);
v___x_1029_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__15));
v___x_1030_ = l_Lean_Expr_const___override(v___x_1029_, v___x_1028_);
return v___x_1030_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23(void){
_start:
{
lean_object* v___x_1043_; lean_object* v___x_1044_; 
v___x_1043_ = lean_unsigned_to_nat(0u);
v___x_1044_ = l_Lean_Level_ofNat(v___x_1043_);
return v___x_1044_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27(void){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; 
v___x_1050_ = lean_unsigned_to_nat(0u);
v___x_1051_ = l_Lean_mkNatLit(v___x_1050_);
return v___x_1051_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38(void){
_start:
{
lean_object* v___x_1074_; lean_object* v___x_1075_; 
v___x_1074_ = lean_unsigned_to_nat(0u);
v___x_1075_ = lean_nat_to_int(v___x_1074_);
return v___x_1075_;
}
}
static uint8_t _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39(void){
_start:
{
lean_object* v___x_1076_; uint8_t v___x_1077_; 
v___x_1076_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1077_ = lean_int_dec_le(v___x_1076_, v___x_1076_);
return v___x_1077_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45(void){
_start:
{
lean_object* v___x_1087_; lean_object* v___x_1088_; 
v___x_1087_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1088_ = lean_int_neg(v___x_1087_);
return v___x_1088_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46(void){
_start:
{
lean_object* v___x_1089_; lean_object* v___x_1090_; 
v___x_1089_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__45);
v___x_1090_ = l_Int_toNat(v___x_1089_);
return v___x_1090_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47(void){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; 
v___x_1091_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__46);
v___x_1092_ = l_Lean_instToExprInt_mkNat(v___x_1091_);
return v___x_1092_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48(void){
_start:
{
lean_object* v___x_1093_; lean_object* v___x_1094_; 
v___x_1093_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__38);
v___x_1094_ = l_Int_toNat(v___x_1093_);
return v___x_1094_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49(void){
_start:
{
lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1095_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__48);
v___x_1096_ = l_Lean_instToExprInt_mkNat(v___x_1095_);
return v___x_1096_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50(void){
_start:
{
lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; 
v___x_1097_ = lean_box(0);
v___x_1098_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
v___x_1099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1099_, 0, v___x_1098_);
lean_ctor_set(v___x_1099_, 1, v___x_1097_);
return v___x_1099_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51(void){
_start:
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; 
v___x_1100_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1101_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1102_ = l_Lean_Expr_const___override(v___x_1101_, v___x_1100_);
return v___x_1102_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54(void){
_start:
{
lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; 
v___x_1107_ = lean_box(0);
v___x_1108_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__53));
v___x_1109_ = l_Lean_Expr_const___override(v___x_1108_, v___x_1107_);
return v___x_1109_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57(void){
_start:
{
lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1116_ = lean_box(0);
v___x_1117_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__56));
v___x_1118_ = l_Lean_Expr_const___override(v___x_1117_, v___x_1116_);
return v___x_1118_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58(void){
_start:
{
lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; 
v___x_1119_ = lean_box(0);
v___x_1120_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33));
v___x_1121_ = l_Lean_Expr_const___override(v___x_1120_, v___x_1119_);
return v___x_1121_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59(void){
_start:
{
lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; 
v___x_1122_ = lean_box(0);
v___x_1123_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35));
v___x_1124_ = l_Lean_Expr_const___override(v___x_1123_, v___x_1122_);
return v___x_1124_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60(void){
_start:
{
lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; 
v___x_1125_ = lean_box(0);
v___x_1126_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37));
v___x_1127_ = l_Lean_Expr_const___override(v___x_1126_, v___x_1125_);
return v___x_1127_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61(void){
_start:
{
lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; 
v___x_1128_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1129_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42));
v___x_1130_ = l_Lean_Expr_const___override(v___x_1129_, v___x_1128_);
return v___x_1130_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62(void){
_start:
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; 
v___x_1131_ = lean_box(0);
v___x_1132_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44));
v___x_1133_ = l_Lean_Expr_const___override(v___x_1132_, v___x_1131_);
return v___x_1133_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63(void){
_start:
{
lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1134_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47);
v___x_1135_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__62);
v___x_1136_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1137_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__61);
v___x_1138_ = l_Lean_mkApp3(v___x_1137_, v___x_1136_, v___x_1135_, v___x_1134_);
return v___x_1138_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66(void){
_start:
{
lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1142_ = lean_unsigned_to_nat(1u);
v___x_1143_ = l_Lean_Level_ofNat(v___x_1142_);
return v___x_1143_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67(void){
_start:
{
lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v___x_1144_ = lean_box(0);
v___x_1145_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__66);
v___x_1146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1146_, 0, v___x_1145_);
lean_ctor_set(v___x_1146_, 1, v___x_1144_);
return v___x_1146_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68(void){
_start:
{
lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; 
v___x_1147_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__67);
v___x_1148_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__65));
v___x_1149_ = l_Lean_Expr_const___override(v___x_1148_, v___x_1147_);
return v___x_1149_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71(void){
_start:
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; 
v___x_1154_ = lean_box(0);
v___x_1155_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__70));
v___x_1156_ = l_Lean_Expr_const___override(v___x_1155_, v___x_1154_);
return v___x_1156_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74(void){
_start:
{
lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; 
v___x_1161_ = lean_box(0);
v___x_1162_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__73));
v___x_1163_ = l_Lean_Expr_const___override(v___x_1162_, v___x_1161_);
return v___x_1163_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97(void){
_start:
{
lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v___x_1206_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__50);
v___x_1207_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80));
v___x_1208_ = l_Lean_Expr_const___override(v___x_1207_, v___x_1206_);
return v___x_1208_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(lean_object* v_e_1209_, lean_object* v_a_1210_, lean_object* v_a_1211_, lean_object* v_a_1212_, lean_object* v_a_1213_, lean_object* v_a_1214_){
_start:
{
lean_object* v___x_1234_; lean_object* v_fst_1235_; 
v___x_1234_ = l_Lean_Expr_getAppFnArgs(v_e_1209_);
v_fst_1235_ = lean_ctor_get(v___x_1234_, 0);
lean_inc(v_fst_1235_);
if (lean_obj_tag(v_fst_1235_) == 1)
{
lean_object* v_pre_1236_; 
v_pre_1236_ = lean_ctor_get(v_fst_1235_, 0);
switch(lean_obj_tag(v_pre_1236_))
{
case 1:
{
lean_object* v_pre_1237_; 
lean_inc_ref(v_pre_1236_);
v_pre_1237_ = lean_ctor_get(v_pre_1236_, 0);
if (lean_obj_tag(v_pre_1237_) == 0)
{
lean_object* v_snd_1238_; lean_object* v___x_1240_; uint8_t v_isShared_1241_; uint8_t v_isSharedCheck_1815_; 
v_snd_1238_ = lean_ctor_get(v___x_1234_, 1);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1815_ == 0)
{
lean_object* v_unused_1816_; 
v_unused_1816_ = lean_ctor_get(v___x_1234_, 0);
lean_dec(v_unused_1816_);
v___x_1240_ = v___x_1234_;
v_isShared_1241_ = v_isSharedCheck_1815_;
goto v_resetjp_1239_;
}
else
{
lean_inc(v_snd_1238_);
lean_dec(v___x_1234_);
v___x_1240_ = lean_box(0);
v_isShared_1241_ = v_isSharedCheck_1815_;
goto v_resetjp_1239_;
}
v_resetjp_1239_:
{
lean_object* v_str_1242_; lean_object* v_str_1243_; lean_object* v___x_1244_; uint8_t v___x_1245_; 
v_str_1242_ = lean_ctor_get(v_fst_1235_, 1);
lean_inc_ref(v_str_1242_);
lean_dec_ref_known(v_fst_1235_, 2);
v_str_1243_ = lean_ctor_get(v_pre_1236_, 1);
lean_inc_ref(v_str_1243_);
lean_dec_ref_known(v_pre_1236_, 2);
v___x_1244_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__0));
v___x_1245_ = lean_string_dec_eq(v_str_1243_, v___x_1244_);
if (v___x_1245_ == 0)
{
lean_object* v___x_1246_; uint8_t v___x_1247_; 
v___x_1246_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__3));
v___x_1247_ = lean_string_dec_eq(v_str_1243_, v___x_1246_);
if (v___x_1247_ == 0)
{
lean_object* v___x_1248_; uint8_t v___x_1249_; 
v___x_1248_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__0));
v___x_1249_ = lean_string_dec_eq(v_str_1243_, v___x_1248_);
if (v___x_1249_ == 0)
{
lean_object* v___x_1250_; uint8_t v___x_1251_; 
v___x_1250_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__1));
v___x_1251_ = lean_string_dec_eq(v_str_1243_, v___x_1250_);
if (v___x_1251_ == 0)
{
lean_object* v___x_1252_; uint8_t v___x_1253_; 
v___x_1252_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__2));
v___x_1253_ = lean_string_dec_eq(v_str_1243_, v___x_1252_);
lean_dec_ref(v_str_1243_);
if (v___x_1253_ == 0)
{
lean_dec_ref(v_str_1242_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1254_; uint8_t v___x_1255_; 
v___x_1254_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__3));
v___x_1255_ = lean_string_dec_eq(v_str_1242_, v___x_1254_);
lean_dec_ref(v_str_1242_);
if (v___x_1255_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1256_; lean_object* v___x_1257_; uint8_t v___x_1258_; 
v___x_1256_ = lean_array_get_size(v_snd_1238_);
v___x_1257_ = lean_unsigned_to_nat(4u);
v___x_1258_ = lean_nat_dec_eq(v___x_1256_, v___x_1257_);
if (v___x_1258_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1259_; lean_object* v___x_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1259_ = lean_unsigned_to_nat(2u);
v___x_1260_ = lean_array_fget(v_snd_1238_, v___x_1259_);
v___x_1261_ = lean_unsigned_to_nat(3u);
v___x_1262_ = lean_array_fget(v_snd_1238_, v___x_1261_);
lean_dec(v_snd_1238_);
v___x_1263_ = lean_box(0);
v___x_1264_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__6);
lean_inc(v___x_1262_);
lean_inc(v___x_1260_);
v___x_1265_ = l_Lean_mkAppB(v___x_1264_, v___x_1260_, v___x_1262_);
v___x_1266_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__9);
v___x_1267_ = l_Lean_mkAppB(v___x_1266_, v___x_1260_, v___x_1262_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 1, v___x_1263_);
lean_ctor_set(v___x_1240_, 0, v___x_1267_);
v___x_1269_ = v___x_1240_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1267_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v___x_1263_);
v___x_1269_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
lean_object* v___x_1270_; lean_object* v___x_1271_; 
v___x_1270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1270_, 0, v___x_1265_);
lean_ctor_set(v___x_1270_, 1, v___x_1269_);
v___x_1271_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1271_, 0, v___x_1270_);
return v___x_1271_;
}
}
}
}
}
else
{
lean_object* v___x_1273_; uint8_t v___x_1274_; 
lean_dec_ref(v_str_1243_);
v___x_1273_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__10));
v___x_1274_ = lean_string_dec_eq(v_str_1242_, v___x_1273_);
lean_dec_ref(v_str_1242_);
if (v___x_1274_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1275_ = lean_array_get_size(v_snd_1238_);
v___x_1276_ = lean_unsigned_to_nat(4u);
v___x_1277_ = lean_nat_dec_eq(v___x_1275_, v___x_1276_);
if (v___x_1277_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1283_; lean_object* v___x_1284_; lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1288_; 
v___x_1278_ = lean_unsigned_to_nat(2u);
v___x_1279_ = lean_array_fget(v_snd_1238_, v___x_1278_);
v___x_1280_ = lean_unsigned_to_nat(3u);
v___x_1281_ = lean_array_fget(v_snd_1238_, v___x_1280_);
lean_dec(v_snd_1238_);
v___x_1282_ = lean_box(0);
v___x_1283_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__13);
lean_inc(v___x_1281_);
lean_inc(v___x_1279_);
v___x_1284_ = l_Lean_mkAppB(v___x_1283_, v___x_1279_, v___x_1281_);
v___x_1285_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__16);
v___x_1286_ = l_Lean_mkAppB(v___x_1285_, v___x_1279_, v___x_1281_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 1, v___x_1282_);
lean_ctor_set(v___x_1240_, 0, v___x_1286_);
v___x_1288_ = v___x_1240_;
goto v_reusejp_1287_;
}
else
{
lean_object* v_reuseFailAlloc_1291_; 
v_reuseFailAlloc_1291_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1291_, 0, v___x_1286_);
lean_ctor_set(v_reuseFailAlloc_1291_, 1, v___x_1282_);
v___x_1288_ = v_reuseFailAlloc_1291_;
goto v_reusejp_1287_;
}
v_reusejp_1287_:
{
lean_object* v___x_1289_; lean_object* v___x_1290_; 
v___x_1289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1284_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___x_1290_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1290_, 0, v___x_1289_);
return v___x_1290_;
}
}
}
}
}
else
{
lean_object* v___x_1292_; uint8_t v___x_1293_; 
lean_dec_ref(v_str_1243_);
v___x_1292_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__17));
v___x_1293_ = lean_string_dec_eq(v_str_1242_, v___x_1292_);
lean_dec_ref(v_str_1242_);
if (v___x_1293_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1294_; lean_object* v___x_1295_; uint8_t v___x_1296_; 
v___x_1294_ = lean_array_get_size(v_snd_1238_);
v___x_1295_ = lean_unsigned_to_nat(6u);
v___x_1296_ = lean_nat_dec_eq(v___x_1294_, v___x_1295_);
if (v___x_1296_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v_fst_1300_; 
v___x_1297_ = lean_unsigned_to_nat(5u);
v___x_1298_ = lean_array_fget(v_snd_1238_, v___x_1297_);
lean_inc(v___x_1298_);
v___x_1299_ = l_Lean_Expr_getAppFnArgs(v___x_1298_);
v_fst_1300_ = lean_ctor_get(v___x_1299_, 0);
lean_inc(v_fst_1300_);
if (lean_obj_tag(v_fst_1300_) == 1)
{
lean_object* v_pre_1301_; 
v_pre_1301_ = lean_ctor_get(v_fst_1300_, 0);
lean_inc(v_pre_1301_);
if (lean_obj_tag(v_pre_1301_) == 1)
{
lean_object* v_pre_1302_; 
v_pre_1302_ = lean_ctor_get(v_pre_1301_, 0);
if (lean_obj_tag(v_pre_1302_) == 0)
{
lean_object* v_snd_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1502_; 
v_snd_1303_ = lean_ctor_get(v___x_1299_, 1);
v_isSharedCheck_1502_ = !lean_is_exclusive(v___x_1299_);
if (v_isSharedCheck_1502_ == 0)
{
lean_object* v_unused_1503_; 
v_unused_1503_ = lean_ctor_get(v___x_1299_, 0);
lean_dec(v_unused_1503_);
v___x_1305_ = v___x_1299_;
v_isShared_1306_ = v_isSharedCheck_1502_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_snd_1303_);
lean_dec(v___x_1299_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1502_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v_str_1307_; lean_object* v_str_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1348_; uint8_t v___x_1349_; 
v_str_1307_ = lean_ctor_get(v_fst_1300_, 1);
lean_inc_ref(v_str_1307_);
lean_dec_ref_known(v_fst_1300_, 2);
v_str_1308_ = lean_ctor_get(v_pre_1301_, 1);
lean_inc_ref(v_str_1308_);
lean_dec_ref_known(v_pre_1301_, 2);
v___x_1309_ = lean_unsigned_to_nat(4u);
v___x_1310_ = lean_array_fget(v_snd_1238_, v___x_1309_);
lean_dec(v_snd_1238_);
v___x_1348_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__4));
v___x_1349_ = lean_string_dec_eq(v_str_1308_, v___x_1348_);
if (v___x_1349_ == 0)
{
uint8_t v___x_1350_; 
v___x_1350_ = lean_string_dec_eq(v_str_1308_, v___x_1244_);
lean_dec_ref(v_str_1308_);
if (v___x_1350_ == 0)
{
lean_dec(v___x_1310_);
lean_dec_ref(v_str_1307_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
else
{
lean_object* v___x_1351_; uint8_t v___x_1352_; 
v___x_1351_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1352_ = lean_string_dec_eq(v_str_1307_, v___x_1351_);
lean_dec_ref(v_str_1307_);
if (v___x_1352_ == 0)
{
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
else
{
lean_object* v___x_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1353_ = lean_array_get_size(v_snd_1303_);
v___x_1354_ = lean_unsigned_to_nat(3u);
v___x_1355_ = lean_nat_dec_eq(v___x_1353_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
else
{
lean_object* v___x_1356_; lean_object* v___x_1357_; 
v___x_1356_ = lean_unsigned_to_nat(0u);
v___x_1357_ = lean_array_fget_borrowed(v_snd_1303_, v___x_1356_);
if (lean_obj_tag(v___x_1357_) == 4)
{
lean_object* v_declName_1358_; 
v_declName_1358_ = lean_ctor_get(v___x_1357_, 0);
if (lean_obj_tag(v_declName_1358_) == 1)
{
lean_object* v_pre_1359_; 
v_pre_1359_ = lean_ctor_get(v_declName_1358_, 0);
if (lean_obj_tag(v_pre_1359_) == 0)
{
lean_object* v_us_1360_; lean_object* v_str_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v_us_1360_ = lean_ctor_get(v___x_1357_, 1);
lean_inc(v_us_1360_);
v_str_1361_ = lean_ctor_get(v_declName_1358_, 1);
v___x_1362_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1363_ = lean_string_dec_eq(v_str_1361_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_dec(v_us_1360_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
else
{
if (lean_obj_tag(v_us_1360_) == 0)
{
lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v_fst_1367_; 
v___x_1364_ = lean_unsigned_to_nat(2u);
v___x_1365_ = lean_array_fget(v_snd_1303_, v___x_1364_);
lean_dec(v_snd_1303_);
lean_inc(v___x_1365_);
v___x_1366_ = l_Lean_Expr_getAppFnArgs(v___x_1365_);
v_fst_1367_ = lean_ctor_get(v___x_1366_, 0);
lean_inc(v_fst_1367_);
if (lean_obj_tag(v_fst_1367_) == 1)
{
lean_object* v_pre_1368_; 
v_pre_1368_ = lean_ctor_get(v_fst_1367_, 0);
lean_inc(v_pre_1368_);
if (lean_obj_tag(v_pre_1368_) == 1)
{
lean_object* v_pre_1369_; 
v_pre_1369_ = lean_ctor_get(v_pre_1368_, 0);
if (lean_obj_tag(v_pre_1369_) == 0)
{
lean_object* v_snd_1370_; lean_object* v___x_1372_; uint8_t v_isShared_1373_; uint8_t v_isSharedCheck_1449_; 
v_snd_1370_ = lean_ctor_get(v___x_1366_, 1);
v_isSharedCheck_1449_ = !lean_is_exclusive(v___x_1366_);
if (v_isSharedCheck_1449_ == 0)
{
lean_object* v_unused_1450_; 
v_unused_1450_ = lean_ctor_get(v___x_1366_, 0);
lean_dec(v_unused_1450_);
v___x_1372_ = v___x_1366_;
v_isShared_1373_ = v_isSharedCheck_1449_;
goto v_resetjp_1371_;
}
else
{
lean_inc(v_snd_1370_);
lean_dec(v___x_1366_);
v___x_1372_ = lean_box(0);
v_isShared_1373_ = v_isSharedCheck_1449_;
goto v_resetjp_1371_;
}
v_resetjp_1371_:
{
lean_object* v_str_1374_; lean_object* v_str_1375_; uint8_t v___x_1376_; 
v_str_1374_ = lean_ctor_get(v_fst_1367_, 1);
lean_inc_ref(v_str_1374_);
lean_dec_ref_known(v_fst_1367_, 2);
v_str_1375_ = lean_ctor_get(v_pre_1368_, 1);
lean_inc_ref(v_str_1375_);
lean_dec_ref_known(v_pre_1368_, 2);
v___x_1376_ = lean_string_dec_eq(v_str_1375_, v___x_1348_);
lean_dec_ref(v_str_1375_);
if (v___x_1376_ == 0)
{
lean_dec_ref(v_str_1374_);
lean_del_object(v___x_1372_);
lean_dec(v_snd_1370_);
lean_dec(v___x_1365_);
lean_del_object(v___x_1305_);
lean_del_object(v___x_1240_);
goto v___jp_1311_;
}
else
{
lean_object* v___x_1377_; uint8_t v___x_1378_; 
v___x_1377_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1378_ = lean_string_dec_eq(v_str_1374_, v___x_1377_);
lean_dec_ref(v_str_1374_);
if (v___x_1378_ == 0)
{
lean_del_object(v___x_1372_);
lean_dec(v_snd_1370_);
lean_dec(v___x_1365_);
lean_del_object(v___x_1305_);
lean_del_object(v___x_1240_);
goto v___jp_1311_;
}
else
{
lean_object* v___x_1379_; uint8_t v___x_1380_; 
v___x_1379_ = lean_array_get_size(v_snd_1370_);
v___x_1380_ = lean_nat_dec_eq(v___x_1379_, v___x_1295_);
if (v___x_1380_ == 0)
{
lean_del_object(v___x_1372_);
lean_dec(v_snd_1370_);
lean_dec(v___x_1365_);
lean_del_object(v___x_1305_);
lean_del_object(v___x_1240_);
goto v___jp_1311_;
}
else
{
lean_object* v___x_1381_; lean_object* v___x_1382_; 
v___x_1381_ = lean_array_fget(v_snd_1370_, v___x_1309_);
lean_inc(v___x_1381_);
v___x_1382_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1381_);
if (lean_obj_tag(v___x_1382_) == 0)
{
lean_dec(v___x_1381_);
lean_del_object(v___x_1372_);
lean_dec(v_snd_1370_);
lean_dec(v___x_1365_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1231_;
}
else
{
lean_object* v_val_1383_; uint8_t v___x_1384_; 
v_val_1383_ = lean_ctor_get(v___x_1382_, 0);
lean_inc(v_val_1383_);
lean_dec_ref_known(v___x_1382_, 1);
v___x_1384_ = lean_nat_dec_eq(v_val_1383_, v___x_1356_);
lean_dec(v_val_1383_);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1389_; 
v___x_1385_ = lean_array_fget(v_snd_1370_, v___x_1297_);
lean_dec(v_snd_1370_);
v___x_1386_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__22));
v___x_1387_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
if (v_isShared_1373_ == 0)
{
lean_ctor_set_tag(v___x_1372_, 1);
lean_ctor_set(v___x_1372_, 1, v_us_1360_);
lean_ctor_set(v___x_1372_, 0, v___x_1387_);
v___x_1389_ = v___x_1372_;
goto v_reusejp_1388_;
}
else
{
lean_object* v_reuseFailAlloc_1448_; 
v_reuseFailAlloc_1448_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1448_, 0, v___x_1387_);
lean_ctor_set(v_reuseFailAlloc_1448_, 1, v_us_1360_);
v___x_1389_ = v_reuseFailAlloc_1448_;
goto v_reusejp_1388_;
}
v_reusejp_1388_:
{
lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v_b__pos_1396_; lean_object* v___x_1397_; 
lean_inc_ref(v___x_1389_);
v___x_1390_ = l_Lean_Expr_const___override(v___x_1386_, v___x_1389_);
v___x_1391_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__24));
v___x_1392_ = l_Lean_Expr_const___override(v___x_1391_, v_us_1360_);
v___x_1393_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__26));
v___x_1394_ = l_Lean_Expr_const___override(v___x_1393_, v_us_1360_);
v___x_1395_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__27);
lean_inc(v___x_1381_);
v_b__pos_1396_ = l_Lean_mkApp4(v___x_1390_, v___x_1392_, v___x_1394_, v___x_1395_, v___x_1381_);
v___x_1397_ = l_Lean_Meta_mkDecideProof(v_b__pos_1396_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1397_) == 0)
{
lean_object* v_a_1398_; lean_object* v___x_1400_; uint8_t v_isShared_1401_; uint8_t v_isSharedCheck_1439_; 
v_a_1398_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1439_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1439_ == 0)
{
v___x_1400_ = v___x_1397_;
v_isShared_1401_ = v_isSharedCheck_1439_;
goto v_resetjp_1399_;
}
else
{
lean_inc(v_a_1398_);
lean_dec(v___x_1397_);
v___x_1400_ = lean_box(0);
v_isShared_1401_ = v_isSharedCheck_1439_;
goto v_resetjp_1399_;
}
v_resetjp_1399_:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___y_1413_; uint8_t v___x_1429_; 
v___x_1402_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__29));
v___x_1403_ = l_Lean_Expr_const___override(v___x_1402_, v_us_1360_);
v___x_1404_ = l_Lean_mkApp3(v___x_1403_, v___x_1381_, v___x_1385_, v_a_1398_);
v___x_1405_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__31));
v___x_1406_ = l_Lean_Expr_const___override(v___x_1405_, v_us_1360_);
v___x_1407_ = l_Lean_mkAppB(v___x_1406_, v___x_1365_, v___x_1404_);
v___x_1408_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__33));
v___x_1409_ = l_Lean_Expr_const___override(v___x_1408_, v_us_1360_);
v___x_1410_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__35));
v___x_1411_ = l_Lean_Expr_const___override(v___x_1410_, v_us_1360_);
v___x_1429_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1429_ == 0)
{
lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; 
v___x_1430_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__42));
v___x_1431_ = l_Lean_Expr_const___override(v___x_1430_, v___x_1389_);
v___x_1432_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__1));
v___x_1433_ = l_Lean_Expr_const___override(v___x_1432_, v_us_1360_);
v___x_1434_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__44));
v___x_1435_ = l_Lean_Expr_const___override(v___x_1434_, v_us_1360_);
v___x_1436_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__47);
v___x_1437_ = l_Lean_mkApp3(v___x_1431_, v___x_1433_, v___x_1435_, v___x_1436_);
v___y_1413_ = v___x_1437_;
goto v___jp_1412_;
}
else
{
lean_object* v___x_1438_; 
lean_dec_ref(v___x_1389_);
v___x_1438_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1413_ = v___x_1438_;
goto v___jp_1412_;
}
v___jp_1412_:
{
lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
lean_inc_ref(v___x_1407_);
lean_inc_n(v___x_1298_, 2);
v___x_1414_ = l_Lean_mkApp3(v___x_1411_, v___x_1298_, v___y_1413_, v___x_1407_);
lean_inc(v___x_1310_);
v___x_1415_ = l_Lean_mkApp3(v___x_1409_, v___x_1310_, v___x_1298_, v___x_1414_);
v___x_1416_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__37));
v___x_1417_ = l_Lean_Expr_const___override(v___x_1416_, v_us_1360_);
v___x_1418_ = l_Lean_mkApp3(v___x_1417_, v___x_1310_, v___x_1298_, v___x_1407_);
v___x_1419_ = lean_box(0);
if (v_isShared_1306_ == 0)
{
lean_ctor_set_tag(v___x_1305_, 1);
lean_ctor_set(v___x_1305_, 1, v___x_1419_);
lean_ctor_set(v___x_1305_, 0, v___x_1418_);
v___x_1421_ = v___x_1305_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1428_; 
v_reuseFailAlloc_1428_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1428_, 0, v___x_1418_);
lean_ctor_set(v_reuseFailAlloc_1428_, 1, v___x_1419_);
v___x_1421_ = v_reuseFailAlloc_1428_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1423_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 1, v___x_1421_);
lean_ctor_set(v___x_1240_, 0, v___x_1415_);
v___x_1423_ = v___x_1240_;
goto v_reusejp_1422_;
}
else
{
lean_object* v_reuseFailAlloc_1427_; 
v_reuseFailAlloc_1427_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1427_, 0, v___x_1415_);
lean_ctor_set(v_reuseFailAlloc_1427_, 1, v___x_1421_);
v___x_1423_ = v_reuseFailAlloc_1427_;
goto v_reusejp_1422_;
}
v_reusejp_1422_:
{
lean_object* v___x_1425_; 
if (v_isShared_1401_ == 0)
{
lean_ctor_set(v___x_1400_, 0, v___x_1423_);
v___x_1425_ = v___x_1400_;
goto v_reusejp_1424_;
}
else
{
lean_object* v_reuseFailAlloc_1426_; 
v_reuseFailAlloc_1426_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1426_, 0, v___x_1423_);
v___x_1425_ = v_reuseFailAlloc_1426_;
goto v_reusejp_1424_;
}
v_reusejp_1424_:
{
return v___x_1425_;
}
}
}
}
}
}
else
{
lean_object* v_a_1440_; lean_object* v___x_1442_; uint8_t v_isShared_1443_; uint8_t v_isSharedCheck_1447_; 
lean_dec_ref(v___x_1389_);
lean_dec(v___x_1385_);
lean_dec(v___x_1381_);
lean_dec(v___x_1365_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
v_a_1440_ = lean_ctor_get(v___x_1397_, 0);
v_isSharedCheck_1447_ = !lean_is_exclusive(v___x_1397_);
if (v_isSharedCheck_1447_ == 0)
{
v___x_1442_ = v___x_1397_;
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
else
{
lean_inc(v_a_1440_);
lean_dec(v___x_1397_);
v___x_1442_ = lean_box(0);
v_isShared_1443_ = v_isSharedCheck_1447_;
goto v_resetjp_1441_;
}
v_resetjp_1441_:
{
lean_object* v___x_1445_; 
if (v_isShared_1443_ == 0)
{
v___x_1445_ = v___x_1442_;
goto v_reusejp_1444_;
}
else
{
lean_object* v_reuseFailAlloc_1446_; 
v_reuseFailAlloc_1446_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1446_, 0, v_a_1440_);
v___x_1445_ = v_reuseFailAlloc_1446_;
goto v_reusejp_1444_;
}
v_reusejp_1444_:
{
return v___x_1445_;
}
}
}
}
}
else
{
lean_dec(v___x_1381_);
lean_del_object(v___x_1372_);
lean_dec(v_snd_1370_);
lean_dec(v___x_1365_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1231_;
}
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1368_, 2);
lean_dec_ref_known(v_fst_1367_, 2);
lean_dec_ref(v___x_1366_);
lean_dec(v___x_1365_);
lean_del_object(v___x_1305_);
lean_del_object(v___x_1240_);
goto v___jp_1311_;
}
}
else
{
lean_dec(v_pre_1368_);
lean_dec_ref_known(v_fst_1367_, 2);
lean_dec_ref(v___x_1366_);
lean_dec(v___x_1365_);
lean_del_object(v___x_1305_);
lean_del_object(v___x_1240_);
goto v___jp_1311_;
}
}
else
{
lean_dec(v_fst_1367_);
lean_dec_ref(v___x_1366_);
lean_dec(v___x_1365_);
lean_del_object(v___x_1305_);
lean_del_object(v___x_1240_);
goto v___jp_1311_;
}
}
else
{
lean_dec(v_us_1360_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
}
}
else
{
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
}
else
{
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
}
else
{
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
}
}
}
}
else
{
lean_object* v___x_1451_; uint8_t v___x_1452_; 
lean_dec_ref(v_str_1308_);
v___x_1451_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__5));
v___x_1452_ = lean_string_dec_eq(v_str_1307_, v___x_1451_);
lean_dec_ref(v_str_1307_);
if (v___x_1452_ == 0)
{
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
else
{
lean_object* v___x_1453_; uint8_t v___x_1454_; 
v___x_1453_ = lean_array_get_size(v_snd_1303_);
v___x_1454_ = lean_nat_dec_eq(v___x_1453_, v___x_1295_);
if (v___x_1454_ == 0)
{
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1225_;
}
else
{
lean_object* v___x_1455_; lean_object* v___x_1456_; 
v___x_1455_ = lean_array_fget(v_snd_1303_, v___x_1309_);
lean_inc(v___x_1455_);
v___x_1456_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1455_);
if (lean_obj_tag(v___x_1456_) == 0)
{
lean_dec(v___x_1455_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1219_;
}
else
{
lean_object* v_val_1457_; lean_object* v___x_1458_; uint8_t v___x_1459_; 
v_val_1457_ = lean_ctor_get(v___x_1456_, 0);
lean_inc(v_val_1457_);
lean_dec_ref_known(v___x_1456_, 1);
v___x_1458_ = lean_unsigned_to_nat(0u);
v___x_1459_ = lean_nat_dec_eq(v_val_1457_, v___x_1458_);
lean_dec(v_val_1457_);
if (v___x_1459_ == 0)
{
lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___y_1466_; uint8_t v___x_1499_; 
v___x_1460_ = lean_array_fget(v_snd_1303_, v___x_1297_);
lean_dec(v_snd_1303_);
v___x_1461_ = lean_box(0);
v___x_1462_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51);
v___x_1463_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1464_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54);
v___x_1499_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1499_ == 0)
{
lean_object* v___x_1500_; 
v___x_1500_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63);
v___y_1466_ = v___x_1500_;
goto v___jp_1465_;
}
else
{
lean_object* v___x_1501_; 
v___x_1501_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1466_ = v___x_1501_;
goto v___jp_1465_;
}
v___jp_1465_:
{
lean_object* v_b__pos_1467_; lean_object* v___x_1468_; 
lean_inc(v___x_1455_);
lean_inc_ref(v___y_1466_);
v_b__pos_1467_ = l_Lean_mkApp4(v___x_1462_, v___x_1463_, v___x_1464_, v___y_1466_, v___x_1455_);
v___x_1468_ = l_Lean_Meta_mkDecideProof(v_b__pos_1467_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1468_) == 0)
{
lean_object* v_a_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1490_; 
v_a_1469_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1490_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1490_ == 0)
{
v___x_1471_ = v___x_1468_;
v_isShared_1472_ = v_isSharedCheck_1490_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_a_1469_);
lean_dec(v___x_1468_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1490_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1482_; 
v___x_1473_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__57);
v___x_1474_ = l_Lean_mkApp3(v___x_1473_, v___x_1455_, v___x_1460_, v_a_1469_);
v___x_1475_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__58);
v___x_1476_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__59);
lean_inc_ref(v___x_1474_);
lean_inc_ref(v___y_1466_);
lean_inc_n(v___x_1298_, 2);
v___x_1477_ = l_Lean_mkApp3(v___x_1476_, v___x_1298_, v___y_1466_, v___x_1474_);
lean_inc(v___x_1310_);
v___x_1478_ = l_Lean_mkApp3(v___x_1475_, v___x_1310_, v___x_1298_, v___x_1477_);
v___x_1479_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__60);
v___x_1480_ = l_Lean_mkApp3(v___x_1479_, v___x_1310_, v___x_1298_, v___x_1474_);
if (v_isShared_1306_ == 0)
{
lean_ctor_set_tag(v___x_1305_, 1);
lean_ctor_set(v___x_1305_, 1, v___x_1461_);
lean_ctor_set(v___x_1305_, 0, v___x_1480_);
v___x_1482_ = v___x_1305_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1489_; 
v_reuseFailAlloc_1489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1489_, 0, v___x_1480_);
lean_ctor_set(v_reuseFailAlloc_1489_, 1, v___x_1461_);
v___x_1482_ = v_reuseFailAlloc_1489_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
lean_object* v___x_1484_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 1, v___x_1482_);
lean_ctor_set(v___x_1240_, 0, v___x_1478_);
v___x_1484_ = v___x_1240_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1488_; 
v_reuseFailAlloc_1488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1488_, 0, v___x_1478_);
lean_ctor_set(v_reuseFailAlloc_1488_, 1, v___x_1482_);
v___x_1484_ = v_reuseFailAlloc_1488_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1486_; 
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 0, v___x_1484_);
v___x_1486_ = v___x_1471_;
goto v_reusejp_1485_;
}
else
{
lean_object* v_reuseFailAlloc_1487_; 
v_reuseFailAlloc_1487_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1487_, 0, v___x_1484_);
v___x_1486_ = v_reuseFailAlloc_1487_;
goto v_reusejp_1485_;
}
v_reusejp_1485_:
{
return v___x_1486_;
}
}
}
}
}
else
{
lean_object* v_a_1491_; lean_object* v___x_1493_; uint8_t v_isShared_1494_; uint8_t v_isSharedCheck_1498_; 
lean_dec(v___x_1460_);
lean_dec(v___x_1455_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
v_a_1491_ = lean_ctor_get(v___x_1468_, 0);
v_isSharedCheck_1498_ = !lean_is_exclusive(v___x_1468_);
if (v_isSharedCheck_1498_ == 0)
{
v___x_1493_ = v___x_1468_;
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
else
{
lean_inc(v_a_1491_);
lean_dec(v___x_1468_);
v___x_1493_ = lean_box(0);
v_isShared_1494_ = v_isSharedCheck_1498_;
goto v_resetjp_1492_;
}
v_resetjp_1492_:
{
lean_object* v___x_1496_; 
if (v_isShared_1494_ == 0)
{
v___x_1496_ = v___x_1493_;
goto v_reusejp_1495_;
}
else
{
lean_object* v_reuseFailAlloc_1497_; 
v_reuseFailAlloc_1497_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1497_, 0, v_a_1491_);
v___x_1496_ = v_reuseFailAlloc_1497_;
goto v_reusejp_1495_;
}
v_reusejp_1495_:
{
return v___x_1496_;
}
}
}
}
}
else
{
lean_dec(v___x_1455_);
lean_dec(v___x_1310_);
lean_del_object(v___x_1305_);
lean_dec(v_snd_1303_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
goto v___jp_1219_;
}
}
}
}
}
v___jp_1311_:
{
lean_object* v___x_1312_; lean_object* v_fst_1313_; 
v___x_1312_ = l_Lean_Expr_getAppFnArgs(v___x_1310_);
v_fst_1313_ = lean_ctor_get(v___x_1312_, 0);
lean_inc(v_fst_1313_);
if (lean_obj_tag(v_fst_1313_) == 1)
{
lean_object* v_pre_1314_; 
v_pre_1314_ = lean_ctor_get(v_fst_1313_, 0);
lean_inc(v_pre_1314_);
if (lean_obj_tag(v_pre_1314_) == 1)
{
lean_object* v_pre_1315_; 
v_pre_1315_ = lean_ctor_get(v_pre_1314_, 0);
if (lean_obj_tag(v_pre_1315_) == 0)
{
lean_object* v_snd_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1346_; 
v_snd_1316_ = lean_ctor_get(v___x_1312_, 1);
v_isSharedCheck_1346_ = !lean_is_exclusive(v___x_1312_);
if (v_isSharedCheck_1346_ == 0)
{
lean_object* v_unused_1347_; 
v_unused_1347_ = lean_ctor_get(v___x_1312_, 0);
lean_dec(v_unused_1347_);
v___x_1318_ = v___x_1312_;
v_isShared_1319_ = v_isSharedCheck_1346_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_snd_1316_);
lean_dec(v___x_1312_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1346_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v_str_1320_; lean_object* v_str_1321_; uint8_t v___x_1322_; 
v_str_1320_ = lean_ctor_get(v_fst_1313_, 1);
lean_inc_ref(v_str_1320_);
lean_dec_ref_known(v_fst_1313_, 2);
v_str_1321_ = lean_ctor_get(v_pre_1314_, 1);
lean_inc_ref(v_str_1321_);
lean_dec_ref_known(v_pre_1314_, 2);
v___x_1322_ = lean_string_dec_eq(v_str_1321_, v___x_1244_);
lean_dec_ref(v_str_1321_);
if (v___x_1322_ == 0)
{
lean_dec_ref(v_str_1320_);
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
else
{
lean_object* v___x_1323_; uint8_t v___x_1324_; 
v___x_1323_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1324_ = lean_string_dec_eq(v_str_1320_, v___x_1323_);
lean_dec_ref(v_str_1320_);
if (v___x_1324_ == 0)
{
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
else
{
lean_object* v___x_1325_; lean_object* v___x_1326_; uint8_t v___x_1327_; 
v___x_1325_ = lean_array_get_size(v_snd_1316_);
v___x_1326_ = lean_unsigned_to_nat(3u);
v___x_1327_ = lean_nat_dec_eq(v___x_1325_, v___x_1326_);
if (v___x_1327_ == 0)
{
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
else
{
lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1328_ = lean_unsigned_to_nat(0u);
v___x_1329_ = lean_array_fget_borrowed(v_snd_1316_, v___x_1328_);
if (lean_obj_tag(v___x_1329_) == 4)
{
lean_object* v_declName_1330_; 
v_declName_1330_ = lean_ctor_get(v___x_1329_, 0);
if (lean_obj_tag(v_declName_1330_) == 1)
{
lean_object* v_pre_1331_; 
v_pre_1331_ = lean_ctor_get(v_declName_1330_, 0);
if (lean_obj_tag(v_pre_1331_) == 0)
{
lean_object* v_us_1332_; lean_object* v_str_1333_; lean_object* v___x_1334_; uint8_t v___x_1335_; 
v_us_1332_ = lean_ctor_get(v___x_1329_, 1);
lean_inc(v_us_1332_);
v_str_1333_ = lean_ctor_get(v_declName_1330_, 1);
v___x_1334_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1335_ = lean_string_dec_eq(v_str_1333_, v___x_1334_);
if (v___x_1335_ == 0)
{
lean_dec(v_us_1332_);
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
else
{
if (lean_obj_tag(v_us_1332_) == 0)
{
lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1343_; 
v___x_1336_ = lean_unsigned_to_nat(2u);
v___x_1337_ = lean_array_fget(v_snd_1316_, v___x_1336_);
lean_dec(v_snd_1316_);
v___x_1338_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__19));
v___x_1339_ = l_Lean_Expr_const___override(v___x_1338_, v_us_1332_);
v___x_1340_ = l_Lean_mkAppB(v___x_1339_, v___x_1337_, v___x_1298_);
v___x_1341_ = lean_box(0);
if (v_isShared_1319_ == 0)
{
lean_ctor_set_tag(v___x_1318_, 1);
lean_ctor_set(v___x_1318_, 1, v___x_1341_);
lean_ctor_set(v___x_1318_, 0, v___x_1340_);
v___x_1343_ = v___x_1318_;
goto v_reusejp_1342_;
}
else
{
lean_object* v_reuseFailAlloc_1345_; 
v_reuseFailAlloc_1345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1345_, 0, v___x_1340_);
lean_ctor_set(v_reuseFailAlloc_1345_, 1, v___x_1341_);
v___x_1343_ = v_reuseFailAlloc_1345_;
goto v_reusejp_1342_;
}
v_reusejp_1342_:
{
lean_object* v___x_1344_; 
v___x_1344_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1344_, 0, v___x_1343_);
return v___x_1344_;
}
}
else
{
lean_dec(v_us_1332_);
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
}
}
else
{
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
}
else
{
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
}
else
{
lean_del_object(v___x_1318_);
lean_dec(v_snd_1316_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1314_, 2);
lean_dec_ref_known(v_fst_1313_, 2);
lean_dec_ref(v___x_1312_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
}
else
{
lean_dec(v_pre_1314_);
lean_dec_ref_known(v_fst_1313_, 2);
lean_dec_ref(v___x_1312_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
}
else
{
lean_dec(v_fst_1313_);
lean_dec_ref(v___x_1312_);
lean_dec(v___x_1298_);
goto v___jp_1228_;
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1301_, 2);
lean_dec_ref_known(v_fst_1300_, 2);
lean_dec_ref(v___x_1299_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1225_;
}
}
else
{
lean_dec_ref_known(v_fst_1300_, 2);
lean_dec(v_pre_1301_);
lean_dec_ref(v___x_1299_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1225_;
}
}
else
{
lean_dec(v_fst_1300_);
lean_dec_ref(v___x_1299_);
lean_dec(v___x_1298_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1225_;
}
}
}
}
}
else
{
lean_object* v___x_1504_; uint8_t v___x_1505_; 
lean_dec_ref(v_str_1243_);
v___x_1504_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__7));
v___x_1505_ = lean_string_dec_eq(v_str_1242_, v___x_1504_);
lean_dec_ref(v_str_1242_);
if (v___x_1505_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1506_; lean_object* v___x_1507_; uint8_t v___x_1508_; 
v___x_1506_ = lean_array_get_size(v_snd_1238_);
v___x_1507_ = lean_unsigned_to_nat(6u);
v___x_1508_ = lean_nat_dec_eq(v___x_1506_, v___x_1507_);
if (v___x_1508_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; 
v___x_1509_ = lean_unsigned_to_nat(5u);
v___x_1510_ = lean_array_fget(v_snd_1238_, v___x_1509_);
lean_inc(v___x_1510_);
v___x_1511_ = l_Lean_Elab_Tactic_Omega_natCast_x3f(v___x_1510_);
if (lean_obj_tag(v___x_1511_) == 0)
{
lean_dec(v___x_1510_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1216_;
}
else
{
lean_object* v_val_1512_; lean_object* v___x_1513_; uint8_t v___x_1514_; 
v_val_1512_ = lean_ctor_get(v___x_1511_, 0);
lean_inc(v_val_1512_);
lean_dec_ref_known(v___x_1511_, 1);
v___x_1513_ = lean_unsigned_to_nat(0u);
v___x_1514_ = lean_nat_dec_eq(v_val_1512_, v___x_1513_);
lean_dec(v_val_1512_);
if (v___x_1514_ == 0)
{
lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___y_1521_; uint8_t v___x_1561_; 
v___x_1515_ = lean_unsigned_to_nat(4u);
v___x_1516_ = lean_array_fget(v_snd_1238_, v___x_1515_);
lean_dec(v_snd_1238_);
v___x_1517_ = lean_box(0);
v___x_1518_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__68);
v___x_1519_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1561_ = lean_uint8_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__39);
if (v___x_1561_ == 0)
{
lean_object* v___x_1562_; 
v___x_1562_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__63);
v___y_1521_ = v___x_1562_;
goto v___jp_1520_;
}
else
{
lean_object* v___x_1563_; 
v___x_1563_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__49);
v___y_1521_ = v___x_1563_;
goto v___jp_1520_;
}
v___jp_1520_:
{
lean_object* v_ne__zero_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v_pos_1525_; lean_object* v___x_1526_; 
lean_inc_ref_n(v___y_1521_, 2);
lean_inc_n(v___x_1510_, 2);
v_ne__zero_1522_ = l_Lean_mkApp3(v___x_1518_, v___x_1519_, v___x_1510_, v___y_1521_);
v___x_1523_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__51);
v___x_1524_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__54);
v_pos_1525_ = l_Lean_mkApp4(v___x_1523_, v___x_1519_, v___x_1524_, v___y_1521_, v___x_1510_);
v___x_1526_ = l_Lean_Meta_mkDecideProof(v_ne__zero_1522_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1526_) == 0)
{
lean_object* v_a_1527_; lean_object* v___x_1528_; 
v_a_1527_ = lean_ctor_get(v___x_1526_, 0);
lean_inc(v_a_1527_);
lean_dec_ref_known(v___x_1526_, 1);
v___x_1528_ = l_Lean_Meta_mkDecideProof(v_pos_1525_, v_a_1211_, v_a_1212_, v_a_1213_, v_a_1214_);
if (lean_obj_tag(v___x_1528_) == 0)
{
lean_object* v_a_1529_; lean_object* v___x_1531_; uint8_t v_isShared_1532_; uint8_t v_isSharedCheck_1544_; 
v_a_1529_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1544_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1544_ == 0)
{
v___x_1531_ = v___x_1528_;
v_isShared_1532_ = v_isSharedCheck_1544_;
goto v_resetjp_1530_;
}
else
{
lean_inc(v_a_1529_);
lean_dec(v___x_1528_);
v___x_1531_ = lean_box(0);
v_isShared_1532_ = v_isSharedCheck_1544_;
goto v_resetjp_1530_;
}
v_resetjp_1530_:
{
lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1538_; 
v___x_1533_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__71);
lean_inc(v___x_1510_);
lean_inc(v___x_1516_);
v___x_1534_ = l_Lean_mkApp3(v___x_1533_, v___x_1516_, v___x_1510_, v_a_1527_);
v___x_1535_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__74);
v___x_1536_ = l_Lean_mkApp3(v___x_1535_, v___x_1516_, v___x_1510_, v_a_1529_);
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 1, v___x_1517_);
lean_ctor_set(v___x_1240_, 0, v___x_1536_);
v___x_1538_ = v___x_1240_;
goto v_reusejp_1537_;
}
else
{
lean_object* v_reuseFailAlloc_1543_; 
v_reuseFailAlloc_1543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1543_, 0, v___x_1536_);
lean_ctor_set(v_reuseFailAlloc_1543_, 1, v___x_1517_);
v___x_1538_ = v_reuseFailAlloc_1543_;
goto v_reusejp_1537_;
}
v_reusejp_1537_:
{
lean_object* v___x_1539_; lean_object* v___x_1541_; 
v___x_1539_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1539_, 0, v___x_1534_);
lean_ctor_set(v___x_1539_, 1, v___x_1538_);
if (v_isShared_1532_ == 0)
{
lean_ctor_set(v___x_1531_, 0, v___x_1539_);
v___x_1541_ = v___x_1531_;
goto v_reusejp_1540_;
}
else
{
lean_object* v_reuseFailAlloc_1542_; 
v_reuseFailAlloc_1542_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1542_, 0, v___x_1539_);
v___x_1541_ = v_reuseFailAlloc_1542_;
goto v_reusejp_1540_;
}
v_reusejp_1540_:
{
return v___x_1541_;
}
}
}
}
else
{
lean_object* v_a_1545_; lean_object* v___x_1547_; uint8_t v_isShared_1548_; uint8_t v_isSharedCheck_1552_; 
lean_dec(v_a_1527_);
lean_dec(v___x_1516_);
lean_dec(v___x_1510_);
lean_del_object(v___x_1240_);
v_a_1545_ = lean_ctor_get(v___x_1528_, 0);
v_isSharedCheck_1552_ = !lean_is_exclusive(v___x_1528_);
if (v_isSharedCheck_1552_ == 0)
{
v___x_1547_ = v___x_1528_;
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
else
{
lean_inc(v_a_1545_);
lean_dec(v___x_1528_);
v___x_1547_ = lean_box(0);
v_isShared_1548_ = v_isSharedCheck_1552_;
goto v_resetjp_1546_;
}
v_resetjp_1546_:
{
lean_object* v___x_1550_; 
if (v_isShared_1548_ == 0)
{
v___x_1550_ = v___x_1547_;
goto v_reusejp_1549_;
}
else
{
lean_object* v_reuseFailAlloc_1551_; 
v_reuseFailAlloc_1551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1551_, 0, v_a_1545_);
v___x_1550_ = v_reuseFailAlloc_1551_;
goto v_reusejp_1549_;
}
v_reusejp_1549_:
{
return v___x_1550_;
}
}
}
}
else
{
lean_object* v_a_1553_; lean_object* v___x_1555_; uint8_t v_isShared_1556_; uint8_t v_isSharedCheck_1560_; 
lean_dec_ref(v_pos_1525_);
lean_dec(v___x_1516_);
lean_dec(v___x_1510_);
lean_del_object(v___x_1240_);
v_a_1553_ = lean_ctor_get(v___x_1526_, 0);
v_isSharedCheck_1560_ = !lean_is_exclusive(v___x_1526_);
if (v_isSharedCheck_1560_ == 0)
{
v___x_1555_ = v___x_1526_;
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
else
{
lean_inc(v_a_1553_);
lean_dec(v___x_1526_);
v___x_1555_ = lean_box(0);
v_isShared_1556_ = v_isSharedCheck_1560_;
goto v_resetjp_1554_;
}
v_resetjp_1554_:
{
lean_object* v___x_1558_; 
if (v_isShared_1556_ == 0)
{
v___x_1558_ = v___x_1555_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v_a_1553_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
}
}
}
else
{
lean_dec(v___x_1510_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1216_;
}
}
}
}
}
}
else
{
lean_object* v___x_1564_; uint8_t v___x_1565_; 
lean_dec_ref(v_str_1243_);
v___x_1564_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_natCast_x3f___closed__1));
v___x_1565_ = lean_string_dec_eq(v_str_1242_, v___x_1564_);
lean_dec_ref(v_str_1242_);
if (v___x_1565_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1566_; lean_object* v___x_1567_; uint8_t v___x_1568_; 
v___x_1566_ = lean_array_get_size(v_snd_1238_);
v___x_1567_ = lean_unsigned_to_nat(3u);
v___x_1568_ = lean_nat_dec_eq(v___x_1566_, v___x_1567_);
if (v___x_1568_ == 0)
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1569_; lean_object* v___x_1570_; 
v___x_1569_ = lean_unsigned_to_nat(0u);
v___x_1570_ = lean_array_fget_borrowed(v_snd_1238_, v___x_1569_);
if (lean_obj_tag(v___x_1570_) == 4)
{
lean_object* v_declName_1571_; 
v_declName_1571_ = lean_ctor_get(v___x_1570_, 0);
if (lean_obj_tag(v_declName_1571_) == 1)
{
lean_object* v_pre_1572_; 
v_pre_1572_ = lean_ctor_get(v_declName_1571_, 0);
if (lean_obj_tag(v_pre_1572_) == 0)
{
lean_object* v_us_1573_; lean_object* v_str_1574_; lean_object* v___x_1575_; lean_object* v___y_1577_; lean_object* v___y_1578_; uint8_t v___x_1588_; 
v_us_1573_ = lean_ctor_get(v___x_1570_, 1);
lean_inc(v_us_1573_);
v_str_1574_ = lean_ctor_get(v_declName_1571_, 1);
v___x_1575_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__0));
v___x_1588_ = lean_string_dec_eq(v_str_1574_, v___x_1575_);
if (v___x_1588_ == 0)
{
lean_dec(v_us_1573_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
else
{
if (lean_obj_tag(v_us_1573_) == 0)
{
uint8_t v_splitNatSub_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v_r_1596_; lean_object* v_00_u03b1_1598_; lean_object* v_dec_1599_; lean_object* v_a_1600_; lean_object* v_b_1601_; lean_object* v_00_u03b1_1614_; lean_object* v_c_1615_; lean_object* v_a_1616_; lean_object* v_b_1617_; lean_object* v_n_1628_; lean_object* v_x_1629_; lean_object* v_n_1638_; lean_object* v_i_1639_; lean_object* v_x_1648_; 
v_splitNatSub_1589_ = lean_ctor_get_uint8(v_a_1210_, 1);
v___x_1590_ = lean_unsigned_to_nat(2u);
v___x_1591_ = lean_array_fget(v_snd_1238_, v___x_1590_);
lean_dec(v_snd_1238_);
v___x_1592_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__78));
v___x_1593_ = l_Lean_Expr_const___override(v___x_1592_, v_us_1573_);
lean_inc(v___x_1591_);
v___x_1594_ = l_Lean_Expr_app___override(v___x_1593_, v___x_1591_);
v___x_1595_ = lean_box(0);
v_r_1596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_r_1596_, 0, v___x_1594_);
lean_ctor_set(v_r_1596_, 1, v___x_1595_);
if (v_splitNatSub_1589_ == 1)
{
lean_object* v___x_1654_; lean_object* v_fst_1655_; 
v___x_1654_ = l_Lean_Expr_getAppFnArgs(v___x_1591_);
v_fst_1655_ = lean_ctor_get(v___x_1654_, 0);
lean_inc(v_fst_1655_);
if (lean_obj_tag(v_fst_1655_) == 1)
{
lean_object* v_pre_1656_; 
v_pre_1656_ = lean_ctor_get(v_fst_1655_, 0);
switch(lean_obj_tag(v_pre_1656_))
{
case 1:
{
lean_object* v_pre_1657_; 
lean_inc_ref(v_pre_1656_);
v_pre_1657_ = lean_ctor_get(v_pre_1656_, 0);
if (lean_obj_tag(v_pre_1657_) == 0)
{
lean_object* v_snd_1658_; lean_object* v___x_1660_; uint8_t v_isShared_1661_; uint8_t v_isSharedCheck_1718_; 
v_snd_1658_ = lean_ctor_get(v___x_1654_, 1);
v_isSharedCheck_1718_ = !lean_is_exclusive(v___x_1654_);
if (v_isSharedCheck_1718_ == 0)
{
lean_object* v_unused_1719_; 
v_unused_1719_ = lean_ctor_get(v___x_1654_, 0);
lean_dec(v_unused_1719_);
v___x_1660_ = v___x_1654_;
v_isShared_1661_ = v_isSharedCheck_1718_;
goto v_resetjp_1659_;
}
else
{
lean_inc(v_snd_1658_);
lean_dec(v___x_1654_);
v___x_1660_ = lean_box(0);
v_isShared_1661_ = v_isSharedCheck_1718_;
goto v_resetjp_1659_;
}
v_resetjp_1659_:
{
lean_object* v_str_1662_; lean_object* v_str_1663_; lean_object* v___x_1664_; uint8_t v___x_1665_; 
v_str_1662_ = lean_ctor_get(v_fst_1655_, 1);
lean_inc_ref(v_str_1662_);
lean_dec_ref_known(v_fst_1655_, 2);
v_str_1663_ = lean_ctor_get(v_pre_1656_, 1);
lean_inc_ref(v_str_1663_);
lean_dec_ref_known(v_pre_1656_, 2);
v___x_1664_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__2));
v___x_1665_ = lean_string_dec_eq(v_str_1663_, v___x_1664_);
if (v___x_1665_ == 0)
{
uint8_t v___x_1666_; 
lean_del_object(v___x_1660_);
v___x_1666_ = lean_string_dec_eq(v_str_1663_, v___x_1575_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
lean_del_object(v___x_1240_);
v___x_1667_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_1668_ = lean_string_dec_eq(v_str_1663_, v___x_1667_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83));
v___x_1670_ = lean_string_dec_eq(v_str_1663_, v___x_1669_);
lean_dec_ref(v_str_1663_);
if (v___x_1670_ == 0)
{
lean_object* v___x_1671_; 
lean_dec_ref(v_str_1662_);
lean_dec(v_snd_1658_);
v___x_1671_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1671_, 0, v_r_1596_);
return v___x_1671_;
}
else
{
lean_object* v___x_1672_; uint8_t v___x_1673_; 
v___x_1672_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90));
v___x_1673_ = lean_string_dec_eq(v_str_1662_, v___x_1672_);
lean_dec_ref(v_str_1662_);
if (v___x_1673_ == 0)
{
lean_object* v___x_1674_; 
lean_dec(v_snd_1658_);
v___x_1674_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1674_, 0, v_r_1596_);
return v___x_1674_;
}
else
{
lean_object* v___x_1675_; uint8_t v___x_1676_; 
v___x_1675_ = lean_array_get_size(v_snd_1658_);
v___x_1676_ = lean_nat_dec_eq(v___x_1675_, v___x_1590_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; 
lean_dec(v_snd_1658_);
v___x_1677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1677_, 0, v_r_1596_);
return v___x_1677_;
}
else
{
lean_object* v___x_1678_; lean_object* v___x_1679_; lean_object* v___x_1680_; 
v___x_1678_ = lean_array_fget(v_snd_1658_, v___x_1569_);
v___x_1679_ = lean_unsigned_to_nat(1u);
v___x_1680_ = lean_array_fget(v_snd_1658_, v___x_1679_);
lean_dec(v_snd_1658_);
v_n_1628_ = v___x_1678_;
v_x_1629_ = v___x_1680_;
goto v___jp_1627_;
}
}
}
}
else
{
lean_object* v___x_1681_; uint8_t v___x_1682_; 
lean_dec_ref(v_str_1663_);
v___x_1681_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91));
v___x_1682_ = lean_string_dec_eq(v_str_1662_, v___x_1681_);
lean_dec_ref(v_str_1662_);
if (v___x_1682_ == 0)
{
lean_object* v___x_1683_; 
lean_dec(v_snd_1658_);
v___x_1683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1683_, 0, v_r_1596_);
return v___x_1683_;
}
else
{
lean_object* v___x_1684_; uint8_t v___x_1685_; 
v___x_1684_ = lean_array_get_size(v_snd_1658_);
v___x_1685_ = lean_nat_dec_eq(v___x_1684_, v___x_1590_);
if (v___x_1685_ == 0)
{
lean_object* v___x_1686_; 
lean_dec(v_snd_1658_);
v___x_1686_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1686_, 0, v_r_1596_);
return v___x_1686_;
}
else
{
lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; 
v___x_1687_ = lean_array_fget(v_snd_1658_, v___x_1569_);
v___x_1688_ = lean_unsigned_to_nat(1u);
v___x_1689_ = lean_array_fget(v_snd_1658_, v___x_1688_);
lean_dec(v_snd_1658_);
v_n_1638_ = v___x_1687_;
v_i_1639_ = v___x_1689_;
goto v___jp_1637_;
}
}
}
}
else
{
lean_object* v___x_1690_; uint8_t v___x_1691_; 
lean_dec_ref(v_str_1663_);
v___x_1690_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92));
v___x_1691_ = lean_string_dec_eq(v_str_1662_, v___x_1690_);
lean_dec_ref(v_str_1662_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; 
lean_dec(v_snd_1658_);
lean_del_object(v___x_1240_);
v___x_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1692_, 0, v_r_1596_);
return v___x_1692_;
}
else
{
lean_object* v___x_1693_; lean_object* v___x_1694_; uint8_t v___x_1695_; 
v___x_1693_ = lean_array_get_size(v_snd_1658_);
v___x_1694_ = lean_unsigned_to_nat(1u);
v___x_1695_ = lean_nat_dec_eq(v___x_1693_, v___x_1694_);
if (v___x_1695_ == 0)
{
lean_object* v___x_1696_; 
lean_dec(v_snd_1658_);
lean_del_object(v___x_1240_);
v___x_1696_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1696_, 0, v_r_1596_);
return v___x_1696_;
}
else
{
lean_object* v___x_1697_; 
v___x_1697_ = lean_array_fget(v_snd_1658_, v___x_1569_);
lean_dec(v_snd_1658_);
v_x_1648_ = v___x_1697_;
goto v___jp_1647_;
}
}
}
}
else
{
lean_object* v___x_1698_; uint8_t v___x_1699_; 
lean_dec_ref(v_str_1663_);
lean_del_object(v___x_1240_);
v___x_1698_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_groundNat_x3f___closed__9));
v___x_1699_ = lean_string_dec_eq(v_str_1662_, v___x_1698_);
lean_dec_ref(v_str_1662_);
if (v___x_1699_ == 0)
{
lean_object* v___x_1700_; 
lean_del_object(v___x_1660_);
lean_dec(v_snd_1658_);
v___x_1700_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1700_, 0, v_r_1596_);
return v___x_1700_;
}
else
{
lean_object* v___x_1701_; lean_object* v___x_1702_; uint8_t v___x_1703_; 
v___x_1701_ = lean_array_get_size(v_snd_1658_);
v___x_1702_ = lean_unsigned_to_nat(6u);
v___x_1703_ = lean_nat_dec_eq(v___x_1701_, v___x_1702_);
if (v___x_1703_ == 0)
{
lean_object* v___x_1704_; 
lean_del_object(v___x_1660_);
lean_dec(v_snd_1658_);
v___x_1704_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1704_, 0, v_r_1596_);
return v___x_1704_;
}
else
{
lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; uint8_t v___x_1712_; 
v___x_1705_ = lean_unsigned_to_nat(4u);
v___x_1706_ = lean_array_fget(v_snd_1658_, v___x_1705_);
v___x_1707_ = lean_unsigned_to_nat(5u);
v___x_1708_ = lean_array_fget(v_snd_1658_, v___x_1707_);
lean_dec(v_snd_1658_);
v___x_1709_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__94));
v___x_1710_ = l_Lean_Expr_const___override(v___x_1709_, v_us_1573_);
v___x_1711_ = l_Lean_mkAppB(v___x_1710_, v___x_1706_, v___x_1708_);
v___x_1712_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1711_, v_r_1596_);
if (v___x_1712_ == 0)
{
lean_object* v___x_1714_; 
if (v_isShared_1661_ == 0)
{
lean_ctor_set_tag(v___x_1660_, 1);
lean_ctor_set(v___x_1660_, 1, v_r_1596_);
lean_ctor_set(v___x_1660_, 0, v___x_1711_);
v___x_1714_ = v___x_1660_;
goto v_reusejp_1713_;
}
else
{
lean_object* v_reuseFailAlloc_1716_; 
v_reuseFailAlloc_1716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1716_, 0, v___x_1711_);
lean_ctor_set(v_reuseFailAlloc_1716_, 1, v_r_1596_);
v___x_1714_ = v_reuseFailAlloc_1716_;
goto v_reusejp_1713_;
}
v_reusejp_1713_:
{
lean_object* v___x_1715_; 
v___x_1715_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1715_, 0, v___x_1714_);
return v___x_1715_;
}
}
else
{
lean_object* v___x_1717_; 
lean_dec_ref(v___x_1711_);
lean_del_object(v___x_1660_);
v___x_1717_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1717_, 0, v_r_1596_);
return v___x_1717_;
}
}
}
}
}
}
else
{
lean_object* v___x_1720_; 
lean_dec_ref_known(v_pre_1656_, 2);
lean_dec_ref_known(v_fst_1655_, 2);
lean_dec_ref(v___x_1654_);
lean_del_object(v___x_1240_);
v___x_1720_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1720_, 0, v_r_1596_);
return v___x_1720_;
}
}
case 0:
{
lean_object* v_snd_1721_; lean_object* v_str_1722_; lean_object* v___x_1723_; uint8_t v___x_1724_; 
lean_del_object(v___x_1240_);
v_snd_1721_ = lean_ctor_get(v___x_1654_, 1);
lean_inc(v_snd_1721_);
lean_dec_ref(v___x_1654_);
v_str_1722_ = lean_ctor_get(v_fst_1655_, 1);
lean_inc_ref(v_str_1722_);
lean_dec_ref_known(v_fst_1655_, 2);
v___x_1723_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__95));
v___x_1724_ = lean_string_dec_eq(v_str_1722_, v___x_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; uint8_t v___x_1726_; 
v___x_1725_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__96));
v___x_1726_ = lean_string_dec_eq(v_str_1722_, v___x_1725_);
lean_dec_ref(v_str_1722_);
if (v___x_1726_ == 0)
{
lean_object* v___x_1727_; 
lean_dec(v_snd_1721_);
v___x_1727_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1727_, 0, v_r_1596_);
return v___x_1727_;
}
else
{
lean_object* v___x_1728_; lean_object* v___x_1729_; uint8_t v___x_1730_; 
v___x_1728_ = lean_array_get_size(v_snd_1721_);
v___x_1729_ = lean_unsigned_to_nat(5u);
v___x_1730_ = lean_nat_dec_eq(v___x_1728_, v___x_1729_);
if (v___x_1730_ == 0)
{
lean_object* v___x_1731_; 
lean_dec(v_snd_1721_);
v___x_1731_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1731_, 0, v_r_1596_);
return v___x_1731_;
}
else
{
lean_object* v___x_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; 
v___x_1732_ = lean_array_fget(v_snd_1721_, v___x_1569_);
v___x_1733_ = lean_array_fget(v_snd_1721_, v___x_1590_);
v___x_1734_ = lean_array_fget(v_snd_1721_, v___x_1567_);
v___x_1735_ = lean_unsigned_to_nat(4u);
v___x_1736_ = lean_array_fget(v_snd_1721_, v___x_1735_);
lean_dec(v_snd_1721_);
v_00_u03b1_1598_ = v___x_1732_;
v_dec_1599_ = v___x_1733_;
v_a_1600_ = v___x_1734_;
v_b_1601_ = v___x_1736_;
goto v___jp_1597_;
}
}
}
else
{
lean_object* v___x_1737_; lean_object* v___x_1738_; uint8_t v___x_1739_; 
lean_dec_ref(v_str_1722_);
v___x_1737_ = lean_array_get_size(v_snd_1721_);
v___x_1738_ = lean_unsigned_to_nat(4u);
v___x_1739_ = lean_nat_dec_eq(v___x_1737_, v___x_1738_);
if (v___x_1739_ == 0)
{
lean_object* v___x_1740_; 
lean_dec(v_snd_1721_);
v___x_1740_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1740_, 0, v_r_1596_);
return v___x_1740_;
}
else
{
lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; 
v___x_1741_ = lean_array_fget(v_snd_1721_, v___x_1569_);
v___x_1742_ = lean_unsigned_to_nat(1u);
v___x_1743_ = lean_array_fget(v_snd_1721_, v___x_1742_);
v___x_1744_ = lean_array_fget(v_snd_1721_, v___x_1590_);
v___x_1745_ = lean_array_fget(v_snd_1721_, v___x_1567_);
lean_dec(v_snd_1721_);
v_00_u03b1_1614_ = v___x_1741_;
v_c_1615_ = v___x_1743_;
v_a_1616_ = v___x_1744_;
v_b_1617_ = v___x_1745_;
goto v___jp_1613_;
}
}
}
default: 
{
lean_object* v___x_1746_; 
lean_dec_ref_known(v_fst_1655_, 2);
lean_dec_ref(v___x_1654_);
lean_del_object(v___x_1240_);
v___x_1746_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1746_, 0, v_r_1596_);
return v___x_1746_;
}
}
}
else
{
lean_object* v___x_1747_; 
lean_dec(v_fst_1655_);
lean_dec_ref(v___x_1654_);
lean_del_object(v___x_1240_);
v___x_1747_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1747_, 0, v_r_1596_);
return v___x_1747_;
}
}
else
{
lean_object* v___x_1748_; lean_object* v_fst_1749_; 
v___x_1748_ = l_Lean_Expr_getAppFnArgs(v___x_1591_);
v_fst_1749_ = lean_ctor_get(v___x_1748_, 0);
lean_inc(v_fst_1749_);
if (lean_obj_tag(v_fst_1749_) == 1)
{
lean_object* v_pre_1750_; 
v_pre_1750_ = lean_ctor_get(v_fst_1749_, 0);
switch(lean_obj_tag(v_pre_1750_))
{
case 1:
{
lean_object* v_pre_1751_; 
lean_inc_ref(v_pre_1750_);
v_pre_1751_ = lean_ctor_get(v_pre_1750_, 0);
if (lean_obj_tag(v_pre_1751_) == 0)
{
lean_object* v_snd_1752_; lean_object* v_str_1753_; lean_object* v_str_1754_; uint8_t v___x_1755_; 
v_snd_1752_ = lean_ctor_get(v___x_1748_, 1);
lean_inc(v_snd_1752_);
lean_dec_ref(v___x_1748_);
v_str_1753_ = lean_ctor_get(v_fst_1749_, 1);
lean_inc_ref(v_str_1753_);
lean_dec_ref_known(v_fst_1749_, 2);
v_str_1754_ = lean_ctor_get(v_pre_1750_, 1);
lean_inc_ref(v_str_1754_);
lean_dec_ref_known(v_pre_1750_, 2);
v___x_1755_ = lean_string_dec_eq(v_str_1754_, v___x_1575_);
if (v___x_1755_ == 0)
{
lean_object* v___x_1756_; uint8_t v___x_1757_; 
lean_del_object(v___x_1240_);
v___x_1756_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__86));
v___x_1757_ = lean_string_dec_eq(v_str_1754_, v___x_1756_);
if (v___x_1757_ == 0)
{
lean_object* v___x_1758_; uint8_t v___x_1759_; 
v___x_1758_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__83));
v___x_1759_ = lean_string_dec_eq(v_str_1754_, v___x_1758_);
lean_dec_ref(v_str_1754_);
if (v___x_1759_ == 0)
{
lean_object* v___x_1760_; 
lean_dec_ref(v_str_1753_);
lean_dec(v_snd_1752_);
v___x_1760_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1760_, 0, v_r_1596_);
return v___x_1760_;
}
else
{
lean_object* v___x_1761_; uint8_t v___x_1762_; 
v___x_1761_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__90));
v___x_1762_ = lean_string_dec_eq(v_str_1753_, v___x_1761_);
lean_dec_ref(v_str_1753_);
if (v___x_1762_ == 0)
{
lean_object* v___x_1763_; 
lean_dec(v_snd_1752_);
v___x_1763_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1763_, 0, v_r_1596_);
return v___x_1763_;
}
else
{
lean_object* v___x_1764_; uint8_t v___x_1765_; 
v___x_1764_ = lean_array_get_size(v_snd_1752_);
v___x_1765_ = lean_nat_dec_eq(v___x_1764_, v___x_1590_);
if (v___x_1765_ == 0)
{
lean_object* v___x_1766_; 
lean_dec(v_snd_1752_);
v___x_1766_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1766_, 0, v_r_1596_);
return v___x_1766_;
}
else
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
v___x_1767_ = lean_array_fget(v_snd_1752_, v___x_1569_);
v___x_1768_ = lean_unsigned_to_nat(1u);
v___x_1769_ = lean_array_fget(v_snd_1752_, v___x_1768_);
lean_dec(v_snd_1752_);
v_n_1628_ = v___x_1767_;
v_x_1629_ = v___x_1769_;
goto v___jp_1627_;
}
}
}
}
else
{
lean_object* v___x_1770_; uint8_t v___x_1771_; 
lean_dec_ref(v_str_1754_);
v___x_1770_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__91));
v___x_1771_ = lean_string_dec_eq(v_str_1753_, v___x_1770_);
lean_dec_ref(v_str_1753_);
if (v___x_1771_ == 0)
{
lean_object* v___x_1772_; 
lean_dec(v_snd_1752_);
v___x_1772_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1772_, 0, v_r_1596_);
return v___x_1772_;
}
else
{
lean_object* v___x_1773_; uint8_t v___x_1774_; 
v___x_1773_ = lean_array_get_size(v_snd_1752_);
v___x_1774_ = lean_nat_dec_eq(v___x_1773_, v___x_1590_);
if (v___x_1774_ == 0)
{
lean_object* v___x_1775_; 
lean_dec(v_snd_1752_);
v___x_1775_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1775_, 0, v_r_1596_);
return v___x_1775_;
}
else
{
lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
v___x_1776_ = lean_array_fget(v_snd_1752_, v___x_1569_);
v___x_1777_ = lean_unsigned_to_nat(1u);
v___x_1778_ = lean_array_fget(v_snd_1752_, v___x_1777_);
lean_dec(v_snd_1752_);
v_n_1638_ = v___x_1776_;
v_i_1639_ = v___x_1778_;
goto v___jp_1637_;
}
}
}
}
else
{
lean_object* v___x_1779_; uint8_t v___x_1780_; 
lean_dec_ref(v_str_1754_);
v___x_1779_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__92));
v___x_1780_ = lean_string_dec_eq(v_str_1753_, v___x_1779_);
lean_dec_ref(v_str_1753_);
if (v___x_1780_ == 0)
{
lean_object* v___x_1781_; 
lean_dec(v_snd_1752_);
lean_del_object(v___x_1240_);
v___x_1781_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1781_, 0, v_r_1596_);
return v___x_1781_;
}
else
{
lean_object* v___x_1782_; lean_object* v___x_1783_; uint8_t v___x_1784_; 
v___x_1782_ = lean_array_get_size(v_snd_1752_);
v___x_1783_ = lean_unsigned_to_nat(1u);
v___x_1784_ = lean_nat_dec_eq(v___x_1782_, v___x_1783_);
if (v___x_1784_ == 0)
{
lean_object* v___x_1785_; 
lean_dec(v_snd_1752_);
lean_del_object(v___x_1240_);
v___x_1785_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1785_, 0, v_r_1596_);
return v___x_1785_;
}
else
{
lean_object* v___x_1786_; 
v___x_1786_ = lean_array_fget(v_snd_1752_, v___x_1569_);
lean_dec(v_snd_1752_);
v_x_1648_ = v___x_1786_;
goto v___jp_1647_;
}
}
}
}
else
{
lean_object* v___x_1787_; 
lean_dec_ref_known(v_pre_1750_, 2);
lean_dec_ref_known(v_fst_1749_, 2);
lean_dec_ref(v___x_1748_);
lean_del_object(v___x_1240_);
v___x_1787_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1787_, 0, v_r_1596_);
return v___x_1787_;
}
}
case 0:
{
lean_object* v_snd_1788_; lean_object* v_str_1789_; lean_object* v___x_1790_; uint8_t v___x_1791_; 
lean_del_object(v___x_1240_);
v_snd_1788_ = lean_ctor_get(v___x_1748_, 1);
lean_inc(v_snd_1788_);
lean_dec_ref(v___x_1748_);
v_str_1789_ = lean_ctor_get(v_fst_1749_, 1);
lean_inc_ref(v_str_1789_);
lean_dec_ref_known(v_fst_1749_, 2);
v___x_1790_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__95));
v___x_1791_ = lean_string_dec_eq(v_str_1789_, v___x_1790_);
if (v___x_1791_ == 0)
{
lean_object* v___x_1792_; uint8_t v___x_1793_; 
v___x_1792_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__96));
v___x_1793_ = lean_string_dec_eq(v_str_1789_, v___x_1792_);
lean_dec_ref(v_str_1789_);
if (v___x_1793_ == 0)
{
lean_object* v___x_1794_; 
lean_dec(v_snd_1788_);
v___x_1794_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1794_, 0, v_r_1596_);
return v___x_1794_;
}
else
{
lean_object* v___x_1795_; lean_object* v___x_1796_; uint8_t v___x_1797_; 
v___x_1795_ = lean_array_get_size(v_snd_1788_);
v___x_1796_ = lean_unsigned_to_nat(5u);
v___x_1797_ = lean_nat_dec_eq(v___x_1795_, v___x_1796_);
if (v___x_1797_ == 0)
{
lean_object* v___x_1798_; 
lean_dec(v_snd_1788_);
v___x_1798_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1798_, 0, v_r_1596_);
return v___x_1798_;
}
else
{
lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; lean_object* v___x_1802_; lean_object* v___x_1803_; 
v___x_1799_ = lean_array_fget(v_snd_1788_, v___x_1569_);
v___x_1800_ = lean_array_fget(v_snd_1788_, v___x_1590_);
v___x_1801_ = lean_array_fget(v_snd_1788_, v___x_1567_);
v___x_1802_ = lean_unsigned_to_nat(4u);
v___x_1803_ = lean_array_fget(v_snd_1788_, v___x_1802_);
lean_dec(v_snd_1788_);
v_00_u03b1_1598_ = v___x_1799_;
v_dec_1599_ = v___x_1800_;
v_a_1600_ = v___x_1801_;
v_b_1601_ = v___x_1803_;
goto v___jp_1597_;
}
}
}
else
{
lean_object* v___x_1804_; lean_object* v___x_1805_; uint8_t v___x_1806_; 
lean_dec_ref(v_str_1789_);
v___x_1804_ = lean_array_get_size(v_snd_1788_);
v___x_1805_ = lean_unsigned_to_nat(4u);
v___x_1806_ = lean_nat_dec_eq(v___x_1804_, v___x_1805_);
if (v___x_1806_ == 0)
{
lean_object* v___x_1807_; 
lean_dec(v_snd_1788_);
v___x_1807_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1807_, 0, v_r_1596_);
return v___x_1807_;
}
else
{
lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; 
v___x_1808_ = lean_array_fget(v_snd_1788_, v___x_1569_);
v___x_1809_ = lean_unsigned_to_nat(1u);
v___x_1810_ = lean_array_fget(v_snd_1788_, v___x_1809_);
v___x_1811_ = lean_array_fget(v_snd_1788_, v___x_1590_);
v___x_1812_ = lean_array_fget(v_snd_1788_, v___x_1567_);
lean_dec(v_snd_1788_);
v_00_u03b1_1614_ = v___x_1808_;
v_c_1615_ = v___x_1810_;
v_a_1616_ = v___x_1811_;
v_b_1617_ = v___x_1812_;
goto v___jp_1613_;
}
}
}
default: 
{
lean_object* v___x_1813_; 
lean_dec_ref_known(v_fst_1749_, 2);
lean_dec_ref(v___x_1748_);
lean_del_object(v___x_1240_);
v___x_1813_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1813_, 0, v_r_1596_);
return v___x_1813_;
}
}
}
else
{
lean_object* v___x_1814_; 
lean_dec(v_fst_1749_);
lean_dec_ref(v___x_1748_);
lean_del_object(v___x_1240_);
v___x_1814_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1814_, 0, v_r_1596_);
return v___x_1814_;
}
}
v___jp_1597_:
{
lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; uint8_t v___x_1609_; 
v___x_1602_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80));
v___x_1603_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
v___x_1604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1603_);
lean_ctor_set(v___x_1604_, 1, v_us_1573_);
v___x_1605_ = l_Lean_Expr_const___override(v___x_1602_, v___x_1604_);
v___x_1606_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_1607_ = l_Lean_Expr_proj___override(v___x_1606_, v___x_1569_, v_dec_1599_);
v___x_1608_ = l_Lean_mkApp4(v___x_1605_, v_00_u03b1_1598_, v___x_1607_, v_a_1600_, v_b_1601_);
v___x_1609_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1608_, v_r_1596_);
if (v___x_1609_ == 0)
{
lean_object* v___x_1610_; lean_object* v___x_1611_; 
v___x_1610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1610_, 0, v___x_1608_);
lean_ctor_set(v___x_1610_, 1, v_r_1596_);
v___x_1611_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1611_, 0, v___x_1610_);
return v___x_1611_;
}
else
{
lean_object* v___x_1612_; 
lean_dec_ref(v___x_1608_);
v___x_1612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1612_, 0, v_r_1596_);
return v___x_1612_;
}
}
v___jp_1613_:
{
lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; uint8_t v___x_1623_; 
v___x_1618_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__80));
v___x_1619_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__23);
v___x_1620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1620_, 0, v___x_1619_);
lean_ctor_set(v___x_1620_, 1, v_us_1573_);
v___x_1621_ = l_Lean_Expr_const___override(v___x_1618_, v___x_1620_);
v___x_1622_ = l_Lean_mkApp4(v___x_1621_, v_00_u03b1_1614_, v_c_1615_, v_a_1616_, v_b_1617_);
v___x_1623_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1622_, v_r_1596_);
if (v___x_1623_ == 0)
{
lean_object* v___x_1624_; lean_object* v___x_1625_; 
v___x_1624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1624_, 0, v___x_1622_);
lean_ctor_set(v___x_1624_, 1, v_r_1596_);
v___x_1625_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1625_, 0, v___x_1624_);
return v___x_1625_;
}
else
{
lean_object* v___x_1626_; 
lean_dec_ref(v___x_1622_);
v___x_1626_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1626_, 0, v_r_1596_);
return v___x_1626_;
}
}
v___jp_1627_:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; uint8_t v___x_1633_; 
v___x_1630_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__85));
v___x_1631_ = l_Lean_Expr_const___override(v___x_1630_, v_us_1573_);
v___x_1632_ = l_Lean_mkAppB(v___x_1631_, v_n_1628_, v_x_1629_);
v___x_1633_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1632_, v_r_1596_);
if (v___x_1633_ == 0)
{
lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1634_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1634_, 0, v___x_1632_);
lean_ctor_set(v___x_1634_, 1, v_r_1596_);
v___x_1635_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1634_);
return v___x_1635_;
}
else
{
lean_object* v___x_1636_; 
lean_dec_ref(v___x_1632_);
v___x_1636_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1636_, 0, v_r_1596_);
return v___x_1636_;
}
}
v___jp_1637_:
{
lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; uint8_t v___x_1643_; 
v___x_1640_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__87));
v___x_1641_ = l_Lean_Expr_const___override(v___x_1640_, v_us_1573_);
v___x_1642_ = l_Lean_mkAppB(v___x_1641_, v_n_1638_, v_i_1639_);
v___x_1643_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1642_, v_r_1596_);
if (v___x_1643_ == 0)
{
lean_object* v___x_1644_; lean_object* v___x_1645_; 
v___x_1644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1642_);
lean_ctor_set(v___x_1644_, 1, v_r_1596_);
v___x_1645_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1645_, 0, v___x_1644_);
return v___x_1645_;
}
else
{
lean_object* v___x_1646_; 
lean_dec_ref(v___x_1642_);
v___x_1646_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1646_, 0, v_r_1596_);
return v___x_1646_;
}
}
v___jp_1647_:
{
lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; uint8_t v___x_1652_; 
v___x_1649_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__89));
v___x_1650_ = l_Lean_Expr_const___override(v___x_1649_, v_us_1573_);
lean_inc_ref(v_x_1648_);
v___x_1651_ = l_Lean_Expr_app___override(v___x_1650_, v_x_1648_);
v___x_1652_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1651_, v_r_1596_);
if (v___x_1652_ == 0)
{
lean_object* v___x_1653_; 
v___x_1653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v_r_1596_);
v___y_1577_ = v_x_1648_;
v___y_1578_ = v___x_1653_;
goto v___jp_1576_;
}
else
{
lean_dec_ref(v___x_1651_);
v___y_1577_ = v_x_1648_;
v___y_1578_ = v_r_1596_;
goto v___jp_1576_;
}
}
}
else
{
lean_dec(v_us_1573_);
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
}
v___jp_1576_:
{
lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; uint8_t v___x_1582_; 
v___x_1579_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__76));
v___x_1580_ = l_Lean_Expr_const___override(v___x_1579_, v_us_1573_);
v___x_1581_ = l_Lean_Expr_app___override(v___x_1580_, v___y_1577_);
v___x_1582_ = l_List_elem___at___00Lean_Elab_Tactic_Omega_analyzeAtom_spec__0(v___x_1581_, v___y_1578_);
if (v___x_1582_ == 0)
{
lean_object* v___x_1584_; 
if (v_isShared_1241_ == 0)
{
lean_ctor_set_tag(v___x_1240_, 1);
lean_ctor_set(v___x_1240_, 1, v___y_1578_);
lean_ctor_set(v___x_1240_, 0, v___x_1581_);
v___x_1584_ = v___x_1240_;
goto v_reusejp_1583_;
}
else
{
lean_object* v_reuseFailAlloc_1586_; 
v_reuseFailAlloc_1586_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1586_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1586_, 1, v___y_1578_);
v___x_1584_ = v_reuseFailAlloc_1586_;
goto v_reusejp_1583_;
}
v_reusejp_1583_:
{
lean_object* v___x_1585_; 
v___x_1585_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1585_, 0, v___x_1584_);
return v___x_1585_;
}
}
else
{
lean_object* v___x_1587_; 
lean_dec_ref(v___x_1581_);
lean_del_object(v___x_1240_);
v___x_1587_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1587_, 0, v___y_1578_);
return v___x_1587_;
}
}
}
else
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
}
else
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
}
else
{
lean_del_object(v___x_1240_);
lean_dec(v_snd_1238_);
goto v___jp_1222_;
}
}
}
}
}
}
else
{
lean_dec_ref_known(v_pre_1236_, 2);
lean_dec_ref_known(v_fst_1235_, 2);
lean_dec_ref(v___x_1234_);
goto v___jp_1222_;
}
}
case 0:
{
lean_object* v_snd_1817_; lean_object* v___x_1819_; uint8_t v_isShared_1820_; uint8_t v_isSharedCheck_1870_; 
v_snd_1817_ = lean_ctor_get(v___x_1234_, 1);
v_isSharedCheck_1870_ = !lean_is_exclusive(v___x_1234_);
if (v_isSharedCheck_1870_ == 0)
{
lean_object* v_unused_1871_; 
v_unused_1871_ = lean_ctor_get(v___x_1234_, 0);
lean_dec(v_unused_1871_);
v___x_1819_ = v___x_1234_;
v_isShared_1820_ = v_isSharedCheck_1870_;
goto v_resetjp_1818_;
}
else
{
lean_inc(v_snd_1817_);
lean_dec(v___x_1234_);
v___x_1819_ = lean_box(0);
v_isShared_1820_ = v_isSharedCheck_1870_;
goto v_resetjp_1818_;
}
v_resetjp_1818_:
{
lean_object* v_str_1821_; lean_object* v___x_1822_; uint8_t v___x_1823_; 
v_str_1821_ = lean_ctor_get(v_fst_1235_, 1);
lean_inc_ref(v_str_1821_);
lean_dec_ref_known(v_fst_1235_, 2);
v___x_1822_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__95));
v___x_1823_ = lean_string_dec_eq(v_str_1821_, v___x_1822_);
if (v___x_1823_ == 0)
{
lean_object* v___x_1824_; uint8_t v___x_1825_; 
v___x_1824_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__96));
v___x_1825_ = lean_string_dec_eq(v_str_1821_, v___x_1824_);
lean_dec_ref(v_str_1821_);
if (v___x_1825_ == 0)
{
lean_del_object(v___x_1819_);
lean_dec(v_snd_1817_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1826_; lean_object* v___x_1827_; uint8_t v___x_1828_; 
v___x_1826_ = lean_array_get_size(v_snd_1817_);
v___x_1827_ = lean_unsigned_to_nat(5u);
v___x_1828_ = lean_nat_dec_eq(v___x_1826_, v___x_1827_);
if (v___x_1828_ == 0)
{
lean_del_object(v___x_1819_);
lean_dec(v_snd_1817_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; uint8_t v___x_1833_; 
v___x_1829_ = lean_unsigned_to_nat(0u);
v___x_1830_ = lean_array_fget(v_snd_1817_, v___x_1829_);
v___x_1831_ = lean_box(0);
v___x_1832_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1833_ = lean_expr_eqv(v___x_1830_, v___x_1832_);
if (v___x_1833_ == 0)
{
lean_object* v___x_1834_; 
lean_dec(v___x_1830_);
lean_del_object(v___x_1819_);
lean_dec(v_snd_1817_);
v___x_1834_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1834_, 0, v___x_1831_);
return v___x_1834_;
}
else
{
lean_object* v___x_1835_; lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1846_; 
v___x_1835_ = lean_unsigned_to_nat(2u);
v___x_1836_ = lean_array_fget(v_snd_1817_, v___x_1835_);
v___x_1837_ = lean_unsigned_to_nat(3u);
v___x_1838_ = lean_array_fget(v_snd_1817_, v___x_1837_);
v___x_1839_ = lean_unsigned_to_nat(4u);
v___x_1840_ = lean_array_fget(v_snd_1817_, v___x_1839_);
lean_dec(v_snd_1817_);
v___x_1841_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97);
v___x_1842_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__82));
v___x_1843_ = l_Lean_Expr_proj___override(v___x_1842_, v___x_1829_, v___x_1836_);
v___x_1844_ = l_Lean_mkApp4(v___x_1841_, v___x_1830_, v___x_1843_, v___x_1838_, v___x_1840_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set_tag(v___x_1819_, 1);
lean_ctor_set(v___x_1819_, 1, v___x_1831_);
lean_ctor_set(v___x_1819_, 0, v___x_1844_);
v___x_1846_ = v___x_1819_;
goto v_reusejp_1845_;
}
else
{
lean_object* v_reuseFailAlloc_1848_; 
v_reuseFailAlloc_1848_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1848_, 0, v___x_1844_);
lean_ctor_set(v_reuseFailAlloc_1848_, 1, v___x_1831_);
v___x_1846_ = v_reuseFailAlloc_1848_;
goto v_reusejp_1845_;
}
v_reusejp_1845_:
{
lean_object* v___x_1847_; 
v___x_1847_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1847_, 0, v___x_1846_);
return v___x_1847_;
}
}
}
}
}
else
{
lean_object* v___x_1849_; lean_object* v___x_1850_; uint8_t v___x_1851_; 
lean_dec_ref(v_str_1821_);
v___x_1849_ = lean_array_get_size(v_snd_1817_);
v___x_1850_ = lean_unsigned_to_nat(4u);
v___x_1851_ = lean_nat_dec_eq(v___x_1849_, v___x_1850_);
if (v___x_1851_ == 0)
{
lean_del_object(v___x_1819_);
lean_dec(v_snd_1817_);
goto v___jp_1222_;
}
else
{
lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1852_ = lean_unsigned_to_nat(0u);
v___x_1853_ = lean_array_fget(v_snd_1817_, v___x_1852_);
v___x_1854_ = lean_box(0);
v___x_1855_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2, &l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2_once, _init_l_Lean_Elab_Tactic_Omega_atomsList___redArg___closed__2);
v___x_1856_ = lean_expr_eqv(v___x_1853_, v___x_1855_);
if (v___x_1856_ == 0)
{
lean_object* v___x_1857_; 
lean_dec(v___x_1853_);
lean_del_object(v___x_1819_);
lean_dec(v_snd_1817_);
v___x_1857_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1857_, 0, v___x_1854_);
return v___x_1857_;
}
else
{
lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1867_; 
v___x_1858_ = lean_unsigned_to_nat(1u);
v___x_1859_ = lean_array_fget(v_snd_1817_, v___x_1858_);
v___x_1860_ = lean_unsigned_to_nat(2u);
v___x_1861_ = lean_array_fget(v_snd_1817_, v___x_1860_);
v___x_1862_ = lean_unsigned_to_nat(3u);
v___x_1863_ = lean_array_fget(v_snd_1817_, v___x_1862_);
lean_dec(v_snd_1817_);
v___x_1864_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97, &l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97_once, _init_l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___closed__97);
v___x_1865_ = l_Lean_mkApp4(v___x_1864_, v___x_1853_, v___x_1859_, v___x_1861_, v___x_1863_);
if (v_isShared_1820_ == 0)
{
lean_ctor_set_tag(v___x_1819_, 1);
lean_ctor_set(v___x_1819_, 1, v___x_1854_);
lean_ctor_set(v___x_1819_, 0, v___x_1865_);
v___x_1867_ = v___x_1819_;
goto v_reusejp_1866_;
}
else
{
lean_object* v_reuseFailAlloc_1869_; 
v_reuseFailAlloc_1869_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1869_, 0, v___x_1865_);
lean_ctor_set(v_reuseFailAlloc_1869_, 1, v___x_1854_);
v___x_1867_ = v_reuseFailAlloc_1869_;
goto v_reusejp_1866_;
}
v_reusejp_1866_:
{
lean_object* v___x_1868_; 
v___x_1868_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1868_, 0, v___x_1867_);
return v___x_1868_;
}
}
}
}
}
}
default: 
{
lean_dec_ref_known(v_fst_1235_, 2);
lean_dec_ref(v___x_1234_);
goto v___jp_1222_;
}
}
}
else
{
lean_dec(v_fst_1235_);
lean_dec_ref(v___x_1234_);
goto v___jp_1222_;
}
v___jp_1216_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; 
v___x_1217_ = lean_box(0);
v___x_1218_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1218_, 0, v___x_1217_);
return v___x_1218_;
}
v___jp_1219_:
{
lean_object* v___x_1220_; lean_object* v___x_1221_; 
v___x_1220_ = lean_box(0);
v___x_1221_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1221_, 0, v___x_1220_);
return v___x_1221_;
}
v___jp_1222_:
{
lean_object* v___x_1223_; lean_object* v___x_1224_; 
v___x_1223_ = lean_box(0);
v___x_1224_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1224_, 0, v___x_1223_);
return v___x_1224_;
}
v___jp_1225_:
{
lean_object* v___x_1226_; lean_object* v___x_1227_; 
v___x_1226_ = lean_box(0);
v___x_1227_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1227_, 0, v___x_1226_);
return v___x_1227_;
}
v___jp_1228_:
{
lean_object* v___x_1229_; lean_object* v___x_1230_; 
v___x_1229_ = lean_box(0);
v___x_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1230_, 0, v___x_1229_);
return v___x_1230_;
}
v___jp_1231_:
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
v___x_1232_ = lean_box(0);
v___x_1233_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1233_, 0, v___x_1232_);
return v___x_1233_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg___boxed(lean_object* v_e_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_, lean_object* v_a_1876_, lean_object* v_a_1877_, lean_object* v_a_1878_){
_start:
{
lean_object* v_res_1879_; 
v_res_1879_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_1872_, v_a_1873_, v_a_1874_, v_a_1875_, v_a_1876_, v_a_1877_);
lean_dec(v_a_1877_);
lean_dec_ref(v_a_1876_);
lean_dec(v_a_1875_);
lean_dec_ref(v_a_1874_);
lean_dec_ref(v_a_1873_);
return v_res_1879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom(lean_object* v_e_1880_, lean_object* v_a_1881_, lean_object* v_a_1882_, lean_object* v_a_1883_, uint8_t v_a_1884_, lean_object* v_a_1885_, lean_object* v_a_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_){
_start:
{
lean_object* v___x_1891_; 
v___x_1891_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_e_1880_, v_a_1883_, v_a_1886_, v_a_1887_, v_a_1888_, v_a_1889_);
return v___x_1891_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_analyzeAtom___boxed(lean_object* v_e_1892_, lean_object* v_a_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_, lean_object* v_a_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_, lean_object* v_a_1902_){
_start:
{
uint8_t v_a_boxed_1903_; lean_object* v_res_1904_; 
v_a_boxed_1903_ = lean_unbox(v_a_1896_);
v_res_1904_ = l_Lean_Elab_Tactic_Omega_analyzeAtom(v_e_1892_, v_a_1893_, v_a_1894_, v_a_1895_, v_a_boxed_1903_, v_a_1897_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_);
lean_dec(v_a_1901_);
lean_dec_ref(v_a_1900_);
lean_dec(v_a_1899_);
lean_dec_ref(v_a_1898_);
lean_dec(v_a_1897_);
lean_dec_ref(v_a_1895_);
lean_dec(v_a_1894_);
lean_dec(v_a_1893_);
return v_res_1904_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(lean_object* v_a_1905_, lean_object* v_x_1906_){
_start:
{
if (lean_obj_tag(v_x_1906_) == 0)
{
lean_object* v___x_1907_; 
v___x_1907_ = lean_box(0);
return v___x_1907_;
}
else
{
lean_object* v_key_1908_; lean_object* v_value_1909_; lean_object* v_tail_1910_; uint8_t v___x_1911_; 
v_key_1908_ = lean_ctor_get(v_x_1906_, 0);
v_value_1909_ = lean_ctor_get(v_x_1906_, 1);
v_tail_1910_ = lean_ctor_get(v_x_1906_, 2);
v___x_1911_ = lean_expr_eqv(v_key_1908_, v_a_1905_);
if (v___x_1911_ == 0)
{
v_x_1906_ = v_tail_1910_;
goto _start;
}
else
{
lean_object* v___x_1913_; 
lean_inc(v_value_1909_);
v___x_1913_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1913_, 0, v_value_1909_);
return v___x_1913_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg___boxed(lean_object* v_a_1914_, lean_object* v_x_1915_){
_start:
{
lean_object* v_res_1916_; 
v_res_1916_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_1914_, v_x_1915_);
lean_dec(v_x_1915_);
lean_dec_ref(v_a_1914_);
return v_res_1916_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(lean_object* v_m_1917_, lean_object* v_a_1918_){
_start:
{
lean_object* v_buckets_1919_; lean_object* v___x_1920_; uint64_t v___x_1921_; uint64_t v___x_1922_; uint64_t v___x_1923_; uint64_t v_fold_1924_; uint64_t v___x_1925_; uint64_t v___x_1926_; uint64_t v___x_1927_; size_t v___x_1928_; size_t v___x_1929_; size_t v___x_1930_; size_t v___x_1931_; size_t v___x_1932_; lean_object* v___x_1933_; lean_object* v___x_1934_; 
v_buckets_1919_ = lean_ctor_get(v_m_1917_, 1);
v___x_1920_ = lean_array_get_size(v_buckets_1919_);
v___x_1921_ = l_Lean_Expr_hash(v_a_1918_);
v___x_1922_ = 32ULL;
v___x_1923_ = lean_uint64_shift_right(v___x_1921_, v___x_1922_);
v_fold_1924_ = lean_uint64_xor(v___x_1921_, v___x_1923_);
v___x_1925_ = 16ULL;
v___x_1926_ = lean_uint64_shift_right(v_fold_1924_, v___x_1925_);
v___x_1927_ = lean_uint64_xor(v_fold_1924_, v___x_1926_);
v___x_1928_ = lean_uint64_to_usize(v___x_1927_);
v___x_1929_ = lean_usize_of_nat(v___x_1920_);
v___x_1930_ = ((size_t)1ULL);
v___x_1931_ = lean_usize_sub(v___x_1929_, v___x_1930_);
v___x_1932_ = lean_usize_land(v___x_1928_, v___x_1931_);
v___x_1933_ = lean_array_uget_borrowed(v_buckets_1919_, v___x_1932_);
v___x_1934_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_1918_, v___x_1933_);
return v___x_1934_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg___boxed(lean_object* v_m_1935_, lean_object* v_a_1936_){
_start:
{
lean_object* v_res_1937_; 
v_res_1937_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_1935_, v_a_1936_);
lean_dec_ref(v_a_1936_);
lean_dec_ref(v_m_1935_);
return v_res_1937_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(lean_object* v_a_1938_, lean_object* v_x_1939_){
_start:
{
if (lean_obj_tag(v_x_1939_) == 0)
{
uint8_t v___x_1940_; 
v___x_1940_ = 0;
return v___x_1940_;
}
else
{
lean_object* v_key_1941_; lean_object* v_tail_1942_; uint8_t v___x_1943_; 
v_key_1941_ = lean_ctor_get(v_x_1939_, 0);
v_tail_1942_ = lean_ctor_get(v_x_1939_, 2);
v___x_1943_ = lean_expr_eqv(v_key_1941_, v_a_1938_);
if (v___x_1943_ == 0)
{
v_x_1939_ = v_tail_1942_;
goto _start;
}
else
{
return v___x_1943_;
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg___boxed(lean_object* v_a_1945_, lean_object* v_x_1946_){
_start:
{
uint8_t v_res_1947_; lean_object* v_r_1948_; 
v_res_1947_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_1945_, v_x_1946_);
lean_dec(v_x_1946_);
lean_dec_ref(v_a_1945_);
v_r_1948_ = lean_box(v_res_1947_);
return v_r_1948_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(lean_object* v_x_1949_, lean_object* v_x_1950_){
_start:
{
if (lean_obj_tag(v_x_1950_) == 0)
{
return v_x_1949_;
}
else
{
lean_object* v_key_1951_; lean_object* v_value_1952_; lean_object* v_tail_1953_; lean_object* v___x_1955_; uint8_t v_isShared_1956_; uint8_t v_isSharedCheck_1976_; 
v_key_1951_ = lean_ctor_get(v_x_1950_, 0);
v_value_1952_ = lean_ctor_get(v_x_1950_, 1);
v_tail_1953_ = lean_ctor_get(v_x_1950_, 2);
v_isSharedCheck_1976_ = !lean_is_exclusive(v_x_1950_);
if (v_isSharedCheck_1976_ == 0)
{
v___x_1955_ = v_x_1950_;
v_isShared_1956_ = v_isSharedCheck_1976_;
goto v_resetjp_1954_;
}
else
{
lean_inc(v_tail_1953_);
lean_inc(v_value_1952_);
lean_inc(v_key_1951_);
lean_dec(v_x_1950_);
v___x_1955_ = lean_box(0);
v_isShared_1956_ = v_isSharedCheck_1976_;
goto v_resetjp_1954_;
}
v_resetjp_1954_:
{
lean_object* v___x_1957_; uint64_t v___x_1958_; uint64_t v___x_1959_; uint64_t v___x_1960_; uint64_t v_fold_1961_; uint64_t v___x_1962_; uint64_t v___x_1963_; uint64_t v___x_1964_; size_t v___x_1965_; size_t v___x_1966_; size_t v___x_1967_; size_t v___x_1968_; size_t v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1972_; 
v___x_1957_ = lean_array_get_size(v_x_1949_);
v___x_1958_ = l_Lean_Expr_hash(v_key_1951_);
v___x_1959_ = 32ULL;
v___x_1960_ = lean_uint64_shift_right(v___x_1958_, v___x_1959_);
v_fold_1961_ = lean_uint64_xor(v___x_1958_, v___x_1960_);
v___x_1962_ = 16ULL;
v___x_1963_ = lean_uint64_shift_right(v_fold_1961_, v___x_1962_);
v___x_1964_ = lean_uint64_xor(v_fold_1961_, v___x_1963_);
v___x_1965_ = lean_uint64_to_usize(v___x_1964_);
v___x_1966_ = lean_usize_of_nat(v___x_1957_);
v___x_1967_ = ((size_t)1ULL);
v___x_1968_ = lean_usize_sub(v___x_1966_, v___x_1967_);
v___x_1969_ = lean_usize_land(v___x_1965_, v___x_1968_);
v___x_1970_ = lean_array_uget_borrowed(v_x_1949_, v___x_1969_);
lean_inc(v___x_1970_);
if (v_isShared_1956_ == 0)
{
lean_ctor_set(v___x_1955_, 2, v___x_1970_);
v___x_1972_ = v___x_1955_;
goto v_reusejp_1971_;
}
else
{
lean_object* v_reuseFailAlloc_1975_; 
v_reuseFailAlloc_1975_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1975_, 0, v_key_1951_);
lean_ctor_set(v_reuseFailAlloc_1975_, 1, v_value_1952_);
lean_ctor_set(v_reuseFailAlloc_1975_, 2, v___x_1970_);
v___x_1972_ = v_reuseFailAlloc_1975_;
goto v_reusejp_1971_;
}
v_reusejp_1971_:
{
lean_object* v___x_1973_; 
v___x_1973_ = lean_array_uset(v_x_1949_, v___x_1969_, v___x_1972_);
v_x_1949_ = v___x_1973_;
v_x_1950_ = v_tail_1953_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(lean_object* v_i_1977_, lean_object* v_source_1978_, lean_object* v_target_1979_){
_start:
{
lean_object* v___x_1980_; uint8_t v___x_1981_; 
v___x_1980_ = lean_array_get_size(v_source_1978_);
v___x_1981_ = lean_nat_dec_lt(v_i_1977_, v___x_1980_);
if (v___x_1981_ == 0)
{
lean_dec_ref(v_source_1978_);
lean_dec(v_i_1977_);
return v_target_1979_;
}
else
{
lean_object* v_es_1982_; lean_object* v___x_1983_; lean_object* v_source_1984_; lean_object* v_target_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
v_es_1982_ = lean_array_fget(v_source_1978_, v_i_1977_);
v___x_1983_ = lean_box(0);
v_source_1984_ = lean_array_fset(v_source_1978_, v_i_1977_, v___x_1983_);
v_target_1985_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_target_1979_, v_es_1982_);
v___x_1986_ = lean_unsigned_to_nat(1u);
v___x_1987_ = lean_nat_add(v_i_1977_, v___x_1986_);
lean_dec(v_i_1977_);
v_i_1977_ = v___x_1987_;
v_source_1978_ = v_source_1984_;
v_target_1979_ = v_target_1985_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(lean_object* v_data_1989_){
_start:
{
lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v_nbuckets_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; 
v___x_1990_ = lean_array_get_size(v_data_1989_);
v___x_1991_ = lean_unsigned_to_nat(2u);
v_nbuckets_1992_ = lean_nat_mul(v___x_1990_, v___x_1991_);
v___x_1993_ = lean_unsigned_to_nat(0u);
v___x_1994_ = lean_box(0);
v___x_1995_ = lean_mk_array(v_nbuckets_1992_, v___x_1994_);
v___x_1996_ = lean_array_propagate_mark(v_data_1989_, v___x_1995_);
v___x_1997_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v___x_1993_, v_data_1989_, v___x_1996_);
return v___x_1997_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(lean_object* v_a_1998_, lean_object* v_b_1999_, lean_object* v_x_2000_){
_start:
{
if (lean_obj_tag(v_x_2000_) == 0)
{
lean_dec(v_b_1999_);
lean_dec_ref(v_a_1998_);
return v_x_2000_;
}
else
{
lean_object* v_key_2001_; lean_object* v_value_2002_; lean_object* v_tail_2003_; lean_object* v___x_2005_; uint8_t v_isShared_2006_; uint8_t v_isSharedCheck_2015_; 
v_key_2001_ = lean_ctor_get(v_x_2000_, 0);
v_value_2002_ = lean_ctor_get(v_x_2000_, 1);
v_tail_2003_ = lean_ctor_get(v_x_2000_, 2);
v_isSharedCheck_2015_ = !lean_is_exclusive(v_x_2000_);
if (v_isSharedCheck_2015_ == 0)
{
v___x_2005_ = v_x_2000_;
v_isShared_2006_ = v_isSharedCheck_2015_;
goto v_resetjp_2004_;
}
else
{
lean_inc(v_tail_2003_);
lean_inc(v_value_2002_);
lean_inc(v_key_2001_);
lean_dec(v_x_2000_);
v___x_2005_ = lean_box(0);
v_isShared_2006_ = v_isSharedCheck_2015_;
goto v_resetjp_2004_;
}
v_resetjp_2004_:
{
uint8_t v___x_2007_; 
v___x_2007_ = lean_expr_eqv(v_key_2001_, v_a_1998_);
if (v___x_2007_ == 0)
{
lean_object* v___x_2008_; lean_object* v___x_2010_; 
v___x_2008_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_1998_, v_b_1999_, v_tail_2003_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 2, v___x_2008_);
v___x_2010_ = v___x_2005_;
goto v_reusejp_2009_;
}
else
{
lean_object* v_reuseFailAlloc_2011_; 
v_reuseFailAlloc_2011_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2011_, 0, v_key_2001_);
lean_ctor_set(v_reuseFailAlloc_2011_, 1, v_value_2002_);
lean_ctor_set(v_reuseFailAlloc_2011_, 2, v___x_2008_);
v___x_2010_ = v_reuseFailAlloc_2011_;
goto v_reusejp_2009_;
}
v_reusejp_2009_:
{
return v___x_2010_;
}
}
else
{
lean_object* v___x_2013_; 
lean_dec(v_value_2002_);
lean_dec(v_key_2001_);
if (v_isShared_2006_ == 0)
{
lean_ctor_set(v___x_2005_, 1, v_b_1999_);
lean_ctor_set(v___x_2005_, 0, v_a_1998_);
v___x_2013_ = v___x_2005_;
goto v_reusejp_2012_;
}
else
{
lean_object* v_reuseFailAlloc_2014_; 
v_reuseFailAlloc_2014_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2014_, 0, v_a_1998_);
lean_ctor_set(v_reuseFailAlloc_2014_, 1, v_b_1999_);
lean_ctor_set(v_reuseFailAlloc_2014_, 2, v_tail_2003_);
v___x_2013_ = v_reuseFailAlloc_2014_;
goto v_reusejp_2012_;
}
v_reusejp_2012_:
{
return v___x_2013_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(lean_object* v_m_2016_, lean_object* v_a_2017_, lean_object* v_b_2018_){
_start:
{
lean_object* v_size_2019_; lean_object* v_buckets_2020_; lean_object* v___x_2022_; uint8_t v_isShared_2023_; uint8_t v_isSharedCheck_2063_; 
v_size_2019_ = lean_ctor_get(v_m_2016_, 0);
v_buckets_2020_ = lean_ctor_get(v_m_2016_, 1);
v_isSharedCheck_2063_ = !lean_is_exclusive(v_m_2016_);
if (v_isSharedCheck_2063_ == 0)
{
v___x_2022_ = v_m_2016_;
v_isShared_2023_ = v_isSharedCheck_2063_;
goto v_resetjp_2021_;
}
else
{
lean_inc(v_buckets_2020_);
lean_inc(v_size_2019_);
lean_dec(v_m_2016_);
v___x_2022_ = lean_box(0);
v_isShared_2023_ = v_isSharedCheck_2063_;
goto v_resetjp_2021_;
}
v_resetjp_2021_:
{
lean_object* v___x_2024_; uint64_t v___x_2025_; uint64_t v___x_2026_; uint64_t v___x_2027_; uint64_t v_fold_2028_; uint64_t v___x_2029_; uint64_t v___x_2030_; uint64_t v___x_2031_; size_t v___x_2032_; size_t v___x_2033_; size_t v___x_2034_; size_t v___x_2035_; size_t v___x_2036_; lean_object* v_bkt_2037_; uint8_t v___x_2038_; 
v___x_2024_ = lean_array_get_size(v_buckets_2020_);
v___x_2025_ = l_Lean_Expr_hash(v_a_2017_);
v___x_2026_ = 32ULL;
v___x_2027_ = lean_uint64_shift_right(v___x_2025_, v___x_2026_);
v_fold_2028_ = lean_uint64_xor(v___x_2025_, v___x_2027_);
v___x_2029_ = 16ULL;
v___x_2030_ = lean_uint64_shift_right(v_fold_2028_, v___x_2029_);
v___x_2031_ = lean_uint64_xor(v_fold_2028_, v___x_2030_);
v___x_2032_ = lean_uint64_to_usize(v___x_2031_);
v___x_2033_ = lean_usize_of_nat(v___x_2024_);
v___x_2034_ = ((size_t)1ULL);
v___x_2035_ = lean_usize_sub(v___x_2033_, v___x_2034_);
v___x_2036_ = lean_usize_land(v___x_2032_, v___x_2035_);
v_bkt_2037_ = lean_array_uget_borrowed(v_buckets_2020_, v___x_2036_);
v___x_2038_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_2017_, v_bkt_2037_);
if (v___x_2038_ == 0)
{
lean_object* v___x_2039_; lean_object* v_size_x27_2040_; lean_object* v___x_2041_; lean_object* v_buckets_x27_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; uint8_t v___x_2048_; 
v___x_2039_ = lean_unsigned_to_nat(1u);
v_size_x27_2040_ = lean_nat_add(v_size_2019_, v___x_2039_);
lean_dec(v_size_2019_);
lean_inc(v_bkt_2037_);
v___x_2041_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_2041_, 0, v_a_2017_);
lean_ctor_set(v___x_2041_, 1, v_b_2018_);
lean_ctor_set(v___x_2041_, 2, v_bkt_2037_);
v_buckets_x27_2042_ = lean_array_uset(v_buckets_2020_, v___x_2036_, v___x_2041_);
v___x_2043_ = lean_unsigned_to_nat(4u);
v___x_2044_ = lean_nat_mul(v_size_x27_2040_, v___x_2043_);
v___x_2045_ = lean_unsigned_to_nat(3u);
v___x_2046_ = lean_nat_div(v___x_2044_, v___x_2045_);
lean_dec(v___x_2044_);
v___x_2047_ = lean_array_get_size(v_buckets_x27_2042_);
v___x_2048_ = lean_nat_dec_le(v___x_2046_, v___x_2047_);
lean_dec(v___x_2046_);
if (v___x_2048_ == 0)
{
lean_object* v_val_2049_; lean_object* v___x_2051_; 
v_val_2049_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_buckets_x27_2042_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 1, v_val_2049_);
lean_ctor_set(v___x_2022_, 0, v_size_x27_2040_);
v___x_2051_ = v___x_2022_;
goto v_reusejp_2050_;
}
else
{
lean_object* v_reuseFailAlloc_2052_; 
v_reuseFailAlloc_2052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2052_, 0, v_size_x27_2040_);
lean_ctor_set(v_reuseFailAlloc_2052_, 1, v_val_2049_);
v___x_2051_ = v_reuseFailAlloc_2052_;
goto v_reusejp_2050_;
}
v_reusejp_2050_:
{
return v___x_2051_;
}
}
else
{
lean_object* v___x_2054_; 
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 1, v_buckets_x27_2042_);
lean_ctor_set(v___x_2022_, 0, v_size_x27_2040_);
v___x_2054_ = v___x_2022_;
goto v_reusejp_2053_;
}
else
{
lean_object* v_reuseFailAlloc_2055_; 
v_reuseFailAlloc_2055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2055_, 0, v_size_x27_2040_);
lean_ctor_set(v_reuseFailAlloc_2055_, 1, v_buckets_x27_2042_);
v___x_2054_ = v_reuseFailAlloc_2055_;
goto v_reusejp_2053_;
}
v_reusejp_2053_:
{
return v___x_2054_;
}
}
}
else
{
lean_object* v___x_2056_; lean_object* v_buckets_x27_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2061_; 
lean_inc(v_bkt_2037_);
v___x_2056_ = lean_box(0);
v_buckets_x27_2057_ = lean_array_uset(v_buckets_2020_, v___x_2036_, v___x_2056_);
v___x_2058_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_2017_, v_b_2018_, v_bkt_2037_);
v___x_2059_ = lean_array_uset(v_buckets_x27_2057_, v___x_2036_, v___x_2058_);
if (v_isShared_2023_ == 0)
{
lean_ctor_set(v___x_2022_, 1, v___x_2059_);
v___x_2061_ = v___x_2022_;
goto v_reusejp_2060_;
}
else
{
lean_object* v_reuseFailAlloc_2062_; 
v_reuseFailAlloc_2062_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2062_, 0, v_size_2019_);
lean_ctor_set(v_reuseFailAlloc_2062_, 1, v___x_2059_);
v___x_2061_ = v_reuseFailAlloc_2062_;
goto v_reusejp_2060_;
}
v_reusejp_2060_:
{
return v___x_2061_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(lean_object* v_msgData_2064_, lean_object* v___y_2065_, lean_object* v___y_2066_, lean_object* v___y_2067_, lean_object* v___y_2068_){
_start:
{
lean_object* v___x_2070_; lean_object* v_env_2071_; uint8_t v___x_2072_; lean_object* v_env_2073_; lean_object* v___x_2074_; lean_object* v_toCold_2075_; lean_object* v_mctx_2076_; lean_object* v_lctx_2077_; lean_object* v_options_2078_; lean_object* v___x_2079_; lean_object* v___x_2080_; lean_object* v___x_2081_; 
v___x_2070_ = lean_st_ref_get(v___y_2068_);
v_env_2071_ = lean_ctor_get(v___x_2070_, 0);
lean_inc_ref(v_env_2071_);
lean_dec(v___x_2070_);
v___x_2072_ = 0;
v_env_2073_ = l_Lean_Environment_setRecordingDeps(v_env_2071_, v___x_2072_);
v___x_2074_ = lean_st_ref_get(v___y_2066_);
v_toCold_2075_ = lean_ctor_get(v___y_2067_, 0);
v_mctx_2076_ = lean_ctor_get(v___x_2074_, 0);
lean_inc_ref(v_mctx_2076_);
lean_dec(v___x_2074_);
v_lctx_2077_ = lean_ctor_get(v___y_2065_, 2);
v_options_2078_ = lean_ctor_get(v_toCold_2075_, 2);
lean_inc_ref(v_options_2078_);
lean_inc_ref(v_lctx_2077_);
v___x_2079_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_2079_, 0, v_env_2073_);
lean_ctor_set(v___x_2079_, 1, v_mctx_2076_);
lean_ctor_set(v___x_2079_, 2, v_lctx_2077_);
lean_ctor_set(v___x_2079_, 3, v_options_2078_);
v___x_2080_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_2080_, 0, v___x_2079_);
lean_ctor_set(v___x_2080_, 1, v_msgData_2064_);
v___x_2081_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2081_, 0, v___x_2080_);
return v___x_2081_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8___boxed(lean_object* v_msgData_2082_, lean_object* v___y_2083_, lean_object* v___y_2084_, lean_object* v___y_2085_, lean_object* v___y_2086_, lean_object* v___y_2087_){
_start:
{
lean_object* v_res_2088_; 
v_res_2088_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msgData_2082_, v___y_2083_, v___y_2084_, v___y_2085_, v___y_2086_);
lean_dec(v___y_2086_);
lean_dec_ref(v___y_2085_);
lean_dec(v___y_2084_);
lean_dec_ref(v___y_2083_);
return v_res_2088_;
}
}
static double _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0(void){
_start:
{
lean_object* v___x_2089_; double v___x_2090_; 
v___x_2089_ = lean_unsigned_to_nat(0u);
v___x_2090_ = lean_float_of_nat(v___x_2089_);
return v___x_2090_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(lean_object* v_cls_2094_, lean_object* v_msg_2095_, lean_object* v___y_2096_, lean_object* v___y_2097_, lean_object* v___y_2098_, lean_object* v___y_2099_){
_start:
{
lean_object* v_ref_2101_; lean_object* v___x_2102_; lean_object* v_a_2103_; lean_object* v___x_2105_; uint8_t v_isShared_2106_; uint8_t v_isSharedCheck_2148_; 
v_ref_2101_ = lean_ctor_get(v___y_2098_, 2);
v___x_2102_ = l_Lean_addMessageContextFull___at___00Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4_spec__8(v_msg_2095_, v___y_2096_, v___y_2097_, v___y_2098_, v___y_2099_);
v_a_2103_ = lean_ctor_get(v___x_2102_, 0);
v_isSharedCheck_2148_ = !lean_is_exclusive(v___x_2102_);
if (v_isSharedCheck_2148_ == 0)
{
v___x_2105_ = v___x_2102_;
v_isShared_2106_ = v_isSharedCheck_2148_;
goto v_resetjp_2104_;
}
else
{
lean_inc(v_a_2103_);
lean_dec(v___x_2102_);
v___x_2105_ = lean_box(0);
v_isShared_2106_ = v_isSharedCheck_2148_;
goto v_resetjp_2104_;
}
v_resetjp_2104_:
{
lean_object* v___x_2107_; lean_object* v_traceState_2108_; lean_object* v_env_2109_; lean_object* v_nextMacroScope_2110_; lean_object* v_ngen_2111_; lean_object* v_auxDeclNGen_2112_; lean_object* v_cache_2113_; lean_object* v_recordedDeps_2114_; lean_object* v_messages_2115_; lean_object* v_infoState_2116_; lean_object* v_snapshotTasks_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2147_; 
v___x_2107_ = lean_st_ref_take(v___y_2099_);
v_traceState_2108_ = lean_ctor_get(v___x_2107_, 4);
v_env_2109_ = lean_ctor_get(v___x_2107_, 0);
v_nextMacroScope_2110_ = lean_ctor_get(v___x_2107_, 1);
v_ngen_2111_ = lean_ctor_get(v___x_2107_, 2);
v_auxDeclNGen_2112_ = lean_ctor_get(v___x_2107_, 3);
v_cache_2113_ = lean_ctor_get(v___x_2107_, 5);
v_recordedDeps_2114_ = lean_ctor_get(v___x_2107_, 6);
v_messages_2115_ = lean_ctor_get(v___x_2107_, 7);
v_infoState_2116_ = lean_ctor_get(v___x_2107_, 8);
v_snapshotTasks_2117_ = lean_ctor_get(v___x_2107_, 9);
v_isSharedCheck_2147_ = !lean_is_exclusive(v___x_2107_);
if (v_isSharedCheck_2147_ == 0)
{
v___x_2119_ = v___x_2107_;
v_isShared_2120_ = v_isSharedCheck_2147_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_snapshotTasks_2117_);
lean_inc(v_infoState_2116_);
lean_inc(v_messages_2115_);
lean_inc(v_recordedDeps_2114_);
lean_inc(v_cache_2113_);
lean_inc(v_traceState_2108_);
lean_inc(v_auxDeclNGen_2112_);
lean_inc(v_ngen_2111_);
lean_inc(v_nextMacroScope_2110_);
lean_inc(v_env_2109_);
lean_dec(v___x_2107_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2147_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
uint64_t v_tid_2121_; lean_object* v_traces_2122_; lean_object* v___x_2124_; uint8_t v_isShared_2125_; uint8_t v_isSharedCheck_2146_; 
v_tid_2121_ = lean_ctor_get_uint64(v_traceState_2108_, sizeof(void*)*1);
v_traces_2122_ = lean_ctor_get(v_traceState_2108_, 0);
v_isSharedCheck_2146_ = !lean_is_exclusive(v_traceState_2108_);
if (v_isSharedCheck_2146_ == 0)
{
v___x_2124_ = v_traceState_2108_;
v_isShared_2125_ = v_isSharedCheck_2146_;
goto v_resetjp_2123_;
}
else
{
lean_inc(v_traces_2122_);
lean_dec(v_traceState_2108_);
v___x_2124_ = lean_box(0);
v_isShared_2125_ = v_isSharedCheck_2146_;
goto v_resetjp_2123_;
}
v_resetjp_2123_:
{
lean_object* v___x_2126_; lean_object* v___x_2127_; double v___x_2128_; uint8_t v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; lean_object* v___x_2135_; lean_object* v___x_2137_; 
v___x_2126_ = lean_box(0);
v___x_2127_ = lean_box(0);
v___x_2128_ = lean_float_once(&l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0, &l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0_once, _init_l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__0);
v___x_2129_ = 0;
v___x_2130_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__1));
v___x_2131_ = lean_alloc_ctor(0, 3, 17);
lean_ctor_set(v___x_2131_, 0, v_cls_2094_);
lean_ctor_set(v___x_2131_, 1, v___x_2127_);
lean_ctor_set(v___x_2131_, 2, v___x_2130_);
lean_ctor_set_float(v___x_2131_, sizeof(void*)*3, v___x_2128_);
lean_ctor_set_float(v___x_2131_, sizeof(void*)*3 + 8, v___x_2128_);
lean_ctor_set_uint8(v___x_2131_, sizeof(void*)*3 + 16, v___x_2129_);
v___x_2132_ = ((lean_object*)(l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___closed__2));
v___x_2133_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2131_);
lean_ctor_set(v___x_2133_, 1, v_a_2103_);
lean_ctor_set(v___x_2133_, 2, v___x_2132_);
lean_inc(v_ref_2101_);
v___x_2134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2134_, 0, v_ref_2101_);
lean_ctor_set(v___x_2134_, 1, v___x_2133_);
v___x_2135_ = l_Lean_PersistentArray_push___redArg(v_traces_2122_, v___x_2134_);
if (v_isShared_2125_ == 0)
{
lean_ctor_set(v___x_2124_, 0, v___x_2135_);
v___x_2137_ = v___x_2124_;
goto v_reusejp_2136_;
}
else
{
lean_object* v_reuseFailAlloc_2145_; 
v_reuseFailAlloc_2145_ = lean_alloc_ctor(0, 1, 8);
lean_ctor_set(v_reuseFailAlloc_2145_, 0, v___x_2135_);
lean_ctor_set_uint64(v_reuseFailAlloc_2145_, sizeof(void*)*1, v_tid_2121_);
v___x_2137_ = v_reuseFailAlloc_2145_;
goto v_reusejp_2136_;
}
v_reusejp_2136_:
{
lean_object* v___x_2139_; 
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 4, v___x_2137_);
v___x_2139_ = v___x_2119_;
goto v_reusejp_2138_;
}
else
{
lean_object* v_reuseFailAlloc_2144_; 
v_reuseFailAlloc_2144_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2144_, 0, v_env_2109_);
lean_ctor_set(v_reuseFailAlloc_2144_, 1, v_nextMacroScope_2110_);
lean_ctor_set(v_reuseFailAlloc_2144_, 2, v_ngen_2111_);
lean_ctor_set(v_reuseFailAlloc_2144_, 3, v_auxDeclNGen_2112_);
lean_ctor_set(v_reuseFailAlloc_2144_, 4, v___x_2137_);
lean_ctor_set(v_reuseFailAlloc_2144_, 5, v_cache_2113_);
lean_ctor_set(v_reuseFailAlloc_2144_, 6, v_recordedDeps_2114_);
lean_ctor_set(v_reuseFailAlloc_2144_, 7, v_messages_2115_);
lean_ctor_set(v_reuseFailAlloc_2144_, 8, v_infoState_2116_);
lean_ctor_set(v_reuseFailAlloc_2144_, 9, v_snapshotTasks_2117_);
v___x_2139_ = v_reuseFailAlloc_2144_;
goto v_reusejp_2138_;
}
v_reusejp_2138_:
{
lean_object* v___x_2140_; lean_object* v___x_2142_; 
v___x_2140_ = lean_st_ref_put(v___y_2099_, v___x_2139_);
if (v_isShared_2106_ == 0)
{
lean_ctor_set(v___x_2105_, 0, v___x_2126_);
v___x_2142_ = v___x_2105_;
goto v_reusejp_2141_;
}
else
{
lean_object* v_reuseFailAlloc_2143_; 
v_reuseFailAlloc_2143_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2143_, 0, v___x_2126_);
v___x_2142_ = v_reuseFailAlloc_2143_;
goto v_reusejp_2141_;
}
v_reusejp_2141_:
{
return v___x_2142_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg___boxed(lean_object* v_cls_2149_, lean_object* v_msg_2150_, lean_object* v___y_2151_, lean_object* v___y_2152_, lean_object* v___y_2153_, lean_object* v___y_2154_, lean_object* v___y_2155_){
_start:
{
lean_object* v_res_2156_; 
v_res_2156_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2149_, v_msg_2150_, v___y_2151_, v___y_2152_, v___y_2153_, v___y_2154_);
lean_dec(v___y_2154_);
lean_dec_ref(v___y_2153_);
lean_dec(v___y_2152_);
lean_dec_ref(v___y_2151_);
return v_res_2156_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(lean_object* v_x_2157_, lean_object* v_x_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_, lean_object* v___y_2161_, lean_object* v___y_2162_){
_start:
{
if (lean_obj_tag(v_x_2157_) == 0)
{
lean_object* v___x_2164_; lean_object* v___x_2165_; 
v___x_2164_ = l_List_reverse___redArg(v_x_2158_);
v___x_2165_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2164_);
return v___x_2165_;
}
else
{
lean_object* v_head_2166_; lean_object* v_tail_2167_; lean_object* v___x_2169_; uint8_t v_isShared_2170_; uint8_t v_isSharedCheck_2185_; 
v_head_2166_ = lean_ctor_get(v_x_2157_, 0);
v_tail_2167_ = lean_ctor_get(v_x_2157_, 1);
v_isSharedCheck_2185_ = !lean_is_exclusive(v_x_2157_);
if (v_isSharedCheck_2185_ == 0)
{
v___x_2169_ = v_x_2157_;
v_isShared_2170_ = v_isSharedCheck_2185_;
goto v_resetjp_2168_;
}
else
{
lean_inc(v_tail_2167_);
lean_inc(v_head_2166_);
lean_dec(v_x_2157_);
v___x_2169_ = lean_box(0);
v_isShared_2170_ = v_isSharedCheck_2185_;
goto v_resetjp_2168_;
}
v_resetjp_2168_:
{
lean_object* v___x_2171_; 
lean_inc(v___y_2162_);
lean_inc_ref(v___y_2161_);
lean_inc(v___y_2160_);
lean_inc_ref(v___y_2159_);
v___x_2171_ = lean_infer_type(v_head_2166_, v___y_2159_, v___y_2160_, v___y_2161_, v___y_2162_);
if (lean_obj_tag(v___x_2171_) == 0)
{
lean_object* v_a_2172_; lean_object* v___x_2174_; 
v_a_2172_ = lean_ctor_get(v___x_2171_, 0);
lean_inc(v_a_2172_);
lean_dec_ref_known(v___x_2171_, 1);
if (v_isShared_2170_ == 0)
{
lean_ctor_set(v___x_2169_, 1, v_x_2158_);
lean_ctor_set(v___x_2169_, 0, v_a_2172_);
v___x_2174_ = v___x_2169_;
goto v_reusejp_2173_;
}
else
{
lean_object* v_reuseFailAlloc_2176_; 
v_reuseFailAlloc_2176_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2176_, 0, v_a_2172_);
lean_ctor_set(v_reuseFailAlloc_2176_, 1, v_x_2158_);
v___x_2174_ = v_reuseFailAlloc_2176_;
goto v_reusejp_2173_;
}
v_reusejp_2173_:
{
v_x_2157_ = v_tail_2167_;
v_x_2158_ = v___x_2174_;
goto _start;
}
}
else
{
lean_object* v_a_2177_; lean_object* v___x_2179_; uint8_t v_isShared_2180_; uint8_t v_isSharedCheck_2184_; 
lean_del_object(v___x_2169_);
lean_dec(v_tail_2167_);
lean_dec(v_x_2158_);
v_a_2177_ = lean_ctor_get(v___x_2171_, 0);
v_isSharedCheck_2184_ = !lean_is_exclusive(v___x_2171_);
if (v_isSharedCheck_2184_ == 0)
{
v___x_2179_ = v___x_2171_;
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
else
{
lean_inc(v_a_2177_);
lean_dec(v___x_2171_);
v___x_2179_ = lean_box(0);
v_isShared_2180_ = v_isSharedCheck_2184_;
goto v_resetjp_2178_;
}
v_resetjp_2178_:
{
lean_object* v___x_2182_; 
if (v_isShared_2180_ == 0)
{
v___x_2182_ = v___x_2179_;
goto v_reusejp_2181_;
}
else
{
lean_object* v_reuseFailAlloc_2183_; 
v_reuseFailAlloc_2183_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2183_, 0, v_a_2177_);
v___x_2182_ = v_reuseFailAlloc_2183_;
goto v_reusejp_2181_;
}
v_reusejp_2181_:
{
return v___x_2182_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg___boxed(lean_object* v_x_2186_, lean_object* v_x_2187_, lean_object* v___y_2188_, lean_object* v___y_2189_, lean_object* v___y_2190_, lean_object* v___y_2191_, lean_object* v___y_2192_){
_start:
{
lean_object* v_res_2193_; 
v_res_2193_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2186_, v_x_2187_, v___y_2188_, v___y_2189_, v___y_2190_, v___y_2191_);
lean_dec(v___y_2191_);
lean_dec_ref(v___y_2190_);
lean_dec(v___y_2189_);
lean_dec_ref(v___y_2188_);
return v_res_2193_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(lean_object* v_a_2194_, lean_object* v_a_2195_){
_start:
{
if (lean_obj_tag(v_a_2194_) == 0)
{
lean_object* v___x_2196_; 
v___x_2196_ = l_List_reverse___redArg(v_a_2195_);
return v___x_2196_;
}
else
{
lean_object* v_head_2197_; lean_object* v_tail_2198_; lean_object* v___x_2200_; uint8_t v_isShared_2201_; uint8_t v_isSharedCheck_2207_; 
v_head_2197_ = lean_ctor_get(v_a_2194_, 0);
v_tail_2198_ = lean_ctor_get(v_a_2194_, 1);
v_isSharedCheck_2207_ = !lean_is_exclusive(v_a_2194_);
if (v_isSharedCheck_2207_ == 0)
{
v___x_2200_ = v_a_2194_;
v_isShared_2201_ = v_isSharedCheck_2207_;
goto v_resetjp_2199_;
}
else
{
lean_inc(v_tail_2198_);
lean_inc(v_head_2197_);
lean_dec(v_a_2194_);
v___x_2200_ = lean_box(0);
v_isShared_2201_ = v_isSharedCheck_2207_;
goto v_resetjp_2199_;
}
v_resetjp_2199_:
{
lean_object* v___x_2202_; lean_object* v___x_2204_; 
v___x_2202_ = l_Lean_MessageData_ofExpr(v_head_2197_);
if (v_isShared_2201_ == 0)
{
lean_ctor_set(v___x_2200_, 1, v_a_2195_);
lean_ctor_set(v___x_2200_, 0, v___x_2202_);
v___x_2204_ = v___x_2200_;
goto v_reusejp_2203_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v___x_2202_);
lean_ctor_set(v_reuseFailAlloc_2206_, 1, v_a_2195_);
v___x_2204_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2203_;
}
v_reusejp_2203_:
{
v_a_2194_ = v_tail_2198_;
v_a_2195_ = v___x_2204_;
goto _start;
}
}
}
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4(void){
_start:
{
lean_object* v___x_2214_; lean_object* v___x_2215_; lean_object* v___x_2216_; 
v___x_2214_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
v___x_2215_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__3));
v___x_2216_ = l_Lean_Name_append(v___x_2215_, v___x_2214_);
return v___x_2216_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6(void){
_start:
{
lean_object* v___x_2218_; lean_object* v___x_2219_; 
v___x_2218_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__5));
v___x_2219_ = l_Lean_stringToMessageData(v___x_2218_);
return v___x_2219_;
}
}
static lean_object* _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8(void){
_start:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; 
v___x_2221_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__7));
v___x_2222_ = l_Lean_stringToMessageData(v___x_2221_);
return v___x_2222_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup(lean_object* v_e_2223_, lean_object* v_a_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_, uint8_t v_a_2227_, lean_object* v_a_2228_, lean_object* v_a_2229_, lean_object* v_a_2230_, lean_object* v_a_2231_, lean_object* v_a_2232_){
_start:
{
lean_object* v___x_2234_; lean_object* v___x_2235_; 
v___x_2234_ = lean_st_ref_get(v_a_2225_);
v___x_2235_ = l_Lean_Meta_Canonicalizer_canon(v_e_2223_, v_a_2227_, v_a_2228_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
if (lean_obj_tag(v___x_2235_) == 0)
{
lean_object* v_a_2236_; lean_object* v___x_2238_; uint8_t v_isShared_2239_; uint8_t v_isSharedCheck_2334_; 
v_a_2236_ = lean_ctor_get(v___x_2235_, 0);
v_isSharedCheck_2334_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2334_ == 0)
{
v___x_2238_ = v___x_2235_;
v_isShared_2239_ = v_isSharedCheck_2334_;
goto v_resetjp_2237_;
}
else
{
lean_inc(v_a_2236_);
lean_dec(v___x_2235_);
v___x_2238_ = lean_box(0);
v_isShared_2239_ = v_isSharedCheck_2334_;
goto v_resetjp_2237_;
}
v_resetjp_2237_:
{
lean_object* v___y_2241_; lean_object* v___y_2242_; lean_object* v___x_2252_; 
v___x_2252_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v___x_2234_, v_a_2236_);
lean_dec(v___x_2234_);
if (lean_obj_tag(v___x_2252_) == 0)
{
lean_object* v_toCold_2253_; lean_object* v_options_2254_; lean_object* v_inheritedTraceOptions_2255_; uint8_t v_hasTrace_2256_; lean_object* v___x_2257_; lean_object* v___y_2259_; lean_object* v___y_2260_; lean_object* v___y_2261_; uint8_t v___y_2262_; lean_object* v___y_2263_; lean_object* v___y_2264_; lean_object* v___y_2265_; lean_object* v___y_2266_; lean_object* v___y_2267_; 
v_toCold_2253_ = lean_ctor_get(v_a_2231_, 0);
v_options_2254_ = lean_ctor_get(v_toCold_2253_, 2);
v_inheritedTraceOptions_2255_ = lean_ctor_get(v_toCold_2253_, 11);
v_hasTrace_2256_ = lean_ctor_get_uint8(v_options_2254_, sizeof(void*)*1);
v___x_2257_ = ((lean_object*)(l_Lean_Elab_Tactic_Omega_lookup___closed__1));
if (v_hasTrace_2256_ == 0)
{
v___y_2259_ = v_a_2224_;
v___y_2260_ = v_a_2225_;
v___y_2261_ = v_a_2226_;
v___y_2262_ = v_a_2227_;
v___y_2263_ = v_a_2228_;
v___y_2264_ = v_a_2229_;
v___y_2265_ = v_a_2230_;
v___y_2266_ = v_a_2231_;
v___y_2267_ = v_a_2232_;
goto v___jp_2258_;
}
else
{
lean_object* v___x_2310_; uint8_t v___x_2311_; 
v___x_2310_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2311_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2255_, v_options_2254_, v___x_2310_);
if (v___x_2311_ == 0)
{
v___y_2259_ = v_a_2224_;
v___y_2260_ = v_a_2225_;
v___y_2261_ = v_a_2226_;
v___y_2262_ = v_a_2227_;
v___y_2263_ = v_a_2228_;
v___y_2264_ = v_a_2229_;
v___y_2265_ = v_a_2230_;
v___y_2266_ = v_a_2231_;
v___y_2267_ = v_a_2232_;
goto v___jp_2258_;
}
else
{
lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; 
v___x_2312_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__8, &l_Lean_Elab_Tactic_Omega_lookup___closed__8_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__8);
lean_inc(v_a_2236_);
v___x_2313_ = l_Lean_MessageData_ofExpr(v_a_2236_);
v___x_2314_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2314_, 0, v___x_2312_);
lean_ctor_set(v___x_2314_, 1, v___x_2313_);
v___x_2315_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2257_, v___x_2314_, v_a_2229_, v_a_2230_, v_a_2231_, v_a_2232_);
if (lean_obj_tag(v___x_2315_) == 0)
{
lean_dec_ref_known(v___x_2315_, 1);
v___y_2259_ = v_a_2224_;
v___y_2260_ = v_a_2225_;
v___y_2261_ = v_a_2226_;
v___y_2262_ = v_a_2227_;
v___y_2263_ = v_a_2228_;
v___y_2264_ = v_a_2229_;
v___y_2265_ = v_a_2230_;
v___y_2266_ = v_a_2231_;
v___y_2267_ = v_a_2232_;
goto v___jp_2258_;
}
else
{
lean_object* v_a_2316_; lean_object* v___x_2318_; uint8_t v_isShared_2319_; uint8_t v_isSharedCheck_2323_; 
lean_del_object(v___x_2238_);
lean_dec(v_a_2236_);
v_a_2316_ = lean_ctor_get(v___x_2315_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v___x_2315_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2318_ = v___x_2315_;
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
else
{
lean_inc(v_a_2316_);
lean_dec(v___x_2315_);
v___x_2318_ = lean_box(0);
v_isShared_2319_ = v_isSharedCheck_2323_;
goto v_resetjp_2317_;
}
v_resetjp_2317_:
{
lean_object* v___x_2321_; 
if (v_isShared_2319_ == 0)
{
v___x_2321_ = v___x_2318_;
goto v_reusejp_2320_;
}
else
{
lean_object* v_reuseFailAlloc_2322_; 
v_reuseFailAlloc_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2322_, 0, v_a_2316_);
v___x_2321_ = v_reuseFailAlloc_2322_;
goto v_reusejp_2320_;
}
v_reusejp_2320_:
{
return v___x_2321_;
}
}
}
}
}
v___jp_2258_:
{
lean_object* v___x_2268_; 
lean_inc(v_a_2236_);
v___x_2268_ = l_Lean_Elab_Tactic_Omega_analyzeAtom___redArg(v_a_2236_, v___y_2261_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
if (lean_obj_tag(v___x_2268_) == 0)
{
lean_object* v_toCold_2269_; lean_object* v_options_2270_; uint8_t v_hasTrace_2271_; 
v_toCold_2269_ = lean_ctor_get(v___y_2266_, 0);
v_options_2270_ = lean_ctor_get(v_toCold_2269_, 2);
v_hasTrace_2271_ = lean_ctor_get_uint8(v_options_2270_, sizeof(void*)*1);
if (v_hasTrace_2271_ == 0)
{
lean_object* v_a_2272_; 
v_a_2272_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2272_);
lean_dec_ref_known(v___x_2268_, 1);
v___y_2241_ = v_a_2272_;
v___y_2242_ = v___y_2260_;
goto v___jp_2240_;
}
else
{
lean_object* v_a_2273_; lean_object* v_inheritedTraceOptions_2274_; lean_object* v___x_2275_; uint8_t v___x_2276_; 
v_a_2273_ = lean_ctor_get(v___x_2268_, 0);
lean_inc(v_a_2273_);
lean_dec_ref_known(v___x_2268_, 1);
v_inheritedTraceOptions_2274_ = lean_ctor_get(v_toCold_2269_, 11);
v___x_2275_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__4, &l_Lean_Elab_Tactic_Omega_lookup___closed__4_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__4);
v___x_2276_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_2274_, v_options_2270_, v___x_2275_);
if (v___x_2276_ == 0)
{
v___y_2241_ = v_a_2273_;
v___y_2242_ = v___y_2260_;
goto v___jp_2240_;
}
else
{
uint8_t v___x_2277_; 
v___x_2277_ = l_List_isEmpty___redArg(v_a_2273_);
if (v___x_2277_ == 0)
{
lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2278_ = lean_box(0);
lean_inc(v_a_2273_);
v___x_2279_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_a_2273_, v___x_2278_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
if (lean_obj_tag(v___x_2279_) == 0)
{
lean_object* v_a_2280_; lean_object* v___x_2281_; lean_object* v___x_2282_; lean_object* v___x_2283_; lean_object* v___x_2284_; lean_object* v___x_2285_; 
v_a_2280_ = lean_ctor_get(v___x_2279_, 0);
lean_inc(v_a_2280_);
lean_dec_ref_known(v___x_2279_, 1);
v___x_2281_ = lean_obj_once(&l_Lean_Elab_Tactic_Omega_lookup___closed__6, &l_Lean_Elab_Tactic_Omega_lookup___closed__6_once, _init_l_Lean_Elab_Tactic_Omega_lookup___closed__6);
v___x_2282_ = l_List_mapTR_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__3(v_a_2280_, v___x_2278_);
v___x_2283_ = l_Lean_MessageData_ofList(v___x_2282_);
v___x_2284_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_2284_, 0, v___x_2281_);
lean_ctor_set(v___x_2284_, 1, v___x_2283_);
v___x_2285_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v___x_2257_, v___x_2284_, v___y_2264_, v___y_2265_, v___y_2266_, v___y_2267_);
if (lean_obj_tag(v___x_2285_) == 0)
{
lean_dec_ref_known(v___x_2285_, 1);
v___y_2241_ = v_a_2273_;
v___y_2242_ = v___y_2260_;
goto v___jp_2240_;
}
else
{
lean_object* v_a_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2293_; 
lean_dec(v_a_2273_);
lean_del_object(v___x_2238_);
lean_dec(v_a_2236_);
v_a_2286_ = lean_ctor_get(v___x_2285_, 0);
v_isSharedCheck_2293_ = !lean_is_exclusive(v___x_2285_);
if (v_isSharedCheck_2293_ == 0)
{
v___x_2288_ = v___x_2285_;
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_a_2286_);
lean_dec(v___x_2285_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2293_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2291_; 
if (v_isShared_2289_ == 0)
{
v___x_2291_ = v___x_2288_;
goto v_reusejp_2290_;
}
else
{
lean_object* v_reuseFailAlloc_2292_; 
v_reuseFailAlloc_2292_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2292_, 0, v_a_2286_);
v___x_2291_ = v_reuseFailAlloc_2292_;
goto v_reusejp_2290_;
}
v_reusejp_2290_:
{
return v___x_2291_;
}
}
}
}
else
{
lean_object* v_a_2294_; lean_object* v___x_2296_; uint8_t v_isShared_2297_; uint8_t v_isSharedCheck_2301_; 
lean_dec(v_a_2273_);
lean_del_object(v___x_2238_);
lean_dec(v_a_2236_);
v_a_2294_ = lean_ctor_get(v___x_2279_, 0);
v_isSharedCheck_2301_ = !lean_is_exclusive(v___x_2279_);
if (v_isSharedCheck_2301_ == 0)
{
v___x_2296_ = v___x_2279_;
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
else
{
lean_inc(v_a_2294_);
lean_dec(v___x_2279_);
v___x_2296_ = lean_box(0);
v_isShared_2297_ = v_isSharedCheck_2301_;
goto v_resetjp_2295_;
}
v_resetjp_2295_:
{
lean_object* v___x_2299_; 
if (v_isShared_2297_ == 0)
{
v___x_2299_ = v___x_2296_;
goto v_reusejp_2298_;
}
else
{
lean_object* v_reuseFailAlloc_2300_; 
v_reuseFailAlloc_2300_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2300_, 0, v_a_2294_);
v___x_2299_ = v_reuseFailAlloc_2300_;
goto v_reusejp_2298_;
}
v_reusejp_2298_:
{
return v___x_2299_;
}
}
}
}
else
{
v___y_2241_ = v_a_2273_;
v___y_2242_ = v___y_2260_;
goto v___jp_2240_;
}
}
}
}
else
{
lean_object* v_a_2302_; lean_object* v___x_2304_; uint8_t v_isShared_2305_; uint8_t v_isSharedCheck_2309_; 
lean_del_object(v___x_2238_);
lean_dec(v_a_2236_);
v_a_2302_ = lean_ctor_get(v___x_2268_, 0);
v_isSharedCheck_2309_ = !lean_is_exclusive(v___x_2268_);
if (v_isSharedCheck_2309_ == 0)
{
v___x_2304_ = v___x_2268_;
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
else
{
lean_inc(v_a_2302_);
lean_dec(v___x_2268_);
v___x_2304_ = lean_box(0);
v_isShared_2305_ = v_isSharedCheck_2309_;
goto v_resetjp_2303_;
}
v_resetjp_2303_:
{
lean_object* v___x_2307_; 
if (v_isShared_2305_ == 0)
{
v___x_2307_ = v___x_2304_;
goto v_reusejp_2306_;
}
else
{
lean_object* v_reuseFailAlloc_2308_; 
v_reuseFailAlloc_2308_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2308_, 0, v_a_2302_);
v___x_2307_ = v_reuseFailAlloc_2308_;
goto v_reusejp_2306_;
}
v_reusejp_2306_:
{
return v___x_2307_;
}
}
}
}
}
else
{
lean_object* v_val_2324_; lean_object* v___x_2326_; uint8_t v_isShared_2327_; uint8_t v_isSharedCheck_2333_; 
lean_del_object(v___x_2238_);
lean_dec(v_a_2236_);
v_val_2324_ = lean_ctor_get(v___x_2252_, 0);
v_isSharedCheck_2333_ = !lean_is_exclusive(v___x_2252_);
if (v_isSharedCheck_2333_ == 0)
{
v___x_2326_ = v___x_2252_;
v_isShared_2327_ = v_isSharedCheck_2333_;
goto v_resetjp_2325_;
}
else
{
lean_inc(v_val_2324_);
lean_dec(v___x_2252_);
v___x_2326_ = lean_box(0);
v_isShared_2327_ = v_isSharedCheck_2333_;
goto v_resetjp_2325_;
}
v_resetjp_2325_:
{
lean_object* v___x_2328_; lean_object* v___x_2329_; lean_object* v___x_2331_; 
v___x_2328_ = lean_box(0);
v___x_2329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2329_, 0, v_val_2324_);
lean_ctor_set(v___x_2329_, 1, v___x_2328_);
if (v_isShared_2327_ == 0)
{
lean_ctor_set_tag(v___x_2326_, 0);
lean_ctor_set(v___x_2326_, 0, v___x_2329_);
v___x_2331_ = v___x_2326_;
goto v_reusejp_2330_;
}
else
{
lean_object* v_reuseFailAlloc_2332_; 
v_reuseFailAlloc_2332_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2332_, 0, v___x_2329_);
v___x_2331_ = v_reuseFailAlloc_2332_;
goto v_reusejp_2330_;
}
v_reusejp_2330_:
{
return v___x_2331_;
}
}
}
v___jp_2240_:
{
lean_object* v___x_2243_; lean_object* v_size_2244_; lean_object* v___x_2245_; lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2250_; 
v___x_2243_ = lean_st_ref_take(v___y_2242_);
v_size_2244_ = lean_ctor_get(v___x_2243_, 0);
lean_inc_n(v_size_2244_, 2);
v___x_2245_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v___x_2243_, v_a_2236_, v_size_2244_);
v___x_2246_ = lean_st_ref_put(v___y_2242_, v___x_2245_);
v___x_2247_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2247_, 0, v___y_2241_);
v___x_2248_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2248_, 0, v_size_2244_);
lean_ctor_set(v___x_2248_, 1, v___x_2247_);
if (v_isShared_2239_ == 0)
{
lean_ctor_set(v___x_2238_, 0, v___x_2248_);
v___x_2250_ = v___x_2238_;
goto v_reusejp_2249_;
}
else
{
lean_object* v_reuseFailAlloc_2251_; 
v_reuseFailAlloc_2251_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2251_, 0, v___x_2248_);
v___x_2250_ = v_reuseFailAlloc_2251_;
goto v_reusejp_2249_;
}
v_reusejp_2249_:
{
return v___x_2250_;
}
}
}
}
else
{
lean_object* v_a_2335_; lean_object* v___x_2337_; uint8_t v_isShared_2338_; uint8_t v_isSharedCheck_2342_; 
lean_dec(v___x_2234_);
v_a_2335_ = lean_ctor_get(v___x_2235_, 0);
v_isSharedCheck_2342_ = !lean_is_exclusive(v___x_2235_);
if (v_isSharedCheck_2342_ == 0)
{
v___x_2337_ = v___x_2235_;
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
else
{
lean_inc(v_a_2335_);
lean_dec(v___x_2235_);
v___x_2337_ = lean_box(0);
v_isShared_2338_ = v_isSharedCheck_2342_;
goto v_resetjp_2336_;
}
v_resetjp_2336_:
{
lean_object* v___x_2340_; 
if (v_isShared_2338_ == 0)
{
v___x_2340_ = v___x_2337_;
goto v_reusejp_2339_;
}
else
{
lean_object* v_reuseFailAlloc_2341_; 
v_reuseFailAlloc_2341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2341_, 0, v_a_2335_);
v___x_2340_ = v_reuseFailAlloc_2341_;
goto v_reusejp_2339_;
}
v_reusejp_2339_:
{
return v___x_2340_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Tactic_Omega_lookup___boxed(lean_object* v_e_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_, lean_object* v_a_2346_, lean_object* v_a_2347_, lean_object* v_a_2348_, lean_object* v_a_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_, lean_object* v_a_2352_, lean_object* v_a_2353_){
_start:
{
uint8_t v_a_boxed_2354_; lean_object* v_res_2355_; 
v_a_boxed_2354_ = lean_unbox(v_a_2347_);
v_res_2355_ = l_Lean_Elab_Tactic_Omega_lookup(v_e_2343_, v_a_2344_, v_a_2345_, v_a_2346_, v_a_boxed_2354_, v_a_2348_, v_a_2349_, v_a_2350_, v_a_2351_, v_a_2352_);
lean_dec(v_a_2352_);
lean_dec_ref(v_a_2351_);
lean_dec(v_a_2350_);
lean_dec_ref(v_a_2349_);
lean_dec(v_a_2348_);
lean_dec_ref(v_a_2346_);
lean_dec(v_a_2345_);
lean_dec(v_a_2344_);
return v_res_2355_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(lean_object* v_00_u03b2_2356_, lean_object* v_m_2357_, lean_object* v_a_2358_){
_start:
{
lean_object* v___x_2359_; 
v___x_2359_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___redArg(v_m_2357_, v_a_2358_);
return v___x_2359_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0___boxed(lean_object* v_00_u03b2_2360_, lean_object* v_m_2361_, lean_object* v_a_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0(v_00_u03b2_2360_, v_m_2361_, v_a_2362_);
lean_dec_ref(v_a_2362_);
lean_dec_ref(v_m_2361_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1(lean_object* v_00_u03b2_2364_, lean_object* v_m_2365_, lean_object* v_a_2366_, lean_object* v_b_2367_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = l_Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1___redArg(v_m_2365_, v_a_2366_, v_b_2367_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(lean_object* v_x_2369_, lean_object* v_x_2370_, lean_object* v___y_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, uint8_t v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_, lean_object* v___y_2377_, lean_object* v___y_2378_, lean_object* v___y_2379_){
_start:
{
lean_object* v___x_2381_; 
v___x_2381_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___redArg(v_x_2369_, v_x_2370_, v___y_2376_, v___y_2377_, v___y_2378_, v___y_2379_);
return v___x_2381_;
}
}
LEAN_EXPORT lean_object* l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2___boxed(lean_object* v_x_2382_, lean_object* v_x_2383_, lean_object* v___y_2384_, lean_object* v___y_2385_, lean_object* v___y_2386_, lean_object* v___y_2387_, lean_object* v___y_2388_, lean_object* v___y_2389_, lean_object* v___y_2390_, lean_object* v___y_2391_, lean_object* v___y_2392_, lean_object* v___y_2393_){
_start:
{
uint8_t v___y_36929__boxed_2394_; lean_object* v_res_2395_; 
v___y_36929__boxed_2394_ = lean_unbox(v___y_2387_);
v_res_2395_ = l_List_mapM_loop___at___00Lean_Elab_Tactic_Omega_lookup_spec__2(v_x_2382_, v_x_2383_, v___y_2384_, v___y_2385_, v___y_2386_, v___y_36929__boxed_2394_, v___y_2388_, v___y_2389_, v___y_2390_, v___y_2391_, v___y_2392_);
lean_dec(v___y_2392_);
lean_dec_ref(v___y_2391_);
lean_dec(v___y_2390_);
lean_dec_ref(v___y_2389_);
lean_dec(v___y_2388_);
lean_dec_ref(v___y_2386_);
lean_dec(v___y_2385_);
lean_dec(v___y_2384_);
return v_res_2395_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(lean_object* v_cls_2396_, lean_object* v_msg_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_, uint8_t v___y_2401_, lean_object* v___y_2402_, lean_object* v___y_2403_, lean_object* v___y_2404_, lean_object* v___y_2405_, lean_object* v___y_2406_){
_start:
{
lean_object* v___x_2408_; 
v___x_2408_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___redArg(v_cls_2396_, v_msg_2397_, v___y_2403_, v___y_2404_, v___y_2405_, v___y_2406_);
return v___x_2408_;
}
}
LEAN_EXPORT lean_object* l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4___boxed(lean_object* v_cls_2409_, lean_object* v_msg_2410_, lean_object* v___y_2411_, lean_object* v___y_2412_, lean_object* v___y_2413_, lean_object* v___y_2414_, lean_object* v___y_2415_, lean_object* v___y_2416_, lean_object* v___y_2417_, lean_object* v___y_2418_, lean_object* v___y_2419_, lean_object* v___y_2420_){
_start:
{
uint8_t v___y_36965__boxed_2421_; lean_object* v_res_2422_; 
v___y_36965__boxed_2421_ = lean_unbox(v___y_2414_);
v_res_2422_ = l_Lean_addTrace___at___00Lean_Elab_Tactic_Omega_lookup_spec__4(v_cls_2409_, v_msg_2410_, v___y_2411_, v___y_2412_, v___y_2413_, v___y_36965__boxed_2421_, v___y_2415_, v___y_2416_, v___y_2417_, v___y_2418_, v___y_2419_);
lean_dec(v___y_2419_);
lean_dec_ref(v___y_2418_);
lean_dec(v___y_2417_);
lean_dec_ref(v___y_2416_);
lean_dec(v___y_2415_);
lean_dec_ref(v___y_2413_);
lean_dec(v___y_2412_);
lean_dec(v___y_2411_);
return v_res_2422_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(lean_object* v_00_u03b2_2423_, lean_object* v_a_2424_, lean_object* v_x_2425_){
_start:
{
lean_object* v___x_2426_; 
v___x_2426_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___redArg(v_a_2424_, v_x_2425_);
return v___x_2426_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0___boxed(lean_object* v_00_u03b2_2427_, lean_object* v_a_2428_, lean_object* v_x_2429_){
_start:
{
lean_object* v_res_2430_; 
v_res_2430_ = l_Std_DHashMap_Internal_AssocList_get_x3f___at___00Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___at___00Lean_Elab_Tactic_Omega_lookup_spec__0_spec__0(v_00_u03b2_2427_, v_a_2428_, v_x_2429_);
lean_dec(v_x_2429_);
lean_dec_ref(v_a_2428_);
return v_res_2430_;
}
}
LEAN_EXPORT uint8_t l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(lean_object* v_00_u03b2_2431_, lean_object* v_a_2432_, lean_object* v_x_2433_){
_start:
{
uint8_t v___x_2434_; 
v___x_2434_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___redArg(v_a_2432_, v_x_2433_);
return v___x_2434_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2___boxed(lean_object* v_00_u03b2_2435_, lean_object* v_a_2436_, lean_object* v_x_2437_){
_start:
{
uint8_t v_res_2438_; lean_object* v_r_2439_; 
v_res_2438_ = l_Std_DHashMap_Internal_AssocList_contains___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__2(v_00_u03b2_2435_, v_a_2436_, v_x_2437_);
lean_dec(v_x_2437_);
lean_dec_ref(v_a_2436_);
v_r_2439_ = lean_box(v_res_2438_);
return v_r_2439_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3(lean_object* v_00_u03b2_2440_, lean_object* v_data_2441_){
_start:
{
lean_object* v___x_2442_; 
v___x_2442_ = l_Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3___redArg(v_data_2441_);
return v___x_2442_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4(lean_object* v_00_u03b2_2443_, lean_object* v_a_2444_, lean_object* v_b_2445_, lean_object* v_x_2446_){
_start:
{
lean_object* v___x_2447_; 
v___x_2447_ = l_Std_DHashMap_Internal_AssocList_replace___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__4___redArg(v_a_2444_, v_b_2445_, v_x_2446_);
return v___x_2447_;
}
}
LEAN_EXPORT lean_object* l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4(lean_object* v_00_u03b2_2448_, lean_object* v_i_2449_, lean_object* v_source_2450_, lean_object* v_target_2451_){
_start:
{
lean_object* v___x_2452_; 
v___x_2452_ = l___private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4___redArg(v_i_2449_, v_source_2450_, v_target_2451_);
return v___x_2452_;
}
}
LEAN_EXPORT lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9(lean_object* v_00_u03b2_2453_, lean_object* v_x_2454_, lean_object* v_x_2455_){
_start:
{
lean_object* v___x_2456_; 
v___x_2456_ = l_Std_DHashMap_Internal_AssocList_foldlM___at___00__private_Std_Data_DHashMap_Internal_Defs_0__Std_DHashMap_Internal_Raw_u2080_expand_go___at___00Std_DHashMap_Internal_Raw_u2080_expand___at___00Std_DHashMap_Internal_Raw_u2080_insert___at___00Lean_Elab_Tactic_Omega_lookup_spec__1_spec__3_spec__4_spec__9___redArg(v_x_2454_, v_x_2455_);
return v___x_2456_;
}
}
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_Canonicalizer(uint8_t builtin);
lean_object* runtime_initialize_Init_Omega(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Lean_Meta_Canonicalizer(uint8_t builtin);
lean_object* initialize_Init_Omega(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_Tactic_Omega_OmegaM(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_Canonicalizer(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Omega(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_Tactic_Omega_OmegaM(builtin);
}
#ifdef __cplusplus
}
#endif
