// Lean compiler output
// Module: Lean.Compiler.LCNF.Probing
// Imports: public import Lean.Compiler.LCNF.PhaseExt
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
size_t lean_usize_of_nat(lean_object*);
size_t lean_usize_add(size_t, size_t);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Name_str___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_num___override(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_Name_append(lean_object*, lean_object*);
uint8_t l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_toString___redArg(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_addTrace___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_instMonadEIO___redArg();
lean_object* l_StateRefT_x27_instMonad___redArg(lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadCoreM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instFunctorOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instApplicativeOfMonad___redArg___lam__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_Decl_size(uint8_t, lean_object*);
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_lt(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* l_Nat_nextPowerOfTwo(lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_Std_DHashMap_Internal_AssocList_foldlM___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, size_t, size_t, lean_object*);
lean_object* l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_toSubarray___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Subarray_copy___redArg(lean_object*);
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
extern lean_object* l_Lean_Core_instMonadTraceCoreM;
lean_object* l_StateRefT_x27_lift___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadTraceOfMonadLift___redArg(lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadLift___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Core_instMonadQuotationCoreM;
lean_object* l_StateRefT_x27_instMonadFunctor___aux__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_ReaderT_instMonadFunctor___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_registerTraceClass(lean_object*, uint8_t, lean_object*);
lean_object* l_Nat_add___boxed(lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__0___boxed, .m_arity = 5, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Core_instMonadCoreM___lam__1___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__0___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instMonadCompilerM___lam__1___boxed, .m_arity = 9, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__0_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__1_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__7_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__2_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__3_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__4_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__5_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__8_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__6_value)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*2, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2, .m_arity = 4, .m_num_fixed = 2, .m_objs = {((lean_object*)&l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9_value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__0_value)} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_getJps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_getJps___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_getJps___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t, lean_object*, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Nat_add___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Compiler"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trace"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__1_value),LEAN_SCALAR_PTR_LITERAL(212, 145, 141, 177, 67, 149, 127, 197)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "#"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadLift___redArg___lam__0___boxed, .m_arity = 3, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_lift___boxed, .m_arity = 6, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_ReaderT_instMonadFunctor___redArg___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4_value;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*3, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_StateRefT_x27_instMonadFunctor___aux__1___boxed, .m_arity = 7, .m_num_fixed = 3, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5_value;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6;
static lean_once_cell_t l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7;
static const lean_closure_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Compiler_LCNF_instAddMessageContextCompilerM___lam__0___boxed, .m_arity = 6, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8_value;
static const lean_string_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "probe"};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value;
static const lean_ctor_object l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(210, 226, 36, 16, 11, 213, 189, 181)}};
static const lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10 = (const lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10_value;
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(253, 55, 142, 128, 91, 63, 88, 28)}};
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value_aux_0),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9_value),LEAN_SCALAR_PTR_LITERAL(60, 150, 55, 23, 179, 120, 143, 48)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "_private"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__1_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(103, 214, 75, 80, 34, 198, 193, 153)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__2_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(90, 18, 126, 130, 18, 214, 172, 143)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__4_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(72, 245, 227, 28, 172, 102, 215, 20)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "LCNF"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__5_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(225, 25, 15, 1, 146, 18, 87, 58)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Probing"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__7_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(171, 176, 148, 85, 84, 103, 135, 80)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__9_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(22, 95, 52, 82, 201, 93, 155, 160)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__10_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(191, 135, 77, 48, 10, 193, 107, 167)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__11_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(81, 243, 178, 155, 207, 21, 86, 75)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__12_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(84, 32, 97, 236, 167, 177, 209, 200)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Probe"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__13_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__14_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(221, 220, 56, 107, 178, 130, 195, 235)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "initFn"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__15_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__16_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(212, 198, 238, 95, 73, 174, 204, 216)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "_@"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__17_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__18_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(253, 160, 124, 63, 130, 135, 193, 8)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__19_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__3_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(8, 79, 181, 134, 106, 79, 240, 31)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__20_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(2, 80, 58, 113, 74, 134, 55, 21)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__21_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__6_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(163, 102, 91, 152, 148, 12, 32, 152)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static const lean_ctor_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__22_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),((lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__8_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value),LEAN_SCALAR_PTR_LITERAL(193, 195, 87, 22, 184, 160, 76, 111)}};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_hygCtx"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static const lean_string_object l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_hyg"};
static const lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_ = (const lean_object*)&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__value;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
static lean_once_cell_t l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_;
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2____boxed(lean_object*);
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0(void){
_start:
{
lean_object* v___x_1_; 
v___x_1_ = l_instMonadEIO___redArg();
return v___x_1_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1(void){
_start:
{
lean_object* v___x_2_; lean_object* v___x_3_; 
v___x_2_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__0);
v___x_3_ = l_StateRefT_x27_instMonad___redArg(v___x_2_);
return v___x_3_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg(lean_object* v_f_8_, lean_object* v_data_9_, lean_object* v_a_10_, lean_object* v_a_11_, lean_object* v_a_12_, lean_object* v_a_13_){
_start:
{
lean_object* v___x_15_; lean_object* v_toApplicative_16_; lean_object* v_toFunctor_17_; lean_object* v_toSeq_18_; lean_object* v_toSeqLeft_19_; lean_object* v_toSeqRight_20_; lean_object* v___f_21_; lean_object* v___f_22_; lean_object* v___f_23_; lean_object* v___f_24_; lean_object* v___x_25_; lean_object* v___f_26_; lean_object* v___f_27_; lean_object* v___f_28_; lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v_toApplicative_32_; lean_object* v___x_34_; uint8_t v_isShared_35_; uint8_t v_isSharedCheck_63_; 
v___x_15_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_16_ = lean_ctor_get(v___x_15_, 0);
v_toFunctor_17_ = lean_ctor_get(v_toApplicative_16_, 0);
v_toSeq_18_ = lean_ctor_get(v_toApplicative_16_, 2);
v_toSeqLeft_19_ = lean_ctor_get(v_toApplicative_16_, 3);
v_toSeqRight_20_ = lean_ctor_get(v_toApplicative_16_, 4);
v___f_21_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_22_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_17_, 2);
v___f_23_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_23_, 0, v_toFunctor_17_);
v___f_24_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_24_, 0, v_toFunctor_17_);
v___x_25_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_25_, 0, v___f_23_);
lean_ctor_set(v___x_25_, 1, v___f_24_);
lean_inc(v_toSeqRight_20_);
v___f_26_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_26_, 0, v_toSeqRight_20_);
lean_inc(v_toSeqLeft_19_);
v___f_27_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_27_, 0, v_toSeqLeft_19_);
lean_inc(v_toSeq_18_);
v___f_28_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_28_, 0, v_toSeq_18_);
v___x_29_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_29_, 0, v___x_25_);
lean_ctor_set(v___x_29_, 1, v___f_21_);
lean_ctor_set(v___x_29_, 2, v___f_28_);
lean_ctor_set(v___x_29_, 3, v___f_27_);
lean_ctor_set(v___x_29_, 4, v___f_26_);
v___x_30_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_30_, 0, v___x_29_);
lean_ctor_set(v___x_30_, 1, v___f_22_);
v___x_31_ = l_StateRefT_x27_instMonad___redArg(v___x_30_);
v_toApplicative_32_ = lean_ctor_get(v___x_31_, 0);
v_isSharedCheck_63_ = !lean_is_exclusive(v___x_31_);
if (v_isSharedCheck_63_ == 0)
{
lean_object* v_unused_64_; 
v_unused_64_ = lean_ctor_get(v___x_31_, 1);
lean_dec(v_unused_64_);
v___x_34_ = v___x_31_;
v_isShared_35_ = v_isSharedCheck_63_;
goto v_resetjp_33_;
}
else
{
lean_inc(v_toApplicative_32_);
lean_dec(v___x_31_);
v___x_34_ = lean_box(0);
v_isShared_35_ = v_isSharedCheck_63_;
goto v_resetjp_33_;
}
v_resetjp_33_:
{
lean_object* v_toFunctor_36_; lean_object* v_toSeq_37_; lean_object* v_toSeqLeft_38_; lean_object* v_toSeqRight_39_; lean_object* v___x_41_; uint8_t v_isShared_42_; uint8_t v_isSharedCheck_61_; 
v_toFunctor_36_ = lean_ctor_get(v_toApplicative_32_, 0);
v_toSeq_37_ = lean_ctor_get(v_toApplicative_32_, 2);
v_toSeqLeft_38_ = lean_ctor_get(v_toApplicative_32_, 3);
v_toSeqRight_39_ = lean_ctor_get(v_toApplicative_32_, 4);
v_isSharedCheck_61_ = !lean_is_exclusive(v_toApplicative_32_);
if (v_isSharedCheck_61_ == 0)
{
lean_object* v_unused_62_; 
v_unused_62_ = lean_ctor_get(v_toApplicative_32_, 1);
lean_dec(v_unused_62_);
v___x_41_ = v_toApplicative_32_;
v_isShared_42_ = v_isSharedCheck_61_;
goto v_resetjp_40_;
}
else
{
lean_inc(v_toSeqRight_39_);
lean_inc(v_toSeqLeft_38_);
lean_inc(v_toSeq_37_);
lean_inc(v_toFunctor_36_);
lean_dec(v_toApplicative_32_);
v___x_41_ = lean_box(0);
v_isShared_42_ = v_isSharedCheck_61_;
goto v_resetjp_40_;
}
v_resetjp_40_:
{
lean_object* v___f_43_; lean_object* v___f_44_; lean_object* v___f_45_; lean_object* v___f_46_; lean_object* v___x_47_; lean_object* v___f_48_; lean_object* v___f_49_; lean_object* v___f_50_; lean_object* v___x_52_; 
v___f_43_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_44_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_36_);
v___f_45_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_45_, 0, v_toFunctor_36_);
v___f_46_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_46_, 0, v_toFunctor_36_);
v___x_47_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_47_, 0, v___f_45_);
lean_ctor_set(v___x_47_, 1, v___f_46_);
v___f_48_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_48_, 0, v_toSeqRight_39_);
v___f_49_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_49_, 0, v_toSeqLeft_38_);
v___f_50_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_50_, 0, v_toSeq_37_);
if (v_isShared_42_ == 0)
{
lean_ctor_set(v___x_41_, 4, v___f_48_);
lean_ctor_set(v___x_41_, 3, v___f_49_);
lean_ctor_set(v___x_41_, 2, v___f_50_);
lean_ctor_set(v___x_41_, 1, v___f_43_);
lean_ctor_set(v___x_41_, 0, v___x_47_);
v___x_52_ = v___x_41_;
goto v_reusejp_51_;
}
else
{
lean_object* v_reuseFailAlloc_60_; 
v_reuseFailAlloc_60_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_60_, 0, v___x_47_);
lean_ctor_set(v_reuseFailAlloc_60_, 1, v___f_43_);
lean_ctor_set(v_reuseFailAlloc_60_, 2, v___f_50_);
lean_ctor_set(v_reuseFailAlloc_60_, 3, v___f_49_);
lean_ctor_set(v_reuseFailAlloc_60_, 4, v___f_48_);
v___x_52_ = v_reuseFailAlloc_60_;
goto v_reusejp_51_;
}
v_reusejp_51_:
{
lean_object* v___x_54_; 
if (v_isShared_35_ == 0)
{
lean_ctor_set(v___x_34_, 1, v___f_44_);
lean_ctor_set(v___x_34_, 0, v___x_52_);
v___x_54_ = v___x_34_;
goto v_reusejp_53_;
}
else
{
lean_object* v_reuseFailAlloc_59_; 
v_reuseFailAlloc_59_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_59_, 0, v___x_52_);
lean_ctor_set(v_reuseFailAlloc_59_, 1, v___f_44_);
v___x_54_ = v_reuseFailAlloc_59_;
goto v_reusejp_53_;
}
v_reusejp_53_:
{
size_t v_sz_55_; size_t v___x_56_; lean_object* v___x_7__overap_57_; lean_object* v___x_58_; 
v_sz_55_ = lean_array_size(v_data_9_);
v___x_56_ = ((size_t)0ULL);
v___x_7__overap_57_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_54_, v_f_8_, v_sz_55_, v___x_56_, v_data_9_);
lean_inc(v_a_13_);
lean_inc_ref(v_a_12_);
lean_inc(v_a_11_);
lean_inc_ref(v_a_10_);
v___x_58_ = lean_apply_5(v___x_7__overap_57_, v_a_10_, v_a_11_, v_a_12_, v_a_13_, lean_box(0));
return v___x_58_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___redArg___boxed(lean_object* v_f_65_, lean_object* v_data_66_, lean_object* v_a_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l_Lean_Compiler_LCNF_Probe_map___redArg(v_f_65_, v_data_66_, v_a_67_, v_a_68_, v_a_69_, v_a_70_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
lean_dec_ref(v_a_67_);
return v_res_72_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map(lean_object* v_00_u03b1_73_, lean_object* v_00_u03b2_74_, lean_object* v_f_75_, lean_object* v_data_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; lean_object* v_toApplicative_83_; lean_object* v_toFunctor_84_; lean_object* v_toSeq_85_; lean_object* v_toSeqLeft_86_; lean_object* v_toSeqRight_87_; lean_object* v___f_88_; lean_object* v___f_89_; lean_object* v___f_90_; lean_object* v___f_91_; lean_object* v___x_92_; lean_object* v___f_93_; lean_object* v___f_94_; lean_object* v___f_95_; lean_object* v___x_96_; lean_object* v___x_97_; lean_object* v___x_98_; lean_object* v_toApplicative_99_; lean_object* v___x_101_; uint8_t v_isShared_102_; uint8_t v_isSharedCheck_130_; 
v___x_82_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_83_ = lean_ctor_get(v___x_82_, 0);
v_toFunctor_84_ = lean_ctor_get(v_toApplicative_83_, 0);
v_toSeq_85_ = lean_ctor_get(v_toApplicative_83_, 2);
v_toSeqLeft_86_ = lean_ctor_get(v_toApplicative_83_, 3);
v_toSeqRight_87_ = lean_ctor_get(v_toApplicative_83_, 4);
v___f_88_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_89_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_84_, 2);
v___f_90_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_90_, 0, v_toFunctor_84_);
v___f_91_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_91_, 0, v_toFunctor_84_);
v___x_92_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_92_, 0, v___f_90_);
lean_ctor_set(v___x_92_, 1, v___f_91_);
lean_inc(v_toSeqRight_87_);
v___f_93_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_93_, 0, v_toSeqRight_87_);
lean_inc(v_toSeqLeft_86_);
v___f_94_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_94_, 0, v_toSeqLeft_86_);
lean_inc(v_toSeq_85_);
v___f_95_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_95_, 0, v_toSeq_85_);
v___x_96_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_96_, 0, v___x_92_);
lean_ctor_set(v___x_96_, 1, v___f_88_);
lean_ctor_set(v___x_96_, 2, v___f_95_);
lean_ctor_set(v___x_96_, 3, v___f_94_);
lean_ctor_set(v___x_96_, 4, v___f_93_);
v___x_97_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_97_, 0, v___x_96_);
lean_ctor_set(v___x_97_, 1, v___f_89_);
v___x_98_ = l_StateRefT_x27_instMonad___redArg(v___x_97_);
v_toApplicative_99_ = lean_ctor_get(v___x_98_, 0);
v_isSharedCheck_130_ = !lean_is_exclusive(v___x_98_);
if (v_isSharedCheck_130_ == 0)
{
lean_object* v_unused_131_; 
v_unused_131_ = lean_ctor_get(v___x_98_, 1);
lean_dec(v_unused_131_);
v___x_101_ = v___x_98_;
v_isShared_102_ = v_isSharedCheck_130_;
goto v_resetjp_100_;
}
else
{
lean_inc(v_toApplicative_99_);
lean_dec(v___x_98_);
v___x_101_ = lean_box(0);
v_isShared_102_ = v_isSharedCheck_130_;
goto v_resetjp_100_;
}
v_resetjp_100_:
{
lean_object* v_toFunctor_103_; lean_object* v_toSeq_104_; lean_object* v_toSeqLeft_105_; lean_object* v_toSeqRight_106_; lean_object* v___x_108_; uint8_t v_isShared_109_; uint8_t v_isSharedCheck_128_; 
v_toFunctor_103_ = lean_ctor_get(v_toApplicative_99_, 0);
v_toSeq_104_ = lean_ctor_get(v_toApplicative_99_, 2);
v_toSeqLeft_105_ = lean_ctor_get(v_toApplicative_99_, 3);
v_toSeqRight_106_ = lean_ctor_get(v_toApplicative_99_, 4);
v_isSharedCheck_128_ = !lean_is_exclusive(v_toApplicative_99_);
if (v_isSharedCheck_128_ == 0)
{
lean_object* v_unused_129_; 
v_unused_129_ = lean_ctor_get(v_toApplicative_99_, 1);
lean_dec(v_unused_129_);
v___x_108_ = v_toApplicative_99_;
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
else
{
lean_inc(v_toSeqRight_106_);
lean_inc(v_toSeqLeft_105_);
lean_inc(v_toSeq_104_);
lean_inc(v_toFunctor_103_);
lean_dec(v_toApplicative_99_);
v___x_108_ = lean_box(0);
v_isShared_109_ = v_isSharedCheck_128_;
goto v_resetjp_107_;
}
v_resetjp_107_:
{
lean_object* v___f_110_; lean_object* v___f_111_; lean_object* v___f_112_; lean_object* v___f_113_; lean_object* v___x_114_; lean_object* v___f_115_; lean_object* v___f_116_; lean_object* v___f_117_; lean_object* v___x_119_; 
v___f_110_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_111_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_103_);
v___f_112_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_112_, 0, v_toFunctor_103_);
v___f_113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_113_, 0, v_toFunctor_103_);
v___x_114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_114_, 0, v___f_112_);
lean_ctor_set(v___x_114_, 1, v___f_113_);
v___f_115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_115_, 0, v_toSeqRight_106_);
v___f_116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_116_, 0, v_toSeqLeft_105_);
v___f_117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_117_, 0, v_toSeq_104_);
if (v_isShared_109_ == 0)
{
lean_ctor_set(v___x_108_, 4, v___f_115_);
lean_ctor_set(v___x_108_, 3, v___f_116_);
lean_ctor_set(v___x_108_, 2, v___f_117_);
lean_ctor_set(v___x_108_, 1, v___f_110_);
lean_ctor_set(v___x_108_, 0, v___x_114_);
v___x_119_ = v___x_108_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_127_; 
v_reuseFailAlloc_127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_127_, 0, v___x_114_);
lean_ctor_set(v_reuseFailAlloc_127_, 1, v___f_110_);
lean_ctor_set(v_reuseFailAlloc_127_, 2, v___f_117_);
lean_ctor_set(v_reuseFailAlloc_127_, 3, v___f_116_);
lean_ctor_set(v_reuseFailAlloc_127_, 4, v___f_115_);
v___x_119_ = v_reuseFailAlloc_127_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
lean_object* v___x_121_; 
if (v_isShared_102_ == 0)
{
lean_ctor_set(v___x_101_, 1, v___f_111_);
lean_ctor_set(v___x_101_, 0, v___x_119_);
v___x_121_ = v___x_101_;
goto v_reusejp_120_;
}
else
{
lean_object* v_reuseFailAlloc_126_; 
v_reuseFailAlloc_126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_126_, 0, v___x_119_);
lean_ctor_set(v_reuseFailAlloc_126_, 1, v___f_111_);
v___x_121_ = v_reuseFailAlloc_126_;
goto v_reusejp_120_;
}
v_reusejp_120_:
{
size_t v_sz_122_; size_t v___x_123_; lean_object* v___x_57__overap_124_; lean_object* v___x_125_; 
v_sz_122_ = lean_array_size(v_data_76_);
v___x_123_ = ((size_t)0ULL);
v___x_57__overap_124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_121_, v_f_75_, v_sz_122_, v___x_123_, v_data_76_);
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
v___x_125_ = lean_apply_5(v___x_57__overap_124_, v_a_77_, v_a_78_, v_a_79_, v_a_80_, lean_box(0));
return v___x_125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_map___boxed(lean_object* v_00_u03b1_132_, lean_object* v_00_u03b2_133_, lean_object* v_f_134_, lean_object* v_data_135_, lean_object* v_a_136_, lean_object* v_a_137_, lean_object* v_a_138_, lean_object* v_a_139_, lean_object* v_a_140_){
_start:
{
lean_object* v_res_141_; 
v_res_141_ = l_Lean_Compiler_LCNF_Probe_map(v_00_u03b1_132_, v_00_u03b2_133_, v_f_134_, v_data_135_, v_a_136_, v_a_137_, v_a_138_, v_a_139_);
lean_dec(v_a_139_);
lean_dec_ref(v_a_138_);
lean_dec(v_a_137_);
lean_dec_ref(v_a_136_);
return v_res_141_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(lean_object* v_f_142_, lean_object* v_acc_143_, lean_object* v_a_144_, lean_object* v___y_145_, lean_object* v___y_146_, lean_object* v___y_147_, lean_object* v___y_148_){
_start:
{
lean_object* v___x_150_; 
lean_inc(v___y_148_);
lean_inc_ref(v___y_147_);
lean_inc(v___y_146_);
lean_inc_ref(v___y_145_);
lean_inc(v_a_144_);
v___x_150_ = lean_apply_6(v_f_142_, v_a_144_, v___y_145_, v___y_146_, v___y_147_, v___y_148_, lean_box(0));
if (lean_obj_tag(v___x_150_) == 0)
{
lean_object* v_a_151_; lean_object* v___x_153_; uint8_t v_isShared_154_; uint8_t v_isSharedCheck_163_; 
v_a_151_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_163_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_163_ == 0)
{
v___x_153_ = v___x_150_;
v_isShared_154_ = v_isSharedCheck_163_;
goto v_resetjp_152_;
}
else
{
lean_inc(v_a_151_);
lean_dec(v___x_150_);
v___x_153_ = lean_box(0);
v_isShared_154_ = v_isSharedCheck_163_;
goto v_resetjp_152_;
}
v_resetjp_152_:
{
uint8_t v___x_155_; 
v___x_155_ = lean_unbox(v_a_151_);
lean_dec(v_a_151_);
if (v___x_155_ == 0)
{
lean_object* v___x_157_; 
lean_dec(v_a_144_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v_acc_143_);
v___x_157_ = v___x_153_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_acc_143_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
else
{
lean_object* v___x_159_; lean_object* v___x_161_; 
v___x_159_ = lean_array_push(v_acc_143_, v_a_144_);
if (v_isShared_154_ == 0)
{
lean_ctor_set(v___x_153_, 0, v___x_159_);
v___x_161_ = v___x_153_;
goto v_reusejp_160_;
}
else
{
lean_object* v_reuseFailAlloc_162_; 
v_reuseFailAlloc_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_162_, 0, v___x_159_);
v___x_161_ = v_reuseFailAlloc_162_;
goto v_reusejp_160_;
}
v_reusejp_160_:
{
return v___x_161_;
}
}
}
}
else
{
lean_object* v_a_164_; lean_object* v___x_166_; uint8_t v_isShared_167_; uint8_t v_isSharedCheck_171_; 
lean_dec(v_a_144_);
lean_dec_ref(v_acc_143_);
v_a_164_ = lean_ctor_get(v___x_150_, 0);
v_isSharedCheck_171_ = !lean_is_exclusive(v___x_150_);
if (v_isSharedCheck_171_ == 0)
{
v___x_166_ = v___x_150_;
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
else
{
lean_inc(v_a_164_);
lean_dec(v___x_150_);
v___x_166_ = lean_box(0);
v_isShared_167_ = v_isSharedCheck_171_;
goto v_resetjp_165_;
}
v_resetjp_165_:
{
lean_object* v___x_169_; 
if (v_isShared_167_ == 0)
{
v___x_169_ = v___x_166_;
goto v_reusejp_168_;
}
else
{
lean_object* v_reuseFailAlloc_170_; 
v_reuseFailAlloc_170_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_170_, 0, v_a_164_);
v___x_169_ = v_reuseFailAlloc_170_;
goto v_reusejp_168_;
}
v_reusejp_168_:
{
return v___x_169_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed(lean_object* v_f_172_, lean_object* v_acc_173_, lean_object* v_a_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_, lean_object* v___y_178_, lean_object* v___y_179_){
_start:
{
lean_object* v_res_180_; 
v_res_180_ = l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0(v_f_172_, v_acc_173_, v_a_174_, v___y_175_, v___y_176_, v___y_177_, v___y_178_);
lean_dec(v___y_178_);
lean_dec_ref(v___y_177_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
return v_res_180_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg(lean_object* v_f_183_, lean_object* v_data_184_, lean_object* v_a_185_, lean_object* v_a_186_, lean_object* v_a_187_, lean_object* v_a_188_){
_start:
{
lean_object* v___x_190_; lean_object* v_toApplicative_191_; lean_object* v_toFunctor_192_; lean_object* v_toSeq_193_; lean_object* v_toSeqLeft_194_; lean_object* v_toSeqRight_195_; lean_object* v___f_196_; lean_object* v___f_197_; lean_object* v___f_198_; lean_object* v___f_199_; lean_object* v___x_200_; lean_object* v___f_201_; lean_object* v___f_202_; lean_object* v___f_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v_toApplicative_207_; lean_object* v___x_209_; uint8_t v_isShared_210_; uint8_t v_isSharedCheck_244_; 
v___x_190_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_191_ = lean_ctor_get(v___x_190_, 0);
v_toFunctor_192_ = lean_ctor_get(v_toApplicative_191_, 0);
v_toSeq_193_ = lean_ctor_get(v_toApplicative_191_, 2);
v_toSeqLeft_194_ = lean_ctor_get(v_toApplicative_191_, 3);
v_toSeqRight_195_ = lean_ctor_get(v_toApplicative_191_, 4);
v___f_196_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_197_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_192_, 2);
v___f_198_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_198_, 0, v_toFunctor_192_);
v___f_199_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_199_, 0, v_toFunctor_192_);
v___x_200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_200_, 0, v___f_198_);
lean_ctor_set(v___x_200_, 1, v___f_199_);
lean_inc(v_toSeqRight_195_);
v___f_201_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_201_, 0, v_toSeqRight_195_);
lean_inc(v_toSeqLeft_194_);
v___f_202_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_202_, 0, v_toSeqLeft_194_);
lean_inc(v_toSeq_193_);
v___f_203_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_203_, 0, v_toSeq_193_);
v___x_204_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_204_, 0, v___x_200_);
lean_ctor_set(v___x_204_, 1, v___f_196_);
lean_ctor_set(v___x_204_, 2, v___f_203_);
lean_ctor_set(v___x_204_, 3, v___f_202_);
lean_ctor_set(v___x_204_, 4, v___f_201_);
v___x_205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_205_, 0, v___x_204_);
lean_ctor_set(v___x_205_, 1, v___f_197_);
v___x_206_ = l_StateRefT_x27_instMonad___redArg(v___x_205_);
v_toApplicative_207_ = lean_ctor_get(v___x_206_, 0);
v_isSharedCheck_244_ = !lean_is_exclusive(v___x_206_);
if (v_isSharedCheck_244_ == 0)
{
lean_object* v_unused_245_; 
v_unused_245_ = lean_ctor_get(v___x_206_, 1);
lean_dec(v_unused_245_);
v___x_209_ = v___x_206_;
v_isShared_210_ = v_isSharedCheck_244_;
goto v_resetjp_208_;
}
else
{
lean_inc(v_toApplicative_207_);
lean_dec(v___x_206_);
v___x_209_ = lean_box(0);
v_isShared_210_ = v_isSharedCheck_244_;
goto v_resetjp_208_;
}
v_resetjp_208_:
{
lean_object* v_toFunctor_211_; lean_object* v_toSeq_212_; lean_object* v_toSeqLeft_213_; lean_object* v_toSeqRight_214_; lean_object* v___x_216_; uint8_t v_isShared_217_; uint8_t v_isSharedCheck_242_; 
v_toFunctor_211_ = lean_ctor_get(v_toApplicative_207_, 0);
v_toSeq_212_ = lean_ctor_get(v_toApplicative_207_, 2);
v_toSeqLeft_213_ = lean_ctor_get(v_toApplicative_207_, 3);
v_toSeqRight_214_ = lean_ctor_get(v_toApplicative_207_, 4);
v_isSharedCheck_242_ = !lean_is_exclusive(v_toApplicative_207_);
if (v_isSharedCheck_242_ == 0)
{
lean_object* v_unused_243_; 
v_unused_243_ = lean_ctor_get(v_toApplicative_207_, 1);
lean_dec(v_unused_243_);
v___x_216_ = v_toApplicative_207_;
v_isShared_217_ = v_isSharedCheck_242_;
goto v_resetjp_215_;
}
else
{
lean_inc(v_toSeqRight_214_);
lean_inc(v_toSeqLeft_213_);
lean_inc(v_toSeq_212_);
lean_inc(v_toFunctor_211_);
lean_dec(v_toApplicative_207_);
v___x_216_ = lean_box(0);
v_isShared_217_ = v_isSharedCheck_242_;
goto v_resetjp_215_;
}
v_resetjp_215_:
{
lean_object* v___f_218_; lean_object* v___f_219_; lean_object* v___f_220_; lean_object* v___f_221_; lean_object* v___x_222_; lean_object* v___f_223_; lean_object* v___f_224_; lean_object* v___f_225_; lean_object* v___x_227_; 
v___f_218_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_219_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_211_);
v___f_220_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_220_, 0, v_toFunctor_211_);
v___f_221_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_221_, 0, v_toFunctor_211_);
v___x_222_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_222_, 0, v___f_220_);
lean_ctor_set(v___x_222_, 1, v___f_221_);
v___f_223_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_223_, 0, v_toSeqRight_214_);
v___f_224_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_224_, 0, v_toSeqLeft_213_);
v___f_225_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_225_, 0, v_toSeq_212_);
if (v_isShared_217_ == 0)
{
lean_ctor_set(v___x_216_, 4, v___f_223_);
lean_ctor_set(v___x_216_, 3, v___f_224_);
lean_ctor_set(v___x_216_, 2, v___f_225_);
lean_ctor_set(v___x_216_, 1, v___f_218_);
lean_ctor_set(v___x_216_, 0, v___x_222_);
v___x_227_ = v___x_216_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_241_; 
v_reuseFailAlloc_241_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_241_, 0, v___x_222_);
lean_ctor_set(v_reuseFailAlloc_241_, 1, v___f_218_);
lean_ctor_set(v_reuseFailAlloc_241_, 2, v___f_225_);
lean_ctor_set(v_reuseFailAlloc_241_, 3, v___f_224_);
lean_ctor_set(v_reuseFailAlloc_241_, 4, v___f_223_);
v___x_227_ = v_reuseFailAlloc_241_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_229_; 
if (v_isShared_210_ == 0)
{
lean_ctor_set(v___x_209_, 1, v___f_219_);
lean_ctor_set(v___x_209_, 0, v___x_227_);
v___x_229_ = v___x_209_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v___x_227_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v___f_219_);
v___x_229_ = v_reuseFailAlloc_240_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; uint8_t v___x_233_; 
v___x_230_ = lean_unsigned_to_nat(0u);
v___x_231_ = lean_array_get_size(v_data_184_);
v___x_232_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0));
v___x_233_ = lean_nat_dec_lt(v___x_230_, v___x_231_);
if (v___x_233_ == 0)
{
lean_object* v___x_234_; 
lean_dec_ref(v___x_229_);
lean_dec_ref(v_data_184_);
lean_dec_ref(v_f_183_);
v___x_234_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_234_, 0, v___x_232_);
return v___x_234_;
}
else
{
lean_object* v___f_235_; size_t v___x_236_; size_t v___x_237_; lean_object* v___x_348__overap_238_; lean_object* v___x_239_; 
v___f_235_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_235_, 0, v_f_183_);
v___x_236_ = ((size_t)0ULL);
v___x_237_ = lean_usize_of_nat(v___x_231_);
v___x_348__overap_238_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_229_, v___f_235_, v_data_184_, v___x_236_, v___x_237_, v___x_232_);
lean_inc(v_a_188_);
lean_inc_ref(v_a_187_);
lean_inc(v_a_186_);
lean_inc_ref(v_a_185_);
v___x_239_ = lean_apply_5(v___x_348__overap_238_, v_a_185_, v_a_186_, v_a_187_, v_a_188_, lean_box(0));
return v___x_239_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___redArg___boxed(lean_object* v_f_246_, lean_object* v_data_247_, lean_object* v_a_248_, lean_object* v_a_249_, lean_object* v_a_250_, lean_object* v_a_251_, lean_object* v_a_252_){
_start:
{
lean_object* v_res_253_; 
v_res_253_ = l_Lean_Compiler_LCNF_Probe_filter___redArg(v_f_246_, v_data_247_, v_a_248_, v_a_249_, v_a_250_, v_a_251_);
lean_dec(v_a_251_);
lean_dec_ref(v_a_250_);
lean_dec(v_a_249_);
lean_dec_ref(v_a_248_);
return v_res_253_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter(lean_object* v_00_u03b1_254_, lean_object* v_f_255_, lean_object* v_data_256_, lean_object* v_a_257_, lean_object* v_a_258_, lean_object* v_a_259_, lean_object* v_a_260_){
_start:
{
lean_object* v___x_262_; lean_object* v_toApplicative_263_; lean_object* v_toFunctor_264_; lean_object* v_toSeq_265_; lean_object* v_toSeqLeft_266_; lean_object* v_toSeqRight_267_; lean_object* v___f_268_; lean_object* v___f_269_; lean_object* v___f_270_; lean_object* v___f_271_; lean_object* v___x_272_; lean_object* v___f_273_; lean_object* v___f_274_; lean_object* v___f_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v_toApplicative_279_; lean_object* v___x_281_; uint8_t v_isShared_282_; uint8_t v_isSharedCheck_316_; 
v___x_262_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_263_ = lean_ctor_get(v___x_262_, 0);
v_toFunctor_264_ = lean_ctor_get(v_toApplicative_263_, 0);
v_toSeq_265_ = lean_ctor_get(v_toApplicative_263_, 2);
v_toSeqLeft_266_ = lean_ctor_get(v_toApplicative_263_, 3);
v_toSeqRight_267_ = lean_ctor_get(v_toApplicative_263_, 4);
v___f_268_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_269_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_264_, 2);
v___f_270_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_270_, 0, v_toFunctor_264_);
v___f_271_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_271_, 0, v_toFunctor_264_);
v___x_272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_272_, 0, v___f_270_);
lean_ctor_set(v___x_272_, 1, v___f_271_);
lean_inc(v_toSeqRight_267_);
v___f_273_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_273_, 0, v_toSeqRight_267_);
lean_inc(v_toSeqLeft_266_);
v___f_274_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_274_, 0, v_toSeqLeft_266_);
lean_inc(v_toSeq_265_);
v___f_275_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_275_, 0, v_toSeq_265_);
v___x_276_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_276_, 0, v___x_272_);
lean_ctor_set(v___x_276_, 1, v___f_268_);
lean_ctor_set(v___x_276_, 2, v___f_275_);
lean_ctor_set(v___x_276_, 3, v___f_274_);
lean_ctor_set(v___x_276_, 4, v___f_273_);
v___x_277_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_277_, 0, v___x_276_);
lean_ctor_set(v___x_277_, 1, v___f_269_);
v___x_278_ = l_StateRefT_x27_instMonad___redArg(v___x_277_);
v_toApplicative_279_ = lean_ctor_get(v___x_278_, 0);
v_isSharedCheck_316_ = !lean_is_exclusive(v___x_278_);
if (v_isSharedCheck_316_ == 0)
{
lean_object* v_unused_317_; 
v_unused_317_ = lean_ctor_get(v___x_278_, 1);
lean_dec(v_unused_317_);
v___x_281_ = v___x_278_;
v_isShared_282_ = v_isSharedCheck_316_;
goto v_resetjp_280_;
}
else
{
lean_inc(v_toApplicative_279_);
lean_dec(v___x_278_);
v___x_281_ = lean_box(0);
v_isShared_282_ = v_isSharedCheck_316_;
goto v_resetjp_280_;
}
v_resetjp_280_:
{
lean_object* v_toFunctor_283_; lean_object* v_toSeq_284_; lean_object* v_toSeqLeft_285_; lean_object* v_toSeqRight_286_; lean_object* v___x_288_; uint8_t v_isShared_289_; uint8_t v_isSharedCheck_314_; 
v_toFunctor_283_ = lean_ctor_get(v_toApplicative_279_, 0);
v_toSeq_284_ = lean_ctor_get(v_toApplicative_279_, 2);
v_toSeqLeft_285_ = lean_ctor_get(v_toApplicative_279_, 3);
v_toSeqRight_286_ = lean_ctor_get(v_toApplicative_279_, 4);
v_isSharedCheck_314_ = !lean_is_exclusive(v_toApplicative_279_);
if (v_isSharedCheck_314_ == 0)
{
lean_object* v_unused_315_; 
v_unused_315_ = lean_ctor_get(v_toApplicative_279_, 1);
lean_dec(v_unused_315_);
v___x_288_ = v_toApplicative_279_;
v_isShared_289_ = v_isSharedCheck_314_;
goto v_resetjp_287_;
}
else
{
lean_inc(v_toSeqRight_286_);
lean_inc(v_toSeqLeft_285_);
lean_inc(v_toSeq_284_);
lean_inc(v_toFunctor_283_);
lean_dec(v_toApplicative_279_);
v___x_288_ = lean_box(0);
v_isShared_289_ = v_isSharedCheck_314_;
goto v_resetjp_287_;
}
v_resetjp_287_:
{
lean_object* v___f_290_; lean_object* v___f_291_; lean_object* v___f_292_; lean_object* v___f_293_; lean_object* v___x_294_; lean_object* v___f_295_; lean_object* v___f_296_; lean_object* v___f_297_; lean_object* v___x_299_; 
v___f_290_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_291_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_283_);
v___f_292_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_292_, 0, v_toFunctor_283_);
v___f_293_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_293_, 0, v_toFunctor_283_);
v___x_294_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_294_, 0, v___f_292_);
lean_ctor_set(v___x_294_, 1, v___f_293_);
v___f_295_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_295_, 0, v_toSeqRight_286_);
v___f_296_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_296_, 0, v_toSeqLeft_285_);
v___f_297_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_297_, 0, v_toSeq_284_);
if (v_isShared_289_ == 0)
{
lean_ctor_set(v___x_288_, 4, v___f_295_);
lean_ctor_set(v___x_288_, 3, v___f_296_);
lean_ctor_set(v___x_288_, 2, v___f_297_);
lean_ctor_set(v___x_288_, 1, v___f_290_);
lean_ctor_set(v___x_288_, 0, v___x_294_);
v___x_299_ = v___x_288_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_294_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___f_290_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v___f_297_);
lean_ctor_set(v_reuseFailAlloc_313_, 3, v___f_296_);
lean_ctor_set(v_reuseFailAlloc_313_, 4, v___f_295_);
v___x_299_ = v_reuseFailAlloc_313_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
lean_object* v___x_301_; 
if (v_isShared_282_ == 0)
{
lean_ctor_set(v___x_281_, 1, v___f_291_);
lean_ctor_set(v___x_281_, 0, v___x_299_);
v___x_301_ = v___x_281_;
goto v_reusejp_300_;
}
else
{
lean_object* v_reuseFailAlloc_312_; 
v_reuseFailAlloc_312_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_312_, 0, v___x_299_);
lean_ctor_set(v_reuseFailAlloc_312_, 1, v___f_291_);
v___x_301_ = v_reuseFailAlloc_312_;
goto v_reusejp_300_;
}
v_reusejp_300_:
{
lean_object* v___x_302_; lean_object* v___x_303_; lean_object* v___x_304_; uint8_t v___x_305_; 
v___x_302_ = lean_unsigned_to_nat(0u);
v___x_303_ = lean_array_get_size(v_data_256_);
v___x_304_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___closed__0));
v___x_305_ = lean_nat_dec_lt(v___x_302_, v___x_303_);
if (v___x_305_ == 0)
{
lean_object* v___x_306_; 
lean_dec_ref(v___x_301_);
lean_dec_ref(v_data_256_);
lean_dec_ref(v_f_255_);
v___x_306_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_306_, 0, v___x_304_);
return v___x_306_;
}
else
{
lean_object* v___f_307_; size_t v___x_308_; size_t v___x_309_; lean_object* v___x_434__overap_310_; lean_object* v___x_311_; 
v___f_307_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_filter___redArg___lam__0___boxed), 8, 1);
lean_closure_set(v___f_307_, 0, v_f_255_);
v___x_308_ = ((size_t)0ULL);
v___x_309_ = lean_usize_of_nat(v___x_303_);
v___x_434__overap_310_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_301_, v___f_307_, v_data_256_, v___x_308_, v___x_309_, v___x_304_);
lean_inc(v_a_260_);
lean_inc_ref(v_a_259_);
lean_inc(v_a_258_);
lean_inc_ref(v_a_257_);
v___x_311_ = lean_apply_5(v___x_434__overap_310_, v_a_257_, v_a_258_, v_a_259_, v_a_260_, lean_box(0));
return v___x_311_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filter___boxed(lean_object* v_00_u03b1_318_, lean_object* v_f_319_, lean_object* v_data_320_, lean_object* v_a_321_, lean_object* v_a_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_){
_start:
{
lean_object* v_res_326_; 
v_res_326_ = l_Lean_Compiler_LCNF_Probe_filter(v_00_u03b1_318_, v_f_319_, v_data_320_, v_a_321_, v_a_322_, v_a_323_, v_a_324_);
lean_dec(v_a_324_);
lean_dec_ref(v_a_323_);
lean_dec(v_a_322_);
lean_dec_ref(v_a_321_);
return v_res_326_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(lean_object* v_inst_327_, lean_object* v_x1_328_, lean_object* v_x2_329_){
_start:
{
lean_object* v___x_330_; uint8_t v___x_331_; 
v___x_330_ = lean_apply_2(v_inst_327_, v_x1_328_, v_x2_329_);
v___x_331_ = lean_unbox(v___x_330_);
return v___x_331_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed(lean_object* v_inst_332_, lean_object* v_x1_333_, lean_object* v_x2_334_){
_start:
{
uint8_t v_res_335_; lean_object* v_r_336_; 
v_res_335_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0(v_inst_332_, v_x1_333_, v_x2_334_);
v_r_336_ = lean_box(v_res_335_);
return v_r_336_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg(lean_object* v_inst_337_, lean_object* v_data_338_){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; uint8_t v___x_342_; 
v___x_340_ = lean_array_get_size(v_data_338_);
v___x_341_ = lean_unsigned_to_nat(0u);
v___x_342_ = lean_nat_dec_eq(v___x_340_, v___x_341_);
if (v___x_342_ == 0)
{
lean_object* v___f_343_; lean_object* v___y_345_; lean_object* v___y_346_; lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___y_352_; uint8_t v___x_354_; 
v___f_343_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_343_, 0, v_inst_337_);
v___x_349_ = lean_unsigned_to_nat(1u);
v___x_350_ = lean_nat_sub(v___x_340_, v___x_349_);
v___x_354_ = lean_nat_dec_le(v___x_341_, v___x_350_);
if (v___x_354_ == 0)
{
lean_inc(v___x_350_);
v___y_352_ = v___x_350_;
goto v___jp_351_;
}
else
{
v___y_352_ = v___x_341_;
goto v___jp_351_;
}
v___jp_344_:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_343_, v___x_340_, v_data_338_, v___y_345_, v___y_346_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_346_);
v___x_348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_348_, 0, v___x_347_);
return v___x_348_;
}
v___jp_351_:
{
uint8_t v___x_353_; 
v___x_353_ = lean_nat_dec_le(v___y_352_, v___x_350_);
if (v___x_353_ == 0)
{
lean_dec(v___x_350_);
lean_inc(v___y_352_);
v___y_345_ = v___y_352_;
v___y_346_ = v___y_352_;
goto v___jp_344_;
}
else
{
v___y_345_ = v___y_352_;
v___y_346_ = v___x_350_;
goto v___jp_344_;
}
}
}
else
{
lean_object* v___x_355_; 
lean_dec_ref(v_inst_337_);
v___x_355_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_355_, 0, v_data_338_);
return v___x_355_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___redArg___boxed(lean_object* v_inst_356_, lean_object* v_data_357_, lean_object* v_a_358_){
_start:
{
lean_object* v_res_359_; 
v_res_359_ = l_Lean_Compiler_LCNF_Probe_sorted___redArg(v_inst_356_, v_data_357_);
return v_res_359_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted(lean_object* v_00_u03b1_360_, lean_object* v_inst_361_, lean_object* v_inst_362_, lean_object* v_inst_363_, lean_object* v_data_364_, lean_object* v_a_365_, lean_object* v_a_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
lean_object* v___x_370_; lean_object* v___x_371_; uint8_t v___x_372_; 
v___x_370_ = lean_array_get_size(v_data_364_);
v___x_371_ = lean_unsigned_to_nat(0u);
v___x_372_ = lean_nat_dec_eq(v___x_370_, v___x_371_);
if (v___x_372_ == 0)
{
lean_object* v___f_373_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___y_382_; uint8_t v___x_384_; 
v___f_373_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sorted___redArg___lam__0___boxed), 3, 1);
lean_closure_set(v___f_373_, 0, v_inst_363_);
v___x_379_ = lean_unsigned_to_nat(1u);
v___x_380_ = lean_nat_sub(v___x_370_, v___x_379_);
v___x_384_ = lean_nat_dec_le(v___x_371_, v___x_380_);
if (v___x_384_ == 0)
{
lean_inc(v___x_380_);
v___y_382_ = v___x_380_;
goto v___jp_381_;
}
else
{
v___y_382_ = v___x_371_;
goto v___jp_381_;
}
v___jp_374_:
{
lean_object* v___x_377_; lean_object* v___x_378_; 
v___x_377_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_373_, v___x_370_, v_data_364_, v___y_375_, v___y_376_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_376_);
v___x_378_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_378_, 0, v___x_377_);
return v___x_378_;
}
v___jp_381_:
{
uint8_t v___x_383_; 
v___x_383_ = lean_nat_dec_le(v___y_382_, v___x_380_);
if (v___x_383_ == 0)
{
lean_dec(v___x_380_);
lean_inc(v___y_382_);
v___y_375_ = v___y_382_;
v___y_376_ = v___y_382_;
goto v___jp_374_;
}
else
{
v___y_375_ = v___y_382_;
v___y_376_ = v___x_380_;
goto v___jp_374_;
}
}
}
else
{
lean_object* v___x_385_; 
lean_dec_ref(v_inst_363_);
v___x_385_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_385_, 0, v_data_364_);
return v___x_385_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sorted___boxed(lean_object* v_00_u03b1_386_, lean_object* v_inst_387_, lean_object* v_inst_388_, lean_object* v_inst_389_, lean_object* v_data_390_, lean_object* v_a_391_, lean_object* v_a_392_, lean_object* v_a_393_, lean_object* v_a_394_, lean_object* v_a_395_){
_start:
{
lean_object* v_res_396_; 
v_res_396_ = l_Lean_Compiler_LCNF_Probe_sorted(v_00_u03b1_386_, v_inst_387_, v_inst_388_, v_inst_389_, v_data_390_, v_a_391_, v_a_392_, v_a_393_, v_a_394_);
lean_dec(v_a_394_);
lean_dec_ref(v_a_393_);
lean_dec(v_a_392_);
lean_dec_ref(v_a_391_);
lean_dec(v_inst_387_);
return v_res_396_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(uint8_t v_pu_397_, lean_object* v_x_398_){
_start:
{
lean_object* v___x_399_; lean_object* v___x_400_; 
v___x_399_ = l_Lean_Compiler_LCNF_Decl_size(v_pu_397_, v_x_398_);
v___x_400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_400_, 0, v___x_399_);
lean_ctor_set(v___x_400_, 1, v_x_398_);
return v___x_400_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed(lean_object* v_pu_401_, lean_object* v_x_402_){
_start:
{
uint8_t v_pu_boxed_403_; lean_object* v_res_404_; 
v_pu_boxed_403_ = lean_unbox(v_pu_401_);
v_res_404_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0(v_pu_boxed_403_, v_x_402_);
return v_res_404_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(lean_object* v_x_405_, lean_object* v_x_406_){
_start:
{
lean_object* v_fst_407_; lean_object* v_snd_408_; lean_object* v_fst_409_; lean_object* v_snd_410_; uint8_t v___x_411_; 
v_fst_407_ = lean_ctor_get(v_x_405_, 0);
v_snd_408_ = lean_ctor_get(v_x_405_, 1);
v_fst_409_ = lean_ctor_get(v_x_406_, 0);
v_snd_410_ = lean_ctor_get(v_x_406_, 1);
v___x_411_ = lean_nat_dec_eq(v_fst_407_, v_fst_409_);
if (v___x_411_ == 0)
{
uint8_t v___x_412_; 
v___x_412_ = lean_nat_dec_lt(v_fst_407_, v_fst_409_);
return v___x_412_;
}
else
{
lean_object* v_toSignature_413_; lean_object* v_toSignature_414_; lean_object* v_name_415_; lean_object* v_name_416_; uint8_t v___x_417_; 
v_toSignature_413_ = lean_ctor_get(v_snd_408_, 0);
v_toSignature_414_ = lean_ctor_get(v_snd_410_, 0);
v_name_415_ = lean_ctor_get(v_toSignature_413_, 0);
v_name_416_ = lean_ctor_get(v_toSignature_414_, 0);
v___x_417_ = l_Lean_Name_lt(v_name_415_, v_name_416_);
return v___x_417_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1___boxed(lean_object* v_x_418_, lean_object* v_x_419_){
_start:
{
uint8_t v_res_420_; lean_object* v_r_421_; 
v_res_420_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__1(v_x_418_, v_x_419_);
lean_dec_ref(v_x_419_);
lean_dec_ref(v_x_418_);
v_r_421_ = lean_box(v_res_420_);
return v_r_421_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(uint8_t v_pu_442_, lean_object* v_decls_443_){
_start:
{
lean_object* v___x_445_; lean_object* v___f_446_; lean_object* v___x_447_; size_t v_sz_448_; size_t v___x_449_; lean_object* v_decls_450_; lean_object* v___x_451_; lean_object* v___x_452_; uint8_t v___x_453_; 
v___x_445_ = lean_box(v_pu_442_);
v___f_446_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_446_, 0, v___x_445_);
v___x_447_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v_sz_448_ = lean_array_size(v_decls_443_);
v___x_449_ = ((size_t)0ULL);
v_decls_450_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_447_, v___f_446_, v_sz_448_, v___x_449_, v_decls_443_);
v___x_451_ = lean_array_get_size(v_decls_450_);
v___x_452_ = lean_unsigned_to_nat(0u);
v___x_453_ = lean_nat_dec_eq(v___x_451_, v___x_452_);
if (v___x_453_ == 0)
{
lean_object* v___f_454_; lean_object* v___y_456_; lean_object* v___y_457_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___y_463_; uint8_t v___x_465_; 
v___f_454_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10));
v___x_460_ = lean_unsigned_to_nat(1u);
v___x_461_ = lean_nat_sub(v___x_451_, v___x_460_);
v___x_465_ = lean_nat_dec_le(v___x_452_, v___x_461_);
if (v___x_465_ == 0)
{
lean_inc(v___x_461_);
v___y_463_ = v___x_461_;
goto v___jp_462_;
}
else
{
v___y_463_ = v___x_452_;
goto v___jp_462_;
}
v___jp_455_:
{
lean_object* v___x_458_; lean_object* v___x_459_; 
v___x_458_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_454_, v___x_451_, v_decls_450_, v___y_456_, v___y_457_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_457_);
v___x_459_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_459_, 0, v___x_458_);
return v___x_459_;
}
v___jp_462_:
{
uint8_t v___x_464_; 
v___x_464_ = lean_nat_dec_le(v___y_463_, v___x_461_);
if (v___x_464_ == 0)
{
lean_dec(v___x_461_);
lean_inc(v___y_463_);
v___y_456_ = v___y_463_;
v___y_457_ = v___y_463_;
goto v___jp_455_;
}
else
{
v___y_456_ = v___y_463_;
v___y_457_ = v___x_461_;
goto v___jp_455_;
}
}
}
else
{
lean_object* v___x_466_; 
v___x_466_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_466_, 0, v_decls_450_);
return v___x_466_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___boxed(lean_object* v_pu_467_, lean_object* v_decls_468_, lean_object* v_a_469_){
_start:
{
uint8_t v_pu_boxed_470_; lean_object* v_res_471_; 
v_pu_boxed_470_ = lean_unbox(v_pu_467_);
v_res_471_ = l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg(v_pu_boxed_470_, v_decls_468_);
return v_res_471_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize(uint8_t v_pu_472_, lean_object* v_decls_473_, lean_object* v_a_474_, lean_object* v_a_475_, lean_object* v_a_476_, lean_object* v_a_477_){
_start:
{
lean_object* v___x_479_; lean_object* v___f_480_; lean_object* v___x_481_; size_t v_sz_482_; size_t v___x_483_; lean_object* v_decls_484_; lean_object* v___x_485_; lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_479_ = lean_box(v_pu_472_);
v___f_480_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___lam__0___boxed), 2, 1);
lean_closure_set(v___f_480_, 0, v___x_479_);
v___x_481_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v_sz_482_ = lean_array_size(v_decls_473_);
v___x_483_ = ((size_t)0ULL);
v_decls_484_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_481_, v___f_480_, v_sz_482_, v___x_483_, v_decls_473_);
v___x_485_ = lean_array_get_size(v_decls_484_);
v___x_486_ = lean_unsigned_to_nat(0u);
v___x_487_ = lean_nat_dec_eq(v___x_485_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___f_488_; lean_object* v___y_490_; lean_object* v___y_491_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___y_497_; uint8_t v___x_499_; 
v___f_488_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__10));
v___x_494_ = lean_unsigned_to_nat(1u);
v___x_495_ = lean_nat_sub(v___x_485_, v___x_494_);
v___x_499_ = lean_nat_dec_le(v___x_486_, v___x_495_);
if (v___x_499_ == 0)
{
lean_inc(v___x_495_);
v___y_497_ = v___x_495_;
goto v___jp_496_;
}
else
{
v___y_497_ = v___x_486_;
goto v___jp_496_;
}
v___jp_489_:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_488_, v___x_485_, v_decls_484_, v___y_490_, v___y_491_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_491_);
v___x_493_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_493_, 0, v___x_492_);
return v___x_493_;
}
v___jp_496_:
{
uint8_t v___x_498_; 
v___x_498_ = lean_nat_dec_le(v___y_497_, v___x_495_);
if (v___x_498_ == 0)
{
lean_dec(v___x_495_);
lean_inc(v___y_497_);
v___y_490_ = v___y_497_;
v___y_491_ = v___y_497_;
goto v___jp_489_;
}
else
{
v___y_490_ = v___y_497_;
v___y_491_ = v___x_495_;
goto v___jp_489_;
}
}
}
else
{
lean_object* v___x_500_; 
v___x_500_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_500_, 0, v_decls_484_);
return v___x_500_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sortedBySize___boxed(lean_object* v_pu_501_, lean_object* v_decls_502_, lean_object* v_a_503_, lean_object* v_a_504_, lean_object* v_a_505_, lean_object* v_a_506_, lean_object* v_a_507_){
_start:
{
uint8_t v_pu_boxed_508_; lean_object* v_res_509_; 
v_pu_boxed_508_ = lean_unbox(v_pu_501_);
v_res_509_ = l_Lean_Compiler_LCNF_Probe_sortedBySize(v_pu_boxed_508_, v_decls_502_, v_a_503_, v_a_504_, v_a_505_, v_a_506_);
lean_dec(v_a_506_);
lean_dec_ref(v_a_505_);
lean_dec(v_a_504_);
lean_dec_ref(v_a_503_);
return v_res_509_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(lean_object* v_inst_510_, lean_object* v_inst_511_, lean_object* v_a_512_, lean_object* v_x_513_, lean_object* v___y_514_, lean_object* v___y_515_, lean_object* v___y_516_, lean_object* v___y_517_, lean_object* v___y_518_){
_start:
{
lean_object* v___x_520_; 
lean_inc(v_a_512_);
lean_inc_ref(v_inst_511_);
lean_inc_ref(v_inst_510_);
v___x_520_ = l_Std_DHashMap_Internal_Raw_u2080_Const_get_x3f___redArg(v_inst_510_, v_inst_511_, v___y_514_, v_a_512_);
if (lean_obj_tag(v___x_520_) == 1)
{
lean_object* v_val_521_; lean_object* v___x_523_; uint8_t v_isShared_524_; uint8_t v_isSharedCheck_532_; 
v_val_521_ = lean_ctor_get(v___x_520_, 0);
v_isSharedCheck_532_ = !lean_is_exclusive(v___x_520_);
if (v_isSharedCheck_532_ == 0)
{
v___x_523_ = v___x_520_;
v_isShared_524_ = v_isSharedCheck_532_;
goto v_resetjp_522_;
}
else
{
lean_inc(v_val_521_);
lean_dec(v___x_520_);
v___x_523_ = lean_box(0);
v_isShared_524_ = v_isSharedCheck_532_;
goto v_resetjp_522_;
}
v_resetjp_522_:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_529_; 
v___x_525_ = lean_unsigned_to_nat(1u);
v___x_526_ = lean_nat_add(v_val_521_, v___x_525_);
lean_dec(v_val_521_);
v___x_527_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_510_, v_inst_511_, v___y_514_, v_a_512_, v___x_526_);
if (v_isShared_524_ == 0)
{
lean_ctor_set(v___x_523_, 0, v___x_527_);
v___x_529_ = v___x_523_;
goto v_reusejp_528_;
}
else
{
lean_object* v_reuseFailAlloc_531_; 
v_reuseFailAlloc_531_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_531_, 0, v___x_527_);
v___x_529_ = v_reuseFailAlloc_531_;
goto v_reusejp_528_;
}
v_reusejp_528_:
{
lean_object* v___x_530_; 
v___x_530_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_530_, 0, v___x_529_);
return v___x_530_;
}
}
}
else
{
lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; 
lean_dec(v___x_520_);
v___x_533_ = lean_unsigned_to_nat(1u);
v___x_534_ = l_Std_DHashMap_Internal_Raw_u2080_insert___redArg(v_inst_510_, v_inst_511_, v___y_514_, v_a_512_, v___x_533_);
v___x_535_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_535_, 0, v___x_534_);
v___x_536_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_536_, 0, v___x_535_);
return v___x_536_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed(lean_object* v_inst_537_, lean_object* v_inst_538_, lean_object* v_a_539_, lean_object* v_x_540_, lean_object* v___y_541_, lean_object* v___y_542_, lean_object* v___y_543_, lean_object* v___y_544_, lean_object* v___y_545_, lean_object* v___y_546_){
_start:
{
lean_object* v_res_547_; 
v_res_547_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0(v_inst_537_, v_inst_538_, v_a_539_, v_x_540_, v___y_541_, v___y_542_, v___y_543_, v___y_544_, v___y_545_);
lean_dec(v___y_545_);
lean_dec_ref(v___y_544_);
lean_dec(v___y_543_);
lean_dec_ref(v___y_542_);
return v_res_547_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__1(lean_object* v_x1_548_, lean_object* v_x2_549_, lean_object* v_x3_550_){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_551_, 0, v_x2_549_);
lean_ctor_set(v___x_551_, 1, v_x3_550_);
v___x_552_ = lean_array_push(v_x1_548_, v___x_551_);
return v___x_552_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__2(lean_object* v___x_553_, lean_object* v___f_554_, lean_object* v_acc_555_, lean_object* v_l_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = l_Std_DHashMap_Internal_AssocList_foldlM___redArg(v___x_553_, v___f_554_, v_acc_555_, v_l_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg(lean_object* v_inst_562_, lean_object* v_inst_563_, lean_object* v_data_564_, lean_object* v_a_565_, lean_object* v_a_566_, lean_object* v_a_567_, lean_object* v_a_568_){
_start:
{
lean_object* v___x_570_; lean_object* v_toApplicative_571_; lean_object* v_toFunctor_572_; lean_object* v_toSeq_573_; lean_object* v_toSeqLeft_574_; lean_object* v_toSeqRight_575_; lean_object* v___f_576_; lean_object* v___f_577_; lean_object* v___f_578_; lean_object* v___f_579_; lean_object* v___x_580_; lean_object* v___f_581_; lean_object* v___f_582_; lean_object* v___f_583_; lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v___x_586_; lean_object* v_toApplicative_587_; lean_object* v___x_589_; uint8_t v_isShared_590_; uint8_t v_isSharedCheck_657_; 
v___x_570_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_571_ = lean_ctor_get(v___x_570_, 0);
v_toFunctor_572_ = lean_ctor_get(v_toApplicative_571_, 0);
v_toSeq_573_ = lean_ctor_get(v_toApplicative_571_, 2);
v_toSeqLeft_574_ = lean_ctor_get(v_toApplicative_571_, 3);
v_toSeqRight_575_ = lean_ctor_get(v_toApplicative_571_, 4);
v___f_576_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_577_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_572_, 2);
v___f_578_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_578_, 0, v_toFunctor_572_);
v___f_579_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_579_, 0, v_toFunctor_572_);
v___x_580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_580_, 0, v___f_578_);
lean_ctor_set(v___x_580_, 1, v___f_579_);
lean_inc(v_toSeqRight_575_);
v___f_581_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_581_, 0, v_toSeqRight_575_);
lean_inc(v_toSeqLeft_574_);
v___f_582_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_582_, 0, v_toSeqLeft_574_);
lean_inc(v_toSeq_573_);
v___f_583_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_583_, 0, v_toSeq_573_);
v___x_584_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_584_, 0, v___x_580_);
lean_ctor_set(v___x_584_, 1, v___f_576_);
lean_ctor_set(v___x_584_, 2, v___f_583_);
lean_ctor_set(v___x_584_, 3, v___f_582_);
lean_ctor_set(v___x_584_, 4, v___f_581_);
v___x_585_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_585_, 0, v___x_584_);
lean_ctor_set(v___x_585_, 1, v___f_577_);
v___x_586_ = l_StateRefT_x27_instMonad___redArg(v___x_585_);
v_toApplicative_587_ = lean_ctor_get(v___x_586_, 0);
v_isSharedCheck_657_ = !lean_is_exclusive(v___x_586_);
if (v_isSharedCheck_657_ == 0)
{
lean_object* v_unused_658_; 
v_unused_658_ = lean_ctor_get(v___x_586_, 1);
lean_dec(v_unused_658_);
v___x_589_ = v___x_586_;
v_isShared_590_ = v_isSharedCheck_657_;
goto v_resetjp_588_;
}
else
{
lean_inc(v_toApplicative_587_);
lean_dec(v___x_586_);
v___x_589_ = lean_box(0);
v_isShared_590_ = v_isSharedCheck_657_;
goto v_resetjp_588_;
}
v_resetjp_588_:
{
lean_object* v_toFunctor_591_; lean_object* v_toSeq_592_; lean_object* v_toSeqLeft_593_; lean_object* v_toSeqRight_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_655_; 
v_toFunctor_591_ = lean_ctor_get(v_toApplicative_587_, 0);
v_toSeq_592_ = lean_ctor_get(v_toApplicative_587_, 2);
v_toSeqLeft_593_ = lean_ctor_get(v_toApplicative_587_, 3);
v_toSeqRight_594_ = lean_ctor_get(v_toApplicative_587_, 4);
v_isSharedCheck_655_ = !lean_is_exclusive(v_toApplicative_587_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; 
v_unused_656_ = lean_ctor_get(v_toApplicative_587_, 1);
lean_dec(v_unused_656_);
v___x_596_ = v_toApplicative_587_;
v_isShared_597_ = v_isSharedCheck_655_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_toSeqRight_594_);
lean_inc(v_toSeqLeft_593_);
lean_inc(v_toSeq_592_);
lean_inc(v_toFunctor_591_);
lean_dec(v_toApplicative_587_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_655_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___f_598_; lean_object* v___f_599_; lean_object* v___f_600_; lean_object* v___f_601_; lean_object* v___f_602_; lean_object* v___x_603_; lean_object* v___f_604_; lean_object* v___f_605_; lean_object* v___f_606_; lean_object* v___x_608_; 
v___f_598_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___lam__0___boxed), 10, 2);
lean_closure_set(v___f_598_, 0, v_inst_562_);
lean_closure_set(v___f_598_, 1, v_inst_563_);
v___f_599_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_600_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_591_);
v___f_601_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_601_, 0, v_toFunctor_591_);
v___f_602_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_602_, 0, v_toFunctor_591_);
v___x_603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_603_, 0, v___f_601_);
lean_ctor_set(v___x_603_, 1, v___f_602_);
v___f_604_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_604_, 0, v_toSeqRight_594_);
v___f_605_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_605_, 0, v_toSeqLeft_593_);
v___f_606_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_606_, 0, v_toSeq_592_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 4, v___f_604_);
lean_ctor_set(v___x_596_, 3, v___f_605_);
lean_ctor_set(v___x_596_, 2, v___f_606_);
lean_ctor_set(v___x_596_, 1, v___f_599_);
lean_ctor_set(v___x_596_, 0, v___x_603_);
v___x_608_ = v___x_596_;
goto v_reusejp_607_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v___x_603_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v___f_599_);
lean_ctor_set(v_reuseFailAlloc_654_, 2, v___f_606_);
lean_ctor_set(v_reuseFailAlloc_654_, 3, v___f_605_);
lean_ctor_set(v_reuseFailAlloc_654_, 4, v___f_604_);
v___x_608_ = v_reuseFailAlloc_654_;
goto v_reusejp_607_;
}
v_reusejp_607_:
{
lean_object* v___x_610_; 
if (v_isShared_590_ == 0)
{
lean_ctor_set(v___x_589_, 1, v___f_600_);
lean_ctor_set(v___x_589_, 0, v___x_608_);
v___x_610_ = v___x_589_;
goto v_reusejp_609_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v___x_608_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___f_600_);
v___x_610_ = v_reuseFailAlloc_653_;
goto v_reusejp_609_;
}
v_reusejp_609_:
{
lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v_map_620_; size_t v_sz_621_; size_t v___x_622_; lean_object* v___x_720__overap_623_; lean_object* v___x_624_; 
v___x_611_ = lean_array_get_size(v_data_564_);
v___x_612_ = lean_unsigned_to_nat(0u);
v___x_613_ = lean_unsigned_to_nat(4u);
v___x_614_ = lean_nat_mul(v___x_611_, v___x_613_);
v___x_615_ = lean_unsigned_to_nat(3u);
v___x_616_ = lean_nat_div(v___x_614_, v___x_615_);
lean_dec(v___x_614_);
v___x_617_ = l_Nat_nextPowerOfTwo(v___x_616_);
lean_dec(v___x_616_);
v___x_618_ = lean_box(0);
v___x_619_ = lean_mk_array(v___x_617_, v___x_618_);
v_map_620_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_map_620_, 0, v___x_612_);
lean_ctor_set(v_map_620_, 1, v___x_619_);
v_sz_621_ = lean_array_size(v_data_564_);
v___x_622_ = ((size_t)0ULL);
v___x_720__overap_623_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop(lean_box(0), lean_box(0), lean_box(0), v___x_610_, v_data_564_, v___f_598_, v_sz_621_, v___x_622_, v_map_620_);
lean_inc(v_a_568_);
lean_inc_ref(v_a_567_);
lean_inc(v_a_566_);
lean_inc_ref(v_a_565_);
v___x_624_ = lean_apply_5(v___x_720__overap_623_, v_a_565_, v_a_566_, v_a_567_, v_a_568_, lean_box(0));
if (lean_obj_tag(v___x_624_) == 0)
{
lean_object* v_a_625_; lean_object* v___x_627_; uint8_t v_isShared_628_; uint8_t v_isSharedCheck_644_; 
v_a_625_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_644_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_644_ == 0)
{
v___x_627_ = v___x_624_;
v_isShared_628_ = v_isSharedCheck_644_;
goto v_resetjp_626_;
}
else
{
lean_inc(v_a_625_);
lean_dec(v___x_624_);
v___x_627_ = lean_box(0);
v_isShared_628_ = v_isSharedCheck_644_;
goto v_resetjp_626_;
}
v_resetjp_626_:
{
lean_object* v_size_629_; lean_object* v_buckets_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; uint8_t v___x_634_; 
v_size_629_ = lean_ctor_get(v_a_625_, 0);
lean_inc(v_size_629_);
v_buckets_630_ = lean_ctor_get(v_a_625_, 1);
lean_inc_ref(v_buckets_630_);
lean_dec(v_a_625_);
v___x_631_ = lean_mk_empty_array_with_capacity(v_size_629_);
lean_dec(v_size_629_);
v___x_632_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_633_ = lean_array_get_size(v_buckets_630_);
v___x_634_ = lean_nat_dec_lt(v___x_612_, v___x_633_);
if (v___x_634_ == 0)
{
lean_object* v___x_636_; 
lean_dec_ref(v_buckets_630_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_631_);
v___x_636_ = v___x_627_;
goto v_reusejp_635_;
}
else
{
lean_object* v_reuseFailAlloc_637_; 
v_reuseFailAlloc_637_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_637_, 0, v___x_631_);
v___x_636_ = v_reuseFailAlloc_637_;
goto v_reusejp_635_;
}
v_reusejp_635_:
{
return v___x_636_;
}
}
else
{
lean_object* v___f_638_; size_t v___x_639_; lean_object* v___x_640_; lean_object* v___x_642_; 
v___f_638_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUnique___redArg___closed__1));
v___x_639_ = lean_usize_of_nat(v___x_633_);
v___x_640_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_632_, v___f_638_, v_buckets_630_, v___x_622_, v___x_639_, v___x_631_);
if (v_isShared_628_ == 0)
{
lean_ctor_set(v___x_627_, 0, v___x_640_);
v___x_642_ = v___x_627_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_643_; 
v_reuseFailAlloc_643_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_643_, 0, v___x_640_);
v___x_642_ = v_reuseFailAlloc_643_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
return v___x_642_;
}
}
}
}
else
{
lean_object* v_a_645_; lean_object* v___x_647_; uint8_t v_isShared_648_; uint8_t v_isSharedCheck_652_; 
v_a_645_ = lean_ctor_get(v___x_624_, 0);
v_isSharedCheck_652_ = !lean_is_exclusive(v___x_624_);
if (v_isSharedCheck_652_ == 0)
{
v___x_647_ = v___x_624_;
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
else
{
lean_inc(v_a_645_);
lean_dec(v___x_624_);
v___x_647_ = lean_box(0);
v_isShared_648_ = v_isSharedCheck_652_;
goto v_resetjp_646_;
}
v_resetjp_646_:
{
lean_object* v___x_650_; 
if (v_isShared_648_ == 0)
{
v___x_650_ = v___x_647_;
goto v_reusejp_649_;
}
else
{
lean_object* v_reuseFailAlloc_651_; 
v_reuseFailAlloc_651_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_651_, 0, v_a_645_);
v___x_650_ = v_reuseFailAlloc_651_;
goto v_reusejp_649_;
}
v_reusejp_649_:
{
return v___x_650_;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___redArg___boxed(lean_object* v_inst_659_, lean_object* v_inst_660_, lean_object* v_data_661_, lean_object* v_a_662_, lean_object* v_a_663_, lean_object* v_a_664_, lean_object* v_a_665_, lean_object* v_a_666_){
_start:
{
lean_object* v_res_667_; 
v_res_667_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_659_, v_inst_660_, v_data_661_, v_a_662_, v_a_663_, v_a_664_, v_a_665_);
lean_dec(v_a_665_);
lean_dec_ref(v_a_664_);
lean_dec(v_a_663_);
lean_dec_ref(v_a_662_);
return v_res_667_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique(lean_object* v_00_u03b1_668_, lean_object* v_inst_669_, lean_object* v_inst_670_, lean_object* v_inst_671_, lean_object* v_data_672_, lean_object* v_a_673_, lean_object* v_a_674_, lean_object* v_a_675_, lean_object* v_a_676_){
_start:
{
lean_object* v___x_678_; 
v___x_678_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_670_, v_inst_671_, v_data_672_, v_a_673_, v_a_674_, v_a_675_, v_a_676_);
return v___x_678_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUnique___boxed(lean_object* v_00_u03b1_679_, lean_object* v_inst_680_, lean_object* v_inst_681_, lean_object* v_inst_682_, lean_object* v_data_683_, lean_object* v_a_684_, lean_object* v_a_685_, lean_object* v_a_686_, lean_object* v_a_687_, lean_object* v_a_688_){
_start:
{
lean_object* v_res_689_; 
v_res_689_ = l_Lean_Compiler_LCNF_Probe_countUnique(v_00_u03b1_679_, v_inst_680_, v_inst_681_, v_inst_682_, v_data_683_, v_a_684_, v_a_685_, v_a_686_, v_a_687_);
lean_dec(v_a_687_);
lean_dec_ref(v_a_686_);
lean_dec(v_a_685_);
lean_dec_ref(v_a_684_);
lean_dec_ref(v_inst_680_);
return v_res_689_;
}
}
LEAN_EXPORT uint8_t l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(lean_object* v_l_690_, lean_object* v_r_691_){
_start:
{
lean_object* v_snd_692_; lean_object* v_snd_693_; uint8_t v___x_694_; 
v_snd_692_ = lean_ctor_get(v_l_690_, 1);
v_snd_693_ = lean_ctor_get(v_r_691_, 1);
v___x_694_ = lean_nat_dec_lt(v_snd_692_, v_snd_693_);
return v___x_694_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0___boxed(lean_object* v_l_695_, lean_object* v_r_696_){
_start:
{
uint8_t v_res_697_; lean_object* v_r_698_; 
v_res_697_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___lam__0(v_l_695_, v_r_696_);
lean_dec_ref(v_r_696_);
lean_dec_ref(v_l_695_);
v_r_698_ = lean_box(v_res_697_);
return v_r_698_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(lean_object* v_inst_700_, lean_object* v_inst_701_, lean_object* v_a_702_, lean_object* v_a_703_, lean_object* v_a_704_, lean_object* v_a_705_, lean_object* v_a_706_){
_start:
{
lean_object* v___f_708_; lean_object* v___x_709_; 
v___f_708_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0));
v___x_709_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_700_, v_inst_701_, v_a_702_, v_a_703_, v_a_704_, v_a_705_, v_a_706_);
if (lean_obj_tag(v___x_709_) == 0)
{
lean_object* v_a_710_; lean_object* v___x_711_; lean_object* v___y_713_; lean_object* v___y_714_; lean_object* v___x_717_; uint8_t v___x_718_; 
v_a_710_ = lean_ctor_get(v___x_709_, 0);
v___x_711_ = lean_array_get_size(v_a_710_);
v___x_717_ = lean_unsigned_to_nat(0u);
v___x_718_ = lean_nat_dec_eq(v___x_711_, v___x_717_);
if (v___x_718_ == 0)
{
lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___y_722_; uint8_t v___x_724_; 
lean_inc(v_a_710_);
lean_dec_ref_known(v___x_709_, 1);
v___x_719_ = lean_unsigned_to_nat(1u);
v___x_720_ = lean_nat_sub(v___x_711_, v___x_719_);
v___x_724_ = lean_nat_dec_le(v___x_717_, v___x_720_);
if (v___x_724_ == 0)
{
lean_inc(v___x_720_);
v___y_722_ = v___x_720_;
goto v___jp_721_;
}
else
{
v___y_722_ = v___x_717_;
goto v___jp_721_;
}
v___jp_721_:
{
uint8_t v___x_723_; 
v___x_723_ = lean_nat_dec_le(v___y_722_, v___x_720_);
if (v___x_723_ == 0)
{
lean_dec(v___x_720_);
lean_inc(v___y_722_);
v___y_713_ = v___y_722_;
v___y_714_ = v___y_722_;
goto v___jp_712_;
}
else
{
v___y_713_ = v___y_722_;
v___y_714_ = v___x_720_;
goto v___jp_712_;
}
}
}
else
{
return v___x_709_;
}
v___jp_712_:
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_708_, v___x_711_, v_a_710_, v___y_713_, v___y_714_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_714_);
v___x_716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_716_, 0, v___x_715_);
return v___x_716_;
}
}
else
{
return v___x_709_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___boxed(lean_object* v_inst_725_, lean_object* v_inst_726_, lean_object* v_a_727_, lean_object* v_a_728_, lean_object* v_a_729_, lean_object* v_a_730_, lean_object* v_a_731_, lean_object* v_a_732_){
_start:
{
lean_object* v_res_733_; 
v_res_733_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg(v_inst_725_, v_inst_726_, v_a_727_, v_a_728_, v_a_729_, v_a_730_, v_a_731_);
lean_dec(v_a_731_);
lean_dec_ref(v_a_730_);
lean_dec(v_a_729_);
lean_dec_ref(v_a_728_);
return v_res_733_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted(lean_object* v_00_u03b1_734_, lean_object* v_inst_735_, lean_object* v_inst_736_, lean_object* v_inst_737_, lean_object* v_inst_738_, lean_object* v_a_739_, lean_object* v_a_740_, lean_object* v_a_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v___f_745_; lean_object* v___x_746_; 
v___f_745_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_countUniqueSorted___redArg___closed__0));
v___x_746_ = l_Lean_Compiler_LCNF_Probe_countUnique___redArg(v_inst_736_, v_inst_737_, v_a_739_, v_a_740_, v_a_741_, v_a_742_, v_a_743_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v___x_748_; lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___x_754_; uint8_t v___x_755_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v___x_748_ = lean_array_get_size(v_a_747_);
v___x_754_ = lean_unsigned_to_nat(0u);
v___x_755_ = lean_nat_dec_eq(v___x_748_, v___x_754_);
if (v___x_755_ == 0)
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___y_759_; uint8_t v___x_761_; 
lean_inc(v_a_747_);
lean_dec_ref_known(v___x_746_, 1);
v___x_756_ = lean_unsigned_to_nat(1u);
v___x_757_ = lean_nat_sub(v___x_748_, v___x_756_);
v___x_761_ = lean_nat_dec_le(v___x_754_, v___x_757_);
if (v___x_761_ == 0)
{
lean_inc(v___x_757_);
v___y_759_ = v___x_757_;
goto v___jp_758_;
}
else
{
v___y_759_ = v___x_754_;
goto v___jp_758_;
}
v___jp_758_:
{
uint8_t v___x_760_; 
v___x_760_ = lean_nat_dec_le(v___y_759_, v___x_757_);
if (v___x_760_ == 0)
{
lean_dec(v___x_757_);
lean_inc(v___y_759_);
v___y_750_ = v___y_759_;
v___y_751_ = v___y_759_;
goto v___jp_749_;
}
else
{
v___y_750_ = v___y_759_;
v___y_751_ = v___x_757_;
goto v___jp_749_;
}
}
}
else
{
return v___x_746_;
}
v___jp_749_:
{
lean_object* v___x_752_; lean_object* v___x_753_; 
v___x_752_ = l___private_Init_Data_Array_QSort_Basic_0__Array_qsort_sort(lean_box(0), v___f_745_, v___x_748_, v_a_747_, v___y_750_, v___y_751_, lean_box(0), lean_box(0), lean_box(0));
lean_dec(v___y_751_);
v___x_753_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_753_, 0, v___x_752_);
return v___x_753_;
}
}
else
{
return v___x_746_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_countUniqueSorted___boxed(lean_object* v_00_u03b1_762_, lean_object* v_inst_763_, lean_object* v_inst_764_, lean_object* v_inst_765_, lean_object* v_inst_766_, lean_object* v_a_767_, lean_object* v_a_768_, lean_object* v_a_769_, lean_object* v_a_770_, lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
lean_object* v_res_773_; 
v_res_773_ = l_Lean_Compiler_LCNF_Probe_countUniqueSorted(v_00_u03b1_762_, v_inst_763_, v_inst_764_, v_inst_765_, v_inst_766_, v_a_767_, v_a_768_, v_a_769_, v_a_770_, v_a_771_);
lean_dec(v_a_771_);
lean_dec_ref(v_a_770_);
lean_dec(v_a_769_);
lean_dec_ref(v_a_768_);
lean_dec(v_inst_766_);
lean_dec_ref(v_inst_763_);
return v_res_773_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(uint8_t v_pu_774_, lean_object* v_c_775_, lean_object* v_a_776_, lean_object* v_a_777_, lean_object* v_a_778_, lean_object* v_a_779_, lean_object* v_a_780_){
_start:
{
switch(lean_obj_tag(v_c_775_))
{
case 0:
{
lean_object* v_decl_782_; lean_object* v_k_783_; lean_object* v___x_784_; lean_object* v_value_785_; lean_object* v___x_786_; lean_object* v___x_787_; 
v_decl_782_ = lean_ctor_get(v_c_775_, 0);
lean_inc_ref(v_decl_782_);
v_k_783_ = lean_ctor_get(v_c_775_, 1);
lean_inc_ref(v_k_783_);
lean_dec_ref_known(v_c_775_, 2);
v___x_784_ = lean_st_ref_take(v_a_776_);
v_value_785_ = lean_ctor_get(v_decl_782_, 3);
lean_inc(v_value_785_);
lean_dec_ref(v_decl_782_);
v___x_786_ = lean_array_push(v___x_784_, v_value_785_);
v___x_787_ = lean_st_ref_put(v_a_776_, v___x_786_);
v_c_775_ = v_k_783_;
goto _start;
}
case 1:
{
lean_object* v_decl_789_; lean_object* v_k_790_; lean_object* v_value_791_; lean_object* v___x_792_; 
v_decl_789_ = lean_ctor_get(v_c_775_, 0);
lean_inc_ref(v_decl_789_);
v_k_790_ = lean_ctor_get(v_c_775_, 1);
lean_inc_ref(v_k_790_);
lean_dec_ref_known(v_c_775_, 2);
v_value_791_ = lean_ctor_get(v_decl_789_, 4);
lean_inc_ref(v_value_791_);
lean_dec_ref(v_decl_789_);
v___x_792_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_774_, v_value_791_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
if (lean_obj_tag(v___x_792_) == 0)
{
lean_dec_ref_known(v___x_792_, 1);
v_c_775_ = v_k_790_;
goto _start;
}
else
{
lean_dec_ref(v_k_790_);
return v___x_792_;
}
}
case 2:
{
lean_object* v_decl_794_; lean_object* v_k_795_; lean_object* v_value_796_; lean_object* v___x_797_; 
v_decl_794_ = lean_ctor_get(v_c_775_, 0);
lean_inc_ref(v_decl_794_);
v_k_795_ = lean_ctor_get(v_c_775_, 1);
lean_inc_ref(v_k_795_);
lean_dec_ref_known(v_c_775_, 2);
v_value_796_ = lean_ctor_get(v_decl_794_, 4);
lean_inc_ref(v_value_796_);
lean_dec_ref(v_decl_794_);
v___x_797_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_774_, v_value_796_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
if (lean_obj_tag(v___x_797_) == 0)
{
lean_dec_ref_known(v___x_797_, 1);
v_c_775_ = v_k_795_;
goto _start;
}
else
{
lean_dec_ref(v_k_795_);
return v___x_797_;
}
}
case 4:
{
lean_object* v_cases_799_; lean_object* v___x_801_; uint8_t v_isShared_802_; uint8_t v_isSharedCheck_814_; 
v_cases_799_ = lean_ctor_get(v_c_775_, 0);
v_isSharedCheck_814_ = !lean_is_exclusive(v_c_775_);
if (v_isSharedCheck_814_ == 0)
{
v___x_801_ = v_c_775_;
v_isShared_802_ = v_isSharedCheck_814_;
goto v_resetjp_800_;
}
else
{
lean_inc(v_cases_799_);
lean_dec(v_c_775_);
v___x_801_ = lean_box(0);
v_isShared_802_ = v_isSharedCheck_814_;
goto v_resetjp_800_;
}
v_resetjp_800_:
{
lean_object* v_alts_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v_alts_803_ = lean_ctor_get(v_cases_799_, 3);
lean_inc_ref(v_alts_803_);
lean_dec_ref(v_cases_799_);
v___x_804_ = lean_unsigned_to_nat(0u);
v___x_805_ = lean_array_get_size(v_alts_803_);
v___x_806_ = lean_box(0);
v___x_807_ = lean_nat_dec_lt(v___x_804_, v___x_805_);
if (v___x_807_ == 0)
{
lean_object* v___x_809_; 
lean_dec_ref(v_alts_803_);
if (v_isShared_802_ == 0)
{
lean_ctor_set_tag(v___x_801_, 0);
lean_ctor_set(v___x_801_, 0, v___x_806_);
v___x_809_ = v___x_801_;
goto v_reusejp_808_;
}
else
{
lean_object* v_reuseFailAlloc_810_; 
v_reuseFailAlloc_810_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_810_, 0, v___x_806_);
v___x_809_ = v_reuseFailAlloc_810_;
goto v_reusejp_808_;
}
v_reusejp_808_:
{
return v___x_809_;
}
}
else
{
size_t v___x_811_; size_t v___x_812_; lean_object* v___x_813_; 
lean_del_object(v___x_801_);
v___x_811_ = ((size_t)0ULL);
v___x_812_ = lean_usize_of_nat(v___x_805_);
v___x_813_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_774_, v_alts_803_, v___x_811_, v___x_812_, v___x_806_, v_a_776_, v_a_777_, v_a_778_, v_a_779_, v_a_780_);
lean_dec_ref(v_alts_803_);
return v___x_813_;
}
}
}
case 7:
{
lean_object* v_k_815_; 
v_k_815_ = lean_ctor_get(v_c_775_, 3);
lean_inc_ref(v_k_815_);
lean_dec_ref_known(v_c_775_, 4);
v_c_775_ = v_k_815_;
goto _start;
}
case 8:
{
lean_object* v_k_817_; 
v_k_817_ = lean_ctor_get(v_c_775_, 3);
lean_inc_ref(v_k_817_);
lean_dec_ref_known(v_c_775_, 4);
v_c_775_ = v_k_817_;
goto _start;
}
case 9:
{
lean_object* v_k_819_; 
v_k_819_ = lean_ctor_get(v_c_775_, 5);
lean_inc_ref(v_k_819_);
lean_dec_ref_known(v_c_775_, 6);
v_c_775_ = v_k_819_;
goto _start;
}
case 10:
{
lean_object* v_k_821_; 
v_k_821_ = lean_ctor_get(v_c_775_, 2);
lean_inc_ref(v_k_821_);
lean_dec_ref_known(v_c_775_, 3);
v_c_775_ = v_k_821_;
goto _start;
}
case 11:
{
lean_object* v_k_823_; 
v_k_823_ = lean_ctor_get(v_c_775_, 2);
lean_inc_ref(v_k_823_);
lean_dec_ref_known(v_c_775_, 3);
v_c_775_ = v_k_823_;
goto _start;
}
case 12:
{
lean_object* v_k_825_; 
v_k_825_ = lean_ctor_get(v_c_775_, 3);
lean_inc_ref(v_k_825_);
lean_dec_ref_known(v_c_775_, 4);
v_c_775_ = v_k_825_;
goto _start;
}
case 13:
{
lean_object* v_k_827_; 
v_k_827_ = lean_ctor_get(v_c_775_, 1);
lean_inc_ref(v_k_827_);
lean_dec_ref_known(v_c_775_, 2);
v_c_775_ = v_k_827_;
goto _start;
}
default: 
{
lean_object* v___x_829_; lean_object* v___x_830_; 
lean_dec_ref(v_c_775_);
v___x_829_ = lean_box(0);
v___x_830_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_830_, 0, v___x_829_);
return v___x_830_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(uint8_t v_pu_831_, lean_object* v_as_832_, size_t v_i_833_, size_t v_stop_834_, lean_object* v_b_835_, lean_object* v___y_836_, lean_object* v___y_837_, lean_object* v___y_838_, lean_object* v___y_839_, lean_object* v___y_840_){
_start:
{
lean_object* v___y_843_; uint8_t v___x_849_; 
v___x_849_ = lean_usize_dec_eq(v_i_833_, v_stop_834_);
if (v___x_849_ == 0)
{
lean_object* v___x_850_; 
v___x_850_ = lean_array_uget_borrowed(v_as_832_, v_i_833_);
switch(lean_obj_tag(v___x_850_))
{
case 0:
{
lean_object* v_code_851_; 
v_code_851_ = lean_ctor_get(v___x_850_, 2);
lean_inc_ref(v_code_851_);
v___y_843_ = v_code_851_;
goto v___jp_842_;
}
case 1:
{
lean_object* v_code_852_; 
v_code_852_ = lean_ctor_get(v___x_850_, 1);
lean_inc_ref(v_code_852_);
v___y_843_ = v_code_852_;
goto v___jp_842_;
}
default: 
{
lean_object* v_code_853_; 
v_code_853_ = lean_ctor_get(v___x_850_, 0);
lean_inc_ref(v_code_853_);
v___y_843_ = v_code_853_;
goto v___jp_842_;
}
}
}
else
{
lean_object* v___x_854_; 
v___x_854_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_854_, 0, v_b_835_);
return v___x_854_;
}
v___jp_842_:
{
lean_object* v___x_844_; 
v___x_844_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_831_, v___y_843_, v___y_836_, v___y_837_, v___y_838_, v___y_839_, v___y_840_);
if (lean_obj_tag(v___x_844_) == 0)
{
lean_object* v_a_845_; size_t v___x_846_; size_t v___x_847_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_844_, 1);
v___x_846_ = ((size_t)1ULL);
v___x_847_ = lean_usize_add(v_i_833_, v___x_846_);
v_i_833_ = v___x_847_;
v_b_835_ = v_a_845_;
goto _start;
}
else
{
return v___x_844_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0___boxed(lean_object* v_pu_855_, lean_object* v_as_856_, lean_object* v_i_857_, lean_object* v_stop_858_, lean_object* v_b_859_, lean_object* v___y_860_, lean_object* v___y_861_, lean_object* v___y_862_, lean_object* v___y_863_, lean_object* v___y_864_, lean_object* v___y_865_){
_start:
{
uint8_t v_pu_boxed_866_; size_t v_i_boxed_867_; size_t v_stop_boxed_868_; lean_object* v_res_869_; 
v_pu_boxed_866_ = lean_unbox(v_pu_855_);
v_i_boxed_867_ = lean_unbox_usize(v_i_857_);
lean_dec(v_i_857_);
v_stop_boxed_868_ = lean_unbox_usize(v_stop_858_);
lean_dec(v_stop_858_);
v_res_869_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go_spec__0(v_pu_boxed_866_, v_as_856_, v_i_boxed_867_, v_stop_boxed_868_, v_b_859_, v___y_860_, v___y_861_, v___y_862_, v___y_863_, v___y_864_);
lean_dec(v___y_864_);
lean_dec_ref(v___y_863_);
lean_dec(v___y_862_);
lean_dec_ref(v___y_861_);
lean_dec(v___y_860_);
lean_dec_ref(v_as_856_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed(lean_object* v_pu_870_, lean_object* v_c_871_, lean_object* v_a_872_, lean_object* v_a_873_, lean_object* v_a_874_, lean_object* v_a_875_, lean_object* v_a_876_, lean_object* v_a_877_){
_start:
{
uint8_t v_pu_boxed_878_; lean_object* v_res_879_; 
v_pu_boxed_878_ = lean_unbox(v_pu_870_);
v_res_879_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go(v_pu_boxed_878_, v_c_871_, v_a_872_, v_a_873_, v_a_874_, v_a_875_, v_a_876_);
lean_dec(v_a_876_);
lean_dec_ref(v_a_875_);
lean_dec(v_a_874_);
lean_dec_ref(v_a_873_);
lean_dec(v_a_872_);
return v_res_879_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(lean_object* v_f_880_, lean_object* v_v_881_, lean_object* v___y_882_, lean_object* v___y_883_, lean_object* v___y_884_, lean_object* v___y_885_, lean_object* v___y_886_){
_start:
{
if (lean_obj_tag(v_v_881_) == 0)
{
lean_object* v_code_888_; lean_object* v___x_889_; 
v_code_888_ = lean_ctor_get(v_v_881_, 0);
lean_inc_ref(v_code_888_);
lean_dec_ref_known(v_v_881_, 1);
lean_inc(v___y_886_);
lean_inc_ref(v___y_885_);
lean_inc(v___y_884_);
lean_inc_ref(v___y_883_);
lean_inc(v___y_882_);
v___x_889_ = lean_apply_7(v_f_880_, v_code_888_, v___y_882_, v___y_883_, v___y_884_, v___y_885_, v___y_886_, lean_box(0));
return v___x_889_;
}
else
{
lean_object* v___x_891_; uint8_t v_isShared_892_; uint8_t v_isSharedCheck_897_; 
lean_dec_ref(v_f_880_);
v_isSharedCheck_897_ = !lean_is_exclusive(v_v_881_);
if (v_isSharedCheck_897_ == 0)
{
lean_object* v_unused_898_; 
v_unused_898_ = lean_ctor_get(v_v_881_, 0);
lean_dec(v_unused_898_);
v___x_891_ = v_v_881_;
v_isShared_892_ = v_isSharedCheck_897_;
goto v_resetjp_890_;
}
else
{
lean_dec(v_v_881_);
v___x_891_ = lean_box(0);
v_isShared_892_ = v_isSharedCheck_897_;
goto v_resetjp_890_;
}
v_resetjp_890_:
{
lean_object* v___x_893_; lean_object* v___x_895_; 
v___x_893_ = lean_box(0);
if (v_isShared_892_ == 0)
{
lean_ctor_set_tag(v___x_891_, 0);
lean_ctor_set(v___x_891_, 0, v___x_893_);
v___x_895_ = v___x_891_;
goto v_reusejp_894_;
}
else
{
lean_object* v_reuseFailAlloc_896_; 
v_reuseFailAlloc_896_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_896_, 0, v___x_893_);
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
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg___boxed(lean_object* v_f_899_, lean_object* v_v_900_, lean_object* v___y_901_, lean_object* v___y_902_, lean_object* v___y_903_, lean_object* v___y_904_, lean_object* v___y_905_, lean_object* v___y_906_){
_start:
{
lean_object* v_res_907_; 
v_res_907_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_899_, v_v_900_, v___y_901_, v___y_902_, v___y_903_, v___y_904_, v___y_905_);
lean_dec(v___y_905_);
lean_dec_ref(v___y_904_);
lean_dec(v___y_903_);
lean_dec_ref(v___y_902_);
lean_dec(v___y_901_);
return v_res_907_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(uint8_t v_pu_908_, lean_object* v_f_909_, lean_object* v_v_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; 
v___x_917_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v_f_909_, v_v_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___boxed(lean_object* v_pu_918_, lean_object* v_f_919_, lean_object* v_v_920_, lean_object* v___y_921_, lean_object* v___y_922_, lean_object* v___y_923_, lean_object* v___y_924_, lean_object* v___y_925_, lean_object* v___y_926_){
_start:
{
uint8_t v_pu_boxed_927_; lean_object* v_res_928_; 
v_pu_boxed_927_ = lean_unbox(v_pu_918_);
v_res_928_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0(v_pu_boxed_927_, v_f_919_, v_v_920_, v___y_921_, v___y_922_, v___y_923_, v___y_924_, v___y_925_);
lean_dec(v___y_925_);
lean_dec_ref(v___y_924_);
lean_dec(v___y_923_);
lean_dec_ref(v___y_922_);
lean_dec(v___y_921_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(uint8_t v_pu_929_, lean_object* v_as_930_, size_t v_i_931_, size_t v_stop_932_, lean_object* v_b_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_, lean_object* v___y_937_, lean_object* v___y_938_){
_start:
{
uint8_t v___x_940_; 
v___x_940_ = lean_usize_dec_eq(v_i_931_, v_stop_932_);
if (v___x_940_ == 0)
{
lean_object* v___x_941_; lean_object* v_value_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; 
v___x_941_ = lean_array_uget_borrowed(v_as_930_, v_i_931_);
v_value_942_ = lean_ctor_get(v___x_941_, 1);
v___x_943_ = lean_box(v_pu_929_);
v___x_944_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_go___boxed), 8, 1);
lean_closure_set(v___x_944_, 0, v___x_943_);
lean_inc_ref(v_value_942_);
v___x_945_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__0___redArg(v___x_944_, v_value_942_, v___y_934_, v___y_935_, v___y_936_, v___y_937_, v___y_938_);
if (lean_obj_tag(v___x_945_) == 0)
{
lean_object* v_a_946_; size_t v___x_947_; size_t v___x_948_; 
v_a_946_ = lean_ctor_get(v___x_945_, 0);
lean_inc(v_a_946_);
lean_dec_ref_known(v___x_945_, 1);
v___x_947_ = ((size_t)1ULL);
v___x_948_ = lean_usize_add(v_i_931_, v___x_947_);
v_i_931_ = v___x_948_;
v_b_933_ = v_a_946_;
goto _start;
}
else
{
return v___x_945_;
}
}
else
{
lean_object* v___x_950_; 
v___x_950_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_950_, 0, v_b_933_);
return v___x_950_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1___boxed(lean_object* v_pu_951_, lean_object* v_as_952_, lean_object* v_i_953_, lean_object* v_stop_954_, lean_object* v_b_955_, lean_object* v___y_956_, lean_object* v___y_957_, lean_object* v___y_958_, lean_object* v___y_959_, lean_object* v___y_960_, lean_object* v___y_961_){
_start:
{
uint8_t v_pu_boxed_962_; size_t v_i_boxed_963_; size_t v_stop_boxed_964_; lean_object* v_res_965_; 
v_pu_boxed_962_ = lean_unbox(v_pu_951_);
v_i_boxed_963_ = lean_unbox_usize(v_i_953_);
lean_dec(v_i_953_);
v_stop_boxed_964_ = lean_unbox_usize(v_stop_954_);
lean_dec(v_stop_954_);
v_res_965_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_boxed_962_, v_as_952_, v_i_boxed_963_, v_stop_boxed_964_, v_b_955_, v___y_956_, v___y_957_, v___y_958_, v___y_959_, v___y_960_);
lean_dec(v___y_960_);
lean_dec_ref(v___y_959_);
lean_dec(v___y_958_);
lean_dec_ref(v___y_957_);
lean_dec(v___y_956_);
lean_dec_ref(v_as_952_);
return v_res_965_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(uint8_t v_pu_966_, lean_object* v_decls_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_){
_start:
{
lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; uint8_t v___x_977_; 
v___x_974_ = lean_unsigned_to_nat(0u);
v___x_975_ = lean_array_get_size(v_decls_967_);
v___x_976_ = lean_box(0);
v___x_977_ = lean_nat_dec_lt(v___x_974_, v___x_975_);
if (v___x_977_ == 0)
{
lean_object* v___x_978_; 
v___x_978_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_978_, 0, v___x_976_);
return v___x_978_;
}
else
{
size_t v___x_979_; size_t v___x_980_; lean_object* v___x_981_; 
v___x_979_ = ((size_t)0ULL);
v___x_980_ = lean_usize_of_nat(v___x_975_);
v___x_981_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start_spec__1(v_pu_966_, v_decls_967_, v___x_979_, v___x_980_, v___x_976_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_);
return v___x_981_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start___boxed(lean_object* v_pu_982_, lean_object* v_decls_983_, lean_object* v_a_984_, lean_object* v_a_985_, lean_object* v_a_986_, lean_object* v_a_987_, lean_object* v_a_988_, lean_object* v_a_989_){
_start:
{
uint8_t v_pu_boxed_990_; lean_object* v_res_991_; 
v_pu_boxed_990_ = lean_unbox(v_pu_982_);
v_res_991_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_boxed_990_, v_decls_983_, v_a_984_, v_a_985_, v_a_986_, v_a_987_, v_a_988_);
lean_dec(v_a_988_);
lean_dec_ref(v_a_987_);
lean_dec(v_a_986_);
lean_dec_ref(v_a_985_);
lean_dec(v_a_984_);
lean_dec_ref(v_decls_983_);
return v_res_991_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues(uint8_t v_pu_994_, lean_object* v_decls_995_, lean_object* v_a_996_, lean_object* v_a_997_, lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
lean_object* v___x_1001_; lean_object* v___x_1002_; lean_object* v___x_1003_; 
v___x_1001_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_getLetValues___closed__0));
v___x_1002_ = lean_st_mk_ref(v___x_1001_);
v___x_1003_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getLetValues_start(v_pu_994_, v_decls_995_, v___x_1002_, v_a_996_, v_a_997_, v_a_998_, v_a_999_);
if (lean_obj_tag(v___x_1003_) == 0)
{
lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1011_; 
v_isSharedCheck_1011_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1011_ == 0)
{
lean_object* v_unused_1012_; 
v_unused_1012_ = lean_ctor_get(v___x_1003_, 0);
lean_dec(v_unused_1012_);
v___x_1005_ = v___x_1003_;
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
else
{
lean_dec(v___x_1003_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1011_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v___x_1007_; lean_object* v___x_1009_; 
v___x_1007_ = lean_st_ref_get(v___x_1002_);
lean_dec(v___x_1002_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 0, v___x_1007_);
v___x_1009_ = v___x_1005_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1010_; 
v_reuseFailAlloc_1010_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1010_, 0, v___x_1007_);
v___x_1009_ = v_reuseFailAlloc_1010_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
return v___x_1009_;
}
}
}
else
{
lean_object* v_a_1013_; lean_object* v___x_1015_; uint8_t v_isShared_1016_; uint8_t v_isSharedCheck_1020_; 
lean_dec(v___x_1002_);
v_a_1013_ = lean_ctor_get(v___x_1003_, 0);
v_isSharedCheck_1020_ = !lean_is_exclusive(v___x_1003_);
if (v_isSharedCheck_1020_ == 0)
{
v___x_1015_ = v___x_1003_;
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
else
{
lean_inc(v_a_1013_);
lean_dec(v___x_1003_);
v___x_1015_ = lean_box(0);
v_isShared_1016_ = v_isSharedCheck_1020_;
goto v_resetjp_1014_;
}
v_resetjp_1014_:
{
lean_object* v___x_1018_; 
if (v_isShared_1016_ == 0)
{
v___x_1018_ = v___x_1015_;
goto v_reusejp_1017_;
}
else
{
lean_object* v_reuseFailAlloc_1019_; 
v_reuseFailAlloc_1019_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1019_, 0, v_a_1013_);
v___x_1018_ = v_reuseFailAlloc_1019_;
goto v_reusejp_1017_;
}
v_reusejp_1017_:
{
return v___x_1018_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getLetValues___boxed(lean_object* v_pu_1021_, lean_object* v_decls_1022_, lean_object* v_a_1023_, lean_object* v_a_1024_, lean_object* v_a_1025_, lean_object* v_a_1026_, lean_object* v_a_1027_){
_start:
{
uint8_t v_pu_boxed_1028_; lean_object* v_res_1029_; 
v_pu_boxed_1028_ = lean_unbox(v_pu_1021_);
v_res_1029_ = l_Lean_Compiler_LCNF_Probe_getLetValues(v_pu_boxed_1028_, v_decls_1022_, v_a_1023_, v_a_1024_, v_a_1025_, v_a_1026_);
lean_dec(v_a_1026_);
lean_dec_ref(v_a_1025_);
lean_dec(v_a_1024_);
lean_dec_ref(v_a_1023_);
lean_dec_ref(v_decls_1022_);
return v_res_1029_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(uint8_t v_pu_1030_, lean_object* v_code_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_, lean_object* v_a_1034_, lean_object* v_a_1035_, lean_object* v_a_1036_){
_start:
{
switch(lean_obj_tag(v_code_1031_))
{
case 0:
{
lean_object* v_k_1038_; 
v_k_1038_ = lean_ctor_get(v_code_1031_, 1);
lean_inc_ref(v_k_1038_);
lean_dec_ref_known(v_code_1031_, 2);
v_code_1031_ = v_k_1038_;
goto _start;
}
case 1:
{
lean_object* v_decl_1040_; lean_object* v_k_1041_; lean_object* v_value_1042_; lean_object* v___x_1043_; 
v_decl_1040_ = lean_ctor_get(v_code_1031_, 0);
lean_inc_ref(v_decl_1040_);
v_k_1041_ = lean_ctor_get(v_code_1031_, 1);
lean_inc_ref(v_k_1041_);
lean_dec_ref_known(v_code_1031_, 2);
v_value_1042_ = lean_ctor_get(v_decl_1040_, 4);
lean_inc_ref(v_value_1042_);
lean_dec_ref(v_decl_1040_);
v___x_1043_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1030_, v_value_1042_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
if (lean_obj_tag(v___x_1043_) == 0)
{
lean_dec_ref_known(v___x_1043_, 1);
v_code_1031_ = v_k_1041_;
goto _start;
}
else
{
lean_dec_ref(v_k_1041_);
return v___x_1043_;
}
}
case 2:
{
lean_object* v_decl_1045_; lean_object* v_k_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v_value_1050_; lean_object* v___x_1051_; 
v_decl_1045_ = lean_ctor_get(v_code_1031_, 0);
lean_inc_ref_n(v_decl_1045_, 2);
v_k_1046_ = lean_ctor_get(v_code_1031_, 1);
lean_inc_ref(v_k_1046_);
lean_dec_ref_known(v_code_1031_, 2);
v___x_1047_ = lean_st_ref_take(v_a_1032_);
v___x_1048_ = lean_array_push(v___x_1047_, v_decl_1045_);
v___x_1049_ = lean_st_ref_put(v_a_1032_, v___x_1048_);
v_value_1050_ = lean_ctor_get(v_decl_1045_, 4);
lean_inc_ref(v_value_1050_);
lean_dec_ref(v_decl_1045_);
v___x_1051_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1030_, v_value_1050_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
if (lean_obj_tag(v___x_1051_) == 0)
{
lean_dec_ref_known(v___x_1051_, 1);
v_code_1031_ = v_k_1046_;
goto _start;
}
else
{
lean_dec_ref(v_k_1046_);
return v___x_1051_;
}
}
case 4:
{
lean_object* v_cases_1053_; lean_object* v___x_1055_; uint8_t v_isShared_1056_; uint8_t v_isSharedCheck_1068_; 
v_cases_1053_ = lean_ctor_get(v_code_1031_, 0);
v_isSharedCheck_1068_ = !lean_is_exclusive(v_code_1031_);
if (v_isSharedCheck_1068_ == 0)
{
v___x_1055_ = v_code_1031_;
v_isShared_1056_ = v_isSharedCheck_1068_;
goto v_resetjp_1054_;
}
else
{
lean_inc(v_cases_1053_);
lean_dec(v_code_1031_);
v___x_1055_ = lean_box(0);
v_isShared_1056_ = v_isSharedCheck_1068_;
goto v_resetjp_1054_;
}
v_resetjp_1054_:
{
lean_object* v_alts_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; uint8_t v___x_1061_; 
v_alts_1057_ = lean_ctor_get(v_cases_1053_, 3);
lean_inc_ref(v_alts_1057_);
lean_dec_ref(v_cases_1053_);
v___x_1058_ = lean_unsigned_to_nat(0u);
v___x_1059_ = lean_array_get_size(v_alts_1057_);
v___x_1060_ = lean_box(0);
v___x_1061_ = lean_nat_dec_lt(v___x_1058_, v___x_1059_);
if (v___x_1061_ == 0)
{
lean_object* v___x_1063_; 
lean_dec_ref(v_alts_1057_);
if (v_isShared_1056_ == 0)
{
lean_ctor_set_tag(v___x_1055_, 0);
lean_ctor_set(v___x_1055_, 0, v___x_1060_);
v___x_1063_ = v___x_1055_;
goto v_reusejp_1062_;
}
else
{
lean_object* v_reuseFailAlloc_1064_; 
v_reuseFailAlloc_1064_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1064_, 0, v___x_1060_);
v___x_1063_ = v_reuseFailAlloc_1064_;
goto v_reusejp_1062_;
}
v_reusejp_1062_:
{
return v___x_1063_;
}
}
else
{
size_t v___x_1065_; size_t v___x_1066_; lean_object* v___x_1067_; 
lean_del_object(v___x_1055_);
v___x_1065_ = ((size_t)0ULL);
v___x_1066_ = lean_usize_of_nat(v___x_1059_);
v___x_1067_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_1030_, v_alts_1057_, v___x_1065_, v___x_1066_, v___x_1060_, v_a_1032_, v_a_1033_, v_a_1034_, v_a_1035_, v_a_1036_);
lean_dec_ref(v_alts_1057_);
return v___x_1067_;
}
}
}
case 7:
{
lean_object* v_k_1069_; 
v_k_1069_ = lean_ctor_get(v_code_1031_, 3);
lean_inc_ref(v_k_1069_);
lean_dec_ref_known(v_code_1031_, 4);
v_code_1031_ = v_k_1069_;
goto _start;
}
case 8:
{
lean_object* v_k_1071_; 
v_k_1071_ = lean_ctor_get(v_code_1031_, 3);
lean_inc_ref(v_k_1071_);
lean_dec_ref_known(v_code_1031_, 4);
v_code_1031_ = v_k_1071_;
goto _start;
}
case 9:
{
lean_object* v_k_1073_; 
v_k_1073_ = lean_ctor_get(v_code_1031_, 5);
lean_inc_ref(v_k_1073_);
lean_dec_ref_known(v_code_1031_, 6);
v_code_1031_ = v_k_1073_;
goto _start;
}
case 10:
{
lean_object* v_k_1075_; 
v_k_1075_ = lean_ctor_get(v_code_1031_, 2);
lean_inc_ref(v_k_1075_);
lean_dec_ref_known(v_code_1031_, 3);
v_code_1031_ = v_k_1075_;
goto _start;
}
case 11:
{
lean_object* v_k_1077_; 
v_k_1077_ = lean_ctor_get(v_code_1031_, 2);
lean_inc_ref(v_k_1077_);
lean_dec_ref_known(v_code_1031_, 3);
v_code_1031_ = v_k_1077_;
goto _start;
}
case 12:
{
lean_object* v_k_1079_; 
v_k_1079_ = lean_ctor_get(v_code_1031_, 3);
lean_inc_ref(v_k_1079_);
lean_dec_ref_known(v_code_1031_, 4);
v_code_1031_ = v_k_1079_;
goto _start;
}
case 13:
{
lean_object* v_k_1081_; 
v_k_1081_ = lean_ctor_get(v_code_1031_, 1);
lean_inc_ref(v_k_1081_);
lean_dec_ref_known(v_code_1031_, 2);
v_code_1031_ = v_k_1081_;
goto _start;
}
default: 
{
lean_object* v___x_1083_; lean_object* v___x_1084_; 
lean_dec_ref(v_code_1031_);
v___x_1083_ = lean_box(0);
v___x_1084_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1084_, 0, v___x_1083_);
return v___x_1084_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(uint8_t v_pu_1085_, lean_object* v_as_1086_, size_t v_i_1087_, size_t v_stop_1088_, lean_object* v_b_1089_, lean_object* v___y_1090_, lean_object* v___y_1091_, lean_object* v___y_1092_, lean_object* v___y_1093_, lean_object* v___y_1094_){
_start:
{
lean_object* v___y_1097_; uint8_t v___x_1103_; 
v___x_1103_ = lean_usize_dec_eq(v_i_1087_, v_stop_1088_);
if (v___x_1103_ == 0)
{
lean_object* v___x_1104_; 
v___x_1104_ = lean_array_uget_borrowed(v_as_1086_, v_i_1087_);
switch(lean_obj_tag(v___x_1104_))
{
case 0:
{
lean_object* v_code_1105_; 
v_code_1105_ = lean_ctor_get(v___x_1104_, 2);
lean_inc_ref(v_code_1105_);
v___y_1097_ = v_code_1105_;
goto v___jp_1096_;
}
case 1:
{
lean_object* v_code_1106_; 
v_code_1106_ = lean_ctor_get(v___x_1104_, 1);
lean_inc_ref(v_code_1106_);
v___y_1097_ = v_code_1106_;
goto v___jp_1096_;
}
default: 
{
lean_object* v_code_1107_; 
v_code_1107_ = lean_ctor_get(v___x_1104_, 0);
lean_inc_ref(v_code_1107_);
v___y_1097_ = v_code_1107_;
goto v___jp_1096_;
}
}
}
else
{
lean_object* v___x_1108_; 
v___x_1108_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1108_, 0, v_b_1089_);
return v___x_1108_;
}
v___jp_1096_:
{
lean_object* v___x_1098_; 
v___x_1098_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_1085_, v___y_1097_, v___y_1090_, v___y_1091_, v___y_1092_, v___y_1093_, v___y_1094_);
if (lean_obj_tag(v___x_1098_) == 0)
{
lean_object* v_a_1099_; size_t v___x_1100_; size_t v___x_1101_; 
v_a_1099_ = lean_ctor_get(v___x_1098_, 0);
lean_inc(v_a_1099_);
lean_dec_ref_known(v___x_1098_, 1);
v___x_1100_ = ((size_t)1ULL);
v___x_1101_ = lean_usize_add(v_i_1087_, v___x_1100_);
v_i_1087_ = v___x_1101_;
v_b_1089_ = v_a_1099_;
goto _start;
}
else
{
return v___x_1098_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0___boxed(lean_object* v_pu_1109_, lean_object* v_as_1110_, lean_object* v_i_1111_, lean_object* v_stop_1112_, lean_object* v_b_1113_, lean_object* v___y_1114_, lean_object* v___y_1115_, lean_object* v___y_1116_, lean_object* v___y_1117_, lean_object* v___y_1118_, lean_object* v___y_1119_){
_start:
{
uint8_t v_pu_boxed_1120_; size_t v_i_boxed_1121_; size_t v_stop_boxed_1122_; lean_object* v_res_1123_; 
v_pu_boxed_1120_ = lean_unbox(v_pu_1109_);
v_i_boxed_1121_ = lean_unbox_usize(v_i_1111_);
lean_dec(v_i_1111_);
v_stop_boxed_1122_ = lean_unbox_usize(v_stop_1112_);
lean_dec(v_stop_1112_);
v_res_1123_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go_spec__0(v_pu_boxed_1120_, v_as_1110_, v_i_boxed_1121_, v_stop_boxed_1122_, v_b_1113_, v___y_1114_, v___y_1115_, v___y_1116_, v___y_1117_, v___y_1118_);
lean_dec(v___y_1118_);
lean_dec_ref(v___y_1117_);
lean_dec(v___y_1116_);
lean_dec_ref(v___y_1115_);
lean_dec(v___y_1114_);
lean_dec_ref(v_as_1110_);
return v_res_1123_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed(lean_object* v_pu_1124_, lean_object* v_code_1125_, lean_object* v_a_1126_, lean_object* v_a_1127_, lean_object* v_a_1128_, lean_object* v_a_1129_, lean_object* v_a_1130_, lean_object* v_a_1131_){
_start:
{
uint8_t v_pu_boxed_1132_; lean_object* v_res_1133_; 
v_pu_boxed_1132_ = lean_unbox(v_pu_1124_);
v_res_1133_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go(v_pu_boxed_1132_, v_code_1125_, v_a_1126_, v_a_1127_, v_a_1128_, v_a_1129_, v_a_1130_);
lean_dec(v_a_1130_);
lean_dec_ref(v_a_1129_);
lean_dec(v_a_1128_);
lean_dec_ref(v_a_1127_);
lean_dec(v_a_1126_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(lean_object* v_f_1134_, lean_object* v_v_1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_){
_start:
{
if (lean_obj_tag(v_v_1135_) == 0)
{
lean_object* v_code_1142_; lean_object* v___x_1143_; 
v_code_1142_ = lean_ctor_get(v_v_1135_, 0);
lean_inc_ref(v_code_1142_);
lean_dec_ref_known(v_v_1135_, 1);
lean_inc(v___y_1140_);
lean_inc_ref(v___y_1139_);
lean_inc(v___y_1138_);
lean_inc_ref(v___y_1137_);
lean_inc(v___y_1136_);
v___x_1143_ = lean_apply_7(v_f_1134_, v_code_1142_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, lean_box(0));
return v___x_1143_;
}
else
{
lean_object* v___x_1145_; uint8_t v_isShared_1146_; uint8_t v_isSharedCheck_1151_; 
lean_dec_ref(v_f_1134_);
v_isSharedCheck_1151_ = !lean_is_exclusive(v_v_1135_);
if (v_isSharedCheck_1151_ == 0)
{
lean_object* v_unused_1152_; 
v_unused_1152_ = lean_ctor_get(v_v_1135_, 0);
lean_dec(v_unused_1152_);
v___x_1145_ = v_v_1135_;
v_isShared_1146_ = v_isSharedCheck_1151_;
goto v_resetjp_1144_;
}
else
{
lean_dec(v_v_1135_);
v___x_1145_ = lean_box(0);
v_isShared_1146_ = v_isSharedCheck_1151_;
goto v_resetjp_1144_;
}
v_resetjp_1144_:
{
lean_object* v___x_1147_; lean_object* v___x_1149_; 
v___x_1147_ = lean_box(0);
if (v_isShared_1146_ == 0)
{
lean_ctor_set_tag(v___x_1145_, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1147_);
v___x_1149_ = v___x_1145_;
goto v_reusejp_1148_;
}
else
{
lean_object* v_reuseFailAlloc_1150_; 
v_reuseFailAlloc_1150_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1150_, 0, v___x_1147_);
v___x_1149_ = v_reuseFailAlloc_1150_;
goto v_reusejp_1148_;
}
v_reusejp_1148_:
{
return v___x_1149_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg___boxed(lean_object* v_f_1153_, lean_object* v_v_1154_, lean_object* v___y_1155_, lean_object* v___y_1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_){
_start:
{
lean_object* v_res_1161_; 
v_res_1161_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1153_, v_v_1154_, v___y_1155_, v___y_1156_, v___y_1157_, v___y_1158_, v___y_1159_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
lean_dec(v___y_1157_);
lean_dec_ref(v___y_1156_);
lean_dec(v___y_1155_);
return v_res_1161_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(uint8_t v_pu_1162_, lean_object* v_f_1163_, lean_object* v_v_1164_, lean_object* v___y_1165_, lean_object* v___y_1166_, lean_object* v___y_1167_, lean_object* v___y_1168_, lean_object* v___y_1169_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v_f_1163_, v_v_1164_, v___y_1165_, v___y_1166_, v___y_1167_, v___y_1168_, v___y_1169_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___boxed(lean_object* v_pu_1172_, lean_object* v_f_1173_, lean_object* v_v_1174_, lean_object* v___y_1175_, lean_object* v___y_1176_, lean_object* v___y_1177_, lean_object* v___y_1178_, lean_object* v___y_1179_, lean_object* v___y_1180_){
_start:
{
uint8_t v_pu_boxed_1181_; lean_object* v_res_1182_; 
v_pu_boxed_1181_ = lean_unbox(v_pu_1172_);
v_res_1182_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0(v_pu_boxed_1181_, v_f_1173_, v_v_1174_, v___y_1175_, v___y_1176_, v___y_1177_, v___y_1178_, v___y_1179_);
lean_dec(v___y_1179_);
lean_dec_ref(v___y_1178_);
lean_dec(v___y_1177_);
lean_dec_ref(v___y_1176_);
lean_dec(v___y_1175_);
return v_res_1182_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(uint8_t v_pu_1183_, lean_object* v_as_1184_, size_t v_i_1185_, size_t v_stop_1186_, lean_object* v_b_1187_, lean_object* v___y_1188_, lean_object* v___y_1189_, lean_object* v___y_1190_, lean_object* v___y_1191_, lean_object* v___y_1192_){
_start:
{
uint8_t v___x_1194_; 
v___x_1194_ = lean_usize_dec_eq(v_i_1185_, v_stop_1186_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v_value_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1195_ = lean_array_uget_borrowed(v_as_1184_, v_i_1185_);
v_value_1196_ = lean_ctor_get(v___x_1195_, 1);
v___x_1197_ = lean_box(v_pu_1183_);
v___x_1198_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_go___boxed), 8, 1);
lean_closure_set(v___x_1198_, 0, v___x_1197_);
lean_inc_ref(v_value_1196_);
v___x_1199_ = l_Lean_Compiler_LCNF_DeclValue_forCodeM___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__0___redArg(v___x_1198_, v_value_1196_, v___y_1188_, v___y_1189_, v___y_1190_, v___y_1191_, v___y_1192_);
if (lean_obj_tag(v___x_1199_) == 0)
{
lean_object* v_a_1200_; size_t v___x_1201_; size_t v___x_1202_; 
v_a_1200_ = lean_ctor_get(v___x_1199_, 0);
lean_inc(v_a_1200_);
lean_dec_ref_known(v___x_1199_, 1);
v___x_1201_ = ((size_t)1ULL);
v___x_1202_ = lean_usize_add(v_i_1185_, v___x_1201_);
v_i_1185_ = v___x_1202_;
v_b_1187_ = v_a_1200_;
goto _start;
}
else
{
return v___x_1199_;
}
}
else
{
lean_object* v___x_1204_; 
v___x_1204_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1204_, 0, v_b_1187_);
return v___x_1204_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1___boxed(lean_object* v_pu_1205_, lean_object* v_as_1206_, lean_object* v_i_1207_, lean_object* v_stop_1208_, lean_object* v_b_1209_, lean_object* v___y_1210_, lean_object* v___y_1211_, lean_object* v___y_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_){
_start:
{
uint8_t v_pu_boxed_1216_; size_t v_i_boxed_1217_; size_t v_stop_boxed_1218_; lean_object* v_res_1219_; 
v_pu_boxed_1216_ = lean_unbox(v_pu_1205_);
v_i_boxed_1217_ = lean_unbox_usize(v_i_1207_);
lean_dec(v_i_1207_);
v_stop_boxed_1218_ = lean_unbox_usize(v_stop_1208_);
lean_dec(v_stop_1208_);
v_res_1219_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_boxed_1216_, v_as_1206_, v_i_boxed_1217_, v_stop_boxed_1218_, v_b_1209_, v___y_1210_, v___y_1211_, v___y_1212_, v___y_1213_, v___y_1214_);
lean_dec(v___y_1214_);
lean_dec_ref(v___y_1213_);
lean_dec(v___y_1212_);
lean_dec_ref(v___y_1211_);
lean_dec(v___y_1210_);
lean_dec_ref(v_as_1206_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(uint8_t v_pu_1220_, lean_object* v_decls_1221_, lean_object* v_a_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_, lean_object* v_a_1225_, lean_object* v_a_1226_){
_start:
{
lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; uint8_t v___x_1231_; 
v___x_1228_ = lean_unsigned_to_nat(0u);
v___x_1229_ = lean_array_get_size(v_decls_1221_);
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_nat_dec_lt(v___x_1228_, v___x_1229_);
if (v___x_1231_ == 0)
{
lean_object* v___x_1232_; 
v___x_1232_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1230_);
return v___x_1232_;
}
else
{
size_t v___x_1233_; size_t v___x_1234_; lean_object* v___x_1235_; 
v___x_1233_ = ((size_t)0ULL);
v___x_1234_ = lean_usize_of_nat(v___x_1229_);
v___x_1235_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start_spec__1(v_pu_1220_, v_decls_1221_, v___x_1233_, v___x_1234_, v___x_1230_, v_a_1222_, v_a_1223_, v_a_1224_, v_a_1225_, v_a_1226_);
return v___x_1235_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start___boxed(lean_object* v_pu_1236_, lean_object* v_decls_1237_, lean_object* v_a_1238_, lean_object* v_a_1239_, lean_object* v_a_1240_, lean_object* v_a_1241_, lean_object* v_a_1242_, lean_object* v_a_1243_){
_start:
{
uint8_t v_pu_boxed_1244_; lean_object* v_res_1245_; 
v_pu_boxed_1244_ = lean_unbox(v_pu_1236_);
v_res_1245_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_boxed_1244_, v_decls_1237_, v_a_1238_, v_a_1239_, v_a_1240_, v_a_1241_, v_a_1242_);
lean_dec(v_a_1242_);
lean_dec_ref(v_a_1241_);
lean_dec(v_a_1240_);
lean_dec_ref(v_a_1239_);
lean_dec(v_a_1238_);
lean_dec_ref(v_decls_1237_);
return v_res_1245_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps(uint8_t v_pu_1248_, lean_object* v_decls_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_, lean_object* v_a_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; 
v___x_1255_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_getJps___closed__0));
v___x_1256_ = lean_st_mk_ref(v___x_1255_);
v___x_1257_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_getJps_start(v_pu_1248_, v_decls_1249_, v___x_1256_, v_a_1250_, v_a_1251_, v_a_1252_, v_a_1253_);
if (lean_obj_tag(v___x_1257_) == 0)
{
lean_object* v___x_1259_; uint8_t v_isShared_1260_; uint8_t v_isSharedCheck_1265_; 
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1265_ == 0)
{
lean_object* v_unused_1266_; 
v_unused_1266_ = lean_ctor_get(v___x_1257_, 0);
lean_dec(v_unused_1266_);
v___x_1259_ = v___x_1257_;
v_isShared_1260_ = v_isSharedCheck_1265_;
goto v_resetjp_1258_;
}
else
{
lean_dec(v___x_1257_);
v___x_1259_ = lean_box(0);
v_isShared_1260_ = v_isSharedCheck_1265_;
goto v_resetjp_1258_;
}
v_resetjp_1258_:
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1261_ = lean_st_ref_get(v___x_1256_);
lean_dec(v___x_1256_);
if (v_isShared_1260_ == 0)
{
lean_ctor_set(v___x_1259_, 0, v___x_1261_);
v___x_1263_ = v___x_1259_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1261_);
v___x_1263_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
return v___x_1263_;
}
}
}
else
{
lean_object* v_a_1267_; lean_object* v___x_1269_; uint8_t v_isShared_1270_; uint8_t v_isSharedCheck_1274_; 
lean_dec(v___x_1256_);
v_a_1267_ = lean_ctor_get(v___x_1257_, 0);
v_isSharedCheck_1274_ = !lean_is_exclusive(v___x_1257_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1269_ = v___x_1257_;
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
else
{
lean_inc(v_a_1267_);
lean_dec(v___x_1257_);
v___x_1269_ = lean_box(0);
v_isShared_1270_ = v_isSharedCheck_1274_;
goto v_resetjp_1268_;
}
v_resetjp_1268_:
{
lean_object* v___x_1272_; 
if (v_isShared_1270_ == 0)
{
v___x_1272_ = v___x_1269_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_a_1267_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
return v___x_1272_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_getJps___boxed(lean_object* v_pu_1275_, lean_object* v_decls_1276_, lean_object* v_a_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_, lean_object* v_a_1281_){
_start:
{
uint8_t v_pu_boxed_1282_; lean_object* v_res_1283_; 
v_pu_boxed_1282_ = lean_unbox(v_pu_1275_);
v_res_1283_ = l_Lean_Compiler_LCNF_Probe_getJps(v_pu_boxed_1282_, v_decls_1276_, v_a_1277_, v_a_1278_, v_a_1279_, v_a_1280_);
lean_dec(v_a_1280_);
lean_dec_ref(v_a_1279_);
lean_dec(v_a_1278_);
lean_dec_ref(v_a_1277_);
lean_dec_ref(v_decls_1276_);
return v_res_1283_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(uint8_t v_pu_1284_, lean_object* v_f_1285_, lean_object* v_a_1286_, lean_object* v_a_1287_, lean_object* v_a_1288_, lean_object* v_a_1289_, lean_object* v_a_1290_){
_start:
{
switch(lean_obj_tag(v_a_1286_))
{
case 0:
{
lean_object* v_decl_1292_; lean_object* v_k_1293_; lean_object* v___x_1294_; 
v_decl_1292_ = lean_ctor_get(v_a_1286_, 0);
lean_inc_ref(v_decl_1292_);
v_k_1293_ = lean_ctor_get(v_a_1286_, 1);
lean_inc_ref(v_k_1293_);
lean_dec_ref_known(v_a_1286_, 2);
lean_inc_ref(v_f_1285_);
lean_inc(v_a_1290_);
lean_inc_ref(v_a_1289_);
lean_inc(v_a_1288_);
lean_inc_ref(v_a_1287_);
v___x_1294_ = lean_apply_6(v_f_1285_, v_decl_1292_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_, lean_box(0));
if (lean_obj_tag(v___x_1294_) == 0)
{
lean_object* v_a_1295_; uint8_t v___x_1296_; 
v_a_1295_ = lean_ctor_get(v___x_1294_, 0);
lean_inc(v_a_1295_);
v___x_1296_ = lean_unbox(v_a_1295_);
lean_dec(v_a_1295_);
if (v___x_1296_ == 0)
{
lean_dec_ref_known(v___x_1294_, 1);
v_a_1286_ = v_k_1293_;
goto _start;
}
else
{
lean_dec_ref(v_k_1293_);
lean_dec_ref(v_f_1285_);
return v___x_1294_;
}
}
else
{
lean_dec_ref(v_k_1293_);
lean_dec_ref(v_f_1285_);
return v___x_1294_;
}
}
case 1:
{
lean_object* v_decl_1298_; lean_object* v_k_1299_; lean_object* v_value_1300_; lean_object* v___x_1301_; 
v_decl_1298_ = lean_ctor_get(v_a_1286_, 0);
lean_inc_ref(v_decl_1298_);
v_k_1299_ = lean_ctor_get(v_a_1286_, 1);
lean_inc_ref(v_k_1299_);
lean_dec_ref_known(v_a_1286_, 2);
v_value_1300_ = lean_ctor_get(v_decl_1298_, 4);
lean_inc_ref(v_value_1300_);
lean_dec_ref(v_decl_1298_);
lean_inc_ref(v_f_1285_);
v___x_1301_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1284_, v_f_1285_, v_value_1300_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
if (lean_obj_tag(v___x_1301_) == 0)
{
lean_object* v_a_1302_; uint8_t v___x_1303_; 
v_a_1302_ = lean_ctor_get(v___x_1301_, 0);
v___x_1303_ = lean_unbox(v_a_1302_);
if (v___x_1303_ == 0)
{
lean_dec_ref_known(v___x_1301_, 1);
v_a_1286_ = v_k_1299_;
goto _start;
}
else
{
lean_dec_ref(v_k_1299_);
lean_dec_ref(v_f_1285_);
return v___x_1301_;
}
}
else
{
lean_dec_ref(v_k_1299_);
lean_dec_ref(v_f_1285_);
return v___x_1301_;
}
}
case 2:
{
lean_object* v_decl_1305_; lean_object* v_k_1306_; lean_object* v_value_1307_; lean_object* v___x_1308_; 
v_decl_1305_ = lean_ctor_get(v_a_1286_, 0);
lean_inc_ref(v_decl_1305_);
v_k_1306_ = lean_ctor_get(v_a_1286_, 1);
lean_inc_ref(v_k_1306_);
lean_dec_ref_known(v_a_1286_, 2);
v_value_1307_ = lean_ctor_get(v_decl_1305_, 4);
lean_inc_ref(v_value_1307_);
lean_dec_ref(v_decl_1305_);
lean_inc_ref(v_f_1285_);
v___x_1308_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1284_, v_f_1285_, v_value_1307_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
if (lean_obj_tag(v___x_1308_) == 0)
{
lean_object* v_a_1309_; uint8_t v___x_1310_; 
v_a_1309_ = lean_ctor_get(v___x_1308_, 0);
v___x_1310_ = lean_unbox(v_a_1309_);
if (v___x_1310_ == 0)
{
lean_dec_ref_known(v___x_1308_, 1);
v_a_1286_ = v_k_1306_;
goto _start;
}
else
{
lean_dec_ref(v_k_1306_);
lean_dec_ref(v_f_1285_);
return v___x_1308_;
}
}
else
{
lean_dec_ref(v_k_1306_);
lean_dec_ref(v_f_1285_);
return v___x_1308_;
}
}
case 4:
{
lean_object* v_cases_1312_; lean_object* v___x_1314_; uint8_t v_isShared_1315_; uint8_t v_isSharedCheck_1331_; 
v_cases_1312_ = lean_ctor_get(v_a_1286_, 0);
v_isSharedCheck_1331_ = !lean_is_exclusive(v_a_1286_);
if (v_isSharedCheck_1331_ == 0)
{
v___x_1314_ = v_a_1286_;
v_isShared_1315_ = v_isSharedCheck_1331_;
goto v_resetjp_1313_;
}
else
{
lean_inc(v_cases_1312_);
lean_dec(v_a_1286_);
v___x_1314_ = lean_box(0);
v_isShared_1315_ = v_isSharedCheck_1331_;
goto v_resetjp_1313_;
}
v_resetjp_1313_:
{
lean_object* v_alts_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; uint8_t v___x_1319_; 
v_alts_1316_ = lean_ctor_get(v_cases_1312_, 3);
lean_inc_ref(v_alts_1316_);
lean_dec_ref(v_cases_1312_);
v___x_1317_ = lean_unsigned_to_nat(0u);
v___x_1318_ = lean_array_get_size(v_alts_1316_);
v___x_1319_ = lean_nat_dec_lt(v___x_1317_, v___x_1318_);
if (v___x_1319_ == 0)
{
lean_object* v___x_1320_; lean_object* v___x_1322_; 
lean_dec_ref(v_alts_1316_);
lean_dec_ref(v_f_1285_);
v___x_1320_ = lean_box(v___x_1319_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1320_);
v___x_1322_ = v___x_1314_;
goto v_reusejp_1321_;
}
else
{
lean_object* v_reuseFailAlloc_1323_; 
v_reuseFailAlloc_1323_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1323_, 0, v___x_1320_);
v___x_1322_ = v_reuseFailAlloc_1323_;
goto v_reusejp_1321_;
}
v_reusejp_1321_:
{
return v___x_1322_;
}
}
else
{
if (v___x_1319_ == 0)
{
lean_object* v___x_1324_; lean_object* v___x_1326_; 
lean_dec_ref(v_alts_1316_);
lean_dec_ref(v_f_1285_);
v___x_1324_ = lean_box(v___x_1319_);
if (v_isShared_1315_ == 0)
{
lean_ctor_set_tag(v___x_1314_, 0);
lean_ctor_set(v___x_1314_, 0, v___x_1324_);
v___x_1326_ = v___x_1314_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1327_; 
v_reuseFailAlloc_1327_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1327_, 0, v___x_1324_);
v___x_1326_ = v_reuseFailAlloc_1327_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
return v___x_1326_;
}
}
else
{
size_t v___x_1328_; size_t v___x_1329_; lean_object* v___x_1330_; 
lean_del_object(v___x_1314_);
v___x_1328_ = ((size_t)0ULL);
v___x_1329_ = lean_usize_of_nat(v___x_1318_);
v___x_1330_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_1284_, v_f_1285_, v_alts_1316_, v___x_1328_, v___x_1329_, v_a_1287_, v_a_1288_, v_a_1289_, v_a_1290_);
lean_dec_ref(v_alts_1316_);
return v___x_1330_;
}
}
}
}
case 7:
{
lean_object* v_k_1332_; 
v_k_1332_ = lean_ctor_get(v_a_1286_, 3);
lean_inc_ref(v_k_1332_);
lean_dec_ref_known(v_a_1286_, 4);
v_a_1286_ = v_k_1332_;
goto _start;
}
case 8:
{
lean_object* v_k_1334_; 
v_k_1334_ = lean_ctor_get(v_a_1286_, 3);
lean_inc_ref(v_k_1334_);
lean_dec_ref_known(v_a_1286_, 4);
v_a_1286_ = v_k_1334_;
goto _start;
}
case 9:
{
lean_object* v_k_1336_; 
v_k_1336_ = lean_ctor_get(v_a_1286_, 5);
lean_inc_ref(v_k_1336_);
lean_dec_ref_known(v_a_1286_, 6);
v_a_1286_ = v_k_1336_;
goto _start;
}
case 10:
{
lean_object* v_k_1338_; 
v_k_1338_ = lean_ctor_get(v_a_1286_, 2);
lean_inc_ref(v_k_1338_);
lean_dec_ref_known(v_a_1286_, 3);
v_a_1286_ = v_k_1338_;
goto _start;
}
case 11:
{
lean_object* v_k_1340_; 
v_k_1340_ = lean_ctor_get(v_a_1286_, 2);
lean_inc_ref(v_k_1340_);
lean_dec_ref_known(v_a_1286_, 3);
v_a_1286_ = v_k_1340_;
goto _start;
}
case 12:
{
lean_object* v_k_1342_; 
v_k_1342_ = lean_ctor_get(v_a_1286_, 3);
lean_inc_ref(v_k_1342_);
lean_dec_ref_known(v_a_1286_, 4);
v_a_1286_ = v_k_1342_;
goto _start;
}
case 13:
{
lean_object* v_k_1344_; 
v_k_1344_ = lean_ctor_get(v_a_1286_, 1);
lean_inc_ref(v_k_1344_);
lean_dec_ref_known(v_a_1286_, 2);
v_a_1286_ = v_k_1344_;
goto _start;
}
default: 
{
uint8_t v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; 
lean_dec_ref(v_a_1286_);
lean_dec_ref(v_f_1285_);
v___x_1346_ = 0;
v___x_1347_ = lean_box(v___x_1346_);
v___x_1348_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1348_, 0, v___x_1347_);
return v___x_1348_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(uint8_t v_pu_1349_, lean_object* v_f_1350_, lean_object* v_as_1351_, size_t v_i_1352_, size_t v_stop_1353_, lean_object* v___y_1354_, lean_object* v___y_1355_, lean_object* v___y_1356_, lean_object* v___y_1357_){
_start:
{
lean_object* v___y_1360_; uint8_t v___x_1367_; 
v___x_1367_ = lean_usize_dec_eq(v_i_1352_, v_stop_1353_);
if (v___x_1367_ == 0)
{
lean_object* v___x_1368_; 
v___x_1368_ = lean_array_uget_borrowed(v_as_1351_, v_i_1352_);
switch(lean_obj_tag(v___x_1368_))
{
case 0:
{
lean_object* v_code_1369_; 
v_code_1369_ = lean_ctor_get(v___x_1368_, 2);
lean_inc_ref(v_code_1369_);
v___y_1360_ = v_code_1369_;
goto v___jp_1359_;
}
case 1:
{
lean_object* v_code_1370_; 
v_code_1370_ = lean_ctor_get(v___x_1368_, 1);
lean_inc_ref(v_code_1370_);
v___y_1360_ = v_code_1370_;
goto v___jp_1359_;
}
default: 
{
lean_object* v_code_1371_; 
v_code_1371_ = lean_ctor_get(v___x_1368_, 0);
lean_inc_ref(v_code_1371_);
v___y_1360_ = v_code_1371_;
goto v___jp_1359_;
}
}
}
else
{
uint8_t v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
lean_dec_ref(v_f_1350_);
v___x_1372_ = 0;
v___x_1373_ = lean_box(v___x_1372_);
v___x_1374_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
return v___x_1374_;
}
v___jp_1359_:
{
lean_object* v___x_1361_; 
lean_inc_ref(v_f_1350_);
v___x_1361_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_1349_, v_f_1350_, v___y_1360_, v___y_1354_, v___y_1355_, v___y_1356_, v___y_1357_);
if (lean_obj_tag(v___x_1361_) == 0)
{
lean_object* v_a_1362_; uint8_t v___x_1363_; 
v_a_1362_ = lean_ctor_get(v___x_1361_, 0);
v___x_1363_ = lean_unbox(v_a_1362_);
if (v___x_1363_ == 0)
{
size_t v___x_1364_; size_t v___x_1365_; 
lean_dec_ref_known(v___x_1361_, 1);
v___x_1364_ = ((size_t)1ULL);
v___x_1365_ = lean_usize_add(v_i_1352_, v___x_1364_);
v_i_1352_ = v___x_1365_;
goto _start;
}
else
{
lean_dec_ref(v_f_1350_);
return v___x_1361_;
}
}
else
{
lean_dec_ref(v_f_1350_);
return v___x_1361_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0___boxed(lean_object* v_pu_1375_, lean_object* v_f_1376_, lean_object* v_as_1377_, lean_object* v_i_1378_, lean_object* v_stop_1379_, lean_object* v___y_1380_, lean_object* v___y_1381_, lean_object* v___y_1382_, lean_object* v___y_1383_, lean_object* v___y_1384_){
_start:
{
uint8_t v_pu_boxed_1385_; size_t v_i_boxed_1386_; size_t v_stop_boxed_1387_; lean_object* v_res_1388_; 
v_pu_boxed_1385_ = lean_unbox(v_pu_1375_);
v_i_boxed_1386_ = lean_unbox_usize(v_i_1378_);
lean_dec(v_i_1378_);
v_stop_boxed_1387_ = lean_unbox_usize(v_stop_1379_);
lean_dec(v_stop_1379_);
v_res_1388_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go_spec__0(v_pu_boxed_1385_, v_f_1376_, v_as_1377_, v_i_boxed_1386_, v_stop_boxed_1387_, v___y_1380_, v___y_1381_, v___y_1382_, v___y_1383_);
lean_dec(v___y_1383_);
lean_dec_ref(v___y_1382_);
lean_dec(v___y_1381_);
lean_dec_ref(v___y_1380_);
lean_dec_ref(v_as_1377_);
return v_res_1388_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed(lean_object* v_pu_1389_, lean_object* v_f_1390_, lean_object* v_a_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_, lean_object* v_a_1394_, lean_object* v_a_1395_, lean_object* v_a_1396_){
_start:
{
uint8_t v_pu_boxed_1397_; lean_object* v_res_1398_; 
v_pu_boxed_1397_ = lean_unbox(v_pu_1389_);
v_res_1398_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go(v_pu_boxed_1397_, v_f_1390_, v_a_1391_, v_a_1392_, v_a_1393_, v_a_1394_, v_a_1395_);
lean_dec(v_a_1395_);
lean_dec_ref(v_a_1394_);
lean_dec(v_a_1393_);
lean_dec_ref(v_a_1392_);
return v_res_1398_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(lean_object* v_v_1399_, lean_object* v_f_1400_, lean_object* v___y_1401_, lean_object* v___y_1402_, lean_object* v___y_1403_, lean_object* v___y_1404_){
_start:
{
if (lean_obj_tag(v_v_1399_) == 0)
{
lean_object* v_code_1406_; lean_object* v___x_1407_; 
v_code_1406_ = lean_ctor_get(v_v_1399_, 0);
lean_inc_ref(v_code_1406_);
lean_dec_ref_known(v_v_1399_, 1);
lean_inc(v___y_1404_);
lean_inc_ref(v___y_1403_);
lean_inc(v___y_1402_);
lean_inc_ref(v___y_1401_);
v___x_1407_ = lean_apply_6(v_f_1400_, v_code_1406_, v___y_1401_, v___y_1402_, v___y_1403_, v___y_1404_, lean_box(0));
return v___x_1407_;
}
else
{
lean_object* v___x_1409_; uint8_t v_isShared_1410_; uint8_t v_isSharedCheck_1416_; 
lean_dec_ref(v_f_1400_);
v_isSharedCheck_1416_ = !lean_is_exclusive(v_v_1399_);
if (v_isSharedCheck_1416_ == 0)
{
lean_object* v_unused_1417_; 
v_unused_1417_ = lean_ctor_get(v_v_1399_, 0);
lean_dec(v_unused_1417_);
v___x_1409_ = v_v_1399_;
v_isShared_1410_ = v_isSharedCheck_1416_;
goto v_resetjp_1408_;
}
else
{
lean_dec(v_v_1399_);
v___x_1409_ = lean_box(0);
v_isShared_1410_ = v_isSharedCheck_1416_;
goto v_resetjp_1408_;
}
v_resetjp_1408_:
{
uint8_t v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1414_; 
v___x_1411_ = 0;
v___x_1412_ = lean_box(v___x_1411_);
if (v_isShared_1410_ == 0)
{
lean_ctor_set_tag(v___x_1409_, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1412_);
v___x_1414_ = v___x_1409_;
goto v_reusejp_1413_;
}
else
{
lean_object* v_reuseFailAlloc_1415_; 
v_reuseFailAlloc_1415_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1415_, 0, v___x_1412_);
v___x_1414_ = v_reuseFailAlloc_1415_;
goto v_reusejp_1413_;
}
v_reusejp_1413_:
{
return v___x_1414_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg___boxed(lean_object* v_v_1418_, lean_object* v_f_1419_, lean_object* v___y_1420_, lean_object* v___y_1421_, lean_object* v___y_1422_, lean_object* v___y_1423_, lean_object* v___y_1424_){
_start:
{
lean_object* v_res_1425_; 
v_res_1425_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1418_, v_f_1419_, v___y_1420_, v___y_1421_, v___y_1422_, v___y_1423_);
lean_dec(v___y_1423_);
lean_dec_ref(v___y_1422_);
lean_dec(v___y_1421_);
lean_dec_ref(v___y_1420_);
return v_res_1425_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(uint8_t v_pu_1426_, lean_object* v_v_1427_, lean_object* v_f_1428_, lean_object* v___y_1429_, lean_object* v___y_1430_, lean_object* v___y_1431_, lean_object* v___y_1432_){
_start:
{
lean_object* v___x_1434_; 
v___x_1434_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_v_1427_, v_f_1428_, v___y_1429_, v___y_1430_, v___y_1431_, v___y_1432_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___boxed(lean_object* v_pu_1435_, lean_object* v_v_1436_, lean_object* v_f_1437_, lean_object* v___y_1438_, lean_object* v___y_1439_, lean_object* v___y_1440_, lean_object* v___y_1441_, lean_object* v___y_1442_){
_start:
{
uint8_t v_pu_boxed_1443_; lean_object* v_res_1444_; 
v_pu_boxed_1443_ = lean_unbox(v_pu_1435_);
v_res_1444_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0(v_pu_boxed_1443_, v_v_1436_, v_f_1437_, v___y_1438_, v___y_1439_, v___y_1440_, v___y_1441_);
lean_dec(v___y_1441_);
lean_dec_ref(v___y_1440_);
lean_dec(v___y_1439_);
lean_dec_ref(v___y_1438_);
return v_res_1444_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(uint8_t v_pu_1445_, lean_object* v_f_1446_, lean_object* v_as_1447_, size_t v_i_1448_, size_t v_stop_1449_, lean_object* v_b_1450_, lean_object* v___y_1451_, lean_object* v___y_1452_, lean_object* v___y_1453_, lean_object* v___y_1454_){
_start:
{
lean_object* v_a_1457_; uint8_t v___x_1461_; 
v___x_1461_ = lean_usize_dec_eq(v_i_1448_, v_stop_1449_);
if (v___x_1461_ == 0)
{
lean_object* v___x_1462_; lean_object* v_value_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1462_ = lean_array_uget_borrowed(v_as_1447_, v_i_1448_);
v_value_1463_ = lean_ctor_get(v___x_1462_, 1);
v___x_1464_ = lean_box(v_pu_1445_);
lean_inc_ref(v_f_1446_);
v___x_1465_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByLet_go___boxed), 8, 2);
lean_closure_set(v___x_1465_, 0, v___x_1464_);
lean_closure_set(v___x_1465_, 1, v_f_1446_);
lean_inc_ref(v_value_1463_);
v___x_1466_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1463_, v___x_1465_, v___y_1451_, v___y_1452_, v___y_1453_, v___y_1454_);
if (lean_obj_tag(v___x_1466_) == 0)
{
lean_object* v_a_1467_; uint8_t v___x_1468_; 
v_a_1467_ = lean_ctor_get(v___x_1466_, 0);
lean_inc(v_a_1467_);
lean_dec_ref_known(v___x_1466_, 1);
v___x_1468_ = lean_unbox(v_a_1467_);
lean_dec(v_a_1467_);
if (v___x_1468_ == 0)
{
v_a_1457_ = v_b_1450_;
goto v___jp_1456_;
}
else
{
lean_object* v___x_1469_; 
lean_inc(v___x_1462_);
v___x_1469_ = lean_array_push(v_b_1450_, v___x_1462_);
v_a_1457_ = v___x_1469_;
goto v___jp_1456_;
}
}
else
{
lean_object* v_a_1470_; lean_object* v___x_1472_; uint8_t v_isShared_1473_; uint8_t v_isSharedCheck_1477_; 
lean_dec_ref(v_b_1450_);
lean_dec_ref(v_f_1446_);
v_a_1470_ = lean_ctor_get(v___x_1466_, 0);
v_isSharedCheck_1477_ = !lean_is_exclusive(v___x_1466_);
if (v_isSharedCheck_1477_ == 0)
{
v___x_1472_ = v___x_1466_;
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
else
{
lean_inc(v_a_1470_);
lean_dec(v___x_1466_);
v___x_1472_ = lean_box(0);
v_isShared_1473_ = v_isSharedCheck_1477_;
goto v_resetjp_1471_;
}
v_resetjp_1471_:
{
lean_object* v___x_1475_; 
if (v_isShared_1473_ == 0)
{
v___x_1475_ = v___x_1472_;
goto v_reusejp_1474_;
}
else
{
lean_object* v_reuseFailAlloc_1476_; 
v_reuseFailAlloc_1476_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1476_, 0, v_a_1470_);
v___x_1475_ = v_reuseFailAlloc_1476_;
goto v_reusejp_1474_;
}
v_reusejp_1474_:
{
return v___x_1475_;
}
}
}
}
else
{
lean_object* v___x_1478_; 
lean_dec_ref(v_f_1446_);
v___x_1478_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1478_, 0, v_b_1450_);
return v___x_1478_;
}
v___jp_1456_:
{
size_t v___x_1458_; size_t v___x_1459_; 
v___x_1458_ = ((size_t)1ULL);
v___x_1459_ = lean_usize_add(v_i_1448_, v___x_1458_);
v_i_1448_ = v___x_1459_;
v_b_1450_ = v_a_1457_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1___boxed(lean_object* v_pu_1479_, lean_object* v_f_1480_, lean_object* v_as_1481_, lean_object* v_i_1482_, lean_object* v_stop_1483_, lean_object* v_b_1484_, lean_object* v___y_1485_, lean_object* v___y_1486_, lean_object* v___y_1487_, lean_object* v___y_1488_, lean_object* v___y_1489_){
_start:
{
uint8_t v_pu_boxed_1490_; size_t v_i_boxed_1491_; size_t v_stop_boxed_1492_; lean_object* v_res_1493_; 
v_pu_boxed_1490_ = lean_unbox(v_pu_1479_);
v_i_boxed_1491_ = lean_unbox_usize(v_i_1482_);
lean_dec(v_i_1482_);
v_stop_boxed_1492_ = lean_unbox_usize(v_stop_1483_);
lean_dec(v_stop_1483_);
v_res_1493_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_boxed_1490_, v_f_1480_, v_as_1481_, v_i_boxed_1491_, v_stop_boxed_1492_, v_b_1484_, v___y_1485_, v___y_1486_, v___y_1487_, v___y_1488_);
lean_dec(v___y_1488_);
lean_dec_ref(v___y_1487_);
lean_dec(v___y_1486_);
lean_dec_ref(v___y_1485_);
lean_dec_ref(v_as_1481_);
return v_res_1493_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet(uint8_t v_pu_1496_, lean_object* v_f_1497_, lean_object* v_a_1498_, lean_object* v_a_1499_, lean_object* v_a_1500_, lean_object* v_a_1501_, lean_object* v_a_1502_){
_start:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; uint8_t v___x_1507_; 
v___x_1504_ = lean_unsigned_to_nat(0u);
v___x_1505_ = lean_array_get_size(v_a_1498_);
v___x_1506_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1507_ = lean_nat_dec_lt(v___x_1504_, v___x_1505_);
if (v___x_1507_ == 0)
{
lean_object* v___x_1508_; 
lean_dec_ref(v_f_1497_);
v___x_1508_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1508_, 0, v___x_1506_);
return v___x_1508_;
}
else
{
size_t v___x_1509_; size_t v___x_1510_; lean_object* v___x_1511_; 
v___x_1509_ = ((size_t)0ULL);
v___x_1510_ = lean_usize_of_nat(v___x_1505_);
v___x_1511_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__1(v_pu_1496_, v_f_1497_, v_a_1498_, v___x_1509_, v___x_1510_, v___x_1506_, v_a_1499_, v_a_1500_, v_a_1501_, v_a_1502_);
return v___x_1511_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByLet___boxed(lean_object* v_pu_1512_, lean_object* v_f_1513_, lean_object* v_a_1514_, lean_object* v_a_1515_, lean_object* v_a_1516_, lean_object* v_a_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_){
_start:
{
uint8_t v_pu_boxed_1520_; lean_object* v_res_1521_; 
v_pu_boxed_1520_ = lean_unbox(v_pu_1512_);
v_res_1521_ = l_Lean_Compiler_LCNF_Probe_filterByLet(v_pu_boxed_1520_, v_f_1513_, v_a_1514_, v_a_1515_, v_a_1516_, v_a_1517_, v_a_1518_);
lean_dec(v_a_1518_);
lean_dec_ref(v_a_1517_);
lean_dec(v_a_1516_);
lean_dec_ref(v_a_1515_);
lean_dec_ref(v_a_1514_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(uint8_t v_pu_1522_, lean_object* v_f_1523_, lean_object* v_a_1524_, lean_object* v_a_1525_, lean_object* v_a_1526_, lean_object* v_a_1527_, lean_object* v_a_1528_){
_start:
{
switch(lean_obj_tag(v_a_1524_))
{
case 0:
{
lean_object* v_k_1530_; 
v_k_1530_ = lean_ctor_get(v_a_1524_, 1);
lean_inc_ref(v_k_1530_);
lean_dec_ref_known(v_a_1524_, 2);
v_a_1524_ = v_k_1530_;
goto _start;
}
case 1:
{
lean_object* v_decl_1532_; lean_object* v_k_1533_; lean_object* v___x_1534_; 
v_decl_1532_ = lean_ctor_get(v_a_1524_, 0);
lean_inc_ref_n(v_decl_1532_, 2);
v_k_1533_ = lean_ctor_get(v_a_1524_, 1);
lean_inc_ref(v_k_1533_);
lean_dec_ref_known(v_a_1524_, 2);
lean_inc_ref(v_f_1523_);
lean_inc(v_a_1528_);
lean_inc_ref(v_a_1527_);
lean_inc(v_a_1526_);
lean_inc_ref(v_a_1525_);
v___x_1534_ = lean_apply_6(v_f_1523_, v_decl_1532_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_, lean_box(0));
if (lean_obj_tag(v___x_1534_) == 0)
{
lean_object* v_a_1535_; uint8_t v___x_1536_; 
v_a_1535_ = lean_ctor_get(v___x_1534_, 0);
lean_inc(v_a_1535_);
v___x_1536_ = lean_unbox(v_a_1535_);
lean_dec(v_a_1535_);
if (v___x_1536_ == 0)
{
lean_object* v_value_1537_; lean_object* v___x_1538_; 
lean_dec_ref_known(v___x_1534_, 1);
v_value_1537_ = lean_ctor_get(v_decl_1532_, 4);
lean_inc_ref(v_value_1537_);
lean_dec_ref(v_decl_1532_);
lean_inc_ref(v_f_1523_);
v___x_1538_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1522_, v_f_1523_, v_value_1537_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_);
if (lean_obj_tag(v___x_1538_) == 0)
{
lean_object* v_a_1539_; uint8_t v___x_1540_; 
v_a_1539_ = lean_ctor_get(v___x_1538_, 0);
v___x_1540_ = lean_unbox(v_a_1539_);
if (v___x_1540_ == 0)
{
lean_dec_ref_known(v___x_1538_, 1);
v_a_1524_ = v_k_1533_;
goto _start;
}
else
{
lean_dec_ref(v_k_1533_);
lean_dec_ref(v_f_1523_);
return v___x_1538_;
}
}
else
{
lean_dec_ref(v_k_1533_);
lean_dec_ref(v_f_1523_);
return v___x_1538_;
}
}
else
{
lean_dec_ref(v_k_1533_);
lean_dec_ref(v_decl_1532_);
lean_dec_ref(v_f_1523_);
return v___x_1534_;
}
}
else
{
lean_dec_ref(v_k_1533_);
lean_dec_ref(v_decl_1532_);
lean_dec_ref(v_f_1523_);
return v___x_1534_;
}
}
case 2:
{
lean_object* v_k_1542_; 
v_k_1542_ = lean_ctor_get(v_a_1524_, 1);
lean_inc_ref(v_k_1542_);
lean_dec_ref_known(v_a_1524_, 2);
v_a_1524_ = v_k_1542_;
goto _start;
}
case 4:
{
lean_object* v_cases_1544_; lean_object* v___x_1546_; uint8_t v_isShared_1547_; uint8_t v_isSharedCheck_1563_; 
v_cases_1544_ = lean_ctor_get(v_a_1524_, 0);
v_isSharedCheck_1563_ = !lean_is_exclusive(v_a_1524_);
if (v_isSharedCheck_1563_ == 0)
{
v___x_1546_ = v_a_1524_;
v_isShared_1547_ = v_isSharedCheck_1563_;
goto v_resetjp_1545_;
}
else
{
lean_inc(v_cases_1544_);
lean_dec(v_a_1524_);
v___x_1546_ = lean_box(0);
v_isShared_1547_ = v_isSharedCheck_1563_;
goto v_resetjp_1545_;
}
v_resetjp_1545_:
{
lean_object* v_alts_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; uint8_t v___x_1551_; 
v_alts_1548_ = lean_ctor_get(v_cases_1544_, 3);
lean_inc_ref(v_alts_1548_);
lean_dec_ref(v_cases_1544_);
v___x_1549_ = lean_unsigned_to_nat(0u);
v___x_1550_ = lean_array_get_size(v_alts_1548_);
v___x_1551_ = lean_nat_dec_lt(v___x_1549_, v___x_1550_);
if (v___x_1551_ == 0)
{
lean_object* v___x_1552_; lean_object* v___x_1554_; 
lean_dec_ref(v_alts_1548_);
lean_dec_ref(v_f_1523_);
v___x_1552_ = lean_box(v___x_1551_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set_tag(v___x_1546_, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1552_);
v___x_1554_ = v___x_1546_;
goto v_reusejp_1553_;
}
else
{
lean_object* v_reuseFailAlloc_1555_; 
v_reuseFailAlloc_1555_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1555_, 0, v___x_1552_);
v___x_1554_ = v_reuseFailAlloc_1555_;
goto v_reusejp_1553_;
}
v_reusejp_1553_:
{
return v___x_1554_;
}
}
else
{
if (v___x_1551_ == 0)
{
lean_object* v___x_1556_; lean_object* v___x_1558_; 
lean_dec_ref(v_alts_1548_);
lean_dec_ref(v_f_1523_);
v___x_1556_ = lean_box(v___x_1551_);
if (v_isShared_1547_ == 0)
{
lean_ctor_set_tag(v___x_1546_, 0);
lean_ctor_set(v___x_1546_, 0, v___x_1556_);
v___x_1558_ = v___x_1546_;
goto v_reusejp_1557_;
}
else
{
lean_object* v_reuseFailAlloc_1559_; 
v_reuseFailAlloc_1559_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1559_, 0, v___x_1556_);
v___x_1558_ = v_reuseFailAlloc_1559_;
goto v_reusejp_1557_;
}
v_reusejp_1557_:
{
return v___x_1558_;
}
}
else
{
size_t v___x_1560_; size_t v___x_1561_; lean_object* v___x_1562_; 
lean_del_object(v___x_1546_);
v___x_1560_ = ((size_t)0ULL);
v___x_1561_ = lean_usize_of_nat(v___x_1550_);
v___x_1562_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_1522_, v_f_1523_, v_alts_1548_, v___x_1560_, v___x_1561_, v_a_1525_, v_a_1526_, v_a_1527_, v_a_1528_);
lean_dec_ref(v_alts_1548_);
return v___x_1562_;
}
}
}
}
case 7:
{
lean_object* v_k_1564_; 
v_k_1564_ = lean_ctor_get(v_a_1524_, 3);
lean_inc_ref(v_k_1564_);
lean_dec_ref_known(v_a_1524_, 4);
v_a_1524_ = v_k_1564_;
goto _start;
}
case 8:
{
lean_object* v_k_1566_; 
v_k_1566_ = lean_ctor_get(v_a_1524_, 3);
lean_inc_ref(v_k_1566_);
lean_dec_ref_known(v_a_1524_, 4);
v_a_1524_ = v_k_1566_;
goto _start;
}
case 9:
{
lean_object* v_k_1568_; 
v_k_1568_ = lean_ctor_get(v_a_1524_, 5);
lean_inc_ref(v_k_1568_);
lean_dec_ref_known(v_a_1524_, 6);
v_a_1524_ = v_k_1568_;
goto _start;
}
case 10:
{
lean_object* v_k_1570_; 
v_k_1570_ = lean_ctor_get(v_a_1524_, 2);
lean_inc_ref(v_k_1570_);
lean_dec_ref_known(v_a_1524_, 3);
v_a_1524_ = v_k_1570_;
goto _start;
}
case 11:
{
lean_object* v_k_1572_; 
v_k_1572_ = lean_ctor_get(v_a_1524_, 2);
lean_inc_ref(v_k_1572_);
lean_dec_ref_known(v_a_1524_, 3);
v_a_1524_ = v_k_1572_;
goto _start;
}
case 12:
{
lean_object* v_k_1574_; 
v_k_1574_ = lean_ctor_get(v_a_1524_, 3);
lean_inc_ref(v_k_1574_);
lean_dec_ref_known(v_a_1524_, 4);
v_a_1524_ = v_k_1574_;
goto _start;
}
case 13:
{
lean_object* v_k_1576_; 
v_k_1576_ = lean_ctor_get(v_a_1524_, 1);
lean_inc_ref(v_k_1576_);
lean_dec_ref_known(v_a_1524_, 2);
v_a_1524_ = v_k_1576_;
goto _start;
}
default: 
{
uint8_t v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; 
lean_dec_ref(v_a_1524_);
lean_dec_ref(v_f_1523_);
v___x_1578_ = 0;
v___x_1579_ = lean_box(v___x_1578_);
v___x_1580_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1580_, 0, v___x_1579_);
return v___x_1580_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(uint8_t v_pu_1581_, lean_object* v_f_1582_, lean_object* v_as_1583_, size_t v_i_1584_, size_t v_stop_1585_, lean_object* v___y_1586_, lean_object* v___y_1587_, lean_object* v___y_1588_, lean_object* v___y_1589_){
_start:
{
lean_object* v___y_1592_; uint8_t v___x_1599_; 
v___x_1599_ = lean_usize_dec_eq(v_i_1584_, v_stop_1585_);
if (v___x_1599_ == 0)
{
lean_object* v___x_1600_; 
v___x_1600_ = lean_array_uget_borrowed(v_as_1583_, v_i_1584_);
switch(lean_obj_tag(v___x_1600_))
{
case 0:
{
lean_object* v_code_1601_; 
v_code_1601_ = lean_ctor_get(v___x_1600_, 2);
lean_inc_ref(v_code_1601_);
v___y_1592_ = v_code_1601_;
goto v___jp_1591_;
}
case 1:
{
lean_object* v_code_1602_; 
v_code_1602_ = lean_ctor_get(v___x_1600_, 1);
lean_inc_ref(v_code_1602_);
v___y_1592_ = v_code_1602_;
goto v___jp_1591_;
}
default: 
{
lean_object* v_code_1603_; 
v_code_1603_ = lean_ctor_get(v___x_1600_, 0);
lean_inc_ref(v_code_1603_);
v___y_1592_ = v_code_1603_;
goto v___jp_1591_;
}
}
}
else
{
uint8_t v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
lean_dec_ref(v_f_1582_);
v___x_1604_ = 0;
v___x_1605_ = lean_box(v___x_1604_);
v___x_1606_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1606_, 0, v___x_1605_);
return v___x_1606_;
}
v___jp_1591_:
{
lean_object* v___x_1593_; 
lean_inc_ref(v_f_1582_);
v___x_1593_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_1581_, v_f_1582_, v___y_1592_, v___y_1586_, v___y_1587_, v___y_1588_, v___y_1589_);
if (lean_obj_tag(v___x_1593_) == 0)
{
lean_object* v_a_1594_; uint8_t v___x_1595_; 
v_a_1594_ = lean_ctor_get(v___x_1593_, 0);
v___x_1595_ = lean_unbox(v_a_1594_);
if (v___x_1595_ == 0)
{
size_t v___x_1596_; size_t v___x_1597_; 
lean_dec_ref_known(v___x_1593_, 1);
v___x_1596_ = ((size_t)1ULL);
v___x_1597_ = lean_usize_add(v_i_1584_, v___x_1596_);
v_i_1584_ = v___x_1597_;
goto _start;
}
else
{
lean_dec_ref(v_f_1582_);
return v___x_1593_;
}
}
else
{
lean_dec_ref(v_f_1582_);
return v___x_1593_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0___boxed(lean_object* v_pu_1607_, lean_object* v_f_1608_, lean_object* v_as_1609_, lean_object* v_i_1610_, lean_object* v_stop_1611_, lean_object* v___y_1612_, lean_object* v___y_1613_, lean_object* v___y_1614_, lean_object* v___y_1615_, lean_object* v___y_1616_){
_start:
{
uint8_t v_pu_boxed_1617_; size_t v_i_boxed_1618_; size_t v_stop_boxed_1619_; lean_object* v_res_1620_; 
v_pu_boxed_1617_ = lean_unbox(v_pu_1607_);
v_i_boxed_1618_ = lean_unbox_usize(v_i_1610_);
lean_dec(v_i_1610_);
v_stop_boxed_1619_ = lean_unbox_usize(v_stop_1611_);
lean_dec(v_stop_1611_);
v_res_1620_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go_spec__0(v_pu_boxed_1617_, v_f_1608_, v_as_1609_, v_i_boxed_1618_, v_stop_boxed_1619_, v___y_1612_, v___y_1613_, v___y_1614_, v___y_1615_);
lean_dec(v___y_1615_);
lean_dec_ref(v___y_1614_);
lean_dec(v___y_1613_);
lean_dec_ref(v___y_1612_);
lean_dec_ref(v_as_1609_);
return v_res_1620_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed(lean_object* v_pu_1621_, lean_object* v_f_1622_, lean_object* v_a_1623_, lean_object* v_a_1624_, lean_object* v_a_1625_, lean_object* v_a_1626_, lean_object* v_a_1627_, lean_object* v_a_1628_){
_start:
{
uint8_t v_pu_boxed_1629_; lean_object* v_res_1630_; 
v_pu_boxed_1629_ = lean_unbox(v_pu_1621_);
v_res_1630_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go(v_pu_boxed_1629_, v_f_1622_, v_a_1623_, v_a_1624_, v_a_1625_, v_a_1626_, v_a_1627_);
lean_dec(v_a_1627_);
lean_dec_ref(v_a_1626_);
lean_dec(v_a_1625_);
lean_dec_ref(v_a_1624_);
return v_res_1630_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(uint8_t v_pu_1631_, lean_object* v_f_1632_, lean_object* v_as_1633_, size_t v_i_1634_, size_t v_stop_1635_, lean_object* v_b_1636_, lean_object* v___y_1637_, lean_object* v___y_1638_, lean_object* v___y_1639_, lean_object* v___y_1640_){
_start:
{
lean_object* v_a_1643_; uint8_t v___x_1647_; 
v___x_1647_ = lean_usize_dec_eq(v_i_1634_, v_stop_1635_);
if (v___x_1647_ == 0)
{
lean_object* v___x_1648_; lean_object* v_value_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; 
v___x_1648_ = lean_array_uget_borrowed(v_as_1633_, v_i_1634_);
v_value_1649_ = lean_ctor_get(v___x_1648_, 1);
v___x_1650_ = lean_box(v_pu_1631_);
lean_inc_ref(v_f_1632_);
v___x_1651_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFun_go___boxed), 8, 2);
lean_closure_set(v___x_1651_, 0, v___x_1650_);
lean_closure_set(v___x_1651_, 1, v_f_1632_);
lean_inc_ref(v_value_1649_);
v___x_1652_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1649_, v___x_1651_, v___y_1637_, v___y_1638_, v___y_1639_, v___y_1640_);
if (lean_obj_tag(v___x_1652_) == 0)
{
lean_object* v_a_1653_; uint8_t v___x_1654_; 
v_a_1653_ = lean_ctor_get(v___x_1652_, 0);
lean_inc(v_a_1653_);
lean_dec_ref_known(v___x_1652_, 1);
v___x_1654_ = lean_unbox(v_a_1653_);
lean_dec(v_a_1653_);
if (v___x_1654_ == 0)
{
v_a_1643_ = v_b_1636_;
goto v___jp_1642_;
}
else
{
lean_object* v___x_1655_; 
lean_inc(v___x_1648_);
v___x_1655_ = lean_array_push(v_b_1636_, v___x_1648_);
v_a_1643_ = v___x_1655_;
goto v___jp_1642_;
}
}
else
{
lean_object* v_a_1656_; lean_object* v___x_1658_; uint8_t v_isShared_1659_; uint8_t v_isSharedCheck_1663_; 
lean_dec_ref(v_b_1636_);
lean_dec_ref(v_f_1632_);
v_a_1656_ = lean_ctor_get(v___x_1652_, 0);
v_isSharedCheck_1663_ = !lean_is_exclusive(v___x_1652_);
if (v_isSharedCheck_1663_ == 0)
{
v___x_1658_ = v___x_1652_;
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
else
{
lean_inc(v_a_1656_);
lean_dec(v___x_1652_);
v___x_1658_ = lean_box(0);
v_isShared_1659_ = v_isSharedCheck_1663_;
goto v_resetjp_1657_;
}
v_resetjp_1657_:
{
lean_object* v___x_1661_; 
if (v_isShared_1659_ == 0)
{
v___x_1661_ = v___x_1658_;
goto v_reusejp_1660_;
}
else
{
lean_object* v_reuseFailAlloc_1662_; 
v_reuseFailAlloc_1662_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1662_, 0, v_a_1656_);
v___x_1661_ = v_reuseFailAlloc_1662_;
goto v_reusejp_1660_;
}
v_reusejp_1660_:
{
return v___x_1661_;
}
}
}
}
else
{
lean_object* v___x_1664_; 
lean_dec_ref(v_f_1632_);
v___x_1664_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1664_, 0, v_b_1636_);
return v___x_1664_;
}
v___jp_1642_:
{
size_t v___x_1644_; size_t v___x_1645_; 
v___x_1644_ = ((size_t)1ULL);
v___x_1645_ = lean_usize_add(v_i_1634_, v___x_1644_);
v_i_1634_ = v___x_1645_;
v_b_1636_ = v_a_1643_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0___boxed(lean_object* v_pu_1665_, lean_object* v_f_1666_, lean_object* v_as_1667_, lean_object* v_i_1668_, lean_object* v_stop_1669_, lean_object* v_b_1670_, lean_object* v___y_1671_, lean_object* v___y_1672_, lean_object* v___y_1673_, lean_object* v___y_1674_, lean_object* v___y_1675_){
_start:
{
uint8_t v_pu_boxed_1676_; size_t v_i_boxed_1677_; size_t v_stop_boxed_1678_; lean_object* v_res_1679_; 
v_pu_boxed_1676_ = lean_unbox(v_pu_1665_);
v_i_boxed_1677_ = lean_unbox_usize(v_i_1668_);
lean_dec(v_i_1668_);
v_stop_boxed_1678_ = lean_unbox_usize(v_stop_1669_);
lean_dec(v_stop_1669_);
v_res_1679_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_boxed_1676_, v_f_1666_, v_as_1667_, v_i_boxed_1677_, v_stop_boxed_1678_, v_b_1670_, v___y_1671_, v___y_1672_, v___y_1673_, v___y_1674_);
lean_dec(v___y_1674_);
lean_dec_ref(v___y_1673_);
lean_dec(v___y_1672_);
lean_dec_ref(v___y_1671_);
lean_dec_ref(v_as_1667_);
return v_res_1679_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun(uint8_t v_pu_1680_, lean_object* v_f_1681_, lean_object* v_a_1682_, lean_object* v_a_1683_, lean_object* v_a_1684_, lean_object* v_a_1685_, lean_object* v_a_1686_){
_start:
{
lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; uint8_t v___x_1691_; 
v___x_1688_ = lean_unsigned_to_nat(0u);
v___x_1689_ = lean_array_get_size(v_a_1682_);
v___x_1690_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1691_ = lean_nat_dec_lt(v___x_1688_, v___x_1689_);
if (v___x_1691_ == 0)
{
lean_object* v___x_1692_; 
lean_dec_ref(v_f_1681_);
v___x_1692_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1690_);
return v___x_1692_;
}
else
{
size_t v___x_1693_; size_t v___x_1694_; lean_object* v___x_1695_; 
v___x_1693_ = ((size_t)0ULL);
v___x_1694_ = lean_usize_of_nat(v___x_1689_);
v___x_1695_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFun_spec__0(v_pu_1680_, v_f_1681_, v_a_1682_, v___x_1693_, v___x_1694_, v___x_1690_, v_a_1683_, v_a_1684_, v_a_1685_, v_a_1686_);
return v___x_1695_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFun___boxed(lean_object* v_pu_1696_, lean_object* v_f_1697_, lean_object* v_a_1698_, lean_object* v_a_1699_, lean_object* v_a_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_, lean_object* v_a_1703_){
_start:
{
uint8_t v_pu_boxed_1704_; lean_object* v_res_1705_; 
v_pu_boxed_1704_ = lean_unbox(v_pu_1696_);
v_res_1705_ = l_Lean_Compiler_LCNF_Probe_filterByFun(v_pu_boxed_1704_, v_f_1697_, v_a_1698_, v_a_1699_, v_a_1700_, v_a_1701_, v_a_1702_);
lean_dec(v_a_1702_);
lean_dec_ref(v_a_1701_);
lean_dec(v_a_1700_);
lean_dec_ref(v_a_1699_);
lean_dec_ref(v_a_1698_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(uint8_t v_pu_1706_, lean_object* v_f_1707_, lean_object* v_a_1708_, lean_object* v_a_1709_, lean_object* v_a_1710_, lean_object* v_a_1711_, lean_object* v_a_1712_){
_start:
{
switch(lean_obj_tag(v_a_1708_))
{
case 0:
{
lean_object* v_k_1714_; 
v_k_1714_ = lean_ctor_get(v_a_1708_, 1);
lean_inc_ref(v_k_1714_);
lean_dec_ref_known(v_a_1708_, 2);
v_a_1708_ = v_k_1714_;
goto _start;
}
case 1:
{
lean_object* v_decl_1716_; lean_object* v_k_1717_; lean_object* v_value_1718_; lean_object* v___x_1719_; 
v_decl_1716_ = lean_ctor_get(v_a_1708_, 0);
lean_inc_ref(v_decl_1716_);
v_k_1717_ = lean_ctor_get(v_a_1708_, 1);
lean_inc_ref(v_k_1717_);
lean_dec_ref_known(v_a_1708_, 2);
v_value_1718_ = lean_ctor_get(v_decl_1716_, 4);
lean_inc_ref(v_value_1718_);
lean_dec_ref(v_decl_1716_);
lean_inc_ref(v_f_1707_);
v___x_1719_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1706_, v_f_1707_, v_value_1718_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_);
if (lean_obj_tag(v___x_1719_) == 0)
{
lean_object* v_a_1720_; uint8_t v___x_1721_; 
v_a_1720_ = lean_ctor_get(v___x_1719_, 0);
v___x_1721_ = lean_unbox(v_a_1720_);
if (v___x_1721_ == 0)
{
lean_dec_ref_known(v___x_1719_, 1);
v_a_1708_ = v_k_1717_;
goto _start;
}
else
{
lean_dec_ref(v_k_1717_);
lean_dec_ref(v_f_1707_);
return v___x_1719_;
}
}
else
{
lean_dec_ref(v_k_1717_);
lean_dec_ref(v_f_1707_);
return v___x_1719_;
}
}
case 2:
{
lean_object* v_decl_1723_; lean_object* v_k_1724_; lean_object* v___x_1725_; 
v_decl_1723_ = lean_ctor_get(v_a_1708_, 0);
lean_inc_ref_n(v_decl_1723_, 2);
v_k_1724_ = lean_ctor_get(v_a_1708_, 1);
lean_inc_ref(v_k_1724_);
lean_dec_ref_known(v_a_1708_, 2);
lean_inc_ref(v_f_1707_);
lean_inc(v_a_1712_);
lean_inc_ref(v_a_1711_);
lean_inc(v_a_1710_);
lean_inc_ref(v_a_1709_);
v___x_1725_ = lean_apply_6(v_f_1707_, v_decl_1723_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_, lean_box(0));
if (lean_obj_tag(v___x_1725_) == 0)
{
lean_object* v_a_1726_; uint8_t v___x_1727_; 
v_a_1726_ = lean_ctor_get(v___x_1725_, 0);
lean_inc(v_a_1726_);
v___x_1727_ = lean_unbox(v_a_1726_);
lean_dec(v_a_1726_);
if (v___x_1727_ == 0)
{
lean_object* v_value_1728_; lean_object* v___x_1729_; 
lean_dec_ref_known(v___x_1725_, 1);
v_value_1728_ = lean_ctor_get(v_decl_1723_, 4);
lean_inc_ref(v_value_1728_);
lean_dec_ref(v_decl_1723_);
lean_inc_ref(v_f_1707_);
v___x_1729_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1706_, v_f_1707_, v_value_1728_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_);
if (lean_obj_tag(v___x_1729_) == 0)
{
lean_object* v_a_1730_; uint8_t v___x_1731_; 
v_a_1730_ = lean_ctor_get(v___x_1729_, 0);
v___x_1731_ = lean_unbox(v_a_1730_);
if (v___x_1731_ == 0)
{
lean_dec_ref_known(v___x_1729_, 1);
v_a_1708_ = v_k_1724_;
goto _start;
}
else
{
lean_dec_ref(v_k_1724_);
lean_dec_ref(v_f_1707_);
return v___x_1729_;
}
}
else
{
lean_dec_ref(v_k_1724_);
lean_dec_ref(v_f_1707_);
return v___x_1729_;
}
}
else
{
lean_dec_ref(v_k_1724_);
lean_dec_ref(v_decl_1723_);
lean_dec_ref(v_f_1707_);
return v___x_1725_;
}
}
else
{
lean_dec_ref(v_k_1724_);
lean_dec_ref(v_decl_1723_);
lean_dec_ref(v_f_1707_);
return v___x_1725_;
}
}
case 4:
{
lean_object* v_cases_1733_; lean_object* v___x_1735_; uint8_t v_isShared_1736_; uint8_t v_isSharedCheck_1752_; 
v_cases_1733_ = lean_ctor_get(v_a_1708_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_a_1708_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1735_ = v_a_1708_;
v_isShared_1736_ = v_isSharedCheck_1752_;
goto v_resetjp_1734_;
}
else
{
lean_inc(v_cases_1733_);
lean_dec(v_a_1708_);
v___x_1735_ = lean_box(0);
v_isShared_1736_ = v_isSharedCheck_1752_;
goto v_resetjp_1734_;
}
v_resetjp_1734_:
{
lean_object* v_alts_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; uint8_t v___x_1740_; 
v_alts_1737_ = lean_ctor_get(v_cases_1733_, 3);
lean_inc_ref(v_alts_1737_);
lean_dec_ref(v_cases_1733_);
v___x_1738_ = lean_unsigned_to_nat(0u);
v___x_1739_ = lean_array_get_size(v_alts_1737_);
v___x_1740_ = lean_nat_dec_lt(v___x_1738_, v___x_1739_);
if (v___x_1740_ == 0)
{
lean_object* v___x_1741_; lean_object* v___x_1743_; 
lean_dec_ref(v_alts_1737_);
lean_dec_ref(v_f_1707_);
v___x_1741_ = lean_box(v___x_1740_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set_tag(v___x_1735_, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1741_);
v___x_1743_ = v___x_1735_;
goto v_reusejp_1742_;
}
else
{
lean_object* v_reuseFailAlloc_1744_; 
v_reuseFailAlloc_1744_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1744_, 0, v___x_1741_);
v___x_1743_ = v_reuseFailAlloc_1744_;
goto v_reusejp_1742_;
}
v_reusejp_1742_:
{
return v___x_1743_;
}
}
else
{
if (v___x_1740_ == 0)
{
lean_object* v___x_1745_; lean_object* v___x_1747_; 
lean_dec_ref(v_alts_1737_);
lean_dec_ref(v_f_1707_);
v___x_1745_ = lean_box(v___x_1740_);
if (v_isShared_1736_ == 0)
{
lean_ctor_set_tag(v___x_1735_, 0);
lean_ctor_set(v___x_1735_, 0, v___x_1745_);
v___x_1747_ = v___x_1735_;
goto v_reusejp_1746_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v___x_1745_);
v___x_1747_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1746_;
}
v_reusejp_1746_:
{
return v___x_1747_;
}
}
else
{
size_t v___x_1749_; size_t v___x_1750_; lean_object* v___x_1751_; 
lean_del_object(v___x_1735_);
v___x_1749_ = ((size_t)0ULL);
v___x_1750_ = lean_usize_of_nat(v___x_1739_);
v___x_1751_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_1706_, v_f_1707_, v_alts_1737_, v___x_1749_, v___x_1750_, v_a_1709_, v_a_1710_, v_a_1711_, v_a_1712_);
lean_dec_ref(v_alts_1737_);
return v___x_1751_;
}
}
}
}
case 7:
{
lean_object* v_k_1753_; 
v_k_1753_ = lean_ctor_get(v_a_1708_, 3);
lean_inc_ref(v_k_1753_);
lean_dec_ref_known(v_a_1708_, 4);
v_a_1708_ = v_k_1753_;
goto _start;
}
case 8:
{
lean_object* v_k_1755_; 
v_k_1755_ = lean_ctor_get(v_a_1708_, 3);
lean_inc_ref(v_k_1755_);
lean_dec_ref_known(v_a_1708_, 4);
v_a_1708_ = v_k_1755_;
goto _start;
}
case 9:
{
lean_object* v_k_1757_; 
v_k_1757_ = lean_ctor_get(v_a_1708_, 5);
lean_inc_ref(v_k_1757_);
lean_dec_ref_known(v_a_1708_, 6);
v_a_1708_ = v_k_1757_;
goto _start;
}
case 10:
{
lean_object* v_k_1759_; 
v_k_1759_ = lean_ctor_get(v_a_1708_, 2);
lean_inc_ref(v_k_1759_);
lean_dec_ref_known(v_a_1708_, 3);
v_a_1708_ = v_k_1759_;
goto _start;
}
case 11:
{
lean_object* v_k_1761_; 
v_k_1761_ = lean_ctor_get(v_a_1708_, 2);
lean_inc_ref(v_k_1761_);
lean_dec_ref_known(v_a_1708_, 3);
v_a_1708_ = v_k_1761_;
goto _start;
}
case 12:
{
lean_object* v_k_1763_; 
v_k_1763_ = lean_ctor_get(v_a_1708_, 3);
lean_inc_ref(v_k_1763_);
lean_dec_ref_known(v_a_1708_, 4);
v_a_1708_ = v_k_1763_;
goto _start;
}
case 13:
{
lean_object* v_k_1765_; 
v_k_1765_ = lean_ctor_get(v_a_1708_, 1);
lean_inc_ref(v_k_1765_);
lean_dec_ref_known(v_a_1708_, 2);
v_a_1708_ = v_k_1765_;
goto _start;
}
default: 
{
uint8_t v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; 
lean_dec_ref(v_a_1708_);
lean_dec_ref(v_f_1707_);
v___x_1767_ = 0;
v___x_1768_ = lean_box(v___x_1767_);
v___x_1769_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1768_);
return v___x_1769_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(uint8_t v_pu_1770_, lean_object* v_f_1771_, lean_object* v_as_1772_, size_t v_i_1773_, size_t v_stop_1774_, lean_object* v___y_1775_, lean_object* v___y_1776_, lean_object* v___y_1777_, lean_object* v___y_1778_){
_start:
{
lean_object* v___y_1781_; uint8_t v___x_1788_; 
v___x_1788_ = lean_usize_dec_eq(v_i_1773_, v_stop_1774_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; 
v___x_1789_ = lean_array_uget_borrowed(v_as_1772_, v_i_1773_);
switch(lean_obj_tag(v___x_1789_))
{
case 0:
{
lean_object* v_code_1790_; 
v_code_1790_ = lean_ctor_get(v___x_1789_, 2);
lean_inc_ref(v_code_1790_);
v___y_1781_ = v_code_1790_;
goto v___jp_1780_;
}
case 1:
{
lean_object* v_code_1791_; 
v_code_1791_ = lean_ctor_get(v___x_1789_, 1);
lean_inc_ref(v_code_1791_);
v___y_1781_ = v_code_1791_;
goto v___jp_1780_;
}
default: 
{
lean_object* v_code_1792_; 
v_code_1792_ = lean_ctor_get(v___x_1789_, 0);
lean_inc_ref(v_code_1792_);
v___y_1781_ = v_code_1792_;
goto v___jp_1780_;
}
}
}
else
{
uint8_t v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; 
lean_dec_ref(v_f_1771_);
v___x_1793_ = 0;
v___x_1794_ = lean_box(v___x_1793_);
v___x_1795_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1795_, 0, v___x_1794_);
return v___x_1795_;
}
v___jp_1780_:
{
lean_object* v___x_1782_; 
lean_inc_ref(v_f_1771_);
v___x_1782_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_1770_, v_f_1771_, v___y_1781_, v___y_1775_, v___y_1776_, v___y_1777_, v___y_1778_);
if (lean_obj_tag(v___x_1782_) == 0)
{
lean_object* v_a_1783_; uint8_t v___x_1784_; 
v_a_1783_ = lean_ctor_get(v___x_1782_, 0);
v___x_1784_ = lean_unbox(v_a_1783_);
if (v___x_1784_ == 0)
{
size_t v___x_1785_; size_t v___x_1786_; 
lean_dec_ref_known(v___x_1782_, 1);
v___x_1785_ = ((size_t)1ULL);
v___x_1786_ = lean_usize_add(v_i_1773_, v___x_1785_);
v_i_1773_ = v___x_1786_;
goto _start;
}
else
{
lean_dec_ref(v_f_1771_);
return v___x_1782_;
}
}
else
{
lean_dec_ref(v_f_1771_);
return v___x_1782_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0___boxed(lean_object* v_pu_1796_, lean_object* v_f_1797_, lean_object* v_as_1798_, lean_object* v_i_1799_, lean_object* v_stop_1800_, lean_object* v___y_1801_, lean_object* v___y_1802_, lean_object* v___y_1803_, lean_object* v___y_1804_, lean_object* v___y_1805_){
_start:
{
uint8_t v_pu_boxed_1806_; size_t v_i_boxed_1807_; size_t v_stop_boxed_1808_; lean_object* v_res_1809_; 
v_pu_boxed_1806_ = lean_unbox(v_pu_1796_);
v_i_boxed_1807_ = lean_unbox_usize(v_i_1799_);
lean_dec(v_i_1799_);
v_stop_boxed_1808_ = lean_unbox_usize(v_stop_1800_);
lean_dec(v_stop_1800_);
v_res_1809_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go_spec__0(v_pu_boxed_1806_, v_f_1797_, v_as_1798_, v_i_boxed_1807_, v_stop_boxed_1808_, v___y_1801_, v___y_1802_, v___y_1803_, v___y_1804_);
lean_dec(v___y_1804_);
lean_dec_ref(v___y_1803_);
lean_dec(v___y_1802_);
lean_dec_ref(v___y_1801_);
lean_dec_ref(v_as_1798_);
return v_res_1809_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed(lean_object* v_pu_1810_, lean_object* v_f_1811_, lean_object* v_a_1812_, lean_object* v_a_1813_, lean_object* v_a_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_, lean_object* v_a_1817_){
_start:
{
uint8_t v_pu_boxed_1818_; lean_object* v_res_1819_; 
v_pu_boxed_1818_ = lean_unbox(v_pu_1810_);
v_res_1819_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go(v_pu_boxed_1818_, v_f_1811_, v_a_1812_, v_a_1813_, v_a_1814_, v_a_1815_, v_a_1816_);
lean_dec(v_a_1816_);
lean_dec_ref(v_a_1815_);
lean_dec(v_a_1814_);
lean_dec_ref(v_a_1813_);
return v_res_1819_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(uint8_t v_pu_1820_, lean_object* v_f_1821_, lean_object* v_as_1822_, size_t v_i_1823_, size_t v_stop_1824_, lean_object* v_b_1825_, lean_object* v___y_1826_, lean_object* v___y_1827_, lean_object* v___y_1828_, lean_object* v___y_1829_){
_start:
{
lean_object* v_a_1832_; uint8_t v___x_1836_; 
v___x_1836_ = lean_usize_dec_eq(v_i_1823_, v_stop_1824_);
if (v___x_1836_ == 0)
{
lean_object* v___x_1837_; lean_object* v_value_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; 
v___x_1837_ = lean_array_uget_borrowed(v_as_1822_, v_i_1823_);
v_value_1838_ = lean_ctor_get(v___x_1837_, 1);
v___x_1839_ = lean_box(v_pu_1820_);
lean_inc_ref(v_f_1821_);
v___x_1840_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJp_go___boxed), 8, 2);
lean_closure_set(v___x_1840_, 0, v___x_1839_);
lean_closure_set(v___x_1840_, 1, v_f_1821_);
lean_inc_ref(v_value_1838_);
v___x_1841_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_1838_, v___x_1840_, v___y_1826_, v___y_1827_, v___y_1828_, v___y_1829_);
if (lean_obj_tag(v___x_1841_) == 0)
{
lean_object* v_a_1842_; uint8_t v___x_1843_; 
v_a_1842_ = lean_ctor_get(v___x_1841_, 0);
lean_inc(v_a_1842_);
lean_dec_ref_known(v___x_1841_, 1);
v___x_1843_ = lean_unbox(v_a_1842_);
lean_dec(v_a_1842_);
if (v___x_1843_ == 0)
{
v_a_1832_ = v_b_1825_;
goto v___jp_1831_;
}
else
{
lean_object* v___x_1844_; 
lean_inc(v___x_1837_);
v___x_1844_ = lean_array_push(v_b_1825_, v___x_1837_);
v_a_1832_ = v___x_1844_;
goto v___jp_1831_;
}
}
else
{
lean_object* v_a_1845_; lean_object* v___x_1847_; uint8_t v_isShared_1848_; uint8_t v_isSharedCheck_1852_; 
lean_dec_ref(v_b_1825_);
lean_dec_ref(v_f_1821_);
v_a_1845_ = lean_ctor_get(v___x_1841_, 0);
v_isSharedCheck_1852_ = !lean_is_exclusive(v___x_1841_);
if (v_isSharedCheck_1852_ == 0)
{
v___x_1847_ = v___x_1841_;
v_isShared_1848_ = v_isSharedCheck_1852_;
goto v_resetjp_1846_;
}
else
{
lean_inc(v_a_1845_);
lean_dec(v___x_1841_);
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
else
{
lean_object* v___x_1853_; 
lean_dec_ref(v_f_1821_);
v___x_1853_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1853_, 0, v_b_1825_);
return v___x_1853_;
}
v___jp_1831_:
{
size_t v___x_1833_; size_t v___x_1834_; 
v___x_1833_ = ((size_t)1ULL);
v___x_1834_ = lean_usize_add(v_i_1823_, v___x_1833_);
v_i_1823_ = v___x_1834_;
v_b_1825_ = v_a_1832_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0___boxed(lean_object* v_pu_1854_, lean_object* v_f_1855_, lean_object* v_as_1856_, lean_object* v_i_1857_, lean_object* v_stop_1858_, lean_object* v_b_1859_, lean_object* v___y_1860_, lean_object* v___y_1861_, lean_object* v___y_1862_, lean_object* v___y_1863_, lean_object* v___y_1864_){
_start:
{
uint8_t v_pu_boxed_1865_; size_t v_i_boxed_1866_; size_t v_stop_boxed_1867_; lean_object* v_res_1868_; 
v_pu_boxed_1865_ = lean_unbox(v_pu_1854_);
v_i_boxed_1866_ = lean_unbox_usize(v_i_1857_);
lean_dec(v_i_1857_);
v_stop_boxed_1867_ = lean_unbox_usize(v_stop_1858_);
lean_dec(v_stop_1858_);
v_res_1868_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_boxed_1865_, v_f_1855_, v_as_1856_, v_i_boxed_1866_, v_stop_boxed_1867_, v_b_1859_, v___y_1860_, v___y_1861_, v___y_1862_, v___y_1863_);
lean_dec(v___y_1863_);
lean_dec_ref(v___y_1862_);
lean_dec(v___y_1861_);
lean_dec_ref(v___y_1860_);
lean_dec_ref(v_as_1856_);
return v_res_1868_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp(uint8_t v_pu_1869_, lean_object* v_f_1870_, lean_object* v_a_1871_, lean_object* v_a_1872_, lean_object* v_a_1873_, lean_object* v_a_1874_, lean_object* v_a_1875_){
_start:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; uint8_t v___x_1880_; 
v___x_1877_ = lean_unsigned_to_nat(0u);
v___x_1878_ = lean_array_get_size(v_a_1871_);
v___x_1879_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_1880_ = lean_nat_dec_lt(v___x_1877_, v___x_1878_);
if (v___x_1880_ == 0)
{
lean_object* v___x_1881_; 
lean_dec_ref(v_f_1870_);
v___x_1881_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1881_, 0, v___x_1879_);
return v___x_1881_;
}
else
{
size_t v___x_1882_; size_t v___x_1883_; lean_object* v___x_1884_; 
v___x_1882_ = ((size_t)0ULL);
v___x_1883_ = lean_usize_of_nat(v___x_1878_);
v___x_1884_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJp_spec__0(v_pu_1869_, v_f_1870_, v_a_1871_, v___x_1882_, v___x_1883_, v___x_1879_, v_a_1872_, v_a_1873_, v_a_1874_, v_a_1875_);
return v___x_1884_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJp___boxed(lean_object* v_pu_1885_, lean_object* v_f_1886_, lean_object* v_a_1887_, lean_object* v_a_1888_, lean_object* v_a_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_, lean_object* v_a_1892_){
_start:
{
uint8_t v_pu_boxed_1893_; lean_object* v_res_1894_; 
v_pu_boxed_1893_ = lean_unbox(v_pu_1885_);
v_res_1894_ = l_Lean_Compiler_LCNF_Probe_filterByJp(v_pu_boxed_1893_, v_f_1886_, v_a_1887_, v_a_1888_, v_a_1889_, v_a_1890_, v_a_1891_);
lean_dec(v_a_1891_);
lean_dec_ref(v_a_1890_);
lean_dec(v_a_1889_);
lean_dec_ref(v_a_1888_);
lean_dec_ref(v_a_1887_);
return v_res_1894_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(uint8_t v_pu_1895_, lean_object* v_f_1896_, lean_object* v_a_1897_, lean_object* v_a_1898_, lean_object* v_a_1899_, lean_object* v_a_1900_, lean_object* v_a_1901_){
_start:
{
switch(lean_obj_tag(v_a_1897_))
{
case 0:
{
lean_object* v_k_1903_; 
v_k_1903_ = lean_ctor_get(v_a_1897_, 1);
lean_inc_ref(v_k_1903_);
lean_dec_ref_known(v_a_1897_, 2);
v_a_1897_ = v_k_1903_;
goto _start;
}
case 1:
{
lean_object* v_decl_1905_; lean_object* v_k_1906_; lean_object* v___x_1907_; 
v_decl_1905_ = lean_ctor_get(v_a_1897_, 0);
lean_inc_ref_n(v_decl_1905_, 2);
v_k_1906_ = lean_ctor_get(v_a_1897_, 1);
lean_inc_ref(v_k_1906_);
lean_dec_ref_known(v_a_1897_, 2);
lean_inc_ref(v_f_1896_);
lean_inc(v_a_1901_);
lean_inc_ref(v_a_1900_);
lean_inc(v_a_1899_);
lean_inc_ref(v_a_1898_);
v___x_1907_ = lean_apply_6(v_f_1896_, v_decl_1905_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, lean_box(0));
if (lean_obj_tag(v___x_1907_) == 0)
{
lean_object* v_a_1908_; uint8_t v___x_1909_; 
v_a_1908_ = lean_ctor_get(v___x_1907_, 0);
lean_inc(v_a_1908_);
v___x_1909_ = lean_unbox(v_a_1908_);
lean_dec(v_a_1908_);
if (v___x_1909_ == 0)
{
lean_object* v_value_1910_; lean_object* v___x_1911_; 
lean_dec_ref_known(v___x_1907_, 1);
v_value_1910_ = lean_ctor_get(v_decl_1905_, 4);
lean_inc_ref(v_value_1910_);
lean_dec_ref(v_decl_1905_);
lean_inc_ref(v_f_1896_);
v___x_1911_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_1895_, v_f_1896_, v_value_1910_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_);
if (lean_obj_tag(v___x_1911_) == 0)
{
lean_object* v_a_1912_; uint8_t v___x_1913_; 
v_a_1912_ = lean_ctor_get(v___x_1911_, 0);
v___x_1913_ = lean_unbox(v_a_1912_);
if (v___x_1913_ == 0)
{
lean_dec_ref_known(v___x_1911_, 1);
v_a_1897_ = v_k_1906_;
goto _start;
}
else
{
lean_dec_ref(v_k_1906_);
lean_dec_ref(v_f_1896_);
return v___x_1911_;
}
}
else
{
lean_dec_ref(v_k_1906_);
lean_dec_ref(v_f_1896_);
return v___x_1911_;
}
}
else
{
lean_dec_ref(v_k_1906_);
lean_dec_ref(v_decl_1905_);
lean_dec_ref(v_f_1896_);
return v___x_1907_;
}
}
else
{
lean_dec_ref(v_k_1906_);
lean_dec_ref(v_decl_1905_);
lean_dec_ref(v_f_1896_);
return v___x_1907_;
}
}
case 2:
{
lean_object* v_decl_1915_; lean_object* v_k_1916_; lean_object* v___x_1917_; 
v_decl_1915_ = lean_ctor_get(v_a_1897_, 0);
lean_inc_ref_n(v_decl_1915_, 2);
v_k_1916_ = lean_ctor_get(v_a_1897_, 1);
lean_inc_ref(v_k_1916_);
lean_dec_ref_known(v_a_1897_, 2);
lean_inc_ref(v_f_1896_);
lean_inc(v_a_1901_);
lean_inc_ref(v_a_1900_);
lean_inc(v_a_1899_);
lean_inc_ref(v_a_1898_);
v___x_1917_ = lean_apply_6(v_f_1896_, v_decl_1915_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_, lean_box(0));
if (lean_obj_tag(v___x_1917_) == 0)
{
lean_object* v_a_1918_; uint8_t v___x_1919_; 
v_a_1918_ = lean_ctor_get(v___x_1917_, 0);
lean_inc(v_a_1918_);
v___x_1919_ = lean_unbox(v_a_1918_);
lean_dec(v_a_1918_);
if (v___x_1919_ == 0)
{
lean_object* v_value_1920_; lean_object* v___x_1921_; 
lean_dec_ref_known(v___x_1917_, 1);
v_value_1920_ = lean_ctor_get(v_decl_1915_, 4);
lean_inc_ref(v_value_1920_);
lean_dec_ref(v_decl_1915_);
lean_inc_ref(v_f_1896_);
v___x_1921_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_1895_, v_f_1896_, v_value_1920_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_);
if (lean_obj_tag(v___x_1921_) == 0)
{
lean_object* v_a_1922_; uint8_t v___x_1923_; 
v_a_1922_ = lean_ctor_get(v___x_1921_, 0);
v___x_1923_ = lean_unbox(v_a_1922_);
if (v___x_1923_ == 0)
{
lean_dec_ref_known(v___x_1921_, 1);
v_a_1897_ = v_k_1916_;
goto _start;
}
else
{
lean_dec_ref(v_k_1916_);
lean_dec_ref(v_f_1896_);
return v___x_1921_;
}
}
else
{
lean_dec_ref(v_k_1916_);
lean_dec_ref(v_f_1896_);
return v___x_1921_;
}
}
else
{
lean_dec_ref(v_k_1916_);
lean_dec_ref(v_decl_1915_);
lean_dec_ref(v_f_1896_);
return v___x_1917_;
}
}
else
{
lean_dec_ref(v_k_1916_);
lean_dec_ref(v_decl_1915_);
lean_dec_ref(v_f_1896_);
return v___x_1917_;
}
}
case 4:
{
lean_object* v_cases_1925_; lean_object* v___x_1927_; uint8_t v_isShared_1928_; uint8_t v_isSharedCheck_1944_; 
v_cases_1925_ = lean_ctor_get(v_a_1897_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_a_1897_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1927_ = v_a_1897_;
v_isShared_1928_ = v_isSharedCheck_1944_;
goto v_resetjp_1926_;
}
else
{
lean_inc(v_cases_1925_);
lean_dec(v_a_1897_);
v___x_1927_ = lean_box(0);
v_isShared_1928_ = v_isSharedCheck_1944_;
goto v_resetjp_1926_;
}
v_resetjp_1926_:
{
lean_object* v_alts_1929_; lean_object* v___x_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
v_alts_1929_ = lean_ctor_get(v_cases_1925_, 3);
lean_inc_ref(v_alts_1929_);
lean_dec_ref(v_cases_1925_);
v___x_1930_ = lean_unsigned_to_nat(0u);
v___x_1931_ = lean_array_get_size(v_alts_1929_);
v___x_1932_ = lean_nat_dec_lt(v___x_1930_, v___x_1931_);
if (v___x_1932_ == 0)
{
lean_object* v___x_1933_; lean_object* v___x_1935_; 
lean_dec_ref(v_alts_1929_);
lean_dec_ref(v_f_1896_);
v___x_1933_ = lean_box(v___x_1932_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set_tag(v___x_1927_, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1933_);
v___x_1935_ = v___x_1927_;
goto v_reusejp_1934_;
}
else
{
lean_object* v_reuseFailAlloc_1936_; 
v_reuseFailAlloc_1936_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1936_, 0, v___x_1933_);
v___x_1935_ = v_reuseFailAlloc_1936_;
goto v_reusejp_1934_;
}
v_reusejp_1934_:
{
return v___x_1935_;
}
}
else
{
if (v___x_1932_ == 0)
{
lean_object* v___x_1937_; lean_object* v___x_1939_; 
lean_dec_ref(v_alts_1929_);
lean_dec_ref(v_f_1896_);
v___x_1937_ = lean_box(v___x_1932_);
if (v_isShared_1928_ == 0)
{
lean_ctor_set_tag(v___x_1927_, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1937_);
v___x_1939_ = v___x_1927_;
goto v_reusejp_1938_;
}
else
{
lean_object* v_reuseFailAlloc_1940_; 
v_reuseFailAlloc_1940_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1940_, 0, v___x_1937_);
v___x_1939_ = v_reuseFailAlloc_1940_;
goto v_reusejp_1938_;
}
v_reusejp_1938_:
{
return v___x_1939_;
}
}
else
{
size_t v___x_1941_; size_t v___x_1942_; lean_object* v___x_1943_; 
lean_del_object(v___x_1927_);
v___x_1941_ = ((size_t)0ULL);
v___x_1942_ = lean_usize_of_nat(v___x_1931_);
v___x_1943_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_1895_, v_f_1896_, v_alts_1929_, v___x_1941_, v___x_1942_, v_a_1898_, v_a_1899_, v_a_1900_, v_a_1901_);
lean_dec_ref(v_alts_1929_);
return v___x_1943_;
}
}
}
}
case 7:
{
lean_object* v_k_1945_; 
v_k_1945_ = lean_ctor_get(v_a_1897_, 3);
lean_inc_ref(v_k_1945_);
lean_dec_ref_known(v_a_1897_, 4);
v_a_1897_ = v_k_1945_;
goto _start;
}
case 8:
{
lean_object* v_k_1947_; 
v_k_1947_ = lean_ctor_get(v_a_1897_, 3);
lean_inc_ref(v_k_1947_);
lean_dec_ref_known(v_a_1897_, 4);
v_a_1897_ = v_k_1947_;
goto _start;
}
case 9:
{
lean_object* v_k_1949_; 
v_k_1949_ = lean_ctor_get(v_a_1897_, 5);
lean_inc_ref(v_k_1949_);
lean_dec_ref_known(v_a_1897_, 6);
v_a_1897_ = v_k_1949_;
goto _start;
}
case 10:
{
lean_object* v_k_1951_; 
v_k_1951_ = lean_ctor_get(v_a_1897_, 2);
lean_inc_ref(v_k_1951_);
lean_dec_ref_known(v_a_1897_, 3);
v_a_1897_ = v_k_1951_;
goto _start;
}
case 11:
{
lean_object* v_k_1953_; 
v_k_1953_ = lean_ctor_get(v_a_1897_, 2);
lean_inc_ref(v_k_1953_);
lean_dec_ref_known(v_a_1897_, 3);
v_a_1897_ = v_k_1953_;
goto _start;
}
case 12:
{
lean_object* v_k_1955_; 
v_k_1955_ = lean_ctor_get(v_a_1897_, 3);
lean_inc_ref(v_k_1955_);
lean_dec_ref_known(v_a_1897_, 4);
v_a_1897_ = v_k_1955_;
goto _start;
}
case 13:
{
lean_object* v_k_1957_; 
v_k_1957_ = lean_ctor_get(v_a_1897_, 1);
lean_inc_ref(v_k_1957_);
lean_dec_ref_known(v_a_1897_, 2);
v_a_1897_ = v_k_1957_;
goto _start;
}
default: 
{
uint8_t v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; 
lean_dec_ref(v_a_1897_);
lean_dec_ref(v_f_1896_);
v___x_1959_ = 0;
v___x_1960_ = lean_box(v___x_1959_);
v___x_1961_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1961_, 0, v___x_1960_);
return v___x_1961_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(uint8_t v_pu_1962_, lean_object* v_f_1963_, lean_object* v_as_1964_, size_t v_i_1965_, size_t v_stop_1966_, lean_object* v___y_1967_, lean_object* v___y_1968_, lean_object* v___y_1969_, lean_object* v___y_1970_){
_start:
{
lean_object* v___y_1973_; uint8_t v___x_1980_; 
v___x_1980_ = lean_usize_dec_eq(v_i_1965_, v_stop_1966_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; 
v___x_1981_ = lean_array_uget_borrowed(v_as_1964_, v_i_1965_);
switch(lean_obj_tag(v___x_1981_))
{
case 0:
{
lean_object* v_code_1982_; 
v_code_1982_ = lean_ctor_get(v___x_1981_, 2);
lean_inc_ref(v_code_1982_);
v___y_1973_ = v_code_1982_;
goto v___jp_1972_;
}
case 1:
{
lean_object* v_code_1983_; 
v_code_1983_ = lean_ctor_get(v___x_1981_, 1);
lean_inc_ref(v_code_1983_);
v___y_1973_ = v_code_1983_;
goto v___jp_1972_;
}
default: 
{
lean_object* v_code_1984_; 
v_code_1984_ = lean_ctor_get(v___x_1981_, 0);
lean_inc_ref(v_code_1984_);
v___y_1973_ = v_code_1984_;
goto v___jp_1972_;
}
}
}
else
{
uint8_t v___x_1985_; lean_object* v___x_1986_; lean_object* v___x_1987_; 
lean_dec_ref(v_f_1963_);
v___x_1985_ = 0;
v___x_1986_ = lean_box(v___x_1985_);
v___x_1987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1987_, 0, v___x_1986_);
return v___x_1987_;
}
v___jp_1972_:
{
lean_object* v___x_1974_; 
lean_inc_ref(v_f_1963_);
v___x_1974_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_1962_, v_f_1963_, v___y_1973_, v___y_1967_, v___y_1968_, v___y_1969_, v___y_1970_);
if (lean_obj_tag(v___x_1974_) == 0)
{
lean_object* v_a_1975_; uint8_t v___x_1976_; 
v_a_1975_ = lean_ctor_get(v___x_1974_, 0);
v___x_1976_ = lean_unbox(v_a_1975_);
if (v___x_1976_ == 0)
{
size_t v___x_1977_; size_t v___x_1978_; 
lean_dec_ref_known(v___x_1974_, 1);
v___x_1977_ = ((size_t)1ULL);
v___x_1978_ = lean_usize_add(v_i_1965_, v___x_1977_);
v_i_1965_ = v___x_1978_;
goto _start;
}
else
{
lean_dec_ref(v_f_1963_);
return v___x_1974_;
}
}
else
{
lean_dec_ref(v_f_1963_);
return v___x_1974_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0___boxed(lean_object* v_pu_1988_, lean_object* v_f_1989_, lean_object* v_as_1990_, lean_object* v_i_1991_, lean_object* v_stop_1992_, lean_object* v___y_1993_, lean_object* v___y_1994_, lean_object* v___y_1995_, lean_object* v___y_1996_, lean_object* v___y_1997_){
_start:
{
uint8_t v_pu_boxed_1998_; size_t v_i_boxed_1999_; size_t v_stop_boxed_2000_; lean_object* v_res_2001_; 
v_pu_boxed_1998_ = lean_unbox(v_pu_1988_);
v_i_boxed_1999_ = lean_unbox_usize(v_i_1991_);
lean_dec(v_i_1991_);
v_stop_boxed_2000_ = lean_unbox_usize(v_stop_1992_);
lean_dec(v_stop_1992_);
v_res_2001_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go_spec__0(v_pu_boxed_1998_, v_f_1989_, v_as_1990_, v_i_boxed_1999_, v_stop_boxed_2000_, v___y_1993_, v___y_1994_, v___y_1995_, v___y_1996_);
lean_dec(v___y_1996_);
lean_dec_ref(v___y_1995_);
lean_dec(v___y_1994_);
lean_dec_ref(v___y_1993_);
lean_dec_ref(v_as_1990_);
return v_res_2001_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed(lean_object* v_pu_2002_, lean_object* v_f_2003_, lean_object* v_a_2004_, lean_object* v_a_2005_, lean_object* v_a_2006_, lean_object* v_a_2007_, lean_object* v_a_2008_, lean_object* v_a_2009_){
_start:
{
uint8_t v_pu_boxed_2010_; lean_object* v_res_2011_; 
v_pu_boxed_2010_ = lean_unbox(v_pu_2002_);
v_res_2011_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go(v_pu_boxed_2010_, v_f_2003_, v_a_2004_, v_a_2005_, v_a_2006_, v_a_2007_, v_a_2008_);
lean_dec(v_a_2008_);
lean_dec_ref(v_a_2007_);
lean_dec(v_a_2006_);
lean_dec_ref(v_a_2005_);
return v_res_2011_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(uint8_t v_pu_2012_, lean_object* v_f_2013_, lean_object* v_as_2014_, size_t v_i_2015_, size_t v_stop_2016_, lean_object* v_b_2017_, lean_object* v___y_2018_, lean_object* v___y_2019_, lean_object* v___y_2020_, lean_object* v___y_2021_){
_start:
{
lean_object* v_a_2024_; uint8_t v___x_2028_; 
v___x_2028_ = lean_usize_dec_eq(v_i_2015_, v_stop_2016_);
if (v___x_2028_ == 0)
{
lean_object* v___x_2029_; lean_object* v_value_2030_; lean_object* v___x_2031_; lean_object* v___x_2032_; lean_object* v___x_2033_; 
v___x_2029_ = lean_array_uget_borrowed(v_as_2014_, v_i_2015_);
v_value_2030_ = lean_ctor_get(v___x_2029_, 1);
v___x_2031_ = lean_box(v_pu_2012_);
lean_inc_ref(v_f_2013_);
v___x_2032_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByFunDecl_go___boxed), 8, 2);
lean_closure_set(v___x_2032_, 0, v___x_2031_);
lean_closure_set(v___x_2032_, 1, v_f_2013_);
lean_inc_ref(v_value_2030_);
v___x_2033_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2030_, v___x_2032_, v___y_2018_, v___y_2019_, v___y_2020_, v___y_2021_);
if (lean_obj_tag(v___x_2033_) == 0)
{
lean_object* v_a_2034_; uint8_t v___x_2035_; 
v_a_2034_ = lean_ctor_get(v___x_2033_, 0);
lean_inc(v_a_2034_);
lean_dec_ref_known(v___x_2033_, 1);
v___x_2035_ = lean_unbox(v_a_2034_);
lean_dec(v_a_2034_);
if (v___x_2035_ == 0)
{
v_a_2024_ = v_b_2017_;
goto v___jp_2023_;
}
else
{
lean_object* v___x_2036_; 
lean_inc(v___x_2029_);
v___x_2036_ = lean_array_push(v_b_2017_, v___x_2029_);
v_a_2024_ = v___x_2036_;
goto v___jp_2023_;
}
}
else
{
lean_object* v_a_2037_; lean_object* v___x_2039_; uint8_t v_isShared_2040_; uint8_t v_isSharedCheck_2044_; 
lean_dec_ref(v_b_2017_);
lean_dec_ref(v_f_2013_);
v_a_2037_ = lean_ctor_get(v___x_2033_, 0);
v_isSharedCheck_2044_ = !lean_is_exclusive(v___x_2033_);
if (v_isSharedCheck_2044_ == 0)
{
v___x_2039_ = v___x_2033_;
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
else
{
lean_inc(v_a_2037_);
lean_dec(v___x_2033_);
v___x_2039_ = lean_box(0);
v_isShared_2040_ = v_isSharedCheck_2044_;
goto v_resetjp_2038_;
}
v_resetjp_2038_:
{
lean_object* v___x_2042_; 
if (v_isShared_2040_ == 0)
{
v___x_2042_ = v___x_2039_;
goto v_reusejp_2041_;
}
else
{
lean_object* v_reuseFailAlloc_2043_; 
v_reuseFailAlloc_2043_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2043_, 0, v_a_2037_);
v___x_2042_ = v_reuseFailAlloc_2043_;
goto v_reusejp_2041_;
}
v_reusejp_2041_:
{
return v___x_2042_;
}
}
}
}
else
{
lean_object* v___x_2045_; 
lean_dec_ref(v_f_2013_);
v___x_2045_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2045_, 0, v_b_2017_);
return v___x_2045_;
}
v___jp_2023_:
{
size_t v___x_2025_; size_t v___x_2026_; 
v___x_2025_ = ((size_t)1ULL);
v___x_2026_ = lean_usize_add(v_i_2015_, v___x_2025_);
v_i_2015_ = v___x_2026_;
v_b_2017_ = v_a_2024_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0___boxed(lean_object* v_pu_2046_, lean_object* v_f_2047_, lean_object* v_as_2048_, lean_object* v_i_2049_, lean_object* v_stop_2050_, lean_object* v_b_2051_, lean_object* v___y_2052_, lean_object* v___y_2053_, lean_object* v___y_2054_, lean_object* v___y_2055_, lean_object* v___y_2056_){
_start:
{
uint8_t v_pu_boxed_2057_; size_t v_i_boxed_2058_; size_t v_stop_boxed_2059_; lean_object* v_res_2060_; 
v_pu_boxed_2057_ = lean_unbox(v_pu_2046_);
v_i_boxed_2058_ = lean_unbox_usize(v_i_2049_);
lean_dec(v_i_2049_);
v_stop_boxed_2059_ = lean_unbox_usize(v_stop_2050_);
lean_dec(v_stop_2050_);
v_res_2060_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_boxed_2057_, v_f_2047_, v_as_2048_, v_i_boxed_2058_, v_stop_boxed_2059_, v_b_2051_, v___y_2052_, v___y_2053_, v___y_2054_, v___y_2055_);
lean_dec(v___y_2055_);
lean_dec_ref(v___y_2054_);
lean_dec(v___y_2053_);
lean_dec_ref(v___y_2052_);
lean_dec_ref(v_as_2048_);
return v_res_2060_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl(uint8_t v_pu_2061_, lean_object* v_f_2062_, lean_object* v_a_2063_, lean_object* v_a_2064_, lean_object* v_a_2065_, lean_object* v_a_2066_, lean_object* v_a_2067_){
_start:
{
lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; uint8_t v___x_2072_; 
v___x_2069_ = lean_unsigned_to_nat(0u);
v___x_2070_ = lean_array_get_size(v_a_2063_);
v___x_2071_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2072_ = lean_nat_dec_lt(v___x_2069_, v___x_2070_);
if (v___x_2072_ == 0)
{
lean_object* v___x_2073_; 
lean_dec_ref(v_f_2062_);
v___x_2073_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2071_);
return v___x_2073_;
}
else
{
size_t v___x_2074_; size_t v___x_2075_; lean_object* v___x_2076_; 
v___x_2074_ = ((size_t)0ULL);
v___x_2075_ = lean_usize_of_nat(v___x_2070_);
v___x_2076_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByFunDecl_spec__0(v_pu_2061_, v_f_2062_, v_a_2063_, v___x_2074_, v___x_2075_, v___x_2071_, v_a_2064_, v_a_2065_, v_a_2066_, v_a_2067_);
return v___x_2076_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByFunDecl___boxed(lean_object* v_pu_2077_, lean_object* v_f_2078_, lean_object* v_a_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_, lean_object* v_a_2082_, lean_object* v_a_2083_, lean_object* v_a_2084_){
_start:
{
uint8_t v_pu_boxed_2085_; lean_object* v_res_2086_; 
v_pu_boxed_2085_ = lean_unbox(v_pu_2077_);
v_res_2086_ = l_Lean_Compiler_LCNF_Probe_filterByFunDecl(v_pu_boxed_2085_, v_f_2078_, v_a_2079_, v_a_2080_, v_a_2081_, v_a_2082_, v_a_2083_);
lean_dec(v_a_2083_);
lean_dec_ref(v_a_2082_);
lean_dec(v_a_2081_);
lean_dec_ref(v_a_2080_);
lean_dec_ref(v_a_2079_);
return v_res_2086_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(uint8_t v_pu_2087_, lean_object* v_f_2088_, lean_object* v_a_2089_, lean_object* v_a_2090_, lean_object* v_a_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_){
_start:
{
switch(lean_obj_tag(v_a_2089_))
{
case 0:
{
lean_object* v_k_2095_; 
v_k_2095_ = lean_ctor_get(v_a_2089_, 1);
lean_inc_ref(v_k_2095_);
lean_dec_ref_known(v_a_2089_, 2);
v_a_2089_ = v_k_2095_;
goto _start;
}
case 1:
{
lean_object* v_decl_2097_; lean_object* v_k_2098_; lean_object* v_value_2099_; lean_object* v___x_2100_; 
v_decl_2097_ = lean_ctor_get(v_a_2089_, 0);
lean_inc_ref(v_decl_2097_);
v_k_2098_ = lean_ctor_get(v_a_2089_, 1);
lean_inc_ref(v_k_2098_);
lean_dec_ref_known(v_a_2089_, 2);
v_value_2099_ = lean_ctor_get(v_decl_2097_, 4);
lean_inc_ref(v_value_2099_);
lean_dec_ref(v_decl_2097_);
lean_inc_ref(v_f_2088_);
v___x_2100_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2087_, v_f_2088_, v_value_2099_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
if (lean_obj_tag(v___x_2100_) == 0)
{
lean_object* v_a_2101_; uint8_t v___x_2102_; 
v_a_2101_ = lean_ctor_get(v___x_2100_, 0);
v___x_2102_ = lean_unbox(v_a_2101_);
if (v___x_2102_ == 0)
{
lean_dec_ref_known(v___x_2100_, 1);
v_a_2089_ = v_k_2098_;
goto _start;
}
else
{
lean_dec_ref(v_k_2098_);
lean_dec_ref(v_f_2088_);
return v___x_2100_;
}
}
else
{
lean_dec_ref(v_k_2098_);
lean_dec_ref(v_f_2088_);
return v___x_2100_;
}
}
case 2:
{
lean_object* v_decl_2104_; lean_object* v_k_2105_; lean_object* v_value_2106_; lean_object* v___x_2107_; 
v_decl_2104_ = lean_ctor_get(v_a_2089_, 0);
lean_inc_ref(v_decl_2104_);
v_k_2105_ = lean_ctor_get(v_a_2089_, 1);
lean_inc_ref(v_k_2105_);
lean_dec_ref_known(v_a_2089_, 2);
v_value_2106_ = lean_ctor_get(v_decl_2104_, 4);
lean_inc_ref(v_value_2106_);
lean_dec_ref(v_decl_2104_);
lean_inc_ref(v_f_2088_);
v___x_2107_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2087_, v_f_2088_, v_value_2106_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
if (lean_obj_tag(v___x_2107_) == 0)
{
lean_object* v_a_2108_; uint8_t v___x_2109_; 
v_a_2108_ = lean_ctor_get(v___x_2107_, 0);
v___x_2109_ = lean_unbox(v_a_2108_);
if (v___x_2109_ == 0)
{
lean_dec_ref_known(v___x_2107_, 1);
v_a_2089_ = v_k_2105_;
goto _start;
}
else
{
lean_dec_ref(v_k_2105_);
lean_dec_ref(v_f_2088_);
return v___x_2107_;
}
}
else
{
lean_dec_ref(v_k_2105_);
lean_dec_ref(v_f_2088_);
return v___x_2107_;
}
}
case 4:
{
lean_object* v_cases_2111_; lean_object* v___x_2112_; 
v_cases_2111_ = lean_ctor_get(v_a_2089_, 0);
lean_inc_ref_n(v_cases_2111_, 2);
lean_dec_ref_known(v_a_2089_, 1);
lean_inc_ref(v_f_2088_);
lean_inc(v_a_2093_);
lean_inc_ref(v_a_2092_);
lean_inc(v_a_2091_);
lean_inc_ref(v_a_2090_);
v___x_2112_ = lean_apply_6(v_f_2088_, v_cases_2111_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_, lean_box(0));
if (lean_obj_tag(v___x_2112_) == 0)
{
lean_object* v_a_2113_; uint8_t v___x_2114_; 
v_a_2113_ = lean_ctor_get(v___x_2112_, 0);
lean_inc(v_a_2113_);
v___x_2114_ = lean_unbox(v_a_2113_);
lean_dec(v_a_2113_);
if (v___x_2114_ == 0)
{
lean_object* v___x_2116_; uint8_t v_isShared_2117_; uint8_t v_isSharedCheck_2133_; 
v_isSharedCheck_2133_ = !lean_is_exclusive(v___x_2112_);
if (v_isSharedCheck_2133_ == 0)
{
lean_object* v_unused_2134_; 
v_unused_2134_ = lean_ctor_get(v___x_2112_, 0);
lean_dec(v_unused_2134_);
v___x_2116_ = v___x_2112_;
v_isShared_2117_ = v_isSharedCheck_2133_;
goto v_resetjp_2115_;
}
else
{
lean_dec(v___x_2112_);
v___x_2116_ = lean_box(0);
v_isShared_2117_ = v_isSharedCheck_2133_;
goto v_resetjp_2115_;
}
v_resetjp_2115_:
{
lean_object* v_alts_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; uint8_t v___x_2121_; 
v_alts_2118_ = lean_ctor_get(v_cases_2111_, 3);
lean_inc_ref(v_alts_2118_);
lean_dec_ref(v_cases_2111_);
v___x_2119_ = lean_unsigned_to_nat(0u);
v___x_2120_ = lean_array_get_size(v_alts_2118_);
v___x_2121_ = lean_nat_dec_lt(v___x_2119_, v___x_2120_);
if (v___x_2121_ == 0)
{
lean_object* v___x_2122_; lean_object* v___x_2124_; 
lean_dec_ref(v_alts_2118_);
lean_dec_ref(v_f_2088_);
v___x_2122_ = lean_box(v___x_2121_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2122_);
v___x_2124_ = v___x_2116_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2125_; 
v_reuseFailAlloc_2125_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2125_, 0, v___x_2122_);
v___x_2124_ = v_reuseFailAlloc_2125_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
return v___x_2124_;
}
}
else
{
if (v___x_2121_ == 0)
{
lean_object* v___x_2126_; lean_object* v___x_2128_; 
lean_dec_ref(v_alts_2118_);
lean_dec_ref(v_f_2088_);
v___x_2126_ = lean_box(v___x_2121_);
if (v_isShared_2117_ == 0)
{
lean_ctor_set(v___x_2116_, 0, v___x_2126_);
v___x_2128_ = v___x_2116_;
goto v_reusejp_2127_;
}
else
{
lean_object* v_reuseFailAlloc_2129_; 
v_reuseFailAlloc_2129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2129_, 0, v___x_2126_);
v___x_2128_ = v_reuseFailAlloc_2129_;
goto v_reusejp_2127_;
}
v_reusejp_2127_:
{
return v___x_2128_;
}
}
else
{
size_t v___x_2130_; size_t v___x_2131_; lean_object* v___x_2132_; 
lean_del_object(v___x_2116_);
v___x_2130_ = ((size_t)0ULL);
v___x_2131_ = lean_usize_of_nat(v___x_2120_);
v___x_2132_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_2087_, v_f_2088_, v_alts_2118_, v___x_2130_, v___x_2131_, v_a_2090_, v_a_2091_, v_a_2092_, v_a_2093_);
lean_dec_ref(v_alts_2118_);
return v___x_2132_;
}
}
}
}
else
{
lean_dec_ref(v_cases_2111_);
lean_dec_ref(v_f_2088_);
return v___x_2112_;
}
}
else
{
lean_dec_ref(v_cases_2111_);
lean_dec_ref(v_f_2088_);
return v___x_2112_;
}
}
case 7:
{
lean_object* v_k_2135_; 
v_k_2135_ = lean_ctor_get(v_a_2089_, 3);
lean_inc_ref(v_k_2135_);
lean_dec_ref_known(v_a_2089_, 4);
v_a_2089_ = v_k_2135_;
goto _start;
}
case 8:
{
lean_object* v_k_2137_; 
v_k_2137_ = lean_ctor_get(v_a_2089_, 3);
lean_inc_ref(v_k_2137_);
lean_dec_ref_known(v_a_2089_, 4);
v_a_2089_ = v_k_2137_;
goto _start;
}
case 9:
{
lean_object* v_k_2139_; 
v_k_2139_ = lean_ctor_get(v_a_2089_, 5);
lean_inc_ref(v_k_2139_);
lean_dec_ref_known(v_a_2089_, 6);
v_a_2089_ = v_k_2139_;
goto _start;
}
case 10:
{
lean_object* v_k_2141_; 
v_k_2141_ = lean_ctor_get(v_a_2089_, 2);
lean_inc_ref(v_k_2141_);
lean_dec_ref_known(v_a_2089_, 3);
v_a_2089_ = v_k_2141_;
goto _start;
}
case 11:
{
lean_object* v_k_2143_; 
v_k_2143_ = lean_ctor_get(v_a_2089_, 2);
lean_inc_ref(v_k_2143_);
lean_dec_ref_known(v_a_2089_, 3);
v_a_2089_ = v_k_2143_;
goto _start;
}
case 12:
{
lean_object* v_k_2145_; 
v_k_2145_ = lean_ctor_get(v_a_2089_, 3);
lean_inc_ref(v_k_2145_);
lean_dec_ref_known(v_a_2089_, 4);
v_a_2089_ = v_k_2145_;
goto _start;
}
case 13:
{
lean_object* v_k_2147_; 
v_k_2147_ = lean_ctor_get(v_a_2089_, 1);
lean_inc_ref(v_k_2147_);
lean_dec_ref_known(v_a_2089_, 2);
v_a_2089_ = v_k_2147_;
goto _start;
}
default: 
{
uint8_t v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; 
lean_dec_ref(v_a_2089_);
lean_dec_ref(v_f_2088_);
v___x_2149_ = 0;
v___x_2150_ = lean_box(v___x_2149_);
v___x_2151_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2150_);
return v___x_2151_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(uint8_t v_pu_2152_, lean_object* v_f_2153_, lean_object* v_as_2154_, size_t v_i_2155_, size_t v_stop_2156_, lean_object* v___y_2157_, lean_object* v___y_2158_, lean_object* v___y_2159_, lean_object* v___y_2160_){
_start:
{
lean_object* v___y_2163_; uint8_t v___x_2170_; 
v___x_2170_ = lean_usize_dec_eq(v_i_2155_, v_stop_2156_);
if (v___x_2170_ == 0)
{
lean_object* v___x_2171_; 
v___x_2171_ = lean_array_uget_borrowed(v_as_2154_, v_i_2155_);
switch(lean_obj_tag(v___x_2171_))
{
case 0:
{
lean_object* v_code_2172_; 
v_code_2172_ = lean_ctor_get(v___x_2171_, 2);
lean_inc_ref(v_code_2172_);
v___y_2163_ = v_code_2172_;
goto v___jp_2162_;
}
case 1:
{
lean_object* v_code_2173_; 
v_code_2173_ = lean_ctor_get(v___x_2171_, 1);
lean_inc_ref(v_code_2173_);
v___y_2163_ = v_code_2173_;
goto v___jp_2162_;
}
default: 
{
lean_object* v_code_2174_; 
v_code_2174_ = lean_ctor_get(v___x_2171_, 0);
lean_inc_ref(v_code_2174_);
v___y_2163_ = v_code_2174_;
goto v___jp_2162_;
}
}
}
else
{
uint8_t v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; 
lean_dec_ref(v_f_2153_);
v___x_2175_ = 0;
v___x_2176_ = lean_box(v___x_2175_);
v___x_2177_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2176_);
return v___x_2177_;
}
v___jp_2162_:
{
lean_object* v___x_2164_; 
lean_inc_ref(v_f_2153_);
v___x_2164_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_2152_, v_f_2153_, v___y_2163_, v___y_2157_, v___y_2158_, v___y_2159_, v___y_2160_);
if (lean_obj_tag(v___x_2164_) == 0)
{
lean_object* v_a_2165_; uint8_t v___x_2166_; 
v_a_2165_ = lean_ctor_get(v___x_2164_, 0);
v___x_2166_ = lean_unbox(v_a_2165_);
if (v___x_2166_ == 0)
{
size_t v___x_2167_; size_t v___x_2168_; 
lean_dec_ref_known(v___x_2164_, 1);
v___x_2167_ = ((size_t)1ULL);
v___x_2168_ = lean_usize_add(v_i_2155_, v___x_2167_);
v_i_2155_ = v___x_2168_;
goto _start;
}
else
{
lean_dec_ref(v_f_2153_);
return v___x_2164_;
}
}
else
{
lean_dec_ref(v_f_2153_);
return v___x_2164_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0___boxed(lean_object* v_pu_2178_, lean_object* v_f_2179_, lean_object* v_as_2180_, lean_object* v_i_2181_, lean_object* v_stop_2182_, lean_object* v___y_2183_, lean_object* v___y_2184_, lean_object* v___y_2185_, lean_object* v___y_2186_, lean_object* v___y_2187_){
_start:
{
uint8_t v_pu_boxed_2188_; size_t v_i_boxed_2189_; size_t v_stop_boxed_2190_; lean_object* v_res_2191_; 
v_pu_boxed_2188_ = lean_unbox(v_pu_2178_);
v_i_boxed_2189_ = lean_unbox_usize(v_i_2181_);
lean_dec(v_i_2181_);
v_stop_boxed_2190_ = lean_unbox_usize(v_stop_2182_);
lean_dec(v_stop_2182_);
v_res_2191_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go_spec__0(v_pu_boxed_2188_, v_f_2179_, v_as_2180_, v_i_boxed_2189_, v_stop_boxed_2190_, v___y_2183_, v___y_2184_, v___y_2185_, v___y_2186_);
lean_dec(v___y_2186_);
lean_dec_ref(v___y_2185_);
lean_dec(v___y_2184_);
lean_dec_ref(v___y_2183_);
lean_dec_ref(v_as_2180_);
return v_res_2191_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed(lean_object* v_pu_2192_, lean_object* v_f_2193_, lean_object* v_a_2194_, lean_object* v_a_2195_, lean_object* v_a_2196_, lean_object* v_a_2197_, lean_object* v_a_2198_, lean_object* v_a_2199_){
_start:
{
uint8_t v_pu_boxed_2200_; lean_object* v_res_2201_; 
v_pu_boxed_2200_ = lean_unbox(v_pu_2192_);
v_res_2201_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go(v_pu_boxed_2200_, v_f_2193_, v_a_2194_, v_a_2195_, v_a_2196_, v_a_2197_, v_a_2198_);
lean_dec(v_a_2198_);
lean_dec_ref(v_a_2197_);
lean_dec(v_a_2196_);
lean_dec_ref(v_a_2195_);
return v_res_2201_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(uint8_t v_pu_2202_, lean_object* v_f_2203_, lean_object* v_as_2204_, size_t v_i_2205_, size_t v_stop_2206_, lean_object* v_b_2207_, lean_object* v___y_2208_, lean_object* v___y_2209_, lean_object* v___y_2210_, lean_object* v___y_2211_){
_start:
{
lean_object* v_a_2214_; uint8_t v___x_2218_; 
v___x_2218_ = lean_usize_dec_eq(v_i_2205_, v_stop_2206_);
if (v___x_2218_ == 0)
{
lean_object* v___x_2219_; lean_object* v_value_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; 
v___x_2219_ = lean_array_uget_borrowed(v_as_2204_, v_i_2205_);
v_value_2220_ = lean_ctor_get(v___x_2219_, 1);
v___x_2221_ = lean_box(v_pu_2202_);
lean_inc_ref(v_f_2203_);
v___x_2222_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByCases_go___boxed), 8, 2);
lean_closure_set(v___x_2222_, 0, v___x_2221_);
lean_closure_set(v___x_2222_, 1, v_f_2203_);
lean_inc_ref(v_value_2220_);
v___x_2223_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2220_, v___x_2222_, v___y_2208_, v___y_2209_, v___y_2210_, v___y_2211_);
if (lean_obj_tag(v___x_2223_) == 0)
{
lean_object* v_a_2224_; uint8_t v___x_2225_; 
v_a_2224_ = lean_ctor_get(v___x_2223_, 0);
lean_inc(v_a_2224_);
lean_dec_ref_known(v___x_2223_, 1);
v___x_2225_ = lean_unbox(v_a_2224_);
lean_dec(v_a_2224_);
if (v___x_2225_ == 0)
{
v_a_2214_ = v_b_2207_;
goto v___jp_2213_;
}
else
{
lean_object* v___x_2226_; 
lean_inc(v___x_2219_);
v___x_2226_ = lean_array_push(v_b_2207_, v___x_2219_);
v_a_2214_ = v___x_2226_;
goto v___jp_2213_;
}
}
else
{
lean_object* v_a_2227_; lean_object* v___x_2229_; uint8_t v_isShared_2230_; uint8_t v_isSharedCheck_2234_; 
lean_dec_ref(v_b_2207_);
lean_dec_ref(v_f_2203_);
v_a_2227_ = lean_ctor_get(v___x_2223_, 0);
v_isSharedCheck_2234_ = !lean_is_exclusive(v___x_2223_);
if (v_isSharedCheck_2234_ == 0)
{
v___x_2229_ = v___x_2223_;
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
else
{
lean_inc(v_a_2227_);
lean_dec(v___x_2223_);
v___x_2229_ = lean_box(0);
v_isShared_2230_ = v_isSharedCheck_2234_;
goto v_resetjp_2228_;
}
v_resetjp_2228_:
{
lean_object* v___x_2232_; 
if (v_isShared_2230_ == 0)
{
v___x_2232_ = v___x_2229_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2233_; 
v_reuseFailAlloc_2233_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2233_, 0, v_a_2227_);
v___x_2232_ = v_reuseFailAlloc_2233_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
return v___x_2232_;
}
}
}
}
else
{
lean_object* v___x_2235_; 
lean_dec_ref(v_f_2203_);
v___x_2235_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2235_, 0, v_b_2207_);
return v___x_2235_;
}
v___jp_2213_:
{
size_t v___x_2215_; size_t v___x_2216_; 
v___x_2215_ = ((size_t)1ULL);
v___x_2216_ = lean_usize_add(v_i_2205_, v___x_2215_);
v_i_2205_ = v___x_2216_;
v_b_2207_ = v_a_2214_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0___boxed(lean_object* v_pu_2236_, lean_object* v_f_2237_, lean_object* v_as_2238_, lean_object* v_i_2239_, lean_object* v_stop_2240_, lean_object* v_b_2241_, lean_object* v___y_2242_, lean_object* v___y_2243_, lean_object* v___y_2244_, lean_object* v___y_2245_, lean_object* v___y_2246_){
_start:
{
uint8_t v_pu_boxed_2247_; size_t v_i_boxed_2248_; size_t v_stop_boxed_2249_; lean_object* v_res_2250_; 
v_pu_boxed_2247_ = lean_unbox(v_pu_2236_);
v_i_boxed_2248_ = lean_unbox_usize(v_i_2239_);
lean_dec(v_i_2239_);
v_stop_boxed_2249_ = lean_unbox_usize(v_stop_2240_);
lean_dec(v_stop_2240_);
v_res_2250_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_boxed_2247_, v_f_2237_, v_as_2238_, v_i_boxed_2248_, v_stop_boxed_2249_, v_b_2241_, v___y_2242_, v___y_2243_, v___y_2244_, v___y_2245_);
lean_dec(v___y_2245_);
lean_dec_ref(v___y_2244_);
lean_dec(v___y_2243_);
lean_dec_ref(v___y_2242_);
lean_dec_ref(v_as_2238_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases(uint8_t v_pu_2251_, lean_object* v_f_2252_, lean_object* v_a_2253_, lean_object* v_a_2254_, lean_object* v_a_2255_, lean_object* v_a_2256_, lean_object* v_a_2257_){
_start:
{
lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2261_; uint8_t v___x_2262_; 
v___x_2259_ = lean_unsigned_to_nat(0u);
v___x_2260_ = lean_array_get_size(v_a_2253_);
v___x_2261_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2262_ = lean_nat_dec_lt(v___x_2259_, v___x_2260_);
if (v___x_2262_ == 0)
{
lean_object* v___x_2263_; 
lean_dec_ref(v_f_2252_);
v___x_2263_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2263_, 0, v___x_2261_);
return v___x_2263_;
}
else
{
size_t v___x_2264_; size_t v___x_2265_; lean_object* v___x_2266_; 
v___x_2264_ = ((size_t)0ULL);
v___x_2265_ = lean_usize_of_nat(v___x_2260_);
v___x_2266_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByCases_spec__0(v_pu_2251_, v_f_2252_, v_a_2253_, v___x_2264_, v___x_2265_, v___x_2261_, v_a_2254_, v_a_2255_, v_a_2256_, v_a_2257_);
return v___x_2266_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByCases___boxed(lean_object* v_pu_2267_, lean_object* v_f_2268_, lean_object* v_a_2269_, lean_object* v_a_2270_, lean_object* v_a_2271_, lean_object* v_a_2272_, lean_object* v_a_2273_, lean_object* v_a_2274_){
_start:
{
uint8_t v_pu_boxed_2275_; lean_object* v_res_2276_; 
v_pu_boxed_2275_ = lean_unbox(v_pu_2267_);
v_res_2276_ = l_Lean_Compiler_LCNF_Probe_filterByCases(v_pu_boxed_2275_, v_f_2268_, v_a_2269_, v_a_2270_, v_a_2271_, v_a_2272_, v_a_2273_);
lean_dec(v_a_2273_);
lean_dec_ref(v_a_2272_);
lean_dec(v_a_2271_);
lean_dec_ref(v_a_2270_);
lean_dec_ref(v_a_2269_);
return v_res_2276_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(uint8_t v_pu_2277_, lean_object* v_f_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_, lean_object* v_a_2281_, lean_object* v_a_2282_, lean_object* v_a_2283_){
_start:
{
switch(lean_obj_tag(v_a_2279_))
{
case 0:
{
lean_object* v_k_2285_; 
v_k_2285_ = lean_ctor_get(v_a_2279_, 1);
lean_inc_ref(v_k_2285_);
lean_dec_ref_known(v_a_2279_, 2);
v_a_2279_ = v_k_2285_;
goto _start;
}
case 1:
{
lean_object* v_decl_2287_; lean_object* v_k_2288_; lean_object* v_value_2289_; lean_object* v___x_2290_; 
v_decl_2287_ = lean_ctor_get(v_a_2279_, 0);
lean_inc_ref(v_decl_2287_);
v_k_2288_ = lean_ctor_get(v_a_2279_, 1);
lean_inc_ref(v_k_2288_);
lean_dec_ref_known(v_a_2279_, 2);
v_value_2289_ = lean_ctor_get(v_decl_2287_, 4);
lean_inc_ref(v_value_2289_);
lean_dec_ref(v_decl_2287_);
lean_inc_ref(v_f_2278_);
v___x_2290_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2277_, v_f_2278_, v_value_2289_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_);
if (lean_obj_tag(v___x_2290_) == 0)
{
lean_object* v_a_2291_; uint8_t v___x_2292_; 
v_a_2291_ = lean_ctor_get(v___x_2290_, 0);
v___x_2292_ = lean_unbox(v_a_2291_);
if (v___x_2292_ == 0)
{
lean_dec_ref_known(v___x_2290_, 1);
v_a_2279_ = v_k_2288_;
goto _start;
}
else
{
lean_dec_ref(v_k_2288_);
lean_dec_ref(v_f_2278_);
return v___x_2290_;
}
}
else
{
lean_dec_ref(v_k_2288_);
lean_dec_ref(v_f_2278_);
return v___x_2290_;
}
}
case 2:
{
lean_object* v_decl_2294_; lean_object* v_k_2295_; lean_object* v_value_2296_; lean_object* v___x_2297_; 
v_decl_2294_ = lean_ctor_get(v_a_2279_, 0);
lean_inc_ref(v_decl_2294_);
v_k_2295_ = lean_ctor_get(v_a_2279_, 1);
lean_inc_ref(v_k_2295_);
lean_dec_ref_known(v_a_2279_, 2);
v_value_2296_ = lean_ctor_get(v_decl_2294_, 4);
lean_inc_ref(v_value_2296_);
lean_dec_ref(v_decl_2294_);
lean_inc_ref(v_f_2278_);
v___x_2297_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2277_, v_f_2278_, v_value_2296_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_);
if (lean_obj_tag(v___x_2297_) == 0)
{
lean_object* v_a_2298_; uint8_t v___x_2299_; 
v_a_2298_ = lean_ctor_get(v___x_2297_, 0);
v___x_2299_ = lean_unbox(v_a_2298_);
if (v___x_2299_ == 0)
{
lean_dec_ref_known(v___x_2297_, 1);
v_a_2279_ = v_k_2295_;
goto _start;
}
else
{
lean_dec_ref(v_k_2295_);
lean_dec_ref(v_f_2278_);
return v___x_2297_;
}
}
else
{
lean_dec_ref(v_k_2295_);
lean_dec_ref(v_f_2278_);
return v___x_2297_;
}
}
case 3:
{
lean_object* v_fvarId_2301_; lean_object* v_args_2302_; lean_object* v___x_2303_; 
v_fvarId_2301_ = lean_ctor_get(v_a_2279_, 0);
lean_inc(v_fvarId_2301_);
v_args_2302_ = lean_ctor_get(v_a_2279_, 1);
lean_inc_ref(v_args_2302_);
lean_dec_ref_known(v_a_2279_, 2);
lean_inc(v_a_2283_);
lean_inc_ref(v_a_2282_);
lean_inc(v_a_2281_);
lean_inc_ref(v_a_2280_);
v___x_2303_ = lean_apply_7(v_f_2278_, v_fvarId_2301_, v_args_2302_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_, lean_box(0));
return v___x_2303_;
}
case 4:
{
lean_object* v_cases_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2323_; 
v_cases_2304_ = lean_ctor_get(v_a_2279_, 0);
v_isSharedCheck_2323_ = !lean_is_exclusive(v_a_2279_);
if (v_isSharedCheck_2323_ == 0)
{
v___x_2306_ = v_a_2279_;
v_isShared_2307_ = v_isSharedCheck_2323_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_cases_2304_);
lean_dec(v_a_2279_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2323_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v_alts_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; uint8_t v___x_2311_; 
v_alts_2308_ = lean_ctor_get(v_cases_2304_, 3);
lean_inc_ref(v_alts_2308_);
lean_dec_ref(v_cases_2304_);
v___x_2309_ = lean_unsigned_to_nat(0u);
v___x_2310_ = lean_array_get_size(v_alts_2308_);
v___x_2311_ = lean_nat_dec_lt(v___x_2309_, v___x_2310_);
if (v___x_2311_ == 0)
{
lean_object* v___x_2312_; lean_object* v___x_2314_; 
lean_dec_ref(v_alts_2308_);
lean_dec_ref(v_f_2278_);
v___x_2312_ = lean_box(v___x_2311_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set_tag(v___x_2306_, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2312_);
v___x_2314_ = v___x_2306_;
goto v_reusejp_2313_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2312_);
v___x_2314_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2313_;
}
v_reusejp_2313_:
{
return v___x_2314_;
}
}
else
{
if (v___x_2311_ == 0)
{
lean_object* v___x_2316_; lean_object* v___x_2318_; 
lean_dec_ref(v_alts_2308_);
lean_dec_ref(v_f_2278_);
v___x_2316_ = lean_box(v___x_2311_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set_tag(v___x_2306_, 0);
lean_ctor_set(v___x_2306_, 0, v___x_2316_);
v___x_2318_ = v___x_2306_;
goto v_reusejp_2317_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v___x_2316_);
v___x_2318_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2317_;
}
v_reusejp_2317_:
{
return v___x_2318_;
}
}
else
{
size_t v___x_2320_; size_t v___x_2321_; lean_object* v___x_2322_; 
lean_del_object(v___x_2306_);
v___x_2320_ = ((size_t)0ULL);
v___x_2321_ = lean_usize_of_nat(v___x_2310_);
v___x_2322_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_2277_, v_f_2278_, v_alts_2308_, v___x_2320_, v___x_2321_, v_a_2280_, v_a_2281_, v_a_2282_, v_a_2283_);
lean_dec_ref(v_alts_2308_);
return v___x_2322_;
}
}
}
}
case 7:
{
lean_object* v_k_2324_; 
v_k_2324_ = lean_ctor_get(v_a_2279_, 3);
lean_inc_ref(v_k_2324_);
lean_dec_ref_known(v_a_2279_, 4);
v_a_2279_ = v_k_2324_;
goto _start;
}
case 8:
{
lean_object* v_k_2326_; 
v_k_2326_ = lean_ctor_get(v_a_2279_, 3);
lean_inc_ref(v_k_2326_);
lean_dec_ref_known(v_a_2279_, 4);
v_a_2279_ = v_k_2326_;
goto _start;
}
case 9:
{
lean_object* v_k_2328_; 
v_k_2328_ = lean_ctor_get(v_a_2279_, 5);
lean_inc_ref(v_k_2328_);
lean_dec_ref_known(v_a_2279_, 6);
v_a_2279_ = v_k_2328_;
goto _start;
}
case 10:
{
lean_object* v_k_2330_; 
v_k_2330_ = lean_ctor_get(v_a_2279_, 2);
lean_inc_ref(v_k_2330_);
lean_dec_ref_known(v_a_2279_, 3);
v_a_2279_ = v_k_2330_;
goto _start;
}
case 11:
{
lean_object* v_k_2332_; 
v_k_2332_ = lean_ctor_get(v_a_2279_, 2);
lean_inc_ref(v_k_2332_);
lean_dec_ref_known(v_a_2279_, 3);
v_a_2279_ = v_k_2332_;
goto _start;
}
case 12:
{
lean_object* v_k_2334_; 
v_k_2334_ = lean_ctor_get(v_a_2279_, 3);
lean_inc_ref(v_k_2334_);
lean_dec_ref_known(v_a_2279_, 4);
v_a_2279_ = v_k_2334_;
goto _start;
}
case 13:
{
lean_object* v_k_2336_; 
v_k_2336_ = lean_ctor_get(v_a_2279_, 1);
lean_inc_ref(v_k_2336_);
lean_dec_ref_known(v_a_2279_, 2);
v_a_2279_ = v_k_2336_;
goto _start;
}
default: 
{
uint8_t v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; 
lean_dec_ref(v_a_2279_);
lean_dec_ref(v_f_2278_);
v___x_2338_ = 0;
v___x_2339_ = lean_box(v___x_2338_);
v___x_2340_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2340_, 0, v___x_2339_);
return v___x_2340_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(uint8_t v_pu_2341_, lean_object* v_f_2342_, lean_object* v_as_2343_, size_t v_i_2344_, size_t v_stop_2345_, lean_object* v___y_2346_, lean_object* v___y_2347_, lean_object* v___y_2348_, lean_object* v___y_2349_){
_start:
{
lean_object* v___y_2352_; uint8_t v___x_2359_; 
v___x_2359_ = lean_usize_dec_eq(v_i_2344_, v_stop_2345_);
if (v___x_2359_ == 0)
{
lean_object* v___x_2360_; 
v___x_2360_ = lean_array_uget_borrowed(v_as_2343_, v_i_2344_);
switch(lean_obj_tag(v___x_2360_))
{
case 0:
{
lean_object* v_code_2361_; 
v_code_2361_ = lean_ctor_get(v___x_2360_, 2);
lean_inc_ref(v_code_2361_);
v___y_2352_ = v_code_2361_;
goto v___jp_2351_;
}
case 1:
{
lean_object* v_code_2362_; 
v_code_2362_ = lean_ctor_get(v___x_2360_, 1);
lean_inc_ref(v_code_2362_);
v___y_2352_ = v_code_2362_;
goto v___jp_2351_;
}
default: 
{
lean_object* v_code_2363_; 
v_code_2363_ = lean_ctor_get(v___x_2360_, 0);
lean_inc_ref(v_code_2363_);
v___y_2352_ = v_code_2363_;
goto v___jp_2351_;
}
}
}
else
{
uint8_t v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; 
lean_dec_ref(v_f_2342_);
v___x_2364_ = 0;
v___x_2365_ = lean_box(v___x_2364_);
v___x_2366_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2366_, 0, v___x_2365_);
return v___x_2366_;
}
v___jp_2351_:
{
lean_object* v___x_2353_; 
lean_inc_ref(v_f_2342_);
v___x_2353_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_2341_, v_f_2342_, v___y_2352_, v___y_2346_, v___y_2347_, v___y_2348_, v___y_2349_);
if (lean_obj_tag(v___x_2353_) == 0)
{
lean_object* v_a_2354_; uint8_t v___x_2355_; 
v_a_2354_ = lean_ctor_get(v___x_2353_, 0);
v___x_2355_ = lean_unbox(v_a_2354_);
if (v___x_2355_ == 0)
{
size_t v___x_2356_; size_t v___x_2357_; 
lean_dec_ref_known(v___x_2353_, 1);
v___x_2356_ = ((size_t)1ULL);
v___x_2357_ = lean_usize_add(v_i_2344_, v___x_2356_);
v_i_2344_ = v___x_2357_;
goto _start;
}
else
{
lean_dec_ref(v_f_2342_);
return v___x_2353_;
}
}
else
{
lean_dec_ref(v_f_2342_);
return v___x_2353_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0___boxed(lean_object* v_pu_2367_, lean_object* v_f_2368_, lean_object* v_as_2369_, lean_object* v_i_2370_, lean_object* v_stop_2371_, lean_object* v___y_2372_, lean_object* v___y_2373_, lean_object* v___y_2374_, lean_object* v___y_2375_, lean_object* v___y_2376_){
_start:
{
uint8_t v_pu_boxed_2377_; size_t v_i_boxed_2378_; size_t v_stop_boxed_2379_; lean_object* v_res_2380_; 
v_pu_boxed_2377_ = lean_unbox(v_pu_2367_);
v_i_boxed_2378_ = lean_unbox_usize(v_i_2370_);
lean_dec(v_i_2370_);
v_stop_boxed_2379_ = lean_unbox_usize(v_stop_2371_);
lean_dec(v_stop_2371_);
v_res_2380_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go_spec__0(v_pu_boxed_2377_, v_f_2368_, v_as_2369_, v_i_boxed_2378_, v_stop_boxed_2379_, v___y_2372_, v___y_2373_, v___y_2374_, v___y_2375_);
lean_dec(v___y_2375_);
lean_dec_ref(v___y_2374_);
lean_dec(v___y_2373_);
lean_dec_ref(v___y_2372_);
lean_dec_ref(v_as_2369_);
return v_res_2380_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed(lean_object* v_pu_2381_, lean_object* v_f_2382_, lean_object* v_a_2383_, lean_object* v_a_2384_, lean_object* v_a_2385_, lean_object* v_a_2386_, lean_object* v_a_2387_, lean_object* v_a_2388_){
_start:
{
uint8_t v_pu_boxed_2389_; lean_object* v_res_2390_; 
v_pu_boxed_2389_ = lean_unbox(v_pu_2381_);
v_res_2390_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go(v_pu_boxed_2389_, v_f_2382_, v_a_2383_, v_a_2384_, v_a_2385_, v_a_2386_, v_a_2387_);
lean_dec(v_a_2387_);
lean_dec_ref(v_a_2386_);
lean_dec(v_a_2385_);
lean_dec_ref(v_a_2384_);
return v_res_2390_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(uint8_t v_pu_2391_, lean_object* v_f_2392_, lean_object* v_as_2393_, size_t v_i_2394_, size_t v_stop_2395_, lean_object* v_b_2396_, lean_object* v___y_2397_, lean_object* v___y_2398_, lean_object* v___y_2399_, lean_object* v___y_2400_){
_start:
{
lean_object* v_a_2403_; uint8_t v___x_2407_; 
v___x_2407_ = lean_usize_dec_eq(v_i_2394_, v_stop_2395_);
if (v___x_2407_ == 0)
{
lean_object* v___x_2408_; lean_object* v_value_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; 
v___x_2408_ = lean_array_uget_borrowed(v_as_2393_, v_i_2394_);
v_value_2409_ = lean_ctor_get(v___x_2408_, 1);
v___x_2410_ = lean_box(v_pu_2391_);
lean_inc_ref(v_f_2392_);
v___x_2411_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByJmp_go___boxed), 8, 2);
lean_closure_set(v___x_2411_, 0, v___x_2410_);
lean_closure_set(v___x_2411_, 1, v_f_2392_);
lean_inc_ref(v_value_2409_);
v___x_2412_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2409_, v___x_2411_, v___y_2397_, v___y_2398_, v___y_2399_, v___y_2400_);
if (lean_obj_tag(v___x_2412_) == 0)
{
lean_object* v_a_2413_; uint8_t v___x_2414_; 
v_a_2413_ = lean_ctor_get(v___x_2412_, 0);
lean_inc(v_a_2413_);
lean_dec_ref_known(v___x_2412_, 1);
v___x_2414_ = lean_unbox(v_a_2413_);
lean_dec(v_a_2413_);
if (v___x_2414_ == 0)
{
v_a_2403_ = v_b_2396_;
goto v___jp_2402_;
}
else
{
lean_object* v___x_2415_; 
lean_inc(v___x_2408_);
v___x_2415_ = lean_array_push(v_b_2396_, v___x_2408_);
v_a_2403_ = v___x_2415_;
goto v___jp_2402_;
}
}
else
{
lean_object* v_a_2416_; lean_object* v___x_2418_; uint8_t v_isShared_2419_; uint8_t v_isSharedCheck_2423_; 
lean_dec_ref(v_b_2396_);
lean_dec_ref(v_f_2392_);
v_a_2416_ = lean_ctor_get(v___x_2412_, 0);
v_isSharedCheck_2423_ = !lean_is_exclusive(v___x_2412_);
if (v_isSharedCheck_2423_ == 0)
{
v___x_2418_ = v___x_2412_;
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
else
{
lean_inc(v_a_2416_);
lean_dec(v___x_2412_);
v___x_2418_ = lean_box(0);
v_isShared_2419_ = v_isSharedCheck_2423_;
goto v_resetjp_2417_;
}
v_resetjp_2417_:
{
lean_object* v___x_2421_; 
if (v_isShared_2419_ == 0)
{
v___x_2421_ = v___x_2418_;
goto v_reusejp_2420_;
}
else
{
lean_object* v_reuseFailAlloc_2422_; 
v_reuseFailAlloc_2422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2422_, 0, v_a_2416_);
v___x_2421_ = v_reuseFailAlloc_2422_;
goto v_reusejp_2420_;
}
v_reusejp_2420_:
{
return v___x_2421_;
}
}
}
}
else
{
lean_object* v___x_2424_; 
lean_dec_ref(v_f_2392_);
v___x_2424_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2424_, 0, v_b_2396_);
return v___x_2424_;
}
v___jp_2402_:
{
size_t v___x_2404_; size_t v___x_2405_; 
v___x_2404_ = ((size_t)1ULL);
v___x_2405_ = lean_usize_add(v_i_2394_, v___x_2404_);
v_i_2394_ = v___x_2405_;
v_b_2396_ = v_a_2403_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0___boxed(lean_object* v_pu_2425_, lean_object* v_f_2426_, lean_object* v_as_2427_, lean_object* v_i_2428_, lean_object* v_stop_2429_, lean_object* v_b_2430_, lean_object* v___y_2431_, lean_object* v___y_2432_, lean_object* v___y_2433_, lean_object* v___y_2434_, lean_object* v___y_2435_){
_start:
{
uint8_t v_pu_boxed_2436_; size_t v_i_boxed_2437_; size_t v_stop_boxed_2438_; lean_object* v_res_2439_; 
v_pu_boxed_2436_ = lean_unbox(v_pu_2425_);
v_i_boxed_2437_ = lean_unbox_usize(v_i_2428_);
lean_dec(v_i_2428_);
v_stop_boxed_2438_ = lean_unbox_usize(v_stop_2429_);
lean_dec(v_stop_2429_);
v_res_2439_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_boxed_2436_, v_f_2426_, v_as_2427_, v_i_boxed_2437_, v_stop_boxed_2438_, v_b_2430_, v___y_2431_, v___y_2432_, v___y_2433_, v___y_2434_);
lean_dec(v___y_2434_);
lean_dec_ref(v___y_2433_);
lean_dec(v___y_2432_);
lean_dec_ref(v___y_2431_);
lean_dec_ref(v_as_2427_);
return v_res_2439_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp(uint8_t v_pu_2440_, lean_object* v_f_2441_, lean_object* v_a_2442_, lean_object* v_a_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_, lean_object* v_a_2446_){
_start:
{
lean_object* v___x_2448_; lean_object* v___x_2449_; lean_object* v___x_2450_; uint8_t v___x_2451_; 
v___x_2448_ = lean_unsigned_to_nat(0u);
v___x_2449_ = lean_array_get_size(v_a_2442_);
v___x_2450_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2451_ = lean_nat_dec_lt(v___x_2448_, v___x_2449_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; 
lean_dec_ref(v_f_2441_);
v___x_2452_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2452_, 0, v___x_2450_);
return v___x_2452_;
}
else
{
size_t v___x_2453_; size_t v___x_2454_; lean_object* v___x_2455_; 
v___x_2453_ = ((size_t)0ULL);
v___x_2454_ = lean_usize_of_nat(v___x_2449_);
v___x_2455_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByJmp_spec__0(v_pu_2440_, v_f_2441_, v_a_2442_, v___x_2453_, v___x_2454_, v___x_2450_, v_a_2443_, v_a_2444_, v_a_2445_, v_a_2446_);
return v___x_2455_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByJmp___boxed(lean_object* v_pu_2456_, lean_object* v_f_2457_, lean_object* v_a_2458_, lean_object* v_a_2459_, lean_object* v_a_2460_, lean_object* v_a_2461_, lean_object* v_a_2462_, lean_object* v_a_2463_){
_start:
{
uint8_t v_pu_boxed_2464_; lean_object* v_res_2465_; 
v_pu_boxed_2464_ = lean_unbox(v_pu_2456_);
v_res_2465_ = l_Lean_Compiler_LCNF_Probe_filterByJmp(v_pu_boxed_2464_, v_f_2457_, v_a_2458_, v_a_2459_, v_a_2460_, v_a_2461_, v_a_2462_);
lean_dec(v_a_2462_);
lean_dec_ref(v_a_2461_);
lean_dec(v_a_2460_);
lean_dec_ref(v_a_2459_);
lean_dec_ref(v_a_2458_);
return v_res_2465_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(uint8_t v_pu_2466_, lean_object* v_f_2467_, lean_object* v_a_2468_, lean_object* v_a_2469_, lean_object* v_a_2470_, lean_object* v_a_2471_, lean_object* v_a_2472_){
_start:
{
switch(lean_obj_tag(v_a_2468_))
{
case 0:
{
lean_object* v_k_2474_; 
v_k_2474_ = lean_ctor_get(v_a_2468_, 1);
lean_inc_ref(v_k_2474_);
lean_dec_ref_known(v_a_2468_, 2);
v_a_2468_ = v_k_2474_;
goto _start;
}
case 1:
{
lean_object* v_decl_2476_; lean_object* v_k_2477_; lean_object* v_value_2478_; lean_object* v___x_2479_; 
v_decl_2476_ = lean_ctor_get(v_a_2468_, 0);
lean_inc_ref(v_decl_2476_);
v_k_2477_ = lean_ctor_get(v_a_2468_, 1);
lean_inc_ref(v_k_2477_);
lean_dec_ref_known(v_a_2468_, 2);
v_value_2478_ = lean_ctor_get(v_decl_2476_, 4);
lean_inc_ref(v_value_2478_);
lean_dec_ref(v_decl_2476_);
lean_inc_ref(v_f_2467_);
v___x_2479_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2466_, v_f_2467_, v_value_2478_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_);
if (lean_obj_tag(v___x_2479_) == 0)
{
lean_object* v_a_2480_; uint8_t v___x_2481_; 
v_a_2480_ = lean_ctor_get(v___x_2479_, 0);
v___x_2481_ = lean_unbox(v_a_2480_);
if (v___x_2481_ == 0)
{
lean_dec_ref_known(v___x_2479_, 1);
v_a_2468_ = v_k_2477_;
goto _start;
}
else
{
lean_dec_ref(v_k_2477_);
lean_dec_ref(v_f_2467_);
return v___x_2479_;
}
}
else
{
lean_dec_ref(v_k_2477_);
lean_dec_ref(v_f_2467_);
return v___x_2479_;
}
}
case 2:
{
lean_object* v_decl_2483_; lean_object* v_k_2484_; lean_object* v_value_2485_; lean_object* v___x_2486_; 
v_decl_2483_ = lean_ctor_get(v_a_2468_, 0);
lean_inc_ref(v_decl_2483_);
v_k_2484_ = lean_ctor_get(v_a_2468_, 1);
lean_inc_ref(v_k_2484_);
lean_dec_ref_known(v_a_2468_, 2);
v_value_2485_ = lean_ctor_get(v_decl_2483_, 4);
lean_inc_ref(v_value_2485_);
lean_dec_ref(v_decl_2483_);
lean_inc_ref(v_f_2467_);
v___x_2486_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2466_, v_f_2467_, v_value_2485_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v_a_2487_; uint8_t v___x_2488_; 
v_a_2487_ = lean_ctor_get(v___x_2486_, 0);
v___x_2488_ = lean_unbox(v_a_2487_);
if (v___x_2488_ == 0)
{
lean_dec_ref_known(v___x_2486_, 1);
v_a_2468_ = v_k_2484_;
goto _start;
}
else
{
lean_dec_ref(v_k_2484_);
lean_dec_ref(v_f_2467_);
return v___x_2486_;
}
}
else
{
lean_dec_ref(v_k_2484_);
lean_dec_ref(v_f_2467_);
return v___x_2486_;
}
}
case 4:
{
lean_object* v_cases_2490_; lean_object* v___x_2492_; uint8_t v_isShared_2493_; uint8_t v_isSharedCheck_2509_; 
v_cases_2490_ = lean_ctor_get(v_a_2468_, 0);
v_isSharedCheck_2509_ = !lean_is_exclusive(v_a_2468_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2492_ = v_a_2468_;
v_isShared_2493_ = v_isSharedCheck_2509_;
goto v_resetjp_2491_;
}
else
{
lean_inc(v_cases_2490_);
lean_dec(v_a_2468_);
v___x_2492_ = lean_box(0);
v_isShared_2493_ = v_isSharedCheck_2509_;
goto v_resetjp_2491_;
}
v_resetjp_2491_:
{
lean_object* v_alts_2494_; lean_object* v___x_2495_; lean_object* v___x_2496_; uint8_t v___x_2497_; 
v_alts_2494_ = lean_ctor_get(v_cases_2490_, 3);
lean_inc_ref(v_alts_2494_);
lean_dec_ref(v_cases_2490_);
v___x_2495_ = lean_unsigned_to_nat(0u);
v___x_2496_ = lean_array_get_size(v_alts_2494_);
v___x_2497_ = lean_nat_dec_lt(v___x_2495_, v___x_2496_);
if (v___x_2497_ == 0)
{
lean_object* v___x_2498_; lean_object* v___x_2500_; 
lean_dec_ref(v_alts_2494_);
lean_dec_ref(v_f_2467_);
v___x_2498_ = lean_box(v___x_2497_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set_tag(v___x_2492_, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2498_);
v___x_2500_ = v___x_2492_;
goto v_reusejp_2499_;
}
else
{
lean_object* v_reuseFailAlloc_2501_; 
v_reuseFailAlloc_2501_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2501_, 0, v___x_2498_);
v___x_2500_ = v_reuseFailAlloc_2501_;
goto v_reusejp_2499_;
}
v_reusejp_2499_:
{
return v___x_2500_;
}
}
else
{
if (v___x_2497_ == 0)
{
lean_object* v___x_2502_; lean_object* v___x_2504_; 
lean_dec_ref(v_alts_2494_);
lean_dec_ref(v_f_2467_);
v___x_2502_ = lean_box(v___x_2497_);
if (v_isShared_2493_ == 0)
{
lean_ctor_set_tag(v___x_2492_, 0);
lean_ctor_set(v___x_2492_, 0, v___x_2502_);
v___x_2504_ = v___x_2492_;
goto v_reusejp_2503_;
}
else
{
lean_object* v_reuseFailAlloc_2505_; 
v_reuseFailAlloc_2505_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2505_, 0, v___x_2502_);
v___x_2504_ = v_reuseFailAlloc_2505_;
goto v_reusejp_2503_;
}
v_reusejp_2503_:
{
return v___x_2504_;
}
}
else
{
size_t v___x_2506_; size_t v___x_2507_; lean_object* v___x_2508_; 
lean_del_object(v___x_2492_);
v___x_2506_ = ((size_t)0ULL);
v___x_2507_ = lean_usize_of_nat(v___x_2496_);
v___x_2508_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_2466_, v_f_2467_, v_alts_2494_, v___x_2506_, v___x_2507_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_);
lean_dec_ref(v_alts_2494_);
return v___x_2508_;
}
}
}
}
case 5:
{
lean_object* v_fvarId_2510_; lean_object* v___x_2511_; 
v_fvarId_2510_ = lean_ctor_get(v_a_2468_, 0);
lean_inc(v_fvarId_2510_);
lean_dec_ref_known(v_a_2468_, 1);
lean_inc(v_a_2472_);
lean_inc_ref(v_a_2471_);
lean_inc(v_a_2470_);
lean_inc_ref(v_a_2469_);
v___x_2511_ = lean_apply_6(v_f_2467_, v_fvarId_2510_, v_a_2469_, v_a_2470_, v_a_2471_, v_a_2472_, lean_box(0));
return v___x_2511_;
}
case 7:
{
lean_object* v_k_2512_; 
v_k_2512_ = lean_ctor_get(v_a_2468_, 3);
lean_inc_ref(v_k_2512_);
lean_dec_ref_known(v_a_2468_, 4);
v_a_2468_ = v_k_2512_;
goto _start;
}
case 8:
{
lean_object* v_k_2514_; 
v_k_2514_ = lean_ctor_get(v_a_2468_, 3);
lean_inc_ref(v_k_2514_);
lean_dec_ref_known(v_a_2468_, 4);
v_a_2468_ = v_k_2514_;
goto _start;
}
case 9:
{
lean_object* v_k_2516_; 
v_k_2516_ = lean_ctor_get(v_a_2468_, 5);
lean_inc_ref(v_k_2516_);
lean_dec_ref_known(v_a_2468_, 6);
v_a_2468_ = v_k_2516_;
goto _start;
}
case 10:
{
lean_object* v_k_2518_; 
v_k_2518_ = lean_ctor_get(v_a_2468_, 2);
lean_inc_ref(v_k_2518_);
lean_dec_ref_known(v_a_2468_, 3);
v_a_2468_ = v_k_2518_;
goto _start;
}
case 11:
{
lean_object* v_k_2520_; 
v_k_2520_ = lean_ctor_get(v_a_2468_, 2);
lean_inc_ref(v_k_2520_);
lean_dec_ref_known(v_a_2468_, 3);
v_a_2468_ = v_k_2520_;
goto _start;
}
case 12:
{
lean_object* v_k_2522_; 
v_k_2522_ = lean_ctor_get(v_a_2468_, 3);
lean_inc_ref(v_k_2522_);
lean_dec_ref_known(v_a_2468_, 4);
v_a_2468_ = v_k_2522_;
goto _start;
}
case 13:
{
lean_object* v_k_2524_; 
v_k_2524_ = lean_ctor_get(v_a_2468_, 1);
lean_inc_ref(v_k_2524_);
lean_dec_ref_known(v_a_2468_, 2);
v_a_2468_ = v_k_2524_;
goto _start;
}
default: 
{
uint8_t v___x_2526_; lean_object* v___x_2527_; lean_object* v___x_2528_; 
lean_dec_ref(v_a_2468_);
lean_dec_ref(v_f_2467_);
v___x_2526_ = 0;
v___x_2527_ = lean_box(v___x_2526_);
v___x_2528_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2528_, 0, v___x_2527_);
return v___x_2528_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(uint8_t v_pu_2529_, lean_object* v_f_2530_, lean_object* v_as_2531_, size_t v_i_2532_, size_t v_stop_2533_, lean_object* v___y_2534_, lean_object* v___y_2535_, lean_object* v___y_2536_, lean_object* v___y_2537_){
_start:
{
lean_object* v___y_2540_; uint8_t v___x_2547_; 
v___x_2547_ = lean_usize_dec_eq(v_i_2532_, v_stop_2533_);
if (v___x_2547_ == 0)
{
lean_object* v___x_2548_; 
v___x_2548_ = lean_array_uget_borrowed(v_as_2531_, v_i_2532_);
switch(lean_obj_tag(v___x_2548_))
{
case 0:
{
lean_object* v_code_2549_; 
v_code_2549_ = lean_ctor_get(v___x_2548_, 2);
lean_inc_ref(v_code_2549_);
v___y_2540_ = v_code_2549_;
goto v___jp_2539_;
}
case 1:
{
lean_object* v_code_2550_; 
v_code_2550_ = lean_ctor_get(v___x_2548_, 1);
lean_inc_ref(v_code_2550_);
v___y_2540_ = v_code_2550_;
goto v___jp_2539_;
}
default: 
{
lean_object* v_code_2551_; 
v_code_2551_ = lean_ctor_get(v___x_2548_, 0);
lean_inc_ref(v_code_2551_);
v___y_2540_ = v_code_2551_;
goto v___jp_2539_;
}
}
}
else
{
uint8_t v___x_2552_; lean_object* v___x_2553_; lean_object* v___x_2554_; 
lean_dec_ref(v_f_2530_);
v___x_2552_ = 0;
v___x_2553_ = lean_box(v___x_2552_);
v___x_2554_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2554_, 0, v___x_2553_);
return v___x_2554_;
}
v___jp_2539_:
{
lean_object* v___x_2541_; 
lean_inc_ref(v_f_2530_);
v___x_2541_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_2529_, v_f_2530_, v___y_2540_, v___y_2534_, v___y_2535_, v___y_2536_, v___y_2537_);
if (lean_obj_tag(v___x_2541_) == 0)
{
lean_object* v_a_2542_; uint8_t v___x_2543_; 
v_a_2542_ = lean_ctor_get(v___x_2541_, 0);
v___x_2543_ = lean_unbox(v_a_2542_);
if (v___x_2543_ == 0)
{
size_t v___x_2544_; size_t v___x_2545_; 
lean_dec_ref_known(v___x_2541_, 1);
v___x_2544_ = ((size_t)1ULL);
v___x_2545_ = lean_usize_add(v_i_2532_, v___x_2544_);
v_i_2532_ = v___x_2545_;
goto _start;
}
else
{
lean_dec_ref(v_f_2530_);
return v___x_2541_;
}
}
else
{
lean_dec_ref(v_f_2530_);
return v___x_2541_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0___boxed(lean_object* v_pu_2555_, lean_object* v_f_2556_, lean_object* v_as_2557_, lean_object* v_i_2558_, lean_object* v_stop_2559_, lean_object* v___y_2560_, lean_object* v___y_2561_, lean_object* v___y_2562_, lean_object* v___y_2563_, lean_object* v___y_2564_){
_start:
{
uint8_t v_pu_boxed_2565_; size_t v_i_boxed_2566_; size_t v_stop_boxed_2567_; lean_object* v_res_2568_; 
v_pu_boxed_2565_ = lean_unbox(v_pu_2555_);
v_i_boxed_2566_ = lean_unbox_usize(v_i_2558_);
lean_dec(v_i_2558_);
v_stop_boxed_2567_ = lean_unbox_usize(v_stop_2559_);
lean_dec(v_stop_2559_);
v_res_2568_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go_spec__0(v_pu_boxed_2565_, v_f_2556_, v_as_2557_, v_i_boxed_2566_, v_stop_boxed_2567_, v___y_2560_, v___y_2561_, v___y_2562_, v___y_2563_);
lean_dec(v___y_2563_);
lean_dec_ref(v___y_2562_);
lean_dec(v___y_2561_);
lean_dec_ref(v___y_2560_);
lean_dec_ref(v_as_2557_);
return v_res_2568_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed(lean_object* v_pu_2569_, lean_object* v_f_2570_, lean_object* v_a_2571_, lean_object* v_a_2572_, lean_object* v_a_2573_, lean_object* v_a_2574_, lean_object* v_a_2575_, lean_object* v_a_2576_){
_start:
{
uint8_t v_pu_boxed_2577_; lean_object* v_res_2578_; 
v_pu_boxed_2577_ = lean_unbox(v_pu_2569_);
v_res_2578_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go(v_pu_boxed_2577_, v_f_2570_, v_a_2571_, v_a_2572_, v_a_2573_, v_a_2574_, v_a_2575_);
lean_dec(v_a_2575_);
lean_dec_ref(v_a_2574_);
lean_dec(v_a_2573_);
lean_dec_ref(v_a_2572_);
return v_res_2578_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(uint8_t v_pu_2579_, lean_object* v_f_2580_, lean_object* v_as_2581_, size_t v_i_2582_, size_t v_stop_2583_, lean_object* v_b_2584_, lean_object* v___y_2585_, lean_object* v___y_2586_, lean_object* v___y_2587_, lean_object* v___y_2588_){
_start:
{
lean_object* v_a_2591_; uint8_t v___x_2595_; 
v___x_2595_ = lean_usize_dec_eq(v_i_2582_, v_stop_2583_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; lean_object* v_value_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; 
v___x_2596_ = lean_array_uget_borrowed(v_as_2581_, v_i_2582_);
v_value_2597_ = lean_ctor_get(v___x_2596_, 1);
v___x_2598_ = lean_box(v_pu_2579_);
lean_inc_ref(v_f_2580_);
v___x_2599_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByReturn_go___boxed), 8, 2);
lean_closure_set(v___x_2599_, 0, v___x_2598_);
lean_closure_set(v___x_2599_, 1, v_f_2580_);
lean_inc_ref(v_value_2597_);
v___x_2600_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2597_, v___x_2599_, v___y_2585_, v___y_2586_, v___y_2587_, v___y_2588_);
if (lean_obj_tag(v___x_2600_) == 0)
{
lean_object* v_a_2601_; uint8_t v___x_2602_; 
v_a_2601_ = lean_ctor_get(v___x_2600_, 0);
lean_inc(v_a_2601_);
lean_dec_ref_known(v___x_2600_, 1);
v___x_2602_ = lean_unbox(v_a_2601_);
lean_dec(v_a_2601_);
if (v___x_2602_ == 0)
{
v_a_2591_ = v_b_2584_;
goto v___jp_2590_;
}
else
{
lean_object* v___x_2603_; 
lean_inc(v___x_2596_);
v___x_2603_ = lean_array_push(v_b_2584_, v___x_2596_);
v_a_2591_ = v___x_2603_;
goto v___jp_2590_;
}
}
else
{
lean_object* v_a_2604_; lean_object* v___x_2606_; uint8_t v_isShared_2607_; uint8_t v_isSharedCheck_2611_; 
lean_dec_ref(v_b_2584_);
lean_dec_ref(v_f_2580_);
v_a_2604_ = lean_ctor_get(v___x_2600_, 0);
v_isSharedCheck_2611_ = !lean_is_exclusive(v___x_2600_);
if (v_isSharedCheck_2611_ == 0)
{
v___x_2606_ = v___x_2600_;
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
else
{
lean_inc(v_a_2604_);
lean_dec(v___x_2600_);
v___x_2606_ = lean_box(0);
v_isShared_2607_ = v_isSharedCheck_2611_;
goto v_resetjp_2605_;
}
v_resetjp_2605_:
{
lean_object* v___x_2609_; 
if (v_isShared_2607_ == 0)
{
v___x_2609_ = v___x_2606_;
goto v_reusejp_2608_;
}
else
{
lean_object* v_reuseFailAlloc_2610_; 
v_reuseFailAlloc_2610_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2610_, 0, v_a_2604_);
v___x_2609_ = v_reuseFailAlloc_2610_;
goto v_reusejp_2608_;
}
v_reusejp_2608_:
{
return v___x_2609_;
}
}
}
}
else
{
lean_object* v___x_2612_; 
lean_dec_ref(v_f_2580_);
v___x_2612_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2612_, 0, v_b_2584_);
return v___x_2612_;
}
v___jp_2590_:
{
size_t v___x_2592_; size_t v___x_2593_; 
v___x_2592_ = ((size_t)1ULL);
v___x_2593_ = lean_usize_add(v_i_2582_, v___x_2592_);
v_i_2582_ = v___x_2593_;
v_b_2584_ = v_a_2591_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0___boxed(lean_object* v_pu_2613_, lean_object* v_f_2614_, lean_object* v_as_2615_, lean_object* v_i_2616_, lean_object* v_stop_2617_, lean_object* v_b_2618_, lean_object* v___y_2619_, lean_object* v___y_2620_, lean_object* v___y_2621_, lean_object* v___y_2622_, lean_object* v___y_2623_){
_start:
{
uint8_t v_pu_boxed_2624_; size_t v_i_boxed_2625_; size_t v_stop_boxed_2626_; lean_object* v_res_2627_; 
v_pu_boxed_2624_ = lean_unbox(v_pu_2613_);
v_i_boxed_2625_ = lean_unbox_usize(v_i_2616_);
lean_dec(v_i_2616_);
v_stop_boxed_2626_ = lean_unbox_usize(v_stop_2617_);
lean_dec(v_stop_2617_);
v_res_2627_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_boxed_2624_, v_f_2614_, v_as_2615_, v_i_boxed_2625_, v_stop_boxed_2626_, v_b_2618_, v___y_2619_, v___y_2620_, v___y_2621_, v___y_2622_);
lean_dec(v___y_2622_);
lean_dec_ref(v___y_2621_);
lean_dec(v___y_2620_);
lean_dec_ref(v___y_2619_);
lean_dec_ref(v_as_2615_);
return v_res_2627_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn(uint8_t v_pu_2628_, lean_object* v_f_2629_, lean_object* v_a_2630_, lean_object* v_a_2631_, lean_object* v_a_2632_, lean_object* v_a_2633_, lean_object* v_a_2634_){
_start:
{
lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; uint8_t v___x_2639_; 
v___x_2636_ = lean_unsigned_to_nat(0u);
v___x_2637_ = lean_array_get_size(v_a_2630_);
v___x_2638_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2639_ = lean_nat_dec_lt(v___x_2636_, v___x_2637_);
if (v___x_2639_ == 0)
{
lean_object* v___x_2640_; 
lean_dec_ref(v_f_2629_);
v___x_2640_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2638_);
return v___x_2640_;
}
else
{
size_t v___x_2641_; size_t v___x_2642_; lean_object* v___x_2643_; 
v___x_2641_ = ((size_t)0ULL);
v___x_2642_ = lean_usize_of_nat(v___x_2637_);
v___x_2643_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByReturn_spec__0(v_pu_2628_, v_f_2629_, v_a_2630_, v___x_2641_, v___x_2642_, v___x_2638_, v_a_2631_, v_a_2632_, v_a_2633_, v_a_2634_);
return v___x_2643_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByReturn___boxed(lean_object* v_pu_2644_, lean_object* v_f_2645_, lean_object* v_a_2646_, lean_object* v_a_2647_, lean_object* v_a_2648_, lean_object* v_a_2649_, lean_object* v_a_2650_, lean_object* v_a_2651_){
_start:
{
uint8_t v_pu_boxed_2652_; lean_object* v_res_2653_; 
v_pu_boxed_2652_ = lean_unbox(v_pu_2644_);
v_res_2653_ = l_Lean_Compiler_LCNF_Probe_filterByReturn(v_pu_boxed_2652_, v_f_2645_, v_a_2646_, v_a_2647_, v_a_2648_, v_a_2649_, v_a_2650_);
lean_dec(v_a_2650_);
lean_dec_ref(v_a_2649_);
lean_dec(v_a_2648_);
lean_dec_ref(v_a_2647_);
lean_dec_ref(v_a_2646_);
return v_res_2653_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(uint8_t v_pu_2654_, lean_object* v_f_2655_, lean_object* v_a_2656_, lean_object* v_a_2657_, lean_object* v_a_2658_, lean_object* v_a_2659_, lean_object* v_a_2660_){
_start:
{
switch(lean_obj_tag(v_a_2656_))
{
case 0:
{
lean_object* v_k_2662_; 
v_k_2662_ = lean_ctor_get(v_a_2656_, 1);
lean_inc_ref(v_k_2662_);
lean_dec_ref_known(v_a_2656_, 2);
v_a_2656_ = v_k_2662_;
goto _start;
}
case 1:
{
lean_object* v_decl_2664_; lean_object* v_k_2665_; lean_object* v_value_2666_; lean_object* v___x_2667_; 
v_decl_2664_ = lean_ctor_get(v_a_2656_, 0);
lean_inc_ref(v_decl_2664_);
v_k_2665_ = lean_ctor_get(v_a_2656_, 1);
lean_inc_ref(v_k_2665_);
lean_dec_ref_known(v_a_2656_, 2);
v_value_2666_ = lean_ctor_get(v_decl_2664_, 4);
lean_inc_ref(v_value_2666_);
lean_dec_ref(v_decl_2664_);
lean_inc_ref(v_f_2655_);
v___x_2667_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2654_, v_f_2655_, v_value_2666_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_);
if (lean_obj_tag(v___x_2667_) == 0)
{
lean_object* v_a_2668_; uint8_t v___x_2669_; 
v_a_2668_ = lean_ctor_get(v___x_2667_, 0);
v___x_2669_ = lean_unbox(v_a_2668_);
if (v___x_2669_ == 0)
{
lean_dec_ref_known(v___x_2667_, 1);
v_a_2656_ = v_k_2665_;
goto _start;
}
else
{
lean_dec_ref(v_k_2665_);
lean_dec_ref(v_f_2655_);
return v___x_2667_;
}
}
else
{
lean_dec_ref(v_k_2665_);
lean_dec_ref(v_f_2655_);
return v___x_2667_;
}
}
case 2:
{
lean_object* v_decl_2671_; lean_object* v_k_2672_; lean_object* v_value_2673_; lean_object* v___x_2674_; 
v_decl_2671_ = lean_ctor_get(v_a_2656_, 0);
lean_inc_ref(v_decl_2671_);
v_k_2672_ = lean_ctor_get(v_a_2656_, 1);
lean_inc_ref(v_k_2672_);
lean_dec_ref_known(v_a_2656_, 2);
v_value_2673_ = lean_ctor_get(v_decl_2671_, 4);
lean_inc_ref(v_value_2673_);
lean_dec_ref(v_decl_2671_);
lean_inc_ref(v_f_2655_);
v___x_2674_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2654_, v_f_2655_, v_value_2673_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_);
if (lean_obj_tag(v___x_2674_) == 0)
{
lean_object* v_a_2675_; uint8_t v___x_2676_; 
v_a_2675_ = lean_ctor_get(v___x_2674_, 0);
v___x_2676_ = lean_unbox(v_a_2675_);
if (v___x_2676_ == 0)
{
lean_dec_ref_known(v___x_2674_, 1);
v_a_2656_ = v_k_2672_;
goto _start;
}
else
{
lean_dec_ref(v_k_2672_);
lean_dec_ref(v_f_2655_);
return v___x_2674_;
}
}
else
{
lean_dec_ref(v_k_2672_);
lean_dec_ref(v_f_2655_);
return v___x_2674_;
}
}
case 4:
{
lean_object* v_cases_2678_; lean_object* v___x_2680_; uint8_t v_isShared_2681_; uint8_t v_isSharedCheck_2697_; 
v_cases_2678_ = lean_ctor_get(v_a_2656_, 0);
v_isSharedCheck_2697_ = !lean_is_exclusive(v_a_2656_);
if (v_isSharedCheck_2697_ == 0)
{
v___x_2680_ = v_a_2656_;
v_isShared_2681_ = v_isSharedCheck_2697_;
goto v_resetjp_2679_;
}
else
{
lean_inc(v_cases_2678_);
lean_dec(v_a_2656_);
v___x_2680_ = lean_box(0);
v_isShared_2681_ = v_isSharedCheck_2697_;
goto v_resetjp_2679_;
}
v_resetjp_2679_:
{
lean_object* v_alts_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; uint8_t v___x_2685_; 
v_alts_2682_ = lean_ctor_get(v_cases_2678_, 3);
lean_inc_ref(v_alts_2682_);
lean_dec_ref(v_cases_2678_);
v___x_2683_ = lean_unsigned_to_nat(0u);
v___x_2684_ = lean_array_get_size(v_alts_2682_);
v___x_2685_ = lean_nat_dec_lt(v___x_2683_, v___x_2684_);
if (v___x_2685_ == 0)
{
lean_object* v___x_2686_; lean_object* v___x_2688_; 
lean_dec_ref(v_alts_2682_);
lean_dec_ref(v_f_2655_);
v___x_2686_ = lean_box(v___x_2685_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set_tag(v___x_2680_, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2686_);
v___x_2688_ = v___x_2680_;
goto v_reusejp_2687_;
}
else
{
lean_object* v_reuseFailAlloc_2689_; 
v_reuseFailAlloc_2689_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2689_, 0, v___x_2686_);
v___x_2688_ = v_reuseFailAlloc_2689_;
goto v_reusejp_2687_;
}
v_reusejp_2687_:
{
return v___x_2688_;
}
}
else
{
if (v___x_2685_ == 0)
{
lean_object* v___x_2690_; lean_object* v___x_2692_; 
lean_dec_ref(v_alts_2682_);
lean_dec_ref(v_f_2655_);
v___x_2690_ = lean_box(v___x_2685_);
if (v_isShared_2681_ == 0)
{
lean_ctor_set_tag(v___x_2680_, 0);
lean_ctor_set(v___x_2680_, 0, v___x_2690_);
v___x_2692_ = v___x_2680_;
goto v_reusejp_2691_;
}
else
{
lean_object* v_reuseFailAlloc_2693_; 
v_reuseFailAlloc_2693_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2693_, 0, v___x_2690_);
v___x_2692_ = v_reuseFailAlloc_2693_;
goto v_reusejp_2691_;
}
v_reusejp_2691_:
{
return v___x_2692_;
}
}
else
{
size_t v___x_2694_; size_t v___x_2695_; lean_object* v___x_2696_; 
lean_del_object(v___x_2680_);
v___x_2694_ = ((size_t)0ULL);
v___x_2695_ = lean_usize_of_nat(v___x_2684_);
v___x_2696_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_2654_, v_f_2655_, v_alts_2682_, v___x_2694_, v___x_2695_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_);
lean_dec_ref(v_alts_2682_);
return v___x_2696_;
}
}
}
}
case 6:
{
lean_object* v_type_2698_; lean_object* v___x_2699_; 
v_type_2698_ = lean_ctor_get(v_a_2656_, 0);
lean_inc_ref(v_type_2698_);
lean_dec_ref_known(v_a_2656_, 1);
lean_inc(v_a_2660_);
lean_inc_ref(v_a_2659_);
lean_inc(v_a_2658_);
lean_inc_ref(v_a_2657_);
v___x_2699_ = lean_apply_6(v_f_2655_, v_type_2698_, v_a_2657_, v_a_2658_, v_a_2659_, v_a_2660_, lean_box(0));
return v___x_2699_;
}
case 7:
{
lean_object* v_k_2700_; 
v_k_2700_ = lean_ctor_get(v_a_2656_, 3);
lean_inc_ref(v_k_2700_);
lean_dec_ref_known(v_a_2656_, 4);
v_a_2656_ = v_k_2700_;
goto _start;
}
case 8:
{
lean_object* v_k_2702_; 
v_k_2702_ = lean_ctor_get(v_a_2656_, 3);
lean_inc_ref(v_k_2702_);
lean_dec_ref_known(v_a_2656_, 4);
v_a_2656_ = v_k_2702_;
goto _start;
}
case 9:
{
lean_object* v_k_2704_; 
v_k_2704_ = lean_ctor_get(v_a_2656_, 5);
lean_inc_ref(v_k_2704_);
lean_dec_ref_known(v_a_2656_, 6);
v_a_2656_ = v_k_2704_;
goto _start;
}
case 10:
{
lean_object* v_k_2706_; 
v_k_2706_ = lean_ctor_get(v_a_2656_, 2);
lean_inc_ref(v_k_2706_);
lean_dec_ref_known(v_a_2656_, 3);
v_a_2656_ = v_k_2706_;
goto _start;
}
case 11:
{
lean_object* v_k_2708_; 
v_k_2708_ = lean_ctor_get(v_a_2656_, 2);
lean_inc_ref(v_k_2708_);
lean_dec_ref_known(v_a_2656_, 3);
v_a_2656_ = v_k_2708_;
goto _start;
}
case 12:
{
lean_object* v_k_2710_; 
v_k_2710_ = lean_ctor_get(v_a_2656_, 3);
lean_inc_ref(v_k_2710_);
lean_dec_ref_known(v_a_2656_, 4);
v_a_2656_ = v_k_2710_;
goto _start;
}
case 13:
{
lean_object* v_k_2712_; 
v_k_2712_ = lean_ctor_get(v_a_2656_, 1);
lean_inc_ref(v_k_2712_);
lean_dec_ref_known(v_a_2656_, 2);
v_a_2656_ = v_k_2712_;
goto _start;
}
default: 
{
uint8_t v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; 
lean_dec_ref(v_a_2656_);
lean_dec_ref(v_f_2655_);
v___x_2714_ = 0;
v___x_2715_ = lean_box(v___x_2714_);
v___x_2716_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2715_);
return v___x_2716_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(uint8_t v_pu_2717_, lean_object* v_f_2718_, lean_object* v_as_2719_, size_t v_i_2720_, size_t v_stop_2721_, lean_object* v___y_2722_, lean_object* v___y_2723_, lean_object* v___y_2724_, lean_object* v___y_2725_){
_start:
{
lean_object* v___y_2728_; uint8_t v___x_2735_; 
v___x_2735_ = lean_usize_dec_eq(v_i_2720_, v_stop_2721_);
if (v___x_2735_ == 0)
{
lean_object* v___x_2736_; 
v___x_2736_ = lean_array_uget_borrowed(v_as_2719_, v_i_2720_);
switch(lean_obj_tag(v___x_2736_))
{
case 0:
{
lean_object* v_code_2737_; 
v_code_2737_ = lean_ctor_get(v___x_2736_, 2);
lean_inc_ref(v_code_2737_);
v___y_2728_ = v_code_2737_;
goto v___jp_2727_;
}
case 1:
{
lean_object* v_code_2738_; 
v_code_2738_ = lean_ctor_get(v___x_2736_, 1);
lean_inc_ref(v_code_2738_);
v___y_2728_ = v_code_2738_;
goto v___jp_2727_;
}
default: 
{
lean_object* v_code_2739_; 
v_code_2739_ = lean_ctor_get(v___x_2736_, 0);
lean_inc_ref(v_code_2739_);
v___y_2728_ = v_code_2739_;
goto v___jp_2727_;
}
}
}
else
{
uint8_t v___x_2740_; lean_object* v___x_2741_; lean_object* v___x_2742_; 
lean_dec_ref(v_f_2718_);
v___x_2740_ = 0;
v___x_2741_ = lean_box(v___x_2740_);
v___x_2742_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2742_, 0, v___x_2741_);
return v___x_2742_;
}
v___jp_2727_:
{
lean_object* v___x_2729_; 
lean_inc_ref(v_f_2718_);
v___x_2729_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_2717_, v_f_2718_, v___y_2728_, v___y_2722_, v___y_2723_, v___y_2724_, v___y_2725_);
if (lean_obj_tag(v___x_2729_) == 0)
{
lean_object* v_a_2730_; uint8_t v___x_2731_; 
v_a_2730_ = lean_ctor_get(v___x_2729_, 0);
v___x_2731_ = lean_unbox(v_a_2730_);
if (v___x_2731_ == 0)
{
size_t v___x_2732_; size_t v___x_2733_; 
lean_dec_ref_known(v___x_2729_, 1);
v___x_2732_ = ((size_t)1ULL);
v___x_2733_ = lean_usize_add(v_i_2720_, v___x_2732_);
v_i_2720_ = v___x_2733_;
goto _start;
}
else
{
lean_dec_ref(v_f_2718_);
return v___x_2729_;
}
}
else
{
lean_dec_ref(v_f_2718_);
return v___x_2729_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0___boxed(lean_object* v_pu_2743_, lean_object* v_f_2744_, lean_object* v_as_2745_, lean_object* v_i_2746_, lean_object* v_stop_2747_, lean_object* v___y_2748_, lean_object* v___y_2749_, lean_object* v___y_2750_, lean_object* v___y_2751_, lean_object* v___y_2752_){
_start:
{
uint8_t v_pu_boxed_2753_; size_t v_i_boxed_2754_; size_t v_stop_boxed_2755_; lean_object* v_res_2756_; 
v_pu_boxed_2753_ = lean_unbox(v_pu_2743_);
v_i_boxed_2754_ = lean_unbox_usize(v_i_2746_);
lean_dec(v_i_2746_);
v_stop_boxed_2755_ = lean_unbox_usize(v_stop_2747_);
lean_dec(v_stop_2747_);
v_res_2756_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00__private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go_spec__0(v_pu_boxed_2753_, v_f_2744_, v_as_2745_, v_i_boxed_2754_, v_stop_boxed_2755_, v___y_2748_, v___y_2749_, v___y_2750_, v___y_2751_);
lean_dec(v___y_2751_);
lean_dec_ref(v___y_2750_);
lean_dec(v___y_2749_);
lean_dec_ref(v___y_2748_);
lean_dec_ref(v_as_2745_);
return v_res_2756_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed(lean_object* v_pu_2757_, lean_object* v_f_2758_, lean_object* v_a_2759_, lean_object* v_a_2760_, lean_object* v_a_2761_, lean_object* v_a_2762_, lean_object* v_a_2763_, lean_object* v_a_2764_){
_start:
{
uint8_t v_pu_boxed_2765_; lean_object* v_res_2766_; 
v_pu_boxed_2765_ = lean_unbox(v_pu_2757_);
v_res_2766_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go(v_pu_boxed_2765_, v_f_2758_, v_a_2759_, v_a_2760_, v_a_2761_, v_a_2762_, v_a_2763_);
lean_dec(v_a_2763_);
lean_dec_ref(v_a_2762_);
lean_dec(v_a_2761_);
lean_dec_ref(v_a_2760_);
return v_res_2766_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(uint8_t v_pu_2767_, lean_object* v_f_2768_, lean_object* v_as_2769_, size_t v_i_2770_, size_t v_stop_2771_, lean_object* v_b_2772_, lean_object* v___y_2773_, lean_object* v___y_2774_, lean_object* v___y_2775_, lean_object* v___y_2776_){
_start:
{
lean_object* v_a_2779_; uint8_t v___x_2783_; 
v___x_2783_ = lean_usize_dec_eq(v_i_2770_, v_stop_2771_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; lean_object* v_value_2785_; lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2784_ = lean_array_uget_borrowed(v_as_2769_, v_i_2770_);
v_value_2785_ = lean_ctor_get(v___x_2784_, 1);
v___x_2786_ = lean_box(v_pu_2767_);
lean_inc_ref(v_f_2768_);
v___x_2787_ = lean_alloc_closure((void*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_filterByUnreach_go___boxed), 8, 2);
lean_closure_set(v___x_2787_, 0, v___x_2786_);
lean_closure_set(v___x_2787_, 1, v_f_2768_);
lean_inc_ref(v_value_2785_);
v___x_2788_ = l_Lean_Compiler_LCNF_DeclValue_isCodeAndM___at___00Lean_Compiler_LCNF_Probe_filterByLet_spec__0___redArg(v_value_2785_, v___x_2787_, v___y_2773_, v___y_2774_, v___y_2775_, v___y_2776_);
if (lean_obj_tag(v___x_2788_) == 0)
{
lean_object* v_a_2789_; uint8_t v___x_2790_; 
v_a_2789_ = lean_ctor_get(v___x_2788_, 0);
lean_inc(v_a_2789_);
lean_dec_ref_known(v___x_2788_, 1);
v___x_2790_ = lean_unbox(v_a_2789_);
lean_dec(v_a_2789_);
if (v___x_2790_ == 0)
{
v_a_2779_ = v_b_2772_;
goto v___jp_2778_;
}
else
{
lean_object* v___x_2791_; 
lean_inc(v___x_2784_);
v___x_2791_ = lean_array_push(v_b_2772_, v___x_2784_);
v_a_2779_ = v___x_2791_;
goto v___jp_2778_;
}
}
else
{
lean_object* v_a_2792_; lean_object* v___x_2794_; uint8_t v_isShared_2795_; uint8_t v_isSharedCheck_2799_; 
lean_dec_ref(v_b_2772_);
lean_dec_ref(v_f_2768_);
v_a_2792_ = lean_ctor_get(v___x_2788_, 0);
v_isSharedCheck_2799_ = !lean_is_exclusive(v___x_2788_);
if (v_isSharedCheck_2799_ == 0)
{
v___x_2794_ = v___x_2788_;
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
else
{
lean_inc(v_a_2792_);
lean_dec(v___x_2788_);
v___x_2794_ = lean_box(0);
v_isShared_2795_ = v_isSharedCheck_2799_;
goto v_resetjp_2793_;
}
v_resetjp_2793_:
{
lean_object* v___x_2797_; 
if (v_isShared_2795_ == 0)
{
v___x_2797_ = v___x_2794_;
goto v_reusejp_2796_;
}
else
{
lean_object* v_reuseFailAlloc_2798_; 
v_reuseFailAlloc_2798_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2798_, 0, v_a_2792_);
v___x_2797_ = v_reuseFailAlloc_2798_;
goto v_reusejp_2796_;
}
v_reusejp_2796_:
{
return v___x_2797_;
}
}
}
}
else
{
lean_object* v___x_2800_; 
lean_dec_ref(v_f_2768_);
v___x_2800_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2800_, 0, v_b_2772_);
return v___x_2800_;
}
v___jp_2778_:
{
size_t v___x_2780_; size_t v___x_2781_; 
v___x_2780_ = ((size_t)1ULL);
v___x_2781_ = lean_usize_add(v_i_2770_, v___x_2780_);
v_i_2770_ = v___x_2781_;
v_b_2772_ = v_a_2779_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0___boxed(lean_object* v_pu_2801_, lean_object* v_f_2802_, lean_object* v_as_2803_, lean_object* v_i_2804_, lean_object* v_stop_2805_, lean_object* v_b_2806_, lean_object* v___y_2807_, lean_object* v___y_2808_, lean_object* v___y_2809_, lean_object* v___y_2810_, lean_object* v___y_2811_){
_start:
{
uint8_t v_pu_boxed_2812_; size_t v_i_boxed_2813_; size_t v_stop_boxed_2814_; lean_object* v_res_2815_; 
v_pu_boxed_2812_ = lean_unbox(v_pu_2801_);
v_i_boxed_2813_ = lean_unbox_usize(v_i_2804_);
lean_dec(v_i_2804_);
v_stop_boxed_2814_ = lean_unbox_usize(v_stop_2805_);
lean_dec(v_stop_2805_);
v_res_2815_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_boxed_2812_, v_f_2802_, v_as_2803_, v_i_boxed_2813_, v_stop_boxed_2814_, v_b_2806_, v___y_2807_, v___y_2808_, v___y_2809_, v___y_2810_);
lean_dec(v___y_2810_);
lean_dec_ref(v___y_2809_);
lean_dec(v___y_2808_);
lean_dec_ref(v___y_2807_);
lean_dec_ref(v_as_2803_);
return v_res_2815_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach(uint8_t v_pu_2816_, lean_object* v_f_2817_, lean_object* v_a_2818_, lean_object* v_a_2819_, lean_object* v_a_2820_, lean_object* v_a_2821_, lean_object* v_a_2822_){
_start:
{
lean_object* v___x_2824_; lean_object* v___x_2825_; lean_object* v___x_2826_; uint8_t v___x_2827_; 
v___x_2824_ = lean_unsigned_to_nat(0u);
v___x_2825_ = lean_array_get_size(v_a_2818_);
v___x_2826_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_filterByLet___closed__0));
v___x_2827_ = lean_nat_dec_lt(v___x_2824_, v___x_2825_);
if (v___x_2827_ == 0)
{
lean_object* v___x_2828_; 
lean_dec_ref(v_f_2817_);
v___x_2828_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2828_, 0, v___x_2826_);
return v___x_2828_;
}
else
{
size_t v___x_2829_; size_t v___x_2830_; lean_object* v___x_2831_; 
v___x_2829_ = ((size_t)0ULL);
v___x_2830_ = lean_usize_of_nat(v___x_2825_);
v___x_2831_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold___at___00Lean_Compiler_LCNF_Probe_filterByUnreach_spec__0(v_pu_2816_, v_f_2817_, v_a_2818_, v___x_2829_, v___x_2830_, v___x_2826_, v_a_2819_, v_a_2820_, v_a_2821_, v_a_2822_);
return v___x_2831_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_filterByUnreach___boxed(lean_object* v_pu_2832_, lean_object* v_f_2833_, lean_object* v_a_2834_, lean_object* v_a_2835_, lean_object* v_a_2836_, lean_object* v_a_2837_, lean_object* v_a_2838_, lean_object* v_a_2839_){
_start:
{
uint8_t v_pu_boxed_2840_; lean_object* v_res_2841_; 
v_pu_boxed_2840_ = lean_unbox(v_pu_2832_);
v_res_2841_ = l_Lean_Compiler_LCNF_Probe_filterByUnreach(v_pu_boxed_2840_, v_f_2833_, v_a_2834_, v_a_2835_, v_a_2836_, v_a_2837_, v_a_2838_);
lean_dec(v_a_2838_);
lean_dec_ref(v_a_2837_);
lean_dec(v_a_2836_);
lean_dec_ref(v_a_2835_);
lean_dec_ref(v_a_2834_);
return v_res_2841_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(lean_object* v_decl_2842_, lean_object* v___y_2843_, lean_object* v___y_2844_, lean_object* v___y_2845_, lean_object* v___y_2846_){
_start:
{
lean_object* v_toSignature_2848_; lean_object* v_name_2849_; lean_object* v___x_2850_; 
v_toSignature_2848_ = lean_ctor_get(v_decl_2842_, 0);
v_name_2849_ = lean_ctor_get(v_toSignature_2848_, 0);
lean_inc(v_name_2849_);
v___x_2850_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2850_, 0, v_name_2849_);
return v___x_2850_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0___boxed(lean_object* v_decl_2851_, lean_object* v___y_2852_, lean_object* v___y_2853_, lean_object* v___y_2854_, lean_object* v___y_2855_, lean_object* v___y_2856_){
_start:
{
lean_object* v_res_2857_; 
v_res_2857_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg___lam__0(v_decl_2851_, v___y_2852_, v___y_2853_, v___y_2854_, v___y_2855_);
lean_dec(v___y_2855_);
lean_dec_ref(v___y_2854_);
lean_dec(v___y_2853_);
lean_dec_ref(v___y_2852_);
lean_dec_ref(v_decl_2851_);
return v_res_2857_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg(lean_object* v_a_2859_, lean_object* v_a_2860_, lean_object* v_a_2861_, lean_object* v_a_2862_, lean_object* v_a_2863_){
_start:
{
lean_object* v___x_2865_; lean_object* v_toApplicative_2866_; lean_object* v_toFunctor_2867_; lean_object* v_toSeq_2868_; lean_object* v_toSeqLeft_2869_; lean_object* v_toSeqRight_2870_; lean_object* v___f_2871_; lean_object* v___f_2872_; lean_object* v___f_2873_; lean_object* v___f_2874_; lean_object* v___x_2875_; lean_object* v___f_2876_; lean_object* v___f_2877_; lean_object* v___f_2878_; lean_object* v___x_2879_; lean_object* v___x_2880_; lean_object* v___x_2881_; lean_object* v_toApplicative_2882_; lean_object* v___x_2884_; uint8_t v_isShared_2885_; uint8_t v_isSharedCheck_2914_; 
v___x_2865_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_2866_ = lean_ctor_get(v___x_2865_, 0);
v_toFunctor_2867_ = lean_ctor_get(v_toApplicative_2866_, 0);
v_toSeq_2868_ = lean_ctor_get(v_toApplicative_2866_, 2);
v_toSeqLeft_2869_ = lean_ctor_get(v_toApplicative_2866_, 3);
v_toSeqRight_2870_ = lean_ctor_get(v_toApplicative_2866_, 4);
v___f_2871_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_2872_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2867_, 2);
v___f_2873_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2873_, 0, v_toFunctor_2867_);
v___f_2874_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2874_, 0, v_toFunctor_2867_);
v___x_2875_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2875_, 0, v___f_2873_);
lean_ctor_set(v___x_2875_, 1, v___f_2874_);
lean_inc(v_toSeqRight_2870_);
v___f_2876_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2876_, 0, v_toSeqRight_2870_);
lean_inc(v_toSeqLeft_2869_);
v___f_2877_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2877_, 0, v_toSeqLeft_2869_);
lean_inc(v_toSeq_2868_);
v___f_2878_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2878_, 0, v_toSeq_2868_);
v___x_2879_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2879_, 0, v___x_2875_);
lean_ctor_set(v___x_2879_, 1, v___f_2871_);
lean_ctor_set(v___x_2879_, 2, v___f_2878_);
lean_ctor_set(v___x_2879_, 3, v___f_2877_);
lean_ctor_set(v___x_2879_, 4, v___f_2876_);
v___x_2880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2880_, 0, v___x_2879_);
lean_ctor_set(v___x_2880_, 1, v___f_2872_);
v___x_2881_ = l_StateRefT_x27_instMonad___redArg(v___x_2880_);
v_toApplicative_2882_ = lean_ctor_get(v___x_2881_, 0);
v_isSharedCheck_2914_ = !lean_is_exclusive(v___x_2881_);
if (v_isSharedCheck_2914_ == 0)
{
lean_object* v_unused_2915_; 
v_unused_2915_ = lean_ctor_get(v___x_2881_, 1);
lean_dec(v_unused_2915_);
v___x_2884_ = v___x_2881_;
v_isShared_2885_ = v_isSharedCheck_2914_;
goto v_resetjp_2883_;
}
else
{
lean_inc(v_toApplicative_2882_);
lean_dec(v___x_2881_);
v___x_2884_ = lean_box(0);
v_isShared_2885_ = v_isSharedCheck_2914_;
goto v_resetjp_2883_;
}
v_resetjp_2883_:
{
lean_object* v_toFunctor_2886_; lean_object* v_toSeq_2887_; lean_object* v_toSeqLeft_2888_; lean_object* v_toSeqRight_2889_; lean_object* v___x_2891_; uint8_t v_isShared_2892_; uint8_t v_isSharedCheck_2912_; 
v_toFunctor_2886_ = lean_ctor_get(v_toApplicative_2882_, 0);
v_toSeq_2887_ = lean_ctor_get(v_toApplicative_2882_, 2);
v_toSeqLeft_2888_ = lean_ctor_get(v_toApplicative_2882_, 3);
v_toSeqRight_2889_ = lean_ctor_get(v_toApplicative_2882_, 4);
v_isSharedCheck_2912_ = !lean_is_exclusive(v_toApplicative_2882_);
if (v_isSharedCheck_2912_ == 0)
{
lean_object* v_unused_2913_; 
v_unused_2913_ = lean_ctor_get(v_toApplicative_2882_, 1);
lean_dec(v_unused_2913_);
v___x_2891_ = v_toApplicative_2882_;
v_isShared_2892_ = v_isSharedCheck_2912_;
goto v_resetjp_2890_;
}
else
{
lean_inc(v_toSeqRight_2889_);
lean_inc(v_toSeqLeft_2888_);
lean_inc(v_toSeq_2887_);
lean_inc(v_toFunctor_2886_);
lean_dec(v_toApplicative_2882_);
v___x_2891_ = lean_box(0);
v_isShared_2892_ = v_isSharedCheck_2912_;
goto v_resetjp_2890_;
}
v_resetjp_2890_:
{
lean_object* v___f_2893_; lean_object* v___f_2894_; lean_object* v___f_2895_; lean_object* v___f_2896_; lean_object* v___f_2897_; lean_object* v___x_2898_; lean_object* v___f_2899_; lean_object* v___f_2900_; lean_object* v___f_2901_; lean_object* v___x_2903_; 
v___f_2893_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0));
v___f_2894_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_2895_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_2886_);
v___f_2896_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2896_, 0, v_toFunctor_2886_);
v___f_2897_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2897_, 0, v_toFunctor_2886_);
v___x_2898_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2898_, 0, v___f_2896_);
lean_ctor_set(v___x_2898_, 1, v___f_2897_);
v___f_2899_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2899_, 0, v_toSeqRight_2889_);
v___f_2900_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2900_, 0, v_toSeqLeft_2888_);
v___f_2901_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2901_, 0, v_toSeq_2887_);
if (v_isShared_2892_ == 0)
{
lean_ctor_set(v___x_2891_, 4, v___f_2899_);
lean_ctor_set(v___x_2891_, 3, v___f_2900_);
lean_ctor_set(v___x_2891_, 2, v___f_2901_);
lean_ctor_set(v___x_2891_, 1, v___f_2894_);
lean_ctor_set(v___x_2891_, 0, v___x_2898_);
v___x_2903_ = v___x_2891_;
goto v_reusejp_2902_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v___x_2898_);
lean_ctor_set(v_reuseFailAlloc_2911_, 1, v___f_2894_);
lean_ctor_set(v_reuseFailAlloc_2911_, 2, v___f_2901_);
lean_ctor_set(v_reuseFailAlloc_2911_, 3, v___f_2900_);
lean_ctor_set(v_reuseFailAlloc_2911_, 4, v___f_2899_);
v___x_2903_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2902_;
}
v_reusejp_2902_:
{
lean_object* v___x_2905_; 
if (v_isShared_2885_ == 0)
{
lean_ctor_set(v___x_2884_, 1, v___f_2895_);
lean_ctor_set(v___x_2884_, 0, v___x_2903_);
v___x_2905_ = v___x_2884_;
goto v_reusejp_2904_;
}
else
{
lean_object* v_reuseFailAlloc_2910_; 
v_reuseFailAlloc_2910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2910_, 0, v___x_2903_);
lean_ctor_set(v_reuseFailAlloc_2910_, 1, v___f_2895_);
v___x_2905_ = v_reuseFailAlloc_2910_;
goto v_reusejp_2904_;
}
v_reusejp_2904_:
{
size_t v_sz_2906_; size_t v___x_2907_; lean_object* v___x_127__overap_2908_; lean_object* v___x_2909_; 
v_sz_2906_ = lean_array_size(v_a_2859_);
v___x_2907_ = ((size_t)0ULL);
v___x_127__overap_2908_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2905_, v___f_2893_, v_sz_2906_, v___x_2907_, v_a_2859_);
lean_inc(v_a_2863_);
lean_inc_ref(v_a_2862_);
lean_inc(v_a_2861_);
lean_inc_ref(v_a_2860_);
v___x_2909_ = lean_apply_5(v___x_127__overap_2908_, v_a_2860_, v_a_2861_, v_a_2862_, v_a_2863_, lean_box(0));
return v___x_2909_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___redArg___boxed(lean_object* v_a_2916_, lean_object* v_a_2917_, lean_object* v_a_2918_, lean_object* v_a_2919_, lean_object* v_a_2920_, lean_object* v_a_2921_){
_start:
{
lean_object* v_res_2922_; 
v_res_2922_ = l_Lean_Compiler_LCNF_Probe_declNames___redArg(v_a_2916_, v_a_2917_, v_a_2918_, v_a_2919_, v_a_2920_);
lean_dec(v_a_2920_);
lean_dec_ref(v_a_2919_);
lean_dec(v_a_2918_);
lean_dec_ref(v_a_2917_);
return v_res_2922_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames(uint8_t v_pu_2923_, lean_object* v_a_2924_, lean_object* v_a_2925_, lean_object* v_a_2926_, lean_object* v_a_2927_, lean_object* v_a_2928_){
_start:
{
lean_object* v___x_2930_; lean_object* v_toApplicative_2931_; lean_object* v_toFunctor_2932_; lean_object* v_toSeq_2933_; lean_object* v_toSeqLeft_2934_; lean_object* v_toSeqRight_2935_; lean_object* v___f_2936_; lean_object* v___f_2937_; lean_object* v___f_2938_; lean_object* v___f_2939_; lean_object* v___x_2940_; lean_object* v___f_2941_; lean_object* v___f_2942_; lean_object* v___f_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v_toApplicative_2947_; lean_object* v___x_2949_; uint8_t v_isShared_2950_; uint8_t v_isSharedCheck_2979_; 
v___x_2930_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_2931_ = lean_ctor_get(v___x_2930_, 0);
v_toFunctor_2932_ = lean_ctor_get(v_toApplicative_2931_, 0);
v_toSeq_2933_ = lean_ctor_get(v_toApplicative_2931_, 2);
v_toSeqLeft_2934_ = lean_ctor_get(v_toApplicative_2931_, 3);
v_toSeqRight_2935_ = lean_ctor_get(v_toApplicative_2931_, 4);
v___f_2936_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_2937_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_2932_, 2);
v___f_2938_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2938_, 0, v_toFunctor_2932_);
v___f_2939_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2939_, 0, v_toFunctor_2932_);
v___x_2940_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2940_, 0, v___f_2938_);
lean_ctor_set(v___x_2940_, 1, v___f_2939_);
lean_inc(v_toSeqRight_2935_);
v___f_2941_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2941_, 0, v_toSeqRight_2935_);
lean_inc(v_toSeqLeft_2934_);
v___f_2942_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2942_, 0, v_toSeqLeft_2934_);
lean_inc(v_toSeq_2933_);
v___f_2943_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2943_, 0, v_toSeq_2933_);
v___x_2944_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_2944_, 0, v___x_2940_);
lean_ctor_set(v___x_2944_, 1, v___f_2936_);
lean_ctor_set(v___x_2944_, 2, v___f_2943_);
lean_ctor_set(v___x_2944_, 3, v___f_2942_);
lean_ctor_set(v___x_2944_, 4, v___f_2941_);
v___x_2945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2945_, 0, v___x_2944_);
lean_ctor_set(v___x_2945_, 1, v___f_2937_);
v___x_2946_ = l_StateRefT_x27_instMonad___redArg(v___x_2945_);
v_toApplicative_2947_ = lean_ctor_get(v___x_2946_, 0);
v_isSharedCheck_2979_ = !lean_is_exclusive(v___x_2946_);
if (v_isSharedCheck_2979_ == 0)
{
lean_object* v_unused_2980_; 
v_unused_2980_ = lean_ctor_get(v___x_2946_, 1);
lean_dec(v_unused_2980_);
v___x_2949_ = v___x_2946_;
v_isShared_2950_ = v_isSharedCheck_2979_;
goto v_resetjp_2948_;
}
else
{
lean_inc(v_toApplicative_2947_);
lean_dec(v___x_2946_);
v___x_2949_ = lean_box(0);
v_isShared_2950_ = v_isSharedCheck_2979_;
goto v_resetjp_2948_;
}
v_resetjp_2948_:
{
lean_object* v_toFunctor_2951_; lean_object* v_toSeq_2952_; lean_object* v_toSeqLeft_2953_; lean_object* v_toSeqRight_2954_; lean_object* v___x_2956_; uint8_t v_isShared_2957_; uint8_t v_isSharedCheck_2977_; 
v_toFunctor_2951_ = lean_ctor_get(v_toApplicative_2947_, 0);
v_toSeq_2952_ = lean_ctor_get(v_toApplicative_2947_, 2);
v_toSeqLeft_2953_ = lean_ctor_get(v_toApplicative_2947_, 3);
v_toSeqRight_2954_ = lean_ctor_get(v_toApplicative_2947_, 4);
v_isSharedCheck_2977_ = !lean_is_exclusive(v_toApplicative_2947_);
if (v_isSharedCheck_2977_ == 0)
{
lean_object* v_unused_2978_; 
v_unused_2978_ = lean_ctor_get(v_toApplicative_2947_, 1);
lean_dec(v_unused_2978_);
v___x_2956_ = v_toApplicative_2947_;
v_isShared_2957_ = v_isSharedCheck_2977_;
goto v_resetjp_2955_;
}
else
{
lean_inc(v_toSeqRight_2954_);
lean_inc(v_toSeqLeft_2953_);
lean_inc(v_toSeq_2952_);
lean_inc(v_toFunctor_2951_);
lean_dec(v_toApplicative_2947_);
v___x_2956_ = lean_box(0);
v_isShared_2957_ = v_isSharedCheck_2977_;
goto v_resetjp_2955_;
}
v_resetjp_2955_:
{
lean_object* v___f_2958_; lean_object* v___f_2959_; lean_object* v___f_2960_; lean_object* v___f_2961_; lean_object* v___f_2962_; lean_object* v___x_2963_; lean_object* v___f_2964_; lean_object* v___f_2965_; lean_object* v___f_2966_; lean_object* v___x_2968_; 
v___f_2958_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_declNames___redArg___closed__0));
v___f_2959_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_2960_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_2951_);
v___f_2961_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_2961_, 0, v_toFunctor_2951_);
v___f_2962_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2962_, 0, v_toFunctor_2951_);
v___x_2963_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2963_, 0, v___f_2961_);
lean_ctor_set(v___x_2963_, 1, v___f_2962_);
v___f_2964_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_2964_, 0, v_toSeqRight_2954_);
v___f_2965_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_2965_, 0, v_toSeqLeft_2953_);
v___f_2966_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_2966_, 0, v_toSeq_2952_);
if (v_isShared_2957_ == 0)
{
lean_ctor_set(v___x_2956_, 4, v___f_2964_);
lean_ctor_set(v___x_2956_, 3, v___f_2965_);
lean_ctor_set(v___x_2956_, 2, v___f_2966_);
lean_ctor_set(v___x_2956_, 1, v___f_2959_);
lean_ctor_set(v___x_2956_, 0, v___x_2963_);
v___x_2968_ = v___x_2956_;
goto v_reusejp_2967_;
}
else
{
lean_object* v_reuseFailAlloc_2976_; 
v_reuseFailAlloc_2976_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2976_, 0, v___x_2963_);
lean_ctor_set(v_reuseFailAlloc_2976_, 1, v___f_2959_);
lean_ctor_set(v_reuseFailAlloc_2976_, 2, v___f_2966_);
lean_ctor_set(v_reuseFailAlloc_2976_, 3, v___f_2965_);
lean_ctor_set(v_reuseFailAlloc_2976_, 4, v___f_2964_);
v___x_2968_ = v_reuseFailAlloc_2976_;
goto v_reusejp_2967_;
}
v_reusejp_2967_:
{
lean_object* v___x_2970_; 
if (v_isShared_2950_ == 0)
{
lean_ctor_set(v___x_2949_, 1, v___f_2960_);
lean_ctor_set(v___x_2949_, 0, v___x_2968_);
v___x_2970_ = v___x_2949_;
goto v_reusejp_2969_;
}
else
{
lean_object* v_reuseFailAlloc_2975_; 
v_reuseFailAlloc_2975_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2975_, 0, v___x_2968_);
lean_ctor_set(v_reuseFailAlloc_2975_, 1, v___f_2960_);
v___x_2970_ = v_reuseFailAlloc_2975_;
goto v_reusejp_2969_;
}
v_reusejp_2969_:
{
size_t v_sz_2971_; size_t v___x_2972_; lean_object* v___x_185__overap_2973_; lean_object* v___x_2974_; 
v_sz_2971_ = lean_array_size(v_a_2924_);
v___x_2972_ = ((size_t)0ULL);
v___x_185__overap_2973_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_2970_, v___f_2958_, v_sz_2971_, v___x_2972_, v_a_2924_);
lean_inc(v_a_2928_);
lean_inc_ref(v_a_2927_);
lean_inc(v_a_2926_);
lean_inc_ref(v_a_2925_);
v___x_2974_ = lean_apply_5(v___x_185__overap_2973_, v_a_2925_, v_a_2926_, v_a_2927_, v_a_2928_, lean_box(0));
return v___x_2974_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_declNames___boxed(lean_object* v_pu_2981_, lean_object* v_a_2982_, lean_object* v_a_2983_, lean_object* v_a_2984_, lean_object* v_a_2985_, lean_object* v_a_2986_, lean_object* v_a_2987_){
_start:
{
uint8_t v_pu_boxed_2988_; lean_object* v_res_2989_; 
v_pu_boxed_2988_ = lean_unbox(v_pu_2981_);
v_res_2989_ = l_Lean_Compiler_LCNF_Probe_declNames(v_pu_boxed_2988_, v_a_2982_, v_a_2983_, v_a_2984_, v_a_2985_, v_a_2986_);
lean_dec(v_a_2986_);
lean_dec_ref(v_a_2985_);
lean_dec(v_a_2984_);
lean_dec_ref(v_a_2983_);
return v_res_2989_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(lean_object* v_inst_2990_, lean_object* v_x_2991_, lean_object* v___y_2992_, lean_object* v___y_2993_, lean_object* v___y_2994_, lean_object* v___y_2995_){
_start:
{
lean_object* v___x_2997_; lean_object* v___x_2998_; 
v___x_2997_ = lean_apply_1(v_inst_2990_, v_x_2991_);
v___x_2998_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_2998_, 0, v___x_2997_);
return v___x_2998_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed(lean_object* v_inst_2999_, lean_object* v_x_3000_, lean_object* v___y_3001_, lean_object* v___y_3002_, lean_object* v___y_3003_, lean_object* v___y_3004_, lean_object* v___y_3005_){
_start:
{
lean_object* v_res_3006_; 
v_res_3006_ = l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0(v_inst_2999_, v_x_3000_, v___y_3001_, v___y_3002_, v___y_3003_, v___y_3004_);
lean_dec(v___y_3004_);
lean_dec_ref(v___y_3003_);
lean_dec(v___y_3002_);
lean_dec_ref(v___y_3001_);
return v_res_3006_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg(lean_object* v_inst_3007_, lean_object* v_a_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_, lean_object* v_a_3011_, lean_object* v_a_3012_){
_start:
{
lean_object* v___x_3014_; lean_object* v_toApplicative_3015_; lean_object* v_toFunctor_3016_; lean_object* v_toSeq_3017_; lean_object* v_toSeqLeft_3018_; lean_object* v_toSeqRight_3019_; lean_object* v___f_3020_; lean_object* v___f_3021_; lean_object* v___f_3022_; lean_object* v___f_3023_; lean_object* v___x_3024_; lean_object* v___f_3025_; lean_object* v___f_3026_; lean_object* v___f_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v_toApplicative_3031_; lean_object* v___x_3033_; uint8_t v_isShared_3034_; uint8_t v_isSharedCheck_3063_; 
v___x_3014_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3015_ = lean_ctor_get(v___x_3014_, 0);
v_toFunctor_3016_ = lean_ctor_get(v_toApplicative_3015_, 0);
v_toSeq_3017_ = lean_ctor_get(v_toApplicative_3015_, 2);
v_toSeqLeft_3018_ = lean_ctor_get(v_toApplicative_3015_, 3);
v_toSeqRight_3019_ = lean_ctor_get(v_toApplicative_3015_, 4);
v___f_3020_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_3021_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3016_, 2);
v___f_3022_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3022_, 0, v_toFunctor_3016_);
v___f_3023_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3023_, 0, v_toFunctor_3016_);
v___x_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___f_3022_);
lean_ctor_set(v___x_3024_, 1, v___f_3023_);
lean_inc(v_toSeqRight_3019_);
v___f_3025_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3025_, 0, v_toSeqRight_3019_);
lean_inc(v_toSeqLeft_3018_);
v___f_3026_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3026_, 0, v_toSeqLeft_3018_);
lean_inc(v_toSeq_3017_);
v___f_3027_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3027_, 0, v_toSeq_3017_);
v___x_3028_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3028_, 0, v___x_3024_);
lean_ctor_set(v___x_3028_, 1, v___f_3020_);
lean_ctor_set(v___x_3028_, 2, v___f_3027_);
lean_ctor_set(v___x_3028_, 3, v___f_3026_);
lean_ctor_set(v___x_3028_, 4, v___f_3025_);
v___x_3029_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3029_, 0, v___x_3028_);
lean_ctor_set(v___x_3029_, 1, v___f_3021_);
v___x_3030_ = l_StateRefT_x27_instMonad___redArg(v___x_3029_);
v_toApplicative_3031_ = lean_ctor_get(v___x_3030_, 0);
v_isSharedCheck_3063_ = !lean_is_exclusive(v___x_3030_);
if (v_isSharedCheck_3063_ == 0)
{
lean_object* v_unused_3064_; 
v_unused_3064_ = lean_ctor_get(v___x_3030_, 1);
lean_dec(v_unused_3064_);
v___x_3033_ = v___x_3030_;
v_isShared_3034_ = v_isSharedCheck_3063_;
goto v_resetjp_3032_;
}
else
{
lean_inc(v_toApplicative_3031_);
lean_dec(v___x_3030_);
v___x_3033_ = lean_box(0);
v_isShared_3034_ = v_isSharedCheck_3063_;
goto v_resetjp_3032_;
}
v_resetjp_3032_:
{
lean_object* v_toFunctor_3035_; lean_object* v_toSeq_3036_; lean_object* v_toSeqLeft_3037_; lean_object* v_toSeqRight_3038_; lean_object* v___x_3040_; uint8_t v_isShared_3041_; uint8_t v_isSharedCheck_3061_; 
v_toFunctor_3035_ = lean_ctor_get(v_toApplicative_3031_, 0);
v_toSeq_3036_ = lean_ctor_get(v_toApplicative_3031_, 2);
v_toSeqLeft_3037_ = lean_ctor_get(v_toApplicative_3031_, 3);
v_toSeqRight_3038_ = lean_ctor_get(v_toApplicative_3031_, 4);
v_isSharedCheck_3061_ = !lean_is_exclusive(v_toApplicative_3031_);
if (v_isSharedCheck_3061_ == 0)
{
lean_object* v_unused_3062_; 
v_unused_3062_ = lean_ctor_get(v_toApplicative_3031_, 1);
lean_dec(v_unused_3062_);
v___x_3040_ = v_toApplicative_3031_;
v_isShared_3041_ = v_isSharedCheck_3061_;
goto v_resetjp_3039_;
}
else
{
lean_inc(v_toSeqRight_3038_);
lean_inc(v_toSeqLeft_3037_);
lean_inc(v_toSeq_3036_);
lean_inc(v_toFunctor_3035_);
lean_dec(v_toApplicative_3031_);
v___x_3040_ = lean_box(0);
v_isShared_3041_ = v_isSharedCheck_3061_;
goto v_resetjp_3039_;
}
v_resetjp_3039_:
{
lean_object* v___f_3042_; lean_object* v___f_3043_; lean_object* v___f_3044_; lean_object* v___f_3045_; lean_object* v___f_3046_; lean_object* v___x_3047_; lean_object* v___f_3048_; lean_object* v___f_3049_; lean_object* v___f_3050_; lean_object* v___x_3052_; 
v___f_3042_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3042_, 0, v_inst_3007_);
v___f_3043_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3044_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3035_);
v___f_3045_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3045_, 0, v_toFunctor_3035_);
v___f_3046_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3046_, 0, v_toFunctor_3035_);
v___x_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3047_, 0, v___f_3045_);
lean_ctor_set(v___x_3047_, 1, v___f_3046_);
v___f_3048_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3048_, 0, v_toSeqRight_3038_);
v___f_3049_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3049_, 0, v_toSeqLeft_3037_);
v___f_3050_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3050_, 0, v_toSeq_3036_);
if (v_isShared_3041_ == 0)
{
lean_ctor_set(v___x_3040_, 4, v___f_3048_);
lean_ctor_set(v___x_3040_, 3, v___f_3049_);
lean_ctor_set(v___x_3040_, 2, v___f_3050_);
lean_ctor_set(v___x_3040_, 1, v___f_3043_);
lean_ctor_set(v___x_3040_, 0, v___x_3047_);
v___x_3052_ = v___x_3040_;
goto v_reusejp_3051_;
}
else
{
lean_object* v_reuseFailAlloc_3060_; 
v_reuseFailAlloc_3060_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3060_, 0, v___x_3047_);
lean_ctor_set(v_reuseFailAlloc_3060_, 1, v___f_3043_);
lean_ctor_set(v_reuseFailAlloc_3060_, 2, v___f_3050_);
lean_ctor_set(v_reuseFailAlloc_3060_, 3, v___f_3049_);
lean_ctor_set(v_reuseFailAlloc_3060_, 4, v___f_3048_);
v___x_3052_ = v_reuseFailAlloc_3060_;
goto v_reusejp_3051_;
}
v_reusejp_3051_:
{
lean_object* v___x_3054_; 
if (v_isShared_3034_ == 0)
{
lean_ctor_set(v___x_3033_, 1, v___f_3044_);
lean_ctor_set(v___x_3033_, 0, v___x_3052_);
v___x_3054_ = v___x_3033_;
goto v_reusejp_3053_;
}
else
{
lean_object* v_reuseFailAlloc_3059_; 
v_reuseFailAlloc_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3059_, 0, v___x_3052_);
lean_ctor_set(v_reuseFailAlloc_3059_, 1, v___f_3044_);
v___x_3054_ = v_reuseFailAlloc_3059_;
goto v_reusejp_3053_;
}
v_reusejp_3053_:
{
size_t v_sz_3055_; size_t v___x_3056_; lean_object* v___x_129__overap_3057_; lean_object* v___x_3058_; 
v_sz_3055_ = lean_array_size(v_a_3008_);
v___x_3056_ = ((size_t)0ULL);
v___x_129__overap_3057_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3054_, v___f_3042_, v_sz_3055_, v___x_3056_, v_a_3008_);
lean_inc(v_a_3012_);
lean_inc_ref(v_a_3011_);
lean_inc(v_a_3010_);
lean_inc_ref(v_a_3009_);
v___x_3058_ = lean_apply_5(v___x_129__overap_3057_, v_a_3009_, v_a_3010_, v_a_3011_, v_a_3012_, lean_box(0));
return v___x_3058_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___redArg___boxed(lean_object* v_inst_3065_, lean_object* v_a_3066_, lean_object* v_a_3067_, lean_object* v_a_3068_, lean_object* v_a_3069_, lean_object* v_a_3070_, lean_object* v_a_3071_){
_start:
{
lean_object* v_res_3072_; 
v_res_3072_ = l_Lean_Compiler_LCNF_Probe_toString___redArg(v_inst_3065_, v_a_3066_, v_a_3067_, v_a_3068_, v_a_3069_, v_a_3070_);
lean_dec(v_a_3070_);
lean_dec_ref(v_a_3069_);
lean_dec(v_a_3068_);
lean_dec_ref(v_a_3067_);
return v_res_3072_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString(lean_object* v_00_u03b1_3073_, lean_object* v_inst_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_, lean_object* v_a_3077_, lean_object* v_a_3078_, lean_object* v_a_3079_){
_start:
{
lean_object* v___x_3081_; lean_object* v_toApplicative_3082_; lean_object* v_toFunctor_3083_; lean_object* v_toSeq_3084_; lean_object* v_toSeqLeft_3085_; lean_object* v_toSeqRight_3086_; lean_object* v___f_3087_; lean_object* v___f_3088_; lean_object* v___f_3089_; lean_object* v___f_3090_; lean_object* v___x_3091_; lean_object* v___f_3092_; lean_object* v___f_3093_; lean_object* v___f_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v_toApplicative_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3130_; 
v___x_3081_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3082_ = lean_ctor_get(v___x_3081_, 0);
v_toFunctor_3083_ = lean_ctor_get(v_toApplicative_3082_, 0);
v_toSeq_3084_ = lean_ctor_get(v_toApplicative_3082_, 2);
v_toSeqLeft_3085_ = lean_ctor_get(v_toApplicative_3082_, 3);
v_toSeqRight_3086_ = lean_ctor_get(v_toApplicative_3082_, 4);
v___f_3087_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_3088_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3083_, 2);
v___f_3089_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3089_, 0, v_toFunctor_3083_);
v___f_3090_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3090_, 0, v_toFunctor_3083_);
v___x_3091_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3091_, 0, v___f_3089_);
lean_ctor_set(v___x_3091_, 1, v___f_3090_);
lean_inc(v_toSeqRight_3086_);
v___f_3092_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3092_, 0, v_toSeqRight_3086_);
lean_inc(v_toSeqLeft_3085_);
v___f_3093_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3093_, 0, v_toSeqLeft_3085_);
lean_inc(v_toSeq_3084_);
v___f_3094_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3094_, 0, v_toSeq_3084_);
v___x_3095_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3091_);
lean_ctor_set(v___x_3095_, 1, v___f_3087_);
lean_ctor_set(v___x_3095_, 2, v___f_3094_);
lean_ctor_set(v___x_3095_, 3, v___f_3093_);
lean_ctor_set(v___x_3095_, 4, v___f_3092_);
v___x_3096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
lean_ctor_set(v___x_3096_, 1, v___f_3088_);
v___x_3097_ = l_StateRefT_x27_instMonad___redArg(v___x_3096_);
v_toApplicative_3098_ = lean_ctor_get(v___x_3097_, 0);
v_isSharedCheck_3130_ = !lean_is_exclusive(v___x_3097_);
if (v_isSharedCheck_3130_ == 0)
{
lean_object* v_unused_3131_; 
v_unused_3131_ = lean_ctor_get(v___x_3097_, 1);
lean_dec(v_unused_3131_);
v___x_3100_ = v___x_3097_;
v_isShared_3101_ = v_isSharedCheck_3130_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_toApplicative_3098_);
lean_dec(v___x_3097_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3130_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v_toFunctor_3102_; lean_object* v_toSeq_3103_; lean_object* v_toSeqLeft_3104_; lean_object* v_toSeqRight_3105_; lean_object* v___x_3107_; uint8_t v_isShared_3108_; uint8_t v_isSharedCheck_3128_; 
v_toFunctor_3102_ = lean_ctor_get(v_toApplicative_3098_, 0);
v_toSeq_3103_ = lean_ctor_get(v_toApplicative_3098_, 2);
v_toSeqLeft_3104_ = lean_ctor_get(v_toApplicative_3098_, 3);
v_toSeqRight_3105_ = lean_ctor_get(v_toApplicative_3098_, 4);
v_isSharedCheck_3128_ = !lean_is_exclusive(v_toApplicative_3098_);
if (v_isSharedCheck_3128_ == 0)
{
lean_object* v_unused_3129_; 
v_unused_3129_ = lean_ctor_get(v_toApplicative_3098_, 1);
lean_dec(v_unused_3129_);
v___x_3107_ = v_toApplicative_3098_;
v_isShared_3108_ = v_isSharedCheck_3128_;
goto v_resetjp_3106_;
}
else
{
lean_inc(v_toSeqRight_3105_);
lean_inc(v_toSeqLeft_3104_);
lean_inc(v_toSeq_3103_);
lean_inc(v_toFunctor_3102_);
lean_dec(v_toApplicative_3098_);
v___x_3107_ = lean_box(0);
v_isShared_3108_ = v_isSharedCheck_3128_;
goto v_resetjp_3106_;
}
v_resetjp_3106_:
{
lean_object* v___f_3109_; lean_object* v___f_3110_; lean_object* v___f_3111_; lean_object* v___f_3112_; lean_object* v___f_3113_; lean_object* v___x_3114_; lean_object* v___f_3115_; lean_object* v___f_3116_; lean_object* v___f_3117_; lean_object* v___x_3119_; 
v___f_3109_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toString___redArg___lam__0___boxed), 7, 1);
lean_closure_set(v___f_3109_, 0, v_inst_3074_);
v___f_3110_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3111_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3102_);
v___f_3112_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3112_, 0, v_toFunctor_3102_);
v___f_3113_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3113_, 0, v_toFunctor_3102_);
v___x_3114_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3114_, 0, v___f_3112_);
lean_ctor_set(v___x_3114_, 1, v___f_3113_);
v___f_3115_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3115_, 0, v_toSeqRight_3105_);
v___f_3116_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3116_, 0, v_toSeqLeft_3104_);
v___f_3117_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3117_, 0, v_toSeq_3103_);
if (v_isShared_3108_ == 0)
{
lean_ctor_set(v___x_3107_, 4, v___f_3115_);
lean_ctor_set(v___x_3107_, 3, v___f_3116_);
lean_ctor_set(v___x_3107_, 2, v___f_3117_);
lean_ctor_set(v___x_3107_, 1, v___f_3110_);
lean_ctor_set(v___x_3107_, 0, v___x_3114_);
v___x_3119_ = v___x_3107_;
goto v_reusejp_3118_;
}
else
{
lean_object* v_reuseFailAlloc_3127_; 
v_reuseFailAlloc_3127_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3127_, 0, v___x_3114_);
lean_ctor_set(v_reuseFailAlloc_3127_, 1, v___f_3110_);
lean_ctor_set(v_reuseFailAlloc_3127_, 2, v___f_3117_);
lean_ctor_set(v_reuseFailAlloc_3127_, 3, v___f_3116_);
lean_ctor_set(v_reuseFailAlloc_3127_, 4, v___f_3115_);
v___x_3119_ = v_reuseFailAlloc_3127_;
goto v_reusejp_3118_;
}
v_reusejp_3118_:
{
lean_object* v___x_3121_; 
if (v_isShared_3101_ == 0)
{
lean_ctor_set(v___x_3100_, 1, v___f_3111_);
lean_ctor_set(v___x_3100_, 0, v___x_3119_);
v___x_3121_ = v___x_3100_;
goto v_reusejp_3120_;
}
else
{
lean_object* v_reuseFailAlloc_3126_; 
v_reuseFailAlloc_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3126_, 0, v___x_3119_);
lean_ctor_set(v_reuseFailAlloc_3126_, 1, v___f_3111_);
v___x_3121_ = v_reuseFailAlloc_3126_;
goto v_reusejp_3120_;
}
v_reusejp_3120_:
{
size_t v_sz_3122_; size_t v___x_3123_; lean_object* v___x_190__overap_3124_; lean_object* v___x_3125_; 
v_sz_3122_ = lean_array_size(v_a_3075_);
v___x_3123_ = ((size_t)0ULL);
v___x_190__overap_3124_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map(lean_box(0), lean_box(0), lean_box(0), v___x_3121_, v___f_3109_, v_sz_3122_, v___x_3123_, v_a_3075_);
lean_inc(v_a_3079_);
lean_inc_ref(v_a_3078_);
lean_inc(v_a_3077_);
lean_inc_ref(v_a_3076_);
v___x_3125_ = lean_apply_5(v___x_190__overap_3124_, v_a_3076_, v_a_3077_, v_a_3078_, v_a_3079_, lean_box(0));
return v___x_3125_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toString___boxed(lean_object* v_00_u03b1_3132_, lean_object* v_inst_3133_, lean_object* v_a_3134_, lean_object* v_a_3135_, lean_object* v_a_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_, lean_object* v_a_3139_){
_start:
{
lean_object* v_res_3140_; 
v_res_3140_ = l_Lean_Compiler_LCNF_Probe_toString(v_00_u03b1_3132_, v_inst_3133_, v_a_3134_, v_a_3135_, v_a_3136_, v_a_3137_, v_a_3138_);
lean_dec(v_a_3138_);
lean_dec_ref(v_a_3137_);
lean_dec(v_a_3136_);
lean_dec_ref(v_a_3135_);
return v_res_3140_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg(lean_object* v_data_3141_){
_start:
{
lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; 
v___x_3143_ = lean_array_get_size(v_data_3141_);
v___x_3144_ = lean_unsigned_to_nat(1u);
v___x_3145_ = lean_mk_empty_array_with_capacity(v___x_3144_);
v___x_3146_ = lean_array_push(v___x_3145_, v___x_3143_);
v___x_3147_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3147_, 0, v___x_3146_);
return v___x_3147_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___redArg___boxed(lean_object* v_data_3148_, lean_object* v_a_3149_){
_start:
{
lean_object* v_res_3150_; 
v_res_3150_ = l_Lean_Compiler_LCNF_Probe_count___redArg(v_data_3148_);
lean_dec_ref(v_data_3148_);
return v_res_3150_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count(lean_object* v_00_u03b1_3151_, lean_object* v_data_3152_, lean_object* v_a_3153_, lean_object* v_a_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_){
_start:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; 
v___x_3158_ = lean_array_get_size(v_data_3152_);
v___x_3159_ = lean_unsigned_to_nat(1u);
v___x_3160_ = lean_mk_empty_array_with_capacity(v___x_3159_);
v___x_3161_ = lean_array_push(v___x_3160_, v___x_3158_);
v___x_3162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3161_);
return v___x_3162_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_count___boxed(lean_object* v_00_u03b1_3163_, lean_object* v_data_3164_, lean_object* v_a_3165_, lean_object* v_a_3166_, lean_object* v_a_3167_, lean_object* v_a_3168_, lean_object* v_a_3169_){
_start:
{
lean_object* v_res_3170_; 
v_res_3170_ = l_Lean_Compiler_LCNF_Probe_count(v_00_u03b1_3163_, v_data_3164_, v_a_3165_, v_a_3166_, v_a_3167_, v_a_3168_);
lean_dec(v_a_3168_);
lean_dec_ref(v_a_3167_);
lean_dec(v_a_3166_);
lean_dec_ref(v_a_3165_);
lean_dec_ref(v_data_3164_);
return v_res_3170_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg(lean_object* v_data_3172_){
_start:
{
lean_object* v___y_3175_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; uint8_t v___x_3183_; 
v___x_3180_ = lean_unsigned_to_nat(0u);
v___x_3181_ = lean_array_get_size(v_data_3172_);
v___x_3182_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_3183_ = lean_nat_dec_lt(v___x_3180_, v___x_3181_);
if (v___x_3183_ == 0)
{
lean_dec_ref(v_data_3172_);
v___y_3175_ = v___x_3180_;
goto v___jp_3174_;
}
else
{
lean_object* v___f_3184_; size_t v___x_3185_; size_t v___x_3186_; lean_object* v___x_3187_; 
v___f_3184_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0));
v___x_3185_ = ((size_t)0ULL);
v___x_3186_ = lean_usize_of_nat(v___x_3181_);
v___x_3187_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3182_, v___f_3184_, v_data_3172_, v___x_3185_, v___x_3186_, v___x_3180_);
v___y_3175_ = v___x_3187_;
goto v___jp_3174_;
}
v___jp_3174_:
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; 
v___x_3176_ = lean_unsigned_to_nat(1u);
v___x_3177_ = lean_mk_empty_array_with_capacity(v___x_3176_);
v___x_3178_ = lean_array_push(v___x_3177_, v___y_3175_);
v___x_3179_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3179_, 0, v___x_3178_);
return v___x_3179_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___redArg___boxed(lean_object* v_data_3188_, lean_object* v_a_3189_){
_start:
{
lean_object* v_res_3190_; 
v_res_3190_ = l_Lean_Compiler_LCNF_Probe_sum___redArg(v_data_3188_);
return v_res_3190_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum(lean_object* v_data_3191_, lean_object* v_a_3192_, lean_object* v_a_3193_, lean_object* v_a_3194_, lean_object* v_a_3195_){
_start:
{
lean_object* v___y_3198_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; uint8_t v___x_3206_; 
v___x_3203_ = lean_unsigned_to_nat(0u);
v___x_3204_ = lean_array_get_size(v_data_3191_);
v___x_3205_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sortedBySize___redArg___closed__9));
v___x_3206_ = lean_nat_dec_lt(v___x_3203_, v___x_3204_);
if (v___x_3206_ == 0)
{
lean_dec_ref(v_data_3191_);
v___y_3198_ = v___x_3203_;
goto v___jp_3197_;
}
else
{
lean_object* v___f_3207_; size_t v___x_3208_; size_t v___x_3209_; lean_object* v___x_3210_; 
v___f_3207_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_sum___redArg___closed__0));
v___x_3208_ = ((size_t)0ULL);
v___x_3209_ = lean_usize_of_nat(v___x_3204_);
v___x_3210_ = l___private_Init_Data_Array_Basic_0__Array_foldlMUnsafe_fold(lean_box(0), lean_box(0), lean_box(0), v___x_3205_, v___f_3207_, v_data_3191_, v___x_3208_, v___x_3209_, v___x_3203_);
v___y_3198_ = v___x_3210_;
goto v___jp_3197_;
}
v___jp_3197_:
{
lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v___x_3199_ = lean_unsigned_to_nat(1u);
v___x_3200_ = lean_mk_empty_array_with_capacity(v___x_3199_);
v___x_3201_ = lean_array_push(v___x_3200_, v___y_3198_);
v___x_3202_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3201_);
return v___x_3202_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_sum___boxed(lean_object* v_data_3211_, lean_object* v_a_3212_, lean_object* v_a_3213_, lean_object* v_a_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = l_Lean_Compiler_LCNF_Probe_sum(v_data_3211_, v_a_3212_, v_a_3213_, v_a_3214_, v_a_3215_);
lean_dec(v_a_3215_);
lean_dec_ref(v_a_3214_);
lean_dec(v_a_3213_);
lean_dec_ref(v_a_3212_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg(lean_object* v_n_3218_, lean_object* v_data_3219_){
_start:
{
lean_object* v_lower_3222_; lean_object* v_upper_3223_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; uint8_t v___x_3230_; 
v___x_3227_ = lean_array_get_size(v_data_3219_);
v___x_3228_ = lean_nat_sub(v___x_3227_, v_n_3218_);
v___x_3229_ = lean_unsigned_to_nat(0u);
v___x_3230_ = lean_nat_dec_le(v___x_3228_, v___x_3229_);
if (v___x_3230_ == 0)
{
v_lower_3222_ = v___x_3228_;
v_upper_3223_ = v___x_3227_;
goto v___jp_3221_;
}
else
{
lean_dec(v___x_3228_);
v_lower_3222_ = v___x_3229_;
v_upper_3223_ = v___x_3227_;
goto v___jp_3221_;
}
v___jp_3221_:
{
lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; 
v___x_3224_ = l_Array_toSubarray___redArg(v_data_3219_, v_lower_3222_, v_upper_3223_);
v___x_3225_ = l_Subarray_copy___redArg(v___x_3224_);
v___x_3226_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3226_, 0, v___x_3225_);
return v___x_3226_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___redArg___boxed(lean_object* v_n_3231_, lean_object* v_data_3232_, lean_object* v_a_3233_){
_start:
{
lean_object* v_res_3234_; 
v_res_3234_ = l_Lean_Compiler_LCNF_Probe_tail___redArg(v_n_3231_, v_data_3232_);
lean_dec(v_n_3231_);
return v_res_3234_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail(lean_object* v_00_u03b1_3235_, lean_object* v_n_3236_, lean_object* v_data_3237_, lean_object* v_a_3238_, lean_object* v_a_3239_, lean_object* v_a_3240_, lean_object* v_a_3241_){
_start:
{
lean_object* v_lower_3244_; lean_object* v_upper_3245_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; uint8_t v___x_3252_; 
v___x_3249_ = lean_array_get_size(v_data_3237_);
v___x_3250_ = lean_nat_sub(v___x_3249_, v_n_3236_);
v___x_3251_ = lean_unsigned_to_nat(0u);
v___x_3252_ = lean_nat_dec_le(v___x_3250_, v___x_3251_);
if (v___x_3252_ == 0)
{
v_lower_3244_ = v___x_3250_;
v_upper_3245_ = v___x_3249_;
goto v___jp_3243_;
}
else
{
lean_dec(v___x_3250_);
v_lower_3244_ = v___x_3251_;
v_upper_3245_ = v___x_3249_;
goto v___jp_3243_;
}
v___jp_3243_:
{
lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; 
v___x_3246_ = l_Array_toSubarray___redArg(v_data_3237_, v_lower_3244_, v_upper_3245_);
v___x_3247_ = l_Subarray_copy___redArg(v___x_3246_);
v___x_3248_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3247_);
return v___x_3248_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_tail___boxed(lean_object* v_00_u03b1_3253_, lean_object* v_n_3254_, lean_object* v_data_3255_, lean_object* v_a_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_, lean_object* v_a_3259_, lean_object* v_a_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = l_Lean_Compiler_LCNF_Probe_tail(v_00_u03b1_3253_, v_n_3254_, v_data_3255_, v_a_3256_, v_a_3257_, v_a_3258_, v_a_3259_);
lean_dec(v_a_3259_);
lean_dec_ref(v_a_3258_);
lean_dec(v_a_3257_);
lean_dec_ref(v_a_3256_);
lean_dec(v_n_3254_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg(lean_object* v_n_3262_, lean_object* v_data_3263_){
_start:
{
lean_object* v___x_3265_; lean_object* v___x_3266_; lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3265_ = lean_unsigned_to_nat(0u);
v___x_3266_ = l_Array_toSubarray___redArg(v_data_3263_, v___x_3265_, v_n_3262_);
v___x_3267_ = l_Subarray_copy___redArg(v___x_3266_);
v___x_3268_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3268_, 0, v___x_3267_);
return v___x_3268_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___redArg___boxed(lean_object* v_n_3269_, lean_object* v_data_3270_, lean_object* v_a_3271_){
_start:
{
lean_object* v_res_3272_; 
v_res_3272_ = l_Lean_Compiler_LCNF_Probe_head___redArg(v_n_3269_, v_data_3270_);
return v_res_3272_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head(lean_object* v_00_u03b1_3273_, lean_object* v_n_3274_, lean_object* v_data_3275_, lean_object* v_a_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_, lean_object* v_a_3279_){
_start:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; 
v___x_3281_ = lean_unsigned_to_nat(0u);
v___x_3282_ = l_Array_toSubarray___redArg(v_data_3275_, v___x_3281_, v_n_3274_);
v___x_3283_ = l_Subarray_copy___redArg(v___x_3282_);
v___x_3284_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_3284_, 0, v___x_3283_);
return v___x_3284_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_head___boxed(lean_object* v_00_u03b1_3285_, lean_object* v_n_3286_, lean_object* v_data_3287_, lean_object* v_a_3288_, lean_object* v_a_3289_, lean_object* v_a_3290_, lean_object* v_a_3291_, lean_object* v_a_3292_){
_start:
{
lean_object* v_res_3293_; 
v_res_3293_ = l_Lean_Compiler_LCNF_Probe_head(v_00_u03b1_3285_, v_n_3286_, v_data_3287_, v_a_3288_, v_a_3289_, v_a_3290_, v_a_3291_);
lean_dec(v_a_3291_);
lean_dec_ref(v_a_3290_);
lean_dec(v_a_3289_);
lean_dec_ref(v_a_3288_);
return v_res_3293_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(lean_object* v_probe_3299_, lean_object* v___x_3300_, lean_object* v_inst_3301_, lean_object* v___x_3302_, lean_object* v___x_3303_, lean_object* v_toMonadRef_3304_, lean_object* v___f_3305_, lean_object* v_decls_3306_, lean_object* v___y_3307_, lean_object* v___y_3308_, lean_object* v___y_3309_, lean_object* v___y_3310_){
_start:
{
lean_object* v___x_3312_; 
lean_inc(v___y_3310_);
lean_inc_ref(v___y_3309_);
lean_inc(v___y_3308_);
lean_inc_ref(v___y_3307_);
lean_inc_ref(v_decls_3306_);
v___x_3312_ = lean_apply_6(v_probe_3299_, v_decls_3306_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, lean_box(0));
if (lean_obj_tag(v___x_3312_) == 0)
{
lean_object* v_toCold_3313_; lean_object* v_options_3314_; uint8_t v_hasTrace_3315_; 
v_toCold_3313_ = lean_ctor_get(v___y_3309_, 0);
v_options_3314_ = lean_ctor_get(v_toCold_3313_, 2);
v_hasTrace_3315_ = lean_ctor_get_uint8(v_options_3314_, sizeof(void*)*1);
if (v_hasTrace_3315_ == 0)
{
lean_object* v___x_3317_; uint8_t v_isShared_3318_; uint8_t v_isSharedCheck_3322_; 
lean_dec_ref(v___f_3305_);
lean_dec_ref(v_toMonadRef_3304_);
lean_dec_ref(v___x_3303_);
lean_dec_ref(v___x_3302_);
lean_dec_ref(v_inst_3301_);
lean_dec_ref(v___x_3300_);
v_isSharedCheck_3322_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3322_ == 0)
{
lean_object* v_unused_3323_; 
v_unused_3323_ = lean_ctor_get(v___x_3312_, 0);
lean_dec(v_unused_3323_);
v___x_3317_ = v___x_3312_;
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
else
{
lean_dec(v___x_3312_);
v___x_3317_ = lean_box(0);
v_isShared_3318_ = v_isSharedCheck_3322_;
goto v_resetjp_3316_;
}
v_resetjp_3316_:
{
lean_object* v___x_3320_; 
if (v_isShared_3318_ == 0)
{
lean_ctor_set(v___x_3317_, 0, v_decls_3306_);
v___x_3320_ = v___x_3317_;
goto v_reusejp_3319_;
}
else
{
lean_object* v_reuseFailAlloc_3321_; 
v_reuseFailAlloc_3321_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3321_, 0, v_decls_3306_);
v___x_3320_ = v_reuseFailAlloc_3321_;
goto v_reusejp_3319_;
}
v_reusejp_3319_:
{
return v___x_3320_;
}
}
}
else
{
lean_object* v_a_3324_; lean_object* v___x_3326_; uint8_t v_isShared_3327_; uint8_t v_isSharedCheck_3361_; 
v_a_3324_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3361_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3361_ == 0)
{
v___x_3326_ = v___x_3312_;
v_isShared_3327_ = v_isSharedCheck_3361_;
goto v_resetjp_3325_;
}
else
{
lean_inc(v_a_3324_);
lean_dec(v___x_3312_);
v___x_3326_ = lean_box(0);
v_isShared_3327_ = v_isSharedCheck_3361_;
goto v_resetjp_3325_;
}
v_resetjp_3325_:
{
lean_object* v_inheritedTraceOptions_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; uint8_t v___x_3333_; 
v_inheritedTraceOptions_3328_ = lean_ctor_get(v_toCold_3313_, 11);
v___x_3329_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__0));
v___x_3330_ = l_Lean_Name_mkStr2(v___x_3329_, v___x_3300_);
v___x_3331_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__2));
lean_inc(v___x_3330_);
v___x_3332_ = l_Lean_Name_append(v___x_3331_, v___x_3330_);
v___x_3333_ = l___private_Lean_Util_Trace_0__Lean_checkTraceOption_go(v_inheritedTraceOptions_3328_, v_options_3314_, v___x_3332_);
lean_dec(v___x_3332_);
if (v___x_3333_ == 0)
{
lean_object* v___x_3335_; 
lean_dec(v___x_3330_);
lean_dec(v_a_3324_);
lean_dec_ref(v___f_3305_);
lean_dec_ref(v_toMonadRef_3304_);
lean_dec_ref(v___x_3303_);
lean_dec_ref(v___x_3302_);
lean_dec_ref(v_inst_3301_);
if (v_isShared_3327_ == 0)
{
lean_ctor_set(v___x_3326_, 0, v_decls_3306_);
v___x_3335_ = v___x_3326_;
goto v_reusejp_3334_;
}
else
{
lean_object* v_reuseFailAlloc_3336_; 
v_reuseFailAlloc_3336_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3336_, 0, v_decls_3306_);
v___x_3335_ = v_reuseFailAlloc_3336_;
goto v_reusejp_3334_;
}
v_reusejp_3334_:
{
return v___x_3335_;
}
}
else
{
lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_1038__overap_3343_; lean_object* v___x_3344_; 
lean_del_object(v___x_3326_);
v___x_3337_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___closed__3));
v___x_3338_ = lean_array_to_list(v_a_3324_);
v___x_3339_ = l_List_toString___redArg(v_inst_3301_, v___x_3338_);
v___x_3340_ = lean_string_append(v___x_3337_, v___x_3339_);
lean_dec_ref(v___x_3339_);
v___x_3341_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3341_, 0, v___x_3340_);
v___x_3342_ = l_Lean_MessageData_ofFormat(v___x_3341_);
v___x_1038__overap_3343_ = l_Lean_addTrace___redArg(v___x_3302_, v___x_3303_, v_toMonadRef_3304_, v___f_3305_, v___x_3330_, v___x_3342_);
lean_inc(v___y_3310_);
lean_inc_ref(v___y_3309_);
lean_inc(v___y_3308_);
lean_inc_ref(v___y_3307_);
v___x_3344_ = lean_apply_5(v___x_1038__overap_3343_, v___y_3307_, v___y_3308_, v___y_3309_, v___y_3310_, lean_box(0));
if (lean_obj_tag(v___x_3344_) == 0)
{
lean_object* v___x_3346_; uint8_t v_isShared_3347_; uint8_t v_isSharedCheck_3351_; 
v_isSharedCheck_3351_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3351_ == 0)
{
lean_object* v_unused_3352_; 
v_unused_3352_ = lean_ctor_get(v___x_3344_, 0);
lean_dec(v_unused_3352_);
v___x_3346_ = v___x_3344_;
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
else
{
lean_dec(v___x_3344_);
v___x_3346_ = lean_box(0);
v_isShared_3347_ = v_isSharedCheck_3351_;
goto v_resetjp_3345_;
}
v_resetjp_3345_:
{
lean_object* v___x_3349_; 
if (v_isShared_3347_ == 0)
{
lean_ctor_set(v___x_3346_, 0, v_decls_3306_);
v___x_3349_ = v___x_3346_;
goto v_reusejp_3348_;
}
else
{
lean_object* v_reuseFailAlloc_3350_; 
v_reuseFailAlloc_3350_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3350_, 0, v_decls_3306_);
v___x_3349_ = v_reuseFailAlloc_3350_;
goto v_reusejp_3348_;
}
v_reusejp_3348_:
{
return v___x_3349_;
}
}
}
else
{
lean_object* v_a_3353_; lean_object* v___x_3355_; uint8_t v_isShared_3356_; uint8_t v_isSharedCheck_3360_; 
lean_dec_ref(v_decls_3306_);
v_a_3353_ = lean_ctor_get(v___x_3344_, 0);
v_isSharedCheck_3360_ = !lean_is_exclusive(v___x_3344_);
if (v_isSharedCheck_3360_ == 0)
{
v___x_3355_ = v___x_3344_;
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
else
{
lean_inc(v_a_3353_);
lean_dec(v___x_3344_);
v___x_3355_ = lean_box(0);
v_isShared_3356_ = v_isSharedCheck_3360_;
goto v_resetjp_3354_;
}
v_resetjp_3354_:
{
lean_object* v___x_3358_; 
if (v_isShared_3356_ == 0)
{
v___x_3358_ = v___x_3355_;
goto v_reusejp_3357_;
}
else
{
lean_object* v_reuseFailAlloc_3359_; 
v_reuseFailAlloc_3359_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3359_, 0, v_a_3353_);
v___x_3358_ = v_reuseFailAlloc_3359_;
goto v_reusejp_3357_;
}
v_reusejp_3357_:
{
return v___x_3358_;
}
}
}
}
}
}
}
else
{
lean_object* v_a_3362_; lean_object* v___x_3364_; uint8_t v_isShared_3365_; uint8_t v_isSharedCheck_3369_; 
lean_dec_ref(v_decls_3306_);
lean_dec_ref(v___f_3305_);
lean_dec_ref(v_toMonadRef_3304_);
lean_dec_ref(v___x_3303_);
lean_dec_ref(v___x_3302_);
lean_dec_ref(v_inst_3301_);
lean_dec_ref(v___x_3300_);
v_a_3362_ = lean_ctor_get(v___x_3312_, 0);
v_isSharedCheck_3369_ = !lean_is_exclusive(v___x_3312_);
if (v_isSharedCheck_3369_ == 0)
{
v___x_3364_ = v___x_3312_;
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
else
{
lean_inc(v_a_3362_);
lean_dec(v___x_3312_);
v___x_3364_ = lean_box(0);
v_isShared_3365_ = v_isSharedCheck_3369_;
goto v_resetjp_3363_;
}
v_resetjp_3363_:
{
lean_object* v___x_3367_; 
if (v_isShared_3365_ == 0)
{
v___x_3367_ = v___x_3364_;
goto v_reusejp_3366_;
}
else
{
lean_object* v_reuseFailAlloc_3368_; 
v_reuseFailAlloc_3368_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3368_, 0, v_a_3362_);
v___x_3367_ = v_reuseFailAlloc_3368_;
goto v_reusejp_3366_;
}
v_reusejp_3366_:
{
return v___x_3367_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed(lean_object* v_probe_3370_, lean_object* v___x_3371_, lean_object* v_inst_3372_, lean_object* v___x_3373_, lean_object* v___x_3374_, lean_object* v_toMonadRef_3375_, lean_object* v___f_3376_, lean_object* v_decls_3377_, lean_object* v___y_3378_, lean_object* v___y_3379_, lean_object* v___y_3380_, lean_object* v___y_3381_, lean_object* v___y_3382_){
_start:
{
lean_object* v_res_3383_; 
v_res_3383_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0(v_probe_3370_, v___x_3371_, v_inst_3372_, v___x_3373_, v___x_3374_, v_toMonadRef_3375_, v___f_3376_, v_decls_3377_, v___y_3378_, v___y_3379_, v___y_3380_, v___y_3381_);
lean_dec(v___y_3381_);
lean_dec_ref(v___y_3380_);
lean_dec(v___y_3379_);
lean_dec_ref(v___y_3378_);
return v_res_3383_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2(void){
_start:
{
lean_object* v___x_3386_; lean_object* v___x_3387_; lean_object* v___x_3388_; 
v___x_3386_ = l_Lean_Core_instMonadTraceCoreM;
v___x_3387_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1));
v___x_3388_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___x_3387_, v___x_3386_);
return v___x_3388_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3(void){
_start:
{
lean_object* v___x_3389_; lean_object* v___f_3390_; lean_object* v___x_3391_; 
v___x_3389_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__2);
v___f_3390_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0));
v___x_3391_ = l_Lean_instMonadTraceOfMonadLift___redArg(v___f_3390_, v___x_3389_);
return v___x_3391_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6(void){
_start:
{
lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; 
v___x_3394_ = l_Lean_Core_instMonadQuotationCoreM;
v___x_3395_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__1));
v___x_3396_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__5));
v___x_3397_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___x_3396_, v___x_3395_, v___x_3394_);
return v___x_3397_;
}
}
static lean_object* _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7(void){
_start:
{
lean_object* v___x_3398_; lean_object* v___f_3399_; lean_object* v___f_3400_; lean_object* v___x_3401_; 
v___x_3398_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__6);
v___f_3399_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__0));
v___f_3400_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__4));
v___x_3401_ = l_Lean_instMonadQuotationOfMonadFunctorOfMonadLift___redArg(v___f_3400_, v___f_3399_, v___x_3398_);
return v___x_3401_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg(lean_object* v_inst_3406_, uint8_t v_phase_3407_, lean_object* v_probe_3408_){
_start:
{
lean_object* v___x_3409_; lean_object* v_toApplicative_3410_; lean_object* v_toFunctor_3411_; lean_object* v_toSeq_3412_; lean_object* v_toSeqLeft_3413_; lean_object* v_toSeqRight_3414_; lean_object* v___f_3415_; lean_object* v___f_3416_; lean_object* v___f_3417_; lean_object* v___f_3418_; lean_object* v___x_3419_; lean_object* v___f_3420_; lean_object* v___f_3421_; lean_object* v___f_3422_; lean_object* v___x_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; lean_object* v_toApplicative_3426_; lean_object* v___x_3428_; uint8_t v_isShared_3429_; uint8_t v_isSharedCheck_3463_; 
v___x_3409_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1, &l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1_once, _init_l_Lean_Compiler_LCNF_Probe_map___redArg___closed__1);
v_toApplicative_3410_ = lean_ctor_get(v___x_3409_, 0);
v_toFunctor_3411_ = lean_ctor_get(v_toApplicative_3410_, 0);
v_toSeq_3412_ = lean_ctor_get(v_toApplicative_3410_, 2);
v_toSeqLeft_3413_ = lean_ctor_get(v_toApplicative_3410_, 3);
v_toSeqRight_3414_ = lean_ctor_get(v_toApplicative_3410_, 4);
v___f_3415_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__2));
v___f_3416_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__3));
lean_inc_ref_n(v_toFunctor_3411_, 2);
v___f_3417_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3417_, 0, v_toFunctor_3411_);
v___f_3418_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3418_, 0, v_toFunctor_3411_);
v___x_3419_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3419_, 0, v___f_3417_);
lean_ctor_set(v___x_3419_, 1, v___f_3418_);
lean_inc(v_toSeqRight_3414_);
v___f_3420_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3420_, 0, v_toSeqRight_3414_);
lean_inc(v_toSeqLeft_3413_);
v___f_3421_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3421_, 0, v_toSeqLeft_3413_);
lean_inc(v_toSeq_3412_);
v___f_3422_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3422_, 0, v_toSeq_3412_);
v___x_3423_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v___x_3423_, 0, v___x_3419_);
lean_ctor_set(v___x_3423_, 1, v___f_3415_);
lean_ctor_set(v___x_3423_, 2, v___f_3422_);
lean_ctor_set(v___x_3423_, 3, v___f_3421_);
lean_ctor_set(v___x_3423_, 4, v___f_3420_);
v___x_3424_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3424_, 0, v___x_3423_);
lean_ctor_set(v___x_3424_, 1, v___f_3416_);
v___x_3425_ = l_StateRefT_x27_instMonad___redArg(v___x_3424_);
v_toApplicative_3426_ = lean_ctor_get(v___x_3425_, 0);
v_isSharedCheck_3463_ = !lean_is_exclusive(v___x_3425_);
if (v_isSharedCheck_3463_ == 0)
{
lean_object* v_unused_3464_; 
v_unused_3464_ = lean_ctor_get(v___x_3425_, 1);
lean_dec(v_unused_3464_);
v___x_3428_ = v___x_3425_;
v_isShared_3429_ = v_isSharedCheck_3463_;
goto v_resetjp_3427_;
}
else
{
lean_inc(v_toApplicative_3426_);
lean_dec(v___x_3425_);
v___x_3428_ = lean_box(0);
v_isShared_3429_ = v_isSharedCheck_3463_;
goto v_resetjp_3427_;
}
v_resetjp_3427_:
{
lean_object* v_toFunctor_3430_; lean_object* v_toSeq_3431_; lean_object* v_toSeqLeft_3432_; lean_object* v_toSeqRight_3433_; lean_object* v___x_3435_; uint8_t v_isShared_3436_; uint8_t v_isSharedCheck_3461_; 
v_toFunctor_3430_ = lean_ctor_get(v_toApplicative_3426_, 0);
v_toSeq_3431_ = lean_ctor_get(v_toApplicative_3426_, 2);
v_toSeqLeft_3432_ = lean_ctor_get(v_toApplicative_3426_, 3);
v_toSeqRight_3433_ = lean_ctor_get(v_toApplicative_3426_, 4);
v_isSharedCheck_3461_ = !lean_is_exclusive(v_toApplicative_3426_);
if (v_isSharedCheck_3461_ == 0)
{
lean_object* v_unused_3462_; 
v_unused_3462_ = lean_ctor_get(v_toApplicative_3426_, 1);
lean_dec(v_unused_3462_);
v___x_3435_ = v_toApplicative_3426_;
v_isShared_3436_ = v_isSharedCheck_3461_;
goto v_resetjp_3434_;
}
else
{
lean_inc(v_toSeqRight_3433_);
lean_inc(v_toSeqLeft_3432_);
lean_inc(v_toSeq_3431_);
lean_inc(v_toFunctor_3430_);
lean_dec(v_toApplicative_3426_);
v___x_3435_ = lean_box(0);
v_isShared_3436_ = v_isSharedCheck_3461_;
goto v_resetjp_3434_;
}
v_resetjp_3434_:
{
lean_object* v___f_3437_; lean_object* v___f_3438_; lean_object* v___f_3439_; lean_object* v___f_3440_; lean_object* v___x_3441_; lean_object* v___f_3442_; lean_object* v___f_3443_; lean_object* v___f_3444_; lean_object* v___x_3446_; 
v___f_3437_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__4));
v___f_3438_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_map___redArg___closed__5));
lean_inc_ref(v_toFunctor_3430_);
v___f_3439_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__0), 6, 1);
lean_closure_set(v___f_3439_, 0, v_toFunctor_3430_);
v___f_3440_ = lean_alloc_closure((void*)(l_ReaderT_instFunctorOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3440_, 0, v_toFunctor_3430_);
v___x_3441_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3441_, 0, v___f_3439_);
lean_ctor_set(v___x_3441_, 1, v___f_3440_);
v___f_3442_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__1), 6, 1);
lean_closure_set(v___f_3442_, 0, v_toSeqRight_3433_);
v___f_3443_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__3), 6, 1);
lean_closure_set(v___f_3443_, 0, v_toSeqLeft_3432_);
v___f_3444_ = lean_alloc_closure((void*)(l_ReaderT_instApplicativeOfMonad___redArg___lam__4), 6, 1);
lean_closure_set(v___f_3444_, 0, v_toSeq_3431_);
if (v_isShared_3436_ == 0)
{
lean_ctor_set(v___x_3435_, 4, v___f_3442_);
lean_ctor_set(v___x_3435_, 3, v___f_3443_);
lean_ctor_set(v___x_3435_, 2, v___f_3444_);
lean_ctor_set(v___x_3435_, 1, v___f_3437_);
lean_ctor_set(v___x_3435_, 0, v___x_3441_);
v___x_3446_ = v___x_3435_;
goto v_reusejp_3445_;
}
else
{
lean_object* v_reuseFailAlloc_3460_; 
v_reuseFailAlloc_3460_ = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(v_reuseFailAlloc_3460_, 0, v___x_3441_);
lean_ctor_set(v_reuseFailAlloc_3460_, 1, v___f_3437_);
lean_ctor_set(v_reuseFailAlloc_3460_, 2, v___f_3444_);
lean_ctor_set(v_reuseFailAlloc_3460_, 3, v___f_3443_);
lean_ctor_set(v_reuseFailAlloc_3460_, 4, v___f_3442_);
v___x_3446_ = v_reuseFailAlloc_3460_;
goto v_reusejp_3445_;
}
v_reusejp_3445_:
{
lean_object* v___x_3448_; 
if (v_isShared_3429_ == 0)
{
lean_ctor_set(v___x_3428_, 1, v___f_3438_);
lean_ctor_set(v___x_3428_, 0, v___x_3446_);
v___x_3448_ = v___x_3428_;
goto v_reusejp_3447_;
}
else
{
lean_object* v_reuseFailAlloc_3459_; 
v_reuseFailAlloc_3459_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3459_, 0, v___x_3446_);
lean_ctor_set(v_reuseFailAlloc_3459_, 1, v___f_3438_);
v___x_3448_ = v_reuseFailAlloc_3459_;
goto v_reusejp_3447_;
}
v_reusejp_3447_:
{
lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v_toMonadRef_3451_; lean_object* v___f_3452_; lean_object* v___x_3453_; uint8_t v___x_3454_; lean_object* v___x_3455_; lean_object* v___f_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3449_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__3);
v___x_3450_ = lean_obj_once(&l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7, &l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7_once, _init_l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__7);
v_toMonadRef_3451_ = lean_ctor_get(v___x_3450_, 0);
v___f_3452_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__8));
v___x_3453_ = lean_unsigned_to_nat(0u);
v___x_3454_ = 0;
v___x_3455_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__9));
lean_inc_ref(v_toMonadRef_3451_);
v___f_3456_ = lean_alloc_closure((void*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___lam__0___boxed), 13, 7);
lean_closure_set(v___f_3456_, 0, v_probe_3408_);
lean_closure_set(v___f_3456_, 1, v___x_3455_);
lean_closure_set(v___f_3456_, 2, v_inst_3406_);
lean_closure_set(v___f_3456_, 3, v___x_3448_);
lean_closure_set(v___f_3456_, 4, v___x_3449_);
lean_closure_set(v___f_3456_, 5, v_toMonadRef_3451_);
lean_closure_set(v___f_3456_, 6, v___f_3452_);
v___x_3457_ = ((lean_object*)(l_Lean_Compiler_LCNF_Probe_toPass___redArg___closed__10));
v___x_3458_ = lean_alloc_ctor(0, 3, 3);
lean_ctor_set(v___x_3458_, 0, v___x_3453_);
lean_ctor_set(v___x_3458_, 1, v___x_3457_);
lean_ctor_set(v___x_3458_, 2, v___f_3456_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*3, v_phase_3407_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*3 + 1, v_phase_3407_);
lean_ctor_set_uint8(v___x_3458_, sizeof(void*)*3 + 2, v___x_3454_);
return v___x_3458_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___redArg___boxed(lean_object* v_inst_3465_, lean_object* v_phase_3466_, lean_object* v_probe_3467_){
_start:
{
uint8_t v_phase_boxed_3468_; lean_object* v_res_3469_; 
v_phase_boxed_3468_ = lean_unbox(v_phase_3466_);
v_res_3469_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3465_, v_phase_boxed_3468_, v_probe_3467_);
return v_res_3469_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass(lean_object* v_00_u03b2_3470_, lean_object* v_inst_3471_, uint8_t v_phase_3472_, lean_object* v_probe_3473_){
_start:
{
lean_object* v___x_3474_; 
v___x_3474_ = l_Lean_Compiler_LCNF_Probe_toPass___redArg(v_inst_3471_, v_phase_3472_, v_probe_3473_);
return v___x_3474_;
}
}
LEAN_EXPORT lean_object* l_Lean_Compiler_LCNF_Probe_toPass___boxed(lean_object* v_00_u03b2_3475_, lean_object* v_inst_3476_, lean_object* v_phase_3477_, lean_object* v_probe_3478_){
_start:
{
uint8_t v_phase_boxed_3479_; lean_object* v_res_3480_; 
v_phase_boxed_3479_ = lean_unbox(v_phase_3477_);
v_res_3480_ = l_Lean_Compiler_LCNF_Probe_toPass(v_00_u03b2_3475_, v_inst_3476_, v_phase_boxed_3479_, v_probe_3478_);
return v_res_3480_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3539_; lean_object* v___x_3540_; lean_object* v___x_3541_; 
v___x_3539_ = lean_unsigned_to_nat(4008565020u);
v___x_3540_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__23_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3541_ = l_Lean_Name_num___override(v___x_3540_, v___x_3539_);
return v___x_3541_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3543_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__25_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3544_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__24_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3545_ = l_Lean_Name_str___override(v___x_3544_, v___x_3543_);
return v___x_3545_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3547_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
v___x_3547_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__27_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3548_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__26_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3549_ = l_Lean_Name_str___override(v___x_3548_, v___x_3547_);
return v___x_3549_;
}
}
static lean_object* _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(void){
_start:
{
lean_object* v___x_3550_; lean_object* v___x_3551_; lean_object* v___x_3552_; 
v___x_3550_ = lean_unsigned_to_nat(2u);
v___x_3551_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__28_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3552_ = l_Lean_Name_num___override(v___x_3551_, v___x_3550_);
return v___x_3552_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_(){
_start:
{
lean_object* v___x_3554_; uint8_t v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; 
v___x_3554_ = ((lean_object*)(l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__0_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_));
v___x_3555_ = 1;
v___x_3556_ = lean_obj_once(&l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_, &l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2__once, _init_l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn___closed__29_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_);
v___x_3557_ = l_Lean_registerTraceClass(v___x_3554_, v___x_3555_, v___x_3556_);
return v___x_3557_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2____boxed(lean_object* v_a_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
return v_res_3559_;
}
}
lean_object* runtime_initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Compiler_LCNF_Probing_0__Lean_Compiler_LCNF_Probe_initFn_00___x40_Lean_Compiler_LCNF_Probing_4008565020____hygCtx___hyg_2_();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Compiler_LCNF_PhaseExt(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Compiler_LCNF_Probing(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Compiler_LCNF_PhaseExt(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Compiler_LCNF_Probing(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Compiler_LCNF_Probing(builtin);
}
#ifdef __cplusplus
}
#endif
