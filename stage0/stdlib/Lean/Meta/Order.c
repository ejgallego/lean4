// Lean compiler output
// Module: Lean.Meta.Order
// Imports: public import Lean.Meta.PProdN public import Lean.Meta.AppBuilder public import Init.Internal.Order.Basic
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
lean_object* l_Lean_stringToMessageData(lean_object*);
lean_object* l_Lean_Name_mkStr3(lean_object*, lean_object*, lean_object*);
lean_object* lean_infer_type(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Expr_isAppOf(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofExpr(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Environment_setRecordingDeps(lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkLambdaFVars(lean_object*, lean_object*, uint8_t, uint8_t, uint8_t, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Meta_mkAppOptM(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
extern lean_object* l_Lean_instInhabitedExpr;
lean_object* l_Lean_Meta_PProdN_genMk___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__0 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Order"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__1 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "CCPO"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__2 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 35, 8, 63, 189, 207, 68, 204)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__3 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__3_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "CompleteLattice"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__4 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__4_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__5 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__5_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "mkInstPiOfInstForall: unexpected type of "};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__6 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__6_value;
static lean_once_cell_t l_Lean_Meta_mkInstPiOfInstForall___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__7;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "instCompleteLatticePi"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__8 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__8_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__9_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__8_value),LEAN_SCALAR_PTR_LITERAL(216, 67, 57, 247, 147, 127, 99, 32)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__9 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__9_value;
static const lean_string_object l_Lean_Meta_mkInstPiOfInstForall___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "instCCPOPi"};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__10 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__10_value;
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstPiOfInstForall___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__11_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__10_value),LEAN_SCALAR_PTR_LITERAL(202, 4, 22, 67, 25, 201, 243, 223)}};
static const lean_object* l_Lean_Meta_mkInstPiOfInstForall___closed__11 = (const lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__11_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkFixOfMonFun___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "mkFixOfMonFun: unexpected type of "};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__0 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__0_value;
static lean_once_cell_t l_Lean_Meta_mkFixOfMonFun___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkFixOfMonFun___closed__1;
static const lean_string_object l_Lean_Meta_mkFixOfMonFun___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "lfp_monotone"};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__2 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__2_value;
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__2_value),LEAN_SCALAR_PTR_LITERAL(226, 115, 213, 20, 156, 86, 56, 31)}};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__3 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__3_value;
static const lean_string_object l_Lean_Meta_mkFixOfMonFun___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "fix"};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__4 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__4_value;
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkFixOfMonFun___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__5_value_aux_1),((lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__4_value),LEAN_SCALAR_PTR_LITERAL(18, 104, 23, 57, 110, 104, 99, 16)}};
static const lean_object* l_Lean_Meta_mkFixOfMonFun___closed__5 = (const lean_object*)&l_Lean_Meta_mkFixOfMonFun___closed__5_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_toPartialOrder___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "getUnderlyingOrder: unexpected type of "};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__0 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__0_value;
static lean_once_cell_t l_Lean_Meta_toPartialOrder___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_toPartialOrder___closed__1;
static const lean_string_object l_Lean_Meta_toPartialOrder___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "toPartialOrder"};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__2 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__2_value;
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__4_value),LEAN_SCALAR_PTR_LITERAL(239, 140, 127, 117, 148, 144, 166, 107)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_toPartialOrder___closed__2_value),LEAN_SCALAR_PTR_LITERAL(13, 4, 43, 255, 98, 225, 163, 244)}};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__3 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__3_value;
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__2_value),LEAN_SCALAR_PTR_LITERAL(19, 35, 8, 63, 189, 207, 68, 204)}};
static const lean_ctor_object l_Lean_Meta_toPartialOrder___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value_aux_2),((lean_object*)&l_Lean_Meta_toPartialOrder___closed__2_value),LEAN_SCALAR_PTR_LITERAL(201, 24, 213, 158, 62, 23, 165, 45)}};
static const lean_object* l_Lean_Meta_toPartialOrder___closed__4 = (const lean_object*)&l_Lean_Meta_toPartialOrder___closed__4_value;
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInstCCPOPProd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "instCCPOPProd"};
static const lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__0 = (const lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstCCPOPProd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(193, 223, 146, 139, 208, 109, 106, 240)}};
static const lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__1 = (const lean_object*)&l_Lean_Meta_mkInstCCPOPProd___closed__1_value;
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__2;
static lean_once_cell_t l_Lean_Meta_mkInstCCPOPProd___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkInstCCPOPProd___closed__3;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "instCompleteLatticePProd"};
static const lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___closed__0 = (const lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_value;
static const lean_ctor_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_0),((lean_object*)&l_Lean_Meta_mkInstPiOfInstForall___closed__1_value),LEAN_SCALAR_PTR_LITERAL(47, 93, 74, 241, 117, 210, 202, 6)}};
static const lean_ctor_object l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value_aux_1),((lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__0_value),LEAN_SCALAR_PTR_LITERAL(244, 129, 138, 58, 147, 185, 15, 195)}};
static const lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___closed__1 = (const lean_object*)&l_Lean_Meta_mkInstCompleteLatticePProd___closed__1_value;
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(uint8_t, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object l_Lean_Meta_mkPackedPPRodInstance___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkInstCompleteLatticePProd___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__0 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__0_value;
static const lean_closure_object l_Lean_Meta_mkPackedPPRodInstance___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Lean_Meta_mkInstCCPOPProd___boxed, .m_arity = 7, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__1 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__1_value;
static const lean_string_object l_Lean_Meta_mkPackedPPRodInstance___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "mkPackedPPRoodInstance: unexpected types "};
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__2 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__2_value;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__3;
static const lean_string_object l_Lean_Meta_mkPackedPPRodInstance___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " of "};
static const lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__4 = (const lean_object*)&l_Lean_Meta_mkPackedPPRodInstance___closed__4_value;
static lean_once_cell_t l_Lean_Meta_mkPackedPPRodInstance___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_mkPackedPPRodInstance___closed__5;
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(lean_object* v_msgData_1_, lean_object* v___y_2_, lean_object* v___y_3_, lean_object* v___y_4_, lean_object* v___y_5_){
_start:
{
lean_object* v___x_7_; lean_object* v_env_8_; uint8_t v___x_9_; lean_object* v_env_10_; lean_object* v___x_11_; lean_object* v_toCold_12_; lean_object* v_mctx_13_; lean_object* v_lctx_14_; lean_object* v_options_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; 
v___x_7_ = lean_st_ref_get(v___y_5_);
v_env_8_ = lean_ctor_get(v___x_7_, 0);
lean_inc_ref(v_env_8_);
lean_dec(v___x_7_);
v___x_9_ = 0;
v_env_10_ = l_Lean_Environment_setRecordingDeps(v_env_8_, v___x_9_);
v___x_11_ = lean_st_ref_get(v___y_3_);
v_toCold_12_ = lean_ctor_get(v___y_4_, 0);
v_mctx_13_ = lean_ctor_get(v___x_11_, 0);
lean_inc_ref(v_mctx_13_);
lean_dec(v___x_11_);
v_lctx_14_ = lean_ctor_get(v___y_2_, 2);
v_options_15_ = lean_ctor_get(v_toCold_12_, 2);
lean_inc_ref(v_options_15_);
lean_inc_ref(v_lctx_14_);
v___x_16_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_16_, 0, v_env_10_);
lean_ctor_set(v___x_16_, 1, v_mctx_13_);
lean_ctor_set(v___x_16_, 2, v_lctx_14_);
lean_ctor_set(v___x_16_, 3, v_options_15_);
v___x_17_ = lean_alloc_ctor(3, 2, 0);
lean_ctor_set(v___x_17_, 0, v___x_16_);
lean_ctor_set(v___x_17_, 1, v_msgData_1_);
v___x_18_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_18_, 0, v___x_17_);
return v___x_18_;
}
}
LEAN_EXPORT lean_object* l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0___boxed(lean_object* v_msgData_19_, lean_object* v___y_20_, lean_object* v___y_21_, lean_object* v___y_22_, lean_object* v___y_23_, lean_object* v___y_24_){
_start:
{
lean_object* v_res_25_; 
v_res_25_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(v_msgData_19_, v___y_20_, v___y_21_, v___y_22_, v___y_23_);
lean_dec(v___y_23_);
lean_dec_ref(v___y_22_);
lean_dec(v___y_21_);
lean_dec_ref(v___y_20_);
return v_res_25_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(lean_object* v_msg_26_, lean_object* v___y_27_, lean_object* v___y_28_, lean_object* v___y_29_, lean_object* v___y_30_){
_start:
{
lean_object* v_ref_32_; lean_object* v___x_33_; lean_object* v_a_34_; lean_object* v___x_36_; uint8_t v_isShared_37_; uint8_t v_isSharedCheck_42_; 
v_ref_32_ = lean_ctor_get(v___y_29_, 2);
v___x_33_ = l_Lean_addMessageContextFull___at___00Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0_spec__0(v_msg_26_, v___y_27_, v___y_28_, v___y_29_, v___y_30_);
v_a_34_ = lean_ctor_get(v___x_33_, 0);
v_isSharedCheck_42_ = !lean_is_exclusive(v___x_33_);
if (v_isSharedCheck_42_ == 0)
{
v___x_36_ = v___x_33_;
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
else
{
lean_inc(v_a_34_);
lean_dec(v___x_33_);
v___x_36_ = lean_box(0);
v_isShared_37_ = v_isSharedCheck_42_;
goto v_resetjp_35_;
}
v_resetjp_35_:
{
lean_object* v___x_38_; lean_object* v___x_40_; 
lean_inc(v_ref_32_);
v___x_38_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_38_, 0, v_ref_32_);
lean_ctor_set(v___x_38_, 1, v_a_34_);
if (v_isShared_37_ == 0)
{
lean_ctor_set_tag(v___x_36_, 1);
lean_ctor_set(v___x_36_, 0, v___x_38_);
v___x_40_ = v___x_36_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg___boxed(lean_object* v_msg_43_, lean_object* v___y_44_, lean_object* v___y_45_, lean_object* v___y_46_, lean_object* v___y_47_, lean_object* v___y_48_){
_start:
{
lean_object* v_res_49_; 
v_res_49_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v_msg_43_, v___y_44_, v___y_45_, v___y_46_, v___y_47_);
lean_dec(v___y_47_);
lean_dec_ref(v___y_46_);
lean_dec(v___y_45_);
lean_dec_ref(v___y_44_);
return v_res_49_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstPiOfInstForall___closed__7(void){
_start:
{
lean_object* v___x_63_; lean_object* v___x_64_; 
v___x_63_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__6));
v___x_64_ = l_Lean_stringToMessageData(v___x_63_);
return v___x_64_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall(lean_object* v_x_75_, lean_object* v_inst_76_, lean_object* v_a_77_, lean_object* v_a_78_, lean_object* v_a_79_, lean_object* v_a_80_){
_start:
{
lean_object* v___x_82_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_inst_76_);
v___x_82_ = lean_infer_type(v_inst_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_82_) == 0)
{
lean_object* v_a_83_; lean_object* v___x_84_; uint8_t v___x_85_; 
v_a_83_ = lean_ctor_get(v___x_82_, 0);
lean_inc(v_a_83_);
lean_dec_ref_known(v___x_82_, 1);
v___x_84_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_85_ = l_Lean_Expr_isAppOf(v_a_83_, v___x_84_);
lean_dec(v_a_83_);
if (v___x_85_ == 0)
{
lean_object* v___x_86_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_inst_76_);
v___x_86_ = lean_infer_type(v_inst_76_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_86_) == 0)
{
lean_object* v_a_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v___x_88_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_89_ = l_Lean_Expr_isAppOf(v_a_87_, v___x_88_);
lean_dec(v_a_87_);
if (v___x_89_ == 0)
{
lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; 
lean_dec_ref(v_x_75_);
v___x_90_ = lean_obj_once(&l_Lean_Meta_mkInstPiOfInstForall___closed__7, &l_Lean_Meta_mkInstPiOfInstForall___closed__7_once, _init_l_Lean_Meta_mkInstPiOfInstForall___closed__7);
v___x_91_ = l_Lean_MessageData_ofExpr(v_inst_76_);
v___x_92_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_92_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
return v___x_93_;
}
else
{
lean_object* v___x_94_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_x_75_);
v___x_94_ = lean_infer_type(v_x_75_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_94_) == 0)
{
lean_object* v_a_95_; lean_object* v___x_97_; uint8_t v_isShared_98_; uint8_t v_isSharedCheck_123_; 
v_a_95_ = lean_ctor_get(v___x_94_, 0);
v_isSharedCheck_123_ = !lean_is_exclusive(v___x_94_);
if (v_isSharedCheck_123_ == 0)
{
v___x_97_ = v___x_94_;
v_isShared_98_ = v_isSharedCheck_123_;
goto v_resetjp_96_;
}
else
{
lean_inc(v_a_95_);
lean_dec(v___x_94_);
v___x_97_ = lean_box(0);
v_isShared_98_ = v_isSharedCheck_123_;
goto v_resetjp_96_;
}
v_resetjp_96_:
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; uint8_t v___x_102_; lean_object* v___x_103_; 
v___x_99_ = lean_unsigned_to_nat(1u);
v___x_100_ = lean_mk_empty_array_with_capacity(v___x_99_);
v___x_101_ = lean_array_push(v___x_100_, v_x_75_);
v___x_102_ = 1;
v___x_103_ = l_Lean_Meta_mkLambdaFVars(v___x_101_, v_inst_76_, v___x_85_, v___x_89_, v___x_85_, v___x_89_, v___x_102_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
lean_dec_ref(v___x_101_);
if (lean_obj_tag(v___x_103_) == 0)
{
lean_object* v_a_104_; lean_object* v___x_106_; uint8_t v_isShared_107_; uint8_t v_isSharedCheck_122_; 
v_a_104_ = lean_ctor_get(v___x_103_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_103_);
if (v_isSharedCheck_122_ == 0)
{
v___x_106_ = v___x_103_;
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
else
{
lean_inc(v_a_104_);
lean_dec(v___x_103_);
v___x_106_ = lean_box(0);
v_isShared_107_ = v_isSharedCheck_122_;
goto v_resetjp_105_;
}
v_resetjp_105_:
{
lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_108_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__9));
if (v_isShared_107_ == 0)
{
lean_ctor_set_tag(v___x_106_, 1);
lean_ctor_set(v___x_106_, 0, v_a_95_);
v___x_110_ = v___x_106_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_95_);
v___x_110_ = v_reuseFailAlloc_121_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
lean_object* v___x_111_; lean_object* v___x_113_; 
v___x_111_ = lean_box(0);
if (v_isShared_98_ == 0)
{
lean_ctor_set_tag(v___x_97_, 1);
lean_ctor_set(v___x_97_, 0, v_a_104_);
v___x_113_ = v___x_97_;
goto v_reusejp_112_;
}
else
{
lean_object* v_reuseFailAlloc_120_; 
v_reuseFailAlloc_120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_120_, 0, v_a_104_);
v___x_113_ = v_reuseFailAlloc_120_;
goto v_reusejp_112_;
}
v_reusejp_112_:
{
lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; 
v___x_114_ = lean_unsigned_to_nat(3u);
v___x_115_ = lean_mk_empty_array_with_capacity(v___x_114_);
v___x_116_ = lean_array_push(v___x_115_, v___x_110_);
v___x_117_ = lean_array_push(v___x_116_, v___x_111_);
v___x_118_ = lean_array_push(v___x_117_, v___x_113_);
v___x_119_ = l_Lean_Meta_mkAppOptM(v___x_108_, v___x_118_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
return v___x_119_;
}
}
}
}
else
{
lean_del_object(v___x_97_);
lean_dec(v_a_95_);
return v___x_103_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_94_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_86_;
}
}
else
{
lean_object* v___x_124_; 
lean_inc(v_a_80_);
lean_inc_ref(v_a_79_);
lean_inc(v_a_78_);
lean_inc_ref(v_a_77_);
lean_inc_ref(v_x_75_);
v___x_124_ = lean_infer_type(v_x_75_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
if (lean_obj_tag(v___x_124_) == 0)
{
lean_object* v_a_125_; lean_object* v___x_127_; uint8_t v_isShared_128_; uint8_t v_isSharedCheck_154_; 
v_a_125_ = lean_ctor_get(v___x_124_, 0);
v_isSharedCheck_154_ = !lean_is_exclusive(v___x_124_);
if (v_isSharedCheck_154_ == 0)
{
v___x_127_ = v___x_124_;
v_isShared_128_ = v_isSharedCheck_154_;
goto v_resetjp_126_;
}
else
{
lean_inc(v_a_125_);
lean_dec(v___x_124_);
v___x_127_ = lean_box(0);
v_isShared_128_ = v_isSharedCheck_154_;
goto v_resetjp_126_;
}
v_resetjp_126_:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; uint8_t v___x_132_; uint8_t v___x_133_; lean_object* v___x_134_; 
v___x_129_ = lean_unsigned_to_nat(1u);
v___x_130_ = lean_mk_empty_array_with_capacity(v___x_129_);
v___x_131_ = lean_array_push(v___x_130_, v_x_75_);
v___x_132_ = 0;
v___x_133_ = 1;
v___x_134_ = l_Lean_Meta_mkLambdaFVars(v___x_131_, v_inst_76_, v___x_132_, v___x_85_, v___x_132_, v___x_85_, v___x_133_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
lean_dec_ref(v___x_131_);
if (lean_obj_tag(v___x_134_) == 0)
{
lean_object* v_a_135_; lean_object* v___x_137_; uint8_t v_isShared_138_; uint8_t v_isSharedCheck_153_; 
v_a_135_ = lean_ctor_get(v___x_134_, 0);
v_isSharedCheck_153_ = !lean_is_exclusive(v___x_134_);
if (v_isSharedCheck_153_ == 0)
{
v___x_137_ = v___x_134_;
v_isShared_138_ = v_isSharedCheck_153_;
goto v_resetjp_136_;
}
else
{
lean_inc(v_a_135_);
lean_dec(v___x_134_);
v___x_137_ = lean_box(0);
v_isShared_138_ = v_isSharedCheck_153_;
goto v_resetjp_136_;
}
v_resetjp_136_:
{
lean_object* v___x_139_; lean_object* v___x_141_; 
v___x_139_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__11));
if (v_isShared_138_ == 0)
{
lean_ctor_set_tag(v___x_137_, 1);
lean_ctor_set(v___x_137_, 0, v_a_125_);
v___x_141_ = v___x_137_;
goto v_reusejp_140_;
}
else
{
lean_object* v_reuseFailAlloc_152_; 
v_reuseFailAlloc_152_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_152_, 0, v_a_125_);
v___x_141_ = v_reuseFailAlloc_152_;
goto v_reusejp_140_;
}
v_reusejp_140_:
{
lean_object* v___x_142_; lean_object* v___x_144_; 
v___x_142_ = lean_box(0);
if (v_isShared_128_ == 0)
{
lean_ctor_set_tag(v___x_127_, 1);
lean_ctor_set(v___x_127_, 0, v_a_135_);
v___x_144_ = v___x_127_;
goto v_reusejp_143_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_a_135_);
v___x_144_ = v_reuseFailAlloc_151_;
goto v_reusejp_143_;
}
v_reusejp_143_:
{
lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; 
v___x_145_ = lean_unsigned_to_nat(3u);
v___x_146_ = lean_mk_empty_array_with_capacity(v___x_145_);
v___x_147_ = lean_array_push(v___x_146_, v___x_141_);
v___x_148_ = lean_array_push(v___x_147_, v___x_142_);
v___x_149_ = lean_array_push(v___x_148_, v___x_144_);
v___x_150_ = l_Lean_Meta_mkAppOptM(v___x_139_, v___x_149_, v_a_77_, v_a_78_, v_a_79_, v_a_80_);
return v___x_150_;
}
}
}
}
else
{
lean_del_object(v___x_127_);
lean_dec(v_a_125_);
return v___x_134_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_124_;
}
}
}
else
{
lean_dec_ref(v_inst_76_);
lean_dec_ref(v_x_75_);
return v___x_82_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstForall___boxed(lean_object* v_x_155_, lean_object* v_inst_156_, lean_object* v_a_157_, lean_object* v_a_158_, lean_object* v_a_159_, lean_object* v_a_160_, lean_object* v_a_161_){
_start:
{
lean_object* v_res_162_; 
v_res_162_ = l_Lean_Meta_mkInstPiOfInstForall(v_x_155_, v_inst_156_, v_a_157_, v_a_158_, v_a_159_, v_a_160_);
lean_dec(v_a_160_);
lean_dec_ref(v_a_159_);
lean_dec(v_a_158_);
lean_dec_ref(v_a_157_);
return v_res_162_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(lean_object* v_00_u03b1_163_, lean_object* v_msg_164_, lean_object* v___y_165_, lean_object* v___y_166_, lean_object* v___y_167_, lean_object* v___y_168_){
_start:
{
lean_object* v___x_170_; 
v___x_170_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v_msg_164_, v___y_165_, v___y_166_, v___y_167_, v___y_168_);
return v___x_170_;
}
}
LEAN_EXPORT lean_object* l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___boxed(lean_object* v_00_u03b1_171_, lean_object* v_msg_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_, lean_object* v___y_176_, lean_object* v___y_177_){
_start:
{
lean_object* v_res_178_; 
v_res_178_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0(v_00_u03b1_171_, v_msg_172_, v___y_173_, v___y_174_, v___y_175_, v___y_176_);
lean_dec(v___y_176_);
lean_dec_ref(v___y_175_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_178_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(lean_object* v_as_179_, size_t v_sz_180_, size_t v_i_181_, lean_object* v_b_182_, lean_object* v___y_183_, lean_object* v___y_184_, lean_object* v___y_185_, lean_object* v___y_186_){
_start:
{
uint8_t v___x_188_; 
v___x_188_ = lean_usize_dec_lt(v_i_181_, v_sz_180_);
if (v___x_188_ == 0)
{
lean_object* v___x_189_; 
v___x_189_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_189_, 0, v_b_182_);
return v___x_189_;
}
else
{
lean_object* v_a_190_; lean_object* v___x_191_; 
v_a_190_ = lean_array_uget_borrowed(v_as_179_, v_i_181_);
lean_inc(v_a_190_);
v___x_191_ = l_Lean_Meta_mkInstPiOfInstForall(v_a_190_, v_b_182_, v___y_183_, v___y_184_, v___y_185_, v___y_186_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; size_t v___x_193_; size_t v___x_194_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc(v_a_192_);
lean_dec_ref_known(v___x_191_, 1);
v___x_193_ = ((size_t)1ULL);
v___x_194_ = lean_usize_add(v_i_181_, v___x_193_);
v_i_181_ = v___x_194_;
v_b_182_ = v_a_192_;
goto _start;
}
else
{
return v___x_191_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0___boxed(lean_object* v_as_196_, lean_object* v_sz_197_, lean_object* v_i_198_, lean_object* v_b_199_, lean_object* v___y_200_, lean_object* v___y_201_, lean_object* v___y_202_, lean_object* v___y_203_, lean_object* v___y_204_){
_start:
{
size_t v_sz_boxed_205_; size_t v_i_boxed_206_; lean_object* v_res_207_; 
v_sz_boxed_205_ = lean_unbox_usize(v_sz_197_);
lean_dec(v_sz_197_);
v_i_boxed_206_ = lean_unbox_usize(v_i_198_);
lean_dec(v_i_198_);
v_res_207_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(v_as_196_, v_sz_boxed_205_, v_i_boxed_206_, v_b_199_, v___y_200_, v___y_201_, v___y_202_, v___y_203_);
lean_dec(v___y_203_);
lean_dec_ref(v___y_202_);
lean_dec(v___y_201_);
lean_dec_ref(v___y_200_);
lean_dec_ref(v_as_196_);
return v_res_207_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall(lean_object* v_xs_208_, lean_object* v_inst_209_, lean_object* v_a_210_, lean_object* v_a_211_, lean_object* v_a_212_, lean_object* v_a_213_){
_start:
{
lean_object* v___x_215_; size_t v_sz_216_; size_t v___x_217_; lean_object* v___x_218_; 
v___x_215_ = l_Array_reverse___redArg(v_xs_208_);
v_sz_216_ = lean_array_size(v___x_215_);
v___x_217_ = ((size_t)0ULL);
v___x_218_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Meta_mkInstPiOfInstsForall_spec__0(v___x_215_, v_sz_216_, v___x_217_, v_inst_209_, v_a_210_, v_a_211_, v_a_212_, v_a_213_);
lean_dec_ref(v___x_215_);
return v___x_218_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstPiOfInstsForall___boxed(lean_object* v_xs_219_, lean_object* v_inst_220_, lean_object* v_a_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
lean_object* v_res_226_; 
v_res_226_ = l_Lean_Meta_mkInstPiOfInstsForall(v_xs_219_, v_inst_220_, v_a_221_, v_a_222_, v_a_223_, v_a_224_);
lean_dec(v_a_224_);
lean_dec_ref(v_a_223_);
lean_dec(v_a_222_);
lean_dec_ref(v_a_221_);
return v_res_226_;
}
}
static lean_object* _init_l_Lean_Meta_mkFixOfMonFun___closed__1(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = ((lean_object*)(l_Lean_Meta_mkFixOfMonFun___closed__0));
v___x_229_ = l_Lean_stringToMessageData(v___x_228_);
return v___x_229_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun(lean_object* v_packedType_240_, lean_object* v_packedInst_241_, lean_object* v_hmono_242_, lean_object* v_a_243_, lean_object* v_a_244_, lean_object* v_a_245_, lean_object* v_a_246_){
_start:
{
lean_object* v___x_248_; 
lean_inc(v_a_246_);
lean_inc_ref(v_a_245_);
lean_inc(v_a_244_);
lean_inc_ref(v_a_243_);
lean_inc_ref(v_packedInst_241_);
v___x_248_ = lean_infer_type(v_packedInst_241_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
if (lean_obj_tag(v___x_248_) == 0)
{
lean_object* v_a_249_; lean_object* v___x_251_; uint8_t v_isShared_252_; uint8_t v_isSharedCheck_297_; 
v_a_249_ = lean_ctor_get(v___x_248_, 0);
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_248_);
if (v_isSharedCheck_297_ == 0)
{
v___x_251_ = v___x_248_;
v_isShared_252_ = v_isSharedCheck_297_;
goto v_resetjp_250_;
}
else
{
lean_inc(v_a_249_);
lean_dec(v___x_248_);
v___x_251_ = lean_box(0);
v_isShared_252_ = v_isSharedCheck_297_;
goto v_resetjp_250_;
}
v_resetjp_250_:
{
lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_253_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_254_ = l_Lean_Expr_isAppOf(v_a_249_, v___x_253_);
lean_dec(v_a_249_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; 
lean_inc(v_a_246_);
lean_inc_ref(v_a_245_);
lean_inc(v_a_244_);
lean_inc_ref(v_a_243_);
lean_inc_ref(v_packedInst_241_);
v___x_255_ = lean_infer_type(v_packedInst_241_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
if (lean_obj_tag(v___x_255_) == 0)
{
lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_282_; 
v_a_256_ = lean_ctor_get(v___x_255_, 0);
v_isSharedCheck_282_ = !lean_is_exclusive(v___x_255_);
if (v_isSharedCheck_282_ == 0)
{
v___x_258_ = v___x_255_;
v_isShared_259_ = v_isSharedCheck_282_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_282_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_260_; uint8_t v___x_261_; 
v___x_260_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_261_ = l_Lean_Expr_isAppOf(v_a_256_, v___x_260_);
lean_dec(v_a_256_);
if (v___x_261_ == 0)
{
lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; lean_object* v___x_265_; 
lean_del_object(v___x_258_);
lean_del_object(v___x_251_);
lean_dec_ref(v_hmono_242_);
lean_dec_ref(v_packedType_240_);
v___x_262_ = lean_obj_once(&l_Lean_Meta_mkFixOfMonFun___closed__1, &l_Lean_Meta_mkFixOfMonFun___closed__1_once, _init_l_Lean_Meta_mkFixOfMonFun___closed__1);
v___x_263_ = l_Lean_MessageData_ofExpr(v_packedInst_241_);
v___x_264_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_264_, 0, v___x_262_);
lean_ctor_set(v___x_264_, 1, v___x_263_);
v___x_265_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_264_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
return v___x_265_;
}
else
{
lean_object* v___x_266_; lean_object* v___x_268_; 
v___x_266_ = ((lean_object*)(l_Lean_Meta_mkFixOfMonFun___closed__3));
if (v_isShared_259_ == 0)
{
lean_ctor_set_tag(v___x_258_, 1);
lean_ctor_set(v___x_258_, 0, v_packedType_240_);
v___x_268_ = v___x_258_;
goto v_reusejp_267_;
}
else
{
lean_object* v_reuseFailAlloc_281_; 
v_reuseFailAlloc_281_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_281_, 0, v_packedType_240_);
v___x_268_ = v_reuseFailAlloc_281_;
goto v_reusejp_267_;
}
v_reusejp_267_:
{
lean_object* v___x_270_; 
if (v_isShared_252_ == 0)
{
lean_ctor_set_tag(v___x_251_, 1);
lean_ctor_set(v___x_251_, 0, v_packedInst_241_);
v___x_270_ = v___x_251_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_280_; 
v_reuseFailAlloc_280_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_280_, 0, v_packedInst_241_);
v___x_270_ = v_reuseFailAlloc_280_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_271_ = lean_box(0);
v___x_272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_272_, 0, v_hmono_242_);
v___x_273_ = lean_unsigned_to_nat(4u);
v___x_274_ = lean_mk_empty_array_with_capacity(v___x_273_);
v___x_275_ = lean_array_push(v___x_274_, v___x_268_);
v___x_276_ = lean_array_push(v___x_275_, v___x_270_);
v___x_277_ = lean_array_push(v___x_276_, v___x_271_);
v___x_278_ = lean_array_push(v___x_277_, v___x_272_);
v___x_279_ = l_Lean_Meta_mkAppOptM(v___x_266_, v___x_278_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
return v___x_279_;
}
}
}
}
}
else
{
lean_del_object(v___x_251_);
lean_dec_ref(v_hmono_242_);
lean_dec_ref(v_packedInst_241_);
lean_dec_ref(v_packedType_240_);
return v___x_255_;
}
}
else
{
lean_object* v___x_283_; lean_object* v___x_285_; 
v___x_283_ = ((lean_object*)(l_Lean_Meta_mkFixOfMonFun___closed__5));
if (v_isShared_252_ == 0)
{
lean_ctor_set_tag(v___x_251_, 1);
lean_ctor_set(v___x_251_, 0, v_packedType_240_);
v___x_285_ = v___x_251_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v_packedType_240_);
v___x_285_ = v_reuseFailAlloc_296_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; 
v___x_286_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_286_, 0, v_packedInst_241_);
v___x_287_ = lean_box(0);
v___x_288_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_288_, 0, v_hmono_242_);
v___x_289_ = lean_unsigned_to_nat(4u);
v___x_290_ = lean_mk_empty_array_with_capacity(v___x_289_);
v___x_291_ = lean_array_push(v___x_290_, v___x_285_);
v___x_292_ = lean_array_push(v___x_291_, v___x_286_);
v___x_293_ = lean_array_push(v___x_292_, v___x_287_);
v___x_294_ = lean_array_push(v___x_293_, v___x_288_);
v___x_295_ = l_Lean_Meta_mkAppOptM(v___x_283_, v___x_294_, v_a_243_, v_a_244_, v_a_245_, v_a_246_);
return v___x_295_;
}
}
}
}
else
{
lean_dec_ref(v_hmono_242_);
lean_dec_ref(v_packedInst_241_);
lean_dec_ref(v_packedType_240_);
return v___x_248_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkFixOfMonFun___boxed(lean_object* v_packedType_298_, lean_object* v_packedInst_299_, lean_object* v_hmono_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_, lean_object* v_a_304_, lean_object* v_a_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = l_Lean_Meta_mkFixOfMonFun(v_packedType_298_, v_packedInst_299_, v_hmono_300_, v_a_301_, v_a_302_, v_a_303_, v_a_304_);
lean_dec(v_a_304_);
lean_dec_ref(v_a_303_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
return v_res_306_;
}
}
static lean_object* _init_l_Lean_Meta_toPartialOrder___closed__1(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = ((lean_object*)(l_Lean_Meta_toPartialOrder___closed__0));
v___x_309_ = l_Lean_stringToMessageData(v___x_308_);
return v___x_309_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder(lean_object* v_packedInst_321_, lean_object* v_type_322_, lean_object* v_a_323_, lean_object* v_a_324_, lean_object* v_a_325_, lean_object* v_a_326_){
_start:
{
lean_object* v___x_328_; 
lean_inc(v_a_326_);
lean_inc_ref(v_a_325_);
lean_inc(v_a_324_);
lean_inc_ref(v_a_323_);
lean_inc_ref(v_packedInst_321_);
v___x_328_ = lean_infer_type(v_packedInst_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_328_) == 0)
{
lean_object* v_a_329_; lean_object* v___x_331_; uint8_t v_isShared_332_; uint8_t v_isSharedCheck_365_; 
v_a_329_ = lean_ctor_get(v___x_328_, 0);
v_isSharedCheck_365_ = !lean_is_exclusive(v___x_328_);
if (v_isSharedCheck_365_ == 0)
{
v___x_331_ = v___x_328_;
v_isShared_332_ = v_isSharedCheck_365_;
goto v_resetjp_330_;
}
else
{
lean_inc(v_a_329_);
lean_dec(v___x_328_);
v___x_331_ = lean_box(0);
v_isShared_332_ = v_isSharedCheck_365_;
goto v_resetjp_330_;
}
v_resetjp_330_:
{
lean_object* v___x_333_; uint8_t v___x_334_; 
v___x_333_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_334_ = l_Lean_Expr_isAppOf(v_a_329_, v___x_333_);
lean_dec(v_a_329_);
if (v___x_334_ == 0)
{
lean_object* v___x_335_; 
lean_del_object(v___x_331_);
lean_inc(v_a_326_);
lean_inc_ref(v_a_325_);
lean_inc(v_a_324_);
lean_inc_ref(v_a_323_);
lean_inc_ref(v_packedInst_321_);
v___x_335_ = lean_infer_type(v_packedInst_321_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
if (lean_obj_tag(v___x_335_) == 0)
{
lean_object* v_a_336_; lean_object* v___x_338_; uint8_t v_isShared_339_; uint8_t v_isSharedCheck_355_; 
v_a_336_ = lean_ctor_get(v___x_335_, 0);
v_isSharedCheck_355_ = !lean_is_exclusive(v___x_335_);
if (v_isSharedCheck_355_ == 0)
{
v___x_338_ = v___x_335_;
v_isShared_339_ = v_isSharedCheck_355_;
goto v_resetjp_337_;
}
else
{
lean_inc(v_a_336_);
lean_dec(v___x_335_);
v___x_338_ = lean_box(0);
v_isShared_339_ = v_isSharedCheck_355_;
goto v_resetjp_337_;
}
v_resetjp_337_:
{
lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_340_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_341_ = l_Lean_Expr_isAppOf(v_a_336_, v___x_340_);
lean_dec(v_a_336_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; 
lean_del_object(v___x_338_);
lean_dec(v_type_322_);
v___x_342_ = lean_obj_once(&l_Lean_Meta_toPartialOrder___closed__1, &l_Lean_Meta_toPartialOrder___closed__1_once, _init_l_Lean_Meta_toPartialOrder___closed__1);
v___x_343_ = l_Lean_MessageData_ofExpr(v_packedInst_321_);
v___x_344_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_344_, 0, v___x_342_);
lean_ctor_set(v___x_344_, 1, v___x_343_);
v___x_345_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_344_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_345_;
}
else
{
lean_object* v___x_346_; lean_object* v___x_348_; 
v___x_346_ = ((lean_object*)(l_Lean_Meta_toPartialOrder___closed__3));
if (v_isShared_339_ == 0)
{
lean_ctor_set_tag(v___x_338_, 1);
lean_ctor_set(v___x_338_, 0, v_packedInst_321_);
v___x_348_ = v___x_338_;
goto v_reusejp_347_;
}
else
{
lean_object* v_reuseFailAlloc_354_; 
v_reuseFailAlloc_354_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_354_, 0, v_packedInst_321_);
v___x_348_ = v_reuseFailAlloc_354_;
goto v_reusejp_347_;
}
v_reusejp_347_:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; lean_object* v___x_352_; lean_object* v___x_353_; 
v___x_349_ = lean_unsigned_to_nat(2u);
v___x_350_ = lean_mk_empty_array_with_capacity(v___x_349_);
v___x_351_ = lean_array_push(v___x_350_, v_type_322_);
v___x_352_ = lean_array_push(v___x_351_, v___x_348_);
v___x_353_ = l_Lean_Meta_mkAppOptM(v___x_346_, v___x_352_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_353_;
}
}
}
}
else
{
lean_dec(v_type_322_);
lean_dec_ref(v_packedInst_321_);
return v___x_335_;
}
}
else
{
lean_object* v___x_356_; lean_object* v___x_358_; 
v___x_356_ = ((lean_object*)(l_Lean_Meta_toPartialOrder___closed__4));
if (v_isShared_332_ == 0)
{
lean_ctor_set_tag(v___x_331_, 1);
lean_ctor_set(v___x_331_, 0, v_packedInst_321_);
v___x_358_ = v___x_331_;
goto v_reusejp_357_;
}
else
{
lean_object* v_reuseFailAlloc_364_; 
v_reuseFailAlloc_364_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_364_, 0, v_packedInst_321_);
v___x_358_ = v_reuseFailAlloc_364_;
goto v_reusejp_357_;
}
v_reusejp_357_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; 
v___x_359_ = lean_unsigned_to_nat(2u);
v___x_360_ = lean_mk_empty_array_with_capacity(v___x_359_);
v___x_361_ = lean_array_push(v___x_360_, v_type_322_);
v___x_362_ = lean_array_push(v___x_361_, v___x_358_);
v___x_363_ = l_Lean_Meta_mkAppOptM(v___x_356_, v___x_362_, v_a_323_, v_a_324_, v_a_325_, v_a_326_);
return v___x_363_;
}
}
}
}
else
{
lean_dec(v_type_322_);
lean_dec_ref(v_packedInst_321_);
return v___x_328_;
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_toPartialOrder___boxed(lean_object* v_packedInst_366_, lean_object* v_type_367_, lean_object* v_a_368_, lean_object* v_a_369_, lean_object* v_a_370_, lean_object* v_a_371_, lean_object* v_a_372_){
_start:
{
lean_object* v_res_373_; 
v_res_373_ = l_Lean_Meta_toPartialOrder(v_packedInst_366_, v_type_367_, v_a_368_, v_a_369_, v_a_370_, v_a_371_);
lean_dec(v_a_371_);
lean_dec_ref(v_a_370_);
lean_dec(v_a_369_);
lean_dec_ref(v_a_368_);
return v_res_373_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__2(void){
_start:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; 
v___x_379_ = lean_box(0);
v___x_380_ = lean_unsigned_to_nat(4u);
v___x_381_ = lean_mk_empty_array_with_capacity(v___x_380_);
v___x_382_ = lean_array_push(v___x_381_, v___x_379_);
return v___x_382_;
}
}
static lean_object* _init_l_Lean_Meta_mkInstCCPOPProd___closed__3(void){
_start:
{
lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_383_ = lean_box(0);
v___x_384_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__2, &l_Lean_Meta_mkInstCCPOPProd___closed__2_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__2);
v___x_385_ = lean_array_push(v___x_384_, v___x_383_);
return v___x_385_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd(lean_object* v_inst_u2081_386_, lean_object* v_inst_u2082_387_, lean_object* v_a_388_, lean_object* v_a_389_, lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; 
v___x_393_ = ((lean_object*)(l_Lean_Meta_mkInstCCPOPProd___closed__1));
v___x_394_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_394_, 0, v_inst_u2081_386_);
v___x_395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_395_, 0, v_inst_u2082_387_);
v___x_396_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__3, &l_Lean_Meta_mkInstCCPOPProd___closed__3_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__3);
v___x_397_ = lean_array_push(v___x_396_, v___x_394_);
v___x_398_ = lean_array_push(v___x_397_, v___x_395_);
v___x_399_ = l_Lean_Meta_mkAppOptM(v___x_393_, v___x_398_, v_a_388_, v_a_389_, v_a_390_, v_a_391_);
return v___x_399_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCCPOPProd___boxed(lean_object* v_inst_u2081_400_, lean_object* v_inst_u2082_401_, lean_object* v_a_402_, lean_object* v_a_403_, lean_object* v_a_404_, lean_object* v_a_405_, lean_object* v_a_406_){
_start:
{
lean_object* v_res_407_; 
v_res_407_ = l_Lean_Meta_mkInstCCPOPProd(v_inst_u2081_400_, v_inst_u2082_401_, v_a_402_, v_a_403_, v_a_404_, v_a_405_);
lean_dec(v_a_405_);
lean_dec_ref(v_a_404_);
lean_dec(v_a_403_);
lean_dec_ref(v_a_402_);
return v_res_407_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd(lean_object* v_inst_u2081_413_, lean_object* v_inst_u2082_414_, lean_object* v_a_415_, lean_object* v_a_416_, lean_object* v_a_417_, lean_object* v_a_418_){
_start:
{
lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_420_ = ((lean_object*)(l_Lean_Meta_mkInstCompleteLatticePProd___closed__1));
v___x_421_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_421_, 0, v_inst_u2081_413_);
v___x_422_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_422_, 0, v_inst_u2082_414_);
v___x_423_ = lean_obj_once(&l_Lean_Meta_mkInstCCPOPProd___closed__3, &l_Lean_Meta_mkInstCCPOPProd___closed__3_once, _init_l_Lean_Meta_mkInstCCPOPProd___closed__3);
v___x_424_ = lean_array_push(v___x_423_, v___x_421_);
v___x_425_ = lean_array_push(v___x_424_, v___x_422_);
v___x_426_ = l_Lean_Meta_mkAppOptM(v___x_420_, v___x_425_, v_a_415_, v_a_416_, v_a_417_, v_a_418_);
return v___x_426_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkInstCompleteLatticePProd___boxed(lean_object* v_inst_u2081_427_, lean_object* v_inst_u2082_428_, lean_object* v_a_429_, lean_object* v_a_430_, lean_object* v_a_431_, lean_object* v_a_432_, lean_object* v_a_433_){
_start:
{
lean_object* v_res_434_; 
v_res_434_ = l_Lean_Meta_mkInstCompleteLatticePProd(v_inst_u2081_427_, v_inst_u2082_428_, v_a_429_, v_a_430_, v_a_431_, v_a_432_);
lean_dec(v_a_432_);
lean_dec_ref(v_a_431_);
lean_dec(v_a_430_);
lean_dec_ref(v_a_429_);
return v_res_434_;
}
}
LEAN_EXPORT lean_object* l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(lean_object* v_a_435_, lean_object* v_a_436_){
_start:
{
if (lean_obj_tag(v_a_435_) == 0)
{
lean_object* v___x_437_; 
v___x_437_ = l_List_reverse___redArg(v_a_436_);
return v___x_437_;
}
else
{
lean_object* v_head_438_; lean_object* v_tail_439_; lean_object* v___x_441_; uint8_t v_isShared_442_; uint8_t v_isSharedCheck_448_; 
v_head_438_ = lean_ctor_get(v_a_435_, 0);
v_tail_439_ = lean_ctor_get(v_a_435_, 1);
v_isSharedCheck_448_ = !lean_is_exclusive(v_a_435_);
if (v_isSharedCheck_448_ == 0)
{
v___x_441_ = v_a_435_;
v_isShared_442_ = v_isSharedCheck_448_;
goto v_resetjp_440_;
}
else
{
lean_inc(v_tail_439_);
lean_inc(v_head_438_);
lean_dec(v_a_435_);
v___x_441_ = lean_box(0);
v_isShared_442_ = v_isSharedCheck_448_;
goto v_resetjp_440_;
}
v_resetjp_440_:
{
lean_object* v___x_443_; lean_object* v___x_445_; 
v___x_443_ = l_Lean_MessageData_ofExpr(v_head_438_);
if (v_isShared_442_ == 0)
{
lean_ctor_set(v___x_441_, 1, v_a_436_);
lean_ctor_set(v___x_441_, 0, v___x_443_);
v___x_445_ = v___x_441_;
goto v_reusejp_444_;
}
else
{
lean_object* v_reuseFailAlloc_447_; 
v_reuseFailAlloc_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_447_, 0, v___x_443_);
lean_ctor_set(v_reuseFailAlloc_447_, 1, v_a_436_);
v___x_445_ = v_reuseFailAlloc_447_;
goto v_reusejp_444_;
}
v_reusejp_444_:
{
v_a_435_ = v_tail_439_;
v_a_436_ = v___x_445_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(size_t v_sz_449_, size_t v_i_450_, lean_object* v_bs_451_, lean_object* v___y_452_, lean_object* v___y_453_, lean_object* v___y_454_, lean_object* v___y_455_){
_start:
{
uint8_t v___x_457_; 
v___x_457_ = lean_usize_dec_lt(v_i_450_, v_sz_449_);
if (v___x_457_ == 0)
{
lean_object* v___x_458_; 
v___x_458_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_458_, 0, v_bs_451_);
return v___x_458_;
}
else
{
lean_object* v_v_459_; lean_object* v___x_460_; lean_object* v_bs_x27_461_; lean_object* v___x_462_; 
v_v_459_ = lean_array_uget(v_bs_451_, v_i_450_);
v___x_460_ = lean_unsigned_to_nat(0u);
v_bs_x27_461_ = lean_array_uset(v_bs_451_, v_i_450_, v___x_460_);
lean_inc(v___y_455_);
lean_inc_ref(v___y_454_);
lean_inc(v___y_453_);
lean_inc_ref(v___y_452_);
v___x_462_ = lean_infer_type(v_v_459_, v___y_452_, v___y_453_, v___y_454_, v___y_455_);
if (lean_obj_tag(v___x_462_) == 0)
{
lean_object* v_a_463_; size_t v___x_464_; size_t v___x_465_; lean_object* v___x_466_; 
v_a_463_ = lean_ctor_get(v___x_462_, 0);
lean_inc(v_a_463_);
lean_dec_ref_known(v___x_462_, 1);
v___x_464_ = ((size_t)1ULL);
v___x_465_ = lean_usize_add(v_i_450_, v___x_464_);
v___x_466_ = lean_array_uset(v_bs_x27_461_, v_i_450_, v_a_463_);
v_i_450_ = v___x_465_;
v_bs_451_ = v___x_466_;
goto _start;
}
else
{
lean_object* v_a_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_475_; 
lean_dec_ref(v_bs_x27_461_);
v_a_468_ = lean_ctor_get(v___x_462_, 0);
v_isSharedCheck_475_ = !lean_is_exclusive(v___x_462_);
if (v_isSharedCheck_475_ == 0)
{
v___x_470_ = v___x_462_;
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_a_468_);
lean_dec(v___x_462_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_475_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v___x_473_; 
if (v_isShared_471_ == 0)
{
v___x_473_ = v___x_470_;
goto v_reusejp_472_;
}
else
{
lean_object* v_reuseFailAlloc_474_; 
v_reuseFailAlloc_474_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_474_, 0, v_a_468_);
v___x_473_ = v_reuseFailAlloc_474_;
goto v_reusejp_472_;
}
v_reusejp_472_:
{
return v___x_473_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0___boxed(lean_object* v_sz_476_, lean_object* v_i_477_, lean_object* v_bs_478_, lean_object* v___y_479_, lean_object* v___y_480_, lean_object* v___y_481_, lean_object* v___y_482_, lean_object* v___y_483_){
_start:
{
size_t v_sz_boxed_484_; size_t v_i_boxed_485_; lean_object* v_res_486_; 
v_sz_boxed_484_ = lean_unbox_usize(v_sz_476_);
lean_dec(v_sz_476_);
v_i_boxed_485_ = lean_unbox_usize(v_i_477_);
lean_dec(v_i_477_);
v_res_486_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(v_sz_boxed_484_, v_i_boxed_485_, v_bs_478_, v___y_479_, v___y_480_, v___y_481_, v___y_482_);
lean_dec(v___y_482_);
lean_dec_ref(v___y_481_);
lean_dec(v___y_480_);
lean_dec_ref(v___y_479_);
return v_res_486_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(lean_object* v_as_487_, size_t v_i_488_, size_t v_stop_489_){
_start:
{
uint8_t v___x_490_; 
v___x_490_ = lean_usize_dec_eq(v_i_488_, v_stop_489_);
if (v___x_490_ == 0)
{
lean_object* v___x_491_; lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_491_ = lean_array_uget_borrowed(v_as_487_, v_i_488_);
v___x_492_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__3));
v___x_493_ = l_Lean_Expr_isAppOf(v___x_491_, v___x_492_);
if (v___x_493_ == 0)
{
uint8_t v___x_494_; 
v___x_494_ = 1;
return v___x_494_;
}
else
{
size_t v___x_495_; size_t v___x_496_; 
v___x_495_ = ((size_t)1ULL);
v___x_496_ = lean_usize_add(v_i_488_, v___x_495_);
v_i_488_ = v___x_496_;
goto _start;
}
}
else
{
uint8_t v___x_498_; 
v___x_498_ = 0;
return v___x_498_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1___boxed(lean_object* v_as_499_, lean_object* v_i_500_, lean_object* v_stop_501_){
_start:
{
size_t v_i_boxed_502_; size_t v_stop_boxed_503_; uint8_t v_res_504_; lean_object* v_r_505_; 
v_i_boxed_502_ = lean_unbox_usize(v_i_500_);
lean_dec(v_i_500_);
v_stop_boxed_503_ = lean_unbox_usize(v_stop_501_);
lean_dec(v_stop_501_);
v_res_504_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(v_as_499_, v_i_boxed_502_, v_stop_boxed_503_);
lean_dec_ref(v_as_499_);
v_r_505_ = lean_box(v_res_504_);
return v_r_505_;
}
}
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(uint8_t v___x_506_, lean_object* v_as_507_, size_t v_i_508_, size_t v_stop_509_){
_start:
{
uint8_t v___x_514_; 
v___x_514_ = lean_usize_dec_eq(v_i_508_, v_stop_509_);
if (v___x_514_ == 0)
{
lean_object* v___x_515_; lean_object* v___x_516_; uint8_t v___x_517_; 
v___x_515_ = lean_array_uget_borrowed(v_as_507_, v_i_508_);
v___x_516_ = ((lean_object*)(l_Lean_Meta_mkInstPiOfInstForall___closed__5));
v___x_517_ = l_Lean_Expr_isAppOf(v___x_515_, v___x_516_);
if (v___x_517_ == 0)
{
if (v___x_506_ == 0)
{
goto v___jp_510_;
}
else
{
return v___x_506_;
}
}
else
{
goto v___jp_510_;
}
}
else
{
uint8_t v___x_518_; 
v___x_518_ = 0;
return v___x_518_;
}
v___jp_510_:
{
size_t v___x_511_; size_t v___x_512_; 
v___x_511_ = ((size_t)1ULL);
v___x_512_ = lean_usize_add(v_i_508_, v___x_511_);
v_i_508_ = v___x_512_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2___boxed(lean_object* v___x_519_, lean_object* v_as_520_, lean_object* v_i_521_, lean_object* v_stop_522_){
_start:
{
uint8_t v___x_1339__boxed_523_; size_t v_i_boxed_524_; size_t v_stop_boxed_525_; uint8_t v_res_526_; lean_object* v_r_527_; 
v___x_1339__boxed_523_ = lean_unbox(v___x_519_);
v_i_boxed_524_ = lean_unbox_usize(v_i_521_);
lean_dec(v_i_521_);
v_stop_boxed_525_ = lean_unbox_usize(v_stop_522_);
lean_dec(v_stop_522_);
v_res_526_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(v___x_1339__boxed_523_, v_as_520_, v_i_boxed_524_, v_stop_boxed_525_);
lean_dec_ref(v_as_520_);
v_r_527_ = lean_box(v_res_526_);
return v_r_527_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__3(void){
_start:
{
lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_531_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__2));
v___x_532_ = l_Lean_stringToMessageData(v___x_531_);
return v___x_532_;
}
}
static lean_object* _init_l_Lean_Meta_mkPackedPPRodInstance___closed__5(void){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__4));
v___x_535_ = l_Lean_stringToMessageData(v___x_534_);
return v___x_535_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance(lean_object* v_insts_536_, lean_object* v_a_537_, lean_object* v_a_538_, lean_object* v_a_539_, lean_object* v_a_540_){
_start:
{
lean_object* v___x_542_; size_t v_sz_543_; size_t v___x_544_; lean_object* v___x_545_; 
v___x_542_ = l_Lean_instInhabitedExpr;
v_sz_543_ = lean_array_size(v_insts_536_);
v___x_544_ = ((size_t)0ULL);
lean_inc_ref(v_insts_536_);
v___x_545_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Meta_mkPackedPPRodInstance_spec__0(v_sz_543_, v___x_544_, v_insts_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
if (lean_obj_tag(v___x_545_) == 0)
{
lean_object* v_a_546_; lean_object* v___x_553_; lean_object* v___x_554_; uint8_t v___x_555_; 
v_a_546_ = lean_ctor_get(v___x_545_, 0);
lean_inc(v_a_546_);
lean_dec_ref_known(v___x_545_, 1);
v___x_553_ = lean_unsigned_to_nat(0u);
v___x_554_ = lean_array_get_size(v_a_546_);
v___x_555_ = lean_nat_dec_lt(v___x_553_, v___x_554_);
if (v___x_555_ == 0)
{
lean_dec(v_a_546_);
goto v___jp_550_;
}
else
{
if (v___x_555_ == 0)
{
lean_dec(v_a_546_);
goto v___jp_550_;
}
else
{
size_t v___x_556_; uint8_t v___x_557_; 
v___x_556_ = lean_usize_of_nat(v___x_554_);
v___x_557_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__1(v_a_546_, v___x_544_, v___x_556_);
if (v___x_557_ == 0)
{
lean_dec(v_a_546_);
goto v___jp_550_;
}
else
{
if (v___x_555_ == 0)
{
lean_dec(v_a_546_);
goto v___jp_547_;
}
else
{
if (v___x_555_ == 0)
{
lean_dec(v_a_546_);
goto v___jp_547_;
}
else
{
uint8_t v___x_558_; 
v___x_558_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Lean_Meta_mkPackedPPRodInstance_spec__2(v___x_557_, v_a_546_, v___x_544_, v___x_556_);
if (v___x_558_ == 0)
{
lean_dec(v_a_546_);
goto v___jp_547_;
}
else
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; 
v___x_559_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__3, &l_Lean_Meta_mkPackedPPRodInstance___closed__3_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__3);
v___x_560_ = lean_array_to_list(v_a_546_);
v___x_561_ = lean_box(0);
v___x_562_ = l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(v___x_560_, v___x_561_);
v___x_563_ = l_Lean_MessageData_ofList(v___x_562_);
v___x_564_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_564_, 0, v___x_559_);
lean_ctor_set(v___x_564_, 1, v___x_563_);
v___x_565_ = lean_obj_once(&l_Lean_Meta_mkPackedPPRodInstance___closed__5, &l_Lean_Meta_mkPackedPPRodInstance___closed__5_once, _init_l_Lean_Meta_mkPackedPPRodInstance___closed__5);
v___x_566_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_566_, 0, v___x_564_);
lean_ctor_set(v___x_566_, 1, v___x_565_);
v___x_567_ = lean_array_to_list(v_insts_536_);
v___x_568_ = l_List_mapTR_loop___at___00Lean_Meta_mkPackedPPRodInstance_spec__3(v___x_567_, v___x_561_);
v___x_569_ = l_Lean_MessageData_ofList(v___x_568_);
v___x_570_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_570_, 0, v___x_566_);
lean_ctor_set(v___x_570_, 1, v___x_569_);
v___x_571_ = l_Lean_throwError___at___00Lean_Meta_mkInstPiOfInstForall_spec__0___redArg(v___x_570_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
return v___x_571_;
}
}
}
}
}
}
v___jp_547_:
{
lean_object* v___x_548_; lean_object* v___x_549_; 
v___x_548_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__0));
v___x_549_ = l_Lean_Meta_PProdN_genMk___redArg(v___x_542_, v___x_548_, v_insts_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
return v___x_549_;
}
v___jp_550_:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = ((lean_object*)(l_Lean_Meta_mkPackedPPRodInstance___closed__1));
v___x_552_ = l_Lean_Meta_PProdN_genMk___redArg(v___x_542_, v___x_551_, v_insts_536_, v_a_537_, v_a_538_, v_a_539_, v_a_540_);
return v___x_552_;
}
}
else
{
lean_object* v_a_572_; lean_object* v___x_574_; uint8_t v_isShared_575_; uint8_t v_isSharedCheck_579_; 
lean_dec_ref(v_insts_536_);
v_a_572_ = lean_ctor_get(v___x_545_, 0);
v_isSharedCheck_579_ = !lean_is_exclusive(v___x_545_);
if (v_isSharedCheck_579_ == 0)
{
v___x_574_ = v___x_545_;
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
else
{
lean_inc(v_a_572_);
lean_dec(v___x_545_);
v___x_574_ = lean_box(0);
v_isShared_575_ = v_isSharedCheck_579_;
goto v_resetjp_573_;
}
v_resetjp_573_:
{
lean_object* v___x_577_; 
if (v_isShared_575_ == 0)
{
v___x_577_ = v___x_574_;
goto v_reusejp_576_;
}
else
{
lean_object* v_reuseFailAlloc_578_; 
v_reuseFailAlloc_578_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_578_, 0, v_a_572_);
v___x_577_ = v_reuseFailAlloc_578_;
goto v_reusejp_576_;
}
v_reusejp_576_:
{
return v___x_577_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_mkPackedPPRodInstance___boxed(lean_object* v_insts_580_, lean_object* v_a_581_, lean_object* v_a_582_, lean_object* v_a_583_, lean_object* v_a_584_, lean_object* v_a_585_){
_start:
{
lean_object* v_res_586_; 
v_res_586_ = l_Lean_Meta_mkPackedPPRodInstance(v_insts_580_, v_a_581_, v_a_582_, v_a_583_, v_a_584_);
lean_dec(v_a_584_);
lean_dec_ref(v_a_583_);
lean_dec(v_a_582_);
lean_dec_ref(v_a_581_);
return v_res_586_;
}
}
lean_object* runtime_initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* runtime_initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* runtime_initialize_Init_Internal_Order_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_PProdN(uint8_t builtin);
lean_object* initialize_Lean_Meta_AppBuilder(uint8_t builtin);
lean_object* initialize_Init_Internal_Order_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Order(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_PProdN(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Meta_AppBuilder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Internal_Order_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Order(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Order(builtin);
}
#ifdef __cplusplus
}
#endif
