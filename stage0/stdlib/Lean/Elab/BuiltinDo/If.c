// Lean compiler output
// Module: Lean.Elab.BuiltinDo.If
// Imports: public import Lean.Elab.Do.Basic meta import Lean.Parser.Do import Lean.Elab.BuiltinDo.Basic
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
lean_object* l_Lean_Name_mkStr4(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_unsupportedSyntaxExceptionId;
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_matchesNull(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofFormat(lean_object*);
lean_object* l_Lean_Elab_Do_mkMonadApp(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* l_Lean_SourceInfo_fromRef(lean_object*, uint8_t);
lean_object* l_Lean_Name_mkStr2(lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node1(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Term_elabTermEnsuringType(lean_object*, lean_object*, uint8_t, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_doElabToSyntax___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_elabDoSeq___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* lean_array_uget(lean_object*, size_t);
lean_object* l_Lean_Macro_throwUnsupported___redArg(lean_object*);
lean_object* l_Array_mkArray0___redArg();
lean_object* l_Lean_Syntax_node2(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_node7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_inferControlInfoSeq(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_ControlInfo_alternative(lean_object*, lean_object*);
lean_object* l_Lean_Elab_Do_DoElemCont_withDuplicableCont(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_Do_doElemElabAttribute;
lean_object* l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Syntax_getArgs(lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Array_reverse___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Array_zip___redArg(lean_object*, lean_object*);
uint8_t l_Lean_Syntax_isNone(lean_object*);
lean_object* l_Lean_Name_mkStr5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* l_Lean_Elab_macroAttribute;
lean_object* l_Lean_addBuiltinDocString(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0(uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lean"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Parser"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Term"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doIfLet"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__3 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__3_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__3_value),LEAN_SCALAR_PTR_LITERAL(181, 227, 73, 225, 0, 143, 195, 11)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "doIfProp"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__5 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__5_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__5_value),LEAN_SCALAR_PTR_LITERAL(55, 147, 210, 58, 86, 191, 41, 151)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "doIf"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__7 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__7_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__7_value),LEAN_SCALAR_PTR_LITERAL(133, 56, 102, 181, 14, 156, 21, 0)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "if"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "then"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "null"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__11 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__11_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__11_value),LEAN_SCALAR_PTR_LITERAL(24, 58, 49, 223, 146, 207, 197, 136)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12_value;
static lean_once_cell_t l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "else"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doIfLetPure"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__15 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__15_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__15_value),LEAN_SCALAR_PTR_LITERAL(30, 29, 142, 71, 96, 53, 139, 191)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doIfLetBind"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__17 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__17_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__17_value),LEAN_SCALAR_PTR_LITERAL(251, 203, 116, 140, 48, 138, 26, 199)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "doMatch"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__19 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__19_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__19_value),LEAN_SCALAR_PTR_LITERAL(29, 50, 175, 23, 122, 111, 148, 60)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "match"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__21 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__21_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "matchDiscr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__22 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__22_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__22_value),LEAN_SCALAR_PTR_LITERAL(99, 51, 127, 238, 206, 239, 57, 130)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "nestedAction"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__24 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__24_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__24_value),LEAN_SCALAR_PTR_LITERAL(115, 27, 24, 243, 204, 49, 153, 202)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "←"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__26 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__26_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doExpr"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__27 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__27_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__27_value),LEAN_SCALAR_PTR_LITERAL(130, 168, 60, 255, 153, 218, 88, 77)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "with"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__29 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__29_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "matchAlts"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__30 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__30_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__30_value),LEAN_SCALAR_PTR_LITERAL(193, 186, 26, 109, 82, 172, 197, 183)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "matchAlt"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__32 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__32_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__32_value),LEAN_SCALAR_PTR_LITERAL(178, 0, 203, 112, 215, 49, 100, 229)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__34 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__34_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "=>"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__35 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__35_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hole"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__36 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__36_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__36_value),LEAN_SCALAR_PTR_LITERAL(135, 134, 219, 115, 97, 130, 74, 55)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "doSeqIndent"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__39 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__39_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__39_value),LEAN_SCALAR_PTR_LITERAL(93, 115, 138, 230, 225, 195, 43, 46)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40_value;
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "doSeqItem"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__41 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__41_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value_aux_2),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__41_value),LEAN_SCALAR_PTR_LITERAL(10, 94, 50, 120, 46, 251, 13, 13)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3(uint8_t, lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4(lean_object*, size_t, size_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__0 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__0_value;
static const lean_ctor_object l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(206, 113, 20, 57, 188, 177, 187, 30)}};
static const lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__1 = (const lean_object*)&l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l_Lean_Elab_Do_expandDoIf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "InternalSyntax"};
static const lean_object* l_Lean_Elab_Do_expandDoIf___closed__0 = (const lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__0_value;
static const lean_string_object l_Lean_Elab_Do_expandDoIf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "doSkip"};
static const lean_object* l_Lean_Elab_Do_expandDoIf___closed__1 = (const lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__1_value;
static const lean_ctor_object l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_0),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1_value),LEAN_SCALAR_PTR_LITERAL(103, 136, 125, 166, 167, 98, 71, 111)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_1),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2_value),LEAN_SCALAR_PTR_LITERAL(75, 170, 162, 138, 136, 204, 251, 229)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_3 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_2),((lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__0_value),LEAN_SCALAR_PTR_LITERAL(117, 4, 119, 3, 13, 160, 149, 47)}};
static const lean_ctor_object l_Lean_Elab_Do_expandDoIf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__2_value_aux_3),((lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__1_value),LEAN_SCALAR_PTR_LITERAL(125, 157, 182, 149, 109, 63, 124, 178)}};
static const lean_object* l_Lean_Elab_Do_expandDoIf___closed__2 = (const lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__2_value;
static const lean_string_object l_Lean_Elab_Do_expandDoIf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "skip"};
static const lean_object* l_Lean_Elab_Do_expandDoIf___closed__3 = (const lean_object*)&l_Lean_Elab_Do_expandDoIf___closed__3_value;
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Elab"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "Do"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "expandDoIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(148, 129, 97, 131, 243, 145, 63, 99)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 112, .m_capacity = 112, .m_length = 111, .m_data = "If the given syntax is a `doIf`, return an equivalent `doIf` that has an `else` but no `else if`s or\n`if let`s."};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3___closed__0_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3___boxed(lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "termIfThenElse"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(225, 209, 193, 165, 165, 31, 104, 198)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "else branch of if with condition {cond}"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1(lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "then branch of if with condition {cond}"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__0_value)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1_value;
static lean_once_cell_t l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0;
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___boxed(lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "termDepIfThenElse"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__2_value),LEAN_SCALAR_PTR_LITERAL(191, 94, 17, 11, 145, 108, 236, 173)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "binderIdent"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__4_value),LEAN_SCALAR_PTR_LITERAL(37, 194, 68, 106, 254, 181, 31, 191)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5_value;
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ":"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0___boxed(lean_object**);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "elabDoIf"};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value;
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value_aux_0 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0_value),LEAN_SCALAR_PTR_LITERAL(70, 193, 83, 126, 233, 67, 208, 165)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value_aux_1 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value_aux_0),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(52, 247, 248, 201, 92, 23, 188, 159)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value_aux_2 = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value_aux_1),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__1_value),LEAN_SCALAR_PTR_LITERAL(84, 203, 110, 70, 49, 253, 106, 1)}};
static const lean_ctor_object l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value_aux_2),((lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__0_value),LEAN_SCALAR_PTR_LITERAL(135, 50, 230, 41, 148, 150, 129, 146)}};
static const lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1 = (const lean_object*)&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1_value;
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1();
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___boxed(lean_object*);
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0(uint8_t v___x_1_, lean_object* v_____do__lift_2_, lean_object* v___y_3_, lean_object* v___y_4_){
_start:
{
lean_object* v___x_5_; lean_object* v___x_6_; 
v___x_5_ = l_Lean_SourceInfo_fromRef(v_____do__lift_2_, v___x_1_);
v___x_6_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_6_, 0, v___x_5_);
lean_ctor_set(v___x_6_, 1, v___y_4_);
return v___x_6_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0___boxed(lean_object* v___x_7_, lean_object* v_____do__lift_8_, lean_object* v___y_9_, lean_object* v___y_10_){
_start:
{
uint8_t v___x_30843__boxed_11_; lean_object* v_res_12_; 
v___x_30843__boxed_11_ = lean_unbox(v___x_7_);
v_res_12_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0(v___x_30843__boxed_11_, v_____do__lift_8_, v___y_9_, v___y_10_);
lean_dec_ref(v___y_9_);
lean_dec(v_____do__lift_8_);
return v_res_12_;
}
}
static lean_object* _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13(void){
_start:
{
lean_object* v___x_39_; 
v___x_39_ = l_Array_mkArray0___redArg();
return v___x_39_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3(uint8_t v___x_113_, lean_object* v_as_114_, size_t v_sz_115_, size_t v_i_116_, lean_object* v_b_117_, lean_object* v___y_118_, lean_object* v___y_119_){
_start:
{
lean_object* v_____x_121_; lean_object* v___y_122_; uint8_t v___x_128_; 
v___x_128_ = lean_usize_dec_lt(v_i_116_, v_sz_115_);
if (v___x_128_ == 0)
{
lean_object* v___x_129_; 
v___x_129_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_129_, 0, v_b_117_);
lean_ctor_set(v___x_129_, 1, v___y_119_);
return v___x_129_;
}
else
{
lean_object* v_a_130_; lean_object* v_fst_131_; lean_object* v_snd_132_; lean_object* v___x_134_; uint8_t v_isShared_135_; uint8_t v_isSharedCheck_324_; 
v_a_130_ = lean_array_uget(v_as_114_, v_i_116_);
v_fst_131_ = lean_ctor_get(v_a_130_, 0);
v_snd_132_ = lean_ctor_get(v_a_130_, 1);
v_isSharedCheck_324_ = !lean_is_exclusive(v_a_130_);
if (v_isSharedCheck_324_ == 0)
{
v___x_134_ = v_a_130_;
v_isShared_135_ = v_isSharedCheck_324_;
goto v_resetjp_133_;
}
else
{
lean_inc(v_snd_132_);
lean_inc(v_fst_131_);
lean_dec(v_a_130_);
v___x_134_ = lean_box(0);
v_isShared_135_ = v_isSharedCheck_324_;
goto v_resetjp_133_;
}
v_resetjp_133_:
{
lean_object* v_fst_136_; lean_object* v_snd_137_; lean_object* v___x_139_; uint8_t v_isShared_140_; uint8_t v_isSharedCheck_323_; 
v_fst_136_ = lean_ctor_get(v_b_117_, 0);
v_snd_137_ = lean_ctor_get(v_b_117_, 1);
v_isSharedCheck_323_ = !lean_is_exclusive(v_b_117_);
if (v_isSharedCheck_323_ == 0)
{
v___x_139_ = v_b_117_;
v_isShared_140_ = v_isSharedCheck_323_;
goto v_resetjp_138_;
}
else
{
lean_inc(v_snd_137_);
lean_inc(v_fst_136_);
lean_dec(v_b_117_);
v___x_139_ = lean_box(0);
v_isShared_140_ = v_isSharedCheck_323_;
goto v_resetjp_138_;
}
v_resetjp_138_:
{
lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v_____x_144_; lean_object* v___y_145_; lean_object* v___y_146_; uint8_t v___x_301_; 
v___x_141_ = lean_unsigned_to_nat(1u);
v___x_142_ = lean_unsigned_to_nat(2u);
v___x_301_ = lean_unbox(v_snd_137_);
lean_dec(v_snd_137_);
if (v___x_301_ == 0)
{
lean_object* v_ref_302_; lean_object* v___x_303_; 
v_ref_302_ = lean_ctor_get(v___y_118_, 5);
v___x_303_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0(v___x_113_, v_ref_302_, v___y_118_, v___y_119_);
if (lean_obj_tag(v___x_303_) == 0)
{
lean_object* v_a_304_; lean_object* v_a_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v_a_304_ = lean_ctor_get(v___x_303_, 0);
lean_inc_n(v_a_304_, 4);
v_a_305_ = lean_ctor_get(v___x_303_, 1);
lean_inc(v_a_305_);
lean_dec_ref_known(v___x_303_, 2);
v___x_306_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40));
v___x_307_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_308_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42));
v___x_309_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
v___x_310_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_310_, 0, v_a_304_);
lean_ctor_set(v___x_310_, 1, v___x_307_);
lean_ctor_set(v___x_310_, 2, v___x_309_);
v___x_311_ = l_Lean_Syntax_node2(v_a_304_, v___x_308_, v_fst_136_, v___x_310_);
v___x_312_ = l_Lean_Syntax_node1(v_a_304_, v___x_307_, v___x_311_);
v___x_313_ = l_Lean_Syntax_node1(v_a_304_, v___x_306_, v___x_312_);
v_____x_144_ = v___x_313_;
v___y_145_ = v___y_118_;
v___y_146_ = v_a_305_;
goto v___jp_143_;
}
else
{
lean_object* v_a_314_; lean_object* v_a_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_322_; 
lean_del_object(v___x_139_);
lean_dec(v_fst_136_);
lean_del_object(v___x_134_);
lean_dec(v_snd_132_);
lean_dec(v_fst_131_);
v_a_314_ = lean_ctor_get(v___x_303_, 0);
v_a_315_ = lean_ctor_get(v___x_303_, 1);
v_isSharedCheck_322_ = !lean_is_exclusive(v___x_303_);
if (v_isSharedCheck_322_ == 0)
{
v___x_317_ = v___x_303_;
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_a_315_);
lean_inc(v_a_314_);
lean_dec(v___x_303_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_322_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_320_; 
if (v_isShared_318_ == 0)
{
v___x_320_ = v___x_317_;
goto v_reusejp_319_;
}
else
{
lean_object* v_reuseFailAlloc_321_; 
v_reuseFailAlloc_321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_321_, 0, v_a_314_);
lean_ctor_set(v_reuseFailAlloc_321_, 1, v_a_315_);
v___x_320_ = v_reuseFailAlloc_321_;
goto v_reusejp_319_;
}
v_reusejp_319_:
{
return v___x_320_;
}
}
}
}
else
{
v_____x_144_ = v_fst_136_;
v___y_145_ = v___y_118_;
v___y_146_ = v___y_119_;
goto v___jp_143_;
}
v___jp_143_:
{
lean_object* v___x_147_; uint8_t v___x_148_; 
v___x_147_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4));
lean_inc(v_fst_131_);
v___x_148_ = l_Lean_Syntax_isOfKind(v_fst_131_, v___x_147_);
if (v___x_148_ == 0)
{
lean_object* v___x_149_; uint8_t v___x_150_; 
v___x_149_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6));
lean_inc(v_fst_131_);
v___x_150_ = l_Lean_Syntax_isOfKind(v_fst_131_, v___x_149_);
if (v___x_150_ == 0)
{
lean_object* v___x_151_; 
lean_dec(v_____x_144_);
lean_del_object(v___x_139_);
lean_del_object(v___x_134_);
lean_dec(v_snd_132_);
lean_dec(v_fst_131_);
v___x_151_ = l_Lean_Macro_throwUnsupported___redArg(v___y_146_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v_a_153_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc(v_a_152_);
v_a_153_ = lean_ctor_get(v___x_151_, 1);
lean_inc(v_a_153_);
lean_dec_ref_known(v___x_151_, 2);
v_____x_121_ = v_a_152_;
v___y_122_ = v_a_153_;
goto v___jp_120_;
}
else
{
lean_object* v_a_154_; lean_object* v_a_155_; lean_object* v___x_157_; uint8_t v_isShared_158_; uint8_t v_isSharedCheck_162_; 
v_a_154_ = lean_ctor_get(v___x_151_, 0);
v_a_155_ = lean_ctor_get(v___x_151_, 1);
v_isSharedCheck_162_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_162_ == 0)
{
v___x_157_ = v___x_151_;
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
else
{
lean_inc(v_a_155_);
lean_inc(v_a_154_);
lean_dec(v___x_151_);
v___x_157_ = lean_box(0);
v_isShared_158_ = v_isSharedCheck_162_;
goto v_resetjp_156_;
}
v_resetjp_156_:
{
lean_object* v___x_160_; 
if (v_isShared_158_ == 0)
{
v___x_160_ = v___x_157_;
goto v_reusejp_159_;
}
else
{
lean_object* v_reuseFailAlloc_161_; 
v_reuseFailAlloc_161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_161_, 0, v_a_154_);
lean_ctor_set(v_reuseFailAlloc_161_, 1, v_a_155_);
v___x_160_ = v_reuseFailAlloc_161_;
goto v_reusejp_159_;
}
v_reusejp_159_:
{
return v___x_160_;
}
}
}
}
else
{
lean_object* v_ref_163_; lean_object* v___x_164_; 
v_ref_163_ = lean_ctor_get(v___y_145_, 5);
v___x_164_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0(v___x_113_, v_ref_163_, v___y_145_, v___y_146_);
if (lean_obj_tag(v___x_164_) == 0)
{
lean_object* v_a_165_; lean_object* v_a_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_170_; 
v_a_165_ = lean_ctor_get(v___x_164_, 0);
lean_inc_n(v_a_165_, 2);
v_a_166_ = lean_ctor_get(v___x_164_, 1);
lean_inc(v_a_166_);
lean_dec_ref_known(v___x_164_, 2);
v___x_167_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8));
v___x_168_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9));
if (v_isShared_140_ == 0)
{
lean_ctor_set_tag(v___x_139_, 2);
lean_ctor_set(v___x_139_, 1, v___x_168_);
lean_ctor_set(v___x_139_, 0, v_a_165_);
v___x_170_ = v___x_139_;
goto v_reusejp_169_;
}
else
{
lean_object* v_reuseFailAlloc_182_; 
v_reuseFailAlloc_182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_182_, 0, v_a_165_);
lean_ctor_set(v_reuseFailAlloc_182_, 1, v___x_168_);
v___x_170_ = v_reuseFailAlloc_182_;
goto v_reusejp_169_;
}
v_reusejp_169_:
{
lean_object* v___x_171_; lean_object* v___x_173_; 
v___x_171_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10));
lean_inc(v_a_165_);
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 2);
lean_ctor_set(v___x_134_, 1, v___x_171_);
lean_ctor_set(v___x_134_, 0, v_a_165_);
v___x_173_ = v___x_134_;
goto v_reusejp_172_;
}
else
{
lean_object* v_reuseFailAlloc_181_; 
v_reuseFailAlloc_181_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_181_, 0, v_a_165_);
lean_ctor_set(v_reuseFailAlloc_181_, 1, v___x_171_);
v___x_173_ = v_reuseFailAlloc_181_;
goto v_reusejp_172_;
}
v_reusejp_172_:
{
lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_174_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_175_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
lean_inc_n(v_a_165_, 3);
v___x_176_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_176_, 0, v_a_165_);
lean_ctor_set(v___x_176_, 1, v___x_174_);
lean_ctor_set(v___x_176_, 2, v___x_175_);
v___x_177_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14));
v___x_178_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_178_, 0, v_a_165_);
lean_ctor_set(v___x_178_, 1, v___x_177_);
v___x_179_ = l_Lean_Syntax_node2(v_a_165_, v___x_174_, v___x_178_, v_____x_144_);
v___x_180_ = l_Lean_Syntax_node6(v_a_165_, v___x_167_, v___x_170_, v_fst_131_, v___x_173_, v_snd_132_, v___x_176_, v___x_179_);
v_____x_121_ = v___x_180_;
v___y_122_ = v_a_166_;
goto v___jp_120_;
}
}
}
else
{
lean_object* v_a_183_; lean_object* v_a_184_; lean_object* v___x_186_; uint8_t v_isShared_187_; uint8_t v_isSharedCheck_191_; 
lean_dec(v_____x_144_);
lean_del_object(v___x_139_);
lean_del_object(v___x_134_);
lean_dec(v_snd_132_);
lean_dec(v_fst_131_);
v_a_183_ = lean_ctor_get(v___x_164_, 0);
v_a_184_ = lean_ctor_get(v___x_164_, 1);
v_isSharedCheck_191_ = !lean_is_exclusive(v___x_164_);
if (v_isSharedCheck_191_ == 0)
{
v___x_186_ = v___x_164_;
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
else
{
lean_inc(v_a_184_);
lean_inc(v_a_183_);
lean_dec(v___x_164_);
v___x_186_ = lean_box(0);
v_isShared_187_ = v_isSharedCheck_191_;
goto v_resetjp_185_;
}
v_resetjp_185_:
{
lean_object* v___x_189_; 
if (v_isShared_187_ == 0)
{
v___x_189_ = v___x_186_;
goto v_reusejp_188_;
}
else
{
lean_object* v_reuseFailAlloc_190_; 
v_reuseFailAlloc_190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_190_, 0, v_a_183_);
lean_ctor_set(v_reuseFailAlloc_190_, 1, v_a_184_);
v___x_189_ = v_reuseFailAlloc_190_;
goto v_reusejp_188_;
}
v_reusejp_188_:
{
return v___x_189_;
}
}
}
}
}
else
{
lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_192_ = l_Lean_Syntax_getArg(v_fst_131_, v___x_141_);
v___x_193_ = l_Lean_Syntax_getArg(v_fst_131_, v___x_142_);
lean_dec(v_fst_131_);
v___x_194_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16));
lean_inc(v___x_193_);
v___x_195_ = l_Lean_Syntax_isOfKind(v___x_193_, v___x_194_);
if (v___x_195_ == 0)
{
lean_object* v___x_196_; uint8_t v___x_197_; 
v___x_196_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18));
lean_inc(v___x_193_);
v___x_197_ = l_Lean_Syntax_isOfKind(v___x_193_, v___x_196_);
if (v___x_197_ == 0)
{
lean_object* v___x_198_; 
lean_dec(v___x_193_);
lean_dec(v___x_192_);
lean_dec(v_____x_144_);
lean_del_object(v___x_139_);
lean_del_object(v___x_134_);
lean_dec(v_snd_132_);
v___x_198_ = l_Lean_Macro_throwUnsupported___redArg(v___y_146_);
if (lean_obj_tag(v___x_198_) == 0)
{
lean_object* v_a_199_; lean_object* v_a_200_; 
v_a_199_ = lean_ctor_get(v___x_198_, 0);
lean_inc(v_a_199_);
v_a_200_ = lean_ctor_get(v___x_198_, 1);
lean_inc(v_a_200_);
lean_dec_ref_known(v___x_198_, 2);
v_____x_121_ = v_a_199_;
v___y_122_ = v_a_200_;
goto v___jp_120_;
}
else
{
lean_object* v_a_201_; lean_object* v_a_202_; lean_object* v___x_204_; uint8_t v_isShared_205_; uint8_t v_isSharedCheck_209_; 
v_a_201_ = lean_ctor_get(v___x_198_, 0);
v_a_202_ = lean_ctor_get(v___x_198_, 1);
v_isSharedCheck_209_ = !lean_is_exclusive(v___x_198_);
if (v_isSharedCheck_209_ == 0)
{
v___x_204_ = v___x_198_;
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
else
{
lean_inc(v_a_202_);
lean_inc(v_a_201_);
lean_dec(v___x_198_);
v___x_204_ = lean_box(0);
v_isShared_205_ = v_isSharedCheck_209_;
goto v_resetjp_203_;
}
v_resetjp_203_:
{
lean_object* v___x_207_; 
if (v_isShared_205_ == 0)
{
v___x_207_ = v___x_204_;
goto v_reusejp_206_;
}
else
{
lean_object* v_reuseFailAlloc_208_; 
v_reuseFailAlloc_208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_208_, 0, v_a_201_);
lean_ctor_set(v_reuseFailAlloc_208_, 1, v_a_202_);
v___x_207_ = v_reuseFailAlloc_208_;
goto v_reusejp_206_;
}
v_reusejp_206_:
{
return v___x_207_;
}
}
}
}
else
{
lean_object* v_ref_210_; lean_object* v___x_211_; 
v_ref_210_ = lean_ctor_get(v___y_145_, 5);
v___x_211_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___lam__0(v___x_113_, v_ref_210_, v___y_145_, v___y_146_);
if (lean_obj_tag(v___x_211_) == 0)
{
lean_object* v_a_212_; lean_object* v_a_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_218_; 
v_a_212_ = lean_ctor_get(v___x_211_, 0);
lean_inc_n(v_a_212_, 2);
v_a_213_ = lean_ctor_get(v___x_211_, 1);
lean_inc(v_a_213_);
lean_dec_ref_known(v___x_211_, 2);
v___x_214_ = l_Lean_Syntax_getArg(v___x_193_, v___x_141_);
lean_dec(v___x_193_);
v___x_215_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20));
v___x_216_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__21));
if (v_isShared_140_ == 0)
{
lean_ctor_set_tag(v___x_139_, 2);
lean_ctor_set(v___x_139_, 1, v___x_216_);
lean_ctor_set(v___x_139_, 0, v_a_212_);
v___x_218_ = v___x_139_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_254_; 
v_reuseFailAlloc_254_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_254_, 0, v_a_212_);
lean_ctor_set(v_reuseFailAlloc_254_, 1, v___x_216_);
v___x_218_ = v_reuseFailAlloc_254_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_226_; 
v___x_219_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_220_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
lean_inc_n(v_a_212_, 2);
v___x_221_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_221_, 0, v_a_212_);
lean_ctor_set(v___x_221_, 1, v___x_219_);
lean_ctor_set(v___x_221_, 2, v___x_220_);
v___x_222_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23));
v___x_223_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25));
v___x_224_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__26));
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 2);
lean_ctor_set(v___x_134_, 1, v___x_224_);
lean_ctor_set(v___x_134_, 0, v_a_212_);
v___x_226_ = v___x_134_;
goto v_reusejp_225_;
}
else
{
lean_object* v_reuseFailAlloc_253_; 
v_reuseFailAlloc_253_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_253_, 0, v_a_212_);
lean_ctor_set(v_reuseFailAlloc_253_, 1, v___x_224_);
v___x_226_ = v_reuseFailAlloc_253_;
goto v_reusejp_225_;
}
v_reusejp_225_:
{
lean_object* v___x_227_; lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; 
v___x_227_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28));
lean_inc_n(v_a_212_, 17);
v___x_228_ = l_Lean_Syntax_node1(v_a_212_, v___x_227_, v___x_214_);
v___x_229_ = l_Lean_Syntax_node2(v_a_212_, v___x_223_, v___x_226_, v___x_228_);
lean_inc_ref_n(v___x_221_, 3);
v___x_230_ = l_Lean_Syntax_node2(v_a_212_, v___x_222_, v___x_221_, v___x_229_);
v___x_231_ = l_Lean_Syntax_node1(v_a_212_, v___x_219_, v___x_230_);
v___x_232_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__29));
v___x_233_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_233_, 0, v_a_212_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31));
v___x_235_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33));
v___x_236_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__34));
v___x_237_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_237_, 0, v_a_212_);
lean_ctor_set(v___x_237_, 1, v___x_236_);
v___x_238_ = l_Lean_Syntax_node1(v_a_212_, v___x_219_, v___x_192_);
v___x_239_ = l_Lean_Syntax_node1(v_a_212_, v___x_219_, v___x_238_);
v___x_240_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__35));
v___x_241_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_241_, 0, v_a_212_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
lean_inc_ref(v___x_241_);
lean_inc_ref(v___x_237_);
v___x_242_ = l_Lean_Syntax_node4(v_a_212_, v___x_235_, v___x_237_, v___x_239_, v___x_241_, v_snd_132_);
v___x_243_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37));
v___x_244_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38));
v___x_245_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_245_, 0, v_a_212_);
lean_ctor_set(v___x_245_, 1, v___x_244_);
v___x_246_ = l_Lean_Syntax_node1(v_a_212_, v___x_243_, v___x_245_);
v___x_247_ = l_Lean_Syntax_node1(v_a_212_, v___x_219_, v___x_246_);
v___x_248_ = l_Lean_Syntax_node1(v_a_212_, v___x_219_, v___x_247_);
v___x_249_ = l_Lean_Syntax_node4(v_a_212_, v___x_235_, v___x_237_, v___x_248_, v___x_241_, v_____x_144_);
v___x_250_ = l_Lean_Syntax_node2(v_a_212_, v___x_219_, v___x_242_, v___x_249_);
v___x_251_ = l_Lean_Syntax_node1(v_a_212_, v___x_234_, v___x_250_);
v___x_252_ = l_Lean_Syntax_node7(v_a_212_, v___x_215_, v___x_218_, v___x_221_, v___x_221_, v___x_221_, v___x_231_, v___x_233_, v___x_251_);
v_____x_121_ = v___x_252_;
v___y_122_ = v_a_213_;
goto v___jp_120_;
}
}
}
else
{
lean_object* v_a_255_; lean_object* v_a_256_; lean_object* v___x_258_; uint8_t v_isShared_259_; uint8_t v_isSharedCheck_263_; 
lean_dec(v___x_193_);
lean_dec(v___x_192_);
lean_dec(v_____x_144_);
lean_del_object(v___x_139_);
lean_del_object(v___x_134_);
lean_dec(v_snd_132_);
v_a_255_ = lean_ctor_get(v___x_211_, 0);
v_a_256_ = lean_ctor_get(v___x_211_, 1);
v_isSharedCheck_263_ = !lean_is_exclusive(v___x_211_);
if (v_isSharedCheck_263_ == 0)
{
v___x_258_ = v___x_211_;
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
else
{
lean_inc(v_a_256_);
lean_inc(v_a_255_);
lean_dec(v___x_211_);
v___x_258_ = lean_box(0);
v_isShared_259_ = v_isSharedCheck_263_;
goto v_resetjp_257_;
}
v_resetjp_257_:
{
lean_object* v___x_261_; 
if (v_isShared_259_ == 0)
{
v___x_261_ = v___x_258_;
goto v_reusejp_260_;
}
else
{
lean_object* v_reuseFailAlloc_262_; 
v_reuseFailAlloc_262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_262_, 0, v_a_255_);
lean_ctor_set(v_reuseFailAlloc_262_, 1, v_a_256_);
v___x_261_ = v_reuseFailAlloc_262_;
goto v_reusejp_260_;
}
v_reusejp_260_:
{
return v___x_261_;
}
}
}
}
}
else
{
lean_object* v_ref_264_; lean_object* v___x_265_; lean_object* v___x_266_; lean_object* v___x_267_; lean_object* v___x_268_; lean_object* v___x_270_; 
v_ref_264_ = lean_ctor_get(v___y_145_, 5);
v___x_265_ = l_Lean_Syntax_getArg(v___x_193_, v___x_141_);
lean_dec(v___x_193_);
v___x_266_ = l_Lean_SourceInfo_fromRef(v_ref_264_, v___x_113_);
v___x_267_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20));
v___x_268_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__21));
lean_inc(v___x_266_);
if (v_isShared_140_ == 0)
{
lean_ctor_set_tag(v___x_139_, 2);
lean_ctor_set(v___x_139_, 1, v___x_268_);
lean_ctor_set(v___x_139_, 0, v___x_266_);
v___x_270_ = v___x_139_;
goto v_reusejp_269_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v___x_268_);
v___x_270_ = v_reuseFailAlloc_300_;
goto v_reusejp_269_;
}
v_reusejp_269_:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; lean_object* v___x_277_; lean_object* v___x_279_; 
v___x_271_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_272_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
lean_inc_n(v___x_266_, 4);
v___x_273_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_273_, 0, v___x_266_);
lean_ctor_set(v___x_273_, 1, v___x_271_);
lean_ctor_set(v___x_273_, 2, v___x_272_);
v___x_274_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23));
lean_inc_ref(v___x_273_);
v___x_275_ = l_Lean_Syntax_node2(v___x_266_, v___x_274_, v___x_273_, v___x_265_);
v___x_276_ = l_Lean_Syntax_node1(v___x_266_, v___x_271_, v___x_275_);
v___x_277_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__29));
if (v_isShared_135_ == 0)
{
lean_ctor_set_tag(v___x_134_, 2);
lean_ctor_set(v___x_134_, 1, v___x_277_);
lean_ctor_set(v___x_134_, 0, v___x_266_);
v___x_279_ = v___x_134_;
goto v_reusejp_278_;
}
else
{
lean_object* v_reuseFailAlloc_299_; 
v_reuseFailAlloc_299_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_299_, 0, v___x_266_);
lean_ctor_set(v_reuseFailAlloc_299_, 1, v___x_277_);
v___x_279_ = v_reuseFailAlloc_299_;
goto v_reusejp_278_;
}
v_reusejp_278_:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; 
v___x_280_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31));
v___x_281_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33));
v___x_282_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__34));
lean_inc_n(v___x_266_, 12);
v___x_283_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_283_, 0, v___x_266_);
lean_ctor_set(v___x_283_, 1, v___x_282_);
v___x_284_ = l_Lean_Syntax_node1(v___x_266_, v___x_271_, v___x_192_);
v___x_285_ = l_Lean_Syntax_node1(v___x_266_, v___x_271_, v___x_284_);
v___x_286_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__35));
v___x_287_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_287_, 0, v___x_266_);
lean_ctor_set(v___x_287_, 1, v___x_286_);
lean_inc_ref(v___x_287_);
lean_inc_ref(v___x_283_);
v___x_288_ = l_Lean_Syntax_node4(v___x_266_, v___x_281_, v___x_283_, v___x_285_, v___x_287_, v_snd_132_);
v___x_289_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37));
v___x_290_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38));
v___x_291_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_291_, 0, v___x_266_);
lean_ctor_set(v___x_291_, 1, v___x_290_);
v___x_292_ = l_Lean_Syntax_node1(v___x_266_, v___x_289_, v___x_291_);
v___x_293_ = l_Lean_Syntax_node1(v___x_266_, v___x_271_, v___x_292_);
v___x_294_ = l_Lean_Syntax_node1(v___x_266_, v___x_271_, v___x_293_);
v___x_295_ = l_Lean_Syntax_node4(v___x_266_, v___x_281_, v___x_283_, v___x_294_, v___x_287_, v_____x_144_);
v___x_296_ = l_Lean_Syntax_node2(v___x_266_, v___x_271_, v___x_288_, v___x_295_);
v___x_297_ = l_Lean_Syntax_node1(v___x_266_, v___x_280_, v___x_296_);
lean_inc_ref_n(v___x_273_, 2);
v___x_298_ = l_Lean_Syntax_node7(v___x_266_, v___x_267_, v___x_270_, v___x_273_, v___x_273_, v___x_273_, v___x_276_, v___x_279_, v___x_297_);
v_____x_121_ = v___x_298_;
v___y_122_ = v___y_146_;
goto v___jp_120_;
}
}
}
}
}
}
}
}
v___jp_120_:
{
lean_object* v___x_123_; lean_object* v___x_124_; size_t v___x_125_; size_t v___x_126_; 
v___x_123_ = lean_box(v___x_113_);
v___x_124_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_124_, 0, v_____x_121_);
lean_ctor_set(v___x_124_, 1, v___x_123_);
v___x_125_ = ((size_t)1ULL);
v___x_126_ = lean_usize_add(v_i_116_, v___x_125_);
v_i_116_ = v___x_126_;
v_b_117_ = v___x_124_;
v___y_119_ = v___y_122_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___boxed(lean_object* v___x_325_, lean_object* v_as_326_, lean_object* v_sz_327_, lean_object* v_i_328_, lean_object* v_b_329_, lean_object* v___y_330_, lean_object* v___y_331_){
_start:
{
uint8_t v___x_31106__boxed_332_; size_t v_sz_boxed_333_; size_t v_i_boxed_334_; lean_object* v_res_335_; 
v___x_31106__boxed_332_ = lean_unbox(v___x_325_);
v_sz_boxed_333_ = lean_unbox_usize(v_sz_327_);
lean_dec(v_sz_327_);
v_i_boxed_334_ = lean_unbox_usize(v_i_328_);
lean_dec(v_i_328_);
v_res_335_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3(v___x_31106__boxed_332_, v_as_326_, v_sz_boxed_333_, v_i_boxed_334_, v_b_329_, v___y_330_, v___y_331_);
lean_dec_ref(v___y_330_);
lean_dec_ref(v_as_326_);
return v_res_335_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0(lean_object* v_____do__lift_336_, lean_object* v___y_337_, lean_object* v___y_338_){
_start:
{
uint8_t v___x_339_; lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_339_ = 0;
v___x_340_ = l_Lean_SourceInfo_fromRef(v_____do__lift_336_, v___x_339_);
v___x_341_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_341_, 0, v___x_340_);
lean_ctor_set(v___x_341_, 1, v___y_338_);
return v___x_341_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0___boxed(lean_object* v_____do__lift_342_, lean_object* v___y_343_, lean_object* v___y_344_){
_start:
{
lean_object* v_res_345_; 
v_res_345_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0(v_____do__lift_342_, v___y_343_, v___y_344_);
lean_dec_ref(v___y_343_);
lean_dec(v_____do__lift_342_);
return v_res_345_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4(lean_object* v_as_346_, size_t v_sz_347_, size_t v_i_348_, lean_object* v_b_349_, lean_object* v___y_350_, lean_object* v___y_351_){
_start:
{
lean_object* v_____x_353_; lean_object* v___y_354_; uint8_t v___x_361_; 
v___x_361_ = lean_usize_dec_lt(v_i_348_, v_sz_347_);
if (v___x_361_ == 0)
{
lean_object* v___x_362_; 
v___x_362_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_362_, 0, v_b_349_);
lean_ctor_set(v___x_362_, 1, v___y_351_);
return v___x_362_;
}
else
{
lean_object* v_a_363_; lean_object* v_fst_364_; lean_object* v_snd_365_; lean_object* v___x_367_; uint8_t v_isShared_368_; uint8_t v_isSharedCheck_558_; 
v_a_363_ = lean_array_uget(v_as_346_, v_i_348_);
v_fst_364_ = lean_ctor_get(v_a_363_, 0);
v_snd_365_ = lean_ctor_get(v_a_363_, 1);
v_isSharedCheck_558_ = !lean_is_exclusive(v_a_363_);
if (v_isSharedCheck_558_ == 0)
{
v___x_367_ = v_a_363_;
v_isShared_368_ = v_isSharedCheck_558_;
goto v_resetjp_366_;
}
else
{
lean_inc(v_snd_365_);
lean_inc(v_fst_364_);
lean_dec(v_a_363_);
v___x_367_ = lean_box(0);
v_isShared_368_ = v_isSharedCheck_558_;
goto v_resetjp_366_;
}
v_resetjp_366_:
{
lean_object* v_fst_369_; lean_object* v_snd_370_; lean_object* v___x_372_; uint8_t v_isShared_373_; uint8_t v_isSharedCheck_557_; 
v_fst_369_ = lean_ctor_get(v_b_349_, 0);
v_snd_370_ = lean_ctor_get(v_b_349_, 1);
v_isSharedCheck_557_ = !lean_is_exclusive(v_b_349_);
if (v_isSharedCheck_557_ == 0)
{
v___x_372_ = v_b_349_;
v_isShared_373_ = v_isSharedCheck_557_;
goto v_resetjp_371_;
}
else
{
lean_inc(v_snd_370_);
lean_inc(v_fst_369_);
lean_dec(v_b_349_);
v___x_372_ = lean_box(0);
v_isShared_373_ = v_isSharedCheck_557_;
goto v_resetjp_371_;
}
v_resetjp_371_:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v_____x_377_; lean_object* v___y_378_; lean_object* v___y_379_; uint8_t v___x_535_; 
v___x_374_ = lean_unsigned_to_nat(1u);
v___x_375_ = lean_unsigned_to_nat(2u);
v___x_535_ = lean_unbox(v_snd_370_);
lean_dec(v_snd_370_);
if (v___x_535_ == 0)
{
lean_object* v_ref_536_; lean_object* v___x_537_; 
v_ref_536_ = lean_ctor_get(v___y_350_, 5);
v___x_537_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0(v_ref_536_, v___y_350_, v___y_351_);
if (lean_obj_tag(v___x_537_) == 0)
{
lean_object* v_a_538_; lean_object* v_a_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v_a_538_ = lean_ctor_get(v___x_537_, 0);
lean_inc_n(v_a_538_, 4);
v_a_539_ = lean_ctor_get(v___x_537_, 1);
lean_inc(v_a_539_);
lean_dec_ref_known(v___x_537_, 2);
v___x_540_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40));
v___x_541_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_542_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42));
v___x_543_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
v___x_544_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_544_, 0, v_a_538_);
lean_ctor_set(v___x_544_, 1, v___x_541_);
lean_ctor_set(v___x_544_, 2, v___x_543_);
v___x_545_ = l_Lean_Syntax_node2(v_a_538_, v___x_542_, v_fst_369_, v___x_544_);
v___x_546_ = l_Lean_Syntax_node1(v_a_538_, v___x_541_, v___x_545_);
v___x_547_ = l_Lean_Syntax_node1(v_a_538_, v___x_540_, v___x_546_);
v_____x_377_ = v___x_547_;
v___y_378_ = v___y_350_;
v___y_379_ = v_a_539_;
goto v___jp_376_;
}
else
{
lean_object* v_a_548_; lean_object* v_a_549_; lean_object* v___x_551_; uint8_t v_isShared_552_; uint8_t v_isSharedCheck_556_; 
lean_del_object(v___x_372_);
lean_dec(v_fst_369_);
lean_del_object(v___x_367_);
lean_dec(v_snd_365_);
lean_dec(v_fst_364_);
v_a_548_ = lean_ctor_get(v___x_537_, 0);
v_a_549_ = lean_ctor_get(v___x_537_, 1);
v_isSharedCheck_556_ = !lean_is_exclusive(v___x_537_);
if (v_isSharedCheck_556_ == 0)
{
v___x_551_ = v___x_537_;
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
else
{
lean_inc(v_a_549_);
lean_inc(v_a_548_);
lean_dec(v___x_537_);
v___x_551_ = lean_box(0);
v_isShared_552_ = v_isSharedCheck_556_;
goto v_resetjp_550_;
}
v_resetjp_550_:
{
lean_object* v___x_554_; 
if (v_isShared_552_ == 0)
{
v___x_554_ = v___x_551_;
goto v_reusejp_553_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v_a_548_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_a_549_);
v___x_554_ = v_reuseFailAlloc_555_;
goto v_reusejp_553_;
}
v_reusejp_553_:
{
return v___x_554_;
}
}
}
}
else
{
v_____x_377_ = v_fst_369_;
v___y_378_ = v___y_350_;
v___y_379_ = v___y_351_;
goto v___jp_376_;
}
v___jp_376_:
{
lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_380_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__4));
lean_inc(v_fst_364_);
v___x_381_ = l_Lean_Syntax_isOfKind(v_fst_364_, v___x_380_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; uint8_t v___x_383_; 
v___x_382_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6));
lean_inc(v_fst_364_);
v___x_383_ = l_Lean_Syntax_isOfKind(v_fst_364_, v___x_382_);
if (v___x_383_ == 0)
{
lean_object* v___x_384_; 
lean_dec(v_____x_377_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
lean_dec(v_snd_365_);
lean_dec(v_fst_364_);
v___x_384_ = l_Lean_Macro_throwUnsupported___redArg(v___y_379_);
if (lean_obj_tag(v___x_384_) == 0)
{
lean_object* v_a_385_; lean_object* v_a_386_; 
v_a_385_ = lean_ctor_get(v___x_384_, 0);
lean_inc(v_a_385_);
v_a_386_ = lean_ctor_get(v___x_384_, 1);
lean_inc(v_a_386_);
lean_dec_ref_known(v___x_384_, 2);
v_____x_353_ = v_a_385_;
v___y_354_ = v_a_386_;
goto v___jp_352_;
}
else
{
lean_object* v_a_387_; lean_object* v_a_388_; lean_object* v___x_390_; uint8_t v_isShared_391_; uint8_t v_isSharedCheck_395_; 
v_a_387_ = lean_ctor_get(v___x_384_, 0);
v_a_388_ = lean_ctor_get(v___x_384_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v___x_384_);
if (v_isSharedCheck_395_ == 0)
{
v___x_390_ = v___x_384_;
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
else
{
lean_inc(v_a_388_);
lean_inc(v_a_387_);
lean_dec(v___x_384_);
v___x_390_ = lean_box(0);
v_isShared_391_ = v_isSharedCheck_395_;
goto v_resetjp_389_;
}
v_resetjp_389_:
{
lean_object* v___x_393_; 
if (v_isShared_391_ == 0)
{
v___x_393_ = v___x_390_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v_a_387_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v_a_388_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
else
{
lean_object* v_ref_396_; lean_object* v___x_397_; 
v_ref_396_ = lean_ctor_get(v___y_378_, 5);
v___x_397_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0(v_ref_396_, v___y_378_, v___y_379_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_a_398_; lean_object* v_a_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
v_a_398_ = lean_ctor_get(v___x_397_, 0);
lean_inc_n(v_a_398_, 2);
v_a_399_ = lean_ctor_get(v___x_397_, 1);
lean_inc(v_a_399_);
lean_dec_ref_known(v___x_397_, 2);
v___x_400_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8));
v___x_401_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9));
if (v_isShared_373_ == 0)
{
lean_ctor_set_tag(v___x_372_, 2);
lean_ctor_set(v___x_372_, 1, v___x_401_);
lean_ctor_set(v___x_372_, 0, v_a_398_);
v___x_403_ = v___x_372_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v_a_398_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v___x_401_);
v___x_403_ = v_reuseFailAlloc_415_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; lean_object* v___x_406_; 
v___x_404_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10));
lean_inc(v_a_398_);
if (v_isShared_368_ == 0)
{
lean_ctor_set_tag(v___x_367_, 2);
lean_ctor_set(v___x_367_, 1, v___x_404_);
lean_ctor_set(v___x_367_, 0, v_a_398_);
v___x_406_ = v___x_367_;
goto v_reusejp_405_;
}
else
{
lean_object* v_reuseFailAlloc_414_; 
v_reuseFailAlloc_414_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_414_, 0, v_a_398_);
lean_ctor_set(v_reuseFailAlloc_414_, 1, v___x_404_);
v___x_406_ = v_reuseFailAlloc_414_;
goto v_reusejp_405_;
}
v_reusejp_405_:
{
lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; 
v___x_407_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_408_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
lean_inc_n(v_a_398_, 3);
v___x_409_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_409_, 0, v_a_398_);
lean_ctor_set(v___x_409_, 1, v___x_407_);
lean_ctor_set(v___x_409_, 2, v___x_408_);
v___x_410_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14));
v___x_411_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_411_, 0, v_a_398_);
lean_ctor_set(v___x_411_, 1, v___x_410_);
v___x_412_ = l_Lean_Syntax_node2(v_a_398_, v___x_407_, v___x_411_, v_____x_377_);
v___x_413_ = l_Lean_Syntax_node6(v_a_398_, v___x_400_, v___x_403_, v_fst_364_, v___x_406_, v_snd_365_, v___x_409_, v___x_412_);
v_____x_353_ = v___x_413_;
v___y_354_ = v_a_399_;
goto v___jp_352_;
}
}
}
else
{
lean_object* v_a_416_; lean_object* v_a_417_; lean_object* v___x_419_; uint8_t v_isShared_420_; uint8_t v_isSharedCheck_424_; 
lean_dec(v_____x_377_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
lean_dec(v_snd_365_);
lean_dec(v_fst_364_);
v_a_416_ = lean_ctor_get(v___x_397_, 0);
v_a_417_ = lean_ctor_get(v___x_397_, 1);
v_isSharedCheck_424_ = !lean_is_exclusive(v___x_397_);
if (v_isSharedCheck_424_ == 0)
{
v___x_419_ = v___x_397_;
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
else
{
lean_inc(v_a_417_);
lean_inc(v_a_416_);
lean_dec(v___x_397_);
v___x_419_ = lean_box(0);
v_isShared_420_ = v_isSharedCheck_424_;
goto v_resetjp_418_;
}
v_resetjp_418_:
{
lean_object* v___x_422_; 
if (v_isShared_420_ == 0)
{
v___x_422_ = v___x_419_;
goto v_reusejp_421_;
}
else
{
lean_object* v_reuseFailAlloc_423_; 
v_reuseFailAlloc_423_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_423_, 0, v_a_416_);
lean_ctor_set(v_reuseFailAlloc_423_, 1, v_a_417_);
v___x_422_ = v_reuseFailAlloc_423_;
goto v_reusejp_421_;
}
v_reusejp_421_:
{
return v___x_422_;
}
}
}
}
}
else
{
lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; uint8_t v___x_428_; 
v___x_425_ = l_Lean_Syntax_getArg(v_fst_364_, v___x_374_);
v___x_426_ = l_Lean_Syntax_getArg(v_fst_364_, v___x_375_);
lean_dec(v_fst_364_);
v___x_427_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__16));
lean_inc(v___x_426_);
v___x_428_ = l_Lean_Syntax_isOfKind(v___x_426_, v___x_427_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; uint8_t v___x_430_; 
v___x_429_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__18));
lean_inc(v___x_426_);
v___x_430_ = l_Lean_Syntax_isOfKind(v___x_426_, v___x_429_);
if (v___x_430_ == 0)
{
lean_object* v___x_431_; 
lean_dec(v___x_426_);
lean_dec(v___x_425_);
lean_dec(v_____x_377_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
lean_dec(v_snd_365_);
v___x_431_ = l_Lean_Macro_throwUnsupported___redArg(v___y_379_);
if (lean_obj_tag(v___x_431_) == 0)
{
lean_object* v_a_432_; lean_object* v_a_433_; 
v_a_432_ = lean_ctor_get(v___x_431_, 0);
lean_inc(v_a_432_);
v_a_433_ = lean_ctor_get(v___x_431_, 1);
lean_inc(v_a_433_);
lean_dec_ref_known(v___x_431_, 2);
v_____x_353_ = v_a_432_;
v___y_354_ = v_a_433_;
goto v___jp_352_;
}
else
{
lean_object* v_a_434_; lean_object* v_a_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_442_; 
v_a_434_ = lean_ctor_get(v___x_431_, 0);
v_a_435_ = lean_ctor_get(v___x_431_, 1);
v_isSharedCheck_442_ = !lean_is_exclusive(v___x_431_);
if (v_isSharedCheck_442_ == 0)
{
v___x_437_ = v___x_431_;
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_a_435_);
lean_inc(v_a_434_);
lean_dec(v___x_431_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_442_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_440_; 
if (v_isShared_438_ == 0)
{
v___x_440_ = v___x_437_;
goto v_reusejp_439_;
}
else
{
lean_object* v_reuseFailAlloc_441_; 
v_reuseFailAlloc_441_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_441_, 0, v_a_434_);
lean_ctor_set(v_reuseFailAlloc_441_, 1, v_a_435_);
v___x_440_ = v_reuseFailAlloc_441_;
goto v_reusejp_439_;
}
v_reusejp_439_:
{
return v___x_440_;
}
}
}
}
else
{
lean_object* v_ref_443_; lean_object* v___x_444_; 
v_ref_443_ = lean_ctor_get(v___y_378_, 5);
v___x_444_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___lam__0(v_ref_443_, v___y_378_, v___y_379_);
if (lean_obj_tag(v___x_444_) == 0)
{
lean_object* v_a_445_; lean_object* v_a_446_; lean_object* v___x_447_; lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_451_; 
v_a_445_ = lean_ctor_get(v___x_444_, 0);
lean_inc_n(v_a_445_, 2);
v_a_446_ = lean_ctor_get(v___x_444_, 1);
lean_inc(v_a_446_);
lean_dec_ref_known(v___x_444_, 2);
v___x_447_ = l_Lean_Syntax_getArg(v___x_426_, v___x_374_);
lean_dec(v___x_426_);
v___x_448_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20));
v___x_449_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__21));
if (v_isShared_373_ == 0)
{
lean_ctor_set_tag(v___x_372_, 2);
lean_ctor_set(v___x_372_, 1, v___x_449_);
lean_ctor_set(v___x_372_, 0, v_a_445_);
v___x_451_ = v___x_372_;
goto v_reusejp_450_;
}
else
{
lean_object* v_reuseFailAlloc_487_; 
v_reuseFailAlloc_487_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_487_, 0, v_a_445_);
lean_ctor_set(v_reuseFailAlloc_487_, 1, v___x_449_);
v___x_451_ = v_reuseFailAlloc_487_;
goto v_reusejp_450_;
}
v_reusejp_450_:
{
lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_459_; 
v___x_452_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_453_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
lean_inc_n(v_a_445_, 2);
v___x_454_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_454_, 0, v_a_445_);
lean_ctor_set(v___x_454_, 1, v___x_452_);
lean_ctor_set(v___x_454_, 2, v___x_453_);
v___x_455_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23));
v___x_456_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__25));
v___x_457_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__26));
if (v_isShared_368_ == 0)
{
lean_ctor_set_tag(v___x_367_, 2);
lean_ctor_set(v___x_367_, 1, v___x_457_);
lean_ctor_set(v___x_367_, 0, v_a_445_);
v___x_459_ = v___x_367_;
goto v_reusejp_458_;
}
else
{
lean_object* v_reuseFailAlloc_486_; 
v_reuseFailAlloc_486_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_486_, 0, v_a_445_);
lean_ctor_set(v_reuseFailAlloc_486_, 1, v___x_457_);
v___x_459_ = v_reuseFailAlloc_486_;
goto v_reusejp_458_;
}
v_reusejp_458_:
{
lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v___x_472_; lean_object* v___x_473_; lean_object* v___x_474_; lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_460_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__28));
lean_inc_n(v_a_445_, 17);
v___x_461_ = l_Lean_Syntax_node1(v_a_445_, v___x_460_, v___x_447_);
v___x_462_ = l_Lean_Syntax_node2(v_a_445_, v___x_456_, v___x_459_, v___x_461_);
lean_inc_ref_n(v___x_454_, 3);
v___x_463_ = l_Lean_Syntax_node2(v_a_445_, v___x_455_, v___x_454_, v___x_462_);
v___x_464_ = l_Lean_Syntax_node1(v_a_445_, v___x_452_, v___x_463_);
v___x_465_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__29));
v___x_466_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_466_, 0, v_a_445_);
lean_ctor_set(v___x_466_, 1, v___x_465_);
v___x_467_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31));
v___x_468_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33));
v___x_469_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__34));
v___x_470_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_470_, 0, v_a_445_);
lean_ctor_set(v___x_470_, 1, v___x_469_);
v___x_471_ = l_Lean_Syntax_node1(v_a_445_, v___x_452_, v___x_425_);
v___x_472_ = l_Lean_Syntax_node1(v_a_445_, v___x_452_, v___x_471_);
v___x_473_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__35));
v___x_474_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_474_, 0, v_a_445_);
lean_ctor_set(v___x_474_, 1, v___x_473_);
lean_inc_ref(v___x_474_);
lean_inc_ref(v___x_470_);
v___x_475_ = l_Lean_Syntax_node4(v_a_445_, v___x_468_, v___x_470_, v___x_472_, v___x_474_, v_snd_365_);
v___x_476_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37));
v___x_477_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38));
v___x_478_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_478_, 0, v_a_445_);
lean_ctor_set(v___x_478_, 1, v___x_477_);
v___x_479_ = l_Lean_Syntax_node1(v_a_445_, v___x_476_, v___x_478_);
v___x_480_ = l_Lean_Syntax_node1(v_a_445_, v___x_452_, v___x_479_);
v___x_481_ = l_Lean_Syntax_node1(v_a_445_, v___x_452_, v___x_480_);
v___x_482_ = l_Lean_Syntax_node4(v_a_445_, v___x_468_, v___x_470_, v___x_481_, v___x_474_, v_____x_377_);
v___x_483_ = l_Lean_Syntax_node2(v_a_445_, v___x_452_, v___x_475_, v___x_482_);
v___x_484_ = l_Lean_Syntax_node1(v_a_445_, v___x_467_, v___x_483_);
v___x_485_ = l_Lean_Syntax_node7(v_a_445_, v___x_448_, v___x_451_, v___x_454_, v___x_454_, v___x_454_, v___x_464_, v___x_466_, v___x_484_);
v_____x_353_ = v___x_485_;
v___y_354_ = v_a_446_;
goto v___jp_352_;
}
}
}
else
{
lean_object* v_a_488_; lean_object* v_a_489_; lean_object* v___x_491_; uint8_t v_isShared_492_; uint8_t v_isSharedCheck_496_; 
lean_dec(v___x_426_);
lean_dec(v___x_425_);
lean_dec(v_____x_377_);
lean_del_object(v___x_372_);
lean_del_object(v___x_367_);
lean_dec(v_snd_365_);
v_a_488_ = lean_ctor_get(v___x_444_, 0);
v_a_489_ = lean_ctor_get(v___x_444_, 1);
v_isSharedCheck_496_ = !lean_is_exclusive(v___x_444_);
if (v_isSharedCheck_496_ == 0)
{
v___x_491_ = v___x_444_;
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
else
{
lean_inc(v_a_489_);
lean_inc(v_a_488_);
lean_dec(v___x_444_);
v___x_491_ = lean_box(0);
v_isShared_492_ = v_isSharedCheck_496_;
goto v_resetjp_490_;
}
v_resetjp_490_:
{
lean_object* v___x_494_; 
if (v_isShared_492_ == 0)
{
v___x_494_ = v___x_491_;
goto v_reusejp_493_;
}
else
{
lean_object* v_reuseFailAlloc_495_; 
v_reuseFailAlloc_495_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_495_, 0, v_a_488_);
lean_ctor_set(v_reuseFailAlloc_495_, 1, v_a_489_);
v___x_494_ = v_reuseFailAlloc_495_;
goto v_reusejp_493_;
}
v_reusejp_493_:
{
return v___x_494_;
}
}
}
}
}
else
{
lean_object* v_ref_497_; lean_object* v___x_498_; uint8_t v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; lean_object* v___x_502_; lean_object* v___x_504_; 
v_ref_497_ = lean_ctor_get(v___y_378_, 5);
v___x_498_ = l_Lean_Syntax_getArg(v___x_426_, v___x_374_);
lean_dec(v___x_426_);
v___x_499_ = 0;
v___x_500_ = l_Lean_SourceInfo_fromRef(v_ref_497_, v___x_499_);
v___x_501_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__20));
v___x_502_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__21));
lean_inc(v___x_500_);
if (v_isShared_373_ == 0)
{
lean_ctor_set_tag(v___x_372_, 2);
lean_ctor_set(v___x_372_, 1, v___x_502_);
lean_ctor_set(v___x_372_, 0, v___x_500_);
v___x_504_ = v___x_372_;
goto v_reusejp_503_;
}
else
{
lean_object* v_reuseFailAlloc_534_; 
v_reuseFailAlloc_534_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_534_, 0, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_534_, 1, v___x_502_);
v___x_504_ = v_reuseFailAlloc_534_;
goto v_reusejp_503_;
}
v_reusejp_503_:
{
lean_object* v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_513_; 
v___x_505_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_506_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
lean_inc_n(v___x_500_, 4);
v___x_507_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_507_, 0, v___x_500_);
lean_ctor_set(v___x_507_, 1, v___x_505_);
lean_ctor_set(v___x_507_, 2, v___x_506_);
v___x_508_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__23));
lean_inc_ref(v___x_507_);
v___x_509_ = l_Lean_Syntax_node2(v___x_500_, v___x_508_, v___x_507_, v___x_498_);
v___x_510_ = l_Lean_Syntax_node1(v___x_500_, v___x_505_, v___x_509_);
v___x_511_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__29));
if (v_isShared_368_ == 0)
{
lean_ctor_set_tag(v___x_367_, 2);
lean_ctor_set(v___x_367_, 1, v___x_511_);
lean_ctor_set(v___x_367_, 0, v___x_500_);
v___x_513_ = v___x_367_;
goto v_reusejp_512_;
}
else
{
lean_object* v_reuseFailAlloc_533_; 
v_reuseFailAlloc_533_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_533_, 0, v___x_500_);
lean_ctor_set(v_reuseFailAlloc_533_, 1, v___x_511_);
v___x_513_ = v_reuseFailAlloc_533_;
goto v_reusejp_512_;
}
v_reusejp_512_:
{
lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; 
v___x_514_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__31));
v___x_515_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__33));
v___x_516_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__34));
lean_inc_n(v___x_500_, 12);
v___x_517_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_500_);
lean_ctor_set(v___x_517_, 1, v___x_516_);
v___x_518_ = l_Lean_Syntax_node1(v___x_500_, v___x_505_, v___x_425_);
v___x_519_ = l_Lean_Syntax_node1(v___x_500_, v___x_505_, v___x_518_);
v___x_520_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__35));
v___x_521_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_521_, 0, v___x_500_);
lean_ctor_set(v___x_521_, 1, v___x_520_);
lean_inc_ref(v___x_521_);
lean_inc_ref(v___x_517_);
v___x_522_ = l_Lean_Syntax_node4(v___x_500_, v___x_515_, v___x_517_, v___x_519_, v___x_521_, v_snd_365_);
v___x_523_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37));
v___x_524_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38));
v___x_525_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_525_, 0, v___x_500_);
lean_ctor_set(v___x_525_, 1, v___x_524_);
v___x_526_ = l_Lean_Syntax_node1(v___x_500_, v___x_523_, v___x_525_);
v___x_527_ = l_Lean_Syntax_node1(v___x_500_, v___x_505_, v___x_526_);
v___x_528_ = l_Lean_Syntax_node1(v___x_500_, v___x_505_, v___x_527_);
v___x_529_ = l_Lean_Syntax_node4(v___x_500_, v___x_515_, v___x_517_, v___x_528_, v___x_521_, v_____x_377_);
v___x_530_ = l_Lean_Syntax_node2(v___x_500_, v___x_505_, v___x_522_, v___x_529_);
v___x_531_ = l_Lean_Syntax_node1(v___x_500_, v___x_514_, v___x_530_);
lean_inc_ref_n(v___x_507_, 2);
v___x_532_ = l_Lean_Syntax_node7(v___x_500_, v___x_501_, v___x_504_, v___x_507_, v___x_507_, v___x_507_, v___x_510_, v___x_513_, v___x_531_);
v_____x_353_ = v___x_532_;
v___y_354_ = v___y_379_;
goto v___jp_352_;
}
}
}
}
}
}
}
}
v___jp_352_:
{
uint8_t v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; size_t v___x_358_; size_t v___x_359_; 
v___x_355_ = 0;
v___x_356_ = lean_box(v___x_355_);
v___x_357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_357_, 0, v_____x_353_);
lean_ctor_set(v___x_357_, 1, v___x_356_);
v___x_358_ = ((size_t)1ULL);
v___x_359_ = lean_usize_add(v_i_348_, v___x_358_);
v_i_348_ = v___x_359_;
v_b_349_ = v___x_357_;
v___y_351_ = v___y_354_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4___boxed(lean_object* v_as_559_, lean_object* v_sz_560_, lean_object* v_i_561_, lean_object* v_b_562_, lean_object* v___y_563_, lean_object* v___y_564_){
_start:
{
size_t v_sz_boxed_565_; size_t v_i_boxed_566_; lean_object* v_res_567_; 
v_sz_boxed_565_ = lean_unbox_usize(v_sz_560_);
lean_dec(v_sz_560_);
v_i_boxed_566_ = lean_unbox_usize(v_i_561_);
lean_dec(v_i_561_);
v_res_567_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4(v_as_559_, v_sz_boxed_565_, v_i_boxed_566_, v_b_562_, v___y_563_, v___y_564_);
lean_dec_ref(v___y_563_);
lean_dec_ref(v_as_559_);
return v_res_567_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0(size_t v_sz_571_, size_t v_i_572_, lean_object* v_bs_573_){
_start:
{
uint8_t v___x_574_; 
v___x_574_ = lean_usize_dec_lt(v_i_572_, v_sz_571_);
if (v___x_574_ == 0)
{
lean_object* v___x_575_; 
v___x_575_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_575_, 0, v_bs_573_);
return v___x_575_;
}
else
{
lean_object* v_v_576_; lean_object* v___x_577_; uint8_t v___x_578_; 
v_v_576_ = lean_array_uget(v_bs_573_, v_i_572_);
v___x_577_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___closed__1));
lean_inc(v_v_576_);
v___x_578_ = l_Lean_Syntax_isOfKind(v_v_576_, v___x_577_);
if (v___x_578_ == 0)
{
lean_object* v___x_579_; 
lean_dec(v_v_576_);
lean_dec_ref(v_bs_573_);
v___x_579_ = lean_box(0);
return v___x_579_;
}
else
{
lean_object* v___x_580_; lean_object* v___x_581_; uint8_t v___x_582_; 
v___x_580_ = lean_unsigned_to_nat(0u);
v___x_581_ = l_Lean_Syntax_getArg(v_v_576_, v___x_580_);
lean_inc(v___x_581_);
v___x_582_ = l_Lean_Syntax_isOfKind(v___x_581_, v___x_577_);
if (v___x_582_ == 0)
{
lean_object* v___x_583_; 
lean_dec(v___x_581_);
lean_dec(v_v_576_);
lean_dec_ref(v_bs_573_);
v___x_583_ = lean_box(0);
return v___x_583_;
}
else
{
lean_object* v___x_584_; lean_object* v___x_585_; lean_object* v_bs_x27_586_; lean_object* v_tks_587_; lean_object* v_conds_588_; lean_object* v_ts_589_; lean_object* v___x_590_; lean_object* v___x_591_; size_t v___x_592_; size_t v___x_593_; lean_object* v___x_594_; 
v___x_584_ = lean_unsigned_to_nat(1u);
v___x_585_ = lean_unsigned_to_nat(3u);
v_bs_x27_586_ = lean_array_uset(v_bs_573_, v_i_572_, v___x_580_);
v_tks_587_ = l_Lean_Syntax_getArg(v___x_581_, v___x_584_);
lean_dec(v___x_581_);
v_conds_588_ = l_Lean_Syntax_getArg(v_v_576_, v___x_584_);
v_ts_589_ = l_Lean_Syntax_getArg(v_v_576_, v___x_585_);
lean_dec(v_v_576_);
v___x_590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_590_, 0, v_conds_588_);
lean_ctor_set(v___x_590_, 1, v_ts_589_);
v___x_591_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_591_, 0, v_tks_587_);
lean_ctor_set(v___x_591_, 1, v___x_590_);
v___x_592_ = ((size_t)1ULL);
v___x_593_ = lean_usize_add(v_i_572_, v___x_592_);
v___x_594_ = lean_array_uset(v_bs_x27_586_, v_i_572_, v___x_591_);
v_i_572_ = v___x_593_;
v_bs_573_ = v___x_594_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0___boxed(lean_object* v_sz_596_, lean_object* v_i_597_, lean_object* v_bs_598_){
_start:
{
size_t v_sz_boxed_599_; size_t v_i_boxed_600_; lean_object* v_res_601_; 
v_sz_boxed_599_ = lean_unbox_usize(v_sz_596_);
lean_dec(v_sz_596_);
v_i_boxed_600_ = lean_unbox_usize(v_i_597_);
lean_dec(v_i_597_);
v_res_601_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0(v_sz_boxed_599_, v_i_boxed_600_, v_bs_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2(size_t v_sz_602_, size_t v_i_603_, lean_object* v_bs_604_){
_start:
{
uint8_t v___x_605_; 
v___x_605_ = lean_usize_dec_lt(v_i_603_, v_sz_602_);
if (v___x_605_ == 0)
{
return v_bs_604_;
}
else
{
lean_object* v_v_606_; lean_object* v_snd_607_; lean_object* v_fst_608_; lean_object* v___x_609_; lean_object* v_bs_x27_610_; size_t v___x_611_; size_t v___x_612_; lean_object* v___x_613_; 
v_v_606_ = lean_array_uget_borrowed(v_bs_604_, v_i_603_);
v_snd_607_ = lean_ctor_get(v_v_606_, 1);
v_fst_608_ = lean_ctor_get(v_snd_607_, 0);
lean_inc(v_fst_608_);
v___x_609_ = lean_unsigned_to_nat(0u);
v_bs_x27_610_ = lean_array_uset(v_bs_604_, v_i_603_, v___x_609_);
v___x_611_ = ((size_t)1ULL);
v___x_612_ = lean_usize_add(v_i_603_, v___x_611_);
v___x_613_ = lean_array_uset(v_bs_x27_610_, v_i_603_, v_fst_608_);
v_i_603_ = v___x_612_;
v_bs_604_ = v___x_613_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2___boxed(lean_object* v_sz_615_, lean_object* v_i_616_, lean_object* v_bs_617_){
_start:
{
size_t v_sz_boxed_618_; size_t v_i_boxed_619_; lean_object* v_res_620_; 
v_sz_boxed_618_ = lean_unbox_usize(v_sz_615_);
lean_dec(v_sz_615_);
v_i_boxed_619_ = lean_unbox_usize(v_i_616_);
lean_dec(v_i_616_);
v_res_620_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2(v_sz_boxed_618_, v_i_boxed_619_, v_bs_617_);
return v_res_620_;
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1(size_t v_sz_621_, size_t v_i_622_, lean_object* v_bs_623_){
_start:
{
uint8_t v___x_624_; 
v___x_624_ = lean_usize_dec_lt(v_i_622_, v_sz_621_);
if (v___x_624_ == 0)
{
return v_bs_623_;
}
else
{
lean_object* v_v_625_; lean_object* v_snd_626_; lean_object* v_snd_627_; lean_object* v___x_628_; lean_object* v_bs_x27_629_; size_t v___x_630_; size_t v___x_631_; lean_object* v___x_632_; 
v_v_625_ = lean_array_uget_borrowed(v_bs_623_, v_i_622_);
v_snd_626_ = lean_ctor_get(v_v_625_, 1);
v_snd_627_ = lean_ctor_get(v_snd_626_, 1);
lean_inc(v_snd_627_);
v___x_628_ = lean_unsigned_to_nat(0u);
v_bs_x27_629_ = lean_array_uset(v_bs_623_, v_i_622_, v___x_628_);
v___x_630_ = ((size_t)1ULL);
v___x_631_ = lean_usize_add(v_i_622_, v___x_630_);
v___x_632_ = lean_array_uset(v_bs_x27_629_, v_i_622_, v_snd_627_);
v_i_622_ = v___x_631_;
v_bs_623_ = v___x_632_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1___boxed(lean_object* v_sz_634_, lean_object* v_i_635_, lean_object* v_bs_636_){
_start:
{
size_t v_sz_boxed_637_; size_t v_i_boxed_638_; lean_object* v_res_639_; 
v_sz_boxed_637_ = lean_unbox_usize(v_sz_634_);
lean_dec(v_sz_634_);
v_i_boxed_638_ = lean_unbox_usize(v_i_635_);
lean_dec(v_i_635_);
v_res_639_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1(v_sz_boxed_637_, v_i_boxed_638_, v_bs_636_);
return v_res_639_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf(lean_object* v_stx_649_, lean_object* v_a_650_, lean_object* v_a_651_){
_start:
{
lean_object* v___x_652_; uint8_t v___x_653_; 
v___x_652_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8));
lean_inc(v_stx_649_);
v___x_653_ = l_Lean_Syntax_isOfKind(v_stx_649_, v___x_652_);
if (v___x_653_ == 0)
{
lean_object* v___x_654_; 
lean_dec(v_stx_649_);
v___x_654_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_654_;
}
else
{
lean_object* v___x_655_; lean_object* v_tk_656_; lean_object* v___x_657_; lean_object* v_cond_658_; lean_object* v___x_659_; uint8_t v___x_660_; 
v___x_655_ = lean_unsigned_to_nat(0u);
v_tk_656_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_655_);
v___x_657_ = lean_unsigned_to_nat(1u);
v_cond_658_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_657_);
v___x_659_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__6));
lean_inc(v_cond_658_);
v___x_660_ = l_Lean_Syntax_isOfKind(v_cond_658_, v___x_659_);
if (v___x_660_ == 0)
{
lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; size_t v_sz_664_; size_t v___x_665_; lean_object* v___x_666_; 
v___x_661_ = lean_unsigned_to_nat(4u);
v___x_662_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_661_);
v___x_663_ = l_Lean_Syntax_getArgs(v___x_662_);
lean_dec(v___x_662_);
v_sz_664_ = lean_array_size(v___x_663_);
v___x_665_ = ((size_t)0ULL);
v___x_666_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0(v_sz_664_, v___x_665_, v___x_663_);
if (lean_obj_tag(v___x_666_) == 0)
{
lean_object* v___x_667_; 
lean_dec(v_cond_658_);
lean_dec(v_tk_656_);
lean_dec(v_stx_649_);
v___x_667_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_667_;
}
else
{
lean_object* v_val_668_; lean_object* v___x_669_; lean_object* v_t_670_; size_t v_sz_671_; lean_object* v_ts_672_; lean_object* v_conds_673_; lean_object* v___y_675_; lean_object* v_a_676_; lean_object* v_a_677_; lean_object* v___x_706_; lean_object* v___x_707_; uint8_t v___x_708_; 
v_val_668_ = lean_ctor_get(v___x_666_, 0);
lean_inc_n(v_val_668_, 2);
lean_dec_ref_known(v___x_666_, 1);
v___x_669_ = lean_unsigned_to_nat(3u);
v_t_670_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_669_);
v_sz_671_ = lean_array_size(v_val_668_);
v_ts_672_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1(v_sz_671_, v___x_665_, v_val_668_);
v_conds_673_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2(v_sz_671_, v___x_665_, v_val_668_);
v___x_706_ = lean_unsigned_to_nat(5u);
v___x_707_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_706_);
lean_dec(v_stx_649_);
v___x_708_ = l_Lean_Syntax_isNone(v___x_707_);
if (v___x_708_ == 0)
{
lean_object* v___x_709_; uint8_t v___x_710_; 
lean_dec(v_tk_656_);
v___x_709_ = lean_unsigned_to_nat(2u);
lean_inc(v___x_707_);
v___x_710_ = l_Lean_Syntax_matchesNull(v___x_707_, v___x_709_);
if (v___x_710_ == 0)
{
lean_object* v___x_711_; 
lean_dec(v___x_707_);
lean_dec_ref(v_conds_673_);
lean_dec_ref(v_ts_672_);
lean_dec(v_t_670_);
lean_dec(v_cond_658_);
v___x_711_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_711_;
}
else
{
lean_object* v_e_x3f_712_; 
v_e_x3f_712_ = l_Lean_Syntax_getArg(v___x_707_, v___x_657_);
lean_dec(v___x_707_);
v___y_675_ = v_a_650_;
v_a_676_ = v_e_x3f_712_;
v_a_677_ = v_a_651_;
goto v___jp_674_;
}
}
else
{
lean_object* v_ref_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; lean_object* v___x_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; 
lean_dec(v___x_707_);
v_ref_713_ = lean_ctor_get(v_a_650_, 5);
v___x_714_ = l_Lean_SourceInfo_fromRef(v_ref_713_, v___x_660_);
v___x_715_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40));
v___x_716_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_717_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42));
v___x_718_ = ((lean_object*)(l_Lean_Elab_Do_expandDoIf___closed__2));
v___x_719_ = l_Lean_SourceInfo_fromRef(v_tk_656_, v___x_653_);
lean_dec(v_tk_656_);
v___x_720_ = ((lean_object*)(l_Lean_Elab_Do_expandDoIf___closed__3));
v___x_721_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_721_, 0, v___x_719_);
lean_ctor_set(v___x_721_, 1, v___x_720_);
lean_inc_n(v___x_714_, 4);
v___x_722_ = l_Lean_Syntax_node1(v___x_714_, v___x_718_, v___x_721_);
v___x_723_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
v___x_724_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_724_, 0, v___x_714_);
lean_ctor_set(v___x_724_, 1, v___x_716_);
lean_ctor_set(v___x_724_, 2, v___x_723_);
v___x_725_ = l_Lean_Syntax_node2(v___x_714_, v___x_717_, v___x_722_, v___x_724_);
v___x_726_ = l_Lean_Syntax_node1(v___x_714_, v___x_716_, v___x_725_);
v___x_727_ = l_Lean_Syntax_node1(v___x_714_, v___x_715_, v___x_726_);
v___y_675_ = v_a_650_;
v_a_676_ = v___x_727_;
v_a_677_ = v_a_651_;
goto v___jp_674_;
}
v___jp_674_:
{
lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; size_t v_sz_685_; lean_object* v___x_686_; 
v___x_678_ = l_Array_reverse___redArg(v_conds_673_);
v___x_679_ = lean_array_push(v___x_678_, v_cond_658_);
v___x_680_ = l_Array_reverse___redArg(v_ts_672_);
v___x_681_ = lean_array_push(v___x_680_, v_t_670_);
v___x_682_ = l_Array_zip___redArg(v___x_679_, v___x_681_);
lean_dec_ref(v___x_681_);
lean_dec_ref(v___x_679_);
v___x_683_ = lean_box(v___x_653_);
v___x_684_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_684_, 0, v_a_676_);
lean_ctor_set(v___x_684_, 1, v___x_683_);
v_sz_685_ = lean_array_size(v___x_682_);
v___x_686_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3(v___x_660_, v___x_682_, v_sz_685_, v___x_665_, v___x_684_, v___y_675_, v_a_677_);
lean_dec_ref(v___x_682_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v_a_687_; lean_object* v_a_688_; lean_object* v___x_690_; uint8_t v_isShared_691_; uint8_t v_isSharedCheck_696_; 
v_a_687_ = lean_ctor_get(v___x_686_, 0);
v_a_688_ = lean_ctor_get(v___x_686_, 1);
v_isSharedCheck_696_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_696_ == 0)
{
v___x_690_ = v___x_686_;
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
else
{
lean_inc(v_a_688_);
lean_inc(v_a_687_);
lean_dec(v___x_686_);
v___x_690_ = lean_box(0);
v_isShared_691_ = v_isSharedCheck_696_;
goto v_resetjp_689_;
}
v_resetjp_689_:
{
lean_object* v_fst_692_; lean_object* v___x_694_; 
v_fst_692_ = lean_ctor_get(v_a_687_, 0);
lean_inc(v_fst_692_);
lean_dec(v_a_687_);
if (v_isShared_691_ == 0)
{
lean_ctor_set(v___x_690_, 0, v_fst_692_);
v___x_694_ = v___x_690_;
goto v_reusejp_693_;
}
else
{
lean_object* v_reuseFailAlloc_695_; 
v_reuseFailAlloc_695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_695_, 0, v_fst_692_);
lean_ctor_set(v_reuseFailAlloc_695_, 1, v_a_688_);
v___x_694_ = v_reuseFailAlloc_695_;
goto v_reusejp_693_;
}
v_reusejp_693_:
{
return v___x_694_;
}
}
}
else
{
lean_object* v_a_697_; lean_object* v_a_698_; lean_object* v___x_700_; uint8_t v_isShared_701_; uint8_t v_isSharedCheck_705_; 
v_a_697_ = lean_ctor_get(v___x_686_, 0);
v_a_698_ = lean_ctor_get(v___x_686_, 1);
v_isSharedCheck_705_ = !lean_is_exclusive(v___x_686_);
if (v_isSharedCheck_705_ == 0)
{
v___x_700_ = v___x_686_;
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
else
{
lean_inc(v_a_698_);
lean_inc(v_a_697_);
lean_dec(v___x_686_);
v___x_700_ = lean_box(0);
v_isShared_701_ = v_isSharedCheck_705_;
goto v_resetjp_699_;
}
v_resetjp_699_:
{
lean_object* v___x_703_; 
if (v_isShared_701_ == 0)
{
v___x_703_ = v___x_700_;
goto v_reusejp_702_;
}
else
{
lean_object* v_reuseFailAlloc_704_; 
v_reuseFailAlloc_704_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_704_, 0, v_a_697_);
lean_ctor_set(v_reuseFailAlloc_704_, 1, v_a_698_);
v___x_703_ = v_reuseFailAlloc_704_;
goto v_reusejp_702_;
}
v_reusejp_702_:
{
return v___x_703_;
}
}
}
}
}
}
else
{
lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v_t_730_; lean_object* v___y_732_; lean_object* v___y_733_; lean_object* v___y_734_; lean_object* v_a_735_; lean_object* v_a_736_; lean_object* v_conds_767_; lean_object* v_ts_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___x_787_; lean_object* v___x_788_; uint8_t v___x_789_; 
v___x_728_ = lean_unsigned_to_nat(2u);
v___x_729_ = lean_unsigned_to_nat(3u);
v_t_730_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_729_);
v___x_787_ = lean_unsigned_to_nat(4u);
v___x_788_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_787_);
lean_inc(v___x_788_);
v___x_789_ = l_Lean_Syntax_matchesNull(v___x_788_, v___x_655_);
if (v___x_789_ == 0)
{
lean_object* v___x_790_; size_t v_sz_791_; size_t v___x_792_; lean_object* v___x_793_; 
v___x_790_ = l_Lean_Syntax_getArgs(v___x_788_);
lean_dec(v___x_788_);
v_sz_791_ = lean_array_size(v___x_790_);
v___x_792_ = ((size_t)0ULL);
v___x_793_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0(v_sz_791_, v___x_792_, v___x_790_);
if (lean_obj_tag(v___x_793_) == 0)
{
lean_object* v___x_794_; 
lean_dec(v_t_730_);
lean_dec(v_cond_658_);
lean_dec(v_tk_656_);
lean_dec(v_stx_649_);
v___x_794_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_794_;
}
else
{
lean_object* v_val_795_; size_t v_sz_796_; lean_object* v_ts_797_; lean_object* v_conds_798_; lean_object* v___x_799_; lean_object* v___x_800_; uint8_t v___x_801_; 
v_val_795_ = lean_ctor_get(v___x_793_, 0);
lean_inc_n(v_val_795_, 2);
lean_dec_ref_known(v___x_793_, 1);
v_sz_796_ = lean_array_size(v_val_795_);
v_ts_797_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1(v_sz_796_, v___x_792_, v_val_795_);
v_conds_798_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2(v_sz_796_, v___x_792_, v_val_795_);
v___x_799_ = lean_unsigned_to_nat(5u);
v___x_800_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_799_);
lean_dec(v_stx_649_);
v___x_801_ = l_Lean_Syntax_isNone(v___x_800_);
if (v___x_801_ == 0)
{
uint8_t v___x_802_; 
lean_dec(v_tk_656_);
lean_inc(v___x_800_);
v___x_802_ = l_Lean_Syntax_matchesNull(v___x_800_, v___x_728_);
if (v___x_802_ == 0)
{
lean_object* v___x_803_; 
lean_dec(v___x_800_);
lean_dec_ref(v_conds_798_);
lean_dec_ref(v_ts_797_);
lean_dec(v_t_730_);
lean_dec(v_cond_658_);
v___x_803_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_803_;
}
else
{
lean_object* v_e_x3f_804_; 
v_e_x3f_804_ = l_Lean_Syntax_getArg(v___x_800_, v___x_657_);
lean_dec(v___x_800_);
v___y_732_ = v_conds_798_;
v___y_733_ = v_a_650_;
v___y_734_ = v_ts_797_;
v_a_735_ = v_e_x3f_804_;
v_a_736_ = v_a_651_;
goto v___jp_731_;
}
}
else
{
lean_dec(v___x_800_);
v_conds_767_ = v_conds_798_;
v_ts_768_ = v_ts_797_;
v___y_769_ = v_a_650_;
v___y_770_ = v_a_651_;
goto v___jp_766_;
}
}
}
else
{
lean_object* v___x_805_; lean_object* v___x_806_; uint8_t v___x_807_; 
v___x_805_ = lean_unsigned_to_nat(5u);
v___x_806_ = l_Lean_Syntax_getArg(v_stx_649_, v___x_805_);
lean_dec(v_stx_649_);
lean_inc(v___x_806_);
v___x_807_ = l_Lean_Syntax_matchesNull(v___x_806_, v___x_728_);
if (v___x_807_ == 0)
{
lean_object* v___x_808_; size_t v_sz_809_; size_t v___x_810_; lean_object* v___x_811_; 
v___x_808_ = l_Lean_Syntax_getArgs(v___x_788_);
lean_dec(v___x_788_);
v_sz_809_ = lean_array_size(v___x_808_);
v___x_810_ = ((size_t)0ULL);
v___x_811_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__0(v_sz_809_, v___x_810_, v___x_808_);
if (lean_obj_tag(v___x_811_) == 0)
{
lean_object* v___x_812_; 
lean_dec(v___x_806_);
lean_dec(v_t_730_);
lean_dec(v_cond_658_);
lean_dec(v_tk_656_);
v___x_812_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_812_;
}
else
{
lean_object* v_val_813_; size_t v_sz_814_; uint8_t v___x_815_; 
v_val_813_ = lean_ctor_get(v___x_811_, 0);
lean_inc(v_val_813_);
lean_dec_ref_known(v___x_811_, 1);
v_sz_814_ = lean_array_size(v_val_813_);
v___x_815_ = l_Lean_Syntax_isNone(v___x_806_);
lean_dec(v___x_806_);
if (v___x_815_ == 0)
{
lean_object* v___x_816_; 
lean_dec(v_val_813_);
lean_dec(v_t_730_);
lean_dec(v_cond_658_);
lean_dec(v_tk_656_);
v___x_816_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_816_;
}
else
{
lean_object* v_ts_817_; lean_object* v_conds_818_; 
lean_inc(v_val_813_);
v_ts_817_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__1(v_sz_814_, v___x_810_, v_val_813_);
v_conds_818_ = l___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Elab_Do_expandDoIf_spec__2(v_sz_814_, v___x_810_, v_val_813_);
v_conds_767_ = v_conds_818_;
v_ts_768_ = v_ts_817_;
v___y_769_ = v_a_650_;
v___y_770_ = v_a_651_;
goto v___jp_766_;
}
}
}
else
{
lean_object* v___x_819_; 
lean_dec(v___x_806_);
lean_dec(v___x_788_);
lean_dec(v_t_730_);
lean_dec(v_cond_658_);
lean_dec(v_tk_656_);
v___x_819_ = l_Lean_Macro_throwUnsupported___redArg(v_a_651_);
return v___x_819_;
}
}
v___jp_731_:
{
lean_object* v___x_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; size_t v_sz_744_; size_t v___x_745_; lean_object* v___x_746_; 
v___x_737_ = l_Array_reverse___redArg(v___y_732_);
v___x_738_ = lean_array_push(v___x_737_, v_cond_658_);
v___x_739_ = l_Array_reverse___redArg(v___y_734_);
v___x_740_ = lean_array_push(v___x_739_, v_t_730_);
v___x_741_ = l_Array_zip___redArg(v___x_738_, v___x_740_);
lean_dec_ref(v___x_740_);
lean_dec_ref(v___x_738_);
v___x_742_ = lean_box(v___x_660_);
v___x_743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_743_, 0, v_a_735_);
lean_ctor_set(v___x_743_, 1, v___x_742_);
v_sz_744_ = lean_array_size(v___x_741_);
v___x_745_ = ((size_t)0ULL);
v___x_746_ = l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__4(v___x_741_, v_sz_744_, v___x_745_, v___x_743_, v___y_733_, v_a_736_);
lean_dec_ref(v___x_741_);
if (lean_obj_tag(v___x_746_) == 0)
{
lean_object* v_a_747_; lean_object* v_a_748_; lean_object* v___x_750_; uint8_t v_isShared_751_; uint8_t v_isSharedCheck_756_; 
v_a_747_ = lean_ctor_get(v___x_746_, 0);
v_a_748_ = lean_ctor_get(v___x_746_, 1);
v_isSharedCheck_756_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_756_ == 0)
{
v___x_750_ = v___x_746_;
v_isShared_751_ = v_isSharedCheck_756_;
goto v_resetjp_749_;
}
else
{
lean_inc(v_a_748_);
lean_inc(v_a_747_);
lean_dec(v___x_746_);
v___x_750_ = lean_box(0);
v_isShared_751_ = v_isSharedCheck_756_;
goto v_resetjp_749_;
}
v_resetjp_749_:
{
lean_object* v_fst_752_; lean_object* v___x_754_; 
v_fst_752_ = lean_ctor_get(v_a_747_, 0);
lean_inc(v_fst_752_);
lean_dec(v_a_747_);
if (v_isShared_751_ == 0)
{
lean_ctor_set(v___x_750_, 0, v_fst_752_);
v___x_754_ = v___x_750_;
goto v_reusejp_753_;
}
else
{
lean_object* v_reuseFailAlloc_755_; 
v_reuseFailAlloc_755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_755_, 0, v_fst_752_);
lean_ctor_set(v_reuseFailAlloc_755_, 1, v_a_748_);
v___x_754_ = v_reuseFailAlloc_755_;
goto v_reusejp_753_;
}
v_reusejp_753_:
{
return v___x_754_;
}
}
}
else
{
lean_object* v_a_757_; lean_object* v_a_758_; lean_object* v___x_760_; uint8_t v_isShared_761_; uint8_t v_isSharedCheck_765_; 
v_a_757_ = lean_ctor_get(v___x_746_, 0);
v_a_758_ = lean_ctor_get(v___x_746_, 1);
v_isSharedCheck_765_ = !lean_is_exclusive(v___x_746_);
if (v_isSharedCheck_765_ == 0)
{
v___x_760_ = v___x_746_;
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
else
{
lean_inc(v_a_758_);
lean_inc(v_a_757_);
lean_dec(v___x_746_);
v___x_760_ = lean_box(0);
v_isShared_761_ = v_isSharedCheck_765_;
goto v_resetjp_759_;
}
v_resetjp_759_:
{
lean_object* v___x_763_; 
if (v_isShared_761_ == 0)
{
v___x_763_ = v___x_760_;
goto v_reusejp_762_;
}
else
{
lean_object* v_reuseFailAlloc_764_; 
v_reuseFailAlloc_764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_764_, 0, v_a_757_);
lean_ctor_set(v_reuseFailAlloc_764_, 1, v_a_758_);
v___x_763_ = v_reuseFailAlloc_764_;
goto v_reusejp_762_;
}
v_reusejp_762_:
{
return v___x_763_;
}
}
}
}
v___jp_766_:
{
lean_object* v_ref_771_; uint8_t v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; 
v_ref_771_ = lean_ctor_get(v___y_769_, 5);
v___x_772_ = 0;
v___x_773_ = l_Lean_SourceInfo_fromRef(v_ref_771_, v___x_772_);
v___x_774_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__40));
v___x_775_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__12));
v___x_776_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__42));
v___x_777_ = ((lean_object*)(l_Lean_Elab_Do_expandDoIf___closed__2));
v___x_778_ = l_Lean_SourceInfo_fromRef(v_tk_656_, v___x_660_);
lean_dec(v_tk_656_);
v___x_779_ = ((lean_object*)(l_Lean_Elab_Do_expandDoIf___closed__3));
v___x_780_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_780_, 0, v___x_778_);
lean_ctor_set(v___x_780_, 1, v___x_779_);
lean_inc_n(v___x_773_, 4);
v___x_781_ = l_Lean_Syntax_node1(v___x_773_, v___x_777_, v___x_780_);
v___x_782_ = lean_obj_once(&l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13, &l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13_once, _init_l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__13);
v___x_783_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_783_, 0, v___x_773_);
lean_ctor_set(v___x_783_, 1, v___x_775_);
lean_ctor_set(v___x_783_, 2, v___x_782_);
v___x_784_ = l_Lean_Syntax_node2(v___x_773_, v___x_776_, v___x_781_, v___x_783_);
v___x_785_ = l_Lean_Syntax_node1(v___x_773_, v___x_775_, v___x_784_);
v___x_786_ = l_Lean_Syntax_node1(v___x_773_, v___x_774_, v___x_785_);
v___y_732_ = v_conds_767_;
v___y_733_ = v___y_769_;
v___y_734_ = v_ts_768_;
v_a_735_ = v___x_786_;
v_a_736_ = v___y_770_;
goto v___jp_731_;
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_expandDoIf___boxed(lean_object* v_stx_820_, lean_object* v_a_821_, lean_object* v_a_822_){
_start:
{
lean_object* v_res_823_; 
v_res_823_ = l_Lean_Elab_Do_expandDoIf(v_stx_820_, v_a_821_, v_a_822_);
lean_dec_ref(v_a_821_);
return v_res_823_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1(){
_start:
{
lean_object* v___x_833_; lean_object* v___x_834_; lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_837_; 
v___x_833_ = l_Lean_Elab_macroAttribute;
v___x_834_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8));
v___x_835_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3));
v___x_836_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_expandDoIf___boxed), 3, 0);
v___x_837_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_833_, v___x_834_, v___x_835_, v___x_836_);
return v___x_837_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___boxed(lean_object* v_a_838_){
_start:
{
lean_object* v_res_839_; 
v_res_839_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1();
return v_res_839_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3(){
_start:
{
lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v___x_842_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1___closed__3));
v___x_843_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3___closed__0));
v___x_844_ = l_Lean_addBuiltinDocString(v___x_842_, v___x_843_);
return v___x_844_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3___boxed(lean_object* v_a_845_){
_start:
{
lean_object* v_res_846_; 
v_res_846_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3();
return v_res_846_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0(lean_object* v_cond_850_, lean_object* v_then___851_, uint8_t v___x_852_, lean_object* v_else___853_, lean_object* v___y_854_, lean_object* v___y_855_, lean_object* v___y_856_, lean_object* v___y_857_, lean_object* v___y_858_, lean_object* v___y_859_, lean_object* v___y_860_){
_start:
{
lean_object* v_doBlockResultType_862_; lean_object* v___x_863_; 
v_doBlockResultType_862_ = lean_ctor_get(v___y_854_, 3);
lean_inc_ref(v_doBlockResultType_862_);
v___x_863_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_862_, v___y_854_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
if (lean_obj_tag(v___x_863_) == 0)
{
lean_object* v_a_864_; lean_object* v___x_866_; uint8_t v_isShared_867_; uint8_t v_isSharedCheck_884_; 
v_a_864_ = lean_ctor_get(v___x_863_, 0);
v_isSharedCheck_884_ = !lean_is_exclusive(v___x_863_);
if (v_isSharedCheck_884_ == 0)
{
v___x_866_ = v___x_863_;
v_isShared_867_ = v_isSharedCheck_884_;
goto v_resetjp_865_;
}
else
{
lean_inc(v_a_864_);
lean_dec(v___x_863_);
v___x_866_ = lean_box(0);
v_isShared_867_ = v_isSharedCheck_884_;
goto v_resetjp_865_;
}
v_resetjp_865_:
{
lean_object* v_ref_868_; uint8_t v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_880_; 
v_ref_868_ = lean_ctor_get(v___y_859_, 2);
v___x_869_ = 0;
v___x_870_ = l_Lean_SourceInfo_fromRef(v_ref_868_, v___x_869_);
v___x_871_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___closed__1));
v___x_872_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9));
lean_inc_n(v___x_870_, 3);
v___x_873_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_873_, 0, v___x_870_);
lean_ctor_set(v___x_873_, 1, v___x_872_);
v___x_874_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10));
v___x_875_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_875_, 0, v___x_870_);
lean_ctor_set(v___x_875_, 1, v___x_874_);
v___x_876_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14));
v___x_877_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_877_, 0, v___x_870_);
lean_ctor_set(v___x_877_, 1, v___x_876_);
v___x_878_ = l_Lean_Syntax_node6(v___x_870_, v___x_871_, v___x_873_, v_cond_850_, v___x_875_, v_then___851_, v___x_877_, v_else___853_);
if (v_isShared_867_ == 0)
{
lean_ctor_set_tag(v___x_866_, 1);
v___x_880_ = v___x_866_;
goto v_reusejp_879_;
}
else
{
lean_object* v_reuseFailAlloc_883_; 
v_reuseFailAlloc_883_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_883_, 0, v_a_864_);
v___x_880_ = v_reuseFailAlloc_883_;
goto v_reusejp_879_;
}
v_reusejp_879_:
{
lean_object* v___x_881_; lean_object* v___x_882_; 
v___x_881_ = lean_box(0);
v___x_882_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_878_, v___x_880_, v___x_852_, v___x_852_, v___x_881_, v___y_855_, v___y_856_, v___y_857_, v___y_858_, v___y_859_, v___y_860_);
return v___x_882_;
}
}
}
else
{
lean_dec(v_else___853_);
lean_dec(v_then___851_);
lean_dec(v_cond_850_);
return v___x_863_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___boxed(lean_object* v_cond_885_, lean_object* v_then___886_, lean_object* v___x_887_, lean_object* v_else___888_, lean_object* v___y_889_, lean_object* v___y_890_, lean_object* v___y_891_, lean_object* v___y_892_, lean_object* v___y_893_, lean_object* v___y_894_, lean_object* v___y_895_, lean_object* v___y_896_){
_start:
{
uint8_t v___x_3135__boxed_897_; lean_object* v_res_898_; 
v___x_3135__boxed_897_ = lean_unbox(v___x_887_);
v_res_898_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0(v_cond_885_, v_then___886_, v___x_3135__boxed_897_, v_else___888_, v___y_889_, v___y_890_, v___y_891_, v___y_892_, v___y_893_, v___y_894_, v___y_895_);
lean_dec(v___y_895_);
lean_dec_ref(v___y_894_);
lean_dec(v___y_893_);
lean_dec_ref(v___y_892_);
lean_dec(v___y_891_);
lean_dec_ref(v___y_890_);
lean_dec_ref(v___y_889_);
return v_res_898_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2(void){
_start:
{
lean_object* v___x_902_; lean_object* v___x_903_; 
v___x_902_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__1));
v___x_903_ = l_Lean_MessageData_ofFormat(v___x_902_);
return v___x_903_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1(lean_object* v_cond_904_, uint8_t v___x_905_, lean_object* v_elseSeq_906_, lean_object* v_dec_907_, lean_object* v_then___908_, lean_object* v___y_909_, lean_object* v___y_910_, lean_object* v___y_911_, lean_object* v___y_912_, lean_object* v___y_913_, lean_object* v___y_914_, lean_object* v___y_915_){
_start:
{
lean_object* v___x_917_; lean_object* v___f_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; 
v___x_917_ = lean_box(v___x_905_);
v___f_918_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__0___boxed), 12, 3);
lean_closure_set(v___f_918_, 0, v_cond_904_);
lean_closure_set(v___f_918_, 1, v_then___908_);
lean_closure_set(v___f_918_, 2, v___x_917_);
v___x_919_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2);
v___x_920_ = lean_box(v___x_905_);
v___x_921_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_921_, 0, v_elseSeq_906_);
lean_closure_set(v___x_921_, 1, v_dec_907_);
lean_closure_set(v___x_921_, 2, v___x_920_);
v___x_922_ = lean_box(0);
v___x_923_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_919_, v___x_921_, v___f_918_, v___x_922_, v___y_909_, v___y_910_, v___y_911_, v___y_912_, v___y_913_, v___y_914_, v___y_915_);
return v___x_923_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___boxed(lean_object* v_cond_924_, lean_object* v___x_925_, lean_object* v_elseSeq_926_, lean_object* v_dec_927_, lean_object* v_then___928_, lean_object* v___y_929_, lean_object* v___y_930_, lean_object* v___y_931_, lean_object* v___y_932_, lean_object* v___y_933_, lean_object* v___y_934_, lean_object* v___y_935_, lean_object* v___y_936_){
_start:
{
uint8_t v___x_3218__boxed_937_; lean_object* v_res_938_; 
v___x_3218__boxed_937_ = lean_unbox(v___x_925_);
v_res_938_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1(v_cond_924_, v___x_3218__boxed_937_, v_elseSeq_926_, v_dec_927_, v_then___928_, v___y_929_, v___y_930_, v___y_931_, v___y_932_, v___y_933_, v___y_934_, v___y_935_);
lean_dec(v___y_935_);
lean_dec_ref(v___y_934_);
lean_dec(v___y_933_);
lean_dec_ref(v___y_932_);
lean_dec(v___y_931_);
lean_dec_ref(v___y_930_);
lean_dec_ref(v___y_929_);
return v_res_938_;
}
}
static lean_object* _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__1));
v___x_943_ = l_Lean_MessageData_ofFormat(v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(lean_object* v_cond_944_, lean_object* v_thenSeq_945_, lean_object* v_elseSeq_946_, lean_object* v_dec_947_, lean_object* v_a_948_, lean_object* v_a_949_, lean_object* v_a_950_, lean_object* v_a_951_, lean_object* v_a_952_, lean_object* v_a_953_, lean_object* v_a_954_){
_start:
{
lean_object* v___x_956_; uint8_t v___x_957_; lean_object* v___x_958_; lean_object* v___f_959_; lean_object* v___x_960_; lean_object* v___x_961_; lean_object* v___x_962_; lean_object* v___x_963_; 
v___x_956_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2);
v___x_957_ = 1;
v___x_958_ = lean_box(v___x_957_);
lean_inc_ref(v_dec_947_);
v___f_959_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___boxed), 13, 4);
lean_closure_set(v___f_959_, 0, v_cond_944_);
lean_closure_set(v___f_959_, 1, v___x_958_);
lean_closure_set(v___f_959_, 2, v_elseSeq_946_);
lean_closure_set(v___f_959_, 3, v_dec_947_);
v___x_960_ = lean_box(v___x_957_);
v___x_961_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoSeq___boxed), 11, 3);
lean_closure_set(v___x_961_, 0, v_thenSeq_945_);
lean_closure_set(v___x_961_, 1, v_dec_947_);
lean_closure_set(v___x_961_, 2, v___x_960_);
v___x_962_ = lean_box(0);
v___x_963_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_956_, v___x_961_, v___f_959_, v___x_962_, v_a_948_, v_a_949_, v_a_950_, v_a_951_, v_a_952_, v_a_953_, v_a_954_);
return v___x_963_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___boxed(lean_object* v_cond_964_, lean_object* v_thenSeq_965_, lean_object* v_elseSeq_966_, lean_object* v_dec_967_, lean_object* v_a_968_, lean_object* v_a_969_, lean_object* v_a_970_, lean_object* v_a_971_, lean_object* v_a_972_, lean_object* v_a_973_, lean_object* v_a_974_, lean_object* v_a_975_){
_start:
{
lean_object* v_res_976_; 
v_res_976_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(v_cond_964_, v_thenSeq_965_, v_elseSeq_966_, v_dec_967_, v_a_968_, v_a_969_, v_a_970_, v_a_971_, v_a_972_, v_a_973_, v_a_974_);
lean_dec(v_a_974_);
lean_dec_ref(v_a_973_);
lean_dec(v_a_972_);
lean_dec_ref(v_a_971_);
lean_dec(v_a_970_);
lean_dec_ref(v_a_969_);
lean_dec_ref(v_a_968_);
return v_res_976_;
}
}
static lean_object* _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0(void){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = lean_box(0);
v___x_978_ = l_Lean_Elab_unsupportedSyntaxExceptionId;
v___x_979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_979_, 0, v___x_978_);
lean_ctor_set(v___x_979_, 1, v___x_977_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg(){
_start:
{
lean_object* v___x_981_; lean_object* v___x_982_; 
v___x_981_ = lean_obj_once(&l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0, &l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0_once, _init_l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___closed__0);
v___x_982_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_982_, 0, v___x_981_);
return v___x_982_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg___boxed(lean_object* v___y_983_){
_start:
{
lean_object* v_res_984_; 
v_res_984_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v_res_984_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0(lean_object* v_00_u03b1_985_, lean_object* v___y_986_, lean_object* v___y_987_, lean_object* v___y_988_, lean_object* v___y_989_, lean_object* v___y_990_, lean_object* v___y_991_, lean_object* v___y_992_){
_start:
{
lean_object* v___x_994_; 
v___x_994_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_994_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___boxed(lean_object* v_00_u03b1_995_, lean_object* v___y_996_, lean_object* v___y_997_, lean_object* v___y_998_, lean_object* v___y_999_, lean_object* v___y_1000_, lean_object* v___y_1001_, lean_object* v___y_1002_, lean_object* v___y_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0(v_00_u03b1_995_, v___y_996_, v___y_997_, v___y_998_, v___y_999_, v___y_1000_, v___y_1001_, v___y_1002_);
lean_dec(v___y_1002_);
lean_dec_ref(v___y_1001_);
lean_dec(v___y_1000_);
lean_dec_ref(v___y_999_);
lean_dec(v___y_998_);
lean_dec_ref(v___y_997_);
lean_dec_ref(v___y_996_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0(lean_object* v_dec_1005_, lean_object* v_elseSeq_1006_, lean_object* v_thenSeq_1007_, uint8_t v_then___1008_, lean_object* v___y_1009_, lean_object* v___y_1010_, lean_object* v___y_1011_, lean_object* v___y_1012_, lean_object* v___y_1013_, lean_object* v___y_1014_, lean_object* v___y_1015_){
_start:
{
lean_object* v___y_1018_; 
if (v_then___1008_ == 0)
{
lean_dec(v_thenSeq_1007_);
v___y_1018_ = v_elseSeq_1006_;
goto v___jp_1017_;
}
else
{
lean_dec(v_elseSeq_1006_);
v___y_1018_ = v_thenSeq_1007_;
goto v___jp_1017_;
}
v___jp_1017_:
{
uint8_t v___x_1019_; lean_object* v___x_1020_; 
v___x_1019_ = 1;
v___x_1020_ = l_Lean_Elab_Do_elabDoSeq(v___y_1018_, v_dec_1005_, v___x_1019_, v___y_1009_, v___y_1010_, v___y_1011_, v___y_1012_, v___y_1013_, v___y_1014_, v___y_1015_);
return v___x_1020_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed(lean_object* v_dec_1021_, lean_object* v_elseSeq_1022_, lean_object* v_thenSeq_1023_, lean_object* v_then___1024_, lean_object* v___y_1025_, lean_object* v___y_1026_, lean_object* v___y_1027_, lean_object* v___y_1028_, lean_object* v___y_1029_, lean_object* v___y_1030_, lean_object* v___y_1031_, lean_object* v___y_1032_){
_start:
{
uint8_t v_then___00boxed_1033_; lean_object* v_res_1034_; 
v_then___00boxed_1033_ = lean_unbox(v_then___1024_);
v_res_1034_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0(v_dec_1021_, v_elseSeq_1022_, v_thenSeq_1023_, v_then___00boxed_1033_, v___y_1025_, v___y_1026_, v___y_1027_, v___y_1028_, v___y_1029_, v___y_1030_, v___y_1031_);
lean_dec(v___y_1031_);
lean_dec_ref(v___y_1030_);
lean_dec(v___y_1029_);
lean_dec_ref(v___y_1028_);
lean_dec(v___y_1027_);
lean_dec_ref(v___y_1026_);
lean_dec_ref(v___y_1025_);
return v_res_1034_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1(lean_object* v_h_1046_, lean_object* v_cond_1047_, lean_object* v_then___1048_, uint8_t v___x_1049_, lean_object* v_else___1050_, lean_object* v___y_1051_, lean_object* v___y_1052_, lean_object* v___y_1053_, lean_object* v___y_1054_, lean_object* v___y_1055_, lean_object* v___y_1056_, lean_object* v___y_1057_){
_start:
{
lean_object* v_doBlockResultType_1059_; lean_object* v___x_1060_; 
v_doBlockResultType_1059_ = lean_ctor_get(v___y_1051_, 3);
lean_inc_ref(v_doBlockResultType_1059_);
v___x_1060_ = l_Lean_Elab_Do_mkMonadApp(v_doBlockResultType_1059_, v___y_1051_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
if (lean_obj_tag(v___x_1060_) == 0)
{
lean_object* v_a_1061_; lean_object* v___x_1063_; uint8_t v_isShared_1064_; uint8_t v_isSharedCheck_1115_; 
v_a_1061_ = lean_ctor_get(v___x_1060_, 0);
v_isSharedCheck_1115_ = !lean_is_exclusive(v___x_1060_);
if (v_isSharedCheck_1115_ == 0)
{
v___x_1063_ = v___x_1060_;
v_isShared_1064_ = v_isSharedCheck_1115_;
goto v_resetjp_1062_;
}
else
{
lean_inc(v_a_1061_);
lean_dec(v___x_1060_);
v___x_1063_ = lean_box(0);
v_isShared_1064_ = v_isSharedCheck_1115_;
goto v_resetjp_1062_;
}
v_resetjp_1062_:
{
lean_object* v___x_1065_; uint8_t v___x_1066_; 
v___x_1065_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__37));
lean_inc(v_h_1046_);
v___x_1066_ = l_Lean_Syntax_isOfKind(v_h_1046_, v___x_1065_);
if (v___x_1066_ == 0)
{
lean_object* v___x_1067_; uint8_t v___x_1068_; 
v___x_1067_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__1));
lean_inc(v_h_1046_);
v___x_1068_ = l_Lean_Syntax_isOfKind(v_h_1046_, v___x_1067_);
if (v___x_1068_ == 0)
{
lean_object* v___x_1069_; 
lean_del_object(v___x_1063_);
lean_dec(v_a_1061_);
lean_dec(v_else___1050_);
lean_dec(v_then___1048_);
lean_dec(v_cond_1047_);
lean_dec(v_h_1046_);
v___x_1069_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_1069_;
}
else
{
lean_object* v_ref_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1085_; 
v_ref_1070_ = lean_ctor_get(v___y_1056_, 2);
v___x_1071_ = l_Lean_SourceInfo_fromRef(v_ref_1070_, v___x_1066_);
v___x_1072_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3));
v___x_1073_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9));
lean_inc_n(v___x_1071_, 5);
v___x_1074_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1074_, 0, v___x_1071_);
lean_ctor_set(v___x_1074_, 1, v___x_1073_);
v___x_1075_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5));
v___x_1076_ = l_Lean_Syntax_node1(v___x_1071_, v___x_1075_, v_h_1046_);
v___x_1077_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6));
v___x_1078_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1078_, 0, v___x_1071_);
lean_ctor_set(v___x_1078_, 1, v___x_1077_);
v___x_1079_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10));
v___x_1080_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1080_, 0, v___x_1071_);
lean_ctor_set(v___x_1080_, 1, v___x_1079_);
v___x_1081_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14));
v___x_1082_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1082_, 0, v___x_1071_);
lean_ctor_set(v___x_1082_, 1, v___x_1081_);
v___x_1083_ = l_Lean_Syntax_node8(v___x_1071_, v___x_1072_, v___x_1074_, v___x_1076_, v___x_1078_, v_cond_1047_, v___x_1080_, v_then___1048_, v___x_1082_, v_else___1050_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 1);
v___x_1085_ = v___x_1063_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v_a_1061_);
v___x_1085_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1086_; lean_object* v___x_1087_; 
v___x_1086_ = lean_box(0);
v___x_1087_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_1083_, v___x_1085_, v___x_1049_, v___x_1049_, v___x_1086_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
return v___x_1087_;
}
}
}
else
{
lean_object* v_ref_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; uint8_t v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1111_; 
v_ref_1089_ = lean_ctor_get(v___y_1056_, 2);
v___x_1090_ = lean_unsigned_to_nat(0u);
v___x_1091_ = l_Lean_Syntax_getArg(v_h_1046_, v___x_1090_);
lean_dec(v_h_1046_);
v___x_1092_ = 0;
v___x_1093_ = l_Lean_SourceInfo_fromRef(v_ref_1089_, v___x_1092_);
v___x_1094_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__3));
v___x_1095_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__9));
lean_inc_n(v___x_1093_, 6);
v___x_1096_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1096_, 0, v___x_1093_);
lean_ctor_set(v___x_1096_, 1, v___x_1095_);
v___x_1097_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__5));
v___x_1098_ = l_Lean_SourceInfo_fromRef(v___x_1091_, v___x_1049_);
lean_dec(v___x_1091_);
v___x_1099_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__38));
v___x_1100_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1100_, 0, v___x_1098_);
lean_ctor_set(v___x_1100_, 1, v___x_1099_);
v___x_1101_ = l_Lean_Syntax_node1(v___x_1093_, v___x_1065_, v___x_1100_);
v___x_1102_ = l_Lean_Syntax_node1(v___x_1093_, v___x_1097_, v___x_1101_);
v___x_1103_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___closed__6));
v___x_1104_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1104_, 0, v___x_1093_);
lean_ctor_set(v___x_1104_, 1, v___x_1103_);
v___x_1105_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__10));
v___x_1106_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1106_, 0, v___x_1093_);
lean_ctor_set(v___x_1106_, 1, v___x_1105_);
v___x_1107_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__14));
v___x_1108_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1093_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
v___x_1109_ = l_Lean_Syntax_node8(v___x_1093_, v___x_1094_, v___x_1096_, v___x_1102_, v___x_1104_, v_cond_1047_, v___x_1106_, v_then___1048_, v___x_1108_, v_else___1050_);
if (v_isShared_1064_ == 0)
{
lean_ctor_set_tag(v___x_1063_, 1);
v___x_1111_ = v___x_1063_;
goto v_reusejp_1110_;
}
else
{
lean_object* v_reuseFailAlloc_1114_; 
v_reuseFailAlloc_1114_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1114_, 0, v_a_1061_);
v___x_1111_ = v_reuseFailAlloc_1114_;
goto v_reusejp_1110_;
}
v_reusejp_1110_:
{
lean_object* v___x_1112_; lean_object* v___x_1113_; 
v___x_1112_ = lean_box(0);
v___x_1113_ = l_Lean_Elab_Term_elabTermEnsuringType(v___x_1109_, v___x_1111_, v___x_1049_, v___x_1049_, v___x_1112_, v___y_1052_, v___y_1053_, v___y_1054_, v___y_1055_, v___y_1056_, v___y_1057_);
return v___x_1113_;
}
}
}
}
else
{
lean_dec(v_else___1050_);
lean_dec(v_then___1048_);
lean_dec(v_cond_1047_);
lean_dec(v_h_1046_);
return v___x_1060_;
}
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___boxed(lean_object* v_h_1116_, lean_object* v_cond_1117_, lean_object* v_then___1118_, lean_object* v___x_1119_, lean_object* v_else___1120_, lean_object* v___y_1121_, lean_object* v___y_1122_, lean_object* v___y_1123_, lean_object* v___y_1124_, lean_object* v___y_1125_, lean_object* v___y_1126_, lean_object* v___y_1127_, lean_object* v___y_1128_){
_start:
{
uint8_t v___x_7968__boxed_1129_; lean_object* v_res_1130_; 
v___x_7968__boxed_1129_ = lean_unbox(v___x_1119_);
v_res_1130_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1(v_h_1116_, v_cond_1117_, v_then___1118_, v___x_7968__boxed_1129_, v_else___1120_, v___y_1121_, v___y_1122_, v___y_1123_, v___y_1124_, v___y_1125_, v___y_1126_, v___y_1127_);
lean_dec(v___y_1127_);
lean_dec_ref(v___y_1126_);
lean_dec(v___y_1125_);
lean_dec_ref(v___y_1124_);
lean_dec(v___y_1123_);
lean_dec_ref(v___y_1122_);
lean_dec_ref(v___y_1121_);
return v_res_1130_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2(lean_object* v_h_1131_, lean_object* v_cond_1132_, uint8_t v___x_1133_, lean_object* v_elabDiteBranch_1134_, lean_object* v_then___1135_, lean_object* v___y_1136_, lean_object* v___y_1137_, lean_object* v___y_1138_, lean_object* v___y_1139_, lean_object* v___y_1140_, lean_object* v___y_1141_, lean_object* v___y_1142_){
_start:
{
lean_object* v___x_1144_; lean_object* v___f_1145_; lean_object* v___x_1146_; uint8_t v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1144_ = lean_box(v___x_1133_);
v___f_1145_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__1___boxed), 13, 4);
lean_closure_set(v___f_1145_, 0, v_h_1131_);
lean_closure_set(v___f_1145_, 1, v_cond_1132_);
lean_closure_set(v___f_1145_, 2, v_then___1135_);
lean_closure_set(v___f_1145_, 3, v___x_1144_);
v___x_1146_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___lam__1___closed__2);
v___x_1147_ = 0;
v___x_1148_ = lean_box(v___x_1147_);
v___x_1149_ = lean_apply_1(v_elabDiteBranch_1134_, v___x_1148_);
v___x_1150_ = lean_box(0);
v___x_1151_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_1146_, v___x_1149_, v___f_1145_, v___x_1150_, v___y_1136_, v___y_1137_, v___y_1138_, v___y_1139_, v___y_1140_, v___y_1141_, v___y_1142_);
return v___x_1151_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2___boxed(lean_object* v_h_1152_, lean_object* v_cond_1153_, lean_object* v___x_1154_, lean_object* v_elabDiteBranch_1155_, lean_object* v_then___1156_, lean_object* v___y_1157_, lean_object* v___y_1158_, lean_object* v___y_1159_, lean_object* v___y_1160_, lean_object* v___y_1161_, lean_object* v___y_1162_, lean_object* v___y_1163_, lean_object* v___y_1164_){
_start:
{
uint8_t v___x_8120__boxed_1165_; lean_object* v_res_1166_; 
v___x_8120__boxed_1165_ = lean_unbox(v___x_1154_);
v_res_1166_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2(v_h_1152_, v_cond_1153_, v___x_8120__boxed_1165_, v_elabDiteBranch_1155_, v_then___1156_, v___y_1157_, v___y_1158_, v___y_1159_, v___y_1160_, v___y_1161_, v___y_1162_, v___y_1163_);
lean_dec(v___y_1163_);
lean_dec_ref(v___y_1162_);
lean_dec(v___y_1161_);
lean_dec_ref(v___y_1160_);
lean_dec(v___y_1159_);
lean_dec_ref(v___y_1158_);
lean_dec_ref(v___y_1157_);
return v_res_1166_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(lean_object* v_h_1167_, lean_object* v_cond_1168_, lean_object* v_thenSeq_1169_, lean_object* v_elseSeq_1170_, lean_object* v_dec_1171_, lean_object* v_a_1172_, lean_object* v_a_1173_, lean_object* v_a_1174_, lean_object* v_a_1175_, lean_object* v_a_1176_, lean_object* v_a_1177_, lean_object* v_a_1178_){
_start:
{
lean_object* v_elabDiteBranch_1180_; lean_object* v___x_1181_; uint8_t v___x_1182_; lean_object* v___x_1183_; lean_object* v___f_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; 
lean_inc(v_thenSeq_1169_);
lean_inc(v_elseSeq_1170_);
lean_inc_ref(v_dec_1171_);
v_elabDiteBranch_1180_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed), 12, 3);
lean_closure_set(v_elabDiteBranch_1180_, 0, v_dec_1171_);
lean_closure_set(v_elabDiteBranch_1180_, 1, v_elseSeq_1170_);
lean_closure_set(v_elabDiteBranch_1180_, 2, v_thenSeq_1169_);
v___x_1181_ = lean_obj_once(&l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2, &l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2_once, _init_l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte___closed__2);
v___x_1182_ = 1;
v___x_1183_ = lean_box(v___x_1182_);
v___f_1184_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__2___boxed), 13, 4);
lean_closure_set(v___f_1184_, 0, v_h_1167_);
lean_closure_set(v___f_1184_, 1, v_cond_1168_);
lean_closure_set(v___f_1184_, 2, v___x_1183_);
lean_closure_set(v___f_1184_, 3, v_elabDiteBranch_1180_);
v___x_1185_ = lean_box(v___x_1182_);
v___x_1186_ = lean_alloc_closure((void*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___lam__0___boxed), 12, 4);
lean_closure_set(v___x_1186_, 0, v_dec_1171_);
lean_closure_set(v___x_1186_, 1, v_elseSeq_1170_);
lean_closure_set(v___x_1186_, 2, v_thenSeq_1169_);
lean_closure_set(v___x_1186_, 3, v___x_1185_);
v___x_1187_ = lean_box(0);
v___x_1188_ = l_Lean_Elab_Do_doElabToSyntax___redArg(v___x_1181_, v___x_1186_, v___f_1184_, v___x_1187_, v_a_1172_, v_a_1173_, v_a_1174_, v_a_1175_, v_a_1176_, v_a_1177_, v_a_1178_);
return v___x_1188_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite___boxed(lean_object* v_h_1189_, lean_object* v_cond_1190_, lean_object* v_thenSeq_1191_, lean_object* v_elseSeq_1192_, lean_object* v_dec_1193_, lean_object* v_a_1194_, lean_object* v_a_1195_, lean_object* v_a_1196_, lean_object* v_a_1197_, lean_object* v_a_1198_, lean_object* v_a_1199_, lean_object* v_a_1200_, lean_object* v_a_1201_){
_start:
{
lean_object* v_res_1202_; 
v_res_1202_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(v_h_1189_, v_cond_1190_, v_thenSeq_1191_, v_elseSeq_1192_, v_dec_1193_, v_a_1194_, v_a_1195_, v_a_1196_, v_a_1197_, v_a_1198_, v_a_1199_, v_a_1200_);
lean_dec(v_a_1200_);
lean_dec_ref(v_a_1199_);
lean_dec(v_a_1198_);
lean_dec_ref(v_a_1197_);
lean_dec(v_a_1196_);
lean_dec_ref(v_a_1195_);
lean_dec_ref(v_a_1194_);
return v_res_1202_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0(lean_object* v___x_1203_, lean_object* v___x_1204_, lean_object* v___x_1205_, lean_object* v___x_1206_, lean_object* v___x_1207_, lean_object* v___x_1208_, lean_object* v___x_1209_, lean_object* v_thenSeq_1210_, lean_object* v_elseSeq_1211_, lean_object* v_dec_1212_, lean_object* v___y_1213_, lean_object* v___y_1214_, lean_object* v___y_1215_, lean_object* v___y_1216_, lean_object* v___y_1217_, lean_object* v___y_1218_, lean_object* v___y_1219_){
_start:
{
lean_object* v___x_1221_; lean_object* v___x_1222_; uint8_t v___x_1223_; 
v___x_1221_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__5));
v___x_1222_ = l_Lean_Name_mkStr4(v___x_1203_, v___x_1204_, v___x_1205_, v___x_1221_);
lean_inc(v___x_1206_);
v___x_1223_ = l_Lean_Syntax_isOfKind(v___x_1206_, v___x_1222_);
lean_dec(v___x_1222_);
if (v___x_1223_ == 0)
{
lean_object* v___x_1224_; 
lean_dec_ref(v_dec_1212_);
lean_dec(v_elseSeq_1211_);
lean_dec(v_thenSeq_1210_);
lean_dec(v___x_1206_);
v___x_1224_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_1224_;
}
else
{
lean_object* v___x_1225_; uint8_t v___x_1226_; 
v___x_1225_ = l_Lean_Syntax_getArg(v___x_1206_, v___x_1207_);
lean_inc(v___x_1225_);
v___x_1226_ = l_Lean_Syntax_matchesNull(v___x_1225_, v___x_1207_);
if (v___x_1226_ == 0)
{
uint8_t v___x_1227_; 
lean_inc(v___x_1225_);
v___x_1227_ = l_Lean_Syntax_matchesNull(v___x_1225_, v___x_1208_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; 
lean_dec(v___x_1225_);
lean_dec_ref(v_dec_1212_);
lean_dec(v_elseSeq_1211_);
lean_dec(v_thenSeq_1210_);
lean_dec(v___x_1206_);
v___x_1228_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_1228_;
}
else
{
lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; 
v___x_1229_ = l_Lean_Syntax_getArg(v___x_1225_, v___x_1207_);
lean_dec(v___x_1225_);
v___x_1230_ = l_Lean_Syntax_getArg(v___x_1206_, v___x_1209_);
lean_dec(v___x_1206_);
v___x_1231_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite(v___x_1229_, v___x_1230_, v_thenSeq_1210_, v_elseSeq_1211_, v_dec_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_);
return v___x_1231_;
}
}
else
{
lean_object* v___x_1232_; lean_object* v___x_1233_; 
lean_dec(v___x_1225_);
v___x_1232_ = l_Lean_Syntax_getArg(v___x_1206_, v___x_1209_);
lean_dec(v___x_1206_);
v___x_1233_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabIte(v___x_1232_, v_thenSeq_1210_, v_elseSeq_1211_, v_dec_1212_, v___y_1213_, v___y_1214_, v___y_1215_, v___y_1216_, v___y_1217_, v___y_1218_, v___y_1219_);
return v___x_1233_;
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___lam__0___boxed(lean_object** _args){
lean_object* v___x_1234_ = _args[0];
lean_object* v___x_1235_ = _args[1];
lean_object* v___x_1236_ = _args[2];
lean_object* v___x_1237_ = _args[3];
lean_object* v___x_1238_ = _args[4];
lean_object* v___x_1239_ = _args[5];
lean_object* v___x_1240_ = _args[6];
lean_object* v_thenSeq_1241_ = _args[7];
lean_object* v_elseSeq_1242_ = _args[8];
lean_object* v_dec_1243_ = _args[9];
lean_object* v___y_1244_ = _args[10];
lean_object* v___y_1245_ = _args[11];
lean_object* v___y_1246_ = _args[12];
lean_object* v___y_1247_ = _args[13];
lean_object* v___y_1248_ = _args[14];
lean_object* v___y_1249_ = _args[15];
lean_object* v___y_1250_ = _args[16];
lean_object* v___y_1251_ = _args[17];
_start:
{
lean_object* v_res_1252_; 
v_res_1252_ = l_Lean_Elab_Do_elabDoIf___lam__0(v___x_1234_, v___x_1235_, v___x_1236_, v___x_1237_, v___x_1238_, v___x_1239_, v___x_1240_, v_thenSeq_1241_, v_elseSeq_1242_, v_dec_1243_, v___y_1244_, v___y_1245_, v___y_1246_, v___y_1247_, v___y_1248_, v___y_1249_, v___y_1250_);
lean_dec(v___y_1250_);
lean_dec_ref(v___y_1249_);
lean_dec(v___y_1248_);
lean_dec_ref(v___y_1247_);
lean_dec(v___y_1246_);
lean_dec_ref(v___y_1245_);
lean_dec_ref(v___y_1244_);
lean_dec(v___x_1240_);
lean_dec(v___x_1239_);
lean_dec(v___x_1238_);
return v_res_1252_;
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf(lean_object* v_stx_1253_, lean_object* v_dec_1254_, lean_object* v_a_1255_, lean_object* v_a_1256_, lean_object* v_a_1257_, lean_object* v_a_1258_, lean_object* v_a_1259_, lean_object* v_a_1260_, lean_object* v_a_1261_){
_start:
{
lean_object* v___x_1263_; lean_object* v___x_1264_; lean_object* v___x_1265_; lean_object* v___x_1266_; uint8_t v___x_1267_; 
v___x_1263_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__0));
v___x_1264_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__1));
v___x_1265_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__2));
v___x_1266_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8));
lean_inc(v_stx_1253_);
v___x_1267_ = l_Lean_Syntax_isOfKind(v_stx_1253_, v___x_1266_);
if (v___x_1267_ == 0)
{
lean_object* v___x_1268_; 
lean_dec_ref(v_dec_1254_);
lean_dec(v_stx_1253_);
v___x_1268_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_1268_;
}
else
{
lean_object* v___x_1269_; lean_object* v___x_1270_; lean_object* v___x_1271_; uint8_t v___x_1272_; 
v___x_1269_ = lean_unsigned_to_nat(0u);
v___x_1270_ = lean_unsigned_to_nat(4u);
v___x_1271_ = l_Lean_Syntax_getArg(v_stx_1253_, v___x_1270_);
v___x_1272_ = l_Lean_Syntax_matchesNull(v___x_1271_, v___x_1269_);
if (v___x_1272_ == 0)
{
lean_object* v___x_1273_; 
lean_dec_ref(v_dec_1254_);
lean_dec(v_stx_1253_);
v___x_1273_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_1273_;
}
else
{
lean_object* v___x_1274_; lean_object* v___x_1275_; lean_object* v___x_1276_; uint8_t v___x_1277_; 
v___x_1274_ = lean_unsigned_to_nat(2u);
v___x_1275_ = lean_unsigned_to_nat(5u);
v___x_1276_ = l_Lean_Syntax_getArg(v_stx_1253_, v___x_1275_);
lean_inc(v___x_1276_);
v___x_1277_ = l_Lean_Syntax_matchesNull(v___x_1276_, v___x_1274_);
if (v___x_1277_ == 0)
{
lean_object* v___x_1278_; 
lean_dec(v___x_1276_);
lean_dec_ref(v_dec_1254_);
lean_dec(v_stx_1253_);
v___x_1278_ = l_Lean_Elab_throwUnsupportedSyntax___at___00__private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf_elabDite_spec__0___redArg();
return v___x_1278_;
}
else
{
lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v_thenSeq_1282_; lean_object* v_elseSeq_1283_; lean_object* v___f_1284_; lean_object* v___x_1285_; 
v___x_1279_ = lean_unsigned_to_nat(1u);
v___x_1280_ = l_Lean_Syntax_getArg(v_stx_1253_, v___x_1279_);
v___x_1281_ = lean_unsigned_to_nat(3u);
v_thenSeq_1282_ = l_Lean_Syntax_getArg(v_stx_1253_, v___x_1281_);
lean_dec(v_stx_1253_);
v_elseSeq_1283_ = l_Lean_Syntax_getArg(v___x_1276_, v___x_1279_);
lean_dec(v___x_1276_);
lean_inc(v_elseSeq_1283_);
lean_inc(v_thenSeq_1282_);
v___f_1284_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoIf___lam__0___boxed), 18, 9);
lean_closure_set(v___f_1284_, 0, v___x_1263_);
lean_closure_set(v___f_1284_, 1, v___x_1264_);
lean_closure_set(v___f_1284_, 2, v___x_1265_);
lean_closure_set(v___f_1284_, 3, v___x_1280_);
lean_closure_set(v___f_1284_, 4, v___x_1269_);
lean_closure_set(v___f_1284_, 5, v___x_1274_);
lean_closure_set(v___f_1284_, 6, v___x_1279_);
lean_closure_set(v___f_1284_, 7, v_thenSeq_1282_);
lean_closure_set(v___f_1284_, 8, v_elseSeq_1283_);
v___x_1285_ = l_Lean_Elab_Do_inferControlInfoSeq(v_thenSeq_1282_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1285_) == 0)
{
lean_object* v_a_1286_; lean_object* v___x_1287_; 
v_a_1286_ = lean_ctor_get(v___x_1285_, 0);
lean_inc(v_a_1286_);
lean_dec_ref_known(v___x_1285_, 1);
v___x_1287_ = l_Lean_Elab_Do_inferControlInfoSeq(v_elseSeq_1283_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
if (lean_obj_tag(v___x_1287_) == 0)
{
lean_object* v_a_1288_; lean_object* v___x_1289_; lean_object* v___x_1290_; 
v_a_1288_ = lean_ctor_get(v___x_1287_, 0);
lean_inc(v_a_1288_);
lean_dec_ref_known(v___x_1287_, 1);
v___x_1289_ = l_Lean_Elab_Do_ControlInfo_alternative(v_a_1286_, v_a_1288_);
v___x_1290_ = l_Lean_Elab_Do_DoElemCont_withDuplicableCont(v_dec_1254_, v___x_1289_, v___f_1284_, v_a_1255_, v_a_1256_, v_a_1257_, v_a_1258_, v_a_1259_, v_a_1260_, v_a_1261_);
return v___x_1290_;
}
else
{
lean_object* v_a_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1298_; 
lean_dec(v_a_1286_);
lean_dec_ref(v___f_1284_);
lean_dec_ref(v_dec_1254_);
v_a_1291_ = lean_ctor_get(v___x_1287_, 0);
v_isSharedCheck_1298_ = !lean_is_exclusive(v___x_1287_);
if (v_isSharedCheck_1298_ == 0)
{
v___x_1293_ = v___x_1287_;
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_a_1291_);
lean_dec(v___x_1287_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1298_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v___x_1296_; 
if (v_isShared_1294_ == 0)
{
v___x_1296_ = v___x_1293_;
goto v_reusejp_1295_;
}
else
{
lean_object* v_reuseFailAlloc_1297_; 
v_reuseFailAlloc_1297_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1297_, 0, v_a_1291_);
v___x_1296_ = v_reuseFailAlloc_1297_;
goto v_reusejp_1295_;
}
v_reusejp_1295_:
{
return v___x_1296_;
}
}
}
}
else
{
lean_object* v_a_1299_; lean_object* v___x_1301_; uint8_t v_isShared_1302_; uint8_t v_isSharedCheck_1306_; 
lean_dec_ref(v___f_1284_);
lean_dec(v_elseSeq_1283_);
lean_dec_ref(v_dec_1254_);
v_a_1299_ = lean_ctor_get(v___x_1285_, 0);
v_isSharedCheck_1306_ = !lean_is_exclusive(v___x_1285_);
if (v_isSharedCheck_1306_ == 0)
{
v___x_1301_ = v___x_1285_;
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
else
{
lean_inc(v_a_1299_);
lean_dec(v___x_1285_);
v___x_1301_ = lean_box(0);
v_isShared_1302_ = v_isSharedCheck_1306_;
goto v_resetjp_1300_;
}
v_resetjp_1300_:
{
lean_object* v___x_1304_; 
if (v_isShared_1302_ == 0)
{
v___x_1304_ = v___x_1301_;
goto v_reusejp_1303_;
}
else
{
lean_object* v_reuseFailAlloc_1305_; 
v_reuseFailAlloc_1305_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1305_, 0, v_a_1299_);
v___x_1304_ = v_reuseFailAlloc_1305_;
goto v_reusejp_1303_;
}
v_reusejp_1303_:
{
return v___x_1304_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* l_Lean_Elab_Do_elabDoIf___boxed(lean_object* v_stx_1307_, lean_object* v_dec_1308_, lean_object* v_a_1309_, lean_object* v_a_1310_, lean_object* v_a_1311_, lean_object* v_a_1312_, lean_object* v_a_1313_, lean_object* v_a_1314_, lean_object* v_a_1315_, lean_object* v_a_1316_){
_start:
{
lean_object* v_res_1317_; 
v_res_1317_ = l_Lean_Elab_Do_elabDoIf(v_stx_1307_, v_dec_1308_, v_a_1309_, v_a_1310_, v_a_1311_, v_a_1312_, v_a_1313_, v_a_1314_, v_a_1315_);
lean_dec(v_a_1315_);
lean_dec_ref(v_a_1314_);
lean_dec(v_a_1313_);
lean_dec_ref(v_a_1312_);
lean_dec(v_a_1311_);
lean_dec_ref(v_a_1310_);
lean_dec_ref(v_a_1309_);
return v_res_1317_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1(){
_start:
{
lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; 
v___x_1325_ = l_Lean_Elab_Do_doElemElabAttribute;
v___x_1326_ = ((lean_object*)(l___private_Init_Data_Array_Basic_0__Array_forIn_x27Unsafe_loop___at___00Lean_Elab_Do_expandDoIf_spec__3___closed__8));
v___x_1327_ = ((lean_object*)(l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___closed__1));
v___x_1328_ = lean_alloc_closure((void*)(l_Lean_Elab_Do_elabDoIf___boxed), 10, 0);
v___x_1329_ = l_Lean_KeyedDeclsAttribute_addBuiltin___redArg(v___x_1325_, v___x_1326_, v___x_1327_, v___x_1328_);
return v___x_1329_;
}
}
LEAN_EXPORT lean_object* l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1___boxed(lean_object* v_a_1330_){
_start:
{
lean_object* v_res_1331_; 
v_res_1331_ = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1();
return v_res_1331_;
}
}
lean_object* runtime_initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* runtime_initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_runtime_initialized = false;
LEAN_EXPORT lean_object* runtime_initialize_Lean_Elab_BuiltinDo_If(uint8_t builtin) {
lean_object * res;
if (_G_runtime_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_runtime_initialized = true;
lean_initialize_runtime_module();
res = runtime_initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_expandDoIf___regBuiltin_Lean_Elab_Do_expandDoIf_docString__3();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = l___private_Lean_Elab_BuiltinDo_If_0__Lean_Elab_Do_elabDoIf___regBuiltin_Lean_Elab_Do_elabDoIf__1();
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* runtime_initialize_Lean_Parser_Do(uint8_t builtin);
static bool _G_meta_initialized = false;
LEAN_EXPORT lean_object* meta_initialize_Lean_Elab_BuiltinDo_If(uint8_t builtin) {
lean_object * res;
if (_G_meta_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_meta_initialized = true;
res = runtime_initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
lean_object* initialize_Lean_Elab_Do_Basic(uint8_t builtin);
lean_object* initialize_Lean_Parser_Do(uint8_t builtin);
lean_object* initialize_Lean_Elab_BuiltinDo_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_Lean_Elab_BuiltinDo_If(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Lean_Elab_Do_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Parser_Do(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Elab_BuiltinDo_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = runtime_initialize_Lean_Elab_BuiltinDo_If(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = meta_initialize_Lean_Elab_BuiltinDo_If(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return initialize_Lean_Elab_BuiltinDo_If(builtin);
}
#ifdef __cplusplus
}
#endif
