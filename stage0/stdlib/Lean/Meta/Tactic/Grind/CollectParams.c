// Lean compiler output
// Module: Lean.Meta.Tactic.Grind.CollectParams
// Imports: public import Lean.Meta.Tactic.Grind.Types import Init.Syntax
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
lean_object* lean_st_ref_take(lean_object*);
lean_object* lean_st_ref_put(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t l_Lean_Syntax_structEq(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_mkIdent(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_TSepArray_getElems___redArg(lean_object*);
size_t lean_array_size(lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_st_mk_ref(lean_object*);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
lean_object* l_Array_append___redArg(lean_object*, lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_SepArray_ofElems(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Lean_Syntax_mkNumLit(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArgs(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_setArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Core_instMonadOptionsCoreM_checkedOptions(lean_object*);
extern lean_object* l_Lean_Meta_Grind_grind_debug_dropParams;
lean_object* l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0_spec__0(lean_object*, lean_object*, size_t, size_t);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Tactic"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Grind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "thm"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__4_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value_aux_3),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__4_value),LEAN_SCALAR_PTR_LITERAL(235, 175, 92, 250, 215, 173, 92, 62)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindLemma"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__6_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__6_value),LEAN_SCALAR_PTR_LITERAL(185, 180, 24, 243, 113, 54, 79, 133)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "grindLemmaMin"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__8_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__8_value),LEAN_SCALAR_PTR_LITERAL(65, 124, 255, 191, 121, 182, 88, 219)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "anchor"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__10_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__10_value),LEAN_SCALAR_PTR_LITERAL(168, 155, 228, 98, 168, 72, 115, 174)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grindParam"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__12_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__12_value),LEAN_SCALAR_PTR_LITERAL(16, 144, 208, 205, 52, 106, 220, 83)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "next"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__0_value),LEAN_SCALAR_PTR_LITERAL(122, 67, 127, 148, 132, 17, 131, 108)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 7, .m_data = "grind·_"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__2_value),LEAN_SCALAR_PTR_LITERAL(27, 208, 22, 131, 194, 122, 241, 171)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "grindSeq"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__4_value),LEAN_SCALAR_PTR_LITERAL(158, 229, 98, 59, 247, 194, 34, 174)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "grindSeq1Indented"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__6_value),LEAN_SCALAR_PTR_LITERAL(35, 114, 22, 139, 17, 175, 241, 184)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7_value;
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative(lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___boxed(lean_object*);
static const lean_string_object l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "grindStep"};
static const lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__0 = (const lean_object*)&l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__0_value;
static const lean_ctor_object l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value_aux_3),((lean_object*)&l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(197, 239, 5, 217, 230, 199, 187, 87)}};
static const lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1 = (const lean_object*)&l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1_value;
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_span_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__0(lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sorry"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__0_value),LEAN_SCALAR_PTR_LITERAL(129, 71, 141, 15, 124, 86, 0, 175)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind_<;>_"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__2 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__2_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__2_value),LEAN_SCALAR_PTR_LITERAL(104, 7, 229, 204, 205, 179, 221, 240)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cases"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__4 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__4_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__4_value),LEAN_SCALAR_PTR_LITERAL(255, 233, 158, 17, 45, 135, 214, 137)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "use"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__6 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__6_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__6_value),LEAN_SCALAR_PTR_LITERAL(164, 64, 35, 249, 247, 52, 171, 66)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "instantiate"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__8 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__8_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__8_value),LEAN_SCALAR_PTR_LITERAL(22, 223, 197, 126, 28, 51, 106, 179)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ring"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__10 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__10_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__10_value),LEAN_SCALAR_PTR_LITERAL(62, 12, 164, 69, 244, 1, 113, 234)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "lia"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__12 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__12_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__12_value),LEAN_SCALAR_PTR_LITERAL(111, 14, 196, 226, 73, 38, 159, 13)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "linarith"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__14 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__14_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__14_value),LEAN_SCALAR_PTR_LITERAL(239, 138, 142, 132, 28, 165, 234, 226)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ac"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__16 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__16_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__16_value),LEAN_SCALAR_PTR_LITERAL(134, 101, 98, 118, 98, 241, 140, 11)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "mbtc"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__18 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__18_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__18_value),LEAN_SCALAR_PTR_LITERAL(158, 68, 23, 157, 222, 224, 232, 238)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "done"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__20 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__20_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__20_value),LEAN_SCALAR_PTR_LITERAL(75, 96, 222, 221, 183, 249, 85, 65)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__22 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__22_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__22_value),LEAN_SCALAR_PTR_LITERAL(206, 95, 123, 110, 162, 109, 248, 53)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "symIntros"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__24 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__24_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__24_value),LEAN_SCALAR_PTR_LITERAL(51, 175, 114, 140, 112, 61, 143, 32)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "symByContra"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__26 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__26_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__26_value),LEAN_SCALAR_PTR_LITERAL(250, 214, 28, 119, 209, 102, 217, 193)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "grind_ref_"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__28 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__28_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__28_value),LEAN_SCALAR_PTR_LITERAL(236, 234, 46, 225, 9, 69, 165, 154)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "grind_ref__/__"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__30 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__30_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value_aux_3),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__30_value),LEAN_SCALAR_PTR_LITERAL(163, 78, 76, 1, 128, 192, 165, 233)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31_value;
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__32 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__32_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__32_value),LEAN_SCALAR_PTR_LITERAL(227, 68, 22, 222, 47, 51, 204, 84)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__33 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__33_value;
static const lean_array_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_main(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_main___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___redArg(size_t, size_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*4 + 8, .m_other = 4, .m_tag = 0}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34_value),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(0, 0, 0, 0, 0, 0, 0, 0)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0(size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParams(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParams___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_mkFinishTactic___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "finish"};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__3_value),LEAN_SCALAR_PTR_LITERAL(148, 105, 19, 51, 118, 250, 248, 43)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkFinishTactic___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__1_value_aux_3),((lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__0_value),LEAN_SCALAR_PTR_LITERAL(1, 141, 128, 132, 58, 161, 38, 215)}};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_mkFinishTactic___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkFinishTactic___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__2_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__3_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkFinishTactic___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__4;
static const lean_string_object l_Lean_Meta_Grind_mkFinishTactic___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "only"};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__5_value;
static const lean_string_object l_Lean_Meta_Grind_mkFinishTactic___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "["};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__6_value;
static const lean_string_object l_Lean_Meta_Grind_mkFinishTactic___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__7 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__7_value;
static const lean_string_object l_Lean_Meta_Grind_mkFinishTactic___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* l_Lean_Meta_Grind_mkFinishTactic___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_mkFinishTactic___closed__8_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkFinishTactic(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkFinishTactic___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "grind"};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__0 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__0_value;
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(150, 98, 0, 78, 28, 79, 28, 100)}};
static const lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1 = (const lean_object*)&l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_mkGrindOnlyTactics_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_mkGrindOnlyTactics_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "configItem"};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__0 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__0_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__0_value),LEAN_SCALAR_PTR_LITERAL(205, 9, 236, 192, 59, 252, 178, 140)}};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1_value;
static const lean_string_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "valConfigItem"};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__2 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__2_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__2_value),LEAN_SCALAR_PTR_LITERAL(166, 58, 35, 182, 187, 130, 147, 254)}};
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value_aux_2),((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__2_value),LEAN_SCALAR_PTR_LITERAL(135, 67, 19, 169, 17, 95, 109, 188)}};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3_value;
static const lean_string_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__4 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__4_value;
static const lean_string_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "ematch"};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__5 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__5_value;
static const lean_ctor_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__5_value),LEAN_SCALAR_PTR_LITERAL(169, 93, 194, 130, 184, 168, 50, 248)}};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__6 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__6_value;
static lean_once_cell_t l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__7;
static const lean_string_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ":="};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__8 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__8_value;
static const lean_string_object l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__9 = (const lean_object*)&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__9_value;
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0_spec__0(lean_object* v_a_1_, lean_object* v_as_2_, size_t v_i_3_, size_t v_stop_4_){
_start:
{
uint8_t v___x_5_; 
v___x_5_ = lean_usize_dec_eq(v_i_3_, v_stop_4_);
if (v___x_5_ == 0)
{
lean_object* v___x_6_; uint8_t v___x_7_; 
v___x_6_ = lean_array_uget_borrowed(v_as_2_, v_i_3_);
v___x_7_ = l_Lean_Syntax_structEq(v_a_1_, v___x_6_);
if (v___x_7_ == 0)
{
size_t v___x_8_; size_t v___x_9_; 
v___x_8_ = ((size_t)1ULL);
v___x_9_ = lean_usize_add(v_i_3_, v___x_8_);
v_i_3_ = v___x_9_;
goto _start;
}
else
{
return v___x_7_;
}
}
else
{
uint8_t v___x_11_; 
v___x_11_ = 0;
return v___x_11_;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0_spec__0___boxed(lean_object* v_a_12_, lean_object* v_as_13_, lean_object* v_i_14_, lean_object* v_stop_15_){
_start:
{
size_t v_i_boxed_16_; size_t v_stop_boxed_17_; uint8_t v_res_18_; lean_object* v_r_19_; 
v_i_boxed_16_ = lean_unbox_usize(v_i_14_);
lean_dec(v_i_14_);
v_stop_boxed_17_ = lean_unbox_usize(v_stop_15_);
lean_dec(v_stop_15_);
v_res_18_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0_spec__0(v_a_12_, v_as_13_, v_i_boxed_16_, v_stop_boxed_17_);
lean_dec_ref(v_as_13_);
lean_dec(v_a_12_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0(lean_object* v_as_20_, lean_object* v_a_21_){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; uint8_t v___x_24_; 
v___x_22_ = lean_unsigned_to_nat(0u);
v___x_23_ = lean_array_get_size(v_as_20_);
v___x_24_ = lean_nat_dec_lt(v___x_22_, v___x_23_);
if (v___x_24_ == 0)
{
return v___x_24_;
}
else
{
size_t v___x_25_; size_t v___x_26_; uint8_t v___x_27_; 
v___x_25_ = ((size_t)0ULL);
v___x_26_ = lean_usize_of_nat(v___x_23_);
v___x_27_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0_spec__0(v_a_21_, v_as_20_, v___x_25_, v___x_26_);
return v___x_27_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0___boxed(lean_object* v_as_28_, lean_object* v_a_29_){
_start:
{
uint8_t v_res_30_; lean_object* v_r_31_; 
v_res_30_ = l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0(v_as_28_, v_a_29_);
lean_dec(v_a_29_);
lean_dec_ref(v_as_28_);
v_r_31_ = lean_box(v_res_30_);
return v_r_31_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg(lean_object* v_p_32_, lean_object* v_a_33_){
_start:
{
lean_object* v___x_35_; lean_object* v_params_36_; uint8_t v___x_37_; 
v___x_35_ = lean_st_ref_get(v_a_33_);
v_params_36_ = lean_ctor_get(v___x_35_, 0);
lean_inc_ref(v_params_36_);
lean_dec(v___x_35_);
v___x_37_ = l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0(v_params_36_, v_p_32_);
lean_dec_ref(v_params_36_);
if (v___x_37_ == 0)
{
lean_object* v___x_38_; lean_object* v_params_39_; lean_object* v_anchors_40_; uint8_t v_hasSorry_41_; lean_object* v_rounds_42_; lean_object* v_maxRounds_43_; lean_object* v___x_45_; uint8_t v_isShared_46_; uint8_t v_isSharedCheck_54_; 
v___x_38_ = lean_st_ref_take(v_a_33_);
v_params_39_ = lean_ctor_get(v___x_38_, 0);
v_anchors_40_ = lean_ctor_get(v___x_38_, 1);
v_hasSorry_41_ = lean_ctor_get_uint8(v___x_38_, sizeof(void*)*4);
v_rounds_42_ = lean_ctor_get(v___x_38_, 2);
v_maxRounds_43_ = lean_ctor_get(v___x_38_, 3);
v_isSharedCheck_54_ = !lean_is_exclusive(v___x_38_);
if (v_isSharedCheck_54_ == 0)
{
v___x_45_ = v___x_38_;
v_isShared_46_ = v_isSharedCheck_54_;
goto v_resetjp_44_;
}
else
{
lean_inc(v_maxRounds_43_);
lean_inc(v_rounds_42_);
lean_inc(v_anchors_40_);
lean_inc(v_params_39_);
lean_dec(v___x_38_);
v___x_45_ = lean_box(0);
v_isShared_46_ = v_isSharedCheck_54_;
goto v_resetjp_44_;
}
v_resetjp_44_:
{
lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_50_; 
v___x_47_ = lean_box(0);
v___x_48_ = lean_array_push(v_params_39_, v_p_32_);
if (v_isShared_46_ == 0)
{
lean_ctor_set(v___x_45_, 0, v___x_48_);
v___x_50_ = v___x_45_;
goto v_reusejp_49_;
}
else
{
lean_object* v_reuseFailAlloc_53_; 
v_reuseFailAlloc_53_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_53_, 0, v___x_48_);
lean_ctor_set(v_reuseFailAlloc_53_, 1, v_anchors_40_);
lean_ctor_set(v_reuseFailAlloc_53_, 2, v_rounds_42_);
lean_ctor_set(v_reuseFailAlloc_53_, 3, v_maxRounds_43_);
lean_ctor_set_uint8(v_reuseFailAlloc_53_, sizeof(void*)*4, v_hasSorry_41_);
v___x_50_ = v_reuseFailAlloc_53_;
goto v_reusejp_49_;
}
v_reusejp_49_:
{
lean_object* v___x_51_; lean_object* v___x_52_; 
v___x_51_ = lean_st_ref_put(v_a_33_, v___x_50_);
v___x_52_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_52_, 0, v___x_47_);
return v___x_52_;
}
}
}
else
{
lean_object* v___x_55_; lean_object* v___x_56_; 
lean_dec(v_p_32_);
v___x_55_ = lean_box(0);
v___x_56_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_56_, 0, v___x_55_);
return v___x_56_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg___boxed(lean_object* v_p_57_, lean_object* v_a_58_, lean_object* v_a_59_){
_start:
{
lean_object* v_res_60_; 
v_res_60_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg(v_p_57_, v_a_58_);
lean_dec(v_a_58_);
return v_res_60_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam(lean_object* v_p_61_, lean_object* v_a_62_, lean_object* v_a_63_, lean_object* v_a_64_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg(v_p_61_, v_a_62_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___boxed(lean_object* v_p_67_, lean_object* v_a_68_, lean_object* v_a_69_, lean_object* v_a_70_, lean_object* v_a_71_){
_start:
{
lean_object* v_res_72_; 
v_res_72_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam(v_p_67_, v_a_68_, v_a_69_, v_a_70_);
lean_dec(v_a_70_);
lean_dec_ref(v_a_69_);
lean_dec(v_a_68_);
return v_res_72_;
}
}
LEAN_EXPORT uint8_t l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor_spec__0(lean_object* v_as_73_, lean_object* v_a_74_){
_start:
{
lean_object* v___x_75_; lean_object* v___x_76_; uint8_t v___x_77_; 
v___x_75_ = lean_unsigned_to_nat(0u);
v___x_76_ = lean_array_get_size(v_as_73_);
v___x_77_ = lean_nat_dec_lt(v___x_75_, v___x_76_);
if (v___x_77_ == 0)
{
return v___x_77_;
}
else
{
size_t v___x_78_; size_t v___x_79_; uint8_t v___x_80_; 
v___x_78_ = ((size_t)0ULL);
v___x_79_ = lean_usize_of_nat(v___x_76_);
v___x_80_ = l___private_Init_Data_Array_Basic_0__Array_anyMUnsafe_any___at___00Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam_spec__0_spec__0(v_a_74_, v_as_73_, v___x_78_, v___x_79_);
return v___x_80_;
}
}
}
LEAN_EXPORT lean_object* l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor_spec__0___boxed(lean_object* v_as_81_, lean_object* v_a_82_){
_start:
{
uint8_t v_res_83_; lean_object* v_r_84_; 
v_res_83_ = l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor_spec__0(v_as_81_, v_a_82_);
lean_dec(v_a_82_);
lean_dec_ref(v_as_81_);
v_r_84_ = lean_box(v_res_83_);
return v_r_84_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg(lean_object* v_a_85_, lean_object* v_a_86_){
_start:
{
lean_object* v___x_88_; lean_object* v_anchors_89_; uint8_t v___x_90_; 
v___x_88_ = lean_st_ref_get(v_a_86_);
v_anchors_89_ = lean_ctor_get(v___x_88_, 1);
lean_inc_ref(v_anchors_89_);
lean_dec(v___x_88_);
v___x_90_ = l_Array_contains___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor_spec__0(v_anchors_89_, v_a_85_);
lean_dec_ref(v_anchors_89_);
if (v___x_90_ == 0)
{
lean_object* v___x_91_; lean_object* v_params_92_; lean_object* v_anchors_93_; uint8_t v_hasSorry_94_; lean_object* v_rounds_95_; lean_object* v_maxRounds_96_; lean_object* v___x_98_; uint8_t v_isShared_99_; uint8_t v_isSharedCheck_107_; 
v___x_91_ = lean_st_ref_take(v_a_86_);
v_params_92_ = lean_ctor_get(v___x_91_, 0);
v_anchors_93_ = lean_ctor_get(v___x_91_, 1);
v_hasSorry_94_ = lean_ctor_get_uint8(v___x_91_, sizeof(void*)*4);
v_rounds_95_ = lean_ctor_get(v___x_91_, 2);
v_maxRounds_96_ = lean_ctor_get(v___x_91_, 3);
v_isSharedCheck_107_ = !lean_is_exclusive(v___x_91_);
if (v_isSharedCheck_107_ == 0)
{
v___x_98_ = v___x_91_;
v_isShared_99_ = v_isSharedCheck_107_;
goto v_resetjp_97_;
}
else
{
lean_inc(v_maxRounds_96_);
lean_inc(v_rounds_95_);
lean_inc(v_anchors_93_);
lean_inc(v_params_92_);
lean_dec(v___x_91_);
v___x_98_ = lean_box(0);
v_isShared_99_ = v_isSharedCheck_107_;
goto v_resetjp_97_;
}
v_resetjp_97_:
{
lean_object* v___x_100_; lean_object* v___x_101_; lean_object* v___x_103_; 
v___x_100_ = lean_box(0);
v___x_101_ = lean_array_push(v_anchors_93_, v_a_85_);
if (v_isShared_99_ == 0)
{
lean_ctor_set(v___x_98_, 1, v___x_101_);
v___x_103_ = v___x_98_;
goto v_reusejp_102_;
}
else
{
lean_object* v_reuseFailAlloc_106_; 
v_reuseFailAlloc_106_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_106_, 0, v_params_92_);
lean_ctor_set(v_reuseFailAlloc_106_, 1, v___x_101_);
lean_ctor_set(v_reuseFailAlloc_106_, 2, v_rounds_95_);
lean_ctor_set(v_reuseFailAlloc_106_, 3, v_maxRounds_96_);
lean_ctor_set_uint8(v_reuseFailAlloc_106_, sizeof(void*)*4, v_hasSorry_94_);
v___x_103_ = v_reuseFailAlloc_106_;
goto v_reusejp_102_;
}
v_reusejp_102_:
{
lean_object* v___x_104_; lean_object* v___x_105_; 
v___x_104_ = lean_st_ref_put(v_a_86_, v___x_103_);
v___x_105_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_105_, 0, v___x_100_);
return v___x_105_;
}
}
}
else
{
lean_object* v___x_108_; lean_object* v___x_109_; 
lean_dec(v_a_85_);
v___x_108_ = lean_box(0);
v___x_109_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_109_, 0, v___x_108_);
return v___x_109_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg___boxed(lean_object* v_a_110_, lean_object* v_a_111_, lean_object* v_a_112_){
_start:
{
lean_object* v_res_113_; 
v_res_113_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg(v_a_110_, v_a_111_);
lean_dec(v_a_111_);
return v_res_113_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor(lean_object* v_a_114_, lean_object* v_a_115_, lean_object* v_a_116_, lean_object* v_a_117_){
_start:
{
lean_object* v___x_119_; 
v___x_119_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg(v_a_114_, v_a_115_);
return v___x_119_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___boxed(lean_object* v_a_120_, lean_object* v_a_121_, lean_object* v_a_122_, lean_object* v_a_123_, lean_object* v_a_124_){
_start:
{
lean_object* v_res_125_; 
v_res_125_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor(v_a_120_, v_a_121_, v_a_122_, v_a_123_);
lean_dec(v_a_123_);
lean_dec_ref(v_a_122_);
lean_dec(v_a_121_);
return v_res_125_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(lean_object* v_a_126_){
_start:
{
lean_object* v___x_128_; lean_object* v_fst_130_; lean_object* v_snd_131_; lean_object* v_params_134_; lean_object* v_anchors_135_; uint8_t v_hasSorry_136_; lean_object* v_rounds_137_; lean_object* v_maxRounds_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_152_; 
v___x_128_ = lean_st_ref_take(v_a_126_);
v_params_134_ = lean_ctor_get(v___x_128_, 0);
v_anchors_135_ = lean_ctor_get(v___x_128_, 1);
v_hasSorry_136_ = lean_ctor_get_uint8(v___x_128_, sizeof(void*)*4);
v_rounds_137_ = lean_ctor_get(v___x_128_, 2);
v_maxRounds_138_ = lean_ctor_get(v___x_128_, 3);
v_isSharedCheck_152_ = !lean_is_exclusive(v___x_128_);
if (v_isSharedCheck_152_ == 0)
{
v___x_140_ = v___x_128_;
v_isShared_141_ = v_isSharedCheck_152_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_maxRounds_138_);
lean_inc(v_rounds_137_);
lean_inc(v_anchors_135_);
lean_inc(v_params_134_);
lean_dec(v___x_128_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_152_;
goto v_resetjp_139_;
}
v___jp_129_:
{
lean_object* v___x_132_; lean_object* v___x_133_; 
v___x_132_ = lean_st_ref_put(v_a_126_, v_snd_131_);
v___x_133_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_133_, 0, v_fst_130_);
return v___x_133_;
}
v_resetjp_139_:
{
lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; uint8_t v___x_145_; 
v___x_142_ = lean_box(0);
v___x_143_ = lean_unsigned_to_nat(1u);
v___x_144_ = lean_nat_add(v_rounds_137_, v___x_143_);
lean_dec(v_rounds_137_);
v___x_145_ = lean_nat_dec_le(v_maxRounds_138_, v___x_144_);
if (v___x_145_ == 0)
{
lean_object* v___x_147_; 
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 2, v___x_144_);
v___x_147_ = v___x_140_;
goto v_reusejp_146_;
}
else
{
lean_object* v_reuseFailAlloc_148_; 
v_reuseFailAlloc_148_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_148_, 0, v_params_134_);
lean_ctor_set(v_reuseFailAlloc_148_, 1, v_anchors_135_);
lean_ctor_set(v_reuseFailAlloc_148_, 2, v___x_144_);
lean_ctor_set(v_reuseFailAlloc_148_, 3, v_maxRounds_138_);
lean_ctor_set_uint8(v_reuseFailAlloc_148_, sizeof(void*)*4, v_hasSorry_136_);
v___x_147_ = v_reuseFailAlloc_148_;
goto v_reusejp_146_;
}
v_reusejp_146_:
{
v_fst_130_ = v___x_142_;
v_snd_131_ = v___x_147_;
goto v___jp_129_;
}
}
else
{
lean_object* v___x_150_; 
lean_dec(v_maxRounds_138_);
lean_inc(v___x_144_);
if (v_isShared_141_ == 0)
{
lean_ctor_set(v___x_140_, 3, v___x_144_);
lean_ctor_set(v___x_140_, 2, v___x_144_);
v___x_150_ = v___x_140_;
goto v_reusejp_149_;
}
else
{
lean_object* v_reuseFailAlloc_151_; 
v_reuseFailAlloc_151_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_151_, 0, v_params_134_);
lean_ctor_set(v_reuseFailAlloc_151_, 1, v_anchors_135_);
lean_ctor_set(v_reuseFailAlloc_151_, 2, v___x_144_);
lean_ctor_set(v_reuseFailAlloc_151_, 3, v___x_144_);
lean_ctor_set_uint8(v_reuseFailAlloc_151_, sizeof(void*)*4, v_hasSorry_136_);
v___x_150_ = v_reuseFailAlloc_151_;
goto v_reusejp_149_;
}
v_reusejp_149_:
{
v_fst_130_ = v___x_142_;
v_snd_131_ = v___x_150_;
goto v___jp_129_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg___boxed(lean_object* v_a_153_, lean_object* v_a_154_){
_start:
{
lean_object* v_res_155_; 
v_res_155_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_153_);
lean_dec(v_a_153_);
return v_res_155_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound(lean_object* v_a_156_, lean_object* v_a_157_, lean_object* v_a_158_){
_start:
{
lean_object* v___x_160_; 
v___x_160_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_156_);
return v___x_160_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___boxed(lean_object* v_a_161_, lean_object* v_a_162_, lean_object* v_a_163_, lean_object* v_a_164_){
_start:
{
lean_object* v_res_165_; 
v_res_165_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound(v_a_161_, v_a_162_, v_a_163_);
lean_dec(v_a_163_);
lean_dec_ref(v_a_162_);
lean_dec(v_a_161_);
return v_res_165_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg(lean_object* v_a_166_){
_start:
{
lean_object* v___x_168_; lean_object* v_params_169_; lean_object* v_anchors_170_; uint8_t v_hasSorry_171_; lean_object* v_maxRounds_172_; lean_object* v___x_174_; uint8_t v_isShared_175_; uint8_t v_isSharedCheck_183_; 
v___x_168_ = lean_st_ref_take(v_a_166_);
v_params_169_ = lean_ctor_get(v___x_168_, 0);
v_anchors_170_ = lean_ctor_get(v___x_168_, 1);
v_hasSorry_171_ = lean_ctor_get_uint8(v___x_168_, sizeof(void*)*4);
v_maxRounds_172_ = lean_ctor_get(v___x_168_, 3);
v_isSharedCheck_183_ = !lean_is_exclusive(v___x_168_);
if (v_isSharedCheck_183_ == 0)
{
lean_object* v_unused_184_; 
v_unused_184_ = lean_ctor_get(v___x_168_, 2);
lean_dec(v_unused_184_);
v___x_174_ = v___x_168_;
v_isShared_175_ = v_isSharedCheck_183_;
goto v_resetjp_173_;
}
else
{
lean_inc(v_maxRounds_172_);
lean_inc(v_anchors_170_);
lean_inc(v_params_169_);
lean_dec(v___x_168_);
v___x_174_ = lean_box(0);
v_isShared_175_ = v_isSharedCheck_183_;
goto v_resetjp_173_;
}
v_resetjp_173_:
{
lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v___x_176_ = lean_box(0);
v___x_177_ = lean_unsigned_to_nat(0u);
if (v_isShared_175_ == 0)
{
lean_ctor_set(v___x_174_, 2, v___x_177_);
v___x_179_ = v___x_174_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_params_169_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v_anchors_170_);
lean_ctor_set(v_reuseFailAlloc_182_, 2, v___x_177_);
lean_ctor_set(v_reuseFailAlloc_182_, 3, v_maxRounds_172_);
lean_ctor_set_uint8(v_reuseFailAlloc_182_, sizeof(void*)*4, v_hasSorry_171_);
v___x_179_ = v_reuseFailAlloc_182_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
lean_object* v___x_180_; lean_object* v___x_181_; 
v___x_180_ = lean_st_ref_put(v_a_166_, v___x_179_);
v___x_181_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_181_, 0, v___x_176_);
return v___x_181_;
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg___boxed(lean_object* v_a_185_, lean_object* v_a_186_){
_start:
{
lean_object* v_res_187_; 
v_res_187_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg(v_a_185_);
lean_dec(v_a_185_);
return v_res_187_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds(lean_object* v_a_188_, lean_object* v_a_189_, lean_object* v_a_190_){
_start:
{
lean_object* v___x_192_; 
v___x_192_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg(v_a_188_);
return v___x_192_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___boxed(lean_object* v_a_193_, lean_object* v_a_194_, lean_object* v_a_195_, lean_object* v_a_196_){
_start:
{
lean_object* v_res_197_; 
v_res_197_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds(v_a_193_, v_a_194_, v_a_195_);
lean_dec(v_a_195_);
lean_dec_ref(v_a_194_);
lean_dec(v_a_193_);
return v_res_197_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg(lean_object* v_as_233_, size_t v_sz_234_, size_t v_i_235_, lean_object* v_b_236_, lean_object* v___y_237_, lean_object* v___y_238_){
_start:
{
lean_object* v_a_241_; uint8_t v___x_245_; 
v___x_245_ = lean_usize_dec_lt(v_i_235_, v_sz_234_);
if (v___x_245_ == 0)
{
lean_object* v___x_246_; 
v___x_246_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_246_, 0, v_b_236_);
return v___x_246_;
}
else
{
lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v_a_249_; uint8_t v___x_250_; 
v___x_247_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__5));
v___x_248_ = lean_box(0);
v_a_249_ = lean_array_uget_borrowed(v_as_233_, v_i_235_);
lean_inc(v_a_249_);
v___x_250_ = l_Lean_Syntax_isOfKind(v_a_249_, v___x_247_);
if (v___x_250_ == 0)
{
v_a_241_ = v___x_248_;
goto v___jp_240_;
}
else
{
lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; uint8_t v___x_254_; 
v___x_251_ = lean_unsigned_to_nat(0u);
v___x_252_ = l_Lean_Syntax_getArg(v_a_249_, v___x_251_);
v___x_253_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__7));
lean_inc(v___x_252_);
v___x_254_ = l_Lean_Syntax_isOfKind(v___x_252_, v___x_253_);
if (v___x_254_ == 0)
{
lean_object* v___x_255_; uint8_t v___x_256_; 
v___x_255_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__9));
lean_inc(v___x_252_);
v___x_256_ = l_Lean_Syntax_isOfKind(v___x_252_, v___x_255_);
if (v___x_256_ == 0)
{
lean_object* v___x_257_; uint8_t v___x_258_; 
v___x_257_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11));
lean_inc(v___x_252_);
v___x_258_ = l_Lean_Syntax_isOfKind(v___x_252_, v___x_257_);
if (v___x_258_ == 0)
{
lean_dec(v___x_252_);
v_a_241_ = v___x_248_;
goto v___jp_240_;
}
else
{
lean_object* v___x_259_; 
v___x_259_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg(v___x_252_, v___y_237_);
if (lean_obj_tag(v___x_259_) == 0)
{
lean_dec_ref_known(v___x_259_, 1);
v_a_241_ = v___x_248_;
goto v___jp_240_;
}
else
{
return v___x_259_;
}
}
}
else
{
lean_object* v_ref_260_; lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_263_; lean_object* v___x_264_; 
v_ref_260_ = lean_ctor_get(v___y_238_, 2);
v___x_261_ = l_Lean_SourceInfo_fromRef(v_ref_260_, v___x_254_);
v___x_262_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13));
v___x_263_ = l_Lean_Syntax_node1(v___x_261_, v___x_262_, v___x_252_);
v___x_264_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg(v___x_263_, v___y_237_);
if (lean_obj_tag(v___x_264_) == 0)
{
lean_dec_ref_known(v___x_264_, 1);
v_a_241_ = v___x_248_;
goto v___jp_240_;
}
else
{
return v___x_264_;
}
}
}
else
{
lean_object* v_ref_265_; uint8_t v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v_ref_265_ = lean_ctor_get(v___y_238_, 2);
v___x_266_ = 0;
v___x_267_ = l_Lean_SourceInfo_fromRef(v_ref_265_, v___x_266_);
v___x_268_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13));
v___x_269_ = l_Lean_Syntax_node1(v___x_267_, v___x_268_, v___x_252_);
v___x_270_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushParam___redArg(v___x_269_, v___y_237_);
if (lean_obj_tag(v___x_270_) == 0)
{
lean_dec_ref_known(v___x_270_, 1);
v_a_241_ = v___x_248_;
goto v___jp_240_;
}
else
{
return v___x_270_;
}
}
}
}
v___jp_240_:
{
size_t v___x_242_; size_t v___x_243_; 
v___x_242_ = ((size_t)1ULL);
v___x_243_ = lean_usize_add(v_i_235_, v___x_242_);
v_i_235_ = v___x_243_;
v_b_236_ = v_a_241_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___boxed(lean_object* v_as_271_, lean_object* v_sz_272_, lean_object* v_i_273_, lean_object* v_b_274_, lean_object* v___y_275_, lean_object* v___y_276_, lean_object* v___y_277_){
_start:
{
size_t v_sz_boxed_278_; size_t v_i_boxed_279_; lean_object* v_res_280_; 
v_sz_boxed_278_ = lean_unbox_usize(v_sz_272_);
lean_dec(v_sz_272_);
v_i_boxed_279_ = lean_unbox_usize(v_i_273_);
lean_dec(v_i_273_);
v_res_280_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg(v_as_271_, v_sz_boxed_278_, v_i_boxed_279_, v_b_274_, v___y_275_, v___y_276_);
lean_dec_ref(v___y_276_);
lean_dec(v___y_275_);
lean_dec_ref(v_as_271_);
return v_res_280_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams(lean_object* v_params_281_, lean_object* v_a_282_, lean_object* v_a_283_, lean_object* v_a_284_){
_start:
{
lean_object* v___x_286_; lean_object* v___x_287_; size_t v_sz_288_; size_t v___x_289_; lean_object* v___x_290_; 
v___x_286_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_params_281_);
v___x_287_ = lean_box(0);
v_sz_288_ = lean_array_size(v___x_286_);
v___x_289_ = ((size_t)0ULL);
v___x_290_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg(v___x_286_, v_sz_288_, v___x_289_, v___x_287_, v_a_282_, v_a_283_);
lean_dec_ref(v___x_286_);
if (lean_obj_tag(v___x_290_) == 0)
{
lean_object* v___x_292_; uint8_t v_isShared_293_; uint8_t v_isSharedCheck_297_; 
v_isSharedCheck_297_ = !lean_is_exclusive(v___x_290_);
if (v_isSharedCheck_297_ == 0)
{
lean_object* v_unused_298_; 
v_unused_298_ = lean_ctor_get(v___x_290_, 0);
lean_dec(v_unused_298_);
v___x_292_ = v___x_290_;
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
else
{
lean_dec(v___x_290_);
v___x_292_ = lean_box(0);
v_isShared_293_ = v_isSharedCheck_297_;
goto v_resetjp_291_;
}
v_resetjp_291_:
{
lean_object* v___x_295_; 
if (v_isShared_293_ == 0)
{
lean_ctor_set(v___x_292_, 0, v___x_287_);
v___x_295_ = v___x_292_;
goto v_reusejp_294_;
}
else
{
lean_object* v_reuseFailAlloc_296_; 
v_reuseFailAlloc_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_296_, 0, v___x_287_);
v___x_295_ = v_reuseFailAlloc_296_;
goto v_reusejp_294_;
}
v_reusejp_294_:
{
return v___x_295_;
}
}
}
else
{
return v___x_290_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams___boxed(lean_object* v_params_299_, lean_object* v_a_300_, lean_object* v_a_301_, lean_object* v_a_302_, lean_object* v_a_303_){
_start:
{
lean_object* v_res_304_; 
v_res_304_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams(v_params_299_, v_a_300_, v_a_301_, v_a_302_);
lean_dec(v_a_302_);
lean_dec_ref(v_a_301_);
lean_dec(v_a_300_);
lean_dec_ref(v_params_299_);
return v_res_304_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0(lean_object* v_as_305_, size_t v_sz_306_, size_t v_i_307_, lean_object* v_b_308_, lean_object* v___y_309_, lean_object* v___y_310_, lean_object* v___y_311_){
_start:
{
lean_object* v___x_313_; 
v___x_313_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg(v_as_305_, v_sz_306_, v_i_307_, v_b_308_, v___y_309_, v___y_310_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___boxed(lean_object* v_as_314_, lean_object* v_sz_315_, lean_object* v_i_316_, lean_object* v_b_317_, lean_object* v___y_318_, lean_object* v___y_319_, lean_object* v___y_320_, lean_object* v___y_321_){
_start:
{
size_t v_sz_boxed_322_; size_t v_i_boxed_323_; lean_object* v_res_324_; 
v_sz_boxed_322_ = lean_unbox_usize(v_sz_315_);
lean_dec(v_sz_315_);
v_i_boxed_323_ = lean_unbox_usize(v_i_316_);
lean_dec(v_i_316_);
v_res_324_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0(v_as_314_, v_sz_boxed_322_, v_i_boxed_323_, v_b_317_, v___y_318_, v___y_319_, v___y_320_);
lean_dec(v___y_320_);
lean_dec_ref(v___y_319_);
lean_dec(v___y_318_);
lean_dec_ref(v_as_314_);
return v_res_324_;
}
}
LEAN_EXPORT uint8_t l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative(lean_object* v_tac_353_){
_start:
{
lean_object* v___x_354_; uint8_t v___x_355_; 
v___x_354_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1));
lean_inc(v_tac_353_);
v___x_355_ = l_Lean_Syntax_isOfKind(v_tac_353_, v___x_354_);
if (v___x_355_ == 0)
{
lean_object* v___x_356_; uint8_t v___x_357_; 
v___x_356_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3));
lean_inc(v_tac_353_);
v___x_357_ = l_Lean_Syntax_isOfKind(v_tac_353_, v___x_356_);
if (v___x_357_ == 0)
{
lean_dec(v_tac_353_);
return v___x_357_;
}
else
{
lean_object* v___x_358_; lean_object* v___x_359_; lean_object* v___x_360_; uint8_t v___x_361_; 
v___x_358_ = lean_unsigned_to_nat(1u);
v___x_359_ = l_Lean_Syntax_getArg(v_tac_353_, v___x_358_);
lean_dec(v_tac_353_);
v___x_360_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5));
lean_inc(v___x_359_);
v___x_361_ = l_Lean_Syntax_isOfKind(v___x_359_, v___x_360_);
if (v___x_361_ == 0)
{
lean_dec(v___x_359_);
return v___x_361_;
}
else
{
lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; uint8_t v___x_365_; 
v___x_362_ = lean_unsigned_to_nat(0u);
v___x_363_ = l_Lean_Syntax_getArg(v___x_359_, v___x_362_);
lean_dec(v___x_359_);
v___x_364_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7));
v___x_365_ = l_Lean_Syntax_isOfKind(v___x_363_, v___x_364_);
return v___x_365_;
}
}
}
else
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; uint8_t v___x_369_; 
v___x_366_ = lean_unsigned_to_nat(0u);
v___x_367_ = lean_unsigned_to_nat(1u);
v___x_368_ = l_Lean_Syntax_getArg(v_tac_353_, v___x_367_);
v___x_369_ = l_Lean_Syntax_matchesNull(v___x_368_, v___x_366_);
if (v___x_369_ == 0)
{
lean_dec(v_tac_353_);
return v___x_369_;
}
else
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; uint8_t v___x_373_; 
v___x_370_ = lean_unsigned_to_nat(3u);
v___x_371_ = l_Lean_Syntax_getArg(v_tac_353_, v___x_370_);
lean_dec(v_tac_353_);
v___x_372_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5));
lean_inc(v___x_371_);
v___x_373_ = l_Lean_Syntax_isOfKind(v___x_371_, v___x_372_);
if (v___x_373_ == 0)
{
lean_dec(v___x_371_);
return v___x_373_;
}
else
{
lean_object* v___x_374_; lean_object* v___x_375_; uint8_t v___x_376_; 
v___x_374_ = l_Lean_Syntax_getArg(v___x_371_, v___x_366_);
lean_dec(v___x_371_);
v___x_375_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7));
v___x_376_ = l_Lean_Syntax_isOfKind(v___x_374_, v___x_375_);
return v___x_376_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___boxed(lean_object* v_tac_377_){
_start:
{
uint8_t v_res_378_; lean_object* v_r_379_; 
v_res_378_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative(v_tac_377_);
v_r_379_ = lean_box(v_res_378_);
return v_r_379_;
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1(lean_object* v_a_387_, lean_object* v_a_388_){
_start:
{
if (lean_obj_tag(v_a_387_) == 0)
{
lean_object* v___x_389_; 
v___x_389_ = lean_array_to_list(v_a_388_);
return v___x_389_;
}
else
{
lean_object* v_head_390_; lean_object* v_tail_391_; lean_object* v___x_392_; uint8_t v___x_393_; 
v_head_390_ = lean_ctor_get(v_a_387_, 0);
lean_inc_n(v_head_390_, 2);
v_tail_391_ = lean_ctor_get(v_a_387_, 1);
lean_inc(v_tail_391_);
lean_dec_ref_known(v_a_387_, 2);
v___x_392_ = ((lean_object*)(l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1));
v___x_393_ = l_Lean_Syntax_isOfKind(v_head_390_, v___x_392_);
if (v___x_393_ == 0)
{
lean_dec(v_head_390_);
v_a_387_ = v_tail_391_;
goto _start;
}
else
{
lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v_tac_397_; lean_object* v___x_401_; uint8_t v___x_402_; 
v___x_395_ = lean_unsigned_to_nat(0u);
v___x_396_ = lean_unsigned_to_nat(1u);
v_tac_397_ = l_Lean_Syntax_getArg(v_head_390_, v___x_395_);
v___x_401_ = l_Lean_Syntax_getArg(v_head_390_, v___x_396_);
lean_dec(v_head_390_);
v___x_402_ = l_Lean_Syntax_isNone(v___x_401_);
if (v___x_402_ == 0)
{
lean_object* v___x_403_; uint8_t v___x_404_; 
v___x_403_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_401_);
v___x_404_ = l_Lean_Syntax_matchesNull(v___x_401_, v___x_403_);
if (v___x_404_ == 0)
{
lean_dec(v___x_401_);
lean_dec(v_tac_397_);
v_a_387_ = v_tail_391_;
goto _start;
}
else
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = l_Lean_Syntax_getArg(v___x_401_, v___x_396_);
lean_dec(v___x_401_);
v___x_407_ = l_Lean_Syntax_matchesNull(v___x_406_, v___x_396_);
if (v___x_407_ == 0)
{
lean_dec(v_tac_397_);
v_a_387_ = v_tail_391_;
goto _start;
}
else
{
goto v___jp_398_;
}
}
}
else
{
lean_dec(v___x_401_);
goto v___jp_398_;
}
v___jp_398_:
{
lean_object* v___x_399_; 
v___x_399_ = lean_array_push(v_a_388_, v_tac_397_);
v_a_387_ = v_tail_391_;
v_a_388_ = v___x_399_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_span_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__3(lean_object* v_a_409_, lean_object* v_a_410_){
_start:
{
if (lean_obj_tag(v_a_409_) == 0)
{
lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_411_ = l_List_reverse___redArg(v_a_410_);
v___x_412_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_412_, 0, v___x_411_);
lean_ctor_set(v___x_412_, 1, v_a_409_);
return v___x_412_;
}
else
{
lean_object* v_head_413_; lean_object* v_tail_414_; uint8_t v___x_415_; 
v_head_413_ = lean_ctor_get(v_a_409_, 0);
v_tail_414_ = lean_ctor_get(v_a_409_, 1);
lean_inc(v_head_413_);
v___x_415_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative(v_head_413_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; lean_object* v___x_417_; 
v___x_416_ = l_List_reverse___redArg(v_a_410_);
v___x_417_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_417_, 0, v___x_416_);
lean_ctor_set(v___x_417_, 1, v_a_409_);
return v___x_417_;
}
else
{
lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_425_; 
lean_inc(v_tail_414_);
lean_inc(v_head_413_);
v_isSharedCheck_425_ = !lean_is_exclusive(v_a_409_);
if (v_isSharedCheck_425_ == 0)
{
lean_object* v_unused_426_; lean_object* v_unused_427_; 
v_unused_426_ = lean_ctor_get(v_a_409_, 1);
lean_dec(v_unused_426_);
v_unused_427_ = lean_ctor_get(v_a_409_, 0);
lean_dec(v_unused_427_);
v___x_419_ = v_a_409_;
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
else
{
lean_dec(v_a_409_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_425_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
lean_ctor_set(v___x_419_, 1, v_a_410_);
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_424_; 
v_reuseFailAlloc_424_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_424_, 0, v_head_413_);
lean_ctor_set(v_reuseFailAlloc_424_, 1, v_a_410_);
v___x_422_ = v_reuseFailAlloc_424_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
v_a_409_ = v_tail_414_;
v_a_410_ = v___x_422_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__0(lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
if (lean_obj_tag(v_a_428_) == 0)
{
lean_object* v___x_430_; 
v___x_430_ = lean_array_to_list(v_a_429_);
return v___x_430_;
}
else
{
lean_object* v_head_431_; lean_object* v_tail_432_; lean_object* v___x_433_; uint8_t v___x_434_; 
v_head_431_ = lean_ctor_get(v_a_428_, 0);
lean_inc_n(v_head_431_, 2);
v_tail_432_ = lean_ctor_get(v_a_428_, 1);
lean_inc(v_tail_432_);
lean_dec_ref_known(v_a_428_, 2);
v___x_433_ = ((lean_object*)(l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1___closed__1));
v___x_434_ = l_Lean_Syntax_isOfKind(v_head_431_, v___x_433_);
if (v___x_434_ == 0)
{
lean_dec(v_head_431_);
v_a_428_ = v_tail_432_;
goto _start;
}
else
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v_tac_438_; lean_object* v___x_442_; uint8_t v___x_443_; 
v___x_436_ = lean_unsigned_to_nat(0u);
v___x_437_ = lean_unsigned_to_nat(1u);
v_tac_438_ = l_Lean_Syntax_getArg(v_head_431_, v___x_436_);
v___x_442_ = l_Lean_Syntax_getArg(v_head_431_, v___x_437_);
lean_dec(v_head_431_);
v___x_443_ = l_Lean_Syntax_isNone(v___x_442_);
if (v___x_443_ == 0)
{
lean_object* v___x_444_; uint8_t v___x_445_; 
v___x_444_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_442_);
v___x_445_ = l_Lean_Syntax_matchesNull(v___x_442_, v___x_444_);
if (v___x_445_ == 0)
{
lean_dec(v___x_442_);
lean_dec(v_tac_438_);
v_a_428_ = v_tail_432_;
goto _start;
}
else
{
lean_object* v___x_447_; uint8_t v___x_448_; 
v___x_447_ = l_Lean_Syntax_getArg(v___x_442_, v___x_437_);
lean_dec(v___x_442_);
v___x_448_ = l_Lean_Syntax_matchesNull(v___x_447_, v___x_437_);
if (v___x_448_ == 0)
{
lean_dec(v_tac_438_);
v_a_428_ = v_tail_432_;
goto _start;
}
else
{
goto v___jp_439_;
}
}
}
else
{
lean_dec(v___x_442_);
goto v___jp_439_;
}
v___jp_439_:
{
lean_object* v___x_440_; 
v___x_440_ = lean_array_push(v_a_429_, v_tac_438_);
v_a_428_ = v_tail_432_;
v_a_429_ = v___x_440_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq(lean_object* v_x_567_, lean_object* v_a_568_, lean_object* v_a_569_, lean_object* v_a_570_){
_start:
{
if (lean_obj_tag(v_x_567_) == 0)
{
lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_572_ = lean_box(0);
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
return v___x_573_;
}
else
{
lean_object* v_head_574_; lean_object* v_tail_575_; uint8_t v___x_576_; 
v_head_574_ = lean_ctor_get(v_x_567_, 0);
v_tail_575_ = lean_ctor_get(v_x_567_, 1);
lean_inc(v_head_574_);
v___x_576_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative(v_head_574_);
if (v___x_576_ == 0)
{
lean_object* v___x_577_; 
lean_inc(v_tail_575_);
lean_inc(v_head_574_);
lean_dec_ref_known(v_x_567_, 2);
v___x_577_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect(v_head_574_, v_a_568_, v_a_569_, v_a_570_);
if (lean_obj_tag(v___x_577_) == 0)
{
lean_dec_ref_known(v___x_577_, 1);
v_x_567_ = v_tail_575_;
goto _start;
}
else
{
lean_dec(v_tail_575_);
return v___x_577_;
}
}
else
{
lean_object* v___x_579_; lean_object* v___x_580_; lean_object* v_fst_581_; lean_object* v_snd_582_; lean_object* v___x_583_; lean_object* v_rounds_584_; lean_object* v___x_585_; 
v___x_579_ = lean_box(0);
v___x_580_ = l_List_span_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__3(v_x_567_, v___x_579_);
v_fst_581_ = lean_ctor_get(v___x_580_, 0);
lean_inc(v_fst_581_);
v_snd_582_ = lean_ctor_get(v___x_580_, 1);
lean_inc(v_snd_582_);
lean_dec_ref(v___x_580_);
v___x_583_ = lean_st_ref_get(v_a_568_);
v_rounds_584_ = lean_ctor_get(v___x_583_, 2);
lean_inc_n(v_rounds_584_, 2);
lean_dec(v___x_583_);
v___x_585_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___redArg(v_rounds_584_, v_fst_581_, v_rounds_584_, v_a_568_, v_a_569_, v_a_570_);
lean_dec(v_fst_581_);
if (lean_obj_tag(v___x_585_) == 0)
{
lean_object* v_a_586_; lean_object* v___x_587_; lean_object* v_params_588_; lean_object* v_anchors_589_; uint8_t v_hasSorry_590_; lean_object* v_maxRounds_591_; lean_object* v___x_593_; uint8_t v_isShared_594_; uint8_t v_isSharedCheck_600_; 
v_a_586_ = lean_ctor_get(v___x_585_, 0);
lean_inc(v_a_586_);
lean_dec_ref_known(v___x_585_, 1);
v___x_587_ = lean_st_ref_take(v_a_568_);
v_params_588_ = lean_ctor_get(v___x_587_, 0);
v_anchors_589_ = lean_ctor_get(v___x_587_, 1);
v_hasSorry_590_ = lean_ctor_get_uint8(v___x_587_, sizeof(void*)*4);
v_maxRounds_591_ = lean_ctor_get(v___x_587_, 3);
v_isSharedCheck_600_ = !lean_is_exclusive(v___x_587_);
if (v_isSharedCheck_600_ == 0)
{
lean_object* v_unused_601_; 
v_unused_601_ = lean_ctor_get(v___x_587_, 2);
lean_dec(v_unused_601_);
v___x_593_ = v___x_587_;
v_isShared_594_ = v_isSharedCheck_600_;
goto v_resetjp_592_;
}
else
{
lean_inc(v_maxRounds_591_);
lean_inc(v_anchors_589_);
lean_inc(v_params_588_);
lean_dec(v___x_587_);
v___x_593_ = lean_box(0);
v_isShared_594_ = v_isSharedCheck_600_;
goto v_resetjp_592_;
}
v_resetjp_592_:
{
lean_object* v___x_596_; 
if (v_isShared_594_ == 0)
{
lean_ctor_set(v___x_593_, 2, v_a_586_);
v___x_596_ = v___x_593_;
goto v_reusejp_595_;
}
else
{
lean_object* v_reuseFailAlloc_599_; 
v_reuseFailAlloc_599_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_599_, 0, v_params_588_);
lean_ctor_set(v_reuseFailAlloc_599_, 1, v_anchors_589_);
lean_ctor_set(v_reuseFailAlloc_599_, 2, v_a_586_);
lean_ctor_set(v_reuseFailAlloc_599_, 3, v_maxRounds_591_);
lean_ctor_set_uint8(v_reuseFailAlloc_599_, sizeof(void*)*4, v_hasSorry_590_);
v___x_596_ = v_reuseFailAlloc_599_;
goto v_reusejp_595_;
}
v_reusejp_595_:
{
lean_object* v___x_597_; 
v___x_597_ = lean_st_ref_put(v_a_568_, v___x_596_);
v_x_567_ = v_snd_582_;
goto _start;
}
}
}
else
{
lean_object* v_a_602_; lean_object* v___x_604_; uint8_t v_isShared_605_; uint8_t v_isSharedCheck_609_; 
lean_dec(v_snd_582_);
v_a_602_ = lean_ctor_get(v___x_585_, 0);
v_isSharedCheck_609_ = !lean_is_exclusive(v___x_585_);
if (v_isSharedCheck_609_ == 0)
{
v___x_604_ = v___x_585_;
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
else
{
lean_inc(v_a_602_);
lean_dec(v___x_585_);
v___x_604_ = lean_box(0);
v_isShared_605_ = v_isSharedCheck_609_;
goto v_resetjp_603_;
}
v_resetjp_603_:
{
lean_object* v___x_607_; 
if (v_isShared_605_ == 0)
{
v___x_607_ = v___x_604_;
goto v_reusejp_606_;
}
else
{
lean_object* v_reuseFailAlloc_608_; 
v_reuseFailAlloc_608_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_608_, 0, v_a_602_);
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
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect(lean_object* v_tac_610_, lean_object* v_a_611_, lean_object* v_a_612_, lean_object* v_a_613_){
_start:
{
lean_object* v_params_x3f_616_; lean_object* v___y_617_; lean_object* v___y_618_; lean_object* v___y_619_; lean_object* v___x_632_; uint8_t v___x_633_; 
v___x_632_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__1));
lean_inc(v_tac_610_);
v___x_633_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_632_);
if (v___x_633_ == 0)
{
lean_object* v___x_634_; uint8_t v___x_635_; 
v___x_634_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__1));
lean_inc(v_tac_610_);
v___x_635_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_634_);
if (v___x_635_ == 0)
{
lean_object* v___x_636_; uint8_t v___x_637_; 
v___x_636_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__3));
lean_inc(v_tac_610_);
v___x_637_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_636_);
if (v___x_637_ == 0)
{
lean_object* v___x_638_; uint8_t v___x_639_; 
v___x_638_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__3));
lean_inc(v_tac_610_);
v___x_639_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_638_);
if (v___x_639_ == 0)
{
lean_object* v___x_640_; uint8_t v___x_641_; 
v___x_640_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__5));
lean_inc(v_tac_610_);
v___x_641_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_640_);
if (v___x_641_ == 0)
{
lean_object* v___x_642_; uint8_t v___x_643_; 
v___x_642_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__7));
lean_inc(v_tac_610_);
v___x_643_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_642_);
if (v___x_643_ == 0)
{
lean_object* v___x_644_; uint8_t v___x_645_; 
v___x_644_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__9));
lean_inc(v_tac_610_);
v___x_645_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_644_);
if (v___x_645_ == 0)
{
lean_object* v___x_646_; uint8_t v___x_647_; 
v___x_646_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__11));
lean_inc(v_tac_610_);
v___x_647_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_646_);
if (v___x_647_ == 0)
{
lean_object* v___x_648_; uint8_t v___x_649_; 
v___x_648_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__13));
lean_inc(v_tac_610_);
v___x_649_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_648_);
if (v___x_649_ == 0)
{
lean_object* v___x_650_; uint8_t v___x_651_; 
v___x_650_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__15));
lean_inc(v_tac_610_);
v___x_651_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_650_);
if (v___x_651_ == 0)
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__17));
lean_inc(v_tac_610_);
v___x_653_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; uint8_t v___x_655_; 
v___x_654_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__19));
lean_inc(v_tac_610_);
v___x_655_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_654_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; uint8_t v___x_657_; 
v___x_656_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__21));
lean_inc(v_tac_610_);
v___x_657_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_656_);
if (v___x_657_ == 0)
{
lean_object* v___x_658_; uint8_t v___x_659_; 
v___x_658_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__23));
lean_inc(v_tac_610_);
v___x_659_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_658_);
if (v___x_659_ == 0)
{
lean_object* v___x_660_; uint8_t v___x_661_; 
v___x_660_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__25));
lean_inc(v_tac_610_);
v___x_661_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_660_);
if (v___x_661_ == 0)
{
lean_object* v___x_662_; uint8_t v___x_663_; 
v___x_662_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__27));
v___x_663_ = l_Lean_Syntax_isOfKind(v_tac_610_, v___x_662_);
if (v___x_663_ == 0)
{
lean_object* v___x_664_; 
v___x_664_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_664_;
}
else
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_box(0);
v___x_666_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_666_, 0, v___x_665_);
return v___x_666_;
}
}
else
{
lean_object* v___x_667_; lean_object* v___x_668_; lean_object* v___x_669_; uint8_t v___x_670_; 
v___x_667_ = lean_unsigned_to_nat(0u);
v___x_668_ = lean_unsigned_to_nat(1u);
v___x_669_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_668_);
lean_dec(v_tac_610_);
v___x_670_ = l_Lean_Syntax_matchesNull(v___x_669_, v___x_667_);
if (v___x_670_ == 0)
{
lean_object* v___x_671_; 
v___x_671_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_671_;
}
else
{
lean_object* v___x_672_; lean_object* v___x_673_; 
v___x_672_ = lean_box(0);
v___x_673_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_673_, 0, v___x_672_);
return v___x_673_;
}
}
}
else
{
lean_object* v___x_674_; lean_object* v___x_675_; 
lean_dec(v_tac_610_);
v___x_674_ = lean_box(0);
v___x_675_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_675_, 0, v___x_674_);
return v___x_675_;
}
}
else
{
lean_object* v___x_676_; lean_object* v___x_677_; 
lean_dec(v_tac_610_);
v___x_676_ = lean_box(0);
v___x_677_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_677_, 0, v___x_676_);
return v___x_677_;
}
}
else
{
lean_object* v___x_678_; lean_object* v___x_679_; 
lean_dec(v_tac_610_);
v___x_678_ = lean_box(0);
v___x_679_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_679_, 0, v___x_678_);
return v___x_679_;
}
}
else
{
lean_object* v___x_680_; lean_object* v___x_681_; 
lean_dec(v_tac_610_);
v___x_680_ = lean_box(0);
v___x_681_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_681_, 0, v___x_680_);
return v___x_681_;
}
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; 
lean_dec(v_tac_610_);
v___x_682_ = lean_box(0);
v___x_683_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_683_, 0, v___x_682_);
return v___x_683_;
}
}
else
{
lean_object* v___x_684_; lean_object* v___x_685_; 
lean_dec(v_tac_610_);
v___x_684_ = lean_box(0);
v___x_685_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_685_, 0, v___x_684_);
return v___x_685_;
}
}
else
{
lean_object* v___x_686_; lean_object* v___x_687_; 
lean_dec(v_tac_610_);
v___x_686_ = lean_box(0);
v___x_687_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
return v___x_687_;
}
}
else
{
lean_object* v___x_688_; lean_object* v___y_690_; lean_object* v___y_691_; lean_object* v___y_692_; lean_object* v___y_703_; lean_object* v___y_704_; lean_object* v___y_705_; lean_object* v___x_711_; uint8_t v___x_712_; 
v___x_688_ = lean_unsigned_to_nat(1u);
v___x_711_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_688_);
v___x_712_ = l_Lean_Syntax_isNone(v___x_711_);
if (v___x_712_ == 0)
{
uint8_t v___x_713_; 
v___x_713_ = l_Lean_Syntax_matchesNull(v___x_711_, v___x_688_);
if (v___x_713_ == 0)
{
lean_object* v___x_714_; 
lean_dec(v_tac_610_);
v___x_714_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_714_;
}
else
{
v___y_703_ = v_a_611_;
v___y_704_ = v_a_612_;
v___y_705_ = v_a_613_;
goto v___jp_702_;
}
}
else
{
lean_dec(v___x_711_);
v___y_703_ = v_a_611_;
v___y_704_ = v_a_612_;
v___y_705_ = v_a_613_;
goto v___jp_702_;
}
v___jp_689_:
{
lean_object* v___x_693_; lean_object* v___x_694_; uint8_t v___x_695_; 
v___x_693_ = lean_unsigned_to_nat(3u);
v___x_694_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_693_);
lean_dec(v_tac_610_);
v___x_695_ = l_Lean_Syntax_isNone(v___x_694_);
if (v___x_695_ == 0)
{
uint8_t v___x_696_; 
lean_inc(v___x_694_);
v___x_696_ = l_Lean_Syntax_matchesNull(v___x_694_, v___x_693_);
if (v___x_696_ == 0)
{
lean_object* v___x_697_; 
lean_dec(v___x_694_);
v___x_697_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v___y_690_);
return v___x_697_;
}
else
{
lean_object* v___x_698_; lean_object* v_params_x3f_699_; lean_object* v___x_700_; 
v___x_698_ = l_Lean_Syntax_getArg(v___x_694_, v___x_688_);
lean_dec(v___x_694_);
v_params_x3f_699_ = l_Lean_Syntax_getArgs(v___x_698_);
lean_dec(v___x_698_);
v___x_700_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_700_, 0, v_params_x3f_699_);
v_params_x3f_616_ = v___x_700_;
v___y_617_ = v___y_690_;
v___y_618_ = v___y_691_;
v___y_619_ = v___y_692_;
goto v___jp_615_;
}
}
else
{
lean_object* v___x_701_; 
lean_dec(v___x_694_);
v___x_701_ = lean_box(0);
v_params_x3f_616_ = v___x_701_;
v___y_617_ = v___y_690_;
v___y_618_ = v___y_691_;
v___y_619_ = v___y_692_;
goto v___jp_615_;
}
}
v___jp_702_:
{
lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v___x_706_ = lean_unsigned_to_nat(2u);
v___x_707_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_706_);
v___x_708_ = l_Lean_Syntax_isNone(v___x_707_);
if (v___x_708_ == 0)
{
uint8_t v___x_709_; 
v___x_709_ = l_Lean_Syntax_matchesNull(v___x_707_, v___x_688_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; 
lean_dec(v_tac_610_);
v___x_710_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v___y_703_);
return v___x_710_;
}
else
{
v___y_690_ = v___y_703_;
v___y_691_ = v___y_704_;
v___y_692_ = v___y_705_;
goto v___jp_689_;
}
}
else
{
lean_dec(v___x_707_);
v___y_690_ = v___y_703_;
v___y_691_ = v___y_704_;
v___y_692_ = v___y_705_;
goto v___jp_689_;
}
}
}
}
else
{
lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v_params_717_; lean_object* v___x_718_; 
v___x_715_ = lean_unsigned_to_nat(2u);
v___x_716_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_715_);
lean_dec(v_tac_610_);
v_params_717_ = l_Lean_Syntax_getArgs(v___x_716_);
lean_dec(v___x_716_);
v___x_718_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
if (lean_obj_tag(v___x_718_) == 0)
{
lean_object* v___x_719_; 
lean_dec_ref_known(v___x_718_, 1);
v___x_719_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams(v_params_717_, v_a_611_, v_a_612_, v_a_613_);
lean_dec_ref(v_params_717_);
return v___x_719_;
}
else
{
lean_dec_ref(v_params_717_);
return v___x_718_;
}
}
}
else
{
lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; uint8_t v___x_724_; 
v___x_720_ = lean_unsigned_to_nat(0u);
v___x_721_ = lean_unsigned_to_nat(1u);
v___x_722_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_721_);
lean_dec(v_tac_610_);
v___x_723_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__29));
lean_inc(v___x_722_);
v___x_724_ = l_Lean_Syntax_isOfKind(v___x_722_, v___x_723_);
if (v___x_724_ == 0)
{
lean_object* v___x_725_; uint8_t v___x_726_; 
v___x_725_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__31));
lean_inc(v___x_722_);
v___x_726_ = l_Lean_Syntax_isOfKind(v___x_722_, v___x_725_);
if (v___x_726_ == 0)
{
lean_object* v___x_727_; 
lean_dec(v___x_722_);
v___x_727_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_727_;
}
else
{
lean_object* v_a_728_; lean_object* v___x_729_; uint8_t v___x_730_; 
v_a_728_ = l_Lean_Syntax_getArg(v___x_722_, v___x_720_);
v___x_729_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11));
lean_inc(v_a_728_);
v___x_730_ = l_Lean_Syntax_isOfKind(v_a_728_, v___x_729_);
if (v___x_730_ == 0)
{
lean_object* v___x_731_; 
lean_dec(v_a_728_);
lean_dec(v___x_722_);
v___x_731_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_731_;
}
else
{
lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; uint8_t v___x_735_; 
v___x_732_ = lean_unsigned_to_nat(2u);
v___x_733_ = l_Lean_Syntax_getArg(v___x_722_, v___x_732_);
lean_dec(v___x_722_);
v___x_734_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__33));
v___x_735_ = l_Lean_Syntax_isOfKind(v___x_733_, v___x_734_);
if (v___x_735_ == 0)
{
lean_object* v___x_736_; 
lean_dec(v_a_728_);
v___x_736_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_736_;
}
else
{
lean_object* v___x_737_; 
v___x_737_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg(v_a_728_, v_a_611_);
if (lean_obj_tag(v___x_737_) == 0)
{
lean_object* v___x_738_; 
lean_dec_ref_known(v___x_737_, 1);
v___x_738_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg(v_a_611_);
return v___x_738_;
}
else
{
return v___x_737_;
}
}
}
}
}
else
{
lean_object* v_a_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
v_a_739_ = l_Lean_Syntax_getArg(v___x_722_, v___x_720_);
lean_dec(v___x_722_);
v___x_740_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__11));
lean_inc(v_a_739_);
v___x_741_ = l_Lean_Syntax_isOfKind(v_a_739_, v___x_740_);
if (v___x_741_ == 0)
{
lean_object* v___x_742_; 
lean_dec(v_a_739_);
v___x_742_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_742_;
}
else
{
lean_object* v___x_743_; 
v___x_743_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushAnchor___redArg(v_a_739_, v_a_611_);
if (lean_obj_tag(v___x_743_) == 0)
{
lean_object* v___x_744_; 
lean_dec_ref_known(v___x_743_, 1);
v___x_744_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_resetRounds___redArg(v_a_611_);
return v___x_744_;
}
else
{
return v___x_743_;
}
}
}
}
}
else
{
lean_object* v___x_745_; lean_object* v_tac_u2081_746_; lean_object* v___x_747_; lean_object* v_tac_u2082_748_; lean_object* v___x_749_; 
v___x_745_ = lean_unsigned_to_nat(0u);
v_tac_u2081_746_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_745_);
v___x_747_ = lean_unsigned_to_nat(2u);
v_tac_u2082_748_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_747_);
lean_dec(v_tac_610_);
v___x_749_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect(v_tac_u2081_746_, v_a_611_, v_a_612_, v_a_613_);
if (lean_obj_tag(v___x_749_) == 0)
{
lean_dec_ref_known(v___x_749_, 1);
v_tac_610_ = v_tac_u2082_748_;
goto _start;
}
else
{
lean_dec(v_tac_u2082_748_);
return v___x_749_;
}
}
}
else
{
lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; uint8_t v___x_754_; 
v___x_751_ = lean_unsigned_to_nat(1u);
v___x_752_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_751_);
lean_dec(v_tac_610_);
v___x_753_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5));
lean_inc(v___x_752_);
v___x_754_ = l_Lean_Syntax_isOfKind(v___x_752_, v___x_753_);
if (v___x_754_ == 0)
{
lean_object* v___x_755_; 
lean_dec(v___x_752_);
v___x_755_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_755_;
}
else
{
lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; uint8_t v___x_759_; 
v___x_756_ = lean_unsigned_to_nat(0u);
v___x_757_ = l_Lean_Syntax_getArg(v___x_752_, v___x_756_);
lean_dec(v___x_752_);
v___x_758_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7));
lean_inc(v___x_757_);
v___x_759_ = l_Lean_Syntax_isOfKind(v___x_757_, v___x_758_);
if (v___x_759_ == 0)
{
lean_object* v___x_760_; 
lean_dec(v___x_757_);
v___x_760_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_760_;
}
else
{
lean_object* v___x_761_; lean_object* v_seq_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; 
v___x_761_ = l_Lean_Syntax_getArg(v___x_757_, v___x_756_);
lean_dec(v___x_757_);
v_seq_762_ = l_Lean_Syntax_getArgs(v___x_761_);
lean_dec(v___x_761_);
v___x_763_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_seq_762_);
lean_dec_ref(v_seq_762_);
v___x_764_ = lean_array_to_list(v___x_763_);
v___x_765_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34));
v___x_766_ = l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__0(v___x_764_, v___x_765_);
v___x_767_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq(v___x_766_, v_a_611_, v_a_612_, v_a_613_);
return v___x_767_;
}
}
}
}
else
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; uint8_t v___x_771_; 
v___x_768_ = lean_unsigned_to_nat(0u);
v___x_769_ = lean_unsigned_to_nat(1u);
v___x_770_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_769_);
v___x_771_ = l_Lean_Syntax_matchesNull(v___x_770_, v___x_768_);
if (v___x_771_ == 0)
{
lean_object* v___x_772_; 
lean_dec(v_tac_610_);
v___x_772_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_772_;
}
else
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
v___x_773_ = lean_unsigned_to_nat(3u);
v___x_774_ = l_Lean_Syntax_getArg(v_tac_610_, v___x_773_);
lean_dec(v_tac_610_);
v___x_775_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__5));
lean_inc(v___x_774_);
v___x_776_ = l_Lean_Syntax_isOfKind(v___x_774_, v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; 
lean_dec(v___x_774_);
v___x_777_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_777_;
}
else
{
lean_object* v___x_778_; lean_object* v___x_779_; uint8_t v___x_780_; 
v___x_778_ = l_Lean_Syntax_getArg(v___x_774_, v___x_768_);
lean_dec(v___x_774_);
v___x_779_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_isAlternative___closed__7));
lean_inc(v___x_778_);
v___x_780_ = l_Lean_Syntax_isOfKind(v___x_778_, v___x_779_);
if (v___x_780_ == 0)
{
lean_object* v___x_781_; 
lean_dec(v___x_778_);
v___x_781_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v_a_611_);
return v___x_781_;
}
else
{
lean_object* v___x_782_; lean_object* v_seq_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; 
v___x_782_ = l_Lean_Syntax_getArg(v___x_778_, v___x_768_);
lean_dec(v___x_778_);
v_seq_783_ = l_Lean_Syntax_getArgs(v___x_782_);
lean_dec(v___x_782_);
v___x_784_ = l_Lean_Syntax_TSepArray_getElems___redArg(v_seq_783_);
lean_dec_ref(v_seq_783_);
v___x_785_ = lean_array_to_list(v___x_784_);
v___x_786_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34));
v___x_787_ = l_List_filterMapTR_go___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect_spec__1(v___x_785_, v___x_786_);
v___x_788_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq(v___x_787_, v_a_611_, v_a_612_, v_a_613_);
return v___x_788_;
}
}
}
}
}
else
{
lean_object* v___x_789_; lean_object* v_params_790_; lean_object* v_anchors_791_; lean_object* v_rounds_792_; lean_object* v_maxRounds_793_; lean_object* v___x_795_; uint8_t v_isShared_796_; uint8_t v_isSharedCheck_803_; 
lean_dec(v_tac_610_);
v___x_789_ = lean_st_ref_take(v_a_611_);
v_params_790_ = lean_ctor_get(v___x_789_, 0);
v_anchors_791_ = lean_ctor_get(v___x_789_, 1);
v_rounds_792_ = lean_ctor_get(v___x_789_, 2);
v_maxRounds_793_ = lean_ctor_get(v___x_789_, 3);
v_isSharedCheck_803_ = !lean_is_exclusive(v___x_789_);
if (v_isSharedCheck_803_ == 0)
{
v___x_795_ = v___x_789_;
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
else
{
lean_inc(v_maxRounds_793_);
lean_inc(v_rounds_792_);
lean_inc(v_anchors_791_);
lean_inc(v_params_790_);
lean_dec(v___x_789_);
v___x_795_ = lean_box(0);
v_isShared_796_ = v_isSharedCheck_803_;
goto v_resetjp_794_;
}
v_resetjp_794_:
{
lean_object* v___x_797_; lean_object* v___x_799_; 
v___x_797_ = lean_box(0);
if (v_isShared_796_ == 0)
{
v___x_799_ = v___x_795_;
goto v_reusejp_798_;
}
else
{
lean_object* v_reuseFailAlloc_802_; 
v_reuseFailAlloc_802_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_802_, 0, v_params_790_);
lean_ctor_set(v_reuseFailAlloc_802_, 1, v_anchors_791_);
lean_ctor_set(v_reuseFailAlloc_802_, 2, v_rounds_792_);
lean_ctor_set(v_reuseFailAlloc_802_, 3, v_maxRounds_793_);
v___x_799_ = v_reuseFailAlloc_802_;
goto v_reusejp_798_;
}
v_reusejp_798_:
{
lean_object* v___x_800_; lean_object* v___x_801_; 
lean_ctor_set_uint8(v___x_799_, sizeof(void*)*4, v___x_633_);
v___x_800_ = lean_st_ref_put(v_a_611_, v___x_799_);
v___x_801_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_801_, 0, v___x_797_);
return v___x_801_;
}
}
}
v___jp_615_:
{
lean_object* v___x_620_; 
v___x_620_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_pushRound___redArg(v___y_617_);
if (lean_obj_tag(v___x_620_) == 0)
{
lean_object* v___x_622_; uint8_t v_isShared_623_; uint8_t v_isSharedCheck_630_; 
v_isSharedCheck_630_ = !lean_is_exclusive(v___x_620_);
if (v_isSharedCheck_630_ == 0)
{
lean_object* v_unused_631_; 
v_unused_631_ = lean_ctor_get(v___x_620_, 0);
lean_dec(v_unused_631_);
v___x_622_ = v___x_620_;
v_isShared_623_ = v_isSharedCheck_630_;
goto v_resetjp_621_;
}
else
{
lean_dec(v___x_620_);
v___x_622_ = lean_box(0);
v_isShared_623_ = v_isSharedCheck_630_;
goto v_resetjp_621_;
}
v_resetjp_621_:
{
if (lean_obj_tag(v_params_x3f_616_) == 1)
{
lean_object* v_val_624_; lean_object* v___x_625_; 
lean_del_object(v___x_622_);
v_val_624_ = lean_ctor_get(v_params_x3f_616_, 0);
lean_inc(v_val_624_);
lean_dec_ref_known(v_params_x3f_616_, 1);
v___x_625_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams(v_val_624_, v___y_617_, v___y_618_, v___y_619_);
lean_dec(v_val_624_);
return v___x_625_;
}
else
{
lean_object* v___x_626_; lean_object* v___x_628_; 
lean_dec(v_params_x3f_616_);
v___x_626_ = lean_box(0);
if (v_isShared_623_ == 0)
{
lean_ctor_set(v___x_622_, 0, v___x_626_);
v___x_628_ = v___x_622_;
goto v_reusejp_627_;
}
else
{
lean_object* v_reuseFailAlloc_629_; 
v_reuseFailAlloc_629_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_629_, 0, v___x_626_);
v___x_628_ = v_reuseFailAlloc_629_;
goto v_reusejp_627_;
}
v_reusejp_627_:
{
return v___x_628_;
}
}
}
}
else
{
lean_dec(v_params_x3f_616_);
return v___x_620_;
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___redArg(lean_object* v___x_804_, lean_object* v_as_x27_805_, lean_object* v_b_806_, lean_object* v___y_807_, lean_object* v___y_808_, lean_object* v___y_809_){
_start:
{
if (lean_obj_tag(v_as_x27_805_) == 0)
{
lean_object* v___x_811_; 
lean_dec(v___x_804_);
v___x_811_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_811_, 0, v_b_806_);
return v___x_811_;
}
else
{
lean_object* v_head_812_; lean_object* v_tail_813_; lean_object* v___x_814_; lean_object* v_params_815_; lean_object* v_anchors_816_; uint8_t v_hasSorry_817_; lean_object* v_maxRounds_818_; lean_object* v___x_820_; uint8_t v_isShared_821_; uint8_t v_isSharedCheck_840_; 
v_head_812_ = lean_ctor_get(v_as_x27_805_, 0);
v_tail_813_ = lean_ctor_get(v_as_x27_805_, 1);
v___x_814_ = lean_st_ref_take(v___y_807_);
v_params_815_ = lean_ctor_get(v___x_814_, 0);
v_anchors_816_ = lean_ctor_get(v___x_814_, 1);
v_hasSorry_817_ = lean_ctor_get_uint8(v___x_814_, sizeof(void*)*4);
v_maxRounds_818_ = lean_ctor_get(v___x_814_, 3);
v_isSharedCheck_840_ = !lean_is_exclusive(v___x_814_);
if (v_isSharedCheck_840_ == 0)
{
lean_object* v_unused_841_; 
v_unused_841_ = lean_ctor_get(v___x_814_, 2);
lean_dec(v_unused_841_);
v___x_820_ = v___x_814_;
v_isShared_821_ = v_isSharedCheck_840_;
goto v_resetjp_819_;
}
else
{
lean_inc(v_maxRounds_818_);
lean_inc(v_anchors_816_);
lean_inc(v_params_815_);
lean_dec(v___x_814_);
v___x_820_ = lean_box(0);
v_isShared_821_ = v_isSharedCheck_840_;
goto v_resetjp_819_;
}
v_resetjp_819_:
{
lean_object* v___x_823_; 
lean_inc(v___x_804_);
if (v_isShared_821_ == 0)
{
lean_ctor_set(v___x_820_, 2, v___x_804_);
v___x_823_ = v___x_820_;
goto v_reusejp_822_;
}
else
{
lean_object* v_reuseFailAlloc_839_; 
v_reuseFailAlloc_839_ = lean_alloc_ctor(0, 4, 1);
lean_ctor_set(v_reuseFailAlloc_839_, 0, v_params_815_);
lean_ctor_set(v_reuseFailAlloc_839_, 1, v_anchors_816_);
lean_ctor_set(v_reuseFailAlloc_839_, 2, v___x_804_);
lean_ctor_set(v_reuseFailAlloc_839_, 3, v_maxRounds_818_);
lean_ctor_set_uint8(v_reuseFailAlloc_839_, sizeof(void*)*4, v_hasSorry_817_);
v___x_823_ = v_reuseFailAlloc_839_;
goto v_reusejp_822_;
}
v_reusejp_822_:
{
lean_object* v___x_824_; lean_object* v___x_825_; 
v___x_824_ = lean_st_ref_put(v___y_807_, v___x_823_);
lean_inc(v_head_812_);
v___x_825_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect(v_head_812_, v___y_807_, v___y_808_, v___y_809_);
if (lean_obj_tag(v___x_825_) == 0)
{
lean_object* v___x_826_; lean_object* v_rounds_827_; uint8_t v___x_828_; 
lean_dec_ref_known(v___x_825_, 1);
v___x_826_ = lean_st_ref_get(v___y_807_);
v_rounds_827_ = lean_ctor_get(v___x_826_, 2);
lean_inc(v_rounds_827_);
lean_dec(v___x_826_);
v___x_828_ = lean_nat_dec_le(v_b_806_, v_rounds_827_);
if (v___x_828_ == 0)
{
lean_dec(v_rounds_827_);
v_as_x27_805_ = v_tail_813_;
goto _start;
}
else
{
lean_dec(v_b_806_);
v_as_x27_805_ = v_tail_813_;
v_b_806_ = v_rounds_827_;
goto _start;
}
}
else
{
lean_object* v_a_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_838_; 
lean_dec(v_b_806_);
lean_dec(v___x_804_);
v_a_831_ = lean_ctor_get(v___x_825_, 0);
v_isSharedCheck_838_ = !lean_is_exclusive(v___x_825_);
if (v_isSharedCheck_838_ == 0)
{
v___x_833_ = v___x_825_;
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_a_831_);
lean_dec(v___x_825_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_838_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_836_; 
if (v_isShared_834_ == 0)
{
v___x_836_ = v___x_833_;
goto v_reusejp_835_;
}
else
{
lean_object* v_reuseFailAlloc_837_; 
v_reuseFailAlloc_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_837_, 0, v_a_831_);
v___x_836_ = v_reuseFailAlloc_837_;
goto v_reusejp_835_;
}
v_reusejp_835_:
{
return v___x_836_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___redArg___boxed(lean_object* v___x_842_, lean_object* v_as_x27_843_, lean_object* v_b_844_, lean_object* v___y_845_, lean_object* v___y_846_, lean_object* v___y_847_, lean_object* v___y_848_){
_start:
{
lean_object* v_res_849_; 
v_res_849_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___redArg(v___x_842_, v_as_x27_843_, v_b_844_, v___y_845_, v___y_846_, v___y_847_);
lean_dec(v___y_847_);
lean_dec_ref(v___y_846_);
lean_dec(v___y_845_);
lean_dec(v_as_x27_843_);
return v_res_849_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq___boxed(lean_object* v_x_850_, lean_object* v_a_851_, lean_object* v_a_852_, lean_object* v_a_853_, lean_object* v_a_854_){
_start:
{
lean_object* v_res_855_; 
v_res_855_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq(v_x_850_, v_a_851_, v_a_852_, v_a_853_);
lean_dec(v_a_853_);
lean_dec_ref(v_a_852_);
lean_dec(v_a_851_);
return v_res_855_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___boxed(lean_object* v_tac_856_, lean_object* v_a_857_, lean_object* v_a_858_, lean_object* v_a_859_, lean_object* v_a_860_){
_start:
{
lean_object* v_res_861_; 
v_res_861_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect(v_tac_856_, v_a_857_, v_a_858_, v_a_859_);
lean_dec(v_a_859_);
lean_dec_ref(v_a_858_);
lean_dec(v_a_857_);
return v_res_861_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4(lean_object* v___x_862_, lean_object* v_as_863_, lean_object* v_as_x27_864_, lean_object* v_b_865_, lean_object* v_a_866_, lean_object* v___y_867_, lean_object* v___y_868_, lean_object* v___y_869_){
_start:
{
lean_object* v___x_871_; 
v___x_871_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___redArg(v___x_862_, v_as_x27_864_, v_b_865_, v___y_867_, v___y_868_, v___y_869_);
return v___x_871_;
}
}
LEAN_EXPORT lean_object* l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4___boxed(lean_object* v___x_872_, lean_object* v_as_873_, lean_object* v_as_x27_874_, lean_object* v_b_875_, lean_object* v_a_876_, lean_object* v___y_877_, lean_object* v___y_878_, lean_object* v___y_879_, lean_object* v___y_880_){
_start:
{
lean_object* v_res_881_; 
v_res_881_ = l_List_forIn_x27_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq_spec__4(v___x_872_, v_as_873_, v_as_x27_874_, v_b_875_, v_a_876_, v___y_877_, v___y_878_, v___y_879_);
lean_dec(v___y_879_);
lean_dec_ref(v___y_878_);
lean_dec(v___y_877_);
lean_dec(v_as_x27_874_);
lean_dec(v_as_873_);
return v_res_881_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_main(lean_object* v_seq_882_, lean_object* v_a_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
lean_object* v___x_887_; 
v___x_887_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq(v_seq_882_, v_a_883_, v_a_884_, v_a_885_);
return v___x_887_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_main___boxed(lean_object* v_seq_888_, lean_object* v_a_889_, lean_object* v_a_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
lean_object* v_res_893_; 
v_res_893_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_main(v_seq_888_, v_a_889_, v_a_890_, v_a_891_);
lean_dec(v_a_891_);
lean_dec_ref(v_a_890_);
lean_dec(v_a_889_);
return v_res_893_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___redArg(size_t v_sz_894_, size_t v_i_895_, lean_object* v_bs_896_, lean_object* v___y_897_){
_start:
{
uint8_t v___x_899_; 
v___x_899_ = lean_usize_dec_lt(v_i_895_, v_sz_894_);
if (v___x_899_ == 0)
{
lean_object* v___x_900_; 
v___x_900_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_900_, 0, v_bs_896_);
return v___x_900_;
}
else
{
lean_object* v_ref_901_; lean_object* v_v_902_; lean_object* v___x_903_; lean_object* v_bs_x27_904_; uint8_t v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; size_t v___x_909_; size_t v___x_910_; lean_object* v___x_911_; 
v_ref_901_ = lean_ctor_get(v___y_897_, 2);
v_v_902_ = lean_array_uget(v_bs_896_, v_i_895_);
v___x_903_ = lean_unsigned_to_nat(0u);
v_bs_x27_904_ = lean_array_uset(v_bs_896_, v_i_895_, v___x_903_);
v___x_905_ = 0;
v___x_906_ = l_Lean_SourceInfo_fromRef(v_ref_901_, v___x_905_);
v___x_907_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectInstantiateParams_spec__0___redArg___closed__13));
v___x_908_ = l_Lean_Syntax_node1(v___x_906_, v___x_907_, v_v_902_);
v___x_909_ = ((size_t)1ULL);
v___x_910_ = lean_usize_add(v_i_895_, v___x_909_);
v___x_911_ = lean_array_uset(v_bs_x27_904_, v_i_895_, v___x_908_);
v_i_895_ = v___x_910_;
v_bs_896_ = v___x_911_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___redArg___boxed(lean_object* v_sz_913_, lean_object* v_i_914_, lean_object* v_bs_915_, lean_object* v___y_916_, lean_object* v___y_917_){
_start:
{
size_t v_sz_boxed_918_; size_t v_i_boxed_919_; lean_object* v_res_920_; 
v_sz_boxed_918_ = lean_unbox_usize(v_sz_913_);
lean_dec(v_sz_913_);
v_i_boxed_919_ = lean_unbox_usize(v_i_914_);
lean_dec(v_i_914_);
v_res_920_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___redArg(v_sz_boxed_918_, v_i_boxed_919_, v_bs_915_, v___y_916_);
lean_dec_ref(v___y_916_);
return v_res_920_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore(lean_object* v_seq_925_, lean_object* v_a_926_, lean_object* v_a_927_){
_start:
{
lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; 
v___x_929_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore___closed__0));
v___x_930_ = lean_st_mk_ref(v___x_929_);
v___x_931_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collectSeq(v_seq_925_, v___x_930_, v_a_926_, v_a_927_);
if (lean_obj_tag(v___x_931_) == 0)
{
lean_object* v___x_932_; lean_object* v_params_933_; lean_object* v_anchors_934_; uint8_t v_hasSorry_935_; lean_object* v_maxRounds_936_; size_t v_sz_937_; size_t v___x_938_; lean_object* v___x_939_; 
lean_dec_ref_known(v___x_931_, 1);
v___x_932_ = lean_st_ref_get(v___x_930_);
lean_dec(v___x_930_);
v_params_933_ = lean_ctor_get(v___x_932_, 0);
lean_inc_ref(v_params_933_);
v_anchors_934_ = lean_ctor_get(v___x_932_, 1);
lean_inc_ref(v_anchors_934_);
v_hasSorry_935_ = lean_ctor_get_uint8(v___x_932_, sizeof(void*)*4);
v_maxRounds_936_ = lean_ctor_get(v___x_932_, 3);
lean_inc(v_maxRounds_936_);
lean_dec(v___x_932_);
v_sz_937_ = lean_array_size(v_anchors_934_);
v___x_938_ = ((size_t)0ULL);
v___x_939_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___redArg(v_sz_937_, v___x_938_, v_anchors_934_, v_a_926_);
if (lean_obj_tag(v___x_939_) == 0)
{
lean_object* v_a_940_; lean_object* v___x_942_; uint8_t v_isShared_943_; uint8_t v_isSharedCheck_948_; 
v_a_940_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_948_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_948_ == 0)
{
v___x_942_ = v___x_939_;
v_isShared_943_ = v_isSharedCheck_948_;
goto v_resetjp_941_;
}
else
{
lean_inc(v_a_940_);
lean_dec(v___x_939_);
v___x_942_ = lean_box(0);
v_isShared_943_ = v_isSharedCheck_948_;
goto v_resetjp_941_;
}
v_resetjp_941_:
{
lean_object* v___x_944_; lean_object* v___x_946_; 
v___x_944_ = lean_alloc_ctor(0, 3, 1);
lean_ctor_set(v___x_944_, 0, v_params_933_);
lean_ctor_set(v___x_944_, 1, v_a_940_);
lean_ctor_set(v___x_944_, 2, v_maxRounds_936_);
lean_ctor_set_uint8(v___x_944_, sizeof(void*)*3, v_hasSorry_935_);
if (v_isShared_943_ == 0)
{
lean_ctor_set(v___x_942_, 0, v___x_944_);
v___x_946_ = v___x_942_;
goto v_reusejp_945_;
}
else
{
lean_object* v_reuseFailAlloc_947_; 
v_reuseFailAlloc_947_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_947_, 0, v___x_944_);
v___x_946_ = v_reuseFailAlloc_947_;
goto v_reusejp_945_;
}
v_reusejp_945_:
{
return v___x_946_;
}
}
}
else
{
lean_object* v_a_949_; lean_object* v___x_951_; uint8_t v_isShared_952_; uint8_t v_isSharedCheck_956_; 
lean_dec(v_maxRounds_936_);
lean_dec_ref(v_params_933_);
v_a_949_ = lean_ctor_get(v___x_939_, 0);
v_isSharedCheck_956_ = !lean_is_exclusive(v___x_939_);
if (v_isSharedCheck_956_ == 0)
{
v___x_951_ = v___x_939_;
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
else
{
lean_inc(v_a_949_);
lean_dec(v___x_939_);
v___x_951_ = lean_box(0);
v_isShared_952_ = v_isSharedCheck_956_;
goto v_resetjp_950_;
}
v_resetjp_950_:
{
lean_object* v___x_954_; 
if (v_isShared_952_ == 0)
{
v___x_954_ = v___x_951_;
goto v_reusejp_953_;
}
else
{
lean_object* v_reuseFailAlloc_955_; 
v_reuseFailAlloc_955_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_955_, 0, v_a_949_);
v___x_954_ = v_reuseFailAlloc_955_;
goto v_reusejp_953_;
}
v_reusejp_953_:
{
return v___x_954_;
}
}
}
}
else
{
lean_object* v_a_957_; lean_object* v___x_959_; uint8_t v_isShared_960_; uint8_t v_isSharedCheck_964_; 
lean_dec(v___x_930_);
v_a_957_ = lean_ctor_get(v___x_931_, 0);
v_isSharedCheck_964_ = !lean_is_exclusive(v___x_931_);
if (v_isSharedCheck_964_ == 0)
{
v___x_959_ = v___x_931_;
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
else
{
lean_inc(v_a_957_);
lean_dec(v___x_931_);
v___x_959_ = lean_box(0);
v_isShared_960_ = v_isSharedCheck_964_;
goto v_resetjp_958_;
}
v_resetjp_958_:
{
lean_object* v___x_962_; 
if (v_isShared_960_ == 0)
{
v___x_962_ = v___x_959_;
goto v_reusejp_961_;
}
else
{
lean_object* v_reuseFailAlloc_963_; 
v_reuseFailAlloc_963_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_963_, 0, v_a_957_);
v___x_962_ = v_reuseFailAlloc_963_;
goto v_reusejp_961_;
}
v_reusejp_961_:
{
return v___x_962_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore___boxed(lean_object* v_seq_965_, lean_object* v_a_966_, lean_object* v_a_967_, lean_object* v_a_968_){
_start:
{
lean_object* v_res_969_; 
v_res_969_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore(v_seq_965_, v_a_966_, v_a_967_);
lean_dec(v_a_967_);
lean_dec_ref(v_a_966_);
return v_res_969_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0(size_t v_sz_970_, size_t v_i_971_, lean_object* v_bs_972_, lean_object* v___y_973_, lean_object* v___y_974_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___redArg(v_sz_970_, v_i_971_, v_bs_972_, v___y_973_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0___boxed(lean_object* v_sz_977_, lean_object* v_i_978_, lean_object* v_bs_979_, lean_object* v___y_980_, lean_object* v___y_981_, lean_object* v___y_982_){
_start:
{
size_t v_sz_boxed_983_; size_t v_i_boxed_984_; lean_object* v_res_985_; 
v_sz_boxed_983_ = lean_unbox_usize(v_sz_977_);
lean_dec(v_sz_977_);
v_i_boxed_984_ = lean_unbox_usize(v_i_978_);
lean_dec(v_i_978_);
v_res_985_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00__private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore_spec__0(v_sz_boxed_983_, v_i_boxed_984_, v_bs_979_, v___y_980_, v___y_981_);
lean_dec(v___y_981_);
lean_dec_ref(v___y_980_);
return v_res_985_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParams(lean_object* v_seq_986_, lean_object* v_a_987_, lean_object* v_a_988_){
_start:
{
lean_object* v___x_990_; 
v___x_990_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore(v_seq_986_, v_a_987_, v_a_988_);
if (lean_obj_tag(v___x_990_) == 0)
{
lean_object* v_a_991_; lean_object* v___x_993_; uint8_t v_isShared_994_; uint8_t v_isSharedCheck_1001_; 
v_a_991_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1001_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1001_ == 0)
{
v___x_993_ = v___x_990_;
v_isShared_994_ = v_isSharedCheck_1001_;
goto v_resetjp_992_;
}
else
{
lean_inc(v_a_991_);
lean_dec(v___x_990_);
v___x_993_ = lean_box(0);
v_isShared_994_ = v_isSharedCheck_1001_;
goto v_resetjp_992_;
}
v_resetjp_992_:
{
lean_object* v_params_995_; lean_object* v_anchors_996_; lean_object* v___x_997_; lean_object* v___x_999_; 
v_params_995_ = lean_ctor_get(v_a_991_, 0);
lean_inc_ref(v_params_995_);
v_anchors_996_ = lean_ctor_get(v_a_991_, 1);
lean_inc_ref(v_anchors_996_);
lean_dec(v_a_991_);
v___x_997_ = l_Array_append___redArg(v_params_995_, v_anchors_996_);
lean_dec_ref(v_anchors_996_);
if (v_isShared_994_ == 0)
{
lean_ctor_set(v___x_993_, 0, v___x_997_);
v___x_999_ = v___x_993_;
goto v_reusejp_998_;
}
else
{
lean_object* v_reuseFailAlloc_1000_; 
v_reuseFailAlloc_1000_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1000_, 0, v___x_997_);
v___x_999_ = v_reuseFailAlloc_1000_;
goto v_reusejp_998_;
}
v_reusejp_998_:
{
return v___x_999_;
}
}
}
else
{
lean_object* v_a_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1009_; 
v_a_1002_ = lean_ctor_get(v___x_990_, 0);
v_isSharedCheck_1009_ = !lean_is_exclusive(v___x_990_);
if (v_isSharedCheck_1009_ == 0)
{
v___x_1004_ = v___x_990_;
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_a_1002_);
lean_dec(v___x_990_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1009_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1007_; 
if (v_isShared_1005_ == 0)
{
v___x_1007_ = v___x_1004_;
goto v_reusejp_1006_;
}
else
{
lean_object* v_reuseFailAlloc_1008_; 
v_reuseFailAlloc_1008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1008_, 0, v_a_1002_);
v___x_1007_ = v_reuseFailAlloc_1008_;
goto v_reusejp_1006_;
}
v_reusejp_1006_:
{
return v___x_1007_;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParams___boxed(lean_object* v_seq_1010_, lean_object* v_a_1011_, lean_object* v_a_1012_, lean_object* v_a_1013_){
_start:
{
lean_object* v_res_1014_; 
v_res_1014_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParams(v_seq_1010_, v_a_1011_, v_a_1012_);
lean_dec(v_a_1012_);
lean_dec_ref(v_a_1011_);
return v_res_1014_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkFinishTactic___closed__4(void){
_start:
{
lean_object* v___x_1025_; 
v___x_1025_ = l_Array_mkArray0___redArg();
return v___x_1025_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkFinishTactic(lean_object* v_seq_1030_, lean_object* v_extraParams_1031_, lean_object* v_a_1032_, lean_object* v_a_1033_){
_start:
{
lean_object* v___x_1035_; 
v___x_1035_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParams(v_seq_1030_, v_a_1032_, v_a_1033_);
if (lean_obj_tag(v___x_1035_) == 0)
{
lean_object* v_a_1036_; lean_object* v___x_1038_; uint8_t v_isShared_1039_; uint8_t v_isSharedCheck_1066_; 
v_a_1036_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1066_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1066_ == 0)
{
v___x_1038_ = v___x_1035_;
v_isShared_1039_ = v_isSharedCheck_1066_;
goto v_resetjp_1037_;
}
else
{
lean_inc(v_a_1036_);
lean_dec(v___x_1035_);
v___x_1038_ = lean_box(0);
v_isShared_1039_ = v_isSharedCheck_1066_;
goto v_resetjp_1037_;
}
v_resetjp_1037_:
{
lean_object* v_ref_1040_; lean_object* v___x_1041_; uint8_t v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1064_; 
v_ref_1040_ = lean_ctor_get(v_a_1032_, 2);
v___x_1041_ = l_Array_append___redArg(v_a_1036_, v_extraParams_1031_);
v___x_1042_ = 0;
v___x_1043_ = l_Lean_SourceInfo_fromRef(v_ref_1040_, v___x_1042_);
v___x_1044_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__0));
v___x_1045_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__1));
lean_inc_n(v___x_1043_, 8);
v___x_1046_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1046_, 0, v___x_1043_);
lean_ctor_set(v___x_1046_, 1, v___x_1044_);
v___x_1047_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__3));
v___x_1048_ = lean_obj_once(&l_Lean_Meta_Grind_mkFinishTactic___closed__4, &l_Lean_Meta_Grind_mkFinishTactic___closed__4_once, _init_l_Lean_Meta_Grind_mkFinishTactic___closed__4);
v___x_1049_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1049_, 0, v___x_1043_);
lean_ctor_set(v___x_1049_, 1, v___x_1047_);
lean_ctor_set(v___x_1049_, 2, v___x_1048_);
v___x_1050_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__5));
v___x_1051_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1043_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = l_Lean_Syntax_node1(v___x_1043_, v___x_1047_, v___x_1051_);
v___x_1053_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__6));
v___x_1054_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1054_, 0, v___x_1043_);
lean_ctor_set(v___x_1054_, 1, v___x_1053_);
v___x_1055_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__7));
v___x_1056_ = l_Lean_Syntax_SepArray_ofElems(v___x_1055_, v___x_1041_);
lean_dec_ref(v___x_1041_);
v___x_1057_ = l_Array_append___redArg(v___x_1048_, v___x_1056_);
lean_dec_ref(v___x_1056_);
v___x_1058_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1058_, 0, v___x_1043_);
lean_ctor_set(v___x_1058_, 1, v___x_1047_);
lean_ctor_set(v___x_1058_, 2, v___x_1057_);
v___x_1059_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__8));
v___x_1060_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1060_, 0, v___x_1043_);
lean_ctor_set(v___x_1060_, 1, v___x_1059_);
v___x_1061_ = l_Lean_Syntax_node3(v___x_1043_, v___x_1047_, v___x_1054_, v___x_1058_, v___x_1060_);
v___x_1062_ = l_Lean_Syntax_node4(v___x_1043_, v___x_1045_, v___x_1046_, v___x_1049_, v___x_1052_, v___x_1061_);
if (v_isShared_1039_ == 0)
{
lean_ctor_set(v___x_1038_, 0, v___x_1062_);
v___x_1064_ = v___x_1038_;
goto v_reusejp_1063_;
}
else
{
lean_object* v_reuseFailAlloc_1065_; 
v_reuseFailAlloc_1065_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1065_, 0, v___x_1062_);
v___x_1064_ = v_reuseFailAlloc_1065_;
goto v_reusejp_1063_;
}
v_reusejp_1063_:
{
return v___x_1064_;
}
}
}
else
{
lean_object* v_a_1067_; lean_object* v___x_1069_; uint8_t v_isShared_1070_; uint8_t v_isSharedCheck_1074_; 
v_a_1067_ = lean_ctor_get(v___x_1035_, 0);
v_isSharedCheck_1074_ = !lean_is_exclusive(v___x_1035_);
if (v_isSharedCheck_1074_ == 0)
{
v___x_1069_ = v___x_1035_;
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
else
{
lean_inc(v_a_1067_);
lean_dec(v___x_1035_);
v___x_1069_ = lean_box(0);
v_isShared_1070_ = v_isSharedCheck_1074_;
goto v_resetjp_1068_;
}
v_resetjp_1068_:
{
lean_object* v___x_1072_; 
if (v_isShared_1070_ == 0)
{
v___x_1072_ = v___x_1069_;
goto v_reusejp_1071_;
}
else
{
lean_object* v_reuseFailAlloc_1073_; 
v_reuseFailAlloc_1073_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1073_, 0, v_a_1067_);
v___x_1072_ = v_reuseFailAlloc_1073_;
goto v_reusejp_1071_;
}
v_reusejp_1071_:
{
return v___x_1072_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkFinishTactic___boxed(lean_object* v_seq_1075_, lean_object* v_extraParams_1076_, lean_object* v_a_1077_, lean_object* v_a_1078_, lean_object* v_a_1079_){
_start:
{
lean_object* v_res_1080_; 
v_res_1080_ = l_Lean_Meta_Grind_mkFinishTactic(v_seq_1075_, v_extraParams_1076_, v_a_1077_, v_a_1078_);
lean_dec(v_a_1078_);
lean_dec_ref(v_a_1077_);
lean_dec_ref(v_extraParams_1076_);
return v_res_1080_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg(lean_object* v_cfg_1087_, lean_object* v_params_1088_, lean_object* v_a_1089_){
_start:
{
lean_object* v___x_1091_; lean_object* v___x_1092_; uint8_t v___x_1093_; 
v___x_1091_ = lean_array_get_size(v_params_1088_);
v___x_1092_ = lean_unsigned_to_nat(0u);
v___x_1093_ = lean_nat_dec_eq(v___x_1091_, v___x_1092_);
if (v___x_1093_ == 0)
{
lean_object* v_ref_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v_ref_1094_ = lean_ctor_get(v_a_1089_, 2);
v___x_1095_ = l_Lean_SourceInfo_fromRef(v_ref_1094_, v___x_1093_);
v___x_1096_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__0));
v___x_1097_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1));
lean_inc_n(v___x_1095_, 8);
v___x_1098_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1098_, 0, v___x_1095_);
lean_ctor_set(v___x_1098_, 1, v___x_1096_);
v___x_1099_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__3));
v___x_1100_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__5));
v___x_1101_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1095_);
lean_ctor_set(v___x_1101_, 1, v___x_1100_);
v___x_1102_ = l_Lean_Syntax_node1(v___x_1095_, v___x_1099_, v___x_1101_);
v___x_1103_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__6));
v___x_1104_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1095_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = lean_obj_once(&l_Lean_Meta_Grind_mkFinishTactic___closed__4, &l_Lean_Meta_Grind_mkFinishTactic___closed__4_once, _init_l_Lean_Meta_Grind_mkFinishTactic___closed__4);
v___x_1106_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__7));
v___x_1107_ = l_Lean_Syntax_SepArray_ofElems(v___x_1106_, v_params_1088_);
v___x_1108_ = l_Array_append___redArg(v___x_1105_, v___x_1107_);
lean_dec_ref(v___x_1107_);
v___x_1109_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1095_);
lean_ctor_set(v___x_1109_, 1, v___x_1099_);
lean_ctor_set(v___x_1109_, 2, v___x_1108_);
v___x_1110_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__8));
v___x_1111_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1095_);
lean_ctor_set(v___x_1111_, 1, v___x_1110_);
v___x_1112_ = l_Lean_Syntax_node3(v___x_1095_, v___x_1099_, v___x_1104_, v___x_1109_, v___x_1111_);
v___x_1113_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1095_);
lean_ctor_set(v___x_1113_, 1, v___x_1099_);
lean_ctor_set(v___x_1113_, 2, v___x_1105_);
v___x_1114_ = l_Lean_Syntax_node5(v___x_1095_, v___x_1097_, v___x_1098_, v_cfg_1087_, v___x_1102_, v___x_1112_, v___x_1113_);
v___x_1115_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1115_, 0, v___x_1114_);
return v___x_1115_;
}
else
{
lean_object* v_ref_1116_; uint8_t v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; 
v_ref_1116_ = lean_ctor_get(v_a_1089_, 2);
v___x_1117_ = 0;
v___x_1118_ = l_Lean_SourceInfo_fromRef(v_ref_1116_, v___x_1117_);
v___x_1119_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__0));
v___x_1120_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___closed__1));
lean_inc_n(v___x_1118_, 4);
v___x_1121_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1118_);
lean_ctor_set(v___x_1121_, 1, v___x_1119_);
v___x_1122_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__3));
v___x_1123_ = ((lean_object*)(l_Lean_Meta_Grind_mkFinishTactic___closed__5));
v___x_1124_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1124_, 0, v___x_1118_);
lean_ctor_set(v___x_1124_, 1, v___x_1123_);
v___x_1125_ = l_Lean_Syntax_node1(v___x_1118_, v___x_1122_, v___x_1124_);
v___x_1126_ = lean_obj_once(&l_Lean_Meta_Grind_mkFinishTactic___closed__4, &l_Lean_Meta_Grind_mkFinishTactic___closed__4_once, _init_l_Lean_Meta_Grind_mkFinishTactic___closed__4);
v___x_1127_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1127_, 0, v___x_1118_);
lean_ctor_set(v___x_1127_, 1, v___x_1122_);
lean_ctor_set(v___x_1127_, 2, v___x_1126_);
lean_inc_ref(v___x_1127_);
v___x_1128_ = l_Lean_Syntax_node5(v___x_1118_, v___x_1120_, v___x_1121_, v_cfg_1087_, v___x_1125_, v___x_1127_, v___x_1127_);
v___x_1129_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_1129_, 0, v___x_1128_);
return v___x_1129_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg___boxed(lean_object* v_cfg_1130_, lean_object* v_params_1131_, lean_object* v_a_1132_, lean_object* v_a_1133_){
_start:
{
lean_object* v_res_1134_; 
v_res_1134_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg(v_cfg_1130_, v_params_1131_, v_a_1132_);
lean_dec_ref(v_a_1132_);
lean_dec_ref(v_params_1131_);
return v_res_1134_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac(lean_object* v_cfg_1135_, lean_object* v_params_1136_, lean_object* v_a_1137_, lean_object* v_a_1138_){
_start:
{
lean_object* v___x_1140_; 
v___x_1140_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg(v_cfg_1135_, v_params_1136_, v_a_1137_);
return v___x_1140_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___boxed(lean_object* v_cfg_1141_, lean_object* v_params_1142_, lean_object* v_a_1143_, lean_object* v_a_1144_, lean_object* v_a_1145_){
_start:
{
lean_object* v_res_1146_; 
v_res_1146_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac(v_cfg_1141_, v_params_1142_, v_a_1143_, v_a_1144_);
lean_dec(v_a_1144_);
lean_dec_ref(v_a_1143_);
lean_dec_ref(v_params_1142_);
return v_res_1146_;
}
}
LEAN_EXPORT uint8_t l_Lean_Option_get___at___00Lean_Meta_Grind_mkGrindOnlyTactics_spec__0(lean_object* v_opts_1147_, lean_object* v_opt_1148_){
_start:
{
lean_object* v_name_1149_; lean_object* v_defValue_1150_; lean_object* v_map_1151_; lean_object* v___x_1152_; 
v_name_1149_ = lean_ctor_get(v_opt_1148_, 0);
v_defValue_1150_ = lean_ctor_get(v_opt_1148_, 1);
v_map_1151_ = lean_ctor_get(v_opts_1147_, 0);
v___x_1152_ = l_Std_DTreeMap_Internal_Impl_Const_get_x3f___at___00Lean_NameMap_find_x3f_spec__0___redArg(v_map_1151_, v_name_1149_);
if (lean_obj_tag(v___x_1152_) == 0)
{
uint8_t v___x_1153_; 
v___x_1153_ = lean_unbox(v_defValue_1150_);
return v___x_1153_;
}
else
{
lean_object* v_val_1154_; 
v_val_1154_ = lean_ctor_get(v___x_1152_, 0);
lean_inc(v_val_1154_);
lean_dec_ref_known(v___x_1152_, 1);
if (lean_obj_tag(v_val_1154_) == 1)
{
uint8_t v_v_1155_; 
v_v_1155_ = lean_ctor_get_uint8(v_val_1154_, 0);
lean_dec_ref_known(v_val_1154_, 0);
return v_v_1155_;
}
else
{
uint8_t v___x_1156_; 
lean_dec(v_val_1154_);
v___x_1156_ = lean_unbox(v_defValue_1150_);
return v___x_1156_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Option_get___at___00Lean_Meta_Grind_mkGrindOnlyTactics_spec__0___boxed(lean_object* v_opts_1157_, lean_object* v_opt_1158_){
_start:
{
uint8_t v_res_1159_; lean_object* v_r_1160_; 
v_res_1159_ = l_Lean_Option_get___at___00Lean_Meta_Grind_mkGrindOnlyTactics_spec__0(v_opts_1157_, v_opt_1158_);
lean_dec_ref(v_opt_1158_);
lean_dec_ref(v_opts_1157_);
v_r_1160_ = lean_box(v_res_1159_);
return v_r_1160_;
}
}
static lean_object* _init_l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__7(void){
_start:
{
lean_object* v___x_1177_; lean_object* v___x_1178_; 
v___x_1177_ = ((lean_object*)(l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__6));
v___x_1178_ = l_Lean_mkIdent(v___x_1177_);
return v___x_1178_;
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics(lean_object* v_cfg_1181_, lean_object* v_seq_1182_, lean_object* v_extraParams_1183_, lean_object* v_ematchLimit_1184_, lean_object* v_a_1185_, lean_object* v_a_1186_){
_start:
{
lean_object* v___x_1188_; 
v___x_1188_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_collectParamsCore(v_seq_1182_, v_a_1185_, v_a_1186_);
if (lean_obj_tag(v___x_1188_) == 0)
{
lean_object* v_a_1189_; lean_object* v___x_1191_; uint8_t v_isShared_1192_; uint8_t v_isSharedCheck_1265_; 
v_a_1189_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1265_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1265_ == 0)
{
v___x_1191_ = v___x_1188_;
v_isShared_1192_ = v_isSharedCheck_1265_;
goto v_resetjp_1190_;
}
else
{
lean_inc(v_a_1189_);
lean_dec(v___x_1188_);
v___x_1191_ = lean_box(0);
v_isShared_1192_ = v_isSharedCheck_1265_;
goto v_resetjp_1190_;
}
v_resetjp_1190_:
{
uint8_t v_hasSorry_1193_; lean_object* v_params_1194_; lean_object* v_anchors_1195_; lean_object* v_maxRounds_1196_; lean_object* v___y_1198_; lean_object* v_cfg_1199_; lean_object* v___y_1200_; lean_object* v___y_1233_; 
v_hasSorry_1193_ = lean_ctor_get_uint8(v_a_1189_, sizeof(void*)*3);
v_params_1194_ = lean_ctor_get(v_a_1189_, 0);
lean_inc_ref(v_params_1194_);
v_anchors_1195_ = lean_ctor_get(v_a_1189_, 1);
lean_inc_ref(v_anchors_1195_);
v_maxRounds_1196_ = lean_ctor_get(v_a_1189_, 2);
lean_inc(v_maxRounds_1196_);
lean_dec(v_a_1189_);
if (v_hasSorry_1193_ == 0)
{
lean_object* v___x_1257_; lean_object* v___x_1258_; uint8_t v___x_1259_; 
lean_del_object(v___x_1191_);
v___x_1257_ = l_Lean_Core_instMonadOptionsCoreM_checkedOptions(v_a_1185_);
v___x_1258_ = l_Lean_Meta_Grind_grind_debug_dropParams;
v___x_1259_ = l_Lean_Option_get___at___00Lean_Meta_Grind_mkGrindOnlyTactics_spec__0(v___x_1257_, v___x_1258_);
lean_dec_ref(v___x_1257_);
if (v___x_1259_ == 0)
{
v___y_1233_ = v_params_1194_;
goto v___jp_1232_;
}
else
{
lean_object* v___x_1260_; 
lean_dec_ref(v_params_1194_);
v___x_1260_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34));
v___y_1233_ = v___x_1260_;
goto v___jp_1232_;
}
}
else
{
lean_object* v___x_1261_; lean_object* v___x_1263_; 
lean_dec(v_maxRounds_1196_);
lean_dec_ref(v_anchors_1195_);
lean_dec_ref(v_params_1194_);
lean_dec(v_cfg_1181_);
v___x_1261_ = ((lean_object*)(l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_Collector_collect___closed__34));
if (v_isShared_1192_ == 0)
{
lean_ctor_set(v___x_1191_, 0, v___x_1261_);
v___x_1263_ = v___x_1191_;
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
v___jp_1197_:
{
lean_object* v___x_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v_a_1204_; lean_object* v___x_1206_; uint8_t v_isShared_1207_; uint8_t v_isSharedCheck_1231_; 
lean_inc_ref(v___y_1198_);
v___x_1201_ = l_Array_append___redArg(v___y_1198_, v_anchors_1195_);
v___x_1202_ = l_Array_append___redArg(v___x_1201_, v_extraParams_1183_);
lean_inc(v_cfg_1199_);
v___x_1203_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg(v_cfg_1199_, v___x_1202_, v___y_1200_);
lean_dec_ref(v___x_1202_);
v_a_1204_ = lean_ctor_get(v___x_1203_, 0);
v_isSharedCheck_1231_ = !lean_is_exclusive(v___x_1203_);
if (v_isSharedCheck_1231_ == 0)
{
v___x_1206_ = v___x_1203_;
v_isShared_1207_ = v_isSharedCheck_1231_;
goto v_resetjp_1205_;
}
else
{
lean_inc(v_a_1204_);
lean_dec(v___x_1203_);
v___x_1206_ = lean_box(0);
v_isShared_1207_ = v_isSharedCheck_1231_;
goto v_resetjp_1205_;
}
v_resetjp_1205_:
{
lean_object* v___x_1208_; lean_object* v___x_1209_; uint8_t v___x_1210_; 
v___x_1208_ = lean_array_get_size(v_anchors_1195_);
lean_dec_ref(v_anchors_1195_);
v___x_1209_ = lean_unsigned_to_nat(0u);
v___x_1210_ = lean_nat_dec_eq(v___x_1208_, v___x_1209_);
if (v___x_1210_ == 0)
{
lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v_a_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1224_; 
lean_del_object(v___x_1206_);
v___x_1211_ = l_Array_append___redArg(v___y_1198_, v_extraParams_1183_);
v___x_1212_ = l___private_Lean_Meta_Tactic_Grind_CollectParams_0__Lean_Meta_Grind_mkGrindOnlyTactics_mkTac___redArg(v_cfg_1199_, v___x_1211_, v___y_1200_);
lean_dec_ref(v___x_1211_);
v_a_1213_ = lean_ctor_get(v___x_1212_, 0);
v_isSharedCheck_1224_ = !lean_is_exclusive(v___x_1212_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1215_ = v___x_1212_;
v_isShared_1216_ = v_isSharedCheck_1224_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_a_1213_);
lean_dec(v___x_1212_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1224_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1222_; 
v___x_1217_ = lean_unsigned_to_nat(2u);
v___x_1218_ = lean_mk_empty_array_with_capacity(v___x_1217_);
v___x_1219_ = lean_array_push(v___x_1218_, v_a_1204_);
v___x_1220_ = lean_array_push(v___x_1219_, v_a_1213_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 0, v___x_1220_);
v___x_1222_ = v___x_1215_;
goto v_reusejp_1221_;
}
else
{
lean_object* v_reuseFailAlloc_1223_; 
v_reuseFailAlloc_1223_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1223_, 0, v___x_1220_);
v___x_1222_ = v_reuseFailAlloc_1223_;
goto v_reusejp_1221_;
}
v_reusejp_1221_:
{
return v___x_1222_;
}
}
}
else
{
lean_object* v___x_1225_; lean_object* v___x_1226_; lean_object* v___x_1227_; lean_object* v___x_1229_; 
lean_dec(v_cfg_1199_);
lean_dec_ref(v___y_1198_);
v___x_1225_ = lean_unsigned_to_nat(1u);
v___x_1226_ = lean_mk_empty_array_with_capacity(v___x_1225_);
v___x_1227_ = lean_array_push(v___x_1226_, v_a_1204_);
if (v_isShared_1207_ == 0)
{
lean_ctor_set(v___x_1206_, 0, v___x_1227_);
v___x_1229_ = v___x_1206_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1230_; 
v_reuseFailAlloc_1230_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1230_, 0, v___x_1227_);
v___x_1229_ = v_reuseFailAlloc_1230_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
return v___x_1229_;
}
}
}
}
v___jp_1232_:
{
uint8_t v___x_1234_; 
v___x_1234_ = lean_nat_dec_lt(v_ematchLimit_1184_, v_maxRounds_1196_);
if (v___x_1234_ == 0)
{
lean_dec(v_maxRounds_1196_);
v___y_1198_ = v___y_1233_;
v_cfg_1199_ = v_cfg_1181_;
v___y_1200_ = v_a_1185_;
goto v___jp_1197_;
}
else
{
lean_object* v_ref_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; 
v_ref_1235_ = lean_ctor_get(v_a_1185_, 2);
v___x_1236_ = l_Lean_SourceInfo_fromRef(v_ref_1235_, v_hasSorry_1193_);
v___x_1237_ = ((lean_object*)(l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__1));
v___x_1238_ = ((lean_object*)(l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__3));
v___x_1239_ = ((lean_object*)(l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__4));
lean_inc_n(v___x_1236_, 4);
v___x_1240_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1236_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
v___x_1241_ = lean_obj_once(&l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__7, &l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__7_once, _init_l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__7);
v___x_1242_ = ((lean_object*)(l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__8));
v___x_1243_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___x_1236_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___x_1244_ = l_Nat_reprFast(v_maxRounds_1196_);
v___x_1245_ = lean_box(2);
v___x_1246_ = l_Lean_Syntax_mkNumLit(v___x_1244_, v___x_1245_);
v___x_1247_ = ((lean_object*)(l_Lean_Meta_Grind_mkGrindOnlyTactics___closed__9));
v___x_1248_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1248_, 0, v___x_1236_);
lean_ctor_set(v___x_1248_, 1, v___x_1247_);
v___x_1249_ = l_Lean_Syntax_node5(v___x_1236_, v___x_1238_, v___x_1240_, v___x_1241_, v___x_1243_, v___x_1246_, v___x_1248_);
v___x_1250_ = l_Lean_Syntax_node1(v___x_1236_, v___x_1237_, v___x_1249_);
v___x_1251_ = lean_unsigned_to_nat(0u);
v___x_1252_ = l_Lean_Syntax_getArg(v_cfg_1181_, v___x_1251_);
v___x_1253_ = l_Lean_Syntax_getArgs(v___x_1252_);
v___x_1254_ = lean_array_push(v___x_1253_, v___x_1250_);
v___x_1255_ = l_Lean_Syntax_setArgs(v___x_1252_, v___x_1254_);
v___x_1256_ = l_Lean_Syntax_setArg(v_cfg_1181_, v___x_1251_, v___x_1255_);
v___y_1198_ = v___y_1233_;
v_cfg_1199_ = v___x_1256_;
v___y_1200_ = v_a_1185_;
goto v___jp_1197_;
}
}
}
}
else
{
lean_object* v_a_1266_; lean_object* v___x_1268_; uint8_t v_isShared_1269_; uint8_t v_isSharedCheck_1273_; 
lean_dec(v_cfg_1181_);
v_a_1266_ = lean_ctor_get(v___x_1188_, 0);
v_isSharedCheck_1273_ = !lean_is_exclusive(v___x_1188_);
if (v_isSharedCheck_1273_ == 0)
{
v___x_1268_ = v___x_1188_;
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
else
{
lean_inc(v_a_1266_);
lean_dec(v___x_1188_);
v___x_1268_ = lean_box(0);
v_isShared_1269_ = v_isSharedCheck_1273_;
goto v_resetjp_1267_;
}
v_resetjp_1267_:
{
lean_object* v___x_1271_; 
if (v_isShared_1269_ == 0)
{
v___x_1271_ = v___x_1268_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_a_1266_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Meta_Grind_mkGrindOnlyTactics___boxed(lean_object* v_cfg_1274_, lean_object* v_seq_1275_, lean_object* v_extraParams_1276_, lean_object* v_ematchLimit_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_, lean_object* v_a_1280_){
_start:
{
lean_object* v_res_1281_; 
v_res_1281_ = l_Lean_Meta_Grind_mkGrindOnlyTactics(v_cfg_1274_, v_seq_1275_, v_extraParams_1276_, v_ematchLimit_1277_, v_a_1278_, v_a_1279_);
lean_dec(v_a_1279_);
lean_dec_ref(v_a_1278_);
lean_dec(v_ematchLimit_1277_);
lean_dec_ref(v_extraParams_1276_);
return v_res_1281_;
}
}
lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* runtime_initialize_Init_Syntax(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Meta_Tactic_Grind_CollectParams(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Meta_Tactic_Grind_CollectParams(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Meta_Tactic_Grind_Types(uint8_t builtin);
lean_object* initialize_Init_Syntax(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Meta_Tactic_Grind_CollectParams(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Meta_Tactic_Grind_Types(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Syntax(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Meta_Tactic_Grind_CollectParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Meta_Tactic_Grind_CollectParams(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Meta_Tactic_Grind_CollectParams(builtin);
}
#ifdef __cplusplus
}
#endif
